// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1472f5716 FUN_1472f5716 body=138 status=ok
// SIG undefined FUN_1472f5716(void)

code * FUN_1472f5716(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxRoughness";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000049;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f6d59e;
}



// FUNCTION 1472f57a4 FUN_1472f57a4 body=138 status=ok
// SIG undefined FUN_1472f57a4(void)

code * FUN_1472f57a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SSRTileListDataUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000006d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f361d4;
}



// FUNCTION 1472f582e FUN_1472f582e body=138 status=ok
// SIG undefined FUN_1472f582e(void)

code * FUN_1472f582e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DrawIndirectDataUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000006b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3614c;
}



// FUNCTION 1472f58ca FUN_1472f58ca body=31 status=ok
// SIG undefined FUN_1472f58ca(void)

undefined8
FUN_1472f58ca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1472f59d0(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 1472f5906 FUN_1472f5906 body=70 status=ok
// SIG undefined FUN_1472f5906(void)

void FUN_1472f5906(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = FUN_14106a12a();
  FUN_1467ac8f2(param_1,uVar3,uVar1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 1472f594c FUN_1472f594c body=37 status=ok
// SIG undefined FUN_1472f594c(void)

void FUN_1472f594c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae(param_1);
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 1472f5972 FUN_1472f5972 body=93 status=ok
// SIG undefined FUN_1472f5972(void)

void FUN_1472f5972(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = FUN_14106a12a();
  FUN_1467ac78e(param_1,param_2,uVar2,uVar1,0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 1472f59d0 FUN_1472f59d0 body=99 status=ok
// SIG undefined FUN_1472f59d0(void)

void FUN_1472f59d0(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_1472f5a34(param_3,*(undefined4 *)(param_1 + 8),1);
  uVar2 = *param_3;
  uVar4 = ((longlong)uVar2 >> 0x18) + (longlong)param_3;
  if ((uVar2 & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = FUN_14106a12a();
  FUN_1467ac844(param_1,param_2,uVar3,uVar1,uVar4);
  return;
}



// FUNCTION 1472f5a34 FUN_1472f5a34 body=66 status=ok
// SIG undefined FUN_1472f5a34(void)

void FUN_1472f5a34(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_1472f5a78(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_1472f5b56();
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1472f5a78 FUN_1472f5a78 body=89 status=ok
// SIG undefined FUN_1472f5a78(void)

int FUN_1472f5a78(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1472f5ad2(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 2),0,(longlong)(int)param_2 * 2);
  return iVar1;
}



// FUNCTION 1472f5ad2 FUN_1472f5ad2 body=130 status=ok
// SIG undefined FUN_1472f5ad2(void)

void FUN_1472f5ad2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 * 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 1)) {
      uVar5 = uVar3 >> 1 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,2,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472f5b56 FUN_1472f5b56 body=63 status=ok
// SIG undefined FUN_1472f5b56(void)

void FUN_1472f5b56(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472f5b96(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,2,2);
  }
  return;
}



// FUNCTION 1472f5b96 FUN_1472f5b96 body=95 status=ok
// SIG undefined FUN_1472f5b96(void)

ulonglong FUN_1472f5b96(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x7fffffffffffe000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e(param_2 * 2,2);
      uVar1 = uVar1 >> 1;
    }
  }
  return uVar1;
}



// FUNCTION 1472f5c0a FUN_1472f5c0a body=22 status=ok
// SIG undefined FUN_1472f5c0a(void)

undefined8
FUN_1472f5c0a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1472f5d2a(param_1,param_2,param_4);
  return 8;
}



// FUNCTION 1472f5c56 FUN_1472f5c56 body=198 status=ok
// SIG undefined FUN_1472f5c56(void)

void FUN_1472f5c56(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  uint *local_48;
  undefined1 local_40 [12];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  uVar4 = ((longlong)uVar1 >> 0x18) + (longlong)param_2;
  if ((uVar1 & 1) == 0) {
    uVar4 = uVar1;
  }
  if (uVar4 != 0) {
    FUN_146827ffc(param_1);
    uVar2 = FUN_147442a20(uVar4);
    local_34 = 0;
    uVar3 = FUN_1412f7d22();
    local_48 = &local_34;
    FUN_14682810a(param_1,local_40,uVar3,uVar2);
    FUN_146828008(local_40,uVar4 - local_34,uVar2);
    FUN_146827334(local_40);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_1468280da(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472f5d2a FUN_1472f5d2a body=197 status=ok
// SIG undefined FUN_1472f5d2a(void)

void FUN_1472f5d2a(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar1 = *param_2;
  uVar6 = ((longlong)uVar1 >> 0x18) + (longlong)param_2;
  if ((uVar1 & 1) == 0) {
    uVar6 = uVar1;
  }
  if (uVar6 != 0) {
    uVar3 = FUN_1412f7d22();
    lVar4 = FUN_146828166(param_1,uVar3,((uint)*param_2 >> 1 & 0x7fffff) - 1);
    if (lVar4 != 0) {
LAB_1472f5d85:
      uVar2 = FUN_1468264de(lVar4,uVar3);
      lVar5 = FUN_14001cc68(*(int *)(lVar4 + 0x58) + (uint)(*(int *)(lVar4 + 0x58) == 0),0x10);
      (**(code **)(lVar4 + 0x28))(param_1,uVar6 - uVar2,lVar4,lVar5);
      lVar5 = lVar5 + (ulonglong)uVar2;
      goto LAB_1472f5ddd;
    }
    if (*(char *)(param_1 + 0x10) == '\x01') {
      lVar4 = FUN_147442a20(uVar6);
      if (lVar4 != 0) goto LAB_1472f5d85;
    }
  }
  lVar5 = 0;
LAB_1472f5ddd:
  *param_3 = lVar5;
  return;
}



// FUNCTION 1472f5def FUN_1472f5def body=186 status=ok
// SIG undefined FUN_1472f5def(void)

void FUN_1472f5def(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *param_1;
  uVar5 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
  if ((uVar1 & 1) == 0) {
    uVar5 = uVar1;
  }
  if (uVar5 != 0) {
    uVar3 = FUN_1412f7d22();
    lVar4 = FUN_147442a20(uVar5);
    uVar2 = FUN_1468264de(lVar4,uVar3);
    if ((*param_1 & 1) == 0) {
      FUN_146826b64(param_3,uVar3);
    }
    else {
      FUN_146826b82(param_3,uVar3,((uint)(*param_1 >> 1) & 0x7fffff) - 1);
    }
                    /* WARNING: Could not recover jumptable at 0x0001472f5ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x40))(uVar5 - uVar2,lVar4,param_2,param_3);
    return;
  }
  FUN_146826b22(param_3);
  return;
}



// FUNCTION 1472f5eaa FUN_1472f5eaa body=138 status=ok
// SIG undefined FUN_1472f5eaa(void)

code * FUN_1472f5eaa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxTriangleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f5f34;
}



// FUNCTION 1472f5f34 FUN_1472f5f34 body=138 status=ok
// SIG undefined FUN_1472f5f34(void)

code * FUN_1472f5f34(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxLineCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c00000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f5fbe;
}



// FUNCTION 1472f5fbe FUN_1472f5fbe body=138 status=ok
// SIG undefined FUN_1472f5fbe(void)

code * FUN_1472f5fbe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxStateCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1457298c0;
}



// FUNCTION 1472f6048 FUN_1472f6048 body=138 status=ok
// SIG undefined FUN_1472f6048(void)

code * FUN_1472f6048(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxCharacterCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f60d2;
}



// FUNCTION 1472f60d2 FUN_1472f60d2 body=138 status=ok
// SIG undefined FUN_1472f60d2(void)

code * FUN_1472f60d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FontSpacing";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f615c;
}



// FUNCTION 1472f615c FUN_1472f615c body=138 status=ok
// SIG undefined FUN_1472f615c(void)

code * FUN_1472f615c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FontSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f61e6;
}



// FUNCTION 1472f61e6 FUN_1472f61e6 body=138 status=ok
// SIG undefined FUN_1472f61e6(void)

code * FUN_1472f61e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145729948;
}



// FUNCTION 1472f6270 FUN_1472f6270 body=132 status=ok
// SIG undefined FUN_1472f6270(void)

undefined1 * FUN_1472f6270(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Resolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1457298bc;
}



// FUNCTION 1472f62f4 FUN_1472f62f4 body=138 status=ok
// SIG undefined FUN_1472f62f4(void)

code * FUN_1472f62f4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ValuesBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001cd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ea2840;
}



// FUNCTION 1472f637e FUN_1472f637e body=138 status=ok
// SIG undefined FUN_1472f637e(void)

code * FUN_1472f637e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ValuesBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000001fa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146307cc4;
}



// FUNCTION 1472f640c FUN_1472f640c body=138 status=ok
// SIG undefined FUN_1472f640c(void)

code * FUN_1472f640c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MiniFontTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1100000022b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ddb456;
}



// FUNCTION 1472f649a FUN_1472f649a body=138 status=ok
// SIG undefined FUN_1472f649a(void)

code * FUN_1472f649a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShaderDrawDebugPrimitive";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000026e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146307ffe;
}



// FUNCTION 1472f6524 FUN_1472f6524 body=138 status=ok
// SIG undefined FUN_1472f6524(void)

code * FUN_1472f6524(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000299;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f65ae;
}



// FUNCTION 1472f65ae FUN_1472f65ae body=138 status=ok
// SIG undefined FUN_1472f65ae(void)

code * FUN_1472f65ae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000298;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e94f98;
}



// FUNCTION 1472f6638 FUN_1472f6638 body=138 status=ok
// SIG undefined FUN_1472f6638(void)

code * FUN_1472f6638(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OriginalBufferInvSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000295;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e94f0e;
}



// FUNCTION 1472f66c2 FUN_1472f66c2 body=138 status=ok
// SIG undefined FUN_1472f66c2(void)

code * FUN_1472f66c2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OriginalViewRectMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000293;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f674c;
}



// FUNCTION 1472f674c FUN_1472f674c body=132 status=ok
// SIG undefined FUN_1472f674c(void)

undefined1 * FUN_1472f674c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputInvResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x292;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e94f0a;
}



// FUNCTION 1472f67d0 FUN_1472f67d0 body=138 status=ok
// SIG undefined FUN_1472f67d0(void)

code * FUN_1472f67d0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000002c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463082b2;
}



// FUNCTION 1472f685a FUN_1472f685a body=138 status=ok
// SIG undefined FUN_1472f685a(void)

code * FUN_1472f685a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ZoomFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000002bd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f68e4;
}



// FUNCTION 1472f68e4 FUN_1472f68e4 body=132 status=ok
// SIG undefined FUN_1472f68e4(void)

undefined1 * FUN_1472f68e4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PixelExtent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 700;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e76532;
}



// FUNCTION 1472f6968 FUN_1472f6968 body=177 status=ok
// SIG undefined FUN_1472f6968(void)

void FUN_1472f6968(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145ee37a6();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca55da8,param_4);
  local_78 = &DAT_14ca55da8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1472f6a38(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472f6a1a FUN_1472f6a1a body=29 status=ok
// SIG undefined FUN_1472f6a1a(void)

undefined8 FUN_1472f6a1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472f6a38 FUN_1472f6a38 body=384 status=ok
// SIG undefined FUN_1472f6a38(void)

void FUN_1472f6a38(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,0x12);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,0x14);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca55df0;
  if (DAT_14ca55df0 != 0) {
    LOCK();
    *(int *)(DAT_14ca55df0 + 8) = *(int *)(DAT_14ca55df0 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca55da8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a3027d0;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472f6bba FUN_1472f6bba body=38 status=ok
// SIG undefined FUN_1472f6bba(void)

undefined8 FUN_1472f6bba(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472f6be0 FUN_1472f6be0 body=163 status=ok
// SIG undefined FUN_1472f6be0(void)

void FUN_1472f6be0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14305ed04();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_14305edec(param_1,param_2);
  return;
}



// FUNCTION 1472f6c83 FUN_1472f6c83 body=374 status=ok
// SIG undefined FUN_1472f6c83(void)

void FUN_1472f6c83(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1472f6dfa FUN_1472f6dfa body=29 status=ok
// SIG undefined FUN_1472f6dfa(void)

undefined8 FUN_1472f6dfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472f6e17 FUN_1472f6e17 body=152 status=ok
// SIG undefined FUN_1472f6e17(void)

void FUN_1472f6e17(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14305f050();
  uVar1 = param_4[2];
  uVar2 = *param_4;
  uVar3 = param_4[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_14305f135(param_1,param_2);
  return;
}



// FUNCTION 1472f6eaf FUN_1472f6eaf body=374 status=ok
// SIG undefined FUN_1472f6eaf(void)

void FUN_1472f6eaf(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1472f7026 FUN_1472f7026 body=29 status=ok
// SIG undefined FUN_1472f7026(void)

undefined8 FUN_1472f7026(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472f7044 FUN_1472f7044 body=258 status=ok
// SIG undefined FUN_1472f7044(void)

void FUN_1472f7044(void)

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
              0x110) < DAT_14ca56400) {
    FUN_144b3d300(&DAT_14ca56400);
    if (DAT_14ca56400 == -1) {
      FUN_1472f7148(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderDrawVSPSParameters";
      local_38 = 0;
      local_50 = 0x1d0;
      local_58 = 0x2ae;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca56380,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14305f781);
      _Init_thread_footer(&DAT_14ca56400);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472f7148 FUN_1472f7148 body=226 status=ok
// SIG undefined FUN_1472f7148(void)

longlong * FUN_1472f7148(longlong *param_1)

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
  pcVar13 = FUN_1472f722c;
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



// FUNCTION 1472f722c FUN_1472f722c body=144 status=ok
// SIG undefined FUN_1472f722c(void)

code * FUN_1472f722c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e94d20();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb1e;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FShaderDrawDebugPS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000002b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca56270;
  return FUN_1472f72bc;
}



// FUNCTION 1472f72bc FUN_1472f72bc body=138 status=ok
// SIG undefined FUN_1472f72bc(void)

undefined1 * FUN_1472f72bc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e75dda();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FShaderDrawDebugVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2af;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca561e8;
  return &LAB_1472f7346;
}



// FUNCTION 1472f7349 FUN_1472f7349 body=177 status=ok
// SIG undefined FUN_1472f7349(void)

void FUN_1472f7349(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145ea25c8();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca55eb8,param_4);
  local_78 = &DAT_14ca55eb8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1472f74cc(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472f73fb FUN_1472f73fb body=177 status=ok
// SIG undefined FUN_1472f73fb(void)

void FUN_1472f73fb(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145ea2b3a();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca56050,param_4);
  local_78 = &DAT_14ca56050;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1472f7eb2(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472f74ae FUN_1472f74ae body=29 status=ok
// SIG undefined FUN_1472f74ae(void)

undefined8 FUN_1472f74ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472f74cc FUN_1472f74cc body=384 status=ok
// SIG undefined FUN_1472f74cc(void)

void FUN_1472f74cc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca55f00;
  if (DAT_14ca55f00 != 0) {
    LOCK();
    *(int *)(DAT_14ca55f00 + 8) = *(int *)(DAT_14ca55f00 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca55eb8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a302a10;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472f764e FUN_1472f764e body=38 status=ok
// SIG undefined FUN_1472f764e(void)

undefined8 FUN_1472f764e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472f7674 FUN_1472f7674 body=163 status=ok
// SIG undefined FUN_1472f7674(void)

void FUN_1472f7674(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14305f970();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_14305fa58(param_1,param_2);
  return;
}



// FUNCTION 1472f7717 FUN_1472f7717 body=374 status=ok
// SIG undefined FUN_1472f7717(void)

void FUN_1472f7717(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1472f788e FUN_1472f788e body=29 status=ok
// SIG undefined FUN_1472f788e(void)

undefined8 FUN_1472f788e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472f78ab FUN_1472f78ab body=309 status=ok
// SIG undefined FUN_1472f78ab(void)

void FUN_1472f78ab(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  ulonglong *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_98;
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_50 = param_5;
  FUN_145f1bfe2();
  local_c8 = &local_50;
  local_c0 = &local_48;
  FUN_1448f70da(*param_3,&DAT_14ca55fc8,param_4,&local_c8);
  local_c0 = (ulonglong *)*param_3;
  uStack_b8 = param_3[1];
  local_b0 = param_5;
  local_a8 = 0;
  local_98 = *param_6;
  local_88 = (longlong *)param_6[2];
  param_6[2] = 0;
  local_78 = (undefined4)param_6[4];
  uStack_74 = *(undefined4 *)((longlong)param_6 + 0x24);
  uStack_70 = (undefined4)param_6[5];
  uStack_6c = *(undefined4 *)((longlong)param_6 + 0x2c);
  local_68 = (undefined4)param_6[6];
  uStack_64 = *(undefined4 *)((longlong)param_6 + 0x34);
  uStack_60 = (undefined4)param_6[7];
  uStack_5c = *(undefined4 *)((longlong)param_6 + 0x3c);
  if (local_98 != 0) {
    *param_6 = 0;
  }
  local_c8 = param_4;
  FUN_145f1bfe2();
  FUN_1472f79e2(param_1,param_2,param_4,&local_c8);
  if (local_98 != 0) {
    plVar1 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar1 = (longlong *)&local_78;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472f79e2 FUN_1472f79e2 body=258 status=ok
// SIG undefined FUN_1472f79e2(void)

void FUN_1472f79e2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  undefined6 uVar4;
  
  FUN_140069376();
  uVar4 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar3 = (undefined4)CONCAT62(uVar4,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar3 = (undefined4)CONCAT62(uVar4,4);
  }
  uVar5 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar2 = uVar5 + 0x230;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x240);
    uVar5 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar2 = uVar5 + 0x230;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_1472f7ae4(uVar5,param_2,param_3,uVar3,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar5;
  *(int *)(uVar5 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar5);
  return;
}



// FUNCTION 1472f7ae4 FUN_1472f7ae4 body=229 status=ok
// SIG undefined FUN_1472f7ae4(void)

undefined8 *
FUN_1472f7ae4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14ca56010;
  if (DAT_14ca56010 != 0) {
    LOCK();
    *(int *)(DAT_14ca56010 + 8) = *(int *)(DAT_14ca56010 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14ca55fc8;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a302a30;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472f7bca FUN_1472f7bca body=88 status=ok
// SIG undefined FUN_1472f7bca(void)

undefined8 * FUN_1472f7bca(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a302a30;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472f7c22 FUN_1472f7c22 body=90 status=ok
// SIG undefined FUN_1472f7c22(void)

void FUN_1472f7c22(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)param_1[6];
  if (pcVar1 != (code *)0x0) {
    plVar3 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2);
  }
  FUN_1472f7c7c(param_2,param_1 + 1,*param_1,*(undefined8 *)(param_1[3] + 0x10),
                *(undefined4 *)(param_1 + 4));
  return;
}



// FUNCTION 1472f7c7c FUN_1472f7c7c body=161 status=ok
// SIG undefined FUN_1472f7c7c(void)

void FUN_1472f7c7c(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_145f1bfe2();
  FUN_14305fcbe(param_1,param_2,param_3);
  puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar1 + 4;
  if ((undefined8 *)param_1[1] < puVar2) {
    FUN_140023dd8(param_1,0x28);
    puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar1 + 4;
  }
  *param_1 = (ulonglong)puVar2;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar1;
  param_1[6] = (ulonglong)(puVar1 + 1);
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_14a1e7fd0;
  puVar1[2] = param_4;
  *(undefined4 *)(puVar1 + 3) = param_5;
  FUN_14305fc6d(param_1,param_2);
  return;
}



// FUNCTION 1472f7d1d FUN_1472f7d1d body=374 status=ok
// SIG undefined FUN_1472f7d1d(void)

void FUN_1472f7d1d(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1472f7e94 FUN_1472f7e94 body=29 status=ok
// SIG undefined FUN_1472f7e94(void)

undefined8 FUN_1472f7e94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472f7eb2 FUN_1472f7eb2 body=384 status=ok
// SIG undefined FUN_1472f7eb2(void)

void FUN_1472f7eb2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca56098;
  if (DAT_14ca56098 != 0) {
    LOCK();
    *(int *)(DAT_14ca56098 + 8) = *(int *)(DAT_14ca56098 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca56050;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a302a50;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472f8034 FUN_1472f8034 body=38 status=ok
// SIG undefined FUN_1472f8034(void)

undefined8 FUN_1472f8034(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472f805a FUN_1472f805a body=163 status=ok
// SIG undefined FUN_1472f805a(void)

void FUN_1472f805a(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14305ff86();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_14306006e(param_1,param_2);
  return;
}



// FUNCTION 1472f80fd FUN_1472f80fd body=374 status=ok
// SIG undefined FUN_1472f80fd(void)

void FUN_1472f80fd(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1472f8274 FUN_1472f8274 body=133 status=ok
// SIG undefined FUN_1472f8274(void)

void FUN_1472f8274(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0x12;
  do {
    puVar1 = (undefined8 *)(param_1 + -0x12 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(param_1 + -2 + lVar2) = 0xffff0000;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0xd2);
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined2 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x108) = 1;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 4;
  return;
}



// FUNCTION 1472f82fa FUN_1472f82fa body=29 status=ok
// SIG undefined FUN_1472f82fa(void)

undefined8 FUN_1472f82fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472f8317 FUN_1472f8317 body=177 status=ok
// SIG undefined FUN_1472f8317(void)

void FUN_1472f8317(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e76348();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca562f8,param_4);
  local_78 = &DAT_14ca562f8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1472f83e8(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472f83ca FUN_1472f83ca body=29 status=ok
// SIG undefined FUN_1472f83ca(void)

undefined8 FUN_1472f83ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472f83e8 FUN_1472f83e8 body=384 status=ok
// SIG undefined FUN_1472f83e8(void)

void FUN_1472f83e8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca56340;
  if (DAT_14ca56340 != 0) {
    LOCK();
    *(int *)(DAT_14ca56340 + 8) = *(int *)(DAT_14ca56340 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca562f8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a302ad0;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472f856a FUN_1472f856a body=38 status=ok
// SIG undefined FUN_1472f856a(void)

undefined8 FUN_1472f856a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472f8590 FUN_1472f8590 body=163 status=ok
// SIG undefined FUN_1472f8590(void)

void FUN_1472f8590(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14306087e();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_143060966(param_1,param_2);
  return;
}



// FUNCTION 1472f8633 FUN_1472f8633 body=374 status=ok
// SIG undefined FUN_1472f8633(void)

void FUN_1472f8633(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1472f87aa FUN_1472f87aa body=138 status=ok
// SIG undefined FUN_1472f87aa(void)

code * FUN_1472f87aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EnergyTableResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000175;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146308602;
}



// FUNCTION 1472f8834 FUN_1472f8834 body=230 status=ok
// SIG undefined FUN_1472f8834(void)

void FUN_1472f8834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145e95290();
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca56408,param_5,&local_a8);
  local_a8 = param_5;
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88 = *param_6;
  local_80 = param_6[1];
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_a0 = param_2;
  FUN_145e95290();
  FUN_1472f89c6(param_1,param_3,param_5,&local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472f891c FUN_1472f891c body=139 status=ok
// SIG undefined FUN_1472f891c(void)

void FUN_1472f891c(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  lVar1 = 0x72;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x132);
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined1 (*) [16])(param_1 + 0x24) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2a] = 0;
  return;
}



// FUNCTION 1472f89a8 FUN_1472f89a8 body=29 status=ok
// SIG undefined FUN_1472f89a8(void)

undefined8 FUN_1472f89a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472f89c6 FUN_1472f89c6 body=354 status=ok
// SIG undefined FUN_1472f89c6(void)

void FUN_1472f89c6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_48 = DAT_14ca56450;
  if (DAT_14ca56450 != 0) {
    LOCK();
    *(int *)(DAT_14ca56450 + 8) = *(int *)(DAT_14ca56450 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14ca56408;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14a302bb0;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  uVar12 = param_4[3];
  puVar14[0x37] = *param_4;
  puVar14[0x38] = uVar10;
  puVar14[0x39] = uVar11;
  puVar14[0x3a] = uVar12;
  puVar14[0x3b] = param_4[4];
  puVar14[0x3c] = param_4[5];
  uVar3 = *(undefined4 *)(param_4 + 6);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar5 = *(undefined4 *)(param_4 + 7);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar7 = *(undefined4 *)(param_4 + 8);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x44);
  uVar9 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar8;
  *(undefined4 *)(puVar14 + 0x40) = uVar9;
  *(undefined4 *)(puVar14 + 0x3d) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar4;
  *(undefined4 *)(puVar14 + 0x3e) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140069100(param_1,puVar14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472f8b2a FUN_1472f8b2a body=38 status=ok
// SIG undefined FUN_1472f8b2a(void)

undefined8 FUN_1472f8b2a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472f8b50 FUN_1472f8b50 body=138 status=ok
// SIG undefined FUN_1472f8b50(void)

code * FUN_1472f8b50(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UncachedPageRectBounds";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint4 >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x45000000103;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145708dc8;
}



// FUNCTION 1472f8bda FUN_1472f8bda body=138 status=ok
// SIG undefined FUN_1472f8bda(void)

code * FUN_1472f8bda(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PackedNaniteViews";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< FPackedNaniteView >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x44000000101;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145708d40;
}



// FUNCTION 1472f8c64 FUN_1472f8c64 body=138 status=ok
// SIG undefined FUN_1472f8c64(void)

code * FUN_1472f8c64(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bRenderToVirtualShadowMap";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x430000000fe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f8cee;
}



// FUNCTION 1472f8cee FUN_1472f8cee body=138 status=ok
// SIG undefined FUN_1472f8cee(void)

code * FUN_1472f8cee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowViewMatrices";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2b0000000fd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 6;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f8d78;
}



// FUNCTION 1472f8d78 FUN_1472f8d78 body=138 status=ok
// SIG undefined FUN_1472f8d78(void)

code * FUN_1472f8d78(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowViewProjectionMatrices";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x130000000fc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 6;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f8e02;
}



// FUNCTION 1472f8e02 FUN_1472f8e02 body=138 status=ok
// SIG undefined FUN_1472f8e02(void)

code * FUN_1472f8e02(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bClampToNearPlane";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x120000000fb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f8e8c;
}



// FUNCTION 1472f8e8c FUN_1472f8e8c body=138 status=ok
// SIG undefined FUN_1472f8e8c(void)

code * FUN_1472f8e8c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x110000000fa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f8f16;
}



// FUNCTION 1472f8f16 FUN_1472f8f16 body=138 status=ok
// SIG undefined FUN_1472f8f16(void)

code * FUN_1472f8f16(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewMatrix";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd0000000f9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f8fa0;
}



// FUNCTION 1472f8fa0 FUN_1472f8fa0 body=138 status=ok
// SIG undefined FUN_1472f8fa0(void)

code * FUN_1472f8fa0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ProjectionMatrix";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000000f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630870c;
}



// FUNCTION 1472f902a FUN_1472f902a body=138 status=ok
// SIG undefined FUN_1472f902a(void)

code * FUN_1472f902a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bClampToNearPlane";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1700000010c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f90b4;
}



// FUNCTION 1472f90b4 FUN_1472f90b4 body=138 status=ok
// SIG undefined FUN_1472f90b4(void)

code * FUN_1472f90b4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1600000010b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f913e;
}



// FUNCTION 1472f913e FUN_1472f913e body=138 status=ok
// SIG undefined FUN_1472f913e(void)

code * FUN_1472f913e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewMatrix";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1200000010a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f85886;
}



// FUNCTION 1472f91c8 FUN_1472f91c8 body=138 status=ok
// SIG undefined FUN_1472f91c8(void)

code * FUN_1472f91c8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthOffsetScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000337;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f9252;
}



// FUNCTION 1472f9252 FUN_1472f9252 body=138 status=ok
// SIG undefined FUN_1472f9252(void)

code * FUN_1472f9252(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowDepthSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000336;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e76b2c;
}



// FUNCTION 1472f92dc FUN_1472f92dc body=389 status=ok
// SIG undefined FUN_1472f92dc(void)

undefined4 * FUN_1472f92dc(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1472f9462(param_1,local_40);
  puVar2 = (undefined8 *)*param_3;
  _Src = (void *)param_3[1];
  *(undefined4 *)(local_38 + 1) = *(undefined4 *)(puVar2 + 1);
  *local_38 = *puVar2;
  memcpy(local_38 + 2,_Src,0xba0);
  local_38[0x176] = *(undefined8 *)((longlong)_Src + 0xba0);
  local_38[0x177] = *(undefined8 *)((longlong)_Src + 0xba8);
  plVar3 = *(longlong **)((longlong)_Src + 0xbb0);
  local_38[0x178] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))();
  }
  *(undefined4 *)(local_38 + 0x17a) = 0xffffffff;
  local_44 = local_40[0];
  uVar1 = *(undefined4 *)(local_38 + 1);
  uVar5 = FUN_144a78877(*(undefined4 *)local_38,*(undefined4 *)((longlong)local_38 + 4));
  uVar6 = FUN_144a78877(uVar5,uVar1);
  cVar4 = FUN_1472f9550(param_1,uVar6,local_38,&local_44);
  uVar1 = local_44;
  if (cVar4 == '\0') {
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
      *(uint *)((longlong)local_38 + 0xbd4) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 0x17a) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1472f9748(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472f9462 FUN_1472f9462 body=237 status=ok
// SIG undefined FUN_1472f9462(void)

int * FUN_1472f9462(longlong *param_1,int *param_2)

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
      FUN_1472f95cc(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xbe0);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xbe0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xbe0 + *param_1;
  return param_2;
}



// FUNCTION 1472f9550 FUN_1472f9550 body=124 status=ok
// SIG undefined FUN_1472f9550(void)

undefined8 FUN_1472f9550(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_1472f9662(), iVar3 != -1)) {
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 0xbc0 + (longlong)iVar3 * 0xbe0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    memmove((void *)(lVar1 + (longlong)iVar3 * 0xbe0),param_3,0xbd0);
    FUN_1472f96ce(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 1472f95cc FUN_1472f95cc body=149 status=ok
// SIG undefined FUN_1472f95cc(void)

void FUN_1472f95cc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xbe0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xbe0)) {
      uVar5 = uVar4 / 0xbe0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xbe0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472f9662 FUN_1472f9662 body=107 status=ok
// SIG undefined FUN_1472f9662(void)

int FUN_1472f9662(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0xbe0;
        if (((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 4) == param_3[1]))
           && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0xbd0 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1472f96ce FUN_1472f96ce body=122 status=ok
// SIG undefined FUN_1472f96ce(void)

void FUN_1472f96ce(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xbe0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xbe0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xbe0 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1472f9748 FUN_1472f9748 body=469 status=ok
// SIG undefined FUN_1472f9748(void)

void FUN_1472f9748(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
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
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar4 = *local_88;
        lVar12 = (longlong)iVar6 * 0xbe0;
        uVar3 = *(undefined4 *)(lVar4 + 8 + lVar12);
        uVar7 = FUN_144a78877(*(undefined4 *)(lVar4 + lVar12),*(undefined4 *)(lVar4 + 4 + lVar12));
        iVar8 = FUN_144a78877(uVar7,uVar3);
        uVar9 = (longlong)iVar8 & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar4 + 0xbd4 + lVar12) = iVar8;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0xbd0 + lVar12) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472f991e FUN_1472f991e body=125 status=ok
// SIG undefined FUN_1472f991e(void)

longlong FUN_1472f991e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xee) = 0;
  *(undefined8 *)(param_1 + 0xf6) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_1471d266a(param_1 + 0xe0,uVar1);
  FUN_1474409b8(param_1 + 0xf2,uVar1,L"InvReceiverInnerMatrix",0);
  FUN_1474409b8(param_1 + 0xf8,uVar1,L"PreShadowToPreViewTranslation",0);
  return param_1;
}



// FUNCTION 1472f999c FUN_1472f999c body=759 status=ok
// SIG undefined FUN_1472f999c(void)

void FUN_1472f999c(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 1;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472f9b92;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472f9b92:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472f9c94 FUN_1472f9c94 body=310 status=ok
// SIG undefined FUN_1472f9c94(void)

void FUN_1472f9c94(longlong param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  short *psVar5;
  undefined1 auStack_58 [32];
  short *local_38;
  short local_2a;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_144a2c9be();
  uVar1 = *(ulonglong *)(param_1 + 0xa0);
  uVar4 = param_1 + 0xa0 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar4 = uVar1;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(uVar4 + lVar3 * 4) == *(longlong *)(lVar2 + 0x28)) {
        uVar1 = *(ulonglong *)(param_1 + 0xb0);
        uVar4 = param_1 + 0xb0 + ((longlong)uVar1 >> 0x18);
        if ((uVar1 & 1) == 0) {
          uVar4 = uVar1;
        }
        psVar5 = (short *)(uVar4 + lVar3);
        goto LAB_1472f9d25;
      }
      lVar3 = lVar3 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar3);
  }
  psVar5 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472f9d25:
  if (*psVar5 != -1) {
    local_38 = &local_2a;
    local_2a = *psVar5;
    local_28 = param_3;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472f9dcc FUN_1472f9dcc body=310 status=ok
// SIG undefined FUN_1472f9dcc(void)

void FUN_1472f9dcc(longlong param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  short *psVar5;
  undefined1 auStack_58 [32];
  short *local_38;
  short local_2a;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_144a81af4();
  uVar1 = *(ulonglong *)(param_1 + 0xa0);
  uVar4 = param_1 + 0xa0 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar4 = uVar1;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(uVar4 + lVar3 * 4) == *(longlong *)(lVar2 + 0x28)) {
        uVar1 = *(ulonglong *)(param_1 + 0xb0);
        uVar4 = param_1 + 0xb0 + ((longlong)uVar1 >> 0x18);
        if ((uVar1 & 1) == 0) {
          uVar4 = uVar1;
        }
        psVar5 = (short *)(uVar4 + lVar3);
        goto LAB_1472f9e5d;
      }
      lVar3 = lVar3 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar3);
  }
  psVar5 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472f9e5d:
  if (*psVar5 != -1) {
    local_38 = &local_2a;
    local_2a = *psVar5;
    local_28 = param_3;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472f9f03 FUN_1472f9f03 body=190 status=ok
// SIG undefined FUN_1472f9f03(void)

void FUN_1472f9f03(longlong *param_1,undefined2 *param_2,undefined8 param_3,int param_4)

{
  undefined2 uVar1;
  short sVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_78 [32];
  short *local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 local_38;
  short local_36;
  undefined2 local_34;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (uint)(ushort)param_2[2] + param_4 * -0x10;
  if (0 < (int)uVar4) {
    uVar5 = 8;
    if (uVar4 < 8) {
      uVar5 = uVar4;
    }
    uVar1 = *param_2;
    lVar3 = param_1[2];
    sVar2 = param_2[1];
    FUN_144ab3e68(*param_1,param_1 + 1,uVar5,param_3);
    local_48 = &local_32;
    local_32 = (undefined2)uVar5;
    local_50 = &local_34;
    local_58 = &local_36;
    local_38 = uVar1;
    local_36 = (short)param_4 * 0x10 + sVar2;
    local_34 = (short)lVar3;
    FUN_144ab3f26(*param_1,*param_1 + 0x38,param_1 + 3);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472f9fc2 FUN_1472f9fc2 body=759 status=ok
// SIG undefined FUN_1472f9fc2(void)

void FUN_1472f9fc2(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 1;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fa1b8;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fa1b8:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fa2ba FUN_1472fa2ba body=759 status=ok
// SIG undefined FUN_1472fa2ba(void)

void FUN_1472fa2ba(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 1;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fa4b0;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fa4b0:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fa5b2 FUN_1472fa5b2 body=759 status=ok
// SIG undefined FUN_1472fa5b2(void)

void FUN_1472fa5b2(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 1;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fa7a8;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fa7a8:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fa8aa FUN_1472fa8aa body=759 status=ok
// SIG undefined FUN_1472fa8aa(void)

void FUN_1472fa8aa(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 1;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472faaa0;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472faaa0:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472faba2 FUN_1472faba2 body=293 status=ok
// SIG undefined FUN_1472faba2(void)

void FUN_1472faba2(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_1472ee404(*param_2,lVar11,param_4,*param_5,*param_6);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1472facc8 FUN_1472facc8 body=357 status=ok
// SIG undefined FUN_1472facc8(void)

void FUN_1472facc8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_b8 [64];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = param_6;
  local_c8 = param_5;
  FUN_1472fae2e(param_1);
  local_78 = 0;
  uStack_70 = 0x3f80000000000000;
  local_68 = 0;
  uStack_60 = 0x3f80000000000000;
  local_58 = 0;
  uStack_50 = 0x3f80000000000000;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1472f4aa5(param_5);
  FUN_145eeb6b8();
  uVar1 = *(ulonglong *)(param_1 + 0xa0);
  uVar2 = param_1 + 0xa0 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(uVar2 + lVar3 * 4) == DAT_14ca54650) {
        uVar1 = *(ulonglong *)(param_1 + 0xb0);
        uVar2 = param_1 + 0xb0 + ((longlong)uVar1 >> 0x18);
        if ((uVar1 & 1) == 0) {
          uVar2 = uVar1;
        }
        puVar4 = (undefined2 *)(uVar2 + lVar3);
        goto LAB_1472fada9;
      }
      lVar3 = lVar3 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar3);
  }
  puVar4 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fada9:
  FUN_143061e16(param_2,puVar4,local_b8);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fae2e FUN_1472fae2e body=759 status=ok
// SIG undefined FUN_1472fae2e(void)

void FUN_1472fae2e(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fb024;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fb024:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fb126 FUN_1472fb126 body=357 status=ok
// SIG undefined FUN_1472fb126(void)

void FUN_1472fb126(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_b8 [64];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = param_6;
  local_c8 = param_5;
  FUN_1472fb28c(param_1);
  local_78 = 0;
  uStack_70 = 0x3f80000000000000;
  local_68 = 0;
  uStack_60 = 0x3f80000000000000;
  local_58 = 0;
  uStack_50 = 0x3f80000000000000;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1472f4aa5(param_5);
  FUN_145eeb6b8();
  uVar1 = *(ulonglong *)(param_1 + 0xa0);
  uVar2 = param_1 + 0xa0 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(uVar2 + lVar3 * 4) == DAT_14ca54650) {
        uVar1 = *(ulonglong *)(param_1 + 0xb0);
        uVar2 = param_1 + 0xb0 + ((longlong)uVar1 >> 0x18);
        if ((uVar1 & 1) == 0) {
          uVar2 = uVar1;
        }
        puVar4 = (undefined2 *)(uVar2 + lVar3);
        goto LAB_1472fb207;
      }
      lVar3 = lVar3 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar3);
  }
  puVar4 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fb207:
  FUN_143061e16(param_2,puVar4,local_b8);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fb28c FUN_1472fb28c body=759 status=ok
// SIG undefined FUN_1472fb28c(void)

void FUN_1472fb28c(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fb482;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fb482:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fb584 FUN_1472fb584 body=357 status=ok
// SIG undefined FUN_1472fb584(void)

void FUN_1472fb584(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_b8 [64];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = param_6;
  local_c8 = param_5;
  FUN_1405370d2(param_1);
  local_78 = 0;
  uStack_70 = 0x3f80000000000000;
  local_68 = 0;
  uStack_60 = 0x3f80000000000000;
  local_58 = 0;
  uStack_50 = 0x3f80000000000000;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1472f4aa5(param_5);
  FUN_145eeb6b8();
  uVar1 = *(ulonglong *)(param_1 + 0xa0);
  uVar2 = param_1 + 0xa0 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(uVar2 + lVar3 * 4) == DAT_14ca54650) {
        uVar1 = *(ulonglong *)(param_1 + 0xb0);
        uVar2 = param_1 + 0xb0 + ((longlong)uVar1 >> 0x18);
        if ((uVar1 & 1) == 0) {
          uVar2 = uVar1;
        }
        puVar4 = (undefined2 *)(uVar2 + lVar3);
        goto LAB_1472fb665;
      }
      lVar3 = lVar3 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar3);
  }
  puVar4 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fb665:
  FUN_143061e16(param_2,puVar4,local_b8);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fb6ea FUN_1472fb6ea body=357 status=ok
// SIG undefined FUN_1472fb6ea(void)

void FUN_1472fb6ea(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_b8 [64];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = param_6;
  local_c8 = param_5;
  FUN_1472fb850(param_1);
  local_78 = 0;
  uStack_70 = 0x3f80000000000000;
  local_68 = 0;
  uStack_60 = 0x3f80000000000000;
  local_58 = 0;
  uStack_50 = 0x3f80000000000000;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1472f4aa5(param_5);
  FUN_145eeb6b8();
  uVar1 = *(ulonglong *)(param_1 + 0xa0);
  uVar2 = param_1 + 0xa0 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(uVar2 + lVar3 * 4) == DAT_14ca54650) {
        uVar1 = *(ulonglong *)(param_1 + 0xb0);
        uVar2 = param_1 + 0xb0 + ((longlong)uVar1 >> 0x18);
        if ((uVar1 & 1) == 0) {
          uVar2 = uVar1;
        }
        puVar4 = (undefined2 *)(uVar2 + lVar3);
        goto LAB_1472fb7cb;
      }
      lVar3 = lVar3 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar3);
  }
  puVar4 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fb7cb:
  FUN_143061e16(param_2,puVar4,local_b8);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fb850 FUN_1472fb850 body=759 status=ok
// SIG undefined FUN_1472fb850(void)

void FUN_1472fb850(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fba46;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fba46:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fbb48 FUN_1472fbb48 body=357 status=ok
// SIG undefined FUN_1472fbb48(void)

void FUN_1472fbb48(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_b8 [64];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = param_6;
  local_c8 = param_5;
  FUN_141781736(param_1);
  local_78 = 0;
  uStack_70 = 0x3f80000000000000;
  local_68 = 0;
  uStack_60 = 0x3f80000000000000;
  local_58 = 0;
  uStack_50 = 0x3f80000000000000;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1472f4aa5(param_5);
  FUN_145eeb6b8();
  uVar1 = *(ulonglong *)(param_1 + 0xa0);
  uVar2 = param_1 + 0xa0 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(uVar2 + lVar3 * 4) == DAT_14ca54650) {
        uVar1 = *(ulonglong *)(param_1 + 0xb0);
        uVar2 = param_1 + 0xb0 + ((longlong)uVar1 >> 0x18);
        if ((uVar1 & 1) == 0) {
          uVar2 = uVar1;
        }
        puVar4 = (undefined2 *)(uVar2 + lVar3);
        goto LAB_1472fbc29;
      }
      lVar3 = lVar3 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar3);
  }
  puVar4 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fbc29:
  FUN_143061e16(param_2,puVar4,local_b8);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fbcae FUN_1472fbcae body=399 status=ok
// SIG undefined FUN_1472fbcae(void)

void FUN_1472fbcae(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  int iVar1;
  float fVar2;
  double dVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50;
  float local_48;
  float local_44;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_6;
  local_58 = param_5;
  FUN_1472fbe3e(param_1);
  fVar2 = (float)(**(code **)(**(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28) + 0x50))();
  dVar3 = tan((double)(fVar2 * 0.017453292) * 0.5);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca567d0) {
    FUN_144b3d300(&DAT_14ca567d0);
    if (DAT_14ca567d0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca567c8 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.MaxSoftKernelSize",1);
      _Init_thread_footer(&DAT_14ca567d0);
    }
  }
  iVar1 = (**(code **)(*DAT_14ca567c8 + 0xb0))();
  local_48 = ((*(float *)(param_5 + 0x2a4) - *(float *)(param_5 + 0x2a8)) * (float)dVar3) /
             (float)(*(double *)(param_5 + 0x6d0) + *(double *)(param_5 + 0x6d0));
  local_44 = (float)iVar1 / (float)*(uint *)(param_5 + 0x958);
  local_40 = 0;
  FUN_1449dacb8(param_2,param_1 + 0x148,&local_48,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fbe3e FUN_1472fbe3e body=759 status=ok
// SIG undefined FUN_1472fbe3e(void)

void FUN_1472fbe3e(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fc034;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fc034:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fc136 FUN_1472fc136 body=399 status=ok
// SIG undefined FUN_1472fc136(void)

void FUN_1472fc136(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  int iVar1;
  float fVar2;
  double dVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50;
  float local_48;
  float local_44;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_6;
  local_58 = param_5;
  FUN_141781736(param_1);
  fVar2 = (float)(**(code **)(**(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28) + 0x50))();
  dVar3 = tan((double)(fVar2 * 0.017453292) * 0.5);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca567e0) {
    FUN_144b3d300(&DAT_14ca567e0);
    if (DAT_14ca567e0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca567d8 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.MaxSoftKernelSize",1);
      _Init_thread_footer(&DAT_14ca567e0);
    }
  }
  iVar1 = (**(code **)(*DAT_14ca567d8 + 0xb0))();
  local_48 = ((*(float *)(param_5 + 0x2a4) - *(float *)(param_5 + 0x2a8)) * (float)dVar3) /
             (float)(*(double *)(param_5 + 0x6d0) + *(double *)(param_5 + 0x6d0));
  local_44 = (float)iVar1 / (float)*(uint *)(param_5 + 0x958);
  local_40 = 0;
  FUN_1449dacb8(param_2,param_1 + 0x148,&local_48,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fc2c6 FUN_1472fc2c6 body=759 status=ok
// SIG undefined FUN_1472fc2c6(void)

void FUN_1472fc2c6(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fc4bc;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fc4bc:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fc5be FUN_1472fc5be body=759 status=ok
// SIG undefined FUN_1472fc5be(void)

void FUN_1472fc5be(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fc7b4;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fc7b4:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fc8b6 FUN_1472fc8b6 body=759 status=ok
// SIG undefined FUN_1472fc8b6(void)

void FUN_1472fc8b6(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fcaac;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fcaac:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fcbae FUN_1472fcbae body=759 status=ok
// SIG undefined FUN_1472fcbae(void)

void FUN_1472fcbae(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fcda4;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fcda4:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fcea6 FUN_1472fcea6 body=759 status=ok
// SIG undefined FUN_1472fcea6(void)

void FUN_1472fcea6(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fd09c;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fd09c:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fd19e FUN_1472fd19e body=759 status=ok
// SIG undefined FUN_1472fd19e(void)

void FUN_1472fd19e(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fd394;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fd394:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fd496 FUN_1472fd496 body=759 status=ok
// SIG undefined FUN_1472fd496(void)

void FUN_1472fd496(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fd68c;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fd68c:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fd78e FUN_1472fd78e body=759 status=ok
// SIG undefined FUN_1472fd78e(void)

void FUN_1472fd78e(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fd984;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fd984:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fda86 FUN_1472fda86 body=759 status=ok
// SIG undefined FUN_1472fda86(void)

void FUN_1472fda86(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fdc7c;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fdc7c:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fdd7e FUN_1472fdd7e body=759 status=ok
// SIG undefined FUN_1472fdd7e(void)

void FUN_1472fdd7e(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fdf74;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fdf74:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fe076 FUN_1472fe076 body=759 status=ok
// SIG undefined FUN_1472fe076(void)

void FUN_1472fe076(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fe26c;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fe26c:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fe36e FUN_1472fe36e body=759 status=ok
// SIG undefined FUN_1472fe36e(void)

void FUN_1472fe36e(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fe564;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fe564:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fe666 FUN_1472fe666 body=759 status=ok
// SIG undefined FUN_1472fe666(void)

void FUN_1472fe666(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472fe85c;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472fe85c:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fe95e FUN_1472fe95e body=759 status=ok
// SIG undefined FUN_1472fe95e(void)

void FUN_1472fe95e(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1472feb54;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472feb54:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fec56 FUN_1472fec56 body=297 status=ok
// SIG undefined FUN_1472fec56(void)

void FUN_1472fec56(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  int iVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_40;
  undefined4 local_38;
  float local_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_6;
  local_48 = param_5;
  FUN_141781736(param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca567f0) {
    FUN_144b3d300(&DAT_14ca567f0);
    if (DAT_14ca567f0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca567e8 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.MaxSoftKernelSize",1);
      _Init_thread_footer(&DAT_14ca567f0);
    }
  }
  iVar1 = (**(code **)(*DAT_14ca567e8 + 0xb0))();
  local_34 = (float)iVar1 / (float)*(uint *)(param_5 + 0x958);
  local_38 = 0;
  local_30 = 0;
  FUN_1449dacb8(param_2,param_1 + 0x148,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472fed80 FUN_1472fed80 body=138 status=ok
// SIG undefined FUN_1472fed80(void)

code * FUN_1472fed80(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Transmission0Sampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000058c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eeb938;
}



// FUNCTION 1472fee0a FUN_1472fee0a body=138 status=ok
// SIG undefined FUN_1472fee0a(void)

code * FUN_1472fee0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Transmission0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000058a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146308bd4;
}



// FUNCTION 1472fee94 FUN_1472fee94 body=138 status=ok
// SIG undefined FUN_1472fee94(void)

code * FUN_1472fee94(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightDirection";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000588;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eeb9c2;
}



// FUNCTION 1472fef22 FUN_1472fef22 body=38 status=ok
// SIG undefined FUN_1472fef22(void)

undefined8 FUN_1472fef22(undefined8 param_1,int param_2)

{
  FUN_146306d74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472fef4e FUN_1472fef4e body=29 status=ok
// SIG undefined FUN_1472fef4e(void)

undefined8 FUN_1472fef4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472fef6c FUN_1472fef6c body=384 status=ok
// SIG undefined FUN_1472fef6c(void)

void FUN_1472fef6c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca55aa0;
  if (DAT_14ca55aa0 != 0) {
    LOCK();
    *(int *)(DAT_14ca55aa0 + 8) = *(int *)(DAT_14ca55aa0 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca55a58;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a303080;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ff0ee FUN_1472ff0ee body=38 status=ok
// SIG undefined FUN_1472ff0ee(void)

undefined8 FUN_1472ff0ee(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ff114 FUN_1472ff114 body=163 status=ok
// SIG undefined FUN_1472ff114(void)

void FUN_1472ff114(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143064f1e();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_143065006(param_1,param_2);
  return;
}



// FUNCTION 1472ff1b7 FUN_1472ff1b7 body=374 status=ok
// SIG undefined FUN_1472ff1b7(void)

void FUN_1472ff1b7(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1472ff32e FUN_1472ff32e body=29 status=ok
// SIG undefined FUN_1472ff32e(void)

undefined8 FUN_1472ff32e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ff34c FUN_1472ff34c body=384 status=ok
// SIG undefined FUN_1472ff34c(void)

void FUN_1472ff34c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca55b28;
  if (DAT_14ca55b28 != 0) {
    LOCK();
    *(int *)(DAT_14ca55b28 + 8) = *(int *)(DAT_14ca55b28 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca55ae0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a3030a0;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ff4ce FUN_1472ff4ce body=38 status=ok
// SIG undefined FUN_1472ff4ce(void)

undefined8 FUN_1472ff4ce(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ff4f4 FUN_1472ff4f4 body=163 status=ok
// SIG undefined FUN_1472ff4f4(void)

void FUN_1472ff4f4(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14306523a();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_143065322(param_1,param_2);
  return;
}



// FUNCTION 1472ff597 FUN_1472ff597 body=374 status=ok
// SIG undefined FUN_1472ff597(void)

void FUN_1472ff597(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1472ff70d FUN_1472ff70d body=40 status=ok
// SIG undefined FUN_1472ff70d(void)

void FUN_1472ff70d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1472ebb84(param_1);
    param_1 = param_1 + 0x80;
  }
  return;
}



// FUNCTION 1472ff736 FUN_1472ff736 body=56 status=ok
// SIG undefined FUN_1472ff736(void)

undefined8 * FUN_1472ff736(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3030c0;
  FUN_144725486();
  FUN_14742fcbe(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ff76e FUN_1472ff76e body=56 status=ok
// SIG undefined FUN_1472ff76e(void)

undefined8 * FUN_1472ff76e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a303130;
  FUN_144725486();
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ff7a6 FUN_1472ff7a6 body=56 status=ok
// SIG undefined FUN_1472ff7a6(void)

undefined8 * FUN_1472ff7a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a303190;
  FUN_144725486();
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ff7de FUN_1472ff7de body=140 status=ok
// SIG undefined FUN_1472ff7de(void)

void FUN_1472ff7de(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14ca4d248;
  if (param_1 <= (int)DAT_14ca4d248) {
    if (DAT_14ca4d24c == 0) {
      uVar2 = 4;
      if (4 < DAT_14ca4d248) {
        uVar2 = DAT_14ca4d248;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14ca4d248 + ((ulonglong)((longlong)(int)DAT_14ca4d248 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 7,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    DAT_14ca4d24c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14ca4d240,param_1,uVar5,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472ff86c FUN_1472ff86c body=29 status=ok
// SIG undefined FUN_1472ff86c(void)

undefined8 FUN_1472ff86c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ff889 FUN_1472ff889 body=152 status=ok
// SIG undefined FUN_1472ff889(void)

void FUN_1472ff889(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_1430655d4();
  uVar1 = param_4[2];
  uVar2 = *param_4;
  uVar3 = param_4[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_1430656b9(param_1,param_2);
  return;
}



// FUNCTION 1472ff921 FUN_1472ff921 body=374 status=ok
// SIG undefined FUN_1472ff921(void)

void FUN_1472ff921(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1472ffa98 FUN_1472ffa98 body=132 status=ok
// SIG undefined FUN_1472ffa98(void)

void FUN_1472ffa98(longlong param_1,int param_2)

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



// FUNCTION 1472ffb1e FUN_1472ffb1e body=56 status=ok
// SIG undefined FUN_1472ffb1e(void)

undefined8 * FUN_1472ffb1e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a303220;
  FUN_144725486();
  FUN_14630935a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ffb56 FUN_1472ffb56 body=118 status=ok
// SIG undefined FUN_1472ffb56(void)

void FUN_1472ffb56(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001472ffbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))();
  return;
}



// FUNCTION 1472ffbcc FUN_1472ffbcc body=38 status=ok
// SIG undefined FUN_1472ffbcc(void)

undefined8 FUN_1472ffbcc(undefined8 param_1,int param_2)

{
  FUN_14630935a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ffbf2 FUN_1472ffbf2 body=29 status=ok
// SIG undefined FUN_1472ffbf2(void)

undefined8 FUN_1472ffbf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ffc10 FUN_1472ffc10 body=384 status=ok
// SIG undefined FUN_1472ffc10(void)

void FUN_1472ffc10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca564d8;
  if (DAT_14ca564d8 != 0) {
    LOCK();
    *(int *)(DAT_14ca564d8 + 8) = *(int *)(DAT_14ca564d8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca56490;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a303290;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ffd92 FUN_1472ffd92 body=38 status=ok
// SIG undefined FUN_1472ffd92(void)

undefined8 FUN_1472ffd92(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ffdb8 FUN_1472ffdb8 body=163 status=ok
// SIG undefined FUN_1472ffdb8(void)

void FUN_1472ffdb8(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_1430658ec();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_1430659d4(param_1,param_2);
  return;
}



// FUNCTION 1472ffe5b FUN_1472ffe5b body=374 status=ok
// SIG undefined FUN_1472ffe5b(void)

void FUN_1472ffe5b(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1472fffd2 FUN_1472fffd2 body=56 status=ok
// SIG undefined FUN_1472fffd2(void)

void FUN_1472fffd2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14730000e FUN_14730000e body=151 status=ok
// SIG undefined FUN_14730000e(void)

longlong FUN_14730000e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_1;
  FUN_1472ea2b4();
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined2 *)(param_1 + 0x100) = 0xffff;
  uVar1 = (**(code **)(*(longlong *)(param_2 + 0xa0) + 0x30))
                    (CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(param_2 + 0x10)) &
                     0xffffffffffffff0f,*(undefined8 *)(param_2 + 0x28));
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"LayerId",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"bUseGpuSceneInstancing",0);
  return param_1;
}



// FUNCTION 1473000a6 FUN_1473000a6 body=56 status=ok
// SIG undefined FUN_1473000a6(void)

void FUN_1473000a6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 1473000e2 FUN_1473000e2 body=154 status=ok
// SIG undefined FUN_1473000e2(void)

longlong FUN_1473000e2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = param_1;
  FUN_1472ea2b4();
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined2 *)(param_1 + 0x100) = 0xffff;
  uVar1 = (**(code **)(*(longlong *)(param_2 + 0xa0) + 0x30))
                    (CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(param_2 + 0x10)) &
                     0xffffffffffffff0f,*(undefined8 *)(param_2 + 0x28));
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  if ((int)(&DAT_14ca814b8)[(ulonglong)(*(uint *)(param_2 + 0x10) >> 4 & 0xffff) * 0xf] < 3) {
    FUN_145f8567c();
    puVar2 = &DAT_14ca4e690;
  }
  else {
    FUN_1403d299a();
    puVar2 = &DAT_14ca4e5f8;
  }
  FUN_147440b96(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),*puVar2,0);
  return param_1;
}



// FUNCTION 14730017c FUN_14730017c body=29 status=ok
// SIG undefined FUN_14730017c(void)

undefined8 FUN_14730017c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14730019a FUN_14730019a body=29 status=ok
// SIG undefined FUN_14730019a(void)

undefined8 FUN_14730019a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473001b8 FUN_1473001b8 body=131 status=ok
// SIG undefined FUN_1473001b8(void)

void FUN_1473001b8(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((longlong)param_1 + 0x1c) = (undefined1  [16])0x0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  lVar1 = 0x42;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x102);
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined1 (*) [16])(param_1 + 0x1e) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x24] = 0;
  return;
}



// FUNCTION 14730023c FUN_14730023c body=29 status=ok
// SIG undefined FUN_14730023c(void)

undefined8 FUN_14730023c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14730025a FUN_14730025a body=37 status=ok
// SIG undefined FUN_14730025a(void)

void FUN_14730025a(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x240)) {
    *(undefined4 *)(param_1 + 0x244) = 8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147300280 FUN_147300280 body=29 status=ok
// SIG undefined FUN_147300280(void)

undefined8 FUN_147300280(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14730029e FUN_14730029e body=231 status=ok
// SIG undefined FUN_14730029e(void)

undefined8 *
FUN_14730029e(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 9;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x50);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 9;
  }
  *param_2 = (ulonglong)puVar5;
  uVar3 = *param_3;
  puVar6[1] = *param_4;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_14a1fb9b8;
  FUN_145f8567c();
  puVar6[3] = uVar3;
  lVar4 = DAT_14ca4e6c0;
  puVar6[4] = DAT_14ca4e6c0;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[5] = &DAT_14ca4e678;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a3033e8;
  puVar6[8] = uVar3;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1402aa76e(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar6;
  *(int *)(puVar6 + 7) = (int)param_1[1] + -1;
  return puVar6;
}



// FUNCTION 147300386 FUN_147300386 body=38 status=ok
// SIG undefined FUN_147300386(void)

undefined8 FUN_147300386(undefined8 param_1,int param_2)

{
  FUN_144ada7d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473003b0 FUN_1473003b0 body=56 status=ok
// SIG undefined FUN_1473003b0(void)

undefined8 * FUN_1473003b0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a303510;
  FUN_144725486();
  FUN_144a80d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473003e8 FUN_1473003e8 body=730 status=ok
// SIG undefined FUN_1473003e8(void)

void FUN_1473003e8(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"FDummyWholeSceneDirectionalShadowStencilVertexBuffer";
  local_40 = 0;
  uStack_38 = 0;
  local_84 = 0xc0;
  local_7c = 0x4001;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
  }
  plVar6 = (longlong *)(param_1 + 0x10);
  if (plVar6 != &local_90) {
    lVar4 = *plVar6;
    *plVar6 = local_90;
    local_90 = 0;
    if (lVar4 == 0) goto LAB_1473004da;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_90 != 0) {
    LOCK();
    puVar1 = (uint *)(local_90 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1473004da:
  lVar4 = *plVar6;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,1);
  local_a8 = 0xc0;
  puVar5 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar4,0);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *puVar5 = &DAT_3f8000003f800000;
  puVar5[1] = &DAT_3f8000003f800000;
  puVar5[2] = 0x3f800000bf800000;
  puVar5[3] = &DAT_3f8000003f800000;
  puVar5[4] = 0xbf8000003f800000;
  puVar5[5] = &DAT_3f8000003f800000;
  puVar5[6] = 0xbf8000003f800000;
  puVar5[7] = &DAT_3f8000003f800000;
  puVar5[8] = 0x3f800000bf800000;
  puVar5[9] = &DAT_3f8000003f800000;
  puVar5[10] = 0xbf800000bf800000;
  puVar5[0xb] = &DAT_3f8000003f800000;
  puVar5[0xc] = 0x3f800000bf800000;
  puVar5[0xd] = 0x3f800000bf800000;
  puVar5[0xe] = &DAT_3f8000003f800000;
  puVar5[0xf] = 0x3f800000bf800000;
  *(undefined4 *)(puVar5 + 0x10) = 0xbf800000;
  *(undefined4 *)((longlong)puVar5 + 0x84) = 0xbf800000;
  *(undefined4 *)(puVar5 + 0x11) = 0xbf800000;
  *(undefined4 *)((longlong)puVar5 + 0x8c) = 0x3f800000;
  *(undefined4 *)(puVar5 + 0x12) = 0xbf800000;
  *(undefined4 *)((longlong)puVar5 + 0x94) = 0xbf800000;
  *(undefined4 *)(puVar5 + 0x13) = 0xbf800000;
  *(undefined4 *)((longlong)puVar5 + 0x9c) = 0x3f800000;
  puVar5[0x14] = &DAT_3f8000003f800000;
  puVar5[0x15] = 0x3f800000bf800000;
  *(undefined4 *)(puVar5 + 0x16) = 0x3f800000;
  *(undefined4 *)((longlong)puVar5 + 0xb4) = 0xbf800000;
  *(undefined4 *)(puVar5 + 0x17) = 0xbf800000;
  *(undefined4 *)((longlong)puVar5 + 0xbc) = 0x3f800000;
  lVar4 = *plVar6;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473006c4 FUN_1473006c4 body=193 status=ok
// SIG undefined FUN_1473006c4(void)

longlong FUN_1473006c4(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 147300786 FUN_147300786 body=326 status=ok
// SIG undefined FUN_147300786(void)

void FUN_147300786(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_1474409b8(param_1,uVar1,L"ScreenToShadowMatrix",0);
  FUN_1474409b8(param_1 + 6,uVar1,L"SoftTransitionScale",0);
  FUN_1474409b8(param_1 + 0xc,uVar1,L"ShadowBufferSize",0);
  FUN_147440a6c(param_1 + 0x12,uVar1,L"ShadowDepthTexture",0);
  FUN_147440a6c(param_1 + 0x16,uVar1,L"ShadowDepthTextureSampler",0);
  FUN_1474409b8(param_1 + 0x1a,uVar1,L"ProjectionDepthBiasParameters",0);
  FUN_1474409b8(param_1 + 0x20,uVar1,L"FadePlaneOffset",0);
  FUN_1474409b8(param_1 + 0x26,uVar1,L"InvFadePlaneLength",0);
  FUN_1474409b8(param_1 + 0x2c,uVar1,L"ShadowTileOffsetAndSize",0);
  FUN_1474409b8(param_1 + 0x32,uVar1,L"LightPositionOrDirection",0);
  FUN_1474409b8(param_1 + 0x38,uVar1,L"PerObjectShadowFadeStart",0);
  FUN_1474409b8(param_1 + 0x3e,uVar1,L"InvPerObjectShadowFadeLength",0);
  FUN_1474409b8(param_1 + 0x44,uVar1,L"ShadowNearAndFarDepth",0);
  FUN_1474409b8(param_1 + 0x4a,uVar1,L"bCascadeUseFadePlane",0);
  return;
}



// FUNCTION 1473008cc FUN_1473008cc body=193 status=ok
// SIG undefined FUN_1473008cc(void)

longlong FUN_1473008cc(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 14730098e FUN_14730098e body=193 status=ok
// SIG undefined FUN_14730098e(void)

longlong FUN_14730098e(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 147300a50 FUN_147300a50 body=193 status=ok
// SIG undefined FUN_147300a50(void)

longlong FUN_147300a50(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 147300b12 FUN_147300b12 body=193 status=ok
// SIG undefined FUN_147300b12(void)

longlong FUN_147300b12(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 147300bd4 FUN_147300bd4 body=193 status=ok
// SIG undefined FUN_147300bd4(void)

longlong FUN_147300bd4(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 147300c96 FUN_147300c96 body=193 status=ok
// SIG undefined FUN_147300c96(void)

longlong FUN_147300c96(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 147300d58 FUN_147300d58 body=193 status=ok
// SIG undefined FUN_147300d58(void)

longlong FUN_147300d58(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 147300e1a FUN_147300e1a body=193 status=ok
// SIG undefined FUN_147300e1a(void)

longlong FUN_147300e1a(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 147300edc FUN_147300edc body=193 status=ok
// SIG undefined FUN_147300edc(void)

longlong FUN_147300edc(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 147300f9e FUN_147300f9e body=193 status=ok
// SIG undefined FUN_147300f9e(void)

longlong FUN_147300f9e(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 147301060 FUN_147301060 body=193 status=ok
// SIG undefined FUN_147301060(void)

longlong FUN_147301060(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 147301122 FUN_147301122 body=193 status=ok
// SIG undefined FUN_147301122(void)

longlong FUN_147301122(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 1473011e4 FUN_1473011e4 body=193 status=ok
// SIG undefined FUN_1473011e4(void)

longlong FUN_1473011e4(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 1473012a6 FUN_1473012a6 body=193 status=ok
// SIG undefined FUN_1473012a6(void)

longlong FUN_1473012a6(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 147301368 FUN_147301368 body=193 status=ok
// SIG undefined FUN_147301368(void)

longlong FUN_147301368(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 14730142a FUN_14730142a body=193 status=ok
// SIG undefined FUN_14730142a(void)

longlong FUN_14730142a(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 1473014ec FUN_1473014ec body=193 status=ok
// SIG undefined FUN_1473014ec(void)

longlong FUN_1473014ec(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 1473015ae FUN_1473015ae body=193 status=ok
// SIG undefined FUN_1473015ae(void)

longlong FUN_1473015ae(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 147301670 FUN_147301670 body=193 status=ok
// SIG undefined FUN_147301670(void)

longlong FUN_147301670(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 147301732 FUN_147301732 body=193 status=ok
// SIG undefined FUN_147301732(void)

longlong FUN_147301732(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 1473017f4 FUN_1473017f4 body=193 status=ok
// SIG undefined FUN_1473017f4(void)

longlong FUN_1473017f4(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 1473018b6 FUN_1473018b6 body=193 status=ok
// SIG undefined FUN_1473018b6(void)

longlong FUN_1473018b6(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 147301978 FUN_147301978 body=193 status=ok
// SIG undefined FUN_147301978(void)

longlong FUN_147301978(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 147301a3a FUN_147301a3a body=193 status=ok
// SIG undefined FUN_147301a3a(void)

longlong FUN_147301a3a(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_147300786(param_1 + 0xe0,param_2);
  FUN_1474409b8(param_1 + 0x130,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x136,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  return param_1;
}



// FUNCTION 147301afc FUN_147301afc body=364 status=ok
// SIG undefined FUN_147301afc(void)

longlong FUN_147301afc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  lVar1 = FUN_144a81af4();
  FUN_147440b96(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  lVar1 = FUN_144a2c9be();
  FUN_147440b96(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  FUN_147301c68(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28));
  FUN_147440a6c(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"ShadowDepthTextureSampler",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"PointLightDepthBias",0);
  FUN_1474409b8(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"PointLightProjParameters",0);
  return param_1;
}



// FUNCTION 147301c68 FUN_147301c68 body=146 status=ok
// SIG undefined FUN_147301c68(void)

void FUN_147301c68(longlong param_1,undefined8 param_2)

{
  FUN_147440a6c(param_1,param_2,L"ShadowDepthCubeTexture",0);
  FUN_147440a6c(param_1 + 4,param_2,L"ShadowDepthCubeTexture2",0);
  FUN_147440a6c(param_1 + 8,param_2,L"ShadowDepthCubeTextureSampler",0);
  FUN_1474409b8(param_1 + 0xc,param_2,L"ShadowViewProjectionMatrices",0);
  FUN_1474409b8(param_1 + 0x12,param_2,L"InvShadowmapResolution",0);
  FUN_1474409b8(param_1 + 0x18,param_2,L"LightPositionOrDirection",0);
  return;
}



// FUNCTION 147301cfa FUN_147301cfa body=364 status=ok
// SIG undefined FUN_147301cfa(void)

longlong FUN_147301cfa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  lVar1 = FUN_144a81af4();
  FUN_147440b96(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  lVar1 = FUN_144a2c9be();
  FUN_147440b96(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  FUN_147301c68(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28));
  FUN_147440a6c(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"ShadowDepthTextureSampler",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"PointLightDepthBias",0);
  FUN_1474409b8(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"PointLightProjParameters",0);
  return param_1;
}



// FUNCTION 147301e66 FUN_147301e66 body=364 status=ok
// SIG undefined FUN_147301e66(void)

longlong FUN_147301e66(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  lVar1 = FUN_144a81af4();
  FUN_147440b96(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  lVar1 = FUN_144a2c9be();
  FUN_147440b96(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  FUN_147301c68(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28));
  FUN_147440a6c(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"ShadowDepthTextureSampler",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"PointLightDepthBias",0);
  FUN_1474409b8(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"PointLightProjParameters",0);
  return param_1;
}



// FUNCTION 147301fd2 FUN_147301fd2 body=364 status=ok
// SIG undefined FUN_147301fd2(void)

longlong FUN_147301fd2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  lVar1 = FUN_144a81af4();
  FUN_147440b96(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  lVar1 = FUN_144a2c9be();
  FUN_147440b96(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  FUN_147301c68(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28));
  FUN_147440a6c(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"ShadowDepthTextureSampler",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"PointLightDepthBias",0);
  FUN_1474409b8(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"PointLightProjParameters",0);
  return param_1;
}



// FUNCTION 14730213e FUN_14730213e body=364 status=ok
// SIG undefined FUN_14730213e(void)

longlong FUN_14730213e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  lVar1 = FUN_144a81af4();
  FUN_147440b96(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  lVar1 = FUN_144a2c9be();
  FUN_147440b96(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  FUN_147301c68(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28));
  FUN_147440a6c(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"ShadowDepthTextureSampler",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"PointLightDepthBias",0);
  FUN_1474409b8(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"PointLightProjParameters",0);
  return param_1;
}



// FUNCTION 1473022aa FUN_1473022aa body=364 status=ok
// SIG undefined FUN_1473022aa(void)

longlong FUN_1473022aa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  lVar1 = FUN_144a81af4();
  FUN_147440b96(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  lVar1 = FUN_144a2c9be();
  FUN_147440b96(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  FUN_147301c68(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28));
  FUN_147440a6c(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"ShadowDepthTextureSampler",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"PointLightDepthBias",0);
  FUN_1474409b8(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"PointLightProjParameters",0);
  return param_1;
}



// FUNCTION 147302416 FUN_147302416 body=364 status=ok
// SIG undefined FUN_147302416(void)

longlong FUN_147302416(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  lVar1 = FUN_144a81af4();
  FUN_147440b96(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  lVar1 = FUN_144a2c9be();
  FUN_147440b96(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  FUN_147301c68(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28));
  FUN_147440a6c(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"ShadowDepthTextureSampler",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"PointLightDepthBias",0);
  FUN_1474409b8(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"PointLightProjParameters",0);
  return param_1;
}



// FUNCTION 147302582 FUN_147302582 body=364 status=ok
// SIG undefined FUN_147302582(void)

longlong FUN_147302582(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  lVar1 = FUN_144a81af4();
  FUN_147440b96(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  lVar1 = FUN_144a2c9be();
  FUN_147440b96(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  FUN_147301c68(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28));
  FUN_147440a6c(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"ShadowDepthTextureSampler",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"PointLightDepthBias",0);
  FUN_1474409b8(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"PointLightProjParameters",0);
  return param_1;
}



// FUNCTION 1473026ee FUN_1473026ee body=364 status=ok
// SIG undefined FUN_1473026ee(void)

longlong FUN_1473026ee(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  lVar1 = FUN_144a81af4();
  FUN_147440b96(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  lVar1 = FUN_144a2c9be();
  FUN_147440b96(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  FUN_147301c68(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28));
  FUN_147440a6c(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"ShadowDepthTextureSampler",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"PointLightDepthBias",0);
  FUN_1474409b8(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"PointLightProjParameters",0);
  return param_1;
}



// FUNCTION 14730285a FUN_14730285a body=364 status=ok
// SIG undefined FUN_14730285a(void)

longlong FUN_14730285a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  lVar1 = FUN_144a81af4();
  FUN_147440b96(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  lVar1 = FUN_144a2c9be();
  FUN_147440b96(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  FUN_147301c68(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28));
  FUN_147440a6c(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"ShadowDepthTextureSampler",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"PointLightDepthBias",0);
  FUN_1474409b8(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"PointLightProjParameters",0);
  return param_1;
}



// FUNCTION 1473029c6 FUN_1473029c6 body=364 status=ok
// SIG undefined FUN_1473029c6(void)

longlong FUN_1473029c6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  lVar1 = FUN_144a81af4();
  FUN_147440b96(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  lVar1 = FUN_144a2c9be();
  FUN_147440b96(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  FUN_147301c68(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28));
  FUN_147440a6c(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"ShadowDepthTextureSampler",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"PointLightDepthBias",0);
  FUN_1474409b8(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"PointLightProjParameters",0);
  return param_1;
}



// FUNCTION 147302b32 FUN_147302b32 body=364 status=ok
// SIG undefined FUN_147302b32(void)

longlong FUN_147302b32(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  lVar1 = FUN_144a81af4();
  FUN_147440b96(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  lVar1 = FUN_144a2c9be();
  FUN_147440b96(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  FUN_147301c68(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28));
  FUN_147440a6c(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"ShadowDepthTextureSampler",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"PointLightDepthBias",0);
  FUN_1474409b8(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"PointLightProjParameters",0);
  return param_1;
}



// FUNCTION 147302c9e FUN_147302c9e body=364 status=ok
// SIG undefined FUN_147302c9e(void)

longlong FUN_147302c9e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  lVar1 = FUN_144a81af4();
  FUN_147440b96(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  lVar1 = FUN_144a2c9be();
  FUN_147440b96(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  FUN_147301c68(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28));
  FUN_147440a6c(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"ShadowDepthTextureSampler",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"PointLightDepthBias",0);
  FUN_1474409b8(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"PointLightProjParameters",0);
  return param_1;
}



// FUNCTION 147302e0a FUN_147302e0a body=364 status=ok
// SIG undefined FUN_147302e0a(void)

longlong FUN_147302e0a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  lVar1 = FUN_144a81af4();
  FUN_147440b96(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  lVar1 = FUN_144a2c9be();
  FUN_147440b96(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  FUN_147301c68(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28));
  FUN_147440a6c(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"ShadowDepthTextureSampler",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"PointLightDepthBias",0);
  FUN_1474409b8(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"PointLightProjParameters",0);
  return param_1;
}



// FUNCTION 147302f76 FUN_147302f76 body=364 status=ok
// SIG undefined FUN_147302f76(void)

longlong FUN_147302f76(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  lVar1 = FUN_144a81af4();
  FUN_147440b96(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  lVar1 = FUN_144a2c9be();
  FUN_147440b96(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar1 + 0x18),0);
  FUN_147301c68(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28));
  FUN_147440a6c(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"ShadowDepthTextureSampler",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"LightPositionAndInvRadius",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"ShadowFadeFraction",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ShadowSharpen",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"PointLightDepthBias",0);
  FUN_1474409b8(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"PointLightProjParameters",0);
  return param_1;
}



// FUNCTION 1473030e2 FUN_1473030e2 body=38 status=ok
// SIG undefined FUN_1473030e2(void)

undefined8 FUN_1473030e2(undefined8 param_1,int param_2)

{
  FUN_146306dbc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14730310e FUN_14730310e body=38 status=ok
// SIG undefined FUN_14730310e(void)

undefined8 FUN_14730310e(undefined8 param_1,int param_2)

{
  FUN_146306e04();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14730313a FUN_14730313a body=38 status=ok
// SIG undefined FUN_14730313a(void)

undefined8 FUN_14730313a(undefined8 param_1,int param_2)

{
  FUN_146306e4c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147303166 FUN_147303166 body=38 status=ok
// SIG undefined FUN_147303166(void)

undefined8 FUN_147303166(undefined8 param_1,int param_2)

{
  FUN_146306e94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147303192 FUN_147303192 body=38 status=ok
// SIG undefined FUN_147303192(void)

undefined8 FUN_147303192(undefined8 param_1,int param_2)

{
  FUN_146306edc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473031be FUN_1473031be body=38 status=ok
// SIG undefined FUN_1473031be(void)

undefined8 FUN_1473031be(undefined8 param_1,int param_2)

{
  FUN_146306f24();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147303218 FUN_147303218 body=38 status=ok
// SIG undefined FUN_147303218(void)

undefined8 FUN_147303218(undefined8 param_1,int param_2)

{
  FUN_146306f6c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147303244 FUN_147303244 body=38 status=ok
// SIG undefined FUN_147303244(void)

undefined8 FUN_147303244(undefined8 param_1,int param_2)

{
  FUN_146306fb4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147303270 FUN_147303270 body=56 status=ok
// SIG undefined FUN_147303270(void)

undefined8 * FUN_147303270(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a303930;
  FUN_144725486();
  FUN_144a80d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473032a8 FUN_1473032a8 body=119 status=ok
// SIG undefined FUN_1473032a8(void)

void FUN_1473032a8(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x90);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x94)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x94) = iVar5;
    FUN_147303320(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147303320 FUN_147303320 body=141 status=ok
// SIG undefined FUN_147303320(void)

void FUN_147303320(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 1473033ae FUN_1473033ae body=38 status=ok
// SIG undefined FUN_1473033ae(void)

undefined8 FUN_1473033ae(undefined8 param_1,int param_2)

{
  FUN_146306ffc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473033da FUN_1473033da body=38 status=ok
// SIG undefined FUN_1473033da(void)

undefined8 FUN_1473033da(undefined8 param_1,int param_2)

{
  FUN_146307044();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147303406 FUN_147303406 body=38 status=ok
// SIG undefined FUN_147303406(void)

undefined8 FUN_147303406(undefined8 param_1,int param_2)

{
  FUN_14630708c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147303431 FUN_147303431 body=293 status=ok
// SIG undefined FUN_147303431(void)

void FUN_147303431(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_1472ee404(*param_2,lVar11,param_4,*param_5,*param_6);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147303556 FUN_147303556 body=38 status=ok
// SIG undefined FUN_147303556(void)

undefined8 FUN_147303556(undefined8 param_1,int param_2)

{
  FUN_1463070d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147303582 FUN_147303582 body=138 status=ok
// SIG undefined FUN_147303582(void)

code * FUN_147303582(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowTexture1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd80000047e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14607b83e;
}



// FUNCTION 147303610 FUN_147303610 body=38 status=ok
// SIG undefined FUN_147303610(void)

undefined8 FUN_147303610(undefined8 param_1,int param_2)

{
  FUN_14630711c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14730363c FUN_14730363c body=38 status=ok
// SIG undefined FUN_14730363c(void)

undefined8 FUN_14730363c(undefined8 param_1,int param_2)

{
  FUN_146307164();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147303668 FUN_147303668 body=38 status=ok
// SIG undefined FUN_147303668(void)

undefined8 FUN_147303668(undefined8 param_1,int param_2)

{
  FUN_1463071ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147303694 FUN_147303694 body=38 status=ok
// SIG undefined FUN_147303694(void)

undefined8 FUN_147303694(undefined8 param_1,int param_2)

{
  FUN_1463071f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


