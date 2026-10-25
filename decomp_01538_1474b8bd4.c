// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1474b8bd4 FUN_1474b8bd4 body=132 status=ok
// SIG undefined FUN_1474b8bd4(void)

void FUN_1474b8bd4(longlong param_1,int param_2)

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



// FUNCTION 1474b8c5a FUN_1474b8c5a body=48 status=ok
// SIG undefined FUN_1474b8c5a(void)

void FUN_1474b8c5a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 1474b8c8a FUN_1474b8c8a body=47 status=ok
// SIG undefined FUN_1474b8c8a(void)

void FUN_1474b8c8a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1474b8cba FUN_1474b8cba body=291 status=ok
// SIG undefined FUN_1474b8cba(void)

undefined8 * FUN_1474b8cba(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1474b8b72(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  uVar3 = *(undefined4 *)(param_2 + 5);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar5 = *(undefined4 *)(param_2 + 6);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar7 = *(undefined4 *)(param_2 + 7);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar9 = *(undefined4 *)(param_2 + 8);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar12 = *(undefined4 *)(param_2 + 10);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar11;
  *(undefined4 *)(param_1 + 10) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar13;
  *(undefined4 *)(param_1 + 7) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar8;
  *(undefined4 *)(param_1 + 8) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar10;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 6) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar6;
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar2 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[0xe] = param_2[0xe];
  return param_1;
}



// FUNCTION 1474b8dde FUN_1474b8dde body=171 status=ok
// SIG undefined FUN_1474b8dde(void)

undefined8 * FUN_1474b8dde(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1474b8e8a(param_1 + 1,iVar1);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 1474b8e8a FUN_1474b8e8a body=89 status=ok
// SIG undefined FUN_1474b8e8a(void)

void FUN_1474b8e8a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1474b8fb6 FUN_1474b8fb6 body=215 status=ok
// SIG undefined FUN_1474b8fb6(void)

undefined8 FUN_1474b8fb6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar11);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      FUN_144a787a6();
      lVar3 = param_2 + lVar11;
      puVar4 = (undefined8 *)(param_3 + 0x20 + lVar11);
      puVar9 = puVar4;
      puVar10 = (undefined8 *)(lVar3 + 0x20);
      for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      FUN_140c99494(param_2 + lVar11 + 0x80,param_3 + lVar11 + 0x80);
      FUN_144a67f5c(param_2 + lVar11 + 0x90,param_3 + lVar11 + 0x90);
      *(undefined2 *)(lVar3 + 0xa0) = *(undefined2 *)(puVar4 + 0x10);
      *(undefined1 *)(lVar3 + 0xa2) = *(undefined1 *)((longlong)puVar4 + 0x82);
      lVar11 = lVar11 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474b90b6 FUN_1474b90b6 body=59 status=ok
// SIG undefined FUN_1474b90b6(void)

undefined8 FUN_1474b90b6(longlong *param_1)

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



// FUNCTION 1474b9102 FUN_1474b9102 body=40 status=ok
// SIG undefined FUN_1474b9102(void)

void FUN_1474b9102(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_1474b9178(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 1474b9178 FUN_1474b9178 body=68 status=ok
// SIG undefined FUN_1474b9178(void)

void FUN_1474b9178(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474b91ce FUN_1474b91ce body=48 status=ok
// SIG undefined FUN_1474b91ce(void)

void FUN_1474b91ce(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474b9214 FUN_1474b9214 body=54 status=ok
// SIG undefined FUN_1474b9214(void)

undefined1 FUN_1474b9214(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474b930e(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 1474b9272 FUN_1474b9272 body=59 status=ok
// SIG undefined FUN_1474b9272(void)

undefined8 FUN_1474b9272(longlong *param_1)

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



// FUNCTION 1474b930e FUN_1474b930e body=89 status=ok
// SIG undefined FUN_1474b930e(void)

longlong * FUN_1474b930e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  FUN_140c99494(param_1 + 1,param_2 + 1);
  *(int *)(param_1 + 3) = (int)param_2[3];
  FUN_144a67f5c(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 1474b9368 FUN_1474b9368 body=52 status=ok
// SIG undefined FUN_1474b9368(void)

void FUN_1474b9368(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1474b93d0 FUN_1474b93d0 body=104 status=ok
// SIG undefined FUN_1474b93d0(void)

undefined8 FUN_1474b93d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      lVar2 = param_2 + 0x10 + lVar6;
      *(undefined4 *)(lVar2 + -0x10) = *puVar1;
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 4);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(puVar1 + 8);
      *(undefined4 *)(lVar2 + 0x18) = puVar1[10];
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474b9460 FUN_1474b9460 body=59 status=ok
// SIG undefined FUN_1474b9460(void)

undefined8 FUN_1474b9460(longlong *param_1)

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



// FUNCTION 1474b94a6 FUN_1474b94a6 body=38 status=ok
// SIG undefined FUN_1474b94a6(void)

void FUN_1474b94a6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1474b951a FUN_1474b951a body=147 status=ok
// SIG undefined FUN_1474b951a(void)

undefined8 * FUN_1474b951a(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(&local_38,&DAT_149e01fe8);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = local_38;
  local_20 = local_30 + -1;
  if (local_30 == 0) {
    local_20 = 0;
  }
  FUN_14475bf92(param_1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474b9624 FUN_1474b9624 body=59 status=ok
// SIG undefined FUN_1474b9624(void)

undefined8 FUN_1474b9624(longlong *param_1)

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



// FUNCTION 1474b973e FUN_1474b973e body=59 status=ok
// SIG undefined FUN_1474b973e(void)

undefined8 FUN_1474b973e(longlong *param_1)

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



// FUNCTION 1474b9878 FUN_1474b9878 body=59 status=ok
// SIG undefined FUN_1474b9878(void)

undefined8 FUN_1474b9878(longlong *param_1)

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



// FUNCTION 1474b991a FUN_1474b991a body=97 status=ok
// SIG undefined FUN_1474b991a(void)

void FUN_1474b991a(undefined8 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  
  *param_2 = 0x47c34ff3;
  *(undefined8 *)(param_2 + 2) = 0;
  param_2[4] = 1;
  FUN_140b1cbbc(param_2 + 2,1,0);
  puVar1 = *(undefined2 **)(param_2 + 2);
  *puVar1 = 0x500;
  *(undefined8 *)(puVar1 + 2) = 0xa00000005;
  *(undefined8 *)(puVar1 + 6) = 0x3200000019;
  *(undefined8 *)(puVar1 + 10) = 0x3c3f800000;
  *(undefined8 *)(puVar1 + 0xe) = 0;
  param_2[6] = 5000;
  return;
}



// FUNCTION 1474b998e FUN_1474b998e body=78 status=ok
// SIG undefined FUN_1474b998e(void)

undefined8 FUN_1474b998e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1474b9abe(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474b9a04 FUN_1474b9a04 body=59 status=ok
// SIG undefined FUN_1474b9a04(void)

undefined8 FUN_1474b9a04(longlong *param_1)

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



// FUNCTION 1474b9a4a FUN_1474b9a4a body=38 status=ok
// SIG undefined FUN_1474b9a4a(void)

void FUN_1474b9a4a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1474b9abe FUN_1474b9abe body=89 status=ok
// SIG undefined FUN_1474b9abe(void)

undefined8 * FUN_1474b9abe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140b1cbbc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x24);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474b9b4c FUN_1474b9b4c body=54 status=ok
// SIG undefined FUN_1474b9b4c(void)

undefined1 FUN_1474b9b4c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474b9c64(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1474b9baa FUN_1474b9baa body=59 status=ok
// SIG undefined FUN_1474b9baa(void)

undefined8 FUN_1474b9baa(longlong *param_1)

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



// FUNCTION 1474b9bf0 FUN_1474b9bf0 body=37 status=ok
// SIG undefined FUN_1474b9bf0(void)

void FUN_1474b9bf0(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1474b9c64 FUN_1474b9c64 body=79 status=ok
// SIG undefined FUN_1474b9c64(void)

undefined8 * FUN_1474b9c64(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1417974e0(param_1,iVar1);
      FUN_143280618(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1474b9d20 FUN_1474b9d20 body=59 status=ok
// SIG undefined FUN_1474b9d20(void)

undefined8 FUN_1474b9d20(longlong *param_1)

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



// FUNCTION 1474b9dc8 FUN_1474b9dc8 body=370 status=ok
// SIG undefined FUN_1474b9dc8(void)

longlong * FUN_1474b9dc8(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x14,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x14);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1474b9f72(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xccccc < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1474b4cd6(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x14;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_1474b9f72(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1474b9f3c(param_2);
        FUN_1474b4cd6(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1474b9f3c FUN_1474b9f3c body=54 status=ok
// SIG undefined FUN_1474b9f3c(void)

longlong FUN_1474b9f3c(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1474b9fe2(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x14 + *param_1;
}



// FUNCTION 1474b9f72 FUN_1474b9f72 body=112 status=ok
// SIG undefined FUN_1474b9f72(void)

void FUN_1474b9f72(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x14,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x14)) {
      uVar2 = uVar1 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x14,4);
  }
  return;
}



// FUNCTION 1474b9fe2 FUN_1474b9fe2 body=147 status=ok
// SIG undefined FUN_1474b9fe2(void)

void FUN_1474b9fe2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474ba076 FUN_1474ba076 body=371 status=ok
// SIG undefined FUN_1474ba076(void)

longlong * FUN_1474ba076(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x1300,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x1300);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1474ba220(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xd79 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1474b4b80(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x1300;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_1474ba220(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1474ba1ea(param_2);
        FUN_1474b4b80(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1474ba1ea FUN_1474ba1ea body=53 status=ok
// SIG undefined FUN_1474ba1ea(void)

longlong FUN_1474ba1ea(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1474ba290(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x1300 + *param_1;
}



// FUNCTION 1474ba220 FUN_1474ba220 body=111 status=ok
// SIG undefined FUN_1474ba220(void)

void FUN_1474ba220(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x1300,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x1300)) {
      uVar2 = uVar1 / 0x1300 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x1300,8);
  }
  return;
}



// FUNCTION 1474ba290 FUN_1474ba290 body=146 status=ok
// SIG undefined FUN_1474ba290(void)

void FUN_1474ba290(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1300,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1300)) {
      uVar5 = uVar4 / 0x1300 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1300,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474ba324 FUN_1474ba324 body=90 status=ok
// SIG undefined FUN_1474ba324(void)

void FUN_1474ba324(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (param_3 < iVar2) {
    FUN_144a7f90c(param_1,0,iVar2,1,1);
    param_3 = iVar2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474ba37e FUN_1474ba37e body=106 status=ok
// SIG undefined FUN_1474ba37e(void)

undefined8 FUN_1474ba37e(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x14,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x14)) {
    uVar5 = uVar2 / 0x14 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x14,4);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1474ba3e8 FUN_1474ba3e8 body=38 status=ok
// SIG undefined FUN_1474ba3e8(void)

undefined8 FUN_1474ba3e8(undefined8 param_1,int param_2)

{
  FUN_1474b71b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474ba410 FUN_1474ba410 body=77 status=ok
// SIG undefined FUN_1474ba410(void)

undefined8 * FUN_1474ba410(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_14a3d46d0;
  if (param_1[5] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[5] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474ba45e FUN_1474ba45e body=132 status=ok
// SIG undefined FUN_1474ba45e(void)

void FUN_1474ba45e(longlong param_1,int param_2)

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



// FUNCTION 1474ba4e4 FUN_1474ba4e4 body=34 status=ok
// SIG undefined FUN_1474ba4e4(void)

void FUN_1474ba4e4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a417e30;
  return;
}



// FUNCTION 1474ba506 FUN_1474ba506 body=31 status=ok
// SIG undefined FUN_1474ba506(void)

undefined8 FUN_1474ba506(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474ba542 FUN_1474ba542 body=93 status=ok
// SIG undefined FUN_1474ba542(void)

void FUN_1474ba542(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a417dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1474ba5a0 FUN_1474ba5a0 body=126 status=ok
// SIG undefined FUN_1474ba5a0(void)

void FUN_1474ba5a0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a417dc0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001474ba60f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1474ba62a FUN_1474ba62a body=21 status=ok
// SIG undefined FUN_1474ba62a(void)

undefined8 FUN_1474ba62a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1474ba640 FUN_1474ba640 body=29 status=ok
// SIG undefined FUN_1474ba640(void)

undefined8 FUN_1474ba640(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474ba65e FUN_1474ba65e body=29 status=ok
// SIG undefined FUN_1474ba65e(void)

undefined8 FUN_1474ba65e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474ba67b FUN_1474ba67b body=41 status=ok
// SIG undefined FUN_1474ba67b(void)

void FUN_1474ba67b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_143607b78(param_1);
    param_1 = param_1 + 0x100;
  }
  return;
}



// FUNCTION 1474ba6a4 FUN_1474ba6a4 body=132 status=ok
// SIG undefined FUN_1474ba6a4(void)

void FUN_1474ba6a4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int extraout_var;
  longlong lVar3;
  int iVar4;
  
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
      lVar3 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    FUN_144a3809e(lVar3 << 8,0x10);
    iVar4 = 0x7fffffff;
    if ((int)uVar1 <= extraout_var) {
      iVar4 = extraout_var;
    }
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,param_2,iVar4,0x100,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474ba72a FUN_1474ba72a body=96 status=ok
// SIG undefined FUN_1474ba72a(void)

void FUN_1474ba72a(longlong param_1,int param_2)

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



// FUNCTION 1474ba78a FUN_1474ba78a body=23 status=ok
// SIG undefined FUN_1474ba78a(void)

void FUN_1474ba78a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
  } while (param_3 != (int)lVar1);
  return;
}



// FUNCTION 1474ba7a2 FUN_1474ba7a2 body=132 status=ok
// SIG undefined FUN_1474ba7a2(void)

void FUN_1474ba7a2(longlong param_1,int param_2)

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



// FUNCTION 1474ba828 FUN_1474ba828 body=115 status=ok
// SIG undefined FUN_1474ba828(void)

void FUN_1474ba828(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474ba89b FUN_1474ba89b body=52 status=ok
// SIG undefined FUN_1474ba89b(void)

void FUN_1474ba89b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1474b544a(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 1474ba8d0 FUN_1474ba8d0 body=95 status=ok
// SIG undefined FUN_1474ba8d0(void)

void FUN_1474ba8d0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1474ba930 FUN_1474ba930 body=132 status=ok
// SIG undefined FUN_1474ba930(void)

void FUN_1474ba930(longlong param_1,int param_2)

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



// FUNCTION 1474ba9b6 FUN_1474ba9b6 body=147 status=ok
// SIG undefined FUN_1474ba9b6(void)

void FUN_1474ba9b6(longlong param_1,int param_2)

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



// FUNCTION 1474baa4a FUN_1474baa4a body=48 status=ok
// SIG undefined FUN_1474baa4a(void)

void FUN_1474baa4a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1474baa7a FUN_1474baa7a body=19 status=ok
// SIG undefined FUN_1474baa7a(void)

void FUN_1474baa7a(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,CONCAT31((int3)(param_2 >> 8),0xff),(ulonglong)param_2 << 2);
    return;
  }
  return;
}



// FUNCTION 1474baa8e FUN_1474baa8e body=118 status=ok
// SIG undefined FUN_1474baa8e(void)

int FUN_1474baa8e(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FUN_1474bab04(lVar3 + (longlong)iVar4 * 0x88,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x80 + (longlong)iVar4 * 0x88);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1474bab04 FUN_1474bab04 body=191 status=ok
// SIG undefined FUN_1474bab04(void)

ulonglong FUN_1474bab04(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  
  cVar5 = FUN_1474babc4(param_1 + 10,param_2 + 10);
  if (((cVar5 != '\0') && (*param_1 == *param_2)) && (param_1[1] == param_2[1])) {
    uVar3 = param_1[4];
    if (uVar3 == param_2[4]) {
      if (0 < (int)uVar3) {
        uVar6 = 0;
        do {
          if (*(int *)(*(longlong *)(param_1 + 2) + uVar6 * 8) !=
              *(int *)(*(longlong *)(param_2 + 2) + uVar6 * 8)) {
            return 0;
          }
          if (*(int *)(*(longlong *)(param_1 + 2) + 4 + uVar6 * 8) !=
              *(int *)(*(longlong *)(param_2 + 2) + 4 + uVar6 * 8)) {
            return 0;
          }
          uVar6 = uVar6 + 1;
        } while (uVar3 != uVar6);
      }
      uVar4 = param_1[8];
      if (uVar4 == param_2[8]) {
        if ((int)uVar4 < 1) {
          return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
        }
        lVar7 = 0;
        while( true ) {
          fVar1 = *(float *)(*(longlong *)(param_1 + 6) + lVar7 * 4);
          fVar2 = *(float *)(*(longlong *)(param_2 + 6) + lVar7 * 4);
          uVar6 = (ulonglong)(-(uint)(fVar1 == fVar2) & 1);
          if (fVar1 != fVar2) {
            return uVar6;
          }
          if (NAN(fVar1) || NAN(fVar2)) break;
          bVar8 = (ulonglong)uVar4 - 1 == lVar7;
          lVar7 = lVar7 + 1;
          if (bVar8) {
            return uVar6;
          }
        }
        return uVar6;
      }
    }
  }
  return 0;
}



// FUNCTION 1474babc4 FUN_1474babc4 body=166 status=ok
// SIG undefined FUN_1474babc4(void)

undefined8 FUN_1474babc4(int *param_1,int *param_2)

{
  char cVar1;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    if ((*(double *)(param_1 + 2) == *(double *)(param_2 + 2)) &&
       (!NAN(*(double *)(param_1 + 2)) && !NAN(*(double *)(param_2 + 2)))) {
      if ((*(double *)(param_1 + 4) == *(double *)(param_2 + 4)) &&
         (!NAN(*(double *)(param_1 + 4)) && !NAN(*(double *)(param_2 + 4)))) {
        if ((*(double *)(param_1 + 6) == *(double *)(param_2 + 6)) &&
           ((((!NAN(*(double *)(param_1 + 6)) && !NAN(*(double *)(param_2 + 6)) &&
              (param_1[8] == param_2[8])) && (param_1[9] == param_2[9])) &&
            (param_1[10] == param_2[10])))) {
          if ((((float)param_1[0xc] == (float)param_2[0xc]) &&
              (!NAN((float)param_1[0xc]) && !NAN((float)param_2[0xc]))) &&
             ((param_1[0x10] == param_2[0x10] &&
              ((cVar1 = FUN_14000b9e1(*(undefined8 *)(param_1 + 0xe),*(undefined8 *)(param_2 + 0xe))
               , cVar1 != '\0' && (param_1[0xb] == param_2[0xb])))))) {
            return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x12) >> 8),
                            *(longlong *)(param_1 + 0x12) == *(longlong *)(param_2 + 0x12));
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1474bac6a FUN_1474bac6a body=94 status=ok
// SIG undefined FUN_1474bac6a(void)

void FUN_1474bac6a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0xe0;
  uVar1 = DAT_14c8464e8;
  param_1[6] = DAT_14c8464e0;
  param_1[7] = uVar1;
  param_1[8] = DAT_14c8464f0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return;
}



// FUNCTION 1474bacc8 FUN_1474bacc8 body=149 status=ok
// SIG undefined FUN_1474bacc8(void)

void FUN_1474bacc8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb8)) {
      uVar5 = uVar4 / 0xb8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474bad5e FUN_1474bad5e body=942 status=ok
// SIG undefined FUN_1474bad5e(void)

void FUN_1474bad5e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_a8 [36];
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  longlong local_70;
  undefined4 *local_68;
  undefined4 local_5c;
  undefined4 local_58 [2];
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_1;
  local_68 = param_2;
  FUN_1474bb10e(param_1,local_58);
  puVar1 = (uint *)param_3[1];
  FUN_1474b8cba(local_50,*param_3);
  local_50[0x1e] = *puVar1;
  local_50[0x20] = 0xffffffff;
  local_5c = local_58[0];
  uVar7 = local_50[1] ^ *local_50;
  uVar6 = local_50[4];
  uVar7 = uVar7 * 0x40 + uVar6 + (uVar7 >> 2) + 0x9e3779b9 ^ uVar7;
  if ((longlong)(int)uVar6 != 0) {
    lVar11 = 0;
    do {
      uVar7 = ((uint)((ulonglong)*(undefined8 *)(*(longlong *)(local_50 + 2) + lVar11) >> 0x20) ^
              (uint)*(undefined8 *)(*(longlong *)(local_50 + 2) + lVar11)) +
              (uVar7 >> 2) + uVar7 * 0x40 + 0x9e3779b9 ^ uVar7;
      lVar11 = lVar11 + 8;
    } while ((longlong)(int)uVar6 * 8 != lVar11);
  }
  if ((longlong)(int)local_50[8] != 0) {
    lVar11 = 0;
    do {
      uVar7 = *(int *)(*(longlong *)(local_50 + 6) + lVar11) + (uVar7 >> 2) + uVar7 * 0x40 +
              0x9e3779b9 ^ uVar7;
      lVar11 = lVar11 + 4;
    } while ((longlong)(int)local_50[8] * 4 != lVar11);
  }
  local_84 = local_50[10];
  uVar6 = local_50[0xb];
  uVar12 = 0;
  iVar5 = FUN_1448eb174(local_50 + 0xc,0x18,0);
  lVar11 = local_70;
  local_80 = local_50[0x13];
  local_7c = local_50[0x14];
  local_78 = local_50[0x16];
  local_74 = local_50[0x15];
  if ((longlong)(int)local_50[0x1a] != 0) {
    lVar10 = 0;
    uVar12 = 0;
    do {
      uVar9 = *(ulonglong *)(*(longlong *)(local_50 + 0x18) + lVar10 * 8);
      uVar8 = (uint)(uVar9 >> 0x10);
      uVar12 = uVar12 ^ (int)((uVar9 & 0xffff) >> 4) +
                        (int)(uVar9 >> 0x20) + (int)(uVar9 & 0xffff) +
                        (uVar12 >> 2) + uVar12 * 0x40 + (int)uVar9 * 0x10000 +
                        (uVar8 << 0x13 | uVar8 & 0xffff) + 0x9e3779b9;
      lVar10 = lVar10 + 1;
    } while ((int)local_50[0x1a] != lVar10);
  }
  uVar8 = (local_84 >> 2) + 0x9e3779b9 + uVar6 + local_84 * 0x40 ^ local_84;
  uVar8 = (uVar8 >> 2) + 0x9e3779b9 + iVar5 + uVar8 * 0x40 ^ uVar8;
  uVar8 = (uVar8 >> 2) + 0x9e3779b9 + local_50[0x12] + uVar8 * 0x40 ^ uVar8;
  uVar8 = (uVar8 >> 2) + 0x9e3779b9 + local_80 + uVar8 * 0x40 ^ uVar8;
  uVar8 = (uVar8 >> 2) + 0x9e3779b9 + local_7c + uVar8 * 0x40 ^ uVar8;
  uVar8 = (uVar8 >> 2) + 0x9e3779b9 + local_78 + uVar8 * 0x40 ^ uVar8;
  uVar8 = (uVar8 >> 2) + 0x9e3779b9 + local_74 + uVar8 * 0x40 ^ uVar8;
  uVar8 = uVar12 + 0x9e3779b9 + (uVar8 >> 2) + uVar8 * 0x40 ^ uVar8;
  uVar2 = *(undefined8 *)(local_50 + 0x1c);
  uVar6 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar12 = (uint)uVar2 & 0xffff;
  uVar7 = (uVar7 >> 2) + uVar7 * 0x40 + -0x61c88647 +
          ((uint)uVar2 * 0x10000 + uVar12 + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar12 >> 4) + -0x61c88647 +
           (uVar8 >> 2) + uVar8 * 0x40 ^ uVar8) ^ uVar7;
  cVar4 = FUN_1474bb20a(local_70,uVar7,local_50,&local_5c);
  uVar3 = local_5c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(lVar11 + 8) - *(int *)(lVar11 + 0x34);
    iVar5 = 1;
    if (3 < uVar6) {
      uVar9 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar5 <= *(int *)(lVar11 + 0x48))) {
      uVar7 = *(int *)(lVar11 + 0x48) - 1U & uVar7;
      local_50[0x21] = uVar7;
      lVar10 = *(longlong *)(lVar11 + 0x40);
      if (*(longlong *)(lVar11 + 0x40) == 0) {
        lVar10 = lVar11 + 0x38;
      }
      local_50[0x20] =
           *(uint *)(lVar10 + ((longlong)*(int *)(lVar11 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(lVar11 + 0x40);
      if (*(longlong *)(lVar11 + 0x40) == 0) {
        lVar10 = lVar11 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(lVar11 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_5c;
    }
    else {
      *(int *)(lVar11 + 0x48) = iVar5;
      FUN_1474bb2fa(lVar11);
    }
  }
  *local_68 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474bb10e FUN_1474bb10e body=251 status=ok
// SIG undefined FUN_1474bb10e(void)

int * FUN_1474bb10e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1401600aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x88);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x88) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x88 + *param_1;
  return param_2;
}



// FUNCTION 1474bb20a FUN_1474bb20a body=112 status=ok
// SIG undefined FUN_1474bb20a(void)

undefined8 FUN_1474bb20a(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1474baa8e(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x88 + *param_1);
    FUN_1474b39fc(_Dst);
    memmove(_Dst,param_3,0x80);
    FUN_1474bb27a(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1474bb27a FUN_1474bb27a body=128 status=ok
// SIG undefined FUN_1474bb27a(void)

void FUN_1474bb27a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x88) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x88) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x88 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1474bb2fa FUN_1474bb2fa body=1076 status=ok
// SIG undefined FUN_1474bb2fa(void)

void FUN_1474bb2fa(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_c8 [36];
  int local_a4;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 != 0) {
    plVar5 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar5,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar5;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar8 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar2 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    bVar3 = local_78._4_4_ < (int)local_60[3];
    iVar4 = local_78._4_4_;
    plVar6 = param_1;
    local_90 = param_1;
    local_78 = uVar2;
    if (bVar3) {
      do {
        local_98 = plVar6;
        local_a0 = plVar5;
        lVar14 = *local_90;
        lVar12 = (longlong)iVar4 * 0x88;
        uVar8 = *(uint *)(lVar14 + 4 + lVar12) ^ *(uint *)(lVar14 + lVar12);
        iVar1 = *(int *)(lVar14 + 0x10 + lVar12);
        uVar8 = uVar8 * 0x40 + iVar1 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar8;
        if ((longlong)iVar1 != 0) {
          lVar13 = 0;
          do {
            uVar2 = *(undefined8 *)(*(longlong *)(lVar14 + 8 + lVar12) + lVar13);
            uVar8 = ((uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2) + (uVar8 >> 2) + uVar8 * 0x40 +
                    0x9e3779b9 ^ uVar8;
            lVar13 = lVar13 + 8;
          } while ((longlong)iVar1 * 8 != lVar13);
        }
        lVar14 = lVar14 + lVar12;
        if ((longlong)*(int *)(lVar14 + 0x20) != 0) {
          lVar12 = 0;
          do {
            uVar8 = *(int *)(*(longlong *)(lVar14 + 0x18) + lVar12) + (uVar8 >> 2) + uVar8 * 0x40 +
                    0x9e3779b9 ^ uVar8;
            lVar12 = lVar12 + 4;
          } while ((longlong)*(int *)(lVar14 + 0x20) * 4 != lVar12);
        }
        uVar10 = *(uint *)(lVar14 + 0x28);
        iVar1 = *(int *)(lVar14 + 0x2c);
        uVar9 = 0;
        local_a4 = iVar4;
        iVar4 = FUN_1448eb174(lVar14 + 0x30,0x18);
        if ((longlong)*(int *)(lVar14 + 0x68) != 0) {
          lVar12 = 0;
          uVar9 = 0;
          do {
            uVar7 = *(ulonglong *)(*(longlong *)(lVar14 + 0x60) + lVar12 * 8);
            uVar11 = (uint)(uVar7 >> 0x10);
            uVar9 = uVar9 ^ (int)(uVar7 >> 0x20) + (int)(uVar7 & 0xffff) +
                            (uVar9 >> 2) + uVar9 * 0x40 + (int)uVar7 * 0x10000 +
                            (uVar11 << 0x13 | uVar11 & 0xffff) + (int)((uVar7 & 0xffff) >> 4) +
                            0x9e3779b9;
            lVar12 = lVar12 + 1;
          } while (*(int *)(lVar14 + 0x68) != lVar12);
        }
        uVar10 = (uVar10 >> 2) + 0x9e3779b9 + iVar1 + uVar10 * 0x40 ^ uVar10;
        uVar10 = (uVar10 >> 2) + 0x9e3779b9 + iVar4 + uVar10 * 0x40 ^ uVar10;
        uVar10 = (uVar10 >> 2) + 0x9e3779b9 + uVar10 * 0x40 + *(int *)(lVar14 + 0x48) ^ uVar10;
        uVar10 = (uVar10 >> 2) + 0x9e3779b9 + uVar10 * 0x40 + *(int *)(lVar14 + 0x4c) ^ uVar10;
        uVar10 = (uVar10 >> 2) + 0x9e3779b9 + uVar10 * 0x40 + *(int *)(lVar14 + 0x50) ^ uVar10;
        uVar10 = (uVar10 >> 2) + 0x9e3779b9 + uVar10 * 0x40 + *(int *)(lVar14 + 0x58) ^ uVar10;
        uVar10 = (uVar10 >> 2) + 0x9e3779b9 + uVar10 * 0x40 + *(int *)(lVar14 + 0x54) ^ uVar10;
        uVar10 = uVar9 + 0x9e3779b9 + (uVar10 >> 2) + uVar10 * 0x40 ^ uVar10;
        uVar2 = *(undefined8 *)(lVar14 + 0x70);
        uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar11 = (uint)uVar2 & 0xffff;
        uVar7 = (longlong)
                (int)((uVar8 >> 2) + uVar8 * 0x40 + -0x61c88647 +
                      ((uint)uVar2 * 0x10000 + uVar11 + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar11 >> 4) + -0x61c88647 +
                       (uVar10 >> 2) + uVar10 * 0x40 ^ uVar10) ^ uVar8) &
                (longlong)(int)local_98[9] - 1U;
        iVar4 = (int)uVar7;
        *(int *)(lVar14 + 0x84) = iVar4;
        plVar5 = (longlong *)local_98[8];
        if ((longlong *)local_98[8] == (longlong *)0x0) {
          plVar5 = local_a0;
        }
        *(undefined4 *)(lVar14 + 0x80) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)local_98[9] - 1U & uVar7) * 4);
        plVar5 = (longlong *)local_98[8];
        if ((longlong *)local_98[8] == (longlong *)0x0) {
          plVar5 = local_a0;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar4 & (longlong)(int)local_98[9] - 1U) * 4) =
             local_a4;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        bVar3 = local_78._4_4_ < (int)local_80[3];
        iVar4 = local_78._4_4_;
        plVar5 = local_a0;
        plVar6 = local_98;
      } while (bVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474bb730 FUN_1474bb730 body=831 status=ok
// SIG undefined FUN_1474bb730(void)

void FUN_1474bb730(longlong *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar10 = param_2[1] ^ *param_2;
    uVar6 = param_2[4];
    uVar10 = uVar10 * 0x40 + uVar6 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar10;
    if ((longlong)(int)uVar6 != 0) {
      lVar11 = 0;
      do {
        uVar10 = ((uint)((ulonglong)*(undefined8 *)(*(longlong *)(param_2 + 2) + lVar11) >> 0x20) ^
                 (uint)*(undefined8 *)(*(longlong *)(param_2 + 2) + lVar11)) +
                 (uVar10 >> 2) + uVar10 * 0x40 + 0x9e3779b9 ^ uVar10;
        lVar11 = lVar11 + 8;
      } while ((longlong)(int)uVar6 * 8 != lVar11);
    }
    if ((longlong)(int)param_2[8] != 0) {
      lVar11 = 0;
      do {
        uVar10 = *(int *)(*(longlong *)(param_2 + 6) + lVar11) + (uVar10 >> 2) + uVar10 * 0x40 +
                 0x9e3779b9 ^ uVar10;
        lVar11 = lVar11 + 4;
      } while ((longlong)(int)param_2[8] * 4 != lVar11);
    }
    uVar6 = param_2[10];
    uVar1 = param_2[0xb];
    uVar12 = 0;
    iVar5 = FUN_1448eb174(param_2 + 0xc,0x18,0);
    if ((longlong)(int)param_2[0x1a] != 0) {
      lVar11 = 0;
      uVar12 = 0;
      do {
        uVar13 = *(ulonglong *)(*(longlong *)(param_2 + 0x18) + lVar11 * 8);
        uVar3 = (uint)(uVar13 >> 0x10);
        uVar12 = uVar12 ^ (int)((uVar13 & 0xffff) >> 4) +
                          (int)(uVar13 >> 0x20) + (int)(uVar13 & 0xffff) +
                          (uVar12 >> 2) + uVar12 * 0x40 + (int)uVar13 * 0x10000 +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e3779b9;
        lVar11 = lVar11 + 1;
      } while ((int)param_2[0x1a] != lVar11);
    }
    uVar6 = (uVar6 >> 2) + 0x9e3779b9 + uVar1 + uVar6 * 0x40 ^ uVar6;
    uVar6 = (uVar6 >> 2) + 0x9e3779b9 + iVar5 + uVar6 * 0x40 ^ uVar6;
    uVar6 = (uVar6 >> 2) + 0x9e3779b9 + param_2[0x12] + uVar6 * 0x40 ^ uVar6;
    uVar6 = (uVar6 >> 2) + 0x9e3779b9 + param_2[0x13] + uVar6 * 0x40 ^ uVar6;
    uVar6 = (uVar6 >> 2) + 0x9e3779b9 + param_2[0x14] + uVar6 * 0x40 ^ uVar6;
    uVar6 = (uVar6 >> 2) + 0x9e3779b9 + param_2[0x16] + uVar6 * 0x40 ^ uVar6;
    uVar6 = (uVar6 >> 2) + 0x9e3779b9 + param_2[0x15] + uVar6 * 0x40 ^ uVar6;
    uVar6 = uVar12 + 0x9e3779b9 + (uVar6 >> 2) + uVar6 * 0x40 ^ uVar6;
    uVar2 = *(undefined8 *)(param_2 + 0x1c);
    uVar1 = (uint)((ulonglong)uVar2 >> 0x10);
    uVar12 = (uint)uVar2 & 0xffff;
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    uVar13 = (longlong)
             (int)((uVar10 >> 2) + uVar10 * 0x40 + -0x61c88647 +
                   ((uint)uVar2 * 0x10000 + uVar12 + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar12 >> 4) + -0x61c88647 +
                    (uVar6 >> 2) + uVar6 * 0x40 ^ uVar6) ^ uVar10) & (longlong)(int)param_1[9] - 1U;
    lVar11 = (longlong)*(int *)((longlong)plVar8 + uVar13 * 4);
    if (lVar11 != -1) {
      lVar11 = lVar11 * 0x88 + *param_1;
      cVar4 = FUN_1474bab04(lVar11,param_2);
      if (cVar4 == '\0') {
        do {
          lVar7 = lVar11;
          lVar11 = (longlong)*(int *)(lVar7 + 0x80);
          if (lVar11 == -1) {
            return;
          }
          lVar11 = lVar11 * 0x88 + *param_1;
          cVar4 = FUN_1474bab04(lVar11,param_2);
        } while (cVar4 == '\0');
        puVar9 = (undefined4 *)(lVar7 + 0x80);
      }
      else {
        puVar9 = (undefined4 *)((longlong)plVar8 + uVar13 * 4);
      }
      FUN_1474bba70(param_1,*puVar9);
      return;
    }
  }
  return;
}



// FUNCTION 1474bba70 FUN_1474bba70 body=138 status=ok
// SIG undefined FUN_1474bba70(void)

void FUN_1474bba70(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x88;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x84 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x80 + lVar6 * 0x88);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x88 + 0x80);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x80);
  FUN_1474b39fc(lVar2 + *param_1);
  FUN_1474bb27a(param_1,param_2);
  return;
}



// FUNCTION 1474bbafa FUN_1474bbafa body=322 status=ok
// SIG undefined FUN_1474bbafa(void)

void FUN_1474bbafa(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x7c + (longlong)iVar4 * 0x80) * 4) =
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



// FUNCTION 1474bbc3e FUN_1474bbc3e body=276 status=ok
// SIG undefined FUN_1474bbc3e(void)

void FUN_1474bbc3e(longlong *param_1)

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
      FUN_1474b39fc((longlong)iStack_44 * 0x80 + *local_60);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14095c99c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474bbdc6 FUN_1474bbdc6 body=230 status=ok
// SIG undefined FUN_1474bbdc6(void)

void FUN_1474bbdc6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  lVar2 = *param_1;
  lVar7 = (longlong)param_2 * 0x80;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar9 = (longlong)*(int *)(lVar2 + 0x7c + lVar7);
  iVar8 = *(int *)((longlong)plVar5 + lVar9 * 4);
  if (iVar8 == param_2) {
    puVar6 = (undefined4 *)((longlong)plVar5 + lVar9 * 4);
  }
  else {
    do {
      lVar9 = (longlong)iVar8;
      iVar8 = *(int *)(lVar2 + 0x78 + lVar9 * 0x80);
    } while (iVar8 != param_2);
    puVar6 = (undefined4 *)(lVar2 + lVar9 * 0x80 + 0x78);
  }
  *puVar6 = *(undefined4 *)(lVar2 + lVar7 + 0x78);
  FUN_1474b39fc(lVar7 + *param_1);
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x80) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1474bbe3a FUN_1474bbe3a body=291 status=ok
// SIG undefined FUN_1474bbe3a(void)

undefined4 * FUN_1474bbe3a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1474bbf5e(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(uint *)*param_3;
  FUN_1474bc0f2(local_40 + 2,uVar1);
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1474bc044(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[9] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[8] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1474bc2b2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474bbf5e FUN_1474bbf5e body=230 status=ok
// SIG undefined FUN_1474bbf5e(void)

int * FUN_1474bbf5e(longlong *param_1,int *param_2)

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



// FUNCTION 1474bc044 FUN_1474bc044 body=173 status=ok
// SIG undefined FUN_1474bc044(void)

undefined8 FUN_1474bc044(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar10 * 0x28);
        if (*piVar1 == *param_3) {
          FUN_1474b8c8a(*(undefined8 *)(piVar1 + 2),piVar1[4]);
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[5];
          iVar7 = param_3[6];
          iVar8 = param_3[7];
          piVar1[4] = param_3[4];
          piVar1[5] = iVar6;
          piVar1[6] = iVar7;
          piVar1[7] = iVar8;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1474bc240(param_1,*param_4);
          *param_4 = iVar10;
          return 1;
        }
        iVar10 = piVar1[8];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 1474bc0f2 FUN_1474bc0f2 body=87 status=ok
// SIG undefined FUN_1474bc0f2(void)

undefined8 * FUN_1474bc0f2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1474bc14a(param_1,iVar1);
    FUN_1474bc1b4(*param_1,uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 1474bc14a FUN_1474bc14a body=106 status=ok
// SIG undefined FUN_1474bc14a(void)

undefined8 FUN_1474bc14a(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x18)) {
    uVar5 = uVar2 / 0x18 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1474bc1b4 FUN_1474bc1b4 body=140 status=ok
// SIG undefined FUN_1474bc1b4(void)

void FUN_1474bc1b4(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    *(undefined8 *)(param_1 + 8 + lVar2) = 0;
    iVar1 = *(int *)(param_2 + 0x10 + lVar2);
    _Src = *(void **)(param_2 + 8 + lVar2);
    *(int *)(param_1 + 0x10 + lVar2) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
    }
    else {
      FUN_1447c510a(param_1 + 8 + lVar2,iVar1,0);
      memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 << 2);
    }
    lVar2 = lVar2 + 0x18;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1474bc240 FUN_1474bc240 body=114 status=ok
// SIG undefined FUN_1474bc240(void)

void FUN_1474bc240(longlong *param_1,int param_2)

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



// FUNCTION 1474bc2b2 FUN_1474bc2b2 body=419 status=ok
// SIG undefined FUN_1474bc2b2(void)

void FUN_1474bc2b2(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x28);
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



// FUNCTION 1474bc456 FUN_1474bc456 body=81 status=ok
// SIG undefined FUN_1474bc456(void)

void FUN_1474bc456(longlong *param_1,int param_2)

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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x28) == param_2) {
          FUN_1474bc4a8(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1474bc4a8 FUN_1474bc4a8 body=87 status=ok
// SIG undefined FUN_1474bc4a8(void)

void FUN_1474bc4a8(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_1474bc500();
  return;
}



// FUNCTION 1474bc500 FUN_1474bc500 body=73 status=ok
// SIG undefined FUN_1474bc500(void)

void FUN_1474bc500(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2;
  FUN_1474b8c8a(*(undefined8 *)(lVar1 + 8 + lVar2 * 0x28),
                *(undefined4 *)(lVar1 + 0x10 + lVar2 * 0x28));
  if (*(longlong *)(lVar1 + 8 + lVar2 * 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_1474bc240(param_1,param_2);
  return;
}



// FUNCTION 1474bc54a FUN_1474bc54a body=103 status=ok
// SIG undefined FUN_1474bc54a(void)

void FUN_1474bc54a(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145907348();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1474bc5b2(param_1 + 0x870,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474bc5b2 FUN_1474bc5b2 body=76 status=ok
// SIG undefined FUN_1474bc5b2(void)

void FUN_1474bc5b2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145907348();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1474bc5ef;
    }
  }
  lVar2 = 0;
LAB_1474bc5ef:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1474bc5fe FUN_1474bc5fe body=96 status=ok
// SIG undefined FUN_1474bc5fe(void)

void FUN_1474bc5fe(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1474bc65e FUN_1474bc65e body=92 status=ok
// SIG undefined FUN_1474bc65e(void)

void FUN_1474bc65e(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    lVar2 = *(longlong *)(param_2 + lVar3 * 8);
    if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
      FUN_1456cec3c(lVar2);
    }
    puVar1 = (undefined8 *)(param_1 + lVar3 * 8);
    *puVar1 = 0;
    FUN_14485c47a(puVar1,lVar2);
    lVar3 = lVar3 + 1;
  } while (param_3 != (int)lVar3);
  return;
}



// FUNCTION 1474bc6ba FUN_1474bc6ba body=132 status=ok
// SIG undefined FUN_1474bc6ba(void)

void FUN_1474bc6ba(longlong param_1,int param_2)

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



// FUNCTION 1474bc740 FUN_1474bc740 body=322 status=ok
// SIG undefined FUN_1474bc740(void)

void FUN_1474bc740(longlong *param_1)

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



// FUNCTION 1474bc884 FUN_1474bc884 body=207 status=ok
// SIG undefined FUN_1474bc884(void)

int FUN_1474bc884(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1474bc954 FUN_1474bc954 body=351 status=ok
// SIG undefined FUN_1474bc954(void)

undefined4 * FUN_1474bc954(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1474bcab4(param_1,local_48);
  FUN_1474bcc3e(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
  }
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1474bcb9a(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1474bcd08(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474bcab4 FUN_1474bcab4 body=230 status=ok
// SIG undefined FUN_1474bcab4(void)

int * FUN_1474bcab4(longlong *param_1,int *param_2)

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



// FUNCTION 1474bcb9a FUN_1474bcb9a body=162 status=ok
// SIG undefined FUN_1474bcb9a(void)

undefined8 FUN_1474bcb9a(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar5 = FUN_1474bc884(param_1,param_2,&local_30);
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = (int)*param_3;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar3;
      FUN_1474bcc96(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_1474bcbbe;
    }
  }
  uVar6 = 0;
LAB_1474bcbbe:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474bcc3e FUN_1474bcc3e body=87 status=ok
// SIG undefined FUN_1474bcc3e(void)

longlong * FUN_1474bcc3e(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1474bcc96 FUN_1474bcc96 body=114 status=ok
// SIG undefined FUN_1474bcc96(void)

void FUN_1474bcc96(longlong *param_1,int param_2)

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



// FUNCTION 1474bcd08 FUN_1474bcd08 body=510 status=ok
// SIG undefined FUN_1474bcd08(void)

void FUN_1474bcd08(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar9 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        uVar7 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x18);
        if ((DAT_14c950c29 == '\x01') && (uVar7 != 0)) {
          FUN_1456cec3c(uVar7);
        }
        lVar2 = lVar2 + (longlong)iVar9 * 0x18;
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474bcf08 FUN_1474bcf08 body=315 status=ok
// SIG undefined FUN_1474bcf08(void)

void FUN_1474bcf08(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = *param_2;
    if ((uVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar6);
    }
    uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar4 + uVar6 * 4);
    if (iVar5 != -1) {
      puVar8 = (ulonglong *)((longlong)plVar4 + uVar6 * 4);
      bVar2 = DAT_14c950c29;
      do {
        puVar7 = (ulonglong *)((longlong)iVar5 * 0x18 + *param_1);
        uVar6 = *param_2;
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        uVar1 = *puVar7;
        if (((bVar2 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar2 = DAT_14c950c29;
        }
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        if (uVar1 == uVar6) {
          FUN_1474bd044(param_1,(int)*puVar8);
          return;
        }
        iVar5 = (int)puVar7[2];
        puVar8 = puVar7 + 2;
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 1474bd044 FUN_1474bd044 body=87 status=ok
// SIG undefined FUN_1474bd044(void)

void FUN_1474bd044(longlong *param_1,int param_2)

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
  FUN_1474bcc96();
  return;
}



// FUNCTION 1474bd09c FUN_1474bd09c body=147 status=ok
// SIG undefined FUN_1474bd09c(void)

void FUN_1474bd09c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474bd130 FUN_1474bd130 body=62 status=ok
// SIG undefined FUN_1474bd130(void)

void FUN_1474bd130(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1474bd16e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x24,4);
  }
  return;
}



// FUNCTION 1474bd16e FUN_1474bd16e body=112 status=ok
// SIG undefined FUN_1474bd16e(void)

ulonglong FUN_1474bd16e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x24) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1474bd1a8;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x24,4);
      param_2 = param_2 / 0x24;
    }
  }
LAB_1474bd1a8:
  return param_2 & 0xffffffff;
}



// FUNCTION 1474bd1de FUN_1474bd1de body=47 status=ok
// SIG undefined FUN_1474bd1de(void)

void FUN_1474bd1de(undefined2 *param_1,int param_2)

{
  do {
    *param_1 = 0x500;
    *(undefined8 *)(param_1 + 2) = 0xa00000005;
    *(undefined8 *)(param_1 + 6) = 0x3200000019;
    *(undefined8 *)(param_1 + 10) = 0x3c3f800000;
    *(undefined8 *)(param_1 + 0xe) = 0;
    param_1 = param_1 + 0x12;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1474bd20e FUN_1474bd20e body=147 status=ok
// SIG undefined FUN_1474bd20e(void)

void FUN_1474bd20e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474bd2a2 FUN_1474bd2a2 body=62 status=ok
// SIG undefined FUN_1474bd2a2(void)

void FUN_1474bd2a2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1474bd2e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x24,4);
  }
  return;
}



// FUNCTION 1474bd2e0 FUN_1474bd2e0 body=112 status=ok
// SIG undefined FUN_1474bd2e0(void)

ulonglong FUN_1474bd2e0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x24) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1474bd31a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x24,4);
      param_2 = param_2 / 0x24;
    }
  }
LAB_1474bd31a:
  return param_2 & 0xffffffff;
}



// FUNCTION 1474bd350 FUN_1474bd350 body=98 status=ok
// SIG undefined FUN_1474bd350(void)

void FUN_1474bd350(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_1408bc7e9(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1474bd3b2 FUN_1474bd3b2 body=62 status=ok
// SIG undefined FUN_1474bd3b2(void)

void FUN_1474bd3b2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1474bd3f0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1474bd3f0 FUN_1474bd3f0 body=112 status=ok
// SIG undefined FUN_1474bd3f0(void)

ulonglong FUN_1474bd3f0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1474bd42a;
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
LAB_1474bd42a:
  return param_2 & 0xffffffff;
}



// FUNCTION 1474bd460 FUN_1474bd460 body=577 status=ok
// SIG undefined FUN_1474bd460(void)

void FUN_1474bd460(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar8;
joined_r0x0001474bd494:
    do {
      iVar10 = iVar8 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar11 = iVar8 * 2 + 2;
        if ((iVar11 < (int)param_2) &&
           (*(float *)(param_1 + (longlong)iVar10 * 3) < *(float *)(param_1 + (longlong)iVar11 * 3)
            || *(float *)(param_1 + (longlong)iVar10 * 3) ==
               *(float *)(param_1 + (longlong)iVar11 * 3))) {
          iVar10 = iVar11;
        }
        if (*(float *)(param_1 + (longlong)iVar8 * 3) <= *(float *)(param_1 + (longlong)iVar10 * 3)
            && *(float *)(param_1 + (longlong)iVar10 * 3) !=
               *(float *)(param_1 + (longlong)iVar8 * 3)) {
          puVar2 = param_1 + (longlong)iVar8 * 3;
          puVar3 = param_1 + (longlong)iVar10 * 3;
          local_18 = puVar2[2];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2[2] = puVar3[2];
          uVar6 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar3[2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_20._4_4_;
          iVar8 = iVar10;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x0001474bd494;
        }
      }
      bVar13 = iVar12 != 0;
      iVar8 = iVar12 + -1;
      iVar12 = iVar8;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar9 = (ulonglong)param_2 - 1;
      local_18 = param_1[2];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      param_1[2] = param_1[uVar9 * 3 + 2];
      uVar6 = (param_1 + uVar9 * 3)[1];
      *param_1 = param_1[uVar9 * 3];
      param_1[1] = uVar6;
      param_1[uVar9 * 3 + 2] = local_18;
      local_28._0_4_ = (undefined4)uVar4;
      local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar5;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar2 = param_1 + uVar9 * 3;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      local_28 = uVar4;
      uStack_20 = uVar5;
      if (param_2 != 2) {
        do {
          iVar8 = 0;
          iVar10 = 1;
          iVar12 = 0;
          do {
            iVar8 = iVar8 + 2;
            iVar11 = iVar10;
            if (((longlong)iVar8 < (longlong)uVar9) &&
               (*(float *)(param_1 + (longlong)iVar10 * 3) <
                *(float *)(param_1 + (longlong)iVar8 * 3) ||
                *(float *)(param_1 + (longlong)iVar10 * 3) ==
                *(float *)(param_1 + (longlong)iVar8 * 3))) {
              iVar11 = iVar8;
            }
            if (*(float *)(param_1 + (longlong)iVar11 * 3) <
                *(float *)(param_1 + (longlong)iVar12 * 3) ||
                *(float *)(param_1 + (longlong)iVar11 * 3) ==
                *(float *)(param_1 + (longlong)iVar12 * 3)) break;
            puVar2 = param_1 + (longlong)iVar12 * 3;
            puVar3 = param_1 + (longlong)iVar11 * 3;
            uVar4 = puVar2[2];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar7 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar7;
            puVar3[2] = uVar4;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar8 = iVar11 * 2;
            iVar10 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar10 < (longlong)uVar9);
          uVar1 = uVar9 - 1;
          local_18 = param_1[2];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          param_1[2] = param_1[uVar1 * 3 + 2];
          uVar6 = (param_1 + uVar1 * 3)[1];
          *param_1 = param_1[uVar1 * 3];
          param_1[1] = uVar6;
          param_1[uVar1 * 3 + 2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar2 = param_1 + uVar1 * 3;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          bVar13 = 2 < uVar9;
          uVar9 = uVar1;
          local_28 = uVar4;
          uStack_20 = uVar5;
        } while (bVar13);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474bd6a2 FUN_1474bd6a2 body=48 status=ok
// SIG undefined FUN_1474bd6a2(void)

void FUN_1474bd6a2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 1474bd6d2 FUN_1474bd6d2 body=112 status=ok
// SIG undefined FUN_1474bd6d2(void)

void FUN_1474bd6d2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 1474bd742 FUN_1474bd742 body=77 status=ok
// SIG undefined FUN_1474bd742(void)

void FUN_1474bd742(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = 0;
  bVar2 = DAT_14c950c29;
  do {
    lVar1 = *(longlong *)(param_2 + lVar3 * 8);
    *(longlong *)(param_1 + lVar3 * 8) = lVar1;
    if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
      FUN_1456cec3c();
      bVar2 = DAT_14c950c29;
    }
    lVar3 = lVar3 + 1;
  } while (param_3 != (int)lVar3);
  return;
}



// FUNCTION 1474bd790 FUN_1474bd790 body=52 status=ok
// SIG undefined FUN_1474bd790(void)

void FUN_1474bd790(longlong *param_1)

{
  FUN_1474bd7c4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474bd7c4 FUN_1474bd7c4 body=89 status=ok
// SIG undefined FUN_1474bd7c4(void)

void FUN_1474bd7c4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1474bd81e FUN_1474bd81e body=380 status=ok
// SIG undefined FUN_1474bd81e(void)

undefined4 * FUN_1474bd81e(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1474bd99c(param_1,local_48);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)local_40 = *param_3;
  *(undefined4 *)((longlong)local_40 + 4) = uVar1;
  *(undefined4 *)(local_40 + 1) = uVar2;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  uVar6 = ((uint)(local_40[1] >> 0x14) & 0xffff ^ (uint)(local_40[1] >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar5 = (uVar5 >> 2) + uVar5 * 0x40 + (uVar6 >> 0x10 ^ uVar6) + 0x9e3779b9 ^ uVar5;
  cVar4 = FUN_1474bda82(param_1,uVar5,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x14) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1474bdb7c(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474bd99c FUN_1474bd99c body=230 status=ok
// SIG undefined FUN_1474bd99c(void)

int * FUN_1474bd99c(longlong *param_1,int *param_2)

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



// FUNCTION 1474bda82 FUN_1474bda82 body=136 status=ok
// SIG undefined FUN_1474bda82(void)

undefined8 FUN_1474bda82(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if ((*plVar5 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x18) == param_3[1])) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1474bdb0a((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1474bdb0a FUN_1474bdb0a body=114 status=ok
// SIG undefined FUN_1474bdb0a(void)

void FUN_1474bdb0a(longlong *param_1,int param_2)

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



// FUNCTION 1474bdb7c FUN_1474bdb7c body=557 status=ok
// SIG undefined FUN_1474bdb7c(void)

void FUN_1474bdb7c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
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
  uVar9 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar9 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar9,4);
    if (0 < (int)uVar9) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar8);
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
        lVar2 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar11 = *(ulonglong *)(lVar2 + lVar6 * 0x18);
        uVar3 = *(ulonglong *)(lVar2 + 8 + lVar6 * 0x18);
        uVar9 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        uVar9 = uVar9 >> 0x10 ^ uVar9;
        uVar8 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar11 = (longlong)
                 (int)(uVar9 * 0x40 + (uVar8 >> 0x10 ^ uVar8) + (uVar9 >> 2) + 0x9e3779b9 ^ uVar9) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar2 + 0x14 + lVar6 * 0x18) = iVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5
        ;
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



// FUNCTION 1474bddaa FUN_1474bddaa body=344 status=ok
// SIG undefined FUN_1474bddaa(void)

undefined4 *
FUN_1474bddaa(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1474bdf04(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_48 = uVar4;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_1474bdfea(param_1,uVar3,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1474be108(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474bdf04 FUN_1474bdf04 body=230 status=ok
// SIG undefined FUN_1474bdf04(void)

int * FUN_1474bdf04(longlong *param_1,int *param_2)

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



// FUNCTION 1474bdfea FUN_1474bdfea body=148 status=ok
// SIG undefined FUN_1474bdfea(void)

void FUN_1474bdfea(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_1474be07e((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_1474be054;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_1474be054:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1474be07e FUN_1474be07e body=138 status=ok
// SIG undefined FUN_1474be07e(void)

void FUN_1474be07e(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1474be108 FUN_1474be108 body=474 status=ok
// SIG undefined FUN_1474be108(void)

void FUN_1474be108(longlong *param_1)

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



// FUNCTION 1474be2e4 FUN_1474be2e4 body=147 status=ok
// SIG undefined FUN_1474be2e4(void)

void FUN_1474be2e4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474be378 FUN_1474be378 body=317 status=ok
// SIG undefined FUN_1474be378(void)

int FUN_1474be378(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar7 = (int)param_1[1];
  lVar8 = (longlong)iVar7;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    lVar5 = *(longlong *)*param_2;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    iVar12 = 0;
    iVar9 = 0;
    bVar3 = *plVar1 == lVar5;
    do {
      lVar6 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar5 = lVar6;
      iVar4 = iVar9 + 1;
      if (iVar9 + 1 < iVar7) {
        iVar4 = iVar7;
      }
      do {
        lVar5 = lVar5 + 1;
        iVar11 = iVar4;
        if (lVar8 <= lVar5) break;
        lVar2 = *(longlong *)*param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar3 == (plVar1[lVar5] == lVar2));
      if (bVar3 == false) {
        if (iVar12 != iVar9) {
          memmove(plVar1 + iVar12,plVar1 + lVar6,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar12 = iVar12 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar3 = (bool)(bVar3 ^ 1);
    } while (lVar5 < lVar8);
    *(int *)(param_1 + 1) = iVar12;
    iVar7 = iVar7 - iVar12;
  }
  return iVar7;
}



// FUNCTION 1474be4b6 FUN_1474be4b6 body=63 status=ok
// SIG undefined FUN_1474be4b6(void)

void FUN_1474be4b6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1474be4f6(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1474be4f6 FUN_1474be4f6 body=97 status=ok
// SIG undefined FUN_1474be4f6(void)

ulonglong FUN_1474be4f6(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1474be558 FUN_1474be558 body=66 status=ok
// SIG undefined FUN_1474be558(void)

undefined8 * FUN_1474be558(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a417eb0;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474be59a FUN_1474be59a body=121 status=ok
// SIG undefined FUN_1474be59a(void)

void FUN_1474be59a(longlong param_1,uint param_2,byte param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_1 + 0x10;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_2) {
    if ((param_3 & 1) == 0) {
      if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(param_2);
      }
      if (*(int *)(param_1 + 0x1c) < (int)param_2) {
        FUN_1404d5fcc(lVar1,param_2);
        uVar2 = *(uint *)(param_1 + 0x18);
      }
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (*(int *)(param_1 + 0x1c) - uVar2 < param_2 - uVar2) {
      FUN_141794766(lVar1);
      return;
    }
  }
  else if ((param_2 < uVar2) && (*(uint *)(param_1 + 0x18) = param_2, (param_3 & 2) == 0)) {
    FUN_147472a96(lVar1);
    return;
  }
  return;
}



// FUNCTION 1474be672 FUN_1474be672 body=370 status=ok
// SIG undefined FUN_1474be672(void)

longlong * FUN_1474be672(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x14,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x14);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1474bea16(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xccccc < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1474be7e5(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x14;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_1474bea16(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1474be9e0(param_2);
        FUN_1474be7e5(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1474be7e5 FUN_1474be7e5 body=506 status=ok
// SIG undefined FUN_1474be7e5(void)

longlong * FUN_1474be7e5(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    }
    else {
      thunk_FUN_1457251a8(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,1);
  }
  else {
    *(undefined1 *)(param_2 + 1) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 3),1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 3) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar3 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 2) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 4,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 4) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 6,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 6) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar4 = (undefined4 *)(param_2 + 8);
  puVar3 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1474be9e0 FUN_1474be9e0 body=54 status=ok
// SIG undefined FUN_1474be9e0(void)

longlong FUN_1474be9e0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1474bea86(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x14 + *param_1;
}



// FUNCTION 1474bea16 FUN_1474bea16 body=112 status=ok
// SIG undefined FUN_1474bea16(void)

void FUN_1474bea16(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x14,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x14)) {
      uVar2 = uVar1 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x14,4);
  }
  return;
}



// FUNCTION 1474bea86 FUN_1474bea86 body=147 status=ok
// SIG undefined FUN_1474bea86(void)

void FUN_1474bea86(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474beb1a FUN_1474beb1a body=96 status=ok
// SIG undefined FUN_1474beb1a(void)

void FUN_1474beb1a(longlong param_1,int param_2)

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



// FUNCTION 1474beb7a FUN_1474beb7a body=132 status=ok
// SIG undefined FUN_1474beb7a(void)

void FUN_1474beb7a(longlong param_1,int param_2)

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



// FUNCTION 1474bebff FUN_1474bebff body=38 status=ok
// SIG undefined FUN_1474bebff(void)

void FUN_1474bebff(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1474bec26(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 1474bec26 FUN_1474bec26 body=65 status=ok
// SIG undefined FUN_1474bec26(void)

void FUN_1474bec26(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a417f10;
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a80d50(param_1);
  return;
}



// FUNCTION 1474bec68 FUN_1474bec68 body=38 status=ok
// SIG undefined FUN_1474bec68(void)

undefined8 FUN_1474bec68(undefined8 param_1,int param_2)

{
  FUN_1474bec26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474bec8e FUN_1474bec8e body=46 status=ok
// SIG undefined FUN_1474bec8e(void)

void FUN_1474bec8e(undefined8 *param_1,int param_2)

{
  do {
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
    *(undefined1 *)((longlong)param_1 + 0xe) = 0;
    param_1[2] = 0;
    *param_1 = &PTR_FUN_14a417f10;
    param_1[4] = 0;
    param_1 = param_1 + 5;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1474becbc FUN_1474becbc body=136 status=ok
// SIG undefined FUN_1474becbc(void)

void FUN_1474becbc(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  if (param_2 <= (int)uVar1) {
    iVar5 = 3;
    if (3 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (3 < *(uint *)(param_1 + 0x84)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x28,0);
      iVar4 = (int)(uVar3 / 0x28);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x84) = iVar5;
    FUN_1474bed46(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1474bed46 FUN_1474bed46 body=140 status=ok
// SIG undefined FUN_1474bed46(void)

void FUN_1474bed46(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x78);
  if ((uint)param_3 < 4) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x78,0,param_3,0x28);
    memmove(*(void **)((longlong)param_1 + 0x78),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x78,param_2,param_3,0x28);
  return;
}



// FUNCTION 1474bedd2 FUN_1474bedd2 body=68 status=ok
// SIG undefined FUN_1474bedd2(void)

void FUN_1474bedd2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x78) == 0) {
    lVar1 = param_1;
  }
  FUN_1474bebff(lVar1,*(undefined4 *)(param_1 + 0x80));
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) == 0) {
    return;
  }
  FUN_1474bee16(param_1);
  return;
}



// FUNCTION 1474bee16 FUN_1474bee16 body=88 status=ok
// SIG undefined FUN_1474bee16(void)

void FUN_1474bee16(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
    if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x78),
              (longlong)*(int *)((longlong)param_1 + 0x80) * 0x28);
      FUN_1446efa72((longlong)param_1 + 0x78,0,0,0x28);
      return;
    }
  }
  return;
}



// FUNCTION 1474bee6e FUN_1474bee6e body=119 status=ok
// SIG undefined FUN_1474bee6e(void)

void FUN_1474bee6e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_1474beee6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1474beee6 FUN_1474beee6 body=141 status=ok
// SIG undefined FUN_1474beee6(void)

void FUN_1474beee6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 1474bef74 FUN_1474bef74 body=193 status=ok
// SIG undefined FUN_1474bef74(void)

undefined8 * FUN_1474bef74(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_143280c08();
  uVar1 = *param_2;
  *puVar2 = &PTR_FUN_14a417f90;
  FUN_144b1dcb8(puVar2 + 1,uVar1);
  puVar2[1] = &PTR_FUN_14a417d50;
  puVar2[0x27] = 0;
  *(undefined1 *)(puVar2 + 0x28) = 1;
  puVar2[0x37] = 0x400000000;
  puVar2[0x29] = 0;
  puVar2[0x2a] = 0;
  puVar2[0x2b] = 0;
  puVar2[0x2c] = 0;
  puVar2[0x2d] = 0;
  puVar2[0x2e] = 0;
  puVar2[0x38] = 0;
  puVar2[0x39] = 0;
  puVar2[0x3a] = 0;
  puVar2[0x3b] = 0;
  puVar2[0x3c] = 0;
  puVar2[0x3d] = 0;
  puVar2[0x3e] = 0;
  puVar2[0x3f] = 0;
  *(undefined4 *)(puVar2 + 0x40) = 0xffffffff;
  *(undefined2 *)((longlong)puVar2 + 0x204) = 0xff;
  *(undefined1 *)((longlong)puVar2 + 0x206) = 0;
  puVar2[0x41] = 0;
  puVar2[0x42] = 0;
  puVar2[0x43] = 0;
  puVar2[0x44] = 0;
  *(undefined4 *)(puVar2 + 0x45) = 0xffffffff;
  return puVar2;
}



// FUNCTION 1474bf036 FUN_1474bf036 body=66 status=ok
// SIG undefined FUN_1474bf036(void)

longlong FUN_1474bf036(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a417f90;
  FUN_144725486(param_1 + 0x18);
  FUN_1474b71b4(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474bf078 FUN_1474bf078 body=65 status=ok
// SIG undefined FUN_1474bf078(void)

undefined8 * FUN_1474bf078(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a417f90;
  FUN_144725486(param_1 + 1);
  FUN_1474b71b4(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474bf0bf FUN_1474bf0bf body=161 status=ok
// SIG undefined FUN_1474bf0bf(void)

void FUN_1474bf0bf(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 1;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xd8) = 0xff0000ffffffff;
    *(undefined1 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0x40c00f07;
    *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) & 0xfc;
    FUN_141793e06(param_1);
    param_1 = param_1 + 0xf0;
  }
  return;
}



// FUNCTION 1474bf160 FUN_1474bf160 body=63 status=ok
// SIG undefined FUN_1474bf160(void)

void FUN_1474bf160(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1474bf1a0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x60,0x10);
  }
  return;
}



// FUNCTION 1474bf1a0 FUN_1474bf1a0 body=117 status=ok
// SIG undefined FUN_1474bf1a0(void)

ulonglong FUN_1474bf1a0(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x60) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x60,0x10);
      uVar1 = uVar1 / 0x60;
    }
  }
  return uVar1;
}



// FUNCTION 1474bf216 FUN_1474bf216 body=62 status=ok
// SIG undefined FUN_1474bf216(void)

void FUN_1474bf216(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1474bf254(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 1474bf254 FUN_1474bf254 body=93 status=ok
// SIG undefined FUN_1474bf254(void)

ulonglong FUN_1474bf254(uint param_1,uint param_2)

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



// FUNCTION 1474bf2b2 FUN_1474bf2b2 body=145 status=ok
// SIG undefined FUN_1474bf2b2(void)

void FUN_1474bf2b2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x24) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
        uVar5 = uVar4 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x24) = (int)uVar5;
    FUN_140251262(param_1,param_2,uVar5,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474bf344 FUN_1474bf344 body=76 status=ok
// SIG undefined FUN_1474bf344(void)

void FUN_1474bf344(void)

{
  int iVar1;
  
  iVar1 = FUN_1474bf390(DAT_14caa9c40,DAT_14caa9c44);
  if (iVar1 != DAT_14caa9c44) {
    DAT_14caa9c44 = iVar1;
    FUN_1446f8d3c(&DAT_14caa9c38,DAT_14caa9c40,iVar1,8,8);
  }
  return;
}



// FUNCTION 1474bf390 FUN_1474bf390 body=93 status=ok
// SIG undefined FUN_1474bf390(void)

ulonglong FUN_1474bf390(uint param_1,uint param_2)

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



// FUNCTION 1474bf40a FUN_1474bf40a body=158 status=ok
// SIG undefined FUN_1474bf40a(void)

void FUN_1474bf40a(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  
  piVar2 = DAT_14caa9cb0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
    iVar5 = *DAT_14caa9cb0;
  }
  else {
    bVar4 = FUN_144a61b4f();
    lVar6 = DAT_14caa9cc8;
    iVar5 = piVar2[bVar4 ^ 1];
    if (*(int *)(lVar1 + 0xc60) != 0x40000002) {
      bVar4 = FUN_144a61b4f();
      uVar3 = (ulonglong)(bVar4 ^ 1);
      goto LAB_1474bf447;
    }
  }
  uVar3 = 0;
  lVar6 = DAT_14caa9cc8;
LAB_1474bf447:
  bVar4 = 1;
  if ((iVar5 == 0) && (*(char *)(param_1 + 0x671) == '\0')) {
    bVar4 = *(int *)(lVar6 + uVar3 * 4) != 0 | *(byte *)(param_1 + 0x672);
  }
  FUN_140cbebe8(param_1 + 0x40,bVar4);
  return;
}



// FUNCTION 1474bf4a8 FUN_1474bf4a8 body=155 status=ok
// SIG undefined FUN_1474bf4a8(void)

void FUN_1474bf4a8(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1474bf544(&local_28);
  uVar1 = (ulonglong)local_18;
  if ((-1 < (int)local_18) && ((int)local_18 < local_20)) {
    do {
      FUN_1474bf40a(*(undefined8 *)(local_28 + (uVar1 & 0xffffffff) * 8));
      uVar1 = (longlong)(int)local_18;
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 + 1;
        local_18 = (uint)uVar1;
        if ((longlong)local_20 <= (longlong)uVar1) break;
      } while (*(longlong *)(local_28 + uVar1 * 8) == 0);
    } while ((-2 < (longlong)uVar2) && ((int)local_18 < local_20));
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474bf544 FUN_1474bf544 body=107 status=ok
// SIG undefined FUN_1474bf544(void)

longlong * FUN_1474bf544(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_1459e3c7c();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 1474bf5b0 FUN_1474bf5b0 body=26 status=ok
// SIG undefined FUN_1474bf5b0(void)

void FUN_1474bf5b0(undefined8 param_1)

{
  FUN_1401c3c2c();
  FUN_1474bf40a(param_1);
  return;
}



// FUNCTION 1474bf5d0 FUN_1474bf5d0 body=65 status=ok
// SIG undefined FUN_1474bf5d0(void)

undefined8 * FUN_1474bf5d0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x678);
  if (plVar1 == (longlong *)0x0) {
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[6] = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x528))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 1474bf61c FUN_1474bf61c body=45 status=ok
// SIG undefined FUN_1474bf61c(void)

longlong FUN_1474bf61c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474bf64a FUN_1474bf64a body=48 status=ok
// SIG undefined FUN_1474bf64a(void)

longlong FUN_1474bf64a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474bf67a FUN_1474bf67a body=48 status=ok
// SIG undefined FUN_1474bf67a(void)

longlong FUN_1474bf67a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474bf6aa FUN_1474bf6aa body=48 status=ok
// SIG undefined FUN_1474bf6aa(void)

longlong FUN_1474bf6aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474bf6da FUN_1474bf6da body=284 status=ok
// SIG undefined FUN_1474bf6da(void)

void FUN_1474bf6da(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474f1c08(&local_50,puVar2,puVar3);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474bf7fe FUN_1474bf7fe body=358 status=ok
// SIG undefined FUN_1474bf7fe(void)

void FUN_1474bf7fe(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar3 = &local_48;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar4 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474f1cb0(puVar2,puVar3,puVar4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474bf966 FUN_1474bf966 body=268 status=ok
// SIG undefined FUN_1474bf966(void)

void FUN_1474bf966(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1432a524e(&local_50,puVar2,local_40);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474bfa7e FUN_1474bfa7e body=284 status=ok
// SIG undefined FUN_1474bfa7e(void)

void FUN_1474bfa7e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474dba96(&local_50,puVar2,puVar3);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474bfba2 FUN_1474bfba2 body=387 status=ok
// SIG undefined FUN_1474bfba2(void)

void FUN_1474bfba2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_69 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  puVar3 = &local_68;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_58;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar4 = &local_69;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474dba96(&local_40,puVar2,&local_29);
  *(undefined4 *)puVar3 = local_40;
  *(undefined4 *)((longlong)puVar3 + 4) = uStack_3c;
  *(undefined4 *)(puVar3 + 1) = uStack_38;
  *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_34;
  *puVar4 = local_29 == '\x01';
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474bfd26 FUN_1474bfd26 body=184 status=ok
// SIG undefined FUN_1474bfd26(void)

void FUN_1474bfd26(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14328c6d2(&local_40,puVar1);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474bfde0 FUN_1474bfde0 body=184 status=ok
// SIG undefined FUN_1474bfde0(void)

void FUN_1474bfde0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14328c680(&local_40,puVar1);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474bfe9a FUN_1474bfe9a body=257 status=ok
// SIG undefined FUN_1474bfe9a(void)

void FUN_1474bfe9a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  local_58 = local_40;
  uStack_54 = uStack_3c;
  uStack_50 = uStack_38;
  uStack_4c = uStack_34;
  FUN_14328c75a(puVar2);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474bffbc FUN_1474bffbc body=147 status=ok
// SIG undefined FUN_1474bffbc(void)

ulonglong FUN_1474bffbc(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  lVar1 = FUN_14171b860(param_1,DAT_14caa9ed0);
  if (lVar1 == 0) {
    uVar2 = FUN_14073521a();
    lVar1 = FUN_1468ff240(param_1,uVar2);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    uVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x248))(param_1,lVar1,&local_19);
    uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c0064 FUN_1474c0064 body=38 status=ok
// SIG undefined FUN_1474c0064(void)

void FUN_1474c0064(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x18))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1474c008a FUN_1474c008a body=139 status=ok
// SIG undefined FUN_1474c008a(void)

void FUN_1474c008a(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)*param_1)(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c011a FUN_1474c011a body=351 status=ok
// SIG undefined FUN_1474c011a(void)

void FUN_1474c011a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_59 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  puVar3 = &local_58;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar4 = &local_59;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474c0c76(&local_38,puVar2,puVar4);
  *(undefined4 *)puVar3 = local_38;
  *(undefined4 *)((longlong)puVar3 + 4) = uStack_34;
  *(undefined4 *)(puVar3 + 1) = uStack_30;
  *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c0280 FUN_1474c0280 body=337 status=ok
// SIG undefined FUN_1474c0280(void)

void FUN_1474c0280(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar3 = &local_48;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar4 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474c03d2(puVar2,puVar3,puVar4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c03d2 FUN_1474c03d2 body=97 status=ok
// SIG undefined FUN_1474c03d2(void)

void FUN_1474c03d2(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = FUN_1417b4e5c();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      uVar3 = *param_1;
      uVar4 = param_1[1];
      uVar5 = 1;
      goto LAB_1474c0415;
    }
  }
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
LAB_1474c0415:
  *param_2 = uVar3;
  param_2[1] = uVar4;
  *param_3 = uVar5;
  return;
}



// FUNCTION 1474c0434 FUN_1474c0434 body=351 status=ok
// SIG undefined FUN_1474c0434(void)

void FUN_1474c0434(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_59 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  puVar3 = &local_58;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar4 = &local_59;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474c0c10(&local_38,puVar2,puVar4);
  *(undefined4 *)puVar3 = local_38;
  *(undefined4 *)((longlong)puVar3 + 4) = uStack_34;
  *(undefined4 *)(puVar3 + 1) = uStack_30;
  *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c059a FUN_1474c059a body=337 status=ok
// SIG undefined FUN_1474c059a(void)

void FUN_1474c059a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar3 = &local_48;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar4 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474c06ec(puVar2,puVar3,puVar4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c06ec FUN_1474c06ec body=97 status=ok
// SIG undefined FUN_1474c06ec(void)

void FUN_1474c06ec(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = FUN_1463a5c5a();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      uVar3 = *param_1;
      uVar4 = param_1[1];
      uVar5 = 1;
      goto LAB_1474c072f;
    }
  }
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
LAB_1474c072f:
  *param_2 = uVar3;
  param_2[1] = uVar4;
  *param_3 = uVar5;
  return;
}



// FUNCTION 1474c074e FUN_1474c074e body=300 status=ok
// SIG undefined FUN_1474c074e(void)

void FUN_1474c074e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_143281da0(puVar3,puVar2);
  *param_3 = uVar4;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c087c FUN_1474c087c body=300 status=ok
// SIG undefined FUN_1474c087c(void)

void FUN_1474c087c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_143281e2c(puVar3,puVar2);
  *param_3 = uVar4;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c09b0 FUN_1474c09b0 body=298 status=ok
// SIG undefined FUN_1474c09b0(void)

void FUN_1474c09b0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_143282348(puVar4,puVar3);
  *param_3 = uVar2;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c0ae2 FUN_1474c0ae2 body=298 status=ok
// SIG undefined FUN_1474c0ae2(void)

void FUN_1474c0ae2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1432823e2(puVar4,puVar3);
  *param_3 = uVar2;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c0c10 FUN_1474c0c10 body=102 status=ok
// SIG undefined FUN_1474c0c10(void)

undefined8 * FUN_1474c0c10(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  if ((((lVar1 != 0) && (lVar2 = FUN_1463a5c5a(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    *param_3 = 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return param_1;
  }
  *param_3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1474c0c76 FUN_1474c0c76 body=102 status=ok
// SIG undefined FUN_1474c0c76(void)

undefined8 * FUN_1474c0c76(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  if ((((lVar1 != 0) && (lVar2 = FUN_1417b4e5c(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    *param_3 = 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return param_1;
  }
  *param_3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1474c0cdc FUN_1474c0cdc body=356 status=ok
// SIG undefined FUN_1474c0cdc(void)

void FUN_1474c0cdc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined1 local_39;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar4 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474c194e(&local_50,puVar3,puVar4);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_48 + 0xc) = *(int *)((longlong)local_48 + 0xc) + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)param_3[1];
  *param_3 = local_50;
  param_3[1] = local_48;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c0e42 FUN_1474c0e42 body=356 status=ok
// SIG undefined FUN_1474c0e42(void)

void FUN_1474c0e42(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined1 local_39;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar4 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474c171a(&local_50,puVar3,puVar4);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_48 + 0xc) = *(int *)((longlong)local_48 + 0xc) + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)param_3[1];
  *param_3 = local_50;
  param_3[1] = local_48;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c0fa8 FUN_1474c0fa8 body=356 status=ok
// SIG undefined FUN_1474c0fa8(void)

void FUN_1474c0fa8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined1 local_39;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar4 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474c1892(&local_50,puVar3,puVar4);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_48 + 0xc) = *(int *)((longlong)local_48 + 0xc) + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)param_3[1];
  *param_3 = local_50;
  param_3[1] = local_48;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c110e FUN_1474c110e body=356 status=ok
// SIG undefined FUN_1474c110e(void)

void FUN_1474c110e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined1 local_39;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar4 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474c17d6(&local_50,puVar3,puVar4);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_48 + 0xc) = *(int *)((longlong)local_48 + 0xc) + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)param_3[1];
  *param_3 = local_50;
  param_3[1] = local_48;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c1274 FUN_1474c1274 body=196 status=ok
// SIG undefined FUN_1474c1274(void)

void FUN_1474c1274(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar3 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1474c16be(puVar3);
  uVar2 = FUN_1433dbfe6(uVar2);
  *param_3 = uVar2;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c133a FUN_1474c133a body=291 status=ok
// SIG undefined FUN_1474c133a(void)

void FUN_1474c133a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  lVar2 = local_30;
  uVar1 = local_34;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar3 = (longlong *)FUN_140721bac(*(undefined8 *)(local_30 + 0x10));
  lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
  FUN_147907552(&local_48,lVar2,~uVar1 + *(int *)(lVar4 + 8));
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c145e FUN_1474c145e body=203 status=ok
// SIG undefined FUN_1474c145e(void)

void FUN_1474c145e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar3 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_1478ed1c2(puVar3);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(lVar2 + 0x20);
  }
  *param_3 = uVar4;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_20 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c152a FUN_1474c152a body=203 status=ok
// SIG undefined FUN_1474c152a(void)

void FUN_1474c152a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar3 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_1478ed1c2(puVar3);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(lVar2 + 0x28);
  }
  *param_3 = uVar4;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_20 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c15fc FUN_1474c15fc body=190 status=ok
// SIG undefined FUN_1474c15fc(void)

void FUN_1474c15fc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar3 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_1474c16be(puVar3);
  *param_3 = *(undefined1 *)(lVar2 + 0x10);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c16be FUN_1474c16be body=92 status=ok
// SIG undefined FUN_1474c16be(void)

undefined8 FUN_1474c16be(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = (longlong *)param_1[1];
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
    if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)*param_1;
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
  return uVar6;
}



// FUNCTION 1474c171a FUN_1474c171a body=188 status=ok
// SIG undefined FUN_1474c171a(void)

longlong * FUN_1474c171a(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    iVar7 = (int)plVar2[1];
    do {
      if (iVar7 == 0) goto LAB_1474c17c1;
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    bVar8 = true;
    if ((*param_2 != 0) && (*(int *)(*param_2 + 8) == 2)) {
      *param_3 = 1;
      *param_1 = 0;
      param_1[1] = 0;
      lVar3 = *param_2;
      lVar4 = param_2[1];
      if (lVar4 == 0) {
        *param_1 = lVar3;
        param_1[1] = 0;
      }
      else {
        LOCK();
        *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)param_1[1];
        *param_1 = lVar3;
        param_1[1] = lVar4;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
      }
      bVar8 = false;
    }
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    if (!bVar8) {
      return param_1;
    }
  }
LAB_1474c17c1:
  *param_3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1474c17d6 FUN_1474c17d6 body=188 status=ok
// SIG undefined FUN_1474c17d6(void)

longlong * FUN_1474c17d6(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    iVar7 = (int)plVar2[1];
    do {
      if (iVar7 == 0) goto LAB_1474c187d;
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    bVar8 = true;
    if ((*param_2 != 0) && (*(int *)(*param_2 + 8) == 3)) {
      *param_3 = 1;
      *param_1 = 0;
      param_1[1] = 0;
      lVar3 = *param_2;
      lVar4 = param_2[1];
      if (lVar4 == 0) {
        *param_1 = lVar3;
        param_1[1] = 0;
      }
      else {
        LOCK();
        *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)param_1[1];
        *param_1 = lVar3;
        param_1[1] = lVar4;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
      }
      bVar8 = false;
    }
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    if (!bVar8) {
      return param_1;
    }
  }
LAB_1474c187d:
  *param_3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1474c1892 FUN_1474c1892 body=188 status=ok
// SIG undefined FUN_1474c1892(void)

longlong * FUN_1474c1892(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    iVar7 = (int)plVar2[1];
    do {
      if (iVar7 == 0) goto LAB_1474c1939;
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    bVar8 = true;
    if ((*param_2 != 0) && (*(int *)(*param_2 + 8) == 4)) {
      *param_3 = 1;
      *param_1 = 0;
      param_1[1] = 0;
      lVar3 = *param_2;
      lVar4 = param_2[1];
      if (lVar4 == 0) {
        *param_1 = lVar3;
        param_1[1] = 0;
      }
      else {
        LOCK();
        *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)param_1[1];
        *param_1 = lVar3;
        param_1[1] = lVar4;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
      }
      bVar8 = false;
    }
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    if (!bVar8) {
      return param_1;
    }
  }
LAB_1474c1939:
  *param_3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1474c194e FUN_1474c194e body=188 status=ok
// SIG undefined FUN_1474c194e(void)

longlong * FUN_1474c194e(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    iVar7 = (int)plVar2[1];
    do {
      if (iVar7 == 0) goto LAB_1474c19f5;
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    bVar8 = true;
    if ((*param_2 != 0) && (*(int *)(*param_2 + 8) == 5)) {
      *param_3 = 1;
      *param_1 = 0;
      param_1[1] = 0;
      lVar3 = *param_2;
      lVar4 = param_2[1];
      if (lVar4 == 0) {
        *param_1 = lVar3;
        param_1[1] = 0;
      }
      else {
        LOCK();
        *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)param_1[1];
        *param_1 = lVar3;
        param_1[1] = lVar4;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
      }
      bVar8 = false;
    }
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    if (!bVar8) {
      return param_1;
    }
  }
LAB_1474c19f5:
  *param_3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1474c1a12 FUN_1474c1a12 body=41 status=ok
// SIG undefined FUN_1474c1a12(void)

void FUN_1474c1a12(longlong param_1,undefined8 param_2)

{
  FUN_1408d84e8();
  FUN_140320438(param_1 + 0x140,param_2);
  return;
}



// FUNCTION 1474c1a3c FUN_1474c1a3c body=482 status=ok
// SIG undefined FUN_1474c1a3c(void)

void FUN_1474c1a3c(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  lVar6 = *(longlong *)(param_3 + 0x20);
  if (lVar6 == 0) goto LAB_1474c1b23;
  plVar2 = (longlong *)FUN_144a81888(lVar6);
  if (plVar2 == (longlong *)0x0) goto LAB_1474c1b23;
  lVar3 = (**(code **)(*plVar2 + 0x3e0))(plVar2,*(undefined8 *)(param_1 + 0x154));
  if (lVar3 == 0) {
    puVar8 = (undefined8 *)(param_1 + 0x154);
    iVar1 = FUN_144909502(lVar6,*puVar8);
    if (iVar1 != -1) {
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x9c) = 0x3ff00000;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0xc4) = 0x3ff00000;
      *(undefined4 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xcc) = 0x3ff00000;
      *(undefined8 *)(param_1 + 0xd0) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      goto LAB_1474c1acf;
    }
  }
  else {
    FUN_1402299d4(lVar3,local_98);
    puVar8 = local_98;
    puVar7 = (undefined8 *)(param_1 + 0x80);
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar8 = (undefined8 *)(lVar3 + 0x30);
LAB_1474c1acf:
    *(undefined8 *)(param_1 + 0x1b8) = *puVar8;
  }
  lVar3 = (**(code **)(*plVar2 + 0x3e0))(plVar2,*(undefined8 *)(param_1 + 0x15c));
  if (lVar3 == 0) {
    iVar1 = FUN_144909502(lVar6,*(undefined8 *)(param_1 + 0x15c));
    if (iVar1 == -1) goto LAB_1474c1b23;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0x3ff00000;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x124) = 0x3ff00000;
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 300) = 0x3ff00000;
    *(undefined8 *)(param_1 + 0x130) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x138) = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x15c);
  }
  else {
    FUN_1402299d4(lVar3,local_98);
    puVar8 = local_98;
    puVar7 = (undefined8 *)(param_1 + 0xe0);
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
    }
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
  }
  *(undefined8 *)(param_1 + 0x1c8) = uVar4;
LAB_1474c1b23:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c1c20 FUN_1474c1c20 body=135 status=ok
// SIG undefined FUN_1474c1c20(void)

void FUN_1474c1c20(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  float fVar3;
  
  cVar2 = FUN_144a64422(param_1,*param_2);
  *(char *)(param_1 + 0x1d8) = cVar2;
  if (cVar2 != '\0') {
    uVar1 = FUN_14477dc2a(param_1);
    FUN_14477dadc(uVar1,param_2);
    FUN_14015e054(param_1,param_2);
  }
  fVar3 = *(float *)(param_1 + 0x198);
  if (*(char *)(param_1 + 0x1d9) == '\x01') {
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar3 = 1.0 - fVar3;
  }
  *(float *)(param_1 + 0x1dc) = fVar3;
  FUN_14474897c(param_1 + 0x140,param_2);
  return;
}



// FUNCTION 1474c1ca8 FUN_1474c1ca8 body=86 status=ok
// SIG undefined FUN_1474c1ca8(void)

void FUN_1474c1ca8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x140);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  FUN_14019c9f2(param_1 + 0x1b8,*(undefined8 *)(*param_2 + 0x6a0));
  FUN_14019c9f2(param_1 + 0x1c8,*(undefined8 *)(*param_2 + 0x6a0));
  return;
}



// FUNCTION 1474c1cfe FUN_1474c1cfe body=288 status=ok
// SIG undefined FUN_1474c1cfe(void)

void FUN_1474c1cfe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined1 auStack_118 [40];
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined1 local_c0 [32];
  undefined1 local_a0 [24];
  undefined1 local_88 [32];
  undefined1 local_68 [72];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1447139fe(param_1 + 0x140);
  lVar1 = DAT_14caaa050;
  if ((*(char *)(param_1 + 0x1d8) == '\x01') && (1e-05 < *(float *)(param_1 + 0x1dc))) {
    cVar2 = FUN_144a8728e();
    if (cVar2 == '\0') {
      bVar3 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar3 ^ 1);
    }
    else {
      uVar4 = 0;
    }
    if (*(int *)(lVar1 + uVar4 * 4) == 1) {
      FUN_1474c1e20(param_1,param_2);
      FUN_144ade07e(local_c0,param_2,0);
      FUN_1401b1cc0(param_1,local_c0);
      local_d8 = param_2 + 0x20;
      local_d0 = param_2 + 0x38;
      local_c8 = param_2 + 0x58;
      local_f0 = local_a0;
      local_e8 = local_88;
      local_e0 = local_68;
      FUN_1401b1c56(&local_d8,&local_f0,*(undefined4 *)(param_1 + 0x1dc));
      FUN_142400cf0(*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28));
      FUN_1447166b4(local_68);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c1e20 FUN_1474c1e20 body=6539 status=ok
// SIG undefined FUN_1474c1e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474c1e20(longlong *param_1,longlong *param_2)

{
  undefined1 (*pauVar1) [16];
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  double *pdVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  double *pdVar11;
  longlong lVar12;
  ulonglong uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar24;
  undefined1 auVar23 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar41;
  undefined1 auVar40 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  undefined1 auVar52 [16];
  double dVar53;
  double dVar54;
  undefined1 auStack_378 [32];
  longlong *local_358;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  longlong local_2d8 [10];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  lVar5 = (**(code **)(*param_1 + 0x198))();
  if (lVar5 == 0) goto LAB_1474c3172;
  uVar8 = *(uint *)(param_1 + 0x38);
  if ((~uVar8 & 0x7fffffff) == 0) {
LAB_1474c31f7:
    dStack_160 = (double)param_1[0x35];
  }
  else {
    lVar12 = param_2[6];
    lVar10 = *(longlong *)(lVar12 + 0x20);
    if (*(longlong *)(lVar12 + 0x20) == 0) {
      lVar10 = lVar12 + 0x10;
    }
    if ((*(uint *)(lVar10 + (ulonglong)(uVar8 >> 3 & 0x1ffc)) >> (uVar8 & 0x1f) & 1) == 0)
    goto LAB_1474c31f7;
    local_2d8[6] = 0;
    local_2d8[7] = 0;
    local_2d8[4] = 0;
    local_2d8[5] = 0;
    local_2d8[2] = 0;
    local_2d8[3] = 0;
    local_2d8[0] = 0;
    local_2d8[1] = 0;
    local_2d8[8] = 0;
    FUN_1417977a6(local_2d8,param_2 + 4);
    uVar8 = *(uint *)(param_1 + 0x38);
    if ((int)uVar8 < 0) {
      iVar4 = -1;
      if ((((~uVar8 & 0x7fffffff) != 0) && (uVar8 = (int)(uVar8 * 2) >> 1, -1 < (int)uVar8)) &&
         ((int)uVar8 < *(int *)(lVar12 + 0x88))) {
        piVar7 = (int *)((ulonglong)uVar8 * 4 + *(longlong *)(lVar12 + 0x80));
        goto LAB_1474c1f43;
      }
    }
    else {
      piVar7 = (int *)((longlong)param_1 + 0x1c4);
LAB_1474c1f43:
      iVar4 = *piVar7;
    }
    if (*(char *)(local_2d8[3] + iVar4) == '\0') {
      FUN_1447d5d8e(local_2d8);
    }
    auVar50 = _DAT_149934d80;
    lVar10 = (longlong)iVar4 * 0x60;
    dVar21 = *(double *)(local_2d8[0] + lVar10);
    dVar26 = ((double *)(local_2d8[0] + lVar10))[1];
    pdVar6 = (double *)(local_2d8[0] + 0x10 + lVar10);
    dVar14 = *pdVar6;
    dVar51 = pdVar6[1];
    pdVar6 = (double *)(local_2d8[0] + 0x20 + lVar10);
    dVar45 = *pdVar6;
    dVar35 = pdVar6[1];
    pauVar1 = (undefined1 (*) [16])(local_2d8[0] + 0x30 + lVar10);
    local_348 = *pauVar1;
    auVar22 = *(undefined1 (*) [16])(local_2d8[0] + 0x40 + lVar10);
    dVar25 = auVar22._0_8_;
    dVar37 = auVar22._8_8_;
    auVar23 = *(undefined1 (*) [16])(local_2d8[0] + 0x50 + lVar10);
    dVar28 = auVar23._0_8_;
    auVar38 = *(undefined1 (*) [16])(param_1 + 0x18);
    dVar34 = auVar38._0_8_;
    dVar41 = auVar38._8_8_;
    auVar32 = *(undefined1 (*) [16])(param_1 + 0x1a);
    dVar29 = auVar32._0_8_;
    auVar22 = minpd(auVar38,auVar22);
    auVar47 = minpd(auVar32,auVar23);
    auVar38._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
    auVar38._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
    iVar4 = movmskpd((int)local_2d8[0],auVar38);
    auVar22._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
    auVar22._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
    uVar8 = movmskpd((int)lVar10,auVar22);
    if ((uVar8 & 0x3fffffff) == 0 && iVar4 == 0) {
      dVar24 = (double)param_1[0x10];
      dVar42 = (double)param_1[0x11];
      dVar43 = (double)param_1[0x12];
      dVar44 = (double)param_1[0x13];
      local_328 = dVar42 * dVar14 * -1.0 + dVar43 * dVar26 + dVar21 * dVar44 * 1.0 + dVar51 * dVar24
      ;
      dStack_320 = dVar24 * dVar14 * 1.0 +
                   dVar44 * dVar26 + dVar21 * dVar43 * -1.0 + dVar51 * dVar42;
      auVar50._0_8_ =
           dVar44 * dVar14 * 1.0 + ((dVar21 * dVar42 * 1.0 + dVar51 * dVar43) - dVar26 * dVar24);
      auVar50._8_8_ =
           dVar43 * dVar14 * -1.0 + ((dVar21 * dVar24 * -1.0 + dVar51 * dVar44) - dVar26 * dVar42);
      dVar20 = (double)param_1[0x14] * dVar25;
      dVar2 = (double)param_1[0x15] * dVar37;
      dVar54 = (double)param_1[0x16] * dVar28;
      dVar46 = (double)param_1[0x17] * auVar23._8_8_;
      dVar24 = dVar2 * dVar21 - dVar26 * dVar20;
      dVar43 = dVar54 * dVar26 - dVar14 * dVar2;
      dVar44 = dVar20 * dVar14 - dVar21 * dVar54;
      dVar42 = dVar46 * dVar51 - dVar51 * dVar46;
      dVar43 = dVar43 + dVar43;
      dVar44 = dVar44 + dVar44;
      dVar24 = dVar24 + dVar24;
      dVar42 = dVar42 + dVar42;
      dVar20 = dVar45 + (dVar24 * dVar26 - dVar14 * dVar44) + dVar51 * dVar43 + dVar20;
      dVar14 = dVar35 + (dVar43 * dVar14 - dVar24 * dVar21) + dVar51 * dVar44 + dVar2;
      dVar21 = (double)local_348._0_8_ +
               (dVar44 * dVar21 - dVar26 * dVar43) + dVar51 * dVar24 + dVar54;
      dVar26 = *(double *)(*pauVar1 + 8) +
               (dVar42 * dVar51 - dVar42 * dVar51) + dVar51 * dVar42 + dVar46;
      auVar47._8_8_ = dVar41 * dVar37;
      auVar47._0_8_ = dVar34 * dVar25;
      local_338 = dVar45;
      dStack_330 = dVar35;
    }
    else {
      dVar42 = dVar26 + dVar26;
      dVar43 = dVar14 + dVar14;
      dVar20 = dVar21 * (dVar21 + dVar21);
      dVar24 = (DAT_149934d80._8_8_ - (dVar14 * dVar43 + dVar20)) * dVar37;
      dVar44 = (dVar21 + dVar21) * dVar51;
      dStack_1a0 = (dVar43 * dVar26 - dVar44) * dVar28;
      local_1a8 = (dVar42 * dVar51 + dVar21 * dVar43) * dVar28;
      local_198 = (1.0 - (dVar20 + dVar26 * dVar42)) * dVar28;
      dVar20 = (dVar42 * dVar21 + dVar43 * dVar51) * dVar25;
      local_1b8 = (dVar43 * dVar26 + dVar44) * dVar37;
      local_1d8 = (dVar21 * dVar43 - dVar42 * dVar51) * dVar25;
      local_1e8._8_4_ = SUB84(dVar20,0);
      local_1e8._0_8_ = ((double)DAT_149934d80 - (dVar14 * dVar43 + dVar26 * dVar42)) * dVar25;
      local_1e8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      uStack_1d0 = 0;
      local_1c8._8_4_ = SUB84(dVar24,0);
      local_1c8._0_8_ = (dVar42 * dVar21 - dVar43 * dVar51) * dVar37;
      local_1c8._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      uStack_1b0 = 0;
      uStack_190 = 0;
      local_178 = (double)local_348._0_8_;
      uStack_170 = 0x3ff0000000000000;
      dVar26 = (double)param_1[0x10];
      dVar14 = (double)param_1[0x11];
      dVar51 = (double)param_1[0x12];
      dVar24 = dVar14 + dVar14;
      dVar42 = dVar51 + dVar51;
      dVar20 = dVar26 * (dVar26 + dVar26);
      local_218 = (1.0 - (dVar20 + dVar14 * dVar24)) * dVar29;
      dVar21 = (double)param_1[0x13];
      dVar43 = dVar42 * dVar21;
      dVar44 = (dVar26 + dVar26) * (double)param_1[0x13];
      dVar21 = dVar24 * dVar21;
      local_228 = (dVar21 + (double)param_1[0x10] * dVar42) * dVar29;
      dStack_220 = (dVar42 * dVar14 - dVar44) * dVar29;
      auVar47._0_8_ = dVar25 * dVar34;
      auVar47._8_8_ = dVar37 * dVar41;
      local_268 = ((double)DAT_149934d80 - (dVar51 * dVar42 + dVar14 * dVar24)) * dVar34;
      dVar25 = (DAT_149934d80._8_8_ - (dVar51 * dVar42 + dVar20)) * dVar41;
      dStack_260 = (dVar24 * dVar26 + dVar43) * dVar34;
      local_238 = (dVar42 * dVar14 + dVar44) * dVar41;
      local_258 = ((double)param_1[0x10] * dVar42 - dVar21) * dVar34;
      uStack_250 = 0;
      local_248._8_4_ = SUB84(dVar25,0);
      local_248._0_8_ = (dVar24 * dVar26 - dVar43) * dVar41;
      local_248._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      uStack_230 = 0;
      uStack_210 = 0;
      local_208 = (double)param_1[0x14];
      dStack_200 = (double)param_1[0x15];
      local_1f8 = (double)param_1[0x16];
      uStack_1f0 = 0x3ff0000000000000;
      local_188 = dVar45;
      dStack_180 = dVar35;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar15._8_8_ = -(ulonglong)(0.0 <= auVar47._8_8_);
      auVar15._0_8_ = -(ulonglong)(0.0 <= auVar47._0_8_);
      auVar22 = blendvpd(_DAT_149936790,auVar50,auVar15);
      uVar13 = -(ulonglong)(0.0 <= dVar28 * dVar29);
      dVar25 = (double)(~uVar13 & 0xbff0000000000000 | uVar13 & 0x3ff0000000000000);
      dVar34 = auVar22._0_8_;
      local_158 = local_158 * dVar34;
      dStack_160 = dStack_160 * dVar34;
      local_168 = local_168 * dVar34;
      dVar34 = auVar22._8_8_;
      local_138 = local_138 * dVar34;
      local_140 = local_140 * dVar34;
      local_148 = dVar34 * local_148;
      local_118 = local_118 * dVar25;
      local_120 = local_120 * dVar25;
      local_128 = dVar25 * local_128;
      FUN_14481fd10(&local_288,&local_168);
      dVar25 = local_278 * local_278 + local_288 * local_288;
      dVar34 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar30._0_8_ = dVar25 + dVar34;
      auVar30._8_8_ = dVar25 + dVar34;
      auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
      auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
      auVar22 = sqrtpd(auVar30,auVar30);
      auVar22 = divpd(auVar50,auVar22);
      auVar48._0_8_ = auVar22._0_8_ * local_278;
      auVar48._8_8_ = auVar22._8_8_ * dStack_270;
      local_328 = (double)((ulonglong)(local_288 * auVar22._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_));
      dStack_320 = (double)((ulonglong)(dStack_280 * auVar22._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_));
      auVar50 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar48,auVar16);
      dVar26 = 0.0;
      dVar20 = local_108;
      dVar14 = dStack_100;
      dVar21 = local_f8;
    }
    dVar28 = dVar28 * dVar29;
    uVar8 = *(uint *)(param_1 + 0x3a);
    uVar9 = ~uVar8;
    if ((uVar9 & 0x7fffffff) != 0) {
      lVar10 = lVar12 + 0x10;
      if (*(longlong *)(lVar12 + 0x20) != 0) {
        lVar10 = *(longlong *)(lVar12 + 0x20);
      }
      uVar9 = *(uint *)(lVar10 + (ulonglong)(uVar8 >> 3 & 0x1ffc));
      if ((uVar9 >> (uVar8 & 0x1f) & 1) != 0) {
        if ((int)uVar8 < 0) {
          uVar8 = (int)(uVar8 * 2) >> 1;
          iVar4 = -1;
          if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(lVar12 + 0x88))) {
            piVar7 = (int *)((ulonglong)uVar8 * 4 + *(longlong *)(lVar12 + 0x80));
            goto LAB_1474c240f;
          }
        }
        else {
          piVar7 = (int *)((longlong)param_1 + 0x1d4);
LAB_1474c240f:
          iVar4 = *piVar7;
        }
        if (*(char *)(local_2d8[3] + iVar4) == '\0') {
          FUN_1447d5d8e(local_2d8);
        }
        lVar12 = (longlong)iVar4 * 0x60;
        pdVar6 = (double *)(local_2d8[0] + lVar12);
        auVar22 = *(undefined1 (*) [16])(local_2d8[0] + 0x40 + lVar12);
        dVar25 = auVar22._0_8_;
        dVar41 = auVar22._8_8_;
        auVar38 = *(undefined1 (*) [16])(local_2d8[0] + 0x50 + lVar12);
        dVar34 = auVar38._0_8_;
        auVar15 = *(undefined1 (*) [16])(param_1 + 0x24);
        dVar29 = auVar15._0_8_;
        dVar21 = auVar15._8_8_;
        dVar37 = SUB168(*(undefined1 (*) [16])(param_1 + 0x26),0);
        auVar22 = minpd(auVar15,auVar22);
        auVar38 = minpd(*(undefined1 (*) [16])(param_1 + 0x26),auVar38);
        auVar31._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
        auVar31._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
        uVar9 = movmskpd((int)local_2d8[0],auVar31);
        auVar39._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
        auVar39._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
        uVar8 = movmskpd((int)lVar12,auVar39);
        if ((uVar8 & 0x3fffffff) == 0 && uVar9 == 0) {
          dVar37 = *pdVar6;
          dVar21 = pdVar6[1];
          dVar26 = pdVar6[2];
          dVar29 = pdVar6[3];
          dVar25 = dVar25 * (double)param_1[0x20];
          dVar41 = dVar41 * (double)param_1[0x21];
          dVar34 = dVar34 * (double)param_1[0x22];
          dVar51 = dVar41 * dVar37 - dVar21 * dVar25;
          dVar45 = dVar34 * dVar21 - dVar26 * dVar41;
          dVar35 = dVar25 * dVar26 - dVar37 * dVar34;
          dVar45 = dVar45 + dVar45;
          dVar35 = dVar35 + dVar35;
          dVar51 = dVar51 + dVar51;
          dVar20 = (dVar51 * dVar21 - dVar26 * dVar35) + dVar29 * dVar45 + dVar25 + pdVar6[4];
          dVar14 = (dVar45 * dVar26 - dVar51 * dVar37) + pdVar6[3] * dVar35 + dVar41 + pdVar6[5];
          dVar21 = (dVar35 * dVar37 - dVar21 * dVar45) + dVar29 * dVar51 + dVar34 + pdVar6[6];
        }
        else {
          dVar14 = *pdVar6;
          dVar51 = pdVar6[1];
          dVar45 = pdVar6[2];
          dVar35 = dVar51 + dVar51;
          dVar24 = dVar45 + dVar45;
          dVar44 = dVar14 * (dVar14 + dVar14);
          local_198 = (1.0 - (dVar44 + dVar51 * dVar35)) * dVar34;
          dVar26 = pdVar6[3];
          dVar42 = dVar24 * dVar26;
          dVar43 = (dVar14 + dVar14) * pdVar6[3];
          dVar26 = dVar35 * dVar26;
          dStack_1a0 = (dVar24 * dVar51 - dVar43) * dVar34;
          dVar20 = (dVar35 * dVar14 + dVar42) * dVar25;
          local_1b8 = (dVar24 * dVar51 + dVar43) * dVar41;
          local_1a8 = (dVar26 + *pdVar6 * dVar24) * dVar34;
          local_1d8 = (*pdVar6 * dVar24 - dVar26) * dVar25;
          local_1e8._8_4_ = SUB84(dVar20,0);
          local_1e8._0_8_ = (1.0 - (dVar45 * dVar24 + dVar51 * dVar35)) * dVar25;
          local_1e8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
          uStack_1d0 = 0;
          local_1c8._8_8_ = (1.0 - (dVar45 * dVar24 + dVar44)) * dVar41;
          local_1c8._0_8_ = (dVar35 * dVar14 - dVar42) * dVar41;
          uStack_1b0 = 0;
          uStack_190 = 0;
          local_188 = pdVar6[4];
          dStack_180 = pdVar6[5];
          local_178 = pdVar6[6];
          uStack_170 = 0x3ff0000000000000;
          dVar51 = (double)param_1[0x1c];
          dVar45 = (double)param_1[0x1d];
          dVar14 = (double)param_1[0x1e];
          dVar35 = dVar45 + dVar45;
          dVar24 = dVar14 + dVar14;
          dVar44 = dVar51 * (dVar51 + dVar51);
          dVar26 = (double)param_1[0x1f];
          dVar42 = dVar24 * dVar26;
          dVar43 = (dVar51 + dVar51) * (double)param_1[0x1f];
          dVar26 = dVar35 * dVar26;
          dStack_220 = (dVar24 * dVar45 - dVar43) * dVar37;
          local_268 = (1.0 - (dVar14 * dVar24 + dVar45 * dVar35)) * dVar29;
          dVar14 = (1.0 - (dVar14 * dVar24 + dVar44)) * dVar21;
          dStack_260 = (dVar35 * dVar51 + dVar42) * dVar29;
          local_238 = (dVar24 * dVar45 + dVar43) * dVar21;
          local_228 = (dVar26 + (double)param_1[0x1c] * dVar24) * dVar37;
          local_258 = ((double)param_1[0x1c] * dVar24 - dVar26) * dVar29;
          uStack_250 = 0;
          local_248._8_4_ = SUB84(dVar14,0);
          local_248._0_8_ = (dVar35 * dVar51 - dVar42) * dVar21;
          local_248._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
          uStack_230 = 0;
          local_218 = (1.0 - (dVar44 + dVar45 * dVar35)) * dVar37;
          uStack_210 = 0;
          local_208 = (double)param_1[0x20];
          dStack_200 = (double)param_1[0x21];
          local_1f8 = (double)param_1[0x22];
          uStack_1f0 = 0x3ff0000000000000;
          local_348 = auVar47;
          FUN_1447fea8d(&local_168);
          FUN_144a1c686(&local_168,0x3e45798ee0000000);
          auVar17._8_8_ = -(ulonglong)(0.0 <= dVar41 * dVar21);
          auVar17._0_8_ = -(ulonglong)(0.0 <= dVar25 * dVar29);
          auVar22 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar17);
          uVar13 = -(ulonglong)(0.0 <= dVar34 * dVar37);
          dVar25 = (double)(~uVar13 & 0xbff0000000000000 | uVar13 & 0x3ff0000000000000);
          dVar34 = auVar22._0_8_;
          local_158 = local_158 * dVar34;
          dStack_160 = dStack_160 * dVar34;
          local_168 = local_168 * dVar34;
          dVar34 = auVar22._8_8_;
          local_138 = local_138 * dVar34;
          local_140 = local_140 * dVar34;
          local_148 = dVar34 * local_148;
          local_118 = local_118 * dVar25;
          local_120 = local_120 * dVar25;
          local_128 = dVar25 * local_128;
          pdVar11 = &local_288;
          pdVar6 = (double *)FUN_14481fd10(pdVar11,&local_168);
          uVar9 = (uint)pdVar11;
          dVar21 = local_f8;
          dVar20 = local_108;
          dVar14 = dStack_100;
        }
        uVar8 = (uint)pdVar6;
        dVar26 = 0.0;
      }
    }
    auVar38 = _DAT_149934d80;
    local_348._8_8_ = dVar26;
    local_348._0_8_ = dVar21;
    lVar12 = *param_2;
    auVar22 = *(undefined1 (*) [16])(lVar12 + 0x50);
    dVar25 = auVar22._0_8_;
    dVar29 = auVar22._8_8_;
    dVar34 = SUB168(*(undefined1 (*) [16])(lVar12 + 0x60),0);
    dVar26 = auVar47._0_8_;
    dVar51 = auVar47._8_8_;
    auVar22 = minpd(auVar47,auVar22);
    auVar32._8_8_ = auVar23._8_8_ * auVar32._8_8_;
    auVar32._0_8_ = dVar28;
    auVar32 = minpd(auVar32,*(undefined1 (*) [16])(lVar12 + 0x60));
    auVar23._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
    auVar23._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
    iVar4 = movmskpd(uVar8,auVar23);
    auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
    auVar33._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
    uVar8 = movmskpd(uVar9,auVar33);
    dVar37 = auVar50._0_8_;
    dVar41 = auVar50._8_8_;
    local_338 = dVar20;
    dStack_330 = dVar14;
    if ((uVar8 & 0x3fffffff) == 0 && iVar4 == 0) {
      dVar46 = *(double *)(lVar12 + 0x10);
      dVar53 = *(double *)(lVar12 + 0x18);
      dVar45 = *(double *)(lVar12 + 0x28);
      dVar35 = *(double *)(lVar12 + 0x28);
      dVar42 = *(double *)(lVar12 + 0x10);
      dVar24 = *(double *)(lVar12 + 0x10);
      dVar44 = *(double *)(lVar12 + 0x18);
      dVar43 = *(double *)(lVar12 + 0x18);
      dVar3 = *(double *)(lVar12 + 0x20);
      dVar54 = *(double *)(lVar12 + 0x20);
      dVar2 = *(double *)(lVar12 + 0x20);
      dVar27 = dStack_320 * dVar54 * -1.0 +
               dVar37 * dVar44 + dVar41 * dVar42 * 1.0 + local_328 * dVar45;
      dVar36 = local_328 * dVar2 * 1.0 +
               dVar41 * dVar43 + dVar37 * dVar24 * -1.0 + dStack_320 * dVar35;
      auVar49._0_8_ =
           dVar41 * dVar54 * 1.0 +
           ((dVar42 * dStack_320 * 1.0 + dVar37 * dVar45) - local_328 * dVar44);
      auVar49._8_8_ =
           dVar37 * dVar2 * -1.0 +
           ((dVar24 * local_328 * -1.0 + dVar41 * dVar35) - dStack_320 * dVar43);
      dVar20 = dVar20 * dVar25;
      dVar14 = dVar14 * dVar29;
      dVar21 = dVar21 * dVar34;
      dVar41 = dVar14 * dVar46 - dVar20 * dVar53;
      dVar24 = dVar21 * dVar53 - dVar14 * dVar3;
      dVar37 = dVar20 * dVar3 - dVar21 * dVar46;
      dVar24 = dVar24 + dVar24;
      dVar37 = dVar37 + dVar37;
      dVar41 = dVar41 + dVar41;
      local_108 = (dVar41 * dVar53 - dVar3 * dVar37) + dVar45 * dVar24 + dVar20 +
                  *(double *)(lVar12 + 0x30);
      dStack_100 = (dVar24 * dVar3 - dVar41 * dVar46) + dVar35 * dVar37 + dVar14 +
                   *(double *)(lVar12 + 0x38);
      local_f8 = (dVar37 * dVar46 - dVar53 * dVar24) + dVar45 * dVar41 + dVar21 +
                 *(double *)(lVar12 + 0x40);
    }
    else {
      dVar44 = *(double *)(lVar12 + 0x10);
      dVar2 = *(double *)(lVar12 + 0x18);
      dVar54 = *(double *)(lVar12 + 0x20);
      dVar46 = dVar2 + dVar2;
      dVar35 = dVar54 + dVar54;
      dVar43 = dVar44 * (dVar44 + dVar44);
      dVar53 = *(double *)(lVar12 + 0x10) * dVar35;
      dVar45 = *(double *)(lVar12 + 0x28);
      dVar24 = dVar35 * dVar45;
      dVar42 = (dVar44 + dVar44) * *(double *)(lVar12 + 0x28);
      dVar45 = dVar46 * dVar45;
      local_198 = (1.0 - (dVar43 + dVar2 * dVar46)) * dVar34;
      local_1a8 = (dVar45 + dVar53) * dVar34;
      dStack_1a0 = (dVar35 * dVar2 - dVar42) * dVar34;
      dVar43 = (DAT_149934d80._8_8_ - (dVar54 * dVar35 + dVar43)) * dVar29;
      local_1b8 = (dVar35 * dVar2 + dVar42) * dVar29;
      local_1d8 = (dVar53 - dVar45) * dVar25;
      local_1e8._8_8_ = (dVar46 * dVar44 + dVar24) * dVar25;
      local_1e8._0_8_ = ((double)DAT_149934d80 - (dVar54 * dVar35 + dVar2 * dVar46)) * dVar25;
      uStack_1d0 = 0;
      local_1c8._8_4_ = SUB84(dVar43,0);
      local_1c8._0_8_ = (dVar46 * dVar44 - dVar24) * dVar29;
      local_1c8._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
      uStack_1b0 = 0;
      uStack_190 = 0;
      local_188 = *(double *)(lVar12 + 0x30);
      dStack_180 = *(double *)(lVar12 + 0x38);
      local_178 = *(double *)(lVar12 + 0x40);
      uStack_170 = 0x3ff0000000000000;
      dVar35 = dStack_320 + dStack_320;
      dVar24 = dVar37 + dVar37;
      dVar45 = local_328 * (local_328 + local_328);
      local_218 = (1.0 - (dVar45 + dStack_320 * dVar35)) * dVar28;
      dVar42 = (local_328 + local_328) * dVar41;
      local_228 = (dVar35 * dVar41 + local_328 * dVar24) * dVar28;
      dStack_220 = (dVar24 * dStack_320 - dVar42) * dVar28;
      local_268 = ((double)DAT_149934d80 - (dVar37 * dVar24 + dStack_320 * dVar35)) * dVar26;
      dStack_260 = (dVar35 * local_328 + dVar24 * dVar41) * dVar26;
      local_238 = (dVar24 * dStack_320 + dVar42) * dVar51;
      local_258 = (local_328 * dVar24 - dVar35 * dVar41) * dVar26;
      uStack_250 = 0;
      local_248._8_8_ = (DAT_149934d80._8_8_ - (dVar37 * dVar24 + dVar45)) * dVar51;
      local_248._0_8_ = (dVar35 * local_328 - dVar24 * dVar41) * dVar51;
      uStack_230 = 0;
      uStack_210 = 0;
      uStack_1f0 = 0x3ff0000000000000;
      local_208 = dVar20;
      dStack_200 = dVar14;
      local_1f8 = dVar21;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar18._8_8_ = -(ulonglong)(0.0 <= dVar51 * dVar29);
      auVar18._0_8_ = -(ulonglong)(0.0 <= dVar26 * dVar25);
      auVar22 = blendvpd(_DAT_149936790,auVar38,auVar18);
      uVar13 = -(ulonglong)(0.0 <= dVar28 * dVar34);
      dVar37 = (double)(~uVar13 & 0xbff0000000000000 | uVar13 & 0x3ff0000000000000);
      dVar41 = auVar22._0_8_;
      local_158 = local_158 * dVar41;
      dStack_160 = dStack_160 * dVar41;
      local_168 = local_168 * dVar41;
      dVar41 = auVar22._8_8_;
      local_138 = local_138 * dVar41;
      local_140 = local_140 * dVar41;
      local_148 = dVar41 * local_148;
      local_118 = local_118 * dVar37;
      local_120 = local_120 * dVar37;
      local_128 = dVar37 * local_128;
      FUN_14481fd10(&local_288,&local_168);
      dVar37 = local_278 * local_278 + local_288 * local_288;
      dVar41 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar40._0_8_ = dVar37 + dVar41;
      auVar40._8_8_ = dVar37 + dVar41;
      auVar19._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_);
      auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_);
      auVar22 = sqrtpd(auVar40,auVar40);
      auVar22 = divpd(auVar38,auVar22);
      auVar52._0_8_ = auVar22._0_8_ * local_278;
      auVar52._8_8_ = auVar22._8_8_ * dStack_270;
      dVar27 = (double)((ulonglong)(local_288 * auVar22._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_));
      dVar36 = (double)((ulonglong)(dStack_280 * auVar22._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_));
      auVar49 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar52,auVar19);
    }
    local_f8 = (double)param_1[0x2f] - local_f8;
    local_108 = (double)param_1[0x2d] - local_108;
    dStack_100 = (double)param_1[0x2e] - dStack_100;
    dVar35 = -*(double *)(lVar12 + 0xd0);
    dVar24 = -*(double *)(lVar12 + 0xd8);
    dVar14 = *(double *)(lVar12 + 0xe0) * -1.0;
    dVar45 = *(double *)(lVar12 + 0xe8) * 1.0;
    dVar37 = dStack_100 * dVar35 - dVar24 * local_108;
    dVar41 = local_f8 * dVar24 - dVar14 * dStack_100;
    dVar21 = local_108 * dVar14 - local_f8 * dVar35;
    dVar41 = dVar41 + dVar41;
    dVar21 = dVar21 + dVar21;
    dVar37 = dVar37 + dVar37;
    local_158 = dVar37 * dVar45 + local_f8 + (dVar21 * dVar35 - dVar41 * dVar24);
    local_168 = (dVar37 * dVar24 - dVar21 * dVar14) + dVar45 * dVar41 + local_108;
    dStack_160 = *(double *)(lVar12 + 0xd0) * dVar37 + dVar14 * dVar41 +
                 dVar45 * dVar21 + dStack_100;
    dVar37 = local_158 * local_158 + local_168 * local_168 + dStack_160 * dStack_160;
    if ((dVar37 != 1.0) || (NAN(dVar37))) {
      if (9.99999993922529e-09 <= dVar37) {
        dVar37 = 1.0 / SQRT(dVar37);
        local_158 = local_158 * dVar37;
        dStack_160 = dStack_160 * dVar37;
        local_168 = dVar37 * local_168;
      }
      else {
        local_158 = DAT_14c8464f0;
        local_168 = DAT_14c8464e0;
        dStack_160 = DAT_14c8464e8;
      }
    }
    dVar28 = dVar28 * dVar34 * (double)param_1[0x32];
    dVar34 = dVar26 * dVar25 * (double)param_1[0x30];
    dVar29 = dVar51 * dVar29 * (double)param_1[0x31];
    dVar41 = auVar49._8_8_;
    dVar37 = auVar49._0_8_;
    dVar25 = dVar29 * dVar27 - dVar36 * dVar34;
    dVar51 = dVar28 * dVar36 - dVar37 * dVar29;
    dVar21 = dVar34 * dVar37 - dVar27 * dVar28;
    dVar51 = dVar51 + dVar51;
    dVar21 = dVar21 + dVar21;
    dVar25 = dVar25 + dVar25;
    dVar26 = dVar41 * dVar25 + dVar28 + (dVar21 * dVar27 - dVar51 * dVar36);
    dVar28 = (dVar25 * dVar36 - dVar21 * dVar37) + dVar41 * dVar51 + dVar34;
    dVar25 = (dVar37 * dVar51 - dVar27 * dVar25) + dVar41 * dVar21 + dVar29;
    dVar34 = dVar26 * dVar26 + dVar28 * dVar28 + dVar25 * dVar25;
    if (((dVar34 != 1.0) || (dVar29 = dVar28, dVar37 = dVar25, dVar41 = dVar26, NAN(dVar34))) &&
       (dVar29 = DAT_14c8464e0, dVar37 = DAT_14c8464e8, dVar41 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar34)) {
      dVar34 = 1.0 / SQRT(dVar34);
      dVar29 = dVar34 * dVar28;
      dVar37 = dVar25 * dVar34;
      dVar41 = dVar26 * dVar34;
    }
    dVar25 = dVar37 * dVar35 - dVar24 * dVar29;
    dVar28 = dVar41 * dVar24 - dVar14 * dVar37;
    dVar34 = dVar29 * dVar14 - dVar41 * dVar35;
    dVar28 = dVar28 + dVar28;
    dVar34 = dVar34 + dVar34;
    dVar25 = dVar25 + dVar25;
    local_1d8 = dVar25 * dVar45 + dVar41 + (dVar34 * dVar35 - dVar28 * dVar24);
    local_1e8._8_8_ = (dVar14 * dVar28 - dVar35 * dVar25) + dVar45 * dVar34 + dVar37;
    local_1e8._0_8_ = (dVar25 * dVar24 - dVar34 * dVar14) + dVar45 * dVar28 + dVar29;
    local_258 = DAT_14c8462e8;
    local_268 = DAT_14c8462d8;
    dStack_260 = DAT_14c8462e0;
    local_278 = DAT_14c8462a0;
    local_288 = DAT_14c846290;
    dStack_280 = DAT_14c846298;
    local_2e8 = DAT_14c8462d0;
    local_2f8 = DAT_14c8462c0;
    uStack_2f0 = DAT_14c8462c8;
    local_358 = &local_2f8;
    FUN_1402a6d62(&local_308,local_1e8,&local_268,&local_288);
    local_358 = &local_2f8;
    FUN_1402a6d62(&local_318,&local_168,&local_268,&local_288);
    dVar25 = (double)FUN_144719204((local_318 - local_308) * 57.29577951308232,0x4076800000000000);
    dVar25 = (double)(~-(ulonglong)(dVar25 < 0.0) & (ulonglong)dVar25 |
                     (ulonglong)(dVar25 + 360.0) & -(ulonglong)(dVar25 < 0.0));
    param_1[0x34] =
         ~-(ulonglong)(180.0 < dVar25) & (ulonglong)dVar25 |
         (ulonglong)(dVar25 + -360.0) & -(ulonglong)(180.0 < dVar25);
    dVar25 = (double)FUN_144719204((local_310 - local_300) * 57.29577951308232,0x4076800000000000);
    dVar25 = (double)(~-(ulonglong)(dVar25 < 0.0) & (ulonglong)dVar25 |
                     (ulonglong)(dVar25 + 360.0) & -(ulonglong)(dVar25 < 0.0));
    dStack_160 = (double)(~-(ulonglong)(180.0 < dVar25) & (ulonglong)dVar25 |
                         (ulonglong)(dVar25 + -360.0) & -(ulonglong)(180.0 < dVar25));
    param_1[0x35] = (longlong)dStack_160;
  }
  local_168 = (double)param_1[0x34];
  local_158 = 0.0;
  local_358 = (longlong *)CONCAT44(local_358._4_4_,(int)param_1[6]);
  FUN_1448d6690(lVar5,local_1e8,param_1 + 8);
  local_358 = param_1 + 0xc;
  FUN_1401e099a(lVar5,local_1e8);
LAB_1474c3172:
  if ((local_e0 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474c37ac FUN_1474c37ac body=272 status=ok
// SIG undefined FUN_1474c37ac(void)

void FUN_1474c37ac(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  int local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1474c38be(param_2,&local_40);
  FUN_140002266(&local_50,L"(Play Time: %.3f)",(double)*(float *)(param_1 + 0x2c));
  iVar1 = local_48 + -1;
  if (local_48 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_40,local_50,iVar1);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  _Src = local_40;
  local_60 = (void *)0x0;
  local_58 = local_38;
  if ((longlong)local_38 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_38,0);
    memcpy(local_60,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_60,0);
  FUN_147906d38(param_1 + 0x140,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c38be FUN_1474c38be body=256 status=ok
// SIG undefined FUN_1474c38be(void)

undefined8 FUN_1474c38be(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caaa030 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa030 = FUN_140002ddd(FUN_146330361,uVar2,L"AnimNode_AimOffsetLookAt");
  }
  local_48 = *(undefined8 *)(DAT_14caaa030 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474c39da FUN_1474c39da body=287 status=ok
// SIG undefined FUN_1474c39da(void)

void FUN_1474c39da(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 3) = 0xfffffffe;
  *(undefined4 *)(param_1 + 4) = 0xfffffffe;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_14a41e7a0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x10;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x1c;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x3ff0000000000000;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0x3f800000;
  uVar1 = DAT_14c8464e8;
  param_1[0x34] = DAT_14c8464e0;
  param_1[0x35] = uVar1;
  param_1[0x36] = DAT_14c8464f0;
  param_1[0x37] = 0;
  param_1[0x38] = 0xffffffff7fffffff;
  param_1[0x39] = 0;
  param_1[0x3a] = 0xffffffff7fffffff;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1d9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x3f800000;
  return;
}



// FUNCTION 1474c3b0a FUN_1474c3b0a body=381 status=ok
// SIG undefined FUN_1474c3b0a(void)

void FUN_1474c3b0a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_70;
  int local_68;
  undefined4 local_64;
  longlong local_60;
  int local_58;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1474c3c88(param_2,&local_50);
  FUN_140002266(&local_60,L"(Alpha: %.1f%%)",(double)(*(float *)(param_1 + 200) * 100.0));
  iVar1 = local_58 + -1;
  if (local_58 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_50,local_60,iVar1);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  _Src = local_50;
  local_70 = (void *)0x0;
  local_68 = local_48;
  if ((longlong)local_48 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_48,0);
    memcpy(local_70,_Src,(longlong)local_48 * 2);
  }
  FUN_147906d4c(param_2,&local_70,0);
  local_88 = 0;
  uStack_80 = 0;
  uVar2 = FUN_147906f5e(param_2,0x3f800000);
  FUN_147906d38(param_1 + 0x18,uVar2);
  local_98 = 0;
  uStack_90 = 0;
  uVar2 = FUN_147906f5e(param_2,*(undefined4 *)(param_1 + 200));
  FUN_147906d38(param_1 + 0x28,uVar2);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c3c88 FUN_1474c3c88 body=256 status=ok
// SIG undefined FUN_1474c3c88(void)

undefined8 FUN_1474c3c88(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caaa078 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa078 = FUN_140002ddd(FUN_146330429,uVar2,L"AnimNode_ApplyAdditive");
  }
  local_48 = *(undefined8 *)(DAT_14caaa078 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474c3da2 FUN_1474c3da2 body=46 status=ok
// SIG undefined FUN_1474c3da2(void)

void FUN_1474c3da2(longlong param_1,undefined8 param_2)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x18);
  FUN_140320438(param_1 + 0x28,param_2);
  return;
}



// FUNCTION 1474c3dd0 FUN_1474c3dd0 body=352 status=ok
// SIG undefined FUN_1474c3dd0(void)

void FUN_1474c3dd0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  
  plVar5 = *(longlong **)(param_1 + 0x18);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
  }
  plVar5 = *(longlong **)(param_1 + 0x28);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
  }
  plVar5 = (longlong *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) < 0) {
    FUN_1474d961c(plVar5);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar6 = *(longlong *)(*param_2 + 0x6a0);
    puVar14 = *(undefined4 **)(param_1 + 0x38);
    lVar13 = (longlong)*(int *)(param_1 + 0x40) * 0x24;
    do {
      FUN_14019c9f2(puVar14,lVar6);
      FUN_14019c9f2(puVar14 + 4,lVar6);
      uVar3 = puVar14[2];
      if ((~uVar3 & 0x7fffffff) != 0) {
        lVar15 = *(longlong *)(lVar6 + 0x20);
        if (*(longlong *)(lVar6 + 0x20) == 0) {
          lVar15 = lVar6 + 0x10;
        }
        if (((((*(uint *)(lVar15 + (ulonglong)(uVar3 >> 3 & 0x1ffc)) >> (uVar3 & 0x1f) & 1) != 0) &&
             (uVar3 = puVar14[6], (~uVar3 & 0x7fffffff) != 0)) &&
            ((*(uint *)(lVar15 + (ulonglong)(uVar3 >> 3 & 0x1ffc)) >> (uVar3 & 0x1f) & 1) != 0)) &&
           (((*(char *)(puVar14 + 8) != '\0' || (*(char *)((longlong)puVar14 + 0x21) != '\0')) ||
            (*(char *)((longlong)puVar14 + 0x22) == '\x01')))) {
          iVar4 = *(int *)(param_1 + 0x50);
          lVar15 = (longlong)iVar4;
          *(uint *)(param_1 + 0x50) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0x54) < iVar4 + 1U) {
            FUN_1474d964c(plVar5,iVar4);
          }
          lVar7 = *plVar5;
          *(undefined4 *)(lVar7 + 0x20 + lVar15 * 0x24) = puVar14[8];
          uVar8 = *puVar14;
          uVar9 = puVar14[1];
          uVar10 = puVar14[2];
          uVar11 = puVar14[3];
          uVar12 = *(undefined8 *)(puVar14 + 6);
          puVar2 = (undefined8 *)(lVar7 + 0x10 + lVar15 * 0x24);
          *puVar2 = *(undefined8 *)(puVar14 + 4);
          puVar2[1] = uVar12;
          puVar1 = (undefined4 *)(lVar7 + lVar15 * 0x24);
          *puVar1 = uVar8;
          puVar1[1] = uVar9;
          puVar1[2] = uVar10;
          puVar1[3] = uVar11;
        }
      }
      puVar14 = puVar14 + 9;
      lVar13 = lVar13 + -0x24;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 1474c3f30 FUN_1474c3f30 body=2582 status=ok
// SIG undefined FUN_1474c3f30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474c3f30(longlong param_1,longlong *param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 (*pauVar11) [16];
  undefined8 *puVar12;
  double *pdVar13;
  int *piVar14;
  undefined8 *puVar15;
  double *pdVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  int *piVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar25;
  undefined1 auVar24 [16];
  double dVar26;
  double dVar28;
  undefined1 auVar27 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar46;
  undefined1 auStack_418 [32];
  uint local_3f8;
  longlong local_3e8;
  longlong *local_3e0;
  longlong local_3d8;
  undefined4 local_3d0;
  double local_3c8 [2];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  double local_398;
  undefined8 uStack_390;
  undefined1 local_388 [16];
  double local_378;
  undefined8 uStack_370;
  double local_368 [4];
  double local_348;
  double dStack_340;
  double local_338;
  double local_328;
  double dStack_320;
  double local_318;
  undefined8 local_308 [12];
  longlong local_2a8;
  undefined8 uStack_2a0;
  longlong local_298 [10];
  longlong local_248 [9];
  undefined1 local_200 [32];
  longlong local_1e0 [7];
  undefined1 local_1a8 [76];
  int local_15c [27];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  FUN_1447139fe(param_1 + 0x18);
  if (*(char *)(param_1 + 0x69) == '\x01') {
    lVar9 = *(longlong *)(*param_2 + 0x6a0);
    FUN_144ade07e(local_200,param_2,0);
    FUN_1447139fe(param_1 + 0x28,local_200);
    if (*(char *)(param_1 + 0x68) == '\x03') {
      if ((longlong)*(int *)(param_1 + 0x50) != 0) {
        piVar7 = (int *)(*(longlong *)(param_1 + 0x48) + 0x1c);
        lVar8 = (longlong)*(int *)(param_1 + 0x50) * 0x24;
        do {
          uVar10 = piVar7[-5];
          if ((int)uVar10 < 0) {
            iVar17 = -1;
            if ((((~uVar10 & 0x7fffffff) != 0) &&
                (uVar10 = (int)(uVar10 * 2) >> 1, -1 < (int)uVar10)) &&
               ((int)uVar10 < *(int *)(lVar9 + 0x88))) {
              piVar20 = (int *)((ulonglong)uVar10 * 4 + *(longlong *)(lVar9 + 0x80));
              goto LAB_1474c4049;
            }
          }
          else {
            piVar20 = piVar7 + -4;
LAB_1474c4049:
            iVar17 = *piVar20;
          }
          uVar10 = piVar7[-1];
          piVar20 = piVar7;
          if ((int)uVar10 < 0) {
            iVar19 = -1;
            if ((((~uVar10 & 0x7fffffff) != 0) &&
                (uVar10 = (int)(uVar10 * 2) >> 1, -1 < (int)uVar10)) &&
               ((int)uVar10 < *(int *)(lVar9 + 0x88))) {
              piVar20 = (int *)((ulonglong)uVar10 * 4 + *(longlong *)(lVar9 + 0x80));
              goto LAB_1474c405a;
            }
          }
          else {
LAB_1474c405a:
            iVar19 = *piVar20;
          }
          fVar1 = *(float *)(param_1 + 0x5c);
          pauVar11 = (undefined1 (*) [16])((longlong)iVar19 * 0x60 + param_2[4]);
          if (ABS(fVar1) <= 1e-05) {
            dVar23 = *(double *)*pauVar11;
            dVar25 = *(double *)(*pauVar11 + 8);
            auVar36 = pauVar11[1];
            dVar28 = *(double *)pauVar11[2];
            dVar41 = *(double *)(pauVar11[2] + 8);
            dVar34 = *(double *)pauVar11[3];
            dVar3 = *(double *)pauVar11[4];
            dVar4 = *(double *)(pauVar11[4] + 8);
            dVar26 = *(double *)pauVar11[5];
          }
          else {
            lVar18 = (longlong)iVar17 * 0x60;
            dVar23 = *(double *)(local_1e0[0] + lVar18);
            dVar25 = ((double *)(local_1e0[0] + lVar18))[1];
            auVar36 = *(undefined1 (*) [16])(local_1e0[0] + 0x10 + lVar18);
            pdVar13 = (double *)(local_1e0[0] + 0x20 + lVar18);
            dVar28 = *pdVar13;
            dVar41 = pdVar13[1];
            dVar34 = *(double *)(local_1e0[0] + 0x30 + lVar18);
            pdVar13 = (double *)(local_1e0[0] + 0x40 + lVar18);
            dVar3 = *pdVar13;
            dVar4 = pdVar13[1];
            dVar26 = *(double *)(local_1e0[0] + 0x50 + lVar18);
            if (1e-05 < ABS(fVar1 + -1.0)) {
              dVar39 = (double)fVar1;
              dVar46 = (double)fVar1;
              dVar29 = (double)DAT_149934d80 - dVar39;
              dVar32 = DAT_149934d80._8_8_ - dVar46;
              dVar28 = dVar28 * dVar39 + *(double *)pauVar11[2] * dVar29;
              dVar41 = dVar41 * dVar46 + *(double *)(pauVar11[2] + 8) * dVar32;
              dVar34 = dVar34 * dVar39 + *(double *)pauVar11[3] * dVar29;
              dVar3 = dVar3 * dVar39 + *(double *)pauVar11[4] * dVar29;
              dVar4 = dVar4 * dVar46 + *(double *)(pauVar11[4] + 8) * dVar32;
              auVar31 = *pauVar11;
              auVar37 = pauVar11[1];
              dVar40 = auVar37._0_8_ * auVar36._0_8_ + auVar31._0_8_ * dVar23;
              dVar45 = auVar37._8_8_ * auVar36._8_8_ + auVar31._8_8_ * dVar25;
              dVar26 = dVar26 * dVar39 + *(double *)pauVar11[5] * dVar29;
              auVar21._8_8_ = -(ulonglong)(0.0 <= dVar40 + dVar45);
              auVar21._0_8_ = -(ulonglong)(0.0 <= dVar40 + dVar45);
              auVar42._0_8_ = 0.0 - auVar31._0_8_;
              auVar42._8_8_ = 0.0 - auVar31._8_8_;
              auVar30._0_8_ = 0.0 - auVar37._0_8_;
              auVar30._8_8_ = 0.0 - auVar37._8_8_;
              auVar43 = blendvpd(auVar42,auVar31,auVar21);
              auVar31 = blendvpd(auVar30,auVar37,auVar21);
              dVar40 = auVar43._0_8_ * dVar29 + dVar23 * dVar39;
              dVar45 = auVar43._8_8_ * dVar32 + dVar25 * dVar46;
              dVar29 = auVar31._0_8_ * dVar29 + auVar36._0_8_ * dVar39;
              dVar32 = auVar31._8_8_ * dVar32 + auVar36._8_8_ * dVar46;
              dVar23 = dVar29 * dVar29 + dVar40 * dVar40;
              dVar25 = dVar32 * dVar32 + dVar45 * dVar45;
              auVar24._0_8_ = dVar23 + dVar25;
              auVar24._8_8_ = dVar23 + dVar25;
              auVar36._8_8_ = -(ulonglong)(1e-08 <= auVar24._8_8_);
              auVar36._0_8_ = -(ulonglong)(1e-08 <= auVar24._0_8_);
              auVar31 = sqrtpd(auVar24,auVar24);
              auVar31 = divpd(_DAT_149934d80,auVar31);
              auVar33._0_8_ = auVar31._0_8_ * dVar29;
              auVar33._8_8_ = auVar31._8_8_ * dVar32;
              dVar23 = (double)((ulonglong)(dVar40 * auVar31._0_8_) &
                               -(ulonglong)(1e-08 <= auVar24._0_8_));
              dVar25 = (double)((ulonglong)(dVar45 * auVar31._8_8_) &
                               -(ulonglong)(1e-08 <= auVar24._8_8_));
              auVar36 = blendvpd(_DAT_149935300,auVar33,auVar36);
            }
          }
          if ((char)piVar7[1] == '\x01') {
            auVar5._8_4_ = SUB84(dVar41,0);
            auVar5._0_8_ = dVar28;
            auVar5._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
            pauVar11[2] = auVar5;
            *(double *)pauVar11[3] = dVar34;
            *(undefined8 *)(pauVar11[3] + 8) = 0;
          }
          if (*(char *)((longlong)piVar7 + 5) == '\x01') {
            *(double *)*pauVar11 = dVar23;
            *(double *)(*pauVar11 + 8) = dVar25;
            pauVar11[1] = auVar36;
          }
          if (*(char *)((longlong)piVar7 + 6) == '\x01') {
            auVar2._8_4_ = SUB84(dVar4,0);
            auVar2._0_8_ = dVar3;
            auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
            pauVar11[4] = auVar2;
            *(double *)pauVar11[5] = dVar26;
            *(undefined8 *)(pauVar11[5] + 8) = 0;
          }
          piVar7 = piVar7 + 9;
          lVar8 = lVar8 + -0x24;
        } while (lVar8 != 0);
      }
    }
    else {
      local_248[6] = 0;
      local_248[7] = 0;
      local_248[4] = 0;
      local_248[5] = 0;
      local_248[2] = 0;
      local_248[3] = 0;
      local_248[0] = 0;
      local_248[1] = 0;
      local_248[8] = 0;
      FUN_1417977a6(local_248,param_2 + 4);
      local_298[8] = 0;
      local_298[6] = 0;
      local_298[7] = 0;
      local_298[4] = 0;
      local_298[5] = 0;
      local_298[2] = 0;
      local_298[3] = 0;
      local_298[0] = 0;
      local_298[1] = 0;
      FUN_1417977a6(local_298,local_1e0);
      auVar36 = _DAT_149934d80;
      local_2a8 = 0;
      uStack_2a0 = 0;
      puVar12 = (undefined8 *)(*param_2 + 0x10);
      puVar15 = local_308;
      for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar15 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar15 = puVar15 + 1;
      }
      if ((longlong)*(int *)(param_1 + 0x50) != 0) {
        piVar7 = (int *)(*(longlong *)(param_1 + 0x48) + 0x1c);
        lVar8 = (longlong)*(int *)(param_1 + 0x50) * 0x24;
        dVar3 = (double)DAT_149934d80;
        dVar4 = DAT_149934d80._8_8_;
        local_3e8 = lVar9;
        local_3e0 = param_2 + 4;
        do {
          uVar10 = piVar7[-5];
          if ((int)uVar10 < 0) {
            iVar17 = -1;
            if ((((~uVar10 & 0x7fffffff) != 0) &&
                (uVar10 = (int)(uVar10 * 2) >> 1, -1 < (int)uVar10)) &&
               ((int)uVar10 < *(int *)(local_3e8 + 0x88))) {
              piVar20 = (int *)((ulonglong)uVar10 * 4 + *(longlong *)(local_3e8 + 0x80));
              goto LAB_1474c43e8;
            }
          }
          else {
            piVar20 = piVar7 + -4;
LAB_1474c43e8:
            iVar17 = *piVar20;
          }
          uVar10 = piVar7[-1];
          piVar20 = piVar7;
          if ((int)uVar10 < 0) {
            iVar19 = -1;
            if ((((~uVar10 & 0x7fffffff) != 0) &&
                (uVar10 = (int)(uVar10 * 2) >> 1, -1 < (int)uVar10)) &&
               ((int)uVar10 < *(int *)(local_3e8 + 0x88))) {
              piVar20 = (int *)((ulonglong)uVar10 * 4 + *(longlong *)(local_3e8 + 0x80));
              goto LAB_1474c43f9;
            }
          }
          else {
LAB_1474c43f9:
            iVar19 = *piVar20;
          }
          if (*(char *)(local_298[3] + iVar17) == '\0') {
            FUN_1447d5d8e(local_298,iVar17);
          }
          pdVar13 = (double *)((longlong)iVar17 * 0x60 + local_298[0]);
          pdVar16 = local_368;
          for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
            *pdVar16 = *pdVar13;
            pdVar13 = pdVar13 + 1;
            pdVar16 = pdVar16 + 1;
          }
          if (*(char *)(local_248[3] + iVar19) == '\0') {
            FUN_1447d5d8e(local_248,iVar19);
          }
          pdVar13 = (double *)((longlong)iVar19 * 0x60 + local_248[0]);
          pdVar16 = local_3c8;
          for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
            *pdVar16 = *pdVar13;
            pdVar13 = pdVar13 + 1;
            pdVar16 = pdVar16 + 1;
          }
          local_3f8 = (uint)*(byte *)(param_1 + 0x68);
          FUN_14045e902(local_308,local_298,local_368,iVar17);
          local_3f8 = (uint)*(byte *)(param_1 + 0x68);
          FUN_14045e902(local_308,local_248,local_3c8,iVar19);
          fVar1 = *(float *)(param_1 + 0x5c);
          auVar31 = local_3b8;
          dVar26 = (double)local_3a8._0_8_;
          dVar28 = (double)local_3a8._8_8_;
          dVar41 = (double)local_388._0_8_;
          dVar23 = (double)local_388._8_8_;
          dVar25 = local_398;
          dVar34 = local_378;
          dVar29 = local_3c8[0];
          dVar32 = local_3c8[1];
          if (1e-05 < ABS(fVar1)) {
            if (ABS(fVar1 + -1.0) <= 1e-05) {
              auVar31._8_8_ = local_368[3];
              auVar31._0_8_ = local_368[2];
              dVar26 = local_348;
              dVar28 = dStack_340;
              dVar41 = local_328;
              dVar23 = dStack_320;
              dVar25 = local_338;
              dVar34 = local_318;
              dVar29 = local_368[0];
              dVar32 = local_368[1];
            }
            else {
              dVar34 = (double)fVar1;
              dVar23 = (double)fVar1;
              dVar39 = dVar3 - dVar34;
              dVar25 = dVar4 - dVar23;
              auVar37._8_8_ = local_3c8[1];
              auVar37._0_8_ = local_3c8[0];
              dVar26 = local_368[2] * local_3b8._0_8_ + local_368[0] * local_3c8[0];
              dVar28 = local_368[3] * local_3b8._8_8_ + local_368[1] * local_3c8[1];
              auVar43._8_8_ = -(ulonglong)(0.0 <= dVar26 + dVar28);
              auVar43._0_8_ = -(ulonglong)(0.0 <= dVar26 + dVar28);
              auVar27._0_8_ = 0.0 - local_3c8[0];
              auVar27._8_8_ = 0.0 - local_3c8[1];
              auVar31 = blendvpd(auVar27,auVar37,auVar43);
              auVar44._0_8_ = 0.0 - local_3b8._0_8_;
              auVar44._8_8_ = 0.0 - local_3b8._8_8_;
              dVar29 = auVar31._0_8_ * dVar39 + local_368[0] * dVar34;
              dVar32 = auVar31._8_8_ * dVar25 + local_368[1] * dVar23;
              auVar31 = blendvpd(auVar44,local_3b8,auVar43);
              dVar41 = auVar31._0_8_ * dVar39 + local_368[2] * dVar34;
              dVar46 = auVar31._8_8_ * dVar25 + local_368[3] * dVar23;
              dVar26 = dVar41 * dVar41 + dVar29 * dVar29;
              dVar28 = dVar46 * dVar46 + dVar32 * dVar32;
              auVar35._0_8_ = dVar26 + dVar28;
              auVar35._8_8_ = dVar26 + dVar28;
              auVar22._8_8_ = -(ulonglong)(1e-08 <= auVar35._8_8_);
              auVar22._0_8_ = -(ulonglong)(1e-08 <= auVar35._0_8_);
              auVar31 = sqrtpd(auVar35,auVar35);
              auVar37 = divpd(auVar36,auVar31);
              auVar38._0_8_ = auVar37._0_8_ * dVar41;
              auVar38._8_8_ = auVar37._8_8_ * dVar46;
              auVar31 = blendvpd(_DAT_149935300,auVar38,auVar22);
              dVar26 = local_348 * dVar34 + (double)local_3a8._0_8_ * dVar39;
              dVar28 = dStack_340 * dVar23 + (double)local_3a8._8_8_ * dVar25;
              dVar41 = local_328 * dVar34 + (double)local_388._0_8_ * dVar39;
              dVar23 = dStack_320 * dVar23 + (double)local_388._8_8_ * dVar25;
              dVar25 = local_338 * dVar34 + local_398 * dVar39;
              dVar34 = local_318 * dVar34 + local_378 * dVar39;
              dVar29 = (double)((ulonglong)(dVar29 * auVar37._0_8_) &
                               -(ulonglong)(1e-08 <= auVar35._0_8_));
              dVar32 = (double)((ulonglong)(dVar32 * auVar37._8_8_) &
                               -(ulonglong)(1e-08 <= auVar35._8_8_));
            }
          }
          if ((char)piVar7[1] == '\x01') {
            local_3a8._8_4_ = SUB84(dVar28,0);
            local_3a8._0_8_ = dVar26;
            local_3a8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
            uStack_390 = 0;
            local_398 = dVar25;
          }
          if (*(char *)((longlong)piVar7 + 5) == '\x01') {
            local_3c8[0] = dVar29;
            local_3c8[1] = dVar32;
            local_3b8 = auVar31;
          }
          if (*(char *)((longlong)piVar7 + 6) == '\x01') {
            local_388._8_4_ = SUB84(dVar23,0);
            local_388._0_8_ = dVar41;
            local_388._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
            uStack_370 = 0;
            local_378 = dVar34;
          }
          local_3f8 = (uint)*(byte *)(param_1 + 0x68);
          FUN_14045df82(local_308,local_248,local_3c8,iVar19);
          uVar6 = uStack_2a0;
          pdVar13 = local_3c8;
          piVar20 = local_15c + 3;
          for (lVar9 = 0x18; lVar9 != 0; lVar9 = lVar9 + -1) {
            *piVar20 = *(int *)pdVar13;
            pdVar13 = (double *)((longlong)pdVar13 + 4);
            piVar20 = piVar20 + 1;
          }
          lVar9 = (longlong)(int)uStack_2a0;
          uVar10 = (int)uStack_2a0 + 1;
          uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar10);
          if (uStack_2a0._4_4_ < uVar10) {
            FUN_1400c28ea(&local_2a8,uVar6 & 0xffffffff);
          }
          piVar20 = (int *)(local_2a8 + lVar9 * 0x70);
          *piVar20 = iVar19;
          piVar14 = local_15c;
          for (lVar9 = 0x1b; piVar20 = piVar20 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
            *piVar20 = *piVar14;
            piVar14 = piVar14 + 1;
          }
          piVar7 = piVar7 + 9;
          lVar8 = lVar8 + -0x24;
        } while (lVar8 != 0);
        if (0 < (int)uStack_2a0) {
          FUN_1449449dd(local_2a8,uStack_2a0 & 0xffffffff,local_368,local_15c);
          local_3d8 = local_2a8;
          local_3d0 = (int)uStack_2a0;
          FUN_1447d5b6c(local_248);
          FUN_144825e30(local_248,local_3e0);
        }
        if (local_2a8 != 0) {
          FUN_1400020a8();
        }
      }
    }
    FUN_1447166b4(local_1a8);
  }
  if ((local_f0 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474c4948 FUN_1474c4948 body=375 status=ok
// SIG undefined FUN_1474c4948(void)

void FUN_1474c4948(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_70;
  int local_68;
  undefined4 local_64;
  longlong local_60;
  int local_58;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1474c4ac0(param_2,&local_50);
  FUN_140002266(&local_60,L"(Alpha: %.1f%%)",(double)(*(float *)(param_1 + 0x5c) * 100.0));
  iVar1 = local_58 + -1;
  if (local_58 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_50,local_60,iVar1);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  _Src = local_50;
  local_70 = (void *)0x0;
  local_68 = local_48;
  if ((longlong)local_48 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_48,0);
    memcpy(local_70,_Src,(longlong)local_48 * 2);
  }
  FUN_147906d4c(param_2,&local_70,0);
  local_88 = 0;
  uStack_80 = 0;
  uVar2 = FUN_147906f5e(param_2,0x3f800000);
  FUN_147906d38(param_1 + 0x18,uVar2);
  local_98 = 0;
  uStack_90 = 0;
  uVar2 = FUN_147906f5e(param_2,*(undefined4 *)(param_1 + 0x5c));
  FUN_147906d38(param_1 + 0x28,uVar2);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c4ac0 FUN_1474c4ac0 body=256 status=ok
// SIG undefined FUN_1474c4ac0(void)

undefined8 FUN_1474c4ac0(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caaa0a8 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa0a8 = FUN_140002ddd(FUN_146330555,uVar2,L"AnimNode_BlendBoneByChannel");
  }
  local_48 = *(undefined8 *)(DAT_14caaa0a8 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474c4bc2 FUN_1474c4bc2 body=68 status=ok
// SIG undefined FUN_1474c4bc2(void)

void FUN_1474c4bc2(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1448d844e(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1405b2360(param_1,param_2);
  return;
}



// FUNCTION 1474c4c08 FUN_1474c4c08 body=440 status=ok
// SIG undefined FUN_1474c4c08(void)

void FUN_1474c4c08(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70;
  int local_68;
  void *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *(uint *)(param_1 + 4);
  iVar3 = (**(code **)(*param_1 + 0xf0))();
  (**(code **)(*param_1 + 0xf8))(param_1,&local_60,param_2);
  plVar4 = (longlong *)FUN_1457535d4(param_1);
  local_a0 = (double)*(float *)(*plVar4 + (longlong)iVar3 * 4);
  local_a8 = (double)(*(float *)(param_1[5] + 0x30 + (longlong)iVar3 * 0x40) * 100.0);
  FUN_140002266(&local_70,L"(Active: (%i/%i) Weight: %.1f%% Time %.3f)",iVar3 + 1,uVar1);
  iVar3 = local_68 + -1;
  if (local_68 == 0) {
    iVar3 = 0;
  }
  FUN_1400020e8(&local_60,local_70,iVar3);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  _Src = local_60;
  local_80 = (void *)0x0;
  local_78 = local_58;
  if ((longlong)local_58 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1446dd670(&local_80,local_58,0);
    memcpy(local_80,_Src,(longlong)local_58 * 2);
  }
  FUN_147906d4c(param_2,&local_80,0);
  if (0 < (int)uVar1) {
    lVar6 = 0;
    do {
      lVar2 = param_1[3];
      local_98 = 0;
      uStack_90 = 0;
      uVar5 = FUN_147906f5e(param_2,*(undefined4 *)(param_1[5] + 0x30 + lVar6 * 4),&local_98);
      FUN_147906d38(lVar2 + lVar6,uVar5);
      lVar6 = lVar6 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar6);
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c4dc2 FUN_1474c4dc2 body=392 status=ok
// SIG undefined FUN_1474c4dc2(void)

byte FUN_1474c4dc2(longlong param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa5bc) {
    FUN_144b3d300(&DAT_14caaa5bc);
    if (DAT_14caaa5bc == -1) {
      DAT_14caaa5b0 = 0;
      DAT_14caaa5b8 = -1;
      _Init_thread_footer(&DAT_14caaa5bc);
    }
  }
  if (DAT_14caaa5b8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa5c8) {
      FUN_144b3d300(&DAT_14caaa5c8);
      if (DAT_14caaa5c8 == -1) {
        FUN_1446ddc76(&DAT_14caaa5c0,"bActiveValue",1);
        _Init_thread_footer(&DAT_14caaa5c8);
      }
    }
    if (DAT_14caaa0f0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa0f0 = FUN_140002ddd(FUN_1463306b3,uVar2,L"AnimNode_BlendListByBool");
    }
    FUN_14094e66e(&local_28,DAT_14caaa5c0,param_1,DAT_14caaa0f0);
    DAT_14caaa5b0 = local_28;
    DAT_14caaa5b8 = local_20;
  }
  local_20 = DAT_14caaa5b8;
  local_28 = DAT_14caaa5b0;
  pbVar1 = (byte *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *pbVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c4f4c FUN_1474c4f4c body=49 status=ok
// SIG undefined FUN_1474c4f4c(void)

undefined4 FUN_1474c4f4c(undefined8 param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_1474c4f7e();
  plVar2 = (longlong *)FUN_1474c5112(param_1);
  uVar3 = 0;
  if ((int)((ulonglong)uVar1 & 0xff) < (int)plVar2[1]) {
    uVar3 = *(undefined4 *)(*plVar2 + ((ulonglong)uVar1 & 0xff) * 4);
  }
  return uVar3;
}



// FUNCTION 1474c4f7e FUN_1474c4f7e body=403 status=ok
// SIG undefined FUN_1474c4f7e(void)

undefined1 FUN_1474c4f7e(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa5fc) {
    FUN_144b3d300(&DAT_14caaa5fc);
    if (DAT_14caaa5fc == -1) {
      DAT_14caaa5f0 = 0;
      DAT_14caaa5f8 = -1;
      _Init_thread_footer(&DAT_14caaa5fc);
    }
  }
  if (DAT_14caaa5f8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa608) {
      FUN_144b3d300(&DAT_14caaa608);
      if (DAT_14caaa608 == -1) {
        FUN_1446ddc76(&DAT_14caaa600,"ActiveEnumValue",1);
        _Init_thread_footer(&DAT_14caaa608);
      }
    }
    if (DAT_14caaa108 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa108 = FUN_140002ddd(FUN_146330749,uVar2,L"AnimNode_BlendListByEnum");
    }
    FUN_14094e66e(&local_28,DAT_14caaa600,param_1,DAT_14caaa108);
    DAT_14caaa5f0 = local_28;
    DAT_14caaa5f8 = local_20;
  }
  local_20 = DAT_14caaa5f8;
  local_28 = DAT_14caaa5f0;
  puVar1 = (undefined1 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c5112 FUN_1474c5112 body=401 status=ok
// SIG undefined FUN_1474c5112(void)

void FUN_1474c5112(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa5dc) {
    FUN_144b3d300(&DAT_14caaa5dc);
    if (DAT_14caaa5dc == -1) {
      DAT_14caaa5d0 = 0;
      DAT_14caaa5d8 = -1;
      _Init_thread_footer(&DAT_14caaa5dc);
    }
  }
  if (DAT_14caaa5d8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa5e8) {
      FUN_144b3d300(&DAT_14caaa5e8);
      if (DAT_14caaa5e8 == -1) {
        FUN_1446ddc76(&DAT_14caaa5e0,"EnumToPoseIndex",1);
        _Init_thread_footer(&DAT_14caaa5e8);
      }
    }
    if (DAT_14caaa108 == 0) {
      uVar1 = FUN_140c6b56d();
      DAT_14caaa108 = FUN_140002ddd(FUN_146330749,uVar1,L"AnimNode_BlendListByEnum");
    }
    FUN_14094e66e(&local_28,DAT_14caaa5e0,param_1,DAT_14caaa108);
    DAT_14caaa5d0 = local_28;
    DAT_14caaa5d8 = local_20;
  }
  local_20 = DAT_14caaa5d8;
  local_28 = DAT_14caaa5d0;
  FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c52b2 FUN_1474c52b2 body=70 status=ok
// SIG undefined FUN_1474c52b2(void)

void FUN_1474c52b2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_14477dc2a();
  FUN_14477dadc(uVar1,param_2);
  fVar2 = *(float *)(param_1 + 0x78);
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x2c) = fVar2;
  FUN_14015e054(param_1,param_2);
  return;
}



// FUNCTION 1474c52f8 FUN_1474c52f8 body=352 status=ok
// SIG undefined FUN_1474c52f8(void)

void FUN_1474c52f8(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_a8 [40];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined2 *local_70;
  int local_68;
  longlong local_60;
  int local_58;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1474c545a(param_2,&local_50);
  lVar3 = (**(code **)(*param_1 + 0x198))(param_1);
  if (lVar3 != 0) {
    fVar1 = *(float *)((longlong)param_1 + 0x2c);
    local_60 = *(longlong *)(lVar3 + 0x18);
    FUN_1400021e4(&local_60,&local_70);
    puVar4 = local_70;
    if (local_68 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_60,L"(\'%s\' Play Time: %.3f)",puVar4,SUB84((double)fVar1,0));
    iVar2 = local_58 + -1;
    if (local_58 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(&local_50,local_60,iVar2);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    _Src = local_50;
    local_80 = (void *)0x0;
    local_78 = local_48;
    if ((longlong)local_48 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_48,0);
      memcpy(local_80,_Src,(longlong)local_48 * 2);
    }
    FUN_147906d4c(param_2,&local_80,1);
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474c545a FUN_1474c545a body=256 status=ok
// SIG undefined FUN_1474c545a(void)

undefined8 FUN_1474c545a(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caaa138 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa138 = FUN_140002ddd(FUN_146330875,uVar2,L"AnimNode_BlendSpaceEvaluator");
  }
  local_48 = *(undefined8 *)(DAT_14caaa138 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474c556e FUN_1474c556e body=65 status=ok
// SIG undefined FUN_1474c556e(void)

undefined8 * FUN_1474c556e(undefined8 *param_1)

{
  memset(param_1,0,0x98);
  FUN_141315ec0(param_1);
  *param_1 = &PTR_FUN_14a41fd10;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 1;
  return param_1;
}



// FUNCTION 1474c55b0 FUN_1474c55b0 body=73 status=ok
// SIG undefined FUN_1474c55b0(void)

void FUN_1474c55b0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_14477dc2a();
  FUN_14477dadc(uVar1,param_2);
  fVar2 = *(float *)(param_1 + 0x98);
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x2c) = fVar2;
  FUN_14015e054(param_1,param_2);
  return;
}



// FUNCTION 1474c55fa FUN_1474c55fa body=344 status=ok
// SIG undefined FUN_1474c55fa(void)

void FUN_1474c55fa(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_a8 [40];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined2 *local_70;
  int local_68;
  longlong local_60;
  int local_58;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1474c5754(param_2,&local_50);
  fVar1 = *(float *)((longlong)param_1 + 0x2c);
  lVar3 = (**(code **)(*param_1 + 0x198))(param_1);
  local_60 = *(longlong *)(lVar3 + 0x18);
  FUN_1400021e4(&local_60,&local_70);
  puVar4 = local_70;
  if (local_68 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_60,L"(\'%s\' Play Time: %.3f)",puVar4,SUB84((double)fVar1,0));
  iVar2 = local_58 + -1;
  if (local_58 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(&local_50,local_60,iVar2);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_50;
  local_80 = (void *)0x0;
  local_78 = local_48;
  if ((longlong)local_48 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1446dd670(&local_80,local_48,0);
    memcpy(local_80,_Src,(longlong)local_48 * 2);
  }
  FUN_147906d4c(param_2,&local_80,1);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474c5754 FUN_1474c5754 body=256 status=ok
// SIG undefined FUN_1474c5754(void)

undefined8 FUN_1474c5754(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caaa150 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa150 = FUN_140002ddd(FUN_14633090b,uVar2,L"AnimNode_BlendSpaceEvaluator_Standalone");
  }
  local_48 = *(undefined8 *)(DAT_14caaa150 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474c586c FUN_1474c586c body=312 status=ok
// SIG undefined FUN_1474c586c(void)

void FUN_1474c586c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  int local_50;
  longlong local_48;
  int local_40;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1474c59a6(param_2,&local_38);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_48 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18);
    FUN_1400021e4(&local_48,&local_58);
    puVar2 = local_58;
    if (local_50 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_48,L"(\'%s\')",puVar2);
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_38,local_48,iVar1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    _Src = local_38;
    local_68 = (void *)0x0;
    local_60 = local_30;
    if ((longlong)local_30 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_30,0);
      memcpy(local_68,_Src,(longlong)local_30 * 2);
    }
    FUN_147906d4c(param_2,&local_68,1);
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474c59a6 FUN_1474c59a6 body=256 status=ok
// SIG undefined FUN_1474c59a6(void)

undefined8 FUN_1474c59a6(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caaa168 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa168 = FUN_140002ddd(FUN_14632f29e,uVar2,L"AnimNode_BlendSpaceGraphBase");
  }
  local_48 = *(undefined8 *)(DAT_14caaa168 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474c5aa8 FUN_1474c5aa8 body=82 status=ok
// SIG undefined FUN_1474c5aa8(void)

void FUN_1474c5aa8(longlong param_1,double *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  if (0 < (int)uVar1) {
    uVar2 = 3;
    if (uVar1 < 3) {
      uVar2 = (ulonglong)uVar1;
    }
    lVar3 = 0;
    do {
      FUN_147903482(*(longlong *)(param_1 + 0x48) + lVar3,(float)*param_2);
      lVar3 = lVar3 + 0x38;
      param_2 = param_2 + 1;
    } while (uVar2 * 0x38 - lVar3 != 0);
  }
  return;
}



// FUNCTION 1474c5b60 FUN_1474c5b60 body=352 status=ok
// SIG undefined FUN_1474c5b60(void)

void FUN_1474c5b60(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_a8 [40];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined2 *local_70;
  int local_68;
  longlong local_60;
  int local_58;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1474c5cc2(param_2,&local_50);
  lVar3 = (**(code **)(*param_1 + 0x198))(param_1);
  if (lVar3 != 0) {
    fVar1 = *(float *)((longlong)param_1 + 0x2c);
    local_60 = *(longlong *)(lVar3 + 0x18);
    FUN_1400021e4(&local_60,&local_70);
    puVar4 = local_70;
    if (local_68 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_60,L"(\'%s\' Play Time: %.3f)",puVar4,SUB84((double)fVar1,0));
    iVar2 = local_58 + -1;
    if (local_58 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(&local_50,local_60,iVar2);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    _Src = local_50;
    local_80 = (void *)0x0;
    local_78 = local_48;
    if ((longlong)local_48 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_48,0);
      memcpy(local_80,_Src,(longlong)local_48 * 2);
    }
    FUN_147906d4c(param_2,&local_80,1);
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474c5cc2 FUN_1474c5cc2 body=256 status=ok
// SIG undefined FUN_1474c5cc2(void)

undefined8 FUN_1474c5cc2(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caaa180 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa180 = FUN_140002ddd(FUN_146330a39,uVar2,L"AnimNode_BlendSpacePlayerBase");
  }
  local_48 = *(undefined8 *)(DAT_14caaa180 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474c5dc4 FUN_1474c5dc4 body=82 status=ok
// SIG undefined FUN_1474c5dc4(void)

void FUN_1474c5dc4(longlong param_1,double *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (0 < (int)uVar1) {
    uVar2 = 3;
    if (uVar1 < 3) {
      uVar2 = (ulonglong)uVar1;
    }
    lVar3 = 0;
    do {
      FUN_147903482(*(longlong *)(param_1 + 0x40) + lVar3,(float)*param_2);
      lVar3 = lVar3 + 0x38;
      param_2 = param_2 + 1;
    } while (uVar2 * 0x38 - lVar3 != 0);
  }
  return;
}



// FUNCTION 1474c5e16 FUN_1474c5e16 body=403 status=ok
// SIG undefined FUN_1474c5e16(void)

undefined1 FUN_1474c5e16(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa69c) {
    FUN_144b3d300(&DAT_14caaa69c);
    if (DAT_14caaa69c == -1) {
      DAT_14caaa690 = 0;
      DAT_14caaa698 = -1;
      _Init_thread_footer(&DAT_14caaa69c);
    }
  }
  if (DAT_14caaa698 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa6a8) {
      FUN_144b3d300(&DAT_14caaa6a8);
      if (DAT_14caaa6a8 == -1) {
        FUN_1446ddc76(&DAT_14caaa6a0,"bIgnoreForRelevancyTest",1);
        _Init_thread_footer(&DAT_14caaa6a8);
      }
    }
    if (DAT_14caaa198 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa198 = FUN_140002ddd(FUN_146330390,uVar2,L"AnimNode_BlendSpacePlayer");
    }
    FUN_14094e66e(&local_28,DAT_14caaa6a0,param_1,DAT_14caaa198);
    DAT_14caaa690 = local_28;
    DAT_14caaa698 = local_20;
  }
  local_20 = DAT_14caaa698;
  local_28 = DAT_14caaa690;
  puVar1 = (undefined1 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c5faa FUN_1474c5faa body=420 status=ok
// SIG undefined FUN_1474c5faa(void)

bool FUN_1474c5faa(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa6bc) {
    FUN_144b3d300(&DAT_14caaa6bc);
    if (DAT_14caaa6bc == -1) {
      DAT_14caaa6b0 = 0;
      DAT_14caaa6b8 = -1;
      _Init_thread_footer(&DAT_14caaa6bc);
    }
  }
  if (DAT_14caaa6b8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa6c8) {
      FUN_144b3d300(&DAT_14caaa6c8);
      if (DAT_14caaa6c8 == -1) {
        FUN_1446ddc76(&DAT_14caaa6c0,"GroupName",1);
        _Init_thread_footer(&DAT_14caaa6c8);
      }
    }
    if (DAT_14caaa198 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa198 = FUN_140002ddd(FUN_146330390,uVar2,L"AnimNode_BlendSpacePlayer");
    }
    FUN_14094e66e(&local_30,DAT_14caaa6c0,param_1,DAT_14caaa198);
    DAT_14caaa6b0 = local_30;
    DAT_14caaa6b8 = local_28;
  }
  local_28 = DAT_14caaa6b8;
  local_30 = DAT_14caaa6b0;
  puVar1 = (undefined8 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1 != (undefined8 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c6150 FUN_1474c6150 body=419 status=ok
// SIG undefined FUN_1474c6150(void)

bool FUN_1474c6150(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa6dc) {
    FUN_144b3d300(&DAT_14caaa6dc);
    if (DAT_14caaa6dc == -1) {
      DAT_14caaa6d0 = 0;
      DAT_14caaa6d8 = -1;
      _Init_thread_footer(&DAT_14caaa6dc);
    }
  }
  if (DAT_14caaa6d8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa6e8) {
      FUN_144b3d300(&DAT_14caaa6e8);
      if (DAT_14caaa6e8 == -1) {
        FUN_1446ddc76(&DAT_14caaa6e0,"GroupRole",1);
        _Init_thread_footer(&DAT_14caaa6e8);
      }
    }
    if (DAT_14caaa198 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa198 = FUN_140002ddd(FUN_146330390,uVar2,L"AnimNode_BlendSpacePlayer");
    }
    FUN_14094e66e(&local_30,DAT_14caaa6e0,param_1,DAT_14caaa198);
    DAT_14caaa6d0 = local_30;
    DAT_14caaa6d8 = local_28;
  }
  local_28 = DAT_14caaa6d8;
  local_30 = DAT_14caaa6d0;
  puVar1 = (undefined1 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1 != (undefined1 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c62f4 FUN_1474c62f4 body=418 status=ok
// SIG undefined FUN_1474c62f4(void)

bool FUN_1474c62f4(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa6fc) {
    FUN_144b3d300(&DAT_14caaa6fc);
    if (DAT_14caaa6fc == -1) {
      DAT_14caaa6f0 = 0;
      DAT_14caaa6f8 = -1;
      _Init_thread_footer(&DAT_14caaa6fc);
    }
  }
  if (DAT_14caaa6f8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa708) {
      FUN_144b3d300(&DAT_14caaa708);
      if (DAT_14caaa708 == -1) {
        FUN_1446ddc76(&DAT_14caaa700,"Method",1);
        _Init_thread_footer(&DAT_14caaa708);
      }
    }
    if (DAT_14caaa198 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa198 = FUN_140002ddd(FUN_146330390,uVar2,L"AnimNode_BlendSpacePlayer");
    }
    FUN_14094e66e(&local_30,DAT_14caaa700,param_1,DAT_14caaa198);
    DAT_14caaa6f0 = local_30;
    DAT_14caaa6f8 = local_28;
  }
  local_28 = DAT_14caaa6f8;
  local_30 = DAT_14caaa6f0;
  puVar1 = (undefined1 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1 != (undefined1 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


