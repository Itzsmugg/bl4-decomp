// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145ebad7e FUN_145ebad7e body=138 status=ok
// SIG undefined FUN_145ebad7e(void)

code * FUN_145ebad7e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PaddingScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000002c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ebae08;
}



// FUNCTION 145ebae08 FUN_145ebae08 body=140 status=ok
// SIG undefined FUN_145ebae08(void)

undefined1 * FUN_145ebae08(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dc4b1a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RGBToYUVConversion";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FRGBToYUVConversion";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca91a50;
  return &LAB_145ebad7a;
}



// FUNCTION 145ebae94 FUN_145ebae94 body=26 status=ok
// SIG undefined FUN_145ebae94(void)

void FUN_145ebae94(longlong param_1)

{
  FUN_145ebaeae();
  *(byte *)(param_1 + 0xcf4) = *(byte *)(param_1 + 0xcf4) | 1;
  return;
}



// FUNCTION 145ebaeae FUN_145ebaeae body=74 status=ok
// SIG undefined FUN_145ebaeae(void)

void FUN_145ebaeae(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_140995914();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000145ebaeea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x638))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 145ebaf04 FUN_145ebaf04 body=189 status=ok
// SIG undefined FUN_145ebaf04(void)

undefined8 * FUN_145ebaf04(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6cb7b0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar1;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0x10] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464e0;
  param_1[0xf] = uVar1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa5) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcd) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd5) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x15 | 0xc2;
  *(uint *)(param_1 + 0x1e) = *(uint *)(param_1 + 0x1e) & 0xfffffc08 | 0x3f1;
  return param_1;
}



// FUNCTION 145ebafcc FUN_145ebafcc body=188 status=ok
// SIG undefined FUN_145ebafcc(void)

undefined8 * FUN_145ebafcc(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a0768c();
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14ab103c0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_1446f470e(&local_28,L"DataLayerAsset",1);
  uVar1 = FUN_1411ace9c();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_28,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0xb] = lVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ebb094 FUN_145ebb094 body=188 status=ok
// SIG undefined FUN_145ebb094(void)

undefined8 * FUN_145ebb094(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1413f708e();
  *param_1 = &PTR_FUN_14abf6670;
  param_1[5] = &PTR_FUN_14abf6990;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
  FUN_1400b22c2(&local_28,"MakeNoise");
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ebb15c FUN_145ebb15c body=189 status=ok
// SIG undefined FUN_145ebb15c(void)

undefined8 * FUN_145ebb15c(undefined8 *param_1)

{
  FUN_145833876();
  *param_1 = &PTR_FUN_14ad3d1b0;
  param_1[5] = 0x3e4ccccd3f800000;
  *(undefined4 *)(param_1 + 6) = 0x3e4ccccd;
  FUN_145833896((longlong)param_1 + 0x34);
  *param_1 = &PTR_FUN_14ad3da70;
  param_1[0xb] = &DAT_3f8000003f800000;
  param_1[0xc] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 **)((longlong)param_1 + 0x6c) = &DAT_3f8000003f800000;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xf] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 **)((longlong)param_1 + 0xa4) = &DAT_3f8000003f800000;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 145ebb222 FUN_145ebb222 body=192 status=ok
// SIG undefined FUN_145ebb222(void)

undefined8 * FUN_145ebb222(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_145a3619c();
  *param_1 = &PTR_FUN_14aeb2c10;
  param_1[5] = &PTR_FUN_14aeb2f00;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3f0000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  uVar1 = DAT_14c8464e8;
  param_1[9] = DAT_14c8464e0;
  param_1[10] = uVar1;
  param_1[0xb] = DAT_14c8464f0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x3ff0000000000000;
  *(undefined2 *)(param_1 + 0xf) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x20;
  param_1[0x10] = 0x3f75c28f3d75c28f;
  param_1[0x11] = 0x3f8000003d75c28f;
  *(undefined4 *)(param_1 + 0x12) = 0x40000000;
  *(undefined2 *)((longlong)param_1 + 0x94) = 0x100;
  param_1[0x13] = 0x3f0000003f000000;
  param_1[0x14] = 0x3f0000003f000000;
  *(undefined4 *)(param_1 + 0x15) = 0x3f000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 145ebb2e2 FUN_145ebb2e2 body=40 status=ok
// SIG undefined FUN_145ebb2e2(void)

undefined8 FUN_145ebb2e2(undefined8 param_1,int param_2)

{
  FUN_145ebb30a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ebb30a FUN_145ebb30a body=110 status=ok
// SIG undefined FUN_145ebb30a(void)

void FUN_145ebb30a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b647630;
  plVar3 = (longlong *)param_1[7];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ebb36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145ebb378 FUN_145ebb378 body=53 status=ok
// SIG undefined FUN_145ebb378(void)

void FUN_145ebb378(longlong *param_1)

{
  FUN_145ebb3ae();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ebb3ae FUN_145ebb3ae body=346 status=ok
// SIG undefined FUN_145ebb3ae(void)

void FUN_145ebb3ae(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ebb50a FUN_145ebb50a body=37 status=ok
// SIG undefined FUN_145ebb50a(void)

void FUN_145ebb50a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x278);
  FUN_145ebb530(param_2);
  return;
}



// FUNCTION 145ebb530 FUN_145ebb530 body=363 status=ok
// SIG undefined FUN_145ebb530(void)

void FUN_145ebb530(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b737850;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4e] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  return;
}



// FUNCTION 145ebb69c FUN_145ebb69c body=81 status=ok
// SIG undefined FUN_145ebb69c(void)

void FUN_145ebb69c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_140059518(param_1 + 0x44);
  if (lVar2 != 0) {
    lVar2 = FUN_14120f7e6(lVar2);
    if (lVar2 != 0) {
      cVar1 = FUN_14584074c(lVar2);
      if (cVar1 != '\0') {
        FUN_1415808d8(lVar2);
        FUN_145840616(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145ebb6ee FUN_145ebb6ee body=26 status=ok
// SIG undefined FUN_145ebb6ee(void)

void FUN_145ebb6ee(undefined8 param_1)

{
  FUN_140df636a();
  FUN_145ebb708(param_1);
  return;
}



// FUNCTION 145ebb708 FUN_145ebb708 body=1779 status=ok
// SIG undefined FUN_145ebb708(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_145ebb708(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  longlong lVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined8 *puVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_3e8 [40];
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined1 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined1 local_3ac;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_37c;
  undefined4 local_374;
  longlong local_368;
  undefined4 local_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(int *)(param_1 + 0x1a4) != 0) {
    FUN_14791c706((longlong *)(param_1 + 0x198));
  }
  plVar9 = (longlong *)(param_1 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (*(int *)(param_1 + 0x1b4) != 0) {
    FUN_14481578e(plVar9);
  }
  local_388 = 0;
  local_380 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_37c = 0xffffffff00000080;
  local_374 = 0;
  local_368 = 0;
  local_360 = 0;
  iVar18 = *(int *)(param_1 + 0x90);
  if (0 < (longlong)iVar18) {
    lVar20 = 0;
    lVar23 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x88);
      lVar2 = lVar20 + lVar4;
      cVar7 = FUN_145ebbdfc(lVar2);
      if (cVar7 != '\0') {
        local_3b0 = FUN_14136ab98(lVar2);
        uVar22 = (undefined4)lVar23;
        local_3ac = 0;
        local_3b4 = uVar22;
        FUN_1433d9bfa(param_1,&local_3b4,&local_3a8);
        if (*(longlong *)(lVar4 + 0x50 + lVar20) != 0) {
          local_3bc = FUN_140166c3e(lVar2);
          local_3b8 = 1;
          local_3c0 = uVar22;
          FUN_1433d9bfa(param_1,&local_3c0,&local_3a8);
          iVar25 = *(int *)(param_1 + 0x1b0);
          uVar8 = iVar25 + 1;
          *(uint *)(param_1 + 0x1b0) = uVar8;
          if (*(uint *)(param_1 + 0x1b4) < uVar8) {
            FUN_1446f48e2(plVar9);
          }
          *(undefined4 *)(*plVar9 + (longlong)iVar25 * 4) = uVar22;
        }
      }
      lVar23 = lVar23 + 1;
      lVar20 = lVar20 + 0xb8;
    } while (iVar18 != lVar23);
  }
  iVar18 = *(int *)(param_1 + 0x1a0);
  if (1 < (longlong)iVar18) {
    lVar20 = *(longlong *)(param_1 + 0x198);
    memset(local_348,0,0x2f0);
    local_350 = lVar20 + (longlong)iVar18 * 0xc + -0xc;
    local_358 = lVar20;
    fVar28 = logf((float)iVar18);
    local_348[0] = (int)(longlong)(fVar28 + fVar28);
    plVar9 = &local_358;
    do {
      puVar10 = (undefined8 *)*plVar9;
      puVar13 = (undefined8 *)plVar9[1];
      iVar18 = (int)plVar9[2];
      iVar25 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar10) >> 2) * -0x55555555;
      uVar8 = iVar25 + 1;
      puVar14 = puVar10;
      puVar11 = puVar10;
      puVar16 = puVar13;
      if (iVar18 != 0) {
LAB_145ebb967:
        if (8 < (int)uVar8) {
          uVar15 = (ulonglong)(uVar8 >> 1);
          uVar22 = *(undefined4 *)((longlong)puVar11 + uVar15 * 0xc + 8);
          uVar5 = *(undefined8 *)((longlong)puVar11 + uVar15 * 0xc);
          *(undefined4 *)((longlong)puVar11 + uVar15 * 0xc + 8) = *(undefined4 *)(puVar11 + 1);
          *(undefined8 *)((longlong)puVar11 + uVar15 * 0xc) = *puVar11;
          *(undefined4 *)(puVar11 + 1) = uVar22;
          *puVar11 = uVar5;
          puVar26 = (undefined8 *)((longlong)puVar16 + 0xc);
          puVar10 = puVar11;
          do {
            puVar6 = (undefined8 *)((longlong)puVar10 + 0xc);
            puVar17 = (undefined8 *)((longlong)puVar10 + 0xc);
            do {
              puVar10 = puVar17;
              puVar24 = puVar6;
              if (puVar16 < puVar10) break;
              puVar6 = (undefined8 *)((longlong)puVar24 + 0xc);
              puVar17 = (undefined8 *)((longlong)puVar10 + 0xc);
            } while (*(float *)((longlong)puVar10 + 4) < *(float *)((longlong)puVar11 + 4) ||
                     *(float *)((longlong)puVar10 + 4) == *(float *)((longlong)puVar11 + 4));
            puVar6 = puVar26 + -3;
            do {
              puVar17 = puVar26;
              puVar21 = puVar6;
              puVar26 = (undefined8 *)((longlong)puVar17 + -0xc);
              if (puVar26 <= puVar11) break;
              puVar6 = (undefined8 *)((longlong)puVar21 + -0xc);
            } while (*(float *)((longlong)puVar11 + 4) < *(float *)(puVar17 + -1) ||
                     *(float *)((longlong)puVar11 + 4) == *(float *)(puVar17 + -1));
            if (puVar26 < puVar10) goto LAB_145ebba54;
            uVar22 = *(undefined4 *)(puVar10 + 1);
            uVar5 = *puVar10;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)((longlong)puVar17 + -4);
            *puVar10 = *puVar26;
            *(undefined4 *)((longlong)puVar17 + -4) = uVar22;
            *puVar26 = uVar5;
          } while( true );
        }
        for (; puVar10 = puVar11, puVar13 = puVar11, puVar11 < puVar16;
            puVar16 = (undefined8 *)((longlong)puVar16 + -0xc)) {
          while (puVar14 = puVar10, puVar10 = (undefined8 *)((longlong)puVar13 + 0xc),
                puVar10 <= puVar16) {
            pfVar3 = (float *)(puVar13 + 2);
            puVar13 = puVar10;
            if (*pfVar3 < *(float *)((longlong)puVar14 + 4) ||
                *pfVar3 == *(float *)((longlong)puVar14 + 4)) {
              puVar10 = puVar14;
            }
          }
          local_50 = *(undefined4 *)(puVar14 + 1);
          local_58 = *puVar14;
          *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar16 + 1);
          *puVar14 = *puVar16;
          *(undefined4 *)(puVar16 + 1) = local_50;
          *puVar16 = local_58;
        }
        goto LAB_145ebbde0;
      }
LAB_145ebbb1f:
      if (uVar8 != 0) {
        iVar18 = (iVar25 - (iVar25 + -1 >> 0x1f)) + -1 >> 1;
        iVar25 = iVar18;
joined_r0x000145ebbb46:
        do {
          iVar19 = iVar18 * 2 + 1;
          if (iVar19 < (int)uVar8) {
            iVar12 = iVar18 * 2 + 2;
            if ((iVar12 < (int)uVar8) &&
               (fVar28 = *(float *)((longlong)puVar10 + (longlong)iVar19 * 0xc + 4),
               pfVar3 = (float *)((longlong)puVar10 + (longlong)iVar12 * 0xc + 4),
               fVar28 < *pfVar3 || fVar28 == *pfVar3)) {
              iVar19 = iVar12;
            }
            fVar28 = *(float *)((longlong)puVar10 + (longlong)iVar19 * 0xc + 4);
            pfVar3 = (float *)((longlong)puVar10 + (longlong)iVar18 * 0xc + 4);
            if (*pfVar3 <= fVar28 && fVar28 != *pfVar3) {
              puVar16 = (undefined8 *)((longlong)puVar10 + (longlong)iVar18 * 0xc);
              puVar13 = (undefined8 *)((longlong)puVar10 + (longlong)iVar19 * 0xc);
              local_50 = *(undefined4 *)(puVar16 + 1);
              local_58 = *puVar16;
              *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar13 + 1);
              *puVar16 = *puVar13;
              *(undefined4 *)(puVar13 + 1) = local_50;
              *puVar13 = local_58;
              iVar18 = iVar19;
              goto joined_r0x000145ebbb46;
            }
          }
          bVar27 = iVar25 != 0;
          iVar18 = iVar25 + -1;
          iVar25 = iVar18;
        } while (bVar27);
        if (1 < (int)uVar8) {
          uVar15 = (ulonglong)uVar8 - 1;
          local_50 = *(undefined4 *)(puVar10 + 1);
          local_58 = *puVar10;
          *(undefined4 *)(puVar10 + 1) = *(undefined4 *)((longlong)puVar10 + uVar15 * 0xc + 8);
          *puVar10 = *(undefined8 *)((longlong)puVar10 + uVar15 * 0xc);
          *(undefined4 *)((longlong)puVar10 + uVar15 * 0xc + 8) = local_50;
          *(undefined8 *)((longlong)puVar10 + uVar15 * 0xc) = local_58;
          if (uVar8 != 2) {
            do {
              iVar18 = 0;
              iVar19 = 1;
              iVar25 = 0;
              do {
                iVar18 = iVar18 + 2;
                iVar12 = iVar19;
                if (((longlong)iVar18 < (longlong)uVar15) &&
                   (fVar28 = *(float *)((longlong)puVar10 + (longlong)iVar19 * 0xc + 4),
                   pfVar3 = (float *)((longlong)puVar10 + (longlong)iVar18 * 0xc + 4),
                   fVar28 < *pfVar3 || fVar28 == *pfVar3)) {
                  iVar12 = iVar18;
                }
                fVar28 = *(float *)((longlong)puVar10 + (longlong)iVar12 * 0xc + 4);
                pfVar3 = (float *)((longlong)puVar10 + (longlong)iVar25 * 0xc + 4);
                if (fVar28 < *pfVar3 || fVar28 == *pfVar3) break;
                puVar16 = (undefined8 *)((longlong)puVar10 + (longlong)iVar25 * 0xc);
                puVar13 = (undefined8 *)((longlong)puVar10 + (longlong)iVar12 * 0xc);
                uVar22 = *(undefined4 *)(puVar16 + 1);
                uVar5 = *puVar16;
                *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar13 + 1);
                *puVar16 = *puVar13;
                *(undefined4 *)(puVar13 + 1) = uVar22;
                *puVar13 = uVar5;
                iVar18 = iVar12 * 2;
                iVar19 = iVar12 * 2 + 1;
                iVar25 = iVar12;
              } while ((longlong)iVar19 < (longlong)uVar15);
              uVar1 = uVar15 - 1;
              local_50 = *(undefined4 *)(puVar10 + 1);
              local_58 = *puVar10;
              *(undefined4 *)(puVar10 + 1) = *(undefined4 *)((longlong)puVar10 + uVar1 * 0xc + 8);
              *puVar10 = *(undefined8 *)((longlong)puVar10 + uVar1 * 0xc);
              *(undefined4 *)((longlong)puVar10 + uVar1 * 0xc + 8) = local_50;
              *(undefined8 *)((longlong)puVar10 + uVar1 * 0xc) = local_58;
              bVar27 = 2 < uVar15;
              uVar15 = uVar1;
            } while (bVar27);
          }
        }
      }
LAB_145ebbde0:
      plVar9 = plVar9 + -3;
    } while (&local_358 <= plVar9);
  }
  local_360 = 0;
  if (local_368 != 0) {
    FUN_1400020a8();
  }
  FUN_145ebbe30(&local_3a8);
  if ((local_48 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_145ebba54:
  local_50 = *(undefined4 *)(puVar11 + 1);
  local_58 = *puVar11;
  *(undefined4 *)(puVar11 + 1) = *(undefined4 *)((longlong)puVar17 + -4);
  *puVar11 = *puVar26;
  *(undefined4 *)((longlong)puVar17 + -4) = local_50;
  *puVar26 = local_58;
  iVar18 = iVar18 + -1;
  puVar17 = puVar17 + -3;
  if ((longlong)puVar21 - (longlong)puVar14 < (longlong)puVar13 - (longlong)puVar24) {
    if (puVar10 < puVar16) {
      *plVar9 = (longlong)puVar10;
      plVar9[1] = (longlong)puVar16;
      *(int *)(plVar9 + 2) = iVar18;
      plVar9 = plVar9 + 3;
    }
    puVar10 = puVar11;
    puVar13 = puVar21;
    if (puVar26 <= (undefined8 *)((longlong)puVar11 + 0xcU)) goto LAB_145ebbde0;
  }
  else {
    if ((undefined8 *)((longlong)puVar11 + 0xcU) < puVar26) {
      *plVar9 = (longlong)puVar11;
      plVar9[1] = (longlong)puVar17;
      *(int *)(plVar9 + 2) = iVar18;
      plVar9 = plVar9 + 3;
    }
    puVar11 = puVar24;
    puVar17 = puVar16;
    puVar13 = puVar16;
    if (puVar16 <= puVar10) goto LAB_145ebbde0;
  }
  iVar25 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar11) >> 2) * -0x55555555;
  uVar8 = iVar25 + 1;
  puVar14 = puVar11;
  puVar11 = puVar10;
  puVar16 = puVar17;
  if (iVar18 == 0) goto LAB_145ebbb1f;
  goto LAB_145ebb967;
}



// FUNCTION 145ebbdfc FUN_145ebbdfc body=52 status=ok
// SIG undefined FUN_145ebbdfc(void)

undefined1 FUN_145ebbdfc(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    if (*(char *)(param_1 + 0x91) == '\x01') {
      return 1;
    }
    if ((*(longlong *)(param_1 + 0x48) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x48) + 0x28) != '\0')) {
      return 1;
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
      return *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x28);
    }
  }
  return 0;
}



// FUNCTION 145ebbe30 FUN_145ebbe30 body=53 status=ok
// SIG undefined FUN_145ebbe30(void)

void FUN_145ebbe30(longlong *param_1)

{
  FUN_145ebbe66();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ebbe66 FUN_145ebbe66 body=90 status=ok
// SIG undefined FUN_145ebbe66(void)

void FUN_145ebbe66(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145ebbec0 FUN_145ebbec0 body=226 status=ok
// SIG undefined FUN_145ebbec0(void)

longlong * FUN_145ebbec0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c5254;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ebbfa4 FUN_145ebbfa4 body=138 status=ok
// SIG undefined FUN_145ebbfa4(void)

undefined1 * FUN_145ebbfa4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x11a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1471667b2;
}



// FUNCTION 145ebc02e FUN_145ebc02e body=144 status=ok
// SIG undefined FUN_145ebc02e(void)

code * FUN_145ebc02e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1413d6116();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceCullingDrawParams";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstanceCullingDrawParams";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x300000011c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145ebc0be;
}



// FUNCTION 145ebc0be FUN_145ebc0be body=146 status=ok
// SIG undefined FUN_145ebc0be(void)

code * FUN_145ebc0be(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14158091e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Pass";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDistortionPassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000011b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9ca078;
  return FUN_145ebbfa4;
}



// FUNCTION 145ebc150 FUN_145ebc150 body=226 status=ok
// SIG undefined FUN_145ebc150(void)

longlong * FUN_145ebc150(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c27f8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ebc238 FUN_145ebc238 body=138 status=ok
// SIG undefined FUN_145ebc238(void)

code * FUN_145ebc238(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UseAVSM";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2b000000050;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ebc2c2;
}



// FUNCTION 145ebc2c2 FUN_145ebc2c2 body=144 status=ok
// SIG undefined FUN_145ebc2c2(void)

code * FUN_145ebc2c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a8b0f8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"AVSM";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FAdaptiveVolumetricShadowMapUniformBufferParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xe00000004f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14715c28e;
}



// FUNCTION 145ebc35a FUN_145ebc35a body=219 status=ok
// SIG undefined FUN_145ebc35a(void)

undefined8 * FUN_145ebc35a(undefined8 *param_1)

{
  FUN_1411b565c();
  *param_1 = &PTR_FUN_14bd09400;
  param_1[0x21] = &PTR_FUN_14bd09720;
  param_1[0x22] = &PTR_FUN_14bd09760;
  param_1[0x23] = &PTR_FUN_14bd09770;
  param_1[0x24] = &PTR_FUN_14bd097a0;
  param_1[0x25] = &PTR_FUN_14bd097d0;
  param_1[0x26] = DAT_14cc1c4c0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x100000040;
  *(undefined4 *)(param_1 + 0x2d) = 1;
  memset(param_1 + 0x2e,0,0x90);
  *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  FUN_145ebc436(param_1);
  param_1[0x27] = DAT_14cc1c4c8;
  return param_1;
}



// FUNCTION 145ebc436 FUN_145ebc436 body=4294 status=ok
// SIG undefined FUN_145ebc436(void)

/* WARNING: Removing unreachable block (ram,0x000145ebc8bc) */
/* WARNING: Removing unreachable block (ram,0x000145ebd314) */
/* WARNING: Removing unreachable block (ram,0x000145ebc994) */
/* WARNING: Removing unreachable block (ram,0x000145ebd3d0) */

void FUN_145ebc436(longlong param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined2 **ppuVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  undefined2 *puVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong lVar24;
  int iVar25;
  bool bVar26;
  float fVar27;
  undefined1 auStack_558 [32];
  ulonglong local_538;
  undefined8 *local_530;
  int local_524;
  ulonglong *local_520;
  longlong local_518;
  longlong local_510;
  undefined8 local_508;
  undefined8 local_500;
  void *local_4f8;
  int local_4f0;
  undefined4 local_4ec;
  ulonglong local_4e8;
  uint local_4e0;
  undefined4 local_4dc;
  longlong **local_4d8;
  longlong *local_4d0;
  longlong *local_4c8;
  undefined8 *local_4c0;
  longlong local_4b8;
  undefined8 uStack_4b0;
  undefined8 *local_4a8;
  longlong *local_4a0;
  longlong local_498;
  ulonglong uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_468;
  undefined4 local_460;
  undefined8 local_45c;
  undefined4 local_454;
  longlong local_448;
  undefined4 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_418;
  undefined4 local_410;
  undefined8 local_40c;
  undefined4 local_404;
  longlong local_3f8;
  undefined4 local_3f0;
  ulonglong local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8 [190];
  undefined2 *local_e0;
  undefined8 local_d8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_558;
  local_4a8 = &local_438;
  local_418 = 0;
  local_410 = 0;
  local_438 = 0;
  uStack_430 = 0;
  local_40c = 0xffffffff00000080;
  local_404 = 0;
  local_3f8 = 0;
  local_3f0 = 0;
  local_4a0 = &local_498;
  local_498 = 0;
  uStack_490 = 0;
  FUN_1415810b6(&local_4a8,param_1 + 0x1a0);
  FUN_1415810b6(&local_4a8,param_1 + 0x1b0);
  if ((longlong)*(int *)(param_1 + 0x1c8) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0x1c8) * 0x18;
    lVar22 = *(longlong *)(param_1 + 0x1c0) + 8;
    do {
      FUN_1415810b6(&local_4a8,lVar22);
      lVar22 = lVar22 + 0x18;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  local_4d0 = &local_4b8;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4c0 = &local_488;
  local_468 = 0;
  local_460 = 0;
  local_488 = 0;
  uStack_480 = 0;
  local_45c = 0xffffffff00000080;
  local_454 = 0;
  local_448 = 0;
  local_440 = 0;
  local_4d8 = &local_4c8;
  local_4e8 = 0;
  uVar4 = *(uint *)(param_1 + 0x1a8);
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  local_4e0 = uVar4;
  local_4c8 = local_4d0;
  if (uVar4 == 0) {
    local_4dc = 0;
  }
  else {
    FUN_149482bea(&local_4e8,uVar4,0);
    FUN_149482c4c(local_4e8,uVar1,uVar4);
  }
  FUN_141580c90(&local_4e8);
  FUN_141580ad2(&local_4d8,&local_4e8);
  FUN_145ebd534(&local_4e8,param_1 + 0x1b0);
  FUN_141580c90(&local_4e8);
  if ((longlong)(int)local_4e0 != 0) {
    local_538 = local_4e8;
    uVar20 = (longlong)(int)local_4e0 * 0x80 + local_4e8;
    do {
      lVar7 = local_538 + 0x40;
      FUN_144529d80(&local_4c8,lVar7);
      local_3e8 = 0;
      uStack_3e0 = 0;
      FUN_14949ed0a(&local_e0,lVar7);
      puVar18 = local_e0;
      lVar7 = (longlong)(int)local_d8;
      if (lVar7 == 0) {
        uVar9 = 0;
      }
      else {
        lVar22 = 0;
        do {
          local_4f8 = (void *)0x0;
          local_4f0 = *(int *)((longlong)puVar18 + lVar22 + 8);
          lVar24 = (longlong)local_4f0;
          _Src = *(void **)((longlong)puVar18 + lVar22);
          if (lVar24 == 0) {
            local_4ec = 0;
          }
          else {
            FUN_1446dd670(&local_4f8,local_4f0,0);
            memcpy(local_4f8,_Src,lVar24 * 2);
          }
          FUN_140002266(&local_508,L"uint %s");
          uVar9 = uStack_3e0;
          lVar24 = (longlong)(int)uStack_3e0;
          uVar4 = (int)uStack_3e0 + 1;
          uStack_3e0 = CONCAT44(uStack_3e0._4_4_,uVar4);
          if (uStack_3e0._4_4_ < uVar4) {
            FUN_1447a1bd6(&local_3e8,uVar9 & 0xffffffff);
          }
          lVar24 = lVar24 * 0x10;
          *(undefined8 *)(local_3e8 + lVar24) = 0;
          *(undefined8 *)(local_3e8 + lVar24) = local_508;
          *(undefined4 *)(local_3e8 + 8 + lVar24) = (undefined4)local_500;
          *(undefined4 *)(local_3e8 + 0xc + lVar24) = local_500._4_4_;
          local_500 = 0;
          local_508 = 0;
          if (local_4f8 != (void *)0x0) {
            FUN_1400020a8();
          }
          lVar22 = lVar22 + 0x10;
        } while (lVar7 * 0x10 != lVar22);
        uVar9 = local_d8 & 0xffffffff;
      }
      FUN_1447a1747(local_e0,uVar9);
      if (local_e0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_14949b9ee(&local_e0,local_538);
      uVar9 = uStack_4b0;
      lVar7 = (longlong)(int)uStack_4b0;
      uVar4 = (int)uStack_4b0 + 1;
      uStack_4b0 = CONCAT44(uStack_4b0._4_4_,uVar4);
      if (uStack_4b0._4_4_ < uVar4) {
        FUN_1447a1bd6(&local_4b8,uVar9 & 0xffffffff);
      }
      lVar7 = lVar7 * 0x10;
      *(undefined8 *)(local_4b8 + lVar7) = 0;
      *(undefined2 **)(local_4b8 + lVar7) = local_e0;
      *(int *)(local_4b8 + 8 + lVar7) = (int)local_d8;
      *(undefined4 *)(local_4b8 + 0xc + lVar7) = local_d8._4_4_;
      local_d8 = 0;
      local_e0 = (undefined2 *)0x0;
      FUN_1447a1747(local_3e8,uStack_3e0 & 0xffffffff);
      if (local_3e8 != 0) {
        FUN_1400020a8();
      }
      local_538 = local_538 + 0x80;
    } while (local_538 != uVar20);
  }
  if ((longlong)*(int *)(param_1 + 0x1c8) != 0) {
    local_518 = *(longlong *)(param_1 + 0x1c0);
    local_510 = local_518 + (longlong)*(int *)(param_1 + 0x1c8) * 0x18;
    do {
      FUN_145ebd534(&local_4e8);
      uVar4 = local_4e0;
      uVar20 = local_4e8;
      uVar9 = (ulonglong)local_4e0;
      if (uVar9 != 0) {
        if (1 < (int)local_4e0) {
          memset(local_3d8,0,0x2f0);
          local_3e8 = uVar20;
          uStack_3e0 = (uVar9 * 0x80 + uVar20) - 0x80;
          fVar27 = logf((float)(int)uVar4);
          local_3d8[0] = (int)(longlong)(fVar27 + fVar27);
          local_520 = &local_3e8;
          do {
            puVar23 = (undefined8 *)*local_520;
            local_524 = (int)local_520[2];
            iVar21 = (int)((ulonglong)((longlong)local_520[1] - (longlong)puVar23) >> 7);
            local_538 = (ulonglong)(iVar21 + 1);
            puVar8 = (undefined8 *)local_520[1];
            if (local_524 != 0) {
LAB_145ebcac8:
              local_530 = puVar8;
              puVar14 = local_530;
              puVar8 = local_530;
              if (8 < (int)local_538) {
                puVar8 = puVar23 + (local_538 >> 1) * 0x10;
                ppuVar13 = &local_e0;
                for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                  *ppuVar13 = (undefined2 *)*puVar8;
                  puVar8 = puVar8 + 1;
                  ppuVar13 = ppuVar13 + 1;
                }
                puVar8 = puVar23;
                puVar12 = puVar23 + (local_538 >> 1) * 0x10;
                for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                  *puVar12 = *puVar8;
                  puVar8 = puVar8 + 1;
                  puVar12 = puVar12 + 1;
                }
                ppuVar13 = &local_e0;
                puVar8 = puVar23;
                for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                  *puVar8 = *ppuVar13;
                  ppuVar13 = ppuVar13 + 1;
                  puVar8 = puVar8 + 1;
                }
                puVar12 = local_530 + 0x10;
                puVar8 = puVar23;
LAB_145ebcb20:
                puVar15 = puVar8 + 0x10;
                if (puVar15 <= puVar14) goto code_r0x000145ebcb30;
                goto LAB_145ebcbda;
              }
              while (puVar14 = puVar23, puVar12 = puVar23, puVar23 < puVar8) {
                while (puVar15 = puVar14 + 0x10, puVar15 <= puVar8) {
                  uVar4 = *(uint *)(puVar12 + 9);
                  plVar5 = (longlong *)(ulonglong)uVar4;
                  uVar19 = *(uint *)(puVar14 + 0x19);
                  if ((int)uVar4 < (int)*(uint *)(puVar14 + 0x19)) {
                    uVar19 = uVar4;
                  }
                  if ((int)uVar19 < 1) {
LAB_145ebd1f8:
                    bVar26 = false;
                  }
                  else {
                    plVar5 = (longlong *)puVar12[8];
                    plVar2 = (longlong *)puVar14[0x18];
                    lVar7 = *plVar2;
                    lVar22 = *plVar5;
                    if (lVar22 == lVar7) {
                      uVar20 = 0;
                      do {
                        if ((ulonglong)uVar19 - 1 == uVar20) goto LAB_145ebd1f8;
                        lVar7 = plVar2[uVar20 + 1];
                        lVar22 = plVar5[uVar20 + 1];
                        uVar20 = uVar20 + 1;
                      } while (lVar22 == lVar7);
                      bVar26 = uVar20 < uVar19;
                    }
                    else {
                      bVar26 = true;
                      uVar20 = 0;
                    }
                    if ((int)lVar22 == (int)lVar7) {
                      uVar4 = *(int *)((longlong)plVar5 + uVar20 * 8 + 4) -
                              *(int *)((longlong)plVar2 + uVar20 * 8 + 4);
                    }
                    else {
                      uVar4 = FUN_14002c2bd();
                    }
                    plVar5 = (longlong *)(ulonglong)(uVar4 >> 0x1f);
                  }
                  puVar6 = puVar12;
                  if (((ulonglong)plVar5 & 1) != 0) {
                    puVar6 = puVar15;
                  }
                  puVar14 = puVar15;
                  if (bVar26) {
                    puVar12 = puVar6;
                  }
                }
                puVar14 = puVar8 + -0x10;
                puVar15 = puVar12;
                ppuVar13 = &local_e0;
                for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                  *ppuVar13 = (undefined2 *)*puVar15;
                  puVar15 = puVar15 + 1;
                  ppuVar13 = ppuVar13 + 1;
                }
                puVar15 = puVar8;
                for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                  *puVar12 = *puVar15;
                  puVar15 = puVar15 + 1;
                  puVar12 = puVar12 + 1;
                }
                ppuVar13 = &local_e0;
                puVar12 = puVar8;
                for (lVar7 = 0x10; puVar8 = puVar14, lVar7 != 0; lVar7 = lVar7 + -1) {
                  *puVar12 = *ppuVar13;
                  ppuVar13 = ppuVar13 + 1;
                  puVar12 = puVar12 + 1;
                }
              }
              goto LAB_145ebd23b;
            }
LAB_145ebcd56:
            if ((int)local_538 != 0) {
              iVar21 = (iVar21 - (iVar21 + -1 >> 0x1f)) + -1 >> 1;
              do {
                iVar10 = iVar21 * 2 + 1;
                iVar25 = iVar21;
                if (iVar10 < (int)local_538) {
                  do {
                    iVar16 = iVar25 * 2 + 2;
                    iVar17 = iVar10;
                    if (iVar16 < (int)local_538) {
                      plVar5 = (longlong *)((longlong)iVar16 * 0x80);
                      uVar4 = *(uint *)(puVar23 + (longlong)iVar10 * 0x10 + 9);
                      if ((int)*(uint *)(puVar23 + 9 + (longlong)iVar16 * 0x10) <
                          (int)*(uint *)(puVar23 + (longlong)iVar10 * 0x10 + 9)) {
                        uVar4 = *(uint *)(puVar23 + 9 + (longlong)iVar16 * 0x10);
                      }
                      if ((int)uVar4 < 1) {
LAB_145ebcdfb:
                        bVar26 = false;
                      }
                      else {
                        plVar5 = (longlong *)
                                 ((undefined8 *)((longlong)plVar5 + (longlong)puVar23))[8];
                        plVar2 = (longlong *)puVar23[(longlong)iVar10 * 0x10 + 8];
                        lVar7 = *plVar2;
                        lVar22 = *plVar5;
                        if (lVar22 == lVar7) {
                          uVar20 = 0;
                          do {
                            if ((ulonglong)uVar4 - 1 == uVar20) goto LAB_145ebcdfb;
                            lVar7 = plVar2[uVar20 + 1];
                            lVar22 = plVar5[uVar20 + 1];
                            uVar20 = uVar20 + 1;
                          } while (lVar22 == lVar7);
                          bVar26 = uVar20 < uVar4;
                        }
                        else {
                          bVar26 = true;
                          uVar20 = 0;
                        }
                        if ((int)lVar22 == (int)lVar7) {
                          uVar4 = *(int *)((longlong)plVar5 + uVar20 * 8 + 4) -
                                  *(int *)((longlong)plVar2 + uVar20 * 8 + 4);
                        }
                        else {
                          uVar4 = FUN_14002c2bd();
                        }
                        plVar5 = (longlong *)(ulonglong)(uVar4 >> 0x1f);
                      }
                      if (((ulonglong)plVar5 & 1) == 0) {
                        iVar10 = iVar16;
                      }
                      iVar17 = iVar10;
                      if (!bVar26) {
                        iVar17 = iVar16;
                      }
                    }
                    uVar4 = *(uint *)(puVar23 + (longlong)iVar17 * 0x10 + 9);
                    if ((int)*(uint *)(puVar23 + (longlong)iVar25 * 0x10 + 9) <
                        (int)*(uint *)(puVar23 + (longlong)iVar17 * 0x10 + 9)) {
                      uVar4 = *(uint *)(puVar23 + (longlong)iVar25 * 0x10 + 9);
                    }
                    if ((int)uVar4 < 1) break;
                    puVar14 = puVar23 + (longlong)iVar25 * 0x10;
                    puVar8 = puVar23 + (longlong)iVar17 * 0x10;
                    uVar20 = 0;
                    while( true ) {
                      uVar9 = *(ulonglong *)(puVar8[8] + uVar20 * 8);
                      uVar3 = *(ulonglong *)(puVar14[8] + uVar20 * 8);
                      if (uVar3 != uVar9) break;
                      uVar20 = uVar20 + 1;
                      if (uVar4 == uVar20) goto LAB_145ebced3;
                    }
                    if ((int)uVar3 == (int)uVar9) {
                      iVar10 = (int)(uVar3 >> 0x20) - (int)(uVar9 >> 0x20);
                    }
                    else {
                      iVar10 = FUN_14002c2bd(uVar3 & 0xffffffff);
                    }
                    if (-1 < iVar10) break;
                    puVar12 = puVar14;
                    ppuVar13 = &local_e0;
                    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                      *ppuVar13 = (undefined2 *)*puVar12;
                      puVar12 = puVar12 + 1;
                      ppuVar13 = ppuVar13 + 1;
                    }
                    puVar12 = puVar8;
                    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                      *puVar14 = *puVar12;
                      puVar12 = puVar12 + 1;
                      puVar14 = puVar14 + 1;
                    }
                    ppuVar13 = &local_e0;
                    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                      *puVar8 = *ppuVar13;
                      ppuVar13 = ppuVar13 + 1;
                      puVar8 = puVar8 + 1;
                    }
                    iVar10 = iVar17 * 2 + 1;
                    iVar25 = iVar17;
                    if ((int)local_538 <= iVar10) break;
                  } while( true );
                }
LAB_145ebced3:
                bVar26 = iVar21 != 0;
                iVar21 = iVar21 + -1;
              } while (bVar26);
              if (1 < (int)local_538) {
                local_530 = (undefined8 *)((local_538 & 0xffffffff) - 1);
                puVar8 = puVar23;
                ppuVar13 = &local_e0;
                for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                  *ppuVar13 = (undefined2 *)*puVar8;
                  puVar8 = puVar8 + 1;
                  ppuVar13 = ppuVar13 + 1;
                }
                puVar8 = puVar23 + (longlong)local_530 * 0x10;
                puVar14 = puVar23;
                for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                  *puVar14 = *puVar8;
                  puVar8 = puVar8 + 1;
                  puVar14 = puVar14 + 1;
                }
                ppuVar13 = &local_e0;
                puVar8 = puVar23 + (longlong)local_530 * 0x10;
                for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                  *puVar8 = *ppuVar13;
                  ppuVar13 = ppuVar13 + 1;
                  puVar8 = puVar8 + 1;
                }
                if ((int)local_538 != 2) {
LAB_145ebcf61:
                  iVar10 = 0;
                  iVar21 = 1;
                  iVar25 = 0;
                  do {
                    iVar10 = iVar10 + 2;
                    lVar7 = (longlong)iVar10;
                    iVar17 = iVar21;
                    if (lVar7 < (longlong)local_530) {
                      plVar5 = (longlong *)(lVar7 * 0x80);
                      uVar4 = *(uint *)(puVar23 + (longlong)iVar21 * 0x10 + 9);
                      if ((int)*(uint *)(puVar23 + 9 + lVar7 * 0x10) <
                          (int)*(uint *)(puVar23 + (longlong)iVar21 * 0x10 + 9)) {
                        uVar4 = *(uint *)(puVar23 + 9 + lVar7 * 0x10);
                      }
                      if ((int)uVar4 < 1) {
LAB_145ebcfdb:
                        bVar26 = false;
                      }
                      else {
                        plVar5 = (longlong *)
                                 ((undefined8 *)((longlong)plVar5 + (longlong)puVar23))[8];
                        plVar2 = (longlong *)puVar23[(longlong)iVar21 * 0x10 + 8];
                        lVar7 = *plVar2;
                        lVar22 = *plVar5;
                        if (lVar22 == lVar7) {
                          uVar20 = 0;
                          do {
                            if ((ulonglong)uVar4 - 1 == uVar20) goto LAB_145ebcfdb;
                            lVar7 = plVar2[uVar20 + 1];
                            lVar22 = plVar5[uVar20 + 1];
                            uVar20 = uVar20 + 1;
                          } while (lVar22 == lVar7);
                          bVar26 = uVar20 < uVar4;
                        }
                        else {
                          bVar26 = true;
                          uVar20 = 0;
                        }
                        if ((int)lVar22 == (int)lVar7) {
                          uVar4 = *(int *)((longlong)plVar5 + uVar20 * 8 + 4) -
                                  *(int *)((longlong)plVar2 + uVar20 * 8 + 4);
                        }
                        else {
                          uVar4 = FUN_14002c2bd();
                        }
                        plVar5 = (longlong *)(ulonglong)(uVar4 >> 0x1f);
                      }
                      if (((ulonglong)plVar5 & 1) == 0) {
                        iVar21 = iVar10;
                      }
                      iVar17 = iVar21;
                      if (!bVar26) {
                        iVar17 = iVar10;
                      }
                    }
                    uVar4 = *(uint *)(puVar23 + (longlong)iVar17 * 0x10 + 9);
                    if ((int)*(uint *)(puVar23 + (longlong)iVar25 * 0x10 + 9) <
                        (int)*(uint *)(puVar23 + (longlong)iVar17 * 0x10 + 9)) {
                      uVar4 = *(uint *)(puVar23 + (longlong)iVar25 * 0x10 + 9);
                    }
                    if ((int)uVar4 < 1) goto LAB_145ebd0b7;
                    puVar14 = puVar23 + (longlong)iVar25 * 0x10;
                    puVar8 = puVar23 + (longlong)iVar17 * 0x10;
                    uVar20 = 0;
                    while( true ) {
                      uVar9 = *(ulonglong *)(puVar8[8] + uVar20 * 8);
                      uVar3 = *(ulonglong *)(puVar14[8] + uVar20 * 8);
                      if (uVar3 != uVar9) break;
                      uVar20 = uVar20 + 1;
                      if (uVar4 == uVar20) goto LAB_145ebd0b7;
                    }
                    if ((int)uVar3 == (int)uVar9) {
                      iVar21 = (int)(uVar3 >> 0x20) - (int)(uVar9 >> 0x20);
                    }
                    else {
                      iVar21 = FUN_14002c2bd(uVar3 & 0xffffffff);
                    }
                    if (-1 < iVar21) goto LAB_145ebd0b7;
                    puVar12 = puVar14;
                    ppuVar13 = &local_e0;
                    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                      *ppuVar13 = (undefined2 *)*puVar12;
                      puVar12 = puVar12 + 1;
                      ppuVar13 = ppuVar13 + 1;
                    }
                    puVar12 = puVar8;
                    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                      *puVar14 = *puVar12;
                      puVar12 = puVar12 + 1;
                      puVar14 = puVar14 + 1;
                    }
                    ppuVar13 = &local_e0;
                    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                      *puVar8 = *ppuVar13;
                      ppuVar13 = ppuVar13 + 1;
                      puVar8 = puVar8 + 1;
                    }
                    iVar10 = iVar17 * 2;
                    iVar21 = iVar17 * 2 + 1;
                    iVar25 = iVar17;
                    if ((longlong)local_530 <= (longlong)iVar21) goto LAB_145ebd0b7;
                  } while( true );
                }
              }
            }
LAB_145ebd23b:
            local_520 = local_520 + -3;
          } while (&local_3e8 <= local_520);
        }
        FUN_1400021e4(local_518,&local_e0);
        puVar18 = &DAT_149dfb77a;
        if ((int)local_d8 != 0) {
          puVar18 = local_e0;
        }
        FUN_140002266(&local_3e8,L"namespace %s {",puVar18);
        lVar7 = (longlong)(int)uStack_4b0;
        uVar4 = (int)uStack_4b0 + 1;
        uStack_4b0 = CONCAT44(uStack_4b0._4_4_,uVar4);
        if (uStack_4b0._4_4_ < uVar4) {
          FUN_1447a1bd6(&local_4b8);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_4b8 + lVar7) = 0;
        *(ulonglong *)(local_4b8 + lVar7) = local_3e8;
        *(int *)(local_4b8 + 8 + lVar7) = (int)uStack_3e0;
        *(uint *)(local_4b8 + 0xc + lVar7) = uStack_3e0._4_4_;
        uStack_3e0 = 0;
        local_3e8 = 0;
        if (local_e0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_141580ad2(&local_4d8,&local_4e8);
        FUN_1400b22c2(&local_3e8);
        lVar7 = (longlong)(int)uStack_4b0;
        uVar4 = (int)uStack_4b0 + 1;
        uStack_4b0 = CONCAT44(uStack_4b0._4_4_,uVar4);
        if (uStack_4b0._4_4_ < uVar4) {
          FUN_1447a1bd6(&local_4b8);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_4b8 + lVar7) = 0;
        *(ulonglong *)(local_4b8 + lVar7) = local_3e8;
        local_3e8 = 0;
        *(int *)(local_4b8 + 8 + lVar7) = (int)uStack_3e0;
        *(uint *)(local_4b8 + 0xc + lVar7) = uStack_3e0._4_4_;
        uStack_3e0 = 0;
      }
      local_518 = local_518 + 0x18;
    } while (local_518 != local_510);
  }
  puVar23 = (undefined8 *)(param_1 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  if (*(int *)(param_1 + 0x1ec) < 0) {
    FUN_1446f8c06(puVar23,0);
  }
  if ((undefined2 *)*puVar23 != (undefined2 *)0x0) {
    *(undefined2 *)*puVar23 = 0;
  }
  if ((int)uStack_490 != 0) {
    FUN_1400020e8(puVar23,L"// Type declarations\n",0x15);
    FUN_144a8b2a0(&local_e0,&local_498,&DAT_149e01f72);
    FUN_144a882a8(&local_3e8,&local_e0,&DAT_149e01f72);
    iVar21 = (int)uStack_3e0 + -1;
    if ((int)uStack_3e0 == 0) {
      iVar21 = 0;
    }
    FUN_1400020e8(puVar23,local_3e8,iVar21);
    if (local_3e8 != 0) {
      FUN_1400020a8();
    }
    if (local_e0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((int)uStack_4b0 != 0) {
    FUN_1400020e8(puVar23,L"// Parameters and resource read/write functions\n",0x30);
    FUN_144a8b2a0(&local_3e8,&local_4b8,&DAT_149e01f72);
    iVar21 = (int)uStack_3e0 + -1;
    if ((int)uStack_3e0 == 0) {
      iVar21 = 0;
    }
    FUN_1400020e8(puVar23,local_3e8,iVar21);
    if (local_3e8 != 0) {
      FUN_1400020a8();
    }
  }
  thunk_FUN_14047a987(puVar23,"\n// Resource Indexing\n",0x16);
  thunk_FUN_14047a987(puVar23,"uint Index;\t// From SV_DispatchThreadID.x\n",0x2a);
  thunk_FUN_14047a987(puVar23,"int3 ReadNumThreads();\n",0x17);
  FUN_141239a12(local_4e8,local_4e0);
  if (local_4e8 != 0) {
    FUN_1400020a8();
  }
  local_440 = 0;
  if (local_448 != 0) {
    FUN_1400020a8();
  }
  FUN_145ebd4fe(&local_488);
  FUN_1447a1747(local_4b8,uStack_4b0 & 0xffffffff);
  if (local_4b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_498,uStack_490 & 0xffffffff);
  if (local_498 != 0) {
    FUN_1400020a8();
  }
  local_3f0 = 0;
  if (local_3f8 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_438);
  if ((local_60 ^ (ulonglong)auStack_558) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000145ebcb30:
  uVar4 = *(uint *)(puVar23 + 9);
  plVar5 = (longlong *)(ulonglong)uVar4;
  uVar19 = *(uint *)(puVar8 + 0x19);
  if ((int)uVar4 < (int)*(uint *)(puVar8 + 0x19)) {
    uVar19 = uVar4;
  }
  if ((int)uVar19 < 1) {
LAB_145ebcb87:
    bVar26 = false;
  }
  else {
    plVar5 = (longlong *)puVar23[8];
    plVar2 = (longlong *)puVar8[0x18];
    lVar7 = *plVar2;
    lVar22 = *plVar5;
    if (lVar22 == lVar7) {
      uVar20 = 0;
      do {
        if ((ulonglong)uVar19 - 1 == uVar20) goto LAB_145ebcb87;
        lVar7 = plVar2[uVar20 + 1];
        lVar22 = plVar5[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (lVar22 == lVar7);
      bVar26 = uVar20 < uVar19;
    }
    else {
      bVar26 = true;
      uVar20 = 0;
    }
    if ((int)lVar22 == (int)lVar7) {
      uVar4 = *(int *)((longlong)plVar5 + uVar20 * 8 + 4) -
              *(int *)((longlong)plVar2 + uVar20 * 8 + 4);
    }
    else {
      uVar4 = FUN_14002c2bd();
    }
    plVar5 = (longlong *)(ulonglong)(uVar4 >> 0x1f);
  }
  puVar8 = puVar15;
  if ((!bVar26) || (((ulonglong)plVar5 & 1) == 0)) goto LAB_145ebcb20;
LAB_145ebcbda:
  do {
    puVar8 = puVar12;
    puVar12 = puVar8 + -0x10;
    if (puVar12 <= puVar23) break;
    uVar4 = *(uint *)(puVar8 + -7);
    plVar5 = (longlong *)(ulonglong)uVar4;
    uVar19 = *(uint *)(puVar23 + 9);
    if ((int)uVar4 < (int)*(uint *)(puVar23 + 9)) {
      uVar19 = uVar4;
    }
    if ((int)uVar19 < 1) {
LAB_145ebcc39:
      bVar26 = false;
    }
    else {
      plVar5 = (longlong *)puVar8[-8];
      plVar2 = (longlong *)puVar23[8];
      lVar7 = *plVar2;
      lVar22 = *plVar5;
      if (lVar22 == lVar7) {
        uVar20 = 0;
        do {
          if ((ulonglong)uVar19 - 1 == uVar20) goto LAB_145ebcc39;
          lVar7 = plVar2[uVar20 + 1];
          lVar22 = plVar5[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (lVar22 == lVar7);
        bVar26 = uVar20 < uVar19;
      }
      else {
        bVar26 = true;
        uVar20 = 0;
      }
      if ((int)lVar22 == (int)lVar7) {
        uVar4 = *(int *)((longlong)plVar5 + uVar20 * 8 + 4) -
                *(int *)((longlong)plVar2 + uVar20 * 8 + 4);
      }
      else {
        uVar4 = FUN_14002c2bd();
      }
      plVar5 = (longlong *)(ulonglong)(uVar4 >> 0x1f);
    }
  } while ((!bVar26) || (((ulonglong)plVar5 & 1) == 0));
  lVar7 = 0x10;
  puVar6 = puVar23;
  puVar11 = puVar15;
  ppuVar13 = &local_e0;
  if (puVar15 <= puVar12) {
    for (; lVar7 != 0; lVar7 = lVar7 + -1) {
      *ppuVar13 = (undefined2 *)*puVar11;
      puVar11 = puVar11 + 1;
      ppuVar13 = ppuVar13 + 1;
    }
    puVar8 = puVar12;
    puVar6 = puVar15;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar6 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
    }
    ppuVar13 = &local_e0;
    puVar6 = puVar12;
    for (lVar7 = 0x10; puVar8 = puVar15, lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar6 = *ppuVar13;
      ppuVar13 = ppuVar13 + 1;
      puVar6 = puVar6 + 1;
    }
    goto LAB_145ebcb20;
  }
  for (; lVar7 != 0; lVar7 = lVar7 + -1) {
    *ppuVar13 = (undefined2 *)*puVar6;
    puVar6 = puVar6 + 1;
    ppuVar13 = ppuVar13 + 1;
  }
  puVar6 = puVar12;
  puVar11 = puVar23;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar11 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar11 = puVar11 + 1;
  }
  ppuVar13 = &local_e0;
  puVar6 = puVar12;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar6 = *ppuVar13;
    ppuVar13 = ppuVar13 + 1;
    puVar6 = puVar6 + 1;
  }
  local_524 = local_524 + -1;
  puVar8 = puVar8 + -0x20;
  if ((longlong)puVar8 - (longlong)puVar23 < (longlong)local_530 - (longlong)puVar15) {
    if (puVar15 < puVar14) {
      *local_520 = (ulonglong)puVar15;
      local_520[1] = (ulonglong)puVar14;
      *(int *)(local_520 + 2) = local_524;
      local_520 = local_520 + 3;
    }
    if (puVar12 <= puVar23 + 0x10) goto LAB_145ebd23b;
  }
  else {
    if (puVar23 + 0x10 < puVar12) {
      *local_520 = (ulonglong)puVar23;
      local_520[1] = (ulonglong)puVar8;
      *(int *)(local_520 + 2) = local_524;
      local_520 = local_520 + 3;
    }
    puVar23 = puVar15;
    puVar8 = puVar14;
    if (puVar14 <= puVar15) goto LAB_145ebd23b;
  }
  iVar21 = (int)((ulonglong)((longlong)puVar8 - (longlong)puVar23) >> 7);
  local_538 = (ulonglong)(iVar21 + 1);
  local_530 = puVar8;
  if (local_524 == 0) goto LAB_145ebcd56;
  goto LAB_145ebcac8;
LAB_145ebd0b7:
  puVar8 = (undefined8 *)((longlong)local_530 + -1);
  puVar14 = puVar23;
  ppuVar13 = &local_e0;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *ppuVar13 = (undefined2 *)*puVar14;
    puVar14 = puVar14 + 1;
    ppuVar13 = ppuVar13 + 1;
  }
  puVar14 = puVar23 + (longlong)puVar8 * 0x10;
  puVar12 = puVar23;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar12 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar12 = puVar12 + 1;
  }
  ppuVar13 = &local_e0;
  puVar14 = puVar23 + (longlong)puVar8 * 0x10;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar14 = *ppuVar13;
    ppuVar13 = ppuVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  bVar26 = local_530 < &DAT_00000003;
  local_530 = puVar8;
  if (bVar26) goto LAB_145ebd23b;
  goto LAB_145ebcf61;
}



// FUNCTION 145ebd4fe FUN_145ebd4fe body=53 status=ok
// SIG undefined FUN_145ebd4fe(void)

void FUN_145ebd4fe(longlong *param_1)

{
  FUN_145ebd592();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ebd534 FUN_145ebd534 body=93 status=ok
// SIG undefined FUN_145ebd534(void)

undefined8 * FUN_145ebd534(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141239a12(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149482bea(param_1,iVar1);
      FUN_149482c4c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145ebd592 FUN_145ebd592 body=345 status=ok
// SIG undefined FUN_145ebd592(void)

void FUN_145ebd592(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x18) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ebd6ec FUN_145ebd6ec body=292 status=ok
// SIG undefined FUN_145ebd6ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ebd6ec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b77e0) {
    FUN_144b3d300(&DAT_14c9b77e0);
    if (DAT_14c9b77e0 == -1) {
      FUN_145ebd95a();
      FUN_145ebd810();
      FUN_140db5666(&DAT_14c9b7738,0,&DAT_14c9b76d0,L"FGTAOSpatialFilterCS",
                    L"/Engine/Private/PostProcessAmbientOcclusion.usf",L"GTAOSpatialFilterCS",5,1,
                    FUN_14713586e,FUN_14713580e,&LAB_1471357f6,&LAB_1471357f2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9b89c0);
      _DAT_14c9b7738 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142b8cb0e);
      _Init_thread_footer(&DAT_14c9b77e0);
    }
  }
  return &DAT_14c9b7738;
}



// FUNCTION 145ebd810 FUN_145ebd810 body=205 status=ok
// SIG undefined FUN_145ebd810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ebd810(void)

{
  if ((DAT_14c9b7737 & 2) == 0) {
    DAT_14c9b7737 = DAT_14c9b7737 | 2;
    _DAT_14c9b76d8 = L"FGTAOSpatialFilterCS";
    _DAT_14c9b76f0 = FUN_146826540;
    _DAT_14c9b76f8 = FUN_146825d77;
    _DAT_14c9b7700 = FUN_146825fd6;
    _DAT_14c9b7708 = FUN_1407e02ea;
    _DAT_14c9b7710 = FUN_146826273;
    _DAT_14c9b76e8 = FUN_1471357c4;
    _DAT_14c9b7728 = 0xffffffff000000e0;
    _DAT_14c9b7730 = 8;
    DAT_14c9b7734 = 0;
    _DAT_14c9b7718 = &LAB_1471357ee;
    FUN_145ebd8de();
    FUN_1407e00cc(&DAT_14c9b76d0);
    return;
  }
  return;
}



// FUNCTION 145ebd8de FUN_145ebd8de body=123 status=ok
// SIG undefined FUN_145ebd8de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ebd8de(void)

{
  _DAT_14c9c0200 = L"BASE";
  DAT_14c9c022a = 4;
  _DAT_14c9c0208 = FUN_140b35ae4();
  _DAT_14c9c0210 = DAT_14c9b76e0;
  _DAT_14c9c0218 = &LAB_14682652b;
  DAT_14c9b76e0 = &DAT_14c9c0200;
  DAT_14c9b7735 = DAT_14c9b7735 + '\x01';
  _DAT_14c9c0220 = 0x100000000;
  if (*(char *)(_DAT_14c9c0208 + 100) != '\0') {
    DAT_14c9b7736 = DAT_14c9b7736 + '\x01';
  }
  return;
}



// FUNCTION 145ebd95a FUN_145ebd95a body=261 status=ok
// SIG undefined FUN_145ebd95a(void)

void FUN_145ebd95a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b8a40) {
    FUN_144b3d300(&DAT_14c9b8a40);
    if (DAT_14c9b8a40 == -1) {
      FUN_145ebda60(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1a0;
      local_58 = 0x5ed;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b89c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b90961);
      _Init_thread_footer(&DAT_14c9b8a40);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ebda60 FUN_145ebda60 body=226 status=ok
// SIG undefined FUN_145ebda60(void)

longlong * FUN_145ebda60(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462b9be6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ebdb48 FUN_145ebdb48 body=144 status=ok
// SIG undefined FUN_145ebdb48(void)

code * FUN_145ebdb48(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14482e3b2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000005ef;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462b9cf6;
}



// FUNCTION 145ebdbd8 FUN_145ebdbd8 body=146 status=ok
// SIG undefined FUN_145ebdbd8(void)

code * FUN_145ebdbd8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145be9bac();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SSAOParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSSAOShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000005f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9b8470;
  return FUN_145ebdb48;
}



// FUNCTION 145ebdc6a FUN_145ebdc6a body=292 status=ok
// SIG undefined FUN_145ebdc6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ebdc6a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fac10) {
    FUN_144b3d300(&DAT_14c9fac10);
    if (DAT_14c9fac10 == -1) {
      FUN_145ebded8();
      FUN_145ebdd8e();
      FUN_140db5666(&DAT_14c9fab68,0,&DAT_14c9fab00,L"FLumenSceneStatsCS",
                    L"/Engine/Private/Lumen/LumenScene.usf",L"LumenSceneStatsCS",5,1,FUN_147207552,
                    FUN_1472074f2,&LAB_1462e1702,&LAB_1472074ee,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9fe998);
      _DAT_14c9fab68 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d7b6f5);
      _Init_thread_footer(&DAT_14c9fac10);
    }
  }
  return &DAT_14c9fab68;
}



// FUNCTION 145ebdd8e FUN_145ebdd8e body=205 status=ok
// SIG undefined FUN_145ebdd8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ebdd8e(void)

{
  if ((DAT_14c9fab67 & 2) == 0) {
    DAT_14c9fab67 = DAT_14c9fab67 | 2;
    _DAT_14c9fab08 = L"FLumenSceneStatsCS";
    _DAT_14c9fab20 = FUN_146826540;
    _DAT_14c9fab28 = FUN_146825d77;
    _DAT_14c9fab30 = FUN_146825fd6;
    _DAT_14c9fab38 = FUN_1407e02ea;
    _DAT_14c9fab40 = FUN_146826273;
    _DAT_14c9fab18 = FUN_1472074c0;
    _DAT_14c9fab58 = 0xffffffff000000e0;
    _DAT_14c9fab60 = 8;
    DAT_14c9fab64 = 0;
    _DAT_14c9fab48 = &LAB_1472074ea;
    FUN_145ebde5c();
    FUN_1407e00cc(&DAT_14c9fab00);
    return;
  }
  return;
}



// FUNCTION 145ebde5c FUN_145ebde5c body=123 status=ok
// SIG undefined FUN_145ebde5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ebde5c(void)

{
  _DAT_14ca00088 = L"BASE";
  DAT_14ca000b2 = 4;
  _DAT_14ca00090 = FUN_140b35ae4();
  _DAT_14ca00098 = DAT_14c9fab10;
  _DAT_14ca000a0 = &LAB_14682652b;
  DAT_14c9fab10 = &DAT_14ca00088;
  DAT_14c9fab65 = DAT_14c9fab65 + '\x01';
  _DAT_14ca000a8 = 0x100000000;
  if (*(char *)(_DAT_14ca00090 + 100) != '\0') {
    DAT_14c9fab66 = DAT_14c9fab66 + '\x01';
  }
  return;
}



// FUNCTION 145ebded8 FUN_145ebded8 body=261 status=ok
// SIG undefined FUN_145ebded8(void)

void FUN_145ebded8(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fea18) {
    FUN_144b3d300(&DAT_14c9fea18);
    if (DAT_14c9fea18 == -1) {
      FUN_145ebdfde(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x11f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fe998,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c4ff);
      _Init_thread_footer(&DAT_14c9fea18);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ebdfde FUN_145ebdfde body=226 status=ok
// SIG undefined FUN_145ebdfde(void)

longlong * FUN_145ebdfde(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e4242;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ebe0c6 FUN_145ebe0c6 body=144 status=ok
// SIG undefined FUN_145ebe0c6(void)

code * FUN_145ebe0c6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14117f524();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000121;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e42ca;
}



// FUNCTION 145ebe156 FUN_145ebe156 body=146 status=ok
// SIG undefined FUN_145ebe156(void)

code * FUN_145ebe156(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1449a4512();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LumenCardScene";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenCardScene";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000122;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9fbc20;
  return FUN_145ebe0c6;
}



// FUNCTION 145ebe1e8 FUN_145ebe1e8 body=328 status=ok
// SIG undefined FUN_145ebe1e8(void)

undefined8 * FUN_145ebe1e8(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong *plVar6;
  
  *param_1 = &PTR_FUN_14a174468;
  param_1[1] = param_2;
  param_1[2] = *param_3;
  lVar3 = param_3[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    param_2 = param_1[1];
  }
  param_1[4] = 0;
  param_1[5] = 0;
  if (*(longlong *)(param_2 + 0xa0) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70) + 8);
  }
  plVar4 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a1761f0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  FUN_145ebe330(plVar4 + 2,uVar5);
  if (plVar4 == (longlong *)0x0) {
    param_1[4] = 0x10;
    plVar6 = (longlong *)param_1[5];
    if (plVar6 == (longlong *)0x0) {
      return param_1;
    }
    param_1[5] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    param_1[4] = plVar4 + 2;
    plVar6 = (longlong *)param_1[5];
    if (plVar4 == plVar6) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      goto LAB_145ebe29c;
    }
    param_1[5] = plVar4;
    if (plVar6 == (longlong *)0x0) goto LAB_145ebe29c;
  }
  LOCK();
  plVar1 = plVar6 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  if (plVar4 == (longlong *)0x0) {
    return param_1;
  }
LAB_145ebe29c:
  LOCK();
  plVar6 = plVar4 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return param_1;
}



// FUNCTION 145ebe330 FUN_145ebe330 body=140 status=ok
// SIG undefined FUN_145ebe330(void)

void FUN_145ebe330(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_145ebe3be(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(ulonglong)uVar2 << 4);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_147099df0(param_1,param_2,iVar1 - param_2);
  FUN_147099e4a(param_1);
  return;
}



// FUNCTION 145ebe3be FUN_145ebe3be body=132 status=ok
// SIG undefined FUN_145ebe3be(void)

void FUN_145ebe3be(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ebe442 FUN_145ebe442 body=25 status=ok
// SIG undefined FUN_145ebe442(void)

undefined8 FUN_145ebe442(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x20))
            (*(undefined8 *)(param_1 + 0x18),param_2,param_3,*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 145ebe45c FUN_145ebe45c body=543 status=ok
// SIG undefined FUN_145ebe45c(void)

void FUN_145ebe45c(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0 [6];
  undefined1 local_b8 [40];
  undefined1 local_90 [40];
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar1 = param_1 + 0x20;
  lVar6 = FUN_14479d2ce(lVar1);
  if (lVar6 == 0) goto LAB_145ebe5b8;
  lVar6 = FUN_145ebe730(param_1);
  if (lVar6 == 0) {
    if (*(int *)(param_3 + 0x138) != 0) {
      lVar6 = *(longlong *)(param_3 + 0x130);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar6 + 0x20);
      uVar2 = *(undefined4 *)(lVar6 + 0x14);
      uVar3 = *(undefined4 *)(lVar6 + 0x18);
      uVar4 = *(undefined4 *)(lVar6 + 0x1c);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar6 + 0x10);
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
      *(undefined4 *)(param_1 + 0x30) = uVar3;
      *(undefined4 *)(param_1 + 0x34) = uVar4;
      lVar6 = FUN_14485cccc(*(longlong *)(param_3 + 0x130) + 0xb8);
      if (lVar6 != 0) goto LAB_145ebe4af;
    }
    lVar6 = 0;
    plVar8 = (longlong *)0x0;
  }
  else {
LAB_145ebe4af:
    uVar7 = FUN_145a3ca5a();
    plVar8 = (longlong *)FUN_144718840(lVar6,uVar7);
  }
  lVar9 = FUN_14479d2ce(lVar1);
  local_f8 = plVar8;
  cVar5 = FUN_145ebe7f2(param_1,param_3 + 0xd0,(undefined4 *)(param_1 + 0x28),
                        *(undefined4 *)(*(longlong *)(lVar9 + 0x398) + 0x394));
  if (cVar5 == '\0') {
    FUN_1447a97f4(local_68,&DAT_14cb89590);
    uVar7 = FUN_14479d2ce(lVar1);
    if ((param_4 == 0) && (plVar8 != (longlong *)0x0)) {
      lVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,uVar7);
      if (lVar9 != 0) {
        puVar10 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar9 + 8) != (undefined4 *)0x0) {
          puVar10 = *(undefined4 **)(lVar9 + 8);
        }
        FUN_1447715ec(local_68,puVar10);
      }
      uVar7 = FUN_14479d2ce(lVar1);
      puVar11 = local_90;
      FUN_1447a97f4(puVar11,local_68);
      puVar10 = local_d0;
      (**(code **)(*plVar8 + 0x20))(plVar8,puVar10);
    }
    else {
      puVar11 = local_b8;
      FUN_1447a97f4(puVar11,local_68);
      local_e8 = *(undefined4 *)(param_1 + 0x28);
      uStack_e4 = *(undefined4 *)(param_1 + 0x2c);
      uStack_e0 = *(undefined4 *)(param_1 + 0x30);
      uStack_dc = *(undefined4 *)(param_1 + 0x34);
      puVar10 = &local_e8;
      local_d8 = *(undefined8 *)(param_1 + 0x38);
      lVar6 = 0;
    }
    FUN_145ebe67c(uVar7,lVar6,puVar10,puVar11);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
LAB_145ebe5b8:
  FUN_145abf732(param_1);
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ebe67c FUN_145ebe67c body=179 status=ok
// SIG undefined FUN_145ebe67c(void)

void FUN_145ebe67c(longlong *param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_60 = *param_3;
  uStack_5c = param_3[1];
  uStack_58 = param_3[2];
  uStack_54 = param_3[3];
  local_50 = *(undefined8 *)(param_3 + 4);
  local_68 = param_2;
  FUN_1447715ec(&local_48,param_4);
  uVar1 = FUN_14477b072(param_1,DAT_14cbada88);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_68);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_4 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ebe730 FUN_145ebe730 body=192 status=ok
// SIG undefined FUN_145ebe730(void)

undefined8 FUN_145ebe730(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  int local_38;
  undefined8 uStack_34;
  int iStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14479d2ce(param_1 + 0x20);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_14071752e(lVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar3 + 0x30))(plVar3);
      if (((*(int *)(lVar2 + 0xc0) == 0) || (*(int *)(lVar2 + 0x80) < 1)) ||
         (piVar1 = *(int **)(lVar2 + 0x78), *piVar1 == 0x7fffffff)) {
        local_38 = 0x7fffffff;
        uStack_34 = 0;
        local_28 = 0;
        uStack_20 = 0;
        local_18 = 0;
        uStack_10 = 0;
      }
      else {
        local_38 = *piVar1;
        uStack_34 = *(undefined8 *)(piVar1 + 1);
        iStack_2c = piVar1[3];
        local_28 = *(undefined8 *)(piVar1 + 4);
        uStack_20 = *(undefined8 *)(piVar1 + 6);
        local_18 = *(undefined8 *)(piVar1 + 8);
        uStack_10 = *(undefined8 *)(piVar1 + 10);
      }
      uVar4 = FUN_14479d2ce(&uStack_34);
      goto LAB_145ebe7a0;
    }
  }
  uVar4 = 0;
LAB_145ebe7a0:
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ebe7f2 FUN_145ebe7f2 body=462 status=ok
// SIG undefined FUN_145ebe7f2(void)

undefined8
FUN_145ebe7f2(longlong param_1,double *param_2,double *param_3,int param_4,longlong param_5)

{
  undefined4 *puVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar6 = *(int *)(param_1 + 0x408);
  if (iVar6 < 1) {
    uVar5 = 0;
  }
  else {
    lVar8 = 0x18;
    lVar7 = 0;
    do {
      lVar9 = *(longlong *)(param_1 + 0x400);
      if (*(longlong *)(param_1 + 0x400) == 0) {
        lVar9 = param_1 + 0x40;
      }
      if (*(int *)(lVar9 + -0x18 + lVar8) == param_4) {
        if (param_5 == 0) {
LAB_145ebe8b4:
          local_68 = param_3[2] - param_2[2];
          local_70 = param_3[1] - param_2[1];
          local_78 = *param_3 - *param_2;
          fVar10 = (float)FUN_1409661f0(lVar8 + lVar9,&local_78,param_2);
          lVar4 = FUN_1409f2447();
          if (*(float *)(lVar4 + 0x3c) <= fVar10) {
            iVar6 = *(int *)(param_1 + 0x408);
            goto LAB_145ebe90f;
          }
        }
        else {
          if ((*(longlong *)(lVar9 + -8 + lVar8) == 0) ||
             (cVar3 = FUN_144729dda(lVar8 + lVar9 + -0x10), cVar3 == '\0')) {
            lVar4 = 0;
          }
          else {
            lVar4 = *(longlong *)(lVar9 + -8 + lVar8);
          }
          if (lVar4 != param_5) goto LAB_145ebe8b4;
        }
        uVar5 = FUN_14479d2ce(param_1 + 0x20);
        local_88 = *(undefined8 *)(lVar9 + 0x10 + lVar8);
        puVar1 = (undefined4 *)(lVar9 + lVar8);
        local_98 = *puVar1;
        uStack_94 = puVar1[1];
        uStack_90 = puVar1[2];
        uStack_8c = puVar1[3];
        if ((((*(longlong *)(lVar9 + -8 + lVar8) == 0) ||
             (cVar3 = FUN_144729dda(lVar8 + lVar9 + -0x10), cVar3 == '\0')) ||
            (plVar2 = *(longlong **)(lVar9 + -8 + lVar8), plVar2 == (longlong *)0x0)) ||
           (lVar7 = (**(code **)(*plVar2 + 8))(), lVar7 == 0)) {
LAB_145ebe9a8:
          lVar7 = 0;
        }
        else {
          lVar8 = FUN_144a6c4d8();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_145ebe9a8;
        }
        FUN_148c37fd8(uVar5,lVar7,&local_98);
        uVar5 = 1;
        break;
      }
LAB_145ebe90f:
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x78;
      uVar5 = 0;
    } while (lVar7 < iVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 145ebe9c2 FUN_145ebe9c2 body=284 status=ok
// SIG undefined FUN_145ebe9c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ebe9c2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca90d30) {
    FUN_144b3d300(&DAT_14ca90d30);
    if (DAT_14ca90d30 == -1) {
      FUN_145ebeade();
      FUN_140db5666(&DAT_14ca90c88,0,&DAT_14ca90c20,L"FFillTextureCS",
                    L"/Engine/Private/OneColorShader.usf",L"MainFillTextureCS",5,1,FUN_147421e76,
                    FUN_147421e4e,&LAB_147421e36,&LAB_147421e32,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca90c88 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f82a9);
      _Init_thread_footer(&DAT_14ca90d30);
    }
  }
  return &DAT_14ca90c88;
}



// FUNCTION 145ebeade FUN_145ebeade body=210 status=ok
// SIG undefined FUN_145ebeade(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ebeade(void)

{
  if ((DAT_14ca90c87 & 2) == 0) {
    DAT_14ca90c87 = DAT_14ca90c87 | 2;
    _DAT_14ca90c28 = L"FFillTextureCS";
    _DAT_14ca90c40 = FUN_146826540;
    _DAT_14ca90c48 = FUN_146825d77;
    _DAT_14ca90c50 = FUN_146825fd6;
    _DAT_14ca90c58 = FUN_1407e02ea;
    _DAT_14ca90c60 = FUN_146826273;
    _DAT_14ca90c38 = FUN_147421e02;
    _DAT_14ca90c78 = 0xffffffff00000100;
    _DAT_14ca90c80 = 8;
    DAT_14ca90c84 = 0;
    _DAT_14ca90c68 = &LAB_147421e2e;
    FUN_145ebebb0();
    FUN_145ebed1e();
    FUN_1407e00cc(&DAT_14ca90c20);
    return;
  }
  return;
}



// FUNCTION 145ebebb0 FUN_145ebebb0 body=121 status=ok
// SIG undefined FUN_145ebebb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ebebb0(void)

{
  FUN_145ebec2a();
  _DAT_14ca91cd8 = L"FillValue";
  DAT_14ca91d02 = FUN_140850cc5();
  _DAT_14ca91ce0 = FUN_140ec6960();
  _DAT_14ca91cf0 = &LAB_14682652b;
  _DAT_14ca91cf8 = 0x1000000e0;
  _DAT_14ca91d00 = 0;
  _DAT_14ca91ce8 = DAT_14ca90c30;
  DAT_14ca90c30 = &DAT_14ca91cd8;
  return;
}



// FUNCTION 145ebec2a FUN_145ebec2a body=121 status=ok
// SIG undefined FUN_145ebec2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ebec2a(void)

{
  FUN_145ebeca4();
  _DAT_14ca91d08 = L"Params0";
  DAT_14ca91d32 = FUN_140850cc5();
  _DAT_14ca91d10 = FUN_140ec6960();
  _DAT_14ca91d20 = &LAB_14682652b;
  _DAT_14ca91d28 = 0x1000000e6;
  _DAT_14ca91d30 = 0;
  _DAT_14ca91d18 = DAT_14ca90c30;
  DAT_14ca90c30 = &DAT_14ca91d08;
  return;
}



// FUNCTION 145ebeca4 FUN_145ebeca4 body=121 status=ok
// SIG undefined FUN_145ebeca4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ebeca4(void)

{
  FUN_145ebeda4();
  _DAT_14ca91d38 = L"Params1";
  DAT_14ca91d62 = FUN_140850cc5();
  _DAT_14ca91d40 = FUN_140ec6960();
  _DAT_14ca91d50 = &LAB_14682652b;
  _DAT_14ca91d58 = 0x1000000ec;
  _DAT_14ca91d60 = 0;
  _DAT_14ca91d48 = DAT_14ca90c30;
  DAT_14ca90c30 = &DAT_14ca91d38;
  return;
}



// FUNCTION 145ebed1e FUN_145ebed1e body=133 status=ok
// SIG undefined FUN_145ebed1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ebed1e(void)

{
  _DAT_14ca94d28 = L"BASE";
  DAT_14ca94d52 = 4;
  FUN_140b35ae4();
  _DAT_14ca94d38 = DAT_14ca90c30;
  _DAT_14ca94d30 = &DAT_14ca8c6c8;
  _DAT_14ca94d40 = &LAB_14682652b;
  DAT_14ca90c30 = &DAT_14ca94d28;
  DAT_14ca90c85 = DAT_14ca90c85 + '\x01';
  _DAT_14ca94d48 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca90c86 = DAT_14ca90c86 + '\x01';
  }
  return;
}



// FUNCTION 145ebeda4 FUN_145ebeda4 body=216 status=ok
// SIG undefined FUN_145ebeda4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ebeda4(void)

{
  _DAT_14ca91d98 = L"FillTexture";
  DAT_14ca91dc2 = FUN_140850cc5();
  _DAT_14ca91da0 = FUN_140fb78d0();
  _DAT_14ca91db0 = &LAB_14682652b;
  _DAT_14ca91db8 = 0x1000000f8;
  _DAT_14ca91dc0 = 0;
  _DAT_14ca91da8 = DAT_14ca90c30;
  DAT_14ca90c30 = &DAT_14ca91d98;
  _DAT_14ca91d68 = L"Params2";
  DAT_14ca91d92 = FUN_140850cc5();
  _DAT_14ca91d70 = FUN_140ec6960();
  _DAT_14ca91d80 = &LAB_14682652b;
  _DAT_14ca91d88 = 0x1000000f2;
  _DAT_14ca91d90 = 0;
  _DAT_14ca91d78 = DAT_14ca90c30;
  DAT_14ca90c30 = &DAT_14ca91d68;
  return;
}



// FUNCTION 145ebee7c FUN_145ebee7c body=42 status=ok
// SIG undefined FUN_145ebee7c(void)

void FUN_145ebee7c(longlong param_1)

{
  FUN_145ebeea6();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c13b2c(param_1);
  return;
}



// FUNCTION 145ebeea6 FUN_145ebeea6 body=158 status=ok
// SIG undefined FUN_145ebeea6(void)

void FUN_145ebeea6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    FUN_1446f470e(&local_20,L"DistributionSubImage",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x60) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ebef46 FUN_145ebef46 body=65 status=ok
// SIG undefined FUN_145ebef46(void)

undefined8 * FUN_145ebef46(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab67670;
  TlsFree(*(DWORD *)((longlong)param_1 + 0x7c));
  FUN_144b4ad80(param_1);
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 145ebef92 FUN_145ebef92 body=189 status=ok
// SIG undefined FUN_145ebef92(void)

undefined8 * FUN_145ebef92(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1413f708e();
  *param_1 = &PTR_FUN_14abf9620;
  param_1[5] = &PTR_FUN_14abf9940;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_1400b22c2(&local_28,"Run Behavior Dynamic");
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) | 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ebf050 FUN_145ebf050 body=132 status=ok
// SIG undefined FUN_145ebf050(void)

void FUN_145ebf050(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140115e24();
  uVar1 = *(undefined8 *)(param_1 + 0x3c0);
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 == 0) {
      local_20 = 0;
      goto LAB_145ebf093;
    }
  }
  else {
    FUN_14689c22e(param_1);
  }
  local_20 = param_1 + 0x390;
LAB_145ebf093:
  local_28 = param_1;
  FUN_141581688(uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ebf0d6 FUN_145ebf0d6 body=40 status=ok
// SIG undefined FUN_145ebf0d6(void)

undefined8 FUN_145ebf0d6(undefined8 param_1,int param_2)

{
  FUN_145ebf0fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ebf0fe FUN_145ebf0fe body=161 status=ok
// SIG undefined FUN_145ebf0fe(void)

void FUN_145ebf0fe(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aeaf280;
  plVar3 = (longlong *)param_1[0x20];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_14582b792(param_1 + 0x12);
  plVar3 = (longlong *)param_1[0x11];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_1[6] != 0) {
    plVar3 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ebf1a0 FUN_145ebf1a0 body=40 status=ok
// SIG undefined FUN_145ebf1a0(void)

undefined8 FUN_145ebf1a0(undefined8 param_1,int param_2)

{
  FUN_145ebf1c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ebf1c8 FUN_145ebf1c8 body=161 status=ok
// SIG undefined FUN_145ebf1c8(void)

void FUN_145ebf1c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b19d810;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ebf274 FUN_145ebf274 body=190 status=ok
// SIG undefined FUN_145ebf274(void)

undefined8 * FUN_145ebf274(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1457e6eec();
  *param_1 = &PTR_FUN_14b4aef30;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_1446efa72(param_1 + 0xb,0,3,0x10);
  *(undefined4 *)(param_1 + 0xc) = 3;
  puVar1 = (undefined8 *)param_1[0xb];
  *puVar1 = &PTR_LAB_14b438870;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14b4c20e0;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_1);
  puVar1[4] = FUN_148a2f2e2;
  return param_1;
}



// FUNCTION 145ebf33e FUN_145ebf33e body=190 status=ok
// SIG undefined FUN_145ebf33e(void)

undefined8 * FUN_145ebf33e(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1457e6eec();
  *param_1 = &PTR_FUN_14b4afc60;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_1446efa72(param_1 + 0xb,0,3,0x10);
  *(undefined4 *)(param_1 + 0xc) = 3;
  puVar1 = (undefined8 *)param_1[0xb];
  *puVar1 = &PTR_LAB_149eae4d0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14b4c21c0;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_1);
  puVar1[4] = FUN_148a2ff26;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 145ebf3fc FUN_145ebf3fc body=682 status=ok
// SIG undefined FUN_145ebf3fc(void)

void FUN_145ebf3fc(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = param_3;
  lVar6 = FUN_145ebf6a8();
  if (lVar6 == 0) {
    lVar6 = FUN_145ebf87e(param_1,param_2);
  }
  if (*(int *)(lVar6 + 0x18) != *(int *)(lVar6 + 0x44)) {
    uVar3 = (uint)((ulonglong)param_3 >> 0x10);
    uVar8 = (uint)param_3 & 0xffff;
    lVar7 = lVar6 + 0x48;
    if (*(longlong *)(lVar6 + 0x50) != 0) {
      lVar7 = *(longlong *)(lVar6 + 0x50);
    }
    iVar9 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar6 + 0x58) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar8) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      lVar7 = *(longlong *)(lVar6 + 0x10);
      do {
        if (*(longlong *)(lVar7 + (longlong)iVar9 * 0x10) == param_3) goto LAB_145ebf5d6;
        iVar9 = *(int *)((longlong)iVar9 * 0x10 + lVar7 + 8);
      } while (iVar9 != -1);
    }
  }
  iVar9 = 0;
  FUN_144a13f80((longlong *)(lVar6 + 0x10),&local_90,&local_68,0);
  if (*(int *)(lVar6 + 0x18) - *(int *)(lVar6 + 0x44) == 1) {
    plVar1 = (longlong *)(param_1 + 0xa8);
    lVar6 = param_1 + 0xb8;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = lVar6;
    if (*(int *)(param_1 + 0xd0) != 0) {
      FUN_1449c0562(&local_60);
      iVar9 = *(int *)(param_1 + 0xd0);
    }
    local_78 = local_50;
    uVar4 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_88 = local_60;
    local_80 = local_58;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar5 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar9) || (local_78 = uVar4, local_58 != lVar6)) {
      do {
        local_78 = uVar4;
        uVar3 = *(uint *)(*local_90 + (longlong)iVar5 * 0xc);
        if ((*(int *)(param_1 + 0x2a0) - *(int *)(param_1 + 0x2cc) == 1) &&
           (*(int *)(param_1 + 0x1b0) != *(int *)(param_1 + 0x1dc))) {
          lVar7 = param_1 + 0x1e0;
          if (*(longlong *)(param_1 + 0x1e8) != 0) {
            lVar7 = *(longlong *)(param_1 + 0x1e8);
          }
          uVar8 = *(uint *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x1f0) - 1U & uVar3) * 4);
          if (uVar8 != 0xffffffff) {
            do {
              puVar2 = (uint *)(*(longlong *)(param_1 + 0x1a8) + (longlong)(int)uVar8 * 0x14);
              if (*puVar2 == uVar3) {
                if ((((puVar2 != (uint *)0x0) && (puVar2 != (uint *)0xfffffffffffffffc)) &&
                    ((char)puVar2[2] == '\0')) &&
                   ((*(char *)((longlong)puVar2 + 9) == '\0' &&
                    (*(char *)((longlong)puVar2 + 10) == '\x01')))) {
                  FUN_148a6925e(param_1,uVar3);
                }
                break;
              }
              uVar8 = puVar2[3];
            } while (uVar8 != 0xffffffff);
          }
        }
        FUN_1415816cc(param_1,uVar3,param_2);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (((local_78._4_4_ != iVar9) || (local_80 != lVar6)) || (local_90 != plVar1));
    }
  }
LAB_145ebf5d6:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ebf6a8 FUN_145ebf6a8 body=289 status=ok
// SIG undefined FUN_145ebf6a8(void)

longlong FUN_145ebf6a8(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (longlong *)*param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    local_28 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_28 = plVar4;
  }
  uVar5 = (**(code **)(*local_30 + 0x40))();
  iVar6 = FUN_145ebf7ca((longlong *)(param_1 + 0x298),uVar5,&local_30);
  plVar2 = local_28;
  if (iVar6 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar6 * 0x78 + *(longlong *)(param_1 + 0x298);
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  lVar7 = lVar8 + 0x10;
  if (lVar8 == 0) {
    lVar7 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ebf7ca FUN_145ebf7ca body=179 status=ok
// SIG undefined FUN_145ebf7ca(void)

int FUN_145ebf7ca(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar6 = *param_1;
      do {
        lVar8 = (longlong)iVar7 * 0x78;
        puVar3 = *(undefined8 **)(lVar6 + lVar8);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        cVar4 = '\x01';
        if (puVar3 != (undefined8 *)*param_3) {
          cVar4 = (**(code **)*puVar3)();
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        if (cVar4 != '\0') {
          return iVar7;
        }
        lVar6 = *param_1;
        iVar7 = *(int *)(lVar6 + 0x70 + lVar8);
      } while (iVar7 != -1);
    }
  }
  return -1;
}



// FUNCTION 145ebf87e FUN_145ebf87e body=203 status=ok
// SIG undefined FUN_145ebf87e(void)

longlong FUN_145ebf87e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 *local_90;
  int local_84;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = *param_2;
  local_78 = param_2[1];
  if (local_78 != 0) {
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
  }
  local_50 = 0;
  local_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_44 = 0xffffffff00000080;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  local_98 = param_2;
  local_90 = &local_80;
  FUN_145ebf9aa(param_1 + 0x298,&local_84);
  lVar1 = *(longlong *)(param_1 + 0x298);
  FUN_145ebf94a(&local_80);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar1 + (longlong)local_84 * 0x78 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ebf94a FUN_145ebf94a body=96 status=ok
// SIG undefined FUN_145ebf94a(void)

void FUN_145ebf94a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ebf9a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145ebf9aa FUN_145ebf9aa body=364 status=ok
// SIG undefined FUN_145ebf9aa(void)

undefined4 * FUN_145ebf9aa(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145ebfb70(param_1,local_48);
  FUN_145ebfb18(param_3,local_40);
  *(undefined4 *)(local_40 + 0xe) = 0xffffffff;
  local_4c = local_48[0];
  plVar2 = (longlong *)*local_40;
  plVar3 = (longlong *)local_40[1];
  if (plVar3 == (longlong *)0x0) {
    uVar6 = (**(code **)(*plVar2 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar6 = (**(code **)(*plVar2 + 0x40))();
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  cVar5 = FUN_145ebfc54(param_1,uVar6,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x74) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xe) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_145ebfd44(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ebfb18 FUN_145ebfb18 body=87 status=ok
// SIG undefined FUN_145ebfb18(void)

undefined8 * FUN_145ebfb18(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *puVar1;
  lVar3 = puVar1[1];
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_2[2] = *puVar2;
  lVar3 = puVar2[1];
  param_2[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  FUN_144a87124(param_2 + 4,puVar2 + 2);
  return param_2;
}



// FUNCTION 145ebfb70 FUN_145ebfb70 body=227 status=ok
// SIG undefined FUN_145ebfb70(void)

int * FUN_145ebfb70(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1410fd1ac(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x78);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x78) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x78 + *param_1;
  return param_2;
}



// FUNCTION 145ebfc54 FUN_145ebfc54 body=239 status=ok
// SIG undefined FUN_145ebfc54(void)

undefined8 FUN_145ebfc54(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  void *_Dst;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar3 = (longlong *)param_3[1];
    local_38 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      iVar4 = FUN_145ebf7ca(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      iVar4 = FUN_145ebf7ca(param_1);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
    if (iVar4 != -1) {
      _Dst = (void *)((longlong)iVar4 * 0x78 + *param_1);
      FUN_145c59734(_Dst);
      memmove(_Dst,param_3,0x70);
      FUN_145c59778(param_1,*param_4);
      *param_4 = iVar4;
      uVar5 = 1;
      goto LAB_145ebfcc1;
    }
  }
  uVar5 = 0;
LAB_145ebfcc1:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ebfd44 FUN_145ebfd44 body=500 status=ok
// SIG undefined FUN_145ebfd44(void)

void FUN_145ebfd44(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar8 = (longlong)iVar12 * 0x78;
        plVar10 = *(longlong **)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar9 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar9;
        *(int *)(lVar4 + lVar8 + 0x74) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + lVar8 + 0x70) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ebff3a FUN_145ebff3a body=638 status=ok
// SIG undefined FUN_145ebff3a(void)

ulonglong FUN_145ebff3a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined8 ****ppppuVar9;
  undefined1 auStack_128 [36];
  uint local_104;
  undefined8 local_100;
  undefined1 local_f1;
  uint local_f0 [10];
  undefined4 local_c8;
  undefined8 ***local_c0;
  longlong *local_b8;
  ushort local_a8;
  byte local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(longlong *)(param_1 + 0x110) == 0) ||
     (cVar5 = FUN_144729dda(param_1 + 0x108), cVar5 == '\0')) {
    puVar8 = (uint *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x110);
    puVar8 = (uint *)0x0;
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
      plVar6 = (longlong *)FUN_140343d7a(param_1);
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_145ec0266(&local_98,lVar3 + 0xc0);
      FUN_145ec0338(&local_98,param_1 + 0xe0,plVar6);
      local_104 = 0x42480000;
      if (*(char *)(lVar3 + 0x140) == '\x01') {
        puVar8 = (uint *)(lVar3 + 0x108);
        local_f1 = 2;
        local_100 = FUN_144a7be76(param_1);
        FUN_144a7bec8(param_1,&local_c0);
        local_f0[0] = local_f0[0] & 0xffffff00;
        local_c8 = 0;
        FUN_144a7bf34(local_f0,&local_c0,&local_100,&local_f1);
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b8 + 0x10))();
          }
        }
        FUN_1447c3578(puVar8,&local_c0,local_f0);
        FUN_144a5ac3a(local_f0);
        FUN_140a1daa8(&local_c0,&local_104);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppuVar9 = &local_c0;
          if (0x18 < local_a8) {
            ppppuVar9 = (undefined8 ****)local_c0;
          }
          (*pcVar4)(ppppuVar9);
        }
        if (0x18 < local_a8) {
          FUN_1400020a8(local_c0);
        }
      }
      else if (plVar6 != (longlong *)0x0) {
        puVar8 = local_f0;
        (**(code **)(*plVar6 + 0x528))(plVar6,puVar8,&local_c0);
        local_104 = local_f0[0];
      }
      FUN_145ec01ba(&local_98,local_104);
      uVar7 = (**(code **)(*plVar2 + 0x50))(plVar2);
      cVar5 = FUN_14096df60(uVar7,*(undefined8 *)(lVar3 + 0x80),0,&local_98);
      *(char *)(param_1 + 0xd8) = cVar5;
      puVar8 = (uint *)CONCAT71((int7)((ulonglong)puVar8 >> 8),cVar5 != '\0');
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(&local_98);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar8 & 0xffffffff;
}



// FUNCTION 145ec01ba FUN_145ec01ba body=170 status=ok
// SIG undefined FUN_145ec01ba(void)

void FUN_145ec01ba(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [40];
  undefined *local_50;
  undefined4 *local_48;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = &local_38;
  local_20 = 4;
  local_18 = 3;
  local_50 = &DAT_14cb8cec0;
  local_48 = puVar2;
  local_38 = param_2;
  FUN_140881f5a(param_1,local_3c,&local_50,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec0266 FUN_145ec0266 body=209 status=ok
// SIG undefined FUN_145ec0266(void)

void FUN_145ec0266(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_88 [32];
  undefined *local_68;
  undefined8 **local_60;
  undefined1 local_54 [4];
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x48;
  local_50[0] = (undefined8 **)FUN_14001cc68(0x48,0);
  pppuVar3 = (undefined8 ***)local_50[0];
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pppuVar3 = (undefined8 **)*param_2;
    param_2 = param_2 + 1;
    pppuVar3 = pppuVar3 + 1;
  }
  local_30 = 0xf;
  local_68 = &DAT_14cb8cee0;
  local_60 = local_50;
  FUN_140881f5a(param_1,local_54,&local_68,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_50;
    if (0x18 < local_38) {
      pppuVar3 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec0338 FUN_145ec0338 body=638 status=ok
// SIG undefined FUN_145ec0338(void)

void FUN_145ec0338(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 *local_88;
  undefined1 local_7c [4];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = FUN_14030a32e(param_2);
  if (lVar2 == 0) {
    cVar1 = FUN_144a7b75a(*(undefined1 *)(param_2 + 0x20),4);
    if (cVar1 == '\0') goto LAB_145ec04a3;
    FUN_144a7b7fe(param_2,&local_a8);
    local_88 = &local_78;
    local_60 = 0x18;
    local_78 = local_a8;
    uStack_70 = (undefined4)uStack_a0;
    uStack_6c = uStack_a0._4_4_;
    local_68 = local_98;
    local_58 = 4;
    local_90 = &DAT_14cb8ced8;
    FUN_140881f5a(param_1,local_7c,&local_90,0);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  }
  else {
    local_60 = 8;
    local_78 = (undefined8 *)0x0;
    FUN_14485c47a(&local_78,lVar2);
    local_58 = 7;
    local_a8 = (undefined8 *)&DAT_14cb8cec8;
    uStack_a0 = &local_78;
    FUN_140881f5a(param_1,&local_90,&local_a8,0);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar5 != (code *)0x0) {
      puVar3 = &local_78;
      if (0x18 < local_60) {
        puVar3 = local_78;
      }
      (*pcVar5)(puVar3);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(local_78);
    }
    lVar4 = *(longlong *)(lVar2 + 0x1c8);
    if (lVar4 == 0) {
      puVar3 = &DAT_14c8464e0;
      uVar6 = (undefined4)DAT_14c8464f0;
      uVar7 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar6 = (undefined4)*(undefined8 *)(lVar4 + 0x270);
      uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x270) >> 0x20);
      puVar3 = (undefined8 *)(lVar4 + 0x260);
    }
    uVar8 = *(undefined4 *)puVar3;
    uVar9 = *(undefined4 *)((longlong)puVar3 + 4);
    uVar10 = *(undefined4 *)(puVar3 + 1);
    uVar11 = *(undefined4 *)((longlong)puVar3 + 0xc);
    lVar4 = FUN_144860cdc(param_3);
    if (lVar4 != 0) {
      lVar2 = FUN_1400b9668(lVar4,0,lVar2);
      if (lVar2 != 0) {
        uVar8 = *(undefined4 *)(lVar2 + 0x18);
        uVar9 = *(undefined4 *)(lVar2 + 0x1c);
        uVar10 = *(undefined4 *)(lVar2 + 0x20);
        uVar11 = *(undefined4 *)(lVar2 + 0x24);
        uVar6 = (undefined4)*(undefined8 *)(lVar2 + 0x28);
        uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x28) >> 0x20);
      }
    }
    uStack_a0 = &local_78;
    local_60 = 0x18;
    local_78 = (undefined8 *)CONCAT44(uVar9,uVar8);
    local_68 = CONCAT44(uVar7,uVar6);
    local_58 = 4;
    local_a8 = (undefined8 *)&DAT_14cb8ced8;
    uStack_70 = uVar10;
    uStack_6c = uVar11;
    FUN_140881f5a(param_1,&local_90,&local_a8,0);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  }
  if (pcVar5 != (code *)0x0) {
    puVar3 = &local_78;
    if (0x18 < local_60) {
      puVar3 = local_78;
    }
    (*pcVar5)(puVar3);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78);
  }
LAB_145ec04a3:
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec05b8 FUN_145ec05b8 body=40 status=ok
// SIG undefined FUN_145ec05b8(void)

undefined8 FUN_145ec05b8(undefined8 param_1,int param_2)

{
  FUN_145ec05e0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ec05e0 FUN_145ec05e0 body=125 status=ok
// SIG undefined FUN_145ec05e0(void)

void FUN_145ec05e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b453b70;
  param_1[5] = &PTR_FUN_14b453ff0;
  param_1[6] = &PTR_LAB_14b454030;
  param_1[0x22] = &PTR_FUN_14b454080;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  FUN_145ec065e(param_1 + 0x47);
  FUN_145a3ee28(param_1 + 0x22);
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145ec065e FUN_145ec065e body=55 status=ok
// SIG undefined FUN_145ec065e(void)

void FUN_145ec065e(longlong *param_1)

{
  FUN_145ec0696(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ec0696 FUN_145ec0696 body=383 status=ok
// SIG undefined FUN_145ec0696(void)

void FUN_145ec0696(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ec0816 FUN_145ec0816 body=335 status=ok
// SIG undefined FUN_145ec0816(void)

undefined4 * FUN_145ec0816(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [2];
  undefined4 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145ec0ab6(param_1,local_98);
  local_88 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  uStack_80 = 0xffffffff;
  *local_90 = *(undefined4 *)*param_4;
  FUN_145ec0966(local_90 + 2,&local_88);
  FUN_14579819c(&local_88);
  local_90[0x10] = 0xffffffff;
  cVar1 = FUN_145ec0a02(param_1,param_3,local_90,local_98);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_90[0x11] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_90[0x10] =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_98[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_145ec0b9e(param_1);
    }
  }
  *param_2 = local_98[0];
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec0966 FUN_145ec0966 body=155 status=ok
// SIG undefined FUN_145ec0966(void)

undefined8 * FUN_145ec0966(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  bVar1 = *(byte *)(param_2 + 6);
  uVar2 = *(ushort *)(param_2 + 5);
  *(ushort *)(param_1 + 5) = uVar2;
  if (uVar2 < 0x19) {
    uVar3 = (ulonglong)((uint)bVar1 * 0x120);
    if (*(code **)((longlong)&DAT_14c9a85b8 + uVar3) == (code *)0x0) {
      if (*(code **)((longlong)&DAT_14c9a85b0 + uVar3) == (code *)0x0) {
        memcpy(param_1 + 2,param_2 + 2,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar3));
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b0 + uVar3))();
      }
    }
    else {
      (**(code **)((longlong)&DAT_14c9a85b8 + uVar3))();
    }
  }
  else {
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(undefined2 *)(param_2 + 5) = 0;
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)(param_2 + 6) = 0;
  return param_1;
}



// FUNCTION 145ec0a02 FUN_145ec0a02 body=180 status=ok
// SIG undefined FUN_145ec0a02(void)

undefined8 FUN_145ec0a02(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar17 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[8];
    }
    iVar18 = *(int *)((longlong)plVar17 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar18 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar18 * 0x48);
        if (*piVar1 == *param_3) {
          FUN_14579819c(piVar1 + 2);
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[8];
          iVar11 = param_3[9];
          iVar12 = param_3[10];
          iVar13 = param_3[0xb];
          iVar14 = param_3[0xd];
          iVar15 = param_3[0xe];
          iVar16 = param_3[0xf];
          piVar1[0xc] = param_3[0xc];
          piVar1[0xd] = iVar14;
          piVar1[0xe] = iVar15;
          piVar1[0xf] = iVar16;
          piVar1[8] = iVar10;
          piVar1[9] = iVar11;
          piVar1[10] = iVar12;
          piVar1[0xb] = iVar13;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_148996fb6(param_1,*param_4);
          *param_4 = iVar18;
          return 1;
        }
        iVar18 = piVar1[0x10];
      } while (iVar18 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145ec0ab6 FUN_145ec0ab6 body=231 status=ok
// SIG undefined FUN_145ec0ab6(void)

int * FUN_145ec0ab6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14021b4e8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x48) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 145ec0b9e FUN_145ec0b9e body=428 status=ok
// SIG undefined FUN_145ec0b9e(void)

void FUN_145ec0b9e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x48);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x44 + lVar6 * 0x48) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x40 + lVar6 * 0x48) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ec0d4c FUN_145ec0d4c body=71 status=ok
// SIG undefined FUN_145ec0d4c(void)

void FUN_145ec0d4c(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14094c9c2();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      FUN_145ec0d94(*(longlong *)(lVar1 + 0x30),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 145ec0d94 FUN_145ec0d94 body=146 status=ok
// SIG undefined FUN_145ec0d94(void)

void FUN_145ec0d94(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_140773fe2();
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_145ec0e26(param_1);
    lVar4 = (**(code **)(*plVar2 + 0x2d0))(plVar2,param_2,uVar3);
    if (lVar4 != 0) {
      FUN_141581cc6(*(undefined8 *)(DAT_14cb98ab0 + 0x28),param_2);
      FUN_145ec0f4e(param_1,param_2);
      cVar1 = FUN_145ec0e6a(param_1,0,param_2);
      if (cVar1 == '\0') {
        return;
      }
      FUN_148da785c(param_1,0,param_2);
      return;
    }
  }
  FUN_148da79fa(param_1,param_2);
  return;
}



// FUNCTION 145ec0e26 FUN_145ec0e26 body=67 status=ok
// SIG undefined FUN_145ec0e26(void)

undefined8 FUN_145ec0e26(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  cVar1 = FUN_14111b834(param_1 + 0x28,0);
  if (cVar1 == '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x28);
    if (*(longlong *)(lVar2 + 0x30) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
    }
  }
  return uVar3;
}



// FUNCTION 145ec0e6a FUN_145ec0e6a body=227 status=ok
// SIG undefined FUN_145ec0e6a(void)

undefined8 FUN_145ec0e6a(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x164)) {
    lVar1 = param_1 + 0x168;
    if (*(longlong *)(param_1 + 0x170) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x170);
    }
    iVar4 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x178) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x130);
      iVar5 = iVar4;
      while (*(uint *)(lVar1 + (longlong)iVar5 * 0x60) != param_2) {
        iVar5 = *(int *)((longlong)iVar5 * 0x60 + lVar1 + 0x58);
        if (iVar5 == -1) {
          return 0;
        }
      }
      do {
        lVar2 = lVar1 + (longlong)iVar4 * 0x60;
        if (*(uint *)(lVar1 + (longlong)iVar4 * 0x60) == param_2) goto LAB_145ec0ef5;
        iVar4 = *(int *)(lVar2 + 0x58);
      } while (iVar4 != -1);
      lVar2 = 0;
LAB_145ec0ef5:
      if (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 0x3c)) {
        lVar1 = lVar2 + 0x40;
        if (*(longlong *)(lVar2 + 0x48) != 0) {
          lVar1 = *(longlong *)(lVar2 + 0x48);
        }
        iVar4 = *(int *)(lVar1 + (ulonglong)(*(int *)(lVar2 + 0x50) - 1U & param_3) * 4);
        if (iVar4 != -1) {
          do {
            bVar6 = *(uint *)(*(longlong *)(lVar2 + 8) + (longlong)iVar4 * 0xc) == param_3;
            uVar3 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),bVar6);
            if (bVar6) {
              return uVar3;
            }
            iVar4 = *(int *)(*(longlong *)(lVar2 + 8) + (longlong)iVar4 * 0xc + 4);
          } while (iVar4 != -1);
          return uVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 145ec0f4e FUN_145ec0f4e body=252 status=ok
// SIG undefined FUN_145ec0f4e(void)

void FUN_145ec0f4e(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  uint local_40;
  undefined1 local_3c [4];
  uint *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar1 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x70);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x30);
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0x18) == param_2) goto LAB_145ec0fe0;
        iVar2 = *(int *)(lVar1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  lVar1 = *(longlong *)(DAT_14cb98ab0 + 0x28);
  if (lVar1 != 0) {
    FUN_145ec104c(&local_38,param_1);
    FUN_140feff30(lVar1 + 0x110,local_48,&local_38);
    FUN_1449db362(&local_38);
    local_38 = &local_40;
    local_30 = local_48;
    FUN_146122ba8((longlong *)(param_1 + 0x30),local_3c,&local_38,0);
  }
LAB_145ec0fe0:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ec104c FUN_145ec104c body=422 status=ok
// SIG undefined FUN_145ec104c(void)

longlong * FUN_145ec104c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_145ec1122:
    *puVar3 = &PTR_LAB_149e35290;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b9908a0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_148da7778;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_145ec1122;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e35290;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b9908a0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_148da7778;
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  return param_1;
}



// FUNCTION 145ec11fe FUN_145ec11fe body=460 status=ok
// SIG undefined FUN_145ec11fe(void)

undefined8 * FUN_145ec11fe(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14a8ad2e0;
  puVar1 = param_1 + 7;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_1446f470e(&local_30,L"Debug Camera Controller",1);
  param_1[6] = local_30;
  iVar2 = *(int *)(param_1 + 8);
  *(uint *)(param_1 + 8) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x44) < iVar2 + 1U) {
    FUN_145ec13cc(puVar1,iVar2);
  }
  lVar3 = param_1[7];
  *(undefined ***)(lVar3 + (longlong)iVar2 * 0x10) = &PTR_FUN_14a8ba0b0;
  *(undefined1 *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = 3;
  iVar2 = *(int *)(param_1 + 8);
  *(uint *)(param_1 + 8) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x44) < iVar2 + 1U) {
    FUN_145ec13cc(puVar1,iVar2);
  }
  lVar3 = param_1[7];
  *(undefined ***)(lVar3 + (longlong)iVar2 * 0x10) = &PTR_FUN_14a8ba0b0;
  *(undefined1 *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = 2;
  iVar2 = *(int *)(param_1 + 8);
  *(uint *)(param_1 + 8) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x44) < iVar2 + 1U) {
    FUN_145ec13cc(puVar1,iVar2);
  }
  lVar3 = param_1[7];
  *(undefined ***)(lVar3 + (longlong)iVar2 * 0x10) = &PTR_FUN_14a8ba0b0;
  *(undefined1 *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = 1;
  iVar2 = *(int *)(param_1 + 8);
  *(uint *)(param_1 + 8) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x44) < iVar2 + 1U) {
    FUN_145ec13cc(puVar1,iVar2);
  }
  lVar3 = param_1[7];
  *(undefined ***)(lVar3 + (longlong)iVar2 * 0x10) = &PTR_FUN_14a8ba0b0;
  *(undefined1 *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = 4;
  iVar2 = *(int *)(param_1 + 8);
  *(uint *)(param_1 + 8) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x44) < iVar2 + 1U) {
    FUN_145ec13cc(puVar1,iVar2);
  }
  lVar3 = param_1[7];
  *(undefined ***)(lVar3 + (longlong)iVar2 * 0x10) = &PTR_FUN_14a8ba0b0;
  *(undefined1 *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = 0xb;
  iVar2 = *(int *)(param_1 + 8);
  *(uint *)(param_1 + 8) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x44) < iVar2 + 1U) {
    FUN_145ec13cc(puVar1,iVar2);
  }
  lVar3 = param_1[7];
  *(undefined ***)(lVar3 + (longlong)iVar2 * 0x10) = &PTR_FUN_14a8ba0b0;
  *(undefined1 *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = 0xf;
  iVar2 = *(int *)(param_1 + 8);
  *(uint *)(param_1 + 8) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x44) < iVar2 + 1U) {
    FUN_145ec13cc(puVar1,iVar2);
  }
  lVar3 = param_1[7];
  *(undefined ***)(lVar3 + (longlong)iVar2 * 0x10) = &PTR_FUN_14a8ba0b0;
  *(undefined1 *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = 0x10;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec13cc FUN_145ec13cc body=132 status=ok
// SIG undefined FUN_145ec13cc(void)

void FUN_145ec13cc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ec1452 FUN_145ec1452 body=38 status=ok
// SIG undefined FUN_145ec1452(void)

undefined8 FUN_145ec1452(undefined8 param_1,int param_2)

{
  FUN_145ec1478();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ec1478 FUN_145ec1478 body=164 status=ok
// SIG undefined FUN_145ec1478(void)

void FUN_145ec1478(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f2aa00;
  param_1[1] = &PTR_FUN_149f2aa50;
  FUN_1447a1747(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0xb);
  FUN_1410c966c(param_1 + 1);
  return;
}



// FUNCTION 145ec151c FUN_145ec151c body=152 status=ok
// SIG undefined FUN_145ec151c(void)

undefined8 *
FUN_145ec151c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a356270;
  uVar1 = *param_4;
  local_20 = *param_3;
  local_18 = param_3[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_145ec15b6(param_1 + 2,&local_30,&local_20,uVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec15b6 FUN_145ec15b6 body=326 status=ok
// SIG undefined FUN_145ec15b6(void)

undefined8 *
FUN_145ec15b6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  param_1[1] = *param_3;
  lVar4 = param_3[1];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_4;
  param_1[6] = 0;
  lVar4 = FUN_14001cc68(0xe8,0x10);
  FUN_141581cde(lVar4);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a356360;
  plVar5[2] = lVar4;
  param_1[3] = lVar4;
  plVar3 = (longlong *)param_1[4];
  if (plVar5 == plVar3) {
    if (plVar5 == (longlong *)0x0) goto LAB_145ec1659;
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_145ec1659;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar5;
  }
  else {
    param_1[4] = plVar5;
    if (plVar3 == (longlong *)0x0) goto LAB_145ec1659;
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_145ec1659;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_145ec1659:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return param_1;
}



// FUNCTION 145ec1708 FUN_145ec1708 body=190 status=ok
// SIG undefined FUN_145ec1708(void)

undefined8 * FUN_145ec1708(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1409dad0c();
  *param_1 = &PTR_FUN_14a496110;
  param_1[0xd] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    FUN_1446ddc76(&local_28,"MovieScene",1);
    local_48 = FUN_14073751e();
    local_38 = 0;
    local_40 = 1;
    lVar1 = FUN_140486aac(param_2,param_1,local_28,local_48);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    param_1[0xd] = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec17d2 FUN_145ec17d2 body=115 status=ok
// SIG undefined FUN_145ec17d2(void)

undefined8 * FUN_145ec17d2(undefined8 *param_1)

{
  FUN_145c308da();
  *param_1 = &PTR_FUN_14a68f030;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebe80) {
    FUN_144b3d300(&DAT_14caebe80);
    if (DAT_14caebe80 == -1) {
      FUN_141581d5e();
      atexit(FUN_14356f291);
      _Init_thread_footer(&DAT_14caebe80);
    }
  }
  return param_1;
}



// FUNCTION 145ec1850 FUN_145ec1850 body=115 status=ok
// SIG undefined FUN_145ec1850(void)

undefined8 * FUN_145ec1850(undefined8 *param_1)

{
  FUN_145891bee();
  *param_1 = &PTR_FUN_14a6a5bb0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeab50) {
    FUN_144b3d300(&DAT_14caeab50);
    if (DAT_14caeab50 == -1) {
      FUN_141581e74();
      atexit(FUN_14356d5e4);
      _Init_thread_footer(&DAT_14caeab50);
    }
  }
  return param_1;
}



// FUNCTION 145ec18ce FUN_145ec18ce body=115 status=ok
// SIG undefined FUN_145ec18ce(void)

undefined8 * FUN_145ec18ce(undefined8 *param_1)

{
  FUN_145891bee();
  *param_1 = &PTR_FUN_14a6a5e90;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeab78) {
    FUN_144b3d300(&DAT_14caeab78);
    if (DAT_14caeab78 == -1) {
      FUN_141581f8a();
      atexit(FUN_14356d617);
      _Init_thread_footer(&DAT_14caeab78);
    }
  }
  return param_1;
}



// FUNCTION 145ec194c FUN_145ec194c body=191 status=ok
// SIG undefined FUN_145ec194c(void)

undefined8 * FUN_145ec194c(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6d9520;
  param_1[6] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf5130) {
    FUN_144b3d300(&DAT_14caf5130);
    if (DAT_14caf5130 == -1) {
      FUN_1446f470e(&DAT_14caf5128,&DAT_149e01fe8,1);
      _Init_thread_footer(&DAT_14caf5130);
    }
  }
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[6] = DAT_14caf5128;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfe;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x44) = *(byte *)((longlong)param_1 + 0x44) & 0xfe;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  return param_1;
}



// FUNCTION 145ec1a0c FUN_145ec1a0c body=40 status=ok
// SIG undefined FUN_145ec1a0c(void)

undefined8 FUN_145ec1a0c(undefined8 param_1,int param_2)

{
  FUN_145ec1a34();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ec1a34 FUN_145ec1a34 body=143 status=ok
// SIG undefined FUN_145ec1a34(void)

void FUN_145ec1a34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b44b580;
  param_1[5] = &PTR_FUN_14b44b820;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_145a3ec70(param_1 + 0x35);
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_145ec1ac4(param_1 + 0x2b);
  FUN_145a3ee28(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ec1ac4 FUN_145ec1ac4 body=53 status=ok
// SIG undefined FUN_145ec1ac4(void)

void FUN_145ec1ac4(longlong *param_1)

{
  FUN_145ec1afa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ec1afa FUN_145ec1afa body=369 status=ok
// SIG undefined FUN_145ec1afa(void)

void FUN_145ec1afa(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0x60);
      FUN_1489c9ef6(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ec1c6c FUN_145ec1c6c body=96 status=ok
// SIG undefined FUN_145ec1c6c(void)

ulonglong FUN_145ec1c6c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145ec1caf:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_145ec1caf;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
    }
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 145ec1cd2 FUN_145ec1cd2 body=68 status=ok
// SIG undefined FUN_145ec1cd2(void)

void FUN_145ec1cd2(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x138);
  memset(_Dst,0,0x138);
  FUN_145ec1d16(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 145ec1d16 FUN_145ec1d16 body=134 status=ok
// SIG undefined FUN_145ec1d16(void)

undefined8 * FUN_145ec1d16(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8cc500;
  *(undefined4 *)(param_1 + 0x16) = 0x10000;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 0x100;
  FUN_1400b22c2(param_1 + 0x17,&DAT_149e02088);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  FUN_1400b22c2(param_1 + 0x25,&DAT_14b8cc528);
  return param_1;
}



// FUNCTION 145ec1d9c FUN_145ec1d9c body=40 status=ok
// SIG undefined FUN_145ec1d9c(void)

undefined8 FUN_145ec1d9c(undefined8 param_1,int param_2)

{
  FUN_145ec1dc4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ec1dc4 FUN_145ec1dc4 body=162 status=ok
// SIG undefined FUN_145ec1dc4(void)

void FUN_145ec1dc4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bdc4a40;
  param_1[5] = &PTR_FUN_14bdc4ec0;
  param_1[0x13] = &PTR_FUN_14bdc4ee0;
  param_1[0x15] = &PTR_FUN_14bdc4f10;
  param_1[0x16] = &PTR_FUN_14bdc4f50;
  param_1[0x5d] = &PTR_FUN_14bdc4f80;
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x61];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_145bc962a(param_1);
  return;
}



// FUNCTION 145ec1e66 FUN_145ec1e66 body=213 status=ok
// SIG undefined FUN_145ec1e66(void)

void FUN_145ec1e66(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14be808f0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14be80880;
  puVar1[3] = param_1;
  puVar1[4] = FUN_145cf17ae;
  FUN_145ec1f3c(6,&local_30);
  FUN_1449db362(&local_30);
  FUN_145ec1f5c(&local_30,param_1);
  lVar3 = thunk_FUN_1404eee4c(param_1 + 0x90);
  FUN_145ec2018(lVar3 + 8,&local_30,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec1f3c FUN_145ec1f3c body=32 status=ok
// SIG undefined FUN_145ec1f3c(void)

void FUN_145ec1f3c(undefined4 param_1,undefined8 param_2)

{
  FUN_14146e7de();
  FUN_145ec20d6(param_1,param_2);
  return;
}



// FUNCTION 145ec1f5c FUN_145ec1f5c body=186 status=ok
// SIG undefined FUN_145ec1f5c(void)

undefined8 FUN_145ec1f5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14a1c8660;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14be809e0;
  puVar1[3] = param_2;
  puVar1[4] = FUN_140e5f400;
  FUN_140aa43ac(&DAT_14cb10a20,param_1,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec2018 FUN_145ec2018 body=189 status=ok
// SIG undefined FUN_145ec2018(void)

undefined8 FUN_145ec2018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b3ec750;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14be80a60;
  puVar1[3] = param_3;
  puVar1[4] = &LAB_1458dd186;
  FUN_145ca1c8a(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec20d6 FUN_145ec20d6 body=246 status=ok
// SIG undefined FUN_145ec20d6(void)

void FUN_145ec20d6(uint param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_1 & 1) != 0) {
    local_40 = 0;
    local_38 = 0;
    FUN_145ec21ce(&local_40,param_2);
    FUN_145ec224c(&DAT_14c9a3f50 + (ulonglong)(param_1 & 4 | 1) * 0x18,local_48,&local_40);
    FUN_1449db362(&local_40);
  }
  if ((param_1 & 2) != 0) {
    local_40 = 0;
    local_38 = 0;
    FUN_145ec21ce(&local_40,param_2);
    FUN_145ec224c(&DAT_14c9a3f50 + (ulonglong)(param_1 & 4 | 2) * 0x18,local_48,&local_40);
    FUN_1449db362(&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec21ce FUN_145ec21ce body=124 status=ok
// SIG undefined FUN_145ec21ce(void)

void FUN_145ec21ce(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec224c FUN_145ec224c body=216 status=ok
// SIG undefined FUN_145ec224c(void)

undefined8 * FUN_145ec224c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec2326 FUN_145ec2326 body=649 status=ok
// SIG undefined FUN_145ec2326(void)

undefined8 * FUN_145ec2326(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14aabfbd0;
  FUN_145ec283a(&local_38);
  FUN_145ec25ee(param_1 + 1);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_145ec2630(param_1 + 4,&local_38);
  FUN_1449db362(&local_38);
  param_1[6] = 0;
  param_1[7] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_14aac2420;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_38[2] = lVar5;
  *local_38 = &PTR_FUN_14aac23b0;
  local_38[3] = param_1;
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = &PTR_FUN_14aac2488;
  FUN_145ec25b0(puVar4 + 2,&local_38);
  *(undefined4 *)(puVar4 + 9) = 0;
  puVar2 = (undefined8 *)param_1[3];
  if (puVar2 != puVar4) {
    param_1[3] = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  FUN_1449db362(&local_38);
  puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_14aac2500;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_38[2] = lVar5;
  *local_38 = &PTR_FUN_14aac2490;
  local_38[3] = param_1;
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = &PTR_FUN_14aac2568;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  FUN_145ec26ae(puVar4 + 2,&local_38);
  puVar4[6] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined4 *)(puVar4 + 7) = 0;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != puVar4) {
    param_1[2] = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec25b0 FUN_145ec25b0 body=62 status=ok
// SIG undefined FUN_145ec25b0(void)

undefined8 * FUN_145ec25b0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_145ec272c();
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 145ec25ee FUN_145ec25ee body=65 status=ok
// SIG undefined FUN_145ec25ee(void)

longlong * FUN_145ec25ee(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x1d8,0x10);
  FUN_1415820a0(lVar1,1);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 145ec2630 FUN_145ec2630 body=124 status=ok
// SIG undefined FUN_145ec2630(void)

void FUN_145ec2630(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec26ae FUN_145ec26ae body=124 status=ok
// SIG undefined FUN_145ec26ae(void)

void FUN_145ec26ae(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec272c FUN_145ec272c body=124 status=ok
// SIG undefined FUN_145ec272c(void)

void FUN_145ec272c(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec27aa FUN_145ec27aa body=144 status=ok
// SIG undefined FUN_145ec27aa(void)

void FUN_145ec27aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aac2340;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac22d0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000145ec282f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 145ec283a FUN_145ec283a body=183 status=ok
// SIG undefined FUN_145ec283a(void)

longlong * FUN_145ec283a(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,6,0x10);
  *(undefined4 *)(param_1 + 1) = 6;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14aac2340;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar1[2] = lVar6;
  *puVar1 = &PTR_FUN_14aac22d0;
  puVar1[4] = *param_2;
  puVar1[6] = param_2[2];
  param_2[2] = 0;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  uVar4 = param_2[7];
  puVar1[10] = param_2[6];
  puVar1[0xb] = uVar4;
  puVar1[8] = uVar2;
  puVar1[9] = uVar3;
  if (puVar1[4] != 0) {
    *param_2 = 0;
  }
  return param_1;
}



// FUNCTION 145ec28fa FUN_145ec28fa body=353 status=ok
// SIG undefined FUN_145ec28fa(void)

undefined8 * FUN_145ec28fa(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined2 *local_90;
  int local_88;
  undefined8 *local_80;
  code *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b4d9ab0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_140056680(&local_90,L"/Script/Shift.ShiftSession");
  local_a8 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"Shift",L"ShiftSessionClass",&local_90);
  puVar3 = local_90;
  if (local_88 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  uVar1 = FUN_145885f7a();
  local_a0 = 0;
  local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff00000000);
  lVar2 = FUN_141433b6f(uVar1,0,puVar3,0);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[7] = lVar2;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    local_40 = FUN_143eff9aa;
    local_38 = &LAB_143effa74;
    local_30 = &LAB_143effa7c;
    local_28 = &DAT_143effa84;
    local_80 = param_1;
    bifrost::social::friends::setUpdateDelegate();
    lVar2 = FUN_140d5712e();
    FUN_145ec2a5c(lVar2 + 8,local_98,param_1);
  }
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145ec2a5c FUN_145ec2a5c body=244 status=ok
// SIG undefined FUN_145ec2a5c(void)

undefined8 FUN_145ec2a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b4dad90;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_148a62a8e;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec2b52 FUN_145ec2b52 body=55 status=ok
// SIG undefined FUN_145ec2b52(void)

void FUN_145ec2b52(longlong *param_1)

{
  FUN_14158212a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ec2b8a FUN_145ec2b8a body=510 status=ok
// SIG undefined FUN_145ec2b8a(void)

undefined8 * FUN_145ec2b8a(undefined8 *param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_LAB_149e1b8b0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149e1b8e0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 6) = 2;
  param_1[1] = puVar2 + 2;
  param_1[2] = puVar2;
  param_1[3] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 4));
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xb),4000);
  param_1[0x10] = 0;
  FUN_144a85b52(param_1 + 0x11,0);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 2;
  *(undefined2 *)((longlong)param_1 + 0xf1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf3) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  piVar3 = (int *)FUN_14001cc68(0x48,0x10);
  piVar3[0] = 0;
  piVar3[1] = 0;
  piVar3[2] = 0;
  piVar3[3] = 0;
  piVar3[4] = 0;
  piVar3[5] = 0;
  piVar3[6] = 0;
  piVar3[7] = 0;
  piVar3[8] = 0;
  piVar3[9] = 0;
  piVar3[10] = 0;
  piVar3[0xb] = 0;
  piVar3[0xc] = 0;
  piVar3[0xd] = 0;
  piVar3[0xe] = 0;
  piVar3[0xf] = 0;
  piVar3[0x10] = 0;
  piVar3[0x11] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(piVar3 + 8));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(piVar3 + 8),4000);
  param_1[7] = piVar3;
  LOCK();
  *piVar3 = *piVar3 + 1;
  UNLOCK();
  plVar1 = (longlong *)param_1[1];
  if ((int)plVar1[1] != 3) {
    FUN_1446efa72(plVar1,0,3,0x10);
    *(undefined4 *)(plVar1 + 1) = 3;
  }
  puVar2 = (undefined8 *)*plVar1;
  *puVar2 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar2[2] = uVar4;
  *puVar2 = &PTR_FUN_149e1b900;
  puVar2[3] = param_1;
  puVar2[4] = &LAB_1467ee740;
  *(undefined1 *)(param_1[1] + 0x28) = param_2;
  uVar4 = FUN_141582352();
  local_60 = param_1;
  FUN_145ec2d8a(uVar4,&local_58);
  param_1[3] = local_58;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec2d8a FUN_145ec2d8a body=181 status=ok
// SIG undefined FUN_145ec2d8a(void)

undefined8 FUN_145ec2d8a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  puVar1 = local_40;
  local_38 = 2;
  *local_40 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e1b970;
  puVar1[3] = *param_3;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec2e40 FUN_145ec2e40 body=40 status=ok
// SIG undefined FUN_145ec2e40(void)

undefined8 FUN_145ec2e40(undefined8 param_1,int param_2)

{
  FUN_145ec2e68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ec2e68 FUN_145ec2e68 body=73 status=ok
// SIG undefined FUN_145ec2e68(void)

void FUN_145ec2e68(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4d2420;
  plVar3 = (longlong *)param_1[9];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ec2eb2 FUN_145ec2eb2 body=9 status=ok
// SIG undefined FUN_145ec2eb2(void)

void FUN_145ec2eb2(longlong param_1)

{
  FUN_145ec2ebc(param_1 + 0x10);
  return;
}



// FUNCTION 145ec2ebc FUN_145ec2ebc body=117 status=ok
// SIG undefined FUN_145ec2ebc(void)

void FUN_145ec2ebc(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a4d82b0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145ec2f32(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145ec2f68(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ec2f2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145ec2f32 FUN_145ec2f32 body=53 status=ok
// SIG undefined FUN_145ec2f32(void)

void FUN_145ec2f32(longlong *param_1)

{
  FUN_145ec2fa0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ec2f68 FUN_145ec2f68 body=55 status=ok
// SIG undefined FUN_145ec2f68(void)

void FUN_145ec2f68(longlong *param_1)

{
  FUN_145ec2ff8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ec2fa0 FUN_145ec2fa0 body=88 status=ok
// SIG undefined FUN_145ec2fa0(void)

void FUN_145ec2fa0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145ec2ff8 FUN_145ec2ff8 body=121 status=ok
// SIG undefined FUN_145ec2ff8(void)

void FUN_145ec2ff8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145ec307a FUN_145ec307a body=115 status=ok
// SIG undefined FUN_145ec307a(void)

undefined8 FUN_145ec307a(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  code *local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  local_20 = &local_30;
  local_28 = FUN_1432e131e;
  local_30 = param_1;
  FUN_145ec30ee(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec30ee FUN_145ec30ee body=483 status=ok
// SIG undefined FUN_145ec30ee(void)

void FUN_145ec30ee(ulonglong *param_1,longlong *param_2,undefined8 *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_58 [39];
  byte local_31;
  ulonglong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) {
      if (0xfff7ffffffffffff < *param_1) {
LAB_145ec31d6:
        local_31 = *(byte *)((longlong)param_1 + 6) & 7;
        local_30 = param_1;
        (*(code *)*param_3)(param_3[1],param_2);
        goto LAB_145ec315c;
      }
    }
    else {
      puVar2 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar2 + 1;
      if ((uint *)puVar2[1] < puVar1) {
        local_30 = (ulonglong *)CONCAT44(local_30._4_4_,(uint)(*param_1 < 0xfff8000000000000));
        (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
        uVar3 = (uint)local_30;
        if (1 < (uint)local_30) {
          FUN_14572541c(param_2);
          uVar3 = (uint)local_30;
        }
      }
      else {
        uVar3 = *(uint *)*puVar2;
        *puVar2 = (ulonglong)puVar1;
      }
      if (uVar3 == 0) goto LAB_145ec31d6;
    }
  }
  else {
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      local_30 = (ulonglong *)CONCAT44(local_30._4_4_,1);
      (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
      uVar3 = (uint)local_30;
      if (1 < (uint)local_30) {
        FUN_14572541c(param_2);
        uVar3 = (uint)local_30;
      }
    }
    else {
      uVar3 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (uVar3 == 0) {
      *param_1 = 0xfff8000000000000;
      local_31 = 0;
      local_30 = param_1;
      (*(code *)*param_3)(param_3[1],param_2,&local_31);
      *param_1 = *param_1 | (ulonglong)(local_31 & 7) << 0x30;
      goto LAB_145ec315c;
    }
  }
  puVar2 = *(ulonglong **)param_2[1];
  if ((ulonglong *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,8);
    }
    else {
      thunk_FUN_146821949(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
  }
LAB_145ec315c:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ec32de FUN_145ec32de body=292 status=ok
// SIG undefined FUN_145ec32de(void)

undefined8 * FUN_145ec32de(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ecae36();
  *param_1 = &PTR_FUN_14b8472c0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,&DAT_14b9d8d88,0);
  FUN_1404e49fa(param_1 + 5,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50 = DAT_14cbe5c98;
  local_58 = DAT_14cbe5c90;
  FUN_1448075d0(&local_48);
  FUN_1404e49fa(param_1 + 10,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a97f4(&local_48,&DAT_14cbe5ca8);
  FUN_1447325ac(&local_48,&local_58,1);
  param_1[0x10] = local_58;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  param_1[0x11] = DAT_14cbe5cd0;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec3404 FUN_145ec3404 body=28 status=ok
// SIG undefined FUN_145ec3404(void)

void FUN_145ec3404(longlong *param_1)

{
  FUN_140e0bb56();
                    /* WARNING: Could not recover jumptable at 0x000145ec341c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}



// FUNCTION 145ec3420 FUN_145ec3420 body=722 status=ok
// SIG undefined FUN_145ec3420(void)

void FUN_145ec3420(longlong param_1)

{
  undefined4 uVar1;
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    lVar6 = param_1 + 0x290;
    cVar3 = FUN_144729dda(lVar6);
    if (cVar3 != '\0') {
      uVar4 = FUN_14479d2ce(lVar6);
      lVar5 = FUN_1447210f0(uVar4);
      dVar2 = *(double *)(lVar5 + 0x6d0);
      if (dVar2 < (double)*(float *)(param_1 + 0x330)) {
        if (*(longlong *)(param_1 + 0x338) == 0) {
          uVar4 = FUN_14479d2ce(lVar6);
          lVar5 = FUN_1447210f0(uVar4);
          if (*(longlong *)(lVar5 + 0x1f0) == 0) {
            puVar9 = (undefined8 *)(lVar5 + 0x458);
          }
          else {
            puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
          }
          uVar4 = *puVar9;
          uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x318) + 0x50c);
          uVar7 = FUN_14479d2ce(lVar6);
          local_c0 = (undefined8 *)0x0;
          local_b8 = 0;
          FUN_1446efa72(&local_c0,0,3,0x10);
          puVar9 = local_c0;
          local_b8 = 3;
          *local_c0 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar5 == 0) {
            LOCK();
            UNLOCK();
            lVar5 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          local_c0[2] = lVar5;
          *local_c0 = &PTR_FUN_14b976130;
          local_c0[3] = 0;
          FUN_14485c47a(local_c0 + 3,uVar7);
          puVar9[4] = param_1;
          local_a8 = 0;
          local_a0 = 0;
          FUN_14487d8d8(&local_a8,&local_c0);
          local_68 = 1;
          local_c8 = local_b0;
          local_b0[0] = 0;
          local_ac = 0xbf800000;
          FUN_1406f4044(uVar4,(longlong *)(param_1 + 0x338),&local_a8,uVar1);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
          FUN_1449db362(&local_c0);
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x338) = 0;
        *(float *)(param_1 + 0x330) =
             (float)(dVar2 + (double)*(float *)(*(longlong *)(param_1 + 0x318) + 0x50c));
        cVar3 = FUN_145ec36f4(param_1,0);
        if (cVar3 != '\0') {
          if (*(int *)(param_1 + 0x2f0) != 0) {
            lVar6 = 0x1a;
            uVar8 = 0;
            do {
              *(float *)(*(longlong *)(param_1 + 0x2e8) + lVar6 * 4) =
                   *(float *)(param_1 + 0x328) * *(float *)(*(longlong *)(param_1 + 0x318) + 0x504)
                   + *(float *)(*(longlong *)(param_1 + 0x308) + uVar8 * 4);
              uVar8 = uVar8 + 1;
              lVar6 = lVar6 + 0x1c;
            } while (uVar8 != *(uint *)(param_1 + 0x2f0));
          }
          local_c8 = *(undefined2 **)(param_1 + 0x290);
          FUN_140e0c48e(param_1,param_1 + 0x2e8,param_1 + 0x2f8,1);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_e8);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ec36f4 FUN_145ec36f4 body=668 status=ok
// SIG undefined FUN_145ec36f4(void)

ulonglong FUN_145ec36f4(longlong param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  undefined8 ****ppppuVar8;
  undefined4 uVar9;
  float fVar10;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [40];
  undefined4 local_98;
  undefined1 local_90 [40];
  undefined4 local_68;
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar4 = *(longlong *)(param_1 + 0x318);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x328) = 0;
  }
  else {
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*(byte *)(lVar4 + 0x4e0) - 1 < 3) {
      lVar4 = FUN_144873cc0(lVar4 + 0x4e8);
      if (lVar4 == 0) goto LAB_145ec3751;
      cVar2 = *(char *)(*(longlong *)(param_1 + 0x318) + 0x500);
      if (cVar2 == '\x02') {
        cVar2 = FUN_144729dda(param_1 + 0x290);
        if (cVar2 == '\0') {
LAB_145ec383f:
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_14479d2ce(param_1 + 0x290);
          uVar5 = FUN_1404281d6(uVar5);
        }
      }
      else {
        if (cVar2 == '\x01') {
          lVar6 = param_1 + 0x298;
        }
        else {
          if (cVar2 != '\0') goto LAB_145ec383f;
          lVar6 = param_1 + 0x290;
        }
        uVar5 = FUN_14479d2ce(lVar6);
      }
      local_c0[0] = 0;
      local_98 = 0;
      FUN_1456bb102(local_c0,uVar5);
      local_90[0] = 0;
      local_68 = 0;
      FUN_144750e81(local_60,lVar4,local_c0);
      uVar9 = FUN_144a7b41a(local_60,0);
      *(undefined4 *)(param_1 + 0x328) = uVar9;
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
      if (pcVar1 != (code *)0x0) {
        ppppuVar8 = local_60;
        if (0x18 < local_48) {
          ppppuVar8 = (undefined8 ****)local_60[0];
        }
        (*pcVar1)(ppppuVar8);
      }
      if (0x18 < local_48) {
        FUN_1400020a8(local_60[0]);
      }
      FUN_144a5ac3a(local_90);
      FUN_144a5ac3a(local_c0);
      if ((*(byte *)(*(longlong *)(param_1 + 0x318) + 0x4e0) & 0xfe) == 2) {
        fVar10 = 1.0;
        if (*(float *)(param_1 + 0x328) <= 1.0) {
          fVar10 = *(float *)(param_1 + 0x328);
        }
        *(float *)(param_1 + 0x328) = fVar10;
        if (*(char *)(*(longlong *)(param_1 + 0x318) + 0x4e0) == '\x03') {
          fVar10 = 1.0 - fVar10;
        }
        *(float *)(param_1 + 0x328) = fVar10;
      }
      goto LAB_145ec3751;
    }
    if (*(byte *)(lVar4 + 0x4e0) != 0) goto LAB_145ec3751;
    if (param_2 == '\0') {
      *(float *)(param_1 + 0x328) = *(float *)(param_1 + 0x328) + 1.0;
      if (*(int *)(lVar4 + 0x508) < 1) {
        iVar3 = -1;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x32c) + 1;
      }
      *(int *)(param_1 + 0x32c) = iVar3;
      goto LAB_145ec3751;
    }
    fVar10 = *(float *)(param_1 + 0x328) + -1.0;
    *(float *)(param_1 + 0x328) = fVar10;
    iVar3 = -1;
    if (0 < *(int *)(lVar4 + 0x508)) {
      iVar3 = *(int *)(param_1 + 0x32c) + -1;
    }
    *(int *)(param_1 + 0x32c) = iVar3;
    if (0.0 <= fVar10) goto LAB_145ec3751;
    *(undefined4 *)(param_1 + 0x328) = 0;
    *(uint *)(param_1 + 0x32c) = -(uint)(*(int *)(lVar4 + 0x508) < 1);
  }
  uVar7 = 0;
LAB_145ec3751:
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 145ec3992 FUN_145ec3992 body=92 status=ok
// SIG undefined FUN_145ec3992(void)

void FUN_145ec3992(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8465c8) {
    FUN_144b3d300(&DAT_14c8465c8);
    if (DAT_14c8465c8 == -1) {
      FUN_145ec39ee(&DAT_14c8465bc);
      _Init_thread_footer(&DAT_14c8465c8);
      return;
    }
  }
  return;
}



// FUNCTION 145ec39ee FUN_145ec39ee body=267 status=ok
// SIG undefined FUN_145ec39ee(void)

int * FUN_145ec39ee(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong local_48 [2];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[2] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  FUN_1402160b8(&local_38);
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  FUN_14021300e(local_48,0x7b2,1,1);
  iVar3 = DAT_14c87d780;
  if (DAT_14c87d780 == 0) {
    FUN_1412e3d1e(local_48);
    uVar2 = FUN_145ec3afa(local_48,0x10);
    LOCK();
    if (DAT_14c87d784 == 0) {
      DAT_14c87d784 = (int)uVar2;
    }
    UNLOCK();
    LOCK();
    iVar3 = DAT_14c87d780;
    if (DAT_14c87d780 == 0) {
      DAT_14c87d780 = (int)((ulonglong)uVar2 >> 0x20);
      iVar3 = 0;
    }
    UNLOCK();
  }
  local_38 = local_38 - local_48[0];
  *param_1 = ((int)(SUB168(SEXT816(local_38) * ZEXT816(0xd6bf94d5e57a42bd),8) >> 0x17) -
             ((int)(local_38 / -0x6769800000000000) + (int)(local_38 >> 0x3f))) + -0x5fee6600;
  LOCK();
  UNLOCK();
  iVar1 = DAT_14c87d784 + 1;
  param_1[1] = DAT_14c87d784;
  DAT_14c87d784 = iVar1;
  param_1[2] = iVar3;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145ec3afa FUN_145ec3afa body=46 status=ok
// SIG undefined FUN_145ec3afa(void)

void FUN_145ec3afa(undefined8 param_1,undefined8 param_2)

{
  FUN_140ab9477(param_1,param_2,0,&DAT_149e18840,0xc0,&LAB_142760e05);
  return;
}



// FUNCTION 145ec3b28 FUN_145ec3b28 body=71 status=ok
// SIG undefined FUN_145ec3b28(void)

void FUN_145ec3b28(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145ec3b70();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_14707feb6();
      return;
    }
  }
  return;
}



// FUNCTION 145ec3b70 FUN_145ec3b70 body=132 status=ok
// SIG undefined FUN_145ec3b70(void)

void FUN_145ec3b70(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ec3bf4 FUN_145ec3bf4 body=199 status=ok
// SIG undefined FUN_145ec3bf4(void)

void FUN_145ec3bf4(longlong param_1)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c760da4 != 0) {
    uVar3 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar5 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    do {
      uVar6 = (ulonglong)uVar5;
      uVar1 = *(undefined8 *)(param_1 + 2000 + uVar6 * 8);
      uVar4 = FUN_144a90336(uVar1,0);
      (&DAT_14ca813c0)[uVar6] = uVar4;
      FUN_14039771a(uVar1,&local_58,0);
      lVar7 = uVar6 * 0x10;
      *(undefined4 *)(&DAT_14ca81400 + lVar7) = local_58;
      *(undefined4 *)(lVar7 + 0x14ca81404) = uStack_54;
      *(undefined4 *)(&DAT_14ca81408 + lVar7) = uStack_50;
      *(undefined4 *)(lVar7 + 0x14ca8140c) = uStack_4c;
      bVar2 = (byte)uVar5 & 0x1f;
      uVar3 = (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2) & uVar3;
      if (uVar3 == 0) {
        uVar5 = 0x20;
      }
      else {
        uVar5 = 0;
        if (uVar3 != 0) {
          for (; (uVar3 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
      }
    } while (uVar3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ec3cc4 FUN_145ec3cc4 body=194 status=ok
// SIG undefined FUN_145ec3cc4(void)

undefined8 * FUN_145ec3cc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14007ca06();
  FUN_140da6ea8(param_1,uVar1);
  *param_1 = &PTR_FUN_14a89b090;
  FUN_1446f470e(&local_20,L"Streaming",1);
  param_1[6] = local_20;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfc;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3ba3d70a3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x20000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x40a00000;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 3;
  *(undefined4 *)(param_1 + 10) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x40a00000;
  *(undefined4 *)(param_1 + 0xb) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 10;
  param_1[0xc] = 0x3f80000000000078;
  *(undefined4 *)(param_1 + 0xd) = 5;
  *(uint *)((longlong)param_1 + 0x6c) = (*(uint *)((longlong)param_1 + 0x6c) & 0xfffffffc) + 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec3d92 FUN_145ec3d92 body=191 status=ok
// SIG undefined FUN_145ec3d92(void)

undefined8 * FUN_145ec3d92(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a9b3f10;
  FUN_1446f470e(&local_20,L"RootComponent",1);
  uVar1 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x39] = lVar2;
  *(undefined1 *)(lVar2 + 0x1fb) = 0;
  *(byte *)(param_1[0x39] + 0x1fa) = *(byte *)(param_1[0x39] + 0x1fa) | 2;
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) & 0xbf;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec3e5e FUN_145ec3e5e body=192 status=ok
// SIG undefined FUN_145ec3e5e(void)

undefined8 * FUN_145ec3e5e(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14aa90940;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9e) = 0;
  param_1[0x14] = 0;
  FUN_14030806e(param_1 + 6,L"r.SkeletalMesh.MinLodQualityLevel",L"ViewDistanceQuality");
  return param_1;
}



// FUNCTION 145ec3f1e FUN_145ec3f1e body=53 status=ok
// SIG undefined FUN_145ec3f1e(void)

void FUN_145ec3f1e(longlong *param_1)

{
  FUN_145ec3f54();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ec3f54 FUN_145ec3f54 body=352 status=ok
// SIG undefined FUN_145ec3f54(void)

void FUN_145ec3f54(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      plVar2 = *(longlong **)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,1);
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ec40c0 FUN_145ec40c0 body=192 status=ok
// SIG undefined FUN_145ec40c0(void)

undefined8 * FUN_145ec40c0(undefined8 *param_1)

{
  FUN_14595f48a();
  *param_1 = &PTR_FUN_14b573d90;
  param_1[5] = &PTR_FUN_14b5740c0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  return param_1;
}



// FUNCTION 145ec4180 FUN_145ec4180 body=68 status=ok
// SIG undefined FUN_145ec4180(void)

void FUN_145ec4180(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x420);
  memset(_Dst,0,0x420);
  FUN_145ec41c4(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 145ec41c4 FUN_145ec41c4 body=104 status=ok
// SIG undefined FUN_145ec41c4(void)

undefined8 * FUN_145ec41c4(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8d7800;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_1415823c8(param_1 + 0x1a);
  FUN_1415823c8(param_1 + 0x4d);
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x404) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  return param_1;
}



// FUNCTION 145ec422c FUN_145ec422c body=68 status=ok
// SIG undefined FUN_145ec422c(void)

void FUN_145ec422c(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x118);
  memset(_Dst,0,0x118);
  FUN_145ec4270(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 145ec4270 FUN_145ec4270 body=135 status=ok
// SIG undefined FUN_145ec4270(void)

undefined8 * FUN_145ec4270(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8a2a20;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_144a5dc74(param_1 + 0x19);
  FUN_144a5dc74(param_1 + 0x1b);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0x44a0000044200000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x40800000;
  *(undefined1 *)(param_1 + 0x22) = 1;
  return param_1;
}



// FUNCTION 145ec42f8 FUN_145ec42f8 body=467 status=ok
// SIG undefined FUN_145ec42f8(void)

undefined8 * FUN_145ec42f8(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = FUN_14001cc68(0xe08,0x10);
  FUN_145ec44cc(uVar4,param_3);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar7 = 0;
  local_58 = lVar2;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_60);
    iVar7 = *(int *)(param_1 + 0x30);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar1;
  if ((iStack_4c != iVar7) || (local_58 != lVar2)) {
    do {
      lVar3 = *local_88;
      lVar6 = (longlong)iStack_6c * 0x20;
      *(undefined8 *)(*(longlong *)(lVar3 + 8 + lVar6) + 0x78) = uVar4;
      local_98 = *(undefined8 *)(lVar3 + 8 + lVar6);
      local_90 = *(longlong *)(lVar3 + 0x10 + lVar6);
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
        UNLOCK();
      }
      FUN_14980a646(uVar4,lVar3 + lVar6,&local_98);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (((iStack_6c != iVar7) || (local_78 != lVar2)) || (local_88 != plVar1));
  }
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    FUN_14980afa0(plVar1);
    FUN_14980b0e4(plVar1);
  }
  *param_2 = uVar4;
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[1] = &DAT_100000001;
  *puVar5 = &PTR_LAB_14be8c4d0;
  puVar5[2] = uVar4;
  param_2[1] = puVar5;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145ec44cc FUN_145ec44cc body=562 status=ok
// SIG undefined FUN_145ec44cc(void)

undefined8 * FUN_145ec44cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *_Dst;
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  undefined8 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_14be8bc70;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  _Dst = param_1 + 3;
  memset(_Dst,0,0xd98);
  FUN_145ec47b4(_Dst);
  param_1[3] = &PTR_FUN_14be8bd80;
  *(undefined4 *)(param_1 + 0x1b6) = 0x3f800000;
  param_1[0x1bb] = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b8] = 0;
  *(undefined8 *)((longlong)param_1 + 0xde4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdec) = 0;
  param_1[0x1bf] = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  local_89 = 0;
  local_8a = 0;
  local_8b = 0;
  local_8c = 0;
  if (DAT_14c872ce0 != 0) {
    local_98 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"SonyController",L"bDSTouchEvents",&local_89);
    local_98 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"SonyController",L"bDSTouchAxisButtons",&local_8a);
    local_98 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"SonyController",L"bDSMouseEvents",&local_8b);
    local_98 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"SonyController",L"bDSMotionEvents",&local_8c);
  }
  uVar5 = local_89;
  uVar4 = local_8a;
  uVar3 = local_8b;
  uVar2 = local_8c;
  local_78 = 0;
  local_68 = &PTR_LAB_14be8c430;
  local_88 = &LAB_145f8e63c;
  local_60 = param_1;
  FUN_1415826cc();
  *(undefined1 *)((longlong)param_1 + 0xb41) = uVar5;
  *(undefined1 *)((longlong)param_1 + 0xb42) = uVar4;
  *(undefined1 *)((longlong)param_1 + 0xb43) = uVar3;
  *(undefined1 *)((longlong)param_1 + 0xb44) = uVar2;
  piVar8 = (int *)((longlong)param_1 + 0x334);
  uVar7 = 0;
  do {
    if (*piVar8 == 0) {
      iVar6 = FUN_145ec4700(_Dst,(int)uVar7 + 1,uVar7 & 0xffffffff);
      if (-1 < iVar6) {
        FUN_144b4ae10(iVar6,*(undefined4 *)(param_1 + 0x1b5));
      }
    }
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 0x9e;
  } while (uVar7 != 4);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec4700 FUN_145ec4700 body=179 status=ok
// SIG undefined FUN_145ec4700(void)

undefined4 FUN_145ec4700(longlong param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = param_1 + (longlong)param_3 * 0x278;
  if (*(int *)(lVar1 + 0x31c) == 0) {
    memset((void *)(lVar1 + 0x100),0,0x278);
    *(int *)(lVar1 + 0x310) = param_3;
    *(undefined4 *)(lVar1 + 0x314) = param_2;
    *(undefined4 *)(lVar1 + 0x31c) = 1;
    *(undefined4 *)(lVar1 + 0x300) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0x30c) = 0xffffffff;
    uVar2 = FUN_144b4aeb0(param_3 + 1,0,0,0);
    *(undefined4 *)(lVar1 + 0x318) = uVar2;
    *(undefined4 *)(param_1 + 0xae0 + (longlong)param_3 * 4) = 2;
    *(undefined1 *)(lVar1 + 0x328) = 0;
  }
  else {
    *(int *)(lVar1 + 0x31c) = *(int *)(lVar1 + 0x31c) + 1;
  }
  return *(undefined4 *)(lVar1 + 0x318);
}



// FUNCTION 145ec47b4 FUN_145ec47b4 body=289 status=ok
// SIG undefined FUN_145ec47b4(void)

undefined8 * FUN_145ec47b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  byte local_69;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145ec48d6();
  *param_1 = &PTR_FUN_14be8bdd0;
  lVar3 = 0xb7c;
  do {
    FUN_1446ddc76(&local_68,"PS5TriggerEffect",1);
    *(undefined8 *)((longlong)param_1 + lVar3 + -0xc) = local_68;
    *(undefined2 *)((longlong)param_1 + lVar3 + -4) = 0x300;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + 0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar3) = 0;
    ((undefined8 *)((longlong)param_1 + lVar3))[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar3 + 0x2e) = 0;
    lVar3 = lVar3 + 0x44;
  } while (lVar3 != 0xd9c);
  *(undefined4 *)(param_1 + 0x1b2) = 3;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  local_69 = 1;
  local_78 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"SonyController",L"bAllowBluetoothConnectionOnPC",&local_69);
  local_58 = CONCAT44(local_58._4_4_,(uint)local_69);
  FUN_144b4af50(&local_68);
  uVar2 = FUN_14158257e();
  *(undefined4 *)(param_1 + 0x1b2) = uVar2;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec48d6 FUN_145ec48d6 body=786 status=ok
// SIG undefined FUN_145ec48d6(void)

undefined8 * FUN_145ec48d6(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  *param_1 = &PTR_FUN_14be8be60;
  memset(param_1 + 2,0,0xec);
  *(undefined1 (*) [16])((longlong)param_1 + 0x354) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((longlong)param_1 + 0x5cc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((longlong)param_1 + 0x844) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((longlong)param_1 + 0xabc) = (undefined1  [16])0x0;
  param_1[0x15e] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x15f) = 0x3f800000;
  *(undefined1 (*) [16])((longlong)param_1 + 0xafc) = (undefined1  [16])0x0;
  *(undefined8 *)((longlong)param_1 + 0xb0c) = 0;
  *(undefined1 (*) [16])(param_1 + 0x163) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x167) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x169) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x16b) = (undefined1  [16])0x0;
  param_1[0x16d] = 0;
  param_1[0x166] = 0x3dcccccd3e4ccccd;
  FUN_14153841e(DAT_14c872ce0,L"/Script/Engine.InputSettings",L"InitialButtonRepeatDelay",
                param_1 + 0x166,&DAT_14c872ae8);
  puVar2 = &DAT_14c872ae8;
  FUN_14153841e(DAT_14c872ce0,L"/Script/Engine.InputSettings",L"ButtonRepeatDelay",
                (longlong)param_1 + 0xb34,&DAT_14c872ae8);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar3 = (ulonglong)puVar2 & 0xffffffff00000000;
  (**(code **)(*DAT_14c8407a8 + 0x18))
            (DAT_14c8407a8,L"sony.NumMissedMotionUpdatesToCombine",0,
             L"How many missed motion updates to combine into the latest one when sending motion events from a PS controller. No more than 64 missed updates will be stored."
             ,uVar3);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0x18))
            (DAT_14c8407a8,L"sony.UnifyMotionSpace",1,
             L"If set to non-zero, acceleration and rotation rate will all be in the same coordinate space. 0 for legacy behaviour. 1 (default as of 5.5) will match Unreal\'s coordinate space (left-handed, z-up, etc). 2 will be right-handed by swapping x and y. Non-zero also forces rotation rate units to be radians/s and acceleration units to be g."
             ,uVar3 & 0xffffffff00000000);
  memset(param_1 + 0x20,0,0x9e0);
  *(undefined4 *)(param_1 + 0x165) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb2c) = 0;
  uVar1 = DAT_14c967820;
  *(undefined8 *)((longlong)param_1 + 0x14) = DAT_14c967820;
  *(undefined8 *)((longlong)param_1 + 0x1c) = DAT_14c967878;
  *(undefined8 *)((longlong)param_1 + 0x24) = DAT_14c967880;
  *(undefined8 *)((longlong)param_1 + 0x2c) = DAT_14c967868;
  *(undefined8 *)((longlong)param_1 + 0x34) = DAT_14c967898;
  *(undefined8 *)((longlong)param_1 + 0x3c) = DAT_14c9678b0;
  *(undefined8 *)((longlong)param_1 + 0x44) = DAT_14c9678a0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = DAT_14c9678a8;
  *(undefined8 *)((longlong)param_1 + 0x54) = DAT_14c967888;
  *(undefined8 *)((longlong)param_1 + 0x5c) = DAT_14c967890;
  *(undefined8 *)((longlong)param_1 + 100) = DAT_14c967858;
  *(undefined8 *)((longlong)param_1 + 0x6c) = DAT_14c967860;
  *(undefined8 *)((longlong)param_1 + 0x74) = DAT_14c967850;
  *(undefined8 *)((longlong)param_1 + 0x7c) = DAT_14c967840;
  *(undefined8 *)((longlong)param_1 + 0x84) = DAT_14c967838;
  *(undefined8 *)((longlong)param_1 + 0x8c) = DAT_14c967848;
  *(undefined8 *)((longlong)param_1 + 0x94) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x9c) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xa4) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xac) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xb4) = DAT_14c967870;
  *(undefined8 *)((longlong)param_1 + 0xbc) = DAT_14c9678c8;
  *(undefined8 *)((longlong)param_1 + 0xc4) = DAT_14c9678d0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = DAT_14c9678b8;
  *(undefined8 *)((longlong)param_1 + 0xd4) = DAT_14c9678c0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = DAT_14c9678e8;
  *(undefined8 *)((longlong)param_1 + 0xe4) = DAT_14c9678f0;
  *(undefined8 *)((longlong)param_1 + 0xec) = DAT_14c9678d8;
  *(undefined8 *)((longlong)param_1 + 0xf4) = DAT_14c9678e0;
  *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb04) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x161) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb0c) = 0xffffffff;
  return param_1;
}



// FUNCTION 145ec4be8 FUN_145ec4be8 body=134 status=ok
// SIG undefined FUN_145ec4be8(void)

void FUN_145ec4be8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14009d2a0();
  local_30 = *(undefined2 *)(lVar1 + 0x126);
  local_2e = 0;
  local_38 = &PTR_FUN_14a4995a0;
  FUN_145ec4c70(param_4);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_145ec4d14(param_1 + -0xf8,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec4c70 FUN_145ec4c70 body=163 status=ok
// SIG undefined FUN_145ec4c70(void)

void FUN_145ec4c70(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined2 local_20;
  undefined1 local_1e;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1e = *(undefined1 *)(param_2 + 10);
  local_20 = *(undefined2 *)(param_2 + 8);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) | 3;
  *puVar1 = &PTR_FUN_14a4995a0;
  *(undefined2 *)(puVar1 + 1) = local_20;
  *(undefined1 *)((longlong)puVar1 + 10) = local_1e;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec4d14 FUN_145ec4d14 body=1121 status=ok
// SIG undefined FUN_145ec4d14(void)

void FUN_145ec4d14(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 uVar3;
  uint *puVar4;
  undefined7 uVar5;
  bool bVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  undefined1 auStack_3c8 [32];
  undefined1 local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined8 local_398;
  longlong local_390;
  longlong local_388;
  longlong local_380;
  longlong local_378;
  uint local_36c;
  undefined **local_368;
  undefined2 local_360;
  uint local_35c;
  undefined1 local_358;
  undefined2 local_354;
  uint local_350;
  uint local_34c;
  undefined1 local_348;
  uint local_340;
  longlong local_338;
  undefined1 local_330;
  uint local_328;
  longlong local_320;
  undefined1 local_318;
  undefined1 local_310;
  undefined1 local_308 [120];
  undefined1 local_290 [144];
  undefined **local_200 [19];
  char local_168;
  undefined **local_158 [2];
  char local_148;
  char local_138;
  char local_120;
  char local_108;
  char local_f0;
  char local_d8;
  char local_c0;
  char local_a8;
  undefined1 local_98 [64];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  local_398 = param_4;
  lVar2 = FUN_14009d2a0();
  lVar7 = param_1 + 0x1c;
  if (*(char *)(param_1 + 0x78) == '\0') {
    lVar7 = param_1;
  }
  if (*(int *)(lVar7 + 0x60) < 1) {
    lVar7 = param_1 + 4;
    if (*(char *)(param_1 + 0x90) != '\0') {
      lVar7 = param_1 + 0x34;
    }
    bVar6 = 0 < *(int *)(lVar7 + 0x60);
  }
  else {
    bVar6 = true;
  }
  FUN_145ec5176((ulonglong)*(ushort *)(param_3 + 0x30) * 0x128 +
                *(longlong *)(*(longlong *)(param_2 + 0x548) + 8),local_98);
  puVar4 = &local_36c;
  FUN_14029898a(param_1,puVar4);
  if ((longlong)local_50 != 0) {
    puVar9 = local_98;
    if (local_58 != (undefined1 *)0x0) {
      puVar9 = local_58;
    }
    lVar7 = 0;
    do {
      uVar1 = *(uint *)(puVar9 + lVar7);
      if (local_36c != 0) {
        puVar4 = (uint *)(ulonglong)*(uint *)(puVar9 + lVar7);
        uVar1 = FUN_144a78877(local_36c,puVar4);
      }
      local_36c = uVar1;
      lVar7 = lVar7 + 8;
    } while ((longlong)local_50 * 8 != lVar7);
  }
  uVar1 = *(uint *)(param_1 + 0x140);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    if (*(int *)(param_1 + 0x1a8) == 0) {
      uVar3 = *(undefined1 *)(param_1 + 0x1c8);
    }
  }
  if ((uVar1 & 2) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
    if (*(int *)(param_1 + 0x2c0) == 0) {
      uVar10 = *(undefined1 *)(param_1 + 0x2e0);
    }
  }
  if ((uVar1 & 4) == 0) {
    local_3a8 = 0;
  }
  else {
    local_3a8 = 1;
    if (*(int *)(param_1 + 0x3d8) == 0) {
      local_3a8 = *(undefined1 *)(param_1 + 0x3f8);
    }
  }
  if ((uVar1 & 8) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
    if (*(int *)(param_1 + 0x4f0) == 0) {
      uVar8 = *(undefined1 *)(param_1 + 0x510);
    }
  }
  if ((uVar1 & 0x10) == 0) {
    local_39c = 0;
  }
  else {
    uVar5 = (undefined7)((ulonglong)param_4 >> 8);
    local_39c = (undefined4)CONCAT71(uVar5,1);
    if (*(int *)(param_1 + 0x608) == 0) {
      local_39c = (undefined4)CONCAT71(uVar5,*(undefined1 *)(param_1 + 0x628));
    }
  }
  if ((uVar1 & 0x20) == 0) {
    local_3a0 = 0;
  }
  else {
    uVar5 = (undefined7)((ulonglong)puVar4 >> 8);
    local_3a0 = (undefined4)CONCAT71(uVar5,1);
    if (*(int *)(param_1 + 0x720) == 0) {
      local_3a0 = (undefined4)CONCAT71(uVar5,*(undefined1 *)(param_1 + 0x740));
    }
  }
  local_360 = *(undefined2 *)(lVar2 + 0x52);
  local_354 = *(undefined2 *)(lVar2 + 0x124);
  local_350 = (uint)CONCAT12(bVar6,*(undefined2 *)(lVar2 + 0xf0));
  local_338 = param_1 + 0x148;
  local_340 = (uint)CONCAT12(uVar3,*(undefined2 *)(lVar2 + 0x90));
  local_320 = param_1 + 0x260;
  local_358 = 1;
  local_348 = 1;
  local_330 = 1;
  local_328 = (uint)CONCAT12(uVar10,*(undefined2 *)(lVar2 + 0x92));
  local_318 = 1;
  local_310 = 0;
  local_368 = &PTR_FUN_14a499450;
  local_378 = param_1 + 0x378;
  local_35c = local_36c;
  local_34c = local_36c;
  FUN_145ec5264(&local_368,local_308,*(undefined2 *)(lVar2 + 0x94));
  local_380 = param_1 + 0x490;
  local_3a8 = uVar8;
  FUN_145ec5398(local_308,local_290,*(undefined2 *)(lVar2 + 0x96));
  local_388 = param_1 + 0x5a8;
  local_3a8 = (undefined1)local_39c;
  FUN_145ec543c(local_290,local_200,*(undefined2 *)(lVar2 + 0x98));
  local_390 = param_1 + 0x6c0;
  local_3a8 = (undefined1)local_3a0;
  FUN_145ec55b0(local_200,local_158,*(undefined2 *)(lVar2 + 0x9a));
  FUN_145ec575e(local_398,local_158);
  local_158[0] = &PTR_FUN_14a4990e0;
  if (local_a8 == '\x01') {
    local_a8 = '\0';
  }
  if (local_c0 == '\x01') {
    local_c0 = '\0';
  }
  if (local_d8 == '\x01') {
    local_d8 = '\0';
  }
  if (local_f0 == '\x01') {
    local_f0 = '\0';
  }
  if (local_108 == '\x01') {
    local_108 = '\0';
  }
  if (local_120 == '\x01') {
    local_120 = '\0';
  }
  if (local_138 == '\x01') {
    local_138 = '\0';
  }
  if (local_148 == '\x01') {
    local_148 = '\0';
  }
  local_200[0] = &PTR_FUN_14a499100;
  if (local_168 == '\x01') {
    local_168 = '\0';
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ec5176 FUN_145ec5176 body=106 status=ok
// SIG undefined FUN_145ec5176(void)

undefined8 FUN_145ec5176(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x100);
  local_18 = *(longlong *)(param_1 + 0x108);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_145ec51e2(param_2,*(undefined4 *)(param_1 + 0x110),&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec51e2 FUN_145ec51e2 body=130 status=ok
// SIG undefined FUN_145ec51e2(void)

longlong FUN_145ec51e2(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0x800000000;
  if ((*(longlong *)(*param_3 + 0x28) == 0) || (*(int *)(*param_3 + 0x34) == -1)) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1400a382a();
  }
  FUN_1400a31b8(param_1,param_2,uVar4);
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return param_1;
}



// FUNCTION 145ec5264 FUN_145ec5264 body=148 status=ok
// SIG undefined FUN_145ec5264(void)

undefined8 *
FUN_145ec5264(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined2 *local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &local_30;
  local_2e = param_5;
  local_28 = *param_4;
  local_20 = 1;
  local_40 = param_1 + 0x40;
  local_48 = param_1 + 0x28;
  uVar1 = *(undefined1 *)(param_1 + 0x58);
  local_30 = param_3;
  FUN_145ec52fa(param_2 + 1,param_1 + 8,param_1 + 0x14,param_1 + 0x18);
  *(undefined1 *)(param_2 + 0xe) = uVar1;
  *param_2 = &PTR_FUN_14a499470;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec52fa FUN_145ec52fa body=157 status=ok
// SIG undefined FUN_145ec52fa(void)

void FUN_145ec52fa(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  char cVar1;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 4);
  *(char *)(param_1 + 4) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  }
  param_1[6] = *param_3;
  *(undefined4 *)(param_1 + 8) = *param_4;
  cVar1 = *(char *)(param_4 + 2);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 10) = param_4[1];
  }
  *(undefined4 *)(param_1 + 0x10) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_6 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_7 + 2);
  }
  return;
}



// FUNCTION 145ec5398 FUN_145ec5398 body=162 status=ok
// SIG undefined FUN_145ec5398(void)

undefined8 *
FUN_145ec5398(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined2 *local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = &local_38;
  local_36 = param_5;
  local_30 = *param_4;
  local_28 = 1;
  local_48 = param_1 + 0x58;
  local_50 = param_1 + 0x40;
  local_58 = param_1 + 0x28;
  uVar1 = *(undefined1 *)(param_1 + 0x70);
  local_38 = param_3;
  FUN_145ec54f0(param_2 + 1,param_1 + 8,param_1 + 0x14,param_1 + 0x18);
  *(undefined1 *)(param_2 + 0x11) = uVar1;
  *param_2 = &PTR_FUN_14a499490;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec543c FUN_145ec543c body=178 status=ok
// SIG undefined FUN_145ec543c(void)

undefined8 *
FUN_145ec543c(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined2 *local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = &local_40;
  local_3e = param_5;
  local_38 = *param_4;
  local_30 = 1;
  local_50 = param_1 + 0x70;
  local_58 = param_1 + 0x58;
  local_60 = param_1 + 0x40;
  local_68 = param_1 + 0x28;
  uVar1 = *(undefined1 *)(param_1 + 0x88);
  local_40 = param_3;
  FUN_145ec5674(param_2 + 1,param_1 + 8,param_1 + 0x14,param_1 + 0x18);
  *(undefined1 *)(param_2 + 0x14) = uVar1;
  *param_2 = &PTR_FUN_14a4994b0;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec54f0 FUN_145ec54f0 body=191 status=ok
// SIG undefined FUN_145ec54f0(void)

void FUN_145ec54f0(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  char cVar1;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 4);
  *(char *)(param_1 + 4) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  }
  param_1[6] = *param_3;
  *(undefined4 *)(param_1 + 8) = *param_4;
  cVar1 = *(char *)(param_4 + 2);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 10) = param_4[1];
  }
  *(undefined4 *)(param_1 + 0x10) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_6 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_7 + 2);
  }
  *(undefined4 *)(param_1 + 0x34) = *param_8;
  cVar1 = *(char *)(param_8 + 4);
  *(char *)(param_1 + 0x3c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_8 + 2);
  }
  return;
}



// FUNCTION 145ec55b0 FUN_145ec55b0 body=194 status=ok
// SIG undefined FUN_145ec55b0(void)

undefined8 *
FUN_145ec55b0(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined2 *local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = &local_48;
  local_46 = param_5;
  local_40 = *param_4;
  local_38 = 1;
  local_58 = param_1 + 0x88;
  local_60 = param_1 + 0x70;
  local_68 = param_1 + 0x58;
  local_70 = param_1 + 0x40;
  local_78 = param_1 + 0x28;
  uVar1 = *(undefined1 *)(param_1 + 0xa0);
  local_48 = param_3;
  FUN_145ec59be(param_2 + 1,param_1 + 8,param_1 + 0x14,param_1 + 0x18);
  *(undefined1 *)(param_2 + 0x17) = uVar1;
  *param_2 = &PTR_FUN_14a4994d0;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec5674 FUN_145ec5674 body=234 status=ok
// SIG undefined FUN_145ec5674(void)

void FUN_145ec5674(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9)

{
  char cVar1;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 4);
  *(char *)(param_1 + 4) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  }
  param_1[6] = *param_3;
  *(undefined4 *)(param_1 + 8) = *param_4;
  cVar1 = *(char *)(param_4 + 2);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 10) = param_4[1];
  }
  *(undefined4 *)(param_1 + 0x10) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_6 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_7 + 2);
  }
  *(undefined4 *)(param_1 + 0x34) = *param_8;
  cVar1 = *(char *)(param_8 + 4);
  *(char *)(param_1 + 0x3c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_8 + 2);
  }
  *(undefined4 *)(param_1 + 0x40) = *param_9;
  cVar1 = *(char *)(param_9 + 4);
  *(char *)(param_1 + 0x48) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_9 + 2);
  }
  return;
}



// FUNCTION 145ec575e FUN_145ec575e body=259 status=ok
// SIG undefined FUN_145ec575e(void)

void FUN_145ec575e(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_145ec5862(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec5862 FUN_145ec5862 body=104 status=ok
// SIG undefined FUN_145ec5862(void)

void FUN_145ec5862(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0xc0,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4990e0;
  FUN_145ec58ca(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0xb8);
  *param_1 = &PTR_FUN_14a4994d0;
  return;
}



// FUNCTION 145ec58ca FUN_145ec58ca body=244 status=ok
// SIG undefined FUN_145ec58ca(void)

void FUN_145ec58ca(undefined2 *param_1,undefined2 *param_2)

{
  char cVar1;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 4);
  *(char *)(param_1 + 4) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  }
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x18);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  cVar1 = *(char *)(param_2 + 0x24);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  cVar1 = *(char *)(param_2 + 0x30);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  cVar1 = *(char *)(param_2 + 0x3c);
  *(char *)(param_1 + 0x3c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  cVar1 = *(char *)(param_2 + 0x48);
  *(char *)(param_1 + 0x48) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  }
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  cVar1 = *(char *)(param_2 + 0x54);
  *(char *)(param_1 + 0x54) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  }
  return;
}



// FUNCTION 145ec59be FUN_145ec59be body=277 status=ok
// SIG undefined FUN_145ec59be(void)

void FUN_145ec59be(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9,undefined4 *param_10)

{
  char cVar1;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 4);
  *(char *)(param_1 + 4) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  }
  param_1[6] = *param_3;
  *(undefined4 *)(param_1 + 8) = *param_4;
  cVar1 = *(char *)(param_4 + 2);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 10) = param_4[1];
  }
  *(undefined4 *)(param_1 + 0x10) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_6 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_7 + 2);
  }
  *(undefined4 *)(param_1 + 0x34) = *param_8;
  cVar1 = *(char *)(param_8 + 4);
  *(char *)(param_1 + 0x3c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_8 + 2);
  }
  *(undefined4 *)(param_1 + 0x40) = *param_9;
  cVar1 = *(char *)(param_9 + 4);
  *(char *)(param_1 + 0x48) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_9 + 2);
  }
  *(undefined4 *)(param_1 + 0x4c) = *param_10;
  cVar1 = *(char *)(param_10 + 4);
  *(char *)(param_1 + 0x54) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_10 + 2);
  }
  return;
}



// FUNCTION 145ec5ad4 FUN_145ec5ad4 body=366 status=ok
// SIG undefined FUN_145ec5ad4(void)

void FUN_145ec5ad4(undefined8 *param_1)

{
  FUN_145ec5c42(param_1 + 0x18b);
  param_1[0x183] = &PTR_FUN_14a4c17d0;
  if (param_1[0x189] != 0) {
    FUN_1400020a8();
  }
  param_1[0x158] = &PTR_FUN_14a4c17c0;
  if (param_1[0x181] != 0) {
    FUN_1400020a8();
  }
  param_1[0x12d] = &PTR_FUN_14a4c17b0;
  if (param_1[0x156] != 0) {
    FUN_1400020a8();
  }
  param_1[0x102] = &PTR_FUN_14a4c17a0;
  if (param_1[299] != 0) {
    FUN_1400020a8();
  }
  param_1[0xd7] = &PTR_FUN_14a4c1790;
  if (param_1[0x100] != 0) {
    FUN_1400020a8();
  }
  param_1[0xac] = &PTR_FUN_14a4c1780;
  if (param_1[0xd5] != 0) {
    FUN_1400020a8();
  }
  param_1[0x81] = &PTR_FUN_14a4c1770;
  if (param_1[0xaa] != 0) {
    FUN_1400020a8();
  }
  param_1[0x56] = &PTR_FUN_14a4c1760;
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2b] = &PTR_FUN_14a4c1760;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a4c1750;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145ec5c42 FUN_145ec5c42 body=103 status=ok
// SIG undefined FUN_145ec5c42(void)

void FUN_145ec5c42(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4c17e0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_145ec5caa(param_1 + 0x2b);
  *param_1 = &PTR_FUN_14a4c17f0;
  if (param_1[0x29] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ec5caa FUN_145ec5caa body=53 status=ok
// SIG undefined FUN_145ec5caa(void)

void FUN_145ec5caa(longlong *param_1)

{
  FUN_145ec5ce0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ec5ce0 FUN_145ec5ce0 body=88 status=ok
// SIG undefined FUN_145ec5ce0(void)

void FUN_145ec5ce0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145ec5d38 FUN_145ec5d38 body=40 status=ok
// SIG undefined FUN_145ec5d38(void)

undefined8 FUN_145ec5d38(undefined8 param_1,int param_2)

{
  FUN_145ec5d60();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ec5d60 FUN_145ec5d60 body=432 status=ok
// SIG undefined FUN_145ec5d60(void)

void FUN_145ec5d60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aae8d10;
  if (*(char *)(param_1 + 0x55) == '\x01') {
    *(undefined1 *)(param_1 + 0x55) = 0;
  }
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  param_1[0x3d] = &DAT_14a176f00;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  param_1[0x3d] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x3e);
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_145ec5f10(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145ec5f46(param_1 + 8);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ec5f10 FUN_145ec5f10 body=53 status=ok
// SIG undefined FUN_145ec5f10(void)

void FUN_145ec5f10(longlong *param_1)

{
  FUN_145ec5fd4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ec5f46 FUN_145ec5f46 body=53 status=ok
// SIG undefined FUN_145ec5f46(void)

void FUN_145ec5f46(longlong *param_1)

{
  FUN_145ec5f7c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ec5f7c FUN_145ec5f7c body=88 status=ok
// SIG undefined FUN_145ec5f7c(void)

void FUN_145ec5f7c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145ec5fd4 FUN_145ec5fd4 body=350 status=ok
// SIG undefined FUN_145ec5fd4(void)

void FUN_145ec5fd4(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ec613c FUN_145ec613c body=292 status=ok
// SIG undefined FUN_145ec613c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ec613c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca39788) {
    FUN_144b3d300(&DAT_14ca39788);
    if (DAT_14ca39788 == -1) {
      FUN_145ec63aa();
      FUN_145ec6260();
      FUN_140db5666(&DAT_14ca396e0,0,&DAT_14ca39678,L"FRayTracingDebugTraversalCS",
                    L"/Engine/Private/RayTracing/RayTracingDebugTraversal.usf",
                    L"RayTracingDebugTraversalCS",5,4,FUN_1472b1f12,FUN_1472b1eb2,&LAB_145826dce,
                    &LAB_1472b1eae,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca3ea78);
      _DAT_14ca396e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f65ba0);
      _Init_thread_footer(&DAT_14ca39788);
    }
  }
  return &DAT_14ca396e0;
}



// FUNCTION 145ec6260 FUN_145ec6260 body=205 status=ok
// SIG undefined FUN_145ec6260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ec6260(void)

{
  if ((DAT_14ca396df & 2) == 0) {
    DAT_14ca396df = DAT_14ca396df | 2;
    _DAT_14ca39680 = L"FRayTracingDebugTraversalCS";
    _DAT_14ca39698 = FUN_146826540;
    _DAT_14ca396a0 = FUN_146825d77;
    _DAT_14ca396a8 = FUN_146825fd6;
    _DAT_14ca396b0 = FUN_1407e02ea;
    _DAT_14ca396b8 = FUN_146826273;
    _DAT_14ca39690 = FUN_1472b1e80;
    _DAT_14ca396d0 = 0xffffffff000000e0;
    _DAT_14ca396d8 = 8;
    DAT_14ca396dc = 0;
    _DAT_14ca396c0 = &LAB_1472b1eaa;
    FUN_145ec632e();
    FUN_1407e00cc(&DAT_14ca39678);
    return;
  }
  return;
}



// FUNCTION 145ec632e FUN_145ec632e body=123 status=ok
// SIG undefined FUN_145ec632e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ec632e(void)

{
  _DAT_14ca3f620 = L"BASE";
  DAT_14ca3f64a = 4;
  _DAT_14ca3f628 = FUN_140b35ae4();
  _DAT_14ca3f630 = DAT_14ca39688;
  _DAT_14ca3f638 = &LAB_14682652b;
  DAT_14ca39688 = &DAT_14ca3f620;
  DAT_14ca396dd = DAT_14ca396dd + '\x01';
  _DAT_14ca3f640 = 0x100000000;
  if (*(char *)(_DAT_14ca3f628 + 100) != '\0') {
    DAT_14ca396de = DAT_14ca396de + '\x01';
  }
  return;
}



// FUNCTION 145ec63aa FUN_145ec63aa body=261 status=ok
// SIG undefined FUN_145ec63aa(void)

void FUN_145ec63aa(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3eaf8) {
    FUN_144b3d300(&DAT_14ca3eaf8);
    if (DAT_14ca3eaf8 == -1) {
      FUN_145ec64b0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x14b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3ea78,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6f6f6);
      _Init_thread_footer(&DAT_14ca3eaf8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec64b0 FUN_145ec64b0 body=226 status=ok
// SIG undefined FUN_145ec64b0(void)

longlong * FUN_145ec64b0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146301716;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec6594 FUN_145ec6594 body=138 status=ok
// SIG undefined FUN_145ec6594(void)

code * FUN_145ec6594(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TraversalTriangleScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6c00000157;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472bc964;
}



// FUNCTION 145ec661e FUN_145ec661e body=144 status=ok
// SIG undefined FUN_145ec661e(void)

code * FUN_145ec661e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1448cb8bc();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"NaniteRasterUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FNaniteRasterUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3000000150;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146301938;
}



// FUNCTION 145ec66ae FUN_145ec66ae body=146 status=ok
// SIG undefined FUN_145ec66ae(void)

code * FUN_145ec66ae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ec6740();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TraversalStatistics";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RaytracingTraversalStatistics::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000152;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca3eb00;
  return FUN_146301826;
}



// FUNCTION 145ec6740 FUN_145ec6740 body=261 status=ok
// SIG undefined FUN_145ec6740(void)

void FUN_145ec6740(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3eb80) {
    FUN_144b3d300(&DAT_14ca3eb80);
    if (DAT_14ca3eb80 == -1) {
      FUN_145ec6846(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x12;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3eb00,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6f702);
      _Init_thread_footer(&DAT_14ca3eb80);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec6846 FUN_145ec6846 body=232 status=ok
// SIG undefined FUN_145ec6846(void)

longlong * FUN_145ec6846(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar12 = FUN_1463018b6;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145ec6934 FUN_145ec6934 body=26 status=ok
// SIG undefined FUN_145ec6934(void)

void FUN_145ec6934(undefined8 param_1)

{
  FUN_140893b6e();
  FUN_145ec694e(param_1);
  return;
}



// FUNCTION 145ec694e FUN_145ec694e body=132 status=ok
// SIG undefined FUN_145ec694e(void)

void FUN_145ec694e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))();
  if (lVar1 == 0) {
    FUN_145ec69dc(local_20,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_140457ffc(&DAT_14c9647a0,param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_14485c47a(param_1 + 0x88,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec69dc FUN_145ec69dc body=239 status=ok
// SIG undefined FUN_145ec69dc(void)

undefined8 FUN_145ec69dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b4329d0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_146153ac6;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec6acc FUN_145ec6acc body=1624 status=ok
// SIG undefined FUN_145ec6acc(void)

void FUN_145ec6acc(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  plVar3 = param_1 + 0xe6;
  cVar4 = FUN_144729dda(plVar3);
  if (cVar4 == '\0') {
LAB_145ec6d0f:
    cVar4 = '\0';
    lVar10 = 0;
    lVar11 = 0;
  }
  else {
    uVar7 = FUN_14479d2ce(plVar3);
    lVar8 = FUN_1410ac07e(uVar7);
    if (lVar8 == 0) goto LAB_145ec6d0f;
    cVar4 = FUN_144729dda(plVar3);
    if (cVar4 == '\0') goto LAB_145ec6d0f;
    if (*(char *)((longlong)param_1 + 0x741) == '\x01') {
      uVar7 = FUN_14479d2ce(plVar3);
      lVar11 = param_1[0xe4];
      if (lVar11 == 0) {
        uVar9 = FUN_141030812();
        lVar11 = FUN_14477b664(uVar9);
        param_1[0xe4] = lVar11;
      }
      plVar1 = param_1 + 0xe3;
      if (((param_1[0xe5] == 0) && (lVar11 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar11 + 0xb8);
        if (plVar2 == (longlong *)0x0) {
LAB_145ec7107:
          lVar11 = 0;
        }
        else {
          cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
          if (cVar4 == '\0') goto LAB_145ec7107;
          uVar9 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar11 = FUN_144aff482(uVar9,plVar1);
        }
        param_1[0xe5] = lVar11;
      }
      lVar11 = FUN_141582ac8(uVar7,4);
      uVar7 = FUN_14479d2ce(plVar3);
      lVar10 = param_1[0xe4];
      if (lVar10 == 0) {
        uVar9 = FUN_141030812();
        lVar10 = FUN_14477b664(uVar9);
        param_1[0xe4] = lVar10;
      }
      if (((param_1[0xe5] == 0) && (lVar10 != 0)) && (*plVar1 != 0)) {
        plVar3 = *(longlong **)(lVar10 + 0xb8);
        if (plVar3 == (longlong *)0x0) {
LAB_145ec710f:
          lVar10 = 0;
        }
        else {
          cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
          if (cVar4 == '\0') goto LAB_145ec710f;
          uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar10 = FUN_144aff482(uVar9,plVar1);
        }
        param_1[0xe5] = lVar10;
      }
      uVar9 = 5;
LAB_145ec6dbf:
      lVar10 = FUN_141582ac8(uVar7,uVar9);
      uVar12 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    }
    else {
      if (((char)param_1[0xe8] == '\x01') && (*(char *)((longlong)param_1 + 0x742) == '\x01')) {
        uVar7 = FUN_14479d2ce(plVar3);
        lVar11 = param_1[0xe4];
        if (lVar11 == 0) {
          uVar9 = FUN_141030812();
          lVar11 = FUN_14477b664(uVar9);
          param_1[0xe4] = lVar11;
        }
        plVar1 = param_1 + 0xe3;
        if (((param_1[0xe5] == 0) && (lVar11 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar11 + 0xb8);
          if (plVar2 == (longlong *)0x0) {
LAB_145ec7117:
            lVar11 = 0;
          }
          else {
            cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
            if (cVar4 == '\0') goto LAB_145ec7117;
            uVar9 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar11 = FUN_144aff482(uVar9,plVar1);
          }
          param_1[0xe5] = lVar11;
        }
        lVar11 = FUN_141582ac8(uVar7,2);
        uVar7 = FUN_14479d2ce(plVar3);
        lVar10 = param_1[0xe4];
        if (lVar10 == 0) {
          uVar9 = FUN_141030812();
          lVar10 = FUN_14477b664(uVar9);
          param_1[0xe4] = lVar10;
        }
        if (((param_1[0xe5] == 0) && (lVar10 != 0)) && (*plVar1 != 0)) {
          plVar3 = *(longlong **)(lVar10 + 0xb8);
          if (plVar3 == (longlong *)0x0) {
LAB_145ec711f:
            lVar10 = 0;
          }
          else {
            cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
            if (cVar4 == '\0') goto LAB_145ec711f;
            uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar10 = FUN_144aff482(uVar9,plVar1);
          }
          param_1[0xe5] = lVar10;
        }
        uVar9 = 3;
        goto LAB_145ec6dbf;
      }
      uVar7 = FUN_14479d2ce(plVar3);
      lVar11 = param_1[0xe4];
      if (lVar11 == 0) {
        uVar9 = FUN_141030812();
        lVar11 = FUN_14477b664(uVar9);
        param_1[0xe4] = lVar11;
      }
      plVar1 = param_1 + 0xe3;
      lVar10 = param_1[0xe5];
      if (((lVar10 == 0) && (lVar10 = 0, lVar11 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar11 + 0xb8);
        if (plVar2 == (longlong *)0x0) {
LAB_145ec6d1c:
          lVar10 = 0;
        }
        else {
          cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
          if (cVar4 == '\0') goto LAB_145ec6d1c;
          uVar9 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar10 = FUN_144aff482(uVar9,plVar1);
        }
        param_1[0xe5] = lVar10;
      }
      lVar11 = FUN_141582ac8(uVar7,0,lVar10);
      uVar7 = FUN_14479d2ce(plVar3);
      lVar10 = param_1[0xe4];
      if (lVar10 == 0) {
        uVar9 = FUN_141030812();
        lVar10 = FUN_14477b664(uVar9);
        param_1[0xe4] = lVar10;
      }
      if (((param_1[0xe5] == 0) && (lVar10 != 0)) && (*plVar1 != 0)) {
        plVar3 = *(longlong **)(lVar10 + 0xb8);
        if (plVar3 == (longlong *)0x0) {
LAB_145ec70ff:
          lVar10 = 0;
        }
        else {
          cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
          if (cVar4 == '\0') goto LAB_145ec70ff;
          uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar10 = FUN_144aff482(uVar9,plVar1);
        }
        param_1[0xe5] = lVar10;
      }
      lVar10 = FUN_141582ac8(uVar7,1);
      uVar12 = 0;
    }
    cVar4 = (char)uVar12;
    FUN_14045627c(param_1,uVar12 & 0xffffffff,1);
    if (lVar11 != 0) {
      uVar7 = FUN_14479d2ce(param_1 + 0xe7);
      FUN_14016d8b0(lVar11,*(undefined8 *)(lVar8 + 0xe8),uVar7);
    }
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      uVar7 = FUN_14479d2ce(param_1 + 0xe7);
      FUN_14016d8b0(lVar10,*(undefined8 *)(lVar8 + 0xe8),uVar7);
    }
  }
  lVar8 = param_1[0xcc];
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
  }
  else if (lVar8 == 0) goto LAB_145ec6cf9;
  iVar5 = FUN_141582a92(lVar8,DAT_14cbcd028);
  iVar6 = FUN_141582a92(lVar8,DAT_14cbcd030);
  if (iVar5 != -1) {
    if ((lVar11 != 0 && cVar4 == '\x01') && ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0)) {
      FUN_14472da24(lVar11,DAT_14cbcd038,0);
    }
    (**(code **)(*param_1 + 0x638))(param_1,iVar5,lVar11);
  }
  if (iVar6 != -1) {
    if ((lVar10 != 0 && cVar4 == '\x01') && ((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0)) {
      FUN_14472da24(lVar10,DAT_14cbcd038,0);
    }
    (**(code **)(*param_1 + 0x638))(param_1,iVar6,lVar10);
  }
  if (((cVar4 != '\0') && (param_1[0xe9] != 0)) && ((*(uint *)(param_1[0xe9] + 8) >> 0x1e & 1) == 0)
     ) {
    FUN_147d73772();
  }
LAB_145ec6cf9:
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 145ec7124 FUN_145ec7124 body=304 status=ok
// SIG undefined FUN_145ec7124(void)

void FUN_145ec7124(void)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = 0x100000000;
  uStack_48 = &DAT_14c948b70;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  if (DAT_14c948b88 == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = DAT_14c948b88;
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = &DAT_14c948b60;
  if ((iStack_3c != iVar2) || (uStack_48 != &DAT_14c948b70)) {
    do {
      plVar1 = *(longlong **)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      if (plVar1 != (longlong *)0x0) {
        FUN_145ec7255(*plVar1,(int)plVar1[1]);
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (((iStack_5c != iVar2) ||
             ((undefined4 *)CONCAT44(uStack_64,uStack_68) != &DAT_14c948b70)) ||
            (local_78 != &DAT_14c948b60));
  }
  FUN_145ec72a2(&DAT_14c948b60,0);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec7255 FUN_145ec7255 body=77 status=ok
// SIG undefined FUN_145ec7255(void)

void FUN_145ec7255(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ec72a2 FUN_145ec72a2 body=107 status=ok
// SIG undefined FUN_145ec72a2(void)

void FUN_145ec72a2(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145ec72f1:
      FUN_145c1c926(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_14601f42e(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145ec72f1;
  FUN_145ec730e(param_1);
  FUN_145c1c926(param_1,param_2);
  return;
}



// FUNCTION 145ec730e FUN_145ec730e body=325 status=ok
// SIG undefined FUN_145ec730e(void)

void FUN_145ec730e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ec7454 FUN_145ec7454 body=55 status=ok
// SIG undefined FUN_145ec7454(void)

void FUN_145ec7454(longlong *param_1)

{
  FUN_145ec748c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ec748c FUN_145ec748c body=351 status=ok
// SIG undefined FUN_145ec748c(void)

void FUN_145ec748c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145ec75f2 FUN_145ec75f2 body=138 status=ok
// SIG undefined FUN_145ec75f2(void)

code * FUN_145ec75f2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SubsurfaceSampler2";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000247;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fe386;
}



// FUNCTION 145ec767c FUN_145ec767c body=138 status=ok
// SIG undefined FUN_145ec767c(void)

code * FUN_145ec767c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HistoryUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb80000023e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472a0a4c;
}



// FUNCTION 145ec7706 FUN_145ec7706 body=53 status=ok
// SIG undefined FUN_145ec7706(void)

void FUN_145ec7706(longlong param_1)

{
  FUN_145ec773b(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 145ec773b FUN_145ec773b body=49 status=ok
// SIG undefined FUN_145ec773b(void)

void FUN_145ec773b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ec776c FUN_145ec776c body=40 status=ok
// SIG undefined FUN_145ec776c(void)

undefined8 FUN_145ec776c(undefined8 param_1,int param_2)

{
  FUN_145ec7794();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ec7794 FUN_145ec7794 body=164 status=ok
// SIG undefined FUN_145ec7794(void)

void FUN_145ec7794(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14acce470;
  param_1[6] = &PTR_FUN_14acce750;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_1457c6628(param_1 + 0x35);
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x32];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1457c665e(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ec7838 FUN_145ec7838 body=40 status=ok
// SIG undefined FUN_145ec7838(void)

undefined8 FUN_145ec7838(undefined8 param_1,int param_2)

{
  FUN_145ec7860();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ec7860 FUN_145ec7860 body=164 status=ok
// SIG undefined FUN_145ec7860(void)

void FUN_145ec7860(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b947e40;
  plVar3 = (longlong *)param_1[0x1e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x1a];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x12];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140cbdade(param_1);
  return;
}



// FUNCTION 145ec7904 FUN_145ec7904 body=72 status=ok
// SIG undefined FUN_145ec7904(void)

void FUN_145ec7904(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145ec794c(param_1,iVar1);
  }
  FUN_145b05562((longlong)iVar1 * 0x80 + *param_1,param_2);
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 145ec794c FUN_145ec794c body=132 status=ok
// SIG undefined FUN_145ec794c(void)

void FUN_145ec794c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 7,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ec79d0 FUN_145ec79d0 body=29 status=ok
// SIG undefined FUN_145ec79d0(void)

void FUN_145ec79d0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145ec79ee FUN_145ec79ee body=73 status=ok
// SIG undefined FUN_145ec79ee(void)

undefined8 * FUN_145ec79ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9d2c30;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ec7a40 FUN_145ec7a40 body=195 status=ok
// SIG undefined FUN_145ec7a40(void)

undefined8 * FUN_145ec7a40(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1410832cc();
  *param_1 = &PTR_FUN_14bc477e0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_14020fad6(param_1 + 0xc,L"DisplayText");
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_14020fad6(param_1 + 0xe,L"VariantsPayload");
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_140056680(local_40,L"DependencyUids");
  FUN_1410835a0(param_1 + 0x10,param_1 + 5,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec7b04 FUN_145ec7b04 body=365 status=ok
// SIG undefined FUN_145ec7b04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ec7b04(void)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_178 [36];
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined2 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined1 *local_f4;
  undefined1 *puStack_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_178;
  _DAT_14cb026b0 = 0xffffffff;
  _DAT_14cb026b4 = 0x105;
  DAT_14cb026b6 = 0;
  DAT_14cb026a8 = &PTR_FUN_14aa6acf0;
  DAT_14cb026b8 = 0;
  _DAT_14cb026c0 = 0;
  local_118 = 0x3ef5c28f3f99999a;
  uStack_110 = 0x3e8f5c293ed1eb85;
  local_108 = &DAT_3f8000003f800000;
  uStack_100 = 0x3e99999a3ebd70a4;
  local_f8 = 0x3f800000;
  local_f4 = &DAT_3f8000003f800000;
  puStack_ec = &DAT_3f8000003f800000;
  local_e4 = 0x3da3d70a3f800000;
  local_dc = 0x3f6e147b;
  local_d8 = 0x3f4000003fc66666;
  uStack_d0 = 0x3f59999a3fa66666;
  local_12c = 0;
  local_154 = 0x3ead32613f691bc5;
  uStack_14c = 0x3f8000003e8b295f;
  local_144 = 0x3db632943f800000;
  uStack_13c = 0x3f8000003d93a699;
  local_134 = 0x3dcccccd402b2fed;
  local_c8 = 0x3f800000;
  uStack_c4 = 0x3f800000;
  uStack_c0 = 0x3f800000;
  uStack_bc = 0x3f800000;
  local_128 = 0x3f800000;
  uStack_124 = 0x3f800000;
  uStack_120 = 0x3f800000;
  uStack_11c = 0x3f800000;
  FUN_141583733(&local_154);
  memcpy(local_b8,&local_154,0x9c);
  uVar2 = _DAT_14cb026c0;
  lVar4 = (longlong)DAT_14cb026c0;
  uVar3 = DAT_14cb026c0 + 1;
  _DAT_14cb026c0 = CONCAT44(DAT_14cb026c4,uVar3);
  if (DAT_14cb026c4 < uVar3) {
    FUN_145ec7c72(&DAT_14cb026b8,uVar2 & 0xffffffff);
  }
  lVar1 = DAT_14cb026b8;
  memcpy((void *)(DAT_14cb026b8 + lVar4 * 0xa8),local_b8,0xa0);
  *(undefined8 *)(lVar1 + 0xa0 + lVar4 * 0xa8) = 0;
  if ((local_18 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec7c72 FUN_145ec7c72 body=146 status=ok
// SIG undefined FUN_145ec7c72(void)

void FUN_145ec7c72(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0xa8,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xa8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ec7d04 FUN_145ec7d04 body=187 status=ok
// SIG undefined FUN_145ec7d04(void)

void FUN_145ec7d04(longlong param_1,longlong param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_145ec7dbf(*(undefined4 *)(param_1 + 0x50));
  FUN_145ec7dbf(*(undefined4 *)(param_1 + 0x54),param_2 + 4,param_3 + 1);
  FUN_145ec7dbf(*(undefined4 *)(param_1 + 0x58),param_2 + 8,param_3 + 2);
  fVar1 = param_3[2];
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = fVar2;
  if (fVar2 <= fVar3) {
    fVar4 = fVar3;
  }
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  if (1.0 < fVar4) {
    fVar5 = 1.0 / fVar4;
    *param_3 = fVar2 * fVar5;
    param_3[1] = fVar3 * fVar5;
    param_3[2] = fVar1 * fVar5;
    param_3[3] = fVar5 * param_3[3];
    fVar4 = fVar4 * *(float *)(param_1 + 0x3c);
    if (50.0 <= fVar4) {
      fVar4 = 50.0;
    }
    if (fVar4 <= 0.1) {
      fVar4 = 0.1;
    }
    *param_4 = fVar4;
  }
  return;
}



// FUNCTION 145ec7dbf FUN_145ec7dbf body=141 status=ok
// SIG undefined FUN_145ec7dbf(void)

void FUN_145ec7dbf(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = param_1 * param_1;
  *param_2 = param_1 * 0.906 + 4e-05;
  *param_3 = param_1 * 0.7279 +
             fVar1 * -2.039 +
             fVar1 * 8.332 * param_1 + fVar1 * fVar1 * 10.39 * param_1 + fVar1 * fVar1 * -15.18 +
             -0.0014;
  return;
}



// FUNCTION 145ec7e4c FUN_145ec7e4c body=331 status=ok
// SIG undefined FUN_145ec7e4c(void)

void FUN_145ec7e4c(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (float)param_1[8];
  local_2c = (float)param_1[7] * local_38;
  local_30 = (float)param_1[6] * local_38;
  local_34 = (float)param_1[5] * local_38;
  local_38 = local_38 * (float)param_1[4];
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_14158378d(&local_28);
  local_28 = local_28 * 0.6;
  local_24 = local_24 * 0.6;
  local_20 = local_20 * 0.6;
  fVar2 = local_28;
  if (local_28 <= local_24) {
    fVar2 = local_24;
  }
  if (fVar2 <= local_20) {
    fVar2 = local_20;
  }
  param_1[8] = fVar2;
  fVar3 = 1.0 / fVar2;
  fVar1 = local_1c * 0.6 * fVar3;
  param_1[4] = fVar3 * local_28;
  param_1[5] = local_24 * fVar3;
  param_1[6] = local_20 * fVar3;
  param_1[7] = fVar1;
  if (fVar2 < 0.1) {
    fVar2 = fVar2 / 0.1;
    param_1[4] = fVar2 * fVar3 * local_28;
    param_1[5] = local_24 * fVar3 * fVar2;
    param_1[6] = local_20 * fVar3 * fVar2;
    param_1[7] = fVar1 * fVar2;
    param_1[8] = 0x3dcccccd;
  }
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  param_1[9] = (float)param_1[9] / 0.3;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec7f98 FUN_145ec7f98 body=180 status=ok
// SIG undefined FUN_145ec7f98(void)

longlong FUN_145ec7f98(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ec804e();
  if (*(int *)(param_2 + 0xc) == -1) {
    lVar1 = FUN_14479d2ce(param_1 + 0x838);
    if (lVar1 != 0) {
      FUN_1458ea720(lVar1 + 0xd50,&local_38,param_3);
      FUN_140bc2be4(param_2,&local_38);
      if ((local_2c != -1) && (local_38 != 0)) {
        FUN_1400020a8();
      }
    }
    if (*(int *)(param_2 + 0xc) == -1) goto LAB_145ec8022;
  }
  FUN_145ec80ac(param_1 + -0x3d0,param_2);
LAB_145ec8022:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec804e FUN_145ec804e body=94 status=ok
// SIG undefined FUN_145ec804e(void)

undefined8 * FUN_145ec804e(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  void *_Src;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if ((int)uVar1 < 2) {
    *param_2 = 0;
    param_2[1] = 0xffffffff00000000;
  }
  else {
    *param_2 = 0;
    _Src = *(void **)(param_1 + 0x30);
    *(uint *)(param_2 + 1) = uVar1;
    FUN_1446dd670(param_2,(ulonglong)uVar1,0);
    memcpy((void *)*param_2,_Src,(ulonglong)uVar1 * 2);
  }
  return param_2;
}



// FUNCTION 145ec80ac FUN_145ec80ac body=347 status=ok
// SIG undefined FUN_145ec80ac(void)

void FUN_145ec80ac(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  int local_90;
  undefined1 local_88 [56];
  longlong local_50;
  int local_48;
  undefined4 local_44;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = FUN_14479d2ce(param_1 + 0xc08);
  if (lVar6 != 0) {
    FUN_141173a88(&local_40,param_2,0);
    if (local_40 != 0) {
      local_50 = 0;
      iVar3 = *(int *)(local_40 + 0x30);
      uVar4 = *(undefined8 *)(local_40 + 0x28);
      local_48 = iVar3;
      if (iVar3 == 0) {
        local_44 = 0;
      }
      else {
        FUN_14099a736(&local_50,iVar3,0);
        FUN_14099a4c3(local_50,uVar4,iVar3);
      }
      cVar5 = FUN_1415839cc(&local_50,lVar6);
      if (cVar5 != '\0') {
        local_98 = local_50;
        local_90 = local_48;
        FUN_1409e3b90(local_88);
        FUN_1409e3c80(local_88,param_2,0);
        FUN_141022a1a(local_88);
      }
      FUN_14028f404(local_50,local_48);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec8208 FUN_145ec8208 body=158 status=ok
// SIG undefined FUN_145ec8208(void)

bool FUN_145ec8208(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec82a8 FUN_145ec82a8 body=226 status=ok
// SIG undefined FUN_145ec82a8(void)

longlong * FUN_145ec82a8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14647236e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec8390 FUN_145ec8390 body=132 status=ok
// SIG undefined FUN_145ec8390(void)

undefined1 * FUN_145ec8390(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bIsValid";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ec838c;
}



// FUNCTION 145ec8414 FUN_145ec8414 body=138 status=ok
// SIG undefined FUN_145ec8414(void)

code * FUN_145ec8414(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FacingMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481b57ac;
}



// FUNCTION 145ec849e FUN_145ec849e body=284 status=ok
// SIG undefined FUN_145ec849e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ec849e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dd5a8) {
    FUN_144b3d300(&DAT_14c9dd5a8);
    if (DAT_14c9dd5a8 == -1) {
      FUN_145ec85ba();
      FUN_140db5666(&DAT_14c9dd500,0,&DAT_14c9dd498,L"FHdrCustomResolveVS",
                    L"/Engine/Private/HdrCustomResolveShaders.usf",L"HdrCustomResolveVS",0,1,
                    FUN_147198fde,FUN_147198fb6,&LAB_147198fb2,&LAB_147198fae,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14c9dd500 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c8cdd4);
      _Init_thread_footer(&DAT_14c9dd5a8);
    }
  }
  return &DAT_14c9dd500;
}



// FUNCTION 145ec85ba FUN_145ec85ba body=206 status=ok
// SIG undefined FUN_145ec85ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ec85ba(void)

{
  if ((DAT_14c9dd4ff & 2) == 0) {
    DAT_14c9dd4ff = DAT_14c9dd4ff | 2;
    _DAT_14c9dd4a0 = L"FHdrCustomResolveVS";
    _DAT_14c9dd4b8 = FUN_146826540;
    _DAT_14c9dd4c0 = FUN_146825d77;
    _DAT_14c9dd4c8 = FUN_146825fd6;
    _DAT_14c9dd4d0 = FUN_1407e02ea;
    _DAT_14c9dd4d8 = FUN_146826273;
    _DAT_14c9dd4b0 = FUN_147198f80;
    _DAT_14c9dd4f0 = 0xffffffff000000e0;
    _DAT_14c9dd4f8 = 8;
    DAT_14c9dd4fc = 0;
    _DAT_14c9dd4e0 = &LAB_147198faa;
    FUN_145ec8688();
    FUN_1407e00cc(&DAT_14c9dd498);
  }
  return &DAT_14c9dd498;
}


