// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142620ec0 FUN_142620ec0 body=126 status=ok
// SIG undefined FUN_142620ec0(void)

void FUN_142620ec0(undefined8 param_1,char *param_2)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 *local_60;
  int *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  int local_40;
  undefined1 local_39;
  char local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = local_44;
  local_58 = &local_40;
  local_60 = &local_39;
  local_68 = 0x12;
  FUN_1425e8b60(param_1,0,0,local_38);
  if (param_2 != (char *)0x0) {
    cVar1 = -1;
    if (local_40 == 1) {
      cVar1 = local_38[0] + -0x30;
    }
    *param_2 = cVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_88);
}



// FUNCTION 142620f50 FUN_142620f50 body=25 status=ok
// SIG undefined FUN_142620f50(void)

undefined4 * FUN_142620f50(undefined4 *param_1)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[6] = 4;
  return param_1;
}



// FUNCTION 142620f70 FUN_142620f70 body=31 status=ok
// SIG undefined FUN_142620f70(void)

void FUN_142620f70(undefined4 *param_1)

{
  *param_1 = 2;
  *(undefined8 *)(param_1 + 2) = 0xffffffff00000000;
  param_1[6] = 4;
  return;
}



// FUNCTION 142620f90 FUN_142620f90 body=33 status=ok
// SIG undefined FUN_142620f90(void)

undefined4 * FUN_142620f90(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  *param_1 = 2;
  *(undefined2 *)(param_1 + 2) = param_2;
  *(undefined2 *)((longlong)param_1 + 10) = param_3;
  param_1[3] = 0xffffffff;
  param_1[6] = 4;
  return param_1;
}



// FUNCTION 142620fc0 FUN_142620fc0 body=58 status=ok
// SIG undefined FUN_142620fc0(void)

void FUN_142620fc0(undefined4 *param_1,uint param_2)

{
  if (param_2 < 1000) {
    *(short *)(param_1 + 2) = (short)param_2;
    *(undefined4 *)((longlong)param_1 + 10) = 0xffffffff;
    *(undefined2 *)((longlong)param_1 + 0xe) = 0xffff;
    param_1[6] = 4;
    *param_1 = 2;
    return;
  }
  param_1[2] = 0x10112;
  *param_1 = 9;
  return;
}



// FUNCTION 142621000 FUN_142621000 body=58 status=ok
// SIG undefined FUN_142621000(void)

void FUN_142621000(undefined4 *param_1,uint param_2)

{
  if (param_2 < 1000) {
    *(undefined2 *)(param_1 + 2) = 0;
    *(short *)((longlong)param_1 + 10) = (short)param_2;
    param_1[3] = 0xffffffff;
    param_1[6] = 4;
    *param_1 = 2;
    return;
  }
  param_1[2] = 0x10112;
  *param_1 = 9;
  return;
}



// FUNCTION 142621040 FUN_142621040 body=67 status=ok
// SIG undefined FUN_142621040(void)

void FUN_142621040(undefined4 *param_1,int param_2,int param_3)

{
  if (((param_2 <= param_3) && (-1 < param_2)) && (param_3 < 1000)) {
    *(short *)(param_1 + 2) = (short)param_2;
    *(short *)((longlong)param_1 + 10) = (short)param_3;
    param_1[3] = 0xffffffff;
    param_1[6] = 4;
    *param_1 = 2;
    return;
  }
  param_1[2] = 0x10112;
  *param_1 = 9;
  return;
}



// FUNCTION 142621090 FUN_142621090 body=33 status=ok
// SIG undefined FUN_142621090(void)

undefined4 * FUN_142621090(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  *param_1 = 3;
  param_1[2] = 0xffffffff;
  *(undefined2 *)(param_1 + 3) = param_2;
  *(undefined2 *)((longlong)param_1 + 0xe) = param_3;
  param_1[6] = 4;
  return param_1;
}



// FUNCTION 1426210c0 FUN_1426210c0 body=61 status=ok
// SIG undefined FUN_1426210c0(void)

void FUN_1426210c0(undefined4 *param_1,int param_2)

{
  if (param_2 - 1U < 999) {
    param_1[2] = 0xffffffff;
    *(short *)(param_1 + 3) = (short)param_2;
    *(undefined2 *)((longlong)param_1 + 0xe) = 0xffff;
    param_1[6] = 4;
    *param_1 = 3;
    return;
  }
  param_1[2] = 0x10112;
  *param_1 = 9;
  return;
}



// FUNCTION 142621100 FUN_142621100 body=67 status=ok
// SIG undefined FUN_142621100(void)

void FUN_142621100(undefined4 *param_1,int param_2,int param_3)

{
  if (((param_2 <= param_3) && (0 < param_2)) && (param_3 < 1000)) {
    param_1[2] = 0xffffffff;
    *(short *)(param_1 + 3) = (short)param_2;
    *(short *)((longlong)param_1 + 0xe) = (short)param_3;
    param_1[6] = 4;
    *param_1 = 3;
    return;
  }
  param_1[2] = 0x10112;
  *param_1 = 9;
  return;
}



// FUNCTION 142621150 FUN_142621150 body=215 status=ok
// SIG undefined FUN_142621150(void)

void FUN_142621150(int *param_1,double param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 *local_60;
  int *local_58;
  short *local_50;
  short local_44 [2];
  int local_40;
  undefined1 local_39;
  char local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 <= 0.0) {
    param_1[2] = 0x10112;
    iVar1 = 9;
  }
  else {
    local_50 = local_44;
    local_58 = &local_40;
    local_60 = &local_39;
    local_68 = 0x12;
    FUN_1425e8b60(param_2,0,0,local_38);
    cVar2 = -1;
    if (local_40 == 1) {
      cVar2 = local_38[0] + -0x30;
    }
    iVar1 = 6;
    if (cVar2 != '\x01') {
      iVar1 = (uint)(cVar2 == '\x05') * 2 + 5;
    }
    *(double *)(param_1 + 2) = param_2;
    *(undefined2 *)(param_1 + 4) = 0;
    *(short *)((longlong)param_1 + 0x12) = (short)local_40 - local_44[0];
    param_1[6] = 4;
  }
  *param_1 = iVar1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
}



// FUNCTION 142621240 FUN_142621240 body=185 status=ok
// SIG undefined FUN_142621240(void)

void FUN_142621240(int *param_1,undefined8 param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 *local_70;
  int *local_68;
  short *local_60;
  short local_54 [2];
  int local_50;
  undefined1 local_49;
  char local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = local_54;
  local_68 = &local_50;
  local_70 = &local_49;
  local_78 = 0x12;
  FUN_1425e8b60((int)param_2,0,0,local_48);
  cVar1 = -1;
  if (local_50 == 1) {
    cVar1 = local_48[0] + -0x30;
  }
  iVar2 = 6;
  if (cVar1 != '\x01') {
    iVar2 = (uint)(cVar1 == '\x05') * 2 + 5;
  }
  *param_1 = iVar2;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined2 *)(param_1 + 4) = param_3;
  *(short *)((longlong)param_1 + 0x12) = (short)local_50 - local_54[0];
  param_1[6] = 4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
}



// FUNCTION 142621310 FUN_142621310 body=20 status=ok
// SIG undefined FUN_142621310(void)

undefined4 * FUN_142621310(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 8;
  param_1[2] = param_2;
  param_1[6] = 4;
  return param_1;
}



// FUNCTION 142621330 FUN_142621330 body=20 status=ok
// SIG undefined FUN_142621330(void)

undefined4 * FUN_142621330(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 8;
  param_1[2] = param_2;
  param_1[6] = 4;
  return param_1;
}



// FUNCTION 142621350 FUN_142621350 body=80 status=ok
// SIG undefined FUN_142621350(void)

void FUN_142621350(int *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*param_1 == 9) {
    uVar2 = *(undefined8 *)param_1;
    uVar3 = *(undefined8 *)(param_1 + 2);
    uVar4 = *(undefined8 *)(param_1 + 6);
    param_2[2] = *(undefined8 *)(param_1 + 4);
    param_2[3] = uVar4;
    *param_2 = uVar2;
    param_2[1] = uVar3;
    return;
  }
  if (param_3 - 1U < 999) {
    iVar1 = param_1[2];
    *(undefined4 *)param_2 = 4;
    *(int *)(param_2 + 1) = iVar1;
    *(short *)((longlong)param_2 + 0xc) = (short)param_3;
    *(undefined2 *)((longlong)param_2 + 0xe) = 0xffff;
    *(undefined4 *)(param_2 + 3) = 4;
    return;
  }
  *(undefined4 *)param_2 = 9;
  *(undefined4 *)(param_2 + 1) = 0x10112;
  return;
}



// FUNCTION 1426213a0 FUN_1426213a0 body=80 status=ok
// SIG undefined FUN_1426213a0(void)

void FUN_1426213a0(int *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*param_1 == 9) {
    uVar2 = *(undefined8 *)param_1;
    uVar3 = *(undefined8 *)(param_1 + 2);
    uVar4 = *(undefined8 *)(param_1 + 6);
    param_2[2] = *(undefined8 *)(param_1 + 4);
    param_2[3] = uVar4;
    *param_2 = uVar2;
    param_2[1] = uVar3;
    return;
  }
  if (param_3 - 1U < 999) {
    iVar1 = param_1[2];
    *(undefined4 *)param_2 = 4;
    *(int *)(param_2 + 1) = iVar1;
    *(undefined2 *)((longlong)param_2 + 0xc) = 0xffff;
    *(short *)((longlong)param_2 + 0xe) = (short)param_3;
    *(undefined4 *)(param_2 + 3) = 4;
    return;
  }
  *(undefined4 *)param_2 = 9;
  *(undefined4 *)(param_2 + 1) = 0x10112;
  return;
}



// FUNCTION 1426213f0 FUN_1426213f0 body=300 status=ok
// SIG undefined FUN_1426213f0(void)

void FUN_1426213f0(int *param_1,int *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  char cVar5;
  int iVar6;
  double dVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 *local_80;
  int *local_78;
  short *local_70;
  short local_64 [2];
  int local_60;
  undefined1 local_59;
  char local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*param_1 == 9) {
    uVar1 = *(undefined8 *)param_1;
    uVar2 = *(undefined8 *)(param_1 + 2);
    uVar3 = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(param_2 + 6) = uVar3;
    *(undefined8 *)param_2 = uVar1;
    *(undefined8 *)(param_2 + 2) = uVar2;
  }
  else {
    dVar7 = (double)FUN_14253da60(param_3 + 0x18,param_1[2],param_4);
    uVar4 = FUN_14253d8b0(param_3 + 0x18,param_1[2],param_4);
    if ((dVar7 != 0.0) || (NAN(dVar7))) {
      local_70 = local_64;
      local_78 = &local_60;
      local_80 = &local_59;
      local_88 = 0x12;
      FUN_1425e8b60(dVar7,0,0,local_58);
      cVar5 = -1;
      if (local_60 == 1) {
        cVar5 = local_58[0] + -0x30;
      }
      iVar6 = 6;
      if (cVar5 != '\x01') {
        iVar6 = (uint)(cVar5 == '\x05') * 2 + 5;
      }
      *param_2 = iVar6;
      *(double *)(param_2 + 2) = dVar7;
      *(undefined2 *)(param_2 + 4) = uVar4;
      *(short *)((longlong)param_2 + 0x12) = (short)local_60 - local_64[0];
    }
    else {
      *param_2 = 2;
      *(undefined2 *)(param_2 + 2) = uVar4;
      *(undefined2 *)((longlong)param_2 + 10) = uVar4;
      param_2[3] = -1;
    }
    param_2[6] = 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
}



// FUNCTION 142621540 FUN_142621540 body=95 status=ok
// SIG undefined FUN_142621540(void)

void FUN_142621540(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_14 = 0;
  FUN_1426213f0(param_1,&local_38,param_3,&local_14);
  if (local_14 < 1) {
    *(undefined8 *)(param_2 + 4) = local_28;
    *(undefined8 *)(param_2 + 6) = uStack_20;
    *param_2 = local_38;
    param_2[1] = uStack_34;
    param_2[2] = uStack_30;
    param_2[3] = uStack_2c;
  }
  else {
    *param_2 = 9;
    param_2[2] = local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 1426215b0 FUN_1426215b0 body=239 status=ok
// SIG undefined FUN_1426215b0(void)

void FUN_1426215b0(int *param_1,int *param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 *local_70;
  int *local_68;
  short *local_60;
  short local_54 [2];
  int local_50;
  undefined1 local_49;
  char local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_1 == 9) {
    iVar6 = *param_1;
    iVar2 = param_1[1];
    iVar3 = param_1[2];
    iVar4 = param_1[3];
    uVar1 = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(param_2 + 6) = uVar1;
    *param_2 = iVar6;
    param_2[1] = iVar2;
    param_2[2] = iVar3;
    param_2[3] = iVar4;
  }
  else if (param_3 < 1000) {
    uVar1 = *(undefined8 *)(param_1 + 2);
    local_60 = local_54;
    local_68 = &local_50;
    local_70 = &local_49;
    local_78 = 0x12;
    FUN_1425e8b60((int)uVar1,0,0,local_48);
    cVar5 = -1;
    if (local_50 == 1) {
      cVar5 = local_48[0] + -0x30;
    }
    iVar6 = 6;
    if (cVar5 != '\x01') {
      iVar6 = (uint)(cVar5 == '\x05') * 2 + 5;
    }
    *param_2 = iVar6;
    *(undefined8 *)(param_2 + 2) = uVar1;
    *(short *)(param_2 + 4) = (short)param_3;
    *(short *)((longlong)param_2 + 0x12) = (short)local_50 - local_54[0];
    param_2[6] = 4;
  }
  else {
    *param_2 = 9;
    param_2[2] = 0x10112;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
}



// FUNCTION 1426216c0 FUN_1426216c0 body=110 status=ok
// SIG undefined FUN_1426216c0(void)

void FUN_1426216c0(int *param_1,int *param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [40];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = param_2[3];
  iVar5 = param_2[5];
  iVar6 = param_2[6];
  iVar7 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = iVar5;
  param_1[6] = iVar6;
  param_1[7] = iVar7;
  *param_1 = iVar1;
  param_1[1] = iVar2;
  param_1[2] = iVar3;
  param_1[3] = iVar4;
  param_1[8] = param_3;
  *(undefined1 *)(param_1 + 9) = 0;
  if (*param_2 == 8) {
    FUN_1426213f0(param_2,&local_30,param_4,param_5);
    param_1[4] = local_20;
    param_1[5] = iStack_1c;
    param_1[6] = iStack_18;
    param_1[7] = iStack_14;
    *param_1 = local_30;
    param_1[1] = iStack_2c;
    param_1[2] = iStack_28;
    param_1[3] = iStack_24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 142621740 FUN_142621740 body=14 status=ok
// SIG undefined FUN_142621740(void)

undefined4 * FUN_142621740(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return param_1;
}



// FUNCTION 142621750 FUN_142621750 body=7 status=ok
// SIG undefined FUN_142621750(void)

bool FUN_142621750(int *param_1)

{
  return *param_1 == 3;
}



// FUNCTION 142621760 FUN_142621760 body=176 status=ok
// SIG undefined FUN_142621760(void)

int FUN_142621760(undefined8 param_1,undefined8 param_2,longlong *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_1425380b0(param_2);
  iVar3 = (**(code **)(*param_3 + 8))(param_3,iVar2);
  FUN_142538840(param_2,iVar3);
  FUN_142621810(param_1,param_2,param_4);
  cVar1 = FUN_142538620(param_2);
  if ((cVar1 == '\0') && (*param_4 < 1)) {
    iVar4 = FUN_1425380b0(param_2);
    if (iVar4 != iVar3 + iVar2) {
      iVar2 = (**(code **)(*param_3 + 8))(param_3,iVar2 + 1);
      if (iVar2 != iVar3) {
        FUN_142538840(param_2);
        FUN_142621810(param_1,param_2,param_4);
        iVar3 = iVar2;
      }
    }
  }
  return iVar3;
}



// FUNCTION 142621810 FUN_142621810 body=572 status=ok
// SIG undefined FUN_142621810(void)

void FUN_142621810(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 9) != '\0') {
    return;
  }
  switch(*param_1) {
  case 0:
  case 9:
    *param_3 = 5;
    return;
  case 1:
    FUN_14253af10(param_2);
    return;
  case 2:
    iVar6 = -0x80000000;
    if (*(short *)((longlong)param_1 + 10) != -1) {
      iVar6 = -(int)*(short *)((longlong)param_1 + 10);
    }
    FUN_142538510(param_2,iVar6,param_1[8],param_3);
    iVar6 = -0x7fffffff;
    if (*(short *)(param_1 + 2) != 0) {
      iVar6 = (int)*(short *)(param_1 + 2);
    }
    goto LAB_142621a2b;
  case 3:
    uVar4 = param_1[8];
    sVar1 = *(short *)((longlong)param_1 + 0xe);
    if (sVar1 == -1) {
      iVar6 = -0x80000000;
    }
    else {
      cVar2 = FUN_142538620(param_2);
      iVar6 = 0;
      if (cVar2 == '\0') {
        iVar6 = FUN_1425380b0(param_2);
      }
      iVar6 = (iVar6 - sVar1) + 1;
    }
    FUN_142538510(param_2,iVar6,uVar4,param_3);
    sVar1 = *(short *)(param_1 + 3);
    cVar2 = FUN_142538620(param_2);
    uVar5 = 0xffffffff;
    if (cVar2 == '\0') {
      uVar5 = FUN_1425380b0(param_2);
      uVar5 = ~uVar5;
    }
    uVar4 = FUN_142501300(0,uVar5 + (int)sVar1);
    FUN_142537fd0(param_2,uVar4);
    cVar2 = FUN_142538620(param_2);
    if ((cVar2 != '\0') && (0 < *(short *)(param_1 + 3))) {
      FUN_142537fc0(param_2,1);
      return;
    }
    return;
  case 4:
    iVar6 = -0x7fffffff;
    if (*(short *)(param_1 + 2) != 0) {
      iVar6 = (int)*(short *)(param_1 + 2);
    }
    iVar7 = -0x80000000;
    if (*(short *)((longlong)param_1 + 10) != -1) {
      iVar7 = -(int)*(short *)((longlong)param_1 + 10);
    }
    sVar1 = *(short *)(param_1 + 3);
    if (sVar1 == -1) {
      uVar4 = FUN_142621a50(param_2,(int)*(short *)((longlong)param_1 + 0xe));
      uVar4 = FUN_142501300(iVar7,uVar4);
    }
    else {
      cVar2 = FUN_142538620(param_2);
      iVar3 = 0;
      if (cVar2 == '\0') {
        iVar3 = FUN_1425380b0(param_2);
      }
      uVar4 = FUN_142501310(iVar7,(iVar3 - sVar1) + 1);
    }
    FUN_142538510(param_2,uVar4,param_1[8],param_3);
LAB_142621a2b:
    iVar6 = FUN_142501300(0,iVar6);
    goto LAB_142621a35;
  case 5:
    FUN_142538330(param_2,*(undefined8 *)(param_1 + 2),param_1[8],param_3);
    break;
  case 6:
    FUN_142538510(param_2,-(int)*(short *)((longlong)param_1 + 0x12),param_1[8],param_3);
    break;
  case 7:
    FUN_14253a320(param_2,-(int)*(short *)((longlong)param_1 + 0x12),param_1[8],param_3);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar6 = (int)*(short *)(param_1 + 4);
LAB_142621a35:
  FUN_142537fd0(param_2,iVar6);
  return;
}



// FUNCTION 142621a50 FUN_142621a50 body=55 status=ok
// SIG undefined FUN_142621a50(void)

int FUN_142621a50(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_2 == -1) {
    iVar2 = -0x80000000;
  }
  else {
    cVar1 = FUN_142538620();
    iVar2 = 0;
    if (cVar1 == '\0') {
      iVar2 = FUN_1425380b0(param_1);
    }
    iVar2 = (iVar2 - param_2) + 1;
  }
  return iVar2;
}



// FUNCTION 142621a90 FUN_142621a90 body=18 status=ok
// SIG undefined FUN_142621a90(void)

void FUN_142621a90(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_142537fd0(param_2,*(short *)(param_1 + 0xc) - param_3);
  return;
}



// FUNCTION 142621ab0 FUN_142621ab0 body=132 status=ok
// SIG undefined FUN_142621ab0(void)

void FUN_142621ab0(undefined8 *param_1,undefined4 param_2)

{
  undefined1 auStack_48 [44];
  undefined8 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  switch(param_2) {
  case 0:
    FUN_14262c010(param_1);
    break;
  case 1:
    FUN_14262c030(param_1);
    break;
  case 2:
    FUN_14262bf90(&local_1c);
    goto LAB_142621b08;
  case 3:
    FUN_14262bfb0(&local_1c);
LAB_142621b08:
    *(undefined4 *)(param_1 + 1) = local_14;
    *param_1 = local_1c;
    break;
  case 4:
    FUN_14262c050(param_1);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 142621b40 FUN_142621b40 body=137 status=ok
// SIG undefined FUN_142621b40(void)

undefined8 FUN_142621b40(undefined8 param_1,int param_2)

{
  undefined1 local_38 [24];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (param_2 == 7) {
    FUN_1426c73d0(local_38);
    FUN_14256d6a0(param_1,local_38);
  }
  else if (param_2 == 6) {
    FUN_1426c7360(local_38);
    FUN_14256d6a0(param_1,local_38);
  }
  else {
    if (param_2 != 5) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_1426c72f0(local_38);
    FUN_14256d6a0(param_1,local_38);
  }
  thunk_FUN_1424b70d0(local_38);
  return param_1;
}



// FUNCTION 142621bd0 Unwind@142621bd0 body=34 status=ok
// SIG undefined Unwind@142621bd0(void)

void Unwind_142621bd0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x20);
  return;
}



// FUNCTION 142621c00 Unwind@142621c00 body=34 status=ok
// SIG undefined Unwind@142621c00(void)

void Unwind_142621c00(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x20);
  return;
}



// FUNCTION 142621c30 Unwind@142621c30 body=34 status=ok
// SIG undefined Unwind@142621c30(void)

void Unwind_142621c30(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x20);
  return;
}



// FUNCTION 142621c60 FUN_142621c60 body=129 status=ok
// SIG undefined FUN_142621c60(void)

void FUN_142621c60(undefined4 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(param_2) {
  case 8:
    FUN_142620f70(&local_30);
    goto LAB_142621cbd;
  case 9:
    FUN_142620f50(param_1);
    goto LAB_142621cce;
  case 10:
    uVar1 = 0;
    break;
  case 0xb:
    uVar1 = 1;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_142621310(&local_30,uVar1);
LAB_142621cbd:
  *(undefined8 *)(param_1 + 4) = local_20;
  *(undefined8 *)(param_1 + 6) = uStack_18;
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
LAB_142621cce:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 142621cf0 FUN_142621cf0 body=25 status=ok
// SIG undefined FUN_142621cf0(void)

uint FUN_142621cf0(int param_1)

{
  if (param_1 - 0xcU < 8) {
    return param_1 - 0xcU;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



// FUNCTION 142621d10 FUN_142621d10 body=396 status=ok
// SIG undefined FUN_142621d10(void)

void FUN_142621d10(undefined4 param_1,undefined8 param_2)

{
  switch(param_1) {
  case 0:
    FUN_1424a6cf0(param_2,L"rounding-mode-ceiling",0,0xffffffff);
    break;
  case 1:
    FUN_1424a6cf0(param_2,L"rounding-mode-floor",0,0xffffffff);
    break;
  case 2:
    FUN_1424a6cf0(param_2,L"rounding-mode-down",0,0xffffffff);
    break;
  case 3:
    FUN_1424a6cf0(param_2,L"rounding-mode-up",0,0xffffffff);
    break;
  case 4:
    FUN_1424a6cf0(param_2,L"rounding-mode-half-even",0,0xffffffff);
    break;
  case 5:
    FUN_1424a6cf0(param_2,L"rounding-mode-half-down",0,0xffffffff);
    break;
  case 6:
    FUN_1424a6cf0(param_2,L"rounding-mode-half-up",0,0xffffffff);
    break;
  case 7:
    FUN_1424a6cf0(param_2,L"rounding-mode-unnecessary",0,0xffffffff);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}



// FUNCTION 142621ea0 Unwind@142621ea0 body=34 status=ok
// SIG undefined Unwind@142621ea0(void)

void Unwind_142621ea0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x98) = L"rounding-mode-ceiling";
  return;
}



// FUNCTION 142621ed0 Unwind@142621ed0 body=34 status=ok
// SIG undefined Unwind@142621ed0(void)

void Unwind_142621ed0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x88) = L"rounding-mode-floor";
  return;
}



// FUNCTION 142621f00 Unwind@142621f00 body=34 status=ok
// SIG undefined Unwind@142621f00(void)

void Unwind_142621f00(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x78) = L"rounding-mode-down";
  return;
}



// FUNCTION 142621f30 Unwind@142621f30 body=34 status=ok
// SIG undefined Unwind@142621f30(void)

void Unwind_142621f30(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x68) = L"rounding-mode-up";
  return;
}



// FUNCTION 142621f60 Unwind@142621f60 body=34 status=ok
// SIG undefined Unwind@142621f60(void)

void Unwind_142621f60(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x58) = L"rounding-mode-half-even";
  return;
}



// FUNCTION 142621f90 Unwind@142621f90 body=34 status=ok
// SIG undefined Unwind@142621f90(void)

void Unwind_142621f90(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x48) = L"rounding-mode-half-down";
  return;
}



// FUNCTION 142621fc0 Unwind@142621fc0 body=34 status=ok
// SIG undefined Unwind@142621fc0(void)

void Unwind_142621fc0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x38) = L"rounding-mode-half-up";
  return;
}



// FUNCTION 142621ff0 Unwind@142621ff0 body=34 status=ok
// SIG undefined Unwind@142621ff0(void)

void Unwind_142621ff0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x28) = L"rounding-mode-unnecessary";
  return;
}



// FUNCTION 142622020 FUN_142622020 body=267 status=ok
// SIG undefined FUN_142622020(void)

void FUN_142622020(undefined4 param_1,undefined8 param_2)

{
  switch(param_1) {
  case 0:
    FUN_1424a6cf0(param_2,L"group-off",0,0xffffffff);
    break;
  case 1:
    FUN_1424a6cf0(param_2,L"group-min2",0,0xffffffff);
    break;
  case 2:
    FUN_1424a6cf0(param_2,L"group-auto",0,0xffffffff);
    break;
  case 3:
    FUN_1424a6cf0(param_2,L"group-on-aligned",0,0xffffffff);
    break;
  case 4:
    FUN_1424a6cf0(param_2,L"group-thousands",0,0xffffffff);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}



// FUNCTION 142622130 Unwind@142622130 body=34 status=ok
// SIG undefined Unwind@142622130(void)

void Unwind_142622130(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x68) = L"group-off";
  return;
}



// FUNCTION 142622160 Unwind@142622160 body=34 status=ok
// SIG undefined Unwind@142622160(void)

void Unwind_142622160(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x58) = L"group-min2";
  return;
}



// FUNCTION 142622190 Unwind@142622190 body=34 status=ok
// SIG undefined Unwind@142622190(void)

void Unwind_142622190(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x48) = L"group-auto";
  return;
}



// FUNCTION 1426221c0 Unwind@1426221c0 body=34 status=ok
// SIG undefined Unwind@1426221c0(void)

void Unwind_1426221c0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x38) = L"group-on-aligned";
  return;
}



// FUNCTION 1426221f0 Unwind@1426221f0 body=34 status=ok
// SIG undefined Unwind@1426221f0(void)

void Unwind_1426221f0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x28) = L"group-thousands";
  return;
}



// FUNCTION 142622220 FUN_142622220 body=267 status=ok
// SIG undefined FUN_142622220(void)

void FUN_142622220(undefined4 param_1,undefined8 param_2)

{
  switch(param_1) {
  case 0:
    FUN_1424a6cf0(param_2,L"unit-width-narrow",0,0xffffffff);
    break;
  case 1:
    FUN_1424a6cf0(param_2,L"unit-width-short",0,0xffffffff);
    break;
  case 2:
    FUN_1424a6cf0(param_2,L"unit-width-full-name",0,0xffffffff);
    break;
  case 3:
    FUN_1424a6cf0(param_2,L"unit-width-iso-code",0,0xffffffff);
    break;
  case 4:
    FUN_1424a6cf0(param_2,L"unit-width-hidden",0,0xffffffff);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}



// FUNCTION 142622330 Unwind@142622330 body=34 status=ok
// SIG undefined Unwind@142622330(void)

void Unwind_142622330(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x68) = L"unit-width-narrow";
  return;
}



// FUNCTION 142622360 Unwind@142622360 body=34 status=ok
// SIG undefined Unwind@142622360(void)

void Unwind_142622360(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x58) = L"unit-width-short";
  return;
}



// FUNCTION 142622390 Unwind@142622390 body=34 status=ok
// SIG undefined Unwind@142622390(void)

void Unwind_142622390(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x48) = L"unit-width-full-name";
  return;
}



// FUNCTION 1426223c0 Unwind@1426223c0 body=34 status=ok
// SIG undefined Unwind@1426223c0(void)

void Unwind_1426223c0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x38) = L"unit-width-iso-code";
  return;
}



// FUNCTION 1426223f0 Unwind@1426223f0 body=34 status=ok
// SIG undefined Unwind@1426223f0(void)

void Unwind_1426223f0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x28) = L"unit-width-hidden";
  return;
}



// FUNCTION 142622420 FUN_142622420 body=353 status=ok
// SIG undefined FUN_142622420(void)

void FUN_142622420(undefined4 param_1,undefined8 param_2)

{
  switch(param_1) {
  case 0:
    FUN_1424a6cf0(param_2,L"sign-auto",0,0xffffffff);
    break;
  case 1:
    FUN_1424a6cf0(param_2,L"sign-always",0,0xffffffff);
    break;
  case 2:
    FUN_1424a6cf0(param_2,L"sign-never",0,0xffffffff);
    break;
  case 3:
    FUN_1424a6cf0(param_2,L"sign-accounting",0,0xffffffff);
    break;
  case 4:
    FUN_1424a6cf0(param_2,L"sign-accounting-always",0,0xffffffff);
    break;
  case 5:
    FUN_1424a6cf0(param_2,L"sign-except-zero",0,0xffffffff);
    break;
  case 6:
    FUN_1424a6cf0(param_2,L"sign-accounting-except-zero",0,0xffffffff);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}



// FUNCTION 142622590 Unwind@142622590 body=34 status=ok
// SIG undefined Unwind@142622590(void)

void Unwind_142622590(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x88) = L"sign-auto";
  return;
}



// FUNCTION 1426225c0 Unwind@1426225c0 body=34 status=ok
// SIG undefined Unwind@1426225c0(void)

void Unwind_1426225c0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x78) = L"sign-always";
  return;
}



// FUNCTION 1426225f0 Unwind@1426225f0 body=34 status=ok
// SIG undefined Unwind@1426225f0(void)

void Unwind_1426225f0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x68) = L"sign-never";
  return;
}



// FUNCTION 142622620 Unwind@142622620 body=34 status=ok
// SIG undefined Unwind@142622620(void)

void Unwind_142622620(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x58) = L"sign-accounting";
  return;
}



// FUNCTION 142622650 Unwind@142622650 body=34 status=ok
// SIG undefined Unwind@142622650(void)

void Unwind_142622650(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x48) = L"sign-accounting-always";
  return;
}



// FUNCTION 142622680 Unwind@142622680 body=34 status=ok
// SIG undefined Unwind@142622680(void)

void Unwind_142622680(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x38) = L"sign-except-zero";
  return;
}



// FUNCTION 1426226b0 Unwind@1426226b0 body=34 status=ok
// SIG undefined Unwind@1426226b0(void)

void Unwind_1426226b0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x28) = L"sign-accounting-except-zero";
  return;
}



// FUNCTION 1426226e0 FUN_1426226e0 body=624 status=ok
// SIG undefined FUN_1426226e0(void)

void * FUN_1426226e0(void *param_1,longlong param_2,undefined8 *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 local_400 [16];
  undefined1 local_3f0 [24];
  undefined1 local_3d8 [96];
  undefined1 local_378 [32];
  undefined1 local_358 [56];
  undefined1 local_320 [232];
  undefined1 local_238 [16];
  undefined1 local_228 [24];
  undefined1 local_210 [96];
  undefined1 local_1b0 [32];
  undefined1 local_190 [56];
  undefined1 local_158 [232];
  undefined8 *local_70;
  undefined8 *local_60;
  int local_54;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0xffffffff00000000;
    *(undefined2 *)(param_3 + 1) = 0;
    *(undefined2 *)(param_3 + 5) = 0;
  }
  if (*param_4 < 1) {
    if ((DAT_14c7fc3e8 == 2) || (cVar1 = FUN_142501800(&DAT_14c7fc3e8), cVar1 == '\0')) {
      if (0 < DAT_14c7fc3ec) {
        *param_4 = DAT_14c7fc3ec;
        goto LAB_142622785;
      }
    }
    else {
      FUN_142622a50(param_4);
      DAT_14c7fc3ec = *param_4;
      FUN_1425019c0(&DAT_14c7fc3e8);
    }
    if (*param_4 < 1) {
      FUN_142623d00(local_238,param_2,&local_54,param_4);
      if (*param_4 < 1) {
        FUN_142568f50(local_400);
        FUN_14256a340(local_400,param_1,local_238);
        FUN_1414b3f60(local_320);
        FUN_14256d170(local_358);
        FUN_1425697e0(local_378);
        thunk_FUN_1424b70d0(local_3d8);
        thunk_FUN_1424b70d0(local_3f0);
      }
      else if (param_3 == (undefined8 *)0x0) {
        memset(param_1,0,0x1c8);
        FUN_14256a780(param_1);
      }
      else {
        *(int *)((longlong)param_3 + 4) = local_54;
        iVar2 = FUN_142501300(0,local_54 + -0xf);
        if (*(short *)(param_2 + 8) < 0) {
          iVar3 = *(int *)(param_2 + 0xc);
        }
        else {
          iVar3 = (int)*(short *)(param_2 + 8) >> 5;
        }
        iVar3 = FUN_142501310(iVar3,local_54 + 0xf);
        local_50 = param_3 + 1;
        FUN_1424a82d0(param_2,iVar2,local_54 - iVar2,local_50,0);
        local_70 = local_50;
        *(undefined2 *)((longlong)param_3 + (longlong)(local_54 - iVar2) * 2 + 8) = 0;
        local_50 = param_3 + 5;
        FUN_1424a82d0(param_2,local_54,iVar3 - local_54,local_50,0);
        local_60 = local_50;
        *(undefined2 *)((longlong)param_3 + (longlong)(iVar3 - local_54) * 2 + 0x28) = 0;
        memset(param_1,0,0x1c8);
        FUN_14256a780(param_1);
      }
      FUN_1414b3f60(local_158);
      FUN_14256d170(local_190);
      FUN_1425697e0(local_1b0);
      thunk_FUN_1424b70d0(local_210);
      thunk_FUN_1424b70d0(local_228);
      return param_1;
    }
  }
LAB_142622785:
  memset(param_1,0,0x1c8);
  FUN_14256a780(param_1);
  return param_1;
}



// FUNCTION 142622950 Unwind@142622950 body=55 status=ok
// SIG undefined Unwind@142622950(void)

void Unwind_142622950(undefined8 param_1,longlong param_2)

{
  FUN_1424ca310(param_2 + 0x28);
  return;
}



// FUNCTION 142622990 Unwind@142622990 body=58 status=ok
// SIG undefined Unwind@142622990(void)

void Unwind_142622990(undefined8 param_1,longlong param_2)

{
  FUN_14256c0b0(param_2 + 0x1f0);
  return;
}



// FUNCTION 1426229d0 Unwind@1426229d0 body=59 status=ok
// SIG undefined Unwind@1426229d0(void)

void Unwind_1426229d0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x3b0) = *(undefined8 *)(param_2 + 0x3d8);
  return;
}



// FUNCTION 142622a10 Unwind@142622a10 body=59 status=ok
// SIG undefined Unwind@142622a10(void)

void Unwind_142622a10(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x3c0) = *(undefined8 *)(param_2 + 0x3d8);
  return;
}



// FUNCTION 142622a50 FUN_142622a50 body=2429 status=ok
// SIG undefined FUN_142622a50(void)

void FUN_142622a50(int *param_1)

{
  undefined1 local_c8 [112];
  undefined **local_58;
  ushort local_50;
  undefined1 local_4e [2];
  int local_4c;
  undefined1 *local_40;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_14251f960(0,FUN_1426276a0);
  FUN_1425e7ad0(local_c8,param_1);
  if (*param_1 < 1) {
    FUN_1424a6c90(&local_58,L"compact-short");
    FUN_1425e7b50(local_c8,&local_58,0,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"compact-long");
    FUN_1425e7b50(local_c8,&local_58,1,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"scientific");
    FUN_1425e7b50(local_c8,&local_58,2,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"engineering");
    FUN_1425e7b50(local_c8,&local_58,3,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"notation-simple");
    FUN_1425e7b50(local_c8,&local_58,4,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"base-unit");
    FUN_1425e7b50(local_c8,&local_58,5,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"percent");
    FUN_1425e7b50(local_c8,&local_58,6,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"permille");
    FUN_1425e7b50(local_c8,&local_58,7,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"precision-integer");
    FUN_1425e7b50(local_c8,&local_58,8,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"precision-unlimited");
    FUN_1425e7b50(local_c8,&local_58,9,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"precision-currency-standard");
    FUN_1425e7b50(local_c8,&local_58,10,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"precision-currency-cash");
    FUN_1425e7b50(local_c8,&local_58,0xb,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"rounding-mode-ceiling");
    FUN_1425e7b50(local_c8,&local_58,0xc,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"rounding-mode-floor");
    FUN_1425e7b50(local_c8,&local_58,0xd,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"rounding-mode-down");
    FUN_1425e7b50(local_c8,&local_58,0xe,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"rounding-mode-up");
    FUN_1425e7b50(local_c8,&local_58,0xf,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"rounding-mode-half-even");
    FUN_1425e7b50(local_c8,&local_58,0x10,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"rounding-mode-half-down");
    FUN_1425e7b50(local_c8,&local_58,0x11,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"rounding-mode-half-up");
    FUN_1425e7b50(local_c8,&local_58,0x12,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"rounding-mode-unnecessary");
    FUN_1425e7b50(local_c8,&local_58,0x13,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"group-off");
    FUN_1425e7b50(local_c8,&local_58,0x14,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"group-min2");
    FUN_1425e7b50(local_c8,&local_58,0x15,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"group-auto");
    FUN_1425e7b50(local_c8,&local_58,0x16,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"group-on-aligned");
    FUN_1425e7b50(local_c8,&local_58,0x17,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"group-thousands");
    FUN_1425e7b50(local_c8,&local_58,0x18,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"latin");
    FUN_1425e7b50(local_c8,&local_58,0x19,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"unit-width-narrow");
    FUN_1425e7b50(local_c8,&local_58,0x1a,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"unit-width-short");
    FUN_1425e7b50(local_c8,&local_58,0x1b,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"unit-width-full-name");
    FUN_1425e7b50(local_c8,&local_58,0x1c,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"unit-width-iso-code");
    FUN_1425e7b50(local_c8,&local_58,0x1d,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"unit-width-hidden");
    FUN_1425e7b50(local_c8,&local_58,0x1e,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"sign-auto");
    FUN_1425e7b50(local_c8,&local_58,0x1f,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"sign-always");
    FUN_1425e7b50(local_c8,&local_58,0x20,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"sign-never");
    FUN_1425e7b50(local_c8,&local_58,0x21,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"sign-accounting");
    FUN_1425e7b50(local_c8,&local_58,0x22,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"sign-accounting-always");
    FUN_1425e7b50(local_c8,&local_58,0x23,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"sign-except-zero");
    FUN_1425e7b50(local_c8,&local_58,0x24,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"sign-accounting-except-zero");
    FUN_1425e7b50(local_c8,&local_58,0x25,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"decimal-auto");
    FUN_1425e7b50(local_c8,&local_58,0x26,param_1);
    FUN_140859a90(&local_58);
    FUN_1424a6c90(&local_58,L"decimal-always");
    FUN_1425e7b50(local_c8,&local_58,0x27,param_1);
    FUN_140859a90(&local_58);
    if (*param_1 < 1) {
      FUN_1424a6c90(&local_58,L"precision-increment");
      FUN_1425e7b50(local_c8,&local_58,0x28,param_1);
      FUN_140859a90(&local_58);
      FUN_1424a6c90(&local_58,L"measure-unit");
      FUN_1425e7b50(local_c8,&local_58,0x29,param_1);
      FUN_140859a90(&local_58);
      FUN_1424a6c90(&local_58,L"per-measure-unit");
      FUN_1425e7b50(local_c8,&local_58,0x2a,param_1);
      FUN_140859a90(&local_58);
      FUN_1424a6c90(&local_58,L"currency");
      FUN_1425e7b50(local_c8,&local_58,0x2b,param_1);
      FUN_140859a90(&local_58);
      FUN_1424a6c90(&local_58,L"integer-width");
      FUN_1425e7b50(local_c8,&local_58,0x2c,param_1);
      FUN_140859a90(&local_58);
      FUN_1424a6c90(&local_58,L"numbering-system");
      FUN_1425e7b50(local_c8,&local_58,0x2d,param_1);
      FUN_140859a90(&local_58);
      FUN_1424a6c90(&local_58,L"scale");
      FUN_1425e7b50(local_c8,&local_58,0x2e,param_1);
      FUN_140859a90(&local_58);
      if (*param_1 < 1) {
        local_58 = &PTR_FUN_149e18960;
        local_50 = 2;
        FUN_1425e8020(local_c8,0,&local_58,param_1);
        if (*param_1 < 1) {
          if (-1 < (short)local_50) {
            local_4c = (int)(short)local_50 >> 5;
          }
          DAT_14c7fc3e0 = (void *)FUN_1424da030((longlong)local_4c * 2);
          if ((local_50 & 0x11) == 0) {
            if ((local_50 & 2) != 0) {
              local_40 = local_4e;
            }
          }
          else {
            local_40 = (undefined1 *)0x0;
          }
          memcpy(DAT_14c7fc3e0,local_40,(longlong)local_4c * 2);
        }
        FUN_140859a90(&local_58);
      }
    }
  }
  FUN_1425e7b10(local_c8);
  return;
}



// FUNCTION 1426233d0 Unwind@1426233d0 body=35 status=ok
// SIG undefined Unwind@1426233d0(void)

void Unwind_1426233d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623400 Unwind@142623400 body=35 status=ok
// SIG undefined Unwind@142623400(void)

void Unwind_142623400(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623430 Unwind@142623430 body=35 status=ok
// SIG undefined Unwind@142623430(void)

void Unwind_142623430(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623460 Unwind@142623460 body=35 status=ok
// SIG undefined Unwind@142623460(void)

void Unwind_142623460(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623490 Unwind@142623490 body=35 status=ok
// SIG undefined Unwind@142623490(void)

void Unwind_142623490(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 1426234c0 Unwind@1426234c0 body=35 status=ok
// SIG undefined Unwind@1426234c0(void)

void Unwind_1426234c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 1426234f0 Unwind@1426234f0 body=35 status=ok
// SIG undefined Unwind@1426234f0(void)

void Unwind_1426234f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623520 Unwind@142623520 body=35 status=ok
// SIG undefined Unwind@142623520(void)

void Unwind_142623520(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623550 Unwind@142623550 body=35 status=ok
// SIG undefined Unwind@142623550(void)

void Unwind_142623550(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623580 Unwind@142623580 body=35 status=ok
// SIG undefined Unwind@142623580(void)

void Unwind_142623580(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 1426235b0 Unwind@1426235b0 body=35 status=ok
// SIG undefined Unwind@1426235b0(void)

void Unwind_1426235b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 1426235e0 Unwind@1426235e0 body=35 status=ok
// SIG undefined Unwind@1426235e0(void)

void Unwind_1426235e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623610 Unwind@142623610 body=35 status=ok
// SIG undefined Unwind@142623610(void)

void Unwind_142623610(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623640 Unwind@142623640 body=35 status=ok
// SIG undefined Unwind@142623640(void)

void Unwind_142623640(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623670 Unwind@142623670 body=35 status=ok
// SIG undefined Unwind@142623670(void)

void Unwind_142623670(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 1426236a0 Unwind@1426236a0 body=35 status=ok
// SIG undefined Unwind@1426236a0(void)

void Unwind_1426236a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 1426236d0 Unwind@1426236d0 body=35 status=ok
// SIG undefined Unwind@1426236d0(void)

void Unwind_1426236d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623700 Unwind@142623700 body=35 status=ok
// SIG undefined Unwind@142623700(void)

void Unwind_142623700(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623730 Unwind@142623730 body=35 status=ok
// SIG undefined Unwind@142623730(void)

void Unwind_142623730(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623760 Unwind@142623760 body=35 status=ok
// SIG undefined Unwind@142623760(void)

void Unwind_142623760(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623790 Unwind@142623790 body=35 status=ok
// SIG undefined Unwind@142623790(void)

void Unwind_142623790(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 1426237c0 Unwind@1426237c0 body=35 status=ok
// SIG undefined Unwind@1426237c0(void)

void Unwind_1426237c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 1426237f0 Unwind@1426237f0 body=35 status=ok
// SIG undefined Unwind@1426237f0(void)

void Unwind_1426237f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623820 Unwind@142623820 body=35 status=ok
// SIG undefined Unwind@142623820(void)

void Unwind_142623820(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623850 Unwind@142623850 body=35 status=ok
// SIG undefined Unwind@142623850(void)

void Unwind_142623850(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623880 Unwind@142623880 body=35 status=ok
// SIG undefined Unwind@142623880(void)

void Unwind_142623880(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 1426238b0 Unwind@1426238b0 body=35 status=ok
// SIG undefined Unwind@1426238b0(void)

void Unwind_1426238b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 1426238e0 Unwind@1426238e0 body=35 status=ok
// SIG undefined Unwind@1426238e0(void)

void Unwind_1426238e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623910 Unwind@142623910 body=35 status=ok
// SIG undefined Unwind@142623910(void)

void Unwind_142623910(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623940 Unwind@142623940 body=35 status=ok
// SIG undefined Unwind@142623940(void)

void Unwind_142623940(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623970 Unwind@142623970 body=35 status=ok
// SIG undefined Unwind@142623970(void)

void Unwind_142623970(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 1426239a0 Unwind@1426239a0 body=35 status=ok
// SIG undefined Unwind@1426239a0(void)

void Unwind_1426239a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 1426239d0 Unwind@1426239d0 body=35 status=ok
// SIG undefined Unwind@1426239d0(void)

void Unwind_1426239d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623a00 Unwind@142623a00 body=35 status=ok
// SIG undefined Unwind@142623a00(void)

void Unwind_142623a00(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623a30 Unwind@142623a30 body=35 status=ok
// SIG undefined Unwind@142623a30(void)

void Unwind_142623a30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623a60 Unwind@142623a60 body=35 status=ok
// SIG undefined Unwind@142623a60(void)

void Unwind_142623a60(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623a90 Unwind@142623a90 body=35 status=ok
// SIG undefined Unwind@142623a90(void)

void Unwind_142623a90(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623ac0 Unwind@142623ac0 body=35 status=ok
// SIG undefined Unwind@142623ac0(void)

void Unwind_142623ac0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623af0 Unwind@142623af0 body=35 status=ok
// SIG undefined Unwind@142623af0(void)

void Unwind_142623af0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623b20 Unwind@142623b20 body=35 status=ok
// SIG undefined Unwind@142623b20(void)

void Unwind_142623b20(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623b50 Unwind@142623b50 body=35 status=ok
// SIG undefined Unwind@142623b50(void)

void Unwind_142623b50(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623b80 Unwind@142623b80 body=35 status=ok
// SIG undefined Unwind@142623b80(void)

void Unwind_142623b80(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623bb0 Unwind@142623bb0 body=35 status=ok
// SIG undefined Unwind@142623bb0(void)

void Unwind_142623bb0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623be0 Unwind@142623be0 body=35 status=ok
// SIG undefined Unwind@142623be0(void)

void Unwind_142623be0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623c10 Unwind@142623c10 body=35 status=ok
// SIG undefined Unwind@142623c10(void)

void Unwind_142623c10(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623c40 Unwind@142623c40 body=35 status=ok
// SIG undefined Unwind@142623c40(void)

void Unwind_142623c40(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623c70 Unwind@142623c70 body=35 status=ok
// SIG undefined Unwind@142623c70(void)

void Unwind_142623c70(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623ca0 Unwind@142623ca0 body=35 status=ok
// SIG undefined Unwind@142623ca0(void)

void Unwind_142623ca0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142623cd0 Unwind@142623cd0 body=35 status=ok
// SIG undefined Unwind@142623cd0(void)

void Unwind_142623cd0(undefined8 param_1,longlong param_2)

{
  FUN_1425e7b10(param_2 + 0x20);
  return;
}



// FUNCTION 142623d00 FUN_142623d00 body=788 status=ok
// SIG undefined FUN_142623d00(void)

undefined4 * FUN_142623d00(undefined4 *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined1 local_108 [64];
  undefined5 local_c8;
  undefined3 local_c3;
  undefined5 uStack_c0;
  undefined1 local_b8 [24];
  undefined8 local_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_98 = param_3;
  FUN_1424a6be0(local_108);
  local_70 = CONCAT62(local_70._2_6_,0x20);
  FUN_1424a6cf0(local_108,&local_70,0,1);
  uStack_c0 = 0;
  local_c8 = 0;
  local_c3 = 0;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 1) = 0;
  local_90 = param_1 + 4;
  FUN_14256d680();
  local_88 = param_1 + 10;
  FUN_14256d680();
  param_1[0x10] = 0;
  param_1[0x18] = 4;
  *(undefined2 *)(param_1 + 0x19) = 0xfffd;
  param_1[0x1c] = 0xfffffffe;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0xffff;
  local_80 = param_1 + 0x22;
  param_1[0x22] = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0x700000005;
  param_1[0x28] = 2;
  local_78 = param_1 + 0x2a;
  param_1[0x2a] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  param_1[0x36] = 3;
  local_50 = param_1;
  FUN_1424a3c00(param_1 + 0x38);
  iVar7 = 0;
  FUN_14262c5e0(local_b8,local_108,0);
  local_70 = 0;
  local_68 = DAT_14c7fc3e0;
  local_60 = DAT_14c7fc3e0;
  local_58 = 0xffffffff;
  local_a0 = DAT_14c7fc3e0;
  iVar5 = 0;
LAB_142623e90:
  do {
    iVar3 = FUN_14262c780(local_b8);
    if (iVar3 <= iVar7) {
LAB_142623fe7:
      FUN_1425e7160(&local_70);
      puVar1 = local_50;
      FUN_140859a90(local_108);
      return puVar1;
    }
    uVar4 = FUN_14262c7e0(local_b8,iVar7);
    cVar2 = FUN_1425cc7f0(uVar4);
    if ((uVar4 != 0x2f) && (cVar2 == '\0')) {
      iVar7 = (iVar7 - (uint)(uVar4 < 0x10000)) + 2;
      if (iVar5 == 0) {
        FUN_1425e7410(&local_70,uVar4);
        iVar5 = 0;
      }
      goto LAB_142623e90;
    }
    if (iVar7 == 0) {
      bVar9 = iVar5 == 0;
      iVar5 = 0;
      if (bVar9) goto LAB_142623f65;
      *param_4 = 0x10113;
      uVar6 = FUN_14262c610(local_b8);
LAB_142623fe1:
      *local_98 = uVar6;
      goto LAB_142623fe7;
    }
    FUN_14262c750(local_b8,iVar7);
    if (iVar5 == 0) {
      iVar5 = FUN_142624570(local_b8,&local_70,&local_c8,local_50,param_4);
      local_60 = local_68;
      local_58 = 0xffffffff;
    }
    else {
      iVar5 = FUN_142624960(iVar5,local_b8,local_50,param_4);
    }
    FUN_14262c760(local_b8);
    if (0 < *param_4) {
      uVar6 = FUN_14262c610(local_b8);
      goto LAB_142623fe1;
    }
    FUN_14262c630(local_b8,iVar7);
LAB_142623f65:
    if ((uVar4 == 0x2f) && (iVar5 == 0)) {
      *param_4 = 0x10113;
      uVar6 = FUN_14262c610(local_b8);
      goto LAB_142623fe1;
    }
    if ((cVar2 != '\0') && (iVar5 != 0)) {
      uVar8 = iVar5 - 3;
      iVar5 = 0;
      if (uVar8 < 7) {
        *param_4 = 0x10113;
        uVar6 = FUN_14262c610(local_b8);
        goto LAB_142623fe1;
      }
    }
    FUN_14262c630(local_b8,2 - (uint)(uVar4 < 0x10000));
    iVar7 = 0;
  } while( true );
}



// FUNCTION 142624020 Unwind@142624020 body=73 status=ok
// SIG undefined Unwind@142624020(void)

void Unwind_142624020(undefined8 param_1,longlong param_2)

{
  FUN_14256d170(*(undefined8 *)(param_2 + 0xc0));
  FUN_1425697e0(*(undefined8 *)(param_2 + 0xb8));
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0xb0));
  return;
}



// FUNCTION 142624070 Unwind@142624070 body=55 status=ok
// SIG undefined Unwind@142624070(void)

void Unwind_142624070(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



// FUNCTION 1426240b0 Unwind@1426240b0 body=55 status=ok
// SIG undefined Unwind@1426240b0(void)

void Unwind_1426240b0(undefined8 param_1,longlong param_2)

{
  FUN_1425e7160(param_2 + 200);
  return;
}



// FUNCTION 1426240f0 Unwind@1426240f0 body=55 status=ok
// SIG undefined Unwind@1426240f0(void)

void Unwind_1426240f0(undefined8 param_1,longlong param_2)

{
  FUN_14256c0b0(*(undefined8 *)(param_2 + 0xe8));
  return;
}



// FUNCTION 142624130 Unwind@142624130 body=55 status=ok
// SIG undefined Unwind@142624130(void)

void Unwind_142624130(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 142624170 FUN_142624170 body=152 status=ok
// SIG undefined FUN_142624170(void)

undefined8 * FUN_142624170(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  
  if (*param_3 < 1) {
    if (DAT_14c7fc3e8 != 2) {
      cVar1 = FUN_142501800(&DAT_14c7fc3e8);
      if (cVar1 != '\0') {
        FUN_142622a50(param_3);
        DAT_14c7fc3ec = *param_3;
        FUN_1425019c0(&DAT_14c7fc3e8);
        goto LAB_1426241d9;
      }
    }
    if (0 < DAT_14c7fc3ec) {
      *param_3 = DAT_14c7fc3ec;
    }
  }
LAB_1426241d9:
  *param_1 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 1) = 2;
  FUN_142624240(param_2,param_1,param_3);
  return param_1;
}



// FUNCTION 142624210 Unwind@142624210 body=36 status=ok
// SIG undefined Unwind@142624210(void)

void Unwind_142624210(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142624240 FUN_142624240 body=800 status=ok
// SIG undefined FUN_142624240(void)

void FUN_142624240(longlong param_1,longlong param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_48 [38];
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 < 1) {
    cVar1 = FUN_142626510();
    if (cVar1 != '\0') {
      local_22 = 0x20;
      FUN_1424a6cf0(param_2,&local_22,0,1);
    }
    if (*param_3 < 1) {
      cVar1 = FUN_142626770(param_1,param_2,param_3);
      if (cVar1 != '\0') {
        local_22 = 0x20;
        FUN_1424a6cf0(param_2,&local_22,0,1);
      }
      if (*param_3 < 1) {
        cVar1 = FUN_1426269f0(param_1,param_2,param_3);
        if (cVar1 != '\0') {
          local_22 = 0x20;
          FUN_1424a6cf0(param_2,&local_22,0,1);
        }
        if (*param_3 < 1) {
          cVar1 = FUN_142626af0(param_1,param_2,param_3);
          if (cVar1 != '\0') {
            local_22 = 0x20;
            FUN_1424a6cf0(param_2,&local_22,0,1);
          }
          if (*param_3 < 1) {
            if (*(int *)(param_1 + 0x60) != 4) {
              FUN_142621d10(*(int *)(param_1 + 0x60),param_2);
              local_22 = 0x20;
              FUN_1424a6cf0(param_2,&local_22,0,1);
              if (0 < *param_3) goto LAB_14262440f;
            }
            cVar1 = FUN_142626dd0(param_1,param_2,param_3);
            if (cVar1 != '\0') {
              local_22 = 0x20;
              FUN_1424a6cf0(param_2,&local_22,0,1);
            }
            if (*param_3 < 1) {
              cVar1 = FUN_142626e00(param_1,param_2);
              if (cVar1 != '\0') {
                local_22 = 0x20;
                FUN_1424a6cf0(param_2,&local_22,0,1);
              }
              if (*param_3 < 1) {
                cVar1 = FUN_142626f30(param_1,param_2,param_3);
                if (cVar1 != '\0') {
                  local_22 = 0x20;
                  FUN_1424a6cf0(param_2,&local_22,0,1);
                }
                if (*param_3 < 1) {
                  if ((*(uint *)(param_1 + 0x98) | 4) != 5) {
                    FUN_142622220(*(uint *)(param_1 + 0x98),param_2);
                    local_22 = 0x20;
                    FUN_1424a6cf0(param_2,&local_22,0,1);
                    if (0 < *param_3) goto LAB_14262440f;
                  }
                  iVar2 = *(int *)(param_1 + 0x9c);
                  if ((iVar2 != 0) && (iVar2 != 7)) {
                    FUN_142622420(iVar2,param_2);
                    local_22 = 0x20;
                    FUN_1424a6cf0(param_2,&local_22,0,1);
                    if (0 < *param_3) goto LAB_14262440f;
                  }
                  cVar1 = FUN_1426270e0(param_1,param_2);
                  if (cVar1 != '\0') {
                    local_22 = 0x20;
                    FUN_1424a6cf0(param_2,&local_22,0,1);
                  }
                  if (*param_3 < 1) {
                    cVar1 = FUN_142627160(param_1,param_2,param_3);
                    if (cVar1 != '\0') {
                      local_22 = 0x20;
                      FUN_1424a6cf0(param_2,&local_22,0,1);
                    }
                    if (*param_3 < 1) {
                      if ((((*(int *)(param_1 + 0x70) == -2) && (*(longlong *)(param_1 + 0xc0) == 0)
                           ) && (*(longlong *)(param_1 + 200) == 0)) &&
                         (*(longlong *)(param_1 + 0xd0) == 0)) {
                        if (*(short *)(param_2 + 8) < 0) {
                          iVar2 = *(int *)(param_2 + 0xc);
                        }
                        else {
                          iVar2 = (int)*(short *)(param_2 + 8) >> 5;
                        }
                        if (0 < iVar2) {
                          FUN_1425c6c80(param_2,iVar2 + -1);
                        }
                      }
                      else {
                        *param_3 = 0x10;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14262440f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 142624570 FUN_142624570 body=953 status=ok
// SIG undefined FUN_142624570(void)

bool FUN_142624570(undefined8 param_1,longlong param_2,char *param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  ushort uVar1;
  ushort *puVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  sVar3 = FUN_14262c790(param_1,0);
  if (sVar3 == 0x40) {
    if (param_3[3] == '\0') {
      param_3[3] = '\x01';
      FUN_142624c50(param_1,param_4,param_5);
      return false;
    }
  }
  else if (sVar3 == 0x2e) {
    if (param_3[3] == '\0') {
      param_3[3] = '\x01';
      FUN_142624b00(param_1,param_4,param_5);
      return (bool)2;
    }
  }
  else {
    iVar4 = FUN_1425e7170(param_2);
    if (0xfffffffd < iVar4 - 4U) {
      puVar2 = *(ushort **)(param_2 + 0x10);
      puVar7 = puVar2 + 1;
      uVar1 = *puVar2;
      if ((short)uVar1 < 0) {
        uVar9 = uVar1 & 0x7fff;
        if (0x3fff < uVar9) {
          if (uVar9 == 0x7fff) {
            uVar9 = (uint)puVar2[1] << 0x10;
            puVar7 = puVar2 + 2;
          }
          else {
            uVar9 = uVar9 * 0x10000 + 0xc0000000;
          }
          uVar9 = *puVar7 | uVar9;
        }
      }
      else if (uVar1 < 0x4040) {
        uVar9 = (uVar1 >> 6) - 1;
      }
      else if (uVar1 < 0x7fc0) {
        uVar9 = (uVar1 & 0x7fc0) * 0x400 + (uint)*puVar7 + 0xfeff0000;
      }
      else {
        uVar9 = CONCAT22(puVar2[1],puVar2[2]);
      }
      switch(uVar9) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
        if (*param_3 == '\0') {
          *param_3 = '\x01';
          FUN_142621ab0(&local_58,uVar9);
          *(undefined4 *)(param_4 + 1) = uStack_50;
          *param_4 = local_58;
          return (uVar9 & 0xfffffffe) == 2;
        }
        break;
      case 5:
      case 6:
      case 7:
        if (param_3[1] == '\0') {
          param_3[1] = '\x01';
          FUN_142621b40(&local_58,uVar9);
          FUN_14256d6e0(param_4 + 2,&local_58);
          thunk_FUN_1424b70d0(&local_58);
          return false;
        }
        break;
      case 8:
      case 9:
      case 10:
      case 0xb:
        if (param_3[3] == '\0') {
          param_3[3] = '\x01';
          FUN_142621c60(&local_58,uVar9);
          param_4[10] = local_48;
          param_4[0xb] = uStack_40;
          param_4[8] = local_58;
          param_4[9] = CONCAT44(uStack_4c,uStack_50);
          return (bool)((uVar9 == 8) * '\x02');
        }
        break;
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
        if (param_3[4] == '\0') {
          param_3[4] = '\x01';
          uVar5 = FUN_142621cf0(uVar9);
          *(undefined4 *)(param_4 + 0xc) = uVar5;
          return false;
        }
        break;
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
        if (param_3[5] == '\0') {
          param_3[5] = '\x01';
          uVar6 = 5;
          if (uVar9 - 0x14 < 5) {
            uVar6 = uVar9 - 0x14;
          }
          FUN_14262b4c0(&local_58,uVar6);
          *(undefined4 *)((longlong)param_4 + 0x6c) = uStack_50;
          *(undefined8 *)((longlong)param_4 + 100) = local_58;
          return false;
        }
        break;
      case 0x19:
        if (param_3[8] == '\0') {
          param_3[8] = '\x01';
          uVar8 = FUN_142540de0(&DAT_1499dfbed,param_5);
          FUN_1425698b0(param_4 + 0x11,uVar8);
          return false;
        }
        break;
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
        if (param_3[9] == '\0') {
          param_3[9] = '\x01';
          uVar6 = 5;
          if (uVar9 - 0x1a < 5) {
            uVar6 = uVar9 - 0x1a;
          }
          *(uint *)(param_4 + 0x13) = uVar6;
          return false;
        }
        break;
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
        if (param_3[10] == '\0') {
          param_3[10] = '\x01';
          uVar6 = 7;
          if (uVar9 - 0x1f < 7) {
            uVar6 = uVar9 - 0x1f;
          }
          *(uint *)((longlong)param_4 + 0x9c) = uVar6;
          return false;
        }
        break;
      case 0x26:
      case 0x27:
        if (param_3[0xb] == '\0') {
          param_3[0xb] = '\x01';
          iVar4 = (uVar9 != 0x27) + 1;
          if (uVar9 == 0x26) {
            iVar4 = 0;
          }
          *(int *)(param_4 + 0x14) = iVar4;
          return false;
        }
        break;
      case 0x28:
        if (param_3[3] == '\0') {
          param_3[3] = '\x01';
          return (bool)3;
        }
        break;
      case 0x29:
        if (param_3[1] == '\0') {
          param_3[1] = '\x01';
          return (bool)4;
        }
        break;
      case 0x2a:
        if (param_3[2] == '\0') {
          param_3[2] = '\x01';
          return (bool)5;
        }
        break;
      case 0x2b:
        if (param_3[1] == '\0') {
          param_3[1] = '\x01';
          return (bool)6;
        }
        break;
      case 0x2c:
        if (param_3[7] == '\0') {
          param_3[7] = '\x01';
          return (bool)7;
        }
        break;
      case 0x2d:
        if (param_3[8] == '\0') {
          param_3[8] = '\x01';
          return (bool)8;
        }
        break;
      case 0x2e:
        if (param_3[0xc] == '\0') {
          param_3[0xc] = '\x01';
          return (bool)9;
        }
        break;
      default:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  }
  *param_5 = 0x10113;
  return false;
}



// FUNCTION 142624930 Unwind@142624930 body=44 status=ok
// SIG undefined Unwind@142624930(void)

void Unwind_142624930(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x20);
  return;
}



// FUNCTION 142624960 FUN_142624960 body=355 status=ok
// SIG undefined FUN_142624960(void)

undefined8 FUN_142624960(undefined4 param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined1 local_48 [24];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  switch(param_1) {
  case 1:
    cVar3 = FUN_142626130(param_2,param_3);
    if (cVar3 != '\0') {
      return 1;
    }
    if (0 < *param_4) {
      return 0;
    }
    cVar3 = FUN_142626200(param_2,param_3);
    if (cVar3 != '\0') {
      return 1;
    }
    iVar2 = *param_4;
    goto joined_r0x0001426249f6;
  case 2:
    cVar3 = FUN_1426263d0(param_2,param_3,param_4);
    if (cVar3 != '\0') {
      return 0;
    }
    iVar2 = *param_4;
joined_r0x0001426249f6:
    if (0 < iVar2) {
      return 0;
    }
switchD_142624995_default:
    *param_4 = 0x10113;
    break;
  case 3:
    FUN_142625810(param_2,param_3,param_4);
    break;
  case 4:
    FUN_142624e40(param_2,param_3,param_4);
    break;
  case 5:
    lVar1 = param_3 + 0x10;
    FUN_14256d6a0(local_48,lVar1);
    FUN_142624e40(param_2,param_3,param_4);
    if (*param_4 < 1) {
      FUN_14256d6e0(param_3 + 0x28,lVar1);
      FUN_14256d6e0(lVar1,local_48);
    }
    thunk_FUN_1424b70d0(local_48);
    break;
  case 6:
    FUN_142624d60(param_2,param_3,param_4);
    break;
  case 7:
    FUN_142625b10(param_2,param_3,param_4);
    break;
  case 8:
    FUN_142625c80(param_2,param_3,param_4);
    break;
  case 9:
    FUN_142625e60(param_2,param_3,param_4);
    break;
  default:
    goto switchD_142624995_default;
  }
  return 0;
}



// FUNCTION 142624ad0 Unwind@142624ad0 body=40 status=ok
// SIG undefined Unwind@142624ad0(void)

void Unwind_142624ad0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x20);
  return;
}



// FUNCTION 142624b00 FUN_142624b00 body=312 status=ok
// SIG undefined FUN_142624b00(void)

void FUN_142624b00(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = FUN_14262c780();
  if (iVar2 < 2) {
    iVar2 = 0;
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
    do {
      iVar2 = iVar5;
      iVar5 = iVar2 + 1;
      sVar1 = FUN_14262c790(param_1,iVar5);
      if (sVar1 != 0x30) goto LAB_142624b7f;
      iVar3 = FUN_14262c780(param_1);
      iVar5 = iVar2 + 1;
    } while (iVar2 + 2 < iVar3);
    iVar5 = iVar2 + 2;
    iVar2 = iVar2 + 1;
  }
LAB_142624b7f:
  iVar4 = FUN_14262c780(param_1);
  iVar3 = iVar2;
  if (iVar5 < iVar4) {
    sVar1 = FUN_14262c790(param_1,iVar5);
    if (sVar1 != 0x2b) {
      iVar4 = FUN_14262c780(param_1);
      if (iVar5 < iVar4) {
        do {
          sVar1 = FUN_14262c790(param_1,iVar5);
          if (sVar1 != 0x23) break;
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 1;
          iVar4 = FUN_14262c780(param_1);
        } while (iVar5 < iVar4);
      }
      goto LAB_142624bbb;
    }
    iVar3 = FUN_14262c780(param_1);
    if (iVar5 + 1 < iVar3) goto LAB_142624bc7;
    FUN_142620fc0(&local_58,iVar2);
  }
  else {
LAB_142624bbb:
    iVar4 = FUN_14262c780(param_1);
    if (iVar5 < iVar4) {
LAB_142624bc7:
      *param_3 = 0x10113;
      goto LAB_142624bf1;
    }
    FUN_142621040(&local_58,iVar2,iVar3);
  }
  *(undefined8 *)(param_2 + 0x50) = local_48;
  *(undefined8 *)(param_2 + 0x58) = uStack_40;
  *(undefined4 *)(param_2 + 0x40) = local_58;
  *(undefined4 *)(param_2 + 0x44) = uStack_54;
  *(undefined4 *)(param_2 + 0x48) = uStack_50;
  *(undefined4 *)(param_2 + 0x4c) = uStack_4c;
LAB_142624bf1:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 142624c50 FUN_142624c50 body=256 status=ok
// SIG undefined FUN_142624c50(void)

void FUN_142624c50(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = FUN_14262c780();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      sVar1 = FUN_14262c790(param_1,iVar4);
      if (sVar1 != 0x40) break;
      iVar4 = iVar4 + 1;
      iVar2 = FUN_14262c780(param_1);
    } while (iVar4 < iVar2);
  }
  iVar3 = FUN_14262c780(param_1);
  iVar2 = iVar4;
  if (iVar4 < iVar3) {
    sVar1 = FUN_14262c790(param_1,iVar4);
    if (sVar1 != 0x2b) {
      iVar3 = FUN_14262c780(param_1);
      if (iVar4 < iVar3) {
        do {
          sVar1 = FUN_14262c790(param_1,iVar2);
          if (sVar1 != 0x23) break;
          iVar2 = iVar2 + 1;
          iVar3 = FUN_14262c780(param_1);
        } while (iVar2 < iVar3);
      }
      goto LAB_142624d0e;
    }
    iVar2 = FUN_14262c780(param_1);
    if (iVar4 + 1 < iVar2) goto LAB_142624d1a;
    FUN_1426210c0(&local_50,iVar4);
  }
  else {
LAB_142624d0e:
    iVar3 = FUN_14262c780(param_1);
    if (iVar2 < iVar3) {
LAB_142624d1a:
      *param_3 = 0x10113;
      goto LAB_142624d43;
    }
    FUN_142621100(&local_50,iVar4,iVar2);
  }
  *(undefined8 *)(param_2 + 0x50) = local_40;
  *(undefined8 *)(param_2 + 0x58) = uStack_38;
  *(undefined4 *)(param_2 + 0x40) = local_50;
  *(undefined4 *)(param_2 + 0x44) = uStack_4c;
  *(undefined4 *)(param_2 + 0x48) = uStack_48;
  *(undefined4 *)(param_2 + 0x4c) = uStack_44;
LAB_142624d43:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 142624d60 FUN_142624d60 body=167 status=ok
// SIG undefined FUN_142624d60(void)

void FUN_142624d60(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_70 [8];
  ushort local_68;
  undefined1 local_66 [14];
  undefined1 *local_58;
  int local_2c [3];
  
  local_2c[1] = -2;
  local_2c[2] = -1;
  iVar1 = FUN_14262c780();
  if (iVar1 == 3) {
    FUN_14262c7f0(param_1,local_70);
    if ((local_68 & 0x11) == 0) {
      puVar2 = local_58;
      if ((local_68 & 2) != 0) {
        puVar2 = local_66;
      }
    }
    else {
      puVar2 = (undefined1 *)0x0;
    }
    FUN_140859a90(local_70);
    local_2c[0] = 0;
    FUN_14256dc20(local_70,puVar2,local_2c);
    if (local_2c[0] < 1) {
      FUN_14256d6e0(param_2 + 0x10,local_70);
    }
    else {
      *param_3 = 0x10113;
    }
    thunk_FUN_1424b70d0(local_70);
  }
  else {
    *param_3 = 0x10113;
  }
  return;
}



// FUNCTION 142624e10 Unwind@142624e10 body=36 status=ok
// SIG undefined Unwind@142624e10(void)

void Unwind_142624e10(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x28);
  return;
}



// FUNCTION 142624e40 FUN_142624e40 body=1814 status=ok
// SIG undefined FUN_142624e40(void)

void FUN_142624e40(undefined8 param_1,longlong param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *_Str2;
  uint uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 local_3e8 [24];
  undefined1 local_3d0 [24];
  undefined1 local_3b8 [24];
  undefined1 local_3a0 [24];
  undefined1 local_388 [24];
  undefined1 local_370 [24];
  undefined1 local_358 [24];
  undefined1 local_340 [24];
  undefined1 local_328 [24];
  undefined1 local_310 [24];
  undefined1 local_2f8 [24];
  undefined1 local_2e0 [24];
  undefined1 local_2c8 [24];
  undefined1 local_2b0 [24];
  undefined1 local_298 [24];
  undefined1 local_280 [24];
  undefined1 local_268 [24];
  undefined1 local_250 [24];
  undefined1 local_238 [24];
  undefined1 local_220 [24];
  undefined1 local_208 [24];
  undefined1 local_1f0 [24];
  undefined1 local_1d8 [24];
  undefined1 local_1c0 [24];
  undefined1 local_1a8 [24];
  undefined1 local_190 [24];
  undefined1 local_178 [24];
  undefined1 local_160 [24];
  undefined1 local_148 [24];
  undefined1 local_130 [32];
  longlong local_110;
  undefined4 local_108;
  undefined2 local_104;
  undefined4 local_d8;
  undefined1 local_d0 [8];
  ushort local_c8;
  undefined1 local_c6 [2];
  uint local_c4;
  undefined1 *local_b8;
  char *local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_58;
  int local_4c;
  undefined1 *local_48;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_14262c7f0(param_1,local_d0);
  uVar1 = (uint)(short)local_c8;
  if ((short)local_c8 < 0) {
    uVar4 = local_c4;
    if ((int)local_c4 < 1) goto LAB_142624e8a;
LAB_142624eda:
    puVar6 = local_b8;
    if ((uVar1 & 2) != 0) {
      puVar6 = local_c6;
    }
    uVar5 = 0;
    do {
      if (*(short *)(puVar6 + uVar5 * 2) == 0x2d) goto LAB_142624e8c;
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
  }
  else {
    uVar4 = (int)uVar1 >> 5;
    if (0 < (int)uVar4) goto LAB_142624eda;
LAB_142624e8a:
    uVar5 = 0;
LAB_142624e8c:
    if ((uint)uVar5 != uVar4) {
      local_110 = (longlong)&local_104 + 1;
      local_108 = 0x28;
      local_104 = 0;
      local_d8 = 0;
      local_90 = (char *)((ulonglong)local_90 & 0xffffffff00000000);
      if ((local_c8 & 0x11) == 0) {
        puVar6 = local_b8;
        if ((uVar1 & 2) != 0) {
          puVar6 = local_c6;
        }
      }
      else {
        puVar6 = (undefined1 *)0x0;
      }
      FUN_1424a7060(local_3e8,0,puVar6,uVar5 & 0xffffffff);
      FUN_142503780(&local_110,local_3e8,&local_90);
      FUN_140859a90(local_3e8);
      iVar2 = 0x10113;
      if (((int)local_90 == 0x1a) || (iVar2 = (int)local_90, 0 < (int)local_90)) {
        *param_3 = iVar2;
      }
      else {
        local_90 = (char *)((longlong)&local_84 + 1);
        local_88 = 0x28;
        local_84 = 0;
        local_58 = 0;
        local_4c = 0;
        if ((local_c8 & 0x11) == 0) {
          if ((local_c8 & 2) != 0) {
            local_b8 = local_c6;
          }
        }
        else {
          local_b8 = (undefined1 *)0x0;
        }
        if (-1 < (short)local_c8) {
          local_c4 = (int)(short)local_c8 >> 5;
        }
        FUN_1424a7060(local_3e8,0,local_b8 + (uVar5 & 0xffffffff) * 2 + 2,~(uint)uVar5 + local_c4);
        FUN_142503780(&local_90,local_3e8,&local_4c);
        FUN_140859a90(local_3e8);
        iVar2 = 0x10113;
        if ((local_4c == 0x1a) || (iVar2 = local_4c, 0 < local_4c)) {
          *param_3 = iVar2;
        }
        else {
          local_39 = 1;
          local_48 = local_3e8;
          FUN_14256d680(local_3e8);
          local_48 = local_3d0;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_3b8;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_3a0;
          local_39 = 0;
          FUN_14256d680();
          local_39 = 0;
          local_48 = local_388;
          FUN_14256d680();
          local_48 = local_370;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_358;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_340;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_328;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_310;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_2f8;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_2e0;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_2c8;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_2b0;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_298;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_280;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_268;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_250;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_238;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_220;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_208;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_1f0;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_1d8;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_1c0;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_1a8;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_190;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_178;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_160;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_148;
          local_39 = 0;
          FUN_14256d680();
          local_48 = local_130;
          local_39 = 0;
          FUN_14256d680();
          local_4c = 0;
          iVar2 = FUN_14256d820(local_110,local_3e8,0x1e,&local_4c);
          iVar3 = 5;
          if (local_4c < 1) {
            uVar1 = 0;
            do {
              if (iVar2 <= (int)uVar1) {
                iVar3 = 0x10113;
                goto LAB_1426253f8;
              }
              puVar6 = local_388 + (ulonglong)uVar1 * 0x18 + -0x60;
              _Str2 = (char *)FUN_14256d780(puVar6);
              iVar3 = strcmp(local_90,_Str2);
              uVar1 = uVar1 + 1;
            } while (iVar3 != 0);
            FUN_14256d6e0(param_2 + 0x10,puVar6);
          }
          else {
LAB_1426253f8:
            *param_3 = iVar3;
          }
          thunk_FUN_1424b70d0(local_130);
          thunk_FUN_1424b70d0(local_148);
          thunk_FUN_1424b70d0(local_160);
          thunk_FUN_1424b70d0(local_178);
          thunk_FUN_1424b70d0(local_190);
          thunk_FUN_1424b70d0(local_1a8);
          thunk_FUN_1424b70d0(local_1c0);
          thunk_FUN_1424b70d0(local_1d8);
          thunk_FUN_1424b70d0(local_1f0);
          thunk_FUN_1424b70d0(local_208);
          thunk_FUN_1424b70d0(local_220);
          thunk_FUN_1424b70d0(local_238);
          thunk_FUN_1424b70d0(local_250);
          thunk_FUN_1424b70d0(local_268);
          thunk_FUN_1424b70d0(local_280);
          thunk_FUN_1424b70d0(local_298);
          thunk_FUN_1424b70d0(local_2b0);
          thunk_FUN_1424b70d0(local_2c8);
          thunk_FUN_1424b70d0(local_2e0);
          thunk_FUN_1424b70d0(local_2f8);
          thunk_FUN_1424b70d0(local_310);
          thunk_FUN_1424b70d0(local_328);
          thunk_FUN_1424b70d0(local_340);
          thunk_FUN_1424b70d0(local_358);
          thunk_FUN_1424b70d0(local_370);
          thunk_FUN_1424b70d0(local_388);
          thunk_FUN_1424b70d0(local_3a0);
          thunk_FUN_1424b70d0(local_3b8);
          thunk_FUN_1424b70d0(local_3d0);
          thunk_FUN_1424b70d0(local_3e8);
        }
        if ((char)local_84 != '\0') {
          FUN_1424da110(local_90);
        }
      }
      if ((char)local_104 != '\0') {
        FUN_1424da110(local_110);
      }
      goto LAB_142624f86;
    }
  }
  *param_3 = 0x10113;
LAB_142624f86:
  FUN_140859a90(local_d0);
  return;
}



// FUNCTION 142625560 Unwind@142625560 body=74 status=ok
// SIG undefined Unwind@142625560(void)

void Unwind_142625560(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_2 + 0x3cf) == '\0') {
    lVar1 = *(longlong *)(param_2 + 0x3c0);
    do {
      lVar1 = lVar1 + -0x18;
      thunk_FUN_1424b70d0(lVar1);
    } while (lVar1 != param_2 + 0x20);
  }
  return;
}



// FUNCTION 1426255b0 Unwind@1426255b0 body=368 status=ok
// SIG undefined Unwind@1426255b0(void)

void Unwind_1426255b0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x2d8);
  thunk_FUN_1424b70d0(param_2 + 0x2c0);
  thunk_FUN_1424b70d0(param_2 + 0x2a8);
  thunk_FUN_1424b70d0(param_2 + 0x290);
  thunk_FUN_1424b70d0(param_2 + 0x278);
  thunk_FUN_1424b70d0(param_2 + 0x260);
  thunk_FUN_1424b70d0(param_2 + 0x248);
  thunk_FUN_1424b70d0(param_2 + 0x230);
  thunk_FUN_1424b70d0(param_2 + 0x218);
  thunk_FUN_1424b70d0(param_2 + 0x200);
  thunk_FUN_1424b70d0(param_2 + 0x1e8);
  thunk_FUN_1424b70d0(param_2 + 0x1d0);
  thunk_FUN_1424b70d0(param_2 + 0x1b8);
  thunk_FUN_1424b70d0(param_2 + 0x1a0);
  thunk_FUN_1424b70d0(param_2 + 0x188);
  thunk_FUN_1424b70d0(param_2 + 0x170);
  thunk_FUN_1424b70d0(param_2 + 0x158);
  thunk_FUN_1424b70d0(param_2 + 0x140);
  thunk_FUN_1424b70d0(param_2 + 0x128);
  thunk_FUN_1424b70d0(param_2 + 0x110);
  thunk_FUN_1424b70d0(param_2 + 0xf8);
  thunk_FUN_1424b70d0(param_2 + 0xe0);
  thunk_FUN_1424b70d0(param_2 + 200);
  thunk_FUN_1424b70d0(param_2 + 0xb0);
  thunk_FUN_1424b70d0(param_2 + 0x98);
  thunk_FUN_1424b70d0(param_2 + 0x80);
  thunk_FUN_1424b70d0(param_2 + 0x68);
  thunk_FUN_1424b70d0(param_2 + 0x50);
  thunk_FUN_1424b70d0(param_2 + 0x38);
  thunk_FUN_1424b70d0(param_2 + 0x20);
  return;
}



// FUNCTION 142625720 Unwind@142625720 body=59 status=ok
// SIG undefined Unwind@142625720(void)

void Unwind_142625720(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 900) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x378));
  }
  return;
}



// FUNCTION 142625760 Unwind@142625760 body=71 status=ok
// SIG undefined Unwind@142625760(void)

void Unwind_142625760(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x304) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x2f8));
  }
  FUN_140859a90(param_2 + 0x338);
  return;
}



// FUNCTION 1426257b0 Unwind@1426257b0 body=47 status=ok
// SIG undefined Unwind@1426257b0(void)

void Unwind_1426257b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1426257e0 Unwind@1426257e0 body=47 status=ok
// SIG undefined Unwind@1426257e0(void)

void Unwind_1426257e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142625810 FUN_142625810 body=492 status=ok
// SIG undefined FUN_142625810(void)

void FUN_142625810(undefined8 param_1,longlong param_2,int *param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_150 [72];
  int local_108 [8];
  longlong local_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong lStack_90;
  longlong local_68;
  undefined4 local_60;
  longlong local_50;
  int local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_e8 = (longlong)&local_dc + 1;
  local_e0 = 0x28;
  local_dc = 0;
  local_b0 = 0;
  local_108[0] = 0;
  FUN_14262c7f0(param_1,&local_a8);
  if ((uStack_a0 & 0x11) == 0) {
    local_50 = lStack_90;
    if ((uStack_a0 & 2) != 0) {
      local_50 = (longlong)&uStack_a0 + 2;
    }
  }
  else {
    local_50 = 0;
  }
  uVar2 = FUN_14262c780(param_1);
  FUN_1424a7060(local_150,0,local_50,uVar2);
  FUN_142503780(&local_e8,local_150,local_108);
  FUN_140859a90(local_150);
  FUN_140859a90(&local_a8);
  iVar3 = 0x10113;
  if ((local_108[0] == 0x1a) || (iVar3 = local_108[0], 0 < local_108[0])) {
    *param_3 = iVar3;
  }
  else {
    FUN_142537d10(local_150);
    local_44 = 0;
    local_68 = local_e8;
    local_60 = local_b0;
    FUN_142539ce0(local_150,&local_68,&local_44);
    if (local_44 < 1) {
      uVar2 = FUN_142538d80(local_150);
      uVar5 = 0;
      while ((iVar3 = FUN_14262c780(param_1), (int)uVar5 < iVar3 &&
             (sVar1 = FUN_14262c790(param_1,uVar5), sVar1 != 0x2e))) {
        uVar5 = uVar5 + 1;
      }
      uVar4 = FUN_14262c780(param_1);
      if (uVar5 == uVar4) {
        FUN_142621150(&local_a8,uVar2);
      }
      else {
        iVar3 = FUN_14262c780(param_1);
        FUN_142621150(local_108,uVar2);
        FUN_1426215b0(local_108,&local_a8,iVar3 + ~uVar5);
      }
      *(undefined8 *)(param_2 + 0x50) = local_98;
      *(longlong *)(param_2 + 0x58) = lStack_90;
      *(undefined4 *)(param_2 + 0x40) = local_a8;
      *(undefined4 *)(param_2 + 0x44) = uStack_a4;
      *(uint *)(param_2 + 0x48) = uStack_a0;
      *(undefined4 *)(param_2 + 0x4c) = uStack_9c;
    }
    else {
      *param_3 = 0x10113;
    }
    FUN_142537d50(local_150);
  }
  if ((char)local_dc != '\0') {
    FUN_1424da110(local_e8);
  }
  return;
}



// FUNCTION 142625a00 Unwind@142625a00 body=53 status=ok
// SIG undefined Unwind@142625a00(void)

void Unwind_142625a00(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x120) = *(undefined8 *)(param_2 + 0x128);
  return;
}



// FUNCTION 142625a40 Unwind@142625a40 body=48 status=ok
// SIG undefined Unwind@142625a40(void)

void Unwind_142625a40(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142625a70 Unwind@142625a70 body=48 status=ok
// SIG undefined Unwind@142625a70(void)

void Unwind_142625a70(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xd0);
  return;
}



// FUNCTION 142625aa0 Unwind@142625aa0 body=48 status=ok
// SIG undefined Unwind@142625aa0(void)

void Unwind_142625aa0(undefined8 param_1,longlong param_2)

{
  FUN_142537d50(param_2 + 0x28);
  return;
}



// FUNCTION 142625ad0 Unwind@142625ad0 body=54 status=ok
// SIG undefined Unwind@142625ad0(void)

void Unwind_142625ad0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x9c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x90));
  }
  return;
}



// FUNCTION 142625b10 FUN_142625b10 body=340 status=ok
// SIG undefined FUN_142625b10(void)

void FUN_142625b10(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_88 [40];
  undefined1 local_60 [12];
  undefined8 local_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  sVar1 = FUN_14262c790(param_1,0);
  uVar7 = (uint)(sVar1 == 0x2b);
  iVar6 = -uVar7;
  iVar2 = FUN_14262c780(param_1);
  uVar8 = (uint)(sVar1 == 0x2b);
  if ((int)uVar7 < iVar2) {
    do {
      uVar7 = uVar8;
      sVar1 = FUN_14262c790(param_1,uVar7);
      if (sVar1 != 0x23) break;
      iVar6 = iVar6 + 1;
      uVar7 = uVar7 + 1;
      iVar2 = FUN_14262c780(param_1);
      uVar8 = uVar7;
    } while ((int)uVar7 < iVar2);
  }
  iVar3 = FUN_14262c780(param_1);
  iVar2 = 0;
  uVar8 = uVar7;
  if (((int)uVar7 < iVar3) && (iVar3 = FUN_14262c780(param_1), iVar2 = 0, (int)uVar7 < iVar3)) {
    iVar3 = 0;
    do {
      sVar1 = FUN_14262c790(param_1,uVar7 + iVar3);
      iVar2 = iVar3;
      uVar8 = uVar7 + iVar3;
      if (sVar1 != 0x30) goto LAB_142625be7;
      iVar2 = iVar3 + 1;
      iVar4 = FUN_14262c780(param_1);
      iVar5 = uVar7 + iVar3;
      iVar3 = iVar2;
    } while (iVar5 + 1 < iVar4);
    uVar8 = uVar7 + iVar2;
  }
LAB_142625be7:
  iVar3 = iVar2 + iVar6;
  if (iVar6 == -1) {
    iVar3 = -1;
  }
  iVar6 = FUN_14262c780(param_1);
  if ((int)uVar8 < iVar6) {
    *param_3 = 0x10113;
  }
  else {
    if (iVar3 == -1) {
      FUN_142607ca0(&local_54,iVar2);
    }
    else {
      FUN_142607ca0(local_60,iVar2);
      FUN_142607cd0(local_60,&local_54,iVar3);
    }
    *(undefined4 *)(param_2 + 0x84) = local_4c;
    *(undefined8 *)(param_2 + 0x7c) = local_54;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 142625c80 FUN_142625c80 body=273 status=ok
// SIG undefined FUN_142625c80(void)

void FUN_142625c80(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_100 [64];
  undefined1 local_c0 [8];
  ushort local_b8;
  undefined1 local_b6 [14];
  undefined1 *local_a8;
  longlong local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined4 local_48;
  undefined1 *local_38;
  int local_2c [3];
  
  local_2c[1] = -2;
  local_2c[2] = -1;
  local_80 = (longlong)&local_74 + 1;
  local_78 = 0x28;
  local_74 = 0;
  local_48 = 0;
  local_2c[0] = 0;
  FUN_14262c7f0(param_1,local_c0);
  if ((local_b8 & 0x11) == 0) {
    if ((local_b8 & 2) != 0) {
      local_a8 = local_b6;
    }
  }
  else {
    local_a8 = (undefined1 *)0x0;
  }
  local_38 = local_a8;
  uVar1 = FUN_14262c780(param_1);
  FUN_1424a7060(local_100,0,local_38,uVar1);
  FUN_142503780(&local_80,local_100,local_2c);
  FUN_140859a90(local_100);
  FUN_140859a90(local_c0);
  iVar2 = 0x10113;
  if ((local_2c[0] == 0x1a) || (iVar2 = local_2c[0], 0 < local_2c[0])) {
    *param_3 = iVar2;
  }
  else {
    lVar3 = FUN_142540de0(local_80,param_3);
    if ((lVar3 == 0) || (0 < *param_3)) {
      *param_3 = 0x10113;
    }
    else {
      FUN_1425698b0(param_2 + 0x88,lVar3);
    }
  }
  if ((char)local_74 != '\0') {
    FUN_1424da110(local_80);
  }
  return;
}



// FUNCTION 142625da0 Unwind@142625da0 body=37 status=ok
// SIG undefined Unwind@142625da0(void)

void Unwind_142625da0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(param_2 + 0xf0);
  return;
}



// FUNCTION 142625dd0 Unwind@142625dd0 body=39 status=ok
// SIG undefined Unwind@142625dd0(void)

void Unwind_142625dd0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142625e00 Unwind@142625e00 body=39 status=ok
// SIG undefined Unwind@142625e00(void)

void Unwind_142625e00(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 142625e30 Unwind@142625e30 body=45 status=ok
// SIG undefined Unwind@142625e30(void)

void Unwind_142625e30(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb4) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}



// FUNCTION 142625e60 FUN_142625e60 body=428 status=ok
// SIG undefined FUN_142625e60(void)

void FUN_142625e60(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 local_110 [64];
  undefined8 *local_d0;
  ushort local_c8;
  undefined8 local_c6;
  undefined8 *local_b8;
  longlong local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  int local_34;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_90 = (longlong)&local_84 + 1;
  local_88 = 0x28;
  local_84 = 0;
  local_58 = 0;
  local_34 = 0;
  FUN_14262c7f0(param_1,&local_d0);
  if ((local_c8 & 0x11) == 0) {
    if ((local_c8 & 2) != 0) {
      local_b8 = &local_c6;
    }
  }
  else {
    local_b8 = (undefined8 *)0x0;
  }
  local_30 = local_b8;
  uVar1 = FUN_14262c780(param_1);
  FUN_1424a7060(local_110,0,local_30,uVar1);
  FUN_142503780(&local_90,local_110,&local_34);
  FUN_140859a90(local_110);
  FUN_140859a90(&local_d0);
  iVar2 = 0x10113;
  if ((local_34 == 0x1a) || (iVar2 = local_34, 0 < local_34)) {
    *param_3 = iVar2;
  }
  else {
    puVar3 = (undefined8 *)thunk_FUN_1424da030(0x60);
    if (puVar3 == (undefined8 *)0x0) {
      if (*param_3 < 1) {
        *param_3 = 7;
      }
    }
    else {
      local_30 = puVar3;
      FUN_142544930(puVar3);
      puVar3 = local_30;
      local_d0 = local_30;
      if (*param_3 < 1) {
        local_50 = local_90;
        local_48 = local_58;
        FUN_142544a40(local_30,&local_50,param_3);
        if (*param_3 < 1) {
          local_d0 = (undefined8 *)0x0;
          FUN_14256cf10(local_110,0,puVar3);
          FUN_14256d110(param_2 + 0xa8,local_110);
          FUN_14256d170(local_110);
          goto LAB_142625f32;
        }
        *param_3 = 0x10113;
      }
      if (*(char *)((longlong)puVar3 + 0xc) != '\0') {
        FUN_1424da110(*puVar3);
      }
      FUN_1401773f0(puVar3);
    }
  }
LAB_142625f32:
  if ((char)local_84 != '\0') {
    FUN_1424da110(local_90);
  }
  return;
}



// FUNCTION 142626010 Unwind@142626010 body=40 status=ok
// SIG undefined Unwind@142626010(void)

void Unwind_142626010(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0xf8) = *(undefined8 *)(param_2 + 0x108);
  return;
}



// FUNCTION 142626040 Unwind@142626040 body=39 status=ok
// SIG undefined Unwind@142626040(void)

void Unwind_142626040(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142626070 Unwind@142626070 body=39 status=ok
// SIG undefined Unwind@142626070(void)

void Unwind_142626070(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 1426260a0 Unwind@1426260a0 body=42 status=ok
// SIG undefined Unwind@1426260a0(void)

void Unwind_1426260a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x108));
  return;
}



// FUNCTION 1426260d0 Unwind@1426260d0 body=39 status=ok
// SIG undefined Unwind@1426260d0(void)

void Unwind_1426260d0(undefined8 param_1,longlong param_2)

{
  FUN_14256d1e0(param_2 + 0x68);
  return;
}



// FUNCTION 142626100 Unwind@142626100 body=45 status=ok
// SIG undefined Unwind@142626100(void)

void Unwind_142626100(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb4) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}



// FUNCTION 142626130 FUN_142626130 body=194 status=ok
// SIG undefined FUN_142626130(void)

void FUN_142626130(undefined8 param_1,undefined8 *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [44];
  undefined8 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  sVar1 = FUN_14262c790(param_1,0);
  if (sVar1 == 0x2b) {
    iVar2 = FUN_14262c780(param_1);
    iVar4 = 1;
    iVar3 = 0;
    if (1 < iVar2) {
      iVar2 = 0;
      do {
        iVar3 = iVar2;
        iVar4 = iVar3 + 1;
        sVar1 = FUN_14262c790(param_1,iVar4);
        if (sVar1 != 0x65) goto LAB_1426261b4;
        iVar4 = FUN_14262c780(param_1);
        iVar2 = iVar3 + 1;
      } while (iVar3 + 2 < iVar4);
      iVar4 = iVar3 + 2;
      iVar3 = iVar3 + 1;
    }
LAB_1426261b4:
    iVar2 = FUN_14262c780(param_1);
    if (iVar2 <= iVar4) {
      FUN_14262c070(param_2,&local_3c,iVar3);
      *(undefined4 *)(param_2 + 1) = local_34;
      *param_2 = local_3c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 142626200 FUN_142626200 body=365 status=ok
// SIG undefined FUN_142626200(void)

ulonglong FUN_142626200(undefined8 param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_78;
  undefined8 local_50;
  ushort *local_48;
  ushort *local_40;
  undefined4 local_38;
  ushort *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_50 = 0;
  local_48 = DAT_14c7fc3e0;
  local_40 = DAT_14c7fc3e0;
  local_38 = 0xffffffff;
  local_30 = DAT_14c7fc3e0;
  uVar2 = FUN_14262c780();
  FUN_14262c7f0(param_1,&local_90);
  if ((local_88 & 0x11) == 0) {
    if ((local_88 & 2) != 0) {
      local_78 = (longlong)&local_88 + 2;
    }
  }
  else {
    local_78 = 0;
  }
  iVar3 = FUN_1425e76d0(&local_50,local_78,uVar2);
  FUN_140859a90(&local_90);
  if (0xfffffffd < iVar3 - 4U) {
    puVar4 = local_40 + 1;
    uVar1 = *local_40;
    if ((short)uVar1 < 0) {
      uVar6 = uVar1 & 0x7fff;
      if (0x3fff < uVar6) {
        if (uVar6 == 0x7fff) {
          uVar6 = (uint)local_40[1] << 0x10;
          puVar4 = local_40 + 2;
        }
        else {
          uVar6 = uVar6 * 0x10000 + 0xc0000000;
        }
        uVar6 = *puVar4 | uVar6;
      }
    }
    else if (uVar1 < 0x4040) {
      uVar6 = (uVar1 >> 6) - 1;
    }
    else if (uVar1 < 0x7fc0) {
      uVar6 = (uVar1 & 0x7fc0) * 0x400 + (uint)*puVar4 + 0xfeff0000;
    }
    else {
      uVar6 = CONCAT22(local_40[1],local_40[2]);
    }
    if (uVar6 - 0x1f < 7) {
      FUN_14262c0b0(param_2,&local_90);
      *(uint *)(param_2 + 1) = local_88;
      *param_2 = local_90;
      uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      goto LAB_142626356;
    }
  }
  uVar5 = 0;
LAB_142626356:
  FUN_1425e7160(&local_50);
  return uVar5 & 0xffffffff;
}



// FUNCTION 142626370 Unwind@142626370 body=39 status=ok
// SIG undefined Unwind@142626370(void)

void Unwind_142626370(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1426263a0 Unwind@1426263a0 body=39 status=ok
// SIG undefined Unwind@1426263a0(void)

void Unwind_1426263a0(undefined8 param_1,longlong param_2)

{
  FUN_1425e7160(param_2 + 0x68);
  return;
}



// FUNCTION 1426263d0 FUN_1426263d0 body=297 status=ok
// SIG undefined FUN_1426263d0(void)

void FUN_1426263d0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  sVar1 = FUN_14262c790(param_1,0);
  if (sVar1 != 0x40) goto LAB_1426264c4;
  iVar2 = FUN_14262c780(param_1);
  if (0 < iVar2) {
    uVar3 = 0;
    do {
      sVar1 = FUN_14262c790(param_1,uVar3);
      if (sVar1 != 0x40) break;
      uVar3 = uVar3 + 1;
      iVar2 = FUN_14262c780(param_1);
    } while ((int)uVar3 < iVar2);
  }
  iVar2 = FUN_14262c780(param_1);
  if ((int)uVar3 < iVar2) {
    sVar1 = FUN_14262c790(param_1,uVar3);
    if (sVar1 == 0x2b) {
      iVar2 = FUN_14262c780(param_1);
      if (iVar2 <= (int)(uVar3 + 1)) {
        FUN_142621350(param_2 + 0x40,&local_50,uVar3);
LAB_1426264ef:
        *(undefined8 *)(param_2 + 0x50) = local_40;
        *(undefined8 *)(param_2 + 0x58) = uStack_38;
        *(undefined4 *)(param_2 + 0x40) = local_50;
        *(undefined4 *)(param_2 + 0x44) = uStack_4c;
        *(undefined4 *)(param_2 + 0x48) = uStack_48;
        *(undefined4 *)(param_2 + 0x4c) = uStack_44;
        goto LAB_1426264c4;
      }
    }
    else if (uVar3 < 2) {
      while ((iVar2 = FUN_14262c780(param_1), (int)uVar3 < iVar2 &&
             (sVar1 = FUN_14262c790(param_1,uVar3), sVar1 == 0x23))) {
        uVar3 = uVar3 + 1;
      }
      iVar2 = FUN_14262c780(param_1);
      if (iVar2 <= (int)uVar3) {
        FUN_1426213a0(param_2 + 0x40,&local_50,uVar3);
        goto LAB_1426264ef;
      }
    }
  }
  *param_3 = 0x10113;
LAB_1426264c4:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 142626510 FUN_142626510 body=403 status=ok
// SIG undefined FUN_142626510(void)

ulonglong FUN_142626510(int *param_1,undefined8 param_2,int *param_3)

{
  short sVar1;
  undefined7 uVar3;
  ulonglong uVar2;
  int iVar4;
  undefined2 local_32;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar3 = (undefined7)((ulonglong)param_3 >> 8);
  if (*param_1 == 0) {
    if ((char)param_1[1] == '\x03') {
      FUN_1424a6cf0(param_2,L"engineering",0,0xffffffff);
      sVar1 = *(short *)((longlong)param_1 + 6);
    }
    else {
      FUN_1424a6cf0(param_2,L"scientific",0,0xffffffff);
      sVar1 = *(short *)((longlong)param_1 + 6);
    }
    if (1 < sVar1) {
      local_32 = 0x2f;
      FUN_1424a6cf0(param_2,&local_32,0,1);
      sVar1 = *(short *)((longlong)param_1 + 6);
      iVar4 = (int)sVar1;
      local_32 = 0x2b;
      FUN_1424a6cf0(param_2,&local_32,0,1);
      if (0 < sVar1) {
        do {
          FUN_1424a7d60(param_2,0x65);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (0 < *param_3) goto LAB_142626694;
    }
    uVar2 = CONCAT71(uVar3,1);
    if (param_1[2] != 0) {
      local_32 = 0x2f;
      FUN_1424a6cf0(param_2,&local_32,0,1);
      FUN_142622420(param_1[2],param_2);
    }
  }
  else {
    if (*param_1 == 1) {
      if (param_1[1] == 0) {
        FUN_1424a6cf0(param_2,L"compact-short",0,0xffffffff);
        uVar2 = CONCAT71(uVar3,1);
        goto LAB_142626696;
      }
      if (param_1[1] == 1) {
        FUN_1424a6cf0(param_2,L"compact-long",0,0xffffffff);
        uVar2 = CONCAT71(uVar3,1);
        goto LAB_142626696;
      }
      *param_3 = 0x10;
    }
LAB_142626694:
    uVar2 = 0;
  }
LAB_142626696:
  return uVar2 & 0xffffffff;
}



// FUNCTION 1426266b0 Unwind@1426266b0 body=41 status=ok
// SIG undefined Unwind@1426266b0(void)

void Unwind_1426266b0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x40) = L"compact-short";
  return;
}



// FUNCTION 1426266e0 Unwind@1426266e0 body=41 status=ok
// SIG undefined Unwind@1426266e0(void)

void Unwind_1426266e0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x50) = L"compact-long";
  return;
}



// FUNCTION 142626710 Unwind@142626710 body=41 status=ok
// SIG undefined Unwind@142626710(void)

void Unwind_142626710(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x20) = L"scientific";
  return;
}



// FUNCTION 142626740 Unwind@142626740 body=41 status=ok
// SIG undefined Unwind@142626740(void)

void Unwind_142626740(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x30) = L"engineering";
  return;
}



// FUNCTION 142626770 FUN_142626770 body=398 status=ok
// SIG undefined FUN_142626770(void)

ulonglong FUN_142626770(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  undefined1 local_98 [24];
  undefined1 local_80 [16];
  wchar_t *local_70;
  wchar_t *local_40;
  undefined1 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  param_1 = param_1 + 0x10;
  pcVar2 = (char *)FUN_14256d770(param_1);
  iVar1 = strcmp("currency",pcVar2);
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  if (iVar1 == 0) {
    FUN_1424a6cf0(param_2,L"currency/",0,0xffffffff);
    local_40 = L"currency/";
    FUN_14256dd90(local_98,param_1,param_3);
    uVar3 = CONCAT71(uVar4,*param_3 < 1);
    if (*param_3 < 1) {
      FUN_1424a6cf0(param_2,local_80,0,0xffffffff);
      local_30 = local_80;
    }
    thunk_FUN_1424b70d0(local_98);
  }
  else {
    pcVar2 = (char *)FUN_14256d770(param_1);
    iVar1 = strcmp("none",pcVar2);
    if (iVar1 == 0) {
      pcVar2 = (char *)FUN_14256d780(param_1);
      iVar1 = strcmp("percent",pcVar2);
      if (iVar1 == 0) {
        FUN_1424a6cf0(param_2,L"percent",0,0xffffffff);
      }
      else {
        pcVar2 = (char *)FUN_14256d780(param_1);
        iVar1 = strcmp("permille",pcVar2);
        if (iVar1 != 0) {
          uVar3 = 0;
          goto LAB_142626866;
        }
        FUN_1424a6cf0(param_2,L"permille",0,0xffffffff);
      }
    }
    else {
      FUN_1424a6cf0(param_2,L"measure-unit/",0,0xffffffff);
      local_70 = L"measure-unit/";
      FUN_142627220(param_1,param_2);
    }
    uVar3 = CONCAT71(uVar4,1);
  }
LAB_142626866:
  return uVar3 & 0xffffffff;
}



// FUNCTION 142626900 Unwind@142626900 body=40 status=ok
// SIG undefined Unwind@142626900(void)

void Unwind_142626900(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x50) = L"permille";
  return;
}



// FUNCTION 142626930 Unwind@142626930 body=40 status=ok
// SIG undefined Unwind@142626930(void)

void Unwind_142626930(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x40) = L"measure-unit/";
  return;
}



// FUNCTION 142626960 Unwind@142626960 body=40 status=ok
// SIG undefined Unwind@142626960(void)

void Unwind_142626960(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x70) = L"currency/";
  return;
}



// FUNCTION 142626990 Unwind@142626990 body=47 status=ok
// SIG undefined Unwind@142626990(void)

void Unwind_142626990(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x80) = param_2 + 0x38;
  thunk_FUN_1424b70d0(param_2 + 0x20);
  return;
}



// FUNCTION 1426269c0 Unwind@1426269c0 body=40 status=ok
// SIG undefined Unwind@1426269c0(void)

void Unwind_1426269c0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x60) = L"percent";
  return;
}



// FUNCTION 1426269f0 FUN_1426269f0 body=206 status=ok
// SIG undefined FUN_1426269f0(void)

undefined8 FUN_1426269f0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  
  param_1 = param_1 + 0x28;
  pcVar2 = (char *)FUN_14256d770(param_1);
  iVar1 = strcmp("none",pcVar2);
  if (iVar1 == 0) {
    pcVar2 = (char *)FUN_14256d780(param_1);
    iVar1 = strcmp("percent",pcVar2);
    if (iVar1 != 0) {
      pcVar2 = (char *)FUN_14256d780(param_1);
      iVar1 = strcmp("permille",pcVar2);
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  else {
    pcVar2 = (char *)FUN_14256d770();
    iVar1 = strcmp("currency",pcVar2);
    if (iVar1 != 0) {
      FUN_1424a6cf0(param_2,L"per-measure-unit/",0,0xffffffff);
      FUN_142627220(param_1,param_2);
      return 1;
    }
  }
  *param_3 = 0x10;
  return 0;
}



// FUNCTION 142626ac0 Unwind@142626ac0 body=37 status=ok
// SIG undefined Unwind@142626ac0(void)

void Unwind_142626ac0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x20) = L"per-measure-unit/";
  return;
}



// FUNCTION 142626af0 FUN_142626af0 body=531 status=ok
// SIG undefined FUN_142626af0(void)

ulonglong FUN_142626af0(ulonglong param_1,undefined8 param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined2 local_32;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 1:
    FUN_1424a6cf0(param_2,L"precision-unlimited",0,0xffffffff);
    break;
  case 2:
    FUN_142627360((int)*(short *)(param_1 + 0x48),(int)*(short *)(param_1 + 0x4a),param_2);
    break;
  case 3:
    sVar1 = *(short *)(param_1 + 0x4e);
    uVar2 = (uint)*(short *)(param_1 + 0x4c);
    if (0 < *(short *)(param_1 + 0x4c)) {
      param_1 = (ulonglong)uVar2;
      do {
        FUN_1424a7d60(param_2,0x40);
        uVar4 = (int)param_1 - 1;
        param_1 = (ulonglong)uVar4;
      } while (uVar4 != 0);
    }
    if (sVar1 != -1) {
      uVar5 = CONCAT71((int7)(param_1 >> 8),1);
      iVar3 = (int)sVar1 - uVar2;
      if (iVar3 != 0 && (int)uVar2 <= (int)sVar1) {
        do {
          FUN_1424a7d60(param_2,0x23);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      goto LAB_142626cf6;
    }
    goto LAB_142626cb3;
  case 4:
    FUN_142627360((int)*(short *)(param_1 + 0x48),(int)*(short *)(param_1 + 0x4a),param_2);
    local_32 = 0x2f;
    FUN_1424a6cf0(param_2,&local_32,0,1);
    iVar3 = (int)*(short *)(param_1 + 0x4c);
    if (iVar3 == -1) {
      sVar1 = *(short *)(param_1 + 0x4e);
      FUN_1424a7d60(param_2,0x40);
      if (sVar1 != -1) {
        uVar5 = CONCAT71((int7)(param_1 >> 8),1);
        if (1 < sVar1) {
          iVar3 = sVar1 + -1;
          do {
            FUN_1424a7d60(param_2,0x23);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        goto LAB_142626cf6;
      }
    }
    else if (0 < *(short *)(param_1 + 0x4c)) {
      do {
        FUN_1424a7d60(param_2,0x40);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
LAB_142626cb3:
    local_32 = 0x2b;
    FUN_1424a6cf0(param_2,&local_32,0,1);
    break;
  case 5:
  case 6:
  case 7:
    FUN_1424a6cf0(param_2,L"precision-increment/",0,0xffffffff);
    FUN_142627460(*(undefined8 *)(param_1 + 0x48),
                  (int)*(short *)(param_1 + 0x50) - (int)*(short *)(param_1 + 0x52),param_2);
    break;
  case 8:
    if (*(int *)(param_1 + 0x48) == 0) {
      FUN_1424a6cf0(param_2,L"precision-currency-standard",0,0xffffffff);
    }
    else {
      FUN_1424a6cf0(param_2,L"precision-currency-cash",0,0xffffffff);
    }
    break;
  default:
    uVar5 = 0;
    goto LAB_142626cf6;
  }
  uVar5 = CONCAT71((int7)(param_1 >> 8),1);
LAB_142626cf6:
  return uVar5 & 0xffffffff;
}



// FUNCTION 142626d10 Unwind@142626d10 body=41 status=ok
// SIG undefined Unwind@142626d10(void)

void Unwind_142626d10(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x50) = L"precision-unlimited";
  return;
}



// FUNCTION 142626d40 Unwind@142626d40 body=41 status=ok
// SIG undefined Unwind@142626d40(void)

void Unwind_142626d40(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x40) = L"precision-increment/";
  return;
}



// FUNCTION 142626d70 Unwind@142626d70 body=41 status=ok
// SIG undefined Unwind@142626d70(void)

void Unwind_142626d70(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x20) = L"precision-currency-cash";
  return;
}



// FUNCTION 142626da0 Unwind@142626da0 body=41 status=ok
// SIG undefined Unwind@142626da0(void)

void Unwind_142626da0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x30) = L"precision-currency-standard";
  return;
}



// FUNCTION 142626dd0 FUN_142626dd0 body=47 status=ok
// SIG undefined FUN_142626dd0(void)

undefined8 FUN_142626dd0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  if ((*(short *)(param_1 + 100) != -3) && (*(int *)(param_1 + 0x6c) != 2)) {
    if (*(int *)(param_1 + 0x6c) != 5) {
      FUN_142622020();
      return 1;
    }
    *param_3 = 0x10;
  }
  return 0;
}



// FUNCTION 142626e00 FUN_142626e00 body=246 status=ok
// SIG undefined FUN_142626e00(void)

ulonglong FUN_142626e00(longlong param_1,undefined8 param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  undefined2 local_54 [10];
  wchar_t *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if ((*(char *)(param_1 + 0x84) == '\0') && (*(short *)(param_1 + 0x7c) != -1)) {
    FUN_142607ca0(local_54,1);
    cVar2 = FUN_142607db0(param_1 + 0x7c,local_54);
    if (cVar2 == '\0') {
      FUN_1424a6cf0(param_2,L"integer-width/",0,0xffffffff);
      local_40 = L"integer-width/";
      iVar5 = (int)*(short *)(param_1 + 0x7e);
      sVar1 = *(short *)(param_1 + 0x7c);
      iVar3 = (int)sVar1;
      if (iVar5 == -1) {
        local_54[0] = 0x2b;
        FUN_1424a6cf0(param_2,local_54,0,1);
      }
      else {
        iVar6 = iVar5 - iVar3;
        if (iVar6 != 0 && iVar3 <= iVar5) {
          do {
            FUN_1424a7d60(param_2,0x23);
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      if (0 < sVar1) {
        do {
          FUN_1424a7d60(param_2,0x30);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      goto LAB_142626e55;
    }
  }
  uVar4 = 0;
LAB_142626e55:
  return uVar4 & 0xffffffff;
}



// FUNCTION 142626f00 Unwind@142626f00 body=45 status=ok
// SIG undefined Unwind@142626f00(void)

void Unwind_142626f00(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x30) = L"integer-width/";
  return;
}



// FUNCTION 142626f30 FUN_142626f30 body=278 status=ok
// SIG undefined FUN_142626f30(void)

undefined4 FUN_142626f30(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  char *_Str1;
  undefined1 local_90 [8];
  short local_88;
  int local_84;
  wchar_t *local_48;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar2 = FUN_142569900(param_1 + 0x88);
  if ((char)uVar2 == '\0') {
    cVar1 = FUN_1425698f0(param_1 + 0x88);
    if (cVar1 != '\0') {
      *param_3 = 0x10;
    }
  }
  else {
    uVar4 = FUN_142569920();
    _Str1 = (char *)FUN_1425410c0(uVar4);
    iVar3 = strcmp(_Str1,"latn");
    if (iVar3 == 0) {
      FUN_1424a6cf0(param_2,L"latin",0,0xffffffff);
    }
    else {
      FUN_1424a6cf0(param_2,L"numbering-system/",0,0xffffffff);
      local_48 = L"numbering-system/";
      uVar4 = FUN_1425410c0(uVar4);
      FUN_1424a7220(local_90,uVar4,0xffffffff,0);
      if (-1 < local_88) {
        local_84 = (int)local_88 >> 5;
      }
      FUN_1424a9690(param_2,local_90,0,local_84);
      FUN_140859a90(local_90);
    }
  }
  return uVar2;
}



// FUNCTION 142627050 Unwind@142627050 body=44 status=ok
// SIG undefined Unwind@142627050(void)

void Unwind_142627050(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x68) = L"numbering-system/";
  return;
}



// FUNCTION 142627080 Unwind@142627080 body=44 status=ok
// SIG undefined Unwind@142627080(void)

void Unwind_142627080(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x78) = L"latin";
  return;
}



// FUNCTION 1426270b0 Unwind@1426270b0 body=43 status=ok
// SIG undefined Unwind@1426270b0(void)

void Unwind_1426270b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1426270e0 FUN_1426270e0 body=92 status=ok
// SIG undefined FUN_1426270e0(void)

longlong FUN_1426270e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  lVar2 = 0;
  if ((iVar1 != 0) && (iVar1 != 2)) {
    if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_1424a6cf0(param_2,L"decimal-always",0,0xffffffff);
    lVar2 = (longlong)L"decimal-auto" + 0x19;
  }
  return lVar2;
}



// FUNCTION 142627140 Unwind@142627140 body=31 status=ok
// SIG undefined Unwind@142627140(void)

void Unwind_142627140(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x28) = L"decimal-always";
  return;
}



// FUNCTION 142627160 FUN_142627160 body=133 status=ok
// SIG undefined FUN_142627160(void)

ulonglong FUN_142627160(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RBX;
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(int *)(param_1 + 0xa8) != 0;
  bVar2 = *(longlong *)(param_1 + 0xb0) != 0;
  if (bVar2 || bVar1) {
    FUN_1424a6cf0(param_2,L"scale/",0,0xffffffff);
    FUN_142627580(*(undefined4 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),param_2,param_3);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar2 || bVar1) & 0xffffffff;
}



// FUNCTION 1426271f0 Unwind@1426271f0 body=41 status=ok
// SIG undefined Unwind@1426271f0(void)

void Unwind_1426271f0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x28) = L"scale/";
  return;
}



// FUNCTION 142627220 FUN_142627220 body=213 status=ok
// SIG undefined FUN_142627220(void)

void FUN_142627220(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 local_68 [4];
  short local_60;
  int local_5c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar2 = FUN_14256d770();
  FUN_1424a7220(local_68,uVar2,0xffffffff,0);
  iVar1 = local_5c;
  if (-1 < local_60) {
    iVar1 = (int)local_60 >> 5;
  }
  FUN_1424a9690(param_2,local_68,0,iVar1);
  FUN_140859a90(local_68);
  local_68[0] = 0x2d;
  FUN_1424a6cf0(param_2,local_68,0,1);
  uVar2 = FUN_14256d780(param_1);
  FUN_1424a7220(local_68,uVar2,0xffffffff,0);
  if (-1 < local_60) {
    local_5c = (int)local_60 >> 5;
  }
  FUN_1424a9690(param_2,local_68,0,local_5c);
  FUN_140859a90(local_68);
  return;
}



// FUNCTION 142627300 Unwind@142627300 body=36 status=ok
// SIG undefined Unwind@142627300(void)

void Unwind_142627300(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142627330 Unwind@142627330 body=36 status=ok
// SIG undefined Unwind@142627330(void)

void Unwind_142627330(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142627360 FUN_142627360 body=207 status=ok
// SIG undefined FUN_142627360(void)

void FUN_142627360(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined2 local_32;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_2 == 0 && param_1 == 0) {
    FUN_1424a6cf0(param_3,L"precision-integer",0,0xffffffff);
  }
  else {
    local_32 = 0x2e;
    FUN_1424a6cf0(param_3,&local_32,0,1);
    iVar1 = param_1;
    if (0 < param_1) {
      do {
        FUN_1424a7d60(param_3,0x30);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (param_2 == -1) {
      local_32 = 0x2b;
      FUN_1424a6cf0(param_3,&local_32,0,1);
    }
    else {
      iVar1 = param_2 - param_1;
      if (iVar1 != 0 && param_1 <= param_2) {
        do {
          FUN_1424a7d60(param_3,0x23);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
  }
  return;
}



// FUNCTION 142627430 Unwind@142627430 body=41 status=ok
// SIG undefined Unwind@142627430(void)

void Unwind_142627430(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x20) = L"precision-integer";
  return;
}



// FUNCTION 142627460 FUN_142627460 body=188 status=ok
// SIG undefined FUN_142627460(void)

void FUN_142627460(undefined4 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 local_c8 [72];
  undefined1 local_80 [8];
  short local_78;
  int local_74;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_142537d10(local_c8);
  FUN_142539590(local_c8,param_1);
  FUN_14253af10(local_c8);
  FUN_14253b200(local_c8,local_80);
  if (-1 < local_78) {
    local_74 = (int)local_78 >> 5;
  }
  FUN_1424a9690(param_3,local_80,0,local_74);
  FUN_140859a90(local_80);
  if (0 < param_2) {
    iVar1 = 0;
    do {
      FUN_1424a7d60(param_3,0x30);
      iVar1 = iVar1 + 1;
    } while (iVar1 != param_2);
  }
  FUN_142537d50(local_c8);
  return;
}



// FUNCTION 142627520 Unwind@142627520 body=48 status=ok
// SIG undefined Unwind@142627520(void)

void Unwind_142627520(undefined8 param_1,longlong param_2)

{
  FUN_142537d50(param_2 + 0x20);
  return;
}



// FUNCTION 142627550 Unwind@142627550 body=48 status=ok
// SIG undefined Unwind@142627550(void)

void Unwind_142627550(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 142627580 FUN_142627580 body=192 status=ok
// SIG undefined FUN_142627580(void)

void FUN_142627580(undefined4 param_1,longlong param_2,undefined8 param_3,int *param_4)

{
  undefined1 local_b8 [8];
  short local_b0;
  int local_ac;
  undefined1 local_78 [72];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_142537d10(local_78);
  if (param_2 == 0) {
    FUN_142538f60(local_78,1);
  }
  else {
    FUN_1425387a0(local_78,param_2,param_4);
    if (0 < *param_4) goto LAB_142627628;
  }
  FUN_142538840(local_78,param_1);
  FUN_14253af10(local_78);
  FUN_14253b200(local_78,local_b8);
  if (-1 < local_b0) {
    local_ac = (int)local_b0 >> 5;
  }
  FUN_1424a9690(param_3,local_b8,0,local_ac);
  FUN_140859a90(local_b8);
LAB_142627628:
  FUN_142537d50(local_78);
  return;
}



// FUNCTION 142627640 Unwind@142627640 body=43 status=ok
// SIG undefined Unwind@142627640(void)

void Unwind_142627640(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142627670 Unwind@142627670 body=43 status=ok
// SIG undefined Unwind@142627670(void)

void Unwind_142627670(undefined8 param_1,longlong param_2)

{
  FUN_142537d50(param_2 + 0x60);
  return;
}



// FUNCTION 1426276a0 FUN_1426276a0 body=42 status=ok
// SIG undefined FUN_1426276a0(void)

undefined8 FUN_1426276a0(void)

{
  undefined4 uVar1;
  
  FUN_1424da110(DAT_14c7fc3e0);
  uVar1 = DAT_14c7fc3e8;
  DAT_14c7fc3e0 = 0;
  LOCK();
  DAT_14c7fc3e8 = 0;
  UNLOCK();
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 1426276d0 FUN_1426276d0 body=1 status=ok
// SIG undefined FUN_1426276d0(void)

void FUN_1426276d0(void)

{
  return;
}



// FUNCTION 1426276e0 FUN_1426276e0 body=11 status=ok
// SIG undefined FUN_1426276e0(void)

void FUN_1426276e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1426276f0(param_1,param_2,1,param_3);
  return;
}



// FUNCTION 1426276f0 FUN_1426276f0 body=382 status=ok
// SIG undefined FUN_1426276f0(void)

undefined8 *
FUN_1426276f0(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  
  *param_1 = 0;
  param_1[1] = icu_64::number::impl::MicroProps::vftable;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 7) = 0xfffd;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xfffffffe;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 10) = 0xffff;
  FUN_1426c74f0(param_1 + 0x12);
  param_1[0x15] = icu_64::number::impl::EmptyModifier::vftable;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = icu_64::number::impl::EmptyModifier::vftable;
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1[0x19] = icu_64::number::impl::MultiplierFormatHandler::vftable;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_14256de50();
  param_1[0x2b] = (longlong)param_1 + 0x165;
  *(undefined4 *)(param_1 + 0x2c) = 0x28;
  *(undefined2 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x34) = 2;
  param_1[0x3b] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x3c) = 2;
  uVar1 = FUN_142628160(param_1,param_2,
                        CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_3) & 0xffffffff,param_4);
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 142627870 Unwind@142627870 body=40 status=ok
// SIG undefined Unwind@142627870(void)

void Unwind_142627870(undefined8 param_1,longlong param_2)

{
  FUN_142629410(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1426278a0 Unwind@1426278a0 body=223 status=ok
// SIG undefined Unwind@1426278a0(void)

void Unwind_1426278a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  puVar2 = *(undefined8 **)(lVar1 + 0x130);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x128);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x120);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x118);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x110);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x108);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x100);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)**(longlong **)(param_2 + 0x30);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_1426280a0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142627980 FUN_142627980 body=361 status=ok
// SIG undefined FUN_142627980(void)

int FUN_142627980(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong *local_258;
  undefined1 local_250 [8];
  undefined1 local_248 [52];
  int local_214 [3];
  undefined1 local_208 [40];
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_1426276f0(&local_258,param_1,0);
  iVar1 = 0;
  if (*param_4 < 1) {
    if (local_258 == (longlong *)0x0) {
      *param_4 = 5;
      iVar1 = 0;
    }
    else {
      (**(code **)(*local_258 + 8))(local_258,param_2,local_250,param_4);
      FUN_142621810(local_248,param_2,param_4);
      FUN_142607d30(local_208,param_2,param_4);
      if (*param_4 < 1) {
        iVar1 = FUN_142627b30(local_250,param_2,param_3,0,param_4);
        piVar5 = param_4;
        iVar2 = (**(code **)(*local_1d0 + 8))(local_1d0,param_3,0,iVar1,param_4);
        if (local_214[0] < 1) {
          iVar4 = (**(code **)(*local_1d8 + 8))(local_1d8,param_3,0,iVar2 + iVar1,param_4);
          iVar3 = (**(code **)(*local_1e0 + 8))(local_1e0,param_3,0,iVar4 + iVar2 + iVar1,param_4);
          iVar3 = iVar3 + iVar4 + iVar2;
        }
        else {
          iVar3 = FUN_14262bd70(local_214,local_1d8,local_1e0,param_3,
                                (ulonglong)piVar5 & 0xffffffff00000000,iVar2 + iVar1,param_4);
          iVar3 = iVar3 + iVar2;
        }
        iVar1 = iVar3 + iVar1;
      }
    }
  }
  FUN_142569310(&local_258);
  return iVar1;
}



// FUNCTION 142627af0 Unwind@142627af0 body=51 status=ok
// SIG undefined Unwind@142627af0(void)

void Unwind_142627af0(undefined8 param_1,longlong param_2)

{
  FUN_142569310(param_2 + 0x40);
  return;
}



// FUNCTION 142627b30 FUN_142627b30 body=340 status=ok
// SIG undefined FUN_142627b30(void)

int FUN_142627b30(longlong param_1,longlong *param_2,undefined8 param_3,int param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_88 [64];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  cVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    if (cVar1 == '\0') {
      iVar2 = FUN_142629450(param_1,param_2,param_3,param_4,param_5);
      iVar3 = FUN_142538ed0(param_2);
      if ((iVar3 < 0) || (*(int *)(param_1 + 0x58) == 1)) {
        lVar4 = 0x288;
        if (*(char *)(param_1 + 0x5c) == '\0') {
          lVar4 = 8;
        }
        FUN_1424a6be0(local_88,lVar4 + *(longlong *)(param_1 + 0x68));
        iVar3 = FUN_142609a00(param_3,iVar2 + param_4,local_88,2,param_5);
        iVar2 = iVar3 + iVar2;
        FUN_140859a90(local_88);
      }
      iVar3 = FUN_1426295f0(param_1,param_2,param_3,param_4 + iVar2,param_5);
      return iVar3 + iVar2;
    }
    FUN_1424a6be0(local_88,*(longlong *)(param_1 + 0x68) + 0x3c8);
    iVar2 = FUN_142609a00(param_3,param_4,local_88,0,param_5);
  }
  else {
    FUN_1424a6be0(local_88,*(longlong *)(param_1 + 0x68) + 0x388);
    iVar2 = FUN_142609a00(param_3,param_4,local_88,0,param_5);
  }
  FUN_140859a90(local_88);
  return iVar2;
}



// FUNCTION 142627c90 Unwind@142627c90 body=52 status=ok
// SIG undefined Unwind@142627c90(void)

void Unwind_142627c90(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 142627cd0 Unwind@142627cd0 body=52 status=ok
// SIG undefined Unwind@142627cd0(void)

void Unwind_142627cd0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 142627d10 Unwind@142627d10 body=52 status=ok
// SIG undefined Unwind@142627d10(void)

void Unwind_142627d10(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 142627d50 FUN_142627d50 body=182 status=ok
// SIG undefined FUN_142627d50(void)

undefined4
FUN_142627d50(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             int *param_5)

{
  undefined4 uVar1;
  undefined1 local_250 [280];
  longlong local_138;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  uVar1 = 0;
  FUN_1426276f0(local_250,param_1,0,param_5);
  if (*param_5 < 1) {
    FUN_142573e40(local_138,param_2,param_3);
    uVar1 = 0;
    (**(code **)(*(longlong *)(local_138 + 8) + 8))(local_138 + 8,param_4,0,0,param_5);
    if (*param_5 < 1) {
      uVar1 = (**(code **)(*(longlong *)(local_138 + 8) + 0x10))(local_138 + 8);
    }
  }
  FUN_142569310(local_250);
  return uVar1;
}



// FUNCTION 142627e10 Unwind@142627e10 body=47 status=ok
// SIG undefined Unwind@142627e10(void)

void Unwind_142627e10(undefined8 param_1,longlong param_2)

{
  FUN_142569310(param_2 + 0x28);
  return;
}



// FUNCTION 142627e40 FUN_142627e40 body=534 status=ok
// SIG undefined FUN_142627e40(void)

int FUN_142627e40(longlong *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined **local_138;
  undefined4 local_130 [10];
  undefined2 local_108;
  int local_fc [3];
  undefined2 local_f0 [4];
  undefined1 local_e8;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined1 local_b0 [24];
  undefined **local_98;
  undefined1 local_90;
  undefined **local_88;
  undefined1 local_80;
  undefined **local_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_138 = icu_64::number::impl::MicroProps::vftable;
  local_130[0] = 0;
  local_108 = 0xfffd;
  local_fc[0] = -2;
  local_e8 = 0;
  local_f0[0] = 0xffff;
  FUN_1426c74f0(local_b0);
  local_98 = icu_64::number::impl::EmptyModifier::vftable;
  local_90 = 0;
  local_88 = icu_64::number::impl::EmptyModifier::vftable;
  local_80 = 1;
  local_78 = icu_64::number::impl::MultiplierFormatHandler::vftable;
  local_70[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  iVar1 = 0;
  if (*param_4 < 1) {
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      *param_4 = 5;
      iVar1 = 0;
    }
    else {
      (**(code **)(*param_1 + 8))(param_1,param_2,&local_138,param_4);
      FUN_142621810(local_130,param_2,param_4);
      FUN_142607d30(local_f0,param_2,param_4);
      if (*param_4 < 1) {
        iVar1 = FUN_142627b30(&local_138,param_2,param_3,0,param_4);
        piVar5 = param_4;
        iVar2 = (**(code **)(*local_b8 + 8))(local_b8,param_3,0,iVar1,param_4);
        if (local_fc[0] < 1) {
          iVar4 = (**(code **)(*local_c0 + 8))(local_c0,param_3,0,iVar2 + iVar1,param_4);
          iVar3 = (**(code **)(*local_c8 + 8))(local_c8,param_3,0,iVar4 + iVar2 + iVar1,param_4);
          iVar3 = iVar3 + iVar4 + iVar2;
        }
        else {
          iVar3 = FUN_14262bd70(local_fc,local_c0,local_c8,param_3,
                                (ulonglong)piVar5 & 0xffffffff00000000,iVar2 + iVar1,param_4);
          iVar3 = iVar3 + iVar2;
        }
        iVar1 = iVar3 + iVar1;
      }
    }
  }
  local_138 = icu_64::number::impl::MicroProps::vftable;
  local_78 = icu_64::number::impl::MultiplierFormatHandler::vftable;
  FUN_14256d170(local_70);
  FUN_142629780(&local_88);
  FUN_142629780(&local_98);
  FUN_142629780(local_b0);
  return iVar1;
}



// FUNCTION 142628060 Unwind@142628060 body=55 status=ok
// SIG undefined Unwind@142628060(void)

void Unwind_142628060(undefined8 param_1,longlong param_2)

{
  FUN_1426280a0(param_2 + 0x40);
  return;
}



// FUNCTION 1426280a0 FUN_1426280a0 body=93 status=ok
// SIG undefined FUN_1426280a0(void)

void FUN_1426280a0(undefined8 *param_1)

{
  *param_1 = icu_64::number::impl::MicroProps::vftable;
  param_1[0x18] = icu_64::number::impl::MultiplierFormatHandler::vftable;
  FUN_14256d170(param_1 + 0x19);
  FUN_142629780(param_1 + 0x16);
  FUN_142629780(param_1 + 0x14);
  FUN_142629780(param_1 + 0x11);
  return;
}



// FUNCTION 142628100 FUN_142628100 body=90 status=ok
// SIG undefined FUN_142628100(void)

undefined8
FUN_142628100(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int *param_5
             )

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*param_5 < 1) {
    plVar1 = (longlong *)FUN_1425745a0(*(undefined8 *)(param_1 + 0x120));
    (**(code **)(*plVar1 + 8))(plVar1,param_4,0,0,param_5);
    if (*param_5 < 1) {
                    /* WARNING: Could not recover jumptable at 0x000142628156. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 142628160 FUN_142628160 body=3698 status=ok
// SIG undefined FUN_142628160(void)

longlong FUN_142628160(longlong param_1,int *param_2,char param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 uVar14;
  bool bVar15;
  int *piVar16;
  undefined1 local_228 [32];
  undefined8 local_208;
  undefined4 local_200;
  undefined1 local_1e8 [32];
  undefined8 local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  int local_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  undefined8 local_1a8;
  char local_19c;
  undefined4 local_190;
  undefined1 local_168 [64];
  undefined1 local_128 [64];
  char *local_e8;
  int *local_e0;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  uint uStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined4 local_ac;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_94 [4];
  int local_90;
  int local_8c;
  undefined8 local_88;
  ulonglong local_80;
  int local_74;
  longlong local_70;
  undefined1 local_65;
  int local_64;
  longlong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_4) {
    return 0;
  }
  if (*param_2 == 3) {
    iVar5 = param_2[1];
LAB_1426281ec:
    *param_4 = iVar5;
    return 0;
  }
  if (param_2[0x10] == 9) {
    iVar5 = param_2[0x12];
    goto LAB_1426281ec;
  }
  if (param_2[0x1c] == -3) {
    iVar5 = param_2[0x1d];
    goto LAB_1426281ec;
  }
  if ((char)param_2[0x21] != '\0') {
    iVar5 = param_2[0x1f];
    goto LAB_1426281ec;
  }
  if (((param_2[0x22] - 1U < 2) && (iVar5 = 7, *(longlong *)(param_2 + 0x24) == 0)) ||
     (iVar5 = param_2[0x2e], iVar5 != 0)) goto LAB_1426281ec;
  piVar1 = param_2 + 4;
  pcVar7 = (char *)FUN_14256d770(piVar1);
  iVar5 = strcmp("currency",pcVar7);
  local_70 = CONCAT44(local_70._4_4_,iVar5);
  local_65 = iVar5 == 0;
  pcVar7 = (char *)FUN_14256d770(piVar1);
  iVar5 = strcmp("none",pcVar7);
  pcVar7 = (char *)FUN_14256d780(piVar1);
  iVar6 = strcmp("percent",pcVar7);
  local_60 = CONCAT44(local_60._4_4_,iVar6);
  local_e0 = piVar1;
  pcVar7 = (char *)FUN_14256d780(piVar1);
  local_8c = strcmp("permille",pcVar7);
  local_ac = 1;
  if (param_2[0x27] - 3U < 4) {
    local_ac = *(undefined4 *)(&DAT_149c4fab0 + (longlong)(int)(param_2[0x27] - 3U) * 4);
  }
  FUN_14256dc20(local_1e8,&DAT_14a1778fd,param_4);
  if ((int)local_70 == 0) {
    FUN_14256dd90(&local_1c8,local_e0,param_4);
    FUN_14256def0(local_1e8,&local_1c8);
    thunk_FUN_1424b70d0(&local_1c8);
  }
  local_a8 = *(longlong *)(param_2 + 0x34);
  if (local_a8 == 0) {
    FUN_14256dd50(local_228,local_1e8);
    FUN_14262b750(&local_1c8,local_228,param_2 + 0x38,param_4);
    local_a8 = param_1 + 0x138;
    FUN_14256def0(local_a8,&local_1c8);
    FUN_142503340(param_1 + 0x158,&local_1a8);
    FUN_1424a7ca0(param_1 + 0x198,local_168);
    FUN_1424a7ca0(param_1 + 0x1d8,local_128);
    FUN_140859a90(local_128);
    FUN_140859a90(local_168);
    if (local_19c != '\0') {
      FUN_1424da110(local_1a8);
    }
    thunk_FUN_1424b70d0(&local_1c8);
  }
  uVar3 = local_88._4_4_;
  uVar2 = param_2[0x26];
  uVar12 = 1;
  if (uVar2 != 5) {
    uVar12 = (ulonglong)uVar2;
  }
  piVar1 = param_2 + 0x22;
  local_88 = (int *)((ulonglong)local_88._4_4_ << 0x20);
  local_90 = (int)uVar12;
  if ((((int)local_70 != 0) && (iVar5 != 0)) &&
     (local_88 = (int *)CONCAT44(uVar3,(int)CONCAT71((uint7)(uint3)(uVar2 >> 8),1)), local_90 != 2))
  {
    local_88 = (int *)CONCAT44(uVar3,(int)CONCAT71((int7)(uVar12 >> 8),
                                                   (int)local_60 != 0 && local_8c != 0));
  }
  local_58 = (undefined8 *)0x0;
  local_64 = local_90;
  cVar4 = FUN_142569900(piVar1);
  if (cVar4 == '\0') {
    local_58 = (undefined8 *)0x0;
    puVar8 = (undefined8 *)FUN_142540ae0(param_2 + 0x38,param_4);
    local_50 = puVar8;
  }
  else {
    local_58 = (undefined8 *)0x0;
    puVar8 = (undefined8 *)FUN_142569920(piVar1);
    local_50 = (undefined8 *)0x0;
  }
  if (*param_4 < 1) {
    local_58 = local_50;
    local_e8 = (char *)FUN_1425410c0(puVar8);
  }
  else {
    local_e8 = "latn";
  }
  strncpy((char *)(param_1 + 0x65),local_e8,8);
  *(undefined1 *)(param_1 + 0x6d) = 0;
  local_58 = local_50;
  cVar4 = FUN_1425698f0(piVar1);
  if (cVar4 == '\0') {
    local_80 = thunk_FUN_1424da030(0xb00);
    if (local_80 != 0) {
      FUN_1425428a0(local_80,param_2 + 0x38,puVar8,param_4);
    }
    uVar12 = local_80;
    *(ulonglong *)(param_1 + 0x70) = local_80;
    puVar8 = *(undefined8 **)(param_1 + 0xf8);
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,1);
    }
    *(ulonglong *)(param_1 + 0xf8) = uVar12;
  }
  else {
    local_58 = local_50;
    uVar9 = FUN_142569910(piVar1);
    *(undefined8 *)(param_1 + 0x70) = uVar9;
  }
  if ((int)local_70 == 0) {
    local_58 = local_50;
    uVar9 = FUN_14256d780(local_1e8);
    if (0 < *param_4) goto LAB_1426287be;
    local_1c8 = (longlong)&uStack_1bc + 1;
    iStack_1c0 = 0x28;
    uStack_1bc = uStack_1bc & 0xffff0000;
    local_190 = 0;
    FUN_1425038b0(&local_d8,"Currencies/");
    FUN_142503520(&local_1c8,CONCAT44(iStack_d4,local_d8),iStack_d0,param_4);
    FUN_1425038b0(&local_208,uVar9);
    FUN_142503520(&local_1c8,local_208,local_200,param_4);
    local_74 = *param_4;
    lVar10 = FUN_1424ebfe0("icudt64l-curr",*(undefined8 *)(param_2 + 0x42),&local_74);
    lVar11 = lVar10;
    FUN_1424ec1c0(lVar10,local_1c8,lVar10,&local_74);
    if ((local_74 < 1) && (lVar11 = lVar10, iVar5 = FUN_1424eaf70(lVar10), 2 < iVar5)) {
      FUN_1424ebd50(lVar10,2,lVar10,&local_74);
      local_80 = local_80 & 0xffffffff00000000;
      lVar11 = FUN_1424ebec0(lVar10,0,local_94,&local_74);
      local_a0 = FUN_1424ebec0(lVar10,1,local_94,&local_74);
      uVar9 = FUN_1424ebec0(lVar10,2,local_94,&local_74);
      *param_4 = local_74;
    }
    else {
      local_80 = CONCAT44(local_80._4_4_,(int)CONCAT71((int7)((ulonglong)lVar11 >> 8),1));
      if (local_74 != 2) {
        *param_4 = local_74;
      }
      lVar11 = 0;
      local_a0 = 0;
      uVar9 = 0;
    }
    if (lVar10 != 0) {
      FUN_1424ea9f0(lVar10);
    }
    if ((char)uStack_1bc != '\0') {
      FUN_1424da110(local_1c8);
    }
    if ((char)local_80 != '\0') goto LAB_1426287be;
    local_80 = thunk_FUN_1424da030(0xb00);
    if (local_80 != 0) {
      FUN_142543680(local_80,*(undefined8 *)(param_1 + 0x70));
    }
    uVar12 = local_80;
    *(ulonglong *)(param_1 + 0x70) = local_80;
    puVar8 = *(undefined8 **)(param_1 + 0xf8);
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,1);
    }
    *(ulonglong *)(param_1 + 0xf8) = uVar12;
    local_58 = local_50;
    FUN_1424a6c90(&local_1c8,local_a0);
    FUN_1424a7c80(uVar12 + 0x288,&local_1c8);
    FUN_140859a90(&local_1c8);
    local_58 = local_50;
    FUN_1424a6c90(&local_1c8,uVar9);
    FUN_1424a7c80(uVar12 + 0x448,&local_1c8);
    FUN_140859a90(&local_1c8);
    if (lVar11 == 0) goto LAB_1426287be;
  }
  else {
LAB_1426287be:
    uVar14 = 0;
    if ((char)local_88 == '\0') {
      uVar14 = 3;
      if (((int)local_60 != 0) && (local_8c != 0)) {
        uVar14 = local_ac;
        if (local_64 == 2) {
          uVar14 = 0;
        }
        if ((int)local_70 != 0) {
          uVar14 = 0;
        }
      }
    }
    local_58 = local_50;
    lVar11 = FUN_142544680(param_2 + 0x38,local_e8,uVar14,param_4);
  }
  local_60 = thunk_FUN_1424da030(0x1b8);
  if (local_60 != 0) {
    FUN_142566100(local_60);
  }
  lVar10 = local_60;
  puVar8 = *(undefined8 **)(param_1 + 0x108);
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
  *(longlong *)(param_1 + 0x108) = lVar10;
  local_58 = local_50;
  FUN_1424a6c90(&local_1c8,lVar11);
  FUN_142565050(&local_1c8,lVar10,param_4);
  FUN_140859a90(&local_1c8);
  if ((param_2[0x2a] != 0) || (lVar11 = param_1 + 8, *(longlong *)(param_2 + 0x2c) != 0)) {
    lVar11 = param_1 + 200;
    local_58 = local_50;
    FUN_14256d550(lVar11,param_2 + 0x2a,param_1 + 8);
  }
  local_d8 = 0;
  if (param_2[0x10] == 0) {
    if (*param_2 == 1) {
      local_58 = local_50;
      FUN_142620f70(&local_208);
      local_58 = local_50;
      FUN_142621350(&local_208,&local_1c8,2);
    }
    else if ((int)local_70 == 0) {
      local_58 = local_50;
      FUN_142621310(&local_1c8,0);
    }
    else {
      local_58 = local_50;
      FUN_142621000(&local_1c8,6);
    }
    local_d8 = (int)local_1c8;
    iStack_d4 = local_1c8._4_4_;
    iStack_d0 = iStack_1c0;
    uStack_cc = uStack_1bc;
    local_c8 = local_1b8;
    iStack_c4 = iStack_1b4;
    iStack_c0 = iStack_1b0;
    iStack_bc = iStack_1ac;
  }
  else {
    local_d8 = param_2[0x10];
    iStack_d4 = param_2[0x11];
    iStack_d0 = param_2[0x12];
    uStack_cc = param_2[0x13];
    local_c8 = param_2[0x14];
    iStack_c4 = param_2[0x15];
    iStack_c0 = param_2[0x16];
    iStack_bc = param_2[0x17];
  }
  iVar5 = param_2[0x18];
  if (param_2[0x18] == 4) {
    iVar5 = iStack_c0;
  }
  local_58 = local_50;
  FUN_1426216c0(&local_1c8,&local_d8,iVar5,local_1e8,param_4);
  *(undefined8 *)(param_1 + 0x30) = local_1a8;
  *(int *)(param_1 + 0x20) = local_1b8;
  *(int *)(param_1 + 0x24) = iStack_1b4;
  *(int *)(param_1 + 0x28) = iStack_1b0;
  *(int *)(param_1 + 0x2c) = iStack_1ac;
  *(int *)(param_1 + 0x10) = (int)local_1c8;
  *(int *)(param_1 + 0x14) = local_1c8._4_4_;
  *(int *)(param_1 + 0x18) = iStack_1c0;
  *(uint *)(param_1 + 0x1c) = uStack_1bc;
  if ((short)param_2[0x19] == -3) {
    if (*param_2 == 1) {
      local_58 = local_50;
      FUN_14262b4c0(&local_1c8,1);
    }
    else {
      local_58 = local_50;
      FUN_14262b4c0(&local_1c8,2);
    }
    *(int *)(param_1 + 0x40) = iStack_1c0;
    lVar10 = local_1c8;
  }
  else {
    *(int *)(param_1 + 0x40) = param_2[0x1b];
    lVar10 = *(longlong *)(param_2 + 0x19);
  }
  *(longlong *)(param_1 + 0x38) = lVar10;
  piVar1 = param_2 + 0x38;
  local_58 = local_50;
  FUN_14262b570(param_1 + 0x38,*(undefined8 *)(param_1 + 0x108),piVar1);
  if ((int)*(longlong *)(param_2 + 0x1c) == -2) {
    local_58 = local_50;
    FUN_14262bcf0(&local_1c8);
    *(int *)(param_1 + 0x4c) = iStack_1c0;
    lVar10 = local_1c8;
  }
  else {
    *(int *)(param_1 + 0x4c) = param_2[0x1e];
    lVar10 = *(longlong *)(param_2 + 0x1c);
  }
  *(longlong *)(param_1 + 0x44) = lVar10;
  if (((char)param_2[0x21] == '\0') && ((short)param_2[0x1f] == -1)) {
    local_58 = local_50;
    FUN_142607ca0(&local_1c8,1);
    *(int *)(param_1 + 0x58) = iStack_1c0;
    lVar10 = local_1c8;
  }
  else {
    *(int *)(param_1 + 0x58) = param_2[0x21];
    lVar10 = *(longlong *)(param_2 + 0x1f);
  }
  *(longlong *)(param_1 + 0x50) = lVar10;
  iVar5 = param_2[0x27];
  if (iVar5 == 7) {
    iVar5 = 0;
  }
  *(int *)(param_1 + 0x5c) = iVar5;
  iVar5 = param_2[0x28];
  if (iVar5 == 2) {
    iVar5 = 0;
  }
  *(int *)(param_1 + 0x60) = iVar5;
  *(undefined1 *)(param_1 + 100) = local_65;
  if (*param_2 == 0) {
    local_60 = thunk_FUN_1424da030(0x28);
    if (local_60 != 0) {
      FUN_1426c7870(local_60,param_2,*(undefined8 *)(param_1 + 0x70),lVar11);
    }
    lVar11 = local_60;
    puVar8 = *(undefined8 **)(param_1 + 0x110);
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,1);
    }
    *(longlong *)(param_1 + 0x110) = lVar11;
  }
  else {
    *(longlong *)(param_1 + 0x88) = param_1 + 0xb8;
  }
  local_60 = thunk_FUN_1424da030(0xa8);
  if (local_60 != 0) {
    FUN_142573dc0(local_60,0);
  }
  puVar8 = *(undefined8 **)(param_1 + 0x118);
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
  *(longlong *)(param_1 + 0x118) = local_60;
  lVar10 = *(longlong *)(param_2 + 0x30);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x108);
  }
  local_58 = local_50;
  FUN_142573e00(local_60,lVar10,0xd);
  local_58 = local_50;
  FUN_142573e10(local_60,*(undefined4 *)(param_1 + 0x5c),local_8c == 0);
  local_58 = local_50;
  cVar4 = FUN_142573e50(local_60);
  if (cVar4 == '\0') {
    local_58 = local_50;
    uVar14 = 0;
    FUN_142573e20(local_60,*(undefined8 *)(param_1 + 0x70),local_a8,local_64,0);
  }
  else {
    lVar10 = *(longlong *)(param_2 + 0x32);
    if ((lVar10 == 0) && (lVar10 = *(longlong *)(param_1 + 0x100), lVar10 == 0)) {
      local_58 = local_50;
      lVar10 = FUN_1424c0d30(piVar1,param_4);
      puVar8 = *(undefined8 **)(param_1 + 0x100);
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8,1);
      }
      *(longlong *)(param_1 + 0x100) = lVar10;
    }
    local_58 = local_50;
    FUN_142573e20(local_60,*(undefined8 *)(param_1 + 0x70),local_a8,local_64,lVar10);
    uVar14 = (undefined4)((ulonglong)lVar10 >> 0x20);
  }
  lVar10 = local_60;
  if (param_3 == '\0') {
    local_58 = local_50;
    FUN_1425745d0(local_60,lVar11);
  }
  else {
    local_58 = local_50;
    lVar10 = FUN_142573eb0(local_60,lVar11,param_4);
    puVar8 = *(undefined8 **)(param_1 + 0x120);
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,1);
    }
    *(longlong *)(param_1 + 0x120) = lVar10;
  }
  if ((char)local_88 == '\0') {
    if (((int)local_70 != 0) || (local_64 != 2)) {
      *(longlong *)(param_1 + 0x78) = param_1 + 0xa8;
      goto LAB_142628eb3;
    }
    lVar11 = *(longlong *)(param_2 + 0x32);
    if ((lVar11 == 0) && (lVar11 = *(longlong *)(param_1 + 0x100), lVar11 == 0)) {
      local_58 = local_50;
      lVar11 = FUN_1424c0d30(piVar1,param_4);
      puVar8 = *(undefined8 **)(param_1 + 0x100);
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8,1);
      }
      *(longlong *)(param_1 + 0x100) = lVar11;
    }
    local_58 = local_50;
    piVar16 = param_4;
    lVar10 = FUN_1426c9520(piVar1,local_1e8,lVar11,lVar10,param_4);
    uVar14 = (undefined4)((ulonglong)piVar16 >> 0x20);
  }
  else {
    lVar11 = *(longlong *)(param_2 + 0x32);
    if ((lVar11 == 0) && (lVar11 = *(longlong *)(param_1 + 0x100), lVar11 == 0)) {
      local_58 = local_50;
      lVar11 = FUN_1424c0d30(piVar1,param_4);
      puVar8 = *(undefined8 **)(param_1 + 0x100);
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8,1);
      }
      *(longlong *)(param_1 + 0x100) = lVar11;
    }
    local_58 = local_50;
    lVar10 = FUN_1426c7a80(piVar1,local_e0,param_2 + 10,&local_90,lVar11,lVar10,param_4);
    uVar14 = (undefined4)((ulonglong)lVar11 >> 0x20);
  }
  puVar8 = *(undefined8 **)(param_1 + 0x128);
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
  *(longlong *)(param_1 + 0x128) = lVar10;
LAB_142628eb3:
  if (*param_2 == 1) {
    bVar15 = (int)local_70 == 0;
    local_64 = CONCAT31(local_64._1_3_,local_90 != 2);
    local_88 = piVar1;
    local_70 = thunk_FUN_1424da030();
    if (local_70 != 0) {
      lVar11 = *(longlong *)(param_2 + 0x32);
      if ((lVar11 == 0) && (lVar11 = *(longlong *)(param_1 + 0x100), lVar11 == 0)) {
        lVar11 = FUN_1424c0d30(local_88,param_4);
        puVar8 = *(undefined8 **)(param_1 + 0x100);
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8,1);
        }
        *(longlong *)(param_1 + 0x100) = lVar11;
      }
      lVar13 = 0;
      if (param_3 != '\0') {
        lVar13 = local_60;
      }
      FUN_1426ca560(local_70,param_2[1],local_88,local_e8,
                    CONCAT44(uVar14,(uint)(bVar15 & (byte)local_64)),lVar11,lVar13,lVar10,param_4);
    }
    puVar8 = *(undefined8 **)(param_1 + 0x130);
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,1);
    }
    *(longlong *)(param_1 + 0x130) = local_70;
    lVar10 = local_70;
  }
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  thunk_FUN_1424b70d0(local_1e8);
  return lVar10;
}



// FUNCTION 142628fe0 Unwind@142628fe0 body=71 status=ok
// SIG undefined Unwind@142628fe0(void)

void Unwind_142628fe0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x1f8));
  *(undefined8 *)(param_2 + 0x220) = *(undefined8 *)(param_2 + 0x228);
  return;
}



// FUNCTION 142629030 Unwind@142629030 body=68 status=ok
// SIG undefined Unwind@142629030(void)

void Unwind_142629030(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0x220) = *(undefined8 *)(param_2 + 0x228);
  return;
}



// FUNCTION 142629080 Unwind@142629080 body=68 status=ok
// SIG undefined Unwind@142629080(void)

void Unwind_142629080(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0x220) = *(undefined8 *)(param_2 + 0x228);
  return;
}



// FUNCTION 1426290d0 Unwind@1426290d0 body=71 status=ok
// SIG undefined Unwind@1426290d0(void)

void Unwind_1426290d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x218));
  *(undefined8 *)(param_2 + 0x220) = *(undefined8 *)(param_2 + 0x228);
  return;
}



// FUNCTION 142629120 Unwind@142629120 body=71 status=ok
// SIG undefined Unwind@142629120(void)

void Unwind_142629120(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x1f8));
  *(undefined8 *)(param_2 + 0x220) = *(undefined8 *)(param_2 + 0x228);
  return;
}



// FUNCTION 142629170 Unwind@142629170 body=71 status=ok
// SIG undefined Unwind@142629170(void)

void Unwind_142629170(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x208));
  *(undefined8 *)(param_2 + 0x220) = *(undefined8 *)(param_2 + 0x228);
  return;
}



// FUNCTION 1426291c0 Unwind@1426291c0 body=55 status=ok
// SIG undefined Unwind@1426291c0(void)

void Unwind_1426291c0(undefined8 param_1,longlong param_2)

{
  FUN_14256c8f0(param_2 + 0xb0);
  return;
}



// FUNCTION 142629200 Unwind@142629200 body=55 status=ok
// SIG undefined Unwind@142629200(void)

void Unwind_142629200(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0xb0);
  return;
}



// FUNCTION 142629240 Unwind@142629240 body=74 status=ok
// SIG undefined Unwind@142629240(void)

void Unwind_142629240(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xbc) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0xb0));
  }
  *(undefined8 *)(param_2 + 0x220) = *(undefined8 *)(param_2 + 0x228);
  return;
}



// FUNCTION 142629290 Unwind@142629290 body=71 status=ok
// SIG undefined Unwind@142629290(void)

void Unwind_142629290(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x218));
  *(undefined8 *)(param_2 + 0x220) = *(undefined8 *)(param_2 + 0x228);
  return;
}



// FUNCTION 1426292e0 Unwind@1426292e0 body=71 status=ok
// SIG undefined Unwind@1426292e0(void)

void Unwind_1426292e0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x218));
  *(undefined8 *)(param_2 + 0x220) = *(undefined8 *)(param_2 + 0x228);
  return;
}



// FUNCTION 142629330 Unwind@142629330 body=68 status=ok
// SIG undefined Unwind@142629330(void)

void Unwind_142629330(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0x220) = *(undefined8 *)(param_2 + 0x228);
  return;
}



// FUNCTION 142629380 Unwind@142629380 body=68 status=ok
// SIG undefined Unwind@142629380(void)

void Unwind_142629380(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x220);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 1426293d0 Unwind@1426293d0 body=55 status=ok
// SIG undefined Unwind@1426293d0(void)

void Unwind_1426293d0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x90);
  return;
}



// FUNCTION 142629410 FUN_142629410 body=57 status=ok
// SIG undefined FUN_142629410(void)

void FUN_142629410(longlong param_1)

{
  FUN_140859a90(param_1 + 0xa0);
  FUN_140859a90(param_1 + 0x60);
  if (*(char *)(param_1 + 0x2c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x20));
  }
  thunk_FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 142629450 FUN_142629450 body=336 status=ok
// SIG undefined FUN_142629450(void)

int FUN_142629450(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 local_98 [64];
  longlong local_58;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_4c = param_4;
  iVar2 = FUN_142538eb0(param_2);
  if (iVar2 < 0) {
    iVar6 = 0;
  }
  else {
    local_58 = param_1 + 0x30;
    iVar6 = 0;
    iVar7 = 0;
    do {
      cVar1 = FUN_14262b6d0(local_58,iVar7,param_2);
      if (cVar1 != '\0') {
        FUN_1424a6be0(local_98,*(longlong *)(param_1 + 0x68) +
                               (ulonglong)*(byte *)(param_1 + 0x5c) * 0x400 + 0x48);
        iVar3 = FUN_142609a00(param_3,local_4c,local_98,6,param_5);
        iVar6 = iVar6 + iVar3;
        FUN_140859a90(local_98);
      }
      cVar1 = FUN_142538ee0(param_2,iVar7);
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x68) + 0x748);
      iVar4 = (int)cVar1;
      if (iVar3 == -1) {
        lVar5 = (longlong)iVar4 * 0x40 + 0x440;
        if (iVar4 - 10U < 0xfffffff7) {
          lVar5 = 0x100;
        }
        iVar3 = FUN_142609a00(param_3,local_4c,*(longlong *)(param_1 + 0x68) + 8 + lVar5,0,param_5);
      }
      else {
        iVar3 = FUN_1426098c0(param_3,local_4c,iVar3 + iVar4,0,param_5);
      }
      iVar6 = iVar3 + iVar6;
      iVar7 = iVar7 + 1;
    } while (iVar2 + 1 != iVar7);
  }
  return iVar6;
}



// FUNCTION 1426295b0 Unwind@1426295b0 body=55 status=ok
// SIG undefined Unwind@1426295b0(void)

void Unwind_1426295b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1426295f0 FUN_1426295f0 body=222 status=ok
// SIG undefined FUN_1426295f0(void)

int FUN_1426295f0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  iVar2 = FUN_142538ed0(param_2);
  iVar3 = 0;
  if (iVar2 < 0) {
    iVar7 = 1;
    if (1 < -iVar2) {
      iVar7 = -iVar2;
    }
    iVar3 = 0;
    iVar2 = -1;
    do {
      cVar1 = FUN_142538ee0(param_2,iVar2);
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x68) + 0x748);
      iVar4 = (int)cVar1;
      if (iVar5 == -1) {
        lVar6 = (longlong)iVar4 * 0x40 + 0x440;
        if (iVar4 - 10U < 0xfffffff7) {
          lVar6 = 0x100;
        }
        iVar5 = FUN_142609a00(param_3,param_4 + iVar3,*(longlong *)(param_1 + 0x68) + 8 + lVar6,1,
                              param_5);
      }
      else {
        iVar5 = FUN_1426098c0(param_3,param_4 + iVar3,iVar5 + iVar4,1,param_5);
      }
      iVar3 = iVar5 + iVar3;
      iVar5 = iVar7 + iVar2;
      iVar2 = iVar2 + -1;
    } while (iVar5 != 0);
  }
  return iVar3;
}



// FUNCTION 1426296d0 FUN_1426296d0 body=38 status=ok
// SIG undefined FUN_1426296d0(void)

undefined8 FUN_1426296d0(undefined8 param_1,int param_2)

{
  FUN_142629780();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142629700 FUN_142629700 body=3 status=ok
// SIG undefined FUN_142629700(void)

undefined8 FUN_142629700(void)

{
  return 0;
}



// FUNCTION 142629710 FUN_142629710 body=3 status=ok
// SIG undefined FUN_142629710(void)

undefined8 FUN_142629710(void)

{
  return 0;
}



// FUNCTION 142629720 FUN_142629720 body=3 status=ok
// SIG undefined FUN_142629720(void)

undefined8 FUN_142629720(void)

{
  return 0;
}



// FUNCTION 142629730 FUN_142629730 body=5 status=ok
// SIG undefined FUN_142629730(void)

undefined1 FUN_142629730(longlong param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



// FUNCTION 142629740 FUN_142629740 body=3 status=ok
// SIG undefined FUN_142629740(void)

undefined8 FUN_142629740(void)

{
  return 0;
}



// FUNCTION 142629750 FUN_142629750 body=8 status=ok
// SIG undefined FUN_142629750(void)

void FUN_142629750(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return;
}



// FUNCTION 142629760 FUN_142629760 body=23 status=ok
// SIG undefined FUN_142629760(void)

bool FUN_142629760(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  return iVar1 == 0;
}


