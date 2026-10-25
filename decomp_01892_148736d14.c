// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148736d14 FUN_148736d14 body=116 status=ok
// SIG undefined FUN_148736d14(void)

longlong FUN_148736d14(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 8);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 8) = lVar2;
  puVar3 = (undefined8 *)(param_2 + 0x10);
  puVar4 = (undefined8 *)(param_1 + 0x10);
  for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  lVar2 = *(longlong *)(param_2 + 0x68);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x68);
    }
  }
  *(longlong *)(param_1 + 0x68) = lVar2;
  return param_1;
}



// FUNCTION 148736e2a FUN_148736e2a body=54 status=ok
// SIG undefined FUN_148736e2a(void)

undefined1 FUN_148736e2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148736fa0(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148736e88 FUN_148736e88 body=59 status=ok
// SIG undefined FUN_148736e88(void)

undefined8 FUN_148736e88(longlong *param_1)

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



// FUNCTION 148736ece FUN_148736ece body=32 status=ok
// SIG undefined FUN_148736ece(void)

void FUN_148736ece(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148736f3c FUN_148736f3c body=43 status=ok
// SIG undefined FUN_148736f3c(void)

undefined8 FUN_148736f3c(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 148736f68 FUN_148736f68 body=55 status=ok
// SIG undefined FUN_148736f68(void)

void FUN_148736f68(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67010 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67010 =
         FUN_140002ddd(FUN_146513f85,uVar1,
                       L"GbxStatusEffectPresentationGraphNodeSettings_Effect_Trick");
  }
  return;
}



// FUNCTION 148736fa0 FUN_148736fa0 body=86 status=ok
// SIG undefined FUN_148736fa0(void)

longlong FUN_148736fa0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  lVar8 = *(longlong *)(param_2 + 0x38);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x38);
    }
  }
  *(longlong *)(param_1 + 0x38) = lVar8;
  return param_1;
}



// FUNCTION 148737096 FUN_148737096 body=125 status=ok
// SIG undefined FUN_148737096(void)

undefined1 FUN_148737096(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + lVar10;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      FUN_1470d00c2();
      FUN_144a7bb84(param_2 + lVar10 + 0x38,param_3 + lVar10 + 0x38);
      FUN_144a7bb84(param_2 + lVar10 + 0x50,param_3 + lVar10 + 0x50);
      lVar10 = lVar10 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873713c FUN_14873713c body=59 status=ok
// SIG undefined FUN_14873713c(void)

undefined8 FUN_14873713c(longlong *param_1)

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



// FUNCTION 148737182 FUN_148737182 body=32 status=ok
// SIG undefined FUN_148737182(void)

void FUN_148737182(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148737294 FUN_148737294 body=78 status=ok
// SIG undefined FUN_148737294(void)

undefined1 FUN_148737294(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873730a FUN_14873730a body=59 status=ok
// SIG undefined FUN_14873730a(void)

undefined8 FUN_14873730a(longlong *param_1)

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



// FUNCTION 148737350 FUN_148737350 body=32 status=ok
// SIG undefined FUN_148737350(void)

void FUN_148737350(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14873746a FUN_14873746a body=86 status=ok
// SIG undefined FUN_14873746a(void)

undefined1 FUN_14873746a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      uVar8 = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar8;
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487374e8 FUN_1487374e8 body=59 status=ok
// SIG undefined FUN_1487374e8(void)

undefined8 FUN_1487374e8(longlong *param_1)

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



// FUNCTION 14873752e FUN_14873752e body=32 status=ok
// SIG undefined FUN_14873752e(void)

void FUN_14873752e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14873759c FUN_14873759c body=43 status=ok
// SIG undefined FUN_14873759c(void)

undefined8 FUN_14873759c(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1487375c8 FUN_1487375c8 body=55 status=ok
// SIG undefined FUN_1487375c8(void)

void FUN_1487375c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67060 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67060 =
         FUN_140002ddd(FUN_146514149,uVar1,
                       L"GbxStatusEffectPresentationGraphNodeSettings_ChildEffect");
  }
  return;
}



// FUNCTION 14873764e FUN_14873764e body=100 status=ok
// SIG undefined FUN_14873764e(void)

undefined1 FUN_14873764e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1401f3db8(param_2,param_3);
    FUN_148737790(param_2 + 0x18,param_3 + 0x18);
    FUN_1487377f0(param_2 + 0x28,param_3 + 0x28);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 1487376da FUN_1487376da body=59 status=ok
// SIG undefined FUN_1487376da(void)

undefined8 FUN_1487376da(longlong *param_1)

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



// FUNCTION 148737720 FUN_148737720 body=34 status=ok
// SIG undefined FUN_148737720(void)

void FUN_148737720(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14587e66a(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148737790 FUN_148737790 body=95 status=ok
// SIG undefined FUN_148737790(void)

undefined8 * FUN_148737790(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14587e722(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148737850(param_1,iVar1);
      FUN_1487378c3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487377f0 FUN_1487377f0 body=95 status=ok
// SIG undefined FUN_1487377f0(void)

undefined8 * FUN_1487377f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14587e6d9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487378f8(param_1,iVar1);
      FUN_14873796b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148737850 FUN_148737850 body=115 status=ok
// SIG undefined FUN_148737850(void)

void FUN_148737850(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1487378c3 FUN_1487378c3 body=52 status=ok
// SIG undefined FUN_1487378c3(void)

void FUN_1487378c3(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1487378f8 FUN_1487378f8 body=115 status=ok
// SIG undefined FUN_1487378f8(void)

void FUN_1487378f8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14873796b FUN_14873796b body=52 status=ok
// SIG undefined FUN_14873796b(void)

void FUN_14873796b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148737a58 FUN_148737a58 body=125 status=ok
// SIG undefined FUN_148737a58(void)

undefined1 FUN_148737a58(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + lVar10;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      FUN_1470d00c2();
      FUN_1401f3db8(param_2 + lVar10 + 0x38,param_3 + lVar10 + 0x38);
      FUN_148737c4e(param_2 + lVar10 + 0x50,param_3 + lVar10 + 0x50);
      lVar10 = lVar10 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148737afe FUN_148737afe body=59 status=ok
// SIG undefined FUN_148737afe(void)

undefined8 FUN_148737afe(longlong *param_1)

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



// FUNCTION 148737b44 FUN_148737b44 body=34 status=ok
// SIG undefined FUN_148737b44(void)

void FUN_148737b44(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_14587e5dc(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148737bb4 FUN_148737bb4 body=43 status=ok
// SIG undefined FUN_148737bb4(void)

undefined8 FUN_148737bb4(undefined8 param_1,int param_2)

{
  FUN_14587e5dc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 148737be0 FUN_148737be0 body=55 status=ok
// SIG undefined FUN_148737be0(void)

void FUN_148737be0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67090 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67090 =
         FUN_140002ddd(FUN_14651429c,uVar1,L"GbxStatusEffectPresentationGraphNodeSettings_Driver");
  }
  return;
}



// FUNCTION 148737c18 FUN_148737c18 body=54 status=ok
// SIG undefined FUN_148737c18(void)

undefined8 * FUN_148737c18(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/Presentation/GbxStatusEffectPresentationGraphNodeSettings_Drivers.h"
                ,0x33,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectPresentationGraphNodeSettings_Driver::InnerCreateDriver");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148737c4e FUN_148737c4e body=95 status=ok
// SIG undefined FUN_148737c4e(void)

undefined8 * FUN_148737c4e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14587e641(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148737cae(param_1,iVar1);
      FUN_148737d1d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148737cae FUN_148737cae body=111 status=ok
// SIG undefined FUN_148737cae(void)

void FUN_148737cae(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148737d1d FUN_148737d1d body=52 status=ok
// SIG undefined FUN_148737d1d(void)

void FUN_148737d1d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148737d52(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 148737d52 FUN_148737d52 body=161 status=ok
// SIG undefined FUN_148737d52(void)

longlong FUN_148737d52(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_1401f3da4();
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_148737850((undefined8 *)(param_1 + 0x18),iVar1,0);
    FUN_1487378c3(*(undefined8 *)(param_1 + 0x18),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(int *)(param_1 + 0x30) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    FUN_1487378f8((undefined8 *)(param_1 + 0x28),iVar1,0);
    FUN_14873796b(*(undefined8 *)(param_1 + 0x28),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148737e88 FUN_148737e88 body=125 status=ok
// SIG undefined FUN_148737e88(void)

undefined1 FUN_148737e88(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + lVar10;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      FUN_1470d00c2();
      FUN_1401f3db8(param_2 + lVar10 + 0x38,param_3 + lVar10 + 0x38);
      FUN_148737c4e(param_2 + lVar10 + 0x50,param_3 + lVar10 + 0x50);
      lVar10 = lVar10 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148737f2e FUN_148737f2e body=59 status=ok
// SIG undefined FUN_148737f2e(void)

undefined8 FUN_148737f2e(longlong *param_1)

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



// FUNCTION 148737f74 FUN_148737f74 body=34 status=ok
// SIG undefined FUN_148737f74(void)

void FUN_148737f74(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_14587e5dc(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148738082 FUN_148738082 body=149 status=ok
// SIG undefined FUN_148738082(void)

undefined1 FUN_148738082(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      lVar1 = param_3 + lVar11;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + lVar11;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      FUN_1470d00c2();
      FUN_1401f3db8(param_2 + lVar11 + 0x38,param_3 + lVar11 + 0x38);
      lVar1 = param_2 + lVar11;
      lVar2 = param_3 + lVar11;
      FUN_148737c4e(lVar1 + 0x50,lVar2 + 0x50);
      uVar10 = *(undefined8 *)(lVar2 + 0x68);
      *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(lVar2 + 0x60);
      *(undefined8 *)(lVar1 + 0x68) = uVar10;
      lVar11 = lVar11 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148738140 FUN_148738140 body=59 status=ok
// SIG undefined FUN_148738140(void)

undefined8 FUN_148738140(longlong *param_1)

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



// FUNCTION 148738186 FUN_148738186 body=34 status=ok
// SIG undefined FUN_148738186(void)

void FUN_148738186(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_14587e5dc(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14873829a FUN_14873829a body=78 status=ok
// SIG undefined FUN_14873829a(void)

undefined1 FUN_14873829a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148738310 FUN_148738310 body=59 status=ok
// SIG undefined FUN_148738310(void)

undefined8 FUN_148738310(longlong *param_1)

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



// FUNCTION 148738356 FUN_148738356 body=32 status=ok
// SIG undefined FUN_148738356(void)

void FUN_148738356(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148738468 FUN_148738468 body=78 status=ok
// SIG undefined FUN_148738468(void)

undefined1 FUN_148738468(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487384de FUN_1487384de body=59 status=ok
// SIG undefined FUN_1487384de(void)

undefined8 FUN_1487384de(longlong *param_1)

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



// FUNCTION 148738524 FUN_148738524 body=32 status=ok
// SIG undefined FUN_148738524(void)

void FUN_148738524(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148738592 FUN_148738592 body=43 status=ok
// SIG undefined FUN_148738592(void)

undefined8 FUN_148738592(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1487385be FUN_1487385be body=55 status=ok
// SIG undefined FUN_1487385be(void)

void FUN_1487385be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb670f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb670f0 =
         FUN_140002ddd(FUN_1465144bf,uVar1,L"GbxStatusEffectPresentationGraphNodeSettings_Flow");
  }
  return;
}



// FUNCTION 14873867c FUN_14873867c body=78 status=ok
// SIG undefined FUN_14873867c(void)

undefined1 FUN_14873867c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487386f2 FUN_1487386f2 body=59 status=ok
// SIG undefined FUN_1487386f2(void)

undefined8 FUN_1487386f2(longlong *param_1)

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



// FUNCTION 148738738 FUN_148738738 body=32 status=ok
// SIG undefined FUN_148738738(void)

void FUN_148738738(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148738810 FUN_148738810 body=59 status=ok
// SIG undefined FUN_148738810(void)

undefined8 FUN_148738810(longlong *param_1)

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



// FUNCTION 1487388b0 FUN_1487388b0 body=34 status=ok
// SIG undefined FUN_1487388b0(void)

undefined8 FUN_1487388b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1487388d2 FUN_1487388d2 body=55 status=ok
// SIG undefined FUN_1487388d2(void)

void FUN_1487388d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67120 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67120 = FUN_140002ddd(FUN_1465142cb,uVar1,L"GbxStatusEffectPresentationSeverityRate");
  }
  return;
}



// FUNCTION 14873890a FUN_14873890a body=43 status=ok
// SIG undefined FUN_14873890a(void)

undefined8 FUN_14873890a(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\StatusEffects/Presentation/GbxStatusEffectPresentationTypes.h"
                ,0x11d,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectPresentationSeverityRate::GetRate");
  return 0;
}



// FUNCTION 1487389d0 FUN_1487389d0 body=59 status=ok
// SIG undefined FUN_1487389d0(void)

undefined8 FUN_1487389d0(longlong *param_1)

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



// FUNCTION 148738a70 FUN_148738a70 body=36 status=ok
// SIG undefined FUN_148738a70(void)

undefined8 FUN_148738a70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 148738ace FUN_148738ace body=70 status=ok
// SIG undefined FUN_148738ace(void)

undefined1 FUN_148738ace(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14115e0ba(param_2,param_3);
      param_3 = param_3 + 0x90;
      param_2 = param_2 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148738b3c FUN_148738b3c body=59 status=ok
// SIG undefined FUN_148738b3c(void)

undefined8 FUN_148738b3c(longlong *param_1)

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



// FUNCTION 148738b88 FUN_148738b88 body=40 status=ok
// SIG undefined FUN_148738b88(void)

void FUN_148738b88(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_145fd280a(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 148738bfe FUN_148738bfe body=57 status=ok
// SIG undefined FUN_148738bfe(void)

void FUN_148738bfe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67150 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67150 =
         FUN_140002ddd(FUN_1465146b3,uVar1,L"GbxStatusEffectPresentationSeverityRate_Dynamic");
  }
  return;
}



// FUNCTION 148738ca0 FUN_148738ca0 body=59 status=ok
// SIG undefined FUN_148738ca0(void)

undefined8 FUN_148738ca0(longlong *param_1)

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



// FUNCTION 148738d40 FUN_148738d40 body=34 status=ok
// SIG undefined FUN_148738d40(void)

undefined8 FUN_148738d40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 148738d62 FUN_148738d62 body=55 status=ok
// SIG undefined FUN_148738d62(void)

void FUN_148738d62(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67168 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67168 = FUN_140002ddd(FUN_14651423d,uVar1,L"SEPEventTrigger");
  }
  return;
}



// FUNCTION 148738d9a FUN_148738d9a body=42 status=ok
// SIG undefined FUN_148738d9a(void)

undefined8 FUN_148738d9a(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\StatusEffects/Presentation/GbxStatusEffectPresentationTypes.h"
                ,0x156,L"Pure virtual not implemented (%s)",L"FSEPEventTrigger::Eval");
  return 0;
}



// FUNCTION 148738e2e FUN_148738e2e body=59 status=ok
// SIG undefined FUN_148738e2e(void)

undefined8 FUN_148738e2e(longlong *param_1)

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



// FUNCTION 148738f38 FUN_148738f38 body=59 status=ok
// SIG undefined FUN_148738f38(void)

undefined8 FUN_148738f38(longlong *param_1)

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



// FUNCTION 148738fd8 FUN_148738fd8 body=34 status=ok
// SIG undefined FUN_148738fd8(void)

undefined8 FUN_148738fd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 148738ffa FUN_148738ffa body=55 status=ok
// SIG undefined FUN_148738ffa(void)

void FUN_148738ffa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67198 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67198 = FUN_140002ddd(FUN_14651420e,uVar1,L"SEPEventPolicy");
  }
  return;
}



// FUNCTION 148739032 FUN_148739032 body=42 status=ok
// SIG undefined FUN_148739032(void)

undefined8 FUN_148739032(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\StatusEffects/Presentation/GbxStatusEffectPresentationTypes.h"
                ,0x182,L"Pure virtual not implemented (%s)",L"FSEPEventPolicy::Eval");
  return 0;
}



// FUNCTION 1487390ee FUN_1487390ee body=59 status=ok
// SIG undefined FUN_1487390ee(void)

undefined8 FUN_1487390ee(longlong *param_1)

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



// FUNCTION 14873918e FUN_14873918e body=36 status=ok
// SIG undefined FUN_14873918e(void)

undefined8 FUN_14873918e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14873924a FUN_14873924a body=59 status=ok
// SIG undefined FUN_14873924a(void)

undefined8 FUN_14873924a(longlong *param_1)

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



// FUNCTION 1487392ea FUN_1487392ea body=36 status=ok
// SIG undefined FUN_1487392ea(void)

undefined8 FUN_1487392ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 148739350 FUN_148739350 body=62 status=ok
// SIG undefined FUN_148739350(void)

undefined1 FUN_148739350(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_141289ada(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487393b6 FUN_1487393b6 body=59 status=ok
// SIG undefined FUN_1487393b6(void)

undefined8 FUN_1487393b6(longlong *param_1)

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



// FUNCTION 1487393fc FUN_1487393fc body=43 status=ok
// SIG undefined FUN_1487393fc(void)

void FUN_1487393fc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148739470 FUN_148739470 body=28 status=ok
// SIG undefined FUN_148739470(void)

undefined8 FUN_148739470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1487394e2 FUN_1487394e2 body=75 status=ok
// SIG undefined FUN_1487394e2(void)

undefined8 FUN_1487394e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_144983130();
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148739556 FUN_148739556 body=59 status=ok
// SIG undefined FUN_148739556(void)

undefined8 FUN_148739556(longlong *param_1)

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



// FUNCTION 14873959c FUN_14873959c body=33 status=ok
// SIG undefined FUN_14873959c(void)

void FUN_14873959c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_144a2da94(param_2 + 8);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148739654 FUN_148739654 body=59 status=ok
// SIG undefined FUN_148739654(void)

undefined8 FUN_148739654(longlong *param_1)

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



// FUNCTION 1487396f2 FUN_1487396f2 body=48 status=ok
// SIG undefined FUN_1487396f2(void)

void FUN_1487396f2(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_140ee7917(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1487397b4 FUN_1487397b4 body=59 status=ok
// SIG undefined FUN_1487397b4(void)

undefined8 FUN_1487397b4(longlong *param_1)

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



// FUNCTION 148739854 FUN_148739854 body=34 status=ok
// SIG undefined FUN_148739854(void)

undefined8 FUN_148739854(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 148739876 FUN_148739876 body=55 status=ok
// SIG undefined FUN_148739876(void)

void FUN_148739876(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67228 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67228 = FUN_140002ddd(FUN_146514b3d,uVar1,L"GbxStatusEffectQuery");
  }
  return;
}



// FUNCTION 1487398ae FUN_1487398ae body=69 status=ok
// SIG undefined FUN_1487398ae(void)

undefined8 * FUN_1487398ae(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectQuerySpec.h"
                ,0x2c,L"Pure virtual not implemented (%s)",L"FGbxStatusEffectQuery::ExecuteInner");
  *param_2 = 0;
  *(undefined2 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  return param_2;
}



// FUNCTION 148739986 FUN_148739986 body=59 status=ok
// SIG undefined FUN_148739986(void)

undefined8 FUN_148739986(longlong *param_1)

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



// FUNCTION 148739a26 FUN_148739a26 body=36 status=ok
// SIG undefined FUN_148739a26(void)

undefined8 FUN_148739a26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 148739ade FUN_148739ade body=59 status=ok
// SIG undefined FUN_148739ade(void)

undefined8 FUN_148739ade(longlong *param_1)

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



// FUNCTION 148739b7e FUN_148739b7e body=36 status=ok
// SIG undefined FUN_148739b7e(void)

undefined8 FUN_148739b7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 148739c36 FUN_148739c36 body=59 status=ok
// SIG undefined FUN_148739c36(void)

undefined8 FUN_148739c36(longlong *param_1)

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



// FUNCTION 148739cd6 FUN_148739cd6 body=34 status=ok
// SIG undefined FUN_148739cd6(void)

undefined8 FUN_148739cd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 148739cf8 FUN_148739cf8 body=55 status=ok
// SIG undefined FUN_148739cf8(void)

void FUN_148739cf8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67288 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67288 = FUN_140002ddd(FUN_146514d5f,uVar1,L"GbxStatusEffectQuery_TimeRemaining");
  }
  return;
}



// FUNCTION 148739db0 FUN_148739db0 body=59 status=ok
// SIG undefined FUN_148739db0(void)

undefined8 FUN_148739db0(longlong *param_1)

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



// FUNCTION 148739eba FUN_148739eba body=59 status=ok
// SIG undefined FUN_148739eba(void)

undefined8 FUN_148739eba(longlong *param_1)

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



// FUNCTION 148739f5a FUN_148739f5a body=34 status=ok
// SIG undefined FUN_148739f5a(void)

undefined8 FUN_148739f5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 148739f7c FUN_148739f7c body=55 status=ok
// SIG undefined FUN_148739f7c(void)

void FUN_148739f7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb672b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb672b8 = FUN_140002ddd(FUN_146514e8b,uVar1,L"GbxStatusEffectRuleBaseData");
  }
  return;
}



// FUNCTION 148739fb4 FUN_148739fb4 body=42 status=ok
// SIG undefined FUN_148739fb4(void)

undefined8 FUN_148739fb4(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectRule.h"
                ,0x1e,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectRuleBaseData::CanPushSpec");
  return 0;
}



// FUNCTION 148739fde FUN_148739fde body=32 status=ok
// SIG undefined FUN_148739fde(void)

undefined8 FUN_148739fde(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"RuleBase");
  return param_2;
}



// FUNCTION 148739ffe FUN_148739ffe body=41 status=ok
// SIG undefined FUN_148739ffe(void)

void FUN_148739ffe(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectRule.h"
                ,0x20,L"Pure virtual not implemented (%s)",L"FGbxStatusEffectRuleBaseData::ApplyTo")
  ;
  return;
}



// FUNCTION 14873a028 FUN_14873a028 body=41 status=ok
// SIG undefined FUN_14873a028(void)

void FUN_14873a028(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectRule.h"
                ,0x21,L"Pure virtual not implemented (%s)",L"FGbxStatusEffectRuleBaseData::ApplyTo")
  ;
  return;
}



// FUNCTION 14873a0ba FUN_14873a0ba body=59 status=ok
// SIG undefined FUN_14873a0ba(void)

undefined8 FUN_14873a0ba(longlong *param_1)

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



// FUNCTION 14873a15a FUN_14873a15a body=34 status=ok
// SIG undefined FUN_14873a15a(void)

undefined8 FUN_14873a15a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14873a17c FUN_14873a17c body=55 status=ok
// SIG undefined FUN_14873a17c(void)

void FUN_14873a17c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb672d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb672d0 = FUN_140002ddd(FUN_146514f21,uVar1,L"GbxStatusEffectRuleData");
  }
  return;
}



// FUNCTION 14873a208 FUN_14873a208 body=75 status=ok
// SIG undefined FUN_14873a208(void)

undefined1 FUN_14873a208(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873a27c FUN_14873a27c body=59 status=ok
// SIG undefined FUN_14873a27c(void)

undefined8 FUN_14873a27c(longlong *param_1)

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



// FUNCTION 14873a2c2 FUN_14873a2c2 body=34 status=ok
// SIG undefined FUN_14873a2c2(void)

void FUN_14873a2c2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_145841298(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14873a336 FUN_14873a336 body=57 status=ok
// SIG undefined FUN_14873a336(void)

void FUN_14873a336(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb672e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb672e8 = FUN_140002ddd(FUN_146514f82,uVar1,L"GbxStatusEffectRuleDef");
  }
  return;
}



// FUNCTION 14873a370 FUN_14873a370 body=104 status=ok
// SIG undefined FUN_14873a370(void)

undefined8 FUN_14873a370(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_14899e32a(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873a3da FUN_14873a3da body=28 status=ok
// SIG undefined FUN_14873a3da(void)

undefined8 FUN_14873a3da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14873a460 FUN_14873a460 body=62 status=ok
// SIG undefined FUN_14873a460(void)

undefined1 FUN_14873a460(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14873a5c0(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873a4c6 FUN_14873a4c6 body=59 status=ok
// SIG undefined FUN_14873a4c6(void)

undefined8 FUN_14873a4c6(longlong *param_1)

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



// FUNCTION 14873a566 FUN_14873a566 body=34 status=ok
// SIG undefined FUN_14873a566(void)

undefined8 FUN_14873a566(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14873a588 FUN_14873a588 body=55 status=ok
// SIG undefined FUN_14873a588(void)

void FUN_14873a588(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67300 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67300 = FUN_140002ddd(FUN_146515019,uVar1,L"GbxStatusEffectRuleData_Def");
  }
  return;
}



// FUNCTION 14873a5c0 FUN_14873a5c0 body=84 status=ok
// SIG undefined FUN_14873a5c0(void)

longlong * FUN_14873a5c0(longlong *param_1,longlong *param_2)

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



// FUNCTION 14873a67e FUN_14873a67e body=59 status=ok
// SIG undefined FUN_14873a67e(void)

undefined8 FUN_14873a67e(longlong *param_1)

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



// FUNCTION 14873a71e FUN_14873a71e body=34 status=ok
// SIG undefined FUN_14873a71e(void)

undefined8 FUN_14873a71e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14873a740 FUN_14873a740 body=55 status=ok
// SIG undefined FUN_14873a740(void)

void FUN_14873a740(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67318 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67318 = FUN_140002ddd(FUN_1465150af,uVar1,L"GbxStatusEffectRuleImmunityData");
  }
  return;
}



// FUNCTION 14873a778 FUN_14873a778 body=42 status=ok
// SIG undefined FUN_14873a778(void)

undefined8 FUN_14873a778(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/Rules/Immunity/GbxStatusEffectRule_Immunity.h"
                ,0x16,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectRuleImmunityData::IsImmuneTo");
  return 0;
}



// FUNCTION 14873a7a2 FUN_14873a7a2 body=63 status=ok
// SIG undefined FUN_14873a7a2(void)

undefined8 FUN_14873a7a2(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/Rules/Immunity/GbxStatusEffectRule_Immunity.h"
                ,0x17,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectRuleImmunityData::GetReadableDescription");
  FUN_140056680(param_2,L"INVALID");
  return param_2;
}



// FUNCTION 14873a7e2 FUN_14873a7e2 body=41 status=ok
// SIG undefined FUN_14873a7e2(void)

void FUN_14873a7e2(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/Rules/Immunity/GbxStatusEffectRule_Immunity.h"
                ,0x18,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectRuleImmunityData::Enforce");
  return;
}



// FUNCTION 14873a874 FUN_14873a874 body=59 status=ok
// SIG undefined FUN_14873a874(void)

undefined8 FUN_14873a874(longlong *param_1)

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



// FUNCTION 14873a914 FUN_14873a914 body=34 status=ok
// SIG undefined FUN_14873a914(void)

undefined8 FUN_14873a914(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14873a936 FUN_14873a936 body=55 status=ok
// SIG undefined FUN_14873a936(void)

void FUN_14873a936(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67330 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67330 = FUN_140002ddd(FUN_146515147,uVar1,L"GbxStatusEffectRuleImmunityData_Full");
  }
  return;
}



// FUNCTION 14873a96e FUN_14873a96e body=32 status=ok
// SIG undefined FUN_14873a96e(void)

undefined8 FUN_14873a96e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149e19f3a);
  return param_2;
}



// FUNCTION 14873a9cc FUN_14873a9cc body=62 status=ok
// SIG undefined FUN_14873a9cc(void)

undefined1 FUN_14873a9cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_140c19bee(param_2,param_3);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873aa32 FUN_14873aa32 body=59 status=ok
// SIG undefined FUN_14873aa32(void)

undefined8 FUN_14873aa32(longlong *param_1)

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



// FUNCTION 14873aa78 FUN_14873aa78 body=43 status=ok
// SIG undefined FUN_14873aa78(void)

void FUN_14873aa78(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14b29c180;
    FUN_1412dafa6(param_2 + 1);
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 14873aae6 FUN_14873aae6 body=57 status=ok
// SIG undefined FUN_14873aae6(void)

void FUN_14873aae6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67348 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67348 = FUN_140002ddd(FUN_1465151dd,uVar1,L"GbxStatusEffectRuleImmunityData_Tag");
  }
  return;
}



// FUNCTION 14873ab48 FUN_14873ab48 body=62 status=ok
// SIG undefined FUN_14873ab48(void)

undefined1 FUN_14873ab48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14873ac92(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873abae FUN_14873abae body=59 status=ok
// SIG undefined FUN_14873abae(void)

undefined8 FUN_14873abae(longlong *param_1)

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



// FUNCTION 14873abf4 FUN_14873abf4 body=32 status=ok
// SIG undefined FUN_14873abf4(void)

void FUN_14873abf4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_14585ccae(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14873ac56 FUN_14873ac56 body=57 status=ok
// SIG undefined FUN_14873ac56(void)

void FUN_14873ac56(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67360 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67360 = FUN_140002ddd(FUN_146515273,uVar1,L"GbxStatusEffectRuleData_Immunity");
  }
  return;
}



// FUNCTION 14873ac92 FUN_14873ac92 body=93 status=ok
// SIG undefined FUN_14873ac92(void)

undefined8 * FUN_14873ac92(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ee73f4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14873acf0(param_1,iVar1);
      FUN_14873ad63(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14873acf0 FUN_14873acf0 body=115 status=ok
// SIG undefined FUN_14873acf0(void)

void FUN_14873acf0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14873ad63 FUN_14873ad63 body=52 status=ok
// SIG undefined FUN_14873ad63(void)

void FUN_14873ad63(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14873ae00 FUN_14873ae00 body=59 status=ok
// SIG undefined FUN_14873ae00(void)

undefined8 FUN_14873ae00(longlong *param_1)

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



// FUNCTION 14873aea0 FUN_14873aea0 body=34 status=ok
// SIG undefined FUN_14873aea0(void)

undefined8 FUN_14873aea0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14873aec2 FUN_14873aec2 body=55 status=ok
// SIG undefined FUN_14873aec2(void)

void FUN_14873aec2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67378 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67378 = FUN_140002ddd(FUN_14651530b,uVar1,L"GbxStatusEffectRuleMoratoriumData");
  }
  return;
}



// FUNCTION 14873aefa FUN_14873aefa body=42 status=ok
// SIG undefined FUN_14873aefa(void)

undefined8 FUN_14873aefa(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/Rules/Moratorium/GbxStatusEffectRule_Moratorium.h"
                ,0x16,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectRuleMoratoriumData::IsInMoratorium");
  return 0;
}



// FUNCTION 14873af24 FUN_14873af24 body=63 status=ok
// SIG undefined FUN_14873af24(void)

undefined8 FUN_14873af24(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/Rules/Moratorium/GbxStatusEffectRule_Moratorium.h"
                ,0x17,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectRuleMoratoriumData::GetReadableDescription");
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 14873afcc FUN_14873afcc body=59 status=ok
// SIG undefined FUN_14873afcc(void)

undefined8 FUN_14873afcc(longlong *param_1)

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



// FUNCTION 14873b06c FUN_14873b06c body=34 status=ok
// SIG undefined FUN_14873b06c(void)

undefined8 FUN_14873b06c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14873b08e FUN_14873b08e body=55 status=ok
// SIG undefined FUN_14873b08e(void)

void FUN_14873b08e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67390 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67390 = FUN_140002ddd(FUN_1465153a3,uVar1,L"GbxStatusEffectRuleMoratoriumData_Full");
  }
  return;
}



// FUNCTION 14873b0c6 FUN_14873b0c6 body=32 status=ok
// SIG undefined FUN_14873b0c6(void)

undefined8 FUN_14873b0c6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149e3aa3e);
  return param_2;
}



// FUNCTION 14873b158 FUN_14873b158 body=62 status=ok
// SIG undefined FUN_14873b158(void)

undefined1 FUN_14873b158(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_140c19bee(param_2,param_3);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873b1be FUN_14873b1be body=59 status=ok
// SIG undefined FUN_14873b1be(void)

undefined8 FUN_14873b1be(longlong *param_1)

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



// FUNCTION 14873b204 FUN_14873b204 body=43 status=ok
// SIG undefined FUN_14873b204(void)

void FUN_14873b204(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14b29c8f0;
    FUN_1412dafa6(param_2 + 1);
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 14873b27e FUN_14873b27e body=57 status=ok
// SIG undefined FUN_14873b27e(void)

undefined8 * FUN_14873b27e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b29c8f0;
  FUN_1412dafa6(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14873b2b8 FUN_14873b2b8 body=55 status=ok
// SIG undefined FUN_14873b2b8(void)

void FUN_14873b2b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb673a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb673a8 = FUN_140002ddd(FUN_146515439,uVar1,L"GbxStatusEffectRuleMoratoriumData_Tag");
  }
  return;
}



// FUNCTION 14873b2f0 FUN_14873b2f0 body=32 status=ok
// SIG undefined FUN_14873b2f0(void)

undefined8 FUN_14873b2f0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Tags");
  return param_2;
}



// FUNCTION 14873b35a FUN_14873b35a body=62 status=ok
// SIG undefined FUN_14873b35a(void)

undefined1 FUN_14873b35a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14873b560(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873b3c0 FUN_14873b3c0 body=59 status=ok
// SIG undefined FUN_14873b3c0(void)

undefined8 FUN_14873b3c0(longlong *param_1)

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



// FUNCTION 14873b406 FUN_14873b406 body=34 status=ok
// SIG undefined FUN_14873b406(void)

void FUN_14873b406(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_14873b4de(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14873b476 FUN_14873b476 body=43 status=ok
// SIG undefined FUN_14873b476(void)

undefined8 FUN_14873b476(undefined8 param_1,int param_2)

{
  FUN_14873b4de();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14873b4a2 FUN_14873b4a2 body=55 status=ok
// SIG undefined FUN_14873b4a2(void)

void FUN_14873b4a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb673c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb673c0 = FUN_140002ddd(FUN_1465154cf,uVar1,L"GbxStatusEffectRuleData_Moratorium");
  }
  return;
}



// FUNCTION 14873b4de FUN_14873b4de body=56 status=ok
// SIG undefined FUN_14873b4de(void)

void FUN_14873b4de(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b29ca70;
  FUN_14873b516(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14873b516 FUN_14873b516 body=73 status=ok
// SIG undefined FUN_14873b516(void)

void FUN_14873b516(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14873b560 FUN_14873b560 body=95 status=ok
// SIG undefined FUN_14873b560(void)

undefined8 * FUN_14873b560(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14873b516(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14873b5c0(param_1,iVar1);
      FUN_14873b633(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14873b5c0 FUN_14873b5c0 body=115 status=ok
// SIG undefined FUN_14873b5c0(void)

void FUN_14873b5c0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14873b633 FUN_14873b633 body=52 status=ok
// SIG undefined FUN_14873b633(void)

void FUN_14873b633(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14873b688 FUN_14873b688 body=56 status=ok
// SIG undefined FUN_14873b688(void)

void FUN_14873b688(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00014873b6b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14873b6d6 FUN_14873b6d6 body=54 status=ok
// SIG undefined FUN_14873b6d6(void)

undefined1 FUN_14873b6d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148735696(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 14873b734 FUN_14873b734 body=59 status=ok
// SIG undefined FUN_14873b734(void)

undefined8 FUN_14873b734(longlong *param_1)

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



// FUNCTION 14873b77a FUN_14873b77a body=64 status=ok
// SIG undefined FUN_14873b77a(void)

void FUN_14873b77a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x10);
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
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14873b856 FUN_14873b856 body=67 status=ok
// SIG undefined FUN_14873b856(void)

undefined1 FUN_14873b856(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148730e48(param_2,param_3);
    FUN_1406fa324(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 14873b8c2 FUN_14873b8c2 body=59 status=ok
// SIG undefined FUN_14873b8c2(void)

undefined8 FUN_14873b8c2(longlong *param_1)

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



// FUNCTION 14873b908 FUN_14873b908 body=38 status=ok
// SIG undefined FUN_14873b908(void)

void FUN_14873b908(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14873b9b6 FUN_14873b9b6 body=104 status=ok
// SIG undefined FUN_14873b9b6(void)

undefined1 FUN_14873b9b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      *(undefined1 *)(param_2 + lVar2) = *(undefined1 *)(param_3 + lVar2);
      lVar1 = *(longlong *)(param_3 + 8 + lVar2);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *(longlong *)(param_3 + 8 + lVar2);
        }
      }
      *(longlong *)(param_2 + 8 + lVar2) = lVar1;
      *(undefined1 *)(param_2 + 0x10 + lVar2) = *(undefined1 *)(param_3 + 0x10 + lVar2);
      lVar2 = lVar2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873ba46 FUN_14873ba46 body=59 status=ok
// SIG undefined FUN_14873ba46(void)

undefined8 FUN_14873ba46(longlong *param_1)

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



// FUNCTION 14873bb18 FUN_14873bb18 body=62 status=ok
// SIG undefined FUN_14873bb18(void)

undefined8 FUN_14873bb18(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148730e48(param_2,param_3);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 14873bb7e FUN_14873bb7e body=59 status=ok
// SIG undefined FUN_14873bb7e(void)

undefined8 FUN_14873bb7e(longlong *param_1)

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



// FUNCTION 14873bc4e FUN_14873bc4e body=62 status=ok
// SIG undefined FUN_14873bc4e(void)

undefined1 FUN_14873bc4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_141289ada(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873bcb4 FUN_14873bcb4 body=59 status=ok
// SIG undefined FUN_14873bcb4(void)

undefined8 FUN_14873bcb4(longlong *param_1)

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



// FUNCTION 14873bcfa FUN_14873bcfa body=43 status=ok
// SIG undefined FUN_14873bcfa(void)

void FUN_14873bcfa(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 14873bd6e FUN_14873bd6e body=28 status=ok
// SIG undefined FUN_14873bd6e(void)

undefined8 FUN_14873bd6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14873bdba FUN_14873bdba body=315 status=ok
// SIG undefined FUN_14873bdba(void)

void FUN_14873bdba(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar3 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
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
  puVar2 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14899e75e(plVar3,puVar2);
  *param_3 = uVar1;
  FUN_1409ed859(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873befc FUN_14873befc body=384 status=ok
// SIG undefined FUN_14873befc(void)

void FUN_14873befc(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_49;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar3 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
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
  puVar4 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14899e9f0(&local_68,plVar3,puVar4);
  if (*param_3 != local_68) {
    param_3[2] = 0;
  }
  *param_3 = local_68;
  if (param_3[1] != local_60) {
    param_3[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_3[1] = lVar2;
  param_3[2] = local_58;
  FUN_1409ed859(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873c080 FUN_14873c080 body=316 status=ok
// SIG undefined FUN_14873c080(void)

void FUN_14873c080(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar2 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
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
  puVar1 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_14899e7bc(plVar2,puVar1);
  *param_3 = uVar3;
  FUN_1409ed859(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873c1c4 FUN_14873c1c4 body=316 status=ok
// SIG undefined FUN_14873c1c4(void)

void FUN_14873c1c4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar2 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
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
  puVar1 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_14899e8a6(plVar2,puVar1);
  *param_3 = uVar3;
  FUN_1409ed859(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873c304 FUN_14873c304 body=316 status=ok
// SIG undefined FUN_14873c304(void)

void FUN_14873c304(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar2 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
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
  puVar1 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_14899e990(plVar2,puVar1);
  *param_3 = uVar3;
  FUN_1409ed859(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873c448 FUN_14873c448 body=371 status=ok
// SIG undefined FUN_14873c448(void)

void FUN_14873c448(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar2 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a63fc8();
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
  uVar1 = FUN_14899ed18(plVar2,local_40,local_48);
  *param_3 = uVar1;
  FUN_140ee7917(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873c5c2 FUN_14873c5c2 body=417 status=ok
// SIG undefined FUN_14873c5c2(void)

void FUN_14873c5c2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar1 = local_34;
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
  uVar2 = FUN_140948ece(local_28,local_30,iVar1 != 0,local_40);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873c76a FUN_14873c76a body=237 status=ok
// SIG undefined FUN_14873c76a(void)

void FUN_14873c76a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_14899ead6(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873c858 FUN_14873c858 body=294 status=ok
// SIG undefined FUN_14873c858(void)

void FUN_14873c858(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  longlong local_38;
  undefined4 local_30 [2];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_30[0] = 1;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40[0] = local_30[0];
  local_38 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_143e47e58(local_20,local_40);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873c980 FUN_14873c980 body=285 status=ok
// SIG undefined FUN_14873c980(void)

void FUN_14873c980(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78 [2];
  undefined1 local_70 [72];
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
  local_78[0] = 1;
  FUN_140fbcb60(local_70);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar2 = local_78;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143e47de2(local_28,puVar2);
  *param_3 = uVar1;
  FUN_1412dafa6(local_70);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873caaa FUN_14873caaa body=446 status=ok
// SIG undefined FUN_14873caaa(void)

void FUN_14873caaa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14899ec6c(local_28,local_30,local_38,plVar2);
  *param_3 = uVar1;
  FUN_140ee7917(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873cc70 FUN_14873cc70 body=486 status=ok
// SIG undefined FUN_14873cc70(void)

void FUN_14873cc70(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_31;
  FUN_14899eb62(local_18,local_20,local_28,local_30);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873ce58 FUN_14873ce58 body=486 status=ok
// SIG undefined FUN_14873ce58(void)

void FUN_14873ce58(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_31;
  FUN_14899ec30(local_18,local_20,local_28,local_30);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873d086 FUN_14873d086 body=45 status=ok
// SIG undefined FUN_14873d086(void)

longlong FUN_14873d086(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a1f86c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14873d0ba FUN_14873d0ba body=330 status=ok
// SIG undefined FUN_14873d0ba(void)

undefined4
FUN_14873d0ba(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9)

{
  undefined4 uVar1;
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [2];
  longlong *local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  char local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 uStack_72;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = (longlong *)*param_4;
  local_c8[0] = param_2;
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 8))();
  }
  local_b8 = (undefined4)param_4[1];
  local_9c = '\0';
  local_68 = 0;
  local_80 = 0;
  uStack_79 = 0;
  uStack_72 = 0;
  local_98 = *param_5;
  local_90 = param_5[1];
  local_88 = param_5[2];
  local_78 = param_6;
  local_74 = param_8;
  local_73 = param_9;
  local_70 = param_7;
  local_b0 = param_3;
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_c8);
  local_98 = 0;
  local_90 = 0xffffffffffffffff;
  if (local_9c == '\x01') {
    local_9c = '\0';
  }
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 0x10))();
  }
  *param_5 = 0;
  param_5[1] = 0xffffffffffffffff;
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873d206 FUN_14873d206 body=45 status=ok
// SIG undefined FUN_14873d206(void)

longlong FUN_14873d206(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145a1f86c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14873d238 FUN_14873d238 body=45 status=ok
// SIG undefined FUN_14873d238(void)

longlong FUN_14873d238(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_14143e2a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14873d2e2 FUN_14873d2e2 body=62 status=ok
// SIG undefined FUN_14873d2e2(void)

undefined1 FUN_14873d2e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_141859652(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873d348 FUN_14873d348 body=59 status=ok
// SIG undefined FUN_14873d348(void)

undefined8 FUN_14873d348(longlong *param_1)

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



// FUNCTION 14873d3e8 FUN_14873d3e8 body=34 status=ok
// SIG undefined FUN_14873d3e8(void)

undefined8 FUN_14873d3e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14873d40a FUN_14873d40a body=55 status=ok
// SIG undefined FUN_14873d40a(void)

void FUN_14873d40a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67548 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67548 = FUN_140002ddd(FUN_1465164ed,uVar1,L"GbxStatusEffectSeverityGenerator");
  }
  return;
}



// FUNCTION 14873d442 FUN_14873d442 body=43 status=ok
// SIG undefined FUN_14873d442(void)

undefined8 FUN_14873d442(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectSeverityGenerator.h"
                ,0x1b,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectSeverityGenerator::Generate");
  return 0;
}



// FUNCTION 14873d4b4 FUN_14873d4b4 body=83 status=ok
// SIG undefined FUN_14873d4b4(void)

undefined1 FUN_14873d4b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      FUN_141859652(param_2 + -0x18,param_3 + -0x18);
      FUN_14115e0ba(param_2,param_3);
      param_3 = param_3 + 0xa8;
      param_2 = param_2 + 0xa8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873d530 FUN_14873d530 body=59 status=ok
// SIG undefined FUN_14873d530(void)

undefined8 FUN_14873d530(longlong *param_1)

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



// FUNCTION 14873d57c FUN_14873d57c body=40 status=ok
// SIG undefined FUN_14873d57c(void)

void FUN_14873d57c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_14583cdba(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 14873d646 FUN_14873d646 body=91 status=ok
// SIG undefined FUN_14873d646(void)

undefined8 FUN_14873d646(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      FUN_141859652(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873d6ca FUN_14873d6ca body=59 status=ok
// SIG undefined FUN_14873d6ca(void)

undefined8 FUN_14873d6ca(longlong *param_1)

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



// FUNCTION 14873d710 FUN_14873d710 body=48 status=ok
// SIG undefined FUN_14873d710(void)

void FUN_14873d710(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 9) == '\x01') {
    *param_2 = &PTR_FUN_14b2a4160;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 9) = 0;
  }
  return;
}



// FUNCTION 14873d78e FUN_14873d78e body=55 status=ok
// SIG undefined FUN_14873d78e(void)

void FUN_14873d78e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67578 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67578 = FUN_140002ddd(FUN_14651661b,uVar1,L"GbxStatusEffectSeverityValueResolver");
  }
  return;
}



// FUNCTION 14873d81a FUN_14873d81a body=54 status=ok
// SIG undefined FUN_14873d81a(void)

undefined1 FUN_14873d81a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14873d932(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14873d878 FUN_14873d878 body=59 status=ok
// SIG undefined FUN_14873d878(void)

undefined8 FUN_14873d878(longlong *param_1)

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



// FUNCTION 14873d8be FUN_14873d8be body=37 status=ok
// SIG undefined FUN_14873d8be(void)

void FUN_14873d8be(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14873d932 FUN_14873d932 body=79 status=ok
// SIG undefined FUN_14873d932(void)

undefined8 * FUN_14873d932(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14873d982(param_1,iVar1);
      FUN_14873d9e4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14873d982 FUN_14873d982 body=98 status=ok
// SIG undefined FUN_14873d982(void)

void FUN_14873d982(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14873d9e4 FUN_14873d9e4 body=82 status=ok
// SIG undefined FUN_14873d9e4(void)

void FUN_14873d9e4(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 14873da6a FUN_14873da6a body=54 status=ok
// SIG undefined FUN_14873da6a(void)

undefined1 FUN_14873da6a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14873db7c(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 14873dac8 FUN_14873dac8 body=59 status=ok
// SIG undefined FUN_14873dac8(void)

undefined8 FUN_14873dac8(longlong *param_1)

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



// FUNCTION 14873db0e FUN_14873db0e body=32 status=ok
// SIG undefined FUN_14873db0e(void)

void FUN_14873db0e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_143c738c4(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14873db7c FUN_14873db7c body=295 status=ok
// SIG undefined FUN_14873db7c(void)

undefined8 * FUN_14873db7c(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *_Dst;
  undefined8 *_Src;
  
  *param_1 = *param_2;
  _Dst = param_1 + 1;
  _Src = param_2 + 1;
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == *(byte *)(param_2 + 5)) {
    if (0x18 < *(ushort *)(param_2 + 4)) {
      _Src = (undefined8 *)param_2[1];
    }
    if (0x18 < *(ushort *)(param_1 + 4)) {
      _Dst = (longlong *)*_Dst;
    }
    uVar4 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
    if (pcVar3 == (code *)0x0) {
      memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else {
      (*pcVar3)(_Dst,_Src);
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 != (code *)0x0) {
      plVar5 = _Dst;
      if (0x18 < *(ushort *)(param_1 + 4)) {
        plVar5 = (longlong *)*_Dst;
      }
      (*pcVar3)(plVar5);
    }
    if (0x18 < *(ushort *)(param_1 + 4)) {
      FUN_1400020a8(*_Dst);
    }
    bVar1 = *(byte *)(param_2 + 5);
    uVar2 = *(ushort *)(param_2 + 4);
    *(ushort *)(param_1 + 4) = uVar2;
    plVar5 = _Dst;
    if (0x18 < uVar2) {
      plVar5 = (longlong *)FUN_14001cc68(uVar2,0);
      *_Dst = (longlong)plVar5;
      _Src = (undefined8 *)*_Src;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 == (code *)0x0) {
      memcpy(plVar5,_Src,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
    }
    else {
      (*pcVar3)(plVar5,_Src);
    }
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  }
  return param_1;
}



// FUNCTION 14873dcf2 FUN_14873dcf2 body=59 status=ok
// SIG undefined FUN_14873dcf2(void)

undefined8 FUN_14873dcf2(longlong *param_1)

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



// FUNCTION 14873dd90 FUN_14873dd90 body=48 status=ok
// SIG undefined FUN_14873dd90(void)

void FUN_14873dd90(longlong *param_1)

{
  if ((char)param_1[3] == '\x01') {
    FUN_1409ed859(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



// FUNCTION 14873de1a FUN_14873de1a body=59 status=ok
// SIG undefined FUN_14873de1a(void)

undefined8 FUN_14873de1a(longlong *param_1)

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



// FUNCTION 14873de60 FUN_14873de60 body=32 status=ok
// SIG undefined FUN_14873de60(void)

void FUN_14873de60(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_141435294(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14873defc FUN_14873defc body=94 status=ok
// SIG undefined FUN_14873defc(void)

undefined1 FUN_14873defc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      *(undefined1 *)(param_2 + lVar2) = *(undefined1 *)(param_3 + lVar2);
      lVar1 = *(longlong *)(param_3 + 8 + lVar2);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *(longlong *)(param_3 + 8 + lVar2);
        }
      }
      *(longlong *)(param_2 + 8 + lVar2) = lVar1;
      lVar2 = lVar2 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873df82 FUN_14873df82 body=59 status=ok
// SIG undefined FUN_14873df82(void)

undefined8 FUN_14873df82(longlong *param_1)

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



// FUNCTION 14873e082 FUN_14873e082 body=59 status=ok
// SIG undefined FUN_14873e082(void)

undefined8 FUN_14873e082(longlong *param_1)

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



// FUNCTION 14873e190 FUN_14873e190 body=59 status=ok
// SIG undefined FUN_14873e190(void)

undefined8 FUN_14873e190(longlong *param_1)

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



// FUNCTION 14873e288 FUN_14873e288 body=73 status=ok
// SIG undefined FUN_14873e288(void)

undefined8 FUN_14873e288(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_140c19bee();
      lVar1 = lVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873e2fa FUN_14873e2fa body=59 status=ok
// SIG undefined FUN_14873e2fa(void)

undefined8 FUN_14873e2fa(longlong *param_1)

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



// FUNCTION 14873e340 FUN_14873e340 body=33 status=ok
// SIG undefined FUN_14873e340(void)

void FUN_14873e340(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1412dafa6(param_2 + 8);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14873e3ea FUN_14873e3ea body=101 status=ok
// SIG undefined FUN_14873e3ea(void)

undefined1 FUN_14873e3ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_2 + lVar3) = *(undefined4 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873e478 FUN_14873e478 body=59 status=ok
// SIG undefined FUN_14873e478(void)

undefined8 FUN_14873e478(longlong *param_1)

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



// FUNCTION 14873e58a FUN_14873e58a body=59 status=ok
// SIG undefined FUN_14873e58a(void)

undefined8 FUN_14873e58a(longlong *param_1)

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



// FUNCTION 14873e62c FUN_14873e62c body=84 status=ok
// SIG undefined FUN_14873e62c(void)

void FUN_14873e62c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b2a8b90;
  *(undefined4 *)(param_2 + 3) = 0x3f800000;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0xf00000d0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0x3f800000;
  return;
}



// FUNCTION 14873e696 FUN_14873e696 body=75 status=ok
// SIG undefined FUN_14873e696(void)

undefined1 FUN_14873e696(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0x68;
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873e70a FUN_14873e70a body=59 status=ok
// SIG undefined FUN_14873e70a(void)

undefined8 FUN_14873e70a(longlong *param_1)

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



// FUNCTION 14873e750 FUN_14873e750 body=43 status=ok
// SIG undefined FUN_14873e750(void)

void FUN_14873e750(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xd) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 0xd) = 0;
  }
  return;
}



// FUNCTION 14873e7ce FUN_14873e7ce body=57 status=ok
// SIG undefined FUN_14873e7ce(void)

void FUN_14873e7ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67940 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67940 = FUN_140002ddd(FUN_1465177dd,uVar1,L"GbxStatusEffectTickGroupDef");
  }
  return;
}



// FUNCTION 14873e808 FUN_14873e808 body=28 status=ok
// SIG undefined FUN_14873e808(void)

undefined8 FUN_14873e808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14873e880 FUN_14873e880 body=62 status=ok
// SIG undefined FUN_14873e880(void)

undefined1 FUN_14873e880(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14873e9d6(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873e8e6 FUN_14873e8e6 body=59 status=ok
// SIG undefined FUN_14873e8e6(void)

undefined8 FUN_14873e8e6(longlong *param_1)

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



// FUNCTION 14873e986 FUN_14873e986 body=55 status=ok
// SIG undefined FUN_14873e986(void)

void FUN_14873e986(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67958 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67958 =
         FUN_140002ddd(FUN_146517873,uVar1,L"GbxStatusEffectTickGroupModifierValueResolver");
  }
  return;
}



// FUNCTION 14873e9d6 FUN_14873e9d6 body=84 status=ok
// SIG undefined FUN_14873e9d6(void)

longlong * FUN_14873e9d6(longlong *param_1,longlong *param_2)

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



// FUNCTION 14873ea60 FUN_14873ea60 body=110 status=ok
// SIG undefined FUN_14873ea60(void)

undefined1 FUN_14873ea60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(param_3 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar4);
      *plVar1 = lVar3;
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar4);
      *(undefined1 *)(plVar1 + 2) = *(undefined1 *)(param_3 + 0x10 + lVar4);
      lVar4 = lVar4 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873eaf6 FUN_14873eaf6 body=59 status=ok
// SIG undefined FUN_14873eaf6(void)

undefined8 FUN_14873eaf6(longlong *param_1)

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



// FUNCTION 14873eb9e FUN_14873eb9e body=174 status=ok
// SIG undefined FUN_14873eb9e(void)

void FUN_14873eb9e(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 local_68 [16];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = *(undefined1 *)((longlong)param_2 + 0x55);
  uVar3 = *(undefined1 *)(param_2 + 0x15);
  uVar4 = *(undefined8 *)(param_2 + 0x16);
  uVar1 = param_2[0x14];
  FUN_140665542(local_68,param_2 + 0xc);
  local_58 = *(undefined8 *)(param_2 + 0x10);
  local_98 = local_68;
  local_90 = uVar1;
  local_88 = uVar4;
  local_80 = uVar3;
  local_78 = uVar2;
  (**(code **)(*param_1 + 0x10))(param_1,*param_2,param_2[6],param_2 + 2);
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873ecb6 FUN_14873ecb6 body=59 status=ok
// SIG undefined FUN_14873ecb6(void)

undefined8 FUN_14873ecb6(longlong *param_1)

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



// FUNCTION 14873ed56 FUN_14873ed56 body=34 status=ok
// SIG undefined FUN_14873ed56(void)

undefined8 FUN_14873ed56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14873ed78 FUN_14873ed78 body=55 status=ok
// SIG undefined FUN_14873ed78(void)

void FUN_14873ed78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67a10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67a10 = FUN_140002ddd(FUN_146517b07,uVar1,L"GbxSymphonicAmbientAudioAction");
  }
  return;
}



// FUNCTION 14873edb0 FUN_14873edb0 body=56 status=ok
// SIG undefined FUN_14873edb0(void)

void FUN_14873edb0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014873eddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}


