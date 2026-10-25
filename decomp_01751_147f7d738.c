// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147f7d738 FUN_147f7d738 body=61 status=ok
// SIG undefined FUN_147f7d738(void)

void FUN_147f7d738(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acb7a60;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 147f7d776 FUN_147f7d776 body=79 status=ok
// SIG undefined FUN_147f7d776(void)

undefined8 * FUN_147f7d776(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147f7d7c6(param_1,iVar1);
      FUN_147f7d839(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f7d7c6 FUN_147f7d7c6 body=115 status=ok
// SIG undefined FUN_147f7d7c6(void)

void FUN_147f7d7c6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147f7d839 FUN_147f7d839 body=52 status=ok
// SIG undefined FUN_147f7d839(void)

void FUN_147f7d839(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147f7d86e(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 147f7d86e FUN_147f7d86e body=71 status=ok
// SIG undefined FUN_147f7d86e(void)

undefined8 * FUN_147f7d86e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 147f7d8b6 FUN_147f7d8b6 body=28 status=ok
// SIG undefined FUN_147f7d8b6(void)

undefined8 FUN_147f7d8b6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 147f7d9c6 FUN_147f7d9c6 body=59 status=ok
// SIG undefined FUN_147f7d9c6(void)

undefined8 FUN_147f7d9c6(longlong *param_1)

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



// FUNCTION 147f7da0c FUN_147f7da0c body=43 status=ok
// SIG undefined FUN_147f7da0c(void)

void FUN_147f7da0c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xc) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  return;
}



// FUNCTION 147f7da74 FUN_147f7da74 body=28 status=ok
// SIG undefined FUN_147f7da74(void)

undefined8 FUN_147f7da74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 147f7db66 FUN_147f7db66 body=59 status=ok
// SIG undefined FUN_147f7db66(void)

undefined8 FUN_147f7db66(longlong *param_1)

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



// FUNCTION 147f7dbac FUN_147f7dbac body=43 status=ok
// SIG undefined FUN_147f7dbac(void)

void FUN_147f7dbac(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 9) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 9) = 0;
  }
  return;
}



// FUNCTION 147f7dcd2 FUN_147f7dcd2 body=59 status=ok
// SIG undefined FUN_147f7dcd2(void)

undefined8 FUN_147f7dcd2(longlong *param_1)

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



// FUNCTION 147f7dd18 FUN_147f7dd18 body=43 status=ok
// SIG undefined FUN_147f7dd18(void)

void FUN_147f7dd18(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 147f7dd90 FUN_147f7dd90 body=28 status=ok
// SIG undefined FUN_147f7dd90(void)

undefined8 FUN_147f7dd90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 147f7de7e FUN_147f7de7e body=59 status=ok
// SIG undefined FUN_147f7de7e(void)

undefined8 FUN_147f7de7e(longlong *param_1)

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



// FUNCTION 147f7dec4 FUN_147f7dec4 body=43 status=ok
// SIG undefined FUN_147f7dec4(void)

void FUN_147f7dec4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 147f7df2c FUN_147f7df2c body=28 status=ok
// SIG undefined FUN_147f7df2c(void)

undefined8 FUN_147f7df2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 147f7e020 FUN_147f7e020 body=59 status=ok
// SIG undefined FUN_147f7e020(void)

undefined8 FUN_147f7e020(longlong *param_1)

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



// FUNCTION 147f7e066 FUN_147f7e066 body=43 status=ok
// SIG undefined FUN_147f7e066(void)

void FUN_147f7e066(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 147f7e0d8 FUN_147f7e0d8 body=55 status=ok
// SIG undefined FUN_147f7e0d8(void)

void FUN_147f7e0d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25758 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25758 = FUN_140002ddd(FUN_146447bb9,uVar1,L"WwiseStateDef");
  }
  return;
}



// FUNCTION 147f7e118 FUN_147f7e118 body=28 status=ok
// SIG undefined FUN_147f7e118(void)

undefined8 FUN_147f7e118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 147f7e1ae FUN_147f7e1ae body=59 status=ok
// SIG undefined FUN_147f7e1ae(void)

undefined8 FUN_147f7e1ae(longlong *param_1)

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



// FUNCTION 147f7e1f4 FUN_147f7e1f4 body=43 status=ok
// SIG undefined FUN_147f7e1f4(void)

void FUN_147f7e1f4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 147f7e33c FUN_147f7e33c body=59 status=ok
// SIG undefined FUN_147f7e33c(void)

undefined8 FUN_147f7e33c(longlong *param_1)

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



// FUNCTION 147f7e382 FUN_147f7e382 body=43 status=ok
// SIG undefined FUN_147f7e382(void)

void FUN_147f7e382(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 147f7e400 FUN_147f7e400 body=55 status=ok
// SIG undefined FUN_147f7e400(void)

void FUN_147f7e400(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb257b8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb257b8 = FUN_140002ddd(FUN_146447ca7,uVar1,L"WwiseTriggerDef");
  }
  return;
}



// FUNCTION 147f7e440 FUN_147f7e440 body=28 status=ok
// SIG undefined FUN_147f7e440(void)

undefined8 FUN_147f7e440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 147f7e46e FUN_147f7e46e body=55 status=ok
// SIG undefined FUN_147f7e46e(void)

undefined8 * FUN_147f7e46e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acb4c90;
  param_1[1] = 0;
  param_1[2] = 0xffffffffffffffff;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f7e4a6 FUN_147f7e4a6 body=111 status=ok
// SIG undefined FUN_147f7e4a6(void)

void FUN_147f7e4a6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar3 = *(undefined8 *)(param_1 + 0x2c);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  bVar5 = FUN_144904448(param_1 + 8);
  *(byte *)(param_2 + 0x60) = bVar5 ^ 1;
  if (bVar5 == 0) {
    iVar2 = *(int *)(param_2 + 0x58);
    lVar7 = (longlong)iVar2;
    *(uint *)(param_2 + 0x58) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
      FUN_14579eadc(param_2,iVar2);
    }
    lVar6 = *(longlong *)(param_2 + 0x50);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      lVar6 = param_2;
    }
    *(undefined8 *)(lVar6 + lVar7 * 0x14) = uVar4;
    *(undefined4 *)(lVar6 + 8 + lVar7 * 0x14) = uVar1;
    *(undefined8 *)(lVar6 + 0xc + lVar7 * 0x14) = uVar3;
  }
  return;
}



// FUNCTION 147f7e516 FUN_147f7e516 body=83 status=ok
// SIG undefined FUN_147f7e516(void)

undefined8 * FUN_147f7e516(undefined8 *param_1,int param_2)

{
  *param_1 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[1],1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f7e56a FUN_147f7e56a body=38 status=ok
// SIG undefined FUN_147f7e56a(void)

undefined8 FUN_147f7e56a(undefined8 param_1,int param_2)

{
  FUN_145dc94b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f7e598 FUN_147f7e598 body=45 status=ok
// SIG undefined FUN_147f7e598(void)

longlong FUN_147f7e598(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145dc94b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f7e5c6 FUN_147f7e5c6 body=174 status=ok
// SIG undefined FUN_147f7e5c6(void)

undefined8
FUN_147f7e5c6(longlong *param_1,uint param_2,undefined8 *param_3,undefined8 param_4,longlong param_5
             )

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 1;
    uVar3 = 0;
    do {
      local_68 = *(undefined4 *)param_3;
      uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_60 = *(undefined4 *)(param_3 + 1);
      uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_58 = param_3[2];
      iVar1 = (**(code **)(*param_1 + 0x48))(param_1,*param_3,&uStack_60);
      if (iVar1 != 1) {
        uVar2 = 2;
      }
      *(int *)(param_5 + uVar3 * 4) = iVar1;
      uVar3 = uVar3 + 1;
      param_3 = param_3 + 3;
    } while (param_2 != uVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147f7e676 FUN_147f7e676 body=61 status=ok
// SIG undefined FUN_147f7e676(void)

undefined8 * FUN_147f7e676(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acb4d38;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f7e6b4 FUN_147f7e6b4 body=94 status=ok
// SIG undefined FUN_147f7e6b4(void)

void FUN_147f7e6b4(uint param_1)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)(DAT_14cb25a10 + 0xabe00);
  FUN_141819ce7(_Dst,param_1);
  iVar1 = DAT_14cb25a18;
  iVar2 = DAT_14cb25a18 - (param_1 + 1000);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((ulonglong)param_1 * 0x2c0 + (longlong)_Dst),(longlong)iVar2 * 0x2c0);
  }
  DAT_14cb25a18 = iVar1 - param_1;
  return;
}



// FUNCTION 147f7e712 FUN_147f7e712 body=76 status=ok
// SIG undefined FUN_147f7e712(void)

void FUN_147f7e712(void)

{
  int iVar1;
  
  iVar1 = FUN_147f7e75e(DAT_14cb25a18,DAT_14cb25a1c);
  if (iVar1 != DAT_14cb25a1c) {
    DAT_14cb25a1c = iVar1;
    FUN_1446f8d3c(&DAT_14cb25a10,DAT_14cb25a18,iVar1,0x2c0,0x10);
  }
  return;
}



// FUNCTION 147f7e75e FUN_147f7e75e body=110 status=ok
// SIG undefined FUN_147f7e75e(void)

ulonglong FUN_147f7e75e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x2c0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147f7e797;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x2c0,0x10);
      param_2 = param_2 / 0x2c0;
    }
  }
LAB_147f7e797:
  return param_2 & 0xffffffff;
}



// FUNCTION 147f7e7cc FUN_147f7e7cc body=110 status=ok
// SIG undefined FUN_147f7e7cc(void)

void FUN_147f7e7cc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 5,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 5)) {
        uVar2 = uVar1 >> 5 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x10c)) {
    *(int *)(param_1 + 0x10c) = (int)uVar2;
    FUN_147f6fb44(param_1,*(undefined4 *)(param_1 + 0x108),uVar2,0x20);
    return;
  }
  return;
}



// FUNCTION 147f7e83a FUN_147f7e83a body=229 status=ok
// SIG undefined FUN_147f7e83a(void)

undefined8 * FUN_147f7e83a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x178);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14acb4d90;
  memset(puVar1 + 0x18,0,0x98);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 2;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x74) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x7c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x84) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x94) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x9c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xac) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xb4) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xbc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xdc) = 0xffffffff00000080;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x10d) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x115) = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[2] = &PTR_FUN_14aca4640;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  *(undefined1 *)(puVar1 + 0x2a) = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  return puVar1;
}



// FUNCTION 147f7e92a FUN_147f7e92a body=29 status=ok
// SIG undefined FUN_147f7e92a(void)

undefined8 FUN_147f7e92a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f7e948 FUN_147f7e948 body=158 status=ok
// SIG undefined FUN_147f7e948(void)

void FUN_147f7e948(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_147f7e9ba;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_147f7e9ba;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_147f7e9ba:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147f7e9da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147f7e9e6 FUN_147f7e9e6 body=96 status=ok
// SIG undefined FUN_147f7e9e6(void)

void FUN_147f7e9e6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147f7ea46 FUN_147f7ea46 body=132 status=ok
// SIG undefined FUN_147f7ea46(void)

void FUN_147f7ea46(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147f7eacc FUN_147f7eacc body=270 status=ok
// SIG undefined FUN_147f7eacc(void)

void FUN_147f7eacc(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x50))) {
    lVar1 = *(longlong *)(param_1 + 0x48) + (ulonglong)param_2 * 0x20;
    if (*(int *)(*(longlong *)(param_1 + 0x48) + 0x18 + (ulonglong)param_2 * 0x20) == -1) {
      if (-1 < *(short *)(lVar1 + 0x1c)) {
        uVar2 = FUN_147f7eacc(0,(int)*(short *)(lVar1 + 0x1c),param_3);
      }
      if (-1 < *(short *)(lVar1 + 0x1e)) {
        FUN_147f7eacc(uVar2,(int)*(short *)(lVar1 + 0x1e),param_3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
    }
    local_44 = FUN_147f7eacc(0,(int)*(short *)(lVar1 + 0x1e),param_3);
    local_48 = FUN_147f7eacc(param_1,(int)*(short *)(lVar1 + 0x1c),param_3);
    FUN_147f7ebf8(*(undefined4 *)(lVar1 + 0x18),&local_48,&local_44);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7ebf8 FUN_147f7ebf8 body=329 status=ok
// SIG undefined FUN_147f7ebf8(void)

ulonglong FUN_147f7ebf8(undefined4 param_1,float *param_2,float *param_3)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  switch(param_1) {
  case 1:
    return (ulonglong)(uint)(*param_2 * *param_3);
  case 2:
    uVar2 = -(uint)(0.0001 < *param_3);
    return (ulonglong)(~uVar2 & (uint)*param_2 | (uint)(*param_2 / *param_3) & uVar2);
  case 3:
    if (*param_3 <= 0.0001) {
      return 0;
    }
    uVar3 = FUN_1447c7e44();
    return uVar3;
  case 4:
    return (ulonglong)(uint)(*param_2 + *param_3);
  case 5:
    return (ulonglong)(uint)(*param_2 - *param_3);
  default:
    goto switchD_147f7ec14_caseD_6;
  case 8:
    uVar2 = -(uint)(*param_2 < *param_3);
    break;
  case 9:
    uVar2 = -(uint)(*param_2 <= *param_3);
    break;
  case 10:
    uVar2 = -(uint)(*param_3 < *param_2);
    break;
  case 0xb:
    uVar2 = -(uint)(*param_3 <= *param_2);
    break;
  case 0xc:
    uVar2 = -(uint)(ABS(*param_2 - *param_3) < 0.0001);
    break;
  case 0xd:
    uVar2 = -(uint)(0.0001 <= ABS(*param_2 - *param_3));
    break;
  case 0x11:
    bVar1 = 0.0001 < *param_2 && 0.0001 < *param_3;
    goto LAB_147f7ec9b;
  case 0x12:
    bVar1 = 0.0001 < *param_2 || 0.0001 < *param_3;
LAB_147f7ec9b:
    if (bVar1) {
      return 0x3f800000;
    }
switchD_147f7ec14_caseD_6:
    return 0;
  }
  return (ulonglong)(uVar2 & 0x3f800000);
}



// FUNCTION 147f7ed41 FUN_147f7ed41 body=73 status=ok
// SIG undefined FUN_147f7ed41(void)

void FUN_147f7ed41(longlong param_1,int param_2)

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



// FUNCTION 147f7ed8a FUN_147f7ed8a body=132 status=ok
// SIG undefined FUN_147f7ed8a(void)

void FUN_147f7ed8a(longlong param_1,int param_2)

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



// FUNCTION 147f7ee10 FUN_147f7ee10 body=48 status=ok
// SIG undefined FUN_147f7ee10(void)

void FUN_147f7ee10(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147f7ee40 FUN_147f7ee40 body=125 status=ok
// SIG undefined FUN_147f7ee40(void)

void FUN_147f7ee40(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x10c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 5,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 5)) {
        uVar4 = uVar2 >> 5 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x10c) = (int)uVar4;
    FUN_147f6fb44(param_1,param_2,uVar4,0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147f7eebe FUN_147f7eebe body=1 status=ok
// SIG undefined FUN_147f7eebe(void)

void FUN_147f7eebe(void)

{
  return;
}



// FUNCTION 147f7eec0 FUN_147f7eec0 body=29 status=ok
// SIG undefined FUN_147f7eec0(void)

undefined8 FUN_147f7eec0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f7eede FUN_147f7eede body=107 status=ok
// SIG undefined FUN_147f7eede(void)

void FUN_147f7eede(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147f7ef4a(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 147f7ef4a FUN_147f7ef4a body=132 status=ok
// SIG undefined FUN_147f7ef4a(void)

void FUN_147f7ef4a(longlong param_1,int param_2)

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



// FUNCTION 147f7efd0 FUN_147f7efd0 body=62 status=ok
// SIG undefined FUN_147f7efd0(void)

void FUN_147f7efd0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147f7f096(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 147f7f00e FUN_147f7f00e body=136 status=ok
// SIG undefined FUN_147f7f00e(void)

void FUN_147f7f00e(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x40);
  lVar2 = *(longlong *)(lVar1 + 0x38 + (longlong)(int)param_2 * 0x40);
  if ((lVar2 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lVar2 + 0x50));
  }
  *(undefined8 *)((longlong)_Dst + 0x20) = 0;
  *(undefined8 *)((longlong)_Dst + 0x28) = 0xffffffffffffffff;
  iVar3 = (int)param_1[1];
  iVar5 = ~param_2 + iVar3;
  if (iVar5 != 0) {
    iVar4 = 1;
    if (iVar5 < 1) {
      iVar4 = iVar5;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar3 - iVar4) * 0x40),(longlong)iVar4 << 6);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 147f7f096 FUN_147f7f096 body=93 status=ok
// SIG undefined FUN_147f7f096(void)

ulonglong FUN_147f7f096(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 147f7f0f4 FUN_147f7f0f4 body=48 status=ok
// SIG undefined FUN_147f7f0f4(void)

void FUN_147f7f0f4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 147f7f124 FUN_147f7f124 body=31 status=ok
// SIG undefined FUN_147f7f124(void)

undefined8 FUN_147f7f124(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f7f158 FUN_147f7f158 body=85 status=ok
// SIG undefined FUN_147f7f158(void)

void FUN_147f7f158(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb7b30;
  return;
}



// FUNCTION 147f7f1ae FUN_147f7f1ae body=118 status=ok
// SIG undefined FUN_147f7f1ae(void)

void FUN_147f7f1ae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb7b30;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f7f215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f7f224 FUN_147f7f224 body=26 status=ok
// SIG undefined FUN_147f7f224(void)

undefined8 FUN_147f7f224(longlong param_1,undefined8 param_2)

{
  FUN_147f7f2a8(param_1 + 0x18);
  return param_2;
}



// FUNCTION 147f7f23e FUN_147f7f23e body=105 status=ok
// SIG undefined FUN_147f7f23e(void)

undefined8 FUN_147f7f23e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147f7f2a8(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7f2a8 FUN_147f7f2a8 body=411 status=ok
// SIG undefined FUN_147f7f2a8(void)

undefined8 * FUN_147f7f2a8(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((DAT_14cb25ac0 != 0) && (DAT_14cb25ab8 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*DAT_14cb25ab8 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb25ab8;
    if (DAT_14cb25ac0 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    plVar4 = local_30;
    puVar3 = local_38;
    goto LAB_147f7f30b;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  FUN_147f7f444(puVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14acb7c50;
  plVar4[2] = (longlong)puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
    goto LAB_147f7f30b;
  }
  if (((puVar3[2] != 0) && (puVar3[3] != 0)) && (0 < *(int *)(puVar3[3] + 8))) goto LAB_147f7f30b;
  if (plVar4 == (longlong *)0x0) {
    puVar3[2] = puVar3;
    plVar5 = (longlong *)puVar3[3];
    if (plVar5 != (longlong *)0x0) {
LAB_147f7f3dd:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      puVar3[3] = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_147f7f3f1;
    }
    plVar4 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    puVar3[2] = puVar3;
    if ((longlong *)puVar3[3] != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)puVar3[3];
      if (plVar5 != (longlong *)0x0) goto LAB_147f7f3dd;
      puVar3[3] = plVar4;
    }
LAB_147f7f3f1:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_147f7f30b:
  *param_2 = puVar3;
  param_2[1] = plVar4;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147f7f444 FUN_147f7f444 body=131 status=ok
// SIG undefined FUN_147f7f444(void)

undefined8 * FUN_147f7f444(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14acb7c30;
  param_1[4] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 5) = 0;
  FUN_1405bceb4(param_1 + 4);
  FUN_1409e1656(param_1 + 6);
  *param_1 = &PTR_FUN_14acb7ba0;
  param_1[4] = &PTR_FUN_14acb7bc0;
  param_1[6] = &PTR_FUN_14acb7be0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 147f7f4c8 FUN_147f7f4c8 body=38 status=ok
// SIG undefined FUN_147f7f4c8(void)

undefined8 FUN_147f7f4c8(undefined8 param_1,int param_2)

{
  FUN_147f7f580();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f7f4ee FUN_147f7f4ee body=45 status=ok
// SIG undefined FUN_147f7f4ee(void)

longlong FUN_147f7f4ee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_147f7f580(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f7f51c FUN_147f7f51c body=45 status=ok
// SIG undefined FUN_147f7f51c(void)

longlong FUN_147f7f51c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_147f7f580(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f7f54a FUN_147f7f54a body=54 status=ok
// SIG undefined FUN_147f7f54a(void)

longlong FUN_147f7f54a(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f7f580 FUN_147f7f580 body=155 status=ok
// SIG undefined FUN_147f7f580(void)

void FUN_147f7f580(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14acb7ba0;
  param_1[4] = &PTR_FUN_14acb7bc0;
  param_1[6] = &PTR_FUN_14acb7be0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_147f7ed41(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 6);
  param_1[4] = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147f7f60e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147f7f61c FUN_147f7f61c body=24 status=ok
// SIG undefined FUN_147f7f61c(void)

void FUN_147f7f61c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f7f630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147f7f634 FUN_147f7f634 body=29 status=ok
// SIG undefined FUN_147f7f634(void)

undefined8 FUN_147f7f634(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f7f652 FUN_147f7f652 body=112 status=ok
// SIG undefined FUN_147f7f652(void)

void FUN_147f7f652(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 147f7f6c2 FUN_147f7f6c2 body=147 status=ok
// SIG undefined FUN_147f7f6c2(void)

void FUN_147f7f6c2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147f7f756 FUN_147f7f756 body=270 status=ok
// SIG undefined FUN_147f7f756(void)

void FUN_147f7f756(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x50))) {
    lVar1 = *(longlong *)(param_1 + 0x48) + (ulonglong)param_2 * 0x20;
    if (*(int *)(*(longlong *)(param_1 + 0x48) + 0x18 + (ulonglong)param_2 * 0x20) == -1) {
      if (-1 < *(short *)(lVar1 + 0x1c)) {
        uVar2 = FUN_147f7f756(0,(int)*(short *)(lVar1 + 0x1c),param_3);
      }
      if (-1 < *(short *)(lVar1 + 0x1e)) {
        FUN_147f7f756(uVar2,(int)*(short *)(lVar1 + 0x1e),param_3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
    local_48 = FUN_147f7f756(0,(int)*(short *)(lVar1 + 0x1e),param_3);
    local_50 = FUN_147f7f756(param_1,(int)*(short *)(lVar1 + 0x1c),param_3);
    FUN_147f7f882(*(undefined4 *)(lVar1 + 0x18),&local_50,&local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7f882 FUN_147f7f882 body=347 status=ok
// SIG undefined FUN_147f7f882(void)

double FUN_147f7f882(undefined4 param_1,double *param_2,double *param_3)

{
  bool bVar1;
  ulonglong uVar2;
  double dVar3;
  
  switch(param_1) {
  case 1:
    return *param_2 * *param_3;
  case 2:
    uVar2 = -(ulonglong)(9.999999747378752e-05 < *param_3);
    return (double)(~uVar2 & (ulonglong)*param_2 | (ulonglong)(*param_2 / *param_3) & uVar2);
  case 3:
    if (*param_3 <= 9.999999747378752e-05) {
      return 0.0;
    }
    dVar3 = (double)FUN_144719204(*param_2);
    return dVar3;
  case 4:
    return *param_2 + *param_3;
  case 5:
    return *param_2 - *param_3;
  default:
    goto switchD_147f7f89f_caseD_6;
  case 8:
    uVar2 = -(ulonglong)(*param_2 < *param_3);
    break;
  case 9:
    uVar2 = -(ulonglong)(*param_2 <= *param_3);
    break;
  case 10:
    uVar2 = -(ulonglong)(*param_3 < *param_2);
    break;
  case 0xb:
    uVar2 = -(ulonglong)(*param_3 <= *param_2);
    break;
  case 0xc:
    uVar2 = -(ulonglong)(ABS(*param_2 - *param_3) < 9.999999747378752e-05);
    break;
  case 0xd:
    uVar2 = -(ulonglong)(9.999999747378752e-05 <= ABS(*param_2 - *param_3));
    break;
  case 0x11:
    bVar1 = 9.999999747378752e-05 < *param_2 && 9.999999747378752e-05 < *param_3;
    goto LAB_147f7f92f;
  case 0x12:
    bVar1 = 9.999999747378752e-05 < *param_2 || 9.999999747378752e-05 < *param_3;
LAB_147f7f92f:
    if (bVar1) {
      return 1.0;
    }
switchD_147f7f89f_caseD_6:
    return 0.0;
  }
  return (double)(uVar2 & 0x3ff0000000000000);
}



// FUNCTION 147f7f9de FUN_147f7f9de body=186 status=ok
// SIG undefined FUN_147f7f9de(void)

undefined8 FUN_147f7f9de(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  uint *puVar7;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  plVar3 = (longlong *)FUN_140633c48(param_1,&local_28);
  if (plVar3 != (longlong *)0x0) {
    iVar2 = FUN_140b132ac(plVar3,param_3);
    if ((0 < iVar2) && ((int)plVar3[9] != 0)) {
      plVar5 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar3[8];
      }
      puVar7 = (uint *)((longlong)plVar5 + (longlong)(int)((int)plVar3[9] - 1U & param_3) * 4);
      uVar4 = 0;
      do {
        lVar6 = (longlong)(int)*puVar7;
        if (lVar6 == -1) goto LAB_147f7fa7a;
        puVar1 = (uint *)(*plVar3 + lVar6 * 0x18);
        puVar7 = puVar1 + 4;
      } while (*puVar1 != param_3);
      uVar4 = *(undefined8 *)(*plVar3 + 8 + lVar6 * 0x18);
      goto LAB_147f7fa7a;
    }
  }
  uVar4 = 0;
LAB_147f7fa7a:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7fabc FUN_147f7fabc body=93 status=ok
// SIG undefined FUN_147f7fabc(void)

void FUN_147f7fabc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acb7d20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb7cb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147f7fb1a FUN_147f7fb1a body=126 status=ok
// SIG undefined FUN_147f7fb1a(void)

void FUN_147f7fb1a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14acb7d20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb7cb0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f7fb89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f7fba8 FUN_147f7fba8 body=31 status=ok
// SIG undefined FUN_147f7fba8(void)

undefined8 FUN_147f7fba8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f7fbe4 FUN_147f7fbe4 body=93 status=ok
// SIG undefined FUN_147f7fbe4(void)

void FUN_147f7fbe4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb51f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f7fc42 FUN_147f7fc42 body=93 status=ok
// SIG undefined FUN_147f7fc42(void)

void FUN_147f7fc42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb51f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f7fca0 FUN_147f7fca0 body=126 status=ok
// SIG undefined FUN_147f7fca0(void)

void FUN_147f7fca0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb51f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f7fd0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f7fd2a FUN_147f7fd2a body=21 status=ok
// SIG undefined FUN_147f7fd2a(void)

undefined8 FUN_147f7fd2a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147f7fd40 FUN_147f7fd40 body=56 status=ok
// SIG undefined FUN_147f7fd40(void)

void FUN_147f7fd40(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 147f7fd78 FUN_147f7fd78 body=119 status=ok
// SIG undefined FUN_147f7fd78(void)

void FUN_147f7fd78(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_147f7fdf0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147f7fdf0 FUN_147f7fdf0 body=141 status=ok
// SIG undefined FUN_147f7fdf0(void)

void FUN_147f7fdf0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x10);
  return;
}



// FUNCTION 147f7fe7e FUN_147f7fe7e body=132 status=ok
// SIG undefined FUN_147f7fe7e(void)

void FUN_147f7fe7e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147f7ff04 FUN_147f7ff04 body=128 status=ok
// SIG undefined FUN_147f7ff04(void)

void FUN_147f7ff04(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 0x10;
    } while (lVar5 << 4 != uVar4);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147f7ff84(param_1,iVar1);
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + lVar5 * 0x10) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(lVar3 + 8 + lVar5 * 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147f7ff84 FUN_147f7ff84 body=132 status=ok
// SIG undefined FUN_147f7ff84(void)

void FUN_147f7ff84(longlong param_1,int param_2)

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



// FUNCTION 147f8000a FUN_147f8000a body=263 status=ok
// SIG undefined FUN_147f8000a(void)

void FUN_147f8000a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar12 = 0;
    bVar7 = *plVar2 == *(longlong *)*param_2;
    iVar4 = 0;
    do {
      lVar10 = (longlong)iVar4;
      iVar8 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar8 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar5 = iVar4;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar6 = iVar8;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar5 = iVar5 + 1;
        plVar9 = plVar9 + 2;
        iVar6 = iVar5;
      } while (bVar7 == (lVar3 == *(longlong *)*param_2));
      iVar8 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar12 != iVar4) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar12 = iVar12 + iVar8;
      }
      else {
        FUN_145af76ba(plVar2 + lVar10 * 2,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 147f80112 FUN_147f80112 body=88 status=ok
// SIG undefined FUN_147f80112(void)

void FUN_147f80112(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 7,0);
    uVar1 = (uint)(uVar2 >> 7);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x94)) {
    return;
  }
  *(uint *)(param_1 + 0x94) = uVar3;
  FUN_14008a080(param_1,*(undefined4 *)(param_1 + 0x90),uVar3);
  return;
}



// FUNCTION 147f8016a FUN_147f8016a body=56 status=ok
// SIG undefined FUN_147f8016a(void)

void FUN_147f8016a(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 0x108);
    *piVar1 = *piVar1 + -1;
    FUN_140d274d8();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147f801a2 FUN_147f801a2 body=284 status=ok
// SIG undefined FUN_147f801a2(void)

undefined4 * FUN_147f801a2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147f802c0(param_1,local_48);
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar2 = FUN_147f803a6(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[5] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147f80498(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f802c0 FUN_147f802c0 body=230 status=ok
// SIG undefined FUN_147f802c0(void)

int * FUN_147f802c0(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 147f803a6 FUN_147f803a6 body=128 status=ok
// SIG undefined FUN_147f803a6(void)

undefined8 FUN_147f803a6(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147f80426(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147f80426 FUN_147f80426 body=114 status=ok
// SIG undefined FUN_147f80426(void)

void FUN_147f80426(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 147f80498 FUN_147f80498 body=419 status=ok
// SIG undefined FUN_147f80498(void)

void FUN_147f80498(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 147f8063c FUN_147f8063c body=81 status=ok
// SIG undefined FUN_147f8063c(void)

void FUN_147f8063c(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_147f8068e(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147f8068e FUN_147f8068e body=87 status=ok
// SIG undefined FUN_147f8068e(void)

void FUN_147f8068e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_147f80426();
  return;
}



// FUNCTION 147f806e6 FUN_147f806e6 body=48 status=ok
// SIG undefined FUN_147f806e6(void)

void FUN_147f806e6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,1,1);
  }
  return;
}



// FUNCTION 147f80716 FUN_147f80716 body=62 status=ok
// SIG undefined FUN_147f80716(void)

void FUN_147f80716(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147f80754(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147f80754 FUN_147f80754 body=93 status=ok
// SIG undefined FUN_147f80754(void)

ulonglong FUN_147f80754(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147f807b2 FUN_147f807b2 body=64 status=ok
// SIG undefined FUN_147f807b2(void)

void FUN_147f807b2(void)

{
  if (DAT_14cb25a0c != 0) {
    DAT_14cb25a0c = 0;
    FUN_1446f8d3c(&DAT_14cb25a00,DAT_14cb25a08,0,0x30,8);
  }
  return;
}



// FUNCTION 147f807f2 FUN_147f807f2 body=373 status=ok
// SIG undefined FUN_147f807f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f807f2(void)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14cb259b8;
  if (DAT_14cb259c0 != (undefined *)0x0) {
    puVar5 = DAT_14cb259c0;
  }
  iVar4 = DAT_14cb259c8 + 3;
  if (-1 < DAT_14cb259c8) {
    iVar4 = DAT_14cb259c8;
  }
  if (DAT_14cb25988 - _DAT_14cb259b4 < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14cb25990;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14cb259a8 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14cb259a8;
    }
    local_78 = &DAT_14cb25980;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14cb25990)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar3 * 0x20) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14cb25980 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14cb25990 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14cb259c8) {
      lVar2 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar2 * 4) = 0xffffffff;
        lVar2 = lVar2 + 1;
      } while (lVar2 < DAT_14cb259c8);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f80968 FUN_147f80968 body=38 status=ok
// SIG undefined FUN_147f80968(void)

undefined8 FUN_147f80968(undefined8 param_1,int param_2)

{
  FUN_140188a38();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f8098e FUN_147f8098e body=224 status=ok
// SIG undefined FUN_147f8098e(void)

void FUN_147f8098e(longlong param_1,longlong param_2,byte param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x18);
    plVar7 = plVar6 + (longlong)*(int *)(param_1 + 0x20) * 2;
    do {
      plVar2 = (longlong *)*plVar6;
      plVar3 = (longlong *)plVar6[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) &&
         ((plVar2[1] != *(longlong *)(param_2 + 0x10) & (param_3 ^ 1)) == 0)) {
        LOCK();
        lVar5 = plVar2[2];
        *(int *)(plVar2 + 2) = 1;
        UNLOCK();
        if ((int)lVar5 == 0) {
          plVar4 = (longlong *)*plVar2;
          if (*(char *)((longlong)plVar4 + 0x53) == '\0') {
            *(undefined1 *)((longlong)plVar4 + 0x53) = 1;
            *(undefined1 *)(plVar4 + 10) = 1;
            if (*(char *)((longlong)plVar4 + 0x51) == '\0') {
              (**(code **)(*plVar4 + 0x18))();
            }
          }
          if ((code *)plVar2[6] != (code *)0x0) {
            (*(code *)plVar2[6])(plVar2 + 3,1);
          }
        }
      }
      if (plVar3 != (longlong *)0x0) {
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
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar7);
  }
  return;
}



// FUNCTION 147f80a6e FUN_147f80a6e body=35 status=ok
// SIG undefined FUN_147f80a6e(void)

void FUN_147f80a6e(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14acb5340;
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f80a8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147f80a92 FUN_147f80a92 body=29 status=ok
// SIG undefined FUN_147f80a92(void)

undefined8 FUN_147f80a92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f80ab0 FUN_147f80ab0 body=62 status=ok
// SIG undefined FUN_147f80ab0(void)

undefined8 * FUN_147f80ab0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14acb5340;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f80aee FUN_147f80aee body=85 status=ok
// SIG undefined FUN_147f80aee(void)

undefined8 FUN_147f80aee(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),*param_2);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                    (*(longlong **)(param_1 + 0x10),param_2[2],*(undefined4 *)(param_2 + 1));
  uVar2 = 2;
  if (cVar1 != '\0') {
    uVar2 = 1;
    if ((code *)param_2[3] != (code *)0x0) {
      (*(code *)param_2[3])(param_2,1);
    }
  }
  return uVar2;
}



// FUNCTION 147f80b46 FUN_147f80b46 body=48 status=ok
// SIG undefined FUN_147f80b46(void)

void FUN_147f80b46(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147f80b76 FUN_147f80b76 body=31 status=ok
// SIG undefined FUN_147f80b76(void)

undefined8 FUN_147f80b76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f80bb2 FUN_147f80bb2 body=93 status=ok
// SIG undefined FUN_147f80bb2(void)

void FUN_147f80bb2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb5360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f80c10 FUN_147f80c10 body=126 status=ok
// SIG undefined FUN_147f80c10(void)

void FUN_147f80c10(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb5360;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f80c7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f80c8e FUN_147f80c8e body=21 status=ok
// SIG undefined FUN_147f80c8e(void)

undefined8 FUN_147f80c8e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147f80ca4 FUN_147f80ca4 body=31 status=ok
// SIG undefined FUN_147f80ca4(void)

undefined8 FUN_147f80ca4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f80cdc FUN_147f80cdc body=93 status=ok
// SIG undefined FUN_147f80cdc(void)

void FUN_147f80cdc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb5410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f80d3a FUN_147f80d3a body=126 status=ok
// SIG undefined FUN_147f80d3a(void)

void FUN_147f80d3a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb5410;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f80da9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f80db8 FUN_147f80db8 body=21 status=ok
// SIG undefined FUN_147f80db8(void)

undefined8 FUN_147f80db8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147f80dce FUN_147f80dce body=31 status=ok
// SIG undefined FUN_147f80dce(void)

undefined8 FUN_147f80dce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f80e06 FUN_147f80e06 body=93 status=ok
// SIG undefined FUN_147f80e06(void)

void FUN_147f80e06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb5480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f80e64 FUN_147f80e64 body=93 status=ok
// SIG undefined FUN_147f80e64(void)

void FUN_147f80e64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb5480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f80ec2 FUN_147f80ec2 body=126 status=ok
// SIG undefined FUN_147f80ec2(void)

void FUN_147f80ec2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8660;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb5480;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f80f31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f80f4e FUN_147f80f4e body=31 status=ok
// SIG undefined FUN_147f80f4e(void)

undefined8 FUN_147f80f4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f80f8a FUN_147f80f8a body=93 status=ok
// SIG undefined FUN_147f80f8a(void)

void FUN_147f80f8a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb54f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f80fe8 FUN_147f80fe8 body=93 status=ok
// SIG undefined FUN_147f80fe8(void)

void FUN_147f80fe8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb54f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f81046 FUN_147f81046 body=126 status=ok
// SIG undefined FUN_147f81046(void)

void FUN_147f81046(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb54f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f810b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f810d0 FUN_147f810d0 body=31 status=ok
// SIG undefined FUN_147f810d0(void)

undefined8 FUN_147f810d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f81100 FUN_147f81100 body=93 status=ok
// SIG undefined FUN_147f81100(void)

void FUN_147f81100(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb5560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f8115e FUN_147f8115e body=93 status=ok
// SIG undefined FUN_147f8115e(void)

void FUN_147f8115e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb5560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f811bc FUN_147f811bc body=126 status=ok
// SIG undefined FUN_147f811bc(void)

void FUN_147f811bc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb5560;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f8122b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f81248 FUN_147f81248 body=138 status=ok
// SIG undefined FUN_147f81248(void)

void FUN_147f81248(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147f812d2 FUN_147f812d2 body=48 status=ok
// SIG undefined FUN_147f812d2(void)

void FUN_147f812d2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147f81302 FUN_147f81302 body=48 status=ok
// SIG undefined FUN_147f81302(void)

void FUN_147f81302(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 147f81332 FUN_147f81332 body=49 status=ok
// SIG undefined FUN_147f81332(void)

void FUN_147f81332(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_141083022(&DAT_14cb25b38);
  memset(_Dst,0,0x148);
  FUN_141355748(_Dst);
  return;
}



// FUNCTION 147f81364 FUN_147f81364 body=44 status=ok
// SIG undefined FUN_147f81364(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f81364(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb25b44 = _DAT_14cb25b44 + -1;
  *param_1 = DAT_14cb25b38;
  DAT_14cb25b38 = param_1;
  return;
}



// FUNCTION 147f81390 FUN_147f81390 body=44 status=ok
// SIG undefined FUN_147f81390(void)

void FUN_147f81390(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1,0,0x148);
  FUN_141355748(param_1);
  return;
}



// FUNCTION 147f813bc FUN_147f813bc body=109 status=ok
// SIG undefined FUN_147f813bc(void)

void FUN_147f813bc(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_140521208();
    *(undefined8 *)(param_1 + 0x118) = 0;
    plVar3 = *(longlong **)(param_1 + 0x120);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x120) = 0;
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
  FUN_141302ef4(param_1,param_2);
  return;
}



// FUNCTION 147f8142a FUN_147f8142a body=299 status=ok
// SIG undefined FUN_147f8142a(void)

longlong * FUN_147f8142a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar5 == 0) {
    if (*(longlong *)(param_1 + -0x68) == 0) {
      lVar5 = 0;
    }
    else {
      uVar4 = FUN_1447210f0();
      local_50 = 0;
      local_48 = 0xaaad1010;
      local_40 = 0;
      local_58 = 1;
      FUN_14078bff4(&local_38,&local_50,param_1,uVar4);
      plVar1 = local_30;
      if ((longlong *)(param_1 + 8) != &local_38) {
        *(longlong *)(param_1 + 8) = local_38;
        local_38 = 0;
        plVar3 = *(longlong **)(param_1 + 0x10);
        if (local_30 != plVar3) {
          local_30 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x10) = plVar1;
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
      }
      plVar1 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_30 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      lVar5 = *(longlong *)(param_1 + 8);
    }
  }
  *param_2 = lVar5;
  lVar5 = *(longlong *)(param_1 + 0x10);
  param_2[1] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8155a FUN_147f8155a body=74 status=ok
// SIG undefined FUN_147f8155a(void)

undefined8 * FUN_147f8155a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((*(longlong *)(param_1 + -0x68) == 0) ||
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + -0x68) + 0x1c8), plVar1 == (longlong *)0x0)) {
    puVar3 = &DAT_14c846480;
    puVar4 = param_2;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  else {
    (**(code **)(*plVar1 + 0x4a8))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 147f815aa FUN_147f815aa body=175 status=ok
// SIG undefined FUN_147f815aa(void)

undefined8 FUN_147f815aa(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + -0x68) == 0) {
    FUN_140002266(param_2,L"%s (SequencerComponent)",&DAT_149dfb77a);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  local_20 = *(undefined8 *)(*(longlong *)(param_1 + -0x68) + 0x18);
  FUN_1400021e4(&local_20,&local_30);
  puVar1 = local_30;
  if (local_28 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"%s (SequencerComponent)",puVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f81676 FUN_147f81676 body=121 status=ok
// SIG undefined FUN_147f81676(void)

undefined8 *
FUN_147f81676(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_14081cebe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      (**(code **)(*plVar1 + 0x4a8))(plVar1,param_2,param_3,param_4);
      return param_2;
    }
  }
  puVar3 = &DAT_14c846480;
  puVar4 = param_2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_2;
}



// FUNCTION 147f816f0 FUN_147f816f0 body=32 status=ok
// SIG undefined FUN_147f816f0(void)

undefined8 FUN_147f816f0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"AudioEditorPreview");
  return param_2;
}



// FUNCTION 147f81710 FUN_147f81710 body=374 status=ok
// SIG undefined FUN_147f81710(void)

undefined8 * FUN_147f81710(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_4 != 0 && (param_3 != 0 && param_2 != 0)) {
    FUN_14026e798(&local_40,param_3);
    bVar3 = true;
    if ((local_40 != 0) && (FUN_147f7a8f8(&local_50,param_2), local_48 != (longlong *)0x0)) {
      iVar5 = (int)local_48[1];
      do {
        if (iVar5 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_48[1];
        bVar7 = iVar5 == iVar4;
        if (bVar7) {
          *(int *)(local_48 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
        plVar6 = local_48;
      } while (!bVar7);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      if (plVar6 != (longlong *)0x0) {
        if (local_50 == 0) {
          LOCK();
          plVar2 = plVar6 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        else {
          local_60 = local_40;
          local_58 = local_38;
          if (local_38 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_38 + 1) = (int)local_38[1] + 1;
            UNLOCK();
          }
          FUN_147f77e3c(local_50,param_1,param_4,&local_60);
          LOCK();
          plVar2 = plVar6 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
          bVar3 = false;
        }
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_38 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
    if (!bVar3) goto LAB_147f81795;
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_147f81795:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147f8189a FUN_147f8189a body=70 status=ok
// SIG undefined FUN_147f8189a(void)

void FUN_147f8189a(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = (longlong)*(int *)(param_1 + 0x68);
  if (0 < lVar1) {
    uVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x18;
    do {
      lVar1 = lVar1 + -0x18;
      FUN_14072d42a(*(longlong *)(param_1 + 0x60) + lVar1,0);
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  return;
}



// FUNCTION 147f818e0 FUN_147f818e0 body=245 status=ok
// SIG undefined FUN_147f818e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_147f818e0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 in_stack_00000028;
  undefined8 in_stack_00000030;
  double in_stack_00000038;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  double local_38;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14cb262b8 == '\x01') && (*param_1 != 0)) {
    auVar6._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
    auVar6._0_8_ = DAT_14cb262c8;
    auVar6._12_4_ = 0x45300000;
    dVar5 = (((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
            (auVar6._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0;
    if (dVar5 <= in_stack_00000038) {
      local_38 = in_stack_00000038 - dVar5;
      local_28 = *param_1;
      local_20 = param_1[1];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      local_40 = in_stack_00000030;
      local_48 = in_stack_00000028;
      FUN_1407f1161(&local_28);
      uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      goto LAB_147f81940;
    }
  }
  uVar4 = 0;
LAB_147f81940:
  plVar3 = (longlong *)param_1[1];
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f819d6 FUN_147f819d6 body=223 status=ok
// SIG undefined FUN_147f819d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f819d6(double *param_1,double param_2,double param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[3] = (double)(-(ulonglong)(0.0 <= param_3) & (ulonglong)param_3);
  param_1[2] = (double)(~-(ulonglong)(9.999999747378752e-05 < param_2) & 0x3ff0000000000000 |
                       (ulonglong)(param_2 / 60.0) & -(ulonglong)(9.999999747378752e-05 < param_2));
  auVar1._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
  auVar1._0_8_ = DAT_14cb262c8;
  auVar1._12_4_ = 0x45300000;
  param_1[1] = ((((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
                (auVar1._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0 - *param_1) * param_1[2] +
               param_1[1];
  auVar2._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
  auVar2._0_8_ = DAT_14cb262c8;
  auVar2._12_4_ = 0x45300000;
  *param_1 = (((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
             (auVar2._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0;
  auVar3._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
  auVar3._0_8_ = DAT_14cb262c8;
  auVar3._12_4_ = 0x45300000;
  *param_1 = (((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
             (auVar3._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0;
  param_1[1] = 0.0;
  return;
}



// FUNCTION 147f81ab6 FUN_147f81ab6 body=19 status=ok
// SIG undefined FUN_147f81ab6(void)

void FUN_147f81ab6(longlong param_1,double param_2)

{
  *(ulonglong *)(param_1 + 0x18) = -(ulonglong)(0.0 <= param_2) & (ulonglong)param_2;
  return;
}



// FUNCTION 147f81aca FUN_147f81aca body=150 status=ok
// SIG undefined FUN_147f81aca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f81aca(double *param_1,double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  param_1[2] = (double)(~-(ulonglong)(9.999999747378752e-05 < param_2) & 0x3ff0000000000000 |
                       (ulonglong)(param_2 / 60.0) & -(ulonglong)(9.999999747378752e-05 < param_2));
  auVar1._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
  auVar1._0_8_ = DAT_14cb262c8;
  auVar1._12_4_ = 0x45300000;
  param_1[1] = ((((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
                (auVar1._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0 - *param_1) * param_1[2] +
               param_1[1];
  auVar2._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
  auVar2._0_8_ = DAT_14cb262c8;
  auVar2._12_4_ = 0x45300000;
  *param_1 = (((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
             (auVar2._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0;
  return;
}



// FUNCTION 147f81b60 FUN_147f81b60 body=53 status=ok
// SIG undefined FUN_147f81b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f81b60(double *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
  auVar1._0_8_ = DAT_14cb262c8;
  auVar1._12_4_ = 0x45300000;
  *param_1 = (((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
             (auVar1._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0;
  param_1[1] = 0.0;
  return;
}



// FUNCTION 147f81b96 FUN_147f81b96 body=55 status=ok
// SIG undefined FUN_147f81b96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_147f81b96(double *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
  auVar1._0_8_ = DAT_14cb262c8;
  auVar1._12_4_ = 0x45300000;
  return ((((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
          (auVar1._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0 - *param_1) * param_1[2] +
         param_1[1];
}



// FUNCTION 147f81bce FUN_147f81bce body=5 status=ok
// SIG undefined FUN_147f81bce(void)

void FUN_147f81bce(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



// FUNCTION 147f81bd4 FUN_147f81bd4 body=19 status=ok
// SIG undefined FUN_147f81bd4(void)

double FUN_147f81bd4(double *param_1,double param_2)

{
  return (param_2 - param_1[1]) / param_1[2] + *param_1;
}



// FUNCTION 147f81be8 FUN_147f81be8 body=24 status=ok
// SIG undefined FUN_147f81be8(void)

double FUN_147f81be8(double *param_1,double param_2)

{
  return (param_2 - param_1[1]) / param_1[2] + *param_1 + param_1[3];
}



// FUNCTION 147f81c00 FUN_147f81c00 body=184 status=ok
// SIG undefined FUN_147f81c00(void)

undefined8 * FUN_147f81c00(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  local_58[0] = *(longlong *)(param_1 + 0x158);
  FUN_1400021e4(local_58,local_48);
  FUN_140056680(local_58,&DAT_149e0635c);
  FUN_1407cdba6(local_48,local_58,local_38,param_2);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f81cba FUN_147f81cba body=102 status=ok
// SIG undefined FUN_147f81cba(void)

void FUN_147f81cba(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20;
  int local_1c;
  undefined1 local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1438aadd4();
  local_14 = FUN_1438aaf64(param_1);
  local_1c = *(int *)((longlong)param_1 + 0x9c);
  local_14 = local_14 + local_1c;
  local_20 = 1;
  local_18 = 0;
  (**(code **)(*param_1 + 0x2a0))(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f81d22 FUN_147f81d22 body=115 status=ok
// SIG undefined FUN_147f81d22(void)

undefined8 * FUN_147f81d22(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  
  if (param_3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c();
  }
  bVar1 = DAT_14c950c29;
  *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 3;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = &PTR_FUN_14acb1180;
  param_2[4] = param_3;
  if ((param_3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  return param_2;
}



// FUNCTION 147f81d96 FUN_147f81d96 body=75 status=ok
// SIG undefined FUN_147f81d96(void)

bool FUN_147f81d96(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_147f81dca;
    }
  }
  lVar2 = 0;
LAB_147f81dca:
  lVar1 = FUN_1459943da();
  return lVar2 == lVar1;
}



// FUNCTION 147f81de2 FUN_147f81de2 body=62 status=ok
// SIG undefined FUN_147f81de2(void)

void FUN_147f81de2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459943da();
  FUN_147f81e20(param_1,uVar1,0,8,0,0,0,0);
  return;
}



// FUNCTION 147f81e20 FUN_147f81e20 body=236 status=ok
// SIG undefined FUN_147f81e20(void)

undefined8
FUN_147f81e20(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_d8,param_2);
  local_b0 = param_5;
  local_b8 = param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d0 = param_1;
  local_c8 = param_3;
  local_c0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f81f0e FUN_147f81f0e body=120 status=ok
// SIG undefined FUN_147f81f0e(void)

undefined8 * FUN_147f81f0e(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb26318) {
    FUN_144b3d300(&DAT_14cb26318);
    if (DAT_14cb26318 == -1) {
      FUN_1446ddc76(&DAT_14cb26310,"WWise Track",1);
      _Init_thread_footer(&DAT_14cb26318);
    }
  }
  *param_2 = DAT_14cb26310;
  return param_2;
}



// FUNCTION 147f81f86 FUN_147f81f86 body=184 status=ok
// SIG undefined FUN_147f81f86(void)

undefined8 * FUN_147f81f86(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined8 local_50;
  longlong local_48 [2];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[0] = 0;
  local_38[1] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  local_50 = *(undefined8 *)(param_1 + 0xf8);
  FUN_1400021e4(&local_50,local_48);
  FUN_140056680(local_60,&DAT_149e0635c);
  FUN_1407cdba6(local_48,local_60,local_38,param_2);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f82040 FUN_147f82040 body=422 status=ok
// SIG undefined FUN_147f82040(void)

undefined8 FUN_147f82040(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_28 = 0x100000000;
  FUN_140f937a0(&local_48,param_1 + 0x118);
  local_50 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_50[1] = (longlong)&DAT_100000001;
  *local_50 = (longlong)&PTR_FUN_14a492060;
  local_58 = local_50 + 2;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 2;
  if (local_30 == 0) {
    local_50[9] = local_38;
    *(undefined4 *)(local_50 + 7) = local_48;
    *(undefined4 *)((longlong)local_50 + 0x3c) = uStack_44;
    *(undefined4 *)(local_50 + 8) = uStack_40;
    *(undefined4 *)((longlong)local_50 + 0x44) = uStack_3c;
  }
  local_50[10] = local_30;
  local_30 = 0;
  *(undefined4 *)(local_50 + 0xb) = (undefined4)local_28;
  *(undefined4 *)((longlong)local_50 + 0x5c) = local_28._4_4_;
  local_28 = 0x100000000;
  FUN_140aec6f8(&local_58);
  plVar1 = local_50;
  if (local_50 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_58;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (plVar4 == (longlong *)0x0) goto LAB_147f82195;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_147f8215f:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_147f82195;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_58;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (local_50 != plVar4) {
      *(longlong **)(param_1 + 0xe8) = local_50;
      if (plVar4 == (longlong *)0x0) goto LAB_147f82195;
      goto LAB_147f8215f;
    }
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147f82195;
    (**(code **)*local_50)(local_50);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_147f82195:
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1404dbc0c(&local_48);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f821f4 FUN_147f821f4 body=667 status=ok
// SIG undefined FUN_147f821f4(void)

void FUN_147f821f4(void)

{
  longlong *plVar1;
  int iVar2;
  undefined **ppuVar3;
  longlong lVar4;
  longlong *in_stack_00000028;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong lStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined5 local_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_118 = (undefined4)in_stack_00000028[0x24];
  local_128 = in_stack_00000028[0x22];
  lStack_120 = in_stack_00000028[0x23];
  uStack_114 = (undefined4)*(undefined8 *)((longlong)in_stack_00000028 + 0x124);
  uStack_110 = (undefined4)((ulonglong)*(undefined8 *)((longlong)in_stack_00000028 + 0x124) >> 0x20)
  ;
  uStack_10c = (undefined4)*(undefined8 *)((longlong)in_stack_00000028 + 300);
  uStack_108 = (undefined4)((ulonglong)*(undefined8 *)((longlong)in_stack_00000028 + 300) >> 0x20);
  local_100 = (undefined4)in_stack_00000028[0x27];
  uStack_fc = *(undefined4 *)((longlong)in_stack_00000028 + 0x13c);
  uStack_f8 = (undefined4)in_stack_00000028[0x28];
  uStack_f4 = *(undefined4 *)((longlong)in_stack_00000028 + 0x144);
  local_f0 = (undefined4)in_stack_00000028[0x29];
  uStack_ec = *(undefined4 *)((longlong)in_stack_00000028 + 0x14c);
  uStack_e8 = (undefined4)in_stack_00000028[0x2a];
  uStack_e4 = *(undefined4 *)((longlong)in_stack_00000028 + 0x154);
  local_e0 = in_stack_00000028[0x2b];
  FUN_144a3f8b4(&local_d8,in_stack_00000028 + 0x2c);
  FUN_144b1f2a6(&local_b8,in_stack_00000028 + 0x30);
  local_90 = (undefined5)in_stack_00000028[0x35];
  uStack_8b = (undefined3)*(undefined8 *)((longlong)in_stack_00000028 + 0x1ad);
  uStack_88 = (undefined5)((ulonglong)*(undefined8 *)((longlong)in_stack_00000028 + 0x1ad) >> 0x18);
  local_40 = local_40 | 3;
  local_80 = &PTR_FUN_14acb88a0;
  iVar2 = (int)in_stack_00000028[1];
  *(uint *)(in_stack_00000028 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)in_stack_00000028 + 0xc) < iVar2 + 1U) {
    FUN_140ac5684(in_stack_00000028,iVar2);
  }
  lVar4 = *in_stack_00000028;
  plVar1 = (longlong *)(lVar4 + (longlong)iVar2 * 0xf0);
  *(undefined4 *)(plVar1 + 4) = uStack_108;
  plVar1[2] = CONCAT44(uStack_114,local_118);
  plVar1[3] = CONCAT44(uStack_10c,uStack_110);
  *plVar1 = local_128;
  plVar1[1] = lStack_120;
  plVar1[9] = local_e0;
  *(undefined4 *)(plVar1 + 7) = local_f0;
  *(undefined4 *)((longlong)plVar1 + 0x3c) = uStack_ec;
  *(undefined4 *)(plVar1 + 8) = uStack_e8;
  *(undefined4 *)((longlong)plVar1 + 0x44) = uStack_e4;
  *(undefined4 *)(plVar1 + 5) = local_100;
  *(undefined4 *)((longlong)plVar1 + 0x2c) = uStack_fc;
  *(undefined4 *)(plVar1 + 6) = uStack_f8;
  *(undefined4 *)((longlong)plVar1 + 0x34) = uStack_f4;
  plVar1[10] = local_d8;
  *(undefined4 *)(plVar1 + 0xb) = local_d0;
  plVar1[0xc] = 0;
  plVar1[0xc] = local_c8;
  local_c8 = 0;
  *(undefined4 *)(plVar1 + 0xd) = (undefined4)local_c0;
  *(undefined4 *)((longlong)plVar1 + 0x6c) = local_c0._4_4_;
  local_c0 = 0;
  plVar1[0xe] = 0;
  plVar1[0xe] = local_b8;
  local_b8 = 0;
  *(undefined4 *)(plVar1 + 0xf) = (undefined4)local_b0;
  *(undefined4 *)((longlong)plVar1 + 0x7c) = local_b0._4_4_;
  local_b0 = 0;
  *(undefined1 *)(plVar1 + 0x10) = local_a8;
  plVar1[0x11] = 0;
  plVar1[0x11] = local_a0;
  local_a0 = 0;
  *(undefined4 *)(plVar1 + 0x12) = (undefined4)local_98;
  *(undefined4 *)((longlong)plVar1 + 0x94) = local_98._4_4_;
  local_98 = 0;
  *(ulonglong *)((longlong)plVar1 + 0x9d) = CONCAT53(uStack_88,uStack_8b);
  plVar1[0x13] = CONCAT35(uStack_8b,local_90);
  *(byte *)(plVar1 + 0x1d) = *(byte *)(plVar1 + 0x1d) & 0xfc | 2;
  FUN_144adeb48(plVar1 + 0x15);
  if ((local_40 & 1) != 0) {
    lVar4 = lVar4 + (longlong)iVar2 * 0xf0;
    *(byte *)(lVar4 + 0xe8) = *(byte *)(lVar4 + 0xe8) | 1;
    *(byte *)(lVar4 + 0xe8) = *(byte *)(lVar4 + 0xe8) & 0xfd | local_40 & 2;
    plVar1[0x1b] = local_50;
    plVar1[0x1c] = lStack_48;
    plVar1[0x19] = local_60;
    plVar1[0x1a] = lStack_58;
    plVar1[0x17] = local_70;
    plVar1[0x18] = lStack_68;
    *(undefined4 *)(plVar1 + 0x15) = (undefined4)local_80;
    *(undefined4 *)((longlong)plVar1 + 0xac) = local_80._4_4_;
    *(undefined4 *)(plVar1 + 0x16) = uStack_78;
    *(undefined4 *)((longlong)plVar1 + 0xb4) = uStack_74;
    local_40 = local_40 & 0xfe;
  }
  if ((local_40 & 1) != 0) {
    ppuVar3 = (undefined **)&local_80;
    if ((local_40 & 2) == 0) {
      ppuVar3 = local_80;
    }
    local_40 = local_40 & 0xfe;
    (**(code **)*ppuVar3)(ppuVar3,0);
    if ((local_40 & 2) == 0) {
      FUN_1400020a8(local_80);
    }
  }
  FUN_144adeafa(&local_100);
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f82490 FUN_147f82490 body=279 status=ok
// SIG undefined FUN_147f82490(void)

void FUN_147f82490(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
    return;
  }
  lVar4 = FUN_14001cc68(0x140,0x10);
  FUN_147f81f86(lVar5,lVar4);
  FUN_140737604(lVar4 + 0x10,lVar5 + 0x118);
  FUN_141818f7a(lVar4 + 0x120,lVar5 + 0xf8);
  *(undefined8 *)(lVar4 + 0x138) = *(undefined8 *)(lVar5 + 0x110);
  lVar5 = FUN_1438abef6(param_2,param_2 + 0x24);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14acb8900;
  plVar6[2] = lVar4;
  *(longlong *)(lVar5 + 8) = lVar4;
  plVar3 = *(longlong **)(lVar5 + 0x10);
  if (plVar6 == plVar3) {
    if (plVar6 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) {
      return;
    }
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar6;
  }
  else {
    *(longlong **)(lVar5 + 0x10) = plVar6;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) {
      return;
    }
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return;
}



// FUNCTION 147f825a8 FUN_147f825a8 body=75 status=ok
// SIG undefined FUN_147f825a8(void)

bool FUN_147f825a8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_147f825dc;
    }
  }
  lVar2 = 0;
LAB_147f825dc:
  lVar1 = FUN_1459ec06e();
  return lVar2 == lVar1;
}



// FUNCTION 147f825f4 FUN_147f825f4 body=115 status=ok
// SIG undefined FUN_147f825f4(void)

undefined8 * FUN_147f825f4(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  
  if (param_3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c();
  }
  bVar1 = DAT_14c950c29;
  *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 3;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = &PTR_FUN_14acb1540;
  param_2[4] = param_3;
  if ((param_3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  return param_2;
}



// FUNCTION 147f82668 FUN_147f82668 body=62 status=ok
// SIG undefined FUN_147f82668(void)

void FUN_147f82668(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459ec06e();
  FUN_147f81e20(param_1,uVar1,0,8,0,0,0,0);
  return;
}



// FUNCTION 147f826a6 FUN_147f826a6 body=120 status=ok
// SIG undefined FUN_147f826a6(void)

undefined8 * FUN_147f826a6(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb26328) {
    FUN_144b3d300(&DAT_14cb26328);
    if (DAT_14cb26328 == -1) {
      FUN_1446ddc76(&DAT_14cb26320,"WWise RTPC Track",1);
      _Init_thread_footer(&DAT_14cb26328);
    }
  }
  *param_2 = DAT_14cb26320;
  return param_2;
}



// FUNCTION 147f8276e FUN_147f8276e body=45 status=ok
// SIG undefined FUN_147f8276e(void)

void FUN_147f8276e(longlong param_1)

{
  FUN_140402d60();
  FUN_141189c74(param_1 + 0x340);
  FUN_141189c74(param_1 + 0x390);
  return;
}



// FUNCTION 147f8279c FUN_147f8279c body=191 status=ok
// SIG undefined FUN_147f8279c(void)

void FUN_147f8279c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (param_2 == (undefined8 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *param_2;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar2 + 1U) {
    FUN_1464490fe(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar5 = (longlong)iVar2 * 0x18;
  *(undefined4 *)(lVar3 + lVar5) = 4;
  *(undefined8 *)(lVar3 + 8 + lVar5) = uVar6;
  *(undefined8 *)(lVar3 + 0x10 + lVar5) = 0;
  uVar6 = FUN_14001cc68(0x20,0x10);
  FUN_147f84530(uVar6,param_2);
  puVar4 = *(undefined8 **)(*plVar1 + 0x10 + lVar5);
  *(undefined8 *)(*plVar1 + 0x10 + lVar5) = uVar6;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
                    /* WARNING: Could not recover jumptable at 0x000147f82854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// FUNCTION 147f8285c FUN_147f8285c body=245 status=ok
// SIG undefined FUN_147f8285c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f8285c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
  auVar8._0_8_ = DAT_14cb262c8;
  auVar8._12_4_ = 0x45300000;
  dVar7 = (((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
          (auVar8._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (param_2 == (undefined8 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *param_2;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar2 + 1U) {
    FUN_1464490fe(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar5 = (longlong)iVar2 * 0x18;
  *(undefined4 *)(lVar3 + lVar5) = 0x2000;
  *(undefined8 *)(lVar3 + 8 + lVar5) = uVar6;
  *(undefined8 *)(lVar3 + 0x10 + lVar5) = 0;
  uVar6 = FUN_14001cc68(0x20,0x10);
  FUN_147f84612(uVar6,param_2,dVar7);
  puVar4 = *(undefined8 **)(*plVar1 + 0x10 + lVar5);
  *(undefined8 *)(*plVar1 + 0x10 + lVar5) = uVar6;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
                    /* WARNING: Could not recover jumptable at 0x000147f8294a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// FUNCTION 147f82952 FUN_147f82952 body=226 status=ok
// SIG undefined FUN_147f82952(void)

void FUN_147f82952(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (param_2 == (undefined8 *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *param_2;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar2 + 1U) {
    FUN_1464490fe(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar5 = (longlong)iVar2 * 0x18;
  *(undefined4 *)(lVar3 + lVar5) = 0x10000;
  *(undefined8 *)(lVar3 + 8 + lVar5) = uVar14;
  *(undefined8 *)(lVar3 + 0x10 + lVar5) = 0;
  puVar13 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar13 = &PTR_FUN_14acb8940;
  uVar6 = *(undefined4 *)((longlong)param_2 + 4);
  uVar7 = *(undefined4 *)(param_2 + 1);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar9 = *(undefined4 *)(param_2 + 2);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar11 = *(undefined4 *)(param_2 + 3);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(puVar13 + 1) = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)puVar13 + 0xc) = uVar6;
  *(undefined4 *)(puVar13 + 2) = uVar7;
  *(undefined4 *)((longlong)puVar13 + 0x14) = uVar8;
  *(undefined4 *)(puVar13 + 3) = uVar9;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar10;
  *(undefined4 *)(puVar13 + 4) = uVar11;
  *(undefined4 *)((longlong)puVar13 + 0x24) = uVar12;
  puVar13[5] = param_2[4];
  puVar4 = *(undefined8 **)(*plVar1 + 0x10 + lVar5);
  *(undefined8 **)(*plVar1 + 0x10 + lVar5) = puVar13;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
                    /* WARNING: Could not recover jumptable at 0x000147f82a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// FUNCTION 147f82a5c FUN_147f82a5c body=99 status=ok
// SIG undefined FUN_147f82a5c(void)

void FUN_147f82a5c(undefined1 param_1)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  undefined1 *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  DAT_14cb26569 = 0;
  if (DAT_14cb263e0 != 0) {
    local_10 = &local_19;
    local_18 = &LAB_1438abf8e;
    local_19 = param_1;
    FUN_14042cac6();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f82ac0 FUN_147f82ac0 body=99 status=ok
// SIG undefined FUN_147f82ac0(void)

void FUN_147f82ac0(undefined1 param_1)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  undefined1 *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb263e0 != 0) {
    local_10 = &local_19;
    local_18 = &LAB_1438abfc4;
    local_19 = param_1;
    FUN_14042cac6();
    DAT_14cb26569 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f82b38 FUN_147f82b38 body=131 status=ok
// SIG undefined FUN_147f82b38(void)

void FUN_147f82b38(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (*param_2 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
    iVar2 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar2 + 1U) {
      FUN_147f8481c((longlong *)(param_1 + 0x30),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x30);
    *(longlong *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = param_2[2];
    uVar4 = *(undefined4 *)((longlong)param_2 + 4);
    lVar6 = param_2[1];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
    puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
    *puVar1 = (int)*param_2;
    puVar1[1] = uVar4;
    puVar1[2] = (int)lVar6;
    puVar1[3] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x000147f82b9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
    return;
  }
  return;
}



// FUNCTION 147f82bbc FUN_147f82bbc body=107 status=ok
// SIG undefined FUN_147f82bbc(void)

ulonglong FUN_147f82bbc(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  if ((longlong)*(int *)(param_1 + 0x28) == 0) {
    param_2 = 0;
  }
  else {
    plVar1 = (longlong *)(param_2 + 0x10);
    lVar2 = 0;
    do {
      bVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10 + lVar2) == *plVar1;
      param_2 = CONCAT71((int7)(param_2 >> 8),bVar3);
      if (bVar3) break;
      bVar3 = (longlong)*(int *)(param_1 + 0x28) * 0x18 + -0x18 != lVar2;
      lVar2 = lVar2 + 0x18;
    } while (bVar3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  return param_2 & 0xffffffff;
}



// FUNCTION 147f82c28 FUN_147f82c28 body=136 status=ok
// SIG undefined FUN_147f82c28(void)

void FUN_147f82c28(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  iVar1 = *(int *)(param_1 + 0x28);
  lVar3 = (longlong)iVar1;
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_140b760e0((longlong *)(param_1 + 0x20),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  *(undefined8 *)(lVar2 + lVar3 * 0x18) = 0;
  *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(lVar2 + lVar3 * 0x18) = *param_2;
  *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = param_2[1];
  *(undefined8 *)(lVar2 + 0x10 + lVar3 * 0x18) = param_2[2];
                    /* WARNING: Could not recover jumptable at 0x000147f82ca9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  return;
}



// FUNCTION 147f82cb0 FUN_147f82cb0 body=102 status=ok
// SIG undefined FUN_147f82cb0(void)

void FUN_147f82cb0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b65364();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f82d17 FUN_147f82d17 body=148 status=ok
// SIG undefined FUN_147f82d17(void)

undefined8 FUN_147f82d17(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b65364();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f82dac FUN_147f82dac body=248 status=ok
// SIG undefined FUN_147f82dac(void)

void FUN_147f82dac(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0 [48];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_140942bbf(local_1d0,param_1);
  puVar3 = local_50;
  if (local_50 == (undefined8 *)0x0) {
    puVar3 = local_1d0;
  }
  if ((longlong)local_48 != 0) {
    puVar1 = puVar3 + (longlong)local_48 * 3;
    do {
      local_1e8 = *puVar3;
      local_1e0 = puVar3[1];
      local_1d8 = puVar3[2];
      cVar2 = FUN_147f82bbc(param_1,&local_1e8);
      if (cVar2 == '\0') {
        FUN_14072d42a(&local_1e8,(float)*(int *)(param_1 + 0xf8) / 1000.0);
        FUN_147f82c28(param_1,&local_1e8);
      }
      puVar3 = puVar3 + 3;
    } while (puVar3 != puVar1);
  }
  FUN_140942b82(local_1d0);
  if ((local_40 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f82ea5 FUN_147f82ea5 body=374 status=ok
// SIG undefined FUN_147f82ea5(void)

void FUN_147f82ea5(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar6 = (longlong *)*param_2;
  if ((plVar6 != (longlong *)0x0) && (*plVar6 != -1)) {
    plVar5 = (longlong *)param_1[1];
    if (plVar5 == (longlong *)0x0) {
LAB_147f82efb:
      plVar5 = (longlong *)0x0;
    }
    else {
      iVar4 = (int)plVar5[1];
      do {
        if (iVar4 == 0) goto LAB_147f82efb;
        LOCK();
        iVar3 = (int)plVar5[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(plVar5 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar7);
    }
    local_38 = 0;
    if (plVar5 != (longlong *)0x0) {
      local_38 = *param_1;
    }
    local_30 = plVar5;
    FUN_1461baff6(plVar6 + 4);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    lVar2 = *param_2;
    plVar6 = (longlong *)param_1[1];
    if (plVar6 == (longlong *)0x0) {
LAB_147f82f4f:
      plVar6 = (longlong *)0x0;
    }
    else {
      iVar4 = (int)plVar6[1];
      do {
        if (iVar4 == 0) goto LAB_147f82f4f;
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar7);
    }
    local_38 = 0;
    if (plVar6 != (longlong *)0x0) {
      local_38 = *param_1;
    }
    local_30 = plVar6;
    FUN_14623ca84(lVar2 + 0x40);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    local_48 = 8;
    FUN_14084a448(*param_2,&local_38,param_1[0x13],0);
    FUN_1409427a4(param_1,&local_38);
    FUN_14072d42a(&local_38,(float)*(int *)(param_1 + 0x1f) / 1000.0);
    FUN_147f82c28(param_1,&local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f8301c FUN_147f8301c body=118 status=ok
// SIG undefined FUN_147f8301c(void)

void FUN_147f8301c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140942cb5(local_30,param_1,param_2);
  FUN_1409427a4(param_2,local_30);
  FUN_14072d42a(local_30,(float)*(int *)(param_2 + 0xf8) / 1000.0);
  FUN_147f82c28(param_2,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f83093 FUN_147f83093 body=195 status=ok
// SIG undefined FUN_147f83093(void)

void FUN_147f83093(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0 [96];
  undefined4 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_140942bbf(local_1d0,param_1);
  if (local_50 == (undefined4 *)0x0) {
    local_50 = local_1d0;
  }
  if ((longlong)local_48 != 0) {
    puVar1 = local_50 + (longlong)local_48 * 6;
    do {
      local_1e8 = *local_50;
      uStack_1e4 = local_50[1];
      uStack_1e0 = local_50[2];
      uStack_1dc = local_50[3];
      local_1d8 = *(undefined8 *)(local_50 + 4);
      FUN_14094283f(param_1,param_2,&local_1e8);
      local_50 = local_50 + 6;
    } while (local_50 != puVar1);
  }
  FUN_140942b82(local_1d0);
  if ((local_40 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f83157 FUN_147f83157 body=188 status=ok
// SIG undefined FUN_147f83157(void)

void FUN_147f83157(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_1f8 [40];
  undefined1 local_1d0 [384];
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_140942bbf(local_1d0,param_1);
  if (local_50 == (undefined1 *)0x0) {
    local_50 = local_1d0;
  }
  if ((longlong)local_48 != 0) {
    lVar1 = 0;
    do {
      FUN_14623c8e4(param_1,param_2,param_3,*(undefined8 *)(local_50 + lVar1 + 0x10));
      lVar1 = lVar1 + 0x18;
    } while ((longlong)local_48 * 0x18 != lVar1);
  }
  FUN_140942b82(local_1d0);
  if ((local_40 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8323b FUN_147f8323b body=79 status=ok
// SIG undefined FUN_147f8323b(void)

undefined4 FUN_147f8323b(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a7e30a();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) {
      return 0xffffffff;
    }
  }
  lVar2 = FUN_140d57e10(lVar2,param_1);
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(lVar2 + 0x10);
}



// FUNCTION 147f8328a FUN_147f8328a body=649 status=ok
// SIG undefined FUN_147f8328a(void)

longlong * FUN_147f8328a(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  size_t sVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  wchar_t *_Str;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140056680(param_1,&DAT_149e19e7a);
  uVar3 = local_78;
  if (*(int *)((longlong)param_2 + 0xc) != -1) {
    lVar6 = FUN_144a7e30a();
    lVar11 = *(longlong *)(lVar6 + 0x110);
    if (lVar11 == 0) {
      FUN_140aa6c08(lVar6);
      lVar11 = *(longlong *)(lVar6 + 0x110);
      uVar3 = local_78;
      if (lVar11 == 0) goto LAB_147f83363;
    }
    plVar1 = (longlong *)(lVar11 + 0xb0);
    lVar6 = lVar11 + 0xc0;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    local_98 = param_1;
    uStack_60 = lVar6;
    if (*(int *)(lVar11 + 0xd8) == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar10 = *(int *)(lVar11 + 0xd8);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar3 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar10) || (param_1 = local_98, uStack_60 != lVar6)) {
      iVar5 = local_78._4_4_;
      local_78 = uVar3;
      do {
        puVar12 = (undefined8 *)((longlong)iVar5 * 0x28 + *local_90);
        if (*(int *)(param_2 + 1) - 4U < 0x7ffffffd) {
          _Str = (wchar_t *)*param_2;
          if (_Str != (wchar_t *)0x0) {
            sVar7 = wcslen(_Str);
            puVar8 = puVar12 + 2;
            uVar4 = (int)sVar7;
LAB_147f83410:
            local_a0 = 0xffffffff;
            local_a8 = 0;
            iVar5 = FUN_1447ee042(puVar8,_Str,uVar4,1);
            plVar2 = local_98;
            if (iVar5 != -1) {
              iVar10 = *(int *)(puVar12 + 1);
              if (iVar10 == 0) {
                puVar9 = &DAT_149dfb77a;
              }
              else {
                puVar9 = (undefined2 *)*puVar12;
              }
              iVar5 = iVar10 + -1;
              if (iVar10 == 0) {
                iVar5 = 0;
              }
              iVar10 = 2;
              if (iVar5 < 2) {
                iVar10 = iVar5;
              }
              if (iVar10 < 1) {
                iVar10 = 0;
              }
              FUN_14006620a(&local_68,puVar9,iVar10);
              if (&local_68 == plVar2) {
                param_1 = local_98;
                uVar3 = local_78;
                if (local_68 != 0) {
                  FUN_1400020a8();
                  param_1 = local_98;
                  uVar3 = local_78;
                }
              }
              else {
                if (*plVar2 != 0) {
                  FUN_1400020a8();
                }
                *plVar2 = local_68;
                *(undefined4 *)(plVar2 + 1) = (undefined4)uStack_60;
                *(undefined4 *)((longlong)plVar2 + 0xc) = uStack_60._4_4_;
                param_1 = local_98;
                uVar3 = local_78;
              }
              break;
            }
          }
        }
        else {
          _Str = L"";
          if (*(int *)(param_2 + 1) != 0) {
            _Str = (wchar_t *)*param_2;
          }
          if (_Str != (wchar_t *)0x0) {
            sVar7 = wcslen(_Str);
            puVar8 = puVar12;
            uVar4 = (int)sVar7;
            goto LAB_147f83410;
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        param_1 = local_98;
        iVar5 = local_78._4_4_;
        uVar3 = local_78;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar6 || local_78._4_4_ != iVar10));
    }
  }
LAB_147f83363:
  local_78 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147f8351c FUN_147f8351c body=40 status=ok
// SIG undefined FUN_147f8351c(void)

void FUN_147f8351c(longlong param_1)

{
  FUN_14570f2d8(param_1 + 0x340);
  FUN_14570f2d8(param_1 + 0x390);
  return;
}



// FUNCTION 147f83544 FUN_147f83544 body=126 status=ok
// SIG undefined FUN_147f83544(void)

void FUN_147f83544(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  FUN_1447a97f4(local_38,param_3);
  cVar1 = FUN_1438ab718(&local_40,param_1 + 0x340);
  if (cVar1 == '\0') {
    FUN_1438ab718(&local_40,param_1 + 0x390);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f835c4 FUN_147f835c4 body=68 status=ok
// SIG undefined FUN_147f835c4(void)

void FUN_147f835c4(longlong param_1)

{
  if (DAT_14cb259f8 != 0) {
    FUN_144aec4a4();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x30) = 5;
                    /* WARNING: Could not recover jumptable at 0x000147f83601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 147f83630 FUN_147f83630 body=94 status=ok
// SIG undefined FUN_147f83630(void)

void FUN_147f83630(void)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  undefined1 *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  DAT_14cb26568 = 0;
  if (DAT_14cb26498 != 0) {
    local_10 = &local_19;
    local_18 = &LAB_1438acbb4;
    FUN_14160c762();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f83690 FUN_147f83690 body=94 status=ok
// SIG undefined FUN_147f83690(void)

void FUN_147f83690(void)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  undefined1 *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb26498 != 0) {
    local_10 = &local_19;
    local_18 = &LAB_1438acbbe;
    FUN_14160c762();
    DAT_14cb26568 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f83704 FUN_147f83704 body=142 status=ok
// SIG undefined FUN_147f83704(void)

undefined8 FUN_147f83704(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  undefined1 local_70 [24];
  longlong local_58;
  undefined8 local_48 [5];
  ulonglong local_20;
  
  lVar1 = DAT_14cb264d8;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb264d8 == 0) {
    uVar2 = 0;
  }
  else {
    local_48[0] = param_1;
    FUN_1446dcdd4(local_70);
    FUN_1447a97f4(local_48,local_70);
    uVar2 = FUN_14013edca(lVar1,local_48);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f837bc FUN_147f837bc body=71 status=ok
// SIG undefined FUN_147f837bc(void)

void FUN_147f837bc(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x300))();
  if (cVar1 == '\0') {
    FUN_1400e3b02(param_1,param_2);
    return;
  }
  if (1 < *(int *)(param_2 + 4)) {
    FUN_141033b66();
    return;
  }
  FUN_14013f0a2();
  return;
}



// FUNCTION 147f8382c FUN_147f8382c body=142 status=ok
// SIG undefined FUN_147f8382c(void)

undefined8 FUN_147f8382c(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  undefined1 local_70 [24];
  longlong local_58;
  undefined8 local_48 [5];
  ulonglong local_20;
  
  lVar1 = DAT_14cb26558;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb26558 == 0) {
    uVar2 = 0;
  }
  else {
    local_48[0] = param_1;
    FUN_1446dcdd4(local_70);
    FUN_1447a97f4(local_48,local_70);
    uVar2 = FUN_14013edca(lVar1,local_48);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f838e4 FUN_147f838e4 body=104 status=ok
// SIG undefined FUN_147f838e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f838e4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb26520;
  if (DAT_14cb26520 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x4000,0);
    lVar4 = 0xff;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 8;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb26520;
    _DAT_14cb26528 = _DAT_14cb26528 + 0x100;
  }
  DAT_14cb26520 = (undefined8 *)*puVar2;
  _DAT_14cb2652c = _DAT_14cb2652c + 1;
  return;
}



// FUNCTION 147f8394c FUN_147f8394c body=52 status=ok
// SIG undefined FUN_147f8394c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f8394c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,0);
    _DAT_14cb2652c = _DAT_14cb2652c + -1;
    *param_2 = DAT_14cb26520;
    DAT_14cb26520 = param_2;
  }
  return;
}



// FUNCTION 147f83980 FUN_147f83980 body=71 status=ok
// SIG undefined FUN_147f83980(void)

void FUN_147f83980(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x300))();
  if (cVar1 == '\0') {
    FUN_1400e3b02(param_1,param_2);
    return;
  }
  if (1 < *(int *)(param_2 + 4)) {
    FUN_145ac2ac0();
    return;
  }
  FUN_14013f0a2();
  return;
}



// FUNCTION 147f839c8 FUN_147f839c8 body=321 status=ok
// SIG undefined FUN_147f839c8(void)

void FUN_147f839c8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 != 0) {
    cVar5 = FUN_14094384e(param_1,param_3);
    if (cVar5 != '\0') {
      uVar8 = FUN_140942920(param_1,param_3);
      lVar4 = param_2[1];
      if ((longlong)(int)lVar4 != 0) {
        lVar2 = *param_2;
        lVar7 = 0;
        do {
          local_68 = *(undefined8 *)(lVar2 + lVar7);
          uVar6 = FUN_14479d2ce(&local_68);
          lVar3 = *param_1;
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0xa0));
          iVar1 = *(int *)(lVar3 + 0x18);
          if ((LPCRITICAL_SECTION)(lVar3 + 0xa0) != (LPCRITICAL_SECTION)0x0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0xa0));
          }
          lVar3 = *param_1;
          if (iVar1 < 1) {
            FUN_147f8301c(uVar6,lVar3);
            *(undefined4 *)(*param_1 + 0xfc) = *(undefined4 *)(*param_1 + 0x120);
          }
          else {
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 200));
            iVar1 = *(int *)(lVar3 + 0x28);
            if ((LPCRITICAL_SECTION)(lVar3 + 200) != (LPCRITICAL_SECTION)0x0) {
              LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 200));
            }
            if (iVar1 < 1) {
              FUN_147f82dac(*param_1);
            }
          }
          FUN_147f83093(*param_1,uVar8);
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar4 * 8 != lVar7);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f83b0a FUN_147f83b0a body=203 status=ok
// SIG undefined FUN_147f83b0a(void)

void FUN_147f83b0a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    cVar3 = FUN_14094384e();
    if (cVar3 != '\0') {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0xa0));
      iVar1 = *(int *)(lVar2 + 0x18);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0xa0));
      lVar2 = *param_1;
      if (iVar1 < 1) {
        FUN_147f82ea5(lVar2,param_3);
      }
      else {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 200));
        iVar1 = *(int *)(lVar2 + 0x28);
        if ((LPCRITICAL_SECTION)(lVar2 + 200) != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 200));
        }
        if (iVar1 < 1) {
          FUN_147f82dac(*param_1);
        }
      }
      *(undefined4 *)(*param_1 + 0xfc) = *(undefined4 *)(*param_1 + 0x120);
      uVar4 = FUN_140942920(param_1,param_2);
      FUN_147f83157(*param_1,param_3,uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 147f83bd6 FUN_147f83bd6 body=29 status=ok
// SIG undefined FUN_147f83bd6(void)

undefined8 FUN_147f83bd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f83bf4 FUN_147f83bf4 body=724 status=ok
// SIG undefined FUN_147f83bf4(void)

void FUN_147f83bf4(undefined8 param_1,longlong param_2,int *param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *plStack_90;
  undefined8 local_80;
  longlong local_78;
  int local_70;
  undefined4 local_64;
  ulonglong local_60;
  
  lVar13 = DAT_14cb259f8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14cb259f8 == 0) goto LAB_147f83e1a;
  lVar7 = FUN_1438abda2(param_4,param_4 + 0x24);
  if (lVar7 == 0) goto LAB_147f83e1a;
  lVar3 = *(longlong *)(lVar7 + 8);
  plVar4 = *(longlong **)(lVar7 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 != 0) {
    lVar7 = *(longlong *)(lVar3 + 0x128);
    if (lVar7 == 0) {
      uVar8 = FUN_1407f787c();
      lVar7 = FUN_14477b664(uVar8);
      *(longlong *)(lVar3 + 0x128) = lVar7;
    }
    lVar11 = *(longlong *)(lVar3 + 0x130);
    if (((lVar11 == 0) && (lVar11 = 0, lVar7 != 0)) && (*(longlong *)(lVar3 + 0x120) != 0)) {
      plVar10 = *(longlong **)(lVar7 + 0xb8);
      if (plVar10 == (longlong *)0x0) {
LAB_147f83ec5:
        lVar11 = 0;
      }
      else {
        cVar5 = (**(code **)(*plVar10 + 0x108))(plVar10);
        if (cVar5 == '\0') goto LAB_147f83ec5;
        uVar8 = (**(code **)(*plVar10 + 0x110))(plVar10);
        lVar11 = FUN_144aff482(uVar8,(longlong *)(lVar3 + 0x120));
      }
      *(longlong *)(lVar3 + 0x130) = lVar11;
    }
    uVar6 = *(uint *)(param_2 + 0x24);
    if (SBORROW4(0,uVar6)) {
      puVar12 = (uint *)(param_2 + 4);
      if (*(int *)(param_2 + 0x20) == 0) {
        puVar12 = (uint *)(param_2 + 0x10);
      }
      uVar6 = *puVar12;
      uVar14 = (ulonglong)puVar12[1] << 0x20;
    }
    else {
      uVar14 = 0;
    }
    uVar8 = *(undefined8 *)(lVar3 + 0x138);
    FUN_1400f01f6(lVar3 + 0x10,uVar6 | uVar14,&local_64);
    if (((param_3[1] == 0 && *param_3 == 0) && param_3[2] == 0) && param_3[3] == 0) {
      FUN_1447eec96(lVar13,lVar11,local_64,0);
    }
    else {
      local_a8 = lVar11;
      FUN_1401abe9c(param_5,&local_78,param_3,param_3 + 4);
      if ((longlong)local_70 != 0) {
        lVar13 = 0;
        do {
          local_80 = *(undefined8 *)(local_78 + lVar13);
          lVar7 = FUN_14479d2ce(&local_80);
          if (lVar7 == 0) {
LAB_147f83daa:
            local_98 = 0;
            plStack_90 = (longlong *)0x0;
LAB_147f83daf:
            local_a0 = (longlong *)0x0;
          }
          else {
            uVar9 = FUN_144a89982();
            plVar10 = (longlong *)FUN_144718840(lVar7,uVar9);
            if (plVar10 == (longlong *)0x0) goto LAB_147f83daa;
            (**(code **)(*plVar10 + 0x10))(plVar10,&local_98);
            if (local_98 == 0) goto LAB_147f83daf;
            FUN_1403c747e(local_98,&local_a0,uVar8);
            if ((local_a0 != (longlong *)0x0) && (*local_a0 != -1)) {
              local_b8 = 0;
              FUN_1447997cc(local_a0,local_a8,local_64,0);
            }
          }
          FUN_144a61ac8(&local_a0);
          plVar10 = plStack_90;
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_90 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_90)(plStack_90);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          lVar13 = lVar13 + 8;
        } while ((longlong)local_70 * 8 != lVar13);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar4 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
LAB_147f83e1a:
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f83eca FUN_147f83eca body=340 status=ok
// SIG undefined FUN_147f83eca(void)

undefined4 * FUN_147f83eca(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147f84020(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_141818f7a(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_147f84106(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x24) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147f84202(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f84020 FUN_147f84020 body=230 status=ok
// SIG undefined FUN_147f84020(void)

int * FUN_147f84020(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 147f84106 FUN_147f84106 body=138 status=ok
// SIG undefined FUN_147f84106(void)

undefined8 FUN_147f84106(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if (*plVar8 == *param_3) {
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_147f84190((int)lVar5,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 147f84190 FUN_147f84190 body=114 status=ok
// SIG undefined FUN_147f84190(void)

void FUN_147f84190(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 147f84202 FUN_147f84202 body=473 status=ok
// SIG undefined FUN_147f84202(void)

void FUN_147f84202(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 147f843dc FUN_147f843dc body=96 status=ok
// SIG undefined FUN_147f843dc(void)

void FUN_147f843dc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 147f8443c FUN_147f8443c body=64 status=ok
// SIG undefined FUN_147f8443c(void)

void FUN_147f8443c(void)

{
  if (DAT_14cb262dc != 0) {
    DAT_14cb262dc = 0;
    FUN_1446f8d3c(&DAT_14cb262d0,DAT_14cb262d8,0,0x48,8);
  }
  return;
}



// FUNCTION 147f8447c FUN_147f8447c body=83 status=ok
// SIG undefined FUN_147f8447c(void)

undefined8 * FUN_147f8447c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14acb88f8;
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f844d0 FUN_147f844d0 body=9 status=ok
// SIG undefined FUN_147f844d0(void)

void FUN_147f844d0(longlong param_1)

{
  FUN_147f844f8(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 147f844da FUN_147f844da body=29 status=ok
// SIG undefined FUN_147f844da(void)

undefined8 FUN_147f844da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f844f8 FUN_147f844f8 body=55 status=ok
// SIG undefined FUN_147f844f8(void)

void FUN_147f844f8(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    FUN_1404dbc70(param_1 + 2);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 147f84530 FUN_147f84530 body=166 status=ok
// SIG undefined FUN_147f84530(void)

undefined8 * FUN_147f84530(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14acb8918;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0x1c);
  FUN_1400b22c2(&local_30,*(undefined8 *)(param_2 + 0x20));
  if (param_1 + 2 == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = local_30;
    *(undefined4 *)(param_1 + 3) = local_28;
    *(undefined4 *)((longlong)param_1 + 0x1c) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f845d8 FUN_147f845d8 body=57 status=ok
// SIG undefined FUN_147f845d8(void)

undefined8 * FUN_147f845d8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acb8918;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f84612 FUN_147f84612 body=172 status=ok
// SIG undefined FUN_147f84612(void)

undefined8 * FUN_147f84612(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14acb8930;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1400b22c2(&local_40,*(undefined8 *)(param_2 + 0x40));
  if (param_1 + 1 == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1[1] = local_40;
    *(undefined4 *)(param_1 + 2) = local_38;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_34;
  }
  param_1[3] = param_3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f846c0 FUN_147f846c0 body=57 status=ok
// SIG undefined FUN_147f846c0(void)

undefined8 * FUN_147f846c0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acb8930;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f846fa FUN_147f846fa body=29 status=ok
// SIG undefined FUN_147f846fa(void)

undefined8 FUN_147f846fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f84718 FUN_147f84718 body=86 status=ok
// SIG undefined FUN_147f84718(void)

void FUN_147f84718(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
  uVar3 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 2)) {
    uVar3 = uVar1 >> 2 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,4,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147f8476e FUN_147f8476e body=62 status=ok
// SIG undefined FUN_147f8476e(void)

void FUN_147f8476e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147f847ac(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 147f847ac FUN_147f847ac body=112 status=ok
// SIG undefined FUN_147f847ac(void)

ulonglong FUN_147f847ac(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147f847e6;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_147f847e6:
  return param_2 & 0xffffffff;
}



// FUNCTION 147f8481c FUN_147f8481c body=147 status=ok
// SIG undefined FUN_147f8481c(void)

void FUN_147f8481c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147f848b0 FUN_147f848b0 body=48 status=ok
// SIG undefined FUN_147f848b0(void)

void FUN_147f848b0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 147f848e4 FUN_147f848e4 body=81 status=ok
// SIG undefined FUN_147f848e4(void)

undefined8 FUN_147f848e4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 147f8493c FUN_147f8493c body=89 status=ok
// SIG undefined FUN_147f8493c(void)

bool FUN_147f8493c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_147f84987;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_147f84987:
  return lVar6 == param_2;
}



// FUNCTION 147f849be FUN_147f849be body=118 status=ok
// SIG undefined FUN_147f849be(void)

void FUN_147f849be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acb8d40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb8cd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f84a34 FUN_147f84a34 body=118 status=ok
// SIG undefined FUN_147f84a34(void)

void FUN_147f84a34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acb8d40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb8cd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f84aaa FUN_147f84aaa body=156 status=ok
// SIG undefined FUN_147f84aaa(void)

void FUN_147f84aaa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14acb8d40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb8cd0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f84b36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f84b46 FUN_147f84b46 body=98 status=ok
// SIG undefined FUN_147f84b46(void)

void FUN_147f84b46(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000147f84b8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147f84b9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 147f84bae FUN_147f84bae body=81 status=ok
// SIG undefined FUN_147f84bae(void)

undefined8 FUN_147f84bae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 147f84c06 FUN_147f84c06 body=89 status=ok
// SIG undefined FUN_147f84c06(void)

bool FUN_147f84c06(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_147f84c51;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_147f84c51:
  return lVar6 == param_2;
}



// FUNCTION 147f84c88 FUN_147f84c88 body=118 status=ok
// SIG undefined FUN_147f84c88(void)

void FUN_147f84c88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acb8e20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb8db0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f84cfe FUN_147f84cfe body=118 status=ok
// SIG undefined FUN_147f84cfe(void)

void FUN_147f84cfe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acb8e20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb8db0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f84d74 FUN_147f84d74 body=156 status=ok
// SIG undefined FUN_147f84d74(void)

void FUN_147f84d74(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14acb8e20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb8db0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f84e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f84e10 FUN_147f84e10 body=98 status=ok
// SIG undefined FUN_147f84e10(void)

void FUN_147f84e10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000147f84e59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147f84e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 147f84e74 FUN_147f84e74 body=155 status=ok
// SIG undefined FUN_147f84e74(void)

undefined8 FUN_147f84e74(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_147f84f10(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 147f84f10 FUN_147f84f10 body=87 status=ok
// SIG undefined FUN_147f84f10(void)

void FUN_147f84f10(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_147f84f68();
  return;
}



// FUNCTION 147f84f68 FUN_147f84f68 body=114 status=ok
// SIG undefined FUN_147f84f68(void)

void FUN_147f84f68(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 147f84fda FUN_147f84fda body=342 status=ok
// SIG undefined FUN_147f84fda(void)

undefined4 *
FUN_147f84fda(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147f85132(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_48 = uVar6;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_68 = param_4;
  cVar3 = FUN_147f85218(param_1,uVar4,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_48 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147f852a6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f85132 FUN_147f85132 body=230 status=ok
// SIG undefined FUN_147f85132(void)

int * FUN_147f85132(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 147f85218 FUN_147f85218 body=142 status=ok
// SIG undefined FUN_147f85218(void)

void FUN_147f85218(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_147f84f68((int)lVar3,*param_4);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_147f85282;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_147f85282:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 147f852a6 FUN_147f852a6 body=474 status=ok
// SIG undefined FUN_147f852a6(void)

void FUN_147f852a6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f85482 FUN_147f85482 body=132 status=ok
// SIG undefined FUN_147f85482(void)

void FUN_147f85482(longlong param_1,int param_2)

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



// FUNCTION 147f85520 FUN_147f85520 body=61 status=ok
// SIG undefined FUN_147f85520(void)

void FUN_147f85520(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147f85576 FUN_147f85576 body=75 status=ok
// SIG undefined FUN_147f85576(void)

void FUN_147f85576(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14181b8d0(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f855cc FUN_147f855cc body=461 status=ok
// SIG undefined FUN_147f855cc(void)

void FUN_147f855cc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_44 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar3 = &local_40;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_3c;
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = puVar4;
  }
  puVar4 = &local_44;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147f88d7a(local_38,puVar2,puVar3,puVar4);
  *param_3 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f857a7 FUN_147f857a7 body=153 status=ok
// SIG undefined FUN_147f857a7(void)

void FUN_147f857a7(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  local_40 = *param_3;
  local_34 = param_5;
  local_30 = param_6;
  local_48 = param_2;
  local_38 = param_4;
  FUN_144a787a6(local_28,param_7);
  FUN_1447cd2ec(param_1,&local_48);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f85884 FUN_147f85884 body=602 status=ok
// SIG undefined FUN_147f85884(void)

void FUN_147f85884(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  int local_44;
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar2 = local_38;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  iVar1 = local_44;
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = iVar1 != 0;
  local_70 = local_50;
  uVar3 = FUN_141674ebe(param_1,local_34,iVar2 != 0,local_40);
  *param_3 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f85af2 FUN_147f85af2 body=618 status=ok
// SIG undefined FUN_147f85af2(void)

void FUN_147f85af2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f85d5e FUN_147f85d5e body=584 status=ok
// SIG undefined FUN_147f85d5e(void)

void FUN_147f85d5e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong local_58 [2];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_58;
  local_70 = local_44;
  local_78 = local_40;
  FUN_147f85fa8(param_1,local_28,puVar1,local_3c);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


