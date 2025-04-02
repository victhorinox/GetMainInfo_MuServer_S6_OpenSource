#include "stdafx.h"
#include "..\..\Util\CCRC32.H"
#include "CustomBuyVip.h"
#include "CustomCommandInfo.h"
#include "CustomEventTimeText.h"
#include "CustomGloves.h"
#include "CustomItem.h"
#include "CustomItemDescription.h"
#include "CustomJewel.h"
#include "CustomMessage.h"
#include "CustomMonster.h"
#include "CustomNpcName.h"
#include "CustomWing.h"
#include "CustomWIngEffect.h"
#include "CustomEffectDynamic.h"
#include "SmokeEffect.h"
#include "ThemidaSDK.h"
#include "Fog.h"
#include "CustomBow.h"
#include "CustomCloak.h"
#include "CustomPet.h"
#include "CustomMonsterGlow.h"
#include "CustomPetEffect.h"
#include "CustomPetGlow.h"
#include "CustomItemPower.h"
#include "CustomMonsterEffect.h"
#include "CustomItemTooltip.h"
#include "CustomItemDisableGlow.h"

struct MAIN_FILE_INFO
{
	BYTE LauncherType; 
	char LauncherName[32];
	char CustomerName[32];
	char IpAddress[32];
	WORD IpAddressPort;
	char ClientVersion[8];
	char ClientSerial[17];
	char WindowName[32];
	char ScreenShotPath[50];
	char ClientName[32];
	char PluginName1[32];
	char PluginName2[32];
	char PluginName3[32];
	char PluginName4[32];
	char PluginName5[32];
	char CameraName[32];
	DWORD ClientCRC32;
	DWORD Plugin1CRC32;
	DWORD Plugin2CRC32;
	DWORD Plugin3CRC32;
	DWORD Plugin4CRC32;
	DWORD Plugin5CRC32;
	DWORD CameraCRC32;
	DWORD HelperActiveAlert;
	DWORD HelperActiveLevel;
	DWORD DWMaxAttackSpeed;
	DWORD DKMaxAttackSpeed;
	DWORD FEMaxAttackSpeed;
	DWORD MGMaxAttackSpeed;
	DWORD DLMaxAttackSpeed;
	DWORD SUMaxAttackSpeed;
	DWORD RFMaxAttackSpeed;
	DWORD ReconnectTime;
	WORD RemoveClass;
	WORD RankUserType;
	WORD DisableTree; 
	WORD CsSkill; 
	WORD DisableReflectEffect;
	WORD EnableVipShop;
	WORD VipTypes;
	WORD PrintLogo;
	WORD CustomMenuSwitch;
	WORD CustomMenuType;
	WORD EnableEventTimeButton;
	WORD EnableVipShopButton;
	WORD EnableRankingButton;
	WORD EnableCommandButton;
	WORD EnableOptionButton;
	WORD EnableJewelBankButton;
	WORD EnableCoinStatus;
	WORD EnableShopValueSystem;
	WORD CustomStoreEnableJoB;
	WORD CustomStoreEnableJoS;
	WORD CustomStoreEnableJoC;
	WORD CustomStoreEnableCoin1;
	WORD CustomStoreEnableCoin2;
	WORD CustomStoreEnableCoin3;
	WORD CustomOffStoreEnable;
	WORD CustomMonsterEnable;
	WORD DisablePartyHpBar;
	WORD RankUserShowOverHead;
	WORD RankUserOnlyOnSafeZone;
	WORD RankUserShowReset;
	WORD RankUserShowMasterReset;
	WORD RankUserNeedAltKey;
	WORD CustomGlovesEnable;
	WORD CustomInterfaceType;
	WORD CustomInterfaceHelperBar;
	WORD PingTest;
	WORD EnableCustomBow;
	WORD CustomCloakEnable;
	WORD CustomPetEnable;
	WORD DisableMoveList;
	WORD DisableSet15Effect;
	WORD FpsLimitEnable;
	WORD LimitFPS;
	WORD CustomAdvancedStausEnable;
	WORD CustomJewelBankEnable;
	WORD CustomAncientSwitch;
	WORD AllowHelperInventory;
	WORD DisableCashShop;
	WORD DisableMasterSkillTree;
	WORD DisableCommandWindow;
	WORD CustomMiniMapType;
	WORD DisableQuest;
	WORD DisablePet;
	WORD DisableGens;
	WORD DisableFriend;
	WORD DisableExpandedInventory;
	WORD DisableExpandedWarehouse;
	WORD DisablePersonalShop;
	WORD CharacterDeleteMaxLevel;
	WORD DisableMasterEvents;
	WORD DisableClickEffect;
	WORD DisableSetItemOption;
	WORD DisableSocketItemOption;
	WORD Disable380ItemOption;
	WORD DisableBattleZone;
	WORD MonsterLifeBarType;
	WORD GMT_TIME;
	WORD CustomServerNameEnable;
	WORD CustomClientIconType;
	WORD SCAnimation;
	WORD SCSlot1Animation;
	WORD SCSlot2Animation;
	WORD SCSlot3Animation;
	WORD SCSlot4Animation;
	WORD SCSlot5Animation;
	char ServerNameA[32];
	char ServerNameB[32];
	char ServerNameC[32];
	char ServerNameD[32];
	WORD RemoveMuErrorLog;
	WORD SelectLoginThemeType;
	WORD SelectCharacterType;
	WORD SelectCharacterTurnAround;
	WORD SelectCharacterTurnAroundSpeed;
	WORD CustomBloodCastleWindow;
	WORD EnableItemNameColor;
	WORD MaxGameInstances;
	WORD SocketItemAcceptHarmony;
	WORD ImgsMapNameType;
	WORD BuffIconType;
	WORD NameStyle;
	WORD ServerNews;
	WORD CustomMainWindow;
	WORD SkillTreeType;
	CUSTOM_MESSAGE_INFO EngCustomMessageInfo[MAX_CUSTOM_MESSAGE];
	CUSTOM_MESSAGE_INFO PorCustomMessageInfo[MAX_CUSTOM_MESSAGE];
	CUSTOM_MESSAGE_INFO SpnCustomMessageInfo[MAX_CUSTOM_MESSAGE];
	CUSTOM_JEWEL_INFO CustomJewelInfo[MAX_CUSTOM_JEWEL];
	CUSTOM_WING_INFO CustomWingInfo[MAX_CUSTOM_WING];
	CUSTOM_ITEM_INFO CustomItemInfo[MAX_CUSTOM_ITEM];
	CUSTOM_WING_EFFECT_INFO CustomWingEffectInfo[MAX_CUSTOM_WING_EFFECT];
	DYNAMIC_WING_EFFECT_INFO DynamicWingEffectInfo[MAX_DYNAMIC_WING_EFFECT];
	CUSTOM_BUYVIP_INFO CustomBuyVipInfo[MAX_CUSTOM_BUYVIP];
	CUSTOM_COMMAND_INFO CustomCommandInfo[MAX_CUSTOM_COMMAND];
	CUSTOM_EVENT_INFO CustomEventInfo[MAX_EVENTTIME];
	CUSTOM_DESCRIPTION_INFO CustomDescriptionInfo[MAX_DESCRIPTION_ITEM];
	CUSTOM_SMOKEEFFECT CustomSmokeEffect[MAX_SMOKE_ITEMS];
	CUSTOM_FOG CustomFog[MAX_FOG];
	CUSTOMMONSTER_DATA CustomMonsters[MAX_CUSTOMMONSTERS];
	NPCNAME_DATA CustomNPCName[MAX_CUSTOM_NPCNAME];
	CUSTOM_RF_GLOVES CustomGloves[MAX_CUSTOM_GLOVES];
	CUSTOM_BOW_INFO CustomBowInfo[MAX_CUSTOM_BOW];
	CUSTOM_PET_INFO CustomPetInfo[MAX_PET_ITEM];
	CUSTOMCLOAK_DATA m_CustomCloak[MAX_CUSTOMCLOAK];
	CUSTOM_MONSTERGLOW_INFO m_CustomMonsterGlow[MAX_CUSTOM_MONSTERGLOW];
	CUSTOM_GLOW_INFO m_CustomMonsterbrightness[MAX_CUSTOM_MONSTERGLOW];
	xMonsterEffect m_CustomMonsterEffect[ MAX_EFFECT_MONSTER ];
	PET_EFFECT_CUSTOM m_PetCEffectBMD[max_ceffect];
	RENDER_MESH RenderMeshPet[MAX_RENDER_MESH];
	CUSTOM_ITEM_INFO_EX m_CustomItemInfo_Ex[MAX_CUSTOM_ITEM_INFO];
	nInformation m_TRSTooltipData[MaxLine];
	nText m_TRSTooltipText[MaxLine];
	JCItemnoGlow m_JCWRemoveGlow[MAX_NOGLOW];
};

int _tmain(int argc,_TCHAR* argv[]) // OK
{
	CLEAR_START

	ENCODE_START

	MAIN_FILE_INFO info;

	memset(&info,0,sizeof(info));

	info.LauncherType = GetPrivateProfileInt("MainInfo","LauncherType",0,".\\MainInfo.ini");

	GetPrivateProfileString("MainInfo","LauncherName","XTLauncherExecutable",info.LauncherName,sizeof(info.LauncherName),".\\MainInfo.ini");

	info.IpAddressPort = GetPrivateProfileInt("MainInfo","IpAddressPort",44405,".\\MainInfo.ini");

	GetPrivateProfileString("MainInfo","CustomerName","",info.CustomerName,sizeof(info.CustomerName),".\\MainInfo.ini");

	GetPrivateProfileString("MainInfo","IpAddress","",info.IpAddress,sizeof(info.IpAddress),".\\MainInfo.ini");

	GetPrivateProfileString("MainInfo","ClientVersion","",info.ClientVersion,sizeof(info.ClientVersion),".\\MainInfo.ini");

	GetPrivateProfileString("MainInfo","ClientSerial","",info.ClientSerial,sizeof(info.ClientSerial),".\\MainInfo.ini");

	GetPrivateProfileString("MainInfo","WindowName","",info.WindowName,sizeof(info.WindowName),".\\MainInfo.ini");

	GetPrivateProfileString("MainInfo","ScreenShotPath","",info.ScreenShotPath,sizeof(info.ScreenShotPath),".\\MainInfo.ini");

	GetPrivateProfileString("MainInfo","ClientName","",info.ClientName,sizeof(info.ClientName),".\\MainInfo.ini");

	GetPrivateProfileString("MainInfo","PluginName1","",info.PluginName1,sizeof(info.PluginName1),".\\MainInfo.ini");

	GetPrivateProfileString("MainInfo","PluginName2","",info.PluginName2,sizeof(info.PluginName2),".\\MainInfo.ini");

	GetPrivateProfileString("MainInfo","PluginName3","",info.PluginName3,sizeof(info.PluginName3),".\\MainInfo.ini");

	GetPrivateProfileString("MainInfo","PluginName4","",info.PluginName4,sizeof(info.PluginName4),".\\MainInfo.ini");

	GetPrivateProfileString("MainInfo","PluginName5","",info.PluginName5,sizeof(info.PluginName5),".\\MainInfo.ini");

	GetPrivateProfileString("MainInfo","CameraName","",info.CameraName,sizeof(info.CameraName),".\\MainInfo.ini");

	info.HelperActiveAlert = GetPrivateProfileInt("HelperInfo","HelperActiveAlert",0,".\\MainInfo.ini");

	info.HelperActiveLevel = GetPrivateProfileInt("HelperInfo","HelperActiveLevel",80,".\\MainInfo.ini");

	info.DWMaxAttackSpeed = GetPrivateProfileInt("CharacterInfo","DWMaxAttackSpeed",65535,".\\MainInfo.ini");

	info.DKMaxAttackSpeed = GetPrivateProfileInt("CharacterInfo","DKMaxAttackSpeed",65535,".\\MainInfo.ini");

	info.FEMaxAttackSpeed = GetPrivateProfileInt("CharacterInfo","FEMaxAttackSpeed",65535,".\\MainInfo.ini");

	info.MGMaxAttackSpeed = GetPrivateProfileInt("CharacterInfo","MGMaxAttackSpeed",65535,".\\MainInfo.ini");

	info.DLMaxAttackSpeed = GetPrivateProfileInt("CharacterInfo","DLMaxAttackSpeed",65535,".\\MainInfo.ini");

	info.SUMaxAttackSpeed = GetPrivateProfileInt("CharacterInfo","SUMaxAttackSpeed",65535,".\\MainInfo.ini");

	info.RFMaxAttackSpeed = GetPrivateProfileInt("CharacterInfo","RFMaxAttackSpeed",65535,".\\MainInfo.ini");

	info.ReconnectTime = GetPrivateProfileInt("ReconnectInfo","ReconnectTime",0,".\\MainInfo.ini");

	info.RemoveClass = GetPrivateProfileInt("Custom","RemoveClass",0,".\\MainInfo.ini");

	info.RankUserType = GetPrivateProfileInt("Custom","RankUserType",0,".\\MainInfo.ini");

	info.DisableTree = GetPrivateProfileInt("Custom","DisableMasterSkillTree",0,".\\MainInfo.ini");

	info.CsSkill = GetPrivateProfileInt("Custom","EnableCsSkillsAllMaps",0,".\\MainInfo.ini");

	info.DisableReflectEffect = GetPrivateProfileInt("Custom","DisableReflectEffect",0,".\\MainInfo.ini");

	info.RankUserShowOverHead = GetPrivateProfileInt("Custom","RankUserShowOverHead",0,".\\MainInfo.ini");

	info.RankUserOnlyOnSafeZone = GetPrivateProfileInt("Custom","RankUserOnlyOnSafeZone",1,".\\MainInfo.ini");

	info.RankUserShowReset = GetPrivateProfileInt("Custom","RankUserShowReset",1,".\\MainInfo.ini");

	info.RankUserShowMasterReset = GetPrivateProfileInt("Custom","RankUserShowMasterReset",1,".\\MainInfo.ini");

	info.RankUserNeedAltKey = GetPrivateProfileInt("Custom","RankUserNeedAltKey",0,".\\MainInfo.ini");

	info.EnableVipShop = GetPrivateProfileInt("Custom","EnableVipShop",0,".\\MainInfo.ini");

	info.VipTypes = GetPrivateProfileInt("Custom","VipTypes",3,".\\MainInfo.ini");

	info.PrintLogo = GetPrivateProfileInt("Custom","PrintLogo",0,".\\MainInfo.ini");

	info.CustomMenuSwitch = GetPrivateProfileInt("Custom","CustomMenuSwitch",0,".\\MainInfo.ini");

	info.CustomMenuType = GetPrivateProfileInt("Custom","CustomMenuType",0,".\\MainInfo.ini");

	info.EnableEventTimeButton = GetPrivateProfileInt("Custom","EnableEventTimeButton",0,".\\MainInfo.ini");

	info.EnableVipShopButton = GetPrivateProfileInt("Custom","EnableVipShopButton",0,".\\MainInfo.ini");

	info.EnableRankingButton = GetPrivateProfileInt("Custom","EnableRankingButton",0,".\\MainInfo.ini");

	info.EnableCommandButton = GetPrivateProfileInt("Custom","EnableCommandButton",0,".\\MainInfo.ini");

	info.EnableJewelBankButton = GetPrivateProfileInt("Custom","EnableJewelBankButton",0,".\\MainInfo.ini");

	info.EnableOptionButton = GetPrivateProfileInt("Custom","EnableOptionButton",0,".\\MainInfo.ini");

	info.EnableCoinStatus = GetPrivateProfileInt("Custom","EnableCoinStatus",0,".\\MainInfo.ini");

	info.EnableShopValueSystem  = GetPrivateProfileInt("Custom","EnableShopValueSystem",0,".\\MainInfo.ini");

	info.CustomStoreEnableJoB  = GetPrivateProfileInt("Custom","EnableStoreBlessButtom",0,".\\MainInfo.ini");

	info.CustomStoreEnableJoS  = GetPrivateProfileInt("Custom","EnableStoreSoulButtom",0,".\\MainInfo.ini");

	info.CustomStoreEnableJoC  = GetPrivateProfileInt("Custom","EnableStoreChaosButtom",0,".\\MainInfo.ini");

	info.CustomStoreEnableCoin1  = GetPrivateProfileInt("Custom","EnableStoreCoin1Buttom",0,".\\MainInfo.ini");

	info.CustomStoreEnableCoin2  = GetPrivateProfileInt("Custom","EnableStoreCoin2Buttom",0,".\\MainInfo.ini");

	info.CustomStoreEnableCoin3  = GetPrivateProfileInt("Custom","EnableStoreCoin3Buttom",0,".\\MainInfo.ini");

	info.CustomOffStoreEnable  = GetPrivateProfileInt("Custom","EnableOffStoreButtom",0,".\\MainInfo.ini");

	info.CustomMonsterEnable  = GetPrivateProfileInt("Custom","CustomMonsterEnable",0,".\\MainInfo.ini");

	info.DisablePartyHpBar  = GetPrivateProfileInt("Custom","PartyHpBarType",0,".\\MainInfo.ini");

	info.CustomGlovesEnable  = GetPrivateProfileInt("Custom","CustomGlovesEnable",0,".\\MainInfo.ini");

	info.CustomInterfaceType  = GetPrivateProfileInt("Custom","CustomInterfaceType",0,".\\MainInfo.ini");

	info.CustomInterfaceHelperBar  = GetPrivateProfileInt("Custom","CustomInterfaceHelperBar",0,".\\MainInfo.ini");

	info.PingTest  = GetPrivateProfileInt("Custom","PingTest",0,".\\MainInfo.ini");

	info.EnableCustomBow  = GetPrivateProfileInt("Custom","CustomBowEnable",0,".\\MainInfo.ini");
	
	info.CustomCloakEnable  = GetPrivateProfileInt("Custom","CustomCloakEnable",0,".\\MainInfo.ini");
		
	info.CustomPetEnable = GetPrivateProfileInt("Custom","CustomPetEnable",0,".\\MainInfo.ini");

	info.DisableMoveList = GetPrivateProfileInt("Custom","DisableMoveList",0,".\\MainInfo.ini");

	info.DisableSet15Effect = GetPrivateProfileInt("Custom","DisableSet15Effect",0,".\\MainInfo.ini");

	info.FpsLimitEnable = GetPrivateProfileInt("Custom","FpsLimitEnable",0,".\\MainInfo.ini");

	info.LimitFPS = GetPrivateProfileInt("Custom","FpsLimit",0,".\\MainInfo.ini");

	info.CustomAncientSwitch = GetPrivateProfileInt("Custom","CustomAncientSwitch",0,".\\MainInfo.ini");

	info.CharacterDeleteMaxLevel = GetPrivateProfileInt("Custom","CharacterDeleteMaxLevel",0,".\\MainInfo.ini");
	
	//--
	
	info.SelectLoginThemeType = GetPrivateProfileInt("Custom","SelectLoginThemeType",0,".\\MainInfo.ini");

	info.SelectCharacterType  = GetPrivateProfileInt("Custom","SelectCharacterType",0,".\\MainInfo.ini");
	
	info.SelectCharacterTurnAround  = GetPrivateProfileInt("Custom","SelectCharacterTurnAround",0,".\\MainInfo.ini");
	
	info.SelectCharacterTurnAroundSpeed  = GetPrivateProfileInt("Custom","SelectCharacterTurnAroundSpeed",0,".\\MainInfo.ini");

	//--

	info.MonsterLifeBarType = GetPrivateProfileInt("Custom","CustomLifeBarType",0,".\\MainInfo.ini");

	
		
	info.DisableMasterEvents = GetPrivateProfileInt("Custom","DisableMasterEvents",0,".\\MainInfo.ini");
	
	info.DisableClickEffect = GetPrivateProfileInt("Custom","DisableClickEffect",0,".\\MainInfo.ini");
	
	info.DisableSetItemOption = GetPrivateProfileInt("Custom","DisableSetItemOption",0,".\\MainInfo.ini");
	
	info.DisableSocketItemOption = GetPrivateProfileInt("Custom","DisableSocketItemOption",0,".\\MainInfo.ini");
	
	info.Disable380ItemOption = GetPrivateProfileInt("Custom","Disable380ItemOption",0,".\\MainInfo.ini");
	
	info.DisableBattleZone = GetPrivateProfileInt("Custom","DisableBattleZone",0,".\\MainInfo.ini");
	
	info.CustomServerNameEnable  = GetPrivateProfileInt("Custom","CustomServerNameEnable",0,".\\MainInfo.ini");

	GetPrivateProfileString("CustomServerName","ServerNameA","",info.ServerNameA,sizeof(info.ServerNameA),".\\Common\\CustomServerName.txt");
	GetPrivateProfileString("CustomServerName","ServerNameB","",info.ServerNameB,sizeof(info.ServerNameB),".\\Common\\CustomServerName.txt");
	GetPrivateProfileString("CustomServerName","ServerNameC","",info.ServerNameC,sizeof(info.ServerNameC),".\\Common\\CustomServerName.txt");
	GetPrivateProfileString("CustomServerName","ServerNameD","",info.ServerNameD,sizeof(info.ServerNameD),".\\Common\\CustomServerName.txt");

	info.EnableItemNameColor  = GetPrivateProfileInt("Custom","CustomItemNameColor",0,".\\MainInfo.ini");

	info.AllowHelperInventory = GetPrivateProfileInt("Custom","AllowHelperInventory",0,".\\MainInfo.ini");

	info.DisableCashShop = GetPrivateProfileInt("Custom","DisableCashShop",0,".\\MainInfo.ini");

	info.DisableCommandWindow = GetPrivateProfileInt("Custom","DisableCommandWindow",0,".\\MainInfo.ini");

	info.CustomMiniMapType = GetPrivateProfileInt("Custom","CustomMiniMapType",0,".\\MainInfo.ini");

	info.DisableQuest = GetPrivateProfileInt("Custom","DisableQuest",0,".\\MainInfo.ini");

	info.DisablePet = GetPrivateProfileInt("Custom","DisablePet",0,".\\MainInfo.ini");

	info.DisableGens = GetPrivateProfileInt("Custom","DisableGens",0,".\\MainInfo.ini");

	info.DisableFriend = GetPrivateProfileInt("Custom","DisableFriend",0,".\\MainInfo.ini");

	info.DisableExpandedInventory = GetPrivateProfileInt("Custom","DisableExpandedInventory",0,".\\MainInfo.ini");

	info.DisableExpandedWarehouse = GetPrivateProfileInt("Custom","DisableExpandedWarehouse",0,".\\MainInfo.ini");

	info.DisablePersonalShop = GetPrivateProfileInt("Custom","DisablePersonalShop",0,".\\MainInfo.ini");

	info.GMT_TIME  = GetPrivateProfileInt("Custom","GMT_TIME",0,".\\MainInfo.ini");
	
	info.RemoveMuErrorLog  = GetPrivateProfileInt("Custom","RemoveMuErrorLog",0,".\\MainInfo.ini");

	info.CustomAdvancedStausEnable  = GetPrivateProfileInt("Custom","CustomAdvancedStausEnable",0,".\\MainInfo.ini");

	info.CustomJewelBankEnable  = GetPrivateProfileInt("Custom","CustomJewelBankEnable",0,".\\MainInfo.ini");

	info.CustomBloodCastleWindow  = GetPrivateProfileInt("Custom","CustomBloodCastleEventWindow",0,".\\MainInfo.ini");

	info.CustomClientIconType  = GetPrivateProfileInt("Custom","CustomClientIconType",0,".\\MainInfo.ini");

	//--
	
	info.SCAnimation  = GetPrivateProfileInt("Custom","SCAnimation",0,".\\MainInfo.ini");

	info.SCSlot1Animation  = GetPrivateProfileInt("Custom","SCSlot1Animation",0,".\\MainInfo.ini");

	info.SCSlot2Animation  = GetPrivateProfileInt("Custom","SCSlot2Animation",0,".\\MainInfo.ini");

	info.SCSlot3Animation  = GetPrivateProfileInt("Custom","SCSlot3Animation",0,".\\MainInfo.ini");

	info.SCSlot4Animation  = GetPrivateProfileInt("Custom","SCSlot4Animation",0,".\\MainInfo.ini");

	info.SCSlot5Animation  = GetPrivateProfileInt("Custom","SCSlot5Animation",0,".\\MainInfo.ini");

	//--

	info.MaxGameInstances  = GetPrivateProfileInt("MainInfo","MaxGameInstances",0,".\\MainInfo.ini");

	info.SocketItemAcceptHarmony  = GetPrivateProfileInt("Custom","SocketItemAcceptHarmony",0,".\\MainInfo.ini");

	info.ImgsMapNameType  = GetPrivateProfileInt("Custom","CustomImgsMapNameType",0,".\\MainInfo.ini");

	info.BuffIconType  = GetPrivateProfileInt("Custom","CustomBuffIconType",0,".\\MainInfo.ini");
	
	info.NameStyle  = GetPrivateProfileInt("Custom","NameStyle",0,".\\MainInfo.ini");
	
	info.ServerNews  = GetPrivateProfileInt("Custom","EnableServerNews",0,".\\MainInfo.ini");
	
	info.CustomMainWindow  = GetPrivateProfileInt("Custom","CustomMainWindow",0,".\\MainInfo.ini");

	info.SkillTreeType  = GetPrivateProfileInt("Custom","MasterSkillTreeType",0,".\\MainInfo.ini");

	//--
	
	gCustomBuyVip.Load("Common\\CustomBuyVip.txt");

	gCustomCommandInfo.Load("Common\\CustomCommandInfo.txt");

	gCustomEventTimeText.Load("Common\\CustomEventTimeText.txt");

	gFog.Load("Common\\CustomFog.txt");

	gCustomMessage.Load("Common\\CustomMessage.txt");

	gSmokeEffect.Load("Common\\CustomSmokeEffect.txt");

	//--

	gCustomCrossBow.Load("CustomItem\\CustomBow.txt");

	gCloak.Load("CustomItem\\CustomCloak.txt");

	gCustomWingEffect.Load("CustomItem\\CustomEffectStatic.txt");

	gDynamicWingEffect.Load("CustomItem\\CustomEffectDynamic.txt");

	gCustomGloves.Load("CustomItem\\CustomGloves.txt");

	gCustomItem.Load("CustomItem\\CustomItem.txt");

	gCustomItemInfo.Load("CustomItem\\CustomItemPower.txt");

	gCustomJewel.Load("CustomItem\\CustomJewel.txt");

	gCustomWing.Load("CustomItem\\CustomWing.txt");
	
	GInfo.Load("CustomItem\\CustomItemToolTip.txt", 1);

	GInfo.Load("CustomItem\\CustomItemTooltipText.txt", 2);

	JCRemoveGlow.Load("CustomItem\\CustomItemDisableGlow.txt");

	//gCustomPosition.Load("CustomItem\\CustomItemPosition.txt");

	//--

	gMonsters.Load("CustomMonster\\CustomMonster.txt");

	gCustomMonsterGlow.Load("CustomMonster\\CustomMonsterGlow.txt");

	JCEffectMonster.Load("CustomMonster\\CustomMonsterEffect.txt");

	gNPCName.Load("CustomMonster\\CustomNPCName.txt");

	//--

	gCustomPet2.Load("CustomPet\\CustomPet.txt");

	gCustomCEffectPet.Load("CustomPet\\CustomPetEffect.txt");

	cRender.Load("CustomPet\\CustomPetGlow.txt");

	//--

	//gCustomItemDescription.Load("CustomItemDescription.txt");

	memcpy(info.EngCustomMessageInfo,gCustomMessage.m_EngCustomMessageInfo,sizeof(info.EngCustomMessageInfo));

	memcpy(info.PorCustomMessageInfo,gCustomMessage.m_PorCustomMessageInfo,sizeof(info.PorCustomMessageInfo));

	memcpy(info.SpnCustomMessageInfo,gCustomMessage.m_SpnCustomMessageInfo,sizeof(info.SpnCustomMessageInfo));

	memcpy(info.CustomJewelInfo,gCustomJewel.m_CustomJewelInfo,sizeof(info.CustomJewelInfo));

	memcpy(info.CustomWingInfo,gCustomWing.m_CustomWingInfo,sizeof(info.CustomWingInfo));

	memcpy(info.CustomItemInfo,gCustomItem.m_CustomItemInfo,sizeof(info.CustomItemInfo));

	memcpy(info.CustomWingEffectInfo,gCustomWingEffect.m_CustomWingEffectInfo,sizeof(info.CustomWingEffectInfo));

	memcpy(info.DynamicWingEffectInfo,gDynamicWingEffect.m_DynamicWingEffectInfo,sizeof(info.DynamicWingEffectInfo));

	memcpy(info.CustomBuyVipInfo,gCustomBuyVip.m_CustomBuyVipInfo,sizeof(info.CustomBuyVipInfo));

	memcpy(info.CustomCommandInfo,gCustomCommandInfo.m_CustomCommandInfo,sizeof(info.CustomCommandInfo));

	memcpy(info.CustomEventInfo,gCustomEventTimeText.m_CustomEventInfo,sizeof(info.CustomEventInfo));

	memcpy(info.CustomDescriptionInfo,gCustomItemDescription.m_Info,sizeof(info.CustomDescriptionInfo));

	memcpy(info.CustomSmokeEffect, gSmokeEffect.m_CustomSmokeEffect, sizeof(info.CustomSmokeEffect));

	memcpy(info.CustomFog, gFog.m_CustomFog, sizeof(info.CustomFog));

	memcpy(info.CustomMonsters, gMonsters.m_Monsters, sizeof(info.CustomMonsters));

	memcpy(info.CustomNPCName, gNPCName.m_CustomNpcName, sizeof(info.CustomNPCName));

	memcpy(info.CustomGloves, gCustomGloves.m_CustomGlovesInfo, sizeof(info.CustomGloves));

	memcpy(info.CustomBowInfo, gCustomCrossBow.m_CustomBowInfo, sizeof(info.CustomBowInfo));

	memcpy(info.m_CustomCloak, gCloak.m_Cloak, sizeof(info.m_CustomCloak));

	memcpy(info.CustomPetInfo, gCustomPet2.m_CustomPetInfo, sizeof(info.CustomPetInfo));
	
	memcpy(info.m_CustomMonsterGlow, gCustomMonsterGlow.m_CustomGlowInfo, sizeof(info.m_CustomMonsterGlow));

	memcpy(info.m_CustomMonsterbrightness, gCustomMonsterGlow.m_CustombrightnessInfo, sizeof(info.m_CustomMonsterbrightness));

	memcpy(info.m_CustomMonsterEffect, JCEffectMonster.m_MonsterEffect, sizeof(info.m_CustomMonsterEffect));

	memcpy(info.m_PetCEffectBMD, gCustomCEffectPet.m_PetCEffect, sizeof(info.m_PetCEffectBMD));
	
	memcpy(info.RenderMeshPet, cRender.m_RenderMeshPet, sizeof(info.RenderMeshPet));

	memcpy(info.m_CustomItemInfo_Ex, gCustomItemInfo.m_CustomItemInfoEx, sizeof(info.m_CustomItemInfo_Ex));

	memcpy(info.m_TRSTooltipData, GInfo.n_TRSTooltipData, sizeof(info.m_TRSTooltipData));

	memcpy(info.m_TRSTooltipText, GInfo.n_TRSTooltipText, sizeof(info.m_TRSTooltipText));

	memcpy(info.m_JCWRemoveGlow, JCRemoveGlow.m_JCRemoveGlow, sizeof(info.m_JCWRemoveGlow));

	CCRC32 CRC32;

	if(CRC32.FileCRC(info.ClientName,&info.ClientCRC32,1024) == 0)
	{
		info.ClientCRC32 = 0;
	}

	if(CRC32.FileCRC(info.PluginName1,&info.Plugin1CRC32,1024) == 0)
	{
		info.Plugin1CRC32 = 0;
	}

	if(CRC32.FileCRC(info.PluginName2,&info.Plugin2CRC32,1024) == 0)
	{
		info.Plugin2CRC32 = 0;
	}

	if(CRC32.FileCRC(info.PluginName3,&info.Plugin3CRC32,1024) == 0)
	{
		info.Plugin3CRC32 = 0;
	}

	if(CRC32.FileCRC(info.PluginName4,&info.Plugin4CRC32,1024) == 0)
	{
		info.Plugin4CRC32 = 0;
	}

	if(CRC32.FileCRC(info.PluginName5,&info.Plugin5CRC32,1024) == 0)
	{
		info.Plugin5CRC32 = 0;
	}

	if(CRC32.FileCRC(info.CameraName,&info.CameraCRC32,1024) == 0)
	{
		info.CameraCRC32 = 0;
	}

	for(int n=0;n < sizeof(MAIN_FILE_INFO);n++)
	{
		((BYTE*)&info)[n] ^= (BYTE)(0xDA^LOBYTE(n));
		((BYTE*)&info)[n] -= (BYTE)(0x95^HIBYTE(n));
	}

	HANDLE file = CreateFile("main.premium",GENERIC_WRITE,FILE_SHARE_READ,0,CREATE_ALWAYS,FILE_ATTRIBUTE_ARCHIVE,0);

	if(file == INVALID_HANDLE_VALUE)
	{
		return 0;
	}

	DWORD OutSize = 0;

	if(WriteFile(file,&info,sizeof(MAIN_FILE_INFO),&OutSize,0) == 0)
	{
		CloseHandle(file);
		return 0;
	}

	CloseHandle(file);

	ENCODE_END

	CLEAR_END

	return 0;
}
