// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148c4cfae FUN_148c4cfae body=34 status=ok
// SIG undefined FUN_148c4cfae(void)

void FUN_148c4cfae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1458fd200(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148c4d01e FUN_148c4d01e body=57 status=ok
// SIG undefined FUN_148c4d01e(void)

void FUN_148c4d01e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf868 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf868 = FUN_140002ddd(FUN_1465f0470,uVar1,L"OakTraitSettingsDef");
  }
  return;
}



// FUNCTION 148c4d058 FUN_148c4d058 body=95 status=ok
// SIG undefined FUN_148c4d058(void)

undefined8 * FUN_148c4d058(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458fd247(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c4d0b8(param_1,iVar1);
      FUN_148c4d12b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c4d0b8 FUN_148c4d0b8 body=115 status=ok
// SIG undefined FUN_148c4d0b8(void)

void FUN_148c4d0b8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c4d12b FUN_148c4d12b body=52 status=ok
// SIG undefined FUN_148c4d12b(void)

void FUN_148c4d12b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c4d160(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 148c4d160 FUN_148c4d160 body=95 status=ok
// SIG undefined FUN_148c4d160(void)

longlong FUN_148c4d160(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_14034cca6();
  *(undefined8 *)(param_1 + 0x38) = 0;
  iVar1 = *(int *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(int *)(param_1 + 0x40) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    FUN_148c4cddc((undefined8 *)(param_1 + 0x38),iVar1,0);
    FUN_148c4ce52(*(undefined8 *)(param_1 + 0x38),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148c4d2a0 FUN_148c4d2a0 body=59 status=ok
// SIG undefined FUN_148c4d2a0(void)

undefined8 FUN_148c4d2a0(longlong *param_1)

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



// FUNCTION 148c4d2e6 FUN_148c4d2e6 body=40 status=ok
// SIG undefined FUN_148c4d2e6(void)

void FUN_148c4d2e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    if (*(longlong *)(param_2 + 0x48) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148c4d550 FUN_148c4d550 body=55 status=ok
// SIG undefined FUN_148c4d550(void)

void FUN_148c4d550(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb06b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb06b8 = FUN_14171c317(FUN_1465f13f8,uVar1,L"EOakBankState");
  }
  return;
}



// FUNCTION 148c4d858 FUN_148c4d858 body=54 status=ok
// SIG undefined FUN_148c4d858(void)

undefined1 FUN_148c4d858(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1457fd6b0(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148c4d8b6 FUN_148c4d8b6 body=59 status=ok
// SIG undefined FUN_148c4d8b6(void)

undefined8 FUN_148c4d8b6(longlong *param_1)

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



// FUNCTION 148c4d8fc FUN_148c4d8fc body=32 status=ok
// SIG undefined FUN_148c4d8fc(void)

void FUN_148c4d8fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1418d06b0(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148c4d96c FUN_148c4d96c body=37 status=ok
// SIG undefined FUN_148c4d96c(void)

void FUN_148c4d96c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x308);
  FUN_141563852(param_2);
  return;
}



// FUNCTION 148c4d9b8 FUN_148c4d9b8 body=63 status=ok
// SIG undefined FUN_148c4d9b8(void)

undefined1 FUN_148c4d9b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1415c1204(param_2,param_3);
    param_3 = param_3 + 0x308;
    param_2 = param_2 + 0x308;
  }
  return 1;
}



// FUNCTION 148c4da20 FUN_148c4da20 body=59 status=ok
// SIG undefined FUN_148c4da20(void)

undefined8 FUN_148c4da20(longlong *param_1)

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



// FUNCTION 148c4da6c FUN_148c4da6c body=38 status=ok
// SIG undefined FUN_148c4da6c(void)

void FUN_148c4da6c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x308) == '\x01') {
    FUN_14121ab90(param_2);
    *(undefined1 *)(param_2 + 0x308) = 0;
  }
  return;
}



// FUNCTION 148c4db2a FUN_148c4db2a body=59 status=ok
// SIG undefined FUN_148c4db2a(void)

undefined8 FUN_148c4db2a(longlong *param_1)

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



// FUNCTION 148c4dc14 FUN_148c4dc14 body=54 status=ok
// SIG undefined FUN_148c4dc14(void)

undefined1 FUN_148c4dc14(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4dd26(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148c4dc72 FUN_148c4dc72 body=59 status=ok
// SIG undefined FUN_148c4dc72(void)

undefined8 FUN_148c4dc72(longlong *param_1)

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



// FUNCTION 148c4dcb8 FUN_148c4dcb8 body=32 status=ok
// SIG undefined FUN_148c4dcb8(void)

void FUN_148c4dcb8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1418d0794(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148c4dd26 FUN_148c4dd26 body=95 status=ok
// SIG undefined FUN_148c4dd26(void)

undefined8 * FUN_148c4dd26(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 1,param_2 + 1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 6);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  FUN_144a787a6(param_1 + 7,param_2 + 7);
  FUN_144a787a6(param_1 + 9,param_2 + 9);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  return param_1;
}



// FUNCTION 148c4dd86 FUN_148c4dd86 body=68 status=ok
// SIG undefined FUN_148c4dd86(void)

void FUN_148c4dd86(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  FUN_1418d0740(param_2);
  *(undefined2 *)((longlong)param_2 + 0x80) = 0;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0;
  return;
}



// FUNCTION 148c4ddca FUN_148c4ddca body=52 status=ok
// SIG undefined FUN_148c4ddca(void)

void FUN_148c4ddca(undefined8 param_1,longlong param_2)

{
  FUN_1418d0740(param_2);
  *(undefined2 *)(param_2 + 0x80) = 0;
  *(undefined4 *)(param_2 + 0x84) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x6c) = 0;
  *(undefined8 *)(param_2 + 0x74) = 0;
  return;
}



// FUNCTION 148c4de1c FUN_148c4de1c body=63 status=ok
// SIG undefined FUN_148c4de1c(void)

undefined1 FUN_148c4de1c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4df44(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148c4de84 FUN_148c4de84 body=59 status=ok
// SIG undefined FUN_148c4de84(void)

undefined8 FUN_148c4de84(longlong *param_1)

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



// FUNCTION 148c4ded0 FUN_148c4ded0 body=38 status=ok
// SIG undefined FUN_148c4ded0(void)

void FUN_148c4ded0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_141134746(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148c4df44 FUN_148c4df44 body=81 status=ok
// SIG undefined FUN_148c4df44(void)

longlong FUN_148c4df44(longlong param_1,longlong param_2)

{
  FUN_148c4dd26();
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  if ((*(int *)(param_1 + 0x78) == 0) || (*(int *)(param_1 + 0x78) != *(int *)(param_2 + 0x78))) {
    *(int *)(param_1 + 0x78) = *(int *)(param_2 + 0x78);
    FUN_148c4df96(param_1 + 0x68,param_2 + 0x68);
  }
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  return param_1;
}



// FUNCTION 148c4df96 FUN_148c4df96 body=93 status=ok
// SIG undefined FUN_148c4df96(void)

undefined8 * FUN_148c4df96(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1411347a1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140f4aaec(param_1,iVar1);
      FUN_140f4abd5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c4dff4 FUN_148c4dff4 body=66 status=ok
// SIG undefined FUN_148c4dff4(void)

void FUN_148c4dff4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  FUN_1400b22c2(param_2 + 9,&DAT_149e02088);
  *(undefined4 *)(param_2 + 0xb) = 0;
  *(undefined1 *)((longlong)param_2 + 0x5c) = 0;
  return;
}



// FUNCTION 148c4e036 FUN_148c4e036 body=66 status=ok
// SIG undefined FUN_148c4e036(void)

void FUN_148c4e036(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  FUN_1400b22c2(param_2 + 9,&DAT_149e02088);
  *(undefined4 *)(param_2 + 0xb) = 0;
  *(undefined1 *)((longlong)param_2 + 0x5c) = 0;
  return;
}



// FUNCTION 148c4e078 FUN_148c4e078 body=48 status=ok
// SIG undefined FUN_148c4e078(void)

void FUN_148c4e078(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c4e0be FUN_148c4e0be body=147 status=ok
// SIG undefined FUN_148c4e0be(void)

undefined8 FUN_148c4e0be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_4 != 0) {
    lVar9 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar9);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      uVar4 = *(undefined4 *)((longlong)puVar1 + 0x14);
      uVar5 = *(undefined4 *)(puVar1 + 3);
      uVar6 = *(undefined4 *)((longlong)puVar1 + 0x1c);
      lVar3 = param_2 + 0x38 + lVar9;
      *(undefined4 *)(lVar3 + -0x28) = *(undefined4 *)(puVar1 + 2);
      *(undefined4 *)(lVar3 + -0x24) = uVar4;
      *(undefined4 *)(lVar3 + -0x20) = uVar5;
      *(undefined4 *)(lVar3 + -0x1c) = uVar6;
      *(undefined8 *)(lVar3 + -0x38) = uVar7;
      *(undefined8 *)(lVar3 + -0x30) = uVar8;
      *(undefined8 *)(lVar3 + -0x18) = puVar1[4];
      uVar4 = *(undefined4 *)((longlong)puVar1 + 0x2c);
      uVar5 = *(undefined4 *)(puVar1 + 6);
      uVar6 = *(undefined4 *)((longlong)puVar1 + 0x34);
      *(undefined4 *)(lVar3 + -0x10) = *(undefined4 *)(puVar1 + 5);
      *(undefined4 *)(lVar3 + -0xc) = uVar4;
      *(undefined4 *)(lVar3 + -8) = uVar5;
      *(undefined4 *)(lVar3 + -4) = uVar6;
      FUN_144a787a6();
      lVar3 = param_2 + lVar9;
      lVar2 = param_3 + lVar9;
      FUN_144a787a6(lVar3 + 0x48,lVar2 + 0x48);
      *(undefined4 *)(lVar3 + 0x58) = *(undefined4 *)(lVar2 + 0x58);
      *(undefined1 *)(lVar3 + 0x5c) = *(undefined1 *)(lVar2 + 0x5c);
      lVar9 = lVar9 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c4e17a FUN_148c4e17a body=59 status=ok
// SIG undefined FUN_148c4e17a(void)

undefined8 FUN_148c4e17a(longlong *param_1)

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



// FUNCTION 148c4e218 FUN_148c4e218 body=52 status=ok
// SIG undefined FUN_148c4e218(void)

void FUN_148c4e218(longlong param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148c4e24c FUN_148c4e24c body=47 status=ok
// SIG undefined FUN_148c4e24c(void)

void FUN_148c4e24c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_1400b22c2(param_2,&DAT_149e02088);
  *(undefined1 *)(param_2 + 2) = 0;
  return;
}



// FUNCTION 148c4e27c FUN_148c4e27c body=33 status=ok
// SIG undefined FUN_148c4e27c(void)

void FUN_148c4e27c(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 148c4e2c2 FUN_148c4e2c2 body=60 status=ok
// SIG undefined FUN_148c4e2c2(void)

undefined1 FUN_148c4e2c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 148c4e326 FUN_148c4e326 body=59 status=ok
// SIG undefined FUN_148c4e326(void)

undefined8 FUN_148c4e326(longlong *param_1)

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



// FUNCTION 148c4e36c FUN_148c4e36c body=37 status=ok
// SIG undefined FUN_148c4e36c(void)

void FUN_148c4e36c(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148c4e410 FUN_148c4e410 body=63 status=ok
// SIG undefined FUN_148c4e410(void)

undefined1 FUN_148c4e410(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4e582(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148c4e478 FUN_148c4e478 body=59 status=ok
// SIG undefined FUN_148c4e478(void)

undefined8 FUN_148c4e478(longlong *param_1)

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



// FUNCTION 148c4e4c4 FUN_148c4e4c4 body=38 status=ok
// SIG undefined FUN_148c4e4c4(void)

void FUN_148c4e4c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_148c4e538(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148c4e538 FUN_148c4e538 body=73 status=ok
// SIG undefined FUN_148c4e538(void)

void FUN_148c4e538(longlong *param_1)

{
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1458d82dc(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c4e570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148c4e582 FUN_148c4e582 body=130 status=ok
// SIG undefined FUN_148c4e582(void)

longlong * FUN_148c4e582(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  FUN_145a0339c(param_1 + 4,param_2 + 4);
  FUN_144a787a6(param_1 + 0xd,param_2 + 0xd);
  *(char *)(param_1 + 0xf) = (char)param_2[0xf];
  param_1[0x10] = param_2[0x10];
  return param_1;
}



// FUNCTION 148c4e634 FUN_148c4e634 body=54 status=ok
// SIG undefined FUN_148c4e634(void)

undefined1 FUN_148c4e634(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4e7a2(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148c4e692 FUN_148c4e692 body=59 status=ok
// SIG undefined FUN_148c4e692(void)

undefined8 FUN_148c4e692(longlong *param_1)

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



// FUNCTION 148c4e6d8 FUN_148c4e6d8 body=32 status=ok
// SIG undefined FUN_148c4e6d8(void)

void FUN_148c4e6d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_148c4e746(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148c4e746 FUN_148c4e746 body=92 status=ok
// SIG undefined FUN_148c4e746(void)

void FUN_148c4e746(longlong param_1)

{
  FUN_1407ddd8e(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  }
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c4e797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148c4e7a2 FUN_148c4e7a2 body=225 status=ok
// SIG undefined FUN_148c4e7a2(void)

undefined8 * FUN_148c4e7a2(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  plVar1 = (longlong *)param_2[1];
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != plVar1) {
    param_1[1] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  plVar1 = (longlong *)param_2[3];
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != plVar1) {
    param_1[3] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  plVar1 = (longlong *)param_2[5];
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != plVar1) {
    param_1[5] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar4 = *(undefined4 *)(param_2 + 8);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar5;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  FUN_148c4e884(param_1 + 10,param_2 + 10);
  uVar6 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar6;
  return param_1;
}



// FUNCTION 148c4e884 FUN_148c4e884 body=93 status=ok
// SIG undefined FUN_148c4e884(void)

undefined8 * FUN_148c4e884(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1407ddd8e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c4e8e2(param_1,iVar1);
      FUN_148c4e958(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c4e8e2 FUN_148c4e8e2 body=118 status=ok
// SIG undefined FUN_148c4e8e2(void)

void FUN_148c4e8e2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x88,8);
    iVar2 = (int)(uVar1 / 0x88);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x88,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c4e958 FUN_148c4e958 body=60 status=ok
// SIG undefined FUN_148c4e958(void)

void FUN_148c4e958(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c4e994(param_1,param_2);
    param_1 = param_1 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return;
}



// FUNCTION 148c4e994 FUN_148c4e994 body=222 status=ok
// SIG undefined FUN_148c4e994(void)

longlong * FUN_148c4e994(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  param_1[2] = 0;
  iVar1 = (int)param_2[3];
  pvVar3 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar3,(longlong)iVar1 * 2);
  }
  FUN_145a03fbe(param_1 + 4,param_2 + 4);
  param_1[0xd] = 0;
  iVar1 = (int)param_2[0xe];
  pvVar3 = (void *)param_2[0xd];
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xd,iVar1,0);
    memcpy((void *)param_1[0xd],pvVar3,(longlong)iVar1 * 2);
  }
  *(char *)(param_1 + 0xf) = (char)param_2[0xf];
  param_1[0x10] = param_2[0x10];
  return param_1;
}



// FUNCTION 148c4ea74 FUN_148c4ea74 body=29 status=ok
// SIG undefined FUN_148c4ea74(void)

void FUN_148c4ea74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140e82300();
  FUN_14128f2b0(param_2,uVar1);
  return;
}



// FUNCTION 148c4ea92 FUN_148c4ea92 body=29 status=ok
// SIG undefined FUN_148c4ea92(void)

void FUN_148c4ea92(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140e82300();
  FUN_14128f2b0(param_2,uVar1);
  return;
}



// FUNCTION 148c4eace FUN_148c4eace body=54 status=ok
// SIG undefined FUN_148c4eace(void)

undefined1 FUN_148c4eace(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4ec2e(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148c4eb2c FUN_148c4eb2c body=59 status=ok
// SIG undefined FUN_148c4eb2c(void)

undefined8 FUN_148c4eb2c(longlong *param_1)

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



// FUNCTION 148c4eb72 FUN_148c4eb72 body=32 status=ok
// SIG undefined FUN_148c4eb72(void)

void FUN_148c4eb72(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_148c4ebe0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148c4ebe0 FUN_148c4ebe0 body=78 status=ok
// SIG undefined FUN_148c4ebe0(void)

void FUN_148c4ebe0(longlong *param_1)

{
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c4ec23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148c4ec2e FUN_148c4ec2e body=194 status=ok
// SIG undefined FUN_148c4ec2e(void)

longlong * FUN_148c4ec2e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  *(int *)(param_1 + 5) = (int)param_2[5];
  param_1[4] = param_2[4];
  plVar1 = (longlong *)param_2[6];
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != plVar1) {
    param_1[6] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 7) = (int)param_2[7];
  *(short *)(param_1 + 8) = (short)param_2[8];
  *(undefined1 *)((longlong)param_1 + 0x42) = *(undefined1 *)((longlong)param_2 + 0x42);
  FUN_148b9e3fa(param_1 + 9,param_2 + 9);
  FUN_148c4ecf0(param_1 + 0xb,param_2 + 0xb);
  return param_1;
}



// FUNCTION 148c4ecf0 FUN_148c4ecf0 body=84 status=ok
// SIG undefined FUN_148c4ecf0(void)

longlong * FUN_148c4ecf0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148c4ed74 FUN_148c4ed74 body=54 status=ok
// SIG undefined FUN_148c4ed74(void)

undefined1 FUN_148c4ed74(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4ee88(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148c4edd2 FUN_148c4edd2 body=59 status=ok
// SIG undefined FUN_148c4edd2(void)

undefined8 FUN_148c4edd2(longlong *param_1)

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



// FUNCTION 148c4ee18 FUN_148c4ee18 body=34 status=ok
// SIG undefined FUN_148c4ee18(void)

void FUN_148c4ee18(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1459421b4(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148c4ee88 FUN_148c4ee88 body=153 status=ok
// SIG undefined FUN_148c4ee88(void)

longlong * FUN_148c4ee88(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  plVar1 = (longlong *)param_2[2];
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != plVar1) {
    param_1[2] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  FUN_148c4e884(param_1 + 4,param_2 + 4);
  FUN_148c4ef22(param_1 + 6,param_2 + 6);
  *(char *)(param_1 + 8) = (char)param_2[8];
  return param_1;
}



// FUNCTION 148c4ef22 FUN_148c4ef22 body=95 status=ok
// SIG undefined FUN_148c4ef22(void)

undefined8 * FUN_148c4ef22(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14594221d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c4ef82(param_1,iVar1);
      FUN_148c4eff5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c4ef82 FUN_148c4ef82 body=115 status=ok
// SIG undefined FUN_148c4ef82(void)

void FUN_148c4ef82(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c4eff5 FUN_148c4eff5 body=124 status=ok
// SIG undefined FUN_148c4eff5(void)

void FUN_148c4eff5(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined1 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined1 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = *(int *)(puVar2 + -8);
      _Src = *(void **)(puVar2 + -0x10);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      *(undefined1 *)(param_1 + 2) = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c4f0ba FUN_148c4f0ba body=54 status=ok
// SIG undefined FUN_148c4f0ba(void)

undefined1 FUN_148c4f0ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4f1ce(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148c4f118 FUN_148c4f118 body=59 status=ok
// SIG undefined FUN_148c4f118(void)

undefined8 FUN_148c4f118(longlong *param_1)

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



// FUNCTION 148c4f15e FUN_148c4f15e body=34 status=ok
// SIG undefined FUN_148c4f15e(void)

void FUN_148c4f15e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_145747bb4(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148c4f1ce FUN_148c4f1ce body=148 status=ok
// SIG undefined FUN_148c4f1ce(void)

longlong FUN_148c4f1ce(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_144a787a6();
  plVar1 = *(longlong **)(param_2 + 0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  plVar1 = *(longlong **)(param_2 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x20) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  FUN_148c4f262(param_1 + 0x30,param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  return param_1;
}



// FUNCTION 148c4f262 FUN_148c4f262 body=93 status=ok
// SIG undefined FUN_148c4f262(void)

undefined8 * FUN_148c4f262(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1407ddd26(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c4f2c0(param_1,iVar1);
      FUN_148c4f32f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c4f2c0 FUN_148c4f2c0 body=111 status=ok
// SIG undefined FUN_148c4f2c0(void)

void FUN_148c4f2c0(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c4f32f FUN_148c4f32f body=52 status=ok
// SIG undefined FUN_148c4f32f(void)

void FUN_148c4f32f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c4f364(param_1,param_2);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 148c4f364 FUN_148c4f364 body=197 status=ok
// SIG undefined FUN_148c4f364(void)

undefined8 * FUN_148c4f364(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = *param_2;
  plVar2 = (longlong *)param_2[1];
  param_1[1] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  plVar2 = (longlong *)param_2[3];
  param_1[3] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  plVar2 = (longlong *)param_2[5];
  param_1[5] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar5 = *(undefined4 *)(param_2 + 8);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 8) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar6;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  uVar3 = param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_148c4e8e2(param_1 + 10,iVar1,0);
    FUN_148c4e958(param_1[10],uVar3,iVar1);
  }
  uVar3 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar3;
  return param_1;
}



// FUNCTION 148c4f45e FUN_148c4f45e body=63 status=ok
// SIG undefined FUN_148c4f45e(void)

undefined1 FUN_148c4f45e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4f5c0(param_2,param_3);
    param_3 = param_3 + 0x218;
    param_2 = param_2 + 0x218;
  }
  return 1;
}



// FUNCTION 148c4f4c6 FUN_148c4f4c6 body=59 status=ok
// SIG undefined FUN_148c4f4c6(void)

undefined8 FUN_148c4f4c6(longlong *param_1)

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



// FUNCTION 148c4f512 FUN_148c4f512 body=38 status=ok
// SIG undefined FUN_148c4f512(void)

void FUN_148c4f512(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x218) == '\x01') {
    FUN_1401dfe9e(param_2);
    *(undefined1 *)(param_2 + 0x218) = 0;
  }
  return;
}



// FUNCTION 148c4f586 FUN_148c4f586 body=57 status=ok
// SIG undefined FUN_148c4f586(void)

void FUN_148c4f586(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb0908 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb0908 = FUN_140002ddd(FUN_1465f1a0d,uVar1,L"OakWidgetData_ChallengeMenu");
  }
  return;
}



// FUNCTION 148c4f5c0 FUN_148c4f5c0 body=389 status=ok
// SIG undefined FUN_148c4f5c0(void)

longlong FUN_148c4f5c0(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xb4) != *(int *)(param_2 + 0xb4)) {
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  }
  if (*(int *)(param_1 + 200) != *(int *)(param_2 + 200) || *(int *)(param_1 + 200) == 0) {
    *(int *)(param_1 + 200) = *(int *)(param_2 + 200);
    FUN_148c4f746(param_1 + 0xb8,param_2 + 0xb8);
  }
  if (*(int *)(param_1 + 0xd4) != *(int *)(param_2 + 0xd4)) {
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  }
  if (*(int *)(param_1 + 0x120) != *(int *)(param_2 + 0x120)) {
    FUN_148c4f1ce(param_1 + 0xd8,param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  }
  if (*(int *)(param_1 + 0x170) != *(int *)(param_2 + 0x170)) {
    FUN_148c4ee88(param_1 + 0x128,param_2 + 0x128);
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  }
  if (*(int *)(param_1 + 0x17c) != *(int *)(param_2 + 0x17c)) {
    *(undefined1 *)(param_1 + 0x178) = *(undefined1 *)(param_2 + 0x178);
    *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
  }
  FUN_140b855d0(param_1 + 0x180,param_2 + 0x180);
  FUN_140bee9ec(param_1 + 0x1d0,param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  FUN_148c4f262(param_1 + 0x1e8,param_2 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x1f8);
  FUN_144a787a6(param_1 + 0x200,param_2 + 0x200);
  *(undefined1 *)(param_1 + 0x210) = *(undefined1 *)(param_2 + 0x210);
  return param_1;
}



// FUNCTION 148c4f746 FUN_148c4f746 body=93 status=ok
// SIG undefined FUN_148c4f746(void)

undefined8 * FUN_148c4f746(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141507c39(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c4f7a4(param_1,iVar1);
      FUN_148c4f813(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c4f7a4 FUN_148c4f7a4 body=111 status=ok
// SIG undefined FUN_148c4f7a4(void)

void FUN_148c4f7a4(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c4f813 FUN_148c4f813 body=52 status=ok
// SIG undefined FUN_148c4f813(void)

void FUN_148c4f813(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c4f848(param_1,param_2);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 148c4f848 FUN_148c4f848 body=260 status=ok
// SIG undefined FUN_148c4f848(void)

longlong * FUN_148c4f848(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  longlong lVar3;
  
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  param_1[2] = 0;
  iVar1 = (int)param_2[3];
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  param_1[4] = param_2[4];
  plVar2 = (longlong *)param_2[6];
  param_1[6] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 7) = (int)param_2[7];
  *(short *)(param_1 + 8) = (short)param_2[8];
  *(undefined1 *)((longlong)param_1 + 0x42) = *(undefined1 *)((longlong)param_2 + 0x42);
  param_1[9] = 0;
  iVar1 = (int)param_2[10];
  lVar3 = param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_141240f04(param_1 + 9,iVar1,0);
    FUN_141240ed8(param_1[9],lVar3,iVar1);
  }
  FUN_14405b362(param_1 + 0xb,param_2 + 0xb);
  return param_1;
}



// FUNCTION 148c4f94e FUN_148c4f94e body=37 status=ok
// SIG undefined FUN_148c4f94e(void)

void FUN_148c4f94e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x120);
  FUN_1418d07d6(param_2);
  return;
}



// FUNCTION 148c4f99a FUN_148c4f99a body=63 status=ok
// SIG undefined FUN_148c4f99a(void)

undefined1 FUN_148c4f99a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4fac2(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 148c4fa02 FUN_148c4fa02 body=59 status=ok
// SIG undefined FUN_148c4fa02(void)

undefined8 FUN_148c4fa02(longlong *param_1)

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



// FUNCTION 148c4fa4e FUN_148c4fa4e body=38 status=ok
// SIG undefined FUN_148c4fa4e(void)

void FUN_148c4fa4e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_140ee5626(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 148c4fac2 FUN_148c4fac2 body=328 status=ok
// SIG undefined FUN_148c4fac2(void)

undefined4 * FUN_148c4fac2(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  FUN_144a787a6(param_1 + 6,param_2 + 6);
  FUN_144a787a6(param_1 + 10,param_2 + 10);
  uVar6 = param_2[0xf];
  uVar7 = param_2[0x10];
  uVar8 = param_2[0x11];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar6;
  param_1[0x10] = uVar7;
  param_1[0x11] = uVar8;
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  FUN_144a787a6(param_1 + 0x14,param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar6 = param_2[0x1b];
  uVar7 = param_2[0x1c];
  uVar8 = param_2[0x1d];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar6;
  param_1[0x1c] = uVar7;
  param_1[0x1d] = uVar8;
  FUN_144a787a6(param_1 + 0x1e,param_2 + 0x1e);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  FUN_144a787a6(param_1 + 0x24,param_2 + 0x24);
  uVar6 = param_2[0x29];
  uVar7 = param_2[0x2a];
  uVar8 = param_2[0x2b];
  uVar9 = param_2[0x2c];
  uVar10 = param_2[0x2d];
  uVar11 = param_2[0x2e];
  uVar12 = param_2[0x2f];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = uVar6;
  param_1[0x2a] = uVar7;
  param_1[0x2b] = uVar8;
  param_1[0x2c] = uVar9;
  param_1[0x2d] = uVar10;
  param_1[0x2e] = uVar11;
  param_1[0x2f] = uVar12;
  param_1[0x30] = param_2[0x30];
  param_1[0x32] = param_2[0x32];
  FUN_1447715ec(param_1 + 0x34,param_2 + 0x34);
  FUN_144a787a6(param_1 + 0x3e,param_2 + 0x3e);
  *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(param_2 + 0x42);
  uVar3 = *(undefined8 *)(param_2 + 0x44);
  lVar4 = *(longlong *)(param_2 + 0x46);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x46);
  *(undefined8 *)(param_1 + 0x44) = uVar3;
  *(longlong *)(param_1 + 0x46) = lVar4;
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
  return param_1;
}



// FUNCTION 148c4fc74 FUN_148c4fc74 body=59 status=ok
// SIG undefined FUN_148c4fc74(void)

undefined8 FUN_148c4fc74(longlong *param_1)

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



// FUNCTION 148c4fd14 FUN_148c4fd14 body=29 status=ok
// SIG undefined FUN_148c4fd14(void)

undefined8 FUN_148c4fd14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4fd32 FUN_148c4fd32 body=55 status=ok
// SIG undefined FUN_148c4fd32(void)

void FUN_148c4fd32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb0a28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb0a28 = FUN_140002ddd(FUN_1465f1b99,uVar1,L"OakUICustomization_Details");
  }
  return;
}



// FUNCTION 148c4fd6a FUN_148c4fd6a body=121 status=ok
// SIG undefined FUN_148c4fd6a(void)

void FUN_148c4fd6a(undefined8 param_1,undefined8 *param_2)

{
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14b81be08;
  FUN_1400b22c2(param_2 + 1,&DAT_149e02088);
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined2 *)(param_2 + 0xc) = 0;
  *(undefined1 *)(param_2 + 0xd) = 0;
  *(undefined1 *)(param_2 + 0xe) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  return;
}



// FUNCTION 148c4fde4 FUN_148c4fde4 body=79 status=ok
// SIG undefined FUN_148c4fde4(void)

void FUN_148c4fde4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b81be08;
  FUN_1400b22c2(param_2 + 1,&DAT_149e02088);
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined2 *)(param_2 + 0xc) = 0;
  *(undefined1 *)(param_2 + 0xd) = 0;
  *(undefined1 *)(param_2 + 0xe) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  return;
}



// FUNCTION 148c4fe58 FUN_148c4fe58 body=63 status=ok
// SIG undefined FUN_148c4fe58(void)

undefined1 FUN_148c4fe58(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c5003c(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148c4fec0 FUN_148c4fec0 body=59 status=ok
// SIG undefined FUN_148c4fec0(void)

undefined8 FUN_148c4fec0(longlong *param_1)

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



// FUNCTION 148c4ff0c FUN_148c4ff0c body=38 status=ok
// SIG undefined FUN_148c4ff0c(void)

void FUN_148c4ff0c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_148c4ffb8(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148c4ff80 FUN_148c4ff80 body=55 status=ok
// SIG undefined FUN_148c4ff80(void)

void FUN_148c4ff80(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb0a40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb0a40 = FUN_140002ddd(FUN_1465f1c2f,uVar1,L"OakUICustomization_Option_ActorPart");
  }
  return;
}



// FUNCTION 148c4ffb8 FUN_148c4ffb8 body=131 status=ok
// SIG undefined FUN_148c4ffb8(void)

void FUN_148c4ffb8(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b81be08;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 9;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xd) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xc)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xc)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c5003c FUN_148c5003c body=89 status=ok
// SIG undefined FUN_148c5003c(void)

longlong FUN_148c5003c(longlong param_1,longlong param_2)

{
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  FUN_1409e3b3c(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x40,param_2 + 0x40);
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  return param_1;
}



// FUNCTION 148c50096 FUN_148c50096 body=37 status=ok
// SIG undefined FUN_148c50096(void)

void FUN_148c50096(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb0);
  FUN_1465f2b94(param_2);
  return;
}



// FUNCTION 148c500e2 FUN_148c500e2 body=63 status=ok
// SIG undefined FUN_148c500e2(void)

undefined1 FUN_148c500e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c5020c(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 148c5014a FUN_148c5014a body=59 status=ok
// SIG undefined FUN_148c5014a(void)

undefined8 FUN_148c5014a(longlong *param_1)

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



// FUNCTION 148c50196 FUN_148c50196 body=40 status=ok
// SIG undefined FUN_148c50196(void)

void FUN_148c50196(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_145da38f8(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148c5020c FUN_148c5020c body=125 status=ok
// SIG undefined FUN_148c5020c(void)

longlong FUN_148c5020c(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_1447715ec(param_1 + 0x20,param_2 + 0x20);
  FUN_148c5028a(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  FUN_1447715ec(param_1 + 0x78,param_2 + 0x78);
  FUN_144a787a6(param_1 + 0xa0,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 148c5028a FUN_148c5028a body=93 status=ok
// SIG undefined FUN_148c5028a(void)

undefined8 * FUN_148c5028a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14154ca0d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145b2a9a0(param_1,iVar1);
      FUN_1414c8b3b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c50316 FUN_148c50316 body=63 status=ok
// SIG undefined FUN_148c50316(void)

undefined1 FUN_148c50316(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c5043e(param_2,param_3);
    param_3 = param_3 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return 1;
}



// FUNCTION 148c5037e FUN_148c5037e body=59 status=ok
// SIG undefined FUN_148c5037e(void)

undefined8 FUN_148c5037e(longlong *param_1)

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



// FUNCTION 148c503ca FUN_148c503ca body=38 status=ok
// SIG undefined FUN_148c503ca(void)

void FUN_148c503ca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_1418d0924(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 148c5043e FUN_148c5043e body=258 status=ok
// SIG undefined FUN_148c5043e(void)

longlong FUN_148c5043e(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_140ae1244(param_1 + 0x10,param_2 + 0x10);
  FUN_140ae1244(param_1 + 0x28,param_2 + 0x28);
  FUN_140ae1244(param_1 + 0x40,param_2 + 0x40);
  FUN_140ae1244(param_1 + 0x58,param_2 + 0x58);
  FUN_140ae1244(param_1 + 0x70,param_2 + 0x70);
  if (*(int *)(param_1 + 0x98) != *(int *)(param_2 + 0x98)) {
    FUN_144a787a6(param_1 + 0x88,param_2 + 0x88);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  }
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_2 + 0xb0)) {
    FUN_144a787a6(param_1 + 0xa0,param_2 + 0xa0);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  }
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_140d895f4(param_1 + 200,param_2 + 200);
  FUN_148c50540(param_1 + 0xe0,param_2 + 0xe0);
  FUN_148c50540(param_1 + 0xf8,param_2 + 0xf8);
  return param_1;
}



// FUNCTION 148c50540 FUN_148c50540 body=84 status=ok
// SIG undefined FUN_148c50540(void)

longlong * FUN_148c50540(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148c50634 FUN_148c50634 body=59 status=ok
// SIG undefined FUN_148c50634(void)

undefined8 FUN_148c50634(longlong *param_1)

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



// FUNCTION 148c506d6 FUN_148c506d6 body=61 status=ok
// SIG undefined FUN_148c506d6(void)

void FUN_148c506d6(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x84);
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0xffffffff00000080;
  *(undefined1 *)((longlong)param_2 + 0x80) = 1;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0;
  return;
}



// FUNCTION 148c50760 FUN_148c50760 body=46 status=ok
// SIG undefined FUN_148c50760(void)

void FUN_148c50760(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x78) = 0;
  if (*(longlong *)(param_2 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_145c18188(param_2 + 0x30);
  return;
}



// FUNCTION 148c507a4 FUN_148c507a4 body=63 status=ok
// SIG undefined FUN_148c507a4(void)

undefined1 FUN_148c507a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c508e4(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148c5080c FUN_148c5080c body=59 status=ok
// SIG undefined FUN_148c5080c(void)

undefined8 FUN_148c5080c(longlong *param_1)

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



// FUNCTION 148c50858 FUN_148c50858 body=62 status=ok
// SIG undefined FUN_148c50858(void)

void FUN_148c50858(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    *(undefined4 *)(param_2 + 0x78) = 0;
    if (*(longlong *)(param_2 + 0x70) != 0) {
      FUN_1400020a8();
    }
    FUN_145c18188(param_2 + 0x30);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148c508e4 FUN_148c508e4 body=199 status=ok
// SIG undefined FUN_148c508e4(void)

undefined4 * FUN_148c508e4(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1[1] != param_2[1]) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  if (param_1[3] != param_2[3]) {
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  if (param_1[5] != param_2[5]) {
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
  }
  if (param_1[7] != param_2[7]) {
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
    param_1[7] = param_2[7];
  }
  if (param_1[9] != param_2[9]) {
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    param_1[9] = param_2[9];
  }
  if (param_1[0xb] != param_2[0xb]) {
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
    param_1[0xb] = param_2[0xb];
  }
  FUN_148c509ac(param_1 + 0xc,param_2 + 0xc);
  if (param_1[0x21] != param_2[0x21]) {
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    param_1[0x21] = param_2[0x21];
  }
  return param_1;
}



// FUNCTION 148c509ac FUN_148c509ac body=122 status=ok
// SIG undefined FUN_148c509ac(void)

longlong FUN_148c509ac(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_148c50a26(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c50a26 FUN_148c50a26 body=121 status=ok
// SIG undefined FUN_148c50a26(void)

undefined8 * FUN_148c50a26(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145c181c0(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140044672(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x30);
    }
  }
  return param_1;
}



// FUNCTION 148c50aa0 FUN_148c50aa0 body=88 status=ok
// SIG undefined FUN_148c50aa0(void)

void FUN_148c50aa0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd0);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b819040;
  *(undefined4 *)(param_2 + 0x16) = 0;
  *(undefined2 *)((longlong)param_2 + 0xb4) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  return;
}



// FUNCTION 148c50af8 FUN_148c50af8 body=72 status=ok
// SIG undefined FUN_148c50af8(void)

void FUN_148c50af8(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b819040;
  *(undefined4 *)(param_2 + 0x16) = 0;
  *(undefined2 *)((longlong)param_2 + 0xb4) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  return;
}



// FUNCTION 148c50b64 FUN_148c50b64 body=99 status=ok
// SIG undefined FUN_148c50b64(void)

undefined1 FUN_148c50b64(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xb4);
    uVar2 = *(undefined4 *)(param_3 + 0xb8);
    uVar3 = *(undefined4 *)(param_3 + 0xbc);
    *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_3 + 0xb0);
    *(undefined4 *)(param_2 + 0xb4) = uVar1;
    *(undefined4 *)(param_2 + 0xb8) = uVar2;
    *(undefined4 *)(param_2 + 0xbc) = uVar3;
    FUN_144a787a6(param_2 + 0xc0,param_3 + 0xc0);
    param_2 = param_2 + 0xd0;
    param_3 = param_3 + 0xd0;
  }
  return 1;
}



// FUNCTION 148c50bf0 FUN_148c50bf0 body=59 status=ok
// SIG undefined FUN_148c50bf0(void)

undefined8 FUN_148c50bf0(longlong *param_1)

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



// FUNCTION 148c50c3c FUN_148c50c3c body=65 status=ok
// SIG undefined FUN_148c50c3c(void)

void FUN_148c50c3c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1a) == '\x01') {
    *param_2 = &PTR_FUN_14b819040;
    if (param_2[0x18] != 0) {
      FUN_1400020a8();
    }
    FUN_140fe7f26(param_2);
    *(undefined1 *)(param_2 + 0x1a) = 0;
  }
  return;
}



// FUNCTION 148c50d1a FUN_148c50d1a body=54 status=ok
// SIG undefined FUN_148c50d1a(void)

undefined1 FUN_148c50d1a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c50e2c(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148c50d78 FUN_148c50d78 body=59 status=ok
// SIG undefined FUN_148c50d78(void)

undefined8 FUN_148c50d78(longlong *param_1)

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



// FUNCTION 148c50dbe FUN_148c50dbe body=32 status=ok
// SIG undefined FUN_148c50dbe(void)

void FUN_148c50dbe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_140c12e4c(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148c50e2c FUN_148c50e2c body=180 status=ok
// SIG undefined FUN_148c50e2c(void)

longlong FUN_148c50e2c(longlong param_1,longlong param_2)

{
  if (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10)) {
    FUN_144a787a6(param_1,param_2);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  }
  if (*(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x1c)) {
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  }
  if (*(int *)(param_1 + 0x24) != *(int *)(param_2 + 0x24)) {
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  }
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_2 + 0x2c)) {
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  }
  if (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40)) {
    FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  }
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  FUN_144a787a6(param_1 + 0x58,param_2 + 0x58);
  if (*(int *)(param_1 + 0x6c) != *(int *)(param_2 + 0x6c)) {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  }
  return param_1;
}



// FUNCTION 148c50ee2 FUN_148c50ee2 body=51 status=ok
// SIG undefined FUN_148c50ee2(void)

void FUN_148c50ee2(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(param_2 + 1,&DAT_14c9485f0);
  *(undefined4 *)(param_2 + 6) = 2;
  *(undefined1 *)((longlong)param_2 + 0x34) = 0;
  return;
}



// FUNCTION 148c50f16 FUN_148c50f16 body=51 status=ok
// SIG undefined FUN_148c50f16(void)

void FUN_148c50f16(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(param_2 + 1,&DAT_14c9485f0);
  *(undefined4 *)(param_2 + 6) = 2;
  *(undefined1 *)((longlong)param_2 + 0x34) = 0;
  return;
}



// FUNCTION 148c50f6e FUN_148c50f6e body=101 status=ok
// SIG undefined FUN_148c50f6e(void)

undefined8 FUN_148c50f6e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1447715ec(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x30 + lVar1) = *(undefined4 *)(param_3 + 0x30 + lVar1);
      *(undefined1 *)(param_2 + 0x34 + lVar1) = *(undefined1 *)(param_3 + 0x34 + lVar1);
      lVar1 = lVar1 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c50ffc FUN_148c50ffc body=59 status=ok
// SIG undefined FUN_148c50ffc(void)

undefined8 FUN_148c50ffc(longlong *param_1)

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



// FUNCTION 148c51042 FUN_148c51042 body=50 status=ok
// SIG undefined FUN_148c51042(void)

void FUN_148c51042(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14b8194d0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 148c510c2 FUN_148c510c2 body=59 status=ok
// SIG undefined FUN_148c510c2(void)

undefined8 * FUN_148c510c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b8194d0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c510fe FUN_148c510fe body=55 status=ok
// SIG undefined FUN_148c510fe(void)

void FUN_148c510fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb0b58 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb0b58 = FUN_140002ddd(FUN_1465f2079,uVar1,L"OakMissionTransaction");
  }
  return;
}



// FUNCTION 148c51136 FUN_148c51136 body=69 status=ok
// SIG undefined FUN_148c51136(void)

void FUN_148c51136(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(param_2 + 1,&DAT_14c9485f0);
  *(undefined4 *)(param_2 + 6) = 2;
  *(undefined1 *)((longlong)param_2 + 0x34) = 0;
  *param_2 = &PTR_FUN_14b819640;
  param_2[7] = 0;
  return;
}



// FUNCTION 148c5117c FUN_148c5117c body=69 status=ok
// SIG undefined FUN_148c5117c(void)

void FUN_148c5117c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(param_2 + 1,&DAT_14c9485f0);
  *(undefined4 *)(param_2 + 6) = 2;
  *(undefined1 *)((longlong)param_2 + 0x34) = 0;
  *param_2 = &PTR_FUN_14b819640;
  param_2[7] = 0;
  return;
}



// FUNCTION 148c511e6 FUN_148c511e6 body=111 status=ok
// SIG undefined FUN_148c511e6(void)

undefined8 FUN_148c511e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1447715ec(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x30 + lVar1) = *(undefined4 *)(param_3 + 0x30 + lVar1);
      *(undefined1 *)(param_2 + 0x34 + lVar1) = *(undefined1 *)(param_3 + 0x34 + lVar1);
      *(undefined8 *)(param_2 + 0x38 + lVar1) = *(undefined8 *)(param_3 + 0x38 + lVar1);
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c5127e FUN_148c5127e body=59 status=ok
// SIG undefined FUN_148c5127e(void)

undefined8 FUN_148c5127e(longlong *param_1)

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



// FUNCTION 148c512c4 FUN_148c512c4 body=50 status=ok
// SIG undefined FUN_148c512c4(void)

void FUN_148c512c4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b8194d0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 148c51344 FUN_148c51344 body=57 status=ok
// SIG undefined FUN_148c51344(void)

void FUN_148c51344(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb0b70 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb0b70 = FUN_140002ddd(FUN_1465f20da,uVar1,L"OakMissionTransaction_Fact");
  }
  return;
}



// FUNCTION 148c5137e FUN_148c5137e body=65 status=ok
// SIG undefined FUN_148c5137e(void)

void FUN_148c5137e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(param_2 + 1,&DAT_14c9485f0);
  *(undefined4 *)(param_2 + 6) = 2;
  *(undefined1 *)((longlong)param_2 + 0x34) = 0;
  *param_2 = &PTR_FUN_14b8197b0;
  *(undefined1 *)(param_2 + 7) = 0;
  return;
}



// FUNCTION 148c513c0 FUN_148c513c0 body=65 status=ok
// SIG undefined FUN_148c513c0(void)

void FUN_148c513c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(param_2 + 1,&DAT_14c9485f0);
  *(undefined4 *)(param_2 + 6) = 2;
  *(undefined1 *)((longlong)param_2 + 0x34) = 0;
  *param_2 = &PTR_FUN_14b8197b0;
  *(undefined1 *)(param_2 + 7) = 0;
  return;
}



// FUNCTION 148c51426 FUN_148c51426 body=111 status=ok
// SIG undefined FUN_148c51426(void)

undefined8 FUN_148c51426(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1447715ec(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x30 + lVar1) = *(undefined4 *)(param_3 + 0x30 + lVar1);
      *(undefined1 *)(param_2 + 0x34 + lVar1) = *(undefined1 *)(param_3 + 0x34 + lVar1);
      *(undefined1 *)(param_2 + 0x38 + lVar1) = *(undefined1 *)(param_3 + 0x38 + lVar1);
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c514be FUN_148c514be body=59 status=ok
// SIG undefined FUN_148c514be(void)

undefined8 FUN_148c514be(longlong *param_1)

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



// FUNCTION 148c51504 FUN_148c51504 body=50 status=ok
// SIG undefined FUN_148c51504(void)

void FUN_148c51504(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b8194d0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 148c51586 FUN_148c51586 body=69 status=ok
// SIG undefined FUN_148c51586(void)

void FUN_148c51586(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(param_2 + 1,&DAT_14c9485f0);
  *(undefined4 *)(param_2 + 6) = 2;
  *(undefined1 *)((longlong)param_2 + 0x34) = 0;
  *param_2 = &PTR_FUN_14b819920;
  param_2[7] = 0;
  return;
}



// FUNCTION 148c515cc FUN_148c515cc body=69 status=ok
// SIG undefined FUN_148c515cc(void)

void FUN_148c515cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(param_2 + 1,&DAT_14c9485f0);
  *(undefined4 *)(param_2 + 6) = 2;
  *(undefined1 *)((longlong)param_2 + 0x34) = 0;
  *param_2 = &PTR_FUN_14b819920;
  param_2[7] = 0;
  return;
}



// FUNCTION 148c51636 FUN_148c51636 body=111 status=ok
// SIG undefined FUN_148c51636(void)

undefined8 FUN_148c51636(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1447715ec(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x30 + lVar1) = *(undefined4 *)(param_3 + 0x30 + lVar1);
      *(undefined1 *)(param_2 + 0x34 + lVar1) = *(undefined1 *)(param_3 + 0x34 + lVar1);
      *(undefined8 *)(param_2 + 0x38 + lVar1) = *(undefined8 *)(param_3 + 0x38 + lVar1);
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c516ce FUN_148c516ce body=59 status=ok
// SIG undefined FUN_148c516ce(void)

undefined8 FUN_148c516ce(longlong *param_1)

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



// FUNCTION 148c51714 FUN_148c51714 body=50 status=ok
// SIG undefined FUN_148c51714(void)

void FUN_148c51714(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b8194d0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 148c51794 FUN_148c51794 body=59 status=ok
// SIG undefined FUN_148c51794(void)

undefined8 * FUN_148c51794(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b8194d0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c517d0 FUN_148c517d0 body=55 status=ok
// SIG undefined FUN_148c517d0(void)

void FUN_148c517d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb0ba0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb0ba0 = FUN_140002ddd(FUN_1465f21d1,uVar1,L"OakMissionTransaction_Timer");
  }
  return;
}



// FUNCTION 148c51808 FUN_148c51808 body=68 status=ok
// SIG undefined FUN_148c51808(void)

void FUN_148c51808(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(param_2 + 1,&DAT_14c9485f0);
  *(undefined4 *)(param_2 + 6) = 2;
  *(undefined1 *)((longlong)param_2 + 0x34) = 0;
  *param_2 = &PTR_FUN_14b819a90;
  *(undefined4 *)(param_2 + 7) = 0;
  return;
}



// FUNCTION 148c5184c FUN_148c5184c body=68 status=ok
// SIG undefined FUN_148c5184c(void)

void FUN_148c5184c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(param_2 + 1,&DAT_14c9485f0);
  *(undefined4 *)(param_2 + 6) = 2;
  *(undefined1 *)((longlong)param_2 + 0x34) = 0;
  *param_2 = &PTR_FUN_14b819a90;
  *(undefined4 *)(param_2 + 7) = 0;
  return;
}



// FUNCTION 148c518b4 FUN_148c518b4 body=115 status=ok
// SIG undefined FUN_148c518b4(void)

undefined8 FUN_148c518b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1447715ec(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x30 + lVar1) = *(undefined4 *)(param_3 + 0x30 + lVar1);
      *(undefined1 *)(param_2 + 0x34 + lVar1) = *(undefined1 *)(param_3 + 0x34 + lVar1);
      *(undefined4 *)(param_2 + 0x38 + lVar1) = *(undefined4 *)(param_3 + 0x38 + lVar1);
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c51950 FUN_148c51950 body=59 status=ok
// SIG undefined FUN_148c51950(void)

undefined8 FUN_148c51950(longlong *param_1)

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



// FUNCTION 148c51996 FUN_148c51996 body=50 status=ok
// SIG undefined FUN_148c51996(void)

void FUN_148c51996(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b8194d0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 148c51a16 FUN_148c51a16 body=59 status=ok
// SIG undefined FUN_148c51a16(void)

undefined8 * FUN_148c51a16(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b8194d0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c51a52 FUN_148c51a52 body=55 status=ok
// SIG undefined FUN_148c51a52(void)

void FUN_148c51a52(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb0bb8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb0bb8 = FUN_140002ddd(FUN_1465f2267,uVar1,L"OakMissionTransaction_Percent");
  }
  return;
}



// FUNCTION 148c51ad4 FUN_148c51ad4 body=54 status=ok
// SIG undefined FUN_148c51ad4(void)

undefined1 FUN_148c51ad4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c51be8(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 148c51b32 FUN_148c51b32 body=59 status=ok
// SIG undefined FUN_148c51b32(void)

undefined8 FUN_148c51b32(longlong *param_1)

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



// FUNCTION 148c51b78 FUN_148c51b78 body=34 status=ok
// SIG undefined FUN_148c51b78(void)

void FUN_148c51b78(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_145926994(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148c51be8 FUN_148c51be8 body=117 status=ok
// SIG undefined FUN_148c51be8(void)

undefined8 * FUN_148c51be8(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 148c51c5e FUN_148c51c5e body=68 status=ok
// SIG undefined FUN_148c51c5e(void)

void FUN_148c51c5e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,200);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b819e50;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 148c51ca2 FUN_148c51ca2 body=52 status=ok
// SIG undefined FUN_148c51ca2(void)

void FUN_148c51ca2(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b819e50;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 148c51cfa FUN_148c51cfa body=63 status=ok
// SIG undefined FUN_148c51cfa(void)

undefined1 FUN_148c51cfa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c51e82(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 148c51d62 FUN_148c51d62 body=59 status=ok
// SIG undefined FUN_148c51d62(void)

undefined8 FUN_148c51d62(longlong *param_1)

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



// FUNCTION 148c51dae FUN_148c51dae body=40 status=ok
// SIG undefined FUN_148c51dae(void)

void FUN_148c51dae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_145ab932e(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 148c51e24 FUN_148c51e24 body=38 status=ok
// SIG undefined FUN_148c51e24(void)

undefined8 FUN_148c51e24(undefined8 param_1,int param_2)

{
  FUN_145ab932e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c51e4a FUN_148c51e4a body=55 status=ok
// SIG undefined FUN_148c51e4a(void)

void FUN_148c51e4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb0c28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb0c28 = FUN_140002ddd(FUN_1465f23c5,uVar1,L"OakUIBlackboard_PartyMembers");
  }
  return;
}



// FUNCTION 148c51e82 FUN_148c51e82 body=74 status=ok
// SIG undefined FUN_148c51e82(void)

longlong FUN_148c51e82(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  if ((*(int *)(param_1 + 0xc0) == 0) || (*(int *)(param_1 + 0xc0) != *(int *)(param_2 + 0xc0))) {
    *(int *)(param_1 + 0xc0) = *(int *)(param_2 + 0xc0);
    FUN_1458fe424(param_1 + 0xb0,param_2 + 0xb0);
  }
  return param_1;
}



// FUNCTION 148c51f32 FUN_148c51f32 body=80 status=ok
// SIG undefined FUN_148c51f32(void)

undefined8 FUN_148c51f32(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -0xb) = *(undefined8 *)((longlong)puVar1 + 0xd);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar3;
      *(undefined4 *)(lVar2 + -0x10) = uVar4;
      *(undefined4 *)(lVar2 + -0xc) = uVar5;
      FUN_144a787a6();
      lVar6 = lVar6 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c51faa FUN_148c51faa body=59 status=ok
// SIG undefined FUN_148c51faa(void)

undefined8 FUN_148c51faa(longlong *param_1)

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



// FUNCTION 148c51ff0 FUN_148c51ff0 body=38 status=ok
// SIG undefined FUN_148c51ff0(void)

void FUN_148c51ff0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148c52076 FUN_148c52076 body=44 status=ok
// SIG undefined FUN_148c52076(void)

void FUN_148c52076(undefined8 param_1,longlong *param_2)

{
  FUN_1458b964b(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c520b8 FUN_148c520b8 body=54 status=ok
// SIG undefined FUN_148c520b8(void)

undefined1 FUN_148c520b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1458b95ee(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148c52116 FUN_148c52116 body=59 status=ok
// SIG undefined FUN_148c52116(void)

undefined8 FUN_148c52116(longlong *param_1)

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



// FUNCTION 148c521b4 FUN_148c521b4 body=48 status=ok
// SIG undefined FUN_148c521b4(void)

void FUN_148c521b4(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1458b964b(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 148c52212 FUN_148c52212 body=63 status=ok
// SIG undefined FUN_148c52212(void)

undefined1 FUN_148c52212(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c52454(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 148c5227a FUN_148c5227a body=59 status=ok
// SIG undefined FUN_148c5227a(void)

undefined8 FUN_148c5227a(longlong *param_1)

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



// FUNCTION 148c522c6 FUN_148c522c6 body=38 status=ok
// SIG undefined FUN_148c522c6(void)

void FUN_148c522c6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_141286d76(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148c5233a FUN_148c5233a body=244 status=ok
// SIG undefined FUN_148c5233a(void)

longlong * FUN_148c5233a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[2] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 3) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[4] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 5) = (int)plVar2[1];
  FUN_140056680(param_1 + 6,&DAT_149dfb77a);
  FUN_140056680(param_1 + 8,&DAT_149dfb77a);
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_144a5dc74(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0xd) = 8;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xf8 | 5;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xfe;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return param_1;
}



// FUNCTION 148c5242e FUN_148c5242e body=38 status=ok
// SIG undefined FUN_148c5242e(void)

undefined8 FUN_148c5242e(undefined8 param_1,int param_2)

{
  FUN_141286efe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c52454 FUN_148c52454 body=331 status=ok
// SIG undefined FUN_148c52454(void)

longlong * FUN_148c52454(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  plVar1 = (longlong *)param_2[2];
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != plVar1) {
    param_1[2] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  plVar1 = (longlong *)param_2[4];
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != plVar1) {
    param_1[4] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  FUN_144a787a6(param_1 + 6,param_2 + 6);
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(int *)(param_1 + 10) = (int)param_2[10];
  FUN_145a0339c(param_1 + 0xb,param_2 + 0xb);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xa4);
  lVar5 = param_2[0x15];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xac);
  *(int *)(param_1 + 0x14) = (int)param_2[0x14];
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar3;
  *(int *)(param_1 + 0x15) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar4;
  param_1[0x16] = param_2[0x16];
  FUN_145916980(param_1 + 0x17,param_2 + 0x17);
  FUN_148c525a0(param_1 + 0x19,param_2 + 0x19);
  FUN_140bee9ec(param_1 + 0x1b,param_2 + 0x1b);
  return param_1;
}



// FUNCTION 148c525a0 FUN_148c525a0 body=93 status=ok
// SIG undefined FUN_148c525a0(void)

undefined8 * FUN_148c525a0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141286ed4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c525fe(param_1,iVar1);
      FUN_148c52670(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c525fe FUN_148c525fe body=114 status=ok
// SIG undefined FUN_148c525fe(void)

void FUN_148c525fe(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xd8,8);
    iVar2 = (int)(uVar1 / 0xd8);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xd8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c52670 FUN_148c52670 body=60 status=ok
// SIG undefined FUN_148c52670(void)

void FUN_148c52670(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1406fd608(param_1,param_2);
    param_1 = param_1 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return;
}



// FUNCTION 148c5272e FUN_148c5272e body=59 status=ok
// SIG undefined FUN_148c5272e(void)

undefined8 FUN_148c5272e(longlong *param_1)

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



// FUNCTION 148c527d0 FUN_148c527d0 body=37 status=ok
// SIG undefined FUN_148c527d0(void)

void FUN_148c527d0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,200);
  FUN_141355620(param_2);
  return;
}



// FUNCTION 148c5281c FUN_148c5281c body=63 status=ok
// SIG undefined FUN_148c5281c(void)

undefined1 FUN_148c5281c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1457d76be(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 148c52884 FUN_148c52884 body=59 status=ok
// SIG undefined FUN_148c52884(void)

undefined8 FUN_148c52884(longlong *param_1)

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



// FUNCTION 148c528d0 FUN_148c528d0 body=38 status=ok
// SIG undefined FUN_148c528d0(void)

void FUN_148c528d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_1465f2eca(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 148c5296c FUN_148c5296c body=46 status=ok
// SIG undefined FUN_148c5296c(void)

void FUN_148c5296c(undefined8 param_1,longlong param_2)

{
  FUN_140f9a994(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c529b0 FUN_148c529b0 body=125 status=ok
// SIG undefined FUN_148c529b0(void)

undefined8 FUN_148c529b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_148c52af2(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x18 + lVar1) = *(undefined4 *)(param_3 + 0x18 + lVar1);
      if (*(int *)(param_2 + 0x20 + lVar1) != *(int *)(param_3 + 0x20 + lVar1)) {
        *(undefined1 *)(param_2 + 0x1c + lVar1) = *(undefined1 *)(param_3 + 0x1c + lVar1);
        *(undefined4 *)(param_2 + 0x20 + lVar1) = *(undefined4 *)(param_3 + 0x20 + lVar1);
      }
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c52a56 FUN_148c52a56 body=59 status=ok
// SIG undefined FUN_148c52a56(void)

undefined8 FUN_148c52a56(longlong *param_1)

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



// FUNCTION 148c52af2 FUN_148c52af2 body=93 status=ok
// SIG undefined FUN_148c52af2(void)

undefined8 * FUN_148c52af2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f9a994(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140f9af66(param_1,iVar1);
      FUN_140f9acfc(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c52b50 FUN_148c52b50 body=50 status=ok
// SIG undefined FUN_148c52b50(void)

void FUN_148c52b50(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_140f9a994(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148c52bac FUN_148c52bac body=46 status=ok
// SIG undefined FUN_148c52bac(void)

void FUN_148c52bac(undefined8 param_1,longlong param_2)

{
  FUN_140f9a95a(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c52bf0 FUN_148c52bf0 body=125 status=ok
// SIG undefined FUN_148c52bf0(void)

undefined8 FUN_148c52bf0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_148c52d32(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      if (*(int *)(param_2 + 0x24 + lVar1) != *(int *)(param_3 + 0x24 + lVar1)) {
        *(undefined1 *)(param_2 + 0x20 + lVar1) = *(undefined1 *)(param_3 + 0x20 + lVar1);
        *(undefined4 *)(param_2 + 0x24 + lVar1) = *(undefined4 *)(param_3 + 0x24 + lVar1);
      }
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c52c96 FUN_148c52c96 body=59 status=ok
// SIG undefined FUN_148c52c96(void)

undefined8 FUN_148c52c96(longlong *param_1)

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



// FUNCTION 148c52d32 FUN_148c52d32 body=93 status=ok
// SIG undefined FUN_148c52d32(void)

undefined8 * FUN_148c52d32(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f9a95a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140f9b0b8(param_1,iVar1);
      FUN_140f9ac44(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c52d90 FUN_148c52d90 body=50 status=ok
// SIG undefined FUN_148c52d90(void)

void FUN_148c52d90(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_140f9a95a(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148c52dc2 FUN_148c52dc2 body=37 status=ok
// SIG undefined FUN_148c52dc2(void)

void FUN_148c52dc2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1e8);
  FUN_145918b1e(param_2);
  return;
}



// FUNCTION 148c52e0e FUN_148c52e0e body=63 status=ok
// SIG undefined FUN_148c52e0e(void)

undefined1 FUN_148c52e0e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c52f36(param_2,param_3);
    param_3 = param_3 + 0x1e8;
    param_2 = param_2 + 0x1e8;
  }
  return 1;
}



// FUNCTION 148c52e76 FUN_148c52e76 body=59 status=ok
// SIG undefined FUN_148c52e76(void)

undefined8 FUN_148c52e76(longlong *param_1)

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



// FUNCTION 148c52ec2 FUN_148c52ec2 body=38 status=ok
// SIG undefined FUN_148c52ec2(void)

void FUN_148c52ec2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e8) == '\x01') {
    FUN_140f9a7ba(param_2);
    *(undefined1 *)(param_2 + 0x1e8) = 0;
  }
  return;
}



// FUNCTION 148c52f36 FUN_148c52f36 body=203 status=ok
// SIG undefined FUN_148c52f36(void)

longlong * FUN_148c52f36(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(char *)(param_1 + 2) = (char)param_2[2];
  FUN_144a787a6(param_1 + 3,param_2 + 3);
  FUN_1457d76be(param_1 + 5,param_2 + 5);
  FUN_148c53002(param_1 + 0x1e,param_2 + 0x1e);
  *(int *)(param_1 + 0x20) = (int)param_2[0x20];
  FUN_148c52af2(param_1 + 0x21,param_2 + 0x21);
  FUN_1457d76be(param_1 + 0x23,param_2 + 0x23);
  *(short *)(param_1 + 0x3c) = (short)param_2[0x3c];
  *(undefined1 *)((longlong)param_1 + 0x1e2) = *(undefined1 *)((longlong)param_2 + 0x1e2);
  return param_1;
}



// FUNCTION 148c53002 FUN_148c53002 body=93 status=ok
// SIG undefined FUN_148c53002(void)

undefined8 * FUN_148c53002(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f9a920(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140f9b2de(param_1,iVar1);
      FUN_140f9ab8c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c53060 FUN_148c53060 body=37 status=ok
// SIG undefined FUN_148c53060(void)

void FUN_148c53060(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x160);
  FUN_1456df334(param_2);
  return;
}



// FUNCTION 148c530ac FUN_148c530ac body=63 status=ok
// SIG undefined FUN_148c530ac(void)

undefined1 FUN_148c530ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c531d4(param_2,param_3);
    param_3 = param_3 + 0x160;
    param_2 = param_2 + 0x160;
  }
  return 1;
}



// FUNCTION 148c53114 FUN_148c53114 body=59 status=ok
// SIG undefined FUN_148c53114(void)

undefined8 FUN_148c53114(longlong *param_1)

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



// FUNCTION 148c53160 FUN_148c53160 body=38 status=ok
// SIG undefined FUN_148c53160(void)

void FUN_148c53160(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x160) == '\x01') {
    FUN_1414fe800(param_2);
    *(undefined1 *)(param_2 + 0x160) = 0;
  }
  return;
}



// FUNCTION 148c531d4 FUN_148c531d4 body=261 status=ok
// SIG undefined FUN_148c531d4(void)

longlong FUN_148c531d4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_145e28436();
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  if (*(int *)(param_1 + 0x60) != *(int *)(param_2 + 0x60) || *(int *)(param_1 + 0x60) == 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_2 + 0x60);
    FUN_140f9a5ac(param_1 + 0x50,param_2 + 0x50);
  }
  FUN_1457d76be(param_1 + 0x68,param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  if (*(int *)(param_1 + 0x138) != *(int *)(param_2 + 0x138)) {
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  }
  *(undefined8 *)(param_1 + 0x13c) = *(undefined8 *)(param_2 + 0x13c);
  plVar1 = *(longlong **)(param_2 + 0x148);
  plVar2 = *(longlong **)(param_1 + 0x148);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x148) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  *(undefined2 *)(param_1 + 0x158) = *(undefined2 *)(param_2 + 0x158);
  return param_1;
}



// FUNCTION 148c53520 FUN_148c53520 body=241 status=ok
// SIG undefined FUN_148c53520(void)

void FUN_148c53520(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144254ccc(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c53612 FUN_148c53612 body=189 status=ok
// SIG undefined FUN_148c53612(void)

void FUN_148c53612(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  thunk_FUN_144253548(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c536d6 FUN_148c536d6 body=241 status=ok
// SIG undefined FUN_148c536d6(void)

void FUN_148c536d6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144254dee(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c537f4 FUN_148c537f4 body=151 status=ok
// SIG undefined FUN_148c537f4(void)

void FUN_148c537f4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1442559b6(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5388c FUN_148c5388c body=189 status=ok
// SIG undefined FUN_148c5388c(void)

void FUN_148c5388c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144253548(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5394e FUN_148c5394e body=242 status=ok
// SIG undefined FUN_148c5394e(void)

void FUN_148c5394e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2c0))(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c53a4c FUN_148c53a4c body=428 status=ok
// SIG undefined FUN_148c53a4c(void)

void FUN_148c53a4c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar2 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_40;
  FUN_146639170(param_1,iVar2 != 0,iVar1 != 0,local_38);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c53c0a FUN_148c53c0a body=526 status=ok
// SIG undefined FUN_148c53c0a(void)

void FUN_148c53c0a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar3 = local_34;
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
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar1 = local_3c;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_50;
  local_68 = local_48;
  FUN_146639382(param_1,iVar3 != 0,iVar2 != 0,iVar1 != 0);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c53e1a FUN_148c53e1a body=156 status=ok
// SIG undefined FUN_148c53e1a(void)

void FUN_148c53e1a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146638df6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c53ec2 FUN_148c53ec2 body=340 status=ok
// SIG undefined FUN_148c53ec2(void)

void FUN_148c53ec2(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar2 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1418f4a96(param_1,iVar2 != 0,iVar1 != 0,local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c54022 FUN_148c54022 body=424 status=ok
// SIG undefined FUN_148c54022(void)

void FUN_148c54022(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar2 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_31 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_40;
  FUN_1415af13c(param_1,iVar2 != 0,iVar1 != 0,local_31);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c541d6 FUN_148c541d6 body=424 status=ok
// SIG undefined FUN_148c541d6(void)

void FUN_148c541d6(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar2 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_31 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_40;
  FUN_1418f4c66(param_1,iVar2 != 0,iVar1 != 0,local_31);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c54380 FUN_148c54380 body=160 status=ok
// SIG undefined FUN_148c54380(void)

void FUN_148c54380(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2d0))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c54422 FUN_148c54422 body=160 status=ok
// SIG undefined FUN_148c54422(void)

void FUN_148c54422(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2d8))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c544ce FUN_148c544ce body=340 status=ok
// SIG undefined FUN_148c544ce(void)

void FUN_148c544ce(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar2 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146639532(param_1,iVar2 != 0,iVar1 != 0,local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c54654 FUN_148c54654 body=158 status=ok
// SIG undefined FUN_148c54654(void)

void FUN_148c54654(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148e2736a(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5470e FUN_148c5470e body=51 status=ok
// SIG undefined FUN_148c5470e(void)

longlong FUN_148c5470e(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x30;
  FUN_140af926c(param_1 + 8);
  FUN_144760e82(lVar1);
  if (param_2 != 0) {
    FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 148c54742 FUN_148c54742 body=47 status=ok
// SIG undefined FUN_148c54742(void)

longlong FUN_148c54742(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140af926c();
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c54772 FUN_148c54772 body=45 status=ok
// SIG undefined FUN_148c54772(void)

longlong FUN_148c54772(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1414f4e40(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c547a0 FUN_148c547a0 body=45 status=ok
// SIG undefined FUN_148c547a0(void)

longlong FUN_148c547a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1414f4e40(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c547ce FUN_148c547ce body=45 status=ok
// SIG undefined FUN_148c547ce(void)

longlong FUN_148c547ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1458c903c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c547fc FUN_148c547fc body=45 status=ok
// SIG undefined FUN_148c547fc(void)

longlong FUN_148c547fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1458c903c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5482a FUN_148c5482a body=45 status=ok
// SIG undefined FUN_148c5482a(void)

longlong FUN_148c5482a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140e3eae6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c54858 FUN_148c54858 body=45 status=ok
// SIG undefined FUN_148c54858(void)

longlong FUN_148c54858(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140e3eae6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c54886 FUN_148c54886 body=45 status=ok
// SIG undefined FUN_148c54886(void)

longlong FUN_148c54886(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145ac719a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c548b4 FUN_148c548b4 body=45 status=ok
// SIG undefined FUN_148c548b4(void)

longlong FUN_148c548b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145ac719a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c548e2 FUN_148c548e2 body=45 status=ok
// SIG undefined FUN_148c548e2(void)

longlong FUN_148c548e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14589ed3c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c54910 FUN_148c54910 body=45 status=ok
// SIG undefined FUN_148c54910(void)

longlong FUN_148c54910(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_14589ed3c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5493e FUN_148c5493e body=45 status=ok
// SIG undefined FUN_148c5493e(void)

longlong FUN_148c5493e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1413662e6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5496c FUN_148c5496c body=45 status=ok
// SIG undefined FUN_148c5496c(void)

longlong FUN_148c5496c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1413662e6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5499a FUN_148c5499a body=45 status=ok
// SIG undefined FUN_148c5499a(void)

longlong FUN_148c5499a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140af924e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c549c8 FUN_148c549c8 body=45 status=ok
// SIG undefined FUN_148c549c8(void)

longlong FUN_148c549c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140af924e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c549f6 FUN_148c549f6 body=51 status=ok
// SIG undefined FUN_148c549f6(void)

longlong FUN_148c549f6(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x30;
  FUN_140af926c(param_1 + 8);
  FUN_144760e82(lVar1);
  if (param_2 != 0) {
    FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 148c54a2a FUN_148c54a2a body=47 status=ok
// SIG undefined FUN_148c54a2a(void)

longlong FUN_148c54a2a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140af926c();
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


