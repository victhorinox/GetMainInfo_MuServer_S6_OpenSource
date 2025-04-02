#pragma once

#define MAX_CUSTOM_ITEM_INFO 1000

struct CUSTOM_ITEM_INFO_EX
{
	int Index;
	int ItemType;
	int ItemIndex;
	int DamageMin;
	int DamageMax;
	int Defense;
	int MagicDefense;
};

class CCustomItemInfo
{
public:
	CCustomItemInfo();
	virtual ~CCustomItemInfo();
	void Init();
	void Load(char* path);
	void SetInfo(CUSTOM_ITEM_INFO_EX info);
public:
	CUSTOM_ITEM_INFO_EX m_CustomItemInfoEx[MAX_CUSTOM_ITEM_INFO];
};

extern CCustomItemInfo gCustomItemInfo;