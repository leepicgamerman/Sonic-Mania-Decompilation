#ifndef LINK_H
#define LINK_H

extern void *RSDK_GetConfirmButtonFlip;
extern void *RSDK_Unknown2;
extern void *RSDK_Unknown3;
extern void *RSDK_Unknown4;
extern void *RSDK_CheckDLC;
extern void *RSDK_Unknown5;
extern void *RSDK_UnlockAchievement;
extern void *RSDK_Unknown6;
extern void *RSDK_Unknown7;
extern void *RSDK_Unknown8;
extern void *RSDK_Unknown9;
extern void *RSDK_Unknown10;
extern void *RSDK_Unknown11;
extern void *RSDK_Unknown12;
extern void *RSDK_Unknown13;
extern void *RSDK_PossiblyGetStrings;
extern void *RSDK_Unknown14;
extern void *RSDK_Unknown15;
extern void *RSDK_Unknown16;
extern void *RSDK_Unknown17;
extern void *RSDK_Unknown18;
extern void *RSDK_Unknown19;
extern void *RSDK_Unknown20;
extern void *RSDK_Unknown21;
extern void *RSDK_Unknown22;
extern void *RSDK_Unknown23;
extern void *RSDK_Unknown24;
extern void *RSDK_Unknown25;
extern void *RSDK_Unknown26;
extern void *RSDK_Unknown27;
extern void *RSDK_Unknown28;
extern void *RSDK_LoadUserFile;
extern void *RSDK_SaveUserFile;
extern void *RSDK_DeleteUserFile;
extern void *RSDK_AddUserDBEntry;
extern int (*RSDK_OpenUserDB)(void *, void *, void *);
extern void *RSDK_SaveUserDB;
extern void *RSDK_Unknown30;
extern void *RSDK_Unknown31;
extern void *RSDK_Unknown32;
extern void *RSDK_Unknown33;
extern void *RSDK_Unknown34;
extern void *RSDK_Unknown35;
extern void *RSDK_Unknown36;
extern void *RSDK_Unknown37;
extern void *RSDK_Unknown38;
extern void *RSDK_Unknown39;
extern void *RSDK_AddUserDB;
extern void *RSDK_Unknown40;
extern void *RSDK_Unknown41;
extern void *RSDK_Unknown42;
extern void *RSDK_Unknown43;
extern void (*RSDK_ClearStruct)(void *, void *);
extern void (*RSDK_CreateObject)(Object *structPtr, const char *name, uint entitySize, uint objectSize, void (*update)(void),
                                 void (*lateUpdate)(void), void (*staticUpdate)(void), void (*draw)(void), void(__cdecl *create)(void *),
                                 void (*stageLoad)(void), void (*editorDraw)(void), void (*editorLoad)(void), void (*serialize)(void));
extern void (*RSDK_CreateObjectContainer)(Object *structPtr, const char *name, uint objectSize);
extern int (*RSDK_GetActiveObjects)(void *, void *);
extern int (*RSDK_GetObjects)(void *, void *);
extern int (*RSDK_Unknown45)(void);
extern void (*RSDK_SetEditableVar)(byte type, const char *name, byte object, int storeOffset);
extern int (*RSDK_GetObjectByID)(void *);
extern int (*RSDK_GetEntityID)(void *);
extern void *RSDK_GetEntityCount;
extern void *RSDK_Unknown47;
extern int (*RSDK_DestroyEntity)(void *, void *, void *);
extern int (*RSDK_ResetEntity)(void *, void *, void *);
extern int (*RSDK_SpawnEntity)(void *, void *, void *, void *);
extern void *RSDK_CopyEntity;
extern void *RSDK_CheckOnScreen;
extern void *RSDK_CheckPosOnScreen;
extern void *RSDK_AddDrawListRef;
extern void *RSDK_SwapDrawLayers;
extern int (*RSDK_SetDrawLayerProperties)(void *, void *, void *);
extern int (*RSDK_LoadScene)(void *, void *);
extern void *RSDK_SetGameMode;
extern int (*RSDK_Unknown53)(void *);
extern void *RSDK_CheckValidScene;
extern int (*RSDK_CheckStageFolder)(char *folderName);
extern int (*RSDK_InitSceneLoad)(void);
extern void *RSDK_GetObjectIDByName;
extern void *RSDK_Unknown57;
extern int (*RSDK_Unknown58)(void *, void *, void *, void *);
extern void *RSDK_GetSettingsValue;
extern void *RSDK_SetSettingsValue;
extern void *RSDK_ResizeWindow;
extern int (*RSDK_Sin1024)(int angle);
extern int (*RSDK_Cos1024)(int angle);
extern int (*RSDK_Sin512)(int angle);
extern int (*RSDK_Cos512)(int angle);
extern int (*RSDK_Sin256)(int angle);
extern int (*RSDK_Cos256)(int angle);
extern int (*RSDK_Rand)(int min, int max);
extern int (*RSDK_Random)(int min, int max, int *randKey);
extern void *RSDK_SetRandKey;
extern byte (*RSDK_ATan2)(int x, int y);
extern void *RSDK_MatrixMultiply;
extern void *RSDK_MatrixTranslateXYZ;
extern void *RSDK_MatrixScaleXYZ;
extern void *RSDK_MatrixRotateX;
extern void *RSDK_MatrixRotateY;
extern void *RSDK_MatrixRotateZ;
extern void *RSDK_MatrixRotateXYZ;
extern void *RSDK_SetText;
extern void *RSDK_Unknown64;
extern void *RSDK_Unknown65;
extern void *RSDK_Unknown66;
extern void *RSDK_Unknown67;
extern void *RSDK_LoadStrings;
extern void *RSDK_Unknown68;
extern void *RSDK_CopyString;
extern void *RSDK_Unknown69;
extern void *RSDK_Unknown70;
extern void *RSDK_Unknown71;
extern void (*RSDK_SetClipBounds)(byte screenID, int x1, int y1, int x2, int y2);
extern int (*RSDK_SetScreenFade)(void *, void *, void *, void *, void *);
extern short (*RSDK_LoadSpriteSheet)(const char *path, Scopes scope);
extern void (*RSDK_SetInkValue)(uint value);
extern void (*RSDK_SetPaletteMask)(uint colour);
extern void (*RSDK_SetPaletteEntry)(byte paletteID, byte index, uint colour);
extern uint (*RSDK_GetPaletteEntry)(byte paletteID, byte index);
extern void (*RSDK_SetActivePalette)(byte newActivePal, int startLine, int endLine);
extern void (*RSDK_CopyPalette)(byte sourcePalette, byte srcPaletteStart, byte destinationPalette, byte destPaletteStart, ushort count);
extern void (*RSDK_LoadPalette)(const char *filePath, int paletteID, int startPaletteIndex, int startIndex, int endIndex);
extern void (*RSDK_RotatePalette)(byte palID, byte startIndex, byte endIndex, bool right);
extern void (*RSDK_SetLimitedFade)(byte destPaletteID, byte srcPaletteA, byte srcPaletteB, ushort blendAmount, int startIndex, int endIndex);
extern void *RSDK_DrawRect;
extern void *RSDK_DrawLine;
extern void *RSDK_DrawCircle;
extern void *RSDK_DrawCircleOutline;
extern void *RSDK_DrawQuad;
extern void *RSDK_DrawTexturedQuad;
extern int (*RSDK_DrawSprite)(void *, void *, void *);
extern int (*RSDK_DrawUnknown)(void *, void *, void *);
extern void *RSDK_DrawText;
extern void *RSDK_DrawSprite3;
extern void *RSDK_DrawAniTile;
extern int (*RSDK_SetPaletteThing)(void *, void *, void *, void *);
extern void *RSDK_LoadMesh;
extern void *RSDK_Create3DScene;
extern void *RSDK_Init3DScene;
extern void *RSDK_View_Something1;
extern void *RSDK_View_Something2;
extern void *RSDK_View_Something3;
extern void *RSDK_SetupMesh;
extern void (*RSDK_SetModelAnimation)(ushort modelAnim, EntityAnimationData *data, short animSpeed, byte loopIndex, bool forceApply, ushort frameID);
extern void *RSDK_SetupMeshAnimation;
extern void *RSDK_Draw3DScene;
extern short (*RSDK_LoadAnimation)(const char *path, Scopes scope);
extern void (*RSDK_SetSpriteAnimation)(ushort spriteIndex, ushort animationID, EntityAnimationData *data, bool forceApply, ushort frameID);
extern void *RSDK_SetSpriteString;
extern SpriteFrame *(*RSDK_GetFrame)(ushort sprIndex, ushort anim, int frame);
extern Hitbox *(*RSDK_GetHitbox)(EntityAnimationData *data, byte hitboxID);
extern short (*RSDK_GetFrameID)(EntityAnimationData *data);
extern void *RSDK_Unknown82;
extern void (*RSDK_ProcessAnimation)(EntityAnimationData *data);
extern int (*RSDK_GetSceneLayerID)(void *);
extern void *(*RSDK_GetSceneLayerPtr)(void *);
extern void *RSDK_GetLayerSize;
extern void *RSDK_GetTileInfo;
extern void *RSDK_SetTileInfo;
extern int (*RSDK_CopyTileLayer)(void *, void *, void *, void *, void *, void *, void *, void *);
extern void *RSDK_ProcessParallax;
extern int (*RSDK_GetLinePosPtrs)(void);
extern void *RSDK_CheckObjectCollisionTouch;
extern void *RSDK_CheckObjectCollisionPoint;
extern void *RSDK_CheckObjectCollisionBox;
extern void *RSDK_CheckObjectCollisionPlatform;
extern void *RSDK_ObjectTileCollision;
extern void *RSDK_ObjectTileGrip;
extern void *RSDK_ProcessPlayerTileCollisions;
extern void *RSDK_GetTileAngle;
extern void *RSDK_GetTileBehaviour;
extern int (*RSDK_GetSFX)(const char* path);
extern int (*RSDK_PlaySFX)(void *, void *, void *);
extern void *RSDK_StopSFX;
extern void *RSDK_PlayMusic;
extern int (*RSDK_SetSoundAttributes)(void *, void *, void *, void *);
extern void *RSDK_Unknown91;
extern void *RSDK_Unknown92;
extern void *RSDK_Unknown93;
extern void *RSDK_Unknown94;
extern void *RSDK_Unknown95;
extern void *RSDK_Unknown96;
extern void *RSDK_LoadVideo;
extern void *RSDK_LoadPNG;
extern void *RSDK_Unknown98;
extern void *RSDK_Unknown99;
extern void *RSDK_Unknown100;
extern void *RSDK_Unknown101;
extern void *RSDK_Unknown102;
extern void *RSDK_Unknown103;
extern void *RSDK_Unknown104;
extern void *RSDK_PrintDebug3;
extern int (*RSDK_PrintString)(void *, void *);
extern void *RSDK_PrintSomething6;
extern void *RSDK_PrintSomething4;
extern void *RSDK_PrintSomething2;
extern void *RSDK_Unknown105;
extern void (*RSDK_ResetDebugValues)();
extern void (*RSDK_SetDebugValue)(const char *name, int valPtr, int type, int unknown1, int unknown2);

struct SKUInfo {
    int platform;
    int language;
    int region;
};

extern SKUInfo curSKU;

struct GameInfo {
    void *functionPtrs;
    void *userdataPtrs;
    char *gameName;
    SKUInfo *currentSKU;
    SceneInfo *sceneInfo;
    void *activeDPad;
    void *activeAnalogStick;
    void *unknown1;
    void *unknown2;
    void *unknown3;
    void *mousePos;
    void *inputCount;
    ScreenInfo *screenInfo;
};

void setupFunctions();

#endif
