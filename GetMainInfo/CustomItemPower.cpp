#include "stdafx.h"
#include "CustomItemPower.h"
#include "MemScript.h"
//#include "InfoLog.h"

CCustomItemInfo gCustomItemInfo;

CCustomItemInfo::CCustomItemInfo() // OK
{
	this->Init();
}

CCustomItemInfo::~CCustomItemInfo() // OK
{

}

void CCustomItemInfo::Init() // OK
{
	for(int n=0;n < MAX_CUSTOM_ITEM_INFO;n++)
	{
		this->m_CustomItemInfoEx[n].Index = -1;
	}
}

void CCustomItemInfo::Load(char* path)
{
	CMemScript* lpMemScript = new CMemScript;

	if(lpMemScript == 0)
	{
		printf(MEM_SCRIPT_ALLOC_ERROR,path);
		return;
	}

	if(lpMemScript->SetBuffer(path) == 0)
	{
		printf(lpMemScript->GetLastError());
		delete lpMemScript;
		return;
	}

	this->Init();

	try
	{
		while(true)
		{
			if(lpMemScript->GetToken() == TOKEN_END)
			{
				break;
			}

			if(strcmp("end",lpMemScript->GetString()) == 0)
			{
				break;
			}

			CUSTOM_ITEM_INFO_EX info;

			memset(&info,0,sizeof(info));

			static int CustomItemIndexCount = 0;

			info.Index = CustomItemIndexCount++;

			info.ItemType = lpMemScript->GetNumber();

			info.ItemIndex = lpMemScript->GetAsNumber();

			info.DamageMin = lpMemScript->GetAsNumber();

			info.DamageMax = lpMemScript->GetAsNumber();

			info.Defense = lpMemScript->GetAsNumber();

			info.MagicDefense = lpMemScript->GetAsNumber();

//			gInfoLog.Output(LOG_KILLERS,"Agregando Item (%d, %d) AtaqueMin: %d AtaqueMax: %d Defense: %d MagicDefense: %d",info.ItemType,info.ItemIndex,info.DamageMin,info.DamageMax,info.Defense,info.MagicDefense);

			this->SetInfo(info);
		}
	}
	catch(...)
	{
		printf(lpMemScript->GetLastError());
	}

	delete lpMemScript;
}

void CCustomItemInfo::SetInfo(CUSTOM_ITEM_INFO_EX info) // OK
{
	if(info.Index < 0 || info.Index >= MAX_CUSTOM_ITEM_INFO)
	{
		return;
	}

	this->m_CustomItemInfoEx[info.Index] = info;
}