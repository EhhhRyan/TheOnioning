// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UUEGameJoltAPI;
struct FScoreTableInfo;
struct FScoreInfo;
struct FTrophyInfo;
struct FUserInfo;
#ifdef GAMEJOLTPLUGIN_UEGameJoltAPI_generated_h
#error "UEGameJoltAPI.generated.h already included, missing '#pragma once' in UEGameJoltAPI.h"
#endif
#define GAMEJOLTPLUGIN_UEGameJoltAPI_generated_h

static void FOnFailed_DelegateWrapper(const FMulticastScriptDelegate& OnFailed);
static void FOnGetResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetResult);


#define PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_111_GENERATED_BODY \
	friend GAMEJOLTPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FScoreTableInfo(); \
	GAMEJOLTPLUGIN_API static class UScriptStruct* StaticStruct();


#define PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_89_GENERATED_BODY \
	friend GAMEJOLTPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FScoreInfo(); \
	GAMEJOLTPLUGIN_API static class UScriptStruct* StaticStruct();


#define PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_70_GENERATED_BODY \
	friend GAMEJOLTPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FTrophyInfo(); \
	GAMEJOLTPLUGIN_API static class UScriptStruct* StaticStruct();


#define PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_49_GENERATED_BODY \
	friend GAMEJOLTPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FUserInfo(); \
	GAMEJOLTPLUGIN_API static class UScriptStruct* StaticStruct();


#define PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_17_DELEGATE \
static inline void FOnFailed_DelegateWrapper(const FMulticastScriptDelegate& OnFailed) \
{ \
	OnFailed.ProcessMulticastDelegate<UObject>(NULL); \
}


#define PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_14_DELEGATE \
static inline void FOnGetResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetResult) \
{ \
	OnGetResult.ProcessMulticastDelegate<UObject>(NULL); \
}




#define PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_128_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIMGURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_output); \
		P_GET_PROPERTY(UStrProperty,Z_Param_url); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->GetIMGURL(Z_Param_output,Z_Param_url); \
	} \
 \
	DECLARE_FUNCTION(execChar2Hex) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_character); \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		*(FString*)Z_Param__Result=this->Char2Hex(Z_Param_character,Z_Param_index); \
	} \
 \
	DECLARE_FUNCTION(execEncodeURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_inputString); \
		P_FINISH; \
		*(FString*)Z_Param__Result=this->EncodeURL(Z_Param_inputString); \
	} \
 \
	DECLARE_FUNCTION(execGetObjectArray) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		*(TArray<UUEGameJoltAPI*>*)Z_Param__Result=this->GetObjectArray(Z_Param_WorldContextObject,Z_Param_key); \
	} \
 \
	DECLARE_FUNCTION(execGetObjectKeys) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		*(TArray<FString>*)Z_Param__Result=this->GetObjectKeys(Z_Param_WorldContextObject); \
	} \
 \
	DECLARE_FUNCTION(execGetInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		*(int32*)Z_Param__Result=this->GetInt(Z_Param_key); \
	} \
 \
	DECLARE_FUNCTION(execGetBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->GetBool(Z_Param_key); \
	} \
 \
	DECLARE_FUNCTION(execGetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		*(FString*)Z_Param__Result=this->GetString(Z_Param_key); \
	} \
 \
	DECLARE_FUNCTION(execGetObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		*(UUEGameJoltAPI**)Z_Param__Result=this->GetObject(Z_Param_key); \
	} \
 \
	DECLARE_FUNCTION(execSendRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_output); \
		P_GET_PROPERTY(UStrProperty,Z_Param_url); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SendRequest(Z_Param_output,Z_Param_url); \
	} \
 \
	DECLARE_FUNCTION(execGetScoreboardTable) \
	{ \
		P_FINISH; \
		*(TArray<FScoreTableInfo>*)Z_Param__Result=this->GetScoreboardTable(); \
	} \
 \
	DECLARE_FUNCTION(execFetchScoreboardTable) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->FetchScoreboardTable(); \
	} \
 \
	DECLARE_FUNCTION(execAddScore) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserScore); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserScore_Sort); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Scoreboard_ID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_GuestUser); \
		P_GET_PROPERTY(UStrProperty,Z_Param_extra_data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_table_id); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->AddScore(Z_Param_UserScore,Z_Param_UserScore_Sort,Z_Param_Scoreboard_ID,Z_Param_GuestUser,Z_Param_extra_data,Z_Param_table_id); \
	} \
 \
	DECLARE_FUNCTION(execGetScoreboard) \
	{ \
		P_FINISH; \
		*(TArray<FScoreInfo>*)Z_Param__Result=this->GetScoreboard(); \
	} \
 \
	DECLARE_FUNCTION(execFetchScoreboard) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ScoreLimit); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Table_id); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->FetchScoreboard(Z_Param_ScoreLimit,Z_Param_Table_id); \
	} \
 \
	DECLARE_FUNCTION(execGetTrophies) \
	{ \
		P_FINISH; \
		*(TArray<FTrophyInfo>*)Z_Param__Result=this->GetTrophies(); \
	} \
 \
	DECLARE_FUNCTION(execFetchTrophies) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_AchievedType); \
		P_GET_TARRAY(int32,Z_Param_Trophies_ID); \
		P_FINISH; \
		this->FetchTrophies(EGameJoltAchievedTrophies(Z_Param_AchievedType),Z_Param_Trophies_ID); \
	} \
 \
	DECLARE_FUNCTION(execRewardTrophy) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Trophy_ID); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->RewardTrophy(Z_Param_Trophy_ID); \
	} \
 \
	DECLARE_FUNCTION(execFetchArrayUsers) \
	{ \
		P_FINISH; \
		*(TArray<FUserInfo>*)Z_Param__Result=this->FetchArrayUsers(); \
	} \
 \
	DECLARE_FUNCTION(execFetchUser) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->FetchUser(); \
	} \
 \
	DECLARE_FUNCTION(execLogInStatus) \
	{ \
		P_FINISH; \
		this->LogInStatus(); \
	} \
 \
	DECLARE_FUNCTION(execLogOffUser) \
	{ \
		P_FINISH; \
		this->LogOffUser(); \
	} \
 \
	DECLARE_FUNCTION(execisUserAuthorize) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->isUserAuthorize(); \
	} \
 \
	DECLARE_FUNCTION(execAuthUser) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->AuthUser(); \
	} \
 \
	DECLARE_FUNCTION(execSetUserToken) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_f_UserToken); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SetUserToken(Z_Param_f_UserToken); \
	} \
 \
	DECLARE_FUNCTION(execGetUserToken) \
	{ \
		P_FINISH; \
		*(FString*)Z_Param__Result=this->GetUserToken(); \
	} \
 \
	DECLARE_FUNCTION(execSetUserName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_f_Username); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SetUserName(Z_Param_f_Username); \
	} \
 \
	DECLARE_FUNCTION(execGetUsername) \
	{ \
		P_FINISH; \
		*(FString*)Z_Param__Result=this->GetUsername(); \
	} \
 \
	DECLARE_FUNCTION(execSetGamePrivateKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_f_game_PrivateKey); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SetGamePrivateKey(Z_Param_f_game_PrivateKey); \
	} \
 \
	DECLARE_FUNCTION(execGetGamePrivateKey) \
	{ \
		P_FINISH; \
		*(FString*)Z_Param__Result=this->GetGamePrivateKey(); \
	} \
 \
	DECLARE_FUNCTION(execSetGameID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_f_game_ID); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SetGameID(Z_Param_f_game_ID); \
	} \
 \
	DECLARE_FUNCTION(execGetGameID) \
	{ \
		P_FINISH; \
		*(int32*)Z_Param__Result=this->GetGameID(); \
	} \
 \
	DECLARE_FUNCTION(execCreate) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		*(UUEGameJoltAPI**)Z_Param__Result=UUEGameJoltAPI::Create(Z_Param_WorldContextObject); \
	} \
 \
	DECLARE_FUNCTION(execFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_dataString); \
		P_FINISH; \
		this->FromString(Z_Param_dataString); \
	}


#define PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIMGURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_output); \
		P_GET_PROPERTY(UStrProperty,Z_Param_url); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->GetIMGURL(Z_Param_output,Z_Param_url); \
	} \
 \
	DECLARE_FUNCTION(execChar2Hex) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_character); \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		*(FString*)Z_Param__Result=this->Char2Hex(Z_Param_character,Z_Param_index); \
	} \
 \
	DECLARE_FUNCTION(execEncodeURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_inputString); \
		P_FINISH; \
		*(FString*)Z_Param__Result=this->EncodeURL(Z_Param_inputString); \
	} \
 \
	DECLARE_FUNCTION(execGetObjectArray) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		*(TArray<UUEGameJoltAPI*>*)Z_Param__Result=this->GetObjectArray(Z_Param_WorldContextObject,Z_Param_key); \
	} \
 \
	DECLARE_FUNCTION(execGetObjectKeys) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		*(TArray<FString>*)Z_Param__Result=this->GetObjectKeys(Z_Param_WorldContextObject); \
	} \
 \
	DECLARE_FUNCTION(execGetInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		*(int32*)Z_Param__Result=this->GetInt(Z_Param_key); \
	} \
 \
	DECLARE_FUNCTION(execGetBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->GetBool(Z_Param_key); \
	} \
 \
	DECLARE_FUNCTION(execGetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		*(FString*)Z_Param__Result=this->GetString(Z_Param_key); \
	} \
 \
	DECLARE_FUNCTION(execGetObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		*(UUEGameJoltAPI**)Z_Param__Result=this->GetObject(Z_Param_key); \
	} \
 \
	DECLARE_FUNCTION(execSendRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_output); \
		P_GET_PROPERTY(UStrProperty,Z_Param_url); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SendRequest(Z_Param_output,Z_Param_url); \
	} \
 \
	DECLARE_FUNCTION(execGetScoreboardTable) \
	{ \
		P_FINISH; \
		*(TArray<FScoreTableInfo>*)Z_Param__Result=this->GetScoreboardTable(); \
	} \
 \
	DECLARE_FUNCTION(execFetchScoreboardTable) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->FetchScoreboardTable(); \
	} \
 \
	DECLARE_FUNCTION(execAddScore) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserScore); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserScore_Sort); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Scoreboard_ID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_GuestUser); \
		P_GET_PROPERTY(UStrProperty,Z_Param_extra_data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_table_id); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->AddScore(Z_Param_UserScore,Z_Param_UserScore_Sort,Z_Param_Scoreboard_ID,Z_Param_GuestUser,Z_Param_extra_data,Z_Param_table_id); \
	} \
 \
	DECLARE_FUNCTION(execGetScoreboard) \
	{ \
		P_FINISH; \
		*(TArray<FScoreInfo>*)Z_Param__Result=this->GetScoreboard(); \
	} \
 \
	DECLARE_FUNCTION(execFetchScoreboard) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ScoreLimit); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Table_id); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->FetchScoreboard(Z_Param_ScoreLimit,Z_Param_Table_id); \
	} \
 \
	DECLARE_FUNCTION(execGetTrophies) \
	{ \
		P_FINISH; \
		*(TArray<FTrophyInfo>*)Z_Param__Result=this->GetTrophies(); \
	} \
 \
	DECLARE_FUNCTION(execFetchTrophies) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_AchievedType); \
		P_GET_TARRAY(int32,Z_Param_Trophies_ID); \
		P_FINISH; \
		this->FetchTrophies(EGameJoltAchievedTrophies(Z_Param_AchievedType),Z_Param_Trophies_ID); \
	} \
 \
	DECLARE_FUNCTION(execRewardTrophy) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Trophy_ID); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->RewardTrophy(Z_Param_Trophy_ID); \
	} \
 \
	DECLARE_FUNCTION(execFetchArrayUsers) \
	{ \
		P_FINISH; \
		*(TArray<FUserInfo>*)Z_Param__Result=this->FetchArrayUsers(); \
	} \
 \
	DECLARE_FUNCTION(execFetchUser) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->FetchUser(); \
	} \
 \
	DECLARE_FUNCTION(execLogInStatus) \
	{ \
		P_FINISH; \
		this->LogInStatus(); \
	} \
 \
	DECLARE_FUNCTION(execLogOffUser) \
	{ \
		P_FINISH; \
		this->LogOffUser(); \
	} \
 \
	DECLARE_FUNCTION(execisUserAuthorize) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->isUserAuthorize(); \
	} \
 \
	DECLARE_FUNCTION(execAuthUser) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->AuthUser(); \
	} \
 \
	DECLARE_FUNCTION(execSetUserToken) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_f_UserToken); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SetUserToken(Z_Param_f_UserToken); \
	} \
 \
	DECLARE_FUNCTION(execGetUserToken) \
	{ \
		P_FINISH; \
		*(FString*)Z_Param__Result=this->GetUserToken(); \
	} \
 \
	DECLARE_FUNCTION(execSetUserName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_f_Username); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SetUserName(Z_Param_f_Username); \
	} \
 \
	DECLARE_FUNCTION(execGetUsername) \
	{ \
		P_FINISH; \
		*(FString*)Z_Param__Result=this->GetUsername(); \
	} \
 \
	DECLARE_FUNCTION(execSetGamePrivateKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_f_game_PrivateKey); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SetGamePrivateKey(Z_Param_f_game_PrivateKey); \
	} \
 \
	DECLARE_FUNCTION(execGetGamePrivateKey) \
	{ \
		P_FINISH; \
		*(FString*)Z_Param__Result=this->GetGamePrivateKey(); \
	} \
 \
	DECLARE_FUNCTION(execSetGameID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_f_game_ID); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SetGameID(Z_Param_f_game_ID); \
	} \
 \
	DECLARE_FUNCTION(execGetGameID) \
	{ \
		P_FINISH; \
		*(int32*)Z_Param__Result=this->GetGameID(); \
	} \
 \
	DECLARE_FUNCTION(execCreate) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		*(UUEGameJoltAPI**)Z_Param__Result=UUEGameJoltAPI::Create(Z_Param_WorldContextObject); \
	} \
 \
	DECLARE_FUNCTION(execFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_dataString); \
		P_FINISH; \
		this->FromString(Z_Param_dataString); \
	}


#define PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_128_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUUEGameJoltAPI(); \
	friend GAMEJOLTPLUGIN_API class UClass* Z_Construct_UClass_UUEGameJoltAPI(); \
	public: \
	DECLARE_CLASS(UUEGameJoltAPI, UObject, COMPILED_IN_FLAGS(0), 0, GameJoltPlugin, NO_API) \
	DECLARE_SERIALIZER(UUEGameJoltAPI) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UUEGameJoltAPI*>(this); }


#define PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_128_INCLASS \
	private: \
	static void StaticRegisterNativesUUEGameJoltAPI(); \
	friend GAMEJOLTPLUGIN_API class UClass* Z_Construct_UClass_UUEGameJoltAPI(); \
	public: \
	DECLARE_CLASS(UUEGameJoltAPI, UObject, COMPILED_IN_FLAGS(0), 0, GameJoltPlugin, NO_API) \
	DECLARE_SERIALIZER(UUEGameJoltAPI) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UUEGameJoltAPI*>(this); }


#define PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_128_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUEGameJoltAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUEGameJoltAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUEGameJoltAPI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUEGameJoltAPI); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UUEGameJoltAPI(const UUEGameJoltAPI& InCopy); \
public:


#define PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_128_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUEGameJoltAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UUEGameJoltAPI(const UUEGameJoltAPI& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUEGameJoltAPI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUEGameJoltAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUEGameJoltAPI)


#define PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_125_PROLOG
#define PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_128_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_128_RPC_WRAPPERS \
	PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_128_INCLASS \
	PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_128_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_POP


#define PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_128_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
	PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_128_INCLASS_NO_PURE_DECLS \
	PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_128_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UEGameJoltAPI."); \
PRAGMA_POP


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlugInProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h


#define FOREACH_ENUM_EGAMEJOLTACHIEVEDTROPHIES(op) \
	op(EGameJoltAchievedTrophies::GJ_ACHIEVEDTROPHY_BLANK) \
	op(EGameJoltAchievedTrophies::GJ_ACHIEVEDTROPHY_USER) \
	op(EGameJoltAchievedTrophies::GJ_ACHIEVEDTROPHY_GAME) 
#define FOREACH_ENUM_EGAMEJOLTCOMPONENTENUM(op) \
	op(EGameJoltComponentEnum::GJ_USER_AUTH) \
	op(EGameJoltComponentEnum::GJ_USER_FETCH) \
	op(EGameJoltComponentEnum::GJ_SESSION_OPEN) \
	op(EGameJoltComponentEnum::GJ_SESSION_PING) \
	op(EGameJoltComponentEnum::GJ_SESSION_CLOSE) \
	op(EGameJoltComponentEnum::GJ_TROPHIES_FETCH) \
	op(EGameJoltComponentEnum::GJ_TROPHIES_ADD) \
	op(EGameJoltComponentEnum::GJ_SCORES_FETCH) \
	op(EGameJoltComponentEnum::GJ_SCORES_ADD) \
	op(EGameJoltComponentEnum::GJ_SCORES_TABLE) \
	op(EGameJoltComponentEnum::GJ_DATASTORE_FETCH) \
	op(EGameJoltComponentEnum::GJ_DATASTORE_SET) \
	op(EGameJoltComponentEnum::GJ_DATASTORE_UPDATE) \
	op(EGameJoltComponentEnum::GJ_DATASTORE_REMOVE) \
	op(EGameJoltComponentEnum::GJ_OTHER) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
