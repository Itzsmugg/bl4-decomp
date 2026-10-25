// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1496b866a FUN_1496b866a body=153 status=ok
// SIG undefined FUN_1496b866a(void)

void FUN_1496b866a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = param_1[0x20];
  if (*(char *)(lVar1 + 0xa8) == '\0') {
    fVar3 = 0.0;
    fVar4 = 1.0;
    fVar5 = 0.005;
    lVar2 = 4;
  }
  else {
    fVar3 = *(float *)(lVar1 + 0xb4);
    fVar4 = *(float *)(lVar1 + 0xb8);
    fVar5 = (fVar4 - fVar3) * 0.0025;
    lVar2 = 8;
  }
  fVar5 = *(float *)(lVar1 + 0xa8 + lVar2) - fVar5;
  if (fVar4 <= fVar5) {
    fVar5 = fVar4;
  }
  if (fVar5 <= fVar3) {
    fVar5 = fVar3;
  }
  *(float *)(lVar1 + 0xa8 + lVar2) = fVar5;
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x20]);
                    /* WARNING: Could not recover jumptable at 0x0001496b86e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x470))(param_1);
  return;
}



// FUNCTION 1496b8704 FUN_1496b8704 body=195 status=ok
// SIG undefined FUN_1496b8704(void)

double * FUN_1496b8704(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (*(int *)(param_1 + 0x3b8) == -1) {
    FUN_1484429f6(param_1,param_2);
  }
  else {
    dVar1 = *(double *)(param_1 + 0x348);
    dVar2 = *(double *)(param_1 + 0x350);
    dVar3 = *(double *)(param_1 + 0x358);
    dVar4 = (double)(**(code **)(*(longlong *)(param_1 + -0x98) + 0x478))(param_1 + -0x98);
    *param_2 = dVar1 - dVar4;
    param_2[1] = dVar2 - dVar4;
    param_2[2] = dVar3 - dVar4;
    param_2[3] = dVar1 + dVar4;
    param_2[4] = dVar2 + dVar4;
    param_2[5] = dVar3 + dVar4;
    *(undefined1 *)(param_2 + 6) = 1;
  }
  return param_2;
}



// FUNCTION 1496b87e6 FUN_1496b87e6 body=39 status=ok
// SIG undefined FUN_1496b87e6(void)

void FUN_1496b87e6(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x410))();
                    /* WARNING: Could not recover jumptable at 0x0001496b880a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xac0))(plVar1,param_2,*(code **)(*plVar1 + 0xac0));
  return;
}



// FUNCTION 1496b880e FUN_1496b880e body=129 status=ok
// SIG undefined FUN_1496b880e(void)

void FUN_1496b880e(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0xa18);
  if (lVar1 != 0) {
    if (param_2 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x3f800000;
    }
    FUN_1446f470e(&local_38,L"FlatShading",1);
    FUN_14472da24(lVar1,local_38,uVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496b8890 FUN_1496b8890 body=131 status=ok
// SIG undefined FUN_1496b8890(void)

void FUN_1496b8890(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(*(longlong *)(param_1 + 0xa10) + 0xac) != 4) &&
     (lVar1 = *(longlong *)(param_1 + 0xa18), lVar1 != 0)) {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    FUN_1446f470e(&local_40,L"Color",1);
    FUN_144a9d3f0(lVar1,local_40,&local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496b8914 FUN_1496b8914 body=131 status=ok
// SIG undefined FUN_1496b8914(void)

void FUN_1496b8914(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(*(longlong *)(param_1 + 0xa10) + 0xac) == 4) &&
     (lVar1 = *(longlong *)(param_1 + 0xa18), lVar1 != 0)) {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    FUN_1446f470e(&local_40,L"Color",1);
    FUN_144a9d3f0(lVar1,local_40,&local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496b8998 FUN_1496b8998 body=107 status=ok
// SIG undefined FUN_1496b8998(void)

void FUN_1496b8998(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0xa18);
  if (lVar1 != 0) {
    FUN_1446f470e(&local_28,L"ImageTexture",1);
    FUN_14016d8b0(lVar1,local_28,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496b8a04 FUN_1496b8a04 body=119 status=ok
// SIG undefined FUN_1496b8a04(void)

void FUN_1496b8a04(longlong param_1,double param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0xa18);
  if (lVar1 != 0) {
    FUN_1446f470e(&local_38,L"Opacity",1);
    FUN_14472da24(lVar1,local_38,(float)param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496b8a7c FUN_1496b8a7c body=180 status=ok
// SIG undefined FUN_1496b8a7c(void)

void FUN_1496b8a7c(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = param_1[0x142];
  if (*(int *)(lVar3 + 0xac) != 4) {
    return;
  }
  uVar1 = *(undefined8 *)(lVar3 + 0xd0);
  uVar2 = (**(code **)(*param_1 + 0x2c8))();
  lVar3 = FUN_148557bb8(uVar2,lVar3 + 0xd8,(int)uVar1,param_2);
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x143] = lVar3;
    if (lVar3 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(lVar3);
    param_1[0x143] = lVar3;
  }
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x410))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001496b8b0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0xb30))(plVar4,param_1[0x143],*(code **)(*plVar4 + 0xb30));
  return;
}



// FUNCTION 1496b8b30 FUN_1496b8b30 body=219 status=ok
// SIG undefined FUN_1496b8b30(void)

void FUN_1496b8b30(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if (*(int *)(param_1[0x142] + 0xac) == 8) {
    cVar1 = FUN_144729dda(&local_20);
    if (cVar1 == '\0') {
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x410))(param_1);
      (**(code **)(*plVar4 + 0xb38))(plVar4);
      param_1[0x143] = 0;
    }
    else {
      uVar2 = FUN_14479d2ce(&local_20);
      lVar3 = FUN_14090ceee(uVar2,param_1,0);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      param_1[0x143] = lVar3;
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x410))(param_1);
      (**(code **)(*plVar4 + 0xb30))(plVar4,param_1[0x143]);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496b8c0c FUN_1496b8c0c body=796 status=ok
// SIG undefined FUN_1496b8c0c(void)

void FUN_1496b8c0c(longlong *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 unaff_RBX;
  undefined4 uVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  switch(param_2) {
  case 0:
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x410))(param_1);
    lVar6 = *plVar5;
    (**(code **)(lVar6 + 0xb38))(plVar5);
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x410))(param_1);
    lVar7 = FUN_1485062e8(param_1[0x14]);
    uVar8 = CONCAT71((int7)((ulonglong)lVar6 >> 8),*(undefined1 *)(lVar7 + 0x2d6)) &
            0xffffffffffffff40;
    (**(code **)(*plVar5 + 0xb10))(plVar5,CONCAT71((int7)(uVar8 >> 8),(byte)uVar8 >> 6));
    param_1[0x143] = 0;
    goto LAB_1496b8e3a;
  case 1:
    uVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar6 = FUN_148557b44(uVar4);
    goto LAB_1496b8d7a;
  case 2:
    uVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
    uVar3 = 0;
    break;
  case 3:
    uVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
    uVar3 = 1;
    break;
  case 4:
    lVar6 = param_1[0x142];
    uVar1 = *(undefined1 *)(lVar6 + 0xe8);
    uVar4 = *(undefined8 *)(lVar6 + 0xd0);
    uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar6 = FUN_148557bb8(uVar3,lVar6 + 0xd8,(int)uVar4,
                          CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
    goto LAB_1496b8d8d;
  case 5:
    uVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
    uVar3 = 2;
    break;
  case 6:
    uVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar6 = FUN_14855788a(uVar4,0);
    goto LAB_1496b8d8d;
  case 7:
    uVar4 = *(undefined8 *)(param_1[0x142] + 200);
    uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar6 = FUN_148557d82(uVar3,uVar4);
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar6);
    }
    param_1[0x143] = lVar6;
    lVar7 = *(longlong *)(param_1[0x142] + 200);
    if (lVar7 != 0) {
      FUN_1446f470e(&local_48,L"ImageTexture",1);
      FUN_14016d8b0(lVar6,local_48,lVar7);
    }
    goto switchD_1496b8c45_default;
  case 8:
    cVar2 = FUN_144729dda(param_1[0x142] + 0xec);
    if (cVar2 == '\0') {
      plVar5 = (longlong *)(**(code **)(*param_1 + 0x410))(param_1);
      (**(code **)(*plVar5 + 0xb38))(plVar5);
      param_1[0x143] = 0;
      goto switchD_1496b8c45_default;
    }
    lVar6 = FUN_14479d2ce(param_1[0x142] + 0xec);
    goto LAB_1496b8d7f;
  default:
    goto switchD_1496b8c45_default;
  }
  lVar6 = FUN_148557cc1(uVar4,uVar3);
LAB_1496b8d7a:
  if (lVar6 != 0) {
LAB_1496b8d7f:
    lVar6 = FUN_14090ceee(lVar6,param_1,0);
LAB_1496b8d8d:
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar6);
    }
    param_1[0x143] = lVar6;
  }
switchD_1496b8c45_default:
  if (param_1[0x143] != 0) {
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x410))(param_1);
    (**(code **)(*plVar5 + 0xb30))(plVar5,param_1[0x143]);
    lVar6 = param_1[0x143];
    if (*(char *)(param_1[0x142] + 0xb0) == '\0') {
      uVar9 = 0;
    }
    else {
      uVar9 = 0x3f800000;
    }
    FUN_1446f470e(&local_50,L"FlatShading",1);
    FUN_14472da24(lVar6,local_50,uVar9);
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x410))(param_1);
  (**(code **)(*plVar5 + 0xb10))(plVar5,0);
LAB_1496b8e3a:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496b8f2a FUN_1496b8f2a body=400 status=ok
// SIG undefined FUN_1496b8f2a(void)

void FUN_1496b8f2a(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = (**(code **)(*param_1 + 0x2c8))();
  plVar4 = (longlong *)FUN_148451354(uVar3);
  uVar3 = FUN_1484413d5(DAT_14c951640);
  (**(code **)(*plVar4 + 0x2b0))(plVar4,&DAT_14cc21d48,uVar3);
  uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar4 = (longlong *)FUN_148451354(uVar3);
  local_38[0] = 0;
  local_38[1] = 0;
  lVar5 = (**(code **)(*plVar4 + 0x2c0))(plVar4,&DAT_14cc21d48,local_38,param_1);
  if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar5);
  }
  param_1[0x144] = lVar5;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = (**(code **)(*param_1 + 0x5e8))(param_1,param_1,param_1[0x22]);
  if (lVar5 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar5);
  }
  bVar2 = DAT_14c950c29;
  param_1[0x147] = lVar5;
  lVar5 = *(longlong *)(lVar5 + 0x50);
  lVar1 = param_1[0x144];
  if ((lVar5 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(lVar5);
  }
  *(longlong *)(lVar1 + 0xb0) = lVar5;
  *(undefined4 *)(param_1[0x144] + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1[0x144] + 0x78) = 1;
  *(undefined1 *)(param_1[0x144] + 0x79) = 0;
  lVar5 = param_1[0x144];
  *(undefined4 *)(lVar5 + 0x80) = 0x3f666666;
  *(undefined4 *)(lVar5 + 0x84) = 0x3ecccccd;
  *(undefined4 *)(lVar5 + 0x88) = 0x3ecccccd;
  *(undefined4 *)(lVar5 + 0x8c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x145) = 1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496b90c4 FUN_1496b90c4 body=87 status=ok
// SIG undefined FUN_1496b90c4(void)

void FUN_1496b90c4(longlong *param_1,byte param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  
  if (*(byte *)(param_1 + 0x145) != param_2) {
    *(byte *)(param_1 + 0x145) = param_2;
    lVar1 = param_1[0x147];
    cVar2 = (**(code **)(*param_1 + 0x608))();
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (undefined1)param_1[0x145];
    }
    FUN_14851bab8(lVar1,uVar3);
    *(byte *)(param_1[0x144] + 0x79) = param_2 ^ 1;
  }
  return;
}



// FUNCTION 1496b911c FUN_1496b911c body=73 status=ok
// SIG undefined FUN_1496b911c(void)

void FUN_1496b911c(longlong *param_1,char param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x608))();
  if (cVar1 == param_2) {
    return;
  }
  *(char *)(param_1[0x144] + 0x38) = param_2;
  if (param_2 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined1)param_1[0x145];
  }
  FUN_14851bab8(param_1[0x147],uVar2);
  return;
}



// FUNCTION 1496b9172 FUN_1496b9172 body=413 status=ok
// SIG undefined FUN_1496b9172(void)

longlong FUN_1496b9172(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_328 [40];
  undefined **local_300;
  undefined1 local_2f8 [152];
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_250;
  undefined1 local_248 [544];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar1 = FUN_1484e47e5(param_2);
  FUN_14851b11a(lVar1,param_3,&DAT_14c846480);
  memset(local_2f8,0,0x91);
  local_300 = &PTR_FUN_14af11230;
  local_260 = 0x3ff0000000000000;
  local_250 = 0;
  local_258 = 0x2000000020;
  FUN_14850e248(&local_300);
  FUN_146c00d92(local_248,&local_300);
  FUN_14851bbe8(lVar1,local_248,1,0xf);
  uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  lVar3 = FUN_148557a90(uVar2);
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x146] = lVar3;
    if (lVar3 != 0) goto LAB_1496b926c;
  }
  else {
    FUN_1456cec3c(lVar3);
    param_1[0x146] = lVar3;
LAB_1496b926c:
    FUN_14851b338(lVar1,lVar3);
  }
  plVar4 = *(longlong **)(lVar1 + 0x50);
  if (plVar4 != (longlong *)0x0) {
    lVar3 = FUN_1411674f6();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) goto LAB_1496b92a2;
  }
  plVar4 = (longlong *)0x0;
LAB_1496b92a2:
  (**(code **)(*plVar4 + 0xb80))(plVar4,0);
  FUN_14851b89a(lVar1,0);
  FUN_141082778(local_248);
  FUN_146bd8050(&local_300);
  if ((local_28 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 1496b9310 FUN_1496b9310 body=792 status=ok
// SIG undefined FUN_1496b9310(void)

void FUN_1496b9310(longlong *param_1)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  double dVar9;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  double local_208;
  longlong lStack_200;
  longlong local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  undefined1 local_1d8 [48];
  undefined1 local_1a8 [4];
  undefined4 local_1a4;
  double local_180;
  double local_178;
  double local_170;
  double local_150 [9];
  undefined4 local_104;
  undefined4 local_d8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_238;
  (**(code **)(*param_1 + 0x618))();
  (**(code **)(*param_1 + 0x648))(param_1);
  uVar4 = (**(code **)(*param_1 + 0x618))(param_1);
  *(undefined1 *)(param_1[0x21] + 0xa8) = uVar4;
  if ((int)param_1[0x172] != 0) {
    local_a8 = (double)param_1[0x18];
    dStack_a0 = (double)param_1[0x19];
    local_98 = (double)param_1[0x1a];
    dStack_90 = (double)param_1[0x1b];
    local_88 = (double)param_1[0x1c];
    dStack_80 = (double)param_1[0x1d];
    memset(local_1a8,0,0x100);
    local_d8 = 0xffffffff;
    local_1a4 = 0x3f800000;
    local_104 = 0xffffffff;
    local_218 = 0;
    cVar5 = FUN_14855784a(param_1,local_1a8,&local_a8,0);
    FUN_1496b6002(param_1,local_1d8,&local_a8);
    iVar6 = (**(code **)(*param_1 + 0x4e0))(param_1,local_1d8);
    if ((cVar5 == '\0') ||
       ((iVar6 != -1 &&
        (((double)param_1[0xa0] - local_98) * dStack_80 +
         ((double)param_1[0x9e] - local_a8) * dStack_90 +
         ((double)param_1[0x9f] - dStack_a0) * local_88 <=
         (local_170 - local_98) * dStack_80 +
         (local_180 - local_a8) * dStack_90 + (local_178 - dStack_a0) * local_88)))) {
      uVar3 = (undefined4)param_1[0x172];
      dVar1 = (double)param_1[0xa1];
      dVar2 = (double)param_1[0xa2];
      dVar9 = (double)param_1[0xa3] + (double)param_1[0xa3];
      local_1f0 = dVar1 * dVar9 + (double)param_1[0xa4] * (dVar2 + dVar2);
      local_1e8 = dVar9 * dVar2 - (dVar1 + dVar1) * (double)param_1[0xa4];
      local_1e0 = 1.0 - ((dVar2 + dVar2) * dVar2 + dVar1 * (dVar1 + dVar1));
      pdVar8 = &local_1f0;
      local_1f8 = param_1[0xa0];
      pdVar7 = &local_208;
      local_208 = (double)param_1[0x9e];
      lStack_200 = param_1[0x9f];
    }
    else {
      uVar3 = (undefined4)param_1[0x172];
      pdVar8 = local_150;
      pdVar7 = &local_180;
    }
    (**(code **)(*param_1 + 0x630))(param_1,pdVar7,pdVar8,uVar3);
    *(undefined4 *)(param_1 + 0x172) = 0;
  }
  if ((local_70 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496b962a FUN_1496b962a body=736 status=ok
// SIG undefined FUN_1496b962a(void)

void FUN_1496b962a(longlong *param_1,undefined8 param_2,undefined1 (*param_3) [16],int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  double local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  (**(code **)(*param_1 + 0x638))();
  if (param_4 == 3) {
    lVar6 = param_1[0x21];
    local_e8 = DAT_14c8464f0;
    local_f8 = DAT_14c8464e0;
    uStack_f0 = DAT_14c8464e8;
    uStack_e0 = *(undefined8 *)(lVar6 + 0xd0);
    local_d8 = *(undefined8 *)(lVar6 + 0xd8);
    uStack_d0 = *(undefined8 *)(lVar6 + 0xe0);
    local_c8 = *(undefined8 *)(lVar6 + 0xe8);
    dVar1 = (double)param_1[0x2a];
    dVar2 = (double)param_1[0x28];
    dVar3 = (double)param_1[0x29];
    dVar8 = dVar1 - dVar2 * 0.0;
    dVar9 = dVar2 * 0.0 - dVar3;
    dVar10 = dVar3 * 0.0 + dVar1 * -0.0;
    dVar9 = dVar9 + dVar9;
    dVar8 = dVar8 + dVar8;
    dVar10 = dVar10 + dVar10;
    dVar4 = (double)param_1[0x2b];
    dVar7 = (dVar1 * dVar10 - dVar9 * dVar2) + dVar4 * dVar8 + 0.0;
    local_88 = -((dVar2 * dVar8 - dVar10 * dVar3) + dVar4 * dVar9 + 0.0);
    local_98._8_4_ = SUB84(dVar7,0);
    local_98._0_8_ = -((dVar3 * dVar9 - dVar8 * dVar1) + dVar10 * dVar4 + 1.0);
    local_98._12_4_ = (uint)((ulonglong)dVar7 >> 0x20) ^ 0x80000000;
    FUN_1482ae234(&local_f8,2,local_98);
    local_98._8_4_ = (undefined4)local_d8;
    local_98._0_8_ = uStack_e0;
    local_98._12_4_ = local_d8._4_4_;
    uStack_80 = (undefined4)local_c8;
    uStack_7c = local_c8._4_4_;
  }
  else {
    if (param_4 != 1) goto LAB_1496b9692;
    lVar6 = param_1[0x21];
    local_e8 = DAT_14c8464f0;
    local_f8 = DAT_14c8464e0;
    uStack_f0 = DAT_14c8464e8;
    uStack_e0 = *(undefined8 *)(lVar6 + 0xd0);
    local_d8 = *(undefined8 *)(lVar6 + 0xd8);
    uStack_d0 = *(undefined8 *)(lVar6 + 0xe0);
    local_c8 = *(undefined8 *)(lVar6 + 0xe8);
    local_88 = *(double *)param_3[1];
    local_98 = *param_3;
    FUN_1482ae234(&local_f8,2,local_98);
    local_98._8_4_ = (undefined4)local_d8;
    local_98._0_8_ = uStack_e0;
    local_98._12_4_ = local_d8._4_4_;
    uStack_80 = (undefined4)local_c8;
    uStack_7c = local_c8._4_4_;
  }
  local_88 = (double)uStack_d0;
  (**(code **)(*param_1 + 0x640))(param_1,local_98);
LAB_1496b9692:
  plVar5 = (longlong *)param_1[0x148];
  if (plVar5 != (longlong *)0x0) {
    lVar6 = param_1[0x21];
    local_f8 = *(undefined8 *)(lVar6 + 0xd0);
    uStack_f0 = *(undefined8 *)(lVar6 + 0xd8);
    local_e8 = *(undefined8 *)(lVar6 + 0xe0);
    uStack_e0 = *(undefined8 *)(lVar6 + 0xe8);
    local_d8 = *(undefined8 *)(lVar6 + 0xb0);
    uStack_d0 = *(undefined8 *)(lVar6 + 0xb8);
    local_c8 = *(undefined8 *)(lVar6 + 0xc0);
    uStack_c0 = 0;
    local_b8 = 0x3ff0000000000000;
    uStack_b0 = 0x3ff0000000000000;
    local_a8 = 0x3ff0000000000000;
    uStack_a0 = 0;
    (**(code **)(*plVar5 + 0x330))(plVar5,&local_f8,1);
  }
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496b990c FUN_1496b990c body=125 status=ok
// SIG undefined FUN_1496b990c(void)

void FUN_1496b990c(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_38 = param_3[2];
  uStack_30 = *(undefined4 *)(param_3 + 3);
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0x1c);
  (**(code **)(*param_1 + 0x640))(*(undefined4 *)(param_3 + 2),&local_48);
  local_48 = param_3[4];
  uStack_40 = param_3[5];
  local_38 = param_3[6];
  (**(code **)(*param_1 + 0x638))(param_1,&local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496b998a FUN_1496b998a body=151 status=ok
// SIG undefined FUN_1496b998a(void)

void FUN_1496b998a(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x108);
  *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)(param_2 + 4);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(lVar1 + 0xb0) = *param_2;
  *(undefined4 *)(lVar1 + 0xb4) = uVar3;
  *(undefined4 *)(lVar1 + 0xb8) = uVar4;
  *(undefined4 *)(lVar1 + 0xbc) = uVar5;
  pcVar2 = *(code **)(param_1 + 0xa70);
  plVar7 = (longlong *)(param_1 + 0xa90);
  if (*(longlong **)(param_1 + 0xa80) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_1 + 0xa80);
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar2)(&local_38,uVar6);
  *(undefined8 *)(param_1 + 0xa60) = local_28;
  *(undefined4 *)(param_1 + 0xa50) = local_38;
  *(undefined4 *)(param_1 + 0xa54) = uStack_34;
  *(undefined4 *)(param_1 + 0xa58) = uStack_30;
  *(undefined4 *)(param_1 + 0xa5c) = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496b9a22 FUN_1496b9a22 body=151 status=ok
// SIG undefined FUN_1496b9a22(void)

void FUN_1496b9a22(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x108);
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  *(undefined4 *)(lVar1 + 0xe0) = param_2[4];
  *(undefined4 *)(lVar1 + 0xe4) = uVar7;
  *(undefined4 *)(lVar1 + 0xe8) = uVar8;
  *(undefined4 *)(lVar1 + 0xec) = uVar9;
  *(undefined4 *)(lVar1 + 0xd0) = uVar3;
  *(undefined4 *)(lVar1 + 0xd4) = uVar4;
  *(undefined4 *)(lVar1 + 0xd8) = uVar5;
  *(undefined4 *)(lVar1 + 0xdc) = uVar6;
  pcVar2 = *(code **)(param_1 + 0xb10);
  plVar11 = (longlong *)(param_1 + 0xb30);
  if (*(longlong **)(param_1 + 0xb20) != (longlong *)0x0) {
    plVar11 = *(longlong **)(param_1 + 0xb20);
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar2)(&local_48,uVar10);
  *(undefined4 *)(param_1 + 0xb00) = local_38;
  *(undefined4 *)(param_1 + 0xb04) = uStack_34;
  *(undefined4 *)(param_1 + 0xb08) = uStack_30;
  *(undefined4 *)(param_1 + 0xb0c) = uStack_2c;
  *(undefined4 *)(param_1 + 0xaf0) = local_48;
  *(undefined4 *)(param_1 + 0xaf4) = uStack_44;
  *(undefined4 *)(param_1 + 0xaf8) = uStack_40;
  *(undefined4 *)(param_1 + 0xafc) = uStack_3c;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496b9aba FUN_1496b9aba body=164 status=ok
// SIG undefined FUN_1496b9aba(void)

void FUN_1496b9aba(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = *(longlong **)(param_1 + 0xa40);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(param_1 + 0x108);
    local_68 = *(undefined8 *)(lVar2 + 0xd0);
    uStack_60 = *(undefined8 *)(lVar2 + 0xd8);
    local_58 = *(undefined8 *)(lVar2 + 0xe0);
    uStack_50 = *(undefined8 *)(lVar2 + 0xe8);
    local_48 = *(undefined8 *)(lVar2 + 0xb0);
    uStack_40 = *(undefined8 *)(lVar2 + 0xb8);
    local_38 = *(undefined8 *)(lVar2 + 0xc0);
    uStack_30 = 0;
    local_28 = 0x3ff0000000000000;
    uStack_20 = 0x3ff0000000000000;
    local_18 = 0x3ff0000000000000;
    uStack_10 = 0;
    (**(code **)(*plVar1 + 0x330))(plVar1,&local_68,1);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496b9b60 FUN_1496b9b60 body=418 status=ok
// SIG undefined FUN_1496b9b60(void)

void FUN_1496b9b60(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == '\0') {
    if (param_1[0x148] != 0) {
      uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
      plVar4 = (longlong *)FUN_148451354(uVar1);
      (**(code **)(*plVar4 + 0x2c8))(plVar4,param_1[0x148]);
      param_1[0x148] = 0;
    }
  }
  else if (param_1[0x148] == 0) {
    local_78 = 0;
    uStack_70 = 0;
    uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar2 = FUN_14843d0eb(uVar1,0x3fe,param_1,&local_78);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x148] = lVar2;
    if (local_78 != 0) {
      FUN_1400020a8();
      lVar2 = param_1[0x148];
    }
    *(undefined1 *)(lVar2 + 0x82) = 0;
    *(undefined1 *)(param_1[0x148] + 0x83) = 1;
    plVar4 = (longlong *)param_1[0x148];
    lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar2 = lVar3 + 0x28;
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    (**(code **)(*plVar4 + 800))(plVar4,param_1[0x149],lVar2);
    lVar2 = param_1[0x21];
    local_78 = *(longlong *)(lVar2 + 0xd0);
    uStack_70 = *(undefined8 *)(lVar2 + 0xd8);
    local_68 = *(undefined8 *)(lVar2 + 0xe0);
    uStack_60 = *(undefined8 *)(lVar2 + 0xe8);
    local_58 = *(undefined8 *)(lVar2 + 0xb0);
    uStack_50 = *(undefined8 *)(lVar2 + 0xb8);
    local_48 = *(undefined8 *)(lVar2 + 0xc0);
    uStack_40 = 0;
    local_38 = 0x3ff0000000000000;
    uStack_30 = 0x3ff0000000000000;
    local_28 = 0x3ff0000000000000;
    uStack_20 = 0;
    FUN_148415b4c(param_1[0x148],&local_78,1);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496b9d04 FUN_1496b9d04 body=6190 status=ok
// SIG undefined FUN_1496b9d04(void)

void FUN_1496b9d04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_4e8 [32];
  wchar_t **local_4c8;
  longlong **local_4c0;
  undefined1 local_4b8;
  undefined8 *local_4b0;
  undefined1 **local_4a8;
  undefined8 local_498;
  undefined8 local_490;
  longlong local_488 [2];
  undefined1 local_478 [4];
  undefined1 local_474 [4];
  undefined1 local_470 [4];
  undefined1 local_46c [4];
  longlong *local_468 [2];
  wchar_t *local_458;
  undefined4 local_450;
  undefined1 *local_448 [2];
  undefined8 local_438;
  undefined **local_428;
  undefined8 local_420;
  undefined1 *local_408 [2];
  undefined8 local_3f8;
  undefined **local_3e8;
  undefined8 local_3e0;
  undefined1 *local_3c8 [2];
  undefined8 local_3b8;
  undefined **local_3a8;
  undefined8 local_3a0;
  undefined1 *local_388 [2];
  undefined8 local_378;
  undefined **local_368;
  undefined8 local_360;
  undefined1 *local_348 [2];
  undefined8 local_338;
  undefined **local_328;
  undefined8 local_320;
  undefined1 *local_308 [2];
  undefined8 local_2f8;
  undefined **local_2e8;
  undefined8 local_2e0;
  undefined1 *local_2c8 [2];
  undefined8 local_2b8;
  undefined **local_2a8;
  undefined8 local_2a0;
  undefined1 *local_288 [2];
  undefined8 local_278;
  undefined **local_268;
  undefined8 local_260;
  undefined1 *local_248 [2];
  undefined8 local_238;
  undefined **local_228;
  undefined8 local_220;
  undefined1 *local_208 [2];
  undefined8 local_1f8;
  undefined **local_1e8;
  undefined8 local_1e0;
  undefined1 *local_1c8 [2];
  undefined8 local_1b8;
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined1 *local_188 [2];
  undefined8 local_178;
  undefined **local_168;
  undefined8 local_160;
  undefined1 *local_148 [2];
  undefined8 local_138;
  undefined **local_128;
  undefined8 local_120;
  undefined1 *local_108 [2];
  undefined8 local_f8;
  undefined **local_e8;
  undefined8 local_e0;
  undefined1 *local_c8 [2];
  undefined8 local_b8;
  undefined **local_a8;
  undefined8 local_a0;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  local_78 = 0;
  local_68 = &PTR_LAB_14bdcd870;
  local_88[0] = &LAB_144580606;
  local_458 = L"SculptNextBrushModeTooltip";
  local_450 = 0x1a;
  local_498 = param_1;
  local_490 = param_2;
  local_60 = param_1;
  FUN_1446e940c(local_46c,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_470,&local_458);
  FUN_140208bae(local_468,local_470,local_46c,L"Cycle to next Brush Type");
  local_458 = L"SculptNextBrushMode";
  local_450 = 0x13;
  FUN_1446e940c(local_474,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_478,&local_458);
  FUN_140208bae(&local_458,local_478,local_474,L"Next Brush Type");
  FUN_140056680(local_488,L"NextBrushMode");
  local_4b0 = &DAT_14c966f88;
  local_4b8 = 0;
  local_4c8 = &local_458;
  local_4c0 = local_468;
  local_4a8 = local_88;
  FUN_148450124(local_490,local_498,0x2711,local_488);
  if (local_488[0] != 0) {
    FUN_1400020a8();
  }
  if (local_458 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_458 + 0x10))();
  }
  if (local_468[0] != (longlong *)0x0) {
    (**(code **)(*local_468[0] + 0x10))();
  }
  uVar1 = local_498;
  local_b8 = 0;
  local_a8 = &PTR_LAB_14bdcd890;
  local_a0 = local_498;
  local_c8[0] = &LAB_14458065c;
  local_458 = L"SculptPreviousBrushModeTooltip";
  local_450 = 0x1e;
  FUN_1446e940c(local_46c,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_470,&local_458);
  FUN_140208bae(local_468,local_470,local_46c,L"Cycle to previous Brush Type");
  local_458 = L"SculptPreviousBrushMode";
  local_450 = 0x17;
  FUN_1446e940c(local_474,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_478,&local_458);
  FUN_140208bae(&local_458,local_478,local_474,L"Previous Brush Type");
  FUN_140056680(local_488,L"PreviousBrushMode");
  local_4b0 = &DAT_14c965100;
  local_4b8 = 0;
  local_4c8 = &local_458;
  local_4c0 = local_468;
  local_4a8 = local_c8;
  FUN_148450124(local_490,uVar1,0x2712,local_488);
  if (local_488[0] != 0) {
    FUN_1400020a8();
  }
  if (local_458 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_458 + 0x10))();
  }
  if (local_468[0] != (longlong *)0x0) {
    (**(code **)(*local_468[0] + 0x10))();
  }
  uVar1 = local_498;
  local_f8 = 0;
  local_e8 = &PTR_LAB_14bdcd8b0;
  local_e0 = local_498;
  local_108[0] = &LAB_1445806b2;
  local_458 = L"SculptIncreaseSpeedTooltip";
  local_450 = 0x1a;
  FUN_1446e940c(local_46c,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_470,&local_458);
  FUN_140208bae(local_468,local_470,local_46c,L"Increase Brush Speed");
  local_458 = L"SculptIncreaseSpeed";
  local_450 = 0x13;
  FUN_1446e940c(local_474,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_478,&local_458);
  FUN_140208bae(&local_458,local_478,local_474,L"Increase Speed");
  FUN_140056680(local_488,L"SculptIncreaseSpeed");
  local_4b0 = &DAT_14c964fe0;
  local_4b8 = 0;
  local_4c8 = &local_458;
  local_4c0 = local_468;
  local_4a8 = local_108;
  FUN_148450124(local_490,uVar1,0x274c,local_488);
  if (local_488[0] != 0) {
    FUN_1400020a8();
  }
  if (local_458 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_458 + 0x10))();
  }
  if (local_468[0] != (longlong *)0x0) {
    (**(code **)(*local_468[0] + 0x10))();
  }
  uVar1 = local_498;
  local_138 = 0;
  local_128 = &PTR_LAB_14bdcd8d0;
  local_120 = local_498;
  local_148[0] = &LAB_144580708;
  local_458 = L"SculptDecreaseSpeedTooltip";
  local_450 = 0x1a;
  FUN_1446e940c(local_46c,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_470,&local_458);
  FUN_140208bae(local_468,local_470,local_46c,L"Decrease Brush Speed");
  local_458 = L"SculptDecreaseSpeed";
  local_450 = 0x13;
  FUN_1446e940c(local_474,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_478,&local_458);
  FUN_140208bae(&local_458,local_478,local_474,L"Decrease Speed");
  FUN_140056680(local_488,L"SculptDecreaseSpeed");
  local_4b0 = &DAT_14c966fd0;
  local_4b8 = 0;
  local_4c8 = &local_458;
  local_4c0 = local_468;
  local_4a8 = local_148;
  FUN_148450124(local_490,uVar1,0x274d,local_488);
  if (local_488[0] != 0) {
    FUN_1400020a8();
  }
  if (local_458 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_458 + 0x10))();
  }
  if (local_468[0] != (longlong *)0x0) {
    (**(code **)(*local_468[0] + 0x10))();
  }
  uVar1 = local_498;
  local_178 = 0;
  local_168 = &PTR_LAB_14bdcd8f0;
  local_160 = local_498;
  local_188[0] = &LAB_14458075e;
  local_458 = L"SculptIncreaseSizeTooltip";
  local_450 = 0x19;
  FUN_1446e940c(local_46c,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_470,&local_458);
  FUN_140208bae(local_468,local_470,local_46c,L"Increase Brush Size");
  local_458 = L"SculptIncreaseSize";
  local_450 = 0x12;
  FUN_1446e940c(local_474,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_478,&local_458);
  FUN_140208bae(&local_458,local_478,local_474,L"Increase Size");
  FUN_140056680(local_488,L"SculptIncreaseSize");
  local_4b0 = &DAT_14c966ef8;
  local_4b8 = 0;
  local_4c8 = &local_458;
  local_4c0 = local_468;
  local_4a8 = local_188;
  FUN_148450124(local_490,uVar1,0x2742,local_488);
  if (local_488[0] != 0) {
    FUN_1400020a8();
  }
  if (local_458 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_458 + 0x10))();
  }
  if (local_468[0] != (longlong *)0x0) {
    (**(code **)(*local_468[0] + 0x10))();
  }
  uVar1 = local_498;
  local_1b8 = 0;
  local_1a8 = &PTR_LAB_14bdcd910;
  local_1a0 = local_498;
  local_1c8[0] = &LAB_1445807b4;
  local_458 = L"SculptDecreaseSizeTooltip";
  local_450 = 0x19;
  FUN_1446e940c(local_46c,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_470,&local_458);
  FUN_140208bae(local_468,local_470,local_46c,L"Decrease Brush Size");
  local_458 = L"SculptDecreaseSize";
  local_450 = 0x12;
  FUN_1446e940c(local_474,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_478,&local_458);
  FUN_140208bae(&local_458,local_478,local_474,L"Decrease Size");
  FUN_140056680(local_488,L"SculptDecreaseSize");
  local_4b0 = &DAT_14c965130;
  local_4b8 = 0;
  local_4c8 = &local_458;
  local_4c0 = local_468;
  local_4a8 = local_1c8;
  FUN_148450124(local_490,uVar1,0x2743,local_488);
  if (local_488[0] != 0) {
    FUN_1400020a8();
  }
  if (local_458 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_458 + 0x10))();
  }
  if (local_468[0] != (longlong *)0x0) {
    (**(code **)(*local_468[0] + 0x10))();
  }
  uVar1 = local_498;
  local_1f8 = 0;
  local_1e8 = &PTR_LAB_14bdcd930;
  local_1e0 = local_498;
  local_208[0] = &LAB_14458080a;
  local_458 = L"SculptIncreaseSizeTooltip";
  local_450 = 0x19;
  FUN_1446e940c(local_46c,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_470,&local_458);
  FUN_140208bae(local_468,local_470,local_46c,L"Increase Brush Size");
  local_458 = L"SculptIncreaseSize";
  local_450 = 0x12;
  FUN_1446e940c(local_474,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_478,&local_458);
  FUN_140208bae(&local_458,local_478,local_474,L"Increase Size");
  FUN_140056680(local_488,L"SculptIncreaseSizeSmallStep");
  local_4b0 = &DAT_14c966ef8;
  local_4b8 = 4;
  local_4c8 = &local_458;
  local_4c0 = local_468;
  local_4a8 = local_208;
  FUN_148450124(local_490,uVar1,0x2744,local_488);
  if (local_488[0] != 0) {
    FUN_1400020a8();
  }
  if (local_458 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_458 + 0x10))();
  }
  if (local_468[0] != (longlong *)0x0) {
    (**(code **)(*local_468[0] + 0x10))();
  }
  uVar1 = local_498;
  local_238 = 0;
  local_228 = &PTR_LAB_14bdcd950;
  local_220 = local_498;
  local_248[0] = &LAB_144580860;
  local_458 = L"SculptDecreaseSizeTooltip";
  local_450 = 0x19;
  FUN_1446e940c(local_46c,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_470,&local_458);
  FUN_140208bae(local_468,local_470,local_46c,L"Decrease Brush Size");
  local_458 = L"SculptDecreaseSize";
  local_450 = 0x12;
  FUN_1446e940c(local_474,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_478,&local_458);
  FUN_140208bae(&local_458,local_478,local_474,L"Decrease Size");
  FUN_140056680(local_488,L"SculptDecreaseSizeSmallStemp");
  local_4b0 = &DAT_14c965130;
  local_4b8 = 4;
  local_4c8 = &local_458;
  local_4c0 = local_468;
  local_4a8 = local_248;
  FUN_148450124(local_490,uVar1,0x2745,local_488);
  if (local_488[0] != 0) {
    FUN_1400020a8();
  }
  if (local_458 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_458 + 0x10))();
  }
  if (local_468[0] != (longlong *)0x0) {
    (**(code **)(*local_468[0] + 0x10))();
  }
  uVar1 = local_498;
  local_278 = 0;
  local_268 = &PTR_LAB_14bdcd970;
  local_260 = local_498;
  local_288[0] = &LAB_1445808b6;
  local_458 = L"SculptIncreaseRadiusTooltip";
  local_450 = 0x1b;
  FUN_1446e940c(local_46c,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_470,&local_458);
  FUN_140208bae(local_468,local_470,local_46c,L"Increase Brush Radius");
  local_458 = L"SculptIncreaseRadius";
  local_450 = 0x14;
  FUN_1446e940c(local_474,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_478,&local_458);
  FUN_140208bae(&local_458,local_478,local_474,L"Increase Radius");
  FUN_140056680(local_488,L"SculptIncreaseRadius");
  local_4b0 = &DAT_14c9655e0;
  local_4b8 = 0;
  local_4c8 = &local_458;
  local_4c0 = local_468;
  local_4a8 = local_288;
  FUN_148450124(local_490,uVar1,100,local_488);
  if (local_488[0] != 0) {
    FUN_1400020a8();
  }
  if (local_458 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_458 + 0x10))();
  }
  if (local_468[0] != (longlong *)0x0) {
    (**(code **)(*local_468[0] + 0x10))();
  }
  uVar1 = local_498;
  local_2b8 = 0;
  local_2a8 = &PTR_LAB_14bdcd990;
  local_2a0 = local_498;
  local_2c8[0] = &LAB_14458090c;
  local_458 = L"SculptDecreaseRadiusTooltip";
  local_450 = 0x1b;
  FUN_1446e940c(local_46c,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_470,&local_458);
  FUN_140208bae(local_468,local_470,local_46c,L"Decrease Brush Radius");
  local_458 = L"SculptDecreaseRadius";
  local_450 = 0x14;
  FUN_1446e940c(local_474,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_478,&local_458);
  FUN_140208bae(&local_458,local_478,local_474,L"Decrease Radius");
  FUN_140056680(local_488,L"SculptDecreaseRadius");
  local_4b0 = &DAT_14c965598;
  local_4b8 = 0;
  local_4c8 = &local_458;
  local_4c0 = local_468;
  local_4a8 = local_2c8;
  FUN_148450124(local_490,uVar1,0x65,local_488);
  if (local_488[0] != 0) {
    FUN_1400020a8();
  }
  if (local_458 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_458 + 0x10))();
  }
  if (local_468[0] != (longlong *)0x0) {
    (**(code **)(*local_468[0] + 0x10))();
  }
  uVar1 = local_498;
  local_2f8 = 0;
  local_2e8 = &PTR_LAB_14bdcd9b0;
  local_2e0 = local_498;
  local_308[0] = &LAB_144580962;
  local_458 = L"SculptIncreaseRadiusTooltip";
  local_450 = 0x1b;
  FUN_1446e940c(local_46c,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_470,&local_458);
  FUN_140208bae(local_468,local_470,local_46c,L"Increase Brush Radius");
  local_458 = L"SculptIncreaseRadius";
  local_450 = 0x14;
  FUN_1446e940c(local_474,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_478,&local_458);
  FUN_140208bae(&local_458,local_478,local_474,L"Increase Radius");
  FUN_140056680(local_488,L"SculptIncreaseRadiusSmallStep");
  local_4b0 = &DAT_14c9655e0;
  local_4b8 = 4;
  local_4c8 = &local_458;
  local_4c0 = local_468;
  local_4a8 = local_308;
  FUN_148450124(local_490,uVar1,0x2746,local_488);
  if (local_488[0] != 0) {
    FUN_1400020a8();
  }
  if (local_458 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_458 + 0x10))();
  }
  if (local_468[0] != (longlong *)0x0) {
    (**(code **)(*local_468[0] + 0x10))();
  }
  uVar1 = local_498;
  local_338 = 0;
  local_328 = &PTR_LAB_14bdcd9d0;
  local_320 = local_498;
  local_348[0] = &LAB_1445809b8;
  local_458 = L"SculptDecreaseRadiusTooltip";
  local_450 = 0x1b;
  FUN_1446e940c(local_46c,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_470,&local_458);
  FUN_140208bae(local_468,local_470,local_46c,L"Decrease Brush Radius");
  local_458 = L"SculptDecreaseRadius";
  local_450 = 0x14;
  FUN_1446e940c(local_474,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_478,&local_458);
  FUN_140208bae(&local_458,local_478,local_474,L"Decrease Radius");
  FUN_140056680(local_488,L"SculptDecreaseRadiusSmallStemp");
  local_4b0 = &DAT_14c965598;
  local_4b8 = 4;
  local_4c8 = &local_458;
  local_4c0 = local_468;
  local_4a8 = local_348;
  FUN_148450124(local_490,uVar1,0x2747,local_488);
  if (local_488[0] != 0) {
    FUN_1400020a8();
  }
  if (local_458 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_458 + 0x10))();
  }
  if (local_468[0] != (longlong *)0x0) {
    (**(code **)(*local_468[0] + 0x10))();
  }
  uVar1 = local_498;
  local_378 = 0;
  local_368 = &PTR_LAB_14bdcd9f0;
  local_360 = local_498;
  local_388[0] = &LAB_144580a0e;
  local_458 = L"ToggleWireframeTooltip";
  local_450 = 0x16;
  FUN_1446e940c(local_46c,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_470,&local_458);
  FUN_140208bae(local_468,local_470,local_46c,L"Toggle visibility of wireframe overlay");
  local_458 = L"ToggleWireframe";
  local_450 = 0xf;
  FUN_1446e940c(local_474,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_478,&local_458);
  FUN_140208bae(&local_458,local_478,local_474,L"Toggle Wireframe");
  FUN_140056680(local_488,L"ToggleWireframe");
  local_4b0 = &DAT_14c966fd0;
  local_4b8 = 2;
  local_4c8 = &local_458;
  local_4c0 = local_468;
  local_4a8 = local_388;
  FUN_148450124(local_490,uVar1,0x66,local_488);
  if (local_488[0] != 0) {
    FUN_1400020a8();
  }
  if (local_458 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_458 + 0x10))();
  }
  if (local_468[0] != (longlong *)0x0) {
    (**(code **)(*local_468[0] + 0x10))();
  }
  uVar1 = local_498;
  local_3b8 = 0;
  local_3a8 = &PTR_LAB_14bdcda10;
  local_3a0 = local_498;
  local_3c8[0] = &LAB_144580a68;
  local_458 = L"SetSculptWorkSurfacePosNormalTooltip";
  local_450 = 0x24;
  FUN_1446e940c(local_46c,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_470,&local_458);
  FUN_140208bae(local_468,local_470,local_46c,
                L"Move the Sculpting Work Plane/Surface to Position and Normal of World hit point under cursor"
               );
  local_458 = L"SetSculptWorkSurfacePosNormal";
  local_450 = 0x1d;
  FUN_1446e940c(local_474,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_478,&local_458);
  FUN_140208bae(&local_458,local_478,local_474,L"Reorient Work Surface");
  FUN_140056680(local_488,L"SetSculptWorkSurfacePosNormal");
  local_4b0 = &DAT_14c965148;
  local_4b8 = 4;
  local_4c8 = &local_458;
  local_4c0 = local_468;
  local_4a8 = local_3c8;
  FUN_148450124(local_490,uVar1,0x2774,local_488);
  if (local_488[0] != 0) {
    FUN_1400020a8();
  }
  if (local_458 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_458 + 0x10))();
  }
  if (local_468[0] != (longlong *)0x0) {
    (**(code **)(*local_468[0] + 0x10))();
  }
  uVar1 = local_498;
  local_3f8 = 0;
  local_3e8 = &PTR_LAB_14bdcda30;
  local_3e0 = local_498;
  local_408[0] = &LAB_144580abe;
  local_458 = L"SetSculptWorkSurfacePosTooltip";
  local_450 = 0x1e;
  FUN_1446e940c(local_46c,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_470,&local_458);
  FUN_140208bae(local_468,local_470,local_46c,
                L"Move the Sculpting Work Plane/Surface to World hit point under cursor (keep current Orientation)"
               );
  local_458 = L"SetSculptWorkSurfacePos";
  local_450 = 0x17;
  FUN_1446e940c(local_474,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_478,&local_458);
  FUN_140208bae(&local_458,local_478,local_474,L"Reposition Work Surface");
  FUN_140056680(local_488,L"SetSculptWorkSurfacePos");
  local_4b0 = &DAT_14c965148;
  local_4b8 = 0;
  local_4c8 = &local_458;
  local_4c0 = local_468;
  local_4a8 = local_408;
  FUN_148450124(local_490,uVar1,0x2775,local_488);
  if (local_488[0] != 0) {
    FUN_1400020a8();
  }
  if (local_458 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_458 + 0x10))();
  }
  if (local_468[0] != (longlong *)0x0) {
    (**(code **)(*local_468[0] + 0x10))();
  }
  uVar1 = local_498;
  local_438 = 0;
  local_428 = &PTR_LAB_14bdcda50;
  local_420 = local_498;
  local_448[0] = &LAB_144580b14;
  local_458 = L"SetSculptWorkSurfaceViewTooltip";
  local_450 = 0x1f;
  FUN_1446e940c(local_46c,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_470,&local_458);
  FUN_140208bae(local_468,local_470,local_46c,
                L"Move the Sculpting Work Plane/Surface to World hit point under cursor and align to View"
               );
  local_458 = L"SetSculptWorkSurfaceView";
  local_450 = 0x18;
  FUN_1446e940c(local_474,&local_458);
  local_458 = L"UMeshSculptToolBase";
  local_450 = 0x13;
  FUN_1446e940c(local_478,&local_458);
  FUN_140208bae(&local_458,local_478,local_474,L"View-Align Work Surface");
  FUN_140056680(local_488,L"SetSculptWorkSurfaceView");
  local_4b0 = &DAT_14c965148;
  local_4b8 = 5;
  local_4c8 = &local_458;
  local_4c0 = local_468;
  local_4a8 = local_448;
  FUN_148450124(local_490,uVar1,0x2776,local_488);
  if (local_488[0] != 0) {
    FUN_1400020a8();
  }
  if (local_458 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_458 + 0x10))();
  }
  if (local_468[0] != (longlong *)0x0) {
    (**(code **)(*local_468[0] + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_4e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bb533 FUN_1496bb533 body=580 status=ok
// SIG undefined FUN_1496bb533(void)

void FUN_1496bb533(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  longlong **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = *(longlong *)(param_1 + 0x208);
  iVar8 = 0;
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0x38) < 1)) {
    lVar7 = 0;
  }
  else {
    lVar7 = **(longlong **)(lVar7 + 0x30);
  }
  local_88 = lVar7;
  local_80 = param_1;
  FUN_14834bdd8(param_3,*(int *)(lVar7 + 8) * 0x200 + *(int *)(lVar7 + 0xc));
  plVar1 = param_2 + 2;
  local_78 = 0x100000000;
  local_68 = 0xffffffff;
  iStack_64 = 0;
  local_60 = 0;
  local_70 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_78);
    iVar8 = (int)param_2[5];
  }
  local_98 = local_68;
  iStack_94 = iStack_64;
  local_90 = local_60;
  local_8c = local_5c;
  local_a8 = (longlong *)local_78;
  local_a0 = local_70;
  local_b0 = param_2;
  if ((iStack_64 != iVar8) || (local_70 != plVar1)) {
    do {
      iVar2 = *(int *)(*local_b0 + (longlong)iStack_94 * 0xc);
      uVar6 = iVar2 * 3 + 2;
      lVar5 = *(longlong *)(lVar7 + 0x78);
      uVar3 = *(undefined4 *)
               (*(longlong *)(lVar5 + (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 4)
      ;
      uVar6 = iVar2 * 3 + 1;
      uVar4 = *(undefined4 *)
               (*(longlong *)(lVar5 + (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 4)
      ;
      FUN_14834be84(param_3,*(undefined4 *)
                             (*(longlong *)(lVar5 + (ulonglong)((uint)(iVar2 * 3) >> 9) * 8) +
                             (ulonglong)(iVar2 * 3 & 0x1ff) * 4));
      FUN_14834be84(param_3,uVar4);
      FUN_14834be84(param_3,uVar3);
      local_98 = local_98 & ~local_a8._4_4_;
      FUN_1449c0562(&local_a8);
    } while (local_b0 != param_2 || (local_a0 != plVar1 || iStack_94 != iVar8));
  }
  local_b0 = (longlong *)(param_3 + 8);
  local_50 = &local_b0;
  local_a8 = &local_80;
  local_a0 = &local_88;
  local_b8 = &local_78;
  local_78 = 0;
  local_70 = (longlong *)((ulonglong)local_70 & 0xffffffff00000000);
  local_58 = FUN_144580b6a;
  local_c0 = 0;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_3 + 0x10),1);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bb778 FUN_1496bb778 body=509 status=ok
// SIG undefined FUN_1496bb778(void)

void FUN_1496bb778(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  longlong **local_b8;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  code *local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar5 = 0;
  local_70 = param_1;
  FUN_14834bdd8(param_3,*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24));
  plVar1 = param_2 + 2;
  local_68 = (code *)0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_68);
    iVar5 = (int)param_2[5];
  }
  local_80 = local_58;
  iStack_7c = iStack_54;
  local_78 = local_50;
  local_74 = local_4c;
  local_90 = local_68;
  local_88 = local_60;
  local_98 = param_2;
  if ((iStack_54 != iVar5) || (local_60 != plVar1)) {
    do {
      uVar2 = *(uint *)(*local_98 + (longlong)iStack_7c * 0xc);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
      uVar4 = (ulonglong)(uVar2 & 0x1ff);
      FUN_14834be84(param_3,*(undefined4 *)(lVar3 + uVar4 * 0xc));
      FUN_14834be84(param_3,*(undefined4 *)(lVar3 + 4 + uVar4 * 0xc));
      FUN_14834be84(param_3,*(undefined4 *)(lVar3 + 8 + uVar4 * 0xc));
      local_80 = local_80 & ~local_90._4_4_;
      FUN_1449c0562(&local_90);
    } while (local_98 != param_2 || (local_88 != plVar1 || iStack_7c != iVar5));
  }
  local_a8 = param_3 + 8;
  local_60 = &local_a8;
  local_a0 = &local_70;
  local_b8 = &local_98;
  local_98 = (longlong *)0x0;
  local_90 = (code *)((ulonglong)local_90 & 0xffffffff00000000);
  local_68 = FUN_144580c32;
  local_c0 = 0;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_3 + 0x10),1);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bb976 FUN_1496bb976 body=51 status=ok
// SIG undefined FUN_1496bb976(void)

void FUN_1496bb976(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_e8 [40];
  undefined4 uStack_c0;
  longlong **pplStack_b8;
  longlong lStack_a8;
  longlong *plStack_a0;
  longlong *plStack_98;
  undefined8 uStack_90;
  longlong *plStack_88;
  uint uStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong lStack_70;
  code *pcStack_68;
  longlong *plStack_60;
  uint uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong uStack_48;
  
  lVar3 = *(longlong *)(param_1 + 0x208);
  if (((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x38))) &&
     (**(longlong **)(lVar3 + 0x30) != 0 && param_4 == '\0')) {
    FUN_1496bb533();
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar5 = 0;
  lStack_70 = param_1;
  FUN_14834bdd8(param_3,*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24));
  plVar1 = param_2 + 2;
  pcStack_68 = (code *)0x100000000;
  uStack_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  plStack_60 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&pcStack_68);
    iVar5 = (int)param_2[5];
  }
  uStack_80 = uStack_58;
  iStack_7c = iStack_54;
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  uStack_90 = pcStack_68;
  plStack_88 = plStack_60;
  plStack_98 = param_2;
  if ((iStack_54 != iVar5) || (plStack_60 != plVar1)) {
    do {
      uVar2 = *(uint *)(*plStack_98 + (longlong)iStack_7c * 0xc);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
      uVar4 = (ulonglong)(uVar2 & 0x1ff);
      FUN_14834be84(param_3,*(undefined4 *)(lVar3 + uVar4 * 0xc));
      FUN_14834be84(param_3,*(undefined4 *)(lVar3 + 4 + uVar4 * 0xc));
      FUN_14834be84(param_3,*(undefined4 *)(lVar3 + 8 + uVar4 * 0xc));
      uStack_80 = uStack_80 & ~uStack_90._4_4_;
      FUN_1449c0562(&uStack_90);
    } while (plStack_98 != param_2 || (plStack_88 != plVar1 || iStack_7c != iVar5));
  }
  lStack_a8 = param_3 + 8;
  plStack_60 = &lStack_a8;
  plStack_a0 = &lStack_70;
  pplStack_b8 = &plStack_98;
  plStack_98 = (longlong *)0x0;
  uStack_90 = (code *)((ulonglong)uStack_90 & 0xffffffff00000000);
  pcStack_68 = FUN_144580c32;
  uStack_c0 = 0;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_3 + 0x10),1);
  if ((uStack_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bb9a9 FUN_1496bb9a9 body=263 status=ok
// SIG undefined FUN_1496bb9a9(void)

void FUN_1496bb9a9(code *param_1,code *param_2,char param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  code **local_58;
  code *local_50;
  code **local_48;
  undefined8 *local_40;
  undefined8 local_38;
  code *local_30;
  code *local_28;
  code **local_20;
  code *local_18;
  code **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == '\0') {
    local_10 = &local_28;
    local_20 = &local_30;
    uVar1 = *(undefined4 *)(param_2 + 8);
    local_58 = &local_50;
    local_50 = (code *)0x0;
    local_48 = (code **)((ulonglong)local_48 & 0xffffffff00000000);
    local_18 = FUN_144580e52;
    local_28 = param_2;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x208);
    if ((lVar2 == 0) || (*(int *)(lVar2 + 0x38) < 1)) {
      local_38 = 0;
    }
    else {
      local_38 = **(undefined8 **)(lVar2 + 0x30);
    }
    local_40 = &local_38;
    local_20 = &local_50;
    local_48 = &local_30;
    uVar1 = *(undefined4 *)(param_2 + 8);
    local_58 = &local_18;
    local_18 = (code *)0x0;
    local_10 = (code **)((ulonglong)local_10 & 0xffffffff00000000);
    local_28 = FUN_144580d78;
    local_50 = param_2;
  }
  local_60 = 0;
  local_30 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",uVar1,1);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bbace FUN_1496bbace body=46 status=ok
// SIG undefined FUN_1496bbace(void)

longlong * FUN_1496bbace(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1496bbafc(param_2[1]);
  (**(code **)(*plVar1 + 0x468))(plVar1,*param_2);
  return plVar1;
}



// FUNCTION 1496bbafc FUN_1496bbafc body=175 status=ok
// SIG undefined FUN_1496bbafc(void)

undefined8 FUN_1496bbafc(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145bae822();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bbbac FUN_1496bbbac body=142 status=ok
// SIG undefined FUN_1496bbbac(void)

bool FUN_1496bbbac(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined1 *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_148441d74();
  if (cVar2 == '\0') {
    bVar3 = false;
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x10);
    local_30 = &local_39;
    local_38 = &LAB_144580f0e;
    uVar5 = (**(code **)(*param_1 + 0x2c0))(param_1);
    iVar4 = (**(code **)(*plVar1 + 0x2d0))(plVar1,param_2,uVar5,&local_38);
    bVar3 = 0 < iVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bbc44 FUN_1496bbc44 body=1306 status=ok
// SIG undefined FUN_1496bbc44(void)

void FUN_1496bbc44(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  wchar_t *pwVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  wchar_t **ppwVar10;
  longlong *plVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_138 [36];
  undefined1 local_114 [4];
  undefined1 local_110 [8];
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_14962cee2();
  *(undefined1 *)(param_1[0x20] + 0xbd) = 0;
  *(undefined1 *)(param_1[0x20] + 0xbc) = 0;
  plVar8 = (longlong *)param_1[0x20];
  FUN_140056680(&local_d8,&DAT_149dfb77a);
  (**(code **)(*plVar8 + 0x2a8))(plVar8,param_1,&local_d8);
  if (local_d8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  lVar9 = param_1[0x14];
  if (lVar9 == 0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    uVar6 = FUN_145a7b1c0();
    plVar8 = (longlong *)FUN_144718840(lVar9,uVar6);
  }
  (**(code **)(*plVar8 + 0x28))(plVar8,&local_d8);
  ppwVar10 = &local_d8;
  plVar5 = param_1 + 0x62;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *plVar5 = (longlong)*ppwVar10;
    ppwVar10 = ppwVar10 + 1;
    plVar5 = plVar5 + 1;
  }
  if (*(longlong **)(param_1[0x54] + 0x50) == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(**(longlong **)(param_1[0x54] + 0x50) + 0xa88))();
  }
  plVar5 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149fab260;
  FUN_146bff712(plVar5 + 2,uVar6);
  if (plVar5 == (longlong *)0x0) {
    param_1[0x60] = 0x10;
    plVar11 = (longlong *)param_1[0x61];
    if (plVar11 == (longlong *)0x0) goto LAB_1496bbe09;
    param_1[0x61] = 0;
LAB_1496bbd86:
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    if (plVar5 == (longlong *)0x0) goto LAB_1496bbe09;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    param_1[0x60] = (longlong)(plVar5 + 2);
    plVar11 = (longlong *)param_1[0x61];
    if (plVar5 == plVar11) {
      LOCK();
      plVar11 = plVar5 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    else {
      param_1[0x61] = (longlong)plVar5;
      if (plVar11 != (longlong *)0x0) goto LAB_1496bbd86;
    }
  }
  LOCK();
  plVar11 = plVar5 + 1;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)*plVar11 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_1496bbe09:
  FUN_146c38c5e(param_1[0x60],0);
  FUN_145c688c4(param_1[0x60],&local_108,1);
  dVar14 = (double)(-(ulonglong)(0.0 <= local_e0 - local_f8) & (ulonglong)(local_e0 - local_f8));
  dVar15 = (double)(-(ulonglong)(0.0 <= local_e8 - local_100) & (ulonglong)(local_e8 - local_100));
  dVar3 = (double)(~-(ulonglong)(dVar15 <= dVar14) & (ulonglong)dVar14 |
                  -(ulonglong)(dVar15 <= dVar14) & (ulonglong)dVar15);
  dVar13 = (double)(-(ulonglong)(0.0 <= local_f0 - local_108) & (ulonglong)(local_f0 - local_108));
  uVar12 = -(ulonglong)(dVar13 <= dVar3);
  param_1[0x6e] =
       (longlong)((double)(uVar12 & (ulonglong)dVar13 | ~uVar12 & (ulonglong)dVar3) * 0.001);
  dVar3 = (double)(~-(ulonglong)(dVar14 <= dVar15) & (ulonglong)dVar14 |
                  -(ulonglong)(dVar14 <= dVar15) & (ulonglong)dVar15);
  uVar12 = -(ulonglong)(dVar3 <= dVar13);
  param_1[0x7c] = uVar12 & (ulonglong)dVar13 | ~uVar12 & (ulonglong)dVar3;
  plVar5 = (longlong *)FUN_1496bc15f(param_1);
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar5);
  }
  param_1[0x5e] = (longlong)plVar5;
  FUN_140056680(&local_d8,&DAT_149dfb77a);
  (**(code **)(*plVar5 + 0x2a8))(plVar5,param_1,&local_d8);
  if (local_d8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x5e]);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x20],0);
  local_68 = 0;
  local_58 = &PTR_LAB_14bdcda70;
  local_78 = &LAB_144580f16;
  local_50 = param_1;
  FUN_1484c9b00(param_1[0x5e] + 0x28,param_1[0x5e] + 0xa8);
  FUN_1484400a8(param_1);
  lVar9 = FUN_1484ec096(param_1);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar9);
  }
  param_1[0x5f] = lVar9;
  (**(code **)(*plVar8 + 0x28))(plVar8,&local_d8);
  uVar6 = (**(code **)(*plVar8 + 0x18))(plVar8);
  uVar6 = FUN_1447210f0(uVar6);
  FUN_1484e0ce2(lVar9,uVar6,&local_d8);
  FUN_1496bc210(param_1);
  uVar6 = FUN_14851c72a(param_1[0x54]);
  local_d8 = (wchar_t *)0x0;
  local_d0 = 0;
  FUN_1446efa72(&local_d8,0,2,0x10);
  pwVar4 = local_d8;
  local_d0 = 2;
  *(undefined ***)local_d8 = &PTR_LAB_149e020b0;
  uVar7 = FUN_144a3f946();
  *(undefined8 *)(pwVar4 + 8) = uVar7;
  *(undefined ***)pwVar4 = &PTR_FUN_14bdcda90;
  *(longlong **)(pwVar4 + 0xc) = param_1;
  FUN_1448b6402(uVar6,local_110,&local_d8);
  FUN_1449db362(&local_d8);
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_d8 = L"OnStartSeamSculptTool";
  local_d0 = 0x15;
  FUN_1446e940c(local_110,&local_d8);
  local_d8 = L"UMeshSelectionTool";
  local_d0 = 0x12;
  FUN_1446e940c(local_114,&local_d8);
  FUN_140208bae(&local_d8,local_114,local_110,
                L"Draw UV seams on the mesh by left click-dragging between mesh vertices.");
  (**(code **)(*plVar8 + 0x340))(plVar8,&local_d8,2);
  if (local_d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_d8 + 0x10))();
  }
  *(undefined1 *)(param_1[0x51] + 0x38) = 0;
  if ((local_30 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496bc15f FUN_1496bc15f body=175 status=ok
// SIG undefined FUN_1496bc15f(void)

undefined8 FUN_1496bc15f(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459fc67a();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bc210 FUN_1496bc210 body=635 status=ok
// SIG undefined FUN_1496bc210(void)

void FUN_1496bc210(longlong param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0x50);
  if (plVar2 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*plVar2 + 0xa88))();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x2f8);
  FUN_140056680(&local_88,L"BoundaryEdges");
  uVar5 = FUN_1484e0748(uVar5,&local_88);
  if (CONCAT44(uStack_84,local_88) != 0) {
    FUN_1400020a8();
  }
  uVar9 = *(int *)(lVar4 + 0x1d0) * 0x200 + *(int *)(lVar4 + 0x1d4);
  uVar11 = 0;
  if ((uVar9 != 0) &&
     (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x1d8) - 1U))) {
    uVar12 = 1;
    uVar6 = 1;
    if (1 < (int)uVar9) {
      uVar12 = uVar9;
    }
    do {
      uVar11 = uVar12;
      if (uVar12 == uVar6) break;
      uVar8 = uVar6 >> 9;
      uVar10 = uVar6 & 0x1ff;
      uVar11 = uVar6;
      uVar6 = uVar6 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar4 + 0x1d8))[uVar8] +
                                         (ulonglong)uVar10 * 2) - 1U));
  }
  if (uVar11 != uVar9) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x1c0) + (ulonglong)(uVar11 >> 9) * 8);
      if (*(int *)(lVar3 + 0xc + (ulonglong)((uVar11 & 0x1ff) << 4)) == -1) {
        uVar7 = *(ulonglong *)(lVar3 + (ulonglong)((uVar11 & 0x1ff) << 4));
        lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (uVar7 >> 9 & 0x7fffff) * 8);
        local_b8 = *(undefined8 *)(lVar3 + 0x10 + (uVar7 & 0x1ff) * 0x18);
        puVar1 = (undefined4 *)(lVar3 + (uVar7 & 0x1ff) * 0x18);
        local_c8 = *puVar1;
        uStack_c4 = puVar1[1];
        uStack_c0 = puVar1[2];
        uStack_bc = puVar1[3];
        lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (uVar7 >> 0x29) * 8);
        uVar7 = uVar7 >> 0x20 & 0x1ff;
        local_98 = *(undefined8 *)(lVar3 + 0x10 + uVar7 * 0x18);
        puVar1 = (undefined4 *)(lVar3 + uVar7 * 0x18);
        local_a8 = *puVar1;
        uStack_a4 = puVar1[1];
        uStack_a0 = puVar1[2];
        uStack_9c = puVar1[3];
        local_58 = 0xff0f0fff;
        local_54 = 0x40c00000;
        local_88 = local_c8;
        uStack_84 = uStack_c4;
        uStack_80 = uStack_c0;
        uStack_7c = uStack_bc;
        local_78 = local_b8;
        local_70 = local_a8;
        uStack_6c = uStack_a4;
        uStack_68 = uStack_a0;
        uStack_64 = uStack_9c;
        local_60 = local_98;
        FUN_1484d0812(uVar5,&local_88);
      }
      uVar12 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar9) {
        uVar12 = uVar9;
      }
      do {
        uVar6 = uVar12;
        if (uVar12 - 1 == uVar11) break;
        uVar11 = uVar11 + 1;
        uVar6 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar4 + 0x1d8) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      uVar11 = uVar6;
    } while (uVar11 != uVar9);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x2f8);
  FUN_140056680(&local_88,L"Seams");
  FUN_1484e0748(uVar5,&local_88);
  if (CONCAT44(uStack_84,local_88) != 0) {
    FUN_1400020a8();
  }
  FUN_1496bc690(param_1);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496bc48c FUN_1496bc48c body=477 status=ok
// SIG undefined FUN_1496bc48c(void)

void FUN_1496bc48c(longlong *param_1,char param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined1 local_270 [4];
  undefined1 local_26c [4];
  wchar_t *local_268;
  undefined4 local_260;
  longlong local_258 [65];
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_298;
  FUN_1484e0e5e(param_1[0x5f]);
  plVar1 = (longlong *)param_1[0x5e];
  FUN_140056680(local_258,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_258);
  if (local_258[0] != 0) {
    FUN_1400020a8();
  }
  if (param_2 == '\x01') {
    if (*(longlong **)(param_1[0x54] + 0x50) == (longlong *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_1[0x54] + 0x50) + 0xa88))();
    }
    FUN_146bff712(local_258,uVar2);
    if (*(int *)(local_50 + 0x28) < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = **(undefined8 **)(local_50 + 0x20);
    }
    FUN_14834355b(uVar2);
    lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_268 = L"SeamSculptTransactionName";
    local_260 = 0x19;
    FUN_1446e940c(local_26c,&local_268);
    local_268 = L"UMeshSelectionTool";
    local_260 = 0x12;
    FUN_1446e940c(local_270,&local_268);
    FUN_140208bae(&local_268,local_270,local_26c,L"UV Seam Edit");
    (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x10))(lVar3 + 0x28,&local_268);
    if (local_268 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_268 + 0x10))();
    }
    local_268 = (wchar_t *)0x1000000010101;
    local_278 = 0;
    FUN_148506f34(param_1[0x14],local_258,1);
    lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x18))(lVar3 + 0x28);
    FUN_141082778(local_258);
  }
  if ((local_38 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bc66a FUN_1496bc66a body=37 status=ok
// SIG undefined FUN_1496bc66a(void)

void FUN_1496bc66a(longlong param_1)

{
  if (*(char *)(param_1 + 0x378) == '\x01') {
    FUN_1496bc690();
    *(undefined1 *)(param_1 + 0x378) = 0;
  }
  return;
}



// FUNCTION 1496bc690 FUN_1496bc690 body=765 status=ok
// SIG undefined FUN_1496bc690(void)

void FUN_1496bc690(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulonglong uVar16;
  float *pfVar17;
  float *pfVar18;
  uint uVar19;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined4 local_70;
  undefined8 local_6c;
  ulonglong local_60;
  ulonglong uVar12;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)(param_1 + 0x300);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0x50);
  if (plVar3 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = (**(code **)(*plVar3 + 0xa88))();
  }
  if (*(int *)(*(longlong *)(lVar8 + 0x208) + 0x28) < 1) {
    uVar14 = 0;
  }
  else {
    uVar14 = **(undefined8 **)(*(longlong *)(lVar8 + 0x208) + 0x20);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x2f8);
  FUN_140056680(&local_a0,L"Seams");
  uVar9 = FUN_1484e0f44(uVar9,&local_a0);
  if (local_a0 != 0.0) {
    FUN_1400020a8();
  }
  FUN_1484d04e2(uVar9);
  uVar15 = *(int *)(lVar8 + 0x1d0) * 0x200 + *(int *)(lVar8 + 0x1d4);
  uVar10 = 0;
  if ((uVar15 != 0) &&
     (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar8 + 0x1d8) - 1U))) {
    uVar19 = 1;
    uVar7 = 1;
    if (1 < (int)uVar15) {
      uVar19 = uVar15;
    }
    do {
      uVar11 = uVar7;
      uVar10 = uVar19;
      if (uVar19 == uVar11) break;
      uVar7 = uVar11 + 1;
      uVar10 = uVar11;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar8 + 0x1d8))[uVar11 >> 9] +
                                         (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
  }
  do {
    uVar19 = uVar10;
    if (uVar19 == uVar15) {
      if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    cVar6 = FUN_146c1a770(uVar14,uVar19,0);
    if (cVar6 != '\0') {
      uVar4 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x1c0) + (ulonglong)(uVar19 >> 9) * 8) +
               (ulonglong)((uVar19 & 0x1ff) << 4));
      uVar16 = uVar4 >> 9 & 0x7fffff;
      uVar10 = (uint)uVar4 & 0x1ff;
      uVar12 = (ulonglong)uVar10;
      pfVar17 = (float *)&DAT_14c846370;
      if (*(char *)(lVar2 + 0x70) == '\x01') {
        pfVar17 = (float *)((ulonglong)(uVar10 * 0xc) +
                           *(longlong *)(*(longlong *)(lVar2 + 0x60) + uVar16 * 8));
      }
      uVar10 = (uint)(uVar4 >> 0x20) & 0x1ff;
      uVar13 = (ulonglong)uVar10;
      pfVar18 = (float *)&DAT_14c846370;
      if (*(char *)(lVar2 + 0x70) != '\0') {
        pfVar18 = (float *)((ulonglong)(uVar10 * 0xc) +
                           *(longlong *)(*(longlong *)(lVar2 + 0x60) + (uVar4 >> 0x29) * 8));
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + uVar16 * 8);
      dVar1 = *(double *)(param_1 + 0x370);
      local_90 = (double)pfVar17[2] * dVar1 + *(double *)(lVar5 + 0x10 + uVar12 * 0x18);
      local_98 = (double)pfVar17[1] * dVar1 + *(double *)(lVar5 + 8 + uVar12 * 0x18);
      local_a0 = (double)*pfVar17 * dVar1 + *(double *)(lVar5 + uVar12 * 0x18);
      lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (uVar4 >> 0x29) * 8);
      local_78 = (double)pfVar18[2] * dVar1 + *(double *)(lVar5 + 0x10 + uVar13 * 0x18);
      local_80 = (double)pfVar18[1] * dVar1 + *(double *)(lVar5 + 8 + uVar13 * 0x18);
      local_88 = (double)*pfVar18 * dVar1 + *(double *)(lVar5 + uVar13 * 0x18);
      local_70 = 0xff199619;
      local_6c = 0x40800000;
      FUN_1484d0812(uVar9,&local_a0);
    }
    uVar7 = uVar19 + 1;
    if ((int)(uVar19 + 1) < (int)uVar15) {
      uVar7 = uVar15;
    }
    do {
      uVar10 = uVar7;
      if (uVar7 - 1 == uVar19) break;
      uVar19 = uVar19 + 1;
      uVar10 = uVar19;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar8 + 0x1d8) +
                                           (ulonglong)(uVar19 >> 9) * 8) +
                                         (ulonglong)(uVar19 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 1496bc98e FUN_1496bc98e body=315 status=ok
// SIG undefined FUN_1496bc98e(void)

void FUN_1496bc98e(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [16];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148440f04();
  if (-1 < (int)param_1[0x73]) {
    *(undefined4 *)(param_1 + 0x7a) = 1;
    *(int *)(param_1 + 0x77) = (int)param_1[0x73];
    *(int *)(param_1 + 0x74) = (int)param_1[0x70];
    *(undefined4 *)((longlong)param_1 + 0x3a4) = *(undefined4 *)((longlong)param_1 + 900);
    *(int *)(param_1 + 0x75) = (int)param_1[0x71];
    *(undefined4 *)((longlong)param_1 + 0x3ac) = *(undefined4 *)((longlong)param_1 + 0x38c);
    param_1[0x76] = param_1[0x72];
    uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_48 = L"CreateSeamChange";
    local_40 = 0x10;
    FUN_1446e940c(local_5c,&local_48);
    local_48 = L"UMeshSelectionTool";
    local_40 = 0x12;
    FUN_1446e940c(local_60,&local_48);
    FUN_140208bae(local_58,local_60,local_5c,L"Add UV Seam");
    FUN_148558a3c(param_1 + 0x5c,local_58,uVar1);
    if (*(int *)((longlong)param_1 + 0x3cc) < 0) {
      *(undefined4 *)(param_1 + 0x79) = 0;
      FUN_14481578e(param_1 + 0x78,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x79) = 0;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bcaca FUN_1496bcaca body=1212 status=ok
// SIG undefined FUN_1496bcaca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1496bcaca(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  longlong *plVar14;
  float *pfVar15;
  longlong lVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined1 local_160 [8];
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  longlong *local_118;
  longlong local_108 [4];
  undefined1 local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_148441000();
  local_178 = *(double *)(param_2 + 0x18);
  dStack_170 = *(double *)(param_2 + 0x20);
  local_188 = *(double *)(param_1 + 0x310);
  dStack_180 = *(double *)(param_1 + 0x318);
  auVar3 = *(undefined1 (*) [16])(param_1 + 0x350);
  dVar8 = -local_188;
  dVar9 = -dStack_180;
  dVar6 = *(double *)(param_1 + 800) * -1.0;
  dVar7 = *(double *)(param_1 + 0x328) * 1.0;
  dVar25 = dStack_170 * dVar8 - local_178 * dVar9;
  dVar26 = *(double *)(param_2 + 0x28) * dVar9 - dStack_170 * dVar6;
  dVar24 = local_178 * dVar6 - *(double *)(param_2 + 0x28) * dVar8;
  auVar18 = divpd(_DAT_149934d80,auVar3);
  dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar18._0_8_);
  dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) & auVar18._8_8_);
  dVar10 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x360))) &
                   (ulonglong)(1.0 / *(double *)(param_1 + 0x360)));
  dVar21 = *(double *)(param_1 + 0x118) - *(double *)(param_1 + 0x330);
  dVar22 = *(double *)(param_1 + 0x120) - *(double *)(param_1 + 0x338);
  dVar17 = *(double *)(param_1 + 0x128) - *(double *)(param_1 + 0x340);
  dVar19 = dVar22 * dVar8 - dVar9 * dVar21;
  dVar20 = dVar17 * dVar9 - dVar6 * dVar22;
  dVar23 = dVar21 * dVar6 - dVar17 * dVar8;
  dVar20 = dVar20 + dVar20;
  dVar23 = dVar23 + dVar23;
  dVar19 = dVar19 + dVar19;
  dVar25 = dVar25 + dVar25;
  dVar2 = *(double *)(param_2 + 0x28);
  local_158 = ((dVar19 * dVar9 - dVar23 * dVar6) + dVar7 * dVar20 + dVar21) * dVar4;
  dStack_150 = (local_188 * dVar19 + dVar6 * dVar20 + dVar7 * dVar23 + dVar22) * dVar5;
  local_148 = (dVar19 * dVar7 + dVar17 + (dVar23 * dVar8 - dVar20 * dVar9)) * dVar10;
  plVar14 = (longlong *)FUN_14851bdc2(*(undefined8 *)(param_1 + 0x2a0));
  local_198 = &local_138;
  local_138 = 0x7fefffffffffffff;
  local_128 = 0;
  local_118 = (longlong *)0x0;
  local_e8 = 0;
  uVar13 = (**(code **)(*plVar14 + 0x60))(plVar14,&local_158,local_160,0x7fefffffffffffff);
  if (local_128 != 0) {
    plVar14 = local_118;
    if (local_118 == (longlong *)0x0) {
      plVar14 = local_108;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (*(char *)(*(longlong *)(param_1 + 0x300) + 0x70) == '\x01') {
    pfVar15 = (float *)((ulonglong)((uVar13 & 0x1ff) * 0xc) +
                       *(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x300) + 0x60) +
                        (ulonglong)(uVar13 >> 9) * 8));
  }
  else {
    pfVar15 = (float *)&DAT_14c846370;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x2f0) + 0xa9) == '\0') {
    dVar26 = dVar26 + dVar26;
    dVar24 = dVar24 + dVar24;
    if (0.0 < dVar5 * (local_188 * dVar25 + dVar6 * dVar26 + dStack_170 + dVar7 * dVar24) *
              (double)pfVar15[1] +
              (double)*pfVar15 *
              dVar4 * ((dVar25 * dVar9 - dVar6 * dVar24) + local_178 + dVar7 * dVar26) +
              (double)pfVar15[2] *
              dVar10 * (dVar7 * dVar25 + dVar2 + (dVar24 * dVar8 - dVar9 * dVar26)))
    goto LAB_1496bce2a;
  }
  plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0x50);
  if (plVar14 == (longlong *)0x0) {
    lVar16 = 0;
  }
  else {
    lVar16 = (**(code **)(*plVar14 + 0xa88))();
  }
  lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x10) + (ulonglong)(uVar13 >> 9) * 8);
  local_128 = *(longlong *)(lVar16 + 0x10 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
  puVar1 = (undefined8 *)(lVar16 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
  uVar11 = *(undefined4 *)puVar1;
  uVar12 = *(undefined4 *)((longlong)puVar1 + 4);
  local_138 = *puVar1;
  uStack_130 = *(undefined4 *)(puVar1 + 1);
  uStack_12c = *(undefined4 *)((longlong)puVar1 + 0xc);
  if (*(int *)(param_1 + 0x3d0) == 1) {
    *(uint *)(param_1 + 0x398) = uVar13;
    *(undefined4 *)(param_1 + 0x380) = uVar11;
    *(undefined4 *)(param_1 + 900) = uVar12;
    *(undefined4 *)(param_1 + 0x388) = uStack_130;
    *(undefined4 *)(param_1 + 0x38c) = uStack_12c;
    *(longlong *)(param_1 + 0x390) = local_128;
    FUN_1496bcf88(param_1);
  }
LAB_1496bce2a:
  if ((local_d0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496bcf88 FUN_1496bcf88 body=942 status=ok
// SIG undefined FUN_1496bcf88(void)

void FUN_1496bcf88(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_298 [32];
  code *local_278;
  undefined8 uStack_270;
  longlong *local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 local_238 [80];
  undefined1 local_1e8;
  code *local_1d8;
  undefined8 uStack_1d0;
  longlong *local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_298;
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  if (*(int *)(param_1 + 0x3cc) < 0) {
    FUN_14481578e(param_1 + 0x3c0,0);
  }
  if (-1 < (int)(*(uint *)(param_1 + 0x398) | *(uint *)(param_1 + 0x3b8)) &&
      *(uint *)(param_1 + 0x3b8) != *(uint *)(param_1 + 0x398)) {
    plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0x50);
    if (plVar16 == (longlong *)0x0) {
      lVar14 = 0;
    }
    else {
      lVar14 = (**(code **)(*plVar16 + 0xa88))();
    }
    FUN_1483387d2(local_238,lVar14);
    if ((0.0 < *(double *)(*(longlong *)(param_1 + 0x2f0) + 0xb0)) &&
       (0.0 < *(double *)(param_1 + 0x3e0))) {
      local_1e8 = 1;
      lVar5 = *(longlong *)
               (*(longlong *)(lVar14 + 0x10) + (ulonglong)(*(uint *)(param_1 + 0x398) >> 9) * 8);
      uVar15 = (ulonglong)*(uint *)(param_1 + 0x398) & 0x1ff;
      lVar6 = *(longlong *)
               (*(longlong *)(lVar14 + 0x10) + (ulonglong)(*(uint *)(param_1 + 0x3b8) >> 9) * 8);
      uVar17 = (ulonglong)*(uint *)(param_1 + 0x3b8) & 0x1ff;
      dVar1 = *(double *)(lVar6 + uVar17 * 0x18);
      dVar2 = *(double *)(lVar6 + 8 + uVar17 * 0x18);
      dVar3 = *(double *)(lVar6 + 0x10 + uVar17 * 0x18);
      dVar9 = *(double *)(lVar5 + 0x10 + uVar15 * 0x18) - dVar3;
      dVar18 = *(double *)(lVar5 + 8 + uVar15 * 0x18) - dVar2;
      dVar20 = *(double *)(lVar5 + uVar15 * 0x18) - dVar1;
      dVar8 = SQRT(dVar9 * dVar9 + dVar20 * dVar20 + dVar18 * dVar18);
      dVar19 = 0.0;
      dVar7 = 1.0 / dVar8;
      if (0.0 < dVar8) {
        dVar9 = dVar9 * dVar7;
        dVar19 = dVar18 * dVar7;
      }
      else {
        dVar9 = 0.0;
      }
      local_278 = (code *)0x0;
      plVar16 = (longlong *)FUN_14001cc68(0x48,8);
      uVar12 = uStack_1c0;
      local_268 = local_1c8;
      uVar11 = uStack_1d0;
      pcVar10 = local_1d8;
      *plVar16 = (longlong)&PTR_LAB_14bdcdb00;
      plVar16[1] = param_1;
      plVar16[2] = lVar14;
      plVar16[3] = (longlong)dVar1;
      plVar16[4] = (longlong)dVar2;
      plVar16[5] = (longlong)dVar3;
      plVar16[6] = -(ulonglong)(0.0 < dVar8) & (ulonglong)(dVar20 * dVar7);
      plVar16[7] = (longlong)dVar19;
      plVar16[8] = (longlong)dVar9;
      if (plVar16 + 1 != (longlong *)0x0) {
        local_278 = FUN_1445810fc;
      }
      local_1d8 = local_278;
      uStack_1d0 = uStack_270;
      local_1c8 = plVar16;
      uStack_1c0 = uStack_260;
      local_278 = pcVar10;
      uStack_270 = uVar11;
      uStack_260 = uVar12;
      local_258 = local_1b8;
      uStack_254 = uStack_1b4;
      uStack_250 = uStack_1b0;
      uStack_24c = uStack_1ac;
      local_248 = local_1a8;
      uStack_244 = uStack_1a4;
      uStack_240 = uStack_1a0;
      uStack_23c = uStack_19c;
      if (pcVar10 != (code *)0x0) {
        plVar16 = local_268;
        if (local_268 == (longlong *)0x0) {
          plVar16 = (longlong *)&local_258;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
    }
    local_278 = (code *)0x0;
    uVar4 = *(undefined4 *)(param_1 + 0x3b8);
    uStack_270 = 1;
    FUN_14834f448(&local_278,0);
    *(undefined4 *)local_278 = uVar4;
    *(undefined4 *)(local_278 + 4) = uVar4;
    *(undefined8 *)(local_278 + 8) = 0;
    cVar13 = FUN_14834e91a(local_238,&local_278,*(undefined4 *)(param_1 + 0x398),0xffffffff);
    if (cVar13 != '\0') {
      FUN_14834eb2e(local_238,*(undefined4 *)(param_1 + 0x398),param_1 + 0x3c0,100000);
    }
    if (local_278 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_148338d34(local_238);
  }
  if ((local_90 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bd338 FUN_1496bd338 body=125 status=ok
// SIG undefined FUN_1496bd338(void)

void FUN_1496bd338(longlong *param_1)

{
  undefined8 uVar1;
  
  FUN_1484410f4();
  if ((int)param_1[0x7a] == 1) {
    FUN_1496bd3b6(param_1);
    if (*(int *)((longlong)param_1 + 0x3cc) < 0) {
      *(undefined4 *)(param_1 + 0x79) = 0;
      FUN_14481578e(param_1 + 0x78,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x79) = 0;
    }
    uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_148558a82(param_1 + 0x5c,uVar1);
  }
  *(undefined4 *)(param_1 + 0x7a) = 0;
  return;
}



// FUNCTION 1496bd3b6 FUN_1496bd3b6 body=367 status=ok
// SIG undefined FUN_1496bd3b6(void)

void FUN_1496bd3b6(wchar_t *param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  code *local_68;
  wchar_t **local_60;
  longlong *local_58;
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (1 < *(int *)(param_1 + 0x1e4)) {
    local_60 = &local_50;
    local_68 = FUN_144581332;
    local_50 = param_1;
    FUN_14851c46c(*(longlong *)(param_1 + 0x150),&local_58);
    lVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
    local_50 = L"CreateSeamChange";
    local_48 = 0x10;
    FUN_1446e940c(local_6c,&local_50);
    local_50 = L"UMeshSelectionTool";
    local_48 = 0x12;
    FUN_1446e940c(local_70,&local_50);
    FUN_140208bae(&local_50,local_70,local_6c,L"Add UV Seam");
    local_78 = local_58;
    local_58 = (longlong *)0x0;
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x20))
              (lVar1 + 0x28,*(longlong *)(param_1 + 0x150),&local_78,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    param_1[0x1e4] = L'\0';
    param_1[0x1e5] = L'\0';
    if (*(int *)(param_1 + 0x1e6) < 0) {
      FUN_14481578e(param_1 + 0x1e0,0);
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x40))(local_58,1);
    }
  }
  *(undefined1 *)(param_1 + 0x1bc) = 1;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bd526 FUN_1496bd526 body=1167 status=ok
// SIG undefined FUN_1496bd526(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1496bd526(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  longlong *plVar17;
  float *pfVar18;
  longlong lVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined1 local_160 [8];
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 local_138 [2];
  longlong local_128;
  longlong *local_118;
  longlong local_108 [4];
  undefined1 local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar15 = FUN_148441104();
  if ((char)uVar15 != '\0') {
    local_178 = *(double *)(param_2 + 0x18);
    dStack_170 = *(double *)(param_2 + 0x20);
    local_188 = *(double *)(param_1 + 0x260);
    dStack_180 = *(double *)(param_1 + 0x268);
    auVar3 = *(undefined1 (*) [16])(param_1 + 0x2a0);
    dVar8 = -local_188;
    dVar9 = -dStack_180;
    dVar6 = *(double *)(param_1 + 0x270) * -1.0;
    dVar7 = *(double *)(param_1 + 0x278) * 1.0;
    dVar28 = dStack_170 * dVar8 - local_178 * dVar9;
    dVar29 = *(double *)(param_2 + 0x28) * dVar9 - dStack_170 * dVar6;
    dVar27 = local_178 * dVar6 - *(double *)(param_2 + 0x28) * dVar8;
    auVar21 = divpd(_DAT_149934d80,auVar3);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar21._0_8_);
    dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) & auVar21._8_8_);
    dVar10 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x2b0))) &
                     (ulonglong)(1.0 / *(double *)(param_1 + 0x2b0)));
    dVar24 = *(double *)(param_1 + 0x68) - *(double *)(param_1 + 0x280);
    dVar25 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x288);
    dVar20 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x290);
    dVar22 = dVar25 * dVar8 - dVar9 * dVar24;
    dVar23 = dVar20 * dVar9 - dVar6 * dVar25;
    dVar26 = dVar24 * dVar6 - dVar20 * dVar8;
    dVar23 = dVar23 + dVar23;
    dVar26 = dVar26 + dVar26;
    dVar22 = dVar22 + dVar22;
    dVar28 = dVar28 + dVar28;
    dVar2 = *(double *)(param_2 + 0x28);
    local_158 = ((dVar22 * dVar9 - dVar26 * dVar6) + dVar7 * dVar23 + dVar24) * dVar4;
    dStack_150 = (local_188 * dVar22 + dVar6 * dVar23 + dVar7 * dVar26 + dVar25) * dVar5;
    local_148 = (dVar22 * dVar7 + dVar20 + (dVar26 * dVar8 - dVar23 * dVar9)) * dVar10;
    plVar17 = (longlong *)FUN_14851bdc2(*(undefined8 *)(param_1 + 0x1f0));
    local_198 = local_138;
    local_138[0] = 0x7fefffffffffffff;
    local_128 = 0;
    local_118 = (longlong *)0x0;
    local_e8 = 0;
    uVar16 = (**(code **)(*plVar17 + 0x60))(plVar17,&local_158,local_160,0x7fefffffffffffff);
    if (local_128 != 0) {
      plVar17 = local_118;
      if (local_118 == (longlong *)0x0) {
        plVar17 = local_108;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    if (*(char *)(*(longlong *)(param_1 + 0x250) + 0x70) == '\x01') {
      pfVar18 = (float *)((ulonglong)((uVar16 & 0x1ff) * 0xc) +
                         *(longlong *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x250) + 0x60) +
                          (ulonglong)(uVar16 >> 9) * 8));
    }
    else {
      pfVar18 = (float *)&DAT_14c846370;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x240) + 0xa9) == '\0') {
      dVar29 = dVar29 + dVar29;
      dVar27 = dVar27 + dVar27;
      if (0.0 <= dVar5 * (local_188 * dVar28 + dVar6 * dVar29 + dStack_170 + dVar7 * dVar27) *
                 (double)pfVar18[1] +
                 (double)*pfVar18 *
                 dVar4 * ((dVar28 * dVar9 - dVar6 * dVar27) + local_178 + dVar7 * dVar29) +
                 (double)pfVar18[2] *
                 dVar10 * (dVar7 * dVar28 + dVar2 + (dVar27 * dVar8 - dVar9 * dVar29)))
      goto LAB_1496bd92c;
    }
    *(uint *)(param_1 + 0x2e8) = uVar16;
    plVar17 = *(longlong **)(*(longlong *)(param_1 + 0x1f0) + 0x50);
    if (plVar17 == (longlong *)0x0) {
      lVar19 = 0;
    }
    else {
      lVar19 = (**(code **)(*plVar17 + 0xa88))();
      uVar16 = *(uint *)(param_1 + 0x2e8);
    }
    lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x10) + (ulonglong)(uVar16 >> 9) * 8);
    puVar1 = (undefined4 *)(lVar19 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
    uVar11 = *puVar1;
    uVar12 = puVar1[1];
    uVar13 = puVar1[2];
    uVar14 = puVar1[3];
    *(undefined8 *)(param_1 + 0x2e0) =
         *(undefined8 *)(lVar19 + 0x10 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
    *(undefined4 *)(param_1 + 0x2d0) = uVar11;
    *(undefined4 *)(param_1 + 0x2d4) = uVar12;
    *(undefined4 *)(param_1 + 0x2d8) = uVar13;
    *(undefined4 *)(param_1 + 0x2dc) = uVar14;
  }
LAB_1496bd92c:
  if ((local_d0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bd9b8 FUN_1496bd9b8 body=1354 status=ok
// SIG undefined FUN_1496bd9b8(void)

void FUN_1496bd9b8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  float *pfVar12;
  float *pfVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_278 [32];
  uint local_258;
  undefined1 local_250;
  double local_240;
  undefined1 *puStack_238;
  double local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8 [24];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_90;
  ulonglong uVar4;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_141300fc0(local_1b8);
  FUN_14845339e(local_1b8,param_2);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x48);
  if (lVar5 == 0) {
    local_218 = ZEXT816(0);
    local_208 = 0.0;
    uStack_200 = 0;
    uStack_1fc = 0x3ff00000;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d4 = 0x3ff00000;
    uStack_1d0 = 0;
    uStack_1cc = 0x3ff00000;
    local_1c8 = 0x3ff0000000000000;
    uStack_1c0 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x1c8);
    puVar9 = &DAT_14c846480;
    if (lVar5 != 0) {
      puVar9 = (undefined8 *)(lVar5 + 0x240);
    }
    puVar10 = (undefined8 *)local_218;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  FUN_1484534ce(local_1b8,local_218);
  if (-1 < *(int *)(param_1 + 0x398)) {
    local_240 = 0.0078125;
    puStack_238 = (undefined1 *)0x3f80000000000000;
    dVar14 = *(double *)(param_1 + 0x380) * local_b8;
    dVar15 = *(double *)(param_1 + 0x388) * dStack_b0;
    dVar17 = *(double *)(param_1 + 0x390) * local_a8;
    dVar16 = dVar15 * local_f8 - dVar14 * dStack_f0;
    dVar18 = dVar17 * dStack_f0 - dVar15 * local_e8;
    dVar19 = dVar14 * local_e8 - local_f8 * dVar17;
    dVar18 = dVar18 + dVar18;
    dVar19 = dVar19 + dVar19;
    dVar16 = dVar16 + dVar16;
    dVar15 = (local_e8 * dVar18 - local_f8 * dVar16) + dStack_e0 * dVar19 + dVar15 + dStack_d0;
    local_218._8_4_ = SUB84(dVar15,0);
    local_218._0_8_ =
         (dVar16 * dStack_f0 - dVar19 * local_e8) + dStack_e0 * dVar18 + dVar14 + local_d8;
    local_218._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    local_208 = dVar16 * dStack_e0 + dVar17 + (dVar19 * local_f8 - dVar18 * dStack_f0) + local_c8;
    local_258 = local_258 & 0xffffff00;
    (**(code **)(local_1b8[0] + 0x10))(local_1b8,local_218,&local_240,0x41000000);
  }
  if (*(int *)(param_1 + 0x3d0) == 1) {
    local_240 = 0.0078125;
    puStack_238 = &DAT_3f8000003f800000;
    local_b8 = *(double *)(param_1 + 0x3a0) * local_b8;
    dStack_b0 = *(double *)(param_1 + 0x3a8) * dStack_b0;
    local_a8 = *(double *)(param_1 + 0x3b0) * local_a8;
    dVar17 = dStack_b0 * local_f8 - local_b8 * dStack_f0;
    dVar19 = local_a8 * dStack_f0 - dStack_b0 * local_e8;
    dVar16 = local_b8 * local_e8 - local_f8 * local_a8;
    dVar19 = dVar19 + dVar19;
    dVar16 = dVar16 + dVar16;
    dVar17 = dVar17 + dVar17;
    dStack_d0 = (local_e8 * dVar19 - local_f8 * dVar17) + dStack_e0 * dVar16 + dStack_b0 + dStack_d0
    ;
    local_218._8_4_ = SUB84(dStack_d0,0);
    local_218._0_8_ =
         (dVar17 * dStack_f0 - dVar16 * local_e8) + dStack_e0 * dVar19 + local_b8 + local_d8;
    local_218._12_4_ = (int)((ulonglong)dStack_d0 >> 0x20);
    local_208 = dVar17 * dStack_e0 + local_a8 + (dVar16 * local_f8 - dVar19 * dStack_f0) + local_c8;
    local_258 = local_258 & 0xffffff00;
    (**(code **)(local_1b8[0] + 0x10))(local_1b8,local_218,&local_240,&DAT_41200000);
    iVar1 = *(int *)(param_1 + 0x3c8);
    if (1 < iVar1) {
      lVar5 = *(longlong *)(param_1 + 0x300);
      uVar8 = 0;
      do {
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x3c0) + uVar8 * 4);
        uVar7 = (ulonglong)(uVar3 >> 9);
        uVar3 = uVar3 & 0x1ff;
        uVar4 = (ulonglong)uVar3;
        pfVar12 = (float *)&DAT_14c846370;
        if (*(char *)(lVar5 + 0x70) == '\x01') {
          pfVar12 = (float *)((ulonglong)(uVar3 * 0xc) +
                             *(longlong *)(*(longlong *)(lVar5 + 0x60) + uVar7 * 8));
        }
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x3c0) + 4 + uVar8 * 4);
        uVar11 = (ulonglong)(uVar3 >> 9);
        uVar3 = uVar3 & 0x1ff;
        uVar6 = (ulonglong)uVar3;
        pfVar13 = (float *)&DAT_14c846370;
        if (*(char *)(lVar5 + 0x70) != '\0') {
          pfVar13 = (float *)((ulonglong)(uVar3 * 0xc) +
                             *(longlong *)(*(longlong *)(lVar5 + 0x60) + uVar11 * 8));
        }
        lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar7 * 8);
        dVar17 = *(double *)(param_1 + 0x370);
        local_230 = (double)pfVar12[2] * dVar17 + *(double *)(lVar2 + 0x10 + uVar4 * 0x18);
        puStack_238 = (undefined1 *)
                      ((double)pfVar12[1] * dVar17 + *(double *)(lVar2 + 8 + uVar4 * 0x18));
        local_240 = (double)*pfVar12 * dVar17 + *(double *)(lVar2 + uVar4 * 0x18);
        lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar11 * 8);
        local_208 = (double)pfVar13[2] * dVar17 + *(double *)(lVar2 + 0x10 + uVar6 * 0x18);
        uVar8 = uVar8 + 1;
        local_228 = 0x3f80000000000000;
        uStack_220 = 0x3f80000000000000;
        local_218._8_8_ = (double)pfVar13[1] * dVar17 + *(double *)(lVar2 + 8 + uVar6 * 0x18);
        local_218._0_8_ = (double)*pfVar13 * dVar17 + *(double *)(lVar2 + uVar6 * 0x18);
        local_250 = 0;
        local_258 = 0x40000000;
        FUN_1484122ca(local_1b8,&local_240,local_218,&local_228);
      } while (iVar1 - 1 != uVar8);
    }
  }
  FUN_14845342a(local_1b8);
  FUN_14008cd94(local_1b8);
  if ((local_90 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bdf38 FUN_1496bdf38 body=449 status=ok
// SIG undefined FUN_1496bdf38(void)

void FUN_1496bdf38(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)FUN_1496be0fa();
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar1);
  }
  param_1[0x21] = (longlong)plVar1;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x21]);
  local_40 = L"ToolName";
  local_38 = 8;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"USelfUnionMeshesTool";
  local_38 = 0x14;
  FUN_1446e940c(local_48,&local_40);
  FUN_140208bae(&local_40,local_48,local_44,L"Merge");
  (**(code **)(*param_1 + 0x370))(param_1,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_40 = L"OnStartTool";
  local_38 = 0xb;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"USelfUnionMeshesTool";
  local_38 = 0x14;
  FUN_1446e940c(local_48,&local_40);
  FUN_140208bae(&local_40,local_48,local_44,
                L"Compute a Self-Union of the input meshes, to resolve self-intersections. Use the transform gizmos to tweak the positions of the input objects (can help to resolve errors/failures)"
               );
  (**(code **)(*plVar1 + 0x340))(plVar1,&local_40,2);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496be0fa FUN_1496be0fa body=175 status=ok
// SIG undefined FUN_1496be0fa(void)

undefined8 FUN_1496be0fa(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459fc766();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496be1aa FUN_1496be1aa body=113 status=ok
// SIG undefined FUN_1496be1aa(void)

void FUN_1496be1aa(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x108);
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496be21c FUN_1496be21c body=36 status=ok
// SIG undefined FUN_1496be21c(void)

void FUN_1496be21c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))(param_1,0);
  FUN_1485051e4(param_1[0x1c]);
  return;
}



// FUNCTION 1496be240 FUN_1496be240 body=3378 status=ok
// SIG undefined FUN_1496be240(void)

void FUN_1496be240(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  char cVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulonglong *puVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong *puVar26;
  longlong lVar27;
  longlong *plVar28;
  longlong lVar29;
  bool bVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStack_738 [32];
  code **local_718;
  undefined1 local_710;
  char local_701;
  longlong *local_700;
  void *local_6f8;
  int local_6f0;
  undefined4 local_6ec;
  int local_6e4;
  ulonglong local_6e0;
  longlong *local_6d8;
  ulonglong uStack_6d0;
  ulonglong *local_6c8;
  undefined8 uStack_6c0;
  undefined1 local_6ac [4];
  code *local_6a8 [2];
  undefined8 *local_698;
  code *local_668 [2];
  undefined8 *local_658;
  ulonglong *local_628;
  int *piStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  double local_608;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined8 uStack_5f0;
  double local_5e8;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  double local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5b8;
  undefined4 local_5b0;
  undefined8 local_5ac;
  undefined4 local_5a4;
  undefined8 local_598;
  undefined4 local_590;
  undefined2 local_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_560;
  undefined4 local_558;
  undefined8 local_554;
  undefined4 local_54c;
  undefined8 local_540;
  undefined4 local_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_510;
  undefined4 local_508;
  undefined8 local_504;
  undefined4 local_4fc;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined2 local_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined8 local_4ac;
  undefined4 local_4a4;
  undefined8 local_498;
  undefined4 local_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_468;
  undefined4 local_460;
  undefined8 local_45c;
  undefined4 local_454;
  undefined8 local_448;
  undefined4 local_440;
  undefined2 local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_410;
  undefined4 local_408;
  undefined8 local_404;
  undefined4 local_3fc;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined8 local_3b4;
  undefined4 local_3ac;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined2 local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  ulonglong *local_368;
  int local_360;
  int local_228;
  int local_224;
  undefined8 *local_220;
  longlong local_160;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_738;
  local_6c8 = (ulonglong *)0x0;
  uStack_6c0 = (int *)0x0;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  local_6d8 = (longlong *)0x0;
  uStack_6d0 = 0;
  FUN_140bfc200(&local_6d8,(int)param_1[0x15],1);
  local_701 = param_2;
  if (*(char *)(param_1[0x21] + 0xb1) == '\0') {
    if (0 < (int)param_1[0x15]) {
      lVar25 = 0;
      do {
        FUN_148506417(&local_368,*(undefined8 *)(param_1[0x14] + lVar25 * 8),0);
        if ((longlong)local_360 != 0) {
          puVar26 = local_368 + local_360;
          puVar22 = local_368;
          do {
            piVar2 = uStack_6c0;
            local_6e0 = *puVar22;
            if ((int)uStack_140 != local_114) {
              uVar20 = ((uint)(local_6e0 >> 0x14) & 0xffff ^ (uint)(local_6e0 >> 4)) * -0x7a143595;
              uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
              puVar17 = local_108;
              if (local_108 == (undefined1 *)0x0) {
                puVar17 = local_110;
              }
              iVar21 = *(int *)(puVar17 +
                               (ulonglong)(local_100 - 1U & (uVar20 >> 0x10 ^ uVar20)) * 4);
              while (iVar21 != -1) {
                puVar3 = (ulonglong *)(local_148 + (longlong)iVar21 * 0x18);
                if (*puVar3 == local_6e0) {
                  if ((puVar3 != (ulonglong *)0x0) && (puVar3 + 1 != (ulonglong *)0x0)) {
                    local_6e4 = (int)puVar3[1];
                    goto LAB_1496be5a5;
                  }
                  break;
                }
                iVar21 = (int)puVar3[2];
              }
            }
            iVar21 = (int)uStack_6c0;
            uVar20 = (int)uStack_6c0 + 1;
            uStack_6c0 = (int *)CONCAT44(uStack_6c0._4_4_,uVar20);
            if (uStack_6c0._4_4_ < uVar20) {
              FUN_144769b64(&local_6c8,(ulonglong)piVar2 & 0xffffffff);
            }
            local_6c8[iVar21] = local_6e0;
            local_6e4 = iVar21;
            local_628 = &local_6e0;
            piStack_620 = &local_6e4;
            FUN_1474bddaa(&local_148,local_6ac,&local_628,0);
LAB_1496be5a5:
            plVar15 = local_6d8 + lVar25 * 2;
            iVar21 = (int)local_6d8[lVar25 * 2 + 1];
            *(uint *)(local_6d8 + lVar25 * 2 + 1) = iVar21 + 1U;
            if (*(uint *)((longlong)local_6d8 + lVar25 * 0x10 + 0xc) < iVar21 + 1U) {
              FUN_1446f48e2(plVar15,iVar21);
            }
            *(int *)(*plVar15 + (longlong)iVar21 * 4) = local_6e4;
            puVar22 = puVar22 + 1;
          } while (puVar22 != puVar26);
        }
        if (local_368 != (ulonglong *)0x0) {
          FUN_1400020a8(local_368);
        }
        lVar25 = lVar25 + 1;
      } while (lVar25 < (int)param_1[0x15]);
    }
  }
  else {
    FUN_148506417(&local_628,*(undefined8 *)param_1[0x14],0);
    if (local_6c8 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    local_6c8 = local_628;
    uStack_6c0 = piStack_620;
    if (0 < (int)piStack_620) {
      iVar21 = 0;
      do {
        plVar15 = local_6d8;
        iVar4 = (int)local_6d8[1];
        *(uint *)(local_6d8 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)local_6d8 + 0xc) < iVar4 + 1U) {
          FUN_1446f48e2(local_6d8,iVar4);
        }
        *(int *)(*plVar15 + (longlong)iVar4 * 4) = iVar21;
        iVar21 = iVar21 + 1;
      } while (iVar21 < (int)uStack_6c0);
    }
    if (1 < (int)param_1[0x15]) {
      lVar29 = 1;
      lVar25 = 0x10;
      do {
        lVar27 = (longlong)local_6d8 + lVar25;
        lVar5 = *(longlong *)(param_1[0x14] + lVar29 * 8);
        if (lVar5 == 0) {
          plVar15 = (longlong *)0x0;
        }
        else {
          uVar14 = FUN_145b7126e();
          plVar15 = (longlong *)FUN_144718840(lVar5,uVar14);
        }
        uVar13 = (**(code **)(*plVar15 + 0x10))();
        local_628 = (ulonglong *)((ulonglong)local_628 & 0xffffffff00000000);
        FUN_1448156a8(lVar27,&local_628,uVar13);
        lVar29 = lVar29 + 1;
        lVar25 = lVar25 + 0x10;
      } while (lVar29 < (int)param_1[0x15]);
    }
  }
  plVar15 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar15[1] = (longlong)&DAT_100000001;
  *plVar15 = (longlong)&PTR_FUN_149fab260;
  local_718 = (code **)((ulonglong)local_718 & 0xffffffffffffff00);
  FUN_1411b354a(plVar15 + 2,0,0,0);
  if (plVar15 == (longlong *)0x0) {
    param_1[0x23] = 0x10;
    plVar28 = (longlong *)param_1[0x24];
    if (plVar28 != (longlong *)0x0) {
      param_1[0x24] = 0;
LAB_1496be681:
      LOCK();
      plVar1 = plVar28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar28)(plVar28);
        LOCK();
        piVar2 = (int *)((longlong)plVar28 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
        }
      }
      if (plVar15 != (longlong *)0x0) goto LAB_1496be6f0;
    }
  }
  else {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    param_1[0x23] = (longlong)(plVar15 + 2);
    plVar28 = (longlong *)param_1[0x24];
    if (plVar15 == plVar28) {
      LOCK();
      plVar28 = plVar15 + 1;
      *(int *)plVar28 = (int)*plVar28 + -1;
      UNLOCK();
      if ((int)*plVar28 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    else {
      param_1[0x24] = (longlong)plVar15;
      if (plVar28 != (longlong *)0x0) goto LAB_1496be681;
    }
LAB_1496be6f0:
    LOCK();
    plVar28 = plVar15 + 1;
    *(int *)plVar28 = (int)*plVar28 + -1;
    UNLOCK();
    if ((int)*plVar28 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  plVar15 = param_1 + 0x23;
  FUN_14582ed12(*plVar15);
  FUN_14582eef4(param_1[0x23],0);
  FUN_14582ed9a(*(undefined8 *)(param_1[0x23] + 0x208));
  FUN_146c17f82(*(undefined8 *)(param_1[0x23] + 0x208));
  local_6e0 = param_1[0x23];
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  iVar21 = (int)param_1[0x15];
  dVar31 = 0.0;
  dVar6 = 0.0;
  dVar32 = 0.0;
  if (0 < iVar21) {
    lVar25 = 0;
    do {
      plVar28 = *(longlong **)(param_1[0x1d] + lVar25 * 8);
      (**(code **)(*plVar28 + 0x2b0))(plVar28,&local_628);
      dVar32 = local_608 + (double)param_1[0x27];
      param_1[0x27] = (longlong)dVar32;
      dVar6 = (double)CONCAT44(uStack_5fc,uStack_600) + (double)param_1[0x28];
      param_1[0x28] = (longlong)dVar6;
      dVar31 = (double)CONCAT44(uStack_5f4,uStack_5f8) + (double)param_1[0x29];
      param_1[0x29] = (longlong)dVar31;
      lVar25 = lVar25 + 1;
      iVar21 = (int)param_1[0x15];
    } while (lVar25 < iVar21);
  }
  dVar33 = 1.0 / (double)iVar21;
  param_1[0x27] = (longlong)(dVar32 * dVar33);
  param_1[0x28] = (longlong)(dVar6 * dVar33);
  param_1[0x29] = (longlong)(dVar33 * dVar31);
  if (0 < iVar21) {
    lVar25 = 0;
    bVar30 = false;
    local_700 = plVar15;
    do {
      piStack_620 = (int *)((ulonglong)piStack_620 & 0xffffffff00000000);
      local_628 = (ulonglong *)0x3e800000000;
      FUN_148506727(&local_368,*(undefined8 *)(param_1[0x14] + lVar25 * 8),&local_628);
      bVar9 = !bVar30;
      bVar30 = true;
      if (bVar9) {
        bVar30 = *(longlong *)(local_160 + 0x40) != 0;
      }
      FUN_14582ed12(&local_368);
      FUN_14582ed9a(local_160);
      lVar29 = *(longlong *)(local_160 + 0x48);
      uVar16 = local_228 * 0x200 + local_224;
      uVar20 = 0;
      if ((uVar16 != 0) && (uVar20 = 0, 0xfffd < (ushort)(*(short *)*local_220 - 1U))) {
        uVar18 = 1;
        uVar19 = 1;
        if (1 < (int)uVar16) {
          uVar18 = uVar16;
        }
        do {
          uVar20 = uVar18;
          if (uVar18 == uVar19) break;
          uVar23 = uVar19 >> 9;
          uVar24 = uVar19 & 0x1ff;
          uVar20 = uVar19;
          uVar19 = uVar19 + 1;
        } while (0xfffd < (ushort)(*(short *)(local_220[uVar23] + (ulonglong)uVar24 * 2) - 1U));
      }
LAB_1496be9d7:
      if (uVar20 != uVar16) {
        lVar5 = *(longlong *)(*(longlong *)(lVar29 + 0x20) + (ulonglong)(uVar20 >> 9) * 8);
        *(undefined4 *)(lVar5 + (ulonglong)(uVar20 & 0x1ff) * 4) =
             *(undefined4 *)
              (local_6d8[lVar25 * 2] +
              (longlong)*(int *)(lVar5 + (ulonglong)(uVar20 & 0x1ff) * 4) * 4);
        uVar18 = uVar20 + 1;
        if ((int)(uVar20 + 1) < (int)uVar16) {
          uVar18 = uVar16;
        }
        uVar19 = uVar20;
        do {
          uVar20 = uVar18;
          if (uVar18 - 1 == uVar19) break;
          uVar20 = uVar19 + 1;
          uVar19 = uVar20;
        } while (0xfffd < (ushort)(*(short *)(local_220[uVar20 >> 9] +
                                             (ulonglong)(uVar20 & 0x1ff) * 2) - 1U));
        goto LAB_1496be9d7;
      }
      plVar15 = *(longlong **)(param_1[0x1d] + lVar25 * 8);
      (**(code **)(*plVar15 + 0x2b0))(plVar15,&local_628);
      dVar32 = local_5d8;
      dVar31 = local_5e8;
      dVar6 = local_608;
      uVar12 = uStack_610;
      uVar11 = local_618;
      piVar2 = piStack_620;
      puVar22 = local_628;
      uVar14 = CONCAT44(uStack_5fc,uStack_600);
      uVar7 = CONCAT44(uStack_5f4,uStack_5f8);
      uVar8 = CONCAT44(uStack_5dc,uStack_5e0);
      if ((double)CONCAT44(uStack_5dc,uStack_5e0) * local_5e8 * local_5d8 < 0.0) {
        FUN_146c0aee0(&local_368,0);
      }
      local_608 = 0.0;
      uStack_600 = 0;
      local_628 = (ulonglong *)0x0;
      piStack_620 = (int *)0x0;
      uStack_5fc = 0x80;
      uStack_5f8 = 0xffffffff;
      uStack_5f4 = 0;
      local_5e8 = 0.0;
      uStack_5e0 = 0;
      local_5b8 = 0;
      local_5b0 = 0;
      local_5d8 = 0.0;
      uStack_5d0 = 0;
      local_5ac = 0xffffffff00000080;
      local_5a4 = 0;
      local_598 = 0;
      local_590 = 0;
      local_588 = 0x101;
      local_560 = 0;
      local_558 = 0;
      local_580 = 0;
      uStack_578 = 0;
      local_554 = 0xffffffff00000080;
      local_54c = 0;
      local_540 = 0;
      local_538 = 0;
      local_510 = 0;
      local_508 = 0;
      local_530 = 0;
      uStack_528 = 0;
      local_504 = 0xffffffff00000080;
      local_4fc = 0;
      local_4f0 = 0;
      local_4e8 = 0;
      local_4e0 = 0x101;
      local_4b8 = 0;
      local_4b0 = 0;
      local_4d8 = 0;
      uStack_4d0 = 0;
      local_4ac = 0xffffffff00000080;
      local_4a4 = 0;
      local_498 = 0;
      local_490 = 0;
      local_468 = 0;
      local_460 = 0;
      local_488 = 0;
      uStack_480 = 0;
      local_45c = 0xffffffff00000080;
      local_454 = 0;
      local_448 = 0;
      local_440 = 0;
      local_438 = 0x101;
      local_410 = 0;
      local_408 = 0;
      local_430 = 0;
      uStack_428 = 0;
      local_404 = 0xffffffff00000080;
      local_3fc = 0;
      local_3f0 = 0;
      local_3e8 = 0;
      local_3c0 = 0;
      local_3b8 = 0;
      local_3e0 = 0;
      uStack_3d8 = 0;
      local_3b4 = 0xffffffff00000080;
      local_3ac = 0;
      local_3a0 = 0;
      local_398 = 0;
      local_390 = 0x101;
      local_378 = 0;
      uStack_370 = 0;
      local_388 = 0;
      uStack_380 = 0;
      local_668[0] = (code *)0x0;
      local_658 = (undefined8 *)0x0;
      local_658 = (undefined8 *)FUN_14001cc68(0x58,8);
      *local_658 = &PTR_FUN_14bdcdb40;
      local_658[1] = puVar22;
      local_658[2] = piVar2;
      local_658[3] = uVar11;
      local_658[4] = uVar12;
      local_658[5] = dVar6;
      local_658[6] = uVar14;
      local_658[7] = uVar7;
      local_658[8] = dVar31;
      local_658[9] = uVar8;
      local_658[10] = dVar32;
      if (local_658 + 1 != (undefined8 *)0x0) {
        local_668[0] = FUN_144581654;
      }
      local_6a8[0] = (code *)0x0;
      local_698 = (undefined8 *)0x0;
      local_698 = (undefined8 *)FUN_14001cc68(0x60,8);
      *local_698 = &PTR_FUN_14bdcdb20;
      local_698[1] = puVar22;
      local_698[2] = piVar2;
      local_698[3] = uVar11;
      local_698[4] = uVar12;
      local_698[5] = dVar6;
      local_698[6] = uVar14;
      local_698[7] = uVar7;
      local_698[8] = dVar31;
      local_698[9] = uVar8;
      local_698[10] = dVar32;
      local_698[0xb] = param_1;
      if (local_698 + 1 != (undefined8 *)0x0) {
        local_6a8[0] = FUN_144581544;
      }
      local_718 = local_668;
      local_710 = 0;
      FUN_146bcbbdc(&local_6e0,&local_368,&local_628,local_6a8);
      FUN_146bfdcfe(&local_628);
      FUN_141082778(&local_368);
      lVar25 = lVar25 + 1;
    } while (lVar25 < (int)param_1[0x15]);
    plVar15 = local_700;
    if (bVar30) goto LAB_1496bed92;
  }
  FUN_146c18122(*(undefined8 *)(*plVar15 + 0x208));
LAB_1496bed92:
  lVar25 = param_1[0x1c];
  uVar14 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar14 = FUN_1485578f6(uVar14);
  puVar22 = local_6c8;
  local_6f8 = (void *)0x0;
  lVar29 = (longlong)(int)uStack_6c0;
  local_6f0 = (int)uStack_6c0;
  if (lVar29 == 0) {
    local_6ec = 0;
  }
  else {
    FUN_1411312f2(&local_6f8,(ulonglong)uStack_6c0 & 0xffffffff,0);
    memcpy(local_6f8,puVar22,lVar29 << 3);
  }
  cVar10 = local_701;
  FUN_1485053d2(lVar25,&local_6f8,uVar14,0);
  if (cVar10 != '\0') {
    FUN_14851bbe8(*(undefined8 *)(param_1[0x1c] + 0x58),param_1[0x23],1,0xf);
    local_628 = (ulonglong *)0x0;
    piStack_620 = (int *)0x0;
    local_618 = 0;
    uStack_610 = 0x3ff0000000000000;
    local_608 = (double)param_1[0x27];
    uStack_600 = (undefined4)param_1[0x28];
    uStack_5fc = (undefined4)((ulonglong)param_1[0x28] >> 0x20);
    uStack_5f8 = (undefined4)param_1[0x29];
    uStack_5f4 = (undefined4)((ulonglong)param_1[0x29] >> 0x20);
    uStack_5f0 = 0;
    local_5e8 = 1.0;
    uStack_5e0 = 0;
    uStack_5dc = 0x3ff00000;
    local_5d8 = 1.0;
    uStack_5d0 = 0;
    FUN_14851b91a(*(undefined8 *)(param_1[0x1c] + 0x58));
  }
  FUN_144716727(local_6d8,uStack_6d0 & 0xffffffff);
  if (local_6d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_100 = 0;
  if (local_108 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_145cd3170(&local_148);
  if (local_6c8 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_738) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bef74 FUN_1496bef74 body=419 status=ok
// SIG undefined FUN_1496bef74(void)

void FUN_1496bef74(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_1484e2e03(*(undefined8 *)(*(longlong *)(param_1[0x1c] + 0x58) + 0x50));
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x22] = lVar2;
  FUN_140486fc4(lVar2,*(undefined8 *)(*(longlong *)(param_1[0x1c] + 0x58) + 0x50),0);
  lVar2 = param_1[0x22];
  uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar3 = FUN_1485583eb(uVar3,1);
  FUN_1484d0608(lVar2,uVar3);
  FUN_140b506a4(param_1[0x22]);
  lVar2 = param_1[0x1c];
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  puVar1 = local_48;
  local_40 = 2;
  *local_48 = &PTR_LAB_14ba263d0;
  uVar3 = FUN_144a3f946();
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14bdcdb60;
  puVar1[3] = param_1;
  FUN_148f76e8e(lVar2 + 0x40,local_50,&local_48);
  FUN_1449db362(&local_48);
  lVar2 = param_1[0x1c];
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  puVar1 = local_48;
  local_40 = 2;
  *local_48 = &PTR_LAB_14aefe820;
  uVar3 = FUN_144a3f946();
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14bdcdbd0;
  puVar1[3] = param_1;
  FUN_1484d607c(lVar2 + 0x28,local_50,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bf118 FUN_1496bf118 body=583 status=ok
// SIG undefined FUN_1496bf118(void)

void FUN_1496bf118(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8 [3];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x58) + 0x50);
  if (plVar4 == (longlong *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = (**(code **)(*plVar4 + 0xa88))();
  }
  FUN_1484d04e2(*(undefined8 *)(param_1 + 0x110));
  uVar5 = *(undefined8 *)(param_1 + 0x110);
  lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x58) + 0x48);
  if (lVar8 == 0) {
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_a8[2] = 0;
    uStack_90 = 0;
    uStack_8c = 0x3ff00000;
    uStack_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_68 = 0;
    uStack_64 = 0x3ff00000;
    uStack_60 = 0;
    uStack_5c = 0x3ff00000;
    local_58 = 0x3ff0000000000000;
    uStack_50 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x1c8);
    puVar10 = &DAT_14c846480;
    if (lVar8 != 0) {
      puVar10 = (undefined8 *)(lVar8 + 0x240);
    }
    puVar11 = local_a8;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  local_f8 = 0;
  FUN_140613f88(uVar5,local_a8,0,0);
  if ((*(char *)(*(longlong *)(param_1 + 0x108) + 0xb0) == '\x01') &&
     (iVar2 = *(int *)(param_1 + 0x130), (longlong)iVar2 != 0)) {
    lVar8 = *(longlong *)(param_1 + 0x128);
    lVar12 = 0;
    do {
      uVar3 = *(uint *)(lVar8 + lVar12);
      uVar9 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x1c0) + (ulonglong)(uVar3 >> 9) * 8) +
               (ulonglong)((uVar3 & 0x1ff) << 4));
      lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + (uVar9 >> 9 & 0x7fffff) * 8);
      local_d8 = *(undefined8 *)(lVar6 + 0x10 + (uVar9 & 0x1ff) * 0x18);
      puVar10 = (undefined8 *)(lVar6 + (uVar9 & 0x1ff) * 0x18);
      local_e8 = *(undefined4 *)puVar10;
      uStack_e4 = *(undefined4 *)((longlong)puVar10 + 4);
      local_a8[0] = *puVar10;
      uStack_e0 = *(undefined4 *)(puVar10 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar10 + 0xc);
      local_a8[1] = puVar10[1];
      lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + (uVar9 >> 0x29) * 8);
      uVar9 = uVar9 >> 0x20 & 0x1ff;
      local_b8 = *(undefined8 *)(lVar6 + 0x10 + uVar9 * 0x18);
      puVar1 = (undefined4 *)(lVar6 + uVar9 * 0x18);
      local_c8 = *puVar1;
      uStack_c4 = puVar1[1];
      uStack_c0 = puVar1[2];
      uStack_bc = puVar1[3];
      uStack_88 = *(undefined8 *)(puVar1 + 2);
      local_78 = 0xfff00f0f;
      uStack_74 = 0x40000000;
      uStack_70 = 0x40000000;
      local_a8[2] = local_d8;
      uStack_90 = local_c8;
      uStack_8c = uStack_c4;
      uStack_80 = local_b8;
      FUN_1484d0812(*(undefined8 *)(param_1 + 0x110),local_a8);
      lVar12 = lVar12 + 4;
    } while ((longlong)iVar2 * 4 != lVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bf360 FUN_1496bf360 body=389 status=ok
// SIG undefined FUN_1496bf360(void)

undefined8 * FUN_1496bf360(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xc0);
  memset(_Dst,0,0xc0);
  FUN_14845abbc(_Dst);
  *_Dst = &PTR_FUN_14bdcdc40;
  _Dst[0x11] = 0;
  _Dst[0x12] = 0;
  *(undefined1 *)(_Dst + 0x13) = 0;
  _Dst[0x14] = 0x3fe0000000000000;
  *(undefined2 *)(_Dst + 0x15) = 0;
  *(undefined4 *)((longlong)_Dst + 0xac) = 0x3c23d70a;
  _Dst[0x16] = 0;
  _Dst[0x17] = 0;
  lVar3 = *(longlong *)(param_1 + 0x50);
  *(undefined1 *)(_Dst + 0x13) = *(undefined1 *)(lVar3 + 0xa9);
  *(undefined1 *)((longlong)_Dst + 0xa9) = *(undefined1 *)(lVar3 + 0xaa);
  _Dst[0x14] = (double)*(float *)(lVar3 + 0xac);
  *(undefined1 *)(_Dst + 0x15) = *(undefined1 *)(lVar3 + 0xa8);
  _Dst[2] = 0;
  _Dst[3] = 0;
  _Dst[4] = 0;
  _Dst[5] = 0x3ff0000000000000;
  _Dst[8] = *(undefined8 *)(param_1 + 0x90);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  _Dst[6] = *(undefined8 *)(param_1 + 0x80);
  _Dst[7] = uVar4;
  _Dst[0xb] = DAT_14c846520;
  uVar9 = DAT_14c846518._4_4_;
  uVar8 = (undefined4)DAT_14c846518;
  uVar7 = DAT_14c846510._4_4_;
  *(undefined4 *)(_Dst + 9) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)_Dst + 0x4c) = uVar7;
  *(undefined4 *)(_Dst + 10) = uVar8;
  *(undefined4 *)((longlong)_Dst + 0x54) = uVar9;
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  plVar5 = *(longlong **)(param_1 + 0x68);
  if (plVar5 == (longlong *)0x0) {
    _Dst[0x11] = uVar4;
    goto LAB_1496bf4b1;
  }
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  _Dst[0x11] = uVar4;
  plVar6 = (longlong *)_Dst[0x12];
  if (plVar5 == plVar6) {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1496bf4b1;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar5;
  }
  else {
    _Dst[0x12] = plVar5;
    if (plVar6 == (longlong *)0x0) goto LAB_1496bf4b1;
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1496bf4b1;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_1496bf4b1:
  *param_2 = _Dst;
  return param_2;
}



// FUNCTION 1496bf4e6 FUN_1496bf4e6 body=418 status=ok
// SIG undefined FUN_1496bf4e6(void)

void FUN_1496bf4e6(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == 0) {
    if (param_1[0x1a] == param_2) goto LAB_1496bf62a;
  }
  else {
    lVar1 = *(longlong *)(param_3 + 0x20);
    FUN_1446f470e(&local_48,L"bOnlyUseFirstMeshMaterials",1);
    if (lVar1 == local_48) {
      cVar2 = (**(code **)(*param_1 + 0x378))(param_1);
      if (cVar2 == '\0') {
        plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
        local_40 = L"InvalidTargets";
        local_38 = 0xe;
        FUN_1446e940c(local_4c,&local_40);
        local_40 = L"USelfUnionMeshesTool";
        local_38 = 0x14;
        FUN_1446e940c(local_50,&local_40);
        FUN_140208bae(&local_40,local_50,local_4c,L"Target meshes are no longer valid");
        (**(code **)(*plVar3 + 0x340))(plVar3,&local_40,3);
        if (local_40 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_40 + 0x10))();
        }
      }
      else {
        (**(code **)(*param_1 + 0x398))(param_1,0);
        FUN_1485051e4(param_1[0x1c]);
      }
      goto LAB_1496bf62a;
    }
    if (param_1[0x1a] == param_2) goto LAB_1496bf62a;
    lVar1 = *(longlong *)(param_3 + 0x20);
    FUN_1446f470e(&local_58,L"bShowNewBoundaryEdges",1);
    if (lVar1 == local_58) {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*plVar3 + 0x348))(plVar3);
      FUN_1496bf118(param_1);
      goto LAB_1496bf62a;
    }
  }
  FUN_1484c7892(param_1,param_2,param_3);
LAB_1496bf62a:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496bf68a FUN_1496bf68a body=32 status=ok
// SIG undefined FUN_1496bf68a(void)

undefined8 FUN_1496bf68a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Merge");
  return param_2;
}



// FUNCTION 1496bf6aa FUN_1496bf6aa body=152 status=ok
// SIG undefined FUN_1496bf6aa(void)

undefined8 FUN_1496bf6aa(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"SelfUnionMeshes";
  local_28 = 0xf;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"USelfUnionMeshesTool";
  local_28 = 0x14;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Merge Meshes");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bf781 FUN_1496bf781 body=175 status=ok
// SIG undefined FUN_1496bf781(void)

undefined8 FUN_1496bf781(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145baeae0();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bf832 FUN_1496bf832 body=613 status=ok
// SIG undefined FUN_1496bf832(void)

void FUN_1496bf832(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_1d8 [32];
  longlong local_1b8 [2];
  undefined1 *local_1a8;
  undefined8 local_198;
  undefined **local_188;
  longlong *local_180;
  undefined1 *local_168;
  undefined8 local_158;
  undefined **local_148;
  longlong *local_140;
  undefined1 *local_128;
  undefined8 local_118;
  undefined **local_108;
  longlong *local_100;
  undefined1 *local_e8;
  undefined8 local_d8;
  undefined **local_c8;
  longlong *local_c0;
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong *local_80;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar2 = FUN_1496bfa98();
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x8f] = lVar2;
  (**(code **)(*param_1 + 0x308))(param_1,lVar2);
  plVar1 = (longlong *)param_1[0x8f];
  FUN_140056680(local_1b8,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,local_1b8);
  if (local_1b8[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_48 = &PTR_LAB_14bdcdcc0;
  local_68 = FUN_144581ba2;
  local_40 = param_1;
  FUN_1496bfb48(param_1[0x8f] + 0x28,param_1[0x8f] + 0xa8);
  local_98 = 0;
  local_88 = &PTR_LAB_14bdcdce0;
  local_a8 = &LAB_144581c10;
  local_80 = param_1;
  lVar2 = FUN_1496bfc1e(param_1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x90] = lVar2;
  local_d8 = 0;
  local_c8 = &PTR_LAB_14bdcdd00;
  local_e8 = &LAB_144581c5a;
  local_c0 = param_1;
  lVar2 = FUN_1496bfcf8(param_1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x91] = lVar2;
  local_118 = 0;
  local_108 = &PTR_LAB_14bdcdd20;
  local_128 = &LAB_144581ca4;
  local_100 = param_1;
  lVar2 = FUN_1496bfdd2(param_1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x92] = lVar2;
  local_158 = 0;
  local_148 = &PTR_LAB_14bdcdd40;
  local_168 = &LAB_144581cee;
  local_140 = param_1;
  lVar2 = FUN_1496bfeac(param_1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x93] = lVar2;
  local_198 = 0;
  local_188 = &PTR_LAB_14bdcdd60;
  local_1a8 = &LAB_144581d38;
  local_180 = param_1;
  FUN_1484de26e(lVar2 + 0x28,lVar2 + 200);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bfa98 FUN_1496bfa98 body=175 status=ok
// SIG undefined FUN_1496bfa98(void)

undefined8 FUN_1496bfa98(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459fc852();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bfb48 FUN_1496bfb48 body=212 status=ok
// SIG undefined FUN_1496bfb48(void)

void FUN_1496bfb48(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_1496d14a4(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bfc1e FUN_1496bfc1e body=216 status=ok
// SIG undefined FUN_1496bfc1e(void)

undefined8 FUN_1496bfc1e(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  code *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  undefined *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  local_38 = &PTR_LAB_149e16f80;
  local_30 = &DAT_1496d199c;
  local_58[0] = FUN_140d11fbe;
  local_98[0] = *param_2;
  local_88 = param_2[2];
  param_2[2] = 0;
  local_78 = (undefined4)param_2[4];
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_70 = (undefined4)param_2[5];
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_68 = (undefined4)param_2[6];
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_60 = (undefined4)param_2[7];
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (local_98[0] != 0) {
    *param_2 = 0;
  }
  uVar1 = FUN_1496d17c2(local_78,local_98,local_58);
  if (*param_2 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bfcf8 FUN_1496bfcf8 body=216 status=ok
// SIG undefined FUN_1496bfcf8(void)

undefined8 FUN_1496bfcf8(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  code *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  undefined *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  local_38 = &PTR_LAB_149e16f80;
  local_30 = &DAT_1496d1b78;
  local_58[0] = FUN_140d11fbe;
  local_98[0] = *param_2;
  local_88 = param_2[2];
  param_2[2] = 0;
  local_78 = (undefined4)param_2[4];
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_70 = (undefined4)param_2[5];
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_68 = (undefined4)param_2[6];
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_60 = (undefined4)param_2[7];
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (local_98[0] != 0) {
    *param_2 = 0;
  }
  uVar1 = FUN_1496d199e(local_78,local_98,local_58);
  if (*param_2 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bfdd2 FUN_1496bfdd2 body=216 status=ok
// SIG undefined FUN_1496bfdd2(void)

undefined8 FUN_1496bfdd2(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  code *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  undefined *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  local_38 = &PTR_LAB_149e16f80;
  local_30 = &DAT_1496d1d54;
  local_58[0] = FUN_140d11fbe;
  local_98[0] = *param_2;
  local_88 = param_2[2];
  param_2[2] = 0;
  local_78 = (undefined4)param_2[4];
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_70 = (undefined4)param_2[5];
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_68 = (undefined4)param_2[6];
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_60 = (undefined4)param_2[7];
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (local_98[0] != 0) {
    *param_2 = 0;
  }
  uVar1 = FUN_1496d1b7a(local_78,local_98,local_58);
  if (*param_2 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bfeac FUN_1496bfeac body=240 status=ok
// SIG undefined FUN_1496bfeac(void)

undefined8 FUN_1496bfeac(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar16 = FUN_1496d1d55();
  (**(code **)(*param_1 + 0x428))(param_1,uVar16);
  lVar1 = param_1[0x72];
  lVar2 = param_1[0x73];
  lVar3 = param_1[0x74];
  lVar4 = param_1[0x75];
  lVar5 = param_1[0x76];
  lVar6 = param_1[0x77];
  lVar7 = param_1[0x78];
  lVar8 = param_1[0x79];
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  lVar14 = param_2[5];
  lVar15 = param_2[7];
  param_1[0x78] = param_2[6];
  param_1[0x79] = lVar15;
  param_1[0x76] = lVar13;
  param_1[0x77] = lVar14;
  param_1[0x74] = lVar11;
  param_1[0x75] = lVar12;
  param_1[0x72] = lVar9;
  param_1[0x73] = lVar10;
  local_68._0_4_ = (undefined4)lVar1;
  local_68._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_60._0_4_ = (undefined4)lVar2;
  uStack_60._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_58._0_4_ = (undefined4)lVar3;
  local_58._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_50._0_4_ = (undefined4)lVar4;
  uStack_50._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  local_48._0_4_ = (undefined4)lVar5;
  local_48._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
  uStack_40._0_4_ = (undefined4)lVar6;
  uStack_40._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
  local_38._0_4_ = (undefined4)lVar7;
  local_38._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar8;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_38._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_40._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_50._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_68;
  *(undefined4 *)((longlong)param_2 + 4) = local_68._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_60._4_4_;
  local_68 = lVar1;
  uStack_60 = lVar2;
  local_58 = lVar3;
  uStack_50 = lVar4;
  local_48 = lVar5;
  uStack_40 = lVar6;
  local_38 = lVar7;
  uStack_30 = lVar8;
  if (*param_2 != 0) {
    plVar17 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar17 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar17 + 0x10))(plVar17);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496bff9e FUN_1496bff9e body=113 status=ok
// SIG undefined FUN_1496bff9e(void)

void FUN_1496bff9e(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x478);
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c0010 FUN_1496c0010 body=152 status=ok
// SIG undefined FUN_1496c0010(void)

undefined8 FUN_1496c0010(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"StartSmoothToolMessage";
  local_28 = 0x16;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"USmoothMeshTool";
  local_28 = 0xf;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,
                L"Smooth the mesh vertex positions using various smoothing methods.");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c00aa FUN_1496c00aa body=152 status=ok
// SIG undefined FUN_1496c00aa(void)

undefined8 FUN_1496c00aa(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"SmoothMeshToolTransactionName";
  local_28 = 0x1d;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"USmoothMeshTool";
  local_28 = 0xf;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Smooth Mesh");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c0148 FUN_1496c0148 body=1338 status=ok
// SIG undefined FUN_1496c0148(void)

undefined8 * FUN_1496c0148(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  float fVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  longlong *plVar11;
  char cVar12;
  char cVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined1 auStack_ca8 [32];
  undefined1 local_c88;
  longlong local_c78 [2];
  code *local_c68;
  undefined8 *local_c60;
  undefined8 local_c58;
  undefined8 local_c50;
  undefined1 local_c48;
  undefined1 local_c47;
  byte local_c46;
  undefined8 local_c40;
  undefined8 local_c38;
  longlong *plStack_c30;
  double local_c28;
  undefined1 uStack_c20;
  undefined7 uStack_c1f;
  undefined1 local_c18;
  undefined7 uStack_c17;
  undefined1 local_c10;
  undefined4 local_c0c;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined4 local_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined8 local_658;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 local_640;
  undefined4 uStack_63c;
  longlong lStack_638;
  ulonglong local_630;
  undefined1 local_620 [1504];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_ca8;
  plVar4 = (longlong *)(param_1 + -0x120);
  lVar1 = param_1 + 0x28;
  FUN_14834c738(local_620);
  cVar12 = (**(code **)(*(longlong *)(param_1 + -0x120) + 0x3b8))(plVar4);
  if (cVar12 != '\0') {
    local_658 = 0;
    uStack_650 = 0;
    local_678 = 0;
    uStack_670 = 0;
    uStack_64c = 0x80;
    uStack_648 = 0xffffffff;
    uStack_644 = 0;
    lStack_638 = 0;
    local_630 = local_630 & 0xffffffff00000000;
    uVar14 = (**(code **)(*plVar4 + 0x3c0))(plVar4);
    local_c60 = &local_c58;
    local_c68 = FUN_144581d8e;
    local_c58 = &local_678;
    FUN_148385b4a(uVar14,lVar1,&local_c68,0);
    FUN_140619b9c(&local_678,local_c78);
    local_c88 = 1;
    FUN_1482e14f4(&local_c58,lVar1,local_c78,0xf);
    FUN_1496c0684(local_620,&local_c58);
    FUN_1482e1868(&local_c58);
    if (local_c78[0] != 0) {
      FUN_1400020a8();
    }
    local_630 = local_630 & 0xffffffff00000000;
    if (lStack_638 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_678);
  }
  local_c58 = (undefined8 *)&DAT_3f8000003f800000;
  local_c50 = 0x3f80000000000001;
  local_c48 = 0;
  local_c47 = 1;
  local_c46 = 0;
  local_c40 = 0x47efffffe0000000;
  local_c0c = 0;
  local_c38 = 0;
  plStack_c30 = (longlong *)0x0;
  local_c28 = 0.0;
  uStack_c20 = 0;
  uStack_c1f = 0;
  local_c18 = 0;
  uStack_c17 = 0;
  local_c10 = 0;
  puVar15 = (undefined8 *)FUN_1484c98de(plVar4);
  plVar11 = plStack_c30;
  local_c38 = *puVar15;
  plVar7 = (longlong *)puVar15[1];
  if (plVar7 == (longlong *)0x0) {
    plStack_c30 = (longlong *)0x0;
    plVar7 = plStack_c30;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar7 + 8) = *(int *)((longlong)plVar7 + 8) + 1;
    UNLOCK();
    if (plStack_c30 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_c30 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        puVar15 = (undefined8 *)*plStack_c30;
        plStack_c30 = plVar7;
        (*(code *)*puVar15)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar7 = plStack_c30;
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          plVar7 = plStack_c30;
        }
      }
    }
  }
  plStack_c30 = plVar7;
  cVar13 = FUN_1484c9db4(plVar4);
  if (cVar13 != '\0') {
    local_c10 = 1;
    puVar15 = (undefined8 *)FUN_1484c9dec(plVar4);
    uVar14 = *puVar15;
    lVar8 = puVar15[1];
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    plVar4 = (longlong *)CONCAT71(uStack_c17,local_c18);
    uStack_c20 = (undefined1)uVar14;
    uStack_c1f = (undefined7)((ulonglong)uVar14 >> 8);
    local_c18 = (undefined1)lVar8;
    uStack_c17 = (undefined7)((ulonglong)lVar8 >> 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar4 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    local_c0c = *(undefined4 *)(*(longlong *)(param_1 + 0x378) + 200);
  }
  cVar13 = *(char *)(*(longlong *)(param_1 + 0x358) + 0xa8);
  if (cVar13 == '\x01') {
    lVar8 = *(longlong *)(param_1 + 0x370);
    local_c58 = (undefined8 *)(ulonglong)*(uint *)(lVar8 + 0xa8);
    local_c50 = CONCAT44((float)*(int *)(param_1 + 0x78) *
                         ((*(float *)(lVar8 + 0xac) * *(float *)(lVar8 + 0xac)) / 50.0),
                         (undefined4)local_c50);
    local_c46 = *(byte *)(lVar8 + 0xb0) ^ 1;
    local_c48 = 1;
    local_c28 = (double)*(float *)(lVar8 + 0xb4);
    uVar14 = FUN_14001cc68(0x100,0x10);
    if (cVar12 == '\0') {
      FUN_1484705bc(uVar14,lVar1,&local_c58);
    }
    else {
      FUN_1484707d0(uVar14,lVar1,&local_c58,local_620);
    }
  }
  else {
    if (cVar13 == '\x02') {
      lVar8 = *(longlong *)(param_1 + 0x368);
      fVar5 = *(float *)(*(longlong *)(param_1 + 0x360) + 0xa8);
      dVar10 = 0.0;
      if (0.0 <= fVar5) {
        dVar9 = (double)fVar5;
        dVar10 = 1.0;
        if (dVar9 <= 1.0) {
          dVar10 = dVar9;
        }
      }
      local_c58 = (undefined8 *)
                  CONCAT44((float)((1.0 - dVar10) * 0.0 + dVar10 * 0.9),
                           *(undefined4 *)(lVar8 + 0xa8));
      uVar6 = *(undefined4 *)(lVar8 + 0xac);
      local_c46 = *(byte *)(lVar8 + 0xb0) ^ 1;
      local_c48 = 1;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x360);
      fVar5 = *(float *)(lVar8 + 0xa8);
      dVar10 = 0.0;
      if (0.0 <= fVar5) {
        dVar10 = 1.0;
        if ((double)fVar5 <= 1.0) {
          dVar10 = (double)fVar5;
        }
      }
      local_c58 = (undefined8 *)CONCAT44((float)((1.0 - dVar10) * 0.0 + dVar10 * 0.9),fVar5);
      uVar6 = *(undefined4 *)(lVar8 + 0xac);
      local_c47 = *(undefined1 *)(lVar8 + 0xb0);
      local_c46 = 1;
      local_c48 = 0;
    }
    local_c50 = CONCAT44(local_c50._4_4_,uVar6);
    uVar14 = FUN_14001cc68(0x100,0x10);
    if (cVar12 == '\0') {
      FUN_148471378(uVar14,lVar1,&local_c58);
    }
    else {
      FUN_148471398(uVar14,lVar1,&local_c58,local_620);
    }
  }
  local_678 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_670 = *(undefined8 *)(param_1 + 0x2f8);
  local_668 = *(undefined4 *)(param_1 + 0x300);
  uStack_664 = *(undefined4 *)(param_1 + 0x304);
  uStack_660 = *(undefined4 *)(param_1 + 0x308);
  uStack_65c = *(undefined4 *)(param_1 + 0x30c);
  local_658 = *(undefined8 *)(param_1 + 0x310);
  uStack_650 = *(undefined4 *)(param_1 + 0x318);
  uStack_64c = *(undefined4 *)(param_1 + 0x31c);
  local_640 = *(undefined4 *)(param_1 + 0x330);
  uStack_63c = *(undefined4 *)(param_1 + 0x334);
  lStack_638 = *(undefined8 *)(param_1 + 0x338);
  local_630 = *(undefined8 *)(param_1 + 0x340);
  uStack_648 = (undefined4)*(undefined8 *)(param_1 + 800);
  uStack_644 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 800) >> 0x20);
  FUN_14847151a(uVar14);
  *param_2 = uVar14;
  FUN_148486dba(&local_c58);
  FUN_1482e1868(local_620);
  if ((local_40 ^ (ulonglong)auStack_ca8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c0684 FUN_1496c0684 body=121 status=ok
// SIG undefined FUN_1496c0684(void)

undefined8 * FUN_1496c0684(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_146c00942(param_1 + 1,param_2 + 1);
  FUN_1496c63fe(param_1 + 0x45,param_2 + 0x45);
  FUN_145be27ca(param_1 + 0x9d,param_2 + 0x9d);
  FUN_145be27ca(param_1 + 0xa7,param_2 + 0xa7);
  FUN_145be27ca(param_1 + 0xb1,param_2 + 0xb1);
  *(undefined1 *)(param_1 + 0xbb) = *(undefined1 *)(param_2 + 0xbb);
  return param_1;
}



// FUNCTION 1496c0706 FUN_1496c0706 body=1319 status=ok
// SIG undefined FUN_1496c0706(void)

void FUN_1496c0706(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  wchar_t *pwVar12;
  bool bVar13;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  longlong *local_b8;
  byte *local_b0;
  int *local_a8;
  int local_a0;
  byte local_99;
  wchar_t *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((char)param_1[0x1f] == '\0') {
    local_b0 = &local_99;
    local_99 = 0;
    local_a8 = &local_a0;
    local_a0 = 0;
    local_b8 = param_1;
    if (0 < (int)param_1[0x1a]) {
      lVar10 = 0;
      local_c0 = param_1;
      do {
        lVar3 = FUN_14479d2ce(lVar10 * 8 + param_1[0x19]);
        if (lVar3 != 0) {
          lVar4 = FUN_14092ee58();
          if ((lVar4 == 0) || (DAT_14c950c29 == 0)) {
            if (lVar4 != 0) goto LAB_1496c07e2;
            bVar13 = true;
LAB_1496c07fe:
            lVar7 = 0;
          }
          else {
            FUN_1456cec3c(lVar4);
LAB_1496c07e2:
            lVar5 = FUN_144a78d6a();
            if ((lVar5 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38))) {
              bVar13 = false;
              goto LAB_1496c07fe;
            }
            bVar13 = false;
            lVar7 = 0;
            if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                lVar5 + 0x30) {
              lVar7 = lVar4;
            }
          }
          lVar5 = FUN_144a78d6a();
          bVar9 = lVar4 != 0 & DAT_14c950c29;
          if (lVar7 == lVar5) {
            if (bVar9 != 0) {
              FUN_1456cec3c(lVar4);
            }
            local_70 = &local_b8;
            lVar4 = lVar3 + 0x250;
            local_68 = 0x100000000;
            local_58 = 0xffffffff;
            uStack_50 = 0;
            uStack_60 = lVar4;
            if (*(int *)(lVar3 + 0x268) == 0) {
              iVar11 = 0;
            }
            else {
              FUN_1449c0562(&local_68);
              iVar11 = *(int *)(lVar3 + 0x268);
            }
            pwVar12 = (wchar_t *)(lVar3 + 0x240);
            local_90 = (undefined4)local_68;
            uStack_8c = local_68._4_4_;
            uStack_88 = (undefined4)uStack_60;
            uStack_84 = uStack_60._4_4_;
            uStack_78 = CONCAT44(uStack_4c,uStack_50);
            local_80 = local_58;
            uVar1 = local_80;
            local_80._4_4_ = (int)((ulonglong)local_58 >> 0x20);
            iVar2 = local_80._4_4_;
            local_98 = pwVar12;
            if ((local_80._4_4_ != iVar11) || (local_80 = local_58, uStack_60 != lVar4)) {
              do {
                local_80 = uVar1;
                if (*(longlong *)(*(longlong *)local_98 + (longlong)iVar2 * 0x10) != 0) {
                  FUN_144582082(&local_70);
                }
                local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
                FUN_1449c0562(&local_90);
                bVar13 = local_80._4_4_ != iVar11;
                iVar2 = local_80._4_4_;
                uVar1 = local_80;
              } while (local_98 != pwVar12 || (CONCAT44(uStack_84,uStack_88) != lVar4 || bVar13));
            }
          }
          else {
            if (bVar9 != 0) {
              FUN_1456cec3c(lVar4);
            }
            local_70 = &local_b8;
            lVar5 = lVar3 + 0x250;
            local_68 = 0x100000000;
            local_58 = 0xffffffff;
            uStack_50 = 0;
            uStack_60 = lVar5;
            if (*(int *)(lVar3 + 0x268) == 0) {
              iVar11 = 0;
            }
            else {
              FUN_1449c0562(&local_68);
              iVar11 = *(int *)(lVar3 + 0x268);
            }
            pwVar12 = (wchar_t *)(lVar3 + 0x240);
            uStack_78 = CONCAT44(uStack_4c,uStack_50);
            local_80 = local_58;
            uVar1 = local_80;
            local_90 = (undefined4)local_68;
            uStack_8c = local_68._4_4_;
            uStack_88 = (undefined4)uStack_60;
            uStack_84 = uStack_60._4_4_;
            local_80._4_4_ = (int)((ulonglong)local_58 >> 0x20);
            iVar2 = local_80._4_4_;
            local_98 = pwVar12;
            if ((local_80._4_4_ != iVar11) ||
               (param_1 = local_c0, local_80 = uVar1, uStack_60 != lVar5)) {
              do {
                local_80 = uVar1;
                lVar3 = *(longlong *)(*(longlong *)local_98 + (longlong)iVar2 * 0x10);
                if (lVar3 != 0) {
                  if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
                    FUN_1456cec3c(lVar4);
                  }
                  if (((bVar13) || (lVar7 = FUN_144a78d6a(), lVar7 == 0)) ||
                     (*(int *)(lVar4 + 0x38) < *(int *)(lVar7 + 0x38))) {
                    lVar6 = 0;
                  }
                  else {
                    lVar6 = 0;
                    if (*(longlong *)
                         (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                        lVar7 + 0x30) {
                      lVar6 = lVar4;
                    }
                  }
                  if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
                    FUN_144582082(&local_70,lVar3);
                  }
                }
                local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
                FUN_1449c0562(&local_90);
                param_1 = local_c0;
                iVar2 = local_80._4_4_;
                uVar1 = local_80;
              } while (local_98 != pwVar12 ||
                       (CONCAT44(uStack_84,uStack_88) != lVar5 || local_80._4_4_ != iVar11));
            }
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)param_1[0x1a]);
    }
    if ((int)param_1[0x1c] == local_a0) {
      if ((local_99 & 1) == 0) goto LAB_1496c0734;
    }
    else {
      if (local_a0 < (int)param_1[0x1c]) {
        *(undefined1 *)(param_1 + 0x1f) = 1;
        plVar8 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
        local_98 = L"LostSpline";
        local_90 = 10;
        FUN_1446e940c(&local_68,&local_98);
        local_98 = L"UBaseMeshFromSplinesTool";
        local_90 = 0x18;
        FUN_1446e940c(&local_70,&local_98);
        FUN_140208bae(&local_98,&local_70,&local_68,
                      L"Tool lost reference to an input spline; cannot respond to further spline changes."
                     );
        (**(code **)(*plVar8 + 0x340))(plVar8,&local_98,3);
        if (local_98 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_98 + 0x10))();
        }
        goto LAB_1496c0734;
      }
      FUN_14478085e(param_1 + 0x1b,local_a0,1);
      FUN_140ee84a4(param_1 + 0x1d,local_a0,1);
      local_99 = 1;
    }
    (**(code **)(*param_1 + 0x390))(param_1);
    FUN_1485051e4(param_1[0x17]);
  }
LAB_1496c0734:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496c0c46 FUN_1496c0c46 body=953 status=ok
// SIG undefined FUN_1496c0c46(void)

double * FUN_1496c0c46(longlong param_1,double *param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  longlong lVar15;
  double *pdVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_118 [32];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  ulonglong local_a0;
  double dVar5;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  if (*(int *)(param_1 + 0xd0) == 1) {
    cVar14 = FUN_144729dda(*(undefined8 *)(param_1 + 200));
    if (cVar14 != '\0') {
      lVar15 = FUN_14479d2ce(*(undefined8 *)(param_1 + 200));
      pdVar16 = (double *)&DAT_14c846480;
      if (*(longlong *)(lVar15 + 0x1c8) != 0) {
        pdVar16 = (double *)(*(longlong *)(lVar15 + 0x1c8) + 0x240);
      }
      dVar4 = *pdVar16;
      dVar5 = pdVar16[1];
      dVar6 = pdVar16[2];
      dVar7 = pdVar16[3];
      dVar8 = pdVar16[4];
      dVar9 = pdVar16[5];
      dVar18 = pdVar16[6];
      dVar1 = pdVar16[7];
      dVar10 = pdVar16[8];
      dVar19 = pdVar16[9];
      dVar2 = pdVar16[10];
      dVar3 = pdVar16[0xb];
      FUN_146c3cd49(*param_3,param_3 + 1,1);
      local_f8 = dVar4;
      dStack_f0 = dVar5;
      local_e8 = dVar6;
      dStack_e0 = dVar7;
      local_d8 = dVar8;
      dStack_d0 = dVar9;
      local_c8 = dVar18;
      local_c0 = dVar10;
      dStack_b8 = dVar19;
      local_b0 = dVar2;
      FUN_146c3cfa5(*param_3,&local_f8,1);
      *param_2 = dVar4;
      param_2[1] = dVar5;
      param_2[2] = dVar6;
      param_2[3] = dVar7;
      param_2[4] = dVar8;
      param_2[5] = dVar9;
      param_2[6] = dVar18;
      param_2[7] = dVar1;
      param_2[8] = dVar10;
      param_2[9] = dVar19;
      param_2[10] = dVar2;
      param_2[0xb] = dVar3;
      goto LAB_1496c0f95;
    }
  }
  FUN_145c688c4(*param_3,&local_f8,0);
  dVar7 = (local_e8 + dStack_d0) * 0.5;
  dVar17 = (dStack_f0 + local_d8) * 0.5;
  dVar8 = (local_f8 + dStack_e0) * 0.5;
  dVar18 = (double)param_3[8];
  local_c8 = -dVar7 * dVar18;
  dStack_d0 = -dVar17 * dVar18;
  local_d8 = -dVar8 * dVar18;
  local_f8 = 0.0;
  dStack_f0 = 0.0;
  local_e8 = 0.0;
  dStack_e0 = 1.0;
  local_c0 = dVar18;
  dStack_b8 = dVar18;
  local_b0 = dVar18;
  FUN_146c3cd49(*param_3,&local_f8,1);
  dVar1 = (double)param_3[5];
  dVar2 = (double)param_3[6];
  dVar3 = (double)param_3[7];
  dVar11 = (double)param_3[1];
  dVar12 = (double)param_3[2];
  dVar13 = (double)param_3[3];
  dVar9 = (double)param_3[4];
  dVar4 = (double)param_3[4];
  dVar5 = (double)param_3[4];
  dVar6 = (double)param_3[1];
  *param_2 = dVar11;
  param_2[1] = dVar12;
  param_2[2] = dVar13;
  param_2[3] = dVar9;
  dVar19 = DAT_14c846520;
  dVar10 = DAT_14c846518;
  dVar9 = DAT_14c846510;
  dVar7 = dVar7 * dVar18 * DAT_14c846520;
  param_2[8] = DAT_14c846510;
  param_2[9] = dVar10;
  param_2[10] = dVar19;
  param_2[0xb] = 0.0;
  dVar9 = dVar8 * dVar18 * dVar9;
  dVar10 = dVar17 * dVar18 * dVar10;
  dVar19 = dVar9 * dVar13 - dVar6 * dVar7;
  dVar18 = dVar10 * dVar11 - dVar12 * dVar9;
  dVar8 = dVar7 * dVar12 - dVar13 * dVar10;
  dVar8 = dVar8 + dVar8;
  dVar19 = dVar19 + dVar19;
  dVar18 = dVar18 + dVar18;
  param_2[4] = dVar1 + (dVar18 * dVar12 - dVar19 * dVar13) + dVar4 * dVar8 + dVar9;
  param_2[5] = (dVar13 * dVar8 - dVar6 * dVar18) + dVar5 * dVar19 + dVar10 + dVar2;
  param_2[6] = dVar18 * dVar4 + dVar7 + (dVar19 * dVar11 - dVar8 * dVar12) + dVar3;
  param_2[7] = 0.0;
LAB_1496c0f95:
  if ((local_a0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c1000 FUN_1496c1000 body=486 status=ok
// SIG undefined FUN_1496c1000(void)

void FUN_1496c1000(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_748 [32];
  char local_728 [8];
  longlong local_720;
  longlong local_708;
  int local_700;
  undefined8 local_6f8 [12];
  undefined1 local_698 [32];
  longlong local_678;
  undefined8 local_668 [12];
  undefined1 local_608 [16];
  longlong local_5f8;
  uint local_5f0;
  uint local_5ec;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_748;
  if (*param_2 != 0) {
    (**(code **)(*param_1 + 0x3a0))(param_1,local_6f8,param_2);
    (**(code **)(*param_1 + 0x3a8))(param_1,&local_708);
    FUN_14850577a(local_698,1);
    local_678 = (**(code **)(*param_1 + 0x388))(param_1);
    if ((local_678 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_678);
    }
    puVar5 = local_6f8;
    puVar6 = local_668;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar1 = local_700 + -1;
    if (local_700 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(local_608,local_708,iVar1);
    lVar4 = FUN_14479d2ce(param_1[0x16] + 0xa8);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    uVar2 = local_5f0;
    lVar7 = (longlong)(int)local_5f0;
    local_5f0 = local_5f0 + 1;
    if (local_5ec < local_5f0) {
      FUN_140655806(&local_5f8,uVar2);
    }
    *(longlong *)(local_5f8 + lVar7 * 8) = lVar4;
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    FUN_148505bae(local_698,*param_2);
    (**(code **)(*(longlong *)param_1[0x15] + 0x2c0))((longlong *)param_1[0x15],local_698);
    uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_148505c7a(local_728,uVar3,local_698);
    if ((local_728[0] == '\0') && (local_720 != 0)) {
      uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
      FUN_1485509b4(uVar3,local_720);
    }
    FUN_1484c7624(local_698);
    if (local_708 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_748) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c1200 FUN_1496c1200 body=175 status=ok
// SIG undefined FUN_1496c1200(void)

bool FUN_1496c1200(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined ***pppuVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined ***local_58;
  undefined **local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (undefined ***)0x0;
  local_48[0] = &PTR_LAB_14bdcde10;
  local_68 = FUN_144582366;
  iVar2 = FUN_1484526ad(param_2,&local_68);
  if (local_68 != (code *)0x0) {
    pppuVar3 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar3 = local_48;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_68);
  if (iVar2 < (int)local_68) {
    bVar1 = false;
  }
  else {
    bVar1 = iVar2 <= local_68._4_4_ || local_68._4_4_ == -1;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c12b0 FUN_1496c12b0 body=711 status=ok
// SIG undefined FUN_1496c12b0(void)

void FUN_1496c12b0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined ***pppuVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  longlong *local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  ulonglong local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  int local_c0;
  code *local_b8;
  undefined8 uStack_b0;
  undefined ***local_a8;
  undefined **local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14bdcde30;
  local_b8 = FUN_1445823da;
  FUN_148452c31(&local_c8,param_3,&local_b8);
  if (local_b8 != (code *)0x0) {
    pppuVar4 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar4 = &local_98;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_98 = (undefined **)0x0;
  local_90 = 0;
  local_b8 = (code *)0x0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 0;
  if ((longlong)local_c0 != 0) {
    plVar7 = local_c8 + local_c0;
    plVar6 = local_c8;
    local_108 = param_3;
    local_100 = param_2;
    do {
      local_e0 = *(ulonglong *)(*plVar6 + 0xa8);
      if ((int)uStack_b0 != local_84) {
        uVar3 = ((uint)(local_e0 >> 0x14) & 0xffff ^ (uint)(local_e0 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        puVar5 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar5 = local_80;
        }
        for (iVar1 = *(int *)(puVar5 + (ulonglong)(local_70 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
            iVar1 != -1; iVar1 = *(int *)(local_b8 + (longlong)iVar1 * 0x10 + 8)) {
          if (*(ulonglong *)(local_b8 + (longlong)iVar1 * 0x10) == local_e0) goto LAB_1496c1439;
        }
      }
      FUN_140d0b320(&local_b8,&local_e8,&local_e0,0);
      local_e8 = 0;
      FUN_14485c47a(&local_e8,local_e0);
      uVar2 = uStack_d0;
      lVar8 = (longlong)(int)uStack_d0;
      uVar3 = (int)uStack_d0 + 1;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar3);
      if (uStack_d0._4_4_ < uVar3) {
        FUN_140155462(&local_d8,uVar2 & 0xffffffff);
      }
      *(undefined8 *)(local_d8 + lVar8 * 8) = local_e8;
LAB_1496c1439:
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar7);
    param_2 = local_100;
    param_3 = local_108;
    local_f8 = local_d8;
    local_f0 = (int)uStack_d0;
    local_ec = uStack_d0._4_4_;
  }
  local_d8 = 0;
  uStack_d0 = 0;
  (**(code **)(*param_2 + 0x378))(param_2);
  (**(code **)(*param_2 + 0x380))(param_2,*param_3);
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140d0a7fc(&local_b8);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c159c FUN_1496c159c body=329 status=ok
// SIG undefined FUN_1496c159c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1496c159c(void)

{
  undefined8 *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *_Dst;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc21f70) {
    FUN_144b3d300(&DAT_14cc21f70);
    if (DAT_14cc21f70 == -1) {
      uVar1 = FUN_145b7126e();
      uVar2 = FUN_145b74cee();
      uVar3 = FUN_145a7b1c0();
      local_48 = (undefined8 *)0x0;
      local_40 = 3;
      FUN_1484d6e40(&local_48,3,0);
      _Src = local_48;
      *local_48 = uVar1;
      local_48[1] = uVar2;
      local_48[2] = uVar3;
      DAT_14cc21f60 = (undefined *)0x0;
      _DAT_14cc21f6c = 5;
      lVar4 = (longlong)local_40;
      _DAT_14cc21f68 = local_40;
      FUN_1484d23fc(&DAT_14cc21f38,local_40,5);
      if (lVar4 != 0) {
        _Dst = &DAT_14cc21f38;
        if (DAT_14cc21f60 != (undefined *)0x0) {
          _Dst = DAT_14cc21f60;
        }
        memcpy(_Dst,_Src,lVar4 << 3);
      }
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144575972);
      _Init_thread_footer(&DAT_14cc21f70);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return &DAT_14cc21f38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c16ef FUN_1496c16ef body=175 status=ok
// SIG undefined FUN_1496c16ef(void)

undefined8 FUN_1496c16ef(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145baed9e();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c17a0 FUN_1496c17a0 body=1458 status=ok
// SIG undefined FUN_1496c17a0(void)

void FUN_1496c17a0(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_398 [40];
  undefined1 local_370 [4];
  undefined1 local_36c [4];
  wchar_t *local_368;
  undefined8 local_360;
  undefined1 *local_148;
  undefined8 local_138;
  undefined **local_128;
  longlong *local_120;
  undefined1 *local_108;
  undefined8 local_f8;
  undefined **local_e8;
  longlong *local_e0;
  undefined1 *local_c8;
  undefined8 local_b8;
  undefined **local_a8;
  longlong *local_a0;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  FUN_1484416be();
  lVar4 = FUN_1484c5a9a(param_1);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  param_1[0x1e] = lVar4;
  FUN_14851cc7c(lVar4);
  FUN_144a787a6(param_1[0x1e] + 0xa8,&DAT_14cb4d6a0);
  plVar5 = (longlong *)param_1[0x1e];
  FUN_140056680(&local_368,L"OutputTypeFromInputTool");
  (**(code **)(*plVar5 + 0x2a8))(plVar5,param_1,&local_368);
  if (local_368 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_78 = 0;
  local_68 = &PTR_LAB_14bdcde50;
  local_88 = FUN_14458244e;
  local_60 = param_1;
  FUN_1484c5b30(param_1[0x1e] + 0x28,param_1[0x1e] + 0xa8);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x1e]);
  plVar5 = (longlong *)FUN_1496c1d54(param_1);
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar5);
  }
  param_1[0x1d] = (longlong)plVar5;
  FUN_140056680(&local_368,&DAT_149dfb77a);
  (**(code **)(*plVar5 + 0x2a8))(plVar5,param_1,&local_368);
  if (local_368 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  bVar3 = 0;
  local_b8 = 0;
  local_a8 = &PTR_LAB_14bdcded0;
  local_c8 = &LAB_14458253a;
  local_a0 = param_1;
  FUN_1496c1e04(param_1[0x1d] + 0x28,param_1[0x1d] + 0xa8);
  local_f8 = 0;
  local_e8 = &PTR_LAB_14bdcdef0;
  local_108 = &LAB_14458258a;
  local_e0 = param_1;
  FUN_14588c620(param_1[0x1d] + 0x28,param_1[0x1d] + 0xb0);
  local_138 = 0;
  local_128 = &PTR_LAB_14bdcdf10;
  local_148 = &LAB_1445825da;
  local_120 = param_1;
  FUN_1484c9b00(param_1[0x1d] + 0x28,param_1[0x1d] + 0xb9);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x1d]);
  DAT_14c7677d8 = 1;
  FUN_1496c1eda(param_1 + 0x1f,(int)param_1[0x15]);
  if (0 < (int)param_1[0x15]) {
    lVar4 = 0x220;
    uVar9 = 0;
    bVar3 = 0;
    do {
      FUN_148506727(&local_368,*(undefined8 *)(param_1[0x14] + uVar9 * 8),&DAT_14c7677d0);
      FUN_146c00942(param_1[0x1f] + lVar4 + -0x220,&local_368);
      FUN_141082778(&local_368);
      FUN_148506417(&local_368,*(undefined8 *)(param_1[0x14] + uVar9 * 8),0);
      lVar6 = param_1[0x1f];
      if ((wchar_t **)(lVar4 + lVar6) != &local_368) {
        if (*(longlong *)(lVar6 + lVar4) != 0) {
          FUN_1400020a8();
        }
        *(wchar_t **)(lVar6 + lVar4) = local_368;
        local_368 = (wchar_t *)0x0;
        *(undefined4 *)(lVar6 + 8 + lVar4) = (undefined4)local_360;
        *(undefined4 *)(lVar6 + 0xc + lVar4) = local_360._4_4_;
        local_360 = 0;
      }
      if (local_368 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      bVar2 = bVar3 & 1;
      bVar3 = 1;
      if (bVar2 == 0) {
        bVar3 = (**(code **)(*param_1 + 0x3a8))(param_1,uVar9 & 0xffffffff);
      }
      uVar9 = uVar9 + 1;
      lVar4 = lVar4 + 0x230;
    } while ((longlong)uVar9 < (longlong)(int)param_1[0x15]);
  }
  *(byte *)(param_1[0x1d] + 0xba) = bVar3;
  iVar8 = (int)param_1[0x15];
  if (-1 < iVar8) {
    plVar5 = param_1 + 0x24;
    if (*(int *)((longlong)param_1 + 300) < iVar8) {
      FUN_1496cbb6a(plVar5);
      iVar8 = (int)param_1[0x15];
    }
    if (0 < iVar8) {
      lVar4 = 0;
      do {
        lVar6 = FUN_1484ec096(param_1);
        if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar6);
        }
        iVar8 = (int)param_1[0x25];
        *(uint *)(param_1 + 0x25) = iVar8 + 1U;
        if (*(uint *)((longlong)param_1 + 300) < iVar8 + 1U) {
          FUN_1496cbbfa(plVar5,iVar8);
        }
        lVar1 = *plVar5;
        *(longlong *)(lVar1 + (longlong)iVar8 * 8) = lVar6;
        if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar6);
          lVar6 = *(longlong *)(lVar1 + (longlong)iVar8 * 8);
        }
        FUN_1485063a5(&local_368,*(undefined8 *)(param_1[0x14] + lVar4 * 8));
        uVar7 = FUN_1485062af(*(undefined8 *)(param_1[0x14] + lVar4 * 8));
        uVar7 = FUN_1447210f0(uVar7);
        FUN_1484e0ce2(lVar6,uVar7,&local_368);
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)param_1[0x15]);
    }
    uVar7 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar4 = FUN_14855788a(uVar7,0);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    param_1[0x26] = lVar4;
    FUN_1496c1f54(param_1);
    local_368 = L"ToolName";
    local_360._0_4_ = 8;
    FUN_1446e940c(local_36c,&local_368);
    local_368 = L"USplitMeshesTool";
    local_360 = CONCAT44(local_360._4_4_,0x10);
    FUN_1446e940c(local_370,&local_368);
    FUN_140208bae(&local_368,local_370,local_36c,L"Split");
    (**(code **)(*param_1 + 0x370))(param_1,&local_368);
    if (local_368 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_368 + 0x10))();
    }
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_368 = L"OnStartTool";
    local_360._0_4_ = 0xb;
    FUN_1446e940c(local_36c,&local_368);
    local_368 = L"USplitMeshesTool";
    local_360 = CONCAT44(local_360._4_4_,0x10);
    FUN_1446e940c(local_370,&local_368);
    FUN_140208bae(&local_368,local_370,local_36c,L"Split Meshes into parts");
    (**(code **)(*plVar5 + 0x340))(plVar5,&local_368,2);
    if (local_368 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_368 + 0x10))();
    }
    if ((local_48 ^ (ulonglong)auStack_398) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar8);
}



// FUNCTION 1496c1d54 FUN_1496c1d54 body=175 status=ok
// SIG undefined FUN_1496c1d54(void)

undefined8 FUN_1496c1d54(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459fccee();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c1e04 FUN_1496c1e04 body=212 status=ok
// SIG undefined FUN_1496c1e04(void)

void FUN_1496c1e04(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_1496d1e5c(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c1eda FUN_1496c1eda body=121 status=ok
// SIG undefined FUN_1496c1eda(void)

void FUN_1496c1eda(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1496d21c4(param_1,iVar1);
    }
    FUN_1496d2179((longlong)iVar1 * 0x230 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1496d2258(param_1,param_2,iVar1 - param_2);
    FUN_1496d22ba(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1496c1f54 FUN_1496c1f54 body=3490 status=ok
// SIG undefined FUN_1496c1f54(void)

void FUN_1496c1f54(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  void *_Src;
  ulonglong uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  wchar_t *pwVar14;
  uint uVar15;
  undefined1 **ppuVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  wchar_t ***pppwVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined1 auStack_dc8 [32];
  undefined4 local_da8;
  char local_d91;
  longlong local_d90;
  longlong local_d88;
  wchar_t *local_d80;
  longlong *local_d78;
  longlong local_d70;
  longlong local_d68;
  wchar_t *local_d60;
  wchar_t *local_d58;
  wchar_t *local_d50;
  wchar_t **local_d48;
  longlong *local_d40;
  code *local_d38;
  wchar_t **local_d30;
  longlong local_d28;
  undefined8 uStack_d20;
  longlong local_d18 [2];
  code *local_d08;
  undefined8 *local_d00;
  undefined1 *local_cf8;
  undefined8 *local_cf0;
  undefined1 *local_ce8;
  wchar_t **local_ce0;
  undefined1 *local_cd8;
  undefined8 *local_cd0;
  wchar_t **local_cc8;
  longlong *local_cc0;
  longlong local_cb8;
  int local_cac;
  wchar_t *local_ca8;
  ulonglong uStack_ca0;
  longlong *local_c98;
  int local_c90;
  undefined4 local_c8c;
  longlong local_c88;
  undefined4 local_c7c;
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  wchar_t **local_698;
  undefined8 uStack_690;
  undefined8 local_678;
  undefined4 local_670;
  undefined8 local_66c;
  int local_664;
  undefined1 local_660 [8];
  undefined1 *local_658;
  int local_650;
  wchar_t *local_648;
  undefined4 *puStack_640;
  longlong *local_638;
  ulonglong uStack_630;
  undefined4 local_628;
  longlong local_620;
  undefined8 local_618;
  undefined4 local_610;
  undefined1 local_608 [264];
  int local_500;
  int local_4fc;
  undefined8 *local_4f8;
  longlong local_438;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_dc8;
  iVar5 = *(int *)((longlong)param_1 + 0x114);
  FUN_145c3236f(param_1[0x21],(int)param_1[0x22]);
  *(undefined4 *)(param_1 + 0x22) = 0;
  if ((iVar5 < 0) && (*(int *)((longlong)param_1 + 0x114) != 0)) {
    FUN_1496d2366(param_1 + 0x21);
  }
  FUN_1496c3724(param_1 + 0x21);
  *(undefined4 *)(param_1 + 0x23) = 0;
  local_c7c = 0;
  if (0 < (int)param_1[0x20]) {
    lVar17 = 0;
    local_d78 = param_1;
    do {
      local_d80 = (wchar_t *)(lVar17 * 0x38 + param_1[0x21]);
      lVar22 = param_1[0x1f];
      local_d68 = lVar17 * 0x230;
      local_c88 = lVar22 + local_d68;
      local_c98 = (longlong *)0x0;
      local_c90 = *(int *)(lVar22 + 0x228 + local_d68);
      lVar21 = (longlong)local_c90;
      _Src = *(void **)(lVar22 + 0x220 + local_d68);
      local_d90 = lVar17;
      if (lVar21 == 0) {
        local_c8c = 0;
      }
      else {
        FUN_1411312f2(&local_c98,local_c90,0);
        memcpy(local_c98,_Src,lVar21 << 3);
      }
      local_ca8 = (wchar_t *)0x0;
      uStack_ca0 = 0;
      local_cac = 0;
      local_cc8 = &local_ca8;
      local_cc0 = (longlong *)&local_cac;
      local_cb8 = local_c88;
      local_d91 = (**(code **)(*param_1 + 0x3a8))(param_1,local_d90);
      if (local_d91 == '\0') {
        bVar4 = *(byte *)(param_1[0x1d] + 0xa8);
        if (bVar4 == 2) {
          if ((*(longlong *)(local_c88 + 0x208) != 0) &&
             (local_648 = *(wchar_t **)(*(longlong *)(local_c88 + 0x208) + 0x48),
             local_648 != (wchar_t *)0x0)) {
            local_cf0 = &local_c78;
            local_cf8 = &LAB_144582698;
            ppuVar16 = &local_cf8;
            local_c78 = (wchar_t ***)&local_648;
            goto LAB_1496c2229;
          }
        }
        else if (bVar4 == 3) {
          local_648 = (wchar_t *)&local_c88;
          local_ce8 = &LAB_14458268a;
          ppuVar16 = &local_ce8;
          local_ce0 = &local_648;
LAB_1496c2229:
          FUN_144575984(&local_cc8,ppuVar16);
        }
        else if (bVar4 < 2) {
          local_648 = (wchar_t *)0x0;
          puStack_640 = (undefined4 *)0x0;
          local_638 = (longlong *)0x0;
          uStack_630 = 0;
          FUN_146bad868(&local_648,*(int *)(local_c88 + 0x20) * 0x200 + *(int *)(local_c88 + 0x24));
          FUN_146be553e(&local_648,local_c88);
          if (*(char *)(param_1[0x1d] + 0xa8) == '\x01') {
            FUN_146be56ac(&local_648,local_c88,*(undefined8 *)(param_1[0x1d] + 0xb0),2);
          }
          uStack_c70 = &local_c88;
          local_cd0 = &local_c78;
          local_cd8 = &LAB_14458262c;
          local_c78 = (wchar_t ***)&local_648;
          FUN_144575984(&local_cc8,&local_cd8);
          if (local_638 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (local_648 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        if (1 < local_cac) goto LAB_1496c2330;
        FUN_1484e16c4(*(undefined8 *)(param_1[0x24] + local_d90 * 8),1);
        *(undefined1 *)local_d80 = 1;
        *(int *)(param_1 + 0x23) = (int)param_1[0x23] + 1;
      }
      else {
        local_cac = 2;
LAB_1496c2330:
        pwVar14 = local_d80;
        *(undefined1 *)local_d80 = 0;
        local_d50 = local_d80 + 4;
        FUN_146bcf452(local_d50,local_cac,1);
        local_d58 = pwVar14 + 0xc;
        FUN_1496c379c(local_d58,local_cac);
        local_d60 = pwVar14 + 0x14;
        FUN_14051b394(local_d60,local_cac,1);
        if (0 < local_cac) {
          lVar17 = 0;
          do {
            local_d88 = lVar17;
            FUN_14834c738(&local_648);
            if (local_d91 == '\0') {
              if ((int)uStack_ca0 != 0) {
                local_da8 = CONCAT31(local_da8._1_3_,1);
                FUN_1482e14f4(&local_c78,local_c88,local_ca8 + local_d88 * 8,0xf);
                FUN_1496c0684(&local_648);
                FUN_1482e1868(&local_c78);
              }
            }
            else {
              local_678 = 0;
              local_670 = 0;
              local_698 = (wchar_t **)0x0;
              uStack_690 = (undefined1 *)0x0;
              local_66c = 0xffffffff00000080;
              local_664 = 0;
              local_658 = (undefined1 *)0x0;
              local_650 = 0;
              uVar9 = (**(code **)(*param_1 + 0x3b0))(param_1,local_d90);
              local_d00 = &local_c78;
              local_d08 = FUN_1445826b6;
              local_c78 = &local_698;
              FUN_148385b4a(uVar9,local_c88,&local_d08,0);
              FUN_140619b9c(&local_698);
              if ((int)local_d88 == 1) {
                local_d28 = 0;
                uStack_d20 = 0;
                lVar17 = local_c88;
                if (0 < *(int *)(local_c88 + 0x140) * 0x200 + *(int *)(local_c88 + 0x144)) {
                  uVar25 = 0;
                  do {
                    uVar7 = uStack_d20;
                    if ((ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar17 + 0x148) +
                                             (ulonglong)(uVar25 >> 9) * 8) +
                                           (ulonglong)(uVar25 & 0x1ff) * 2) - 1U) < 0xfffe) {
                      if ((int)uStack_690 != local_664) {
                        puVar10 = local_658;
                        if (local_658 == (undefined1 *)0x0) {
                          puVar10 = local_660;
                        }
                        for (iVar5 = *(int *)(puVar10 +
                                             (ulonglong)(local_650 + 0x7fffffffU & uVar25) * 4);
                            iVar5 != -1;
                            iVar5 = *(int *)((longlong)local_698 + (longlong)iVar5 * 0xc + 4)) {
                          if (*(uint *)((longlong)local_698 + (longlong)iVar5 * 0xc) == uVar25)
                          goto LAB_1496c2881;
                        }
                      }
                      lVar17 = (longlong)(int)uStack_d20;
                      uVar19 = (int)uStack_d20 + 1;
                      uStack_d20 = CONCAT44(uStack_d20._4_4_,uVar19);
                      if (uStack_d20._4_4_ < uVar19) {
                        FUN_1446f48e2(&local_d28,uVar7 & 0xffffffff);
                      }
                      *(uint *)(local_d28 + lVar17 * 4) = uVar25;
                      lVar17 = local_c88;
                    }
LAB_1496c2881:
                    uVar25 = uVar25 + 1;
                  } while ((int)uVar25 < *(int *)(lVar17 + 0x140) * 0x200 + *(int *)(lVar17 + 0x144)
                          );
                }
                local_da8 = CONCAT31(local_da8._1_3_,1);
                FUN_1482e14f4(&local_c78,lVar17,&local_d28);
                FUN_1496c0684(&local_648);
                FUN_1482e1868(&local_c78);
                if (local_d28 != 0) {
                  FUN_1400020a8();
                }
              }
              else if ((int)local_d88 == 0) {
                local_da8 = CONCAT31(local_da8._1_3_,1);
                FUN_1482e14f4(&local_c78,local_c88,local_d18);
                FUN_1496c0684(&local_648);
                FUN_1482e1868(&local_c78);
              }
              if (local_d18[0] != 0) {
                FUN_1400020a8();
              }
              local_650 = 0;
              if (local_658 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
              FUN_1447a082e(&local_698);
            }
            local_698 = (wchar_t **)0x0;
            uStack_690 = (undefined1 *)0x0;
            if ((local_438 != 0) && (lVar17 = *(longlong *)(local_438 + 0x48), lVar17 != 0)) {
              local_c78 = (wchar_t ***)0x0;
              uStack_c70 = (longlong *)0x0;
              uVar19 = local_500 * 0x200 + local_4fc;
              uVar25 = 0;
              if ((uVar19 != 0) && (uVar25 = 0, 0xfffd < (ushort)(*(short *)*local_4f8 - 1U))) {
                uVar12 = 1;
                uVar13 = 1;
                if (1 < (int)uVar19) {
                  uVar12 = uVar19;
                }
                do {
                  uVar25 = uVar12;
                  if (uVar12 == uVar13) break;
                  uVar15 = uVar13 >> 9;
                  uVar23 = uVar13 & 0x1ff;
                  uVar25 = uVar13;
                  uVar13 = uVar13 + 1;
                } while (0xfffd < (ushort)(*(short *)(local_4f8[uVar15] + (ulonglong)uVar23 * 2) -
                                          1U));
              }
              param_1 = local_d78;
              local_d70 = lVar17;
              if (uVar25 != uVar19) {
                do {
                  uVar7 = (ulonglong)uStack_c70;
                  lVar22 = *(longlong *)
                            (*(longlong *)(lVar17 + 0x20) + (ulonglong)(uVar25 >> 9) * 8);
                  uVar26 = (ulonglong)(uVar25 & 0x1ff);
                  iVar5 = *(int *)(lVar22 + uVar26 * 4);
                  iVar8 = (int)uStack_c70;
                  lVar21 = (longlong)(int)uStack_c70;
                  if (lVar21 != 0) {
                    lVar24 = lVar21 * 4;
                    lVar18 = 0;
                    do {
                      if (*(int *)((longlong)local_c78 + lVar18 * 4) == iVar5) {
                        if ((int)lVar18 != -1) {
                          *(int *)(lVar22 + uVar26 * 4) = (int)lVar18;
                          goto LAB_1496c272a;
                        }
                        break;
                      }
                      lVar18 = lVar18 + 1;
                      lVar24 = lVar24 + -4;
                    } while (lVar24 != 0);
                  }
                  uVar12 = (int)uStack_c70 + 1;
                  uStack_c70 = (longlong *)CONCAT44(uStack_c70._4_4_,uVar12);
                  if (uStack_c70._4_4_ < uVar12) {
                    FUN_1446f48e2(&local_c78,uVar7 & 0xffffffff);
                    lVar17 = local_d70;
                  }
                  puVar10 = uStack_690;
                  plVar11 = local_c98;
                  *(int *)((longlong)local_c78 + lVar21 * 4) = iVar5;
                  lVar22 = (longlong)(int)uStack_690;
                  uVar12 = (int)uStack_690 + 1;
                  uStack_690 = (undefined1 *)CONCAT44(uStack_690._4_4_,uVar12);
                  if (uStack_690._4_4_ < uVar12) {
                    FUN_144769b64(&local_698,(ulonglong)puVar10 & 0xffffffff);
                    lVar17 = local_d70;
                  }
                  local_698[lVar22] = (wchar_t *)plVar11[iVar5];
                  *(int *)(*(longlong *)
                            (*(longlong *)(lVar17 + 0x20) + (ulonglong)(uVar25 >> 9) * 8) +
                          uVar26 * 4) = iVar8;
LAB_1496c272a:
                  uVar12 = uVar25 + 1;
                  if ((int)(uVar25 + 1) < (int)uVar19) {
                    uVar12 = uVar19;
                  }
                  do {
                    uVar13 = uVar12;
                    if (uVar12 - 1 == uVar25) break;
                    uVar25 = uVar25 + 1;
                    uVar13 = uVar25;
                  } while (0xfffd < (ushort)(*(short *)(local_4f8[uVar25 >> 9] +
                                                       (ulonglong)(uVar25 & 0x1ff) * 2) - 1U));
                  uVar25 = uVar13;
                } while (uVar25 != uVar19);
                param_1 = local_d78;
                if (local_c78 != (wchar_t ***)0x0) {
                  FUN_1400020a8();
                  param_1 = local_d78;
                }
              }
            }
            lVar17 = local_d88;
            local_c68 = DAT_14c8464f0;
            local_c78 = (wchar_t ***)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_c70 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            FUN_146c00942(local_d88 * 0x220 + *(longlong *)local_d50,&puStack_640);
            pppwVar20 = (wchar_t ***)(lVar17 * 0x10 + *(longlong *)local_d58);
            if (pppwVar20 != &local_698) {
              if (*pppwVar20 != (wchar_t **)0x0) {
                FUN_1400020a8();
              }
              *pppwVar20 = local_698;
              local_698 = (wchar_t **)0x0;
              *(int *)(pppwVar20 + 1) = (int)uStack_690;
              *(uint *)((longlong)pppwVar20 + 0xc) = uStack_690._4_4_;
              uStack_690 = (undefined1 *)0x0;
            }
            lVar17 = *(longlong *)local_d60;
            *(undefined8 *)(lVar17 + 0x10 + local_d88 * 0x18) = local_c68;
            puVar3 = (undefined4 *)(lVar17 + local_d88 * 0x18);
            *puVar3 = (undefined4)local_c78;
            puVar3[1] = local_c78._4_4_;
            puVar3[2] = (int)uStack_c70;
            puVar3[3] = uStack_c70._4_4_;
            if (local_698 != (wchar_t **)0x0) {
              FUN_1400020a8();
            }
            FUN_1482e1868(&local_648);
            lVar17 = local_d88 + 1;
          } while (lVar17 < local_cac);
        }
        uVar9 = *(undefined8 *)(param_1[0x24] + local_d90 * 8);
        uVar6 = *(undefined4 *)(param_1[0x1f] + 0x170 + local_d68);
        local_d30 = &local_648;
        local_648 = local_d80;
        puStack_640 = &local_c7c;
        local_d38 = FUN_144582700;
        local_638 = param_1;
        FUN_140056680(&local_c78,L"Components");
        local_da8 = uVar6;
        FUN_1484e2b86(uVar9,&local_c78,1);
        if (local_c78 != (wchar_t ***)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_144716727(local_ca8,uStack_ca0 & 0xffffffff);
      if (local_ca8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (local_c98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar17 = local_d90 + 1;
    } while (lVar17 < (int)param_1[0x20]);
    if (0 < (int)param_1[0x23]) {
      plVar11 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      lVar17 = param_1[0x20];
      lVar22 = param_1[0x23];
      local_648 = L"NoComponentsMessage";
      puStack_640._0_4_ = 0x13;
      FUN_1446e940c(local_d18,&local_648);
      local_648 = L"USplitMeshesTool";
      puStack_640 = (undefined4 *)CONCAT44(puStack_640._4_4_,0x10);
      FUN_1446e940c(&local_d28,&local_648);
      FUN_140208bae(&local_ca8,&local_d28,local_d18,L"{0} of {1} Input Meshes cannot be Split.");
      FUN_14023409e(&local_d48,&local_ca8,1);
      local_648 = (wchar_t *)((ulonglong)local_648 & 0xffffffff00000000);
      local_638 = (longlong *)0x0;
      uStack_630 = uStack_630 & 0xffffffff00000000;
      local_628 = 0;
      local_618 = 0;
      local_610 = 0;
      uStack_690 = local_608;
      local_698 = &local_648;
      puStack_640 = (undefined4 *)(longlong)(int)lVar22;
      local_620 = (longlong)(int)lVar17;
      FUN_14010d304(&local_c78);
      local_cc8 = local_d48;
      local_cc0 = local_d40;
      if (local_d40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d40 + 1) = (int)local_d40[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_c98,&local_cc8,&local_c78);
      FUN_14007f2db(local_c78,(ulonglong)uStack_c70 & 0xffffffff);
      if (local_c78 != (wchar_t ***)0x0) {
        FUN_1400020a8();
      }
      param_1 = local_d78;
      lVar17 = 0x30;
      do {
        if (*(longlong **)((longlong)&local_648 + lVar17) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_648 + lVar17) + 0x10))();
          *(undefined8 *)((longlong)&local_648 + lVar17) = 0;
          *(undefined4 *)((longlong)&puStack_640 + lVar17) = 0;
        }
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x10);
      if (local_d40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_d40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_d40)(local_d40);
          LOCK();
          piVar2 = (int *)((longlong)local_d40 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_d40 + 0x10))(local_d40);
          }
        }
      }
      (**(code **)(*plVar11 + 0x340))(plVar11,&local_c98,3);
      pwVar14 = local_ca8;
      if (local_c98 != (longlong *)0x0) {
        (**(code **)(*local_c98 + 0x10))();
        pwVar14 = local_ca8;
      }
      goto LAB_1496c2ca1;
    }
  }
  plVar11 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_144a5dc74(&local_648);
  (**(code **)(*plVar11 + 0x340))(plVar11,&local_648,3);
  pwVar14 = local_648;
LAB_1496c2ca1:
  if (pwVar14 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)pwVar14 + 0x10))();
  }
  FUN_1496c2cf8(param_1,*(undefined1 *)(param_1[0x1d] + 0xb9));
  if ((local_60 ^ (ulonglong)auStack_dc8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c2cf8 FUN_1496c2cf8 body=128 status=ok
// SIG undefined FUN_1496c2cf8(void)

void FUN_1496c2cf8(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0x128)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      FUN_1484e2800(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + lVar3 * 8),param_2);
      if ((char)param_2 == '\0') {
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + lVar3 * 8);
LAB_1496c2d67:
        FUN_14850635b(uVar1);
      }
      else {
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + lVar3 * 8);
        if (*(char *)(*(longlong *)(param_1 + 0x108) + lVar2) == '\x01') goto LAB_1496c2d67;
        FUN_148506321();
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x38;
    } while (lVar3 < *(int *)(param_1 + 0x128));
  }
  return;
}



// FUNCTION 1496c2d82 FUN_1496c2d82 body=1885 status=ok
// SIG undefined FUN_1496c2d82(void)

void FUN_1496c2d82(longlong *param_1,char param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 *puVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_e58 [32];
  longlong *local_e38;
  longlong local_e30;
  char local_e28;
  undefined7 uStack_e27;
  undefined8 uStack_e20;
  undefined2 *local_e08;
  int local_e00;
  undefined8 local_df8;
  undefined8 uStack_df0;
  undefined4 local_de8;
  undefined4 uStack_de4;
  undefined4 uStack_de0;
  undefined4 uStack_ddc;
  double local_dd8;
  double local_dd0;
  double local_dc8;
  undefined8 local_db8;
  undefined8 uStack_db0;
  undefined4 local_da8;
  undefined4 uStack_da4;
  undefined4 uStack_da0;
  undefined4 uStack_d9c;
  longlong local_d90;
  longlong local_d88;
  undefined8 uStack_d80;
  undefined8 local_d78;
  undefined1 *local_d70;
  undefined8 local_d68;
  undefined4 local_d60;
  undefined4 local_d5c;
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined4 local_d38;
  undefined4 uStack_d34;
  undefined4 uStack_d30;
  undefined4 uStack_d2c;
  double local_d28;
  double dStack_d20;
  double local_d18;
  undefined8 uStack_d10;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined4 local_cf8;
  undefined4 uStack_cf4;
  undefined4 uStack_cf0;
  undefined4 uStack_cec;
  longlong local_ce8;
  undefined8 uStack_ce0;
  undefined1 local_cd8 [1488];
  wchar_t *local_708;
  undefined8 local_700;
  undefined1 *local_6f8;
  undefined8 local_6f0;
  undefined8 local_6e8;
  wchar_t local_98 [8];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e58;
  lVar9 = param_1[0x25];
  local_e38 = param_1;
  if ((longlong)(int)lVar9 != 0) {
    lVar13 = param_1[0x24];
    lVar7 = 0;
    do {
      FUN_1484e0e5e(*(undefined8 *)(lVar13 + lVar7));
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar9 * 8 != lVar7);
  }
  plVar8 = local_e38;
  if (0 < (int)local_e38[0x15]) {
    lVar9 = 0;
    do {
      FUN_14850635b(*(undefined8 *)(plVar8[0x14] + lVar9 * 8));
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)plVar8[0x15]);
  }
  plVar5 = (longlong *)plVar8[0x1e];
  FUN_140056680(&local_708,L"OutputTypeFromInputTool");
  (**(code **)(*plVar5 + 0x2a0))(plVar5,plVar8,&local_708);
  if (local_708 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)plVar8[0x1d];
  FUN_140056680(&local_708,&DAT_149dfb77a);
  (**(code **)(*plVar5 + 0x2a0))(plVar5,plVar8,&local_708);
  if (local_708 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (param_2 == '\x01') {
    lVar9 = (**(code **)(*plVar8 + 0x2c8))(plVar8);
    local_708 = L"SplitMeshesToolTransactionName";
    local_700._0_4_ = 0x1e;
    FUN_1446e940c(&local_d78,&local_708);
    local_708 = L"USplitMeshesTool";
    local_700 = CONCAT44(local_700._4_4_,0x10);
    FUN_1446e940c(&local_df8,&local_708);
    FUN_140208bae(&local_708,&local_df8,&local_d78,L"Split Meshes");
    (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x10))(lVar9 + 0x28,&local_708);
    if (local_708 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_708 + 0x10))();
    }
    local_d88 = 0;
    uStack_d80 = 0;
    iVar14 = 0;
    local_78 = 0;
    local_70 = 0;
    local_98[0] = L'\0';
    local_98[1] = L'\0';
    local_98[2] = L'\0';
    local_98[3] = L'\0';
    local_98[4] = L'\0';
    local_98[5] = L'\0';
    local_98[6] = L'\0';
    local_98[7] = L'\0';
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    iVar2 = (int)plVar8[0x15];
    if (iVar2 < 1) {
      local_d70 = local_88;
      local_d78 = 0x100000000;
      local_d68 = 0xffffffff;
      local_d60 = 0;
    }
    else {
      lVar9 = 0;
      do {
        lVar13 = plVar8[0x21];
        if (*(char *)(lVar13 + lVar9 * 0x38) == '\0') {
          local_d90 = FUN_1485062af(*(undefined8 *)(plVar8[0x14] + lVar9 * 8));
          FUN_140d0b320(local_98,&local_708,&local_d90,0);
          FUN_1485063a5(&local_df8,*(undefined8 *)(plVar8[0x14] + lVar9 * 8));
          local_708 = *(wchar_t **)(local_d90 + 0x18);
          FUN_1400021e4(&local_708,&local_e08);
          FUN_14850577a(&local_708,1);
          lVar7 = (**(code **)(*plVar8 + 0x390))(plVar8);
          if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar7);
          }
          plVar5 = (longlong *)plVar8[0x1e];
          iVar2 = (int)plVar5[0x16];
          local_6e8 = lVar7;
          if (iVar2 == DAT_14cb4d6a8) {
            if (1 < iVar2) {
              iVar2 = FUN_144a80a00(plVar5[0x15],DAT_14cb4d6a0);
              if (iVar2 != 0) {
                plVar5 = (longlong *)plVar8[0x1e];
                goto LAB_1496c32b7;
              }
            }
LAB_1496c30b4:
            FUN_1485073fd(*(undefined8 *)(plVar8[0x14] + lVar9 * 8),&local_708);
          }
          else {
            if (DAT_14cb4d6a8 + iVar2 == 1) goto LAB_1496c30b4;
LAB_1496c32b7:
            (**(code **)(*plVar5 + 0x2c0))(plVar5,&local_708);
          }
          lVar13 = lVar13 + lVar9 * 0x38;
          local_e30 = (longlong)*(int *)(lVar13 + 0x10);
          if (0 < local_e30) {
            lVar15 = 0x10;
            lVar7 = 0;
            lVar12 = 0;
            lVar6 = 0;
            do {
              FUN_1496c34e0(&local_d78,&local_708);
              puVar11 = &DAT_149dfb77a;
              if (local_e00 != 0) {
                puVar11 = local_e08;
              }
              FUN_140002266(&local_e28,L"%s_%d",puVar11);
              if (local_ce8 != 0) {
                FUN_1400020a8();
              }
              local_ce8 = CONCAT71(uStack_e27,local_e28);
              uStack_ce0 = uStack_e20;
              lVar10 = *(longlong *)(lVar13 + 0x28);
              local_d18 = local_dc8 + *(double *)(lVar10 + lVar15);
              dStack_d20 = local_dd0 + *(double *)(lVar10 + -8 + lVar15);
              local_d28 = local_dd8 + *(double *)(lVar10 + -0x10 + lVar15);
              local_d48 = local_df8;
              uStack_d40 = uStack_df0;
              local_d38 = local_de8;
              uStack_d34 = uStack_de4;
              uStack_d30 = uStack_de0;
              uStack_d2c = uStack_ddc;
              uStack_d10 = 0;
              local_cf8 = local_da8;
              uStack_cf4 = uStack_da4;
              uStack_cf0 = uStack_da0;
              uStack_cec = uStack_d9c;
              local_d08 = local_db8;
              uStack_d00 = uStack_db0;
              if (*(char *)(plVar8[0x1d] + 0xb8) == '\x01') {
                FUN_1457c8d02(local_cd8,*(longlong *)(lVar13 + 0x18) + lVar7);
              }
              FUN_148505c14(&local_d78,*(longlong *)(lVar13 + 8) + lVar12);
              uVar4 = (**(code **)(*plVar8 + 0x2c8))(plVar8);
              FUN_148505c7a(&local_e28,uVar4,&local_d78);
              uVar1 = uStack_d80;
              uVar4 = uStack_e20;
              if (local_e28 == '\0') {
                lVar10 = (longlong)(int)uStack_d80;
                uVar3 = (int)uStack_d80 + 1;
                uStack_d80 = CONCAT44(uStack_d80._4_4_,uVar3);
                if (uStack_d80._4_4_ < uVar3) {
                  FUN_1447d05f2(&local_d88,uVar1 & 0xffffffff);
                }
                *(undefined8 *)(local_d88 + lVar10 * 8) = uVar4;
                plVar8 = local_e38;
              }
              FUN_1484c7624(&local_d78);
              lVar6 = lVar6 + 1;
              lVar12 = lVar12 + 0x220;
              lVar7 = lVar7 + 0x10;
              lVar15 = lVar15 + 0x18;
            } while (local_e30 != lVar6);
          }
          FUN_1484c7624(&local_708);
          if (local_e08 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          iVar2 = (int)plVar8[0x15];
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar2);
      local_d70 = local_88;
      local_d78 = 0x100000000;
      local_d68 = 0xffffffff;
      local_d60 = 0;
      if (local_70 == 0) {
        iVar14 = 0;
      }
      else {
        FUN_1449c0562(&local_d78);
        iVar14 = local_70;
      }
    }
    local_6f0 = local_d68;
    uVar4 = local_6f0;
    local_6e8 = CONCAT44(local_d5c,local_d60);
    local_700 = local_d78;
    local_6f8 = local_d70;
    local_6f0._4_4_ = (int)((ulonglong)local_d68 >> 0x20);
    local_708 = local_98;
    if ((local_6f0._4_4_ != iVar14) || (local_d70 != local_88)) {
      iVar2 = local_6f0._4_4_;
      local_6f0 = uVar4;
      do {
        FUN_140aeefbc(*(undefined8 *)(*(longlong *)local_708 + (longlong)iVar2 * 0x10),0,1);
        local_6f0 = CONCAT44(local_6f0._4_4_,(uint)local_6f0 & ~local_700._4_4_);
        FUN_1449c0562(&local_700);
        iVar2 = local_6f0._4_4_;
        uVar4 = local_6f0;
      } while (local_708 != local_98 || (local_6f8 != local_88 || local_6f0._4_4_ != iVar14));
    }
    local_6f0 = uVar4;
    uVar4 = (**(code **)(*plVar8 + 0x2c8))(plVar8);
    FUN_148550a4d(uVar4,&local_d88);
    lVar9 = (**(code **)(*plVar8 + 0x2c8))(plVar8);
    (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x18))(lVar9 + 0x28);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140d0a7fc(local_98);
    if (local_d88 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c34e0 FUN_1496c34e0 body=580 status=ok
// SIG undefined FUN_1496c34e0(void)

longlong * FUN_1496c34e0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = *param_2;
  *param_1 = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  *(char *)(param_1 + 1) = (char)param_2[1];
  lVar3 = param_2[2];
  param_1[2] = lVar3;
  if ((lVar3 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
    bVar2 = DAT_14c950c29;
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  lVar3 = param_2[4];
  param_1[4] = lVar3;
  if ((lVar3 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  plVar4 = param_2 + 6;
  plVar5 = param_1 + 6;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar5 = *plVar4;
    plVar4 = plVar4 + 1;
    plVar5 = plVar5 + 1;
  }
  param_1[0x12] = 0;
  iVar1 = (int)param_2[0x13];
  _Src = (void *)param_2[0x12];
  *(int *)(param_1 + 0x13) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x12,iVar1,0);
    memcpy((void *)param_1[0x12],_Src,(longlong)iVar1 * 2);
  }
  param_1[0x14] = 0;
  iVar1 = (int)param_2[0x15];
  lVar3 = param_2[0x14];
  *(int *)(param_1 + 0x15) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    FUN_140c99534(param_1 + 0x14,iVar1,0);
    FUN_140c994e3(param_1[0x14],lVar3,iVar1);
  }
  param_1[0x16] = 0;
  iVar1 = (int)param_2[0x17];
  lVar3 = param_2[0x16];
  *(int *)(param_1 + 0x17) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  else {
    FUN_140c99534(param_1 + 0x16,iVar1,0);
    FUN_140c994e3(param_1[0x16],lVar3,iVar1);
  }
  *(short *)(param_1 + 0x18) = (short)param_2[0x18];
  lVar3 = param_2[0x23];
  *(char *)(param_1 + 0x23) = (char)lVar3;
  if ((char)lVar3 == '\x01') {
    FUN_14850cba0(param_1 + 0x19,param_2 + 0x19);
  }
  *(int *)(param_1 + 0x25) = (int)param_2[0x25];
  param_1[0x24] = param_2[0x24];
  FUN_148580806(param_1 + 0x26,param_2 + 0x26);
  *(char *)(param_1 + 0x2e) = (char)param_2[0x2e];
  lVar3 = param_2[0x87];
  *(char *)(param_1 + 0x87) = (char)lVar3;
  if ((char)lVar3 == '\x01') {
    FUN_146f6bfa8(param_1 + 0x2f,param_2 + 0x2f);
  }
  lVar3 = param_2[0xcc];
  *(char *)(param_1 + 0xcc) = (char)lVar3;
  if ((char)lVar3 == '\x01') {
    FUN_146bff712(param_1 + 0x88,param_2 + 0x88);
  }
  return param_1;
}



// FUNCTION 1496c3724 FUN_1496c3724 body=118 status=ok
// SIG undefined FUN_1496c3724(void)

void FUN_1496c3724(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1496d23b6(param_1,iVar1);
    }
    FUN_1496d2396((longlong)iVar1 * 0x38 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1496d2446(param_1,param_2,iVar1 - param_2);
    FUN_1496d24a0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1496c379c FUN_1496c379c body=128 status=ok
// SIG undefined FUN_1496c379c(void)

void FUN_1496c379c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140b1741e(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1496d2546(param_1,param_2,iVar1 - param_2);
    FUN_1496d25a0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1496c381e FUN_1496c381e body=45 status=ok
// SIG undefined FUN_1496c381e(void)

longlong FUN_1496c381e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3854 FUN_1496c3854 body=45 status=ok
// SIG undefined FUN_1496c3854(void)

longlong FUN_1496c3854(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d29e62(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3882 FUN_1496c3882 body=48 status=ok
// SIG undefined FUN_1496c3882(void)

longlong FUN_1496c3882(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145d29e62(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c38b2 FUN_1496c38b2 body=48 status=ok
// SIG undefined FUN_1496c38b2(void)

longlong FUN_1496c38b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_145d29e62(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c38ea FUN_1496c38ea body=45 status=ok
// SIG undefined FUN_1496c38ea(void)

longlong FUN_1496c38ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145865c60(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3918 FUN_1496c3918 body=48 status=ok
// SIG undefined FUN_1496c3918(void)

longlong FUN_1496c3918(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145865c60(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3948 FUN_1496c3948 body=48 status=ok
// SIG undefined FUN_1496c3948(void)

longlong FUN_1496c3948(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x120;
  FUN_145865c60(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3980 FUN_1496c3980 body=45 status=ok
// SIG undefined FUN_1496c3980(void)

longlong FUN_1496c3980(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145e206e4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c39ae FUN_1496c39ae body=48 status=ok
// SIG undefined FUN_1496c39ae(void)

longlong FUN_1496c39ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145e206e4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c39ea FUN_1496c39ea body=45 status=ok
// SIG undefined FUN_1496c39ea(void)

longlong FUN_1496c39ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d29ef6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3a1e FUN_1496c3a1e body=48 status=ok
// SIG undefined FUN_1496c3a1e(void)

longlong FUN_1496c3a1e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145d29ef6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3a56 FUN_1496c3a56 body=48 status=ok
// SIG undefined FUN_1496c3a56(void)

longlong FUN_1496c3a56(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_145d29ef6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3a9a FUN_1496c3a9a body=73 status=ok
// SIG undefined FUN_1496c3a9a(void)

ulonglong FUN_1496c3a9a(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x378))();
  if ((((cVar1 == '\0') || ((char)param_1[0x24] != '\x01')) || (param_1[0x1d] == 0)) ||
     (*(char *)(param_1[0x1d] + 0x30) != '\x01')) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)param_1[0x1b] >> 8),*(undefined1 *)(param_1[0x1b] + 0xd2)) ^
            1;
  }
  return uVar2;
}



// FUNCTION 1496c3ae4 FUN_1496c3ae4 body=45 status=ok
// SIG undefined FUN_1496c3ae4(void)

longlong FUN_1496c3ae4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1461a8c12(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3b18 FUN_1496c3b18 body=48 status=ok
// SIG undefined FUN_1496c3b18(void)

longlong FUN_1496c3b18(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1461a8c12(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3b50 FUN_1496c3b50 body=48 status=ok
// SIG undefined FUN_1496c3b50(void)

longlong FUN_1496c3b50(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_1461a8c12(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3b80 FUN_1496c3b80 body=48 status=ok
// SIG undefined FUN_1496c3b80(void)

longlong FUN_1496c3b80(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc0;
  FUN_1461a8c12(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3bc8 FUN_1496c3bc8 body=45 status=ok
// SIG undefined FUN_1496c3bc8(void)

longlong FUN_1496c3bc8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d4df28(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3bfc FUN_1496c3bfc body=48 status=ok
// SIG undefined FUN_1496c3bfc(void)

longlong FUN_1496c3bfc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145d4df28(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3c34 FUN_1496c3c34 body=48 status=ok
// SIG undefined FUN_1496c3c34(void)

longlong FUN_1496c3c34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_145d4df28(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3c70 FUN_1496c3c70 body=45 status=ok
// SIG undefined FUN_1496c3c70(void)

longlong FUN_1496c3c70(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3ca6 FUN_1496c3ca6 body=45 status=ok
// SIG undefined FUN_1496c3ca6(void)

longlong FUN_1496c3ca6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d45f2a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3cd4 FUN_1496c3cd4 body=48 status=ok
// SIG undefined FUN_1496c3cd4(void)

longlong FUN_1496c3cd4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145d45f2a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3d0c FUN_1496c3d0c body=45 status=ok
// SIG undefined FUN_1496c3d0c(void)

longlong FUN_1496c3d0c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c62d66(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3d3a FUN_1496c3d3a body=48 status=ok
// SIG undefined FUN_1496c3d3a(void)

longlong FUN_1496c3d3a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145c62d66(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3d6a FUN_1496c3d6a body=48 status=ok
// SIG undefined FUN_1496c3d6a(void)

longlong FUN_1496c3d6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_145c62d66(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3d9a FUN_1496c3d9a body=45 status=ok
// SIG undefined FUN_1496c3d9a(void)

longlong FUN_1496c3d9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c62ddc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3dc8 FUN_1496c3dc8 body=48 status=ok
// SIG undefined FUN_1496c3dc8(void)

longlong FUN_1496c3dc8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145c62ddc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3df8 FUN_1496c3df8 body=48 status=ok
// SIG undefined FUN_1496c3df8(void)

longlong FUN_1496c3df8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_145c62ddc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3e28 FUN_1496c3e28 body=45 status=ok
// SIG undefined FUN_1496c3e28(void)

longlong FUN_1496c3e28(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3e5e FUN_1496c3e5e body=45 status=ok
// SIG undefined FUN_1496c3e5e(void)

longlong FUN_1496c3e5e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145e3d9e8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3e8c FUN_1496c3e8c body=48 status=ok
// SIG undefined FUN_1496c3e8c(void)

longlong FUN_1496c3e8c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145e3d9e8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3ebc FUN_1496c3ebc body=45 status=ok
// SIG undefined FUN_1496c3ebc(void)

longlong FUN_1496c3ebc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3ef2 FUN_1496c3ef2 body=45 status=ok
// SIG undefined FUN_1496c3ef2(void)

longlong FUN_1496c3ef2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1457e5ac2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3f20 FUN_1496c3f20 body=48 status=ok
// SIG undefined FUN_1496c3f20(void)

longlong FUN_1496c3f20(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1457e5ac2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3f50 FUN_1496c3f50 body=48 status=ok
// SIG undefined FUN_1496c3f50(void)

longlong FUN_1496c3f50(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a0;
  FUN_1457e5ac2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3fa2 FUN_1496c3fa2 body=45 status=ok
// SIG undefined FUN_1496c3fa2(void)

longlong FUN_1496c3fa2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14598c502(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c3fd0 FUN_1496c3fd0 body=48 status=ok
// SIG undefined FUN_1496c3fd0(void)

longlong FUN_1496c3fd0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_14598c502(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c4000 FUN_1496c4000 body=48 status=ok
// SIG undefined FUN_1496c4000(void)

longlong FUN_1496c4000(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_14598c502(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c4030 FUN_1496c4030 body=48 status=ok
// SIG undefined FUN_1496c4030(void)

longlong FUN_1496c4030(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_14598c502(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c406c FUN_1496c406c body=45 status=ok
// SIG undefined FUN_1496c406c(void)

longlong FUN_1496c406c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ec1dc4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c40a0 FUN_1496c40a0 body=48 status=ok
// SIG undefined FUN_1496c40a0(void)

longlong FUN_1496c40a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145ec1dc4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c40d8 FUN_1496c40d8 body=48 status=ok
// SIG undefined FUN_1496c40d8(void)

longlong FUN_1496c40d8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_145ec1dc4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c4108 FUN_1496c4108 body=48 status=ok
// SIG undefined FUN_1496c4108(void)

longlong FUN_1496c4108(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_145ec1dc4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c4138 FUN_1496c4138 body=48 status=ok
// SIG undefined FUN_1496c4138(void)

longlong FUN_1496c4138(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2e8;
  FUN_145ec1dc4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c4174 FUN_1496c4174 body=45 status=ok
// SIG undefined FUN_1496c4174(void)

longlong FUN_1496c4174(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145dd8a84(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c41a2 FUN_1496c41a2 body=48 status=ok
// SIG undefined FUN_1496c41a2(void)

longlong FUN_1496c41a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145dd8a84(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c41d2 FUN_1496c41d2 body=48 status=ok
// SIG undefined FUN_1496c41d2(void)

longlong FUN_1496c41d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_145dd8a84(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c4210 FUN_1496c4210 body=45 status=ok
// SIG undefined FUN_1496c4210(void)

longlong FUN_1496c4210(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145865c60(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c4244 FUN_1496c4244 body=48 status=ok
// SIG undefined FUN_1496c4244(void)

longlong FUN_1496c4244(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145865c60(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c427c FUN_1496c427c body=48 status=ok
// SIG undefined FUN_1496c427c(void)

longlong FUN_1496c427c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x120;
  FUN_145865c60(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c42ac FUN_1496c42ac body=48 status=ok
// SIG undefined FUN_1496c42ac(void)

longlong FUN_1496c42ac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_145865c60(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c42ea FUN_1496c42ea body=32 status=ok
// SIG undefined FUN_1496c42ea(void)

undefined8 FUN_1496c42ea(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"SplineMesh");
  return param_2;
}



// FUNCTION 1496c430a FUN_1496c430a body=25 status=ok
// SIG undefined FUN_1496c430a(void)

undefined8 FUN_1496c430a(undefined8 param_1,undefined8 param_2)

{
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 1496c4324 FUN_1496c4324 body=45 status=ok
// SIG undefined FUN_1496c4324(void)

longlong FUN_1496c4324(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bcef5c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c4352 FUN_1496c4352 body=48 status=ok
// SIG undefined FUN_1496c4352(void)

longlong FUN_1496c4352(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145bcef5c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c4382 FUN_1496c4382 body=48 status=ok
// SIG undefined FUN_1496c4382(void)

longlong FUN_1496c4382(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa0;
  FUN_145bcef5c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c43d0 FUN_1496c43d0 body=45 status=ok
// SIG undefined FUN_1496c43d0(void)

longlong FUN_1496c43d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c322da(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c43fe FUN_1496c43fe body=48 status=ok
// SIG undefined FUN_1496c43fe(void)

longlong FUN_1496c43fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145c322da(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c442e FUN_1496c442e body=1969 status=ok
// SIG undefined FUN_1496c442e(void)

void FUN_1496c442e(longlong param_1,double *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_138 [32];
  double local_118;
  double dStack_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(char *)(param_1 + 0x70) == '\x01') {
    local_118 = 0.0;
    dStack_110 = 0.0;
    local_108 = 0;
    local_100 = 1.0;
    local_d8 = *(double *)(param_1 + 0x38);
    dStack_d0 = *(double *)(param_1 + 0x40);
    local_c8 = *(double *)(param_1 + 0x48);
    dStack_c0 = *(double *)(param_1 + 0x50);
    local_f8 = *(double *)(param_1 + 0x18);
    dStack_f0 = *(double *)(param_1 + 0x20);
    local_e8 = *(double *)(param_1 + 0x28);
    uStack_e0 = *(undefined8 *)(param_1 + 0x30);
    FUN_148503bf8(&local_118);
    dVar9 = param_2[3];
    dVar8 = *param_2;
    dVar11 = param_2[1];
    dVar13 = param_2[2];
    uVar20 = SUB84(dVar13,0);
    uVar21 = (undefined4)((ulonglong)dVar13 >> 0x20);
    uVar22 = SUB84(local_100,0);
    uVar23 = (undefined4)((ulonglong)local_100 >> 0x20);
    dVar5 = dVar9 * local_118;
    uVar14 = SUB84(dVar11,0);
    uVar15 = (undefined4)((ulonglong)dVar11 >> 0x20);
    dVar6 = local_100 * dVar11;
    dVar12 = local_100 * dVar13;
    dVar13 = dVar13 * local_118;
    dVar10 = dVar11 * local_118;
    uVar16 = SUB84(dStack_110,0);
    uVar17 = (undefined4)((ulonglong)dStack_110 >> 0x20);
    dVar11 = (dVar9 * local_100 - local_118 * dVar8) - dVar11 * dStack_110;
    uVar18 = (undefined4)local_108;
    uVar19 = (undefined4)((ulonglong)local_108 >> 0x20);
  }
  else {
    dVar9 = param_2[3];
    dVar11 = *(double *)(param_1 + 0x30);
    dVar8 = *param_2;
    dVar1 = param_2[1];
    dVar2 = *(double *)(param_1 + 0x18);
    dVar13 = param_2[2];
    uVar20 = SUB84(dVar13,0);
    uVar21 = (undefined4)((ulonglong)dVar13 >> 0x20);
    uVar22 = SUB84(dVar11,0);
    uVar23 = (undefined4)((ulonglong)dVar11 >> 0x20);
    dVar5 = dVar9 * dVar2;
    uVar14 = SUB84(dVar1,0);
    uVar15 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar6 = dVar11 * dVar1;
    dVar12 = dVar11 * dVar13;
    dVar13 = dVar13 * dVar2;
    dVar10 = dVar1 * dVar2;
    dVar3 = *(double *)(param_1 + 0x20);
    uVar16 = SUB84(dVar3,0);
    uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
    dVar11 = (dVar9 * dVar11 - dVar2 * dVar8) - dVar1 * dVar3;
    uVar18 = (undefined4)*(undefined8 *)(param_1 + 0x28);
    uVar19 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  }
  *param_2 = ((double)CONCAT44(uVar15,uVar14) * (double)CONCAT44(uVar19,uVar18) +
             dVar5 + (double)CONCAT44(uVar23,uVar22) * dVar8) -
             (double)CONCAT44(uVar21,uVar20) * (double)CONCAT44(uVar17,uVar16);
  param_2[1] = (dVar13 + dVar9 * (double)CONCAT44(uVar17,uVar16) + dVar6) -
               dVar8 * (double)CONCAT44(uVar19,uVar18);
  param_2[2] = (dVar8 * (double)CONCAT44(uVar17,uVar16) +
               dVar9 * (double)CONCAT44(uVar19,uVar18) + dVar12) - dVar10;
  param_2[3] = dVar11 - (double)CONCAT44(uVar21,uVar20) * (double)CONCAT44(uVar19,uVar18);
  if (*(char *)(param_1 + 0x110) == '\x01') {
    dVar11 = 1.0 - param_3;
    dVar9 = *(double *)(param_1 + 0xe8);
    dVar13 = *(double *)(param_1 + 0xd0);
    dVar8 = (*(double *)(param_1 + 0xd8) * dVar11 + *(double *)(param_1 + 0xf0) * param_3) *
            param_2[9];
    param_2[7] = (dVar11 * *(double *)(param_1 + 200) + *(double *)(param_1 + 0xe0) * param_3) *
                 param_2[7];
    param_2[8] = (dVar13 * dVar11 + dVar9 * param_3) * param_2[8];
  }
  else {
    dVar8 = *(double *)(param_1 + 0xd8) * param_2[9];
    dVar9 = *(double *)(param_1 + 0xd0);
    param_2[7] = param_2[7] * *(double *)(param_1 + 200);
    param_2[8] = param_2[8] * dVar9;
  }
  param_2[9] = dVar8;
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    dVar11 = 1.0 - param_3;
    dVar9 = *(double *)(param_1 + 0x98);
    dVar13 = *(double *)(param_1 + 0x80);
    dVar8 = *(double *)(param_1 + 0x88) * dVar11 + *(double *)(param_1 + 0xa0) * param_3 +
            param_2[6];
    param_2[4] = dVar11 * *(double *)(param_1 + 0x78) + param_3 * *(double *)(param_1 + 0x90) +
                 param_2[4];
    param_2[5] = dVar13 * dVar11 + dVar9 * param_3 + param_2[5];
  }
  else {
    dVar8 = *(double *)(param_1 + 0x88) + param_2[6];
    dVar9 = *(double *)(param_1 + 0x80);
    param_2[4] = param_2[4] + *(double *)(param_1 + 0x78);
    param_2[5] = param_2[5] + dVar9;
  }
  param_2[6] = dVar8;
  if (*(char *)(param_1 + 0x71) == '\x01') {
    iVar4 = *(int *)(param_1 + 4);
    local_f8 = *(double *)(param_1 + 0x58);
    local_f8 = (local_f8 + local_f8) *
               (double)((float)(iVar4 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) -
               local_f8;
    local_e8 = *(double *)(param_1 + 0x68);
    local_e8 = (local_e8 + local_e8) *
               (double)((float)(iVar4 * -0x4b9b4d07 + 0x9d6f2492U >> 9 | 0x3f800000) + -1.0) -
               local_e8;
    uVar7 = iVar4 * 0x1c3c718d + 0xf50d3da5;
    *(uint *)(param_1 + 4) = uVar7;
    dStack_f0 = *(double *)(param_1 + 0x60);
    dStack_f0 = (dStack_f0 + dStack_f0) * (double)((float)(uVar7 >> 9 | 0x3f800000) + -1.0) -
                dStack_f0;
    FUN_144a7484c(&local_f8,&local_d8);
    dVar9 = param_2[3];
    dVar8 = *param_2;
    dVar13 = param_2[1];
    dVar11 = param_2[2];
    *param_2 = (dVar13 * local_c8 + dVar9 * local_d8 + dStack_c0 * dVar8) - dVar11 * dStack_d0;
    param_2[1] = (dVar11 * local_d8 + dVar9 * dStack_d0 + dStack_c0 * dVar13) - dVar8 * local_c8;
    param_2[2] = (dVar8 * dStack_d0 + dVar9 * local_c8 + dStack_c0 * dVar11) - dVar13 * local_d8;
    param_2[3] = ((dVar9 * dStack_c0 - local_d8 * dVar8) - dVar13 * dStack_d0) - dVar11 * local_c8;
  }
  if (*(char *)(param_1 + 0x111) == '\x01') {
    iVar4 = *(int *)(param_1 + 0xc);
    dVar9 = *(double *)(param_1 + 0xf8);
    dVar8 = ((dVar9 + dVar9) *
             (double)((float)(iVar4 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) - dVar9) +
            param_2[7];
    dVar9 = 0.001;
    if (0.001 <= dVar8) {
      dVar9 = dVar8;
    }
    dVar8 = *(double *)(param_1 + 0x100);
    dVar13 = ((dVar8 + dVar8) *
              (double)((float)(iVar4 * -0x4b9b4d07 + 0x9d6f2492U >> 9 | 0x3f800000) + -1.0) - dVar8)
             + param_2[8];
    dVar8 = 0.001;
    if (0.001 <= dVar13) {
      dVar8 = dVar13;
    }
    uVar7 = iVar4 * 0x1c3c718d + 0xf50d3da5;
    dVar13 = *(double *)(param_1 + 0x108);
    dVar11 = ((dVar13 + dVar13) * (double)((float)(uVar7 >> 9 | 0x3f800000) + -1.0) - dVar13) +
             param_2[9];
    *(uint *)(param_1 + 0xc) = uVar7;
    dVar13 = 0.001;
    if (0.001 <= dVar11) {
      dVar13 = dVar11;
    }
    param_2[7] = dVar9;
    param_2[8] = dVar8;
    param_2[9] = dVar13;
  }
  if (*(char *)(param_1 + 0xc1) == '\x01') {
    iVar4 = *(int *)(param_1 + 0x14);
    dVar9 = *(double *)(param_1 + 0xa8);
    dVar8 = *(double *)(param_1 + 0xb0);
    uVar7 = iVar4 * 0x1c3c718d + 0xf50d3da5;
    *(uint *)(param_1 + 0x14) = uVar7;
    dVar13 = *(double *)(param_1 + 0xb8);
    param_2[4] = ((dVar9 + dVar9) *
                  (double)((float)(iVar4 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) -
                 dVar9) + param_2[4];
    param_2[5] = ((dVar8 + dVar8) *
                  (double)((float)(iVar4 * -0x4b9b4d07 + 0x9d6f2492U >> 9 | 0x3f800000) + -1.0) -
                 dVar8) + param_2[5];
    param_2[6] = ((dVar13 + dVar13) * (double)((float)(uVar7 >> 9 | 0x3f800000) + -1.0) - dVar13) +
                 param_2[6];
  }
  if ((local_b0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c4be0 FUN_1496c4be0 body=398 status=ok
// SIG undefined FUN_1496c4be0(void)

void FUN_1496c4be0(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3ff0000000000000;
  uVar5 = DAT_14c846500;
  param_1[0xb] = DAT_14c8464f8;
  param_1[0xc] = uVar5;
  param_1[0xd] = DAT_14c846508;
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[0x11] = DAT_14c8464f0;
  dVar1 = DAT_14c8464e8;
  param_1[0xf] = DAT_14c8464e0;
  param_1[0x10] = dVar1;
  param_1[0x14] = DAT_14c8464f0;
  dVar1 = DAT_14c8464e8;
  param_1[0x12] = DAT_14c8464e0;
  param_1[0x13] = dVar1;
  dVar1 = DAT_14c8464e8;
  param_1[0x15] = DAT_14c8464e0;
  param_1[0x16] = dVar1;
  param_1[0x17] = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  param_1[0x1b] = DAT_14c846520;
  uVar5 = DAT_14c846518;
  param_1[0x19] = DAT_14c846510;
  param_1[0x1a] = uVar5;
  param_1[0x1e] = DAT_14c846520;
  uVar5 = DAT_14c846518;
  param_1[0x1c] = DAT_14c846510;
  param_1[0x1d] = uVar5;
  param_1[0x21] = DAT_14c8464f0;
  dVar1 = DAT_14c8464e8;
  param_1[0x1f] = DAT_14c8464e0;
  param_1[0x20] = dVar1;
  *(undefined2 *)(param_1 + 0x22) = 0;
  dVar4 = DAT_14c8464f0;
  dVar3 = DAT_14c8464e8;
  dVar2 = DAT_14c8464e0;
  dVar6 = DAT_14c8464f0 + -10.0;
  dVar1 = DAT_14c8464e8 + -10.0;
  param_1[0x23] = DAT_14c8464e0 + -10.0;
  param_1[0x24] = dVar1;
  param_1[0x25] = dVar6;
  param_1[0x26] = dVar2 + 10.0;
  param_1[0x27] = dVar3 + 10.0;
  param_1[0x28] = dVar4 + 10.0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return;
}



// FUNCTION 1496c4d6e FUN_1496c4d6e body=48 status=ok
// SIG undefined FUN_1496c4d6e(void)

void FUN_1496c4d6e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x50,8);
  }
  return;
}



// FUNCTION 1496c4d9e FUN_1496c4d9e body=129 status=ok
// SIG undefined FUN_1496c4d9e(void)

void FUN_1496c4d9e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined ***)((longlong)param_2 + 0x70) = &PTR_FUN_14a1dee50;
  *(undefined4 *)((longlong)param_2 + 0x84) = 7;
  *(undefined2 *)((longlong)param_2 + 0x88) = 0x301;
  *(undefined4 *)((longlong)param_2 + 0x90) = 6;
  *(longlong *)((longlong)param_2 + 0x98) = (longlong)param_2 + 0x70;
  return;
}



// FUNCTION 1496c4eac FUN_1496c4eac body=128 status=ok
// SIG undefined FUN_1496c4eac(void)

undefined8 FUN_1496c4eac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)(param_2 + 0x78 + lVar1) = *(undefined4 *)(param_3 + 0x78 + lVar1);
      *(undefined4 *)(param_2 + 0x84 + lVar1) = *(undefined4 *)(param_3 + 0x84 + lVar1);
      *(undefined8 *)(param_2 + 0x7c + lVar1) = *(undefined8 *)(param_3 + 0x7c + lVar1);
      *(byte *)(param_2 + 0x88 + lVar1) =
           *(byte *)(param_2 + 0x88 + lVar1) & 0xfe | *(byte *)(param_3 + 0x88 + lVar1) & 1;
      *(undefined1 *)(param_2 + 0x89 + lVar1) = *(undefined1 *)(param_3 + 0x89 + lVar1);
      lVar1 = lVar1 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1496c4f54 FUN_1496c4f54 body=59 status=ok
// SIG undefined FUN_1496c4f54(void)

undefined8 FUN_1496c4f54(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c5002 FUN_1496c5002 body=157 status=ok
// SIG undefined FUN_1496c5002(void)

void FUN_1496c5002(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  memset(param_2 + 2,0,0xa0);
  uVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar1;
  param_2[2] = DAT_14c8464f0;
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0x3ff00000;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0x3ff0000000000000;
  param_2[0xd] = 0x3ff0000000000000;
  param_2[0xe] = 0x3ff0000000000000;
  param_2[0xf] = 0;
  param_2[0x10] = &PTR_FUN_14a1dee50;
  *(undefined4 *)((longlong)param_2 + 0x94) = 7;
  *(undefined2 *)(param_2 + 0x13) = 0x301;
  *(undefined4 *)(param_2 + 0x14) = 6;
  param_2[0x15] = param_2 + 0x10;
  return;
}



// FUNCTION 1496c5144 FUN_1496c5144 body=144 status=ok
// SIG undefined FUN_1496c5144(void)

undefined8 FUN_1496c5144(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)(param_2 + 0x88 + lVar1) = *(undefined4 *)(param_3 + 0x88 + lVar1);
      *(undefined4 *)(param_2 + 0x94 + lVar1) = *(undefined4 *)(param_3 + 0x94 + lVar1);
      *(undefined8 *)(param_2 + 0x8c + lVar1) = *(undefined8 *)(param_3 + 0x8c + lVar1);
      *(byte *)(param_2 + 0x98 + lVar1) =
           *(byte *)(param_2 + 0x98 + lVar1) & 0xfe | *(byte *)(param_3 + 0x98 + lVar1) & 1;
      *(undefined1 *)(param_2 + 0x99 + lVar1) = *(undefined1 *)(param_3 + 0x99 + lVar1);
      lVar1 = lVar1 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1496c51fc FUN_1496c51fc body=59 status=ok
// SIG undefined FUN_1496c51fc(void)

undefined8 FUN_1496c51fc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c52aa FUN_1496c52aa body=129 status=ok
// SIG undefined FUN_1496c52aa(void)

void FUN_1496c52aa(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined ***)((longlong)param_2 + 0x70) = &PTR_FUN_14a1dee50;
  *(undefined4 *)((longlong)param_2 + 0x84) = 7;
  *(undefined2 *)((longlong)param_2 + 0x88) = 0x301;
  *(undefined4 *)((longlong)param_2 + 0x90) = 6;
  *(longlong *)((longlong)param_2 + 0x98) = (longlong)param_2 + 0x70;
  return;
}



// FUNCTION 1496c53ba FUN_1496c53ba body=128 status=ok
// SIG undefined FUN_1496c53ba(void)

undefined8 FUN_1496c53ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)(param_2 + 0x78 + lVar1) = *(undefined4 *)(param_3 + 0x78 + lVar1);
      *(undefined4 *)(param_2 + 0x84 + lVar1) = *(undefined4 *)(param_3 + 0x84 + lVar1);
      *(undefined8 *)(param_2 + 0x7c + lVar1) = *(undefined8 *)(param_3 + 0x7c + lVar1);
      *(byte *)(param_2 + 0x88 + lVar1) =
           *(byte *)(param_2 + 0x88 + lVar1) & 0xfe | *(byte *)(param_3 + 0x88 + lVar1) & 1;
      *(undefined1 *)(param_2 + 0x89 + lVar1) = *(undefined1 *)(param_3 + 0x89 + lVar1);
      lVar1 = lVar1 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1496c5462 FUN_1496c5462 body=59 status=ok
// SIG undefined FUN_1496c5462(void)

undefined8 FUN_1496c5462(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c561a FUN_1496c561a body=59 status=ok
// SIG undefined FUN_1496c561a(void)

undefined8 FUN_1496c561a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c57aa FUN_1496c57aa body=59 status=ok
// SIG undefined FUN_1496c57aa(void)

undefined8 FUN_1496c57aa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c584c FUN_1496c584c body=52 status=ok
// SIG undefined FUN_1496c584c(void)

void FUN_1496c584c(longlong *param_1)

{
  FUN_1496c5880();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1496c5880 FUN_1496c5880 body=89 status=ok
// SIG undefined FUN_1496c5880(void)

void FUN_1496c5880(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1496c58da FUN_1496c58da body=1085 status=ok
// SIG undefined FUN_1496c58da(void)

longlong * FUN_1496c58da(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  longlong lVar19;
  longlong lVar20;
  void *_Dst;
  int iVar21;
  
  _Dst = (void *)FUN_14001cc68(0x170);
  memset(_Dst,0,0x170);
  FUN_1496c5d18(_Dst);
  *param_2 = (longlong)_Dst;
  uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x790);
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x798);
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  plVar12 = *(longlong **)((longlong)_Dst + 0x90);
  *(undefined8 *)((longlong)_Dst + 0x88) = uVar10;
  *(longlong *)((longlong)_Dst + 0x90) = lVar11;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  plVar12 = (longlong *)*param_2;
  FUN_14054c6c4(plVar12 + 0x13,param_4);
  *(undefined1 *)(plVar12 + 0x28) =
       *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xd0);
  *(undefined1 *)(plVar12 + 0x29) =
       *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xd1);
  *(undefined1 *)((longlong)plVar12 + 0x149) =
       *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xd2);
  *(undefined1 *)((longlong)plVar12 + 0x16a) = 0;
  *(byte *)((longlong)plVar12 + 0x14a) =
       *(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xd3) ^ 1;
  plVar12[0x2a] = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xc0);
  plVar12[0x2b] = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xd8);
  *(undefined1 *)(plVar12 + 0x2c) =
       *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xe0);
  *(undefined1 *)(plVar12 + 0x2d) =
       *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xe1);
  iVar21 = *(int *)(*(longlong *)(param_1 + 8) + 0x560);
  iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xe4);
  if (iVar9 < iVar21) {
    iVar21 = iVar9;
  }
  *(int *)((longlong)plVar12 + 0x164) = iVar21;
  *(uint *)(plVar12 + 0x26) =
       (uint)*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xb8);
  *(undefined4 *)((longlong)plVar12 + 0x144) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xbc);
  plVar12[0x27] = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 200);
  lVar11 = *(longlong *)(param_1 + 8);
  cVar8 = *(char *)(*(longlong *)(lVar11 + 0x120) + 0xa8);
  lVar13 = *(longlong *)(lVar11 + 0x1f0);
  plVar12[0x15] = *(longlong *)(lVar11 + 0x1e8);
  plVar12[0x16] = lVar13;
  lVar13 = *(longlong *)(lVar11 + 0x200);
  plVar12[0x17] = *(longlong *)(lVar11 + 0x1f8);
  plVar12[0x18] = lVar13;
  lVar13 = *(longlong *)(lVar11 + 0x210);
  plVar12[0x19] = *(longlong *)(lVar11 + 0x208);
  plVar12[0x1a] = lVar13;
  plVar12[0x1b] = *(longlong *)(lVar11 + 0x218);
  if (cVar8 == '\0') {
    lVar11 = *(longlong *)(param_1 + 8);
    plVar12[0x22] = *(longlong *)(lVar11 + 0x2c0);
    lVar19 = *(longlong *)(lVar11 + 0x290);
    lVar20 = *(longlong *)(lVar11 + 0x298);
    lVar13 = *(longlong *)(lVar11 + 0x2a0);
    lVar14 = *(longlong *)(lVar11 + 0x2a8);
    lVar15 = *(longlong *)(lVar11 + 0x2b8);
    plVar12[0x20] = *(longlong *)(lVar11 + 0x2b0);
    plVar12[0x21] = lVar15;
    plVar12[0x1e] = lVar13;
    plVar12[0x1f] = lVar14;
    plVar12[0x1c] = lVar19;
    plVar12[0x1d] = lVar20;
    lVar11 = *(longlong *)(param_1 + 8);
    plVar12[0x25] = *(longlong *)(lVar11 + 0x2d8);
    uVar16 = *(undefined4 *)(lVar11 + 0x2cc);
    uVar17 = *(undefined4 *)(lVar11 + 0x2d0);
    uVar18 = *(undefined4 *)(lVar11 + 0x2d4);
    *(undefined4 *)(plVar12 + 0x23) = *(undefined4 *)(lVar11 + 0x2c8);
    *(undefined4 *)((longlong)plVar12 + 0x11c) = uVar16;
    *(undefined4 *)(plVar12 + 0x24) = uVar17;
    *(undefined4 *)((longlong)plVar12 + 0x124) = uVar18;
  }
  else {
    dVar3 = (double)plVar12[0x18];
    dVar4 = (double)plVar12[0x19];
    dVar5 = (double)plVar12[0x1a];
    dVar6 = (double)plVar12[0x1b];
    dVar7 = *(double *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xb0);
    plVar12[0x1c] =
         (longlong)
         ((dVar3 * (dVar5 + dVar5) + (dVar4 + dVar4) * dVar6) * dVar7 + (double)plVar12[0x15]);
    plVar12[0x1d] =
         (longlong)
         (((dVar5 + dVar5) * dVar4 - (dVar3 + dVar3) * dVar6) * dVar7 + (double)plVar12[0x16]);
    plVar12[0x1e] =
         (longlong)
         ((1.0 - (dVar3 * (dVar3 + dVar3) + dVar4 * (dVar4 + dVar4))) * dVar7 +
         (double)plVar12[0x17]);
    plVar12[0x1f] = (longlong)dVar3;
    plVar12[0x20] = (longlong)dVar4;
    plVar12[0x21] = (longlong)dVar5;
    plVar12[0x22] = (longlong)dVar6;
    uVar18 = DAT_14c846518._4_4_;
    uVar17 = (undefined4)DAT_14c846518;
    uVar16 = DAT_14c846510._4_4_;
    *(undefined4 *)(plVar12 + 0x23) = (undefined4)DAT_14c846510;
    *(undefined4 *)((longlong)plVar12 + 0x11c) = uVar16;
    *(undefined4 *)(plVar12 + 0x24) = uVar17;
    *(undefined4 *)((longlong)plVar12 + 0x124) = uVar18;
    plVar12[0x25] = DAT_14c846520;
  }
  (**(code **)(*plVar12 + 8))(plVar12,*(longlong *)(param_1 + 8) + 0x160);
  plVar12 = *(longlong **)(param_3 + 8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  return param_2;
}



// FUNCTION 1496c5d18 FUN_1496c5d18 body=293 status=ok
// SIG undefined FUN_1496c5d18(void)

undefined8 * FUN_1496c5d18(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14845abbc();
  *param_1 = &PTR_FUN_14bdcb180;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x15] = DAT_14c8464e0;
  param_1[0x16] = uVar1;
  param_1[0x17] = DAT_14c8464f0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x3ff0000000000000;
  uVar1 = DAT_14c8464e8;
  param_1[0x1c] = DAT_14c8464e0;
  param_1[0x1d] = uVar1;
  param_1[0x1e] = DAT_14c8464f0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x3ff0000000000000;
  uVar1 = DAT_14c846518;
  param_1[0x23] = DAT_14c846510;
  param_1[0x24] = uVar1;
  param_1[0x25] = DAT_14c846520;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0x40c3878000000000;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined2 *)(param_1 + 0x29) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x14a) = 1;
  param_1[0x2a] = 0x4066800000000000;
  param_1[0x2b] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  *(undefined2 *)(param_1 + 0x2d) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x16a) = 1;
  return param_1;
}



// FUNCTION 1496c5e3e FUN_1496c5e3e body=38 status=ok
// SIG undefined FUN_1496c5e3e(void)

undefined8 FUN_1496c5e3e(undefined8 param_1,int param_2)

{
  FUN_1496c5e64();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c5e64 FUN_1496c5e64 body=133 status=ok
// SIG undefined FUN_1496c5e64(void)

void FUN_1496c5e64(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bdcb180;
  if (param_1[0x13] != 0) {
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496c5ede. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 1496c5eea FUN_1496c5eea body=766 status=ok
// SIG undefined FUN_1496c5eea(void)

longlong * FUN_1496c5eea(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *_Dst;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_14845abbc(_Dst);
  *_Dst = &PTR_FUN_14bdcb1b0;
  _Dst[0x11] = 0;
  _Dst[0x12] = 0;
  _Dst[0x13] = 0;
  _Dst[0x14] = 0;
  _Dst[0x15] = 0x3ff0000000000000;
  *(undefined4 *)(_Dst + 0x16) = 2;
  *(undefined1 *)((longlong)_Dst + 0xb4) = 1;
  *(undefined4 *)(_Dst + 0x17) = 0;
  *(undefined2 *)((longlong)_Dst + 0xbc) = 0x101;
  *(undefined1 *)((longlong)_Dst + 0xbe) = 1;
  _Dst[0x18] = 0x4066800000000000;
  _Dst[0x19] = 0x3ff0000000000000;
  *(undefined1 *)(_Dst + 0x1a) = 1;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0;
  *(undefined2 *)(_Dst + 0x1b) = 0x101;
  *(undefined1 *)((longlong)_Dst + 0xda) = 1;
  *param_2 = (longlong)_Dst;
  uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x790);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x798);
  if (lVar7 == 0) {
    _Dst[0x11] = uVar5;
    _Dst[0x12] = 0;
  }
  else {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
    plVar6 = (longlong *)_Dst[0x12];
    _Dst[0x11] = uVar5;
    _Dst[0x12] = lVar7;
    if (plVar6 != (longlong *)0x0) {
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
    }
  }
  plVar6 = (longlong *)*param_2;
  FUN_14054c6c4(plVar6 + 0x13,param_4);
  *(undefined1 *)((longlong)plVar6 + 0xb4) =
       *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xc0);
  *(undefined1 *)((longlong)plVar6 + 0xbc) =
       *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xc1);
  *(undefined1 *)((longlong)plVar6 + 0xbd) =
       *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xc2);
  *(undefined1 *)((longlong)plVar6 + 0xda) = 0;
  *(byte *)((longlong)plVar6 + 0xbe) =
       *(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xc3) ^ 1;
  *(undefined4 *)(plVar6 + 0x16) = 0;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x120);
  bVar3 = *(byte *)(lVar7 + 0xb0);
  uVar8 = (uint)bVar3;
  if (bVar3 != 2) {
    if (bVar3 != 1) goto LAB_1496c60ea;
    uVar8 = 1;
  }
  *(uint *)(plVar6 + 0x16) = uVar8;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x120);
LAB_1496c60ea:
  plVar6[0x15] = *(longlong *)(lVar7 + 0xa8);
  plVar6[0x18] = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xb8);
  plVar6[0x19] = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 200);
  *(undefined1 *)(plVar6 + 0x1a) =
       *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xd0);
  *(undefined1 *)(plVar6 + 0x1b) =
       *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xd1);
  iVar9 = *(int *)(*(longlong *)(param_1 + 8) + 0x560);
  iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xd4);
  if (iVar4 < iVar9) {
    iVar9 = iVar4;
  }
  *(int *)((longlong)plVar6 + 0xd4) = iVar9;
  *(undefined4 *)(plVar6 + 0x17) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) + 0xb4);
  (**(code **)(*plVar6 + 8))(plVar6,*(longlong *)(param_1 + 8) + 0x160);
  plVar6 = *(longlong **)(param_3 + 8);
  if (plVar6 != (longlong *)0x0) {
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
  }
  return param_2;
}



// FUNCTION 1496c61e8 FUN_1496c61e8 body=38 status=ok
// SIG undefined FUN_1496c61e8(void)

undefined8 FUN_1496c61e8(undefined8 param_1,int param_2)

{
  FUN_1496c620e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c620e FUN_1496c620e body=133 status=ok
// SIG undefined FUN_1496c620e(void)

void FUN_1496c620e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bdcb1b0;
  if (param_1[0x13] != 0) {
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496c6288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 1496c631c FUN_1496c631c body=59 status=ok
// SIG undefined FUN_1496c631c(void)

undefined8 FUN_1496c631c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c63e0 FUN_1496c63e0 body=29 status=ok
// SIG undefined FUN_1496c63e0(void)

undefined8 FUN_1496c63e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c63fe FUN_1496c63fe body=235 status=ok
// SIG undefined FUN_1496c63fe(void)

longlong FUN_1496c63fe(longlong param_1,longlong param_2)

{
  FUN_140308010();
  FUN_140308010(param_1 + 0x50,param_2 + 0x50);
  *(undefined2 *)(param_1 + 0xa0) = *(undefined2 *)(param_2 + 0xa0);
  FUN_140308010(param_1 + 0xa8,param_2 + 0xa8);
  FUN_140308010(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined2 *)(param_1 + 0x148) = *(undefined2 *)(param_2 + 0x148);
  FUN_140308010(param_1 + 0x150,param_2 + 0x150);
  FUN_140308010(param_1 + 0x1a0,param_2 + 0x1a0);
  *(undefined2 *)(param_1 + 0x1f0) = *(undefined2 *)(param_2 + 0x1f0);
  FUN_140308010(param_1 + 0x1f8,param_2 + 0x1f8);
  FUN_140308010(param_1 + 0x248,param_2 + 0x248);
  *(undefined2 *)(param_1 + 0x298) = *(undefined2 *)(param_2 + 0x298);
  FUN_1496c64ea(param_1 + 0x2a0,param_2 + 0x2a0);
  FUN_1496c64ea(param_1 + 0x2b0,param_2 + 0x2b0);
  return param_1;
}



// FUNCTION 1496c64ea FUN_1496c64ea body=80 status=ok
// SIG undefined FUN_1496c64ea(void)

longlong * FUN_1496c64ea(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146bfddd1(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1496c653a FUN_1496c653a body=38 status=ok
// SIG undefined FUN_1496c653a(void)

undefined8 FUN_1496c653a(undefined8 param_1,int param_2)

{
  FUN_1496c6560();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c6560 FUN_1496c6560 body=116 status=ok
// SIG undefined FUN_1496c6560(void)

void FUN_1496c6560(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bdcb820;
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496c65c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 1496c65d4 FUN_1496c65d4 body=199 status=ok
// SIG undefined FUN_1496c65d4(void)

undefined8 * FUN_1496c65d4(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdcb860;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdcb880;
  param_1[7] = param_2;
  param_1[2] = &LAB_1496c67c8;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdcb8a0;
  param_1[0x17] = &LAB_1496c6816;
  param_1[0x12] = &LAB_1496c681e;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1496c669c FUN_1496c669c body=38 status=ok
// SIG undefined FUN_1496c669c(void)

undefined8 FUN_1496c669c(undefined8 param_1,int param_2)

{
  FUN_1496c6872();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c66c2 FUN_1496c66c2 body=207 status=ok
// SIG undefined FUN_1496c66c2(void)

void FUN_1496c66c2(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_1496c6773;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_1496c6773:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c6792 FUN_1496c6792 body=53 status=ok
// SIG undefined FUN_1496c6792(void)

void FUN_1496c6792(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 1496c67f8 FUN_1496c67f8 body=29 status=ok
// SIG undefined FUN_1496c67f8(void)

undefined8 FUN_1496c67f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c6854 FUN_1496c6854 body=29 status=ok
// SIG undefined FUN_1496c6854(void)

undefined8 FUN_1496c6854(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c6872 FUN_1496c6872 body=127 status=ok
// SIG undefined FUN_1496c6872(void)

void FUN_1496c6872(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdcb860;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 1496c68f2 FUN_1496c68f2 body=132 status=ok
// SIG undefined FUN_1496c68f2(void)

void FUN_1496c68f2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1496c6978 FUN_1496c6978 body=199 status=ok
// SIG undefined FUN_1496c6978(void)

undefined8 * FUN_1496c6978(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdcb9c0;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdcb9e0;
  param_1[7] = param_2;
  param_1[2] = &LAB_1496c6b6c;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdcba00;
  param_1[0x17] = &LAB_1496c6bba;
  param_1[0x12] = &LAB_1496c6bc2;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1496c6a40 FUN_1496c6a40 body=38 status=ok
// SIG undefined FUN_1496c6a40(void)

undefined8 FUN_1496c6a40(undefined8 param_1,int param_2)

{
  FUN_1496c6c16();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c6a66 FUN_1496c6a66 body=207 status=ok
// SIG undefined FUN_1496c6a66(void)

void FUN_1496c6a66(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_1496c6b17;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_1496c6b17:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c6b36 FUN_1496c6b36 body=53 status=ok
// SIG undefined FUN_1496c6b36(void)

void FUN_1496c6b36(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 1496c6b9c FUN_1496c6b9c body=29 status=ok
// SIG undefined FUN_1496c6b9c(void)

undefined8 FUN_1496c6b9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c6bf8 FUN_1496c6bf8 body=29 status=ok
// SIG undefined FUN_1496c6bf8(void)

undefined8 FUN_1496c6bf8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c6c16 FUN_1496c6c16 body=127 status=ok
// SIG undefined FUN_1496c6c16(void)

void FUN_1496c6c16(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdcb9c0;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 1496c6c96 FUN_1496c6c96 body=297 status=ok
// SIG undefined FUN_1496c6c96(void)

undefined8 FUN_1496c6c96(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong local_a8 [2];
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68 [2];
  longlong local_58;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = FUN_1496c6dc0();
  local_68[0] = *param_3;
  local_58 = param_3[2];
  param_3[2] = 0;
  local_48 = param_3[4];
  lStack_40 = param_3[5];
  local_38 = param_3[6];
  lStack_30 = param_3[7];
  if (local_68[0] != 0) {
    *param_3 = 0;
  }
  local_a8[0] = *param_2;
  local_98 = param_2[2];
  param_2[2] = 0;
  local_88 = (undefined4)param_2[4];
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_80 = (undefined4)param_2[5];
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_78 = (undefined4)param_2[6];
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_70 = (undefined4)param_2[7];
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (local_a8[0] != 0) {
    *param_2 = 0;
  }
  local_b8 = 1;
  (**(code **)(*param_1 + 1000))(param_1,uVar1,local_a8,local_68);
  if (*param_2 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c6dc0 FUN_1496c6dc0 body=175 status=ok
// SIG undefined FUN_1496c6dc0(void)

undefined8 FUN_1496c6dc0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459fb992();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c6e72 FUN_1496c6e72 body=297 status=ok
// SIG undefined FUN_1496c6e72(void)

undefined8 FUN_1496c6e72(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong local_a8 [2];
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68 [2];
  longlong local_58;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = FUN_1496c6f9c();
  local_68[0] = *param_3;
  local_58 = param_3[2];
  param_3[2] = 0;
  local_48 = param_3[4];
  lStack_40 = param_3[5];
  local_38 = param_3[6];
  lStack_30 = param_3[7];
  if (local_68[0] != 0) {
    *param_3 = 0;
  }
  local_a8[0] = *param_2;
  local_98 = param_2[2];
  param_2[2] = 0;
  local_88 = (undefined4)param_2[4];
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_80 = (undefined4)param_2[5];
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_78 = (undefined4)param_2[6];
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_70 = (undefined4)param_2[7];
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (local_a8[0] != 0) {
    *param_2 = 0;
  }
  local_b8 = 1;
  (**(code **)(*param_1 + 1000))(param_1,uVar1,local_a8,local_68);
  if (*param_2 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c6f9c FUN_1496c6f9c body=175 status=ok
// SIG undefined FUN_1496c6f9c(void)

undefined8 FUN_1496c6f9c(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459fba7e();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c704d FUN_1496c704d body=175 status=ok
// SIG undefined FUN_1496c704d(void)

undefined8 FUN_1496c704d(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459fb8a6();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c7102 FUN_1496c7102 body=172 status=ok
// SIG undefined FUN_1496c7102(void)

undefined8 * FUN_1496c7102(undefined8 *param_1)

{
  FUN_14845aa48();
  param_1[0x13] = 0;
  param_1[0x14] = 0x3ff0000000000000;
  param_1[0x15] = 0x3ff0000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *param_1 = &PTR_FUN_14bdcbae0;
  *(undefined4 *)(param_1 + 0x22) = 1;
  param_1[0x23] = 0x3fb999999999999a;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0x3fc999999999999a;
  return param_1;
}



// FUNCTION 1496c71ae FUN_1496c71ae body=38 status=ok
// SIG undefined FUN_1496c71ae(void)

undefined8 FUN_1496c71ae(undefined8 param_1,int param_2)

{
  FUN_1496c8b26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c71d4 FUN_1496c71d4 body=1160 status=ok
// SIG undefined FUN_1496c71d4(void)

void FUN_1496c71d4(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_6b8 [32];
  undefined8 *local_698;
  undefined1 local_690;
  longlong *local_688;
  undefined1 local_680 [120];
  longlong local_608 [3];
  longlong local_5f0 [3];
  undefined8 local_5d8;
  undefined8 local_5a8 [2];
  undefined8 local_598;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_548;
  undefined4 local_540;
  undefined8 local_53c;
  undefined4 local_534;
  undefined8 local_528;
  undefined4 local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined8 local_4ec;
  undefined4 local_4e4;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined2 local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined8 local_494;
  undefined4 local_48c;
  undefined8 local_480;
  undefined4 local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_450;
  undefined4 local_448;
  undefined8 local_444;
  undefined4 local_43c;
  undefined8 local_430;
  undefined4 local_428;
  undefined2 local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined8 local_3ec;
  undefined4 local_3e4;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_39c;
  undefined4 local_394;
  undefined8 local_388;
  undefined4 local_380;
  undefined1 local_378;
  undefined1 local_377;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_344;
  undefined4 local_33c;
  undefined8 local_330;
  undefined4 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f4;
  undefined4 local_2ec;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined2 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a0 [544];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_6b8;
  FUN_14845a964(param_1 + 0x18,param_1[1]);
  if (*(char *)((longlong)param_1 + 0xf1) == '\x01') {
    local_698 = (undefined8 *)((ulonglong)local_698 & 0xffffffffffffff00);
    FUN_1411b354a(local_2a0,0,0,0);
    local_690 = 1;
    local_698 = (undefined8 *)CONCAT71(local_698._1_7_,1);
    FUN_146c005f0(local_2a0,param_1[1],1,1);
    dVar1 = (double)param_1[0x15];
    if (dVar1 < 0.0) {
      (**(code **)(*param_1 + 0x20))(param_1,param_2);
      FUN_14845ad2a(param_1);
      FUN_146c0aee0(param_1[1],1);
    }
    else {
      FUN_146c0aee0(local_2a0,1);
      (**(code **)(*param_1 + 0x20))(param_1,param_2);
      FUN_14845ad2a(param_1);
    }
    local_5f0[0] = param_1[1];
    local_548 = 0;
    local_540 = 0;
    local_568 = 0;
    uStack_560 = 0;
    local_53c = 0xffffffff00000080;
    local_534 = 0;
    local_528 = 0;
    local_520 = 0;
    local_4f8 = 0;
    local_4f0 = 0;
    local_518 = 0;
    uStack_510 = 0;
    local_4ec = 0xffffffff00000080;
    local_4e4 = 0;
    local_4d8 = 0;
    local_4d0 = 0;
    local_4c8 = 0x101;
    local_4a0 = 0;
    local_498 = 0;
    local_4c0 = 0;
    uStack_4b8 = 0;
    local_494 = 0xffffffff00000080;
    local_48c = 0;
    local_480 = 0;
    local_478 = 0;
    local_450 = 0;
    local_448 = 0;
    local_470 = 0;
    uStack_468 = 0;
    local_444 = 0xffffffff00000080;
    local_43c = 0;
    local_430 = 0;
    local_428 = 0;
    local_420 = 0x101;
    local_3f8 = 0;
    local_3f0 = 0;
    local_418 = 0;
    uStack_410 = 0;
    local_3ec = 0xffffffff00000080;
    local_3e4 = 0;
    local_3d8 = 0;
    local_3d0 = 0;
    local_3a8 = 0;
    local_3a0 = 0;
    local_3c8 = 0;
    uStack_3c0 = 0;
    local_39c = 0xffffffff00000080;
    local_394 = 0;
    local_388 = 0;
    local_380 = 0;
    local_377 = 1;
    local_378 = 1;
    local_350 = 0;
    local_348 = 0;
    local_370 = 0;
    uStack_368 = 0;
    local_344 = 0xffffffff00000080;
    local_33c = 0;
    local_330 = 0;
    local_328 = 0;
    local_300 = 0;
    local_2f8 = 0;
    local_320 = 0;
    uStack_318 = 0;
    local_2f4 = 0xffffffff00000080;
    local_2ec = 0;
    local_2e0 = 0;
    local_2d8 = 0;
    local_2d0 = 0x101;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_698 = local_5a8;
    local_5a8[0] = 0;
    local_598 = 0;
    local_5f0[1] = 0;
    local_5d8 = 0;
    local_690 = 0;
    FUN_146bcbbdc(local_5f0,local_2a0);
    lVar8 = (longlong)*(int *)(param_1[0x1c] + 0x10);
    local_688 = param_1;
    if (lVar8 != 0) {
      lVar4 = param_1[0x1e];
      lVar9 = *(longlong *)(param_1[0x1c] + 8);
      lVar8 = lVar8 * 0x40 + lVar9;
      do {
        iVar2 = *(int *)(lVar9 + 0x10);
        local_608[0] = 0;
        local_608[1] = 0;
        FUN_144a1a59e(local_608,iVar2,1);
        if (0 < (longlong)iVar2) {
          lVar6 = 0;
          do {
            uVar5 = FUN_146bcd1d8(&local_568,*(undefined4 *)(*(longlong *)(lVar9 + 8) + lVar6 * 4));
            *(undefined4 *)(local_608[0] + lVar6 * 4) = uVar5;
            lVar6 = lVar6 + 1;
          } while (iVar2 != lVar6);
        }
        plVar7 = (longlong *)(lVar9 + 8);
        plVar3 = local_608;
        if (0.0 <= dVar1) {
          plVar7 = local_608;
          plVar3 = (longlong *)(lVar9 + 8);
        }
        if ((char)lVar4 == '\0') {
          FUN_1482e5510(local_680,local_688[1]);
          FUN_1482e55de(local_680);
          FUN_14830d41a(local_680);
        }
        else {
          FUN_146bc57a8(local_5f0,plVar3,plVar7);
        }
        if (local_608[0] != 0) {
          FUN_1400020a8();
        }
        lVar9 = lVar9 + 0x40;
      } while (lVar9 != lVar8);
    }
    FUN_14845aea2(local_688);
    FUN_146bfdcfe(&local_568);
    FUN_141082778(local_2a0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_6b8);
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  FUN_14845ad2a(param_1);
  if ((local_80 ^ (ulonglong)auStack_6b8) == DAT_14c707940) {
    FUN_14845aea2(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c76b4 FUN_1496c76b4 body=89 status=ok
// SIG undefined FUN_1496c76b4(void)

void FUN_1496c76b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_14aee2a60;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496c7703. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1496c770e FUN_1496c770e body=2430 status=ok
// SIG undefined FUN_1496c770e(void)

void FUN_1496c770e(undefined8 *param_1)

{
  undefined4 *puVar1;
  double dVar2;
  void *_Src;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  int iVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_428 [32];
  undefined1 local_408;
  uint local_400;
  undefined8 **local_3f8;
  int local_3ec;
  undefined8 *local_3e8;
  undefined8 **local_3e0;
  undefined1 *local_3d8;
  undefined8 local_3d0;
  longlong local_3c8;
  undefined8 uStack_3c0;
  undefined8 *local_3b8;
  int local_3b0;
  undefined4 local_3ac;
  undefined8 *local_3a8;
  undefined8 **local_3a0;
  undefined8 *local_398;
  undefined8 **local_390;
  undefined1 local_388 [8];
  undefined1 *local_380;
  ulonglong local_378;
  undefined1 local_2b0 [16];
  longlong local_2a0;
  char local_a0;
  int local_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_428;
  local_3ec = 1;
  if (1 < *(int *)(param_1 + 0x22)) {
    local_3ec = *(int *)(param_1 + 0x22);
  }
  local_3b8 = (undefined8 *)0x0;
  local_3b0 = *(int *)(param_1 + 0x12);
  lVar16 = (longlong)local_3b0;
  _Src = (void *)param_1[0x11];
  if (lVar16 == 0) {
    local_3ac = 0;
  }
  else {
    FUN_1405b70fe(&local_3b8,local_3b0,0);
    memcpy(local_3b8,_Src,lVar16 * 0x18);
  }
  dVar2 = (double)param_1[0x23];
  local_408 = 0;
  FUN_1411b354a(local_2b0,0,0,0);
  FUN_1457e37e0(local_388);
  if ((*(char *)(param_1 + 0x24) == '\x01') && (0.0 < dVar2)) {
    local_400 = local_400 & 0xffffff00;
    local_408 = 0;
    FUN_146c005f0(local_2b0,param_1[1],0,0);
    local_378 = 0;
    local_380 = local_2b0;
    FUN_146bee918(local_388);
    local_378 = (ulonglong)(uint)(*(int *)(local_380 + 0x214) + *(int *)(local_380 + 0x218));
  }
  local_3d0 = param_1[1];
  local_3c8 = 0;
  uStack_3c0 = 0;
  dVar4 = (double)local_3ec;
  iVar23 = 0;
  do {
    puVar10 = &local_3d0;
    if (iVar23 == 0) {
      puVar10 = (undefined8 *)param_1[0x16];
    }
    lVar16 = param_1[1];
    uVar17 = *(int *)(lVar16 + 0x20) * 0x200 + *(int *)(lVar16 + 0x24);
    puVar15 = (undefined1 *)0x0;
    if ((uVar17 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar16 + 0x28) - 1U))) {
      puVar15 = &DAT_00000001;
      uVar14 = 1;
      if (1 < (int)uVar17) {
        puVar15 = (undefined1 *)(ulonglong)uVar17;
      }
      do {
        uVar13 = uVar14;
        if ((uint)puVar15 == uVar13) goto LAB_1496c7a5b;
        uVar14 = uVar13 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar16 + 0x28))[uVar13 >> 9] +
                                           (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
      puVar15 = (undefined1 *)(ulonglong)uVar13;
    }
LAB_1496c7a5b:
    uVar14 = (uint)puVar15;
    if (uVar14 != uVar17) {
      dVar3 = 1.0;
      if (*(char *)(param_1 + 0x21) == '\x01') {
        pfVar19 = (float *)param_1[0x1f];
        if ((-1 < (int)uVar14) && ((int)uVar14 < (int)pfVar19[4])) {
          pfVar19 = (float *)((longlong)puVar15 * 4 + *(longlong *)(pfVar19 + 2));
        }
        dVar3 = (double)*pfVar19;
      }
      dVar26 = 1.0;
      if (dVar3 <= 1.0) {
        dVar26 = dVar3;
      }
      dVar26 = (double)(~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar26);
      lVar18 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + ((ulonglong)puVar15 >> 9) * 8);
      uVar22 = (ulonglong)(uVar14 & 0x1ff);
      dVar3 = *(double *)(lVar18 + uVar22 * 0x18);
      dVar24 = *(double *)(lVar18 + 8 + uVar22 * 0x18);
      dVar25 = *(double *)(lVar18 + 0x10 + uVar22 * 0x18);
      lVar18 = (longlong)(int)uVar14;
      if ((*(char *)(param_1 + 0x1e) == '\0') || (*(char *)(param_1[0x18] + lVar18) == '\0')) {
        dVar26 = (((1.0 - dVar26) * (double)param_1[0x13] + (double)param_1[0x14] * dVar26) *
                 (double)param_1[0x15]) / dVar4;
        lVar20 = puVar10[1];
        dVar3 = dVar3 + dVar26 * *(double *)(lVar20 + lVar18 * 0x18);
        dVar24 = dVar24 + *(double *)(lVar20 + 8 + lVar18 * 0x18) * dVar26;
        dVar25 = dVar25 + *(double *)(lVar20 + 0x10 + lVar18 * 0x18) * dVar26;
      }
      lVar20 = param_1[0x11];
      *(double *)(lVar20 + lVar18 * 0x18) = dVar3;
      *(double *)(lVar20 + 8 + lVar18 * 0x18) = dVar24;
      *(double *)(lVar20 + 0x10 + lVar18 * 0x18) = dVar25;
      uVar13 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar17) {
        uVar13 = uVar17;
      }
      do {
        iVar12 = (int)puVar15;
        puVar15 = (undefined1 *)(ulonglong)uVar13;
        if (uVar13 - 1 == iVar12) break;
        uVar14 = iVar12 + 1;
        puVar15 = (undefined1 *)(ulonglong)uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar16 + 0x28) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      goto LAB_1496c7a5b;
    }
    if ((*(char *)(param_1 + 0x24) == '\x01') && (0.0 < dVar2)) {
      lVar16 = param_1[1];
      uVar22 = 0;
      uVar14 = *(int *)(lVar16 + 0x20) * 0x200 + *(int *)(lVar16 + 0x24);
      if ((uVar14 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar16 + 0x28) - 1U))) {
        uVar22 = 1;
        uVar13 = 1;
        if (1 < (int)uVar14) {
          uVar22 = (ulonglong)uVar14;
        }
        do {
          uVar11 = uVar13;
          if ((uint)uVar22 == uVar11) goto LAB_1496c7ec3;
          uVar13 = uVar11 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar16 + 0x28))[uVar11 >> 9] +
                                             (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
        uVar22 = (ulonglong)uVar11;
      }
LAB_1496c7ec3:
      uVar13 = (uint)uVar22;
      if (uVar13 != uVar14) {
        puVar21 = (undefined4 *)((longlong)(int)uVar13 * 0x18 + param_1[0x11]);
        cVar9 = FUN_146bfed03(puVar21);
        if (cVar9 != '\0') {
          lVar18 = *(longlong *)(local_2a0 + (uVar22 >> 9) * 8);
          *(undefined8 *)(lVar18 + 0x10 + (ulonglong)(uVar13 & 0x1ff) * 0x18) =
               *(undefined8 *)(puVar21 + 4);
          uVar5 = puVar21[1];
          uVar6 = puVar21[2];
          uVar7 = puVar21[3];
          puVar1 = (undefined4 *)(lVar18 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
          *puVar1 = *puVar21;
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          if (local_a0 == '\x01') {
            LOCK();
            local_9c = local_9c + 1;
            UNLOCK();
          }
        }
        uVar11 = uVar13 + 1;
        if ((int)(uVar13 + 1) < (int)uVar14) {
          uVar11 = uVar14;
        }
        do {
          if (uVar11 - 1 == (int)uVar22) {
            uVar22 = (ulonglong)uVar11;
            break;
          }
          uVar13 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar13;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar16 + 0x28) +
                                               (ulonglong)(uVar13 >> 9) * 8) +
                                             (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
        goto LAB_1496c7ec3;
      }
      FUN_146bee918(local_388,0);
      local_378 = (ulonglong)(uint)(*(int *)(local_380 + 0x214) + *(int *)(local_380 + 0x218));
    }
    if (0.0 < dVar2) {
      local_3e0 = &local_3b8;
      local_3d8 = local_388;
      local_398 = (undefined8 *)0x0;
      local_390 = (undefined8 **)((ulonglong)local_390 & 0xffffffff00000000);
      local_3a8 = (undefined8 *)&LAB_1496c876e;
      local_3a0 = &local_3e8;
      local_3f8 = &local_398;
      local_400 = 0;
      local_3e8 = param_1;
      FUN_1401f8d10(L"ParallelFor Task",uVar17,1,&local_3a8);
      if (*(char *)(param_1 + 0x1e) == '\0') {
        local_3a0 = &local_3b8;
        local_3e8 = (undefined8 *)0x0;
        local_3e0 = (undefined8 **)((ulonglong)local_3e0 & 0xffffffff00000000);
        local_398 = (undefined8 *)&LAB_1496c89a6;
        local_390 = &local_3a8;
        local_3f8 = &local_3e8;
        local_400 = 0;
        local_3a8 = param_1;
        FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x1b),1,&local_398);
      }
      lVar16 = param_1[1];
      puVar15 = (undefined1 *)0x0;
      uVar17 = *(int *)(lVar16 + 0x20) * 0x200 + *(int *)(lVar16 + 0x24);
      if ((uVar17 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar16 + 0x28) - 1U))) {
        puVar15 = &DAT_00000001;
        uVar14 = 1;
        if (1 < (int)uVar17) {
          puVar15 = (undefined1 *)(ulonglong)uVar17;
        }
        do {
          uVar13 = uVar14;
          if ((uint)puVar15 == uVar13) goto LAB_1496c7ce2;
          uVar14 = uVar13 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar16 + 0x28))[uVar13 >> 9] +
                                             (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
        puVar15 = (undefined1 *)(ulonglong)uVar13;
      }
LAB_1496c7ce2:
      uVar14 = (uint)puVar15;
      while (uVar14 != uVar17) {
        lVar20 = (longlong)(int)puVar15;
        lVar18 = param_1[0x11];
        *(undefined8 *)(lVar18 + 0x10 + lVar20 * 0x18) = local_3b8[lVar20 * 3 + 2];
        puVar10 = local_3b8 + lVar20 * 3;
        uVar5 = *(undefined4 *)((longlong)puVar10 + 4);
        uVar6 = *(undefined4 *)(puVar10 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar10 + 0xc);
        puVar21 = (undefined4 *)(lVar18 + lVar20 * 0x18);
        *puVar21 = *(undefined4 *)puVar10;
        puVar21[1] = uVar5;
        puVar21[2] = uVar6;
        puVar21[3] = uVar7;
        uVar14 = (int)puVar15 + 1;
        if ((int)uVar14 < (int)uVar17) {
          uVar14 = uVar17;
        }
        do {
          iVar12 = (int)puVar15;
          puVar15 = (undefined1 *)(ulonglong)uVar14;
          if (uVar14 - 1 == iVar12) break;
          uVar13 = iVar12 + 1;
          puVar15 = (undefined1 *)(ulonglong)uVar13;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar16 + 0x28) +
                                               (ulonglong)(uVar13 >> 9) * 8) +
                                             (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
        uVar14 = (uint)puVar15;
      }
    }
    lVar16 = param_1[1];
    uVar22 = 0;
    uVar17 = *(int *)(lVar16 + 0x20) * 0x200 + *(int *)(lVar16 + 0x24);
    if ((uVar17 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar16 + 0x28) - 1U))) {
      uVar22 = 1;
      uVar14 = 1;
      if (1 < (int)uVar17) {
        uVar22 = (ulonglong)uVar17;
      }
      do {
        uVar13 = uVar14;
        if ((uint)uVar22 == uVar13) goto LAB_1496c7b9b;
        uVar14 = uVar13 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar16 + 0x28))[uVar13 >> 9] +
                                           (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
      uVar22 = (ulonglong)uVar13;
    }
LAB_1496c7b9b:
    uVar14 = (uint)uVar22;
    if (uVar14 != uVar17) {
      lVar18 = param_1[1];
      puVar21 = (undefined4 *)((longlong)(int)uVar14 * 0x18 + param_1[0x11]);
      cVar9 = FUN_146bfed03(puVar21);
      if (cVar9 != '\0') {
        lVar20 = *(longlong *)(*(longlong *)(lVar18 + 0x10) + (uVar22 >> 9) * 8);
        *(undefined8 *)(lVar20 + 0x10 + (ulonglong)(uVar14 & 0x1ff) * 0x18) =
             *(undefined8 *)(puVar21 + 4);
        uVar5 = puVar21[1];
        uVar6 = puVar21[2];
        uVar7 = puVar21[3];
        puVar1 = (undefined4 *)(lVar20 + (ulonglong)(uVar14 & 0x1ff) * 0x18);
        *puVar1 = *puVar21;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        if (*(char *)(lVar18 + 0x210) == '\x01') {
          LOCK();
          *(int *)(lVar18 + 0x214) = *(int *)(lVar18 + 0x214) + 1;
          UNLOCK();
        }
      }
      uVar13 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar17) {
        uVar13 = uVar17;
      }
      do {
        if (uVar13 - 1 == (int)uVar22) {
          uVar22 = (ulonglong)uVar13;
          break;
        }
        uVar14 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar16 + 0x28) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      goto LAB_1496c7b9b;
    }
    FUN_146c37e28(&local_3d0,1,1);
    iVar23 = iVar23 + 1;
  } while (iVar23 != local_3ec);
  lVar16 = param_1[1];
  uVar17 = *(int *)(lVar16 + 0x20) * 0x200 + *(int *)(lVar16 + 0x24);
  uVar22 = 0;
  if ((uVar17 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar16 + 0x28) - 1U))) {
    uVar22 = 1;
    uVar14 = 1;
    if (1 < (int)uVar17) {
      uVar22 = (ulonglong)uVar17;
    }
    do {
      uVar13 = uVar14;
      if ((uint)uVar22 == uVar13) goto LAB_1496c7ffd;
      uVar14 = uVar13 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar16 + 0x28))[uVar13 >> 9] +
                                         (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
    uVar22 = (ulonglong)uVar13;
  }
LAB_1496c7ffd:
  do {
    uVar14 = (uint)uVar22;
    if (uVar14 == uVar17) {
      if (local_3c8 != 0) {
        FUN_1400020a8();
      }
      FUN_1457e5b52(local_388);
      FUN_141082778(local_2b0);
      if (local_3b8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if ((local_90 ^ (ulonglong)auStack_428) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    lVar18 = param_1[0x11];
    lVar20 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (uVar22 >> 9) * 8);
    puVar21 = (undefined4 *)(lVar20 + (ulonglong)(uVar14 & 0x1ff) * 0x18);
    uVar5 = *puVar21;
    uVar6 = puVar21[1];
    uVar7 = puVar21[2];
    uVar8 = puVar21[3];
    *(undefined8 *)(lVar18 + 0x10 + (longlong)(int)uVar14 * 0x18) =
         *(undefined8 *)(lVar20 + 0x10 + (ulonglong)(uVar14 & 0x1ff) * 0x18);
    puVar21 = (undefined4 *)(lVar18 + (longlong)(int)uVar14 * 0x18);
    *puVar21 = uVar5;
    puVar21[1] = uVar6;
    puVar21[2] = uVar7;
    puVar21[3] = uVar8;
    uVar13 = uVar14 + 1;
    if ((int)(uVar14 + 1) < (int)uVar17) {
      uVar13 = uVar17;
    }
    do {
      iVar23 = (int)uVar22;
      uVar22 = (ulonglong)uVar13;
      if (uVar13 - 1 == iVar23) break;
      uVar14 = iVar23 + 1;
      uVar22 = (ulonglong)uVar14;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar16 + 0x28) +
                                           (ulonglong)(uVar14 >> 9) * 8) +
                                         (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 1496c808e FUN_1496c808e body=1759 status=ok
// SIG undefined FUN_1496c808e(void)

void FUN_1496c808e(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  float *pfVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_c8 [44];
  int local_9c;
  undefined8 local_98;
  longlong local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar12 = *(int *)(param_1 + 0x110);
  if (iVar12 < 2) {
    lVar21 = *(longlong *)(param_1 + 8);
    uVar9 = *(int *)(lVar21 + 0x20) * 0x200 + *(int *)(lVar21 + 0x24);
    uVar10 = 0;
    if ((uVar9 != 0) &&
       (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar21 + 0x28) - 1U))) {
      uVar11 = 1;
      uVar15 = 1;
      if (1 < (int)uVar9) {
        uVar11 = uVar9;
      }
      do {
        uVar17 = uVar15;
        uVar10 = uVar11;
        if (uVar11 == uVar17) break;
        uVar15 = uVar17 + 1;
        uVar10 = uVar17;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar21 + 0x28))[uVar17 >> 9] +
                                           (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
    }
joined_r0x0001496c8101:
    uVar11 = uVar10;
    if (uVar11 != uVar9) {
      dVar22 = 1.0;
      if (*(char *)(param_1 + 0x108) == '\x01') {
        pfVar18 = *(float **)(param_1 + 0xf8);
        if ((-1 < (int)uVar11) && ((int)uVar11 < (int)pfVar18[4])) {
          pfVar18 = (float *)((ulonglong)uVar11 * 4 + *(longlong *)(pfVar18 + 2));
        }
        dVar22 = (double)*pfVar18;
      }
      dVar23 = 1.0;
      if (dVar22 <= 1.0) {
        dVar23 = dVar22;
      }
      dVar23 = (double)(~-(ulonglong)(dVar22 < 0.0) & (ulonglong)dVar23);
      dVar25 = ((1.0 - dVar23) * *(double *)(param_1 + 0x98) + *(double *)(param_1 + 0xa0) * dVar23)
               * *(double *)(param_1 + 0xa8);
      lVar16 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
      uVar19 = (ulonglong)(uVar11 & 0x1ff);
      dVar22 = *(double *)(lVar16 + uVar19 * 0x18);
      dVar23 = *(double *)(lVar16 + 8 + uVar19 * 0x18);
      dVar24 = *(double *)(lVar16 + 0x10 + uVar19 * 0x18);
      lVar16 = (longlong)(int)uVar11;
      if ((*(char *)(param_1 + 0xf0) == '\0') ||
         (*(char *)(*(longlong *)(param_1 + 0xc0) + lVar16) == '\0')) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 8);
        dVar22 = dVar22 + dVar25 * *(double *)(lVar2 + lVar16 * 0x18);
        dVar23 = dVar23 + *(double *)(lVar2 + 8 + lVar16 * 0x18) * dVar25;
        dVar24 = dVar24 + *(double *)(lVar2 + 0x10 + lVar16 * 0x18) * dVar25;
      }
      lVar2 = *(longlong *)(param_1 + 0x88);
      *(double *)(lVar2 + lVar16 * 0x18) = dVar22;
      *(double *)(lVar2 + 8 + lVar16 * 0x18) = dVar23;
      *(double *)(lVar2 + 0x10 + lVar16 * 0x18) = dVar24;
      uVar15 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar9) {
        uVar15 = uVar9;
      }
      do {
        uVar10 = uVar15;
        if (uVar15 - 1 == uVar11) break;
        uVar11 = uVar11 + 1;
        uVar10 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar21 + 0x28) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      goto joined_r0x0001496c8101;
    }
  }
  else {
    local_98 = *(undefined8 *)(param_1 + 8);
    local_90 = 0;
    uStack_88 = 0;
    iVar20 = 0;
    local_9c = iVar12;
    do {
      puVar14 = &local_98;
      if (iVar20 == 0) {
        puVar14 = *(undefined8 **)(param_1 + 0xb0);
      }
      lVar21 = *(longlong *)(param_1 + 8);
      uVar9 = *(int *)(lVar21 + 0x20) * 0x200 + *(int *)(lVar21 + 0x24);
      uVar10 = 0;
      if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar21 + 0x28) - 1U))) {
        uVar19 = 1;
        uVar11 = 1;
        if (1 < (int)uVar9) {
          uVar11 = uVar9;
        }
        do {
          uVar15 = (uint)uVar19;
          uVar10 = uVar11;
          if (uVar11 == uVar15) break;
          uVar3 = uVar19 >> 9;
          uVar19 = (ulonglong)(uVar15 + 1);
          uVar10 = uVar15;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar21 + 0x28))[uVar3] +
                                             (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
      }
      if (uVar10 != uVar9) {
        do {
          dVar22 = 1.0;
          if (*(char *)(param_1 + 0x108) == '\x01') {
            pfVar18 = *(float **)(param_1 + 0xf8);
            if ((-1 < (int)uVar10) && ((int)uVar10 < (int)pfVar18[4])) {
              pfVar18 = (float *)((ulonglong)uVar10 * 4 + *(longlong *)(pfVar18 + 2));
            }
            dVar22 = (double)*pfVar18;
          }
          dVar23 = 1.0;
          if (dVar22 <= 1.0) {
            dVar23 = dVar22;
          }
          dVar23 = (double)(~-(ulonglong)(dVar22 < 0.0) & (ulonglong)dVar23);
          lVar16 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (ulonglong)(uVar10 >> 9) * 8
                    );
          uVar19 = (ulonglong)(uVar10 & 0x1ff);
          dVar22 = *(double *)(lVar16 + uVar19 * 0x18);
          dVar24 = *(double *)(lVar16 + 8 + uVar19 * 0x18);
          dVar25 = *(double *)(lVar16 + 0x10 + uVar19 * 0x18);
          lVar16 = (longlong)(int)uVar10;
          if ((*(char *)(param_1 + 0xf0) == '\0') ||
             (*(char *)(*(longlong *)(param_1 + 0xc0) + lVar16) == '\0')) {
            dVar23 = (((1.0 - dVar23) * *(double *)(param_1 + 0x98) +
                      *(double *)(param_1 + 0xa0) * dVar23) * *(double *)(param_1 + 0xa8)) /
                     (double)iVar12;
            lVar2 = puVar14[1];
            dVar22 = dVar22 + dVar23 * *(double *)(lVar2 + lVar16 * 0x18);
            dVar24 = dVar24 + *(double *)(lVar2 + 8 + lVar16 * 0x18) * dVar23;
            dVar25 = dVar25 + *(double *)(lVar2 + 0x10 + lVar16 * 0x18) * dVar23;
          }
          lVar2 = *(longlong *)(param_1 + 0x88);
          *(double *)(lVar2 + lVar16 * 0x18) = dVar22;
          *(double *)(lVar2 + 8 + lVar16 * 0x18) = dVar24;
          *(double *)(lVar2 + 0x10 + lVar16 * 0x18) = dVar25;
          uVar11 = uVar10 + 1;
          if ((int)(uVar10 + 1) < (int)uVar9) {
            uVar11 = uVar9;
          }
          do {
            uVar15 = uVar11;
            if (uVar11 - 1 == uVar10) break;
            uVar10 = uVar10 + 1;
            uVar15 = uVar10;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar21 + 0x28) +
                                                 (ulonglong)(uVar10 >> 9) * 8) +
                                               (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
          uVar10 = uVar15;
        } while (uVar10 != uVar9);
        lVar21 = *(longlong *)(param_1 + 8);
        uVar9 = *(int *)(lVar21 + 0x20) * 0x200 + *(int *)(lVar21 + 0x24);
      }
      uVar19 = 0;
      if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar21 + 0x28) - 1U))) {
        uVar19 = 1;
        uVar10 = 1;
        if (1 < (int)uVar9) {
          uVar19 = (ulonglong)uVar9;
        }
        do {
          uVar11 = uVar10;
          if ((uint)uVar19 == uVar11) goto LAB_1496c8556;
          uVar10 = uVar11 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar21 + 0x28))[uVar11 >> 9] +
                                             (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
        uVar19 = (ulonglong)uVar11;
      }
LAB_1496c8556:
      uVar10 = (uint)uVar19;
      if (uVar10 != uVar9) {
        lVar16 = *(longlong *)(param_1 + 8);
        puVar13 = (undefined4 *)((longlong)(int)uVar10 * 0x18 + *(longlong *)(param_1 + 0x88));
        cVar8 = FUN_146bfed03(puVar13);
        if (cVar8 != '\0') {
          lVar2 = *(longlong *)(*(longlong *)(lVar16 + 0x10) + (uVar19 >> 9) * 8);
          *(undefined8 *)(lVar2 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18) =
               *(undefined8 *)(puVar13 + 4);
          uVar4 = puVar13[1];
          uVar5 = puVar13[2];
          uVar6 = puVar13[3];
          puVar1 = (undefined4 *)(lVar2 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
          *puVar1 = *puVar13;
          puVar1[1] = uVar4;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
          if (*(char *)(lVar16 + 0x210) == '\x01') {
            LOCK();
            *(int *)(lVar16 + 0x214) = *(int *)(lVar16 + 0x214) + 1;
            UNLOCK();
          }
        }
        uVar11 = uVar10 + 1;
        if ((int)(uVar10 + 1) < (int)uVar9) {
          uVar11 = uVar9;
        }
        do {
          if (uVar11 - 1 == (int)uVar19) {
            uVar19 = (ulonglong)uVar11;
            break;
          }
          uVar10 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar10;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar21 + 0x28) +
                                               (ulonglong)(uVar10 >> 9) * 8) +
                                             (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
        goto LAB_1496c8556;
      }
      FUN_146c37e28(&local_98,1,1);
      iVar20 = iVar20 + 1;
    } while (iVar20 != local_9c);
    lVar21 = *(longlong *)(param_1 + 8);
    uVar10 = *(int *)(lVar21 + 0x20) * 0x200 + *(int *)(lVar21 + 0x24);
    uVar19 = 0;
    if ((uVar10 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar21 + 0x28) - 1U))) {
      uVar19 = 1;
      uVar9 = 1;
      if (1 < (int)uVar10) {
        uVar19 = (ulonglong)uVar10;
      }
      do {
        uVar11 = uVar9;
        if ((uint)uVar19 == uVar11) goto LAB_1496c86d0;
        uVar9 = uVar11 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar21 + 0x28))[uVar11 >> 9] +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      uVar19 = (ulonglong)uVar11;
    }
LAB_1496c86d0:
    uVar9 = (uint)uVar19;
    if (uVar9 != uVar10) {
      lVar16 = *(longlong *)(param_1 + 0x88);
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (uVar19 >> 9) * 8);
      puVar13 = (undefined4 *)(lVar2 + (ulonglong)(uVar9 & 0x1ff) * 0x18);
      uVar4 = *puVar13;
      uVar5 = puVar13[1];
      uVar6 = puVar13[2];
      uVar7 = puVar13[3];
      *(undefined8 *)(lVar16 + 0x10 + (longlong)(int)uVar9 * 0x18) =
           *(undefined8 *)(lVar2 + 0x10 + (ulonglong)(uVar9 & 0x1ff) * 0x18);
      puVar13 = (undefined4 *)(lVar16 + (longlong)(int)uVar9 * 0x18);
      *puVar13 = uVar4;
      puVar13[1] = uVar5;
      puVar13[2] = uVar6;
      puVar13[3] = uVar7;
      uVar11 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar10) {
        uVar11 = uVar10;
      }
      do {
        iVar12 = (int)uVar19;
        uVar19 = (ulonglong)uVar11;
        if (uVar11 - 1 == iVar12) break;
        uVar9 = iVar12 + 1;
        uVar19 = (ulonglong)uVar9;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar21 + 0x28) +
                                             (ulonglong)(uVar9 >> 9) * 8) +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
      goto LAB_1496c86d0;
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496c8776 FUN_1496c8776 body=520 status=ok
// SIG undefined FUN_1496c8776(void)

void FUN_1496c8776(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  double dVar12;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  longlong *local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  longlong local_98 [2];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  undefined1 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar6 = *param_1;
  if (((((int)param_2 < 0) ||
       (lVar7 = *(longlong *)(lVar6 + 8),
       *(int *)(lVar7 + 0x20) * 0x200 + *(int *)(lVar7 + 0x24) <= (int)param_2)) ||
      (0xfffc < (ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(lVar7 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                                   (ulonglong)(param_2 & 0x1ff) * 2) - 2U))) ||
     (*(char *)(*(longlong *)(lVar6 + 0xc0) + (ulonglong)param_2) == '\x01')) {
    lVar6 = *(longlong *)(lVar6 + 0x88);
    lVar8 = (longlong)(int)param_2 * 0x18;
    lVar7 = *(longlong *)param_1[1];
    *(undefined8 *)(lVar7 + 0x10 + lVar8) = *(undefined8 *)(lVar6 + 0x10 + lVar8);
    puVar1 = (undefined8 *)(lVar6 + lVar8);
    uVar10 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + lVar8);
    *puVar2 = *puVar1;
    puVar2[1] = uVar10;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_f8);
  }
  local_b8 = local_98;
  local_c0 = &LAB_1496c8980;
  local_98[0] = lVar6;
  FUN_1482cacfa(&local_b0);
  dVar3 = *(double *)(lVar6 + 0x118);
  lVar7 = *(longlong *)(lVar6 + 0x88);
  lVar9 = (ulonglong)param_2 * 0x18;
  dVar12 = 1.0 - dVar3;
  dVar4 = *(double *)(lVar7 + 0x10 + lVar9);
  dVar5 = *(double *)(lVar7 + 8 + lVar9);
  lVar8 = *(longlong *)param_1[1];
  *(double *)(lVar8 + lVar9) = dVar12 * *(double *)(lVar7 + lVar9) + dVar3 * local_b0;
  *(double *)(lVar8 + 8 + lVar9) = dVar5 * dVar12 + local_a8 * dVar3;
  *(double *)(lVar8 + 0x10 + lVar9) = dVar4 * dVar12 + local_a0 * dVar3;
  if (*(char *)(lVar6 + 0x120) == '\x01') {
    local_98[0] = 0x7fefffffffffffff;
    local_88 = 0;
    local_78 = (longlong *)0x0;
    local_48 = 0;
    FUN_146ba2472(param_1[2],&local_d8,*(longlong *)param_1[1] + lVar9,local_98);
    lVar6 = *(longlong *)param_1[1];
    *(undefined8 *)(lVar6 + 0x10 + lVar9) = local_c8;
    puVar1 = (undefined8 *)(lVar6 + lVar9);
    *puVar1 = local_d8;
    puVar1[1] = uStack_d0;
    if (local_88 != 0) {
      plVar11 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar11 = local_68;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496c89ae FUN_1496c89ae body=274 status=ok
// SIG undefined FUN_1496c89ae(void)

void FUN_1496c89ae(longlong *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  longlong local_70;
  undefined1 *local_68;
  longlong *local_60;
  longlong local_58;
  undefined1 *local_50;
  longlong *local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *param_1;
  iVar4 = *(int *)(*(longlong *)(lVar5 + 0xd0) + (longlong)param_2 * 4);
  local_48 = &local_58;
  local_78 = &local_50;
  local_50 = &LAB_1496c8ac2;
  local_60 = &local_70;
  local_68 = &LAB_1496c8ad4;
  local_70 = lVar5;
  local_58 = lVar5;
  FUN_1482cafba(&local_40,*(undefined8 *)(lVar5 + 8),iVar4);
  dVar1 = *(double *)(lVar5 + 0x128);
  lVar5 = *(longlong *)(lVar5 + 0x88);
  lVar7 = (longlong)iVar4 * 0x18;
  dVar8 = 1.0 - dVar1;
  dVar2 = *(double *)(lVar5 + 0x10 + lVar7);
  dVar3 = *(double *)(lVar5 + 8 + lVar7);
  lVar6 = *(longlong *)param_1[1];
  *(double *)(lVar6 + lVar7) = dVar8 * *(double *)(lVar5 + lVar7) + dVar1 * local_40;
  *(double *)(lVar6 + 8 + lVar7) = dVar3 * dVar8 + local_38 * dVar1;
  *(double *)(lVar6 + 0x10 + lVar7) = dVar2 * dVar8 + local_30 * dVar1;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c8afa FUN_1496c8afa body=38 status=ok
// SIG undefined FUN_1496c8afa(void)

undefined8 FUN_1496c8afa(undefined8 param_1,int param_2)

{
  FUN_1496c8b26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c8b26 FUN_1496c8b26 body=190 status=ok
// SIG undefined FUN_1496c8b26(void)

void FUN_1496c8b26(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bdcbb10;
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
  plVar3 = (longlong *)param_1[0x1d];
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
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x17];
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
  FUN_1496c76b4(param_1);
  return;
}



// FUNCTION 1496c8be4 FUN_1496c8be4 body=656 status=ok
// SIG undefined FUN_1496c8be4(void)

void FUN_1496c8be4(longlong param_1)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  float *pfVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  double local_88;
  double dStack_80;
  double local_78;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_148397f1b(&local_68,(*(byte *)(param_1 + 0x110) ^ 1) * 5,*(undefined8 *)(param_1 + 8));
  lVar2 = *(longlong *)(param_1 + 8);
  uVar9 = *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24);
  uVar10 = 0;
  if ((uVar9 != 0) &&
     (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x28) - 1U))) {
    uVar11 = 1;
    uVar5 = 1;
    if (1 < (int)uVar9) {
      uVar11 = uVar9;
    }
    do {
      uVar10 = uVar11;
      if (uVar11 == uVar5) break;
      uVar8 = uVar5 >> 9;
      uVar12 = uVar5 & 0x1ff;
      uVar10 = uVar5;
      uVar5 = uVar5 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x28))[uVar8] +
                                         (ulonglong)uVar12 * 2) - 1U));
  }
  if (uVar10 != uVar9) {
    dVar14 = *(double *)(param_1 + 0x118);
    uVar15 = SUB84(dVar14,0);
    uVar16 = (undefined4)((ulonglong)dVar14 >> 0x20);
    if (dVar14 <= 0.001) {
      uVar15 = 0xd2f1a9fc;
      uVar16 = 0x3f50624d;
    }
    do {
      dVar14 = 1.0;
      if (*(char *)(param_1 + 0x108) == '\x01') {
        pfVar6 = *(float **)(param_1 + 0xf8);
        if ((-1 < (int)uVar10) && ((int)uVar10 < (int)pfVar6[4])) {
          pfVar6 = (float *)((ulonglong)uVar10 * 4 + *(longlong *)(pfVar6 + 2));
        }
        dVar14 = (double)*pfVar6;
      }
      dVar13 = 1.0;
      if (dVar14 <= 1.0) {
        dVar13 = dVar14;
      }
      dVar13 = (double)(~-(ulonglong)(dVar14 < 0.0) & (ulonglong)dVar13);
      dVar14 = ((1.0 - dVar13) * *(double *)(param_1 + 0x98) + *(double *)(param_1 + 0xa0) * dVar13)
               * *(double *)(param_1 + 0xa8);
      lVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
      pdVar1 = (double *)(lVar3 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 8);
      lVar7 = (longlong)(int)uVar10;
      local_88 = dVar14 * *(double *)(lVar4 + lVar7 * 0x18) + *pdVar1;
      dStack_80 = *(double *)(lVar4 + 8 + lVar7 * 0x18) * dVar14 + pdVar1[1];
      local_78 = *(double *)(lVar4 + 0x10 + lVar7 * 0x18) * dVar14 +
                 *(double *)(lVar3 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
      local_98 = 0;
      (**(code **)(*local_68 + 8))
                (local_68,uVar10,(double)CONCAT44(uVar16,uVar15) / 100.0,&local_88);
      uVar11 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar9) {
        uVar11 = uVar9;
      }
      do {
        uVar5 = uVar11;
        if (uVar11 - 1 == uVar10) break;
        uVar10 = uVar10 + 1;
        uVar5 = uVar10;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar2 + 0x28) +
                                             (ulonglong)(uVar10 >> 9) * 8) +
                                           (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      uVar10 = uVar5;
    } while (uVar10 != uVar9);
  }
  (**(code **)(*local_68 + 0x40))(local_68,param_1 + 0x88);
  if (local_68 != (longlong *)0x0) {
    (**(code **)*local_68)(local_68,1);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496c8e76 FUN_1496c8e76 body=199 status=ok
// SIG undefined FUN_1496c8e76(void)

undefined8 * FUN_1496c8e76(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdcbb70;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdcbb90;
  param_1[7] = param_2;
  param_1[2] = &LAB_1496c906a;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdcbbb0;
  param_1[0x17] = &LAB_1496c90b8;
  param_1[0x12] = &LAB_1496c90c0;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1496c8f3e FUN_1496c8f3e body=38 status=ok
// SIG undefined FUN_1496c8f3e(void)

undefined8 FUN_1496c8f3e(undefined8 param_1,int param_2)

{
  FUN_1496c9114();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c8f64 FUN_1496c8f64 body=207 status=ok
// SIG undefined FUN_1496c8f64(void)

void FUN_1496c8f64(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_1496c9015;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_1496c9015:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c9034 FUN_1496c9034 body=53 status=ok
// SIG undefined FUN_1496c9034(void)

void FUN_1496c9034(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 1496c909a FUN_1496c909a body=29 status=ok
// SIG undefined FUN_1496c909a(void)

undefined8 FUN_1496c909a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c90f6 FUN_1496c90f6 body=29 status=ok
// SIG undefined FUN_1496c90f6(void)

undefined8 FUN_1496c90f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c9114 FUN_1496c9114 body=127 status=ok
// SIG undefined FUN_1496c9114(void)

void FUN_1496c9114(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdcbb70;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 1496c9194 FUN_1496c9194 body=199 status=ok
// SIG undefined FUN_1496c9194(void)

undefined8 * FUN_1496c9194(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdcbbf0;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdcbc10;
  param_1[7] = param_2;
  param_1[2] = &LAB_1496c9388;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdcbc30;
  param_1[0x17] = &LAB_1496c93d6;
  param_1[0x12] = &LAB_1496c93de;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1496c925c FUN_1496c925c body=38 status=ok
// SIG undefined FUN_1496c925c(void)

undefined8 FUN_1496c925c(undefined8 param_1,int param_2)

{
  FUN_1496c9432();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c9282 FUN_1496c9282 body=207 status=ok
// SIG undefined FUN_1496c9282(void)

void FUN_1496c9282(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_1496c9333;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_1496c9333:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c9352 FUN_1496c9352 body=53 status=ok
// SIG undefined FUN_1496c9352(void)

void FUN_1496c9352(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 1496c93b8 FUN_1496c93b8 body=29 status=ok
// SIG undefined FUN_1496c93b8(void)

undefined8 FUN_1496c93b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c9414 FUN_1496c9414 body=29 status=ok
// SIG undefined FUN_1496c9414(void)

undefined8 FUN_1496c9414(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c9432 FUN_1496c9432 body=127 status=ok
// SIG undefined FUN_1496c9432(void)

void FUN_1496c9432(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdcbbf0;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 1496c94b2 FUN_1496c94b2 body=199 status=ok
// SIG undefined FUN_1496c94b2(void)

undefined8 * FUN_1496c94b2(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdcbc70;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdcbc90;
  param_1[7] = param_2;
  param_1[2] = &LAB_1496c96a6;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdcbcb0;
  param_1[0x17] = &LAB_1496c96f4;
  param_1[0x12] = &LAB_1496c96fc;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1496c957a FUN_1496c957a body=38 status=ok
// SIG undefined FUN_1496c957a(void)

undefined8 FUN_1496c957a(undefined8 param_1,int param_2)

{
  FUN_1496c9750();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c95a0 FUN_1496c95a0 body=207 status=ok
// SIG undefined FUN_1496c95a0(void)

void FUN_1496c95a0(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_1496c9651;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_1496c9651:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c9670 FUN_1496c9670 body=53 status=ok
// SIG undefined FUN_1496c9670(void)

void FUN_1496c9670(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 1496c96d6 FUN_1496c96d6 body=29 status=ok
// SIG undefined FUN_1496c96d6(void)

undefined8 FUN_1496c96d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c9732 FUN_1496c9732 body=29 status=ok
// SIG undefined FUN_1496c9732(void)

undefined8 FUN_1496c9732(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c9750 FUN_1496c9750 body=127 status=ok
// SIG undefined FUN_1496c9750(void)

void FUN_1496c9750(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdcbc70;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 1496c97d0 FUN_1496c97d0 body=199 status=ok
// SIG undefined FUN_1496c97d0(void)

undefined8 * FUN_1496c97d0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdcbe10;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdcbe30;
  param_1[7] = param_2;
  param_1[2] = &LAB_1496c99c4;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdcbe50;
  param_1[0x17] = &LAB_1496c9a12;
  param_1[0x12] = &LAB_1496c9a1a;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1496c9898 FUN_1496c9898 body=38 status=ok
// SIG undefined FUN_1496c9898(void)

undefined8 FUN_1496c9898(undefined8 param_1,int param_2)

{
  FUN_1496c9a6e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c98be FUN_1496c98be body=207 status=ok
// SIG undefined FUN_1496c98be(void)

void FUN_1496c98be(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_1496c996f;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_1496c996f:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c998e FUN_1496c998e body=53 status=ok
// SIG undefined FUN_1496c998e(void)

void FUN_1496c998e(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 1496c99f4 FUN_1496c99f4 body=29 status=ok
// SIG undefined FUN_1496c99f4(void)

undefined8 FUN_1496c99f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c9a50 FUN_1496c9a50 body=29 status=ok
// SIG undefined FUN_1496c9a50(void)

undefined8 FUN_1496c9a50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c9a6e FUN_1496c9a6e body=127 status=ok
// SIG undefined FUN_1496c9a6e(void)

void FUN_1496c9a6e(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdcbe10;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 1496c9aee FUN_1496c9aee body=29 status=ok
// SIG undefined FUN_1496c9aee(void)

undefined8 FUN_1496c9aee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496c9b26 FUN_1496c9b26 body=29 status=ok
// SIG undefined FUN_1496c9b26(void)

bool FUN_1496c9b26(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1496c9b44 FUN_1496c9b44 body=26 status=ok
// SIG undefined FUN_1496c9b44(void)

bool FUN_1496c9b44(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1496c9b5e FUN_1496c9b5e body=24 status=ok
// SIG undefined FUN_1496c9b5e(void)

bool FUN_1496c9b5e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1496c9b76 FUN_1496c9b76 body=101 status=ok
// SIG undefined FUN_1496c9b76(void)

void FUN_1496c9b76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcc0c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1496c9bdc FUN_1496c9bdc body=101 status=ok
// SIG undefined FUN_1496c9bdc(void)

void FUN_1496c9bdc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcc0c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1496c9c42 FUN_1496c9c42 body=134 status=ok
// SIG undefined FUN_1496c9c42(void)

void FUN_1496c9c42(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aeff220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdcc0c0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496c9cb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1496c9cc8 FUN_1496c9cc8 body=118 status=ok
// SIG undefined FUN_1496c9cc8(void)

void FUN_1496c9cc8(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  pcVar2 = *(code **)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x28);
  puVar5 = local_88;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  (*pcVar2)(iVar1 + lVar3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c9d40 FUN_1496c9d40 body=187 status=ok
// SIG undefined FUN_1496c9d40(void)

bool FUN_1496c9d40(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  longlong local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_1400841de(param_1 + 0x18,local_98);
    lVar7 = local_98[0];
  }
  else {
    lVar7 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x28);
    plVar6 = local_98;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *plVar6 = *param_3;
      param_3 = param_3 + 1;
      plVar6 = plVar6 + 1;
    }
    (*pcVar2)(iVar1 + lVar4,param_2);
  }
  if (lVar7 != 0) {
    FUN_140113f3a(lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496c9dfc FUN_1496c9dfc body=322 status=ok
// SIG undefined FUN_1496c9dfc(void)

void FUN_1496c9dfc(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 1496c9f40 FUN_1496c9f40 body=48 status=ok
// SIG undefined FUN_1496c9f40(void)

void FUN_1496c9f40(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1496c9f70 FUN_1496c9f70 body=322 status=ok
// SIG undefined FUN_1496c9f70(void)

void FUN_1496c9f70(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 1496ca0b4 FUN_1496ca0b4 body=285 status=ok
// SIG undefined FUN_1496ca0b4(void)

void FUN_1496ca0b4(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 8 + (longlong)iStack_44 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496ca1d2 FUN_1496ca1d2 body=41 status=ok
// SIG undefined FUN_1496ca1d2(void)

void FUN_1496ca1d2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1496ca290(param_1);
    param_1 = param_1 + 0x148;
  }
  return;
}



// FUNCTION 1496ca1fc FUN_1496ca1fc body=146 status=ok
// SIG undefined FUN_1496ca1fc(void)

void FUN_1496ca1fc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x148,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x148)) {
      uVar5 = uVar4 / 0x148 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x148,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1496ca290 FUN_1496ca290 body=304 status=ok
// SIG undefined FUN_1496ca290(void)

void FUN_1496ca290(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0x3ff0000000000000;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x10) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  *(undefined8 *)(param_1 + 0x14) = DAT_14c8464f0;
  uVar1 = DAT_14c846518;
  *(undefined8 *)(param_1 + 0x16) = DAT_14c846510;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x1a) = DAT_14c846520;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x28) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x24) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x26) = uVar1;
  uVar1 = DAT_14c846518;
  *(undefined8 *)(param_1 + 0x2a) = DAT_14c846510;
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  *(undefined8 *)(param_1 + 0x2e) = DAT_14c846520;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x30) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x32) = uVar1;
  *(undefined8 *)(param_1 + 0x34) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x3c) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x3e) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x40) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x42) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x44) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x46) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x48) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x4a) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x4c) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x4e) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x50) = 0xffefffffffffffff;
  return;
}



// FUNCTION 1496ca3c0 FUN_1496ca3c0 body=98 status=ok
// SIG undefined FUN_1496ca3c0(void)

void FUN_1496ca3c0(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x148 + *param_1);
  FUN_145c8cfac(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x148 + (longlong)_Dst),(longlong)iVar2 * 0x148);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1496ca422 FUN_1496ca422 body=62 status=ok
// SIG undefined FUN_1496ca422(void)

void FUN_1496ca422(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1496ca460(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x148,8);
  }
  return;
}



// FUNCTION 1496ca460 FUN_1496ca460 body=110 status=ok
// SIG undefined FUN_1496ca460(void)

ulonglong FUN_1496ca460(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x148) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1496ca499;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x148,8);
      param_2 = param_2 / 0x148;
    }
  }
LAB_1496ca499:
  return param_2 & 0xffffffff;
}


