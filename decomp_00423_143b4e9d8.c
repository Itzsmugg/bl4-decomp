// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143b4e9d8 FUN_143b4e9d8 body=29 status=ok
// SIG undefined FUN_143b4e9d8(void)

undefined8 FUN_143b4e9d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b4e9f6 FUN_143b4e9f6 body=72 status=ok
// SIG undefined FUN_143b4e9f6(void)

void FUN_143b4e9f6(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x2a0);
  plVar4 = (longlong *)(lVar1 + 0x2c0);
  if (*(longlong **)(lVar1 + 0x2b0) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x2b0);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b4ea3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,uVar2,param_3);
  return;
}



// FUNCTION 143b4ea54 FUN_143b4ea54 body=29 status=ok
// SIG undefined FUN_143b4ea54(void)

undefined8 FUN_143b4ea54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b4ea94 FUN_143b4ea94 body=29 status=ok
// SIG undefined FUN_143b4ea94(void)

undefined8 FUN_143b4ea94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b4eab2 FUN_143b4eab2 body=121 status=ok
// SIG undefined FUN_143b4eab2(void)

void FUN_143b4eab2(undefined8 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = *param_2;
  local_30 = *param_1;
  lVar1 = param_1[1];
  pcVar2 = *(code **)(lVar1 + 0x130);
  plVar4 = (longlong *)(lVar1 + 0x150);
  if (*(longlong **)(lVar1 + 0x140) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x140);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_30,&local_21);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b4eb56 FUN_143b4eb56 body=29 status=ok
// SIG undefined FUN_143b4eb56(void)

undefined8 FUN_143b4eb56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b4eb74 FUN_143b4eb74 body=56 status=ok
// SIG undefined FUN_143b4eb74(void)

void FUN_143b4eb74(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x260);
  plVar3 = (longlong *)(lVar1 + 0x280);
  if (*(longlong **)(lVar1 + 0x270) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x270);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b4eba9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



// FUNCTION 143b4ebc2 FUN_143b4ebc2 body=29 status=ok
// SIG undefined FUN_143b4ebc2(void)

undefined8 FUN_143b4ebc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b4ebe0 FUN_143b4ebe0 body=72 status=ok
// SIG undefined FUN_143b4ebe0(void)

void FUN_143b4ebe0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x2a0);
  plVar4 = (longlong *)(lVar1 + 0x2c0);
  if (*(longlong **)(lVar1 + 0x2b0) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x2b0);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b4ec25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,uVar2,param_3);
  return;
}



// FUNCTION 143b4ec3e FUN_143b4ec3e body=29 status=ok
// SIG undefined FUN_143b4ec3e(void)

undefined8 FUN_143b4ec3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b4ec7e FUN_143b4ec7e body=29 status=ok
// SIG undefined FUN_143b4ec7e(void)

undefined8 FUN_143b4ec7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b4ec9c FUN_143b4ec9c body=121 status=ok
// SIG undefined FUN_143b4ec9c(void)

void FUN_143b4ec9c(undefined8 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = *param_2;
  local_30 = *param_1;
  lVar1 = param_1[1];
  pcVar2 = *(code **)(lVar1 + 0x130);
  plVar4 = (longlong *)(lVar1 + 0x150);
  if (*(longlong **)(lVar1 + 0x140) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x140);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_30,&local_21);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b4ed40 FUN_143b4ed40 body=29 status=ok
// SIG undefined FUN_143b4ed40(void)

undefined8 FUN_143b4ed40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b4ed80 FUN_143b4ed80 body=29 status=ok
// SIG undefined FUN_143b4ed80(void)

undefined8 FUN_143b4ed80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b4edc0 FUN_143b4edc0 body=29 status=ok
// SIG undefined FUN_143b4edc0(void)

undefined8 FUN_143b4edc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b4edde FUN_143b4edde body=121 status=ok
// SIG undefined FUN_143b4edde(void)

void FUN_143b4edde(undefined8 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = *param_2;
  local_30 = *param_1;
  lVar1 = param_1[1];
  pcVar2 = *(code **)(lVar1 + 0x130);
  plVar4 = (longlong *)(lVar1 + 0x150);
  if (*(longlong **)(lVar1 + 0x140) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x140);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_30,&local_21);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b4ee82 FUN_143b4ee82 body=29 status=ok
// SIG undefined FUN_143b4ee82(void)

undefined8 FUN_143b4ee82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b4eec2 FUN_143b4eec2 body=29 status=ok
// SIG undefined FUN_143b4eec2(void)

undefined8 FUN_143b4eec2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b4eee0 FUN_143b4eee0 body=121 status=ok
// SIG undefined FUN_143b4eee0(void)

void FUN_143b4eee0(undefined8 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = *param_2;
  local_30 = *param_1;
  lVar1 = param_1[1];
  pcVar2 = *(code **)(lVar1 + 0x130);
  plVar4 = (longlong *)(lVar1 + 0x150);
  if (*(longlong **)(lVar1 + 0x140) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x140);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_30,&local_21);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b4ef84 FUN_143b4ef84 body=29 status=ok
// SIG undefined FUN_143b4ef84(void)

undefined8 FUN_143b4ef84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b4efa1 FUN_143b4efa1 body=1412 status=ok
// SIG undefined FUN_143b4efa1(void)

void FUN_143b4efa1(void)

{
  longlong lVar1;
  
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aea1230,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aea1600,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aea1cc0,2,0,0,0,0);
  lVar1 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14aea1fb0 + lVar1),
                  L"/Script/InteractiveToolsFramework",*(undefined8 *)(&UNK_14aea1fb8 + lVar1),
                  *(undefined8 *)((longlong)&PTR_FUN_14aea1fc0 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0xb0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aea23c0,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aea2dd0,3,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aea3190,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aea3500,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aea3f90,2,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aea53b0,6,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aea5810,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aea5b70,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aea5ed0,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aea67d0,2,&PTR_FUN_14aea67a0,1,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aea8d50,6,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aea9170,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aea94e0,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aea9990,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aea9cf0,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeaa050,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeaa7c0,1,0,0,&PTR_FUN_14aeaa700,6);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeab640,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeaba60,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeac360,2,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeacbf0,2,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeacff0,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aead3b0,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeadb40,2,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeadf90,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeae3c0,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeaec80,2,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeaf1c0,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeaf590,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeaf8e0,1,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeb04a0,2,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeb1080,2,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeb2200,4,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeb2f20,2,0,0,0,0);
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeb4c50,3,0,0,0,0);
  return;
}



// FUNCTION 143b4f528 FUN_143b4f528 body=55 status=ok
// SIG undefined FUN_143b4f528(void)

void FUN_143b4f528(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4acd8 == 0) {
    uVar1 = FUN_140fdab72();
    DAT_14cb4acd8 = FUN_14171c317(FUN_14648c2dc,uVar1,L"EGizmoElementArrowHeadType");
  }
  return;
}



// FUNCTION 143b4f560 FUN_143b4f560 body=3481 status=ok
// SIG undefined FUN_143b4f560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_143b4f560(longlong param_1,double *param_2,double *param_3,double *param_4,char param_5,
             double *param_6,double *param_7,undefined1 (*param_8) [16])

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 unaff_ESI;
  int iVar8;
  undefined8 uVar9;
  undefined4 unaff_EDI;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  double dVar15;
  undefined1 auVar14 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auStack_1c8 [32];
  double *local_1a8;
  double *local_1a0;
  double *local_198;
  double local_188;
  double local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  iVar1 = *(int *)(param_1 + 0xc4);
  if (iVar1 != 0) {
    auVar30 = *(undefined1 (*) [16])(param_6 + 8);
    dVar17 = auVar30._0_8_;
    if (ABS(dVar17 - auVar30._8_8_) <= 9.999999747378752e-05) {
      auVar19 = *(undefined1 (*) [16])(param_6 + 10);
      dVar27 = auVar19._0_8_;
      if (ABS(dVar17 - dVar27) <= 9.999999747378752e-05) {
        dVar24 = ABS(auVar30._8_8_);
        lVar11 = -(ulonglong)(9.99999993922529e-09 < dVar24);
        auVar36._8_4_ = (int)lVar11;
        auVar36._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar17));
        auVar36._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
        iVar8 = movmskpd(unaff_ESI,auVar36);
        lVar11 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar19._8_8_));
        auVar3._8_4_ = (int)lVar11;
        auVar3._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar27));
        auVar3._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
        uVar10 = movmskpd(unaff_EDI,auVar3);
        dVar23 = DAT_14c8464c0;
        dVar25 = DAT_14c8464c8;
        dVar26 = DAT_14c846490;
        dVar28 = DAT_14c846498;
        uVar31 = (undefined4)DAT_14c846480;
        uVar32 = DAT_14c846480._4_4_;
        uVar33 = (undefined4)DAT_14c846488;
        uVar34 = DAT_14c846488._4_4_;
        dVar15 = DAT_14c8464a0;
        dVar5 = DAT_14c8464a8;
        dVar16 = DAT_14c8464b0;
        dVar29 = DAT_14c8464d0;
        if ((uVar10 & 0x3fffffff) != 0 || iVar8 != 0) {
          auVar36 = divpd(_DAT_149934d80,auVar30);
          auVar30 = divpd(ZEXT816(0x3ff0000000000000),auVar19);
          dVar23 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar17)) & auVar36._0_8_);
          dVar25 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar24) & auVar36._8_8_);
          dVar29 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar27)) & auVar30._0_8_);
          dVar6 = *param_6;
          dVar26 = param_6[2] * -1.0;
          dVar28 = param_6[3] * 1.0;
          dVar17 = -dVar6;
          dVar27 = -param_6[1];
          dVar15 = param_6[4] * dVar23;
          dVar5 = param_6[5] * dVar25;
          dVar35 = param_6[6] * dVar29;
          dVar16 = dVar5 * dVar17 - dVar27 * dVar15;
          dVar24 = dVar35 * dVar27 - dVar26 * dVar5;
          dVar7 = dVar15 * dVar26 - dVar17 * dVar35;
          dVar24 = dVar24 + dVar24;
          dVar7 = dVar7 + dVar7;
          dVar16 = dVar16 + dVar16;
          uVar31 = SUB84(dVar6,0);
          uVar32 = (int)((ulonglong)dVar17 >> 0x20);
          uVar33 = SUB84(param_6[1],0);
          uVar34 = (int)((ulonglong)dVar27 >> 0x20);
          dVar15 = 0.0 - ((dVar16 * dVar27 - dVar7 * dVar26) + dVar28 * dVar24 + dVar15);
          dVar5 = 0.0 - (dVar16 * dVar6 + dVar26 * dVar24 + dVar28 * dVar7 + dVar5);
          dVar16 = 0.0 - (dVar28 * dVar16 + dVar35 + (dVar7 * dVar17 - dVar24 * dVar27));
        }
        if (param_5 == '\x01' && iVar1 != 3) {
          dVar17 = *param_2 * dVar23;
          dVar6 = param_2[1] * dVar25;
          dVar35 = param_2[2] * dVar29;
          dVar27 = dVar6 * (double)CONCAT44(uVar32,uVar31) -
                   (double)CONCAT44(uVar34,uVar33) * dVar17;
          dVar24 = dVar35 * (double)CONCAT44(uVar34,uVar33) - dVar26 * dVar6;
          dVar7 = dVar17 * dVar26 - (double)CONCAT44(uVar32,uVar31) * dVar35;
          dVar24 = dVar24 + dVar24;
          dVar7 = dVar7 + dVar7;
          dVar27 = dVar27 + dVar27;
          dVar35 = param_7[2] -
                   (dVar16 + dVar28 * dVar27 + dVar35 +
                             (dVar7 * (double)CONCAT44(uVar32,uVar31) -
                             dVar24 * (double)CONCAT44(uVar34,uVar33)));
          dVar17 = *param_7 -
                   (dVar15 + (dVar27 * (double)CONCAT44(uVar34,uVar33) - dVar7 * dVar26) +
                             dVar28 * dVar24 + dVar17);
          dVar27 = param_7[1] -
                   (dVar5 + (dVar26 * dVar24 - (double)CONCAT44(uVar32,uVar31) * dVar27) +
                            dVar28 * dVar7 + dVar6);
        }
        else {
          dVar17 = *param_3;
          dVar27 = param_3[1];
          dVar15 = param_3[2];
          dVar5 = (double)CONCAT44(uVar34,uVar33);
          dVar24 = dVar5 * dVar15 - dVar27 * dVar26;
          dVar24 = dVar24 + dVar24;
          dVar7 = (double)CONCAT44(uVar32,uVar31) * dVar27 - dVar17 * dVar5;
          dVar7 = dVar7 + dVar7;
          dVar16 = dVar26 * dVar17 - dVar15 * (double)CONCAT44(uVar32,uVar31);
          dVar16 = dVar16 + dVar16;
          dVar35 = ((double)CONCAT44(uVar32,uVar31) * dVar16 - dVar24 * dVar5) +
                   dVar28 * dVar7 + dVar15;
          dVar27 = (dVar26 * dVar24 - dVar7 * (double)CONCAT44(uVar32,uVar31)) +
                   dVar28 * dVar16 + dVar27;
          dVar17 = (dVar5 * dVar7 - dVar16 * dVar26) + dVar28 * dVar24 + dVar17;
        }
        dVar15 = dVar35 * dVar35 + dVar17 * dVar17 + dVar27 * dVar27;
        if (9.99999993922529e-09 < dVar15) {
          dVar15 = 1.0 / SQRT(dVar15);
          dVar17 = dVar17 * dVar15;
          dVar27 = dVar27 * dVar15;
          dVar35 = dVar35 * dVar15;
        }
        uVar9 = CONCAT71((uint7)(uint3)((uint)iVar8 >> 8),1);
        if (iVar1 == 1) {
          dVar29 = *(double *)(param_1 + 0xe0);
          dVar15 = *(double *)(param_1 + 0xe8);
          dVar5 = *(double *)(param_1 + 0xf0);
          dVar23 = ((dVar29 * -dVar17 - dVar15 * dVar27) - dVar5 * dVar35) + 1.0;
          if (dVar23 < 9.999999974752427e-07) {
            if ((ABS(dVar29) <= ABS(dVar15)) || (ABS(dVar29) <= ABS(dVar5))) {
              uVar10 = (uint)((ulonglong)DAT_14c8463a8 >> 0x20) ^ 0x80000000;
              uVar31 = SUB84(DAT_14c8463a8,0);
              dVar23 = 0.0;
              dVar17 = -DAT_14c8463a0;
              dVar27 = -DAT_14c8463b0;
            }
            else {
              uVar31 = SUB84(DAT_14c846390,0);
              uVar10 = (uint)((ulonglong)DAT_14c846390 >> 0x20);
              dVar23 = 0.0;
              dVar17 = DAT_14c846388;
              dVar27 = DAT_14c846398;
            }
          }
          else {
            uVar10 = (uint)((ulonglong)dVar27 >> 0x20) ^ 0x80000000;
            uVar31 = SUB84(dVar27,0);
            dVar17 = -dVar17;
            dVar27 = -dVar35;
          }
          dVar25 = dVar29 * (double)CONCAT44(uVar10,uVar31) - dVar17 * dVar15;
          dVar17 = dVar5 * dVar17 - dVar27 * dVar29;
          dVar15 = dVar15 * dVar27 - (double)CONCAT44(uVar10,uVar31) * dVar5;
          auVar19._0_8_ = dVar15 * dVar15;
          auVar19._8_8_ = dVar17 * dVar17;
          dVar27 = dVar25 * dVar25 + auVar19._0_8_;
          dVar29 = dVar23 * dVar23 + auVar19._8_8_;
          auVar21._0_8_ = dVar27 + dVar29;
          auVar21._8_8_ = dVar27 + dVar29;
          uVar13 = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
          auVar30 = sqrtpd(auVar19,auVar21);
          auVar19 = divpd(_DAT_149934d80,auVar30);
          auVar22._0_8_ = auVar19._0_8_ * dVar25;
          auVar22._8_8_ = auVar19._8_8_ * dVar23;
          auVar30._8_4_ = (int)uVar13;
          auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
          auVar30._12_4_ = (int)(uVar13 >> 0x20);
          auVar30 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar22,auVar30);
          *(ulonglong *)*param_8 =
               (ulonglong)(dVar15 * auVar19._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
          *(ulonglong *)(*param_8 + 8) = (ulonglong)(dVar17 * auVar19._8_8_) & uVar13;
        }
        else {
          if (iVar1 != 4) {
            if (iVar1 - 2U < 2) {
              dVar15 = *(double *)(param_1 + 0xe8);
              dVar5 = *(double *)(param_1 + 0xe0);
              local_150 = *(double *)(param_1 + 200) * dVar15 - dVar5 * *(double *)(param_1 + 0xd0);
              dVar16 = *(double *)(param_1 + 0xf0);
              local_158 = *(double *)(param_1 + 0xd8) * dVar5 - *(double *)(param_1 + 200) * dVar16;
              local_160 = *(double *)(param_1 + 0xd0) * dVar16 -
                          dVar15 * *(double *)(param_1 + 0xd8);
              dVar24 = local_150 * local_150 + local_160 * local_160 + local_158 * local_158;
              if (9.99999993922529e-09 < dVar24) {
                dVar24 = 1.0 / SQRT(dVar24);
                local_160 = local_160 * dVar24;
                local_158 = local_158 * dVar24;
                local_150 = local_150 * dVar24;
              }
              local_188 = dVar5 * local_158 - local_160 * dVar15;
              local_140 = dVar16 * local_160 - local_150 * dVar5;
              local_180 = dVar15 * local_150 - local_158 * dVar16;
              dVar23 = dVar23 * *param_4;
              dVar25 = dVar25 * param_4[1];
              dVar29 = dVar29 * param_4[2];
              dVar5 = dVar25 * (double)CONCAT44(uVar32,uVar31) -
                      (double)CONCAT44(uVar34,uVar33) * dVar23;
              dVar16 = dVar29 * (double)CONCAT44(uVar34,uVar33) - dVar26 * dVar25;
              dVar15 = dVar23 * dVar26 - (double)CONCAT44(uVar32,uVar31) * dVar29;
              dVar16 = dVar16 + dVar16;
              dVar15 = dVar15 + dVar15;
              dVar5 = dVar5 + dVar5;
              dVar29 = dVar28 * dVar5 + dVar29 +
                       (dVar15 * (double)CONCAT44(uVar32,uVar31) -
                       dVar16 * (double)CONCAT44(uVar34,uVar33));
              dVar23 = (dVar5 * (double)CONCAT44(uVar34,uVar33) - dVar15 * dVar26) +
                       dVar28 * dVar16 + dVar23;
              dVar15 = (dVar26 * dVar16 - (double)CONCAT44(uVar32,uVar31) * dVar5) +
                       dVar28 * dVar15 + dVar25;
              local_120 = -dVar35;
              local_108 = dVar17 * dVar15 - dVar23 * dVar27;
              local_110 = dVar35 * dVar23 - dVar29 * dVar17;
              local_118 = dVar27 * dVar29 - dVar15 * dVar35;
              dVar29 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
              local_128 = -dVar27;
              local_130 = -dVar17;
              if (9.99999993922529e-09 < dVar29) {
                dVar29 = 1.0 / SQRT(dVar29);
                local_118 = local_118 * dVar29;
                local_110 = local_110 * dVar29;
                local_108 = local_108 * dVar29;
              }
              local_f0 = local_130 * local_110 + dVar27 * local_118;
              local_f8 = local_120 * local_118 + dVar17 * local_108;
              local_100 = local_128 * local_108 + dVar35 * local_110;
              local_198 = &local_100;
              local_1a0 = &local_118;
              local_1a8 = &local_130;
              local_178 = *(undefined4 *)(param_1 + 0xe0);
              uStack_174 = *(undefined4 *)(param_1 + 0xe4);
              uStack_170 = *(undefined4 *)(param_1 + 0xe8);
              uStack_16c = *(undefined4 *)(param_1 + 0xec);
              local_168 = *(undefined8 *)(param_1 + 0xf0);
              local_148 = local_180;
              local_138 = local_188;
              FUN_1484232bc(&local_e8);
              *(undefined8 *)param_8[1] = local_d8;
              *(undefined8 *)(param_8[1] + 8) = uStack_d0;
              *(undefined4 *)*param_8 = local_e8;
              *(undefined4 *)(*param_8 + 4) = uStack_e4;
              *(undefined4 *)(*param_8 + 8) = uStack_e0;
              *(undefined4 *)(*param_8 + 0xc) = uStack_dc;
            }
            goto LAB_143b5009e;
          }
          dVar29 = *(double *)(param_1 + 200);
          dVar15 = *(double *)(param_1 + 0xd0);
          dVar5 = *(double *)(param_1 + 0xd8);
          if ((double)*(float *)(param_1 + 0xfc) <=
              ABS((dVar29 * -dVar17 - dVar15 * dVar27) - dVar5 * dVar35)) goto LAB_143b5009c;
          dVar23 = -dVar17 * dVar15 + dVar27 * dVar29;
          dVar17 = -dVar35 * dVar29 + dVar17 * dVar5;
          dVar27 = -dVar27 * dVar5 + dVar35 * dVar15;
          dVar25 = dVar23 * dVar23 + dVar27 * dVar27 + dVar17 * dVar17;
          if (9.99999993922529e-09 < dVar25) {
            dVar25 = 1.0 / SQRT(dVar25);
            dVar27 = dVar27 * dVar25;
            dVar17 = dVar17 * dVar25;
            dVar23 = dVar23 * dVar25;
          }
          dVar25 = dVar29 * dVar17 - dVar27 * dVar15;
          dVar29 = dVar5 * dVar27 - dVar23 * dVar29;
          dVar27 = dVar15 * dVar23 - dVar17 * dVar5;
          dVar17 = dVar25 * dVar25 + dVar27 * dVar27 + dVar29 * dVar29;
          if (9.99999993922529e-09 < dVar17) {
            dVar17 = 1.0 / SQRT(dVar17);
            dVar27 = dVar27 * dVar17;
            dVar29 = dVar29 * dVar17;
            dVar25 = dVar25 * dVar17;
          }
          dVar17 = *(double *)(param_1 + 0xe0);
          dVar15 = *(double *)(param_1 + 0xe8);
          dVar5 = *(double *)(param_1 + 0xf0);
          dVar23 = dVar5 * dVar25 + dVar17 * dVar27 + dVar29 * dVar15 + 1.0;
          if (dVar23 < 9.999999974752427e-07) {
            if ((ABS(dVar17) <= ABS(dVar15)) || (ABS(dVar17) <= ABS(dVar5))) {
              dVar23 = 0.0;
              dVar25 = -DAT_14c8463b0;
              dVar27 = -DAT_14c8463a0;
              dVar29 = -DAT_14c8463a8;
            }
            else {
              dVar23 = 0.0;
              dVar25 = DAT_14c846398;
              dVar27 = DAT_14c846388;
              dVar29 = DAT_14c846390;
            }
          }
          dVar26 = dVar17 * dVar29 - dVar27 * dVar15;
          dVar27 = dVar5 * dVar27 - dVar25 * dVar17;
          dVar17 = dVar15 * dVar25 - dVar29 * dVar5;
          auVar14._0_8_ = dVar17 * dVar17;
          auVar14._8_8_ = dVar27 * dVar27;
          dVar29 = dVar26 * dVar26 + auVar14._0_8_;
          dVar15 = dVar23 * dVar23 + auVar14._8_8_;
          auVar18._0_8_ = dVar29 + dVar15;
          auVar18._8_8_ = dVar29 + dVar15;
          uVar12 = -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_);
          auVar30 = sqrtpd(auVar14,auVar18);
          auVar19 = divpd(_DAT_149934d80,auVar30);
          auVar20._0_8_ = auVar19._0_8_ * dVar26;
          auVar20._8_8_ = auVar19._8_8_ * dVar23;
          uVar13 = (ulonglong)(dVar27 * auVar19._8_8_) & uVar12;
          auVar2._8_4_ = (int)uVar12;
          auVar2._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
          auVar2._12_4_ = (int)(uVar12 >> 0x20);
          auVar30 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar20,auVar2);
          auVar4._8_4_ = (int)uVar13;
          auVar4._0_8_ = (ulonglong)(dVar17 * auVar19._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
          auVar4._12_4_ = (int)(uVar13 >> 0x20);
          *param_8 = auVar4;
        }
        param_8[1] = auVar30;
        goto LAB_143b5009e;
      }
    }
    if (DAT_14cb4ad18 == '\0') {
      DAT_14cb4ad18 = '\x01';
    }
  }
LAB_143b5009c:
  uVar9 = 0;
LAB_143b5009e:
  if ((local_c0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 143b5030a FUN_143b5030a body=413 status=ok
// SIG undefined FUN_143b5030a(void)

bool FUN_143b5030a(double *param_1,double *param_2,undefined8 *param_3,double param_4,
                  double *param_5)

{
  double dVar1;
  bool bVar2;
  undefined1 auStack_118 [32];
  double *local_f8;
  double *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  double local_68;
  double dStack_60;
  double local_58;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_38 = param_1[2];
  local_f8 = &local_48;
  local_48 = *param_1;
  dStack_40 = param_1[1];
  local_58 = param_2[2];
  local_f0 = &local_68;
  local_68 = *param_2;
  dStack_60 = param_2[1];
  local_78 = param_3[2];
  local_88 = *param_3;
  uStack_80 = param_3[1];
  local_98 = param_2[2];
  local_a8 = *param_2;
  dStack_a0 = param_2[1];
  local_c8 = param_1[6];
  dStack_c0 = param_1[7];
  local_b8 = param_1[8];
  local_e8 = *(undefined4 *)param_1;
  uStack_e4 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_e0 = *(undefined4 *)(param_1 + 1);
  uStack_dc = *(undefined4 *)((longlong)param_1 + 0xc);
  local_d8 = param_1[2];
  FUN_144a0d30e();
  if (((9.999999747378752e-05 < ABS(local_48 - *param_1)) ||
      (9.999999747378752e-05 < ABS(dStack_40 - param_1[1]))) ||
     (9.999999747378752e-05 < ABS(local_38 - param_1[2]))) {
    dVar1 = SQRT((local_58 - local_38) * (local_58 - local_38) +
                 (dStack_60 - dStack_40) * (dStack_60 - dStack_40) +
                 (local_68 - local_48) * (local_68 - local_48));
    *param_5 = dVar1;
    bVar2 = dVar1 < param_4;
  }
  else {
    bVar2 = false;
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b504b6 FUN_143b504b6 body=275 status=ok
// SIG undefined FUN_143b504b6(void)

double * FUN_143b504b6(double *param_1,longlong *param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_2 + 8))(param_2,&local_68);
  dVar1 = (double)(&DAT_149931160)[0.0 < local_50];
  piVar4 = (int *)(**(code **)*param_2)(param_2);
  iVar2 = piVar4[1];
  iVar3 = piVar4[3];
  *param_1 = (double)(float)((double)(piVar4[2] - *piVar4) *
                             (local_68 * 0.5 * (dVar1 / local_50) + 0.5) + (double)*piVar4);
  param_1[1] = (double)(float)((double)(iVar3 - iVar2) *
                               (local_60 * -0.5 * (dVar1 / local_50) + 0.5) + (double)iVar2);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b505ca FUN_143b505ca body=795 status=ok
// SIG undefined FUN_143b505ca(void)

undefined1 * FUN_143b505ca(longlong param_1,undefined1 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_248 [32];
  char **local_228;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  double local_208;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined2 local_1e0;
  undefined1 local_1de;
  undefined4 local_1dc;
  float local_1d8;
  undefined4 local_13c;
  undefined4 local_110;
  char *local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined2 local_cf;
  undefined1 local_cd;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  longlong local_90;
  undefined8 local_88;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  plVar11 = *(longlong **)(param_1 + 8);
  if (plVar11 != (longlong *)0x0) {
    pcVar7 = *(code **)(param_1 + 0x18);
    if (pcVar7 != (code *)0x0) {
      plVar11 = (longlong *)(param_1 + 0x38);
      if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
        plVar11 = *(longlong **)(param_1 + 0x28);
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      cVar8 = (*pcVar7)(uVar10);
      if (cVar8 == '\0') goto LAB_143b50802;
      plVar11 = *(longlong **)(param_1 + 8);
    }
    cVar8 = (**(code **)(*plVar11 + 0x4e8))();
    if (cVar8 != '\0') {
      plVar11 = *(longlong **)(param_1 + 8);
      if ((plVar11[0x15] != 0) && (-1 < *(char *)(plVar11[0x15] + 0x60))) {
        dVar1 = param_3[5];
        dVar2 = param_3[4];
        dVar3 = param_3[3];
        dVar4 = param_3[2];
        dVar5 = param_3[1];
        dVar6 = *param_3;
        memset(&local_1e0,0,0x100);
        local_110 = 0xffffffff;
        local_1dc = 0x3f800000;
        local_13c = 0xffffffff;
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14cb4b860) {
          FUN_144b3d300(&DAT_14cb4b860);
          if (DAT_14cb4b860 == -1) {
            local_e0 = "HitTest";
            local_d8 = CONCAT35(local_d8._5_3_,7);
            uVar9 = FUN_14001a6c0(&local_e0,1);
            DAT_14cb4b858 = (char *)(ulonglong)uVar9;
            _Init_thread_footer(&DAT_14cb4b860);
          }
        }
        local_228 = &local_e0;
        local_bc = 0;
        local_d8 = 0;
        local_b8 = 0x101;
        local_90 = 0;
        local_88 = 0x800000000;
        local_70 = 0;
        local_68 = 0x400000000;
        local_d0 = 1;
        local_c4 = 0;
        local_e0 = DAT_14cb4b858;
        local_cf = 1;
        local_cd = 0;
        local_c0 = 0;
        local_cc = 0x1000000;
        local_c8 = 1;
        local_208 = param_3[2];
        local_218 = *(undefined4 *)param_3;
        uStack_214 = *(undefined4 *)((longlong)param_3 + 4);
        uStack_210 = *(undefined4 *)(param_3 + 1);
        uStack_20c = *(undefined4 *)((longlong)param_3 + 0xc);
        local_1f8 = dVar3 * 4398046511104.0 + dVar6;
        local_1f0 = dVar2 * 4398046511104.0 + dVar5;
        local_1e8 = dVar1 * 4398046511104.0 + dVar4;
        cVar8 = (**(code **)(*plVar11 + 0x978))(plVar11,&local_1e0);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        if (local_90 != 0) {
          FUN_1400020a8();
        }
        if (cVar8 != '\0') {
          *param_2 = 1;
          *(double *)(param_2 + 8) = (double)local_1d8;
          *(undefined8 *)(param_2 + 0x10) = 0;
          *(undefined8 *)(param_2 + 0x18) = 0;
          *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
          param_2[0x28] = 0;
          goto LAB_143b5083c;
        }
      }
    }
  }
LAB_143b50802:
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined2 *)(param_2 + 0x29) = local_1e0;
  param_2[0x2b] = local_1de;
LAB_143b5083c:
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  if ((local_60 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5095e FUN_143b5095e body=271 status=ok
// SIG undefined FUN_143b5095e(void)

undefined8 * FUN_143b5095e(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_208 [40];
  undefined **local_1e0 [17];
  longlong local_158;
  char local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_1401ea154(local_1e0);
  FUN_1401ea8ec(local_1e0,param_2);
  local_1e0[0] = &PTR_FUN_14aed9bd0;
  FUN_14498dc1c(param_1,local_1e0,0);
  if (local_38 == '\x01') {
    local_38 = '\0';
  }
  local_1e0[0] = &PTR_FUN_14a9758a8;
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14aed9960;
  param_1[0x117] = *(undefined8 *)(param_2 + 0x738);
  lVar1 = *(longlong *)(param_2 + 0x740);
  param_1[0x118] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x119] = *(undefined8 *)(param_2 + 0x730);
  *(undefined1 *)(param_1 + 0x11a) = *(undefined1 *)(param_2 + 0x748);
  if (*(char *)(param_2 + 0x749) == '\x01') {
    bVar2 = *(longlong *)(param_2 + 0x728) != 0;
  }
  else {
    bVar2 = false;
  }
  *(bool *)((longlong)param_1 + 0x8d1) = bVar2;
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b50a90 FUN_143b50a90 body=41 status=ok
// SIG undefined FUN_143b50a90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b50a90(void)

{
  _DAT_14cb4b570 = 0;
  if (DAT_14cb4b568 != 0) {
    FUN_1400020a8();
  }
  FUN_146175688();
  return;
}



// FUNCTION 143b50ab9 FUN_143b50ab9 body=55 status=ok
// SIG undefined FUN_143b50ab9(void)

void FUN_143b50ab9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4b598 == 0) {
    uVar1 = FUN_140fdab72();
    DAT_14cb4b598 = FUN_14171c317(FUN_14648e618,uVar1,L"EInputCaptureSide");
  }
  return;
}



// FUNCTION 143b50af0 FUN_143b50af0 body=55 status=ok
// SIG undefined FUN_143b50af0(void)

void FUN_143b50af0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4b5b0 == 0) {
    uVar1 = FUN_140fdab72();
    DAT_14cb4b5b0 = FUN_14171c317(FUN_14648e647,uVar1,L"EInputCaptureRequestType");
  }
  return;
}



// FUNCTION 143b50b27 FUN_143b50b27 body=55 status=ok
// SIG undefined FUN_143b50b27(void)

void FUN_143b50b27(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4b5c8 == 0) {
    uVar1 = FUN_140fdab72();
    DAT_14cb4b5c8 = FUN_14171c317(FUN_14648e676,uVar1,L"EInputCaptureState");
  }
  return;
}



// FUNCTION 143b50b5e FUN_143b50b5e body=55 status=ok
// SIG undefined FUN_143b50b5e(void)

void FUN_143b50b5e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4b670 == 0) {
    uVar1 = FUN_140fdab72();
    DAT_14cb4b670 = FUN_14171c317(FUN_14648e8e4,uVar1,L"EInputDevices");
  }
  return;
}



// FUNCTION 143b50b95 FUN_143b50b95 body=55 status=ok
// SIG undefined FUN_143b50b95(void)

void FUN_143b50b95(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4b748 == 0) {
    uVar1 = FUN_140fdab72();
    DAT_14cb4b748 = FUN_14171c317(FUN_14648ecfb,uVar1,L"ETransformGizmoSubElements");
  }
  return;
}



// FUNCTION 143b50c43 FUN_143b50c43 body=55 status=ok
// SIG undefined FUN_143b50c43(void)

void FUN_143b50c43(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4b7f0 == 0) {
    uVar1 = FUN_140fdab72();
    DAT_14cb4b7f0 = FUN_14171c317(FUN_14648edf4,uVar1,L"EToolShutdownType");
  }
  return;
}



// FUNCTION 143b50c7a FUN_143b50c7a body=48 status=ok
// SIG undefined FUN_143b50c7a(void)

longlong FUN_143b50c7a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b50caa FUN_143b50caa body=48 status=ok
// SIG undefined FUN_143b50caa(void)

longlong FUN_143b50caa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b50cda FUN_143b50cda body=48 status=ok
// SIG undefined FUN_143b50cda(void)

longlong FUN_143b50cda(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b50d0a FUN_143b50d0a body=48 status=ok
// SIG undefined FUN_143b50d0a(void)

longlong FUN_143b50d0a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b50d3a FUN_143b50d3a body=48 status=ok
// SIG undefined FUN_143b50d3a(void)

longlong FUN_143b50d3a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b50db0 FUN_143b50db0 body=3223 status=ok
// SIG undefined FUN_143b50db0(void)

void FUN_143b50db0(longlong *param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  byte *pbVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  int iVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  char cVar16;
  undefined1 uVar17;
  char cVar18;
  byte bVar19;
  int iVar20;
  longlong *plVar21;
  longlong lVar22;
  uint *puVar23;
  byte bVar24;
  double dVar25;
  int iVar26;
  longlong lVar27;
  uint uVar28;
  undefined8 *puVar29;
  longlong *plVar30;
  ulonglong uVar31;
  double dVar32;
  bool bVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [8];
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auStack_318 [32];
  undefined1 *local_2f8;
  undefined1 *local_2f0;
  longlong *local_2e8;
  longlong *local_2e0;
  byte local_2d8;
  undefined1 local_2d0;
  undefined1 local_2c8;
  byte local_2c0;
  undefined8 local_2b8;
  char local_2a9;
  undefined1 local_2a8 [8];
  double dStack_2a0;
  undefined8 *local_298;
  uint local_290;
  int local_28c;
  double local_288;
  double dStack_280;
  undefined8 *local_278;
  longlong local_270;
  undefined1 local_268 [16];
  double local_258;
  undefined8 uStack_250;
  longlong *local_240;
  longlong *local_238;
  longlong *local_230;
  longlong *local_228;
  ulonglong local_220;
  undefined1 local_218 [16];
  double local_208;
  undefined1 local_200 [16];
  double local_1f0;
  double local_1e8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  double dVar5;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_290 = param_4;
  if ((*(char *)((longlong)param_1 + 0x8d1) == '\0') && (0 < (int)param_2[1])) {
    local_238 = param_1 + 0x20;
    local_278 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xea8);
    local_240 = param_1 + 0x37;
    uVar31 = 0;
    local_230 = param_2;
    local_228 = param_1;
    do {
      uVar7 = *(undefined8 *)(*param_2 + uVar31 * 8);
      cVar16 = FUN_14480c900(param_1,uVar7);
      if ((cVar16 != '\0') && ((local_290 >> ((uint)uVar31 & 0x1f) & 1) != 0)) {
        plVar30 = (longlong *)param_1[0x117];
        if (plVar30 == (longlong *)0x0) {
          cVar16 = *(byte *)((longlong)param_1 + 0x6b) & 1;
          local_298 = (undefined8 *)0x0;
        }
        else {
          FUN_1448ac920(&local_178,local_238);
          local_218._8_8_ = uVar7;
          local_218._0_8_ = &PTR_LAB_14aed9770;
          (**(code **)(*plVar30 + 8))(plVar30,&local_1d8,local_218,&local_178);
          dVar34 = local_1d8 + local_1d8;
          dVar36 = dStack_1d0 + dStack_1d0;
          dVar32 = local_1c8 + local_1c8;
          local_178 = (1.0 - (local_1c8 * dVar32 + dStack_1d0 * dVar36)) * local_198;
          dVar8 = (1.0 - (local_1c8 * dVar32 + local_1d8 * dVar34)) * dStack_190;
          local_288 = (1.0 - (local_1d8 * dVar34 + dStack_1d0 * dVar36)) * local_188;
          dStack_170 = (dVar36 * local_1d8 + dVar32 * dStack_1c0) * local_198;
          local_148 = (dVar32 * dStack_1d0 + dVar34 * dStack_1c0) * dStack_190;
          local_138 = (dVar36 * dStack_1c0 + local_1d8 * dVar32) * local_188;
          dVar25 = (dVar34 * dStack_1c0 + local_1d8 * dVar34) * dStack_180;
          unique0x10000600 = SUB84(dVar25,0);
          local_2a8 = (undefined1  [8])local_138;
          unique0x10000604 = (int)((ulonglong)dVar25 >> 0x20);
          local_168 = (local_1d8 * dVar32 - dVar36 * dStack_1c0) * local_198;
          dVar41 = (dVar36 * local_1d8 - dVar32 * dStack_1c0) * dStack_190;
          dStack_130 = (dVar32 * dStack_1d0 - dVar34 * dStack_1c0) * local_188;
          dStack_280 = 0.0;
          local_268._8_4_ = SUB84(dStack_130,0);
          local_268._0_8_ = dStack_130;
          local_268._12_4_ = (int)((ulonglong)dStack_130 >> 0x20);
          uStack_160 = 0;
          local_258 = local_1a8;
          uStack_250 = uStack_1a0;
          dVar32 = local_1a8 * -0.0;
          dVar25 = local_148 * 0.0 + local_288 * -0.0;
          dVar36 = local_288 * -0.0 + local_168 * 0.0;
          local_158._8_4_ = SUB84(dVar8,0);
          local_158._0_8_ = dVar41;
          local_158._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          uStack_140 = 0;
          uStack_120 = 0;
          dVar34 = local_148 * -0.0 + local_168 * 0.0;
          local_118 = local_1b8;
          dStack_110 = dStack_1b0;
          cVar16 = ((dStack_1b0 * dVar34 +
                    ((local_148 + dVar32) * dStack_170 - (dVar32 + local_168) * dVar8)) * local_138
                   + ((dStack_1b0 * dVar25 +
                      (dVar8 * (local_288 + dVar32) - (local_148 + dVar32) * dStack_130)) *
                      local_178 -
                     (dStack_1b0 * dVar36 +
                     ((local_288 + dVar32) * dStack_170 - (dVar32 + local_168) * dStack_130)) *
                     dVar41)) -
                   (dVar34 * dStack_130 + (dVar25 * dStack_170 - dVar36 * dVar8)) * local_1b8 < 0.0;
          local_108 = local_1a8;
          uStack_100 = 0x3ff0000000000000;
          plVar30 = (longlong *)param_5[0x1d];
          puVar23 = (uint *)*local_278;
          local_128 = local_288;
          if (puVar23 != (uint *)0x0) goto LAB_143b51626;
          while( true ) {
            FUN_14472e504();
            puVar23 = (uint *)*local_278;
LAB_143b51626:
            dVar15 = local_128;
            dVar41 = dStack_130;
            dVar36 = local_138;
            dVar8 = local_148;
            dVar34 = local_168;
            dVar25 = dStack_170;
            dVar32 = local_178;
            puVar29 = (undefined8 *)(*(longlong *)(puVar23 + 0x10) + 7U & 0xfffffffffffffff8);
            uVar28 = puVar23[0x12];
            if (puVar29 + 8 <= puVar23 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar23 + 0x10) = puVar23 + 0x4000;
              LOCK();
              uVar2 = *puVar23;
              *puVar23 = *puVar23 + uVar28 + 1;
              UNLOCK();
              if ((uVar2 ^ uVar28) != 0xffffffff) break;
              puVar23 = (uint *)*local_278;
              *puVar23 = 0xffffffff;
              *(uint **)(puVar23 + 0x10) = puVar23 + 0x16;
              puVar23[0x12] = 0;
              *local_278 = puVar23;
              puVar29 = (undefined8 *)((longlong)puVar23 + 0x5fU & 0xfffffffffffffff8);
              uVar28 = 0;
              if (puVar29 + 8 <= puVar23 + 0x4000) {
                uVar28 = 1;
                goto LAB_143b516a2;
              }
            }
          }
          uVar28 = uVar28 + 1;
LAB_143b516a2:
          *(undefined8 **)(puVar23 + 0x10) = puVar29 + 9;
          puVar23[0x12] = uVar28;
          *(int *)(puVar29 + -1) = ((int)puVar29 + -8) - (int)puVar23;
          *(undefined4 *)((longlong)puVar29 + -4) = 0x40;
          puVar29[1] = 0;
          *puVar29 = &PTR_FUN_14a5a8d50;
          lVar22 = *plVar30;
          do {
            puVar29[1] = lVar22;
            LOCK();
            lVar27 = *plVar30;
            bVar33 = lVar22 == lVar27;
            if (bVar33) {
              *plVar30 = (longlong)puVar29;
              lVar27 = lVar22;
            }
            UNLOCK();
            lVar22 = lVar27;
          } while (!bVar33);
          puVar29[2] = &PTR_FUN_14aa71480;
          *(undefined4 *)(puVar29 + 4) = 0xffffffff;
          *(undefined2 *)((longlong)puVar29 + 0x24) = 0x105;
          *(undefined1 *)((longlong)puVar29 + 0x26) = 0;
          puVar29[3] = &PTR_FUN_14a1ca300;
          *(undefined4 *)(puVar29 + 5) = 2;
          puVar29[6] = 0;
          puVar29[7] = 0;
          bVar24 = *(byte *)((longlong)param_1 + 0x75);
          bVar19 = 1;
          if (bVar24 < 0x40) {
            if ((bVar24 & 8) == 0) {
              bVar19 = 0;
            }
            else {
              bVar19 = (bVar24 & 4) >> 2;
            }
          }
          bVar24 = *(byte *)((longlong)param_1 + 0x77);
          dVar3 = (double)param_1[0x37];
          dVar35 = (double)param_1[0x39];
          uVar13 = local_158._0_8_;
          uVar14 = local_158._8_8_;
          dVar37 = (double)param_1[0x38];
          dVar9 = dVar35 * local_138 + dVar37 * (double)local_158._0_8_ + dVar3 * local_178 +
                  local_118;
          dVar10 = dVar35 * dStack_130 +
                   (double)param_1[0x38] * (double)local_158._8_8_ + dVar3 * dStack_170 + dStack_110
          ;
          dVar42 = (double)param_1[0x3a];
          dVar43 = (double)param_1[0x3a];
          auVar39 = (undefined1  [8])param_1[0x3b];
          dVar40 = (double)param_1[0x3b];
          dVar4 = (double)param_1[0x3c];
          dVar5 = (double)param_1[0x3c];
          dVar3 = dVar35 * local_128 + dVar37 * local_148 + dVar3 * local_168 + local_108;
          dVar35 = local_138 * local_138 +
                   (double)local_158._0_8_ * (double)local_158._0_8_ + local_178 * local_178;
          dVar37 = dStack_130 * dStack_130 +
                   (double)local_158._8_8_ * (double)local_158._8_8_ + dStack_170 * dStack_170;
          dVar38 = local_128 * local_128 + local_168 * local_168 + local_148 * local_148;
          if (dVar35 <= dVar37) {
            dVar35 = dVar37;
          }
          if (dVar35 <= dVar38) {
            dVar35 = dVar38;
          }
          if (dVar35 < 0.0) {
            dStack_2a0 = dVar40;
            local_2a8 = auVar39;
            local_288 = dVar42;
            dStack_280 = dVar43;
            dVar35 = sqrt(dVar35);
            auVar39 = local_2a8;
            dVar40 = dStack_2a0;
            dVar42 = local_288;
            dVar43 = dStack_280;
          }
          else {
            dVar35 = SQRT(dVar35);
          }
          local_298 = puVar29 + 3;
          local_2d8 = bVar24 >> 6 & 1;
          dVar32 = ABS(dVar36 * dVar4) +
                   ABS((double)uVar13 * (double)auVar39) + ABS(dVar32 * dVar42);
          dVar25 = ABS(dVar41 * dVar5) + ABS((double)uVar14 * dVar40) + ABS(dVar25 * dVar43);
          local_1f0 = ABS(dVar15 * dVar4) + ABS(dVar8 * (double)auVar39) + ABS(dVar34 * dVar42);
          dVar34 = SQRT(dVar25 * dVar25 + local_1f0 * local_1f0 + dVar32 * dVar32);
          local_1e8 = dVar35 * (double)param_1[0x3d];
          if (dVar34 <= dVar35 * (double)param_1[0x3d]) {
            local_1e8 = dVar34;
          }
          local_218._8_4_ = SUB84(dVar10,0);
          local_218._0_8_ = dVar9;
          local_218._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_200._8_4_ = SUB84(dVar25,0);
          local_200._0_8_ = dVar32;
          local_200._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
          local_2e0 = local_240;
          local_2e8 = local_240;
          local_2f8 = local_218;
          local_2b8 = 0;
          local_2c8 = 0;
          local_2d0 = 1;
          local_2f0 = local_2f8;
          local_2c0 = bVar19;
          local_208 = dVar3;
          FUN_147ceeaf2(puVar29 + 2,param_5[0x22],&local_178,&local_178);
        }
        FUN_1405e2456(param_1,&local_178,uVar7);
        plVar30 = (longlong *)param_1[0x53];
        if (0 < (int)plVar30[1]) {
          dVar32 = 0.0;
          local_2a9 = cVar16;
          local_220 = uVar31;
          do {
            if ((local_178._0_2_ >> 0xe & 1) != 0) {
              dVar25 = (double)(ulonglong)(local_178._0_2_ >> 7 & 0x7f);
              if ((short)local_178._0_2_ < 0) {
                if ((ulonglong)(local_178._0_2_ & 0x7f) <= (ulonglong)dVar32 &&
                    (ulonglong)dVar32 <= (ulonglong)dVar25) goto LAB_143b50f99;
              }
              else if (dVar32 == dVar25 || dVar32 == (double)(ulonglong)(local_178._0_2_ & 0x7f)) {
LAB_143b50f99:
                if (((longlong)*(int *)((longlong)param_1 + 0x87c) <= (longlong)dVar32) &&
                   (lVar22 = *(longlong *)(*plVar30 + (longlong)dVar32 * 8),
                   0 < *(int *)(lVar22 + 0x38))) {
                  local_268._0_8_ = lVar22 + 0x198;
                  auVar12._12_4_ = 0;
                  auVar12._0_12_ = stack0xfffffffffffffd5c;
                  _local_2a8 = auVar12 << 0x20;
                  local_270 = lVar22;
                  local_258 = dVar32;
                  do {
                    iVar20 = (**(code **)(*param_1 + 0x240))(param_1);
                    local_288 = (double)CONCAT44(local_288._4_4_,iVar20);
                    if (0 < iVar20) {
                      iVar20 = 0;
                      do {
                        iVar26 = (int)param_5[1];
                        iVar6 = (int)param_5[2];
                        iVar11 = (iVar6 + 0x44) / 0x44;
                        *(int *)(param_5 + 2) = iVar6 + 1;
                        if (iVar26 < iVar11) {
                          do {
                            local_28c = iVar26;
                            lVar22 = FUN_14001cc68(0x3fc0,0x10);
                            lVar27 = 0;
                            do {
                              *(undefined8 *)(lVar22 + 0xa8 + lVar27) = 0;
                              puVar29 = (undefined8 *)(lVar22 + 0xb8 + lVar27);
                              *puVar29 = 0;
                              puVar29[1] = 0;
                              *(undefined8 *)(lVar22 + 200 + lVar27) = 0;
                              *(undefined8 *)(lVar22 + 0xd0 + lVar27) = 0xffffffff;
                              *(undefined8 *)(lVar22 + 0xd8 + lVar27) = 0xff0000ffffffff;
                              *(undefined1 *)(lVar22 + 0xe0 + lVar27) = 0;
                              *(undefined4 *)(lVar22 + 0xe4 + lVar27) = 0x40c00f07;
                              pbVar1 = (byte *)(lVar22 + 0xe8 + lVar27);
                              *pbVar1 = *pbVar1 & 0xfc;
                              *(undefined1 **)(lVar22 + 0xb0 + lVar27) = &DAT_100000001;
                              FUN_14470b9e0(lVar22 + lVar27,1);
                              lVar27 = lVar27 + 0xf0;
                            } while (lVar27 != 0x3fc0);
                            iVar26 = (int)param_5[1];
                            *(uint *)(param_5 + 1) = iVar26 + 1U;
                            if (*(uint *)((longlong)param_5 + 0xc) < iVar26 + 1U) {
                              FUN_14002baf6(param_5,iVar26);
                            }
                            *(longlong *)(*param_5 + (longlong)iVar26 * 8) = lVar22;
                            iVar26 = local_28c + 1;
                            param_1 = local_228;
                            uVar31 = local_220;
                            cVar16 = local_2a9;
                          } while (iVar26 != iVar11);
                        }
                        plVar30 = (longlong *)
                                  ((ulonglong)(uint)(iVar6 % 0x44) * 0xf0 +
                                  *(longlong *)(*param_5 + (longlong)(iVar6 / 0x44) * 8));
                        uVar17 = (**(code **)(*param_1 + 0x168))(param_1);
                        dVar32 = local_258;
                        local_2f8 = (undefined1 *)CONCAT71(local_2f8._1_7_,uVar17);
                        local_2e8 = (longlong *)CONCAT71(local_2e8._1_7_,1);
                        local_2f0 = (undefined1 *)((ulonglong)local_2f0 & 0xffffffffffffff00);
                        local_2e0 = plVar30;
                        cVar18 = (**(code **)(*param_1 + 0x250))
                                           (param_1,(ulonglong)local_258 & 0xffffffff,iVar20,
                                            local_2a8._0_4_);
                        if (cVar18 != '\0') {
                          plVar21 = (longlong *)plVar30[0x15];
                          if ((longlong *)plVar30[0x15] == (longlong *)0x0) {
                            plVar21 = plVar30;
                          }
                          if (((*(uint *)(param_1 + 0x110) & 2) == 0) == (bool)cVar16) {
                            bVar24 = (*(byte *)(*(longlong *)
                                                 (*(longlong *)param_1[0x53] + (longlong)dVar32 * 8)
                                               + 0x5c) & 4) >> 2;
                          }
                          else {
                            bVar24 = 0;
                          }
                          uVar28 = (uint)(byte)((*(byte *)((longlong)param_1 + 0x6b) & 1) == 0 ^
                                                (byte)((*(uint *)(param_1 + 0x110) & 2) >> 1) ^ 1)
                                   << 6;
                          if (bVar24 != 0) {
                            uVar28 = 0;
                          }
                          *(uint *)((longlong)plVar30 + 0xe4) =
                               *(uint *)((longlong)plVar30 + 0xe4) & 0xffffffbf | uVar28;
                          lVar22 = local_268._0_8_;
                          if (bVar24 != 0) {
                            lVar22 = *(longlong *)(local_270 + 0x218);
                          }
                          plVar21[3] = lVar22;
                          *(byte *)((longlong)plVar30 + 0xe6) =
                               *(byte *)((longlong)plVar30 + 0xe6) & 0xef;
                          if (local_298 != (undefined8 *)0x0) {
                            plVar21[1] = (longlong)local_298;
                          }
                          if (((char)param_1[0x11a] == '\x01') &&
                             ((longlong *)param_1[0x119] != (longlong *)0x0)) {
                            lVar22 = (**(code **)(*(longlong *)param_1[0x119] + 0x2f0))();
                            plVar30[0x18] = lVar22;
                          }
                          FUN_1436a14f8(param_5,uVar31 & 0xffffffff,plVar30);
                        }
                        iVar20 = iVar20 + 1;
                      } while (iVar20 != local_288._0_4_);
                    }
                    iVar20 = local_2a8._0_4_ + 1;
                    local_2a8._0_4_ = iVar20;
                  } while (iVar20 < *(int *)(local_270 + 0x38));
                  plVar30 = (longlong *)param_1[0x53];
                  param_2 = local_230;
                }
              }
            }
            dVar32 = (double)((longlong)dVar32 + 1);
          } while ((longlong)dVar32 < (longlong)(int)plVar30[1]);
        }
      }
      uVar31 = uVar31 + 1;
    } while ((longlong)uVar31 < (longlong)(int)param_2[1]);
  }
  if ((local_f0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b51a48 FUN_143b51a48 body=76 status=ok
// SIG undefined FUN_143b51a48(void)

undefined8 * FUN_143b51a48(undefined8 *param_1,int param_2)

{
  if (*(char *)(param_1 + 0x35) == '\x01') {
    *(undefined1 *)(param_1 + 0x35) = 0;
  }
  *param_1 = &PTR_FUN_14a9758a8;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b51b12 FUN_143b51b12 body=263 status=ok
// SIG undefined FUN_143b51b12(void)

undefined1 (*) [16] FUN_143b51b12(undefined1 (*param_1) [16],longlong *param_2,double *param_3)

{
  double dVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  pdVar2 = (double *)*param_2;
  dVar8 = *param_3 * pdVar2[8];
  dVar9 = param_3[1] * pdVar2[9];
  dVar7 = param_3[2] * pdVar2[10];
  dVar4 = *pdVar2;
  dVar5 = pdVar2[1];
  dVar6 = pdVar2[2];
  dVar1 = pdVar2[3];
  dVar10 = dVar9 * dVar4 - dVar8 * dVar5;
  dVar11 = dVar7 * dVar5 - dVar9 * dVar6;
  dVar12 = dVar8 * dVar6 - dVar4 * dVar7;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  dVar9 = (dVar6 * dVar11 - dVar4 * dVar10) + pdVar2[3] * dVar12 + dVar9;
  auVar3._8_4_ = SUB84(dVar9,0);
  auVar3._0_8_ = (dVar10 * dVar5 - dVar12 * dVar6) + dVar1 * dVar11 + dVar8;
  auVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *param_1 = auVar3;
  *(double *)param_1[1] = dVar10 * dVar1 + dVar7 + (dVar12 * dVar4 - dVar11 * dVar5);
  return param_1;
}



// FUNCTION 143b51c1a FUN_143b51c1a body=263 status=ok
// SIG undefined FUN_143b51c1a(void)

undefined1 (*) [16] FUN_143b51c1a(undefined1 (*param_1) [16],longlong *param_2,double *param_3)

{
  double dVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  pdVar2 = (double *)*param_2;
  dVar8 = *param_3 * pdVar2[8];
  dVar9 = param_3[1] * pdVar2[9];
  dVar7 = param_3[2] * pdVar2[10];
  dVar4 = *pdVar2;
  dVar5 = pdVar2[1];
  dVar6 = pdVar2[2];
  dVar1 = pdVar2[3];
  dVar10 = dVar9 * dVar4 - dVar8 * dVar5;
  dVar11 = dVar7 * dVar5 - dVar9 * dVar6;
  dVar12 = dVar8 * dVar6 - dVar4 * dVar7;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  dVar9 = (dVar6 * dVar11 - dVar4 * dVar10) + pdVar2[3] * dVar12 + dVar9;
  auVar3._8_4_ = SUB84(dVar9,0);
  auVar3._0_8_ = (dVar10 * dVar5 - dVar12 * dVar6) + dVar1 * dVar11 + dVar8;
  auVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *param_1 = auVar3;
  *(double *)param_1[1] = dVar10 * dVar1 + dVar7 + (dVar12 * dVar4 - dVar11 * dVar5);
  return param_1;
}



// FUNCTION 143b51d22 FUN_143b51d22 body=263 status=ok
// SIG undefined FUN_143b51d22(void)

undefined1 (*) [16] FUN_143b51d22(undefined1 (*param_1) [16],longlong *param_2,double *param_3)

{
  double dVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  pdVar2 = (double *)*param_2;
  dVar8 = *param_3 * pdVar2[8];
  dVar9 = param_3[1] * pdVar2[9];
  dVar7 = param_3[2] * pdVar2[10];
  dVar4 = *pdVar2;
  dVar5 = pdVar2[1];
  dVar6 = pdVar2[2];
  dVar1 = pdVar2[3];
  dVar10 = dVar9 * dVar4 - dVar8 * dVar5;
  dVar11 = dVar7 * dVar5 - dVar9 * dVar6;
  dVar12 = dVar8 * dVar6 - dVar4 * dVar7;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  dVar9 = (dVar6 * dVar11 - dVar4 * dVar10) + pdVar2[3] * dVar12 + dVar9;
  auVar3._8_4_ = SUB84(dVar9,0);
  auVar3._0_8_ = (dVar10 * dVar5 - dVar12 * dVar6) + dVar1 * dVar11 + dVar8;
  auVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *param_1 = auVar3;
  *(double *)param_1[1] = dVar10 * dVar1 + dVar7 + (dVar12 * dVar4 - dVar11 * dVar5);
  return param_1;
}



// FUNCTION 143b51e2a FUN_143b51e2a body=73 status=ok
// SIG undefined FUN_143b51e2a(void)

void FUN_143b51e2a(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = FUN_141210e3a();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      uVar3 = param_1[1];
      goto LAB_143b51e65;
    }
  }
  uVar3 = 0;
LAB_143b51e65:
  FUN_14844dbee(*param_1,uVar3);
  return;
}



// FUNCTION 143b51e8a FUN_143b51e8a body=29 status=ok
// SIG undefined FUN_143b51e8a(void)

undefined8 FUN_143b51e8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b51ea8 FUN_143b51ea8 body=56 status=ok
// SIG undefined FUN_143b51ea8(void)

void FUN_143b51ea8(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x180);
  plVar3 = (longlong *)(lVar1 + 0x1a0);
  if (*(longlong **)(lVar1 + 400) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 400);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b51edd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



// FUNCTION 143b51ef6 FUN_143b51ef6 body=29 status=ok
// SIG undefined FUN_143b51ef6(void)

undefined8 FUN_143b51ef6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b51f14 FUN_143b51f14 body=72 status=ok
// SIG undefined FUN_143b51f14(void)

void FUN_143b51f14(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x1c0);
  plVar4 = (longlong *)(lVar1 + 0x1e0);
  if (*(longlong **)(lVar1 + 0x1d0) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x1d0);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b51f59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,uVar2,param_3);
  return;
}



// FUNCTION 143b51f72 FUN_143b51f72 body=29 status=ok
// SIG undefined FUN_143b51f72(void)

undefined8 FUN_143b51f72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b51f90 FUN_143b51f90 body=121 status=ok
// SIG undefined FUN_143b51f90(void)

void FUN_143b51f90(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_1458f2010();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = FUN_1458f2010();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) {
        param_1 = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000143b52006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x620) + 0x10))(param_1 + 0x620,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 143b5200a FUN_143b5200a body=121 status=ok
// SIG undefined FUN_143b5200a(void)

void FUN_143b5200a(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = FUN_1458f2010();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      lVar2 = FUN_1458f2010();
      iVar1 = *(int *)(lVar2 + 0x38);
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < iVar1) ||
         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != lVar2 + 0x30)) {
        param_1 = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000143b52080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x620) + 0x18))
                (param_1 + 0x620,CONCAT71((int7)(int3)((uint)iVar1 >> 8),param_2 == '\0'));
      return;
    }
  }
  return;
}



// FUNCTION 143b52084 FUN_143b52084 body=29 status=ok
// SIG undefined FUN_143b52084(void)

undefined8 FUN_143b52084(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b52220 FUN_143b52220 body=93 status=ok
// SIG undefined FUN_143b52220(void)

void FUN_143b52220(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedb1c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aedb150;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b5227e FUN_143b5227e body=93 status=ok
// SIG undefined FUN_143b5227e(void)

void FUN_143b5227e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedb1c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aedb150;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b522dc FUN_143b522dc body=126 status=ok
// SIG undefined FUN_143b522dc(void)

void FUN_143b522dc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aedb1c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aedb150;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143b5234b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143b52378 FUN_143b52378 body=291 status=ok
// SIG undefined FUN_143b52378(void)

undefined8 FUN_143b52378(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143b52495;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143b52495;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143b52495:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143b52427;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14844ddd6(*(longlong *)(param_1 + 0x20) + 0x40,*(longlong *)(param_1 + 0x20),
                    &DAT_14c8463b8,param_3 >> 0x20);
      uVar6 = 1;
      goto LAB_143b52427;
    }
  }
  uVar6 = 0;
LAB_143b52427:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5249c FUN_143b5249c body=29 status=ok
// SIG undefined FUN_143b5249c(void)

undefined8 FUN_143b5249c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b52638 FUN_143b52638 body=93 status=ok
// SIG undefined FUN_143b52638(void)

void FUN_143b52638(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedb1c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aedb230;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b52696 FUN_143b52696 body=93 status=ok
// SIG undefined FUN_143b52696(void)

void FUN_143b52696(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedb1c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aedb230;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b526f4 FUN_143b526f4 body=126 status=ok
// SIG undefined FUN_143b526f4(void)

void FUN_143b526f4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aedb1c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aedb230;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143b52763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143b52772 FUN_143b52772 body=117 status=ok
// SIG undefined FUN_143b52772(void)

void FUN_143b52772(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  uint uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = DAT_14c8463c8 ^ 0x8000000000000000;
  uStack_1c = DAT_14c8463b8._4_4_ ^ 0x80000000;
  uStack_14 = DAT_14c8463c0._4_4_ ^ 0x80000000;
  local_20 = (undefined4)DAT_14c8463b8;
  uStack_18 = (undefined4)DAT_14c8463c0;
  FUN_14844ddd6(*(longlong *)(param_1 + 0x20) + 0x40,*(longlong *)(param_1 + 0x20),&local_20,
                (int)((ulonglong)param_3 >> 0x20) + -0x80000000);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b527e8 FUN_143b527e8 body=335 status=ok
// SIG undefined FUN_143b527e8(void)

undefined8 FUN_143b527e8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  uint uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143b52931;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143b52931;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar7 = CONCAT44(uStack_3c,local_40);
  }
  else {
LAB_143b52931:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143b52897;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_30 = DAT_14c8463c8 ^ 0x8000000000000000;
      uStack_3c = DAT_14c8463b8._4_4_ ^ 0x80000000;
      uStack_34 = DAT_14c8463c0._4_4_ ^ 0x80000000;
      local_40 = (undefined4)DAT_14c8463b8;
      uStack_38 = (undefined4)DAT_14c8463c0;
      FUN_14844ddd6(*(longlong *)(param_1 + 0x20) + 0x40,*(longlong *)(param_1 + 0x20),&local_40,
                    (int)((ulonglong)param_3 >> 0x20) + -0x80000000);
      uVar6 = 1;
      goto LAB_143b52897;
    }
  }
  uVar6 = 0;
LAB_143b52897:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b52938 FUN_143b52938 body=29 status=ok
// SIG undefined FUN_143b52938(void)

undefined8 FUN_143b52938(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b52ad4 FUN_143b52ad4 body=93 status=ok
// SIG undefined FUN_143b52ad4(void)

void FUN_143b52ad4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedb1c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aedb2a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b52b32 FUN_143b52b32 body=93 status=ok
// SIG undefined FUN_143b52b32(void)

void FUN_143b52b32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedb1c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aedb2a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b52b90 FUN_143b52b90 body=126 status=ok
// SIG undefined FUN_143b52b90(void)

void FUN_143b52b90(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aedb1c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aedb2a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143b52bff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143b52c2c FUN_143b52c2c body=291 status=ok
// SIG undefined FUN_143b52c2c(void)

undefined8 FUN_143b52c2c(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143b52d49;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143b52d49;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143b52d49:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143b52cdb;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14844ddd6(*(longlong *)(param_1 + 0x20) + 0x40,*(longlong *)(param_1 + 0x20),
                    &DAT_14c846388,param_3 >> 0x20);
      uVar6 = 1;
      goto LAB_143b52cdb;
    }
  }
  uVar6 = 0;
LAB_143b52cdb:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b52d50 FUN_143b52d50 body=29 status=ok
// SIG undefined FUN_143b52d50(void)

undefined8 FUN_143b52d50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b52d82 FUN_143b52d82 body=101 status=ok
// SIG undefined FUN_143b52d82(void)

void FUN_143b52d82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aedb310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 143b52de8 FUN_143b52de8 body=101 status=ok
// SIG undefined FUN_143b52de8(void)

void FUN_143b52de8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aedb310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 143b52e4e FUN_143b52e4e body=134 status=ok
// SIG undefined FUN_143b52e4e(void)

void FUN_143b52e4e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a7feda0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aedb310;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143b52ec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143b52ed4 FUN_143b52ed4 body=143 status=ok
// SIG undefined FUN_143b52ed4(void)

void FUN_143b52ed4(longlong param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *(undefined8 *)(param_2 + 0x240);
  uStack_60 = *(undefined8 *)(param_2 + 0x248);
  local_58 = *(undefined8 *)(param_2 + 0x250);
  uStack_50 = *(undefined8 *)(param_2 + 600);
  local_48 = *(undefined4 *)(param_2 + 0x260);
  uStack_44 = *(undefined4 *)(param_2 + 0x264);
  uStack_40 = *(undefined4 *)(param_2 + 0x268);
  uStack_3c = *(undefined4 *)(param_2 + 0x26c);
  local_38 = *(undefined4 *)(param_2 + 0x270);
  uStack_34 = *(undefined4 *)(param_2 + 0x274);
  uStack_30 = *(undefined4 *)(param_2 + 0x278);
  uStack_2c = *(undefined4 *)(param_2 + 0x27c);
  local_28 = *(undefined4 *)(param_1 + 0x20);
  uStack_24 = *(undefined4 *)(param_1 + 0x24);
  uStack_20 = *(undefined4 *)(param_1 + 0x28);
  uStack_1c = *(undefined4 *)(param_1 + 0x2c);
  local_18 = *(undefined8 *)(param_1 + 0x30);
  uStack_10 = 0;
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 0x98) + 0x2b8))();
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b52f64 FUN_143b52f64 body=145 status=ok
// SIG undefined FUN_143b52f64(void)

undefined8 FUN_143b52f64(longlong param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *(undefined8 *)(param_2 + 0x240);
  uStack_60 = *(undefined8 *)(param_2 + 0x248);
  local_58 = *(undefined8 *)(param_2 + 0x250);
  uStack_50 = *(undefined8 *)(param_2 + 600);
  local_48 = *(undefined4 *)(param_2 + 0x260);
  uStack_44 = *(undefined4 *)(param_2 + 0x264);
  uStack_40 = *(undefined4 *)(param_2 + 0x268);
  uStack_3c = *(undefined4 *)(param_2 + 0x26c);
  local_38 = *(undefined4 *)(param_2 + 0x270);
  uStack_34 = *(undefined4 *)(param_2 + 0x274);
  uStack_30 = *(undefined4 *)(param_2 + 0x278);
  uStack_2c = *(undefined4 *)(param_2 + 0x27c);
  local_28 = *(undefined4 *)(param_1 + 0x20);
  uStack_24 = *(undefined4 *)(param_1 + 0x24);
  uStack_20 = *(undefined4 *)(param_1 + 0x28);
  uStack_1c = *(undefined4 *)(param_1 + 0x2c);
  local_18 = *(undefined8 *)(param_1 + 0x30);
  uStack_10 = 0;
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 0x98) + 0x2b8))();
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b52ff6 FUN_143b52ff6 body=121 status=ok
// SIG undefined FUN_143b52ff6(void)

void FUN_143b52ff6(undefined8 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = *param_2;
  local_30 = *param_1;
  lVar1 = param_1[1];
  pcVar2 = *(code **)(lVar1 + 0x100);
  plVar4 = (longlong *)(lVar1 + 0x120);
  if (*(longlong **)(lVar1 + 0x110) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x110);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_30,&local_21);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5309a FUN_143b5309a body=29 status=ok
// SIG undefined FUN_143b5309a(void)

undefined8 FUN_143b5309a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b530b8 FUN_143b530b8 body=56 status=ok
// SIG undefined FUN_143b530b8(void)

void FUN_143b530b8(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x180);
  plVar3 = (longlong *)(lVar1 + 0x1a0);
  if (*(longlong **)(lVar1 + 400) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 400);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b530ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



// FUNCTION 143b53106 FUN_143b53106 body=29 status=ok
// SIG undefined FUN_143b53106(void)

undefined8 FUN_143b53106(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b53124 FUN_143b53124 body=72 status=ok
// SIG undefined FUN_143b53124(void)

void FUN_143b53124(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x1c0);
  plVar4 = (longlong *)(lVar1 + 0x1e0);
  if (*(longlong **)(lVar1 + 0x1d0) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x1d0);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b53169. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,uVar2,param_3);
  return;
}



// FUNCTION 143b53182 FUN_143b53182 body=29 status=ok
// SIG undefined FUN_143b53182(void)

undefined8 FUN_143b53182(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b531a0 FUN_143b531a0 body=286 status=ok
// SIG undefined FUN_143b531a0(void)

void FUN_143b531a0(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)*param_1;
  lVar3 = plVar2[9];
  if (lVar3 != 0) {
    lVar4 = FUN_1459d7362();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      if (((*(int *)((longlong)param_1 + 0xc) == 0) ||
          (((uVar1 = *(uint *)(param_1 + 1), (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
           (plVar7 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar7 == (longlong *)0x0)))) ||
         (((int)plVar7[2] != *(int *)((longlong)param_1 + 0xc) ||
          ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) {
        local_28 = DAT_14c8464f0;
        local_38 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_30 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
      else {
        if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
          lVar4 = *plVar7;
        }
        else {
          lVar4 = 0;
        }
        puVar5 = &DAT_14c846480;
        if (*(longlong *)(lVar4 + 0x1c8) != 0) {
          puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1c8) + 0x240);
        }
        local_38 = puVar5[4];
        uStack_30 = puVar5[5];
        local_28 = puVar5[6];
      }
      uVar6 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
      FUN_148437be0(lVar3,uVar6,&local_38);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b532d6 FUN_143b532d6 body=29 status=ok
// SIG undefined FUN_143b532d6(void)

undefined8 FUN_143b532d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b532f4 FUN_143b532f4 body=56 status=ok
// SIG undefined FUN_143b532f4(void)

void FUN_143b532f4(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x3b0);
  plVar3 = (longlong *)(lVar1 + 0x3d0);
  if (*(longlong **)(lVar1 + 0x3c0) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x3c0);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b53329. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



// FUNCTION 143b53342 FUN_143b53342 body=29 status=ok
// SIG undefined FUN_143b53342(void)

undefined8 FUN_143b53342(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b53360 FUN_143b53360 body=72 status=ok
// SIG undefined FUN_143b53360(void)

void FUN_143b53360(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x3f0);
  plVar4 = (longlong *)(lVar1 + 0x410);
  if (*(longlong **)(lVar1 + 0x400) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x400);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b533a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,uVar2,param_3);
  return;
}



// FUNCTION 143b533be FUN_143b533be body=29 status=ok
// SIG undefined FUN_143b533be(void)

undefined8 FUN_143b533be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b533dc FUN_143b533dc body=56 status=ok
// SIG undefined FUN_143b533dc(void)

void FUN_143b533dc(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x3b0);
  plVar3 = (longlong *)(lVar1 + 0x3d0);
  if (*(longlong **)(lVar1 + 0x3c0) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x3c0);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b53411. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



// FUNCTION 143b5342a FUN_143b5342a body=29 status=ok
// SIG undefined FUN_143b5342a(void)

undefined8 FUN_143b5342a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b53448 FUN_143b53448 body=72 status=ok
// SIG undefined FUN_143b53448(void)

void FUN_143b53448(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x3f0);
  plVar4 = (longlong *)(lVar1 + 0x410);
  if (*(longlong **)(lVar1 + 0x400) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x400);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b5348d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,uVar2,param_3);
  return;
}



// FUNCTION 143b534a6 FUN_143b534a6 body=29 status=ok
// SIG undefined FUN_143b534a6(void)

undefined8 FUN_143b534a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b534c4 FUN_143b534c4 body=56 status=ok
// SIG undefined FUN_143b534c4(void)

void FUN_143b534c4(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x3b0);
  plVar3 = (longlong *)(lVar1 + 0x3d0);
  if (*(longlong **)(lVar1 + 0x3c0) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x3c0);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b534f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



// FUNCTION 143b53512 FUN_143b53512 body=29 status=ok
// SIG undefined FUN_143b53512(void)

undefined8 FUN_143b53512(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b53530 FUN_143b53530 body=72 status=ok
// SIG undefined FUN_143b53530(void)

void FUN_143b53530(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x3f0);
  plVar4 = (longlong *)(lVar1 + 0x410);
  if (*(longlong **)(lVar1 + 0x400) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x400);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b53575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,uVar2,param_3);
  return;
}



// FUNCTION 143b5358e FUN_143b5358e body=29 status=ok
// SIG undefined FUN_143b5358e(void)

undefined8 FUN_143b5358e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b535e4 FUN_143b535e4 body=29 status=ok
// SIG undefined FUN_143b535e4(void)

undefined8 FUN_143b535e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b53602 FUN_143b53602 body=56 status=ok
// SIG undefined FUN_143b53602(void)

void FUN_143b53602(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x260);
  plVar3 = (longlong *)(lVar1 + 0x280);
  if (*(longlong **)(lVar1 + 0x270) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x270);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b53637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



// FUNCTION 143b53650 FUN_143b53650 body=29 status=ok
// SIG undefined FUN_143b53650(void)

undefined8 FUN_143b53650(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5366e FUN_143b5366e body=72 status=ok
// SIG undefined FUN_143b5366e(void)

void FUN_143b5366e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x2a0);
  plVar3 = (longlong *)(lVar1 + 0x2c0);
  if (*(longlong **)(lVar1 + 0x2b0) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x2b0);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b536b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,param_2,param_3);
  return;
}



// FUNCTION 143b536cc FUN_143b536cc body=29 status=ok
// SIG undefined FUN_143b536cc(void)

undefined8 FUN_143b536cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b536ea FUN_143b536ea body=56 status=ok
// SIG undefined FUN_143b536ea(void)

void FUN_143b536ea(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x3b0);
  plVar3 = (longlong *)(lVar1 + 0x3d0);
  if (*(longlong **)(lVar1 + 0x3c0) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x3c0);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b5371f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



// FUNCTION 143b53738 FUN_143b53738 body=29 status=ok
// SIG undefined FUN_143b53738(void)

undefined8 FUN_143b53738(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b53756 FUN_143b53756 body=72 status=ok
// SIG undefined FUN_143b53756(void)

void FUN_143b53756(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x3f0);
  plVar4 = (longlong *)(lVar1 + 0x410);
  if (*(longlong **)(lVar1 + 0x400) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x400);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b5379b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,uVar2,param_3);
  return;
}



// FUNCTION 143b537b4 FUN_143b537b4 body=29 status=ok
// SIG undefined FUN_143b537b4(void)

undefined8 FUN_143b537b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b537d2 FUN_143b537d2 body=56 status=ok
// SIG undefined FUN_143b537d2(void)

void FUN_143b537d2(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x3b0);
  plVar3 = (longlong *)(lVar1 + 0x3d0);
  if (*(longlong **)(lVar1 + 0x3c0) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x3c0);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b53807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



// FUNCTION 143b53820 FUN_143b53820 body=29 status=ok
// SIG undefined FUN_143b53820(void)

undefined8 FUN_143b53820(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5383e FUN_143b5383e body=72 status=ok
// SIG undefined FUN_143b5383e(void)

void FUN_143b5383e(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x3f0);
  plVar4 = (longlong *)(lVar1 + 0x410);
  if (*(longlong **)(lVar1 + 0x400) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x400);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b53883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,uVar2,param_3);
  return;
}



// FUNCTION 143b5389c FUN_143b5389c body=29 status=ok
// SIG undefined FUN_143b5389c(void)

undefined8 FUN_143b5389c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b538ba FUN_143b538ba body=56 status=ok
// SIG undefined FUN_143b538ba(void)

void FUN_143b538ba(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x3b0);
  plVar3 = (longlong *)(lVar1 + 0x3d0);
  if (*(longlong **)(lVar1 + 0x3c0) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x3c0);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b538ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



// FUNCTION 143b53908 FUN_143b53908 body=29 status=ok
// SIG undefined FUN_143b53908(void)

undefined8 FUN_143b53908(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b53926 FUN_143b53926 body=72 status=ok
// SIG undefined FUN_143b53926(void)

void FUN_143b53926(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x3f0);
  plVar4 = (longlong *)(lVar1 + 0x410);
  if (*(longlong **)(lVar1 + 0x400) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x400);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b5396b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,uVar2,param_3);
  return;
}



// FUNCTION 143b53984 FUN_143b53984 body=29 status=ok
// SIG undefined FUN_143b53984(void)

undefined8 FUN_143b53984(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b539a2 FUN_143b539a2 body=27 status=ok
// SIG undefined FUN_143b539a2(void)

void FUN_143b539a2(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*param_2 + 0x240);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 143b539d4 FUN_143b539d4 body=29 status=ok
// SIG undefined FUN_143b539d4(void)

undefined8 FUN_143b539d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b539f2 FUN_143b539f2 body=125 status=ok
// SIG undefined FUN_143b539f2(void)

void FUN_143b539f2(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar2 = local_88;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  local_98 = 0;
  FUN_140613f88(*param_1,local_88,0,0);
  (**(code **)(*(longlong *)*param_1 + 0x3c8))((longlong *)*param_1,1,0);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b53a86 FUN_143b53a86 body=29 status=ok
// SIG undefined FUN_143b53a86(void)

undefined8 FUN_143b53a86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b53b36 FUN_143b53b36 body=29 status=ok
// SIG undefined FUN_143b53b36(void)

undefined8 FUN_143b53b36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b53b88 FUN_143b53b88 body=269 status=ok
// SIG undefined FUN_143b53b88(void)

void FUN_143b53b88(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  iVar1 = *(int *)(*param_1 + 0x294);
  if (((iVar1 != 0) && (uVar2 = *(uint *)(*param_1 + 0x290), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar6 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == iVar1)) &&
       ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar6;
      }
      else {
        lVar5 = 0;
      }
      local_18 = *(undefined8 *)(param_2 + 0x38);
      uStack_10 = *(undefined8 *)(param_2 + 0x40);
      uVar4 = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(lVar5 + 0x88) = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(lVar5 + 0x90) = uVar4;
      *(undefined1 *)(lVar5 + 0xb0) = 1;
      *(undefined8 *)(lVar5 + 0x98) = local_18;
      *(undefined8 *)(lVar5 + 0xa0) = uStack_10;
      lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0xc0) + 0x100);
      *(undefined4 *)(lVar5 + 0xa8) =
           *(undefined4 *)(lVar3 + 0xa8 + (ulonglong)*(byte *)(lVar3 + 0xac) * 8);
      *(undefined4 *)(lVar5 + 0xac) =
           *(undefined4 *)(*(longlong *)(*(longlong *)(lVar5 + 0xc0) + 0x100) + 0xb4);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b53cac FUN_143b53cac body=29 status=ok
// SIG undefined FUN_143b53cac(void)

undefined8 FUN_143b53cac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b53cca FUN_143b53cca body=201 status=ok
// SIG undefined FUN_143b53cca(void)

void FUN_143b53cca(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  if (((*(int *)(lVar2 + 0x294) != 0) && (uVar1 = *(uint *)(lVar2 + 0x290), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == *(int *)(lVar2 + 0x294))) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar4;
      }
      else {
        uVar3 = 0;
      }
      local_38 = *(undefined4 *)(param_2 + 0x38);
      uStack_34 = *(undefined4 *)(param_2 + 0x3c);
      uStack_30 = *(undefined4 *)(param_2 + 0x40);
      uStack_2c = *(undefined4 *)(param_2 + 0x44);
      FUN_14843f4b4(uVar3);
      FUN_1484400a8(lVar2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b53dbe FUN_143b53dbe body=29 status=ok
// SIG undefined FUN_143b53dbe(void)

undefined8 FUN_143b53dbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b53e14 FUN_143b53e14 body=29 status=ok
// SIG undefined FUN_143b53e14(void)

undefined8 FUN_143b53e14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b53e6a FUN_143b53e6a body=29 status=ok
// SIG undefined FUN_143b53e6a(void)

undefined8 FUN_143b53e6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b53ec0 FUN_143b53ec0 body=29 status=ok
// SIG undefined FUN_143b53ec0(void)

undefined8 FUN_143b53ec0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b53f16 FUN_143b53f16 body=29 status=ok
// SIG undefined FUN_143b53f16(void)

undefined8 FUN_143b53f16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b53f6c FUN_143b53f6c body=29 status=ok
// SIG undefined FUN_143b53f6c(void)

undefined8 FUN_143b53f6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b53fc2 FUN_143b53fc2 body=29 status=ok
// SIG undefined FUN_143b53fc2(void)

undefined8 FUN_143b53fc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b53fe0 FUN_143b53fe0 body=29 status=ok
// SIG undefined FUN_143b53fe0(void)

undefined8 FUN_143b53fe0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b54012 FUN_143b54012 body=93 status=ok
// SIG undefined FUN_143b54012(void)

void FUN_143b54012(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedba20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aedb9b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143b54070 FUN_143b54070 body=93 status=ok
// SIG undefined FUN_143b54070(void)

void FUN_143b54070(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedba20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aedb9b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143b540ce FUN_143b540ce body=126 status=ok
// SIG undefined FUN_143b540ce(void)

void FUN_143b540ce(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aedba20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aedb9b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143b5413d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143b5415e FUN_143b5415e body=24 status=ok
// SIG undefined FUN_143b5415e(void)

undefined8 FUN_143b5415e(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x300))();
  return 1;
}



// FUNCTION 143b54176 FUN_143b54176 body=29 status=ok
// SIG undefined FUN_143b54176(void)

undefined8 FUN_143b54176(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b541a8 FUN_143b541a8 body=93 status=ok
// SIG undefined FUN_143b541a8(void)

void FUN_143b541a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedba20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aedba90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143b54206 FUN_143b54206 body=93 status=ok
// SIG undefined FUN_143b54206(void)

void FUN_143b54206(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedba20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aedba90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143b54264 FUN_143b54264 body=126 status=ok
// SIG undefined FUN_143b54264(void)

void FUN_143b54264(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aedba20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aedba90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143b542d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143b542f4 FUN_143b542f4 body=24 status=ok
// SIG undefined FUN_143b542f4(void)

undefined8 FUN_143b542f4(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x300))();
  return 1;
}



// FUNCTION 143b5430c FUN_143b5430c body=2477 status=ok
// SIG undefined FUN_143b5430c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b5430c(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeb7210,1,0);
  FUN_1400b22c2(local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(local_50,&DAT_14cb4ac60);
  if (cVar1 == '\0') {
    _DAT_14cb4ac60 = 0;
    uRam000000014cb4ac68 = 0;
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeb7f60,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeb8d60,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeb9bc0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeba370,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14aebaeb0;
  local_68 = 0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aebaed0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aebbda0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aebc520,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aebce20,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aebd890,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aebe050,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aebe810,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aebf050,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aebf940,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aec0210,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aec0af0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aec14e0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",0,0,&PTR_FUN_14aec1c40);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aec23e0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aec2c60,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aec3430,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aec60b0,9,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aec6ff0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aec7f50,1,0);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb4b088);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb4b088,4000);
  atexit((_func_5014 *)&LAB_143b504a8);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aec8360,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aec8ac0,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeca0f0,4,0);
  FUN_140056680(&DAT_14cb4b158,L"IntervalGizmo");
  atexit((_func_5014 *)&LAB_143b508e6);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aecaad0,2,&PTR_FUN_14aecaaa0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aecb7e0,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aecc080,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeccfb0,3,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aecdec0,4,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aece2d0,1,0);
  FUN_140056680(&DAT_14cb4b2e0,L"Util_StandardXFormAxisTranslationGizmo");
  atexit((_func_5014 *)&LAB_143b508f7);
  FUN_140056680(&DAT_14cb4b2f0,L"Util_StandardXFormPlaneTranslationGizmo");
  atexit((_func_5014 *)&LAB_143b50908);
  FUN_140056680(&DAT_14cb4b300,L"Util_StandardXFormAxisRotationGizmo");
  atexit((_func_5014 *)&LAB_143b50919);
  FUN_140056680(&DAT_14cb4b310,L"Util_DefaultThreeAxisTransformBuilderIdentifier");
  atexit((_func_5014 *)&LAB_143b5092a);
  FUN_140056680(&DAT_14cb4b320,L"Util_CustomThreeAxisTransformBuilderIdentifier");
  atexit((_func_5014 *)&LAB_143b5093b);
  FUN_140056680(&DAT_14cb4b330,L"Util_CustomRepositionableThreeAxisTransformBuilderIdentifier");
  atexit((_func_5014 *)&LAB_143b5094c);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aecea00,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aecfdc0,5,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aed1040,3,&PTR_FUN_14aed1010);
  FUN_140056680(&DAT_14cb4b430,L"BrushIndicatorGizmoType");
  atexit((_func_5014 *)&LAB_143b50a6e);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aed1f80,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aed2a00,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aed32c0,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aed3850,1,0);
  DAT_14cb4b548 = 0;
  DAT_14cb4b550 = 0;
  DAT_14cb4b528 = 0;
  _DAT_14cb4b530 = 0;
  _DAT_14cb4b554 = 0xffffffff00000080;
  _DAT_14cb4b55c = 0;
  DAT_14cb4b568 = 0;
  _DAT_14cb4b570 = 0;
  atexit(FUN_143b50a90);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aed3cb0,1,0);
  ppuStack_60 = &PTR_FUN_14aed41f0;
  local_68 = 0;
  local_58 = 3;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aed4250,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aed4e00,3,&PTR_FUN_14aed4dd0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aed5330,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14aed6310;
  local_68 = 6;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",0,0,&PTR_FUN_14aed6330);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aed6780,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14aed6d70;
  local_68 = 0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aed6d90,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aed7460,1,&PTR_FUN_14aed7430);
  FUN_140056680(&DAT_14cb4b168,L"StandardXFormAxisTranslationGizmo");
  atexit((_func_5014 *)&LAB_143b50bcc);
  FUN_140056680(&DAT_14cb4b788,L"StandardXFormPlaneTranslationGizmo");
  atexit((_func_5014 *)&LAB_143b50bdd);
  FUN_140056680(&DAT_14cb4b798,L"StandardXFormAxisRotationGizmo");
  atexit((_func_5014 *)&LAB_143b50bee);
  FUN_140056680(&DAT_14cb4b7a8,L"DefaultThreeAxisTransformBuilderIdentifier");
  atexit((_func_5014 *)&LAB_143b50bff);
  FUN_140056680(&DAT_14cb4b7c8,L"CustomThreeAxisTransformBuilderIdentifier");
  atexit((_func_5014 *)&LAB_143b50c10);
  FUN_140056680(&DAT_14cb4b7d8,L"CustomRepositionableThreeAxisTransformBuilderIdentifier");
  atexit((_func_5014 *)&LAB_143b50c21);
  FUN_140056680(&DAT_14cb4b7b8,L"DefaultScalableSphereBuilderIdentifier");
  atexit((_func_5014 *)&LAB_143b50c32);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14aed8440;
  local_68 = 0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aed8460,2,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b54cbc FUN_143b54cbc body=55 status=ok
// SIG undefined FUN_143b54cbc(void)

void FUN_143b54cbc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4b8a0 == 0) {
    uVar1 = FUN_140fdab72();
    DAT_14cb4b8a0 = FUN_14171c317(FUN_14648fb4a,uVar1,L"EToolSide");
  }
  return;
}



// FUNCTION 143b54cf3 FUN_143b54cf3 body=55 status=ok
// SIG undefined FUN_143b54cf3(void)

void FUN_143b54cf3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4b8b8 == 0) {
    uVar1 = FUN_140fdab72();
    DAT_14cb4b8b8 = FUN_14171c317(FUN_14648fb79,uVar1,L"EToolChangeTrackingMode");
  }
  return;
}



// FUNCTION 143b54d2a FUN_143b54d2a body=55 status=ok
// SIG undefined FUN_143b54d2a(void)

void FUN_143b54d2a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4b8d0 == 0) {
    uVar1 = FUN_140fdab72();
    DAT_14cb4b8d0 = FUN_14171c317(FUN_14648fba8,uVar1,L"EToolManagerToolSwitchMode");
  }
  return;
}



// FUNCTION 143b54d62 FUN_143b54d62 body=684 status=ok
// SIG undefined FUN_143b54d62(void)

undefined8
FUN_143b54d62(longlong *param_1,longlong *param_2,undefined4 param_3,char param_4,longlong *param_5)

{
  code *pcVar1;
  void *_Src;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong *local_58 [2];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_4 != '\0') {
    if ((longlong)(int)param_1[9] != 0) {
      lVar5 = 0;
      do {
        if ((*(int *)(param_1[8] + 8 + lVar5) != 0) && (*(longlong *)(param_1[8] + lVar5) != 0)) {
          local_68 = *(undefined1 *)((longlong)param_1 + 0xf9);
          FUN_148458424(param_1 + 8,param_1,param_2,param_5);
          goto LAB_143b54f24;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)(int)param_1[9] * 0x10 != lVar5);
    }
    plVar4 = (longlong *)*param_5;
    if (*(code **)(*plVar4 + 0x50) != FUN_144828418) {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x50))();
    }
    FUN_1447a1fc0(plVar4);
    param_5 = (longlong *)*param_5;
    pcVar1 = *(code **)(*param_5 + 0x28);
    if (pcVar1 == FUN_14482841c) {
      plVar4 = param_5 + 3;
      if (param_5[5] != 0) {
        plVar4 = (longlong *)(param_5[5] + 8);
      }
    }
    else if (pcVar1 == (code *)&LAB_14010c34c) {
      plVar4 = param_5 + 2;
    }
    else {
      plVar4 = (longlong *)(*pcVar1)(param_5);
    }
    if ((int)plVar4[1] < 2) {
      if (param_2 == (longlong *)0x0) {
        FUN_140056680(&local_48,L"(Null Tool)");
      }
      else {
        (**(code **)(*param_2 + 0x360))(param_2,local_58);
        plVar4 = local_58[0];
        if (*(code **)(*local_58[0] + 0x50) != FUN_144828418) {
          plVar4 = (longlong *)(**(code **)(*local_58[0] + 0x50))();
        }
        FUN_1447a1fc0(plVar4);
        pcVar1 = *(code **)(*local_58[0] + 0x28);
        if (pcVar1 == FUN_14482841c) {
          plVar4 = local_58[0] + 3;
          if (local_58[0][5] != 0) {
            plVar4 = (longlong *)(local_58[0][5] + 8);
          }
        }
        else if (pcVar1 == (code *)&LAB_14010c34c) {
          plVar4 = local_58[0] + 2;
        }
        else {
          plVar4 = (longlong *)(*pcVar1)(local_58[0]);
        }
        local_48 = (void *)0x0;
        local_40 = (int)plVar4[1];
        lVar5 = (longlong)local_40;
        _Src = (void *)*plVar4;
        if (lVar5 == 0) {
          local_3c = 0;
        }
        else {
          FUN_1446dd670(&local_48,local_40,0);
          memcpy(local_48,_Src,lVar5 * 2);
        }
        if (local_58[0] != (longlong *)0x0) {
          (**(code **)(*local_58[0] + 0x10))();
        }
      }
      if (local_48 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143b54f24:
  if (*(char *)((longlong)param_1 + 0xf9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xfa) = 1;
  }
  else {
    if ((param_2 == (longlong *)0x0) ||
       (((longlong *)param_1[0xb] != param_2 && ((longlong *)param_1[0xc] != param_2)))) {
      uVar3 = 0;
      goto LAB_143b54fa5;
    }
    if ((((int)param_1[7] != 0) && ((longlong *)param_1[6] != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*(longlong *)param_1[6] + 0x30))(), cVar2 != '\0')) {
      if ((int)param_1[7] == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)param_1[6];
      }
      cVar2 = (**(code **)(*plVar4 + 0x58))(plVar4,param_1,param_2,param_3);
      uVar3 = 1;
      if (cVar2 != '\0') goto LAB_143b54fa5;
    }
    (**(code **)(*param_1 + 0x330))(param_1,((longlong *)param_1[0xb] != param_2) + '\x01',param_3);
  }
  uVar3 = 1;
LAB_143b54fa5:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 143b55010 FUN_143b55010 body=132 status=ok
// SIG undefined FUN_143b55010(void)

void FUN_143b55010(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x2e8))();
  if (cVar2 != '\0') {
    cVar2 = '\x02';
    if ((char)param_1[1] != '\x02') {
      plVar3 = (longlong *)
               (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x308))
                         (*(longlong **)(lVar1 + 0x68),param_2,2);
      cVar2 = (**(code **)(*plVar3 + 0x2d8))(plVar3);
      if (cVar2 == '\0') {
        cVar2 = '\0';
      }
      else {
        cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x68) + 800))
                          (*(longlong **)(lVar1 + 0x68),param_2);
        cVar2 = '\x02' - cVar2;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000143b55091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x330))(*(longlong **)(lVar1 + 0x68),param_2,cVar2)
    ;
    return;
  }
  return;
}



// FUNCTION 143b55094 FUN_143b55094 body=55 status=ok
// SIG undefined FUN_143b55094(void)

void FUN_143b55094(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4b938 == 0) {
    uVar1 = FUN_140fdab72();
    DAT_14cb4b938 = FUN_14171c317(FUN_14648fd79,uVar1,L"ESceneSnapQueryType");
  }
  return;
}



// FUNCTION 143b550cb FUN_143b550cb body=55 status=ok
// SIG undefined FUN_143b550cb(void)

void FUN_143b550cb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4b950 == 0) {
    uVar1 = FUN_140fdab72();
    DAT_14cb4b950 = FUN_14171c317(FUN_14648fda8,uVar1,L"ESceneSnapQueryTargetType");
  }
  return;
}



// FUNCTION 143b55102 FUN_143b55102 body=619 status=ok
// SIG undefined FUN_143b55102(void)

undefined4 FUN_143b55102(longlong param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_148 [32];
  char **local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  char *local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined2 local_cf;
  undefined1 local_cd;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  longlong local_90;
  undefined8 local_88;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  dVar1 = param_2[5];
  dVar2 = param_2[4];
  dVar3 = param_2[3];
  dVar4 = param_2[2];
  dVar5 = param_2[1];
  dVar6 = *param_2;
  cVar7 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x2a0))(param_1 + -0x28);
  if (cVar7 == '\0') {
    uVar8 = 0;
    goto LAB_143b552ce;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_143b55310:
    plVar11 = (longlong *)0x0;
  }
  else {
    uVar9 = *(uint *)(param_1 + 8);
    plVar11 = (longlong *)0x0;
    if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
      if ((puVar10 == (undefined8 *)0x0) ||
         ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0xc) ||
          ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_143b55310;
      plVar11 = (longlong *)*puVar10;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb4ba38) {
    FUN_144b3d300();
    if (DAT_14cb4ba38 == -1) {
      local_e0 = "HitTest";
      local_d8 = CONCAT35(local_d8._5_3_,7);
      uVar9 = FUN_14001a6c0(&local_e0,1);
      DAT_14cb4ba30 = (char *)(ulonglong)uVar9;
      _Init_thread_footer();
    }
  }
  local_128 = &local_e0;
  local_bc = 0;
  local_d8 = 0;
  local_b8 = 0x101;
  local_90 = 0;
  local_88 = 0x800000000;
  local_70 = 0;
  local_68 = 0x400000000;
  local_d0 = 1;
  local_c4 = 0;
  local_e0 = DAT_14cb4ba30;
  local_cf = 1;
  local_cd = 0;
  local_c0 = 0;
  local_cc = 0x1000000;
  local_c8 = 1;
  local_108 = param_2[2];
  local_118 = *(undefined4 *)param_2;
  uStack_114 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_110 = *(undefined4 *)(param_2 + 1);
  uStack_10c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_f8 = dVar3 * 4398046511104.0 + dVar6;
  local_f0 = dVar2 * 4398046511104.0 + dVar5;
  local_e8 = dVar1 * 4398046511104.0 + dVar4;
  uVar8 = (**(code **)(*plVar11 + 0x978))(plVar11,param_3);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
LAB_143b552ce:
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5536e FUN_143b5536e body=46 status=ok
// SIG undefined FUN_143b5536e(void)

longlong * FUN_143b5536e(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1484584f7(*param_1);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1[2]);
  return plVar1;
}



// FUNCTION 143b5539c FUN_143b5539c body=35 status=ok
// SIG undefined FUN_143b5539c(void)

void FUN_143b5539c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x2e0))();
                    /* WARNING: Could not recover jumptable at 0x000143b553b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a8))(param_1);
  return;
}



// FUNCTION 143b553c0 FUN_143b553c0 body=810 status=ok
// SIG undefined FUN_143b553c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_143b553c0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined4 local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined4 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = *param_1;
  if ((((*(int *)(lVar5 + 0x304) == 0) || (uVar1 = *(uint *)(lVar5 + 0x300), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar8 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(lVar5 + 0x304))) ||
      (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (lVar4 = *plVar8, lVar4 == 0)))))) {
    if (*(longlong *)(lVar5 + 0x308) != 0) {
      lVar4 = FUN_140007850(lVar5 + 0x308);
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      lVar10 = DAT_14c9647c8;
      if ((lVar4 == 0) || (cVar2 == '\0')) {
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar4 + 0xc);
          *(uint *)(lVar5 + 0x300) = uVar1;
          if (DAT_14c9647dc <= (int)uVar1) goto LAB_143b554f0;
          lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          goto LAB_143b554f3;
        }
        *(undefined8 *)(lVar5 + 0x300) = 0;
      }
      else {
        uVar1 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) + 8 +
                        (ulonglong)(uVar1 & 0xffff) * 0x18) & 0x8400000) == 0) {
            *(uint *)(lVar5 + 0x300) = uVar1;
            lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(lVar10 + (ulonglong)(uVar1 >> 0x10) * 8);
LAB_143b554f3:
            iVar3 = *(int *)(lVar10 + 0x10);
            if (*(int *)(lVar10 + 0x10) == 0) {
              LOCK();
              iVar3 = DAT_14c964868 + 1;
              UNLOCK();
              iVar9 = DAT_14c964868 + 1;
              bVar11 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar3;
              if (bVar11) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar9);
              }
              LOCK();
              iVar3 = *(int *)(lVar10 + 0x10);
              bVar11 = iVar3 == 0;
              if (bVar11) {
                *(int *)(lVar10 + 0x10) = iVar9;
                iVar3 = 0;
              }
              UNLOCK();
              if (bVar11) {
                iVar3 = iVar9;
              }
            }
            *(int *)(lVar5 + 0x304) = iVar3;
          }
        }
        else if ((_DAT_00000008 & 0x8400000) == 0) {
          *(uint *)(lVar5 + 0x300) = uVar1;
LAB_143b554f0:
          lVar10 = 0;
          goto LAB_143b554f3;
        }
        if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) goto LAB_143b5550f;
      }
    }
  }
  else {
LAB_143b5550f:
    if (DAT_14c949118 == 0) {
      local_40 = FUN_140631fbe;
      lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar5;
      FUN_1446f470e(local_38,L"Class",1);
      local_58 = &LAB_146891e90;
      local_60 = &LAB_146273097;
      local_70 = L"Engine";
      local_68 = 199;
      local_78 = 0x20;
      local_80 = 0x10000000;
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,8);
      local_50 = &local_40;
      FUN_14574b4b2(lVar5);
      DAT_14c949118 = lVar5;
      uVar6 = FUN_144a7a812();
      lVar5 = DAT_14c949118;
      uVar7 = FUN_1449e2fb2();
      local_88 = L"Class";
      FUN_14574b446(uVar7,lVar5,uVar6,L"/Script/CoreUObject");
    }
    if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
        (lVar5 = FUN_14594bb10(), lVar5 != 0)) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))
       ) {
      lVar10 = 0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        lVar10 = lVar4;
      }
      goto LAB_143b5556e;
    }
  }
  lVar10 = 0;
LAB_143b5556e:
  plVar8 = (longlong *)FUN_1484585cf(*param_2,lVar10);
  (**(code **)(*plVar8 + 0x2a0))(plVar8,param_2[1],param_2[2],param_2[3]);
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar8;
}



// FUNCTION 143b55702 FUN_143b55702 body=29 status=ok
// SIG undefined FUN_143b55702(void)

undefined8 FUN_143b55702(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5572a FUN_143b5572a body=37 status=ok
// SIG undefined FUN_143b5572a(void)

longlong * FUN_143b5572a(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14845869d(*param_1);
  (**(code **)(*plVar1 + 0x2e8))(plVar1);
  return plVar1;
}



// FUNCTION 143b55752 FUN_143b55752 body=66 status=ok
// SIG undefined FUN_143b55752(void)

longlong * FUN_143b55752(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_148458775(*param_1);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1[1],param_1[2],param_1[3]);
  (**(code **)(*plVar1 + 800))(plVar1);
  return plVar1;
}



// FUNCTION 143b557c0 FUN_143b557c0 body=1036 status=ok
// SIG undefined FUN_143b557c0(void)

void FUN_143b557c0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint *puVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  code *local_170;
  undefined1 *local_168;
  code **local_160;
  code *local_158;
  code *local_150;
  ulonglong local_140;
  longlong *local_138;
  uint *local_130;
  longlong local_128;
  code *local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  puVar13 = (uint *)(param_1 + 0x250);
  uVar19 = *(uint *)(param_1 + 0x268);
  uVar15 = (ulonglong)uVar19;
  local_138 = param_2;
  if (uVar19 == 0) {
    uVar16 = 1;
    uVar18 = 0;
    iVar14 = 0;
    uVar6 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar7 = puVar13;
    }
    uVar6 = *puVar7;
    if (uVar6 == 0) {
      iVar14 = uVar19 + 0x1e;
      if (-1 < (int)(uVar19 - 1)) {
        iVar14 = uVar19 - 1;
      }
      uVar18 = 0;
      uVar16 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar16 = uVar18;
      }
      iVar14 = 0;
      do {
        if (uVar16 == uVar18) goto LAB_143b55b95;
        iVar14 = iVar14 + 0x20;
        uVar6 = puVar7[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar18 = 0;
      iVar14 = 0;
    }
    uVar16 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar16 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if ((int)uVar19 <= (int)uVar6) {
      uVar6 = uVar19;
    }
  }
  if (uVar6 != uVar19) {
    uVar19 = 0xffffffff;
    local_140 = uVar15;
    local_130 = puVar13;
    do {
      pcVar3 = *(code **)(*(longlong *)(param_1 + 0x240) + (longlong)(int)uVar6 * 0x10);
      if (pcVar3 != (code *)0x0) {
        local_120 = pcVar3;
        (*(code *)*param_3)(param_3[1],&local_120);
        if (DAT_14cabf8d0 == 0) {
          local_120 = FUN_144a7958c;
          local_150 = FUN_14081d0ea;
          local_158 = FUN_142b47bc4;
          local_160 = &local_120;
          local_168 = &LAB_147860ffd;
          local_170 = FUN_1463713dc;
          local_178 = L"Engine";
          local_180 = 0;
          local_188 = 0x10000005;
          local_190 = 0x10;
          local_198 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
        }
        uVar15 = local_140;
        if (((*(int *)(DAT_14cabf8d0 + 0x38) <= *(int *)(*(longlong *)(pcVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(pcVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cabf8d0 + 0x38) * 8) == DAT_14cabf8d0 + 0x30)) &&
           (lVar8 = (**(code **)(*(longlong *)pcVar3 + 0x5d8))(pcVar3), uVar1 = local_50,
           uVar15 = local_140, lVar8 != 0)) {
          lVar12 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar1 & 0xffffffff);
          }
          puVar9 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar9 = local_118;
          }
          *(longlong *)(puVar9 + lVar12 * 8) = lVar8;
          puVar13 = local_130;
          uVar15 = local_140;
        }
      }
      plVar5 = local_138;
      uVar19 = uVar19 & ~(uint)uVar16;
      puVar7 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar7 = puVar13;
      }
      uVar2 = *(uint *)(param_1 + 0x268);
      iVar17 = (int)uVar18;
      lVar8 = (longlong)iVar17;
      uVar6 = puVar7[lVar8] & uVar19;
      if (uVar6 == 0) {
        iVar10 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar10 = uVar2 - 1;
        }
        iVar10 = iVar10 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar17) {
          iVar11 = iVar17;
        }
        if (iVar17 < iVar10) {
          lVar12 = 0;
          do {
            uVar6 = puVar7[lVar8 + lVar12 + 1];
            if (uVar6 != 0) {
              uVar18 = (ulonglong)(iVar17 + (int)lVar12 + 1);
              uVar19 = 0xffffffff;
              goto LAB_143b55a01;
            }
            iVar14 = iVar14 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar11 - lVar8 != lVar12);
          uVar19 = 0xffffffff;
          iVar17 = iVar11;
        }
        uVar18 = (ulonglong)(iVar17 + 1);
        uVar15 = local_140;
        uVar6 = uVar2;
      }
      else {
LAB_143b55a01:
        uVar16 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar16 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar6) {
          uVar6 = uVar2;
        }
      }
    } while (uVar6 != (uint)uVar15);
    lVar8 = (longlong)(int)local_50;
    puVar9 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar9 = local_58;
    }
    if (lVar8 != 0) {
      lVar12 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar9 + lVar12);
        local_128 = *plVar5;
        if ((local_128 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_143b557c0(uVar4,&local_128,param_3);
        lVar12 = lVar12 + 8;
      } while (lVar8 * 8 != lVar12);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143b55b95:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b55bce FUN_143b55bce body=1342 status=ok
// SIG undefined FUN_143b55bce(void)

void FUN_143b55bce(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  code *local_170;
  undefined1 *local_168;
  code **local_160;
  code *local_158;
  code *local_150;
  uint *local_140;
  undefined8 *local_138;
  longlong *local_130;
  longlong local_128;
  code *local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  puVar17 = (uint *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x268);
  local_138 = param_3;
  local_130 = param_2;
  if (iVar2 == 0) {
    uVar18 = 1;
    uVar19 = 0;
    iVar15 = 0;
    iVar7 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar9 = puVar17;
    }
    uVar16 = *puVar9;
    if (uVar16 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar19 = 0;
      uVar18 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar18 = uVar19;
      }
      iVar15 = 0;
      do {
        if (uVar18 == uVar19) goto LAB_143b560d5;
        iVar15 = iVar15 + 0x20;
        uVar16 = puVar9[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar19 = 0;
      iVar15 = 0;
    }
    uVar18 = (ulonglong)(-uVar16 & uVar16);
    uVar1 = uVar18 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar7 = (iVar15 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 != iVar2) {
    uVar16 = 0xffffffff;
    local_140 = puVar17;
    do {
      pcVar4 = *(code **)(*(longlong *)(param_1 + 0x240) + (longlong)iVar7 * 0x10);
      if (pcVar4 != (code *)0x0) {
        lVar10 = *local_130;
        if ((lVar10 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar10);
          puVar17 = local_140;
LAB_143b55d08:
          if (DAT_14cad00c8 == 0) {
            local_120 = FUN_144a7958c;
            local_150 = FUN_14081d0ea;
            local_158 = FUN_14081d0ea;
            local_160 = &local_120;
            local_168 = &LAB_1479b7a0c;
            local_170 = (code *)&LAB_1463b464e;
            local_178 = L"Engine";
            local_180 = 0;
            local_188 = 0x10000005;
            local_190 = 8;
            local_198 = 0x110;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar17 = local_140;
            if (DAT_14cad00c8 == 0) goto LAB_143b55d21;
          }
          if (*(int *)(lVar10 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_143b55d21;
          if (*(longlong *)
               (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar10 = 0;
          }
        }
        else {
          if (lVar10 != 0) goto LAB_143b55d08;
LAB_143b55d21:
          lVar10 = 0;
        }
        if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(pcVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pcVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
          local_120 = pcVar4;
          (*(code *)*local_138)(local_138[1],&local_120);
          puVar17 = local_140;
        }
        if (DAT_14cabf8d0 == 0) {
          local_120 = FUN_144a7958c;
          local_150 = FUN_14081d0ea;
          local_158 = FUN_142b47bc4;
          local_160 = &local_120;
          local_168 = &LAB_147860ffd;
          local_170 = FUN_1463713dc;
          local_178 = L"Engine";
          local_180 = 0;
          local_188 = 0x10000005;
          local_190 = 0x10;
          local_198 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
          puVar17 = local_140;
        }
        if (((*(int *)(DAT_14cabf8d0 + 0x38) <= *(int *)(*(longlong *)(pcVar4 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(pcVar4 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cabf8d0 + 0x38) * 8) == DAT_14cabf8d0 + 0x30)) &&
           (lVar10 = (**(code **)(*(longlong *)pcVar4 + 0x5d8))(pcVar4), uVar1 = local_50,
           puVar17 = local_140, lVar10 != 0)) {
          lVar14 = (longlong)(int)local_50;
          uVar8 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar8);
          if (local_50._4_4_ < uVar8) {
            FUN_1470e9d72(local_118,uVar1 & 0xffffffff);
          }
          puVar11 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar11 = local_118;
          }
          *(longlong *)(puVar11 + lVar14 * 8) = lVar10;
          puVar17 = local_140;
        }
      }
      puVar6 = local_138;
      uVar16 = uVar16 & ~(uint)uVar18;
      puVar9 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar9 = puVar17;
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar7 = (int)uVar19;
      lVar10 = (longlong)iVar7;
      uVar8 = puVar9[lVar10] & uVar16;
      if (uVar8 == 0) {
        iVar12 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar12 = iVar3 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar7) {
          iVar13 = iVar7;
        }
        if (iVar7 < iVar12) {
          lVar14 = 0;
          do {
            uVar8 = puVar9[lVar10 + lVar14 + 1];
            if (uVar8 != 0) {
              uVar19 = (ulonglong)(iVar7 + (int)lVar14 + 1);
              uVar16 = 0xffffffff;
              goto LAB_143b55e78;
            }
            iVar15 = iVar15 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar13 - lVar10 != lVar14);
          uVar16 = 0xffffffff;
          iVar7 = iVar13;
        }
        uVar19 = (ulonglong)(iVar7 + 1);
        puVar17 = local_140;
        iVar7 = iVar3;
      }
      else {
LAB_143b55e78:
        uVar18 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar18 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = (iVar15 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar2);
    lVar10 = (longlong)(int)local_50;
    puVar11 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar11 = local_58;
    }
    if (lVar10 != 0) {
      lVar14 = 0;
      do {
        uVar5 = *(undefined8 *)(puVar11 + lVar14);
        local_128 = *local_130;
        if ((local_128 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_143b55bce(uVar5,&local_128,puVar6);
        lVar14 = lVar14 + 8;
      } while (lVar10 * 8 != lVar14);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143b560d5:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b56146 FUN_143b56146 body=12 status=ok
// SIG undefined FUN_143b56146(void)

void FUN_143b56146(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b5614f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b56152 FUN_143b56152 body=29 status=ok
// SIG undefined FUN_143b56152(void)

undefined8 FUN_143b56152(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b56170 FUN_143b56170 body=97 status=ok
// SIG undefined FUN_143b56170(void)

void FUN_143b56170(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  cVar2 = (**(code **)(*(longlong *)*param_1 + 0x2b0))((longlong *)*param_1,uVar1,param_1[1]);
  if (cVar2 != '\0') {
    local_20 = uVar1;
    (**(code **)param_1[2])(((undefined8 *)param_1[2])[1]);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b561d2 FUN_143b561d2 body=67 status=ok
// SIG undefined FUN_143b561d2(void)

undefined8 FUN_143b561d2(undefined8 *param_1,undefined8 *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  cVar1 = (**(code **)(*(longlong *)*param_1 + 0x2b0))((longlong *)*param_1,uVar2,param_1[1]);
  if (cVar1 != '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)param_1[2];
                    /* WARNING: Could not recover jumptable at 0x000143b56209. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(((undefined8 *)param_1[2])[1],uVar2,UNRECOVERED_JUMPTABLE);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143b5623c FUN_143b5623c body=12 status=ok
// SIG undefined FUN_143b5623c(void)

void FUN_143b5623c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b56245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b56248 FUN_143b56248 body=29 status=ok
// SIG undefined FUN_143b56248(void)

undefined8 FUN_143b56248(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5629e FUN_143b5629e body=12 status=ok
// SIG undefined FUN_143b5629e(void)

void FUN_143b5629e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b562a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b562aa FUN_143b562aa body=29 status=ok
// SIG undefined FUN_143b562aa(void)

undefined8 FUN_143b562aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b56300 FUN_143b56300 body=12 status=ok
// SIG undefined FUN_143b56300(void)

void FUN_143b56300(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b56309. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b5630c FUN_143b5630c body=29 status=ok
// SIG undefined FUN_143b5630c(void)

undefined8 FUN_143b5630c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5633a FUN_143b5633a body=539 status=ok
// SIG undefined FUN_143b5633a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b5633a(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aedc290,2,0);
  ppuStack_60 = &PTR_FUN_14aedca80;
  local_68 = 0;
  local_58 = 3;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aedcae0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aedd290,1,0);
  local_48 = -0x7ffffffeb5122d48;
  local_34 = 0x19;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14648fc46(&local_48);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aedd7e0,1,0);
  ppuStack_60 = &PTR_FUN_14aeddc50;
  local_68 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aeddc90,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aede510,2,0);
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cb4b9a8);
  if (cVar1 == '\0') {
    _DAT_14cb4b9a8 = 0;
    uRam000000014cb4b9b0 = 0;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aedea30,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aedf160,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InteractiveToolsFramework",&PTR_FUN_14aedf810,2,0);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b56558 FUN_143b56558 body=57 status=ok
// SIG undefined FUN_143b56558(void)

void FUN_143b56558(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4baa0 == 0) {
    uVar1 = FUN_1464902c9();
    DAT_14cb4baa0 = FUN_14171c317(FUN_1464902fa,uVar1,L"ETextureImportFloatingPointFormat");
  }
  return;
}



// FUNCTION 143b56591 FUN_143b56591 body=57 status=ok
// SIG undefined FUN_143b56591(void)

void FUN_143b56591(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bab8 == 0) {
    uVar1 = FUN_1464902c9();
    DAT_14cb4bab8 = FUN_14171c317(FUN_146490329,uVar1,L"ETextureImportPNGInfill");
  }
  return;
}



// FUNCTION 143b565ca FUN_143b565ca body=370 status=ok
// SIG undefined FUN_143b565ca(void)

void FUN_143b565ca(longlong *param_1,byte param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (0 < param_1[2]) {
    lVar5 = *param_1;
    lVar10 = param_1[1];
    bVar9 = false;
    lVar11 = 0;
    do {
      if (0 < lVar10) {
        lVar7 = 0;
        do {
          uVar1 = *(uint *)(lVar5 + lVar7 * 4);
          if (uVar1 < 0xff000000) {
            if ((uVar1 == *(uint *)(param_1 + 3) | param_2) != 1) {
              return;
            }
            bVar9 = (bool)(bVar9 | uVar1 == *(uint *)(param_1 + 3));
          }
          lVar7 = lVar7 + 1;
        } while (lVar10 != lVar7);
      }
      lVar11 = lVar11 + 1;
      lVar5 = lVar5 + lVar10 * 4;
    } while (lVar11 != param_1[2]);
    if ((bVar9) && (FUN_1484599c6(param_1), 0 < param_1[2])) {
      lVar11 = 0;
      lVar5 = 0;
      lVar10 = -1;
      do {
        cVar3 = FUN_148459a7e();
        lVar7 = lVar11;
        if (cVar3 == '\0') {
          if (lVar10 == -1) {
            lVar5 = lVar11 + 1;
            lVar7 = -1;
          }
          else {
            lVar8 = param_1[1];
            lVar7 = lVar10;
            if (0 < lVar8) {
              lVar6 = 0;
              do {
                lVar2 = *param_1;
                lVar4 = lVar8 * lVar10 + lVar6;
                lVar8 = lVar11 * lVar8 + lVar6;
                *(undefined1 *)(lVar2 + 2 + lVar8 * 4) = *(undefined1 *)(lVar2 + 2 + lVar4 * 4);
                *(undefined1 *)(lVar2 + 1 + lVar8 * 4) = *(undefined1 *)(lVar2 + 1 + lVar4 * 4);
                *(undefined1 *)(lVar2 + lVar8 * 4) = *(undefined1 *)(lVar2 + lVar4 * 4);
                lVar6 = lVar6 + 1;
                lVar8 = param_1[1];
              } while (lVar6 < lVar8);
            }
          }
        }
        lVar11 = lVar11 + 1;
        lVar10 = lVar7;
      } while (lVar11 < param_1[2]);
      if (lVar5 < param_1[2] && 0 < lVar5) {
        lVar10 = param_1[1];
        lVar11 = 0;
        do {
          if (0 < lVar10) {
            lVar7 = 0;
            do {
              lVar8 = *param_1;
              lVar6 = lVar10 * lVar5 + lVar7;
              lVar10 = lVar11 * lVar10 + lVar7;
              *(undefined1 *)(lVar8 + 2 + lVar10 * 4) = *(undefined1 *)(lVar8 + 2 + lVar6 * 4);
              *(undefined1 *)(lVar8 + 1 + lVar10 * 4) = *(undefined1 *)(lVar8 + 1 + lVar6 * 4);
              *(undefined1 *)(lVar8 + lVar10 * 4) = *(undefined1 *)(lVar8 + lVar6 * 4);
              lVar7 = lVar7 + 1;
              lVar10 = param_1[1];
            } while (lVar7 < lVar10);
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 != lVar5);
      }
    }
  }
  return;
}



// FUNCTION 143b5673c FUN_143b5673c body=392 status=ok
// SIG undefined FUN_143b5673c(void)

void FUN_143b5673c(longlong *param_1,byte param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (0 < param_1[2]) {
    lVar4 = *param_1;
    lVar9 = param_1[1];
    bVar8 = false;
    lVar10 = 0;
    do {
      if (0 < lVar9) {
        lVar6 = 0;
        do {
          lVar7 = *(longlong *)(lVar4 + lVar6 * 8);
          if ((short)((ulonglong)lVar7 >> 0x30) != -1) {
            if ((lVar7 == param_1[3] | param_2) != 1) {
              return;
            }
            bVar8 = (bool)(bVar8 | lVar7 == param_1[3]);
          }
          lVar6 = lVar6 + 1;
        } while (lVar9 != lVar6);
      }
      lVar10 = lVar10 + 1;
      lVar4 = lVar4 + lVar9 * 8;
    } while (lVar10 != param_1[2]);
    if ((bVar8) && (FUN_14845a18a(param_1), 0 < param_1[2])) {
      lVar10 = 0;
      lVar4 = 0;
      lVar9 = -1;
      do {
        cVar2 = FUN_14845a242();
        lVar6 = lVar10;
        if (cVar2 == '\0') {
          if (lVar9 == -1) {
            lVar4 = lVar10 + 1;
            lVar6 = -1;
          }
          else {
            lVar7 = param_1[1];
            lVar6 = lVar9;
            if (0 < lVar7) {
              lVar5 = 0;
              do {
                lVar1 = *param_1;
                lVar3 = lVar7 * lVar9 + lVar5;
                lVar7 = lVar10 * lVar7 + lVar5;
                *(undefined2 *)(lVar1 + lVar7 * 8) = *(undefined2 *)(lVar1 + lVar3 * 8);
                *(undefined2 *)(lVar1 + 2 + lVar7 * 8) = *(undefined2 *)(lVar1 + 2 + lVar3 * 8);
                *(undefined2 *)(lVar1 + 4 + lVar7 * 8) = *(undefined2 *)(lVar1 + 4 + lVar3 * 8);
                lVar5 = lVar5 + 1;
                lVar7 = param_1[1];
              } while (lVar5 < lVar7);
            }
          }
        }
        lVar10 = lVar10 + 1;
        lVar9 = lVar6;
      } while (lVar10 < param_1[2]);
      if (lVar4 < param_1[2] && 0 < lVar4) {
        lVar9 = param_1[1];
        lVar10 = 0;
        do {
          if (0 < lVar9) {
            lVar6 = 0;
            do {
              lVar7 = *param_1;
              lVar5 = lVar9 * lVar4 + lVar6;
              lVar9 = lVar10 * lVar9 + lVar6;
              *(undefined2 *)(lVar7 + lVar9 * 8) = *(undefined2 *)(lVar7 + lVar5 * 8);
              *(undefined2 *)(lVar7 + 2 + lVar9 * 8) = *(undefined2 *)(lVar7 + 2 + lVar5 * 8);
              *(undefined2 *)(lVar7 + 4 + lVar9 * 8) = *(undefined2 *)(lVar7 + 4 + lVar5 * 8);
              lVar6 = lVar6 + 1;
              lVar9 = param_1[1];
            } while (lVar6 < lVar9);
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != lVar4);
      }
    }
  }
  return;
}



// FUNCTION 143b568c4 FUN_143b568c4 body=207 status=ok
// SIG undefined FUN_143b568c4(void)

void FUN_143b568c4(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **ppuStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  ppuStack_40 = &PTR_FUN_14aee07c0;
  local_48 = 0;
  local_38 = 2;
  FUN_14282b410(L"/Script/TextureUtilitiesCommon",&PTR_FUN_14aee0800,1,0);
  local_38 = 0;
  local_48 = 0;
  ppuStack_40 = (undefined **)0x0;
  FUN_14282b410(L"/Script/TextureUtilitiesCommon",&PTR_FUN_14aee0c70,1,0);
  local_30 = 0x800000014aee1046;
  local_1c = 0x16;
  local_28 = FUN_14577453c();
  local_24 = 1;
  FUN_14171c728(&DAT_14cb4baf8,&local_30);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b56994 FUN_143b56994 body=55 status=ok
// SIG undefined FUN_143b56994(void)

void FUN_143b56994(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bb20 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bb20 = FUN_14171c317(FUN_1464904f6,uVar1,L"ERecomputeUVsPropertiesUnwrapType");
  }
  return;
}



// FUNCTION 143b569cb FUN_143b569cb body=55 status=ok
// SIG undefined FUN_143b569cb(void)

void FUN_143b569cb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bb38 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bb38 = FUN_14171c317(FUN_146490525,uVar1,L"ERecomputeUVsPropertiesIslandMode");
  }
  return;
}



// FUNCTION 143b56a02 FUN_143b56a02 body=55 status=ok
// SIG undefined FUN_143b56a02(void)

void FUN_143b56a02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bb50 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bb50 = FUN_14171c317(FUN_146490554,uVar1,L"ERecomputeUVsToolOrientationMode");
  }
  return;
}



// FUNCTION 143b56a39 FUN_143b56a39 body=55 status=ok
// SIG undefined FUN_143b56a39(void)

void FUN_143b56a39(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bb68 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bb68 = FUN_14171c317(FUN_146490583,uVar1,L"ERecomputeUVsPropertiesLayoutType");
  }
  return;
}



// FUNCTION 143b56a70 FUN_143b56a70 body=55 status=ok
// SIG undefined FUN_143b56a70(void)

void FUN_143b56a70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bb98 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bb98 = FUN_14171c317(FUN_146490664,uVar1,L"EFlattenCurveMethod");
  }
  return;
}



// FUNCTION 143b56aa7 FUN_143b56aa7 body=55 status=ok
// SIG undefined FUN_143b56aa7(void)

void FUN_143b56aa7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bbb0 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bbb0 = FUN_14171c317(FUN_146490693,uVar1,L"ECombineCurvesMethod");
  }
  return;
}



// FUNCTION 143b56ade FUN_143b56ade body=55 status=ok
// SIG undefined FUN_143b56ade(void)

void FUN_143b56ade(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bbc8 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bbc8 = FUN_14171c317(FUN_1464906c2,uVar1,L"EOffsetClosedCurvesMethod");
  }
  return;
}



// FUNCTION 143b56b15 FUN_143b56b15 body=55 status=ok
// SIG undefined FUN_143b56b15(void)

void FUN_143b56b15(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bbe0 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bbe0 = FUN_14171c317(FUN_1464906f1,uVar1,L"EOffsetOpenCurvesMethod");
  }
  return;
}



// FUNCTION 143b56b4c FUN_143b56b4c body=55 status=ok
// SIG undefined FUN_143b56b4c(void)

void FUN_143b56b4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bbf8 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bbf8 = FUN_14171c317(FUN_146490720,uVar1,L"EOffsetJoinMethod");
  }
  return;
}



// FUNCTION 143b56b83 FUN_143b56b83 body=55 status=ok
// SIG undefined FUN_143b56b83(void)

void FUN_143b56b83(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bc10 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bc10 = FUN_14171c317(FUN_14649074f,uVar1,L"EOpenCurveEndShapes");
  }
  return;
}



// FUNCTION 143b56bba FUN_143b56bba body=55 status=ok
// SIG undefined FUN_143b56bba(void)

void FUN_143b56bba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bc28 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bc28 = FUN_14171c317(FUN_14649077e,uVar1,L"EUVLayoutType");
  }
  return;
}



// FUNCTION 143b56bf1 FUN_143b56bf1 body=55 status=ok
// SIG undefined FUN_143b56bf1(void)

void FUN_143b56bf1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bc58 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bc58 = FUN_14171c317(FUN_146490834,uVar1,L"ENormalCalculationMethod");
  }
  return;
}



// FUNCTION 143b56c28 FUN_143b56c28 body=55 status=ok
// SIG undefined FUN_143b56c28(void)

void FUN_143b56c28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bc70 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bc70 = FUN_14171c317(FUN_146490863,uVar1,L"ESplitNormalMethod");
  }
  return;
}



// FUNCTION 143b56c5f FUN_143b56c5f body=55 status=ok
// SIG undefined FUN_143b56c5f(void)

void FUN_143b56c5f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bc88 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bc88 = FUN_14171c317(FUN_146490892,uVar1,L"EHoleFillOpFillType");
  }
  return;
}



// FUNCTION 143b56c96 FUN_143b56c96 body=55 status=ok
// SIG undefined FUN_143b56c96(void)

void FUN_143b56c96(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bca0 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bca0 = FUN_14171c317(FUN_1464908c1,uVar1,L"ERemeshType");
  }
  return;
}



// FUNCTION 143b56ccd FUN_143b56ccd body=55 status=ok
// SIG undefined FUN_143b56ccd(void)

void FUN_143b56ccd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bcb8 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bcb8 = FUN_14171c317(FUN_1464908f0,uVar1,L"ERemeshSmoothingType");
  }
  return;
}



// FUNCTION 143b56d04 FUN_143b56d04 body=1534 status=ok
// SIG undefined FUN_143b56d04(void)

void FUN_143b56d04(longlong param_1,char *param_2)

{
  double dVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  byte bVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  byte local_200;
  byte local_1f8;
  byte local_1f0;
  undefined1 local_1e8;
  longlong local_1d8;
  undefined8 *local_1d0;
  longlong *local_1c8;
  undefined1 local_1c0 [80];
  undefined1 local_170 [80];
  undefined4 local_120;
  undefined8 local_118;
  ulonglong uStack_110;
  undefined1 local_108;
  undefined1 local_100 [80];
  undefined1 local_b0 [80];
  undefined4 local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_143b56dd5;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar12 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar12 = *(longlong **)(param_2 + 0x80);
    }
    uVar10 = (**(code **)(*plVar12 + 8))();
    cVar7 = (*pcVar3)(uVar10);
    *param_2 = cVar7;
    if (cVar7 != '\0') goto LAB_143b56dd5;
  }
  bVar14 = 1;
  if (*(char *)(param_1 + 0xd9) == '\x01') {
    bVar14 = *(byte *)(param_1 + 0xda);
  }
  local_208 = CONCAT31(local_208._1_3_,1);
  bVar4 = true;
  local_200 = bVar14;
  FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),1,1);
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_143b56dd5;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar12 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar12 = *(longlong **)(param_2 + 0x80);
    }
    uVar10 = (**(code **)(*plVar12 + 8))();
    cVar7 = (*pcVar3)(uVar10);
    *param_2 = cVar7;
    if (cVar7 != '\0') goto LAB_143b56dd5;
  }
  local_1d8 = *(longlong *)(param_1 + 8);
  FUN_14845d974(param_1,&local_1c8,*(undefined1 *)(param_1 + 0xa8));
  plVar12 = local_1c8;
  *(undefined1 *)(local_1c8 + 0x4a) = *(undefined1 *)(param_1 + 0x1b1);
  *(undefined1 *)((longlong)local_1c8 + 0x152) = *(undefined1 *)(param_1 + 0xdc);
  *(undefined1 *)(local_1c8 + 0x2a) = *(undefined1 *)(param_1 + 0xdb);
  *(undefined1 *)((longlong)local_1c8 + 0x151) = *(undefined1 *)(param_1 + 0xdd);
  dVar1 = *(double *)(param_1 + 0xd0);
  local_1c8[0x2d] = (longlong)(dVar1 * 0.66);
  local_1c8[0x2e] = (longlong)(dVar1 * 1.33);
  *(undefined1 *)(local_1c8 + 0x27) = *(undefined1 *)(param_1 + 0xde);
  *(bool *)((longlong)local_1c8 + 0x153) = 0.0 < *(float *)(param_1 + 200);
  local_1c8[0x2f] = (longlong)(double)*(float *)(param_1 + 200);
  *(undefined4 *)(local_1c8 + 0x30) = 0;
  if (*(char *)(param_1 + 0xd9) == '\0') {
    bVar2 = *(byte *)(param_1 + 0xd8);
    uVar15 = (uint)bVar2;
    bVar4 = true;
    if (bVar2 != 0) {
      if (bVar2 != 1) {
        if (bVar2 != 2) goto LAB_143b56f13;
        uVar15 = 2;
      }
      *(uint *)(local_1c8 + 0x30) = uVar15;
      uVar15 = 1;
      bVar4 = false;
    }
    *(uint *)(local_1c8 + 0x2b) = uVar15;
  }
LAB_143b56f13:
  *(undefined1 *)((longlong)local_1c8 + 0x154) = *(undefined1 *)(param_1 + 0xdf);
  *(undefined1 *)((longlong)local_1c8 + 0x155) = *(undefined1 *)(param_1 + 0xe0);
  *(undefined4 *)((longlong)local_1c8 + 0x13c) = 0;
  FUN_14845db0c(local_100,param_1 + 0x228);
  local_1f8 = *(byte *)(param_1 + 0xda) ^ 1;
  local_208 = *(undefined4 *)(param_1 + 0xfc);
  local_1e8 = 1;
  local_200 = 1;
  local_1f0 = local_1f8;
  FUN_1482af724(local_100,local_1d8,*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8))
  ;
  uVar6 = uStack_50;
  if (*(char *)(param_1 + 0xe1) == '\x01') {
    FUN_1482f6002(local_58,uStack_50 & 0xffffffff);
    uVar5 = uStack_50 >> 0x20;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    if (((longlong)uVar6 < 0) && ((int)uVar5 != 0)) {
      FUN_1484741c2(&local_58);
    }
    if (*(int *)(param_1 + 0xf4) != 0) {
      FUN_1482b009a(local_100,0,local_1d8,*(undefined8 *)(param_1 + 0xe8));
    }
    if (*(int *)(param_1 + 0xf8) != 0) {
      FUN_1482b009a(local_100,1,local_1d8,*(undefined8 *)(param_1 + 0xe8));
    }
    if (*(int *)(param_1 + 0xfc) != 0) {
      FUN_1482b009a(local_100,2,local_1d8,*(undefined8 *)(param_1 + 0xe8));
    }
  }
  FUN_148349f0e(local_1c0,local_100);
  FUN_14834a01c(local_170,local_b0);
  local_120 = local_60;
  local_118 = local_58;
  uStack_110 = uStack_50;
  local_58 = 0;
  uStack_50 = 0;
  local_108 = 1;
  FUN_14831cf9c(plVar12,local_1c0);
  lVar13 = *(longlong *)(param_1 + 0x100);
  if (lVar13 == 0) {
    lVar13 = *(longlong *)(param_1 + 0x88);
    *(longlong *)(param_1 + 0x100) = lVar13;
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x98);
  }
  if (*(char *)(param_1 + 0x1b0) == '\x01') {
    local_1d0 = (undefined8 *)(param_1 + 0x160);
    puVar11 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
    uVar10 = *(undefined8 *)(param_1 + 0x108);
    puVar11[1] = lVar13;
    puVar11[2] = uVar10;
    *puVar11 = &PTR_FUN_14aee5300;
    puVar16 = (undefined8 *)(param_1 + 0x110);
    puVar17 = puVar11 + 3;
    for (lVar13 = 10; lVar13 != 0; lVar13 = lVar13 + -1) {
      *puVar17 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar17 = puVar17 + 1;
    }
    puVar16 = local_1d0;
    puVar17 = puVar11 + 0xd;
    for (lVar13 = 10; lVar13 != 0; lVar13 = lVar13 + -1) {
      *puVar17 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar17 = puVar17 + 1;
    }
  }
  else {
    puVar11 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    uVar10 = *(undefined8 *)(param_1 + 0x108);
    *puVar11 = &PTR_FUN_14ae73f80;
    puVar11[1] = lVar13;
    puVar11[2] = uVar10;
  }
  plVar12[0x1a] = (longlong)puVar11;
  FUN_14845dbaa(plVar12 + 0x42,param_1 + 0x1c0);
  lVar13 = local_1d8;
  plVar12[0x24] = (longlong)param_2;
  if ((bVar14 & *(byte *)(param_1 + 0xd9)) == 1) {
    puVar16 = *(undefined8 **)(local_1d8 + 0x208);
    *(undefined8 *)(local_1d8 + 0x208) = 0;
    if (puVar16 != (undefined8 *)0x0) {
      (**(code **)*puVar16)(puVar16,1);
    }
  }
  cVar7 = *(char *)(param_1 + 0xa8);
  if ((cVar7 == '\0') || (cVar7 == '\x02')) {
    (**(code **)(*plVar12 + 0x38))(plVar12);
  }
  else if ((cVar7 == '\x01') && (iVar9 = *(int *)(param_1 + 0xac), 0 < iVar9)) {
    uVar15 = 0;
    do {
      if (!bVar4) {
        if ((int)uVar15 < iVar9 / 2 && (uVar15 & 1) == 0) {
          uVar8 = *(undefined1 *)(param_1 + 0xdb);
        }
        else {
          uVar8 = 0;
        }
        *(undefined1 *)(plVar12 + 0x2a) = uVar8;
      }
      (**(code **)(*plVar12 + 0x38))(plVar12);
      uVar15 = uVar15 + 1;
      iVar9 = *(int *)(param_1 + 0xac);
    } while ((int)uVar15 < iVar9);
  }
  if (*(longlong *)(lVar13 + 0x208) == 0) {
    FUN_146c38c5e(lVar13,0);
  }
  else {
    FUN_146c3906a(lVar13,0,1,1);
  }
  if ((*(longlong *)(lVar13 + 0x208) == 0) && (*(char *)(param_1 + 0xf0) == '\x01')) {
    FUN_14582ed12(lVar13);
    if (*(char *)(lVar13 + 0xb0) == '\x01') {
      if (*(int *)(*(longlong *)(lVar13 + 0x208) + 0x28) < 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = **(undefined8 **)(*(longlong *)(lVar13 + 0x208) + 0x20);
      }
      FUN_146c3606a(lVar13,uVar10,0);
    }
    if (*(char *)(lVar13 + 0x70) == '\x01') {
      if (*(int *)(*(longlong *)(lVar13 + 0x208) + 0x38) < 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = **(undefined8 **)(*(longlong *)(lVar13 + 0x208) + 0x30);
      }
      FUN_146c36322(lVar13,uVar10,0);
    }
  }
  if (puVar11 != (undefined8 *)0x0) {
    (**(code **)*puVar11)(puVar11,1);
  }
  FUN_1482f5f8c(local_100);
  if (local_1c8 != (longlong *)0x0) {
    (**(code **)*local_1c8)(local_1c8,1);
  }
LAB_143b56dd5:
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b57303 FUN_143b57303 body=55 status=ok
// SIG undefined FUN_143b57303(void)

void FUN_143b57303(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bcd0 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bcd0 = FUN_14171c317(FUN_14649091f,uVar1,L"ECSGOperation");
  }
  return;
}



// FUNCTION 143b5733a FUN_143b5733a body=55 status=ok
// SIG undefined FUN_143b5733a(void)

void FUN_143b5733a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bce8 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bce8 = FUN_14171c317(FUN_14649094e,uVar1,L"ETrimOperation");
  }
  return;
}



// FUNCTION 143b57371 FUN_143b57371 body=55 status=ok
// SIG undefined FUN_143b57371(void)

void FUN_143b57371(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bd00 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bd00 = FUN_14171c317(FUN_14649097d,uVar1,L"ETrimSide");
  }
  return;
}



// FUNCTION 143b573a8 FUN_143b573a8 body=55 status=ok
// SIG undefined FUN_143b573a8(void)

void FUN_143b573a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bd18 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bd18 = FUN_14171c317(FUN_1464909ac,uVar1,L"EMorphologyOperation");
  }
  return;
}



// FUNCTION 143b573e0 FUN_143b573e0 body=953 status=ok
// SIG undefined FUN_143b573e0(void)

void FUN_143b573e0(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  undefined4 param_5,undefined8 param_6,char param_7)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_158 [44];
  int local_12c;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  double local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  float local_d4;
  float fStack_d0;
  float local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  double local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((int)param_4[1] != 0) {
    lVar7 = *param_1;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_98 = 0x3ff0000000000000;
    local_c8 = *(undefined8 *)(lVar7 + 0x30);
    uStack_c0 = *(undefined8 *)(lVar7 + 0x38);
    local_b8 = *(undefined8 *)(lVar7 + 0x40);
    local_78 = DAT_14c8463c8;
    local_88 = (float)DAT_14c8463b8;
    fStack_84 = DAT_14c8463b8._4_4_;
    fStack_80 = (float)DAT_14c8463c0;
    uStack_7c = DAT_14c8463c0._4_4_;
    FUN_146bfb7f2(&local_b0,&local_88,param_6);
    local_118 = lVar7 + 0x10;
    FUN_146c5d0c4(lVar7 + 0x10,&local_88,param_6);
    local_cc = (float)local_78;
    fStack_d0 = (float)(double)CONCAT44(uStack_7c,fStack_80);
    local_d4 = (float)(double)CONCAT44(fStack_84,local_88);
    local_12c = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
    if ((longlong)(int)param_3[1] != 0) {
      local_128 = *param_3;
      local_120 = (longlong)(int)param_3[1] * 0x18;
      lVar7 = 0;
      do {
        local_e8 = *(undefined8 *)(local_128 + 0x10 + lVar7);
        puVar1 = (undefined4 *)(local_128 + lVar7);
        local_f8 = *puVar1;
        uStack_f4 = puVar1[1];
        uStack_f0 = puVar1[2];
        uStack_ec = puVar1[3];
        FUN_146ba22f0(local_118,&local_110);
        local_78 = local_100;
        local_88 = local_110;
        fStack_84 = fStack_10c;
        fStack_80 = fStack_108;
        uStack_7c = uStack_104;
        local_68 = DAT_14c846338;
        local_70 = DAT_14c846330;
        local_5c = DAT_14c846338;
        local_64 = DAT_14c846330;
        local_58 = DAT_14c84635c;
        local_50 = 0;
        local_4e = 0;
        uVar3 = FUN_146c02208(param_2,&local_88);
        if (*(char *)(param_2 + 0x70) == '\x01') {
          lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x60) + (ulonglong)(uVar3 >> 9) * 8);
          *(float *)(lVar2 + 8 + (ulonglong)(uVar3 & 0x1ff) * 0xc) = local_cc;
          *(ulonglong *)(lVar2 + (ulonglong)(uVar3 & 0x1ff) * 0xc) = CONCAT44(fStack_d0,local_d4);
        }
        if (*(int *)(*(longlong *)(param_2 + 0x208) + 0x38) < 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = **(undefined8 **)(*(longlong *)(param_2 + 0x208) + 0x30);
        }
        FUN_146c2f9e2(uVar6,&local_d4);
        if (*(int *)(*(longlong *)(param_2 + 0x208) + 0x28) < 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = **(undefined8 **)(*(longlong *)(param_2 + 0x208) + 0x20);
        }
        FUN_146bca7ae(&local_c8,&local_88,&local_f8,2);
        fStack_10c = (float)((double)CONCAT44(uStack_7c,fStack_80) * (double)param_1[1]);
        local_110 = (float)((double)param_1[1] * (double)CONCAT44(fStack_84,local_88));
        FUN_146c2d0a4(uVar6,&local_110);
        lVar7 = lVar7 + 0x18;
      } while (local_120 != lVar7);
    }
    lVar7 = param_4[1];
    if ((longlong)(int)lVar7 != 0) {
      lVar2 = *param_4;
      lVar8 = 0;
      do {
        fStack_80 = (float)(*(int *)(lVar2 + 8 + lVar8) + local_12c);
        fVar5 = (float)(*(int *)(lVar2 + 4 + lVar8) + local_12c);
        local_88 = (float)(*(int *)(lVar2 + lVar8) + local_12c);
        fStack_84 = fVar5;
        if (param_7 != '\0') {
          fStack_84 = fStack_80;
          fStack_80 = fVar5;
        }
        uVar4 = FUN_146c01152(param_2,&local_88,param_5);
        if (*(int *)(*(longlong *)(param_2 + 0x208) + 0x38) < 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = **(undefined8 **)(*(longlong *)(param_2 + 0x208) + 0x30);
        }
        FUN_146c01580(uVar6,uVar4,&local_88,1);
        if (*(int *)(*(longlong *)(param_2 + 0x208) + 0x28) < 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = **(undefined8 **)(*(longlong *)(param_2 + 0x208) + 0x20);
        }
        FUN_146c01486(uVar6,uVar4,&local_88,1);
        lVar8 = lVar8 + 0xc;
      } while ((longlong)(int)lVar7 * 0xc != lVar8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b5779a FUN_143b5779a body=2553 status=ok
// SIG undefined FUN_143b5779a(void)

int FUN_143b5779a(longlong *param_1,undefined4 *param_2,double *param_3,longlong *param_4,
                 int param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void **ppvVar6;
  void *pvVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  char cVar11;
  char cVar12;
  longlong lVar13;
  char *pcVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined4 *local_270;
  undefined1 local_268;
  undefined8 local_260;
  undefined8 local_258;
  byte local_242;
  char local_241;
  longlong local_240;
  longlong *local_238;
  undefined4 *local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  longlong local_208 [3];
  ulonglong uStack_1f0;
  longlong local_1e8 [2];
  void *local_1d8;
  int local_1d0;
  longlong local_1c8;
  undefined4 local_1c0;
  undefined8 *local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined2 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  longlong local_158;
  ulonglong uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  void **local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  void *local_c8;
  ulonglong uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  double local_b0;
  double local_a8;
  void *local_a0;
  int iStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  void *local_88;
  int aiStack_80 [2];
  undefined8 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar16 = *param_1;
  if (*(char *)(lVar16 + 0xb8) == '\x01') {
    *param_2 = *param_2;
    param_2[1] = param_2[1] ^ 0x80000000;
    param_2[2] = param_2[2];
    param_2[3] = param_2[3] ^ 0x80000000;
    *(ulonglong *)(param_2 + 4) = *(ulonglong *)(param_2 + 4) ^ 0x8000000000000000;
  }
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_88 = (void *)0x0;
  aiStack_80[0] = 0;
  aiStack_80[1] = 0;
  local_242 = *(char *)(lVar16 + 0xa1) - 2;
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  local_108 = *param_3;
  uStack_100 = param_3[1];
  local_f8 = param_3[2];
  local_198 = DAT_14c8463c8;
  local_1a8 = (undefined8 *)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
  uStack_1a0 = CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
  local_240 = lVar16;
  local_238 = param_1;
  local_230 = param_2;
  FUN_146bfb7f2(&uStack_f0,&local_1a8,param_2);
  local_118 = local_d8;
  local_128 = uStack_e8;
  uStack_120 = uStack_e0;
  local_138 = local_f8;
  uStack_130 = uStack_f0;
  local_148 = (undefined4)local_108;
  uStack_144 = local_108._4_4_;
  uStack_140 = (undefined4)uStack_100;
  uStack_13c = uStack_100._4_4_;
  local_158 = 0;
  uStack_150 = 0;
  cVar12 = *(char *)(lVar16 + 0xa3);
  local_110 = &local_c8;
  if ((cVar12 == '\x01') &&
     (((*(double *)(local_240 + 0xb0) != 0.0 || (NAN(*(double *)(local_240 + 0xb0)))) &&
      (iVar10 = (int)param_4[1], 0 < iVar10)))) {
    lVar16 = 0;
    do {
      if (*(char *)(*param_4 + lVar16 * 0x18) == '\0') {
        lVar13 = *param_4 + lVar16 * 0x18;
        FUN_14847370c(local_110,*(undefined4 *)(lVar13 + 0x10));
        if ((longlong)*(int *)(lVar13 + 0x10) != 0) {
          lVar15 = *(longlong *)(lVar13 + 8);
          lVar13 = (longlong)*(int *)(lVar13 + 0x10) * 0x18;
          do {
            ppvVar6 = local_110;
            FUN_146bca7ae(&local_148,&local_1a8,lVar15,2);
            iVar10 = *(int *)(ppvVar6 + 1);
            *(uint *)(ppvVar6 + 1) = iVar10 + 1U;
            if (*(uint *)((longlong)ppvVar6 + 0xc) < iVar10 + 1U) {
              FUN_14489624a(ppvVar6,iVar10);
            }
            puVar1 = (undefined4 *)((longlong)*ppvVar6 + (longlong)iVar10 * 0x10);
            *puVar1 = (undefined4)local_1a8;
            puVar1[1] = local_1a8._4_4_;
            puVar1[2] = (undefined4)uStack_1a0;
            puVar1[3] = uStack_1a0._4_4_;
            lVar15 = lVar15 + 0x18;
            lVar13 = lVar13 + -0x18;
          } while (lVar13 != 0);
        }
        pvVar7 = local_c8;
        local_1a8 = (undefined8 *)0x0;
        local_198 = 0x3ff0000000000000;
        local_190 = 0x4000000000000000;
        local_188 = 0xbff0000000000000;
        local_180 = 0x3ff0000000000000;
        local_178 = 0;
        local_170 = 0;
        uStack_168 = 0;
        uVar8 = (int)uStack_c0;
        uStack_1a0 = 1;
        FUN_148473738(&local_1a8,0);
        *local_1a8 = pvVar7;
        *(undefined4 *)(local_1a8 + 1) = uVar8;
        local_198 = *(longlong *)(local_240 + 0xb0);
        local_190 = *(undefined8 *)(local_240 + 0xa8);
        cVar9 = (*(char *)(local_240 + 0xa4) == '\x01') * '\x02';
        if (*(char *)(local_240 + 0xa4) == '\x02') {
          cVar9 = '\x01';
        }
        cVar11 = (*(char *)(local_240 + 0xa5) == '\x01') + '\x03';
        if (*(char *)(local_240 + 0xa5) == '\x02') {
          cVar11 = '\x02';
        }
        local_178 = CONCAT11(cVar11,cVar9);
        cVar9 = FUN_148268810(&local_1a8);
        if (cVar9 != '\0') {
          FUN_14847340a(&local_88 + (ulonglong)(lVar16 != 0 && local_242 < 3) * 2,&local_170);
        }
        FUN_14847346a(&local_1a8);
        iVar10 = (int)param_4[1];
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < iVar10);
  }
  iVar10 = (int)param_4[1];
  if (0 < iVar10) {
    lVar16 = 0;
    local_241 = cVar12;
    do {
      pcVar14 = (char *)(lVar16 * 0x18 + *param_4);
      if ((cVar12 != '\x01') || (*pcVar14 == '\x01')) {
        FUN_14847370c(local_110,*(undefined4 *)(pcVar14 + 0x10));
        if ((longlong)*(int *)(pcVar14 + 0x10) != 0) {
          lVar13 = *(longlong *)(pcVar14 + 8);
          lVar15 = (longlong)*(int *)(pcVar14 + 0x10) * 0x18;
          do {
            ppvVar6 = local_110;
            FUN_146bca7ae(&local_148,&local_1a8,lVar13,2);
            iVar10 = *(int *)(ppvVar6 + 1);
            *(uint *)(ppvVar6 + 1) = iVar10 + 1U;
            if (*(uint *)((longlong)ppvVar6 + 0xc) < iVar10 + 1U) {
              FUN_14489624a(ppvVar6,iVar10);
            }
            puVar1 = (undefined4 *)((longlong)*ppvVar6 + (longlong)iVar10 * 0x10);
            *puVar1 = (undefined4)local_1a8;
            puVar1[1] = local_1a8._4_4_;
            puVar1[2] = (undefined4)uStack_1a0;
            puVar1[3] = uStack_1a0._4_4_;
            lVar13 = lVar13 + 0x18;
            lVar15 = lVar15 + -0x18;
          } while (lVar15 != 0);
        }
        pvVar7 = local_c8;
        local_a0 = (void *)0x0;
        lVar13 = (longlong)(int)uStack_c0;
        iStack_98 = (int)uStack_c0;
        if (lVar13 == 0) {
          uStack_94 = 0;
        }
        else {
          FUN_144721d4c(&local_a0,uStack_c0 & 0xffffffff,0);
          memcpy(local_a0,pvVar7,lVar13 << 4);
        }
        FUN_148267e0c(&local_1a8,&local_a0);
        if (local_a0 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar5 = uStack_150;
        FUN_148273bb4(local_158,uStack_150 & 0xffffffff);
        cVar12 = local_241;
        uVar4 = uStack_150 >> 0x20;
        uStack_150 = uStack_150 & 0xffffffff00000000;
        if (((longlong)uVar5 < 0) && ((int)uVar4 != 0)) {
          FUN_14827a0e4(&local_158,0);
        }
        local_1b0 = 1;
        local_1b8 = &local_1a8;
        FUN_14826852a(&local_1b8,&local_158);
        if (*(char *)(local_240 + 0xa2) != '\0') {
          local_278 = *(undefined8 *)(local_240 + 0xa8);
          local_1c8 = local_158;
          local_1c0 = (undefined4)uStack_150;
          local_268 = *(char *)(local_240 + 0xa2) != '\x01';
          local_258 = 0x3ff0000000000000;
          local_260 = 0xbff0000000000000;
          local_270 = (undefined4 *)((ulonglong)local_270 & 0xffffffffffffff00);
          FUN_148268fe5((int)*(undefined8 *)(local_240 + 0xb0),&local_1c8,&local_158,1);
        }
        FUN_14847340a(&local_88 + (ulonglong)(lVar16 != 0 && local_242 < 3) * 2,&local_158);
        FUN_148267ee4(&local_1a8);
        iVar10 = (int)param_4[1];
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < iVar10);
  }
  switch(*(undefined1 *)(local_240 + 0xa1)) {
  case 1:
    local_1d8 = local_88;
    local_1d0 = aiStack_80[0];
    FUN_14826852a(&local_1d8,&local_88,1);
    goto switchD_143b57dae_default;
  case 2:
    local_b8 = 1;
    break;
  case 3:
    local_b8 = 3;
    break;
  case 4:
    local_b8 = 4;
    break;
  default:
    goto switchD_143b57dae_default;
  }
  iStack_98 = aiStack_80[0];
  local_a0 = local_88;
  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,(undefined4)uStack_70);
  local_1a8 = local_78;
  FUN_143afbee5();
switchD_143b57dae_default:
  if (0 < aiStack_80[0]) {
    lVar16 = 0;
    do {
      local_1a8 = (undefined8 *)0x0;
      local_198 = 0;
      uVar3 = (uint)local_190;
      local_190 = CONCAT44(1,uVar3 & 0xffffff00);
      uStack_1a0 = CONCAT53(uStack_1a0._3_5_,0x10100);
      local_1e8[0] = 0;
      local_1e8[1] = 0;
      local_208[2] = 0;
      uStack_1f0 = 0;
      local_208[0] = 0;
      local_208[1] = 0;
      local_278 = CONCAT71(local_278._1_7_,1);
      FUN_1484734a6(&local_1a8,(void *)(lVar16 * 0x28 + (longlong)local_88),local_1e8,local_208 + 2)
      ;
      FUN_14051b394(local_208,uStack_1f0 & 0xffffffff,1);
      if (0 < (int)uStack_1f0) {
        lVar15 = 0x10;
        lVar13 = 8;
        lVar17 = 0;
        do {
          puVar2 = (undefined8 *)(local_208[2] + -8 + lVar13);
          local_a0 = (void *)*puVar2;
          iStack_98 = *(int *)(puVar2 + 1);
          uStack_94 = *(undefined4 *)((longlong)puVar2 + 0xc);
          local_90 = 0;
          FUN_146bed047(&local_b8,&uStack_f0,&local_a0);
          *(double *)(local_208[0] + -0x10 + lVar15) =
               (double)CONCAT44(uStack_b4,local_b8) + local_108;
          *(double *)(local_208[0] + -8 + lVar15) = local_b0 + uStack_100;
          *(double *)(local_208[0] + lVar15) = local_a8 + local_f8;
          lVar17 = lVar17 + 1;
          lVar15 = lVar15 + 0x18;
          lVar13 = lVar13 + 0x10;
        } while (lVar17 < (int)uStack_1f0);
      }
      local_218 = *(undefined8 *)(local_230 + 4);
      local_228 = *local_230;
      uStack_224 = local_230[1];
      uStack_220 = local_230[2];
      uStack_21c = local_230[3];
      local_270 = &local_228;
      local_278 = CONCAT44(local_278._4_4_,param_5);
      local_268 = 1;
      FUN_143b573e0(local_238[3],*(undefined8 *)(local_240 + 8),local_208,local_1e8);
      if (local_208[0] != 0) {
        FUN_1400020a8();
      }
      if (local_208[2] != 0) {
        FUN_1400020a8();
      }
      if (local_1e8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_198 != 0) {
        (**(code **)(local_198 + -0x10))(local_198 + -0x10);
      }
      param_5 = param_5 + 1;
      lVar16 = lVar16 + 1;
    } while (lVar16 < aiStack_80[0]);
  }
  FUN_148273bb4(local_158,uStack_150 & 0xffffffff);
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  lVar16 = 0x10;
  do {
    FUN_148273bb4(*(undefined8 *)((longlong)&local_88 + lVar16),
                  *(undefined4 *)((longlong)aiStack_80 + lVar16));
    if (*(longlong *)((longlong)&local_88 + lVar16) != 0) {
      FUN_1400020a8();
    }
    lVar16 = lVar16 + -0x10;
  } while (lVar16 != -0x10);
  if ((local_60 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_5;
}



// FUNCTION 143b58194 FUN_143b58194 body=55 status=ok
// SIG undefined FUN_143b58194(void)

void FUN_143b58194(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bd58 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bd58 = FUN_14171c317(FUN_146490ad1,uVar1,L"ETexelDensityToolMode");
  }
  return;
}



// FUNCTION 143b581cc FUN_143b581cc body=5561 status=ok
// SIG undefined FUN_143b581cc(void)

void FUN_143b581cc(longlong param_1,char *param_2)

{
  float fVar1;
  code *pcVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint *puVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  undefined1 auStack_258 [32];
  int local_238;
  undefined1 local_230;
  longlong *local_228;
  longlong *local_220;
  longlong local_218;
  longlong *local_210;
  int local_204;
  char *local_200;
  int *local_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  undefined1 local_1b8 [4];
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong *local_1a8;
  longlong *plStack_1a0;
  int local_198;
  undefined8 local_194;
  int local_17c;
  longlong *local_178;
  longlong *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  int local_158;
  ulonglong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ulonglong uStack_130;
  undefined1 local_128 [16];
  longlong local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  longlong local_f8;
  int local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  uint local_d8 [4];
  uint *local_c8;
  int local_c0;
  uint local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  longlong local_a8;
  int local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_143b58332;
    pcVar2 = *(code **)(param_2 + 0x70);
    plVar11 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar11 = *(longlong **)(param_2 + 0x80);
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    cVar6 = (*pcVar2)(uVar9);
    *param_2 = cVar6;
    if (cVar6 != '\0') goto LAB_143b58332;
  }
  local_230 = 1;
  local_238 = CONCAT31(local_238._1_3_,1);
  FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),1,1);
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x208) == 0) {
    FUN_14582ed12();
  }
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_143b58332;
    pcVar2 = *(code **)(param_2 + 0x70);
    plVar11 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar11 = *(longlong **)(param_2 + 0x80);
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    cVar6 = (*pcVar2)(uVar9);
    *param_2 = cVar6;
    if (cVar6 != '\0') goto LAB_143b58332;
  }
  iVar8 = *(int *)(param_1 + 0x9c);
  plVar11 = (longlong *)0x0;
  if ((-1 < (longlong)iVar8) &&
     (lVar25 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208), iVar8 < *(int *)(lVar25 + 0x28)))
  {
    plVar11 = *(longlong **)(*(longlong *)(lVar25 + 0x20) + (longlong)iVar8 * 8);
  }
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_143b58332;
    pcVar2 = *(code **)(param_2 + 0x70);
    plVar22 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar22 = *(longlong **)(param_2 + 0x80);
    }
    uVar9 = (**(code **)(*plVar22 + 8))();
    cVar6 = (*pcVar2)(uVar9);
    *param_2 = cVar6;
    if (cVar6 != '\0') goto LAB_143b58332;
  }
  local_218 = param_1;
  local_200 = param_2;
  if (*(char *)(param_1 + 0xac) == '\x01') {
    local_148 = (longlong *)0x0;
    uStack_140 = 0;
    iVar8 = *(int *)(param_1 + 0x9c);
    if ((longlong)iVar8 < 0) {
      uVar9 = 0;
    }
    else {
      lVar25 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208);
      uVar9 = 0;
      if (iVar8 < *(int *)(lVar25 + 0x28)) {
        uVar9 = *(undefined8 *)(*(longlong *)(lVar25 + 0x20) + (longlong)iVar8 * 8);
      }
    }
    local_238 = CONCAT31(local_238._1_3_,1);
    FUN_14846c800(*(longlong *)(param_1 + 8),uVar9);
    uVar4 = 0;
    if ((longlong)(int)uStack_140 != 0) {
      local_1d0 = local_148 + (longlong)(int)uStack_140 * 6;
      local_1f8 = (int *)(param_1 + 0xa0);
      local_1d8 = param_1 + 0x100;
      local_1e0 = (longlong *)(param_2 + 0x90);
      plVar22 = local_148;
      local_220 = plVar11;
      do {
        local_1c8 = plVar22;
        FUN_14846d090(&local_178);
        local_1f0 = local_150 >> 0x20;
        local_1e8 = local_150;
        local_17c = (int)local_150 + (int)(local_150 >> 0x20) * 10 + 0x3e9;
        piVar10 = local_1f8;
        if (*(int *)(param_1 + 0x10c) != -1) {
          piVar10 = (int *)FUN_1475904b6(local_1d8,local_17c,&local_17c);
        }
        iVar8 = *piVar10;
        local_c8 = (uint *)0x0;
        local_c0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_bc = 0x80;
        uStack_b8 = 0xffffffff;
        local_b4 = 0;
        local_a8 = 0;
        local_a0 = 0;
        if ((longlong)(int)local_170 != 0) {
          uVar13 = (longlong)(int)local_170 * 3;
          if ((int)local_170 < 0) {
LAB_143b5970f:
                    /* WARNING: Subroutine does not return */
            FUN_1456acd4b(uVar13);
          }
          FUN_1400bac10(&local_e8);
          iVar7 = 1;
          if (3 < (uint)uVar13) {
            uVar24 = ((uint)uVar13 | 1) + 0xe;
            iVar7 = 0x1f;
            if (uVar24 != 0) {
              for (; uVar24 >> iVar7 == 0; iVar7 = iVar7 + -1) {
              }
            }
            iVar7 = 1 << ((byte)iVar7 & 0x1f);
          }
          if ((local_a0 == 0) || (local_a0 < iVar7)) {
            local_a0 = iVar7;
            FUN_144a56d22();
          }
          plVar22 = local_178;
          plVar11 = local_220;
          local_228 = (longlong *)(longlong)(int)local_170;
          if (local_228 != (longlong *)0x0) {
            local_228 = (longlong *)((longlong)local_228 << 2);
            plVar21 = (longlong *)0x0;
            do {
              iVar7 = *(int *)((longlong)plVar22 + (longlong)plVar21);
              uVar12 = iVar7 * 3 + 2;
              lVar25 = plVar11[0xf];
              uVar24 = iVar7 * 3 + 1;
              local_138 = CONCAT44(*(undefined4 *)
                                    (*(longlong *)(lVar25 + (ulonglong)(uVar24 >> 9) * 8) +
                                    (ulonglong)(uVar24 & 0x1ff) * 4),
                                   *(undefined4 *)
                                    (*(longlong *)(lVar25 + (ulonglong)((uint)(iVar7 * 3) >> 9) * 8)
                                    + (ulonglong)(iVar7 * 3 & 0x1ff) * 4));
              uStack_130 = CONCAT44(uStack_130._4_4_,
                                    *(undefined4 *)
                                     (*(longlong *)(lVar25 + (ulonglong)(uVar12 >> 9) * 8) +
                                     (ulonglong)(uVar12 & 0x1ff) * 4));
              FUN_1447cbafe(&local_e8,&local_1a8,&local_138);
              FUN_1447cbafe(&local_e8,&local_1a8,(longlong)&local_138 + 4);
              FUN_1447cbafe(&local_e8,&local_1a8,&uStack_130);
              plVar21 = (longlong *)((longlong)plVar21 + 4);
            } while (local_228 != plVar21);
          }
        }
        plVar11 = local_220;
        if (local_c0 == 0) {
          uVar15 = 1;
          iVar7 = 0;
          uVar13 = 0;
          iVar20 = 0;
        }
        else {
          puVar16 = local_c8;
          if (local_c8 == (uint *)0x0) {
            puVar16 = local_d8;
          }
          uVar24 = *puVar16;
          if (uVar24 == 0) {
            iVar7 = local_c0 + 0x1e;
            if (-1 < local_c0 + -1) {
              iVar7 = local_c0 + -1;
            }
            uVar13 = 0;
            uVar17 = (ulonglong)(uint)(iVar7 >> 5);
            if (iVar7 >> 5 < 1) {
              uVar17 = uVar13;
            }
            iVar7 = 0;
            do {
              if (uVar17 == uVar13) goto LAB_143b58954;
              iVar7 = iVar7 + 0x20;
              uVar24 = puVar16[uVar13 + 1];
              uVar13 = uVar13 + 1;
            } while (uVar24 == 0);
          }
          else {
            iVar7 = 0;
            uVar13 = 0;
          }
          uVar15 = (ulonglong)(-uVar24 & uVar24);
          uVar17 = uVar15 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          iVar20 = (iVar7 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
          if (local_c0 <= iVar20) {
            iVar20 = local_c0;
          }
        }
        if (iVar20 != local_c0) {
          uVar24 = 0xffffffff;
          do {
            uVar12 = *(uint *)(local_e8 + (longlong)iVar20 * 0xc);
            uVar17 = (ulonglong)(uVar12 >> 5 & 0x3fffff8);
            lVar25 = *(longlong *)(local_220[9] + uVar17);
            uVar12 = (uVar12 & 0xff) << 3;
            fVar1 = *(float *)(lVar25 + (ulonglong)(uVar12 | 4));
            *(float *)(lVar25 + (ulonglong)uVar12) =
                 *(float *)(lVar25 + (ulonglong)uVar12) - (float)(int)local_1e8;
            *(float *)(*(longlong *)(local_220[9] + uVar17) + (ulonglong)(uVar12 | 4)) =
                 fVar1 + -1.0 + (float)(int)local_1f0 + 1.0;
            uVar24 = ~(uint)uVar15 & uVar24;
            puVar16 = local_c8;
            if (local_c8 == (uint *)0x0) {
              puVar16 = local_d8;
            }
            iVar20 = (int)uVar13;
            lVar25 = (longlong)iVar20;
            uVar12 = puVar16[lVar25] & uVar24;
            if (uVar12 == 0) {
              iVar18 = local_c0 + 0x1e;
              if (-1 < local_c0 + -1) {
                iVar18 = local_c0 + -1;
              }
              iVar18 = iVar18 >> 5;
              iVar7 = iVar7 + 0x20;
              iVar19 = iVar18;
              if (iVar18 < iVar20) {
                iVar19 = iVar20;
              }
              if (iVar20 < iVar18) {
                lVar23 = 0;
                do {
                  uVar12 = puVar16[lVar25 + lVar23 + 1];
                  if (uVar12 != 0) {
                    uVar13 = (ulonglong)(iVar20 + (int)lVar23 + 1);
                    uVar24 = 0xffffffff;
                    goto LAB_143b58fc6;
                  }
                  iVar7 = iVar7 + 0x20;
                  lVar23 = lVar23 + 1;
                } while (iVar19 - lVar25 != lVar23);
                uVar24 = 0xffffffff;
                lVar25 = (longlong)iVar19;
              }
              uVar13 = lVar25 + 1U & 0xffffffff;
              iVar20 = local_c0;
            }
            else {
LAB_143b58fc6:
              uVar15 = (ulonglong)(-uVar12 & uVar12);
              uVar17 = uVar15 * 2 + 1;
              lVar25 = 0x3f;
              if (uVar17 != 0) {
                for (; uVar17 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                }
              }
              iVar20 = (iVar7 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
              if (local_c0 <= iVar20) {
                iVar20 = local_c0;
              }
            }
          } while (iVar20 != local_c0);
        }
LAB_143b58954:
        plVar21 = (longlong *)FUN_14001cc68();
        plVar22 = local_178;
        *plVar21 = 0;
        lVar25 = (longlong)(int)local_170;
        *(int *)(plVar21 + 1) = (int)local_170;
        if (lVar25 == 0) {
          *(undefined4 *)((longlong)plVar21 + 0xc) = 0;
        }
        else {
          FUN_144a06ca8(plVar21,(ulonglong)local_170 & 0xffffffff,0);
          memcpy((void *)*plVar21,plVar22,lVar25 << 2);
        }
        lVar25 = local_218;
        local_194 = 0x3f800000;
        local_1a8 = plVar11;
        local_204 = (int)(float)iVar8;
        plStack_1a0 = plVar21;
        local_198 = local_204;
        if (*(int *)(local_218 + 0x98) == 2) {
          local_194 = 0x10000003f800000;
          FUN_143b09a9c();
        }
        pcVar5 = local_200;
        if (local_200 != (char *)0x0) {
          if (*local_200 == '\0') {
            pcVar2 = *(code **)(local_200 + 0x70);
            plVar22 = *(longlong **)(local_200 + 0x80);
            if (*(longlong **)(local_200 + 0x80) == (longlong *)0x0) {
              plVar22 = local_1e0;
            }
            (**(code **)(*plVar22 + 8))();
            cVar6 = (*pcVar2)();
            *pcVar5 = cVar6;
            lVar25 = local_218;
            if (cVar6 == '\0') goto LAB_143b58a42;
          }
          if (plVar21 != (longlong *)0x0) {
            if (*plVar21 != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(plVar21);
          }
          local_a0 = 0;
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          uVar13 = uStack_e0 >> 0x20;
          uStack_e0 = uStack_e0 & 0xffffffff00000000;
          if ((int)uVar13 != 0) {
            FUN_1447a08a2(&local_e8,0);
          }
          uStack_b8 = 0xffffffff;
          local_b4 = 0;
          local_c0 = 0;
          if (0x80 < local_bc) {
            local_bc = 0x80;
            FUN_1446efbd8(local_d8,0);
          }
          if (local_c8 != (uint *)0x0) {
            FUN_1400020a8();
          }
          if (local_e8 != 0) {
            FUN_1400020a8();
          }
          FUN_146be9400(&local_160);
          if (local_178 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          uVar4 = (int)uStack_140;
          goto LAB_143b59624;
        }
LAB_143b58a42:
        iVar8 = *(int *)(lVar25 + 0x98);
        if (iVar8 == 0) {
          local_238 = local_204;
          FUN_14846ce24(lVar25,plVar11,&local_178);
          iVar8 = *(int *)(lVar25 + 0x98);
        }
        if ((iVar8 == 1) && (0 < local_158)) {
          lVar25 = 0;
          do {
            local_210 = *(longlong **)(CONCAT44(uStack_15c,local_160) + lVar25 * 8);
            local_118 = 0;
            local_110 = 0;
            local_138 = 0;
            uStack_130 = 0;
            local_10c = 0x80;
            uStack_108 = 0xffffffff;
            local_104 = 0;
            local_f8 = 0;
            local_f0 = 0;
            iVar8 = (int)local_210[1];
            local_1c0 = lVar25;
            if ((longlong)iVar8 != 0) {
              uVar13 = (longlong)iVar8 * 3;
              if (iVar8 < 0) goto LAB_143b5970f;
              FUN_1400bac10(&local_138,uVar13 & 0xffffffff);
              iVar8 = 1;
              if (3 < (uint)uVar13) {
                uVar24 = ((uint)uVar13 | 1) + 0xe;
                iVar8 = 0x1f;
                if (uVar24 != 0) {
                  for (; uVar24 >> iVar8 == 0; iVar8 = iVar8 + -1) {
                  }
                }
                iVar8 = 1 << ((byte)iVar8 & 0x1f);
              }
              if ((local_f0 == 0) || (local_f0 < iVar8)) {
                local_f0 = iVar8;
                FUN_144a56d22(&local_138);
              }
              plVar11 = local_220;
              local_228 = (longlong *)(longlong)(int)local_210[1];
              if (local_228 != (longlong *)0x0) {
                lVar25 = *local_210;
                local_228 = (longlong *)((longlong)local_228 << 2);
                plVar22 = (longlong *)0x0;
                do {
                  iVar8 = *(int *)(lVar25 + (longlong)plVar22);
                  uVar24 = iVar8 * 3 + 2;
                  lVar23 = plVar11[0xf];
                  local_1ac = *(undefined4 *)
                               (*(longlong *)(lVar23 + (ulonglong)(uVar24 >> 9) * 8) +
                               (ulonglong)(uVar24 & 0x1ff) * 4);
                  uVar24 = iVar8 * 3 + 1;
                  local_1b0 = *(undefined4 *)
                               (*(longlong *)(lVar23 + (ulonglong)(uVar24 >> 9) * 8) +
                               (ulonglong)(uVar24 & 0x1ff) * 4);
                  local_1b4 = *(undefined4 *)
                               (*(longlong *)(lVar23 + (ulonglong)((uint)(iVar8 * 3) >> 9) * 8) +
                               (ulonglong)(iVar8 * 3 & 0x1ff) * 4);
                  FUN_1447cbafe(&local_138,local_1b8,&local_1b4,0);
                  FUN_1447cbafe(&local_138,local_1b8,&local_1b0,0);
                  FUN_1447cbafe(&local_138,local_1b8,&local_1ac,0);
                  plVar22 = (longlong *)((longlong)plVar22 + 4);
                } while (local_228 != plVar22);
              }
            }
            local_238 = local_204;
            FUN_14846ce24(local_218,plVar11,local_210);
            local_f0 = 0;
            if (local_f8 != 0) {
              FUN_1400020a8();
            }
            uVar13 = uStack_130 >> 0x20;
            uStack_130 = uStack_130 & 0xffffffff00000000;
            if ((int)uVar13 != 0) {
              FUN_1447a08a2(&local_138);
            }
            uStack_108 = 0xffffffff;
            local_104 = 0;
            local_110 = 0;
            if (0x80 < local_10c) {
              local_10c = 0x80;
              FUN_1446efbd8(local_128);
            }
            if (local_118 != 0) {
              FUN_1400020a8();
            }
            if (local_138 != 0) {
              FUN_1400020a8();
            }
            lVar25 = local_1c0 + 1;
          } while (lVar25 < local_158);
        }
        plVar22 = plStack_1a0;
        if (local_c0 == 0) {
          uVar15 = 1;
          uVar13 = 0;
          iVar8 = 0;
          iVar7 = 0;
        }
        else {
          puVar16 = local_c8;
          if (local_c8 == (uint *)0x0) {
            puVar16 = local_d8;
          }
          uVar24 = *puVar16;
          if (uVar24 == 0) {
            iVar8 = local_c0 + 0x1e;
            if (-1 < local_c0 + -1) {
              iVar8 = local_c0 + -1;
            }
            uVar13 = 0;
            uVar17 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar17 = uVar13;
            }
            iVar8 = 0;
            do {
              if (uVar17 == uVar13) goto LAB_143b58dd4;
              iVar8 = iVar8 + 0x20;
              uVar24 = puVar16[uVar13 + 1];
              uVar13 = uVar13 + 1;
            } while (uVar24 == 0);
          }
          else {
            uVar13 = 0;
            iVar8 = 0;
          }
          uVar15 = (ulonglong)(-uVar24 & uVar24);
          uVar17 = uVar15 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          iVar7 = (iVar8 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
          if (local_c0 <= iVar7) {
            iVar7 = local_c0;
          }
        }
        if (iVar7 != local_c0) {
          uVar24 = 0xffffffff;
          do {
            uVar12 = *(uint *)(local_e8 + (longlong)iVar7 * 0xc);
            uVar17 = (ulonglong)(uVar12 >> 5 & 0x3fffff8);
            lVar25 = *(longlong *)(plVar11[9] + uVar17);
            uVar12 = (uVar12 & 0xff) << 3;
            fVar1 = *(float *)(lVar25 + (ulonglong)(uVar12 | 4));
            *(float *)(lVar25 + (ulonglong)uVar12) =
                 *(float *)(lVar25 + (ulonglong)uVar12) + (float)(int)local_1e8;
            *(float *)(*(longlong *)(plVar11[9] + uVar17) + (ulonglong)(uVar12 | 4)) =
                 1.0 - ((1.0 - fVar1) + (float)(int)local_1f0);
            uVar24 = ~(uint)uVar15 & uVar24;
            puVar16 = local_c8;
            if (local_c8 == (uint *)0x0) {
              puVar16 = local_d8;
            }
            iVar7 = (int)uVar13;
            lVar25 = (longlong)iVar7;
            uVar12 = puVar16[lVar25] & uVar24;
            if (uVar12 == 0) {
              iVar20 = local_c0 + 0x1e;
              if (-1 < local_c0 + -1) {
                iVar20 = local_c0 + -1;
              }
              iVar20 = iVar20 >> 5;
              iVar8 = iVar8 + 0x20;
              iVar18 = iVar20;
              if (iVar20 < iVar7) {
                iVar18 = iVar7;
              }
              if (iVar7 < iVar20) {
                lVar23 = 0;
                do {
                  uVar12 = puVar16[lVar25 + lVar23 + 1];
                  if (uVar12 != 0) {
                    uVar13 = (ulonglong)(iVar7 + (int)lVar23 + 1);
                    uVar24 = 0xffffffff;
                    goto LAB_143b59120;
                  }
                  iVar8 = iVar8 + 0x20;
                  lVar23 = lVar23 + 1;
                } while (iVar18 - lVar25 != lVar23);
                uVar24 = 0xffffffff;
                lVar25 = (longlong)iVar18;
              }
              uVar13 = lVar25 + 1U & 0xffffffff;
              plVar11 = local_220;
              iVar7 = local_c0;
            }
            else {
LAB_143b59120:
              uVar15 = (ulonglong)(-uVar12 & uVar12);
              uVar17 = uVar15 * 2 + 1;
              lVar25 = 0x3f;
              if (uVar17 != 0) {
                for (; uVar17 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                }
              }
              iVar7 = (iVar8 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
              if (local_c0 <= iVar7) {
                iVar7 = local_c0;
              }
            }
          } while (iVar7 != local_c0);
        }
LAB_143b58dd4:
        if (plStack_1a0 != (longlong *)0x0) {
          if (*plStack_1a0 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(plVar22);
        }
        local_a0 = 0;
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
        param_1 = local_218;
        uVar13 = uStack_e0 >> 0x20;
        uStack_e0 = uStack_e0 & 0xffffffff00000000;
        if ((int)uVar13 != 0) {
          FUN_1447a08a2(&local_e8,0);
        }
        uStack_b8 = 0xffffffff;
        local_b4 = 0;
        local_c0 = 0;
        if (0x80 < local_bc) {
          local_bc = 0x80;
          FUN_1446efbd8(local_d8,0);
        }
        if (local_c8 != (uint *)0x0) {
          FUN_1400020a8();
        }
        if (local_e8 != 0) {
          FUN_1400020a8();
        }
        FUN_146be9400(&local_160);
        if (local_178 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        plVar22 = local_1c8 + 6;
      } while (plVar22 != local_1d0);
      uVar4 = (int)uStack_140;
    }
LAB_143b59624:
    FUN_14848437d(local_148,uVar4);
    plVar11 = local_148;
  }
  else {
    local_1a8 = (longlong *)0x0;
    plStack_1a0 = (longlong *)0x0;
    iVar8 = *(int *)(param_1 + 0x9c);
    uVar9 = 0;
    if ((-1 < (longlong)iVar8) &&
       (lVar25 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208), iVar8 < *(int *)(lVar25 + 0x28))
       ) {
      uVar9 = *(undefined8 *)(*(longlong *)(lVar25 + 0x20) + (longlong)iVar8 * 8);
    }
    local_238 = (uint)local_238._1_3_ << 8;
    FUN_14846c800(*(longlong *)(param_1 + 8),uVar9,param_1 + 0xb0,&local_1a8);
    if ((int)plStack_1a0 == 0) {
      uVar13 = 0;
    }
    else {
      local_c8 = (uint *)0x0;
      local_c0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_bc = 0x80;
      uStack_b8 = 0xffffffff;
      local_b4 = 0;
      local_a8 = 0;
      local_a0 = 0;
      iVar8 = (int)local_1a8[1];
      if ((longlong)iVar8 != 0) {
        uVar13 = (longlong)iVar8 * 3;
        if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b(uVar13);
        }
        FUN_1400bac10(&local_e8,uVar13 & 0xffffffff);
        iVar8 = 1;
        if (3 < (uint)uVar13) {
          uVar24 = ((uint)uVar13 | 1) + 0xe;
          iVar8 = 0x1f;
          if (uVar24 != 0) {
            for (; uVar24 >> iVar8 == 0; iVar8 = iVar8 + -1) {
            }
          }
          iVar8 = 1 << ((byte)iVar8 & 0x1f);
        }
        if ((local_a0 == 0) || (local_a0 < iVar8)) {
          local_a0 = iVar8;
          FUN_144a56d22();
        }
      }
      lVar25 = local_1a8[1];
      if ((longlong)(int)lVar25 != 0) {
        lVar23 = *local_1a8;
        lVar14 = 0;
        do {
          iVar8 = *(int *)(lVar23 + lVar14);
          uVar12 = iVar8 * 3 + 2;
          lVar3 = plVar11[0xf];
          uVar24 = iVar8 * 3 + 1;
          local_138 = CONCAT44(*(undefined4 *)
                                (*(longlong *)(lVar3 + (ulonglong)(uVar24 >> 9) * 8) +
                                (ulonglong)(uVar24 & 0x1ff) * 4),
                               *(undefined4 *)
                                (*(longlong *)(lVar3 + (ulonglong)((uint)(iVar8 * 3) >> 9) * 8) +
                                (ulonglong)(iVar8 * 3 & 0x1ff) * 4));
          uStack_130 = CONCAT44(uStack_130._4_4_,
                                *(undefined4 *)
                                 (*(longlong *)(lVar3 + (ulonglong)(uVar12 >> 9) * 8) +
                                 (ulonglong)(uVar12 & 0x1ff) * 4));
          FUN_1447cbafe(&local_e8,&local_178,&local_138,0);
          FUN_1447cbafe(&local_e8,&local_178,(longlong)&local_138 + 4,0);
          FUN_1447cbafe(&local_e8,&local_178,&uStack_130,0);
          lVar14 = lVar14 + 4;
          param_2 = local_200;
          param_1 = local_218;
        } while ((longlong)(int)lVar25 * 4 != lVar14);
      }
      plVar22 = local_1a8;
      plVar21 = (longlong *)FUN_14001cc68(0x10,0x10);
      *plVar21 = 0;
      iVar8 = (int)plVar22[1];
      _Src = (void *)*plVar22;
      *(int *)(plVar21 + 1) = iVar8;
      if ((longlong)iVar8 == 0) {
        *(undefined4 *)((longlong)plVar21 + 0xc) = 0;
      }
      else {
        FUN_144a06ca8(plVar21,iVar8,0);
        memcpy((void *)*plVar21,_Src,(longlong)iVar8 << 2);
      }
      uStack_164 = 0x3f800000;
      local_160 = 0;
      local_168 = *(undefined4 *)(param_1 + 0xa0);
      local_178 = plVar11;
      local_170 = plVar21;
      if (*(int *)(param_1 + 0x98) == 2) {
        local_160 = 0x1000000;
        FUN_143b09a9c();
      }
      if (param_2 == (char *)0x0) {
LAB_143b59304:
        iVar8 = *(int *)(param_1 + 0x98);
        if (iVar8 == 0) {
          local_238 = *(int *)(param_1 + 0xa0);
          FUN_14846ce24(param_1,plVar11,local_1a8,&local_e8);
          iVar8 = *(int *)(param_1 + 0x98);
        }
        if ((iVar8 == 1) && (0 < (int)local_1a8[4])) {
          plVar22 = (longlong *)0x0;
          do {
            local_228 = *(longlong **)(local_1a8[3] + (longlong)plVar22 * 8);
            local_118 = 0;
            local_110 = 0;
            local_138 = 0;
            uStack_130 = 0;
            local_10c = 0x80;
            uStack_108 = 0xffffffff;
            local_104 = 0;
            local_f8 = 0;
            local_f0 = 0;
            iVar8 = (int)local_228[1];
            local_210 = plVar22;
            if ((longlong)iVar8 != 0) {
              uVar13 = (longlong)iVar8 * 3;
              if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456acd4b(uVar13);
              }
              FUN_1400bac10(&local_138,uVar13 & 0xffffffff);
              iVar8 = 1;
              if (3 < (uint)uVar13) {
                uVar24 = ((uint)uVar13 | 1) + 0xe;
                iVar8 = 0x1f;
                if (uVar24 != 0) {
                  for (; uVar24 >> iVar8 == 0; iVar8 = iVar8 + -1) {
                  }
                }
                iVar8 = 1 << ((byte)iVar8 & 0x1f);
              }
              if ((local_f0 == 0) || (local_f0 < iVar8)) {
                local_f0 = iVar8;
                FUN_144a56d22(&local_138);
              }
              lVar25 = local_228[1];
              if ((longlong)(int)lVar25 != 0) {
                lVar23 = *local_228;
                lVar14 = 0;
                do {
                  iVar8 = *(int *)(lVar23 + lVar14);
                  uVar12 = iVar8 * 3 + 2;
                  lVar3 = plVar11[0xf];
                  uVar24 = iVar8 * 3 + 1;
                  local_148 = (longlong *)
                              CONCAT44(*(undefined4 *)
                                        (*(longlong *)(lVar3 + (ulonglong)(uVar24 >> 9) * 8) +
                                        (ulonglong)(uVar24 & 0x1ff) * 4),
                                       *(undefined4 *)
                                        (*(longlong *)
                                          (lVar3 + (ulonglong)((uint)(iVar8 * 3) >> 9) * 8) +
                                        (ulonglong)(iVar8 * 3 & 0x1ff) * 4));
                  uStack_140 = CONCAT44(uStack_140._4_4_,
                                        *(undefined4 *)
                                         (*(longlong *)(lVar3 + (ulonglong)(uVar12 >> 9) * 8) +
                                         (ulonglong)(uVar12 & 0x1ff) * 4));
                  FUN_1447cbafe(&local_138,&local_1b4,&local_148,0);
                  FUN_1447cbafe(&local_138,&local_1b4,(longlong)&local_148 + 4,0);
                  FUN_1447cbafe(&local_138,&local_1b4,&uStack_140,0);
                  lVar14 = lVar14 + 4;
                } while ((longlong)(int)lVar25 * 4 != lVar14);
              }
            }
            local_238 = *(int *)(local_218 + 0xa0);
            FUN_14846ce24(local_218,plVar11,local_228,&local_138);
            local_f0 = 0;
            if (local_f8 != 0) {
              FUN_1400020a8();
            }
            uVar13 = uStack_130 >> 0x20;
            uStack_130 = uStack_130 & 0xffffffff00000000;
            if ((int)uVar13 != 0) {
              FUN_1447a08a2(&local_138,0);
            }
            uStack_108 = 0xffffffff;
            local_104 = 0;
            local_110 = 0;
            if (0x80 < local_10c) {
              local_10c = 0x80;
              FUN_1446efbd8(local_128,0);
            }
            plVar22 = local_210;
            if (local_118 != 0) {
              FUN_1400020a8();
            }
            if (local_138 != 0) {
              FUN_1400020a8();
            }
            plVar22 = (longlong *)((longlong)plVar22 + 1);
            plVar21 = local_170;
          } while ((longlong)plVar22 < (longlong)(int)local_1a8[4]);
        }
      }
      else if (*param_2 == '\0') {
        pcVar2 = *(code **)(param_2 + 0x70);
        plVar22 = (longlong *)(param_2 + 0x90);
        if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
          plVar22 = *(longlong **)(param_2 + 0x80);
        }
        (**(code **)(*plVar22 + 8))();
        cVar6 = (*pcVar2)();
        *param_2 = cVar6;
        if (cVar6 == '\0') goto LAB_143b59304;
      }
      if (plVar21 != (longlong *)0x0) {
        if (*plVar21 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar21);
      }
      local_a0 = 0;
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      uVar13 = uStack_e0 >> 0x20;
      uStack_e0 = uStack_e0 & 0xffffffff00000000;
      if ((int)uVar13 != 0) {
        FUN_1447a08a2(&local_e8,0);
      }
      uStack_b8 = 0xffffffff;
      local_b4 = 0;
      local_c0 = 0;
      if (0x80 < local_bc) {
        local_bc = 0x80;
        FUN_1446efbd8(local_d8,0);
      }
      if (local_c8 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      uVar13 = (ulonglong)plStack_1a0 & 0xffffffff;
    }
    FUN_14848437d(local_1a8,uVar13);
    plVar11 = local_1a8;
  }
  if (plVar11 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143b58332:
  if ((local_90 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b59786 FUN_143b59786 body=3867 status=ok
// SIG undefined FUN_143b59786(void)

void FUN_143b59786(longlong *param_1,char *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  longlong lVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint *puVar12;
  uint uVar13;
  ulonglong *puVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  undefined8 unaff_RBP;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint *puVar28;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  undefined1 local_200;
  uint *local_1f0;
  longlong *local_1e8;
  ulonglong local_1e0;
  uint local_1d4;
  longlong *local_1d0;
  char *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  ulonglong *local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  ulonglong *local_188;
  undefined8 local_180;
  uint *local_178;
  int local_170;
  undefined8 local_16c;
  undefined1 local_160 [4];
  int local_15c;
  ulonglong *local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  uint local_138 [4];
  uint *local_128;
  int local_120;
  uint local_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  longlong local_108;
  int local_100;
  void *local_f8;
  ulonglong local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_143b59904;
    pcVar4 = *(code **)(param_2 + 0x70);
    plVar11 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar11 = *(longlong **)(param_2 + 0x80);
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    cVar7 = (*pcVar4)(uVar10);
    *param_2 = cVar7;
    if (cVar7 != '\0') goto LAB_143b59904;
  }
  local_200 = 1;
  local_208 = 1;
  FUN_146c005f0(param_1[1],param_1[0x11],1);
  if (*(longlong *)(param_1[1] + 0x208) == 0) {
    FUN_14582ed12();
  }
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_143b59904;
    pcVar4 = *(code **)(param_2 + 0x70);
    plVar11 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar11 = *(longlong **)(param_2 + 0x80);
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    cVar7 = (*pcVar4)(uVar10);
    *param_2 = cVar7;
    if (cVar7 != '\0') goto LAB_143b59904;
  }
  iVar8 = *(int *)((longlong)param_1 + 0x9c);
  plVar11 = (longlong *)0x0;
  if ((-1 < (longlong)iVar8) && (iVar8 < *(int *)(*(longlong *)(param_1[1] + 0x208) + 0x28))) {
    plVar11 = *(longlong **)
               (*(longlong *)(*(longlong *)(param_1[1] + 0x208) + 0x20) + (longlong)iVar8 * 8);
  }
  if (((int)param_1[0x13] != 0) || (*(char *)((longlong)param_1 + 0xa7) == '\x01')) {
    FUN_142972d20(plVar11);
  }
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_143b59904;
    pcVar4 = *(code **)(param_2 + 0x70);
    plVar15 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar15 = *(longlong **)(param_2 + 0x80);
    }
    uVar10 = (**(code **)(*plVar15 + 8))();
    cVar7 = (*pcVar4)(uVar10);
    *param_2 = cVar7;
    if (cVar7 != '\0') goto LAB_143b59904;
  }
  local_1d0 = plVar11;
  local_1c8 = param_2;
  if ((char)param_1[0x16] == '\x01') {
    if (*(int *)((longlong)param_1 + 0xc4) == -1) {
      plVar15 = (longlong *)0x0;
LAB_143b599b5:
      local_f8 = (void *)0x0;
      local_f0 = 0xffffffff00000000;
      uVar23 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    }
    else {
      FUN_140619b9c(param_1 + 0x17,&local_e8);
      plVar15 = local_e8;
      if (local_e0._4_4_ == -1) goto LAB_143b599b5;
      local_f8 = (void *)0x0;
      local_f0 = CONCAT44(local_f0._4_4_,(int)local_e0);
      if ((int)local_e0 == 0) {
        local_f0 = (ulonglong)local_e0 & 0xffffffff;
        uVar23 = 0;
      }
      else {
        lVar24 = (longlong)(int)local_e0;
        uVar23 = 0;
        FUN_144a06ca8(&local_f8,(ulonglong)local_e0 & 0xffffffff,0);
        memcpy(local_f8,plVar15,lVar24 << 2);
      }
    }
    FUN_148342a4c(&local_e8,plVar11,&local_f8);
    local_158 = (ulonglong *)0x0;
    uStack_150 = 0;
    FUN_148342d16((longlong)&local_d4 + 4,&local_158);
    if ((longlong)(int)uStack_150 != 0) {
      local_1d4 = (uint)uVar23;
      local_1a0 = local_158 + (int)uStack_150;
      local_1b8 = param_1 + 0x14;
      local_1a8 = param_1 + 0x21;
      local_1b0 = (longlong *)(param_2 + 0x90);
      puVar14 = local_158;
      local_1e8 = param_1;
      local_1c0 = plVar15;
      do {
        uVar23 = *puVar14;
        local_188 = puVar14;
        FUN_148342ff8(&local_e8,&local_148,uVar23);
        local_1f0 = (uint *)FUN_14001cc68(0x10,0x10);
        *(longlong *)local_1f0 = local_148;
        local_148 = 0;
        local_1f0[2] = (uint)uStack_140;
        local_1f0[3] = uStack_140._4_4_;
        local_15c = (int)uVar23 + (int)(uVar23 >> 0x20) * 10 + 0x3e9;
        plVar11 = local_1b8;
        uVar20 = (uint)uStack_140;
        local_198 = uVar23 >> 0x20;
        local_190 = uVar23;
        if (*(int *)((longlong)local_1e8 + 0x114) != -1) {
          plVar11 = (longlong *)FUN_1475904b6(local_1a8,local_15c,&local_15c);
          uVar20 = local_1f0[2];
        }
        lVar24 = *plVar11;
        local_128 = (uint *)0x0;
        local_120 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_11c = 0x80;
        uStack_118 = 0xffffffff;
        local_114 = 0;
        local_108 = 0;
        local_100 = 0;
        plVar11 = local_1d0;
        if (uVar20 != 0) {
          uVar9 = uVar20 * 3;
          if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456acd4b((longlong)(int)uVar9);
          }
          FUN_1400bac10(&local_148,uVar9);
          iVar8 = 1;
          if (3 < uVar9) {
            uVar20 = (uVar9 | 1) + 0xe;
            iVar8 = 0x1f;
            if (uVar20 != 0) {
              for (; uVar20 >> iVar8 == 0; iVar8 = iVar8 + -1) {
              }
            }
            iVar8 = 1 << ((byte)iVar8 & 0x1f);
          }
          if ((local_100 == 0) || (local_100 < iVar8)) {
            local_100 = iVar8;
            FUN_144a56d22(&local_148);
          }
          plVar11 = local_1d0;
          local_1e0 = (ulonglong)(int)local_1f0[2];
          if (local_1e0 != 0) {
            lVar25 = *(longlong *)local_1f0;
            local_1e0 = local_1e0 << 2;
            uVar23 = 0;
            do {
              iVar8 = *(int *)(lVar25 + uVar23);
              uVar9 = iVar8 * 3 + 2;
              lVar5 = plVar11[0xf];
              uVar20 = iVar8 * 3 + 1;
              local_180 = (longlong *)
                          CONCAT44(*(undefined4 *)
                                    (*(longlong *)(lVar5 + (ulonglong)(uVar20 >> 9) * 8) +
                                    (ulonglong)(uVar20 & 0x1ff) * 4),
                                   *(undefined4 *)
                                    (*(longlong *)(lVar5 + (ulonglong)((uint)(iVar8 * 3) >> 9) * 8)
                                    + (ulonglong)(iVar8 * 3 & 0x1ff) * 4));
              local_178 = (uint *)CONCAT44(local_178._4_4_,
                                           *(undefined4 *)
                                            (*(longlong *)(lVar5 + (ulonglong)(uVar9 >> 9) * 8) +
                                            (ulonglong)(uVar9 & 0x1ff) * 4));
              FUN_1447cbafe(&local_148,local_160,&local_180);
              FUN_1447cbafe(&local_148,local_160,(longlong)&local_180 + 4);
              FUN_1447cbafe(&local_148,local_160,&local_178);
              uVar23 = uVar23 + 4;
            } while (local_1e0 != uVar23);
          }
        }
        local_16c = 0x3f800000;
        local_178 = local_1f0;
        local_170 = (int)(float)(int)lVar24;
        local_180 = plVar11;
        FUN_14846d2e0();
        pcVar6 = local_1c8;
        if (local_1c8 != (char *)0x0) {
          if (*local_1c8 == '\0') {
            pcVar4 = *(code **)(local_1c8 + 0x70);
            plVar15 = *(longlong **)(local_1c8 + 0x80);
            if (*(longlong **)(local_1c8 + 0x80) == (longlong *)0x0) {
              plVar15 = local_1b0;
            }
            (**(code **)(*plVar15 + 8))();
            cVar7 = (*pcVar4)();
            *pcVar6 = cVar7;
            if (cVar7 == '\0') goto LAB_143b59db5;
          }
          puVar28 = local_178;
          plVar11 = local_1c0;
          uVar20 = local_1d4;
          if (local_178 != (uint *)0x0) {
            if (*(longlong *)local_178 != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(puVar28);
          }
          local_100 = 0;
          if (local_108 != 0) {
            FUN_1400020a8();
          }
          uVar23 = uStack_140 >> 0x20;
          uStack_140 = uStack_140 & 0xffffffff00000000;
          if ((int)uVar23 != 0) {
            FUN_1447a08a2(&local_148,0);
          }
          uStack_118 = 0xffffffff;
          local_114 = 0;
          local_120 = 0;
          if (0x80 < local_11c) {
            local_11c = 0x80;
            FUN_1446efbd8(local_138,0);
          }
          if (local_128 != (uint *)0x0) {
            FUN_1400020a8();
          }
          if (local_148 != 0) {
            FUN_1400020a8();
          }
          if (local_158 != (ulonglong *)0x0) {
            FUN_1400020a8();
          }
          FUN_14846aeec(&local_e8);
          if ((char)uVar20 == '\0' && plVar11 != (longlong *)0x0) goto LAB_143b5a2e3;
          goto LAB_143b59904;
        }
LAB_143b59db5:
        puVar28 = local_178;
        if (local_120 == 0) {
          uVar19 = 1;
          iVar8 = 0;
          uVar23 = 0;
          iVar17 = 0;
        }
        else {
          puVar12 = local_128;
          if (local_128 == (uint *)0x0) {
            puVar12 = local_138;
          }
          uVar20 = *puVar12;
          if (uVar20 == 0) {
            iVar8 = local_120 + 0x1e;
            if (-1 < local_120 + -1) {
              iVar8 = local_120 + -1;
            }
            uVar23 = 0;
            uVar26 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar26 = uVar23;
            }
            iVar8 = 0;
            do {
              if (uVar26 == uVar23) goto LAB_143b59e56;
              iVar8 = iVar8 + 0x20;
              uVar20 = puVar12[uVar23 + 1];
              uVar23 = uVar23 + 1;
            } while (uVar20 == 0);
          }
          else {
            iVar8 = 0;
            uVar23 = 0;
          }
          uVar19 = (ulonglong)(-uVar20 & uVar20);
          uVar26 = uVar19 * 2 + 1;
          lVar24 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          iVar17 = (iVar8 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
          if (local_120 <= iVar17) {
            iVar17 = local_120;
          }
        }
        if (iVar17 != local_120) {
          uVar20 = 0xffffffff;
          do {
            uVar9 = *(uint *)(local_148 + (longlong)iVar17 * 0xc);
            uVar26 = (ulonglong)(uVar9 >> 5 & 0x3fffff8);
            lVar24 = *(longlong *)(plVar11[9] + uVar26);
            uVar9 = (uVar9 & 0xff) << 3;
            fVar1 = *(float *)(lVar24 + (ulonglong)(uVar9 | 4));
            *(float *)(lVar24 + (ulonglong)uVar9) =
                 *(float *)(lVar24 + (ulonglong)uVar9) + (float)(int)local_190;
            *(float *)(*(longlong *)(plVar11[9] + uVar26) + (ulonglong)(uVar9 | 4)) =
                 1.0 - ((1.0 - fVar1) + (float)(int)local_198);
            uVar20 = ~(uint)uVar19 & uVar20;
            puVar12 = local_128;
            if (local_128 == (uint *)0x0) {
              puVar12 = local_138;
            }
            iVar17 = (int)uVar23;
            lVar24 = (longlong)iVar17;
            uVar9 = puVar12[lVar24] & uVar20;
            if (uVar9 == 0) {
              iVar21 = local_120 + 0x1e;
              if (-1 < local_120 + -1) {
                iVar21 = local_120 + -1;
              }
              iVar21 = iVar21 >> 5;
              iVar8 = iVar8 + 0x20;
              iVar22 = iVar21;
              if (iVar21 < iVar17) {
                iVar22 = iVar17;
              }
              if (iVar17 < iVar21) {
                lVar25 = 0;
                do {
                  uVar9 = puVar12[lVar24 + lVar25 + 1];
                  if (uVar9 != 0) {
                    uVar23 = (ulonglong)(iVar17 + (int)lVar25 + 1);
                    uVar20 = 0xffffffff;
                    goto LAB_143b5a02b;
                  }
                  iVar8 = iVar8 + 0x20;
                  lVar25 = lVar25 + 1;
                } while (iVar22 - lVar24 != lVar25);
                uVar20 = 0xffffffff;
                lVar24 = (longlong)iVar22;
              }
              uVar23 = lVar24 + 1U & 0xffffffff;
              plVar11 = local_1d0;
              iVar17 = local_120;
            }
            else {
LAB_143b5a02b:
              uVar19 = (ulonglong)(-uVar9 & uVar9);
              uVar26 = uVar19 * 2 + 1;
              lVar24 = 0x3f;
              if (uVar26 != 0) {
                for (; uVar26 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              iVar17 = (iVar8 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
              if (local_120 <= iVar17) {
                iVar17 = local_120;
              }
            }
          } while (iVar17 != local_120);
        }
LAB_143b59e56:
        if (local_178 != (uint *)0x0) {
          if (*(longlong *)local_178 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(puVar28);
        }
        local_100 = 0;
        if (local_108 != 0) {
          FUN_1400020a8();
        }
        uVar23 = uStack_140 >> 0x20;
        uStack_140 = uStack_140 & 0xffffffff00000000;
        if ((int)uVar23 != 0) {
          FUN_1447a08a2(&local_148,0);
        }
        uStack_118 = 0xffffffff;
        local_114 = 0;
        local_120 = 0;
        if (0x80 < local_11c) {
          local_11c = 0x80;
          FUN_1446efbd8(local_138,0);
        }
        if (local_128 != (uint *)0x0) {
          FUN_1400020a8();
        }
        if (local_148 != 0) {
          FUN_1400020a8();
        }
        puVar14 = local_188 + 1;
      } while (puVar14 != local_1a0);
      uVar23 = (ulonglong)local_1d4;
      param_1 = local_1e8;
      plVar15 = local_1c0;
    }
    if (local_158 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    FUN_14846aeec();
    if ((char)uVar23 == '\0' && plVar15 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0xc4) == -1) {
      local_e0 = (longlong *)0x0;
    }
    else {
      local_1e8 = (longlong *)FUN_14001cc68(0x10,0x10);
      *local_1e8 = 0;
      local_1e8[1] = 0;
      iVar8 = (int)param_1[0x18] - *(int *)((longlong)param_1 + 0xec);
      if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar8);
      }
      if (iVar8 != 0) {
        FUN_14481578e();
      }
      puVar28 = (uint *)(param_1 + 0x19);
      uVar20 = *(uint *)(param_1 + 0x1c);
      uVar23 = (ulonglong)uVar20;
      local_e0 = local_1e8;
      local_1f0 = puVar28;
      if (uVar20 == 0) {
        uVar27 = 1;
        uVar26 = 0;
        iVar8 = 0;
        uVar9 = 0;
      }
      else {
        puVar12 = (uint *)param_1[0x1b];
        if ((uint *)param_1[0x1b] == (uint *)0x0) {
          puVar12 = puVar28;
        }
        uVar9 = *puVar12;
        if (uVar9 == 0) {
          iVar8 = uVar20 + 0x1e;
          if (-1 < (int)(uVar20 - 1)) {
            iVar8 = uVar20 - 1;
          }
          uVar26 = 0;
          uVar19 = (ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            uVar19 = uVar26;
          }
          iVar8 = 0;
          do {
            if (uVar19 == uVar26) goto LAB_143b5a261;
            iVar8 = iVar8 + 0x20;
            uVar9 = puVar12[uVar26 + 1];
            uVar26 = uVar26 + 1;
          } while (uVar9 == 0);
        }
        else {
          uVar26 = 0;
          iVar8 = 0;
        }
        uVar27 = (ulonglong)(-uVar9 & uVar9);
        uVar19 = uVar27 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        uVar9 = (iVar8 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
        if ((int)uVar20 <= (int)uVar9) {
          uVar9 = uVar20;
        }
      }
      param_2 = local_1c8;
      if (uVar9 != uVar20) {
        uVar13 = 0xffffffff;
        local_1e0 = uVar23;
        do {
          uVar9 = *(uint *)(param_1[0x17] + (longlong)(int)uVar9 * 0xc);
          if (((-1 < (int)uVar9) &&
              (lVar24 = param_1[0x11],
              (int)uVar9 < *(int *)(lVar24 + 0x140) * 0x200 + *(int *)(lVar24 + 0x144))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(lVar24 + 0x148) + (ulonglong)(uVar9 >> 9) * 8) +
                                 (ulonglong)(uVar9 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            iVar17 = (int)local_e0[1];
            *(uint *)(local_e0 + 1) = iVar17 + 1U;
            if (*(uint *)((longlong)local_e0 + 0xc) < iVar17 + 1U) {
              FUN_1446f48e2(local_e0,iVar17);
              uVar23 = local_1e0;
              local_e0 = local_1e8;
            }
            *(uint *)(*local_e0 + (longlong)iVar17 * 4) = uVar9;
            uVar20 = *(uint *)(param_1 + 0x1c);
            puVar28 = local_1f0;
          }
          uVar13 = uVar13 & ~(uint)uVar27;
          puVar12 = (uint *)param_1[0x1b];
          if ((uint *)param_1[0x1b] == (uint *)0x0) {
            puVar12 = puVar28;
          }
          iVar17 = (int)uVar26;
          lVar24 = (longlong)iVar17;
          uVar9 = puVar12[lVar24] & uVar13;
          if (uVar9 == 0) {
            iVar21 = uVar20 + 0x1e;
            if (-1 < (int)(uVar20 - 1)) {
              iVar21 = uVar20 - 1;
            }
            iVar21 = iVar21 >> 5;
            iVar8 = iVar8 + 0x20;
            iVar22 = iVar21;
            if (iVar21 < iVar17) {
              iVar22 = iVar17;
            }
            uVar23 = local_1e0;
            if (iVar17 < iVar21) {
              lVar25 = 0;
              do {
                uVar9 = puVar12[lVar24 + lVar25 + 1];
                if (uVar9 != 0) {
                  uVar26 = (ulonglong)(iVar17 + (int)lVar25 + 1);
                  uVar13 = 0xffffffff;
                  goto LAB_143b5a5d9;
                }
                iVar8 = iVar8 + 0x20;
                lVar25 = lVar25 + 1;
              } while (iVar22 - lVar24 != lVar25);
              uVar13 = 0xffffffff;
              iVar17 = iVar22;
            }
            uVar26 = (ulonglong)(iVar17 + 1);
            plVar11 = local_1d0;
            local_e0 = local_1e8;
            puVar28 = local_1f0;
            uVar9 = uVar20;
          }
          else {
LAB_143b5a5d9:
            uVar27 = (ulonglong)(-uVar9 & uVar9);
            uVar19 = uVar27 * 2 + 1;
            lVar24 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            uVar9 = (iVar8 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
            if ((int)uVar20 <= (int)uVar9) {
              uVar9 = uVar20;
            }
          }
          param_2 = local_1c8;
        } while (uVar9 != (uint)uVar23);
      }
    }
LAB_143b5a261:
    local_d4 = 0x3f800000;
    local_d8 = (undefined4)param_1[0x14];
    local_e8 = plVar11;
    FUN_14846d2e0();
    if (param_2 != (char *)0x0) {
      if (*param_2 == '\0') {
        pcVar4 = *(code **)(param_2 + 0x70);
        plVar15 = (longlong *)(param_2 + 0x90);
        if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
          plVar15 = *(longlong **)(param_2 + 0x80);
        }
        (**(code **)(*plVar15 + 8))();
        cVar7 = (*pcVar4)();
        *param_2 = cVar7;
        if (cVar7 == '\0') goto LAB_143b5a2ed;
      }
      plVar11 = local_e0;
      if (local_e0 != (longlong *)0x0) {
        if (*local_e0 != 0) {
          FUN_1400020a8();
        }
LAB_143b5a2e3:
        FUN_1400020a8(plVar11);
      }
      goto LAB_143b59904;
    }
LAB_143b5a2ed:
    if (local_e0 != (longlong *)0x0) {
      if (*local_e0 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8();
    }
  }
  if ((*(float *)(param_1 + 0x15) == 1.0) && (!NAN(*(float *)(param_1 + 0x15)))) {
    if ((*(float *)(param_1 + 0x2b) == (float)DAT_14c84635c) &&
       (!NAN(*(float *)(param_1 + 0x2b)) && !NAN((float)DAT_14c84635c))) {
      if ((*(float *)((longlong)param_1 + 0x15c) == DAT_14c84635c._4_4_) &&
         (!NAN(*(float *)((longlong)param_1 + 0x15c)) && !NAN(DAT_14c84635c._4_4_)))
      goto LAB_143b59904;
    }
  }
  uVar9 = (int)plVar11[1] * 0x200 + *(int *)((longlong)plVar11 + 0xc);
  uVar20 = 0;
  if ((uVar9 != 0) && (uVar20 = 0, 0xfffd < (ushort)(**(short **)plVar11[2] - 1U))) {
    uVar13 = 1;
    uVar16 = 1;
    if (1 < (int)uVar9) {
      uVar13 = uVar9;
    }
    do {
      uVar18 = uVar16;
      uVar20 = uVar13;
      if (uVar13 == uVar18) break;
      uVar16 = uVar18 + 1;
      uVar20 = uVar18;
    } while (0xfffd < (ushort)(*(short *)(((undefined8 *)plVar11[2])[uVar18 >> 9] +
                                         (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
  }
joined_r0x000143b5a3f8:
  uVar13 = uVar20;
  if (uVar13 != uVar9) {
    uVar23 = (ulonglong)(uVar13 >> 5 & 0x3fffff8);
    lVar24 = *(longlong *)(plVar11[9] + uVar23);
    uVar20 = (uVar13 & 0xff) << 3;
    fVar1 = *(float *)(lVar24 + (ulonglong)(uVar20 | 4));
    fVar2 = *(float *)(param_1 + 0x15);
    fVar3 = *(float *)((longlong)param_1 + 0x15c);
    *(float *)(lVar24 + (ulonglong)uVar20) =
         fVar2 * *(float *)(lVar24 + (ulonglong)uVar20) + *(float *)(param_1 + 0x2b);
    *(float *)(*(longlong *)(plVar11[9] + uVar23) + (ulonglong)(uVar20 | 4)) =
         1.0 - ((1.0 - fVar1) * fVar2 + fVar3);
    uVar16 = uVar13 + 1;
    if ((int)(uVar13 + 1) < (int)uVar9) {
      uVar16 = uVar9;
    }
    do {
      uVar20 = uVar16;
      if (uVar16 - 1 == uVar13) break;
      uVar13 = uVar13 + 1;
      uVar20 = uVar13;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)(plVar11[2] + (ulonglong)(uVar13 >> 9) * 8) +
                                         (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
    goto joined_r0x000143b5a3f8;
  }
LAB_143b59904:
  if ((local_80 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b5a6a2 FUN_143b5a6a2 body=55 status=ok
// SIG undefined FUN_143b5a6a2(void)

void FUN_143b5a6a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bdc0 == 0) {
    uVar1 = FUN_1418410dc();
    DAT_14cb4bdc0 = FUN_14171c317(FUN_146490c37,uVar1,L"EUVProjectionMethod");
  }
  return;
}



// FUNCTION 143b5a742 FUN_143b5a742 body=115 status=ok
// SIG undefined FUN_143b5a742(void)

void FUN_143b5a742(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  
  uVar1 = *param_2;
  plVar2 = (longlong *)*param_1;
  cVar4 = FUN_146c0b51e(param_1[1],uVar1);
  if (((cVar4 == '\0') || ((int)uVar1 < 0)) ||
     (lVar3 = param_1[1], *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24) <= (int)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 9) * 8) +
                               (ulonglong)(uVar1 & 0x1ff) * 2) - 2U) < 0xfffd;
  }
  *(bool *)(*plVar2 + (longlong)(int)uVar1) = bVar5;
  return;
}



// FUNCTION 143b5a80e FUN_143b5a80e body=123 status=ok
// SIG undefined FUN_143b5a80e(void)

bool FUN_143b5a80e(longlong param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  uVar1 = *param_4;
  lVar4 = (*(undefined8 **)(param_1 + 8))[1];
  if (lVar4 == 0) {
    iVar2 = FUN_146bc96d4(**(undefined8 **)(param_1 + 8));
    lVar4 = (*(undefined8 **)(param_1 + 8))[1];
    if (lVar4 == 0) {
      iVar3 = FUN_146bc96d4(**(undefined8 **)(param_1 + 8),uVar1);
      goto LAB_143b5a853;
    }
    lVar4 = *(longlong *)(lVar4 + 0x20);
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x20);
    iVar2 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(*param_3 >> 9) * 8) +
                    (ulonglong)(*param_3 & 0x1ff) * 4);
  }
  iVar3 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8) +
                  (ulonglong)(uVar1 & 0x1ff) * 4);
LAB_143b5a853:
  return iVar2 == iVar3;
}



// FUNCTION 143b5a88a FUN_143b5a88a body=211 status=ok
// SIG undefined FUN_143b5a88a(void)

undefined8 FUN_143b5a88a(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_48 [44];
  float local_1c [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *param_2;
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 8) + 0x208);
  if (*(int *)(lVar2 + 0x38) < 1) {
    lVar2 = 0;
  }
  else {
    lVar2 = **(longlong **)(lVar2 + 0x30);
  }
  lVar3 = (longlong)*param_3;
  lVar4 = 0;
  do {
    uVar5 = iVar1 * 3 + (int)lVar4;
    local_1c[lVar4] =
         *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar5 >> 9) * 8) +
                   (ulonglong)(uVar5 & 0x1ff) * 4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  lVar2 = *(longlong *)(param_1[1] + 8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),
                    (float)*(double *)(lVar2 + 0x10 + lVar3 * 0x18) * local_1c[2] +
                    (float)*(double *)(lVar2 + lVar3 * 0x18) * local_1c[0] +
                    (float)*(double *)(lVar2 + 8 + lVar3 * 0x18) * local_1c[1] <=
                    *(float *)param_1[2]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5a9e8 FUN_143b5a9e8 body=123 status=ok
// SIG undefined FUN_143b5a9e8(void)

bool FUN_143b5a9e8(longlong param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  uVar1 = *param_4;
  lVar4 = (*(undefined8 **)(param_1 + 8))[1];
  if (lVar4 == 0) {
    iVar2 = FUN_146bc96d4(**(undefined8 **)(param_1 + 8));
    lVar4 = (*(undefined8 **)(param_1 + 8))[1];
    if (lVar4 == 0) {
      iVar3 = FUN_146bc96d4(**(undefined8 **)(param_1 + 8),uVar1);
      goto LAB_143b5aa2d;
    }
    lVar4 = *(longlong *)(lVar4 + 0x20);
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x20);
    iVar2 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(*param_3 >> 9) * 8) +
                    (ulonglong)(*param_3 & 0x1ff) * 4);
  }
  iVar3 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8) +
                  (ulonglong)(uVar1 & 0x1ff) * 4);
LAB_143b5aa2d:
  return iVar2 == iVar3;
}



// FUNCTION 143b5aa64 FUN_143b5aa64 body=181 status=ok
// SIG undefined FUN_143b5aa64(void)

undefined8 FUN_143b5aa64(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_38 [36];
  float local_14 [3];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = (longlong)*param_3;
  iVar1 = *param_2;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x48);
  lVar4 = 0;
  do {
    uVar5 = iVar1 * 3 + (int)lVar4;
    local_14[lVar4] =
         *(float *)(*(longlong *)(lVar2 + (ulonglong)(uVar5 >> 9) * 8) +
                   (ulonglong)(uVar5 & 0x1ff) * 4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)(lVar3 * 3) >> 8),
                    (float)*(double *)(lVar2 + 0x10 + lVar3 * 0x18) * local_14[2] +
                    (float)*(double *)(lVar2 + lVar3 * 0x18) * local_14[0] +
                    (float)*(double *)(lVar2 + 8 + lVar3 * 0x18) * local_14[1] <=
                    **(float **)(param_1 + 0x10));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5abcc FUN_143b5abcc body=29 status=ok
// SIG undefined FUN_143b5abcc(void)

undefined8 FUN_143b5abcc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5acc2 FUN_143b5acc2 body=29 status=ok
// SIG undefined FUN_143b5acc2(void)

undefined8 FUN_143b5acc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5ace0 FUN_143b5ace0 body=73 status=ok
// SIG undefined FUN_143b5ace0(void)

undefined8 FUN_143b5ace0(undefined8 *param_1)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(char **)*param_1;
  if (pcVar1 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)*param_1 >> 8),1);
    if (*pcVar1 == '\0') {
      pcVar2 = *(code **)(pcVar1 + 0x70);
      plVar4 = (longlong *)(pcVar1 + 0x90);
      if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
        plVar4 = *(longlong **)(pcVar1 + 0x80);
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      uVar3 = (*pcVar2)(uVar3);
      *pcVar1 = (char)uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 143b5ad48 FUN_143b5ad48 body=12 status=ok
// SIG undefined FUN_143b5ad48(void)

void FUN_143b5ad48(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b5ad51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b5ad54 FUN_143b5ad54 body=29 status=ok
// SIG undefined FUN_143b5ad54(void)

undefined8 FUN_143b5ad54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5ad72 FUN_143b5ad72 body=73 status=ok
// SIG undefined FUN_143b5ad72(void)

undefined8 FUN_143b5ad72(undefined8 *param_1)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(char **)*param_1;
  if (pcVar1 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)*param_1 >> 8),1);
    if (*pcVar1 == '\0') {
      pcVar2 = *(code **)(pcVar1 + 0x70);
      plVar4 = (longlong *)(pcVar1 + 0x90);
      if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
        plVar4 = *(longlong **)(pcVar1 + 0x80);
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      uVar3 = (*pcVar2)(uVar3);
      *pcVar1 = (char)uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 143b5ade6 FUN_143b5ade6 body=29 status=ok
// SIG undefined FUN_143b5ade6(void)

undefined8 FUN_143b5ade6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5ae04 FUN_143b5ae04 body=123 status=ok
// SIG undefined FUN_143b5ae04(void)

double * FUN_143b5ae04(double *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146bcb256(param_2,&local_38,param_4);
  dVar1 = *(double *)(param_2 + 0x60);
  dVar2 = *(double *)(param_2 + 0x58);
  *param_1 = local_38 - *(double *)(param_2 + 0x50);
  param_1[1] = local_30 - dVar2;
  param_1[2] = local_28 - dVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5ae80 FUN_143b5ae80 body=71 status=ok
// SIG undefined FUN_143b5ae80(void)

void FUN_143b5ae80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14aee5420;
  lVar2 = 0xd;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 143b5aece FUN_143b5aece body=29 status=ok
// SIG undefined FUN_143b5aece(void)

void FUN_143b5aece(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143b5aeec FUN_143b5aeec body=29 status=ok
// SIG undefined FUN_143b5aeec(void)

undefined8 FUN_143b5aeec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5af0a FUN_143b5af0a body=73 status=ok
// SIG undefined FUN_143b5af0a(void)

undefined8 FUN_143b5af0a(undefined8 *param_1)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(char **)*param_1;
  if (pcVar1 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)*param_1 >> 8),1);
    if (*pcVar1 == '\0') {
      pcVar2 = *(code **)(pcVar1 + 0x70);
      plVar4 = (longlong *)(pcVar1 + 0x90);
      if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
        plVar4 = *(longlong **)(pcVar1 + 0x80);
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      uVar3 = (*pcVar2)(uVar3);
      *pcVar1 = (char)uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 143b5af72 FUN_143b5af72 body=12 status=ok
// SIG undefined FUN_143b5af72(void)

void FUN_143b5af72(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b5af7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b5af7e FUN_143b5af7e body=29 status=ok
// SIG undefined FUN_143b5af7e(void)

undefined8 FUN_143b5af7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5af9c FUN_143b5af9c body=73 status=ok
// SIG undefined FUN_143b5af9c(void)

undefined8 FUN_143b5af9c(undefined8 *param_1)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(char **)*param_1;
  if (pcVar1 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)*param_1 >> 8),1);
    if (*pcVar1 == '\0') {
      pcVar2 = *(code **)(pcVar1 + 0x70);
      plVar4 = (longlong *)(pcVar1 + 0x90);
      if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
        plVar4 = *(longlong **)(pcVar1 + 0x80);
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      uVar3 = (*pcVar2)(uVar3);
      *pcVar1 = (char)uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 143b5b010 FUN_143b5b010 body=29 status=ok
// SIG undefined FUN_143b5b010(void)

undefined8 FUN_143b5b010(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5b02e FUN_143b5b02e body=1523 status=ok
// SIG undefined FUN_143b5b02e(void)

void FUN_143b5b02e(undefined8 *param_1,double param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined1 local_2b8 [48];
  code *local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  longlong *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_228;
  float local_1f8;
  int local_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  double local_1c8;
  undefined1 local_1c0;
  undefined4 local_1bc;
  undefined2 local_1b8;
  code *local_1a8;
  undefined8 local_198;
  undefined **local_188;
  undefined1 *local_180;
  float local_168;
  float local_164;
  float local_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 local_144;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined8 uStack_114;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  local_228 = 0;
  local_238 = 0;
  local_1f0 = DAT_14c8464e0;
  uStack_1e8 = DAT_14c8464e8;
  local_1e0 = DAT_14c8464f0;
  local_1d8 = 1;
  local_1d4 = 0x1000;
  local_1c0 = 1;
  local_1bc = 1;
  local_1b8 = 0x100;
  local_198 = 0;
  local_188 = &PTR_LAB_149f36510;
  local_180 = &LAB_1484783e2;
  local_1a8 = FUN_146bd3274;
  local_158 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  local_144 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  local_ec = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_248 = *param_1;
  local_240 = param_1[1];
  local_1d0 = 2;
  local_1f8 = (float)(double)param_1[4];
  dVar8 = (double)local_1f8;
  local_1c8 = param_2 + dVar8;
  param_1[0x68] = local_1c8;
  iVar19 = (int)ROUND(-0.5 - (local_1c8 / dVar8 + local_1c8 / dVar8)) >> 1;
  iVar20 = -iVar19;
  local_1f4 = iVar20;
  dVar7 = (double)FUN_148477d50();
  if ((-2 < iVar19) || ((double)iVar20 * (dVar8 / dVar7) < 0.25)) {
    local_240 = 0;
    local_1d0 = 1;
  }
  FUN_146ba0128(param_1[1],local_2b8);
  FUN_148477eea(&local_248,local_2b8);
  local_2c8 = CONCAT44(uStack_148,uStack_14c);
  local_2c0 = (undefined4)local_144;
  dVar9 = (double)local_1f8;
  param_1[0x2a] = param_3;
  FUN_146ba0128(param_1[1],&local_c8);
  param_1[0x2f] = local_a8;
  param_1[0x30] = uStack_a0;
  param_1[0x2d] = local_b8;
  param_1[0x2e] = uStack_b0;
  param_1[0x2b] = local_c8;
  param_1[0x2c] = uStack_c0;
  dVar7 = (double)param_1[4];
  dVar8 = (double)param_1[0x2b];
  dVar1 = (double)param_1[0x2e];
  param_1[0x2e] = dVar1 + dVar7;
  dVar2 = (double)param_1[0x2f];
  param_1[0x2f] = dVar2 + dVar7;
  dVar3 = (double)param_1[0x30];
  param_1[0x30] = dVar3 + dVar7;
  param_1[0x2b] = dVar8 - dVar7;
  dVar4 = (double)param_1[0x2c];
  param_1[0x2c] = dVar4 - dVar7;
  dVar5 = (double)param_1[0x2d];
  param_1[0x2d] = dVar5 - dVar7;
  if ((double)param_1[0x2a] <= 0.0 && (double)param_1[0x2a] != 0.0) {
    param_1[0x2e] = dVar1 + dVar7 + local_1c8;
    param_1[0x2f] = dVar2 + dVar7 + local_1c8;
    param_1[0x30] = dVar3 + dVar7 + local_1c8;
    param_1[0x2b] = (dVar8 - dVar7) - local_1c8;
    param_1[0x2c] = (dVar4 - dVar7) - local_1c8;
    param_1[0x2d] = (dVar5 - dVar7) - local_1c8;
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x31] = param_1[5];
  FUN_146ffcba0(param_1 + 0x34,param_1 + 6);
  pcVar6 = (code *)param_1[6];
  plVar18 = param_1 + 10;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar18 = (longlong *)param_1[8];
  }
  uVar16 = (**(code **)(*plVar18 + 8))();
  cVar15 = (*pcVar6)(uVar16);
  if (cVar15 == '\0') {
    local_288 = (code *)0x0;
    puVar17 = (undefined8 *)FUN_14001cc68(0x48,8);
    *puVar17 = &PTR_FUN_14aee5480;
    puVar17[1] = &local_248;
    puVar17[2] = (double)local_168;
    puVar17[3] = (double)local_164;
    puVar17[4] = (double)local_160;
    puVar17[5] = dVar9;
    *(undefined4 *)(puVar17 + 7) = local_2c0;
    puVar17[6] = local_2c8;
    puVar17[8] = 0x47efffffe0000000;
    if (puVar17 + 1 != (longlong *)0x0) {
      local_288 = FUN_14847e86c;
    }
    local_c8 = param_1[0x22];
    uStack_c0 = param_1[0x23];
    local_278 = (longlong *)param_1[0x24];
    uStack_b0 = param_1[0x25];
    local_a8 = param_1[0x26];
    uStack_a0 = param_1[0x27];
    local_98 = param_1[0x28];
    uStack_90 = param_1[0x29];
    uVar13 = local_98;
    uVar14 = uStack_90;
    uVar11 = local_a8;
    uVar12 = uStack_a0;
    local_b8 = local_278;
    uVar10 = uStack_b0;
    uVar16 = uStack_c0;
    param_1[0x28] = CONCAT44(uStack_254,local_258);
    param_1[0x29] = CONCAT44(uStack_24c,uStack_250);
    param_1[0x26] = CONCAT44(uStack_264,local_268);
    param_1[0x27] = CONCAT44(uStack_25c,uStack_260);
    param_1[0x24] = puVar17;
    param_1[0x25] = CONCAT44(uStack_26c,uStack_270);
    param_1[0x22] = local_288;
    param_1[0x23] = CONCAT44(uStack_27c,uStack_280);
    uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
    uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
    local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_258 = (undefined4)local_98;
    uStack_254 = local_98._4_4_;
    uStack_250 = (undefined4)uStack_90;
    uStack_24c = uStack_90._4_4_;
    local_268 = (undefined4)local_a8;
    uStack_264 = local_a8._4_4_;
    uStack_260 = (undefined4)uStack_a0;
    uStack_25c = uStack_a0._4_4_;
    uStack_270 = (undefined4)uStack_b0;
    uStack_26c = uStack_b0._4_4_;
    uStack_280 = (undefined4)uStack_c0;
    uStack_27c = uStack_c0._4_4_;
    local_288 = (code *)local_c8;
    uStack_c0 = uVar16;
    uStack_b0 = uVar10;
    local_a8 = uVar11;
    uStack_a0 = uVar12;
    local_98 = uVar13;
    uStack_90 = uVar14;
    if (local_c8 != 0) {
      plVar18 = local_278;
      if (local_278 == (longlong *)0x0) {
        plVar18 = (longlong *)&local_268;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    *(undefined1 *)((longlong)param_1 + 0x191) = 0;
    FUN_14295d6bc(param_1 + 0xe);
    local_288 = (code *)param_1[0x22];
    uStack_c0 = param_1[0x23];
    local_278 = (longlong *)param_1[0x24];
    uStack_b0 = param_1[0x25];
    local_a8 = param_1[0x26];
    uStack_a0 = param_1[0x27];
    local_98 = param_1[0x28];
    uStack_90 = param_1[0x29];
    uVar13 = local_98;
    uVar14 = uStack_90;
    uVar11 = local_a8;
    uVar12 = uStack_a0;
    local_b8 = local_278;
    uVar10 = uStack_b0;
    local_c8 = (longlong)local_288;
    uVar16 = uStack_c0;
    param_1[0x28] = CONCAT44(uStack_254,local_258);
    param_1[0x29] = CONCAT44(uStack_24c,uStack_250);
    param_1[0x26] = CONCAT44(uStack_264,local_268);
    param_1[0x27] = CONCAT44(uStack_25c,uStack_260);
    param_1[0x24] = 0;
    param_1[0x25] = CONCAT44(uStack_26c,uStack_270);
    param_1[0x22] = 0;
    param_1[0x23] = CONCAT44(uStack_27c,uStack_280);
    uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
    uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
    local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_258 = (undefined4)local_98;
    uStack_254 = local_98._4_4_;
    uStack_250 = (undefined4)uStack_90;
    uStack_24c = uStack_90._4_4_;
    local_268 = (undefined4)local_a8;
    uStack_264 = local_a8._4_4_;
    uStack_260 = (undefined4)uStack_a0;
    uStack_25c = uStack_a0._4_4_;
    uStack_270 = (undefined4)uStack_b0;
    uStack_26c = uStack_b0._4_4_;
    uStack_280 = (undefined4)uStack_c0;
    uStack_27c = uStack_c0._4_4_;
    uStack_c0 = uVar16;
    uStack_b0 = uVar10;
    local_a8 = uVar11;
    uStack_a0 = uVar12;
    local_98 = uVar13;
    uStack_90 = uVar14;
    if (local_288 != (code *)0x0) {
      plVar18 = local_278;
      if (local_278 == (longlong *)0x0) {
        plVar18 = (longlong *)&local_268;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
  }
  FUN_148478320(&local_248);
  if ((local_80 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5b622 FUN_143b5b622 body=2021 status=ok
// SIG undefined FUN_143b5b622(void)

void FUN_143b5b622(longlong param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char cVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  undefined1 auStack_428 [40];
  double local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  code *local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  longlong *local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  longlong *local_368;
  undefined1 *local_360;
  undefined8 local_358;
  undefined8 local_348;
  float local_318;
  int local_314;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined1 local_2f8;
  undefined8 local_2f4;
  double local_2e8;
  undefined1 local_2e0;
  undefined4 local_2dc;
  undefined2 local_2d8;
  code *local_2c8;
  undefined8 local_2b8;
  undefined **local_2a8;
  undefined1 *local_2a0;
  float local_288;
  float local_284;
  float local_280;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined8 local_264;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined4 local_23c;
  undefined4 uStack_238;
  undefined8 uStack_234;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined4 uStack_208;
  undefined8 uStack_204;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  longlong local_160;
  longlong local_148;
  uint local_11c;
  longlong local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  if (*(int *)(param_1 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_428);
  }
  local_3b0 = param_1 + 200;
  local_3b8 = param_1 + 0x78;
  FUN_14847ecd4(local_1e8,&local_3b8,0);
  local_348 = 0;
  local_358 = 0;
  local_310 = DAT_14c8464e0;
  uStack_308 = DAT_14c8464e8;
  local_300 = DAT_14c8464f0;
  local_2f8 = 1;
  local_2f4 = 0x100001000;
  local_2e0 = 1;
  local_2dc = 1;
  local_2d8 = 0x100;
  local_2b8 = 0;
  local_2a8 = &PTR_LAB_149f36510;
  local_2a0 = &LAB_14847f28e;
  local_2c8 = FUN_146bd3274;
  local_278 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  local_264 = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_248 = 0;
  uStack_240 = 0;
  local_23c = 0;
  local_258 = 0;
  uStack_250 = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  local_20c = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_318 = (float)*(double *)(param_1 + 0x20);
  local_360 = (undefined1 *)0x0;
  dVar1 = *(double *)(param_1 + 0x28);
  local_2e8 = param_2 + (double)local_318;
  dVar8 = local_2e8 / (double)local_318;
  iVar19 = (int)ROUND(-0.5 - (dVar8 + dVar8)) >> 1;
  local_314 = -iVar19;
  local_368 = &local_3b8;
  if (iVar19 < -1) {
    FUN_148276d54(local_1e8,0);
    local_1d8 = 1;
    local_2f4 = CONCAT44(2,(undefined4)local_2f4);
    local_360 = local_1e8;
    if ((int)local_11c < 0) {
      dVar9 = 1.79769313486232e+308;
      dVar8 = -1.79769313486232e+308;
      dVar10 = dVar9;
      dVar11 = dVar9;
      dVar2 = dVar8;
      dVar1 = dVar8;
    }
    else {
      lVar5 = *(longlong *)(local_160 + (ulonglong)(local_11c >> 9) * 8);
      lVar12 = (ulonglong)((local_11c & 0x1ff) << 3) * 3;
      lVar6 = *(longlong *)(local_148 + (ulonglong)(local_11c >> 9) * 8);
      dVar8 = *(double *)(lVar5 + 0x10 + lVar12);
      dVar1 = *(double *)(lVar6 + 0x10 + lVar12);
      dVar9 = dVar8 - dVar1;
      dVar2 = *(double *)(lVar5 + 8 + lVar12);
      dVar3 = *(double *)(lVar6 + 8 + lVar12);
      dVar8 = dVar8 + dVar1;
      dVar10 = dVar2 - dVar3;
      dVar11 = *(double *)(lVar5 + lVar12) - *(double *)(lVar6 + lVar12);
      dVar2 = dVar2 + dVar3;
      dVar1 = *(double *)(lVar5 + lVar12) + *(double *)(lVar6 + lVar12);
    }
  }
  else {
    dVar9 = *(double *)(param_1 + 0x168) - dVar1;
    dVar10 = *(double *)(param_1 + 0x160) - dVar1;
    dVar11 = *(double *)(param_1 + 0x158) - dVar1;
    dVar8 = *(double *)(param_1 + 0x180) + dVar1;
    dVar2 = *(double *)(param_1 + 0x178) + dVar1;
    dVar1 = *(double *)(param_1 + 0x170) + dVar1;
    local_2f4 = 0x100001000;
  }
  pcVar7 = *(code **)(param_1 + 0x30);
  plVar22 = *(longlong **)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
    plVar22 = (longlong *)(param_1 + 0x50);
  }
  uVar20 = (**(code **)(*plVar22 + 8))();
  cVar18 = (*pcVar7)(uVar20);
  if (cVar18 == '\0') {
    local_3e8 = dVar11;
    local_3e0 = dVar10;
    local_3d8 = dVar9;
    local_3d0 = dVar1;
    local_3c8 = dVar2;
    local_3c0 = dVar8;
    FUN_14847ed96(&local_368);
    local_3f8 = CONCAT44(uStack_268,uStack_26c);
    local_3f0 = (undefined4)local_264;
    local_400 = (double)local_318;
    FUN_146c6544c(param_1 + 0x70);
    *(double *)(param_1 + 0x150) = param_3;
    dVar3 = *(double *)(param_1 + 0x20);
    *(double *)(param_1 + 0x170) = dVar1 + dVar3;
    *(double *)(param_1 + 0x178) = dVar2 + dVar3;
    *(double *)(param_1 + 0x180) = dVar8 + dVar3;
    *(double *)(param_1 + 0x158) = dVar11 - dVar3;
    *(double *)(param_1 + 0x160) = dVar10 - dVar3;
    *(double *)(param_1 + 0x168) = dVar9 - dVar3;
    if (param_3 < 0.0) {
      dVar4 = *(double *)(param_1 + 0x340);
      *(double *)(param_1 + 0x170) = dVar1 + dVar3 + dVar4;
      *(double *)(param_1 + 0x178) = dVar2 + dVar3 + dVar4;
      *(double *)(param_1 + 0x180) = dVar8 + dVar3 + dVar4;
      *(double *)(param_1 + 0x158) = (dVar11 - dVar3) - dVar4;
      *(double *)(param_1 + 0x160) = (dVar10 - dVar3) - dVar4;
      *(double *)(param_1 + 0x168) = (dVar9 - dVar3) - dVar4;
    }
    pcVar7 = *(code **)(param_1 + 0x30);
    plVar22 = (longlong *)(param_1 + 0x50);
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      plVar22 = *(longlong **)(param_1 + 0x40);
    }
    uVar20 = (**(code **)(*plVar22 + 8))(plVar22);
    cVar18 = (*pcVar7)(uVar20);
    if (cVar18 == '\0') {
      local_3a8 = (code *)0x0;
      puVar21 = (undefined8 *)FUN_14001cc68(0x48,8);
      *puVar21 = &PTR_FUN_14aee54a0;
      puVar21[1] = &local_368;
      puVar21[2] = (double)local_288;
      puVar21[3] = (double)local_284;
      puVar21[4] = (double)local_280;
      puVar21[5] = local_400;
      *(undefined4 *)(puVar21 + 7) = local_3f0;
      puVar21[6] = local_3f8;
      puVar21[8] = 0x47efffffe0000000;
      if (puVar21 + 1 != (longlong *)0x0) {
        local_3a8 = FUN_1484836c8;
      }
      local_118 = *(longlong *)(param_1 + 0x110);
      uStack_110 = *(undefined8 *)(param_1 + 0x118);
      local_398 = *(longlong **)(param_1 + 0x120);
      uStack_100 = *(undefined8 *)(param_1 + 0x128);
      local_f8 = *(undefined8 *)(param_1 + 0x130);
      uStack_f0 = *(undefined8 *)(param_1 + 0x138);
      local_e8 = *(undefined8 *)(param_1 + 0x140);
      uStack_e0 = *(undefined8 *)(param_1 + 0x148);
      uVar16 = local_e8;
      uVar17 = uStack_e0;
      uVar14 = local_f8;
      uVar15 = uStack_f0;
      local_108 = local_398;
      uVar13 = uStack_100;
      uVar20 = uStack_110;
      *(ulonglong *)(param_1 + 0x140) = CONCAT44(uStack_374,local_378);
      *(ulonglong *)(param_1 + 0x148) = CONCAT44(uStack_36c,uStack_370);
      *(ulonglong *)(param_1 + 0x130) = CONCAT44(uStack_384,local_388);
      *(ulonglong *)(param_1 + 0x138) = CONCAT44(uStack_37c,uStack_380);
      *(undefined8 **)(param_1 + 0x120) = puVar21;
      *(ulonglong *)(param_1 + 0x128) = CONCAT44(uStack_38c,uStack_390);
      *(code **)(param_1 + 0x110) = local_3a8;
      *(ulonglong *)(param_1 + 0x118) = CONCAT44(uStack_39c,uStack_3a0);
      uStack_110._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
      uStack_100._4_4_ = (undefined4)((ulonglong)uStack_100 >> 0x20);
      local_f8._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
      uStack_f0._4_4_ = (undefined4)((ulonglong)uStack_f0 >> 0x20);
      local_e8._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
      uStack_e0._4_4_ = (undefined4)((ulonglong)uStack_e0 >> 0x20);
      local_378 = (undefined4)local_e8;
      uStack_374 = local_e8._4_4_;
      uStack_370 = (undefined4)uStack_e0;
      uStack_36c = uStack_e0._4_4_;
      local_388 = (undefined4)local_f8;
      uStack_384 = local_f8._4_4_;
      uStack_380 = (undefined4)uStack_f0;
      uStack_37c = uStack_f0._4_4_;
      uStack_390 = (undefined4)uStack_100;
      uStack_38c = uStack_100._4_4_;
      uStack_3a0 = (undefined4)uStack_110;
      uStack_39c = uStack_110._4_4_;
      local_3a8 = (code *)local_118;
      uStack_110 = uVar20;
      uStack_100 = uVar13;
      local_f8 = uVar14;
      uStack_f0 = uVar15;
      local_e8 = uVar16;
      uStack_e0 = uVar17;
      if (local_118 != 0) {
        plVar22 = local_398;
        if (local_398 == (longlong *)0x0) {
          plVar22 = (longlong *)&local_388;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      *(undefined1 *)(param_1 + 0x191) = 0;
      FUN_14295d6bc(param_1 + 0x70);
      local_3a8 = *(code **)(param_1 + 0x110);
      uStack_110 = *(undefined8 *)(param_1 + 0x118);
      local_398 = *(longlong **)(param_1 + 0x120);
      uStack_100 = *(undefined8 *)(param_1 + 0x128);
      local_f8 = *(undefined8 *)(param_1 + 0x130);
      uStack_f0 = *(undefined8 *)(param_1 + 0x138);
      local_e8 = *(undefined8 *)(param_1 + 0x140);
      uStack_e0 = *(undefined8 *)(param_1 + 0x148);
      uVar16 = local_e8;
      uVar17 = uStack_e0;
      uVar14 = local_f8;
      uVar15 = uStack_f0;
      local_108 = local_398;
      uVar13 = uStack_100;
      local_118 = (longlong)local_3a8;
      uVar20 = uStack_110;
      *(ulonglong *)(param_1 + 0x140) = CONCAT44(uStack_374,local_378);
      *(ulonglong *)(param_1 + 0x148) = CONCAT44(uStack_36c,uStack_370);
      *(ulonglong *)(param_1 + 0x130) = CONCAT44(uStack_384,local_388);
      *(ulonglong *)(param_1 + 0x138) = CONCAT44(uStack_37c,uStack_380);
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(ulonglong *)(param_1 + 0x128) = CONCAT44(uStack_38c,uStack_390);
      *(longlong *)(param_1 + 0x110) = 0;
      *(ulonglong *)(param_1 + 0x118) = CONCAT44(uStack_39c,uStack_3a0);
      uStack_110._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
      uStack_100._4_4_ = (undefined4)((ulonglong)uStack_100 >> 0x20);
      local_f8._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
      uStack_f0._4_4_ = (undefined4)((ulonglong)uStack_f0 >> 0x20);
      local_e8._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
      uStack_e0._4_4_ = (undefined4)((ulonglong)uStack_e0 >> 0x20);
      local_378 = (undefined4)local_e8;
      uStack_374 = local_e8._4_4_;
      uStack_370 = (undefined4)uStack_e0;
      uStack_36c = uStack_e0._4_4_;
      local_388 = (undefined4)local_f8;
      uStack_384 = local_f8._4_4_;
      uStack_380 = (undefined4)uStack_f0;
      uStack_37c = uStack_f0._4_4_;
      uStack_390 = (undefined4)uStack_100;
      uStack_38c = uStack_100._4_4_;
      uStack_3a0 = (undefined4)uStack_110;
      uStack_39c = uStack_110._4_4_;
      uStack_110 = uVar20;
      uStack_100 = uVar13;
      local_f8 = uVar14;
      uStack_f0 = uVar15;
      local_e8 = uVar16;
      uStack_e0 = uVar17;
      if (local_3a8 != (code *)0x0) {
        plVar22 = local_398;
        if (local_398 == (longlong *)0x0) {
          plVar22 = (longlong *)&local_388;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
    }
  }
  FUN_14847f1cc(&local_368);
  FUN_148293668(local_1e8);
  if ((local_d0 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5be76 FUN_143b5be76 body=123 status=ok
// SIG undefined FUN_143b5be76(void)

double * FUN_143b5be76(double *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146bcb256(param_2,&local_38,param_4);
  dVar1 = *(double *)(param_2 + 0x60);
  dVar2 = *(double *)(param_2 + 0x58);
  *param_1 = local_38 - *(double *)(param_2 + 0x50);
  param_1[1] = local_30 - dVar2;
  param_1[2] = local_28 - dVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5bef2 FUN_143b5bef2 body=71 status=ok
// SIG undefined FUN_143b5bef2(void)

void FUN_143b5bef2(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14aee54c0;
  lVar2 = 0xd;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 143b5bf40 FUN_143b5bf40 body=29 status=ok
// SIG undefined FUN_143b5bf40(void)

void FUN_143b5bf40(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143b5bf5e FUN_143b5bf5e body=29 status=ok
// SIG undefined FUN_143b5bf5e(void)

undefined8 FUN_143b5bf5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5bf7c FUN_143b5bf7c body=73 status=ok
// SIG undefined FUN_143b5bf7c(void)

undefined8 FUN_143b5bf7c(undefined8 *param_1)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(char **)*param_1;
  if (pcVar1 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)*param_1 >> 8),1);
    if (*pcVar1 == '\0') {
      pcVar2 = *(code **)(pcVar1 + 0x70);
      plVar4 = (longlong *)(pcVar1 + 0x90);
      if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
        plVar4 = *(longlong **)(pcVar1 + 0x80);
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      uVar3 = (*pcVar2)(uVar3);
      *pcVar1 = (char)uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 143b5bfe4 FUN_143b5bfe4 body=12 status=ok
// SIG undefined FUN_143b5bfe4(void)

void FUN_143b5bfe4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b5bfed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b5bff0 FUN_143b5bff0 body=29 status=ok
// SIG undefined FUN_143b5bff0(void)

undefined8 FUN_143b5bff0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5c00e FUN_143b5c00e body=384 status=ok
// SIG undefined FUN_143b5c00e(void)

void FUN_143b5c00e(undefined8 *param_1,uint *param_2,uint *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar5 = *param_3;
  uVar4 = *param_2;
  lVar2 = param_1[1];
  lVar3 = *(longlong *)*param_1;
  uVar6 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x1c8) + (ulonglong)(uVar4 >> 9) * 8) + 8 +
           (ulonglong)((uVar4 & 0x1ff) << 4));
  lVar8 = *(longlong *)(*(longlong *)(lVar3 + 0x188) + (uVar6 >> 9 & 0x7fffff) * 8);
  uVar6 = (ulonglong)((uint)uVar6 & 0x1ff);
  if (*(uint *)(lVar8 + uVar6 * 0xc) == uVar4) {
    lVar7 = 0;
  }
  else {
    lVar7 = 1;
    if (*(uint *)(lVar8 + uVar6 * 0xc + 4) != uVar4) {
      lVar7 = (ulonglong)(*(uint *)(lVar8 + 8 + uVar6 * 0xc) == uVar4) * 3 + -1;
    }
  }
  lVar8 = *(longlong *)(lVar2 + 8);
  uVar4 = FUN_146be9b2a(lVar3 + 0x2d0);
  uVar1 = *(undefined4 *)
           ((ulonglong)(uVar4 & 0x1ff) * 0xc +
            *(longlong *)(*(longlong *)(lVar8 + 0x180) + (ulonglong)(uVar4 >> 9) * 8) + lVar7 * 4);
  uVar6 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x1c8) + (ulonglong)(uVar5 >> 9) * 8) + 8 +
           (ulonglong)((uVar5 & 0x1ff) << 4));
  lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x188) + (uVar6 >> 9 & 0x7fffff) * 8);
  uVar6 = (ulonglong)((uint)uVar6 & 0x1ff);
  if (*(uint *)(lVar3 + uVar6 * 0xc) == uVar5) {
    lVar8 = 0;
  }
  else {
    lVar8 = 1;
    if (*(uint *)(lVar3 + uVar6 * 0xc + 4) != uVar5) {
      lVar8 = (ulonglong)(*(uint *)(lVar3 + 8 + uVar6 * 0xc) == uVar5) * 3 + -1;
    }
  }
  lVar3 = *(longlong *)(lVar2 + 8);
  uVar5 = FUN_146be9b2a(*(longlong *)*param_1 + 0x2d0);
  FUN_1483230b4(*(undefined8 *)(lVar2 + 8),uVar1,
                *(undefined4 *)
                 ((ulonglong)(uVar5 & 0x1ff) * 0xc +
                  *(longlong *)(*(longlong *)(lVar3 + 0x180) + (ulonglong)(uVar5 >> 9) * 8) +
                 lVar8 * 4),*(undefined1 *)(lVar2 + 0xd8));
  return;
}



// FUNCTION 143b5c1b8 FUN_143b5c1b8 body=29 status=ok
// SIG undefined FUN_143b5c1b8(void)

undefined8 FUN_143b5c1b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5c24e FUN_143b5c24e body=29 status=ok
// SIG undefined FUN_143b5c24e(void)

undefined8 FUN_143b5c24e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5c2de FUN_143b5c2de body=29 status=ok
// SIG undefined FUN_143b5c2de(void)

undefined8 FUN_143b5c2de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5c33e FUN_143b5c33e body=29 status=ok
// SIG undefined FUN_143b5c33e(void)

undefined8 FUN_143b5c33e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5c3d4 FUN_143b5c3d4 body=29 status=ok
// SIG undefined FUN_143b5c3d4(void)

undefined8 FUN_143b5c3d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5c464 FUN_143b5c464 body=29 status=ok
// SIG undefined FUN_143b5c464(void)

undefined8 FUN_143b5c464(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5c482 FUN_143b5c482 body=1064 status=ok
// SIG undefined FUN_143b5c482(void)

void FUN_143b5c482(longlong *param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  uint uVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined8 local_e8;
  double local_e0;
  double local_d8 [10];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar4 = *param_2;
  if (-1 < (int)uVar4) {
    lVar6 = param_1[1];
    if ((int)uVar4 < *(int *)(lVar6 + 8) * 0x200 + *(int *)(lVar6 + 0xc)) {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar4 >> 9) * 8) +
                             (ulonglong)(uVar4 & 0x1ff) * 2) - 1U) < 0xfffe) {
        uVar8 = *(uint *)(*(longlong *)(*(longlong *)(lVar6 + 0x60) + (ulonglong)(uVar4 >> 9) * 8) +
                         (ulonglong)(uVar4 & 0x1ff) * 4);
        lVar7 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*param_1 + 8) + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
        uVar9 = (ulonglong)(uVar8 & 0x1ff);
        uVar1 = *(undefined8 *)(lVar7 + uVar9 * 0x18);
        uVar2 = *(undefined8 *)(lVar7 + 8 + uVar9 * 0x18);
        local_78 = *(undefined8 *)(lVar7 + 0x10 + uVar9 * 0x18);
        lVar6 = *(longlong *)(lVar6 + 0x48);
        lVar7 = 0;
        do {
          uVar8 = uVar4 * 3 + (int)lVar7;
          *(undefined4 *)((longlong)&local_88 + lVar7 * 4) =
               *(undefined4 *)
                (*(longlong *)(lVar6 + (ulonglong)(uVar8 >> 9) * 8) + (ulonglong)(uVar8 & 0x1ff) * 4
                );
          lVar7 = lVar7 + 1;
        } while (lVar7 != 3);
        local_d8[3] = (double)(float)local_88;
        local_d8[4] = (double)local_88._4_4_;
        local_d8[5] = (double)(float)local_80;
        local_88 = uVar1;
        local_80 = uVar2;
        local_70 = 0x3ff0000000000000;
        local_d8[8] = 0.0;
        local_d8[9] = 0.0;
        local_d8[6] = 0.0;
        local_d8[7] = 0.0;
        lVar6 = param_1[2];
        lVar7 = 0;
        do {
          dVar3 = local_d8[lVar7 + 6];
          lVar10 = 0;
          do {
            dVar3 = dVar3 + *(double *)(lVar6 + lVar10 * 8) * (double)(&local_88)[lVar10];
            lVar10 = lVar10 + 1;
          } while (lVar10 != 4);
          local_d8[lVar7 + 6] = dVar3;
          dVar3 = local_d8[7];
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x20;
        } while (lVar7 != 4);
        local_d8[0] = 0.0;
        local_d8[1] = 0.0;
        local_d8[2] = 0.0;
        lVar6 = param_1[3];
        lVar7 = 0;
        do {
          dVar11 = local_d8[lVar7];
          lVar10 = 0;
          do {
            dVar11 = dVar11 + *(double *)(lVar6 + lVar10 * 4) *
                              *(double *)((longlong)local_d8 + lVar10 + 0x18);
            lVar10 = lVar10 + 8;
          } while (lVar10 != 0x18);
          local_d8[lVar7] = dVar11;
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 8;
        } while (lVar7 != 3);
        uVar16 = SUB84(local_d8[7],0);
        uVar17 = (undefined4)((ulonglong)local_d8[7] >> 0x20);
        dVar11 = (double)param_1[5];
        if (dVar11 <= local_d8[7]) {
          uVar16 = SUB84(dVar11,0);
          uVar17 = (undefined4)((ulonglong)dVar11 >> 0x20);
        }
        dVar11 = (double)param_1[4];
        if ((double)CONCAT44(uVar17,uVar16) <= dVar11) {
          uVar16 = SUB84(dVar11,0);
          uVar17 = (undefined4)((ulonglong)dVar11 >> 0x20);
        }
        if (((char)param_1[8] != '\x01') || (local_d8[7] <= (double)param_1[6])) {
          dVar11 = ((double)CONCAT44(uVar17,uVar16) - (double)param_1[6]) * (double)param_1[7];
        }
        else {
          dVar11 = (double)param_1[9];
        }
        dVar5 = sin(dVar11);
        dVar11 = cos(dVar11);
        dVar12 = 0.0;
        if ((char)param_1[8] == '\0') {
          dVar12 = (double)(~-(ulonglong)((double)CONCAT44(uVar17,uVar16) != dVar3) & param_1[7]);
        }
        dVar12 = 1.0 - dVar12 * local_d8[8];
        local_f0 = local_d8[0] * dVar12;
        dVar3 = dVar11 * local_d8[1] - dVar12 * dVar5 * local_d8[2];
        local_e8 = dVar3;
        local_e0 = dVar5 * local_d8[1] + dVar12 * dVar11 * local_d8[2];
        local_d8[0] = 0.0;
        local_d8[1] = 0.0;
        local_d8[2] = 0.0;
        lVar6 = param_1[2];
        lVar7 = 0;
        do {
          dVar11 = local_d8[lVar7];
          lVar10 = 0;
          do {
            dVar11 = dVar11 + *(double *)(lVar6 + lVar10 * 4) *
                              *(double *)((longlong)&local_f0 + lVar10);
            lVar10 = lVar10 + 8;
          } while (lVar10 != 0x18);
          local_d8[lVar7] = dVar11;
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 8;
        } while (lVar7 != 3);
        dVar11 = SQRT(local_d8[2] * local_d8[2] +
                      local_d8[0] * local_d8[0] + local_d8[1] * local_d8[1]);
        fVar13 = 0.0;
        fVar14 = 0.0;
        fVar15 = 0.0;
        if (0.0 < dVar11) {
          dVar11 = 1.0 / dVar11;
          fVar13 = (float)(local_d8[2] * dVar11);
          fVar14 = (float)(local_d8[1] * dVar11);
          fVar15 = (float)(local_d8[0] * dVar11);
        }
        lVar6 = param_1[1];
        local_f0 = (double)CONCAT44(fVar14,fVar15);
        local_e8 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),fVar13);
        lVar7 = 0;
        do {
          uVar8 = uVar4 * 3 + (int)lVar7;
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x48) + (ulonglong)(uVar8 >> 9) * 8) +
           (ulonglong)(uVar8 & 0x1ff) * 4) = *(undefined4 *)((longlong)&local_f0 + lVar7 * 4);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 3);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5c8ac FUN_143b5c8ac body=661 status=ok
// SIG undefined FUN_143b5c8ac(void)

void FUN_143b5c8ac(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_108 [40];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8 [9];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar4 = *param_2;
  if (-1 < (int)uVar4) {
    lVar5 = *param_1;
    lVar10 = *(longlong *)(lVar5 + 8);
    if ((int)uVar4 < *(int *)(lVar10 + 0x20) * 0x200 + *(int *)(lVar10 + 0x24)) {
      uVar13 = (ulonglong)(uVar4 >> 9);
      uVar9 = (ulonglong)(uVar4 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar10 + 0x28) + uVar13 * 8) + uVar9 * 2)
                  - 1U) < 0xfffe) {
        lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + uVar13 * 8);
        puVar1 = (undefined8 *)(lVar10 + uVar9 * 0x18);
        local_a8[4] = (double)*puVar1;
        local_a8[5] = (double)puVar1[1];
        local_a8[6] = (double)*(undefined8 *)(lVar10 + 0x10 + uVar9 * 0x18);
        local_a8[7] = 1.0;
        local_a8[2] = 0.0;
        local_a8[3] = 0.0;
        local_a8[0] = 0.0;
        local_a8[1] = 0.0;
        lVar10 = param_1[1];
        lVar11 = 0;
        do {
          dVar3 = local_a8[lVar11];
          lVar12 = 0;
          do {
            dVar3 = dVar3 + *(double *)(lVar10 + lVar12 * 8) * local_a8[lVar12 + 4];
            lVar12 = lVar12 + 1;
          } while (lVar12 != 4);
          local_a8[lVar11] = dVar3;
          dVar3 = local_a8[1];
          lVar11 = lVar11 + 1;
          lVar10 = lVar10 + 0x20;
        } while (lVar11 != 4);
        uVar15 = SUB84(local_a8[1],0);
        uVar16 = (undefined4)((ulonglong)local_a8[1] >> 0x20);
        if (((char)param_1[8] != '\x01') || (local_a8[1] <= (double)param_1[5])) {
          dVar14 = (double)param_1[4];
          if (dVar14 <= local_a8[1]) {
            uVar15 = SUB84(dVar14,0);
            uVar16 = (undefined4)((ulonglong)dVar14 >> 0x20);
          }
          dVar14 = (double)param_1[3];
          if ((double)CONCAT44(uVar16,uVar15) <= dVar14) {
            uVar15 = SUB84(dVar14,0);
            uVar16 = (undefined4)((ulonglong)dVar14 >> 0x20);
          }
          dVar14 = ((double)CONCAT44(uVar16,uVar15) - (double)param_1[5]) * (double)param_1[6];
        }
        else {
          dVar14 = (double)param_1[9];
        }
        dVar6 = sin(dVar14);
        dVar7 = cos(dVar14);
        local_a8[2] = local_a8[2] - (double)param_1[7];
        dVar14 = (double)param_1[4];
        local_a8[1] = (double)param_1[5] - dVar6 * local_a8[2];
        local_a8[2] = local_a8[2] * dVar7 + (double)param_1[7];
        if ((dVar14 < dVar3) || (dVar14 = (double)param_1[3], dVar3 < dVar14)) {
          local_a8[1] = local_a8[1] + dVar7 * (dVar3 - dVar14);
          local_a8[2] = local_a8[2] + dVar6 * (dVar3 - dVar14);
        }
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        lVar10 = param_1[2];
        lVar11 = 0;
        do {
          dVar3 = (double)(&local_c8)[lVar11];
          lVar12 = 0;
          do {
            dVar3 = dVar3 + *(double *)(lVar10 + lVar12 * 8) * local_a8[lVar12];
            lVar12 = lVar12 + 1;
          } while (lVar12 != 4);
          (&local_c8)[lVar11] = dVar3;
          lVar11 = lVar11 + 1;
          lVar10 = lVar10 + 0x20;
        } while (lVar11 != 4);
        lVar5 = *(longlong *)(lVar5 + 8);
        local_e0 = (undefined4)local_c8;
        uStack_dc = local_c8._4_4_;
        uStack_d8 = (undefined4)uStack_c0;
        uStack_d4 = uStack_c0._4_4_;
        local_d0 = local_b8;
        cVar8 = FUN_146bfed03();
        if (cVar8 != '\0') {
          lVar10 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar13 * 8);
          *(undefined8 *)(lVar10 + 0x10 + uVar9 * 0x18) = local_d0;
          puVar2 = (undefined4 *)(lVar10 + uVar9 * 0x18);
          *puVar2 = local_e0;
          puVar2[1] = uStack_dc;
          puVar2[2] = uStack_d8;
          puVar2[3] = uStack_d4;
          if (*(char *)(lVar5 + 0x210) == '\x01') {
            LOCK();
            *(int *)(lVar5 + 0x214) = *(int *)(lVar5 + 0x214) + 1;
            UNLOCK();
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5cb42 FUN_143b5cb42 body=1813 status=ok
// SIG undefined FUN_143b5cb42(void)

void FUN_143b5cb42(longlong *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_178 [44];
  float local_14c [3];
  double local_140 [9];
  float local_f4 [3];
  double local_e8 [9];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar1 = *param_2;
  if ((-1 < (int)uVar1) &&
     (lVar7 = param_1[1], (int)uVar1 < *(int *)(lVar7 + 8) * 0x200 + *(int *)(lVar7 + 0xc))) {
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + (ulonglong)(uVar1 >> 9) * 8)
                           + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      lVar4 = *param_1;
      uVar8 = *(uint *)(*(longlong *)(*(longlong *)(lVar7 + 0x60) + (ulonglong)(uVar1 >> 9) * 8) +
                       (ulonglong)(uVar1 & 0x1ff) * 4);
      lVar6 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 8) + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
      uVar9 = (ulonglong)(uVar8 & 0x1ff);
      local_e8[4] = *(double *)(lVar6 + uVar9 * 0x18);
      local_e8[5] = *(double *)(lVar6 + 8 + uVar9 * 0x18);
      local_e8[6] = *(double *)(lVar6 + 0x10 + uVar9 * 0x18);
      lVar7 = *(longlong *)(lVar7 + 0x48);
      lVar6 = 0;
      do {
        uVar8 = uVar1 * 3 + (int)lVar6;
        local_f4[lVar6] =
             *(float *)(*(longlong *)(lVar7 + (ulonglong)(uVar8 >> 9) * 8) +
                       (ulonglong)(uVar8 & 0x1ff) * 4);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 3);
      local_140[6] = (double)local_f4[0];
      local_140[7] = (double)local_f4[1];
      local_140[8] = (double)local_f4[2];
      local_e8[7] = 1.0;
      local_e8[2] = 0.0;
      local_e8[3] = 0.0;
      local_e8[0] = 0.0;
      local_e8[1] = 0.0;
      lVar7 = lVar4 + 0xe0;
      lVar5 = 0;
      lVar6 = lVar7;
      do {
        dVar18 = local_e8[lVar5];
        lVar10 = 0;
        do {
          dVar18 = dVar18 + *(double *)(lVar6 + lVar10 * 8) * local_e8[lVar10 + 4];
          lVar10 = lVar10 + 1;
        } while (lVar10 != 4);
        local_e8[lVar5] = dVar18;
        dVar18 = local_e8[2];
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 0x20;
      } while (lVar5 != 4);
      local_140[3] = 0.0;
      local_140[4] = 0.0;
      local_140[5] = 0.0;
      lVar6 = param_1[2];
      lVar5 = 0;
      do {
        dVar11 = local_140[lVar5 + 3];
        lVar10 = 0;
        do {
          dVar11 = dVar11 + *(double *)(lVar6 + lVar10 * 4) *
                            *(double *)((longlong)local_140 + lVar10 + 0x30);
          lVar10 = lVar10 + 8;
        } while (lVar10 != 0x18);
        local_140[lVar5 + 3] = dVar11;
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 8;
      } while (lVar5 != 3);
      dVar11 = (double)param_1[3];
      dVar13 = (double)param_1[4];
      dVar17 = dVar13 - dVar11;
      dVar12 = (local_e8[2] - dVar11) / dVar17;
      if (1.0 <= dVar12) {
        dVar12 = 1.0;
      }
      dVar15 = 0.0;
      if (dVar12 <= 0.0) {
        dVar12 = 0.0;
      }
      iVar2 = *(int *)(lVar4 + 0x170);
      if (iVar2 == 0) {
        dVar11 = sin(dVar12 * 3.1415927410125732);
        dVar12 = cos(dVar12 * 3.1415927410125732);
        dVar16 = (double)param_1[5] * dVar11 + 1.0;
        dVar17 = dVar11 * (double)param_1[6] + 1.0;
        dVar11 = (double)param_1[3];
        dVar13 = (double)param_1[4];
        dVar3 = 3.1415927410125732 / (dVar13 - dVar11);
        dVar15 = (double)param_1[5] * dVar12 * dVar3;
        dVar3 = dVar12 * (double)param_1[6] * dVar3;
      }
      else if (iVar2 == 1) {
        dVar11 = sin(dVar12 * 3.1415927410125732);
        dVar12 = sin(dVar12 * 6.2831854820251465);
        dVar16 = dVar11 * (double)param_1[5] * dVar11 + 1.0;
        dVar17 = dVar11 * (double)param_1[6] * dVar11 + 1.0;
        dVar11 = (double)param_1[3];
        dVar13 = (double)param_1[4];
        dVar3 = 3.1415927410125732 / (dVar13 - dVar11);
        dVar15 = (double)param_1[5] * dVar12 * dVar3;
        dVar3 = dVar12 * (double)param_1[6] * dVar3;
      }
      else if (iVar2 == 2) {
        dVar15 = dVar12;
        if (0.5 <= dVar12) {
          dVar15 = 1.0 - dVar12;
        }
        if (0.05 <= ABS(dVar12 + -0.5)) {
          dVar3 = *(double *)(&DAT_14aee12c0 + (ulonglong)(dVar12 < 0.5) * 8) / dVar17;
        }
        else {
          dVar3 = (-2.0 / dVar17 - 2.0 / dVar17) * ((dVar12 + -0.5 + 0.05) / 0.1) + 2.0 / dVar17;
        }
        if (dVar12 < 0.05) {
          dVar3 = (2.0 / dVar17) * ((dVar12 + 0.05) / 0.1) + 0.0;
        }
        if (1.0 - dVar12 < 0.05) {
          dVar3 = (0.0 - -2.0 / dVar17) * ((dVar12 + -1.0 + 0.05) / 0.1) + -2.0 / dVar17;
        }
        dVar16 = (double)param_1[5] * (dVar15 + dVar15) + 1.0;
        dVar17 = (dVar15 + dVar15) * (double)param_1[6] + 1.0;
        dVar15 = (double)param_1[5] * dVar3;
        dVar3 = (double)param_1[6] * dVar3;
      }
      else {
        dVar3 = 0.0;
        dVar17 = 0.0;
        dVar16 = 0.0;
      }
      dVar12 = 0.0;
      dVar14 = 0.0;
      if (dVar18 <= dVar13 && dVar11 <= dVar18) {
        dVar12 = dVar3;
        dVar14 = dVar15;
      }
      local_140[0] = dVar17 * local_140[3];
      local_140[1] = dVar16 * local_140[4];
      local_140[2] = dVar17 * dVar16 * local_140[5] +
                     (-dVar17 * dVar14 * local_e8[0] * local_140[3] -
                     dVar12 * dVar16 * local_e8[1] * local_140[4]);
      local_140[3] = 0.0;
      local_140[4] = 0.0;
      local_140[5] = 0.0;
      lVar4 = 0;
      do {
        dVar18 = local_140[lVar4 + 3];
        lVar6 = 0;
        do {
          dVar18 = dVar18 + *(double *)(lVar7 + lVar6 * 4) *
                            *(double *)((longlong)local_140 + lVar6);
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0x18);
        local_140[lVar4 + 3] = dVar18;
        lVar4 = lVar4 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar4 != 3);
      dVar18 = SQRT(local_140[5] * local_140[5] +
                    local_140[3] * local_140[3] + local_140[4] * local_140[4]);
      local_14c[2] = 0.0;
      local_14c[1] = 0.0;
      local_14c[0] = 0.0;
      if (0.0 < dVar18) {
        dVar18 = 1.0 / dVar18;
        local_14c[2] = (float)(local_140[5] * dVar18);
        local_14c[1] = (float)(local_140[4] * dVar18);
        local_14c[0] = (float)(local_140[3] * dVar18);
      }
      lVar7 = param_1[1];
      lVar4 = 0;
      do {
        uVar8 = uVar1 * 3 + (int)lVar4;
        *(float *)(*(longlong *)(*(longlong *)(lVar7 + 0x48) + (ulonglong)(uVar8 >> 9) * 8) +
                  (ulonglong)(uVar8 & 0x1ff) * 4) = local_14c[lVar4];
        lVar4 = lVar4 + 1;
      } while (lVar4 != 3);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5d258 FUN_143b5d258 body=711 status=ok
// SIG undefined FUN_143b5d258(void)

void FUN_143b5d258(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = *param_2;
  if ((int)uVar2 < 0) goto LAB_143b5d2b1;
  lVar4 = *param_1;
  lVar7 = *(longlong *)(lVar4 + 8);
  if (*(int *)(lVar7 + 0x20) * 0x200 + *(int *)(lVar7 + 0x24) <= (int)uVar2) goto LAB_143b5d2b1;
  uVar10 = (ulonglong)(uVar2 >> 9);
  uVar6 = (ulonglong)(uVar2 & 0x1ff);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar7 + 0x28) + uVar10 * 8) +
                                  uVar6 * 2) - 1U)) goto LAB_143b5d2b1;
  lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + uVar10 * 8);
  puVar1 = (undefined8 *)(lVar7 + uVar6 * 0x18);
  local_68[4] = (double)*puVar1;
  local_68[5] = (double)puVar1[1];
  local_68[6] = (double)*(undefined8 *)(lVar7 + 0x10 + uVar6 * 0x18);
  local_68[7] = 1.0;
  local_68[2] = 0.0;
  local_68[3] = 0.0;
  local_68[0] = 0.0;
  local_68[1] = 0.0;
  lVar7 = lVar4 + 0xe0;
  lVar8 = 0;
  do {
    dVar11 = local_68[lVar8];
    lVar9 = 0;
    do {
      dVar11 = dVar11 + *(double *)(lVar7 + lVar9 * 8) * local_68[lVar9 + 4];
      lVar9 = lVar9 + 1;
    } while (lVar9 != 4);
    local_68[lVar8] = dVar11;
    lVar8 = lVar8 + 1;
    lVar7 = lVar7 + 0x20;
  } while (lVar8 != 4);
  dVar11 = (local_68[2] - (double)param_1[2]) / ((double)param_1[3] - (double)param_1[2]);
  if (1.0 <= dVar11) {
    dVar11 = 1.0;
  }
  dVar13 = 0.0;
  if (dVar11 <= 0.0) {
    dVar11 = 0.0;
  }
  iVar3 = *(int *)(lVar4 + 0x170);
  if (iVar3 == 0) {
    dVar11 = sin(dVar11 * 3.1415927410125732);
    dVar13 = (double)param_1[4] * dVar11 + 1.0;
    dVar12 = dVar11 * (double)param_1[5] + 1.0;
  }
  else {
    if (iVar3 == 1) {
      dVar12 = sin(dVar11 * 3.1415927410125732);
      dVar13 = (double)param_1[4] * dVar12 * dVar12;
      dVar12 = (double)param_1[5] * dVar12 * dVar12;
    }
    else {
      dVar12 = 0.0;
      if (iVar3 != 2) goto LAB_143b5d461;
      dVar12 = (double)(~-(ulonglong)(dVar11 < 0.5) & (ulonglong)(1.0 - dVar11) |
                       (ulonglong)dVar11 & -(ulonglong)(dVar11 < 0.5));
      dVar12 = dVar12 + dVar12;
      dVar13 = (double)param_1[4] * dVar12;
      dVar12 = dVar12 * (double)param_1[5];
    }
    dVar13 = dVar13 + 1.0;
    dVar12 = dVar12 + 1.0;
  }
LAB_143b5d461:
  local_68[0] = dVar13 * local_68[0];
  local_68[1] = dVar12 * local_68[1];
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  lVar7 = param_1[1];
  lVar8 = 0;
  do {
    dVar11 = (double)(&local_88)[lVar8];
    lVar9 = 0;
    do {
      dVar11 = dVar11 + *(double *)(lVar7 + lVar9 * 8) * local_68[lVar9];
      lVar9 = lVar9 + 1;
    } while (lVar9 != 4);
    (&local_88)[lVar8] = dVar11;
    lVar8 = lVar8 + 1;
    lVar7 = lVar7 + 0x20;
  } while (lVar8 != 4);
  lVar4 = *(longlong *)(lVar4 + 8);
  local_a0 = (undefined4)local_88;
  uStack_9c = local_88._4_4_;
  uStack_98 = (undefined4)uStack_80;
  uStack_94 = uStack_80._4_4_;
  local_90 = local_78;
  cVar5 = FUN_146bfed03();
  if (cVar5 != '\0') {
    lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar10 * 8);
    *(undefined8 *)(lVar7 + 0x10 + uVar6 * 0x18) = local_90;
    puVar1 = (undefined8 *)(lVar7 + uVar6 * 0x18);
    *puVar1 = CONCAT44(uStack_9c,local_a0);
    puVar1[1] = CONCAT44(uStack_94,uStack_98);
    if (*(char *)(lVar4 + 0x210) == '\x01') {
      LOCK();
      *(int *)(lVar4 + 0x214) = *(int *)(lVar4 + 0x214) + 1;
      UNLOCK();
    }
  }
LAB_143b5d2b1:
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5d520 FUN_143b5d520 body=1083 status=ok
// SIG undefined FUN_143b5d520(void)

void FUN_143b5d520(longlong *param_1,uint *param_2)

{
  double dVar1;
  uint uVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined8 local_e8;
  double local_e0;
  double local_d8 [6];
  float local_a4 [3];
  double local_98 [9];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar2 = *param_2;
  if ((-1 < (int)uVar2) &&
     (lVar7 = param_1[1], (int)uVar2 < *(int *)(lVar7 + 8) * 0x200 + *(int *)(lVar7 + 0xc))) {
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + (ulonglong)(uVar2 >> 9) * 8)
                           + (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      lVar4 = *param_1;
      uVar8 = *(uint *)(*(longlong *)(*(longlong *)(lVar7 + 0x60) + (ulonglong)(uVar2 >> 9) * 8) +
                       (ulonglong)(uVar2 & 0x1ff) * 4);
      lVar6 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 8) + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
      uVar9 = (ulonglong)(uVar8 & 0x1ff);
      local_98[4] = *(double *)(lVar6 + uVar9 * 0x18);
      local_98[5] = *(double *)(lVar6 + 8 + uVar9 * 0x18);
      local_98[6] = *(double *)(lVar6 + 0x10 + uVar9 * 0x18);
      lVar7 = *(longlong *)(lVar7 + 0x48);
      lVar6 = 0;
      do {
        uVar8 = uVar2 * 3 + (int)lVar6;
        local_a4[lVar6] =
             *(float *)(*(longlong *)(lVar7 + (ulonglong)(uVar8 >> 9) * 8) +
                       (ulonglong)(uVar8 & 0x1ff) * 4);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 3);
      local_d8[3] = (double)local_a4[0];
      local_d8[4] = (double)local_a4[1];
      local_d8[5] = (double)local_a4[2];
      local_98[7] = 1.0;
      local_98[2] = 0.0;
      local_98[3] = 0.0;
      local_98[0] = 0.0;
      local_98[1] = 0.0;
      lVar7 = lVar4 + 0xe0;
      lVar5 = 0;
      lVar6 = lVar7;
      do {
        dVar11 = local_98[lVar5];
        lVar10 = 0;
        do {
          dVar11 = dVar11 + *(double *)(lVar6 + lVar10 * 8) * local_98[lVar10 + 4];
          lVar10 = lVar10 + 1;
        } while (lVar10 != 4);
        local_98[lVar5] = dVar11;
        dVar11 = local_98[2];
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 0x20;
      } while (lVar5 != 4);
      local_d8[0] = 0.0;
      local_d8[1] = 0.0;
      local_d8[2] = 0.0;
      lVar6 = param_1[2];
      lVar5 = 0;
      do {
        dVar1 = local_d8[lVar5];
        lVar10 = 0;
        do {
          dVar1 = dVar1 + *(double *)(lVar6 + lVar10 * 4) *
                          *(double *)((longlong)local_d8 + lVar10 + 0x18);
          lVar10 = lVar10 + 8;
        } while (lVar10 != 0x18);
        local_d8[lVar5] = dVar1;
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 8;
      } while (lVar5 != 3);
      dVar1 = (local_98[2] - (double)param_1[3]) / ((double)param_1[4] - (double)param_1[3]);
      if (1.0 <= dVar1) {
        dVar1 = 1.0;
      }
      uVar8 = 0;
      if (dVar1 <= 0.0) {
        dVar1 = 0.0;
      }
      if (*(char *)(lVar4 + 0x168) == '\0') {
        uVar8 = 0x3fe00000;
      }
      dVar3 = (dVar1 - (double)((ulonglong)uVar8 << 0x20)) * (double)param_1[5];
      dVar1 = cos(dVar3);
      dVar3 = sin(dVar3);
      if (((double)param_1[4] < dVar11) || (dVar11 < (double)param_1[3])) {
        dVar11 = 0.0;
      }
      else {
        dVar11 = (double)param_1[5] / ((double)param_1[4] - (double)param_1[3]);
      }
      local_f0 = dVar1 * local_d8[0] - local_d8[1] * dVar3;
      dVar1 = dVar3 * local_d8[0] + dVar1 * local_d8[1];
      local_e8 = dVar1;
      local_e0 = (local_d8[0] * local_98[1] - local_d8[1] * local_98[0]) * dVar11 + local_d8[2];
      local_d8[0] = 0.0;
      local_d8[1] = 0.0;
      local_d8[2] = 0.0;
      lVar4 = 0;
      do {
        dVar11 = local_d8[lVar4];
        lVar6 = 0;
        do {
          dVar11 = dVar11 + *(double *)(lVar7 + lVar6 * 4) *
                            *(double *)((longlong)&local_f0 + lVar6);
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0x18);
        local_d8[lVar4] = dVar11;
        lVar4 = lVar4 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar4 != 3);
      dVar11 = SQRT(local_d8[2] * local_d8[2] +
                    local_d8[0] * local_d8[0] + local_d8[1] * local_d8[1]);
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
      if (0.0 < dVar11) {
        dVar11 = 1.0 / dVar11;
        fVar12 = (float)(local_d8[2] * dVar11);
        fVar13 = (float)(local_d8[1] * dVar11);
        fVar14 = (float)(local_d8[0] * dVar11);
      }
      lVar7 = param_1[1];
      local_f0 = (double)CONCAT44(fVar13,fVar14);
      local_e8 = (double)CONCAT44((int)((ulonglong)dVar1 >> 0x20),fVar12);
      lVar4 = 0;
      do {
        uVar8 = uVar2 * 3 + (int)lVar4;
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x48) + (ulonglong)(uVar8 >> 9) * 8) +
         (ulonglong)(uVar8 & 0x1ff) * 4) = *(undefined4 *)((longlong)&local_f0 + lVar4 * 4);
        lVar4 = lVar4 + 1;
      } while (lVar4 != 3);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5d95c FUN_143b5d95c body=612 status=ok
// SIG undefined FUN_143b5d95c(void)

void FUN_143b5d95c(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98 [9];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar13 = *param_2;
  if (-1 < (int)uVar13) {
    lVar4 = *param_1;
    lVar9 = *(longlong *)(lVar4 + 8);
    if ((int)uVar13 < *(int *)(lVar9 + 0x20) * 0x200 + *(int *)(lVar9 + 0x24)) {
      uVar12 = (ulonglong)(uVar13 >> 9);
      uVar8 = (ulonglong)(uVar13 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar9 + 0x28) + uVar12 * 8) + uVar8 * 2) -
                  1U) < 0xfffe) {
        lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + uVar12 * 8);
        puVar1 = (undefined8 *)(lVar9 + uVar8 * 0x18);
        local_98[4] = (double)*puVar1;
        local_98[5] = (double)puVar1[1];
        local_98[6] = (double)*(undefined8 *)(lVar9 + 0x10 + uVar8 * 0x18);
        local_98[7] = 1.0;
        local_98[2] = 0.0;
        local_98[3] = 0.0;
        local_98[0] = 0.0;
        local_98[1] = 0.0;
        lVar9 = lVar4 + 0xe0;
        lVar10 = 0;
        do {
          dVar3 = local_98[lVar10];
          lVar11 = 0;
          do {
            dVar3 = dVar3 + *(double *)(lVar9 + lVar11 * 8) * local_98[lVar11 + 4];
            lVar11 = lVar11 + 1;
          } while (lVar11 != 4);
          local_98[lVar10] = dVar3;
          lVar10 = lVar10 + 1;
          lVar9 = lVar9 + 0x20;
        } while (lVar10 != 4);
        dVar3 = (local_98[2] - (double)param_1[2]) / ((double)param_1[3] - (double)param_1[2]);
        if (1.0 <= dVar3) {
          dVar3 = 1.0;
        }
        uVar13 = 0;
        if (dVar3 <= 0.0) {
          dVar3 = 0.0;
        }
        if (*(char *)(lVar4 + 0x168) == '\0') {
          uVar13 = 0x3fe00000;
        }
        dVar6 = (dVar3 - (double)((ulonglong)uVar13 << 0x20)) * (double)param_1[4];
        dVar3 = cos(dVar6);
        dVar6 = sin(dVar6);
        dVar5 = dVar6 * local_98[0];
        local_98[0] = dVar3 * local_98[0] - local_98[1] * dVar6;
        local_98[1] = dVar5 + dVar3 * local_98[1];
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        lVar9 = param_1[1];
        lVar10 = 0;
        do {
          dVar3 = (double)(&local_b8)[lVar10];
          lVar11 = 0;
          do {
            dVar3 = dVar3 + *(double *)(lVar9 + lVar11 * 8) * local_98[lVar11];
            lVar11 = lVar11 + 1;
          } while (lVar11 != 4);
          (&local_b8)[lVar10] = dVar3;
          lVar10 = lVar10 + 1;
          lVar9 = lVar9 + 0x20;
        } while (lVar10 != 4);
        lVar4 = *(longlong *)(lVar4 + 8);
        local_d0 = (undefined4)local_b8;
        uStack_cc = local_b8._4_4_;
        uStack_c8 = (undefined4)uStack_b0;
        uStack_c4 = uStack_b0._4_4_;
        local_c0 = local_a8;
        cVar7 = FUN_146bfed03();
        if (cVar7 != '\0') {
          lVar9 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar12 * 8);
          *(undefined8 *)(lVar9 + 0x10 + uVar8 * 0x18) = local_c0;
          puVar2 = (undefined4 *)(lVar9 + uVar8 * 0x18);
          *puVar2 = local_d0;
          puVar2[1] = uStack_cc;
          puVar2[2] = uStack_c8;
          puVar2[3] = uStack_c4;
          if (*(char *)(lVar4 + 0x210) == '\x01') {
            LOCK();
            *(int *)(lVar4 + 0x214) = *(int *)(lVar4 + 0x214) + 1;
            UNLOCK();
          }
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5dbc2 FUN_143b5dbc2 body=2044 status=ok
// SIG undefined FUN_143b5dbc2(void)

void FUN_143b5dbc2(longlong *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  double *pdVar27;
  uint uVar28;
  int *piVar29;
  longlong lVar30;
  ulonglong uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_1f8 [36];
  uint local_1d4 [3];
  double local_1c8 [7];
  double dStack_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  longlong local_148;
  ulonglong uStack_140;
  uint local_138 [4];
  uint *local_128;
  int local_120;
  uint local_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  longlong local_108;
  int local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  puVar5 = *(undefined8 **)(*(longlong *)(*param_1 + 0x18) + (longlong)*param_2 * 8);
  local_128 = (uint *)0x0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0x80;
  uStack_118 = 0xffffffff;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  iVar18 = *(int *)(puVar5 + 1);
  if ((longlong)iVar18 != 0) {
    lVar26 = (longlong)iVar18 * 3;
    if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(lVar26);
    }
    uVar20 = (uint)lVar26;
    FUN_1400bac10(&local_148);
    iVar18 = 1;
    if (3 < uVar20) {
      uVar20 = (uVar20 | 1) + 0xe;
      iVar18 = 0x1f;
      if (uVar20 != 0) {
        for (; uVar20 >> iVar18 == 0; iVar18 = iVar18 + -1) {
        }
      }
      iVar18 = 1 << ((byte)iVar18 & 0x1f);
    }
    if ((local_100 == 0) || (local_100 < iVar18)) {
      local_100 = iVar18;
      FUN_144a56d22();
    }
    dVar7 = 1.0;
    if ((longlong)*(int *)(puVar5 + 1) != 0) {
      piVar29 = (int *)*puVar5;
      piVar1 = piVar29 + *(int *)(puVar5 + 1);
      dVar12 = 1.79769313486232e+308;
      dVar10 = -1.79769313486232e+308;
      dVar8 = 0.0;
      dVar9 = 0.0;
      dVar11 = dVar10;
      dVar13 = dVar12;
      do {
        iVar18 = *piVar29;
        uVar20 = iVar18 * 3 + 2;
        lVar26 = *(longlong *)(*(longlong *)param_1[1] + 0x78);
        local_1d4[2] = *(int *)(*(longlong *)(lVar26 + (ulonglong)(uVar20 >> 9) * 8) +
                               (ulonglong)(uVar20 & 0x1ff) * 4);
        uVar20 = iVar18 * 3 + 1;
        local_1d4[1] = *(int *)(*(longlong *)(lVar26 + (ulonglong)(uVar20 >> 9) * 8) +
                               (ulonglong)(uVar20 & 0x1ff) * 4);
        local_1d4[0] = *(uint *)(*(longlong *)(lVar26 + (ulonglong)((uint)(iVar18 * 3) >> 9) * 8) +
                                (ulonglong)(iVar18 * 3 & 0x1ff) * 4);
        if (((local_1d4[0] != 0xffffffff) && (local_1d4[1] != -1)) && (local_1d4[2] != -1)) {
          pdVar27 = local_1c8 + 6;
          lVar26 = 0;
          dVar33 = dVar10;
          dVar32 = dVar11;
          dVar34 = dVar13;
          dVar14 = dVar12;
          do {
            lVar30 = *(longlong *)param_1[1];
            uVar20 = *(uint *)((longlong)local_1d4 + lVar26);
            lVar6 = *(longlong *)
                     (*(longlong *)(lVar30 + 0x48) + (ulonglong)(uVar20 >> 5 & 0x3fffff8));
            uVar31 = (ulonglong)((uVar20 & 0xff) << 3);
            dVar11 = (double)*(float *)(lVar6 + 4 + uVar31);
            dVar10 = (double)*(float *)(lVar6 + uVar31);
            *(double *)((longlong)local_1c8 + lVar26 * 4) = dVar10;
            *(double *)((longlong)local_1c8 + lVar26 * 4 + 8) = dVar11;
            dVar13 = dVar10;
            if (dVar34 <= dVar10) {
              dVar13 = dVar34;
            }
            if (dVar10 <= dVar33) {
              dVar10 = dVar33;
            }
            dVar12 = dVar11;
            if (dVar14 <= dVar11) {
              dVar12 = dVar14;
            }
            if (dVar11 <= dVar32) {
              dVar11 = dVar32;
            }
            uVar20 = *(uint *)(*(longlong *)
                                (*(longlong *)(lVar30 + 0x60) + (ulonglong)(uVar20 >> 9) * 8) +
                              (ulonglong)(uVar20 & 0x1ff) * 4);
            lVar30 = *(longlong *)(*(longlong *)(param_1[2] + 0x10) + (ulonglong)(uVar20 >> 9) * 8);
            uVar31 = (ulonglong)(uVar20 & 0x1ff);
            pdVar27[2] = *(double *)(lVar30 + 0x10 + uVar31 * 0x18);
            puVar2 = (undefined4 *)(lVar30 + uVar31 * 0x18);
            uVar15 = puVar2[1];
            uVar16 = puVar2[2];
            uVar17 = puVar2[3];
            *(undefined4 *)pdVar27 = *puVar2;
            *(undefined4 *)((longlong)pdVar27 + 4) = uVar15;
            *(undefined4 *)(pdVar27 + 1) = uVar16;
            *(undefined4 *)((longlong)pdVar27 + 0xc) = uVar17;
            FUN_1447cbafe();
            lVar26 = lVar26 + 4;
            pdVar27 = pdVar27 + 3;
            dVar33 = dVar10;
            dVar32 = dVar11;
            dVar34 = dVar13;
            dVar14 = dVar12;
          } while (lVar26 != 0xc);
          dVar33 = (local_1c8[5] - local_1c8[1]) * (local_1c8[2] - local_1c8[0]) -
                   (local_1c8[4] - local_1c8[0]) * (local_1c8[3] - local_1c8[1]);
          uVar31 = -(ulonglong)(-dVar33 <= dVar33);
          dVar8 = dVar8 + (double)(~uVar31 & (ulonglong)-dVar33 | (ulonglong)dVar33 & uVar31) * 0.5;
          dVar34 = (local_168 - local_1c8[6]) * (local_178 - dStack_190) -
                   (local_180 - local_1c8[6]) * (local_160 - dStack_190);
          dVar32 = (local_158 - local_188) * (local_180 - local_1c8[6]) -
                   (local_170 - local_188) * (local_168 - local_1c8[6]);
          dVar33 = (local_160 - dStack_190) * (local_170 - local_188) -
                   (local_158 - local_188) * (local_178 - dStack_190);
          dVar9 = dVar9 + SQRT(dVar34 * dVar34 + dVar33 * dVar33 + dVar32 * dVar32) * 0.5;
        }
        piVar29 = piVar29 + 1;
      } while (piVar29 != piVar1);
      if (1e-05 < dVar8) {
        if (dVar9 < 0.0) {
          dVar9 = sqrt(dVar9);
        }
        else {
          dVar9 = SQRT(dVar9);
        }
        if (dVar8 < 0.0) {
          dVar8 = sqrt(dVar8);
        }
        else {
          dVar8 = SQRT(dVar8);
        }
        dVar7 = dVar9 / dVar8;
      }
      goto LAB_143b5e055;
    }
  }
  dVar7 = 1.0;
  dVar12 = 1.79769313486232e+308;
  dVar10 = -1.79769313486232e+308;
  dVar11 = dVar10;
  dVar13 = dVar12;
LAB_143b5e055:
  fVar3 = *(float *)param_1[3];
  if (local_120 == 0) {
    uVar22 = 1;
    uVar31 = 0;
    iVar19 = 0;
    iVar18 = 0;
  }
  else {
    puVar21 = local_128;
    if (local_128 == (uint *)0x0) {
      puVar21 = local_138;
    }
    uVar20 = *puVar21;
    if (uVar20 == 0) {
      iVar18 = local_120 + 0x1e;
      if (-1 < local_120 + -1) {
        iVar18 = local_120 + -1;
      }
      uVar31 = 0;
      uVar22 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar22 = uVar31;
      }
      iVar19 = 0;
      do {
        if (uVar22 == uVar31) goto LAB_143b5e0fd;
        iVar19 = iVar19 + 0x20;
        uVar20 = puVar21[uVar31 + 1];
        uVar31 = uVar31 + 1;
      } while (uVar20 == 0);
    }
    else {
      uVar31 = 0;
      iVar19 = 0;
    }
    uVar22 = (ulonglong)(-uVar20 & uVar20);
    uVar23 = uVar22 * 2 + 1;
    lVar26 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    iVar18 = (iVar19 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
    if (local_120 <= iVar18) {
      iVar18 = local_120;
    }
  }
  if (iVar18 != local_120) {
    uVar20 = 0xffffffff;
    do {
      uVar28 = *(uint *)(local_148 + (longlong)iVar18 * 0xc);
      lVar26 = *(longlong *)param_1[1];
      uVar23 = (ulonglong)(uVar28 >> 5 & 0x3fffff8);
      lVar30 = *(longlong *)(*(longlong *)(lVar26 + 0x48) + uVar23);
      uVar28 = (uVar28 & 0xff) << 3;
      fVar4 = *(float *)(lVar30 + (ulonglong)(uVar28 | 4));
      *(float *)(lVar30 + (ulonglong)uVar28) =
           (float)(((double)*(float *)(lVar30 + (ulonglong)uVar28) - (dVar10 + dVar13) * 0.5) *
                  dVar7 * (double)fVar3);
      *(float *)(*(longlong *)(*(longlong *)(lVar26 + 0x48) + uVar23) + (ulonglong)(uVar28 | 4)) =
           (float)(((double)fVar4 - (dVar11 + dVar12) * 0.5) * dVar7 * (double)fVar3);
      uVar20 = ~(uint)uVar22 & uVar20;
      puVar21 = local_128;
      if (local_128 == (uint *)0x0) {
        puVar21 = local_138;
      }
      iVar18 = (int)uVar31;
      lVar26 = (longlong)iVar18;
      uVar28 = puVar21[lVar26] & uVar20;
      if (uVar28 == 0) {
        iVar24 = local_120 + 0x1e;
        if (-1 < local_120 + -1) {
          iVar24 = local_120 + -1;
        }
        iVar24 = iVar24 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar25 = iVar24;
        if (iVar24 < iVar18) {
          iVar25 = iVar18;
        }
        if (iVar18 < iVar24) {
          lVar30 = 0;
          do {
            uVar28 = puVar21[lVar26 + lVar30 + 1];
            if (uVar28 != 0) {
              uVar31 = (ulonglong)(iVar18 + (int)lVar30 + 1);
              uVar20 = 0xffffffff;
              goto LAB_143b5e337;
            }
            iVar19 = iVar19 + 0x20;
            lVar30 = lVar30 + 1;
          } while (iVar25 - lVar26 != lVar30);
          uVar20 = 0xffffffff;
          lVar26 = (longlong)iVar25;
        }
        uVar31 = lVar26 + 1U & 0xffffffff;
        iVar18 = local_120;
      }
      else {
LAB_143b5e337:
        uVar22 = (ulonglong)(-uVar28 & uVar28);
        uVar23 = uVar22 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar18 = (iVar19 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (local_120 <= iVar18) {
          iVar18 = local_120;
        }
      }
    } while (iVar18 != local_120);
  }
LAB_143b5e0fd:
  local_100 = 0;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  uVar31 = uStack_140 >> 0x20;
  uStack_140 = uStack_140 & 0xffffffff00000000;
  if ((int)uVar31 != 0) {
    FUN_1447a08a2(&local_148,0);
  }
  uStack_118 = 0xffffffff;
  local_114 = 0;
  local_120 = 0;
  if (0x80 < local_11c) {
    local_11c = 0x80;
    FUN_1446efbd8(local_138,0);
  }
  if (local_128 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b5e3c0 FUN_143b5e3c0 body=128 status=ok
// SIG undefined FUN_143b5e3c0(void)

bool FUN_143b5e3c0(longlong *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  uVar1 = *param_3;
  lVar6 = *param_1;
  puVar2 = *(undefined8 **)(lVar6 + 0x98);
  lVar3 = puVar2[1];
  if (lVar3 == 0) {
    iVar4 = FUN_146bc96d4(*puVar2);
    puVar2 = *(undefined8 **)(lVar6 + 0x98);
    lVar6 = puVar2[1];
    if (lVar6 == 0) {
      iVar5 = FUN_146bc96d4(*puVar2,uVar1);
      goto LAB_143b5e407;
    }
    lVar6 = *(longlong *)(lVar6 + 0x20);
  }
  else {
    lVar6 = *(longlong *)(lVar3 + 0x20);
    iVar4 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(*param_2 >> 9) * 8) +
                    (ulonglong)(*param_2 & 0x1ff) * 4);
  }
  iVar5 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(uVar1 >> 9) * 8) +
                  (ulonglong)(uVar1 & 0x1ff) * 4);
LAB_143b5e407:
  return iVar4 == iVar5;
}



// FUNCTION 143b5e46a FUN_143b5e46a body=29 status=ok
// SIG undefined FUN_143b5e46a(void)

undefined8 FUN_143b5e46a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5e488 FUN_143b5e488 body=128 status=ok
// SIG undefined FUN_143b5e488(void)

bool FUN_143b5e488(longlong *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  uVar1 = *param_3;
  lVar6 = *param_1;
  puVar2 = *(undefined8 **)(lVar6 + 0x98);
  lVar3 = puVar2[1];
  if (lVar3 == 0) {
    iVar4 = FUN_146bc96d4(*puVar2);
    puVar2 = *(undefined8 **)(lVar6 + 0x98);
    lVar6 = puVar2[1];
    if (lVar6 == 0) {
      iVar5 = FUN_146bc96d4(*puVar2,uVar1);
      goto LAB_143b5e4cf;
    }
    lVar6 = *(longlong *)(lVar6 + 0x20);
  }
  else {
    lVar6 = *(longlong *)(lVar3 + 0x20);
    iVar4 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(*param_2 >> 9) * 8) +
                    (ulonglong)(*param_2 & 0x1ff) * 4);
  }
  iVar5 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(uVar1 >> 9) * 8) +
                  (ulonglong)(uVar1 & 0x1ff) * 4);
LAB_143b5e4cf:
  return iVar4 == iVar5;
}



// FUNCTION 143b5e532 FUN_143b5e532 body=29 status=ok
// SIG undefined FUN_143b5e532(void)

undefined8 FUN_143b5e532(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5e550 FUN_143b5e550 body=50 status=ok
// SIG undefined FUN_143b5e550(void)

bool FUN_143b5e550(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *param_3;
  lVar2 = *param_1;
  iVar3 = FUN_146bc96d4(*(undefined8 *)(lVar2 + 8),*param_2);
  iVar4 = FUN_146bc96d4(*(undefined8 *)(lVar2 + 8),uVar1);
  return iVar3 == iVar4;
}



// FUNCTION 143b5e5ac FUN_143b5e5ac body=29 status=ok
// SIG undefined FUN_143b5e5ac(void)

undefined8 FUN_143b5e5ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5e5ca FUN_143b5e5ca body=50 status=ok
// SIG undefined FUN_143b5e5ca(void)

bool FUN_143b5e5ca(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *param_3;
  lVar2 = *param_1;
  iVar3 = FUN_146bc96d4(*(undefined8 *)(lVar2 + 8),*param_2);
  iVar4 = FUN_146bc96d4(*(undefined8 *)(lVar2 + 8),uVar1);
  return iVar3 == iVar4;
}



// FUNCTION 143b5e626 FUN_143b5e626 body=29 status=ok
// SIG undefined FUN_143b5e626(void)

undefined8 FUN_143b5e626(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5e67c FUN_143b5e67c body=29 status=ok
// SIG undefined FUN_143b5e67c(void)

undefined8 FUN_143b5e67c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5e6d2 FUN_143b5e6d2 body=29 status=ok
// SIG undefined FUN_143b5e6d2(void)

undefined8 FUN_143b5e6d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


