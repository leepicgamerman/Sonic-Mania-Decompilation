#ifndef OBJ_SWEEP_H
#define OBJ_SWEEP_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    Hitbox hitbox1;
    Hitbox hitbox2;
    Hitbox hitbox3;
    ushort aniFrames;
    ushort sfxPon;
} ObjectSweep;

// Entity Class
typedef struct {
    RSDK_ENTITY
    StateMachine(state);
    StateMachine(stateStore);
    int timer;
    byte hasShot;
    Vector2 startPos;
    byte startDir;
    Entity *waterPtr;
    Animator animator;
} EntitySweep;

// Object Struct
extern ObjectSweep *Sweep;

// Standard Entity Events
void Sweep_Update(void);
void Sweep_LateUpdate(void);
void Sweep_StaticUpdate(void);
void Sweep_Draw(void);
void Sweep_Create(void* data);
void Sweep_StageLoad(void);
void Sweep_EditorDraw(void);
void Sweep_EditorLoad(void);
void Sweep_Serialize(void);

// Extra Entity Functions
void Sweep_DebugSpawn(void);
void Sweep_DebugDraw(void);

void Sweep_CheckOnScreen(void);
void Sweep_HandleInteractions(void);
void Sweep_CheckShoot(void);

void Sweep_Unknown5(void);
void Sweep_Unknown6(void);
void Sweep_Unknown7(void);
void Sweep_Unknown8(void);
void Sweep_Unknown9(void);
void Sweep_Unknown10(void);
void Sweep_Unknown11(void);

#endif //!OBJ_SWEEP_H