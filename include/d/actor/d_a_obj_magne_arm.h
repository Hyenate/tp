#ifndef D_A_OBJ_MAGNE_ARM_H
#define D_A_OBJ_MAGNE_ARM_H

#include "d/d_bg_s_acch.h"
#include "d/d_bg_s_movebg_actor.h"
#include "d/d_cc_d.h"
#include "f_op/f_op_actor_mng.h"


/**
 * @ingroup actors-objects
 * @class daObjMarm_c
 * @brief Magnetic Arm
 *
 * @details
 *
 */
class daObjMarm_c : public dBgS_MoveBgActor {
public:
    /* 8058F358 */ void getBpartsOffset(cXyz*);
    /* 8058F3D4 */ void getDpartsOffset(cXyz*);
    /* 8058F46C */ void getEpartsOffset(cXyz*);
    /* 8058F504 */ void getFpartsOffset(cXyz*);
    /* 8058F610 */ void getRopeStartPos(cXyz*);
    /* 8058F6B4 */ void initBaseMtx();
    /* 8058F77C */ void setBaseMtx();
    /* 8058FA50 */ int Create();
    /* 8058FCF8 */ int CreateHeap();
    /* 80590244 */ cPhs__Step phase_0();
    /* 805902D8 */ cPhs__Step phase_1();
    /* 80590364 */ cPhs__Step phase_2();
    /* 80590460 */ int create1st();
    /* 80590504 */ int Execute(Mtx**);
    /* 80590818 */ void action();
    /* 80590B7C */ void init_typeA_modeWait();
    /* 80590B8C */ void typeA_modeWait();
    /* 80590BE0 */ void init_typeA_modeMholeOn();
    /* 80590C48 */ void typeA_modeMholeOn();
    /* 80590C68 */ void typeA_modeLiftUp();
    /* 80590C6C */ void typeA_modeLiftDown();
    /* 80590C70 */ void init_typeA_modeRotate();
    /* 80590CE4 */ void typeA_modeRotate();
    /* 80590E24 */ void typeA_modeEnd();
    /* 80590E28 */ void init_typeB_modeWait();
    /* 80590E38 */ void typeB_modeWait();
    /* 80590E8C */ void init_typeB_modeMholeOn();
    /* 80590EF4 */ void typeB_modeMholeOn();
    /* 80590F14 */ void init_typeB_modeLiftUp();
    /* 80590F30 */ void typeB_modeLiftUp();
    /* 80591004 */ void typeB_modeLiftDown();
    /* 805910E8 */ void init_typeB_modeRotate();
    /* 80591160 */ void typeB_modeRotate();
    /* 805912AC */ void typeB_modeEnd();
    /* 805912B0 */ void init_typeC_modeWait();
    /* 805912C0 */ void typeC_modeWait();
    /* 80591314 */ void init_typeC_modeMholeOn();
    /* 8059137C */ void typeC_modeMholeOn();
    /* 8059139C */ void init_typeC_modeLiftUp();
    /* 805913B8 */ void typeC_modeLiftUp();
    /* 8059148C */ void init_typeC_modeLiftDown();
    /* 805914A8 */ void typeC_modeLiftDown();
    /* 8059158C */ void init_typeC_modeRotate();
    /* 80591604 */ void typeC_modeRotate();
    /* 80591750 */ void typeC_modeEnd();
    /* 80591754 */ void init_typeD_modeWait();
    /* 80591764 */ void typeD_modeWait();
    /* 805917B8 */ void init_typeD_modeMholeOn();
    /* 80591820 */ void typeD_modeMholeOn();
    /* 80591840 */ void init_typeD_modeLiftUp();
    /* 8059185C */ void typeD_modeLiftUp();
    /* 80591930 */ void init_typeD_modeLiftDown();
    /* 8059194C */ void typeD_modeLiftDown();
    /* 80591A30 */ void init_typeD_modeRotate();
    /* 80591AA8 */ void typeD_modeRotate();
    /* 80591BF4 */ void typeD_modeEnd();
    /* 80591BF8 */ void setMagneHoleEffect();
    /* 80591BFC */ void endMagneHoleEffect();
    /* 80591C38 */ void calcHimo();
    /* 80591E18 */ void seStart_MOVESTART();
    /* 80591E80 */ void seStartLevel_MOVE();
    /* 80591EE8 */ void seStart_STOP();
    /* 80591F50 */ void seStartLevel_UP();
    /* 80591FB8 */ void seStartLevel_DOWN();
    /* 80592020 */ void seStart_SWING();
    /* 80592088 */ int Draw();
    /* 805923C4 */ void debugDraw();
    /* 805923C8 */ int Delete();

    inline u32 getMoveType(daObjMarm_c* pActor) {return fopAcM_GetParamBit(pActor, 8, 4);}
    inline u32 getSwNo(daObjMarm_c* pActor) {return fopAcM_GetParamBit(pActor, 0, 8);}

    /* 0x5A0 */ request_of_phase_process_class mPhase;
    /* 0x5A8 */ J3DModel* mpModel[6];
    /* 0x5C0 */ mDoExt_brkAnm* mpBrkAnm;
    /* 0x5C4 */ mDoExt_btkAnm* mpBtkAnm;
    /* 0x5C8 */ JPABaseEmitter* mEmitter;
    /* 0x5CC */ dBgW* field_0x5CC;
    /* 0x5D0 */ Mtx field_0x5D0;
    /* 0x600 */ Mtx field_0x600;
    /* 0x630 */ dBgW* field_0x630;
    /* 0x634 */ Mtx field_0x634;
    /* 0x664 */ dBgS_ObjAcch mAcch;
    /* 0x83C */ dBgS_AcchCir mAcchCir;
    /* 0x87C */ dCcD_Stts unused_0x87C;
    /* 0x8B8 */ dCcD_Cyl unused_0x8B8;
    /* 0x9F4 */ s32 field_0x9F4;
    /* 0x9F8 */ u8 unused_0x9F8[0x4];
    /* 0x9FC */ s16 mBPartsXRot;
    /* 0x9FE */ s16 mYRot1;
    /* 0xA00 */ s16 mDPartsXRot;
    /* 0xA02 */ s16 mEPartsXRot;
    /* 0xA04 */ f32 field_0xA04;
    /* 0xA08 */ u8 field_0xA08;
    /* 0xA09 */ s8 field_0xA09;
    /* 0xA0A */ s16 field_0xA0A;
    /* 0xA0C */ s16 field_0xA0C;
    /* 0xA10 */ s32 field_0xA10;
    /* 0xA14 */ u8 field_0xA14;
    /* 0xA15 */ u8 mMoveType;
    /* 0xA16 */ u8 unused_0xA16;
    /* 0xA17 */ u8 field_0xA17;
    /* 0xA18 */ fpc_ProcID mID;
    /* 0xA1C */ u8 mMode;
    /* 0xA1D */ u8 field_0xA1D;
    /* 0xA20 */ mDoExt_3DlineMat1_c* field_0xA20;
    /* 0xA24 */ mDoExt_3DlineMat1_c* field_0xA24; 
    /* 0xA28 */ u8 field_0xA28;
    /* 0xA29 */ u8 field_0xA29;
    /* 0xA2C */ f32 field_0xA2C;
    /* 0xA30 */ s16 mYRot2;
    /* 0xA32 */ s16 mFPartsZRot;
    /* 0xA34 */ u8 unused_0xA34[0x4];
    /* 0xA38 */ s16 mFPartsOffsetZRot;
    /* 0xA3C */ f32 field_0xA3C;
    /* 0xA40 */ s16 field_0xA40;
    /* 0xA44 */ Vec mSePos1;
    /* 0xA50 */ Vec mSePos2;
    /* 0xA5C */ Vec mSePos3;
    /* 0xA68 */ u32 mShadowKey;
};

STATIC_ASSERT(sizeof(daObjMarm_c) == 0xa6c);

#endif /* D_A_OBJ_MAGNE_ARM_H */
