// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147d7b9b6 FUN_147d7b9b6 body=123 status=ok
// SIG undefined FUN_147d7b9b6(void)

undefined1 FUN_147d7b9b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0x20;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined1 *)(param_2 + -0x10 + lVar3) = *(undefined1 *)(param_3 + -0x10 + lVar3);
      *(undefined8 *)(param_2 + -0x18 + lVar3) = *(undefined8 *)(param_3 + -0x18 + lVar3);
      *(undefined8 *)(param_2 + -8 + lVar3) = *(undefined8 *)(param_3 + -8 + lVar3);
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d7ba5a FUN_147d7ba5a body=59 status=ok
// SIG undefined FUN_147d7ba5a(void)

undefined8 FUN_147d7ba5a(longlong *param_1)

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



// FUNCTION 147d7bafa FUN_147d7bafa body=29 status=ok
// SIG undefined FUN_147d7bafa(void)

undefined8 FUN_147d7bafa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d7bb68 FUN_147d7bb68 body=123 status=ok
// SIG undefined FUN_147d7bb68(void)

undefined1 FUN_147d7bb68(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0x20;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined1 *)(param_2 + -0x10 + lVar3) = *(undefined1 *)(param_3 + -0x10 + lVar3);
      *(undefined8 *)(param_2 + -0x18 + lVar3) = *(undefined8 *)(param_3 + -0x18 + lVar3);
      *(undefined8 *)(param_2 + -8 + lVar3) = *(undefined8 *)(param_3 + -8 + lVar3);
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d7bc0c FUN_147d7bc0c body=59 status=ok
// SIG undefined FUN_147d7bc0c(void)

undefined8 FUN_147d7bc0c(longlong *param_1)

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



// FUNCTION 147d7bcac FUN_147d7bcac body=29 status=ok
// SIG undefined FUN_147d7bcac(void)

undefined8 FUN_147d7bcac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d7bcca FUN_147d7bcca body=110 status=ok
// SIG undefined FUN_147d7bcca(void)

void FUN_147d7bcca(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_147d7bd3a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147d7bd3a FUN_147d7bd3a body=132 status=ok
// SIG undefined FUN_147d7bd3a(void)

void FUN_147d7bd3a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 147d7bdbe FUN_147d7bdbe body=52 status=ok
// SIG undefined FUN_147d7bdbe(void)

void FUN_147d7bdbe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d7bdf2(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if (iVar1 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  FUN_147d7bd3a(param_1,*(undefined4 *)(param_1 + 0x48),iVar1);
  return;
}



// FUNCTION 147d7bdf2 FUN_147d7bdf2 body=108 status=ok
// SIG undefined FUN_147d7bdf2(void)

ulonglong FUN_147d7bdf2(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147d7be5e FUN_147d7be5e body=42 status=ok
// SIG undefined FUN_147d7be5e(void)

longlong FUN_147d7be5e(longlong param_1,int param_2)

{
  FUN_14475059c(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d7be88 FUN_147d7be88 body=42 status=ok
// SIG undefined FUN_147d7be88(void)

longlong FUN_147d7be88(longlong param_1,int param_2)

{
  FUN_1400468f8(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d7beb2 FUN_147d7beb2 body=147 status=ok
// SIG undefined FUN_147d7beb2(void)

void FUN_147d7beb2(longlong param_1,int param_2)

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



// FUNCTION 147d7bf46 FUN_147d7bf46 body=132 status=ok
// SIG undefined FUN_147d7bf46(void)

void FUN_147d7bf46(longlong param_1,int param_2)

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



// FUNCTION 147d7bfcc FUN_147d7bfcc body=132 status=ok
// SIG undefined FUN_147d7bfcc(void)

void FUN_147d7bfcc(longlong param_1,int param_2)

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



// FUNCTION 147d7c052 FUN_147d7c052 body=116 status=ok
// SIG undefined FUN_147d7c052(void)

void FUN_147d7c052(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 147d7c0c6 FUN_147d7c0c6 body=62 status=ok
// SIG undefined FUN_147d7c0c6(void)

void FUN_147d7c0c6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d7c104(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147d7c104 FUN_147d7c104 body=93 status=ok
// SIG undefined FUN_147d7c104(void)

ulonglong FUN_147d7c104(uint param_1,uint param_2)

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



// FUNCTION 147d7c162 FUN_147d7c162 body=86 status=ok
// SIG undefined FUN_147d7c162(void)

void FUN_147d7c162(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147d7c1b8 FUN_147d7c1b8 body=132 status=ok
// SIG undefined FUN_147d7c1b8(void)

void FUN_147d7c1b8(longlong param_1,int param_2)

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



// FUNCTION 147d7c23e FUN_147d7c23e body=161 status=ok
// SIG undefined FUN_147d7c23e(void)

void FUN_147d7c23e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_145bdeadc();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7c2e0 FUN_147d7c2e0 body=161 status=ok
// SIG undefined FUN_147d7c2e0(void)

void FUN_147d7c2e0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_145bdeaa4();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7c382 FUN_147d7c382 body=161 status=ok
// SIG undefined FUN_147d7c382(void)

void FUN_147d7c382(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_145bdeb14();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7c424 FUN_147d7c424 body=161 status=ok
// SIG undefined FUN_147d7c424(void)

void FUN_147d7c424(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_145bdeb4c();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7c4c6 FUN_147d7c4c6 body=161 status=ok
// SIG undefined FUN_147d7c4c6(void)

void FUN_147d7c4c6(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_145bdeb84();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7c568 FUN_147d7c568 body=161 status=ok
// SIG undefined FUN_147d7c568(void)

void FUN_147d7c568(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_145bde9c4();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7c60a FUN_147d7c60a body=161 status=ok
// SIG undefined FUN_147d7c60a(void)

void FUN_147d7c60a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14629e5d2();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7c6ac FUN_147d7c6ac body=161 status=ok
// SIG undefined FUN_147d7c6ac(void)

void FUN_147d7c6ac(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_145bdebbc();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7c74e FUN_147d7c74e body=161 status=ok
// SIG undefined FUN_147d7c74e(void)

void FUN_147d7c74e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_145bdebf4();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7c7f0 FUN_147d7c7f0 body=161 status=ok
// SIG undefined FUN_147d7c7f0(void)

void FUN_147d7c7f0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_145bdec2c();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7c892 FUN_147d7c892 body=161 status=ok
// SIG undefined FUN_147d7c892(void)

void FUN_147d7c892(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_145bdec64();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7c934 FUN_147d7c934 body=161 status=ok
// SIG undefined FUN_147d7c934(void)

void FUN_147d7c934(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_145bde9fc();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7c9d6 FUN_147d7c9d6 body=161 status=ok
// SIG undefined FUN_147d7c9d6(void)

void FUN_147d7c9d6(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_145bdea34();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7ca78 FUN_147d7ca78 body=161 status=ok
// SIG undefined FUN_147d7ca78(void)

void FUN_147d7ca78(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_145bdea6c();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7cb1a FUN_147d7cb1a body=147 status=ok
// SIG undefined FUN_147d7cb1a(void)

void FUN_147d7cb1a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d7cbae FUN_147d7cbae body=42 status=ok
// SIG undefined FUN_147d7cbae(void)

longlong FUN_147d7cbae(longlong param_1,int param_2)

{
  FUN_14475059c(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d7cbd8 FUN_147d7cbd8 body=164 status=ok
// SIG undefined FUN_147d7cbd8(void)

void FUN_147d7cbd8(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = *param_1;
  puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar4 + 3;
  if (*(undefined8 **)(lVar2 + 0x78) < puVar3) {
    FUN_140023dd8((longlong *)(lVar2 + 0x70),0x28);
    puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar4 + 3;
  }
  *(undefined8 **)(lVar2 + 0x70) = puVar3;
  *puVar4 = &PTR_FUN_14aae03e0;
  puVar4[1] = *param_2;
  puVar4[2] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(lVar2 + 0xa0);
  *(uint *)(lVar2 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xa4) < iVar1 + 1U) {
    FUN_1448cfae8((longlong *)(lVar2 + 0x98),iVar1);
  }
  *(undefined8 **)(*(longlong *)(lVar2 + 0x98) + (longlong)iVar1 * 8) = puVar4;
  return;
}



// FUNCTION 147d7cc7c FUN_147d7cc7c body=73 status=ok
// SIG undefined FUN_147d7cc7c(void)

longlong FUN_147d7cc7c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 147d7ccc6 FUN_147d7ccc6 body=146 status=ok
// SIG undefined FUN_147d7ccc6(void)

undefined8 * FUN_147d7ccc6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_14aae0540;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
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
  param_1[3] = lVar3;
  return param_1;
}



// FUNCTION 147d7cd58 FUN_147d7cd58 body=57 status=ok
// SIG undefined FUN_147d7cd58(void)

undefined8 * FUN_147d7cd58(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aae0540;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d7cdb4 FUN_147d7cdb4 body=64 status=ok
// SIG undefined FUN_147d7cdb4(void)

void FUN_147d7cdb4(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  FUN_147d7cec4(*param_2,param_1);
  return;
}



// FUNCTION 147d7cdf4 FUN_147d7cdf4 body=64 status=ok
// SIG undefined FUN_147d7cdf4(void)

void FUN_147d7cdf4(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  FUN_147d7cec4(*param_2,param_1);
  return;
}



// FUNCTION 147d7ce34 FUN_147d7ce34 body=98 status=ok
// SIG undefined FUN_147d7ce34(void)

void FUN_147d7ce34(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  FUN_147d7cec4(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d7ce87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d7cea6 FUN_147d7cea6 body=27 status=ok
// SIG undefined FUN_147d7cea6(void)

undefined8 FUN_147d7cea6(longlong param_1)

{
  FUN_147d7cf4c(param_1 + 8,param_1 + 0x20);
  return 1;
}



// FUNCTION 147d7cec4 FUN_147d7cec4 body=135 status=ok
// SIG undefined FUN_147d7cec4(void)

undefined8 * FUN_147d7cec4(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_LAB_14aae0540;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_14aae04d0;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}



// FUNCTION 147d7cf4c FUN_147d7cf4c body=137 status=ok
// SIG undefined FUN_147d7cf4c(void)

void FUN_147d7cf4c(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = (code *)*param_2;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  (*pcVar1)(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7cfd6 FUN_147d7cfd6 body=81 status=ok
// SIG undefined FUN_147d7cfd6(void)

void FUN_147d7cfd6(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7d028 FUN_147d7d028 body=1284 status=ok
// SIG undefined FUN_147d7d028(void)

undefined8 * FUN_147d7d028(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong *local_b0 [2];
  longlong *local_a0 [2];
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  int local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    local_60 = L"PlayWorldBeingCreated";
    local_58 = 0x15;
    FUN_1446e940c(&local_70,&local_60);
    local_60 = L"Engine";
    local_58 = 6;
    FUN_1446e940c(&local_80,&local_60);
    FUN_140208bae(&local_60,&local_80,&local_70,L"(World Being Created)");
    uVar6 = FUN_1447a1f4a(&local_60);
    FUN_144a787a6(param_1,uVar6);
    if (local_60 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_60 + 0x10))();
    }
    goto LAB_147d7d4f6;
  }
  if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
    lVar8 = 0;
    do {
      lVar7 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar8);
      if (*(longlong *)(lVar7 + 0x360) == param_2) goto LAB_147d7d097;
      lVar8 = lVar8 + 8;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar8);
  }
  lVar7 = 0;
LAB_147d7d097:
  uVar5 = FUN_14490d72a(param_2);
  switch(uVar5) {
  case 0:
    local_60 = L"PlayWorldIsStandalone";
    local_58 = 0x15;
    FUN_1446e940c(&local_70,&local_60);
    local_60 = L"Engine";
    local_58 = 6;
    FUN_1446e940c(&local_80,&local_60);
    pwVar9 = L"Standalone";
    break;
  case 1:
    local_60 = L"PlayWorldIsDedicatedServer";
    local_58 = 0x1a;
    FUN_1446e940c(&local_70,&local_60);
    local_60 = L"Engine";
    local_58 = 6;
    FUN_1446e940c(&local_80,&local_60);
    pwVar9 = L"Dedicated Server";
    break;
  case 2:
    local_60 = L"PlayWorldIsListenServer";
    local_58 = 0x17;
    FUN_1446e940c(&local_70,&local_60);
    local_60 = L"Engine";
    local_58 = 6;
    FUN_1446e940c(&local_80,&local_60);
    pwVar9 = L"Listen Server";
    break;
  case 3:
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    if (lVar7 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(lVar7 + 0x2c0);
    }
    FUN_1413a4536(local_b0,uVar5,0,&local_c8);
    local_60 = L"PlayWorldIsClient";
    local_58 = 0x11;
    FUN_1446e940c(local_ec,&local_60);
    local_60 = L"Engine";
    local_58 = 6;
    FUN_1446e940c(local_f0,&local_60);
    FUN_140208bae(local_e8,local_f0,local_ec,L"Client {0}");
    FUN_14023409e(&local_d8,local_e8,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_b0);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_d8;
    local_88 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_a0,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
        }
      }
    }
    if (local_b0[0] != (longlong *)0x0) {
      (**(code **)(*local_b0[0] + 0x10))();
    }
    uVar6 = FUN_1447a1f4a(local_a0);
    FUN_144a787a6(param_1,uVar6);
    if (local_a0[0] != (longlong *)0x0) {
      (**(code **)(*local_a0[0] + 0x10))();
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    plVar1 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_c0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  default:
    goto switchD_147d7d0b8_default;
  }
  FUN_140208bae(&local_60,&local_80,&local_70,pwVar9);
  uVar6 = FUN_1447a1f4a(&local_60);
  FUN_144a787a6(param_1,uVar6);
  if (local_60 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_60 + 0x10))();
  }
switchD_147d7d0b8_default:
  if ((lVar7 != 0) && (1 < *(int *)(lVar7 + 0x2f0))) {
    FUN_140b1283a(&local_60,&DAT_149e001d8,lVar7 + 0x2e8);
    iVar4 = local_58 + -1;
    if (local_58 == 0) {
      iVar4 = 0;
    }
    FUN_1400020e8(param_1,local_60,iVar4);
    if (local_60 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_147d7d4f6:
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d7d52e FUN_147d7d52e body=93 status=ok
// SIG undefined FUN_147d7d52e(void)

undefined4 * FUN_147d7d52e(undefined4 *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  uVar3 = FUN_140d25081();
  *param_1 = uVar3;
  iVar4 = FUN_140d25081();
  if (iVar4 != param_2) {
    cVar1 = (*(code *)PTR_FUN_14c758760)();
    cVar2 = FUN_144a61b4f();
    if (cVar1 == '\0') {
      if (cVar2 == '\0') {
        return param_1;
      }
      piVar5 = &DAT_14c7590b4;
    }
    else {
      piVar5 = &DAT_14c7590bc;
      if (cVar2 != '\0') {
        piVar5 = &DAT_14c7590b8;
      }
    }
    *piVar5 = param_2;
  }
  return param_1;
}



// FUNCTION 147d7d58b FUN_147d7d58b body=37 status=ok
// SIG undefined FUN_147d7d58b(void)

void FUN_147d7d58b(float param_1)

{
  DAT_14cb0d278 = DAT_14cb0d278 * 0.9 + param_1 * 0.1;
  return;
}



// FUNCTION 147d7d5e0 FUN_147d7d5e0 body=219 status=ok
// SIG undefined FUN_147d7d5e0(void)

undefined8 FUN_147d7d5e0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar3 = DAT_14c867d24 ^ 1;
  bVar1 = DAT_14c867d24 == 0;
  DAT_14c867d24 = bVar3;
  if (param_3 != (longlong *)0x0 && bVar1) {
    FUN_140056680(local_40,L"NamedEvents");
    cVar2 = (**(code **)(*param_3 + 0x170))(param_3,local_40);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar2 == '\0') {
      FUN_140056680(local_40,L"NamedEvents");
      local_48 = 1;
      FUN_147d824d2(param_1,param_2,param_3,local_40);
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7d6bc FUN_147d7d6bc body=206 status=ok
// SIG undefined FUN_147d7d6bc(void)

undefined8 FUN_147d7d6bc(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_48,&DAT_14a819d62);
  cVar1 = (**(code **)(*param_3 + 0x170))(param_3,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_48,L"Detailed");
  cVar2 = (**(code **)(*param_3 + 0x170))(param_3,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar1 == '\0' && cVar2 == '\x01') {
    FUN_147d8236c(param_1,param_2,param_3,L"Detailed -Skip");
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7d78c FUN_147d7d78c body=1647 status=ok
// SIG undefined FUN_147d7d78c(void)

int FUN_147d7d78c(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 int param_5,int param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  size_t sVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  wchar_t **ppwVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 *local_120;
  undefined4 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  ulonglong local_100;
  longlong local_f8;
  wchar_t *local_f0;
  undefined4 local_e8;
  wchar_t *local_e0;
  undefined4 local_d8;
  wchar_t *local_d0 [2];
  wchar_t *local_c0 [2];
  wchar_t *local_b0 [2];
  wchar_t *local_a0;
  int local_98;
  wchar_t *local_90 [2];
  undefined8 local_80;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  fVar14 = DAT_14cb0cbdc;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar1 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_108 = param_4;
  local_f8 = param_3;
  fVar13 = (float)FUN_147c473a0();
  uVar4 = 0xff7fca9f;
  if (*DAT_14caf6568 <= fVar14 && fVar14 != *DAT_14caf6568) {
    uVar4 = 0xfff4ba70;
  }
  uVar11 = 0xffe96d63;
  if (fVar14 <= fVar13) {
    uVar11 = (ulonglong)uVar4;
  }
  local_110 = uVar1;
  fVar14 = (float)FUN_140324d4e(uVar1);
  iVar5 = (int)(fVar14 * 1.1);
  if (*(longlong **)(param_1 + 0xc60) != (longlong *)0x0) {
    local_100 = CONCAT44(local_100._4_4_,(int)(fVar14 * 1.1));
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0xc60) + 0x2b8))();
    local_80 = *(wchar_t **)(*(longlong *)(param_1 + 0xc60) + 0x18);
    FUN_1400021e4(&local_80,&local_70);
    if (local_68 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = (undefined2 *)CONCAT44(uStack_6c,local_70);
    }
    iVar5 = FUN_147a982e8(local_110,puVar8);
    if (uVar4 < 4) {
      switch(uVar4) {
      case 0:
        local_80 = (wchar_t *)CONCAT44(DAT_14c758c60,DAT_14c75905c);
        local_78 = DAT_14c758c60;
        local_74 = 0x3f800000;
        puVar8 = &DAT_149dfb77a;
        if (local_68 != 0) {
          puVar8 = (undefined2 *)CONCAT44(uStack_6c,local_70);
        }
        FUN_140002266(&local_a0,L"%s : Closed",puVar8);
        local_90[0] = L"";
        if (local_98 != 0) {
          local_90[0] = local_a0;
        }
        uVar6 = 0;
        if (local_90[0] != (wchar_t *)0x0) {
          sVar7 = wcslen(local_90[0]);
          uVar6 = (int)sVar7;
        }
        ppwVar12 = local_90;
        break;
      case 1:
        local_80 = (wchar_t *)CONCAT44(DAT_14c758c60,DAT_14c75905c);
        local_78 = DAT_14c758c60;
        local_74 = 0x3f800000;
        puVar8 = &DAT_149dfb77a;
        if (local_68 != 0) {
          puVar8 = (undefined2 *)CONCAT44(uStack_6c,local_70);
        }
        FUN_140002266(&local_a0,L"%s : Error",puVar8);
        local_b0[0] = L"";
        if (local_98 != 0) {
          local_b0[0] = local_a0;
        }
        uVar6 = 0;
        if (local_b0[0] != (wchar_t *)0x0) {
          sVar7 = wcslen(local_b0[0]);
          uVar6 = (int)sVar7;
        }
        ppwVar12 = local_b0;
        break;
      case 2:
        local_80 = (wchar_t *)CONCAT44(DAT_14c75905c,DAT_14c758c60);
        local_78 = DAT_14c758c60;
        local_74 = 0x3f800000;
        puVar8 = &DAT_149dfb77a;
        if (local_68 != 0) {
          puVar8 = (undefined2 *)CONCAT44(uStack_6c,local_70);
        }
        FUN_140002266(&local_a0,L"%s : Synchronized",puVar8);
        local_c0[0] = L"";
        if (local_98 != 0) {
          local_c0[0] = local_a0;
        }
        uVar6 = 0;
        if (local_c0[0] != (wchar_t *)0x0) {
          sVar7 = wcslen(local_c0[0]);
          uVar6 = (int)sVar7;
        }
        ppwVar12 = local_c0;
        break;
      case 3:
        local_80 = (wchar_t *)CONCAT44(DAT_14c75905c,DAT_14c75905c);
        local_78 = DAT_14c758c60;
        local_74 = 0x3f800000;
        puVar8 = &DAT_149dfb77a;
        if (local_68 != 0) {
          puVar8 = (undefined2 *)CONCAT44(uStack_6c,local_70);
        }
        FUN_140002266(&local_a0,L"%s : Synchronizing",puVar8);
        local_d0[0] = L"";
        if (local_98 != 0) {
          local_d0[0] = local_a0;
        }
        uVar6 = 0;
        if (local_d0[0] != (wchar_t *)0x0) {
          sVar7 = wcslen(local_d0[0]);
          uVar6 = (int)sVar7;
        }
        ppwVar12 = local_d0;
      }
      *(undefined4 *)(ppwVar12 + 1) = uVar6;
      local_118 = &DAT_149e1e308;
      local_120 = &local_80;
      local_128 = local_110;
      FUN_147d8e230(local_108,(double)(param_5 - iVar5),SUB84((double)param_6,0));
      if (local_a0 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    if (CONCAT44(uStack_6c,local_70) != 0) {
      FUN_1400020a8();
    }
    param_6 = param_6 + (int)local_100;
    iVar5 = (int)local_100;
  }
  uVar4 = (uint)(uVar11 >> 0x10) & 0xff;
  local_70 = (&DAT_14c758c60)[uVar4];
  uVar9 = (ulonglong)((uint)(uVar11 >> 8) & 0xff);
  uStack_6c = (&DAT_14c758c60)[uVar9];
  uVar10 = (uint)uVar11 & 0xff;
  local_68 = (&DAT_14c758c60)[uVar10];
  local_64 = 0x3f800000;
  FUN_140002266(&local_80,L"%5.2f FPS",(double)DAT_14cb0d290);
  local_e0 = local_80;
  if (local_78 == 0) {
    local_e0 = L"";
  }
  local_d8 = 0;
  local_100 = uVar9;
  if (local_e0 != (wchar_t *)0x0) {
    sVar7 = wcslen(local_e0);
    local_d8 = (int)sVar7;
  }
  local_118 = &DAT_149e1e308;
  local_120 = (undefined8 *)&local_70;
  local_128 = local_110;
  FUN_147d8e230(local_108,(double)param_5,SUB84((double)param_6,0));
  if (local_80 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  param_6 = param_6 + iVar5;
  if ((local_f8 != 0) && (plVar2 = *(longlong **)(local_f8 + 0x30), plVar2 != (longlong *)0x0)) {
    FUN_140056680(&local_70,L"Unit");
    cVar3 = (**(code **)(*plVar2 + 0x170))(plVar2,&local_70);
    if (CONCAT44(uStack_6c,local_70) != 0) {
      FUN_1400020a8();
    }
    if (cVar3 != '\0') goto LAB_147d7dcdb;
  }
  local_70 = (&DAT_14c758c60)[uVar4];
  uStack_6c = (&DAT_14c758c60)[local_100];
  local_68 = (&DAT_14c758c60)[uVar10];
  local_64 = 0x3f800000;
  FUN_140002266(&local_80,L"%5.2f ms",(double)DAT_14cb0cbdc);
  local_f0 = local_80;
  if (local_78 == 0) {
    local_f0 = L"";
  }
  local_e8 = 0;
  if (local_f0 != (wchar_t *)0x0) {
    sVar7 = wcslen(local_f0);
    local_e8 = (int)sVar7;
  }
  local_118 = &DAT_149e1e308;
  local_128 = local_110;
  local_120 = (undefined8 *)&local_70;
  FUN_147d8e230(local_108,(double)param_5,SUB84((double)param_6,0));
  if (local_80 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  param_6 = param_6 + iVar5;
LAB_147d7dcdb:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 147d7ddfc FUN_147d7ddfc body=372 status=ok
// SIG undefined FUN_147d7ddfc(void)

int FUN_147d7ddfc(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 in_R9;
  float fVar3;
  int in_stack_00000028;
  int in_stack_00000030;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 *local_f0;
  undefined4 *local_e8;
  wchar_t *local_e0;
  int local_d8;
  wchar_t *local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [88];
  ulonglong local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar1 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  FUN_1405d5a96(local_b0);
  local_c0 = DAT_14c758cd8;
  local_bc = DAT_14c758ea0;
  local_b8 = DAT_14c75905c;
  local_b4 = 0x3f800000;
  FUN_140002266(&local_e0,L"%5.2f MByte",(double)((float)local_58 * 0.0009765625 * 0.0009765625));
  local_d0 = local_e0;
  if (local_d8 == 0) {
    local_d0 = L"";
  }
  local_c8 = 0;
  if (local_d0 != (wchar_t *)0x0) {
    sVar2 = wcslen(local_d0);
    local_c8 = (int)sVar2;
  }
  local_e8 = &DAT_149e1e308;
  local_f0 = &local_c0;
  local_f8 = uVar1;
  FUN_147d8e230(in_R9,(double)in_stack_00000028,SUB84((double)in_stack_00000030,0));
  if (local_e0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  fVar3 = (float)FUN_140324d4e(uVar1);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return (int)(fVar3 * 1.1) + in_stack_00000030;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7df72 FUN_147d7df72 body=366 status=ok
// SIG undefined FUN_147d7df72(void)

bool FUN_147d7df72(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  char cVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != (longlong *)0x0) {
    FUN_140056680(local_48,L"UnitMax");
    cVar1 = (**(code **)(*param_3 + 0x170))(param_3,local_48);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar1 != '\0') {
      FUN_147d8236c(param_1,param_2,param_3,L"UnitMax");
      FUN_140056680(local_48,L"Unit");
      local_58 = 1;
      FUN_147d824d2(param_1,param_2,param_3,local_48);
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
    }
    FUN_140056680(local_48,L"Unit");
    cVar1 = (**(code **)(*param_3 + 0x170))(param_3,local_48);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(local_48,L"Detailed");
    cVar2 = (**(code **)(*param_3 + 0x170))(param_3,local_48);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar1 == '\0' && cVar2 == '\x01') {
      FUN_147d8236c(param_1,param_2,param_3,L"Detailed -Skip");
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7e0e2 FUN_147d7e0e2 body=75 status=ok
// SIG undefined FUN_147d7e0e2(void)

ulonglong FUN_147d7e0e2(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                       undefined4 param_5,uint param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
    uVar2 = (ulonglong)param_6;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_3 + 0x30) + 0x150))();
    uVar2 = FUN_143745b78(uVar1,param_3,param_4,param_5,param_6);
  }
  return uVar2;
}



// FUNCTION 147d7e12e FUN_147d7e12e body=24 status=ok
// SIG undefined FUN_147d7e12e(void)

undefined8 FUN_147d7e12e(void)

{
  FUN_14000f986(0x3de147ae);
  return 0;
}



// FUNCTION 147d7e146 FUN_147d7e146 body=75 status=ok
// SIG undefined FUN_147d7e146(void)

ulonglong FUN_147d7e146(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                       undefined4 param_5,uint param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
    uVar2 = (ulonglong)param_6;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_3 + 0x30) + 0x158))();
    uVar2 = FUN_143749cb0(uVar1,param_3,param_4,param_5,param_6);
  }
  return uVar2;
}



// FUNCTION 147d7e192 FUN_147d7e192 body=966 status=ok
// SIG undefined FUN_147d7e192(void)

int FUN_147d7e192(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,int param_6)

{
  undefined8 uVar1;
  bool bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  uint *local_d0;
  undefined4 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  wchar_t *local_b0;
  undefined4 local_a8;
  wchar_t *local_a0;
  int local_98;
  wchar_t *local_90;
  undefined4 local_88;
  uint local_80;
  undefined4 uStack_7c;
  uint local_78;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_b8 = param_4;
  FUN_1462469b6(param_2,&local_80);
  if ((int)local_78 < 0) {
    iVar8 = 0;
    uVar9 = 0xff00ff00;
    iVar10 = 0;
    uVar7 = 0xff00ff00;
  }
  else {
    iVar10 = 0;
    iVar8 = 0;
    do {
      if ((int)((longlong *)CONCAT44(uStack_7c,local_80))[1] <= (int)local_78) break;
      lVar4 = FUN_14479d2ce((ulonglong)local_78 * 8 + *(longlong *)CONCAT44(uStack_7c,local_80));
      if (lVar4 != 0) {
        lVar5 = FUN_144a75eb4();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) {
          iVar10 = iVar10 + 1;
          if (*(longlong *)(lVar4 + 0x3d0) != 0) {
            bVar3 = FUN_14096f7c8(*(longlong *)(lVar4 + 0x3d0),0x3da3d70a);
            iVar8 = iVar8 + (uint)bVar3;
          }
        }
      }
      uVar9 = local_78 + 1;
      bVar2 = -2 < (int)local_78;
      local_78 = uVar9;
    } while (bVar2);
    uVar9 = 0xff00ff00;
    if (0xc < iVar10) {
      fVar11 = (float)iVar10 / 20.0;
      if (1.0 <= (float)iVar10 / 20.0) {
        fVar11 = 1.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      FUN_145c9fdbc(&local_80,1.0 - fVar11);
      uVar9 = local_80;
    }
    uVar7 = 0xff00ff00;
    if (0xc < iVar8) {
      fVar11 = (float)iVar8 / 20.0;
      if (1.0 <= (float)iVar8 / 20.0) {
        fVar11 = 1.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      FUN_145c9fdbc(&local_80,1.0 - fVar11);
      uVar7 = local_80;
    }
  }
  fVar11 = (float)FUN_140324d4e(uVar1);
  local_80 = *(uint *)((longlong)&DAT_14c758c60 + (ulonglong)(uVar9 >> 0xe & 0x3fc));
  uStack_7c = (&DAT_14c758c60)[uVar9 >> 8 & 0xff];
  local_78 = (&DAT_14c758c60)[uVar9 & 0xff];
  local_74 = (float)(uVar9 >> 0x18) * 0.003921569;
  FUN_140002266(&local_a0,L"%i AI",iVar10);
  local_90 = local_a0;
  if (local_98 == 0) {
    local_90 = L"";
  }
  local_88 = 0;
  local_c0 = uVar1;
  if (local_90 != (wchar_t *)0x0) {
    sVar6 = wcslen(local_90);
    local_88 = (int)sVar6;
  }
  local_c8 = &DAT_149e1e308;
  local_d0 = &local_80;
  local_d8 = local_c0;
  FUN_147d8e230(local_b8,(double)param_5,(double)param_6);
  if (local_a0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_80 = (&DAT_14c758c60)[uVar7 >> 0x10 & 0xff];
  uStack_7c = (&DAT_14c758c60)[uVar7 >> 8 & 0xff];
  local_78 = (&DAT_14c758c60)[uVar7 & 0xff];
  local_74 = (float)(uVar7 >> 0x18) * 0.003921569;
  FUN_140002266(&local_a0,L"%i AI Rendered",iVar8);
  uVar1 = local_c0;
  local_b0 = local_a0;
  if (local_98 == 0) {
    local_b0 = L"";
  }
  param_6 = param_6 + (int)(fVar11 * 1.1);
  local_a8 = 0;
  if (local_b0 != (wchar_t *)0x0) {
    sVar6 = wcslen(local_b0);
    local_a8 = (int)sVar6;
  }
  local_c8 = &DAT_149e1e308;
  local_d0 = &local_80;
  local_d8 = uVar1;
  FUN_147d8e230(local_b8,(double)param_5,(double)param_6);
  if (local_a0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6 + (int)(fVar11 * 1.1);
}



// FUNCTION 147d7e55a FUN_147d7e55a body=1276 status=ok
// SIG undefined FUN_147d7e55a(void)

int FUN_147d7e55a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,int param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  undefined2 *puVar7;
  wchar_t **ppwVar8;
  undefined4 uVar9;
  float fVar10;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 *local_110;
  undefined4 *local_108;
  undefined2 *local_100;
  int local_f8;
  float local_e8;
  undefined4 uStack_e4;
  int local_e0;
  wchar_t *local_d8;
  undefined4 local_d0;
  wchar_t *local_c8 [2];
  wchar_t *local_b8 [2];
  wchar_t *local_a8 [2];
  wchar_t *local_98;
  int local_90;
  wchar_t *local_88 [2];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar1 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  fVar10 = (float)FUN_140324d4e(uVar1);
  plVar2 = *(longlong **)(param_1 + 0xca8);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x2b8))(plVar2);
    local_78 = plVar2[3];
    FUN_1400021e4(&local_78,&local_100);
    FUN_147a97e60(uVar1,0x20,&local_e8,local_64);
    puVar7 = local_100;
    if (local_f8 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    iVar4 = FUN_147a982e8(uVar1,puVar7);
    if (uVar3 < 4) {
      iVar6 = (int)local_e8;
      switch(uVar3) {
      case 0:
        local_78 = CONCAT44(DAT_14c758c60,DAT_14c75905c);
        local_70 = DAT_14c758c60;
        local_6c = 0x3f800000;
        puVar7 = &DAT_149dfb77a;
        if (local_f8 != 0) {
          puVar7 = local_100;
        }
        FUN_140002266(&local_98,L"%s TC: Closed",puVar7);
        local_88[0] = L"";
        if (local_90 != 0) {
          local_88[0] = local_98;
        }
        uVar9 = 0;
        if (local_88[0] != (wchar_t *)0x0) {
          sVar5 = wcslen(local_88[0]);
          uVar9 = (int)sVar5;
        }
        ppwVar8 = local_88;
        break;
      case 1:
        local_78 = CONCAT44(DAT_14c758c60,DAT_14c75905c);
        local_70 = DAT_14c758c60;
        local_6c = 0x3f800000;
        puVar7 = &DAT_149dfb77a;
        if (local_f8 != 0) {
          puVar7 = local_100;
        }
        FUN_140002266(&local_98,L"%s TC: Error",puVar7);
        local_a8[0] = L"";
        if (local_90 != 0) {
          local_a8[0] = local_98;
        }
        uVar9 = 0;
        if (local_a8[0] != (wchar_t *)0x0) {
          sVar5 = wcslen(local_a8[0]);
          uVar9 = (int)sVar5;
        }
        ppwVar8 = local_a8;
        break;
      case 2:
        local_78 = CONCAT44(DAT_14c75905c,DAT_14c758c60);
        local_70 = DAT_14c758c60;
        local_6c = 0x3f800000;
        puVar7 = &DAT_149dfb77a;
        if (local_f8 != 0) {
          puVar7 = local_100;
        }
        FUN_140002266(&local_98,L"%s TC: Synchronized",puVar7);
        local_b8[0] = L"";
        if (local_90 != 0) {
          local_b8[0] = local_98;
        }
        uVar9 = 0;
        if (local_b8[0] != (wchar_t *)0x0) {
          sVar5 = wcslen(local_b8[0]);
          uVar9 = (int)sVar5;
        }
        ppwVar8 = local_b8;
        break;
      case 3:
        local_78 = CONCAT44(DAT_14c75905c,DAT_14c75905c);
        local_70 = DAT_14c758c60;
        local_6c = 0x3f800000;
        puVar7 = &DAT_149dfb77a;
        if (local_f8 != 0) {
          puVar7 = local_100;
        }
        FUN_140002266(&local_98,L"%s TC: Synchronizing",puVar7);
        local_c8[0] = L"";
        if (local_90 != 0) {
          local_c8[0] = local_98;
        }
        uVar9 = 0;
        if (local_c8[0] != (wchar_t *)0x0) {
          sVar5 = wcslen(local_c8[0]);
          uVar9 = (int)sVar5;
        }
        ppwVar8 = local_c8;
      }
      *(undefined4 *)(ppwVar8 + 1) = uVar9;
      local_108 = &DAT_149e1e308;
      local_118 = uVar1;
      local_110 = &local_78;
      FUN_147d8e230(param_4,(double)(param_5 - (iVar4 + iVar6)),(double)param_6);
      if (local_98 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_100 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  local_78 = CONCAT44(DAT_14c75905c,DAT_14c758c60);
  local_70 = DAT_14c758c60;
  local_6c = 0x3f800000;
  FUN_1468001f0(&local_100);
  uVar9 = 0;
  FUN_14029881c(&local_100,&local_e8,0,0);
  puVar7 = &DAT_149dfb77a;
  if (local_e0 != 0) {
    puVar7 = (undefined2 *)CONCAT44(uStack_e4,local_e8);
  }
  FUN_140002266(&local_98,L"TC: %s",puVar7);
  local_d8 = L"";
  if (local_90 != 0) {
    local_d8 = local_98;
  }
  param_6 = param_6 + (int)(fVar10 * 1.1);
  if (local_d8 != (wchar_t *)0x0) {
    sVar5 = wcslen(local_d8);
    uVar9 = (int)sVar5;
  }
  local_108 = &DAT_149e1e308;
  local_110 = &local_78;
  local_118 = uVar1;
  local_d0 = uVar9;
  FUN_147d8e230(param_4,(double)param_5,(double)param_6);
  if (local_98 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_e4,local_e8) != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6 + (int)(fVar10 * 1.1);
}



// FUNCTION 147d7ea58 FUN_147d7ea58 body=300 status=ok
// SIG undefined FUN_147d7ea58(void)

int FUN_147d7ea58(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 in_R9;
  float fVar3;
  int in_stack_00000028;
  int in_stack_00000030;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  wchar_t *local_70;
  int local_68;
  wchar_t *local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  fVar3 = (float)FUN_140324d4e(uVar1);
  local_50 = DAT_14c758c60;
  local_4c = DAT_14c75905c;
  local_48 = DAT_14c758c60;
  local_44 = 0x3f800000;
  FUN_140002266(&local_70,L"FC: %llu",DAT_14c872be0);
  local_60 = local_70;
  if (local_68 == 0) {
    local_60 = L"";
  }
  local_58 = 0;
  if (local_60 != (wchar_t *)0x0) {
    sVar2 = wcslen(local_60);
    local_58 = (int)sVar2;
  }
  local_78 = &DAT_149e1e308;
  local_80 = &local_50;
  local_88 = uVar1;
  FUN_147d8e230(in_R9,(double)in_stack_00000028,(double)in_stack_00000030);
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (int)(fVar3 * 1.1) + in_stack_00000030;
}



// FUNCTION 147d7eb86 FUN_147d7eb86 body=767 status=ok
// SIG undefined FUN_147d7eb86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_147d7eb86(void)

{
  undefined4 uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  int iVar9;
  undefined8 in_R9;
  wchar_t *pwVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  int in_stack_00000028;
  int in_stack_00000030;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  undefined4 *local_f0;
  undefined4 *local_e8;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  wchar_t *local_b0;
  undefined4 local_a8;
  wchar_t *local_a0;
  int local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  int local_88;
  float local_84;
  wchar_t *local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = *(undefined8 *)(DAT_14cb0d2b0 + 0x30);
  local_b8 = in_R9;
  fVar13 = (float)FUN_140324d4e();
  local_d0 = (int)fVar13;
  local_c4 = DAT_14c845fd8 - _DAT_14c846004;
  local_d8 = (int)ROUND(-0.5 - ((float)local_c4 / 35.0 + (float)local_c4 / 35.0)) >> 1;
  local_d4 = in_stack_00000030 + 0x10;
  if (local_d8 < 0) {
    local_d8 = -local_d8;
    iVar7 = 0;
    pwVar8 = L"";
    iVar12 = 0;
    do {
      iVar6 = 0;
      iVar11 = 0;
      iVar9 = local_d4;
      local_cc = iVar12;
      local_c8 = in_stack_00000028;
      do {
        iVar12 = iVar6 + iVar7;
        if (local_c4 <= iVar12) break;
        pbVar2 = (byte *)FUN_1467f5450(&DAT_14c845fd0,iVar12);
        FUN_1467ee194(pbVar2,&local_a0);
        pwVar5 = pwVar8;
        if (local_98 != 0) {
          pwVar5 = local_a0;
        }
        puVar3 = (undefined8 *)FUN_1467f546c(&DAT_14c845fd0,iVar12);
        pwVar10 = pwVar8;
        if (*(int *)(puVar3 + 1) != 0) {
          pwVar10 = (wchar_t *)*puVar3;
        }
        local_f8 = pwVar5;
        FUN_140002266(&local_90,L"%3i %s %s",iVar12,pwVar10);
        pwVar5 = pwVar8;
        if (local_88 != 0) {
          pwVar5 = (wchar_t *)CONCAT44(uStack_8c,local_90);
        }
        FUN_140056680(&local_80,pwVar5);
        if (CONCAT44(uStack_8c,local_90) != 0) {
          FUN_1400020a8();
        }
        if (local_a0 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        pwVar5 = pwVar8;
        if (local_78 != 0) {
          pwVar5 = local_80;
        }
        iVar12 = FUN_147a982e8(local_c0,pwVar5);
        if (iVar11 < iVar12) {
          iVar11 = iVar12;
        }
        local_90 = (&DAT_14c758c60)[pbVar2[2]];
        uStack_8c = (&DAT_14c758c60)[pbVar2[1]];
        local_88 = (&DAT_14c758c60)[*pbVar2];
        local_84 = (float)pbVar2[3] * 0.003921569;
        local_b0 = pwVar8;
        if (local_78 != 0) {
          local_b0 = local_80;
        }
        uVar1 = 0;
        if (local_b0 != (wchar_t *)0x0) {
          sVar4 = wcslen(local_b0);
          uVar1 = (int)sVar4;
        }
        local_e8 = &DAT_149e1e308;
        local_f0 = &local_90;
        local_f8 = (wchar_t *)local_c0;
        local_a8 = uVar1;
        FUN_147d8e230(local_b8,(double)in_stack_00000028,(double)iVar9,&local_b0);
        if (local_80 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        iVar9 = iVar9 + local_d0;
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x23);
      in_stack_00000028 = local_c8 + iVar11;
      iVar12 = local_cc + 1;
      iVar7 = iVar7 + 0x23;
    } while (iVar12 != local_d8);
  }
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_d0 * 0x23 + local_d4;
}



// FUNCTION 147d7ee86 FUN_147d7ee86 body=1386 status=ok
// SIG undefined FUN_147d7ee86(void)

/* WARNING: Removing unreachable block (ram,0x000147d7f29e) */
/* WARNING: Removing unreachable block (ram,0x000147d7f1a2) */
/* WARNING: Removing unreachable block (ram,0x000147d7f0a6) */
/* WARNING: Removing unreachable block (ram,0x000147d7efaa) */
/* WARNING: Removing unreachable block (ram,0x000147d7f028) */
/* WARNING: Removing unreachable block (ram,0x000147d7f124) */
/* WARNING: Removing unreachable block (ram,0x000147d7f220) */
/* WARNING: Removing unreachable block (ram,0x000147d7f320) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_147d7ee86(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  byte local_58;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != (longlong *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb0d100) && (FUN_144b3d300(&DAT_14cb0d100), DAT_14cb0d100 == -1)) {
      DAT_14cb0d0f0 = 0;
      _DAT_14cb0d0f8 = 0;
      atexit(FUN_143766dd2);
      _Init_thread_footer(&DAT_14cb0d100);
    }
    if (DAT_14cb0d0e8 == '\0') {
      DAT_14cb0d0e8 = '\x01';
      FUN_140056680(&local_48,&DAT_14a819d62);
      uVar2 = _DAT_14cb0d0f8;
      lVar6 = (longlong)DAT_14cb0d0f8;
      uVar4 = DAT_14cb0d0f8 + 1;
      _DAT_14cb0d0f8 = CONCAT44(DAT_14cb0d0fc,uVar4);
      if (DAT_14cb0d0fc < uVar4) {
        FUN_1447a1bd6(&DAT_14cb0d0f0,uVar2 & 0xffffffff);
      }
      lVar1 = DAT_14cb0d0f0;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb0d0f0 + lVar6) = 0;
      *(longlong *)(lVar1 + lVar6) = local_48;
      *(undefined4 *)(lVar1 + 8 + lVar6) = (undefined4)local_40;
      *(undefined4 *)(lVar1 + 0xc + lVar6) = local_40._4_4_;
      local_40 = 0;
      local_48 = 0;
      FUN_140056680(&local_48,L"Unit");
      uVar2 = _DAT_14cb0d0f8;
      lVar6 = (longlong)DAT_14cb0d0f8;
      uVar4 = DAT_14cb0d0f8 + 1;
      _DAT_14cb0d0f8 = CONCAT44(DAT_14cb0d0fc,uVar4);
      if (DAT_14cb0d0fc < uVar4) {
        FUN_1447a1bd6(&DAT_14cb0d0f0,uVar2 & 0xffffffff);
      }
      lVar1 = DAT_14cb0d0f0;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb0d0f0 + lVar6) = 0;
      *(longlong *)(lVar1 + lVar6) = local_48;
      *(undefined4 *)(lVar1 + 8 + lVar6) = (undefined4)local_40;
      *(undefined4 *)(lVar1 + 0xc + lVar6) = local_40._4_4_;
      local_40 = 0;
      local_48 = 0;
      FUN_140056680(&local_48,L"UnitCriticalPath");
      uVar2 = _DAT_14cb0d0f8;
      lVar6 = (longlong)DAT_14cb0d0f8;
      uVar4 = DAT_14cb0d0f8 + 1;
      _DAT_14cb0d0f8 = CONCAT44(DAT_14cb0d0fc,uVar4);
      if (DAT_14cb0d0fc < uVar4) {
        FUN_1447a1bd6(&DAT_14cb0d0f0,uVar2 & 0xffffffff);
      }
      lVar1 = DAT_14cb0d0f0;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb0d0f0 + lVar6) = 0;
      *(longlong *)(lVar1 + lVar6) = local_48;
      *(undefined4 *)(lVar1 + 8 + lVar6) = (undefined4)local_40;
      *(undefined4 *)(lVar1 + 0xc + lVar6) = local_40._4_4_;
      local_40 = 0;
      local_48 = 0;
      FUN_140056680(&local_48,L"UnitMax");
      uVar2 = _DAT_14cb0d0f8;
      lVar6 = (longlong)DAT_14cb0d0f8;
      uVar4 = DAT_14cb0d0f8 + 1;
      _DAT_14cb0d0f8 = CONCAT44(DAT_14cb0d0fc,uVar4);
      if (DAT_14cb0d0fc < uVar4) {
        FUN_1447a1bd6(&DAT_14cb0d0f0,uVar2 & 0xffffffff);
      }
      lVar1 = DAT_14cb0d0f0;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb0d0f0 + lVar6) = 0;
      *(longlong *)(lVar1 + lVar6) = local_48;
      *(undefined4 *)(lVar1 + 8 + lVar6) = (undefined4)local_40;
      *(undefined4 *)(lVar1 + 0xc + lVar6) = local_40._4_4_;
      local_40 = 0;
      local_48 = 0;
      FUN_140056680(&local_48,L"UnitGraph");
      uVar2 = _DAT_14cb0d0f8;
      lVar6 = (longlong)DAT_14cb0d0f8;
      uVar4 = DAT_14cb0d0f8 + 1;
      _DAT_14cb0d0f8 = CONCAT44(DAT_14cb0d0fc,uVar4);
      if (DAT_14cb0d0fc < uVar4) {
        FUN_1447a1bd6(&DAT_14cb0d0f0,uVar2 & 0xffffffff);
      }
      lVar1 = DAT_14cb0d0f0;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb0d0f0 + lVar6) = 0;
      *(longlong *)(lVar1 + lVar6) = local_48;
      *(undefined4 *)(lVar1 + 8 + lVar6) = (undefined4)local_40;
      *(undefined4 *)(lVar1 + 0xc + lVar6) = local_40._4_4_;
      local_40 = 0;
      local_48 = 0;
      FUN_140056680(&local_48,&DAT_14a37f8a0);
      uVar2 = _DAT_14cb0d0f8;
      lVar6 = (longlong)DAT_14cb0d0f8;
      uVar4 = DAT_14cb0d0f8 + 1;
      _DAT_14cb0d0f8 = CONCAT44(DAT_14cb0d0fc,uVar4);
      if (DAT_14cb0d0fc < uVar4) {
        FUN_1447a1bd6(&DAT_14cb0d0f0,uVar2 & 0xffffffff);
      }
      lVar1 = DAT_14cb0d0f0;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb0d0f0 + lVar6) = 0;
      *(longlong *)(lVar1 + lVar6) = local_48;
      *(undefined4 *)(lVar1 + 8 + lVar6) = (undefined4)local_40;
      *(undefined4 *)(lVar1 + 0xc + lVar6) = local_40._4_4_;
      local_40 = 0;
      local_48 = 0;
      FUN_140056680(&local_48,L"Version");
      uVar2 = _DAT_14cb0d0f8;
      lVar6 = (longlong)DAT_14cb0d0f8;
      uVar4 = DAT_14cb0d0f8 + 1;
      _DAT_14cb0d0f8 = CONCAT44(DAT_14cb0d0fc,uVar4);
      if (DAT_14cb0d0fc < uVar4) {
        FUN_1447a1bd6(&DAT_14cb0d0f0,uVar2 & 0xffffffff);
      }
      lVar1 = DAT_14cb0d0f0;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb0d0f0 + lVar6) = 0;
      *(longlong *)(lVar1 + lVar6) = local_48;
      *(undefined4 *)(lVar1 + 8 + lVar6) = (undefined4)local_40;
      *(undefined4 *)(lVar1 + 0xc + lVar6) = local_40._4_4_;
      local_40 = 0;
      local_48 = 0;
      FUN_140056680(&local_48,&DAT_14aa815f0);
      uVar2 = _DAT_14cb0d0f8;
      lVar6 = (longlong)DAT_14cb0d0f8;
      uVar4 = DAT_14cb0d0f8 + 1;
      _DAT_14cb0d0f8 = CONCAT44(DAT_14cb0d0fc,uVar4);
      if (DAT_14cb0d0fc < uVar4) {
        FUN_1447a1bd6(&DAT_14cb0d0f0,uVar2 & 0xffffffff);
      }
      lVar1 = DAT_14cb0d0f0;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb0d0f0 + lVar6) = 0;
      *(longlong *)(lVar1 + lVar6) = local_48;
      local_48 = 0;
      *(undefined4 *)(lVar1 + 8 + lVar6) = (undefined4)local_40;
      *(undefined4 *)(lVar1 + 0xc + lVar6) = local_40._4_4_;
      local_40 = 0;
    }
    if ((param_4 == 0) || (cVar3 = FUN_14054d46e(param_4,L"Skip"), cVar3 == '\0')) {
      FUN_140056680(&local_48,L"Detailed");
      uVar5 = (**(code **)(*param_3 + 0x170))(param_3,&local_48);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_147d8259e(param_1,param_2,param_3,uVar5);
      FUN_140056680(&local_48,L"UnitTime");
      local_58 = (byte)uVar5 ^ 1;
      FUN_147d824d2(param_1,param_2,param_3,&local_48);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3 != (longlong *)0x0;
}



// FUNCTION 147d7f3f4 FUN_147d7f3f4 body=110 status=ok
// SIG undefined FUN_147d7f3f4(void)

undefined8 FUN_147d7f3f4(longlong param_1)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x1150);
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      pcVar1 = *(char **)(*(longlong *)(param_1 + 0x1148) + lVar5 * 8);
      if ((*pcVar1 != '\x06') && (*(longlong *)(pcVar1 + 0x2a8) != 0)) {
        lVar3 = FUN_14119d4d6();
        if (lVar3 != 0) {
          uVar4 = FUN_14119d4d6(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar5 * 8) + 0x2a8
                                 ));
          return uVar4;
        }
        iVar2 = *(int *)(param_1 + 0x1150);
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < iVar2);
  }
  return 0;
}



// FUNCTION 147d7f462 FUN_147d7f462 body=179 status=ok
// SIG undefined FUN_147d7f462(void)

void FUN_147d7f462(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  bool bVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xc60);
  if (plVar2 == param_2) {
    return;
  }
  if ((plVar2 != (longlong *)0x0) && (*(char *)(param_1 + 0xc80) == '\x01')) {
    (**(code **)(*plVar2 + 0x2a8))(plVar2,param_1);
  }
  *(undefined1 *)(param_1 + 0xc80) = 0;
  if (param_2 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xc60) = 0;
  }
  else {
    if (((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
      *(longlong **)(param_1 + 0xc60) = param_2;
    }
    else {
      bVar3 = (*(uint *)(param_2 + 1) & 0x40000000) != 0;
      plVar2 = (longlong *)0x0;
      if (!bVar3) {
        plVar2 = param_2;
      }
      *(longlong **)(param_1 + 0xc60) = plVar2;
      if (bVar3) goto LAB_147d7f4ef;
    }
    uVar1 = (**(code **)(*param_2 + 0x2a0))(param_2,param_1);
    *(undefined1 *)(param_1 + 0xc80) = uVar1;
  }
LAB_147d7f4ef:
  FUN_1447f69b6(param_1 + 0xc68);
  return;
}



// FUNCTION 147d7f515 FUN_147d7f515 body=175 status=ok
// SIG undefined FUN_147d7f515(void)

undefined8 FUN_147d7f515(undefined8 param_1)

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
  local_b8 = FUN_1401f2c50();
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



// FUNCTION 147d7f5c6 FUN_147d7f5c6 body=132 status=ok
// SIG undefined FUN_147d7f5c6(void)

void FUN_147d7f5c6(longlong param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x430) == 0) {
    FUN_14475cc44(param_1 + 0x438,&local_28);
    puVar1 = local_28;
    if (local_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_14154f5bb(param_1 + 0x430,puVar1);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d7f64c FUN_147d7f64c body=142 status=ok
// SIG undefined FUN_147d7f64c(void)

void FUN_147d7f64c(longlong param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0x458) == 0) && (*(longlong *)(param_1 + 0x460) != 0)) {
    FUN_14475cc44(param_1 + 0x460,&local_28);
    puVar1 = local_28;
    if (local_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_14154f5bb(param_1 + 0x458,puVar1);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d7f6dc FUN_147d7f6dc body=256 status=ok
// SIG undefined FUN_147d7f6dc(void)

void FUN_147d7f6dc(longlong param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0xad8) == 0) && (*(longlong *)(param_1 + 0xae8) != 0)) {
    FUN_14475cc44(param_1 + 0xae8,&local_30);
    puVar1 = local_30;
    if (local_28 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_14375ba12(param_1 + 0xad8,puVar1);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((*(longlong *)(param_1 + 0xae0) == 0) && (*(longlong *)(param_1 + 0xb08) != 0)) {
    FUN_14475cc44(param_1 + 0xb08,&local_30);
    puVar1 = local_30;
    if (local_28 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_14375ba12(param_1 + 0xae0,puVar1);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d7f7de FUN_147d7f7de body=256 status=ok
// SIG undefined FUN_147d7f7de(void)

void FUN_147d7f7de(longlong param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0xb28) == 0) && (*(longlong *)(param_1 + 0xb30) != 0)) {
    FUN_14475cc44(param_1 + 0xb30,&local_30);
    puVar1 = local_30;
    if (local_28 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_14375baba(param_1 + 0xb28,puVar1);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((*(longlong *)(param_1 + 0xb50) == 0) && (*(longlong *)(param_1 + 0xb58) != 0)) {
    FUN_14475cc44(param_1 + 0xb58,&local_30);
    puVar1 = local_30;
    if (local_28 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_14375baba(param_1 + 0xb50,puVar1);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d7f8e0 FUN_147d7f8e0 body=145 status=ok
// SIG undefined FUN_147d7f8e0(void)

void FUN_147d7f8e0(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switchD_143c3d4dc::caseD_21();
  if ((*(byte *)(param_2 + 0x2b) & 8) != 0) {
    if (*(longlong *)(param_1 + 0xf50) == 0) {
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      local_28 = 0xffffffff;
    }
    else {
      FUN_1479733cc(&local_38,*(longlong *)(param_1 + 0xf50) + 0x90);
      if (plStack_30 != (longlong *)0x0) {
        (**(code **)(*plStack_30 + 0x38))(plStack_30,param_2);
      }
    }
    FUN_14051bf10(&local_38);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7f972 FUN_147d7f972 body=15 status=ok
// SIG undefined FUN_147d7f972(void)

undefined8 FUN_147d7f972(void)

{
  return *(undefined8 *)(DAT_14cb0d2b0 + 0x80);
}



// FUNCTION 147d7f982 default body=15 status=ok
// SIG undefined default(void)

undefined8 switchD_147aefcf3::default(void)

{
  return *(undefined8 *)(DAT_14cb0d2b0 + 0xa8);
}



// FUNCTION 147d7f992 FUN_147d7f992 body=52 status=ok
// SIG undefined FUN_147d7f992(void)

undefined8 * FUN_147d7f992(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0xf50) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0xffffffff;
  }
  else {
    FUN_14797336e(*(longlong *)(param_1 + 0xf50),param_2);
  }
  return param_2;
}



// FUNCTION 147d7f9d2 FUN_147d7f9d2 body=1025 status=ok
// SIG undefined FUN_147d7f9d2(void)

undefined8 * FUN_147d7f9d2(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14aae5550;
  param_1[1] = &PTR_LAB_14aae55f0;
  plVar7 = (longlong *)FUN_145a50fcc();
  lVar8 = plVar7[0x22];
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 1000))(plVar7);
    lVar8 = plVar7[0x22];
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar8 + 0x104);
  *(undefined4 *)((longlong)param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 2;
  *(undefined1 *)(param_1 + 4) = 1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0d1b0) {
    FUN_144b3d300(&DAT_14cb0d1b0);
    if (DAT_14cb0d1b0 == -1) {
      local_34 = 0;
      local_48 = 4;
      FUN_140a6b41e(&DAT_14cb0d198,L"r.StereoEmulationFOV",&local_34,
                    L"FOV in degrees, of the imaginable HMD for stereo emulation");
      atexit(FUN_143767ec7);
      _Init_thread_footer(&DAT_14cb0d1b0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0d1d0) {
    FUN_144b3d300(&DAT_14cb0d1d0);
    if (DAT_14cb0d1d0 == -1) {
      local_34 = 0;
      local_48 = 4;
      FUN_14078dbce(&DAT_14cb0d1b8,L"r.StereoEmulationWidth",&local_34,
                    L"Width of the imaginable HMD for stereo emulation");
      atexit(FUN_143767f0c);
      _Init_thread_footer(&DAT_14cb0d1d0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0d1f0) {
    FUN_144b3d300(&DAT_14cb0d1f0);
    if (DAT_14cb0d1f0 == -1) {
      local_34 = 0;
      local_48 = 4;
      FUN_14078dbce(&DAT_14cb0d1d8,L"r.StereoEmulationHeight",&local_34,
                    L"Height of the imaginable HMD for stereo emulation");
      atexit(FUN_143767f51);
      _Init_thread_footer(&DAT_14cb0d1f0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0d210) {
    FUN_144b3d300(&DAT_14cb0d210);
    if (DAT_14cb0d210 == -1) {
      local_34 = 0;
      local_48 = 4;
      FUN_14078dbce(&DAT_14cb0d1f8,L"r.StereoEmulationViews",&local_34,
                    L"Number of views in the imaginable HMD for stereo emulation");
      atexit(FUN_143767f96);
      _Init_thread_footer(&DAT_14cb0d210);
    }
  }
  lVar3 = DAT_14cb0d1a8;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar8 + 0xc60) == 0x40000002) {
    uVar9 = 0;
  }
  else {
    bVar6 = FUN_144a61b4f();
    uVar9 = (ulonglong)(bVar6 ^ 1);
  }
  piVar1 = (int *)(lVar8 + 0xc60);
  fVar13 = *(float *)(lVar3 + uVar9 * 4);
  if ((fVar13 != 0.0) || (NAN(fVar13))) {
    if (300.0 <= fVar13) {
      fVar13 = 300.0;
    }
    if (fVar13 <= 20.0) {
      fVar13 = 20.0;
    }
    *(float *)(param_1 + 2) = fVar13;
  }
  piVar4 = DAT_14cb0d1c8;
  if (*piVar1 == 0x40000002) {
    iVar12 = *DAT_14cb0d1c8;
LAB_147d7fb5e:
    iVar11 = *DAT_14cb0d1e8;
  }
  else {
    bVar6 = FUN_144a61b4f();
    piVar5 = DAT_14cb0d1e8;
    iVar12 = piVar4[bVar6 ^ 1];
    if (*piVar1 == 0x40000002) goto LAB_147d7fb5e;
    bVar6 = FUN_144a61b4f();
    lVar8 = DAT_14cb0d208;
    iVar11 = piVar5[bVar6 ^ 1];
    if (*piVar1 != 0x40000002) {
      bVar6 = FUN_144a61b4f();
      uVar9 = (ulonglong)(bVar6 ^ 1);
      goto LAB_147d7fb69;
    }
  }
  uVar9 = 0;
  lVar8 = DAT_14cb0d208;
LAB_147d7fb69:
  iVar2 = *(int *)(lVar8 + uVar9 * 4);
  if (iVar12 != 0) {
    iVar10 = 10000;
    if (iVar12 < 10000) {
      iVar10 = iVar12;
    }
    iVar12 = 100;
    if (100 < iVar10) {
      iVar12 = iVar10;
    }
    *(int *)((longlong)param_1 + 0x14) = iVar12;
  }
  if (iVar11 != 0) {
    iVar12 = 10000;
    if (iVar11 < 10000) {
      iVar12 = iVar11;
    }
    iVar11 = 100;
    if (100 < iVar12) {
      iVar11 = iVar12;
    }
    *(int *)(param_1 + 3) = iVar11;
  }
  if (iVar2 != 0) {
    iVar12 = 0x20;
    if (iVar2 < 0x20) {
      iVar12 = iVar2;
    }
    iVar11 = 1;
    if (1 < iVar12) {
      iVar11 = iVar12;
    }
    *(int *)((longlong)param_1 + 0x1c) = iVar11;
  }
  *(bool *)(param_1 + 4) = DAT_14c760db4 < 3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d7fdd4 FUN_147d7fdd4 body=137 status=ok
// SIG undefined FUN_147d7fdd4(void)

longlong * FUN_147d7fdd4(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_147d85bb8(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 147d7fe5e FUN_147d7fe5e body=169 status=ok
// SIG undefined FUN_147d7fe5e(void)

void FUN_147d7fe5e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0xfe0) != 0) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar1 = FUN_14054d46e(&DAT_14c846b20,L"nohmd");
    if (cVar1 == '\0') {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0xfe0) + 0x120))();
      if (lVar2 != 0) {
        plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xfe0) + 0x120))();
        cVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
        if (cVar1 != '\0') {
          plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xfe0) + 0x120))();
                    /* WARNING: Could not recover jumptable at 0x000147d7fee3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x198))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 147d7ff08 FUN_147d7ff08 body=123 status=ok
// SIG undefined FUN_147d7ff08(void)

longlong FUN_147d7ff08(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x1150) != 0) {
    lVar3 = 0;
    while (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar3),
          *(longlong *)(lVar1 + 0x2a0) != param_2) {
      lVar3 = lVar3 + 8;
      if ((longlong)*(int *)(param_1 + 0x1150) * 8 == lVar3) {
        return 0;
      }
    }
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_14062842a();
      if ((longlong)(int)plVar2[1] != 0) {
        lVar3 = 0;
        do {
          lVar1 = *(longlong *)(*plVar2 + lVar3);
          if ((lVar1 != 0) && (*(int *)(lVar1 + 0xe0) == param_3)) {
            return lVar1;
          }
          lVar3 = lVar3 + 8;
        } while ((longlong)(int)plVar2[1] * 8 != lVar3);
      }
    }
  }
  return 0;
}



// FUNCTION 147d7ff84 FUN_147d7ff84 body=91 status=ok
// SIG undefined FUN_147d7ff84(void)

longlong FUN_147d7ff84(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_1458cac9e();
  plVar3 = &DAT_14cb0d060;
  if (*(longlong *)(lVar2 + 0x2a8) != 0) {
    plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x2a8) + 0x38);
  }
  if ((longlong)(int)plVar3[1] != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*plVar3 + lVar2);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0xe0) == param_3)) {
        return lVar1;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)(int)plVar3[1] * 8 != lVar2);
  }
  return 0;
}



// FUNCTION 147d7ffe0 FUN_147d7ffe0 body=160 status=ok
// SIG undefined FUN_147d7ffe0(void)

void FUN_147d7ffe0(longlong param_1,longlong *param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0 < (longlong)*(int *)(param_1 + 0x1150)) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar5 * 8) + 0x2a8);
      if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x40) != 0)) {
        lVar4 = (longlong)*(int *)(lVar1 + 0x40) * 8;
        lVar3 = 0;
LAB_147d8001f:
        if (*(longlong **)(*(longlong *)(lVar1 + 0x38) + lVar3) != param_2) goto LAB_147d80075;
        lVar3 = 0;
        do {
          plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x38) + lVar3);
          if ((plVar2 != param_2 && plVar2 != (longlong *)0x0) && ((int)plVar2[0x1c] == param_4)) {
                    /* WARNING: Could not recover jumptable at 0x000147d80072. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar2 + 0x310))(plVar2,param_3);
            return;
          }
          lVar3 = lVar3 + 8;
        } while (lVar4 != lVar3);
      }
LAB_147d80047:
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_1 + 0x1150));
  }
  return;
LAB_147d80075:
  lVar3 = lVar3 + 8;
  if (lVar4 == lVar3) goto LAB_147d80047;
  goto LAB_147d8001f;
}



// FUNCTION 147d80080 FUN_147d80080 body=46 status=ok
// SIG undefined FUN_147d80080(void)

undefined8 FUN_147d80080(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1405e677a();
  if (*(longlong *)(lVar1 + 0x2a8) != 0) {
    uVar2 = FUN_140fe13cc(*(longlong *)(lVar1 + 0x2a8),param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147d800ae FUN_147d800ae body=36 status=ok
// SIG undefined FUN_147d800ae(void)

void FUN_147d800ae(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a82cde();
  FUN_1400e4168(uVar1,0);
  uVar1 = FUN_144a82cde();
  FUN_14626bd28(uVar1);
  return;
}



// FUNCTION 147d800d2 FUN_147d800d2 body=564 status=ok
// SIG undefined FUN_147d800d2(void)

void FUN_147d800d2(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_118 [40];
  undefined2 *local_f0;
  int local_e8;
  undefined2 *local_e0;
  int local_d8;
  undefined2 *local_d0;
  int local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [64];
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar2 = FUN_144a8b586();
  FUN_14626b538(uVar2,&local_e0,4);
  puVar4 = &DAT_149dfb77a;
  if (local_d8 != 0) {
    puVar4 = local_e0;
  }
  FUN_140002266(&local_d0,L"Engine: %s",puVar4);
  FUN_1468001b0(&local_f0);
  puVar4 = &DAT_149dfb77a;
  if (local_e8 != 0) {
    puVar4 = local_f0;
  }
  FUN_140002266(local_c0,L"GameVersion Branch: %s",puVar4);
  uVar1 = FUN_140e82e72();
  uVar2 = FUN_1457ba796(uVar1);
  FUN_140002266(local_b0,L"Configuration: %s",uVar2);
  uVar2 = thunk_FUN_145c581c1();
  FUN_140002266(local_a0,L"Build: %s",uVar2);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_140002266(local_90,L"CommandLine: %s",&DAT_14c846b20);
  local_40 = 0;
  FUN_147d8715a(local_80,&local_d0);
  lVar3 = 0x50;
  do {
    if (*(longlong *)((longlong)&local_e0 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0);
  if (local_f0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = FUN_1448324a4(param_1,&DAT_14aae36b6);
  puVar4 = &DAT_149e01f72;
  if (lVar3 == 0) {
    puVar4 = &DAT_149e19f34;
  }
  FUN_147d806fa(&local_d0,local_80,puVar4);
  puVar4 = &DAT_149dfb77a;
  if (local_c8 != 0) {
    puVar4 = local_d0;
  }
  FUN_140047918(param_2,&DAT_149e0625e,puVar4);
  puVar4 = &DAT_149dfb77a;
  if (local_c8 != 0) {
    puVar4 = local_d0;
  }
  FUN_142855b70(puVar4);
  FUN_1448324a4(param_1,L"-display");
  if (local_d0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_147d8078c(local_80);
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d80308 FUN_147d80308 body=467 status=ok
// SIG undefined FUN_147d80308(void)

void FUN_147d80308(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined4 local_78;
  int local_74;
  undefined2 *local_70;
  int local_68;
  longlong local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140245d8a(&local_98,0,param_1,0);
  if (local_74 == 0) {
    FUN_1468161aa(param_2,L"BAD URL");
  }
  else {
    puVar2 = &DAT_149dfb77a;
    if (local_90 != 0) {
      puVar2 = local_98;
    }
    FUN_140047918(param_2,L"     Protocol: %s",puVar2);
    puVar2 = &DAT_149dfb77a;
    if (local_80 != 0) {
      puVar2 = local_88;
    }
    FUN_140047918(param_2,L"         Host: %s",puVar2);
    FUN_140047918(param_2,L"         Port: %i",local_78);
    puVar2 = &DAT_149dfb77a;
    if (local_68 != 0) {
      puVar2 = local_70;
    }
    FUN_140047918(param_2,L"          Map: %s",puVar2);
    FUN_140047918(param_2,L"   NumOptions: %i",local_48);
    if (0 < local_48) {
      lVar3 = 8;
      uVar1 = 0;
      do {
        puVar2 = &DAT_149dfb77a;
        if (*(int *)(local_50 + lVar3) != 0) {
          puVar2 = *(undefined2 **)(local_50 + -8 + lVar3);
        }
        FUN_140047918(param_2,L"     Option %i: %s",uVar1 & 0xffffffff,puVar2);
        uVar1 = uVar1 + 1;
        lVar3 = lVar3 + 0x10;
      } while ((longlong)uVar1 < (longlong)local_48);
    }
    puVar2 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar2 = local_40;
    }
    FUN_140047918(param_2,L"       Portal: %s",puVar2);
    FUN_141641396(&local_98,&local_a8,0);
    puVar2 = &DAT_149dfb77a;
    if (local_a0 != 0) {
      puVar2 = local_a8;
    }
    FUN_140047918(param_2,L"       String: \'%s\'",puVar2);
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_141238aee(&local_98);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d804dc FUN_147d804dc body=169 status=ok
// SIG undefined FUN_147d804dc(void)

/* WARNING: Removing unreachable block (ram,0x000147d80562) */

void FUN_147d804dc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680();
  iVar1 = *(int *)(param_1 + 0xc30);
  *(uint *)(param_1 + 0xc30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xc34) < iVar1 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 0xc28),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xc28);
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = local_30;
  *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_28;
  *(undefined4 *)(lVar2 + 0xc + lVar3) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d80586 FUN_147d80586 body=166 status=ok
// SIG undefined FUN_147d80586(void)

void FUN_147d80586(longlong param_1,short *param_2)

{
  wchar_t *_Str;
  float fVar1;
  double dVar2;
  undefined1 auStack_58 [40];
  wchar_t *local_30;
  int local_28;
  short *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_2;
  if (*param_2 == 0) {
    *(undefined4 *)(param_1 + 0xdb4) = 0x400ccccd;
  }
  else {
    FUN_14619c2be(&local_30,&local_20,0);
    _Str = local_30;
    if (local_28 == 0) {
      _Str = L"";
    }
    dVar2 = _wtof(_Str);
    fVar1 = (float)dVar2;
    if (5.0 <= fVar1) {
      fVar1 = 5.0;
    }
    if (fVar1 <= 0.5) {
      fVar1 = 0.5;
    }
    *(float *)(param_1 + 0xdb4) = fVar1;
    if (local_30 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d8062e FUN_147d8062e body=198 status=ok
// SIG undefined FUN_147d8062e(void)

void FUN_147d8062e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 unaff_RBP;
  undefined7 uVar5;
  undefined1 uVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  char local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar3 = (uint)CONCAT71(uVar5,1);
  local_38 = param_2;
  cVar1 = FUN_140988638(&local_38,L"GROUPED",1);
  uVar6 = 1;
  if (cVar1 == '\0') {
    uVar3 = (uint)CONCAT71(uVar5,1);
    cVar2 = FUN_140988638(&local_38,L"ENABLED",1);
    if (cVar2 == '\0') {
      uVar6 = 1;
      uVar3 = FUN_140988638(&local_38,L"DISABLED",1);
      uVar3 = uVar3 ^ 1;
    }
    else {
      uVar6 = 0;
    }
  }
  plVar4 = (longlong *)FUN_144a8f934();
  local_48 = uVar6;
  local_40 = cVar1;
  (**(code **)(*plVar4 + 0x38))(plVar4,param_3,param_1,uVar3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d806fa FUN_147d806fa body=143 status=ok
// SIG undefined FUN_147d806fa(void)

undefined8 * FUN_147d806fa(undefined8 *param_1,longlong param_2,wchar_t *param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = *(longlong *)(param_2 + 0x40);
  if (*(longlong *)(param_2 + 0x40) == 0) {
    lVar4 = param_2;
  }
  iVar1 = *(int *)(param_2 + 0x48);
  if ((longlong)iVar1 != 0) {
    iVar5 = 1;
    lVar7 = 0;
    do {
      if ((char)iVar5 == '\0') {
        sVar3 = wcslen(param_3);
        FUN_1400020e8(param_1,param_3,sVar3 & 0xffffffff);
      }
      iVar2 = *(int *)(lVar4 + 8 + lVar7);
      iVar5 = 0;
      iVar6 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar6 = iVar5;
      }
      FUN_1400020e8(param_1,*(undefined8 *)(lVar4 + lVar7),iVar6);
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar7);
  }
  return param_1;
}



// FUNCTION 147d8078a FUN_147d8078a body=1 status=ok
// SIG undefined FUN_147d8078a(void)

void FUN_147d8078a(void)

{
  return;
}



// FUNCTION 147d8078c FUN_147d8078c body=53 status=ok
// SIG undefined FUN_147d8078c(void)

void FUN_147d8078c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = param_1;
  }
  FUN_1447a1747(lVar1,*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d807c2 FUN_147d807c2 body=151 status=ok
// SIG undefined FUN_147d807c2(void)

void FUN_147d807c2(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((*(byte *)(param_1 + 0xd94) & 1) != 0) {
    iVar4 = *(int *)(param_1 + 0x1150);
    if (0 < iVar4) {
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar6 * 8) + 0x2a8);
        if (lVar1 != 0) {
          iVar5 = *(int *)(lVar1 + 0x40);
          if (0 < iVar5) {
            lVar7 = 0;
            do {
              lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x38) + lVar7 * 8) + 0x30);
              if ((lVar2 != 0) &&
                 (plVar3 = *(longlong **)(lVar2 + 0x440), plVar3 != (longlong *)0x0)) {
                (**(code **)(*plVar3 + 0x6d8))(plVar3,param_2);
                iVar5 = *(int *)(lVar1 + 0x40);
              }
              lVar7 = lVar7 + 1;
            } while (lVar7 < iVar5);
            iVar4 = *(int *)(param_1 + 0x1150);
          }
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < iVar4);
    }
  }
  return;
}



// FUNCTION 147d80866 FUN_147d80866 body=1 status=ok
// SIG undefined FUN_147d80866(void)

void FUN_147d80866(void)

{
  return;
}



// FUNCTION 147d8086b FUN_147d8086b body=12 status=ok
// SIG undefined FUN_147d8086b(void)

undefined8 FUN_147d8086b(void)

{
  return *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
}



// FUNCTION 147d80884 FUN_147d80884 body=120 status=ok
// SIG undefined FUN_147d80884(void)

longlong FUN_147d80884(longlong param_1,int param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0 < (longlong)*(int *)(param_1 + 0x1150)) {
    lVar5 = 0;
    do {
      pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x1148) + lVar5 * 8);
      if ((((*(longlong *)(pbVar1 + 0x360) != 0) &&
           (lVar2 = *(longlong *)(pbVar1 + 0x2a8), lVar2 != 0)) && ((*pbVar1 | 2) == 3)) &&
         ((longlong)*(int *)(lVar2 + 0x40) != 0)) {
        lVar4 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + lVar4);
          if ((lVar3 != 0) && (*(int *)(lVar3 + 0xe0) == param_2)) {
            return lVar3;
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)*(int *)(lVar2 + 0x40) * 8 != lVar4);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_1 + 0x1150));
  }
  return 0;
}



// FUNCTION 147d808fc FUN_147d808fc body=54 status=ok
// SIG undefined FUN_147d808fc(void)

undefined8 FUN_147d808fc(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_1458cac9e();
  plVar2 = &DAT_14cb0d060;
  if (*(longlong *)(lVar1 + 0x2a8) != 0) {
    plVar2 = (longlong *)(*(longlong *)(lVar1 + 0x2a8) + 0x38);
  }
  return *(undefined8 *)(*plVar2 + (longlong)param_3 * 8);
}



// FUNCTION 147d80932 FUN_147d80932 body=64 status=ok
// SIG undefined FUN_147d80932(void)

longlong FUN_147d80932(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < (longlong)*(int *)(param_1 + 0x1150)) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar2 * 8);
      if (*(longlong *)(lVar1 + 0x2a0) == param_2) {
        lVar2 = *(longlong *)(lVar1 + 0x2a8);
        if (lVar2 == 0) {
          return 0;
        }
        if (*(int *)(lVar2 + 0x40) < 1) {
          lVar2 = 0;
        }
        else {
          lVar2 = **(longlong **)(lVar2 + 0x38);
          if ((lVar2 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar2);
          }
        }
        return lVar2;
      }
      lVar2 = lVar2 + 1;
    } while (*(int *)(param_1 + 0x1150) != lVar2);
  }
  return 0;
}



// FUNCTION 147d80972 FUN_147d80972 body=29 status=ok
// SIG undefined FUN_147d80972(void)

void FUN_147d80972(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1405e677a();
  FUN_14375e49a(uVar1,param_3);
  return;
}



// FUNCTION 147d80990 FUN_147d80990 body=138 status=ok
// SIG undefined FUN_147d80990(void)

longlong FUN_147d80990(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x1150) != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar3);
      if (*(longlong *)(lVar2 + 0x230) == param_2) {
        if (lVar2 != 0) goto LAB_147d809c4;
        break;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0x1150) * 8 != lVar3);
  }
  lVar2 = FUN_14572ad1a(DAT_14cb0d2b0,0);
LAB_147d809c4:
  if (0 < (int)*(uint *)(lVar2 + 0x2b8)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x2b0) + lVar3);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x200) == param_3)) {
        return lVar1;
      }
      lVar3 = lVar3 + 0x10;
    } while ((ulonglong)*(uint *)(lVar2 + 0x2b8) << 4 != lVar3);
  }
  return 0;
}



// FUNCTION 147d80a1a FUN_147d80a1a body=93 status=ok
// SIG undefined FUN_147d80a1a(void)

void FUN_147d80a1a(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x1150) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar2);
      if (*(longlong *)(lVar1 + 0x230) == param_2) {
        if (lVar1 != 0) goto LAB_147d80a6a;
        break;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x1150) * 8 != lVar2);
  }
  lVar1 = FUN_14572ad1a(DAT_14cb0d2b0,0);
LAB_147d80a6a:
  FUN_14375e49a(lVar1,param_3);
  return;
}



// FUNCTION 147d80a7a FUN_147d80a7a body=227 status=ok
// SIG undefined FUN_147d80a7a(void)

void FUN_147d80a7a(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 unaff_RBX;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong lVar8;
  
  uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (param_3 == (longlong *)0x0) {
    uVar6 = CONCAT71(uVar7,1);
  }
  else if (*(code **)(*param_3 + 0x3c0) == (code *)&LAB_1448ff5f6) {
    uVar6 = CONCAT71(uVar7,param_3[0x1e] == 0);
  }
  else {
    uVar5 = (**(code **)(*param_3 + 0x3c0))(param_3);
    uVar6 = (ulonglong)uVar5;
  }
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x1f0) != 0)) {
    FUN_147a98aa2(*(longlong *)(param_2 + 0x1f0),param_4,uVar6 & 0xffffffff);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1150);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1148);
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar8);
      lVar4 = *(longlong *)(lVar3 + 0x230);
      if (((lVar4 != 0) && (*(longlong **)(lVar4 + 0x30) == param_3)) &&
         (lVar3 = *(longlong *)(lVar3 + 0x2a8), lVar3 != 0)) {
        FUN_147a98aa2(lVar3,param_4,uVar6 & 0xffffffff);
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  return;
}



// FUNCTION 147d80b78 FUN_147d80b78 body=211 status=ok
// SIG undefined FUN_147d80b78(void)

undefined8
FUN_147d80b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [40];
  undefined2 *local_70;
  int local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = FUN_1405e677a(param_1,param_4);
  FUN_140245d8a(local_98,lVar2 + 0x160,param_2,0);
  cVar1 = FUN_147d8a6b2(local_98);
  if ((cVar1 == '\0') || (cVar1 = FUN_14622a50c(), cVar1 != '\0')) {
    FUN_14640a448(param_1,param_4,param_2,0);
  }
  else {
    if (local_68 == 0) {
      local_70 = &DAT_149dfb77a;
    }
    FUN_140047918(param_3,L"ERROR: The map \'%s\' does not exist.",local_70);
  }
  FUN_141238aee(local_98);
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 147d80c4c FUN_147d80c4c body=217 status=ok
// SIG undefined FUN_147d80c4c(void)

undefined8
FUN_147d80c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [40];
  undefined2 *local_70;
  int local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = FUN_1405e677a(param_1,param_4);
  FUN_140245d8a(local_98,lVar2 + 0x160,param_2,1);
  cVar1 = FUN_147d8a6b2(local_98);
  if ((cVar1 == '\0') || (cVar1 = FUN_14622a50c(), cVar1 != '\0')) {
    FUN_14640a448(param_1,param_4,param_2,1);
  }
  else {
    if (local_68 == 0) {
      local_70 = &DAT_149dfb77a;
    }
    FUN_140047918(param_3,L"ERROR: The map \'%s\' does not exist.",local_70);
  }
  FUN_141238aee(local_98);
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 147d80d26 FUN_147d80d26 body=566 status=ok
// SIG undefined FUN_147d80d26(void)

undefined8 FUN_147d80d26(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a0 [36];
  int local_7c;
  undefined2 *local_78;
  int local_70;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar4 = FUN_1405e677a(param_1,param_4);
  FUN_140245d8a(local_a0,lVar4 + 0x160,param_2,1);
  cVar3 = FUN_147d8a6b2(local_a0);
  if (cVar3 == '\0') {
    FUN_1468161aa(param_3,L"ERROR: Can only perform streaming load for local URLs.");
  }
  else {
    cVar3 = FUN_14622a50c(extraout_XMM0_Da,&local_78);
    if ((cVar3 == '\0') || (local_7c == 0)) {
      if (local_70 == 0) {
        local_78 = &DAT_149dfb77a;
      }
      pwVar6 = L"ERROR: The map \'%s\' does not exist.";
LAB_147d80f2e:
      FUN_140047918(param_3,pwVar6,local_78);
    }
    else {
      if ((longlong)*(int *)(param_4 + 0x198) != 0) {
        plVar5 = *(longlong **)(param_4 + 400);
        plVar1 = plVar5 + *(int *)(param_4 + 0x198);
LAB_147d80e11:
        iVar2 = *(int *)(*plVar5 + 0x68);
        if (iVar2 != local_70) {
          if (iVar2 + local_70 == 1) goto LAB_147d80f47;
          goto LAB_147d80e80;
        }
        if (1 < local_70) {
          lVar4 = 0;
          do {
            uVar8 = *(ushort *)(*(longlong *)(*plVar5 + 0x60) + lVar4);
            uVar9 = (ulonglong)uVar8;
            uVar7 = *(ushort *)((longlong)local_78 + lVar4);
            if (uVar8 == uVar7) {
              if (uVar8 == 0) break;
            }
            else {
              if (0x7f < (uVar7 | uVar8)) goto LAB_147d80f3b;
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar10 = (ulonglong)uVar7;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
              if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar10]) goto LAB_147d80f3b;
            }
            lVar4 = lVar4 + 2;
          } while( true );
        }
        goto LAB_147d80f47;
      }
LAB_147d80e89:
      local_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      if (local_70 == 0) {
        local_78 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_c0,local_78,1);
      uStack_b0 = CONCAT44(uStack_b0._4_4_,1);
      FUN_1446f84a2(&local_b8,0);
      *local_b8 = local_c0;
      lVar4 = FUN_1405e677a(param_1,param_4);
      FUN_14375eea6(extraout_XMM0_Da_00,lVar4,&local_b8);
      *(byte *)(lVar4 + 0x278) = *(byte *)(lVar4 + 0x278) | 1;
      FUN_14375f0ac(param_1,lVar4);
      if (local_b8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_141238aee(local_a0);
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
LAB_147d80f3b:
  if (uVar8 == uVar7) {
LAB_147d80f47:
    if (local_70 == 0) {
      local_78 = &DAT_149dfb77a;
    }
    pwVar6 = L"ERROR: The map \'%s\' is already loaded.";
    goto LAB_147d80f2e;
  }
LAB_147d80e80:
  plVar5 = plVar5 + 1;
  if (plVar5 == plVar1) goto LAB_147d80e89;
  goto LAB_147d80e11;
}



// FUNCTION 147d80f5e FUN_147d80f5e body=558 status=ok
// SIG undefined FUN_147d80f5e(void)

undefined8
FUN_147d80f5e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  longlong local_98 [2];
  void *local_88;
  ulonglong uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined2 *local_68;
  ulonglong uStack_60;
  void *local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar2 = FUN_14490d72a(param_4);
  if (iVar2 != 3) {
    FUN_140056680(&local_50,param_2);
    local_68 = (undefined2 *)0x0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    FUN_140056680(&local_88,&DAT_149e1423e);
    local_a0 = 0;
    local_a8 = 0;
    cVar1 = FUN_1407cdbc6(&local_50,&local_88,&local_68,&local_78);
    uVar6 = extraout_XMM0_Da;
    if (local_88 != (void *)0x0) {
      uVar6 = FUN_1400020a8();
    }
    if (cVar1 == '\0') {
      iVar2 = (int)uStack_48 + -1;
      if ((int)uStack_48 == 0) {
        iVar2 = 0;
      }
      uVar6 = FUN_1402980a2(&local_68,local_50,iVar2);
    }
    cVar1 = FUN_14622a50c(uVar6,&local_68);
    puVar5 = local_68;
    if (cVar1 == '\0') {
      if ((int)uStack_60 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      FUN_140047918(param_3,L"ERROR: The map \'%s\' is either short package name or does not exist."
                    ,puVar5);
    }
    else {
      iVar2 = (int)uStack_70;
      if ((int)uStack_70 < 2) {
        local_88 = (void *)0x0;
        lVar4 = (longlong)(int)uStack_60;
        uStack_80 = CONCAT44(uStack_80._4_4_,(int)uStack_60);
        if (lVar4 == 0) {
          uStack_80 = uStack_60 & 0xffffffff;
        }
        else {
          FUN_1446dd670(&local_88,uStack_60 & 0xffffffff,0);
          memcpy(local_88,puVar5,lVar4 * 2);
        }
      }
      else {
        FUN_1449b8608(local_98,&local_68,&DAT_149e1423e);
        FUN_144a7dea0(&local_88,local_98,&local_78);
      }
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_50 = local_88;
      uStack_48 = uStack_80;
      local_88 = (void *)0x0;
      uStack_80 = 0;
      if ((1 < iVar2) && (local_98[0] != 0)) {
        FUN_1400020a8();
      }
      FUN_146152ff8(param_4,&local_50,0,0);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar3 = 1;
    if (cVar1 != '\0') goto LAB_147d80f99;
  }
  uVar3 = 0;
LAB_147d80f99:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147d8118e FUN_147d8118e body=23 status=ok
// SIG undefined FUN_147d8118e(void)

undefined1 FUN_147d8118e(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  FUN_147d811a6(param_1,param_4,*(undefined8 *)(param_4 + 0x38));
  return 1;
}



// FUNCTION 147d811a6 FUN_147d811a6 body=738 status=ok
// SIG undefined FUN_147d811a6(void)

void FUN_147d811a6(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_168 [32];
  longlong local_148 [2];
  undefined2 *local_138;
  int local_130;
  undefined1 local_128 [104];
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [104];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((longlong)(int)param_1[0x22a] != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1[0x229] + lVar4);
      if (*(longlong *)(lVar1 + 0x360) == param_2) {
        if (lVar1 != 0) {
          FUN_14622b792(lVar1 + 0x160,L"Listen",0,&DAT_14c872af8);
          FUN_14622b792(lVar1 + 0x160,&DAT_14a9e5386,0,&DAT_14c872af8);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
        }
        break;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)param_1[0x22a] * 8 != lVar4);
  }
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x4f0))(param_1,param_3);
    if (param_2 != 0) {
      FUN_1405e677a(param_1,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
    }
    (**(code **)(*param_3 + 0x2f8))(param_3);
    (**(code **)(*param_3 + 0x300))(param_3);
    lVar4 = param_1[0x22a];
    if ((longlong)(int)lVar4 != 0) {
      lVar1 = param_1[0x229];
      lVar7 = 0;
      do {
        pcVar2 = *(char **)(lVar1 + lVar7);
        if (*pcVar2 == '\x01') {
          FUN_140810d00(local_b0,0);
          FUN_14622068e(local_b0,L"DefaultPlayer",&DAT_14c872af8);
          plVar3 = (longlong *)FUN_140628716();
          lVar5 = plVar3[0x22];
          if (lVar5 == 0) {
            (**(code **)(*plVar3 + 1000))(plVar3);
            lVar5 = plVar3[0x22];
            if (lVar5 != 0) goto LAB_147d812ff;
          }
          else {
LAB_147d812ff:
            FUN_140810f5e(local_148,0);
            FUN_144a7dea0(&local_138,local_148,lVar5 + 0x28);
            puVar6 = &DAT_149dfb77a;
            if (local_130 != 0) {
              puVar6 = local_138;
            }
            FUN_140245d8a(local_128,local_b0,puVar6,1);
            FUN_141641396(local_128,&local_c0,0);
            if ((longlong *)(pcVar2 + 0x148) == &local_c0) {
              if (local_c0 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*(longlong *)(pcVar2 + 0x148) != 0) {
                FUN_1400020a8();
              }
              *(longlong *)(pcVar2 + 0x148) = local_c0;
              local_c0 = 0;
              *(undefined4 *)(pcVar2 + 0x150) = (undefined4)local_b8;
              *(undefined4 *)(pcVar2 + 0x154) = local_b8._4_4_;
              local_b8 = 0;
            }
            FUN_141238aee(local_128);
            if (local_138 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_148[0] != 0) {
              FUN_1400020a8();
            }
            pcVar2[0x158] = '\x01';
          }
          FUN_141238aee(local_b0);
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d814cc FUN_147d814cc body=253 status=ok
// SIG undefined FUN_147d814cc(void)

undefined8
FUN_147d814cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined2 *puVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1405e677a(param_1,param_4);
  if (*(int *)(lVar1 + 0x1ec) != 0) {
    puVar2 = &DAT_149dfb77a;
    if (*(int *)(lVar1 + 0x1e0) != 0) {
      puVar2 = *(undefined2 **)(lVar1 + 0x1d8);
    }
    lVar3 = 0;
    while( true ) {
      uVar4 = *(ushort *)((longlong)puVar2 + lVar3);
      uVar5 = (ulonglong)uVar4;
      uVar6 = *(ushort *)((longlong)&DAT_149dfb77a + lVar3);
      if (uVar4 != uVar6) break;
      if (uVar4 == 0) goto LAB_147d81563;
LAB_147d81538:
      lVar3 = lVar3 + 2;
    }
    if ((uVar6 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
      uVar7 = (ulonglong)uVar6;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_147d81538;
    }
    if (uVar4 != uVar6) {
      FUN_141641396(lVar1 + 0x1c8,&local_30,0);
      puVar2 = local_30;
      if (local_28 == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      FUN_14640a448(param_1,param_4,puVar2,0);
      if (local_30 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_147d81563:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 147d815ca FUN_147d815ca body=96 status=ok
// SIG undefined FUN_147d815ca(void)

void FUN_147d815ca(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    iVar2 = (int)param_1[0x22a];
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1[0x229] + lVar3 * 8) + 0x230);
        if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) == param_2)) {
          (**(code **)(*param_1 + 0x4f8))(param_1);
          iVar2 = (int)param_1[0x22a];
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
  }
  return;
}



// FUNCTION 147d8162e FUN_147d8162e body=382 status=ok
// SIG undefined FUN_147d8162e(void)

void FUN_147d8162e(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_148 [32];
  undefined1 local_128 [104];
  longlong local_c0 [2];
  undefined2 *local_b0;
  int local_a8;
  undefined1 local_a0 [104];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_140810d00(local_a0,0);
  FUN_14622068e(local_a0,L"DefaultPlayer",&DAT_14c872af8);
  plVar2 = (longlong *)FUN_140628716();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  FUN_140810f5e(local_c0,0);
  FUN_144a7dea0(&local_b0,local_c0,lVar3 + 0x28);
  if (local_c0[0] != 0) {
    FUN_1400020a8();
  }
  puVar4 = local_b0;
  if (local_a8 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140245d8a(local_128,local_a0,puVar4,1);
  iVar1 = (**(code **)(*param_1 + 0x4b8))(param_1,param_2,local_128,local_38);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x550))(param_1,param_2,&local_b0,local_38);
  }
  if (local_b0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_141238aee(local_a0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d817ae FUN_147d817ae body=458 status=ok
// SIG undefined FUN_147d817ae(void)

void FUN_147d817ae(longlong param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (0 < *(int *)(param_1 + 0x240)) {
    lVar12 = 0;
    do {
      if (*(byte *)(*(longlong *)(param_1 + 0x238) + lVar12 * 0x38) == param_2) {
        lVar8 = *(longlong *)(param_1 + 0x238) + lVar12 * 0x38;
        iVar1 = *(int *)(lVar8 + 0x10);
        iVar2 = *(int *)(param_3 + 1);
        if (iVar1 == iVar2) {
          if (1 < iVar1) {
            puVar4 = (undefined2 *)*param_3;
            lVar11 = 0;
            while( true ) {
              uVar5 = *(ushort *)(*(longlong *)(lVar8 + 8) + lVar11);
              uVar6 = (ulonglong)uVar5;
              uVar9 = *(ushort *)((longlong)puVar4 + lVar11);
              if (uVar5 != uVar9) break;
              if (uVar5 == 0) goto LAB_147d818c0;
LAB_147d81881:
              lVar11 = lVar11 + 2;
            }
            if ((uVar9 | uVar5) < 0x80) {
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
              uVar10 = (ulonglong)uVar9;
              uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
              if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar10]) goto LAB_147d81881;
            }
            if (uVar5 != uVar9) goto LAB_147d81952;
          }
        }
        else if (iVar1 + iVar2 != 1) {
          puVar4 = (undefined2 *)*param_3;
LAB_147d81952:
          if (iVar2 == 0) {
            puVar4 = &DAT_149dfb77a;
          }
          lVar11 = 0;
          while( true ) {
            uVar5 = *(ushort *)((longlong)puVar4 + lVar11);
            uVar6 = (ulonglong)uVar5;
            uVar9 = *(ushort *)((longlong)&DAT_149dfb77a + lVar11);
            if (uVar5 != uVar9) break;
            if (uVar5 == 0) goto LAB_147d818c0;
LAB_147d81838:
            lVar11 = lVar11 + 2;
          }
          if ((uVar9 | uVar5) < 0x80) {
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            uVar10 = (ulonglong)uVar9;
            uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar10]) goto LAB_147d81838;
          }
          if (uVar5 != uVar9) goto LAB_147d81928;
        }
LAB_147d818c0:
        if (0 < *(int *)(lVar8 + 0x30)) {
          lVar11 = 0;
          do {
            uVar3 = *(uint *)(*(longlong *)(*(longlong *)(lVar8 + 0x28) + lVar11 * 8) + 0xc);
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            FUN_14482b126(lVar7);
            lVar11 = lVar11 + 1;
          } while (lVar11 < *(int *)(lVar8 + 0x30));
        }
        *(undefined4 *)(lVar8 + 0x30) = 0;
        if (*(int *)(lVar8 + 0x34) != 0) {
          FUN_140c6998c((longlong *)(lVar8 + 0x28));
        }
      }
LAB_147d81928:
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(param_1 + 0x240));
  }
  return;
}



// FUNCTION 147d81978 FUN_147d81978 body=304 status=ok
// SIG undefined FUN_147d81978(void)

void FUN_147d81978(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  
  lVar3 = *(longlong *)(param_1 + 0xc20);
  iVar2 = *(int *)(lVar3 + 0x50);
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      piVar8 = (int *)(lVar3 + 0x50);
      lVar1 = *(longlong *)(lVar3 + 0x48);
      lVar7 = *(longlong *)(lVar1 + (longlong)iVar4 * 0x20);
      if (lVar7 == 0) {
        plVar5 = (longlong *)(lVar3 + 0x48);
        iVar6 = iVar2 - (iVar4 + 1);
        if (iVar6 != 0) {
LAB_147d81a70:
          _Dst = (void *)((longlong)iVar4 * 0x20 + lVar1);
          memmove(_Dst,(void *)((longlong)_Dst + 0x20),(longlong)iVar6 << 5);
          iVar2 = *piVar8;
        }
LAB_147d81a83:
        *piVar8 = iVar2 + -1;
        FUN_147d876e0(plVar5);
        iVar4 = iVar4 + -1;
      }
      else {
        do {
          lVar3 = FUN_144a7b8cc();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
LAB_147d81a4c:
            lVar3 = *(longlong *)(param_1 + 0xc20);
            plVar5 = (longlong *)(lVar3 + 0x48);
            iVar2 = *(int *)(lVar3 + 0x50);
            piVar8 = (int *)(lVar3 + 0x50);
            iVar6 = iVar2 - (iVar4 + 1);
            if (iVar6 == 0) goto LAB_147d81a83;
            lVar1 = *plVar5;
            goto LAB_147d81a70;
          }
          lVar3 = FUN_144a7757c();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) goto LAB_147d81a4c;
          lVar3 = FUN_144a6c4d8();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) goto LAB_147d81a4c;
          lVar7 = *(longlong *)(lVar7 + 0x20);
        } while (lVar7 != 0);
      }
      iVar4 = iVar4 + 1;
      lVar3 = *(longlong *)(param_1 + 0xc20);
      iVar2 = *(int *)(lVar3 + 0x50);
    } while (iVar4 < iVar2);
  }
  return;
}



// FUNCTION 147d81aa8 FUN_147d81aa8 body=68 status=ok
// SIG undefined FUN_147d81aa8(void)

void FUN_147d81aa8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x1150) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar2);
      if (*(longlong *)(lVar1 + 0x2a0) == param_2) {
        if (lVar1 != 0) {
          return;
        }
        break;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x1150) * 8 != lVar2);
  }
  FUN_14572ad1a(DAT_14cb0d2b0,0);
  return;
}



// FUNCTION 147d81aec FUN_147d81aec body=77 status=ok
// SIG undefined FUN_147d81aec(void)

void FUN_147d81aec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x1150) != 0) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar3);
      lVar2 = *(longlong *)(lVar1 + 0x230);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) == param_2)) {
        if (lVar1 != 0) {
          return;
        }
        break;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0x1150) * 8 != lVar3);
  }
  FUN_14572ad1a(DAT_14cb0d2b0,0);
  return;
}



// FUNCTION 147d81b3a FUN_147d81b3a body=21 status=ok
// SIG undefined FUN_147d81b3a(void)

undefined8 FUN_147d81b3a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1405e677a();
  return *(undefined8 *)(lVar1 + 0x230);
}



// FUNCTION 147d81b50 FUN_147d81b50 body=353 status=ok
// SIG undefined FUN_147d81b50(void)

undefined8 FUN_147d81b50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [40];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((longlong)*(int *)(param_1 + 0x1150) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x1148);
    plVar2 = plVar8 + *(int *)(param_1 + 0x1150);
    do {
      if ((*(longlong *)(*plVar8 + 0x360) != 0) &&
         (lVar4 = FUN_146125268(*(longlong *)(*plVar8 + 0x360),1), lVar4 != 0)) {
        lVar1 = lVar4 + 0x38;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        uStack_60 = lVar1;
        if (*(int *)(lVar4 + 0x50) == 0) {
          iVar6 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar6 = *(int *)(lVar4 + 0x50);
        }
        plVar7 = (longlong *)(lVar4 + 0x28);
        uStack_70 = CONCAT44(uStack_4c,uStack_50);
        local_78 = local_58;
        uVar5 = local_78;
        local_88 = (undefined4)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        iVar3 = local_78._4_4_;
        local_90 = plVar7;
        if ((local_78._4_4_ != iVar6) || (local_78 = uVar5, uStack_60 != lVar1)) {
          do {
            local_78 = uVar5;
            lVar4 = *(longlong *)(*local_90 + (longlong)iVar3 * 0x10);
            if (*(longlong *)(lVar4 + 0x20) == param_2) {
              uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
              goto LAB_147d81c86;
            }
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
            FUN_1449c0562(&local_88);
            iVar3 = local_78._4_4_;
            uVar5 = local_78;
          } while (local_90 != plVar7 ||
                   (CONCAT44(uStack_7c,uStack_80) != lVar1 || local_78._4_4_ != iVar6));
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar2);
  }
  uVar5 = 0;
LAB_147d81c86:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 147d81cb2 FUN_147d81cb2 body=68 status=ok
// SIG undefined FUN_147d81cb2(void)

void FUN_147d81cb2(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147d878be();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147d81cf6 FUN_147d81cf6 body=199 status=ok
// SIG undefined FUN_147d81cf6(void)

undefined8 FUN_147d81cf6(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_b8 = FUN_1402cf98a();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  uStack_a0 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d81dbe FUN_147d81dbe body=71 status=ok
// SIG undefined FUN_147d81dbe(void)

void FUN_147d81dbe(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147b9c1b6();
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
      FUN_147d87bb8();
      return;
    }
  }
  return;
}



// FUNCTION 147d81e06 FUN_147d81e06 body=133 status=ok
// SIG undefined FUN_147d81e06(void)

void FUN_147d81e06(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  byte param_5,undefined4 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405e677a();
  iVar1 = *(int *)(lVar2 + 0x298);
  *(uint *)(lVar2 + 0x298) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x29c) < iVar1 + 1U) {
    FUN_147d87c84((longlong *)(lVar2 + 0x290),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x290);
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = param_3;
  *(uint *)(lVar2 + 8 + lVar3) =
       (param_4 & 0xff) + (uint)param_5 * 2 | *(uint *)(lVar2 + 8 + lVar3) & 0xfffffffc;
  *(undefined4 *)(lVar2 + 0xc + lVar3) = param_6;
  return;
}



// FUNCTION 147d81e8c FUN_147d81e8c body=46 status=ok
// SIG undefined FUN_147d81e8c(void)

undefined4 * FUN_147d81e8c(undefined4 *param_1)

{
  *param_1 = 0x10100;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined4 *)((longlong)param_1 + 5) = 0;
  *(undefined2 *)((longlong)param_1 + 9) = 1;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 147d81eba FUN_147d81eba body=26 status=ok
// SIG undefined FUN_147d81eba(void)

void FUN_147d81eba(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[4] = param_2[4];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



// FUNCTION 147d81ed4 FUN_147d81ed4 body=331 status=ok
// SIG undefined FUN_147d81ed4(void)

longlong * FUN_147d81ed4(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  param_1[0x12] = 0;
  *param_1 = (longlong)&PTR_FUN_149e1e590;
  param_1[0x13] = (longlong)(param_1 + 0x16);
  param_1[0x14] = 0;
  FUN_144a69558(param_1,1);
  (**(code **)(*param_1 + 0xf0))(param_1,0);
  *param_1 = (longlong)&PTR_FUN_149fb8060;
  bVar1 = *(byte *)((longlong)param_1 + 0x2a);
  bVar2 = bVar1 & 0x7b;
  *(byte *)((longlong)param_1 + 0x2a) = bVar2;
  lVar4 = param_2[2];
  lVar5 = 0;
  if (lVar4 != 0) {
    do {
      lVar5 = lVar4;
      if ((*(byte *)(lVar4 + 0xd4) & 0x80) != 0) break;
      lVar4 = *(longlong *)(lVar4 + 0x40);
      lVar5 = 0;
    } while (lVar4 != 0);
  }
  for (lVar4 = *(longlong *)(param_3 + 0x10); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x40)) {
    if ((*(byte *)(lVar4 + 0xd4) & 0x80) != 0) goto LAB_147d81f94;
  }
  lVar4 = 0;
LAB_147d81f94:
  *(bool *)(param_1 + 0x15) = lVar5 == lVar4;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *param_1 = (longlong)&PTR_FUN_14aae5a30;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = (longlong)param_2;
  param_1[0x19] = *(longlong *)(param_4 + 0x10);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_4 + 7);
  *(byte *)((longlong)param_1 + 0x2a) = bVar2 | 4;
  *(byte *)((longlong)param_1 + 0x2a) = (bVar1 & 0x73 | 4 | *(char *)(param_4 + 1) << 3) ^ 0x88;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  uVar3 = (uint)*(byte *)(param_4 + 3) << 0x1b;
  *(uint *)((longlong)param_1 + 0x34) = uVar3;
  if (*(char *)(param_4 + 5) == '\x01') {
    *(uint *)((longlong)param_1 + 0x34) = uVar3 | 0x1000;
  }
  (**(code **)(*param_2 + 0xd8))(param_2,param_1);
  return param_1;
}



// FUNCTION 147d82020 FUN_147d82020 body=254 status=ok
// SIG undefined FUN_147d82020(void)

longlong FUN_147d82020(longlong *param_1,longlong param_2)

{
  longlong lVar1;
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
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    lVar1 = 0;
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x18) == param_2) {
        lVar1 = *local_68 + (longlong)iStack_4c * 0x18;
        break;
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  else {
    lVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147d82120 FUN_147d82120 body=217 status=ok
// SIG undefined FUN_147d82120(void)

longlong *
FUN_147d82120(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,longlong param_5
             )

{
  byte bVar1;
  
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  param_1[0x12] = 0;
  *param_1 = (longlong)&PTR_FUN_149fba270;
  param_1[0x13] = param_2 + 0xb0;
  FUN_140996f94(param_1,1);
  (**(code **)(*param_1 + 0xf0))(param_1,0);
  bVar1 = *(byte *)((longlong)param_1 + 0x2a);
  *(byte *)((longlong)param_1 + 0x2a) = bVar1 & 0x7b;
  *param_1 = (longlong)&PTR_FUN_14aae5ef0;
  param_1[0x14] = param_4;
  param_1[0x15] = param_5;
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0xa8);
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *param_1 = (longlong)&PTR_FUN_14aae5c90;
  *(byte *)((longlong)param_1 + 0x2a) = bVar1 | 0x84;
  (**(code **)(*param_3 + 0xd8))(param_3,param_1);
  return param_1;
}



// FUNCTION 147d821fa FUN_147d821fa body=159 status=ok
// SIG undefined FUN_147d821fa(void)

longlong *
FUN_147d821fa(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,longlong param_5
             )

{
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  param_1[0x12] = 0;
  *param_1 = (longlong)&PTR_FUN_149fba270;
  param_1[0x13] = param_3;
  FUN_140996f94(param_1,1);
  (**(code **)(*param_1 + 0xf0))(param_1,0);
  *param_1 = (longlong)&PTR_FUN_14aae5ef0;
  param_1[0x14] = param_4;
  param_1[0x15] = param_5;
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) | 0x84;
  (**(code **)(*param_2 + 0xd8))(param_2,param_1);
  return param_1;
}



// FUNCTION 147d8229a FUN_147d8229a body=147 status=ok
// SIG undefined FUN_147d8229a(void)

void FUN_147d8229a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aae71d0;
  if (*(char *)((longlong)param_1 + 0x15b) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x15b) = 0;
  }
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_147d84bd6(param_1 + 0x21);
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(param_1 + 0x15);
  FUN_144a7fc42(param_1);
  return;
}



// FUNCTION 147d8232e FUN_147d8232e body=61 status=ok
// SIG undefined FUN_147d8232e(void)

void FUN_147d8232e(longlong *param_1)

{
  FUN_147d88b1a();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d8236c FUN_147d8236c body=177 status=ok
// SIG undefined FUN_147d8236c(void)

void FUN_147d8236c(longlong param_1,undefined8 param_2,undefined8 param_3,wchar_t *param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  DAT_14cb0cab0 = param_3;
  FUN_140056680(&local_38,L"STAT ");
  sVar1 = wcslen(param_4);
  FUN_1400020e8(&local_38,param_4,sVar1 & 0xffffffff);
  uVar2 = FUN_144a82cde();
  puVar3 = local_38;
  if (local_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  (**(code **)(*(longlong *)(param_1 + 0x28) + 8))(param_1 + 0x28,param_2,puVar3,uVar2);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d8241e FUN_147d8241e body=179 status=ok
// SIG undefined FUN_147d8241e(void)

undefined8 FUN_147d8241e(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if ((longlong)*(int *)(param_1 + 0x1228) < 1) {
    return 0;
  }
  iVar1 = (int)param_2[1];
  lVar7 = 0;
LAB_147d8244b:
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x1220) + 0x10 + lVar7 * 0x58);
  if (iVar2 == iVar1) {
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
    if (iVar1 < 2) {
      return uVar3;
    }
    lVar8 = 0;
    do {
      uVar4 = *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x1220) + lVar7 * 0x58 + 8) + lVar8)
      ;
      uVar5 = (ulonglong)uVar4;
      uVar6 = *(ushort *)(*param_2 + lVar8);
      if (uVar4 == uVar6) {
        if (uVar4 == 0) {
          return uVar3;
        }
      }
      else {
        if (0x7f < (uVar6 | uVar4)) goto LAB_147d824c5;
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar9 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[uVar9]) goto LAB_147d824c5;
      }
      lVar8 = lVar8 + 2;
    } while( true );
  }
  if (iVar2 + iVar1 == 1) {
    return 1;
  }
  goto LAB_147d824b2;
LAB_147d824c5:
  if (uVar4 == uVar6) {
    return uVar3;
  }
LAB_147d824b2:
  lVar7 = lVar7 + 1;
  if (lVar7 == *(int *)(param_1 + 0x1228)) {
    return 0;
  }
  goto LAB_147d8244b;
}



// FUNCTION 147d824d2 FUN_147d824d2 body=203 status=ok
// SIG undefined FUN_147d824d2(void)

void FUN_147d824d2(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
                  char param_5)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_147d8241e(param_1,param_4);
  if (cVar1 != '\0') {
    if (*(int *)(param_4 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_4;
    }
    FUN_140056680(local_50,puVar2);
    cVar1 = (**(code **)(*param_3 + 0x170))(param_3,local_50);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar1 != param_5) {
      if (*(int *)(param_4 + 1) == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      else {
        puVar2 = (undefined2 *)*param_4;
      }
      FUN_147d8236c(param_1,param_2,param_3,puVar2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8259e FUN_147d8259e body=212 status=ok
// SIG undefined FUN_147d8259e(void)

void FUN_147d8259e(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  char local_68;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < DAT_14cb0d0f8) {
    iVar3 = 0;
    iVar4 = -1;
    do {
      iVar1 = DAT_14cb0d0f8 + iVar4;
      if (param_4 != '\0') {
        iVar1 = iVar3;
      }
      puVar2 = &DAT_149dfb77a;
      if (*(int *)(DAT_14cb0d0f0 + 8 + (longlong)iVar1 * 0x10) != 0) {
        puVar2 = *(undefined2 **)(DAT_14cb0d0f0 + (longlong)iVar1 * 0x10);
      }
      FUN_140056680(local_58,puVar2);
      local_68 = param_4;
      FUN_147d824d2(param_1,param_2,param_3,local_58);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar3 < DAT_14cb0d0f8);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d82673 FUN_147d82673 body=796 status=ok
// SIG undefined FUN_147d82673(void)

undefined4 FUN_147d82673(longlong *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort uVar7;
  ushort uVar8;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_1;
  }
  lVar5 = 0;
  while( true ) {
    uVar7 = *(ushort *)((longlong)puVar2 + lVar5);
    uVar6 = (ulonglong)uVar7;
    uVar8 = *(ushort *)((longlong)L"TPri_Normal" + lVar5);
    if (uVar7 != uVar8) break;
    if (uVar7 == 0) goto LAB_147d82900;
LAB_147d826b1:
    lVar5 = lVar5 + 2;
  }
  if ((uVar8 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar4 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar4]) goto LAB_147d826b1;
  }
  if (uVar7 != uVar8) {
    if (iVar1 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_1;
    }
    lVar5 = 0;
    goto LAB_147d826f2;
  }
LAB_147d82900:
  uVar3 = 0;
  goto LAB_147d82902;
LAB_147d826f2:
  uVar7 = *(ushort *)((longlong)puVar2 + lVar5);
  uVar6 = (ulonglong)uVar7;
  uVar8 = *(ushort *)((longlong)L"TPri_AboveNormal" + lVar5);
  if (uVar7 == uVar8) {
    if (uVar7 == 0) goto LAB_147d82924;
LAB_147d8270b:
    lVar5 = lVar5 + 2;
    goto LAB_147d826f2;
  }
  if ((uVar8 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar4 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar4]) goto LAB_147d8270b;
  }
  if (uVar7 != uVar8) {
    if (iVar1 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_1;
    }
    lVar5 = 0;
    goto LAB_147d8274c;
  }
LAB_147d82924:
  uVar3 = 1;
  goto LAB_147d82902;
LAB_147d8274c:
  uVar7 = *(ushort *)((longlong)puVar2 + lVar5);
  uVar6 = (ulonglong)uVar7;
  uVar8 = *(ushort *)((longlong)L"TPri_BelowNormal" + lVar5);
  if (uVar7 == uVar8) {
    if (uVar7 == 0) goto LAB_147d82937;
LAB_147d82765:
    lVar5 = lVar5 + 2;
    goto LAB_147d8274c;
  }
  if ((uVar8 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar4 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar4]) goto LAB_147d82765;
  }
  if (uVar7 != uVar8) {
    if (iVar1 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_1;
    }
    lVar5 = 0;
    goto LAB_147d827a6;
  }
LAB_147d82937:
  uVar3 = 2;
  goto LAB_147d82902;
LAB_147d827a6:
  uVar7 = *(ushort *)((longlong)puVar2 + lVar5);
  uVar6 = (ulonglong)uVar7;
  uVar8 = *(ushort *)((longlong)L"TPri_Highest" + lVar5);
  if (uVar7 == uVar8) {
    if (uVar7 == 0) goto LAB_147d8294a;
LAB_147d827bf:
    lVar5 = lVar5 + 2;
    goto LAB_147d827a6;
  }
  if ((uVar8 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar4 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar4]) goto LAB_147d827bf;
  }
  if (uVar7 != uVar8) {
    if (iVar1 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_1;
    }
    lVar5 = 0;
    goto LAB_147d82800;
  }
LAB_147d8294a:
  uVar3 = 3;
  goto LAB_147d82902;
LAB_147d82800:
  uVar7 = *(ushort *)((longlong)puVar2 + lVar5);
  uVar6 = (ulonglong)uVar7;
  uVar8 = *(ushort *)((longlong)L"TPri_Lowest" + lVar5);
  if (uVar7 == uVar8) {
    if (uVar7 == 0) goto LAB_147d8295d;
LAB_147d82819:
    lVar5 = lVar5 + 2;
    goto LAB_147d82800;
  }
  if ((uVar8 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar4 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar4]) goto LAB_147d82819;
  }
  if (uVar7 != uVar8) {
    if (iVar1 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_1;
    }
    lVar5 = 0;
    goto LAB_147d8285a;
  }
LAB_147d8295d:
  uVar3 = 4;
  goto LAB_147d82902;
LAB_147d8285a:
  uVar7 = *(ushort *)((longlong)puVar2 + lVar5);
  uVar6 = (ulonglong)uVar7;
  uVar8 = *(ushort *)((longlong)L"TPri_SlightlyBelowNormal" + lVar5);
  if (uVar7 == uVar8) {
    if (uVar7 == 0) goto LAB_147d82970;
LAB_147d82873:
    lVar5 = lVar5 + 2;
    goto LAB_147d8285a;
  }
  if ((uVar8 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar4 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar4]) goto LAB_147d82873;
  }
  if (uVar7 != uVar8) {
    if (iVar1 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_1;
    }
    lVar5 = 0;
    goto LAB_147d828b4;
  }
LAB_147d82970:
  uVar3 = 5;
  goto LAB_147d82902;
LAB_147d828b4:
  uVar7 = *(ushort *)((longlong)puVar2 + lVar5);
  uVar6 = (ulonglong)uVar7;
  uVar8 = *(ushort *)((longlong)L"TPri_TimeCritical" + lVar5);
  if (uVar7 == uVar8) {
    if (uVar7 == 0) goto LAB_147d828f9;
LAB_147d828c9:
    lVar5 = lVar5 + 2;
    goto LAB_147d828b4;
  }
  if ((uVar8 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar4 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar4]) goto LAB_147d828c9;
  }
  uVar3 = 7;
  if (uVar7 != uVar8) goto LAB_147d82902;
LAB_147d828f9:
  uVar3 = 6;
LAB_147d82902:
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  return uVar3;
}



// FUNCTION 147d82990 FUN_147d82990 body=423 status=ok
// SIG undefined FUN_147d82990(void)

undefined8
FUN_147d82990(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5)

{
  int *piVar1;
  void *_Src;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 local_70;
  void *local_68;
  ulonglong local_60;
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_5 + 1) = 0;
  if (*(int *)((longlong)param_5 + 0xc) < 0) {
    FUN_144893a1c(param_5,0);
  }
  if (*(int *)(param_2 + 1) < 1) {
    uVar3 = 0;
  }
  else {
    FUN_1446ddc76(&local_40,"ImageWrapper",1);
    uVar3 = FUN_144a52528();
    plVar4 = (longlong *)FUN_1402c9134(uVar3,local_40,&local_68,1);
    uVar3 = 0;
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_50,1,0);
    if (local_50 != (longlong *)0x0) {
      local_70 = 0;
      local_78 = 8;
      local_80 = 0;
      local_88 = param_4;
      cVar2 = (**(code **)(*local_50 + 8))
                        (local_50,*param_2,(longlong)*(int *)(param_2 + 1),param_3);
      if (cVar2 == '\0') {
        uVar3 = 0;
      }
      else {
        (**(code **)(*local_50 + 0x20))(local_50,&local_68,0x41);
        _Src = local_68;
        *(int *)(param_5 + 1) = (int)local_60;
        if (*(int *)((longlong)param_5 + 0xc) == 0 && local_60 == 0) {
          *(undefined4 *)((longlong)param_5 + 0xc) = 0;
        }
        else {
          FUN_1447a127e(param_5,local_60 & 0xffffffff);
          if (local_60 != 0) {
            memcpy((void *)*param_5,_Src,local_60);
          }
        }
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar3 = 1;
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_48 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d82b38 FUN_147d82b38 body=278 status=ok
// SIG undefined FUN_147d82b38(void)

undefined4
FUN_147d82b38(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_5 + 8) = 0;
  if (*(int *)(param_5 + 0xc) < 0) {
    FUN_144893a1c(param_5,0);
  }
  if (*(int *)(param_2 + 1) < 1) {
    uVar3 = 0;
  }
  else {
    FUN_1446ddc76(&local_30,"ImageWrapper",1);
    uVar4 = FUN_144a52528();
    plVar5 = (longlong *)FUN_1402c9134(uVar4,local_30,&local_40,1);
    uVar3 = 0;
    (**(code **)(*plVar5 + 0x58))(plVar5,&local_40,1,0);
    if (local_40 != (undefined8 *)0x0) {
      cVar2 = (**(code **)*local_40)(local_40,*param_2,(longlong)*(int *)(param_2 + 1));
      if (cVar2 == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_14179c1f8(local_40,0,8,param_5);
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_38 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d82c50 FUN_147d82c50 body=120 status=ok
// SIG undefined FUN_147d82c50(void)

undefined8 * FUN_147d82c50(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0d180) {
    FUN_144b3d300(&DAT_14cb0d180);
    if (DAT_14cb0d180 == -1) {
      FUN_1446f470e(&DAT_14cb0d178,L"JPEG",1);
      _Init_thread_footer(&DAT_14cb0d180);
    }
  }
  *param_2 = DAT_14cb0d178;
  return param_2;
}



// FUNCTION 147d82ccc FUN_147d82ccc body=416 status=ok
// SIG undefined FUN_147d82ccc(void)

undefined8
FUN_147d82ccc(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5)

{
  int *piVar1;
  void *_Src;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 local_70;
  void *local_68;
  ulonglong local_60;
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_5 + 1) = 0;
  if (*(int *)((longlong)param_5 + 0xc) < 0) {
    FUN_144893a1c(param_5,0);
  }
  if (*(int *)(param_2 + 1) < 1) {
    uVar3 = 0;
  }
  else {
    FUN_1446ddc76(&local_40,"ImageWrapper",1);
    uVar3 = FUN_144a52528();
    plVar4 = (longlong *)FUN_1402c9134(uVar3,local_40,&local_68,1);
    uVar3 = 0;
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_50,0,0);
    if (local_50 != (longlong *)0x0) {
      local_70 = 0;
      local_78 = 8;
      local_80 = 0;
      local_88 = param_4;
      cVar2 = (**(code **)(*local_50 + 8))
                        (local_50,*param_2,(longlong)*(int *)(param_2 + 1),param_3);
      if (cVar2 == '\0') {
        uVar3 = 0;
      }
      else {
        (**(code **)(*local_50 + 0x20))(local_50,&local_68,0);
        _Src = local_68;
        *(int *)(param_5 + 1) = (int)local_60;
        if (*(int *)((longlong)param_5 + 0xc) == 0 && local_60 == 0) {
          *(undefined4 *)((longlong)param_5 + 0xc) = 0;
        }
        else {
          FUN_1447a127e(param_5,local_60 & 0xffffffff);
          if (local_60 != 0) {
            memcpy((void *)*param_5,_Src,local_60);
          }
        }
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar3 = 1;
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_48 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d82e6e FUN_147d82e6e body=278 status=ok
// SIG undefined FUN_147d82e6e(void)

undefined4
FUN_147d82e6e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_5 + 8) = 0;
  if (*(int *)(param_5 + 0xc) < 0) {
    FUN_144893a1c(param_5,0);
  }
  if (*(int *)(param_2 + 1) < 1) {
    uVar3 = 0;
  }
  else {
    FUN_1446ddc76(&local_30,"ImageWrapper",1);
    uVar4 = FUN_144a52528();
    plVar5 = (longlong *)FUN_1402c9134(uVar4,local_30,&local_40,1);
    uVar3 = 0;
    (**(code **)(*plVar5 + 0x58))(plVar5,&local_40,0,0);
    if (local_40 != (undefined8 *)0x0) {
      cVar2 = (**(code **)*local_40)(local_40,*param_2,(longlong)*(int *)(param_2 + 1));
      if (cVar2 == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_14179c1f8(local_40,0,8,param_5);
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_38 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d82f86 FUN_147d82f86 body=120 status=ok
// SIG undefined FUN_147d82f86(void)

undefined8 * FUN_147d82f86(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0d190) {
    FUN_144b3d300(&DAT_14cb0d190);
    if (DAT_14cb0d190 == -1) {
      FUN_1446f470e(&DAT_14cb0d188,&DAT_14a92061e,1);
      _Init_thread_footer(&DAT_14cb0d190);
    }
  }
  *param_2 = DAT_14cb0d188;
  return param_2;
}



// FUNCTION 147d83002 FUN_147d83002 body=150 status=ok
// SIG undefined FUN_147d83002(void)

undefined8 FUN_147d83002(longlong *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_14475cc44(param_1,&local_20);
    puVar2 = local_20;
    if (local_18 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    uVar1 = FUN_14598651e();
    local_30 = 0;
    local_38 = 0;
    uVar1 = FUN_141433b6f(uVar1,0,puVar2,0);
    if (local_20 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 147d83099 FUN_147d83099 body=185 status=ok
// SIG undefined FUN_147d83099(void)

undefined8 FUN_147d83099(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d83154 FUN_147d83154 body=150 status=ok
// SIG undefined FUN_147d83154(void)

undefined8 FUN_147d83154(longlong *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_14475cc44(param_1,&local_20);
    puVar2 = local_20;
    if (local_18 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    uVar1 = FUN_1458e6494();
    local_30 = 0;
    local_38 = 0;
    uVar1 = FUN_141433b6f(uVar1,0,puVar2,0);
    if (local_20 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 147d831eb FUN_147d831eb body=185 status=ok
// SIG undefined FUN_147d831eb(void)

undefined8 FUN_147d831eb(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d832a6 FUN_147d832a6 body=29 status=ok
// SIG undefined FUN_147d832a6(void)

undefined8 FUN_147d832a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d8330a FUN_147d8330a body=73 status=ok
// SIG undefined FUN_147d8330a(void)

void FUN_147d8330a(longlong param_1,int param_2,int *param_3,int *param_4,uint *param_5,
                  uint *param_6)

{
  *param_5 = *param_5 >> 1;
  *param_6 = *param_6 / (uint)(*(int *)(param_1 + 0x1c) / 2);
  *param_3 = *param_3 + (param_2 % 2) * *param_5;
  *param_4 = *param_4 + (param_2 / 2) * *param_6;
  return;
}



// FUNCTION 147d83354 FUN_147d83354 body=531 status=ok
// SIG undefined FUN_147d83354(void)

void FUN_147d83354(longlong param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0d230) {
    FUN_144b3d300(&DAT_14cb0d230);
    if (DAT_14cb0d230 == -1) {
      local_3c = 0;
      local_48 = 4;
      FUN_14078dbce(&DAT_14cb0d218,L"r.StereoEmulationWidth",&local_3c,
                    L"Width of the imaginable HMD for stereo emulation");
      atexit(FUN_143768b9c);
      _Init_thread_footer(&DAT_14cb0d230);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0d250) {
    FUN_144b3d300(&DAT_14cb0d250);
    if (DAT_14cb0d250 == -1) {
      local_3c = 0;
      local_48 = 4;
      FUN_14078dbce(&DAT_14cb0d238,L"r.StereoEmulationHeight",&local_3c,
                    L"Height of the imaginable HMD for stereo emulation");
      atexit(FUN_143768be1);
      _Init_thread_footer(&DAT_14cb0d250);
    }
  }
  piVar3 = DAT_14cb0d228;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar2 + 0xc60) == 0x40000002) {
    iVar5 = *DAT_14cb0d228;
LAB_147d833f2:
    uVar6 = 0;
    lVar9 = DAT_14cb0d248;
  }
  else {
    bVar4 = FUN_144a61b4f();
    lVar9 = DAT_14cb0d248;
    iVar5 = piVar3[bVar4 ^ 1];
    if (*(int *)(lVar2 + 0xc60) == 0x40000002) goto LAB_147d833f2;
    bVar4 = FUN_144a61b4f();
    uVar6 = (ulonglong)(bVar4 ^ 1);
  }
  iVar1 = *(int *)(lVar9 + uVar6 * 4);
  if (iVar5 != 0) {
    iVar7 = 10000;
    if (iVar5 < 10000) {
      iVar7 = iVar5;
    }
    iVar8 = 100;
    if (100 < iVar7) {
      iVar8 = iVar7;
    }
    *(int *)(param_1 + 0x14) = iVar8;
  }
  if (iVar1 == 0) {
    if (iVar5 != 0 || param_3 != 0) goto LAB_147d83430;
    *(int *)(param_1 + 0x14) = param_4[2] - *param_4;
    iVar5 = param_4[3] - param_4[1];
  }
  else {
    iVar7 = 10000;
    if (iVar1 < 10000) {
      iVar7 = iVar1;
    }
    iVar5 = 100;
    if (100 < iVar7) {
      iVar5 = iVar7;
    }
  }
  *(int *)(param_1 + 0x18) = iVar5;
LAB_147d83430:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8357e FUN_147d8357e body=741 status=ok
// SIG undefined FUN_147d8357e(void)

void FUN_147d8357e(longlong param_1,uint param_2,undefined8 param_3,float param_4,double *param_5)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar2 = (longlong *)FUN_145a50fcc();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  fVar1 = DAT_14c75b140;
  param_4 = param_4 * *(float *)(lVar3 + 0x100);
  if (param_2 == 0xffffffff) {
    fVar4 = tanf(*(float *)(param_1 + 0x10) * 0.017453292 * 0.5);
    FUN_144a7484c(param_3,&local_a8);
    dVar6 = (double)(param_4 / fVar4 + fVar1);
    dVar10 = local_a0 * 0.0 + local_98 * -0.0;
    dVar10 = dVar10 + dVar10;
    dVar7 = local_a8 * 0.0 - dVar6 * local_a0;
    dVar8 = local_98 * dVar6 + local_a8 * -0.0;
    dVar7 = dVar7 + dVar7;
    dVar8 = dVar8 + dVar8;
    dVar5 = (local_a8 * dVar8 - dVar10 * local_a0) + local_90 * dVar7 + 0.0;
    dVar6 = (local_a0 * dVar7 - dVar8 * local_98) + dVar10 * local_90 + dVar6 + *param_5;
    dVar10 = (local_98 * dVar10 - dVar7 * local_a8) + local_90 * dVar8 + 0.0;
  }
  else {
    if ((param_2 & 1) == 0) {
      param_4 = -param_4;
    }
    FUN_144a7484c(param_3,&local_a8);
    dVar9 = (double)param_4;
    dVar7 = local_a8 * dVar9 + local_a0 * -0.0;
    dVar8 = local_98 * 0.0 + local_a8 * -0.0;
    dVar10 = local_a0 * 0.0 - dVar9 * local_98;
    dVar7 = dVar7 + dVar7;
    dVar8 = dVar8 + dVar8;
    dVar10 = dVar10 + dVar10;
    dVar5 = (local_a8 * dVar8 - dVar10 * local_a0) + local_90 * dVar7 + 0.0;
    dVar6 = (local_a0 * dVar7 - dVar8 * local_98) + dVar10 * local_90 + 0.0 + *param_5;
    dVar10 = (local_98 * dVar10 - dVar7 * local_a8) + local_90 * dVar8 + dVar9;
  }
  *param_5 = dVar6;
  param_5[1] = dVar10 + param_5[1];
  param_5[2] = dVar5 + param_5[2];
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d83864 FUN_147d83864 body=223 status=ok
// SIG undefined FUN_147d83864(void)

double * FUN_147d83864(longlong param_1,double *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_1 + 0x10) * 0.017453292 * 0.5;
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  fVar3 = tanf(fVar5);
  fVar5 = tanf(fVar5);
  dVar4 = (double)DAT_14c75b140;
  *param_2 = (double)(1.0 / fVar3);
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[5] = (double)(((float)iVar1 / fVar5) / (float)iVar2);
  param_2[10] = 0.0;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[0xb] = 1.0;
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xe] = dVar4;
  param_2[0xf] = 0.0;
  return param_2;
}



// FUNCTION 147d839b3 FUN_147d839b3 body=301 status=ok
// SIG undefined FUN_147d839b3(void)

void FUN_147d839b3(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar12 = FUN_144821ef4();
  lVar5 = *param_2;
  uVar6 = *param_4;
  FUN_144775fd8(lVar12,lVar5 + 0xe0,*param_5);
  FUN_144775e63(lVar12,lVar5 + 0xe4,uVar6);
  iVar10 = *(int *)(lVar12 + 0x30) + *(int *)(lVar12 + 0x20);
  iVar11 = iVar10 + *(int *)(lVar12 + 0x40);
  if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar12 + 0x40)) == iVar11 < 0) {
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 0xb;
    if ((undefined8 *)param_1[1] < puVar14) {
      FUN_140023dd8(param_1,0x60);
      puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar13 + 0xb;
    }
    *param_1 = (ulonglong)puVar14;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar13;
    param_1[6] = (ulonglong)(puVar13 + 1);
    uVar6 = *(undefined8 *)(lVar12 + 0x38);
    uVar1 = *(undefined4 *)(lVar12 + 0x40);
    uVar7 = *(undefined8 *)(lVar12 + 0x28);
    uVar2 = *(undefined4 *)(lVar12 + 0x30);
    uVar8 = *(undefined8 *)(lVar12 + 0x18);
    uVar3 = *(undefined4 *)(lVar12 + 0x20);
    uVar9 = *(undefined8 *)(lVar12 + 8);
    uVar4 = *(undefined4 *)(lVar12 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fd8;
    puVar13[2] = param_3;
    puVar13[3] = uVar9;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar8;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar7;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar6;
    *(undefined4 *)(puVar13 + 10) = uVar1;
    *(undefined8 *)(lVar12 + 8) = 0;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined4 *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined4 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined4 *)(lVar12 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147d83ae0 FUN_147d83ae0 body=95 status=ok
// SIG undefined FUN_147d83ae0(void)

undefined8 * FUN_147d83ae0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1461e29ae(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147d83b40(param_1,iVar1);
      FUN_147d83ba2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147d83b40 FUN_147d83b40 body=98 status=ok
// SIG undefined FUN_147d83b40(void)

void FUN_147d83b40(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147d83ba2 FUN_147d83ba2 body=38 status=ok
// SIG undefined FUN_147d83ba2(void)

void FUN_147d83ba2(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_2 + lVar2 * 8);
      *(longlong *)(param_1 + lVar2 * 8) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 1;
    } while (param_3 != (int)lVar2);
  }
  return;
}



// FUNCTION 147d83bd2 FUN_147d83bd2 body=193 status=ok
// SIG undefined FUN_147d83bd2(void)

void FUN_147d83bd2(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147d83c69;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147d83c69:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147d83c94 FUN_147d83c94 body=97 status=ok
// SIG undefined FUN_147d83c94(void)

undefined8 * FUN_147d83c94(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aae59d0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d83cf6 FUN_147d83cf6 body=46 status=ok
// SIG undefined FUN_147d83cf6(void)

void FUN_147d83cf6(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),0,0);
  return;
}



// FUNCTION 147d83d24 FUN_147d83d24 body=32 status=ok
// SIG undefined FUN_147d83d24(void)

undefined8 FUN_147d83d24(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FPendingStreamingLevelHolder");
  return param_2;
}



// FUNCTION 147d83d44 FUN_147d83d44 body=68 status=ok
// SIG undefined FUN_147d83d44(void)

undefined8 * FUN_147d83d44(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aae5a30;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d83dc8 FUN_147d83dc8 body=38 status=ok
// SIG undefined FUN_147d83dc8(void)

undefined8 FUN_147d83dc8(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d83dee FUN_147d83dee body=409 status=ok
// SIG undefined FUN_147d83dee(void)

longlong FUN_147d83dee(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  
  thunk_FUN_1401fb7cc();
  uVar3 = FUN_14479d2ce(param_2);
  if (uVar3 != 0) {
    plVar2 = *(longlong **)(param_1 + 0xa0);
    if ((plVar2 != (longlong *)0x0) && ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34))) {
      uVar6 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      plVar7 = plVar2 + 7;
      if ((longlong *)plVar2[8] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar2[8];
      }
      iVar8 = *(int *)((longlong)plVar7 +
                      (ulonglong)((int)plVar2[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar8 != -1) {
        do {
          puVar1 = (ulonglong *)(*plVar2 + (longlong)iVar8 * 0x18);
          if (*puVar1 == uVar3) {
            puVar5 = puVar1 + 1;
            if (puVar5 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) goto LAB_147d83f60;
            break;
          }
          iVar8 = (int)puVar1[2];
        } while (iVar8 != -1);
      }
    }
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar4 = FUN_144a797b2();
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(uVar3 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(uVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
         (plVar2 = *(longlong **)(param_1 + 0xa8),
         (int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34))) {
        uVar6 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        plVar7 = plVar2 + 7;
        if ((longlong *)plVar2[8] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar2[8];
        }
        iVar8 = *(int *)((longlong)plVar7 +
                        (ulonglong)((int)plVar2[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
        if (iVar8 != -1) {
          do {
            puVar1 = (ulonglong *)(*plVar2 + (longlong)iVar8 * 0x18);
            if (*puVar1 == uVar3) {
              puVar5 = puVar1 + 1;
              if (puVar5 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
                return param_1;
              }
LAB_147d83f60:
              FUN_14485c47a(param_2,*puVar5);
              return param_1;
            }
            iVar8 = (int)puVar1[2];
          } while (iVar8 != -1);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 147d83f88 FUN_147d83f88 body=528 status=ok
// SIG undefined FUN_147d83f88(void)

longlong FUN_147d83f88(longlong param_1,undefined4 *param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140bfe004();
  uVar3 = FUN_140007850(param_2);
  if (uVar3 != 0) {
    plVar2 = *(longlong **)(param_1 + 0xa0);
    if ((plVar2 != (longlong *)0x0) && ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34))) {
      uVar6 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      plVar7 = plVar2 + 7;
      if ((longlong *)plVar2[8] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar2[8];
      }
      iVar5 = *(int *)((longlong)plVar7 +
                      (ulonglong)((int)plVar2[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar5 != -1) {
        do {
          puVar1 = (ulonglong *)(*plVar2 + (longlong)iVar5 * 0x18);
          if (*puVar1 == uVar3) {
            puVar8 = puVar1 + 1;
            if (puVar8 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) goto LAB_147d84125;
            break;
          }
          iVar5 = (int)puVar1[2];
        } while (iVar5 != -1);
      }
    }
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar4 = FUN_144a797b2();
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(uVar3 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(uVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
         (plVar2 = *(longlong **)(param_1 + 0xa8),
         (int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34))) {
        uVar6 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        plVar7 = plVar2 + 7;
        if ((longlong *)plVar2[8] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar2[8];
        }
        iVar5 = *(int *)((longlong)plVar7 +
                        (ulonglong)((int)plVar2[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
        if (iVar5 != -1) {
          do {
            puVar1 = (ulonglong *)(*plVar2 + (longlong)iVar5 * 0x18);
            if (*puVar1 == uVar3) {
              puVar8 = puVar1 + 1;
              if (puVar8 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
LAB_147d84125:
                FUN_1400bbfc4(&local_40,*puVar8);
                *param_2 = local_40;
                param_2[1] = uStack_3c;
                param_2[2] = uStack_38;
                param_2[3] = uStack_34;
                if (&local_40 == param_2) {
                  if (local_30 != 0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  if (*(longlong *)(param_2 + 4) != 0) {
                    FUN_1400020a8();
                  }
                  *(longlong *)(param_2 + 4) = local_30;
                  param_2[6] = local_28;
                  param_2[7] = local_24;
                }
              }
              break;
            }
            iVar5 = (int)puVar1[2];
          } while (iVar5 != -1);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d8419a FUN_147d8419a body=888 status=ok
// SIG undefined FUN_147d8419a(void)

longlong FUN_147d8419a(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140bfdfec();
  uVar5 = FUN_14479d2ce(param_2);
  if (uVar5 == 0) {
    if (param_2[1] == 0) goto LAB_147d84460;
    uVar5 = FUN_140007850();
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if ((uVar5 == 0) || (cVar4 == '\0')) {
      FUN_14485c47a(param_2,uVar5);
      if (uVar5 == 0) goto LAB_147d84460;
    }
    else {
      uVar7 = *(uint *)(uVar5 + 0xc);
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_2,uVar5);
      }
    }
    if ((*(uint *)(uVar5 + 8) >> 0x1e & 1) != 0) goto LAB_147d84460;
  }
  plVar2 = *(longlong **)(param_1 + 0xa0);
  if ((plVar2 != (longlong *)0x0) && ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34))) {
    uVar7 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    plVar9 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar9 = (longlong *)plVar2[8];
    }
    iVar8 = *(int *)((longlong)plVar9 +
                    (ulonglong)((int)plVar2[9] - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (ulonglong *)(*plVar2 + (longlong)iVar8 * 0x18);
        if (*puVar1 == uVar5) {
          puVar10 = puVar1 + 1;
          if (puVar10 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) goto LAB_147d843a3;
          break;
        }
        iVar8 = (int)puVar1[2];
      } while (iVar8 != -1);
    }
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    lVar6 = FUN_144a797b2();
    if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(uVar5 + 0x10) + 0x38)) && (uVar5 != 0))
        && (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
       (plVar2 = *(longlong **)(param_1 + 0xa8), (int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)
       )) {
      uVar7 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      plVar9 = plVar2 + 7;
      if ((longlong *)plVar2[8] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar2[8];
      }
      iVar8 = *(int *)((longlong)plVar9 +
                      (ulonglong)((int)plVar2[9] - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
      if (iVar8 != -1) {
        do {
          puVar1 = (ulonglong *)(*plVar2 + (longlong)iVar8 * 0x18);
          if (*puVar1 == uVar5) {
            puVar10 = puVar1 + 1;
            if (puVar10 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) goto LAB_147d843a3;
            break;
          }
          iVar8 = (int)puVar1[2];
        } while (iVar8 != -1);
      }
    }
  }
LAB_147d84460:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_147d843a3:
  uVar5 = *puVar10;
  if (uVar5 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    if (*(int *)((longlong)param_2 + 0x24) < 0) {
      FUN_1446f8c06(param_2 + 3,0);
    }
    puVar3 = (undefined2 *)param_2[3];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,uVar5);
    *(undefined4 *)(param_2 + 1) = local_48;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_44;
    *(undefined4 *)(param_2 + 2) = uStack_40;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_3c;
    if (param_2 + 1 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_2[3] != 0) {
        FUN_1400020a8();
      }
      param_2[3] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_2 + 4) = local_30;
      *(undefined4 *)((longlong)param_2 + 0x24) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar7 = *(uint *)(uVar5 + 0xc);
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        *param_2 = 0;
        goto LAB_147d84460;
      }
    }
    FUN_14485c47a(param_2,uVar5);
  }
  goto LAB_147d84460;
}



// FUNCTION 147d84514 FUN_147d84514 body=417 status=ok
// SIG undefined FUN_147d84514(void)

longlong FUN_147d84514(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  
  FUN_14688a3a0();
  uVar2 = *param_2;
  if (uVar2 != 0) {
    plVar3 = *(longlong **)(param_1 + 0xa0);
    if ((plVar3 != (longlong *)0x0) && ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34))) {
      uVar6 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      plVar7 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar3[8];
      }
      iVar5 = *(int *)((longlong)plVar7 +
                      (ulonglong)((int)plVar3[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar5 != -1) {
        do {
          puVar1 = (ulonglong *)(*plVar3 + (longlong)iVar5 * 0x18);
          if (*puVar1 == uVar2) {
            puVar8 = puVar1 + 1;
            if (puVar8 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) goto LAB_147d8467b;
            break;
          }
          iVar5 = (int)puVar1[2];
        } while (iVar5 != -1);
      }
    }
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar4 = FUN_144a797b2();
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(uVar2 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(uVar2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
         (plVar3 = *(longlong **)(param_1 + 0xa8),
         (int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34))) {
        uVar6 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        plVar7 = plVar3 + 7;
        if ((longlong *)plVar3[8] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar3[8];
        }
        iVar5 = *(int *)((longlong)plVar7 +
                        (ulonglong)((int)plVar3[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
        if (iVar5 != -1) {
          do {
            puVar1 = (ulonglong *)(*plVar3 + (longlong)iVar5 * 0x18);
            if (*puVar1 == uVar2) {
              puVar8 = puVar1 + 1;
              if (puVar8 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
                return param_1;
              }
LAB_147d8467b:
              uVar2 = *puVar8;
              if ((uVar2 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(uVar2);
              }
              *param_2 = uVar2;
              return param_1;
            }
            iVar5 = (int)puVar1[2];
          } while (iVar5 != -1);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 147d846b6 FUN_147d846b6 body=763 status=ok
// SIG undefined FUN_147d846b6(void)

longlong FUN_147d846b6(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14688a3da();
  uVar4 = FUN_14479d2ce(param_2);
  if (uVar4 == 0) {
    if (((*(int *)((longlong)param_2 + 0xc) == 0 && *(int *)(param_2 + 1) == 0) &&
        *(int *)(param_2 + 2) == 0) && *(int *)((longlong)param_2 + 0x14) == 0) goto LAB_147d84945;
    uVar4 = thunk_FUN_140971090();
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if ((uVar4 == 0) || (cVar3 == '\0')) {
      FUN_14485c47a(param_2,uVar4);
      if (uVar4 == 0) goto LAB_147d84945;
    }
    else {
      uVar6 = *(uint *)(uVar4 + 0xc);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_2,uVar4);
      }
    }
    if ((*(uint *)(uVar4 + 8) >> 0x1e & 1) != 0) goto LAB_147d84945;
  }
  plVar2 = *(longlong **)(param_1 + 0xa0);
  if ((plVar2 != (longlong *)0x0) && ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34))) {
    uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    plVar8 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar8 = (longlong *)plVar2[8];
    }
    iVar7 = *(int *)((longlong)plVar8 +
                    (ulonglong)((int)plVar2[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (ulonglong *)(*plVar2 + (longlong)iVar7 * 0x18);
        if (*puVar1 == uVar4) {
          puVar9 = puVar1 + 1;
          if (puVar9 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) goto LAB_147d848c6;
          break;
        }
        iVar7 = (int)puVar1[2];
      } while (iVar7 != -1);
    }
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    lVar5 = FUN_144a797b2();
    if ((((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(uVar4 + 0x10) + 0x38)) && (uVar4 != 0))
        && (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
       (plVar2 = *(longlong **)(param_1 + 0xa8), (int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)
       )) {
      uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      plVar8 = plVar2 + 7;
      if ((longlong *)plVar2[8] != (longlong *)0x0) {
        plVar8 = (longlong *)plVar2[8];
      }
      iVar7 = *(int *)((longlong)plVar8 +
                      (ulonglong)((int)plVar2[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar7 != -1) {
        do {
          puVar1 = (ulonglong *)(*plVar2 + (longlong)iVar7 * 0x18);
          if (*puVar1 == uVar4) {
            puVar9 = puVar1 + 1;
            if (puVar9 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) goto LAB_147d848c6;
            break;
          }
          iVar7 = (int)puVar1[2];
        } while (iVar7 != -1);
      }
    }
  }
LAB_147d84945:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_147d848c6:
  uVar4 = *puVar9;
  if (uVar4 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    FUN_1468b526e(&local_38,uVar4);
    *(undefined4 *)(param_2 + 1) = local_38;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_34;
    *(undefined4 *)(param_2 + 2) = uStack_30;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_2c;
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar6 = *(uint *)(uVar4 + 0xc);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        *param_2 = 0;
        goto LAB_147d84945;
      }
    }
    FUN_14485c47a(param_2,uVar4);
  }
  goto LAB_147d84945;
}



// FUNCTION 147d849b2 FUN_147d849b2 body=396 status=ok
// SIG undefined FUN_147d849b2(void)

longlong FUN_147d849b2(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong *puVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  
  FUN_14688a366();
  uVar2 = *param_2;
  if (uVar2 != 0) {
    plVar3 = *(longlong **)(param_1 + 0xa0);
    if ((plVar3 != (longlong *)0x0) && ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34))) {
      uVar6 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      plVar7 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar3[8];
      }
      iVar8 = *(int *)((longlong)plVar7 +
                      (ulonglong)((int)plVar3[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar8 != -1) {
        do {
          puVar1 = (ulonglong *)(*plVar3 + (longlong)iVar8 * 0x18);
          if (*puVar1 == uVar2) {
            puVar5 = puVar1 + 1;
            if (puVar5 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) goto LAB_147d84b1c;
            break;
          }
          iVar8 = (int)puVar1[2];
        } while (iVar8 != -1);
      }
    }
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar4 = FUN_144a797b2();
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(uVar2 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(uVar2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
         (plVar3 = *(longlong **)(param_1 + 0xa8),
         (int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34))) {
        uVar6 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        plVar7 = plVar3 + 7;
        if ((longlong *)plVar3[8] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar3[8];
        }
        iVar8 = *(int *)((longlong)plVar7 +
                        (ulonglong)((int)plVar3[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
        if (iVar8 != -1) {
          do {
            puVar1 = (ulonglong *)(*plVar3 + (longlong)iVar8 * 0x18);
            if (*puVar1 == uVar2) {
              puVar5 = puVar1 + 1;
              if (puVar5 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
                return param_1;
              }
LAB_147d84b1c:
              *param_2 = *puVar5;
              return param_1;
            }
            iVar8 = (int)puVar1[2];
          } while (iVar8 != -1);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 147d84b6a FUN_147d84b6a body=38 status=ok
// SIG undefined FUN_147d84b6a(void)

undefined8 FUN_147d84b6a(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d84b90 FUN_147d84b90 body=38 status=ok
// SIG undefined FUN_147d84b90(void)

undefined8 FUN_147d84b90(undefined8 param_1,int param_2)

{
  FUN_147d8229a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d84bb6 FUN_147d84bb6 body=32 status=ok
// SIG undefined FUN_147d84bb6(void)

undefined8 FUN_147d84bb6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"ReplaceObjectRef");
  return param_2;
}



// FUNCTION 147d84bd6 FUN_147d84bd6 body=54 status=ok
// SIG undefined FUN_147d84bd6(void)

void FUN_147d84bd6(longlong *param_1)

{
  FUN_147d84c0c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d84c0c FUN_147d84c0c body=356 status=ok
// SIG undefined FUN_147d84c0c(void)

void FUN_147d84c0c(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
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
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
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



// FUNCTION 147d84d72 FUN_147d84d72 body=67 status=ok
// SIG undefined FUN_147d84d72(void)

void FUN_147d84d72(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145c9922a(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147d84efa(param_1);
    return;
  }
  FUN_147d84db6(param_1);
  FUN_145c9922a(param_1,0);
  return;
}



// FUNCTION 147d84db6 FUN_147d84db6 body=322 status=ok
// SIG undefined FUN_147d84db6(void)

void FUN_147d84db6(longlong *param_1)

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



// FUNCTION 147d84efa FUN_147d84efa body=422 status=ok
// SIG undefined FUN_147d84efa(void)

void FUN_147d84efa(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 147d850a2 FUN_147d850a2 body=67 status=ok
// SIG undefined FUN_147d850a2(void)

void FUN_147d850a2(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145c99058(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147d8522a(param_1);
    return;
  }
  FUN_147d850e6(param_1);
  FUN_145c99058(param_1,0);
  return;
}



// FUNCTION 147d850e6 FUN_147d850e6 body=322 status=ok
// SIG undefined FUN_147d850e6(void)

void FUN_147d850e6(longlong *param_1)

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



// FUNCTION 147d8522a FUN_147d8522a body=450 status=ok
// SIG undefined FUN_147d8522a(void)

void FUN_147d8522a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 147d853ee FUN_147d853ee body=181 status=ok
// SIG undefined FUN_147d853ee(void)

longlong FUN_147d853ee(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_147d85486;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147d854a4(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_147d85486:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147d854a4 FUN_147d854a4 body=284 status=ok
// SIG undefined FUN_147d854a4(void)

undefined4 * FUN_147d854a4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147d855c2(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0;
  *(undefined8 *)(local_40 + 4) = 0;
  FUN_1447a1747(0,0);
  local_40[6] = 0xffffffff;
  cVar1 = FUN_147d856a8(param_1,param_3,local_40,local_48);
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
      local_40[7] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147d84efa(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d855c2 FUN_147d855c2 body=229 status=ok
// SIG undefined FUN_147d855c2(void)

int * FUN_147d855c2(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 147d856a8 FUN_147d856a8 body=172 status=ok
// SIG undefined FUN_147d856a8(void)

undefined8 FUN_147d856a8(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_1447a1747(*(undefined8 *)(piVar1 + 2),piVar1[4]);
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147d85754(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d85754 FUN_147d85754 body=114 status=ok
// SIG undefined FUN_147d85754(void)

void FUN_147d85754(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 147d857c6 FUN_147d857c6 body=190 status=ok
// SIG undefined FUN_147d857c6(void)

longlong FUN_147d857c6(longlong *param_1,uint param_2,double *param_3)

{
  double dVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  double *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar4 = *param_1 + (longlong)iVar2 * 0x20;
        dVar1 = *(double *)(*param_1 + (longlong)iVar2 * 0x20);
        if ((dVar1 == *param_3) && (!NAN(dVar1) && !NAN(*param_3))) {
          if (lVar4 != 0) goto LAB_147d85867;
          break;
        }
        iVar2 = *(int *)(lVar4 + 0x18);
      } while (iVar2 != -1);
    }
  }
  local_28 = param_3;
  FUN_147d85886(param_1,&local_1c,param_2);
  lVar4 = (longlong)local_1c * 0x20 + *param_1;
LAB_147d85867:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 8;
}



// FUNCTION 147d85886 FUN_147d85886 body=288 status=ok
// SIG undefined FUN_147d85886(void)

undefined4 * FUN_147d85886(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147d859a8(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_1447a1747(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_147d85a8e(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147d8522a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d859a8 FUN_147d859a8 body=229 status=ok
// SIG undefined FUN_147d859a8(void)

int * FUN_147d859a8(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 147d85a8e FUN_147d85a8e body=184 status=ok
// SIG undefined FUN_147d85a8e(void)

undefined8 FUN_147d85a8e(longlong *param_1,uint param_2,double *param_3,int *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        pdVar1 = (double *)(*param_1 + (longlong)iVar5 * 0x20);
        dVar2 = *(double *)(*param_1 + (longlong)iVar5 * 0x20);
        if ((dVar2 == *param_3) && (!NAN(dVar2) && !NAN(*param_3))) {
          FUN_1447a1747(pdVar1[1],*(undefined4 *)(pdVar1 + 2));
          if (pdVar1[1] != 0.0) {
            FUN_1400020a8();
          }
          dVar2 = *param_3;
          dVar3 = param_3[1];
          pdVar1[2] = param_3[2];
          *pdVar1 = dVar2;
          pdVar1[1] = dVar3;
          FUN_147d85b46(param_1,*param_4);
          *param_4 = iVar5;
          return 1;
        }
        iVar5 = *(int *)(pdVar1 + 3);
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d85b46 FUN_147d85b46 body=114 status=ok
// SIG undefined FUN_147d85b46(void)

void FUN_147d85b46(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 147d85bb8 FUN_147d85bb8 body=132 status=ok
// SIG undefined FUN_147d85bb8(void)

void FUN_147d85bb8(longlong param_1,int param_2)

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



// FUNCTION 147d85c3e FUN_147d85c3e body=31 status=ok
// SIG undefined FUN_147d85c3e(void)

undefined8 FUN_147d85c3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d85c7a FUN_147d85c7a body=93 status=ok
// SIG undefined FUN_147d85c7a(void)

void FUN_147d85c7a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aae61b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147d85cd8 FUN_147d85cd8 body=126 status=ok
// SIG undefined FUN_147d85cd8(void)

void FUN_147d85cd8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aae61b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d85d47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d85d56 FUN_147d85d56 body=21 status=ok
// SIG undefined FUN_147d85d56(void)

undefined8 FUN_147d85d56(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147d85d6c FUN_147d85d6c body=31 status=ok
// SIG undefined FUN_147d85d6c(void)

undefined8 FUN_147d85d6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d85dae FUN_147d85dae body=93 status=ok
// SIG undefined FUN_147d85dae(void)

void FUN_147d85dae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aae62d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aae6260;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147d85e0c FUN_147d85e0c body=93 status=ok
// SIG undefined FUN_147d85e0c(void)

void FUN_147d85e0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aae62d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aae6260;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147d85e6a FUN_147d85e6a body=126 status=ok
// SIG undefined FUN_147d85e6a(void)

void FUN_147d85e6a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aae62d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aae6260;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d85ed9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d85ee8 FUN_147d85ee8 body=26 status=ok
// SIG undefined FUN_147d85ee8(void)

undefined8 FUN_147d85ee8(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return param_2;
}



// FUNCTION 147d85f02 FUN_147d85f02 body=77 status=ok
// SIG undefined FUN_147d85f02(void)

undefined8 FUN_147d85f02(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(param_1 + 0x18))(local_20);
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d85fa0 FUN_147d85fa0 body=28 status=ok
// SIG undefined FUN_147d85fa0(void)

undefined8 FUN_147d85fa0(undefined8 param_1,undefined8 param_2)

{
  FUN_147d76912(param_2,param_1);
  return param_1;
}



// FUNCTION 147d85fc2 FUN_147d85fc2 body=78 status=ok
// SIG undefined FUN_147d85fc2(void)

undefined8 FUN_147d85fc2(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_147d76854(param_2,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d86012 FUN_147d86012 body=28 status=ok
// SIG undefined FUN_147d86012(void)

undefined8 FUN_147d86012(undefined8 param_1,undefined8 param_2)

{
  FUN_147d76f64(param_2,param_1);
  return param_1;
}



// FUNCTION 147d8602e FUN_147d8602e body=28 status=ok
// SIG undefined FUN_147d8602e(void)

undefined8 FUN_147d8602e(undefined8 param_1,undefined8 param_2)

{
  FUN_147d7709e(param_2,param_1);
  return param_1;
}



// FUNCTION 147d86050 FUN_147d86050 body=78 status=ok
// SIG undefined FUN_147d86050(void)

undefined8 FUN_147d86050(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_147d770c8(param_2,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d860a0 FUN_147d860a0 body=28 status=ok
// SIG undefined FUN_147d860a0(void)

undefined8 FUN_147d860a0(undefined8 param_1,undefined8 param_2)

{
  FUN_147d76a26(param_2,param_1);
  return param_1;
}



// FUNCTION 147d860bc FUN_147d860bc body=28 status=ok
// SIG undefined FUN_147d860bc(void)

undefined8 FUN_147d860bc(undefined8 param_1,undefined8 param_2)

{
  FUN_147d76a96(param_2,param_1);
  return param_1;
}



// FUNCTION 147d860de FUN_147d860de body=78 status=ok
// SIG undefined FUN_147d860de(void)

undefined8 FUN_147d860de(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_147d76bfc(param_2,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8612e FUN_147d8612e body=31 status=ok
// SIG undefined FUN_147d8612e(void)

undefined8 FUN_147d8612e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d86168 FUN_147d86168 body=29 status=ok
// SIG undefined FUN_147d86168(void)

bool FUN_147d86168(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147d86186 FUN_147d86186 body=101 status=ok
// SIG undefined FUN_147d86186(void)

void FUN_147d86186(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90c0e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aae65b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147d861ec FUN_147d861ec body=101 status=ok
// SIG undefined FUN_147d861ec(void)

void FUN_147d861ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90c0e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aae65b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147d86252 FUN_147d86252 body=134 status=ok
// SIG undefined FUN_147d86252(void)

void FUN_147d86252(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a90c0e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aae65b0;
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
                    /* WARNING: Could not recover jumptable at 0x000147d862c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d862d8 FUN_147d862d8 body=62 status=ok
// SIG undefined FUN_147d862d8(void)

void FUN_147d862d8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147d86313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147d86316 FUN_147d86316 body=177 status=ok
// SIG undefined FUN_147d86316(void)

bool FUN_147d86316(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d863c8 FUN_147d863c8 body=31 status=ok
// SIG undefined FUN_147d863c8(void)

undefined8 FUN_147d863c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d86402 FUN_147d86402 body=29 status=ok
// SIG undefined FUN_147d86402(void)

bool FUN_147d86402(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147d86420 FUN_147d86420 body=101 status=ok
// SIG undefined FUN_147d86420(void)

void FUN_147d86420(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90c070;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aae6620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147d86486 FUN_147d86486 body=101 status=ok
// SIG undefined FUN_147d86486(void)

void FUN_147d86486(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90c070;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aae6620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147d864ec FUN_147d864ec body=134 status=ok
// SIG undefined FUN_147d864ec(void)

void FUN_147d864ec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a90c070;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aae6620;
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
                    /* WARNING: Could not recover jumptable at 0x000147d86563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d86572 FUN_147d86572 body=62 status=ok
// SIG undefined FUN_147d86572(void)

void FUN_147d86572(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147d865ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147d865b0 FUN_147d865b0 body=190 status=ok
// SIG undefined FUN_147d865b0(void)

bool FUN_147d865b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_48 = param_5;
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d86670 FUN_147d86670 body=31 status=ok
// SIG undefined FUN_147d86670(void)

undefined8 FUN_147d86670(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d866aa FUN_147d866aa body=29 status=ok
// SIG undefined FUN_147d866aa(void)

bool FUN_147d866aa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147d866c8 FUN_147d866c8 body=26 status=ok
// SIG undefined FUN_147d866c8(void)

bool FUN_147d866c8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147d866e2 FUN_147d866e2 body=101 status=ok
// SIG undefined FUN_147d866e2(void)

void FUN_147d866e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aae6700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aae6690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147d86748 FUN_147d86748 body=101 status=ok
// SIG undefined FUN_147d86748(void)

void FUN_147d86748(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aae6700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aae6690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147d867ae FUN_147d867ae body=134 status=ok
// SIG undefined FUN_147d867ae(void)

void FUN_147d867ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aae6700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aae6690;
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
                    /* WARNING: Could not recover jumptable at 0x000147d86825. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d86834 FUN_147d86834 body=62 status=ok
// SIG undefined FUN_147d86834(void)

void FUN_147d86834(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147d8686f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147d86872 FUN_147d86872 body=177 status=ok
// SIG undefined FUN_147d86872(void)

bool FUN_147d86872(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d86926 FUN_147d86926 body=31 status=ok
// SIG undefined FUN_147d86926(void)

undefined8 FUN_147d86926(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d86960 FUN_147d86960 body=29 status=ok
// SIG undefined FUN_147d86960(void)

bool FUN_147d86960(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147d8697e FUN_147d8697e body=26 status=ok
// SIG undefined FUN_147d8697e(void)

bool FUN_147d8697e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147d86998 FUN_147d86998 body=24 status=ok
// SIG undefined FUN_147d86998(void)

bool FUN_147d86998(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147d869b0 FUN_147d869b0 body=101 status=ok
// SIG undefined FUN_147d869b0(void)

void FUN_147d869b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aae6770;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147d86a16 FUN_147d86a16 body=134 status=ok
// SIG undefined FUN_147d86a16(void)

void FUN_147d86a16(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aae6770;
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
                    /* WARNING: Could not recover jumptable at 0x000147d86a8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d86a9c FUN_147d86a9c body=42 status=ok
// SIG undefined FUN_147d86a9c(void)

void FUN_147d86a9c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147d86ac3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147d86ac6 FUN_147d86ac6 body=154 status=ok
// SIG undefined FUN_147d86ac6(void)

bool FUN_147d86ac6(longlong param_1,undefined4 param_2)

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



// FUNCTION 147d86b7c FUN_147d86b7c body=29 status=ok
// SIG undefined FUN_147d86b7c(void)

bool FUN_147d86b7c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147d86b9a FUN_147d86b9a body=26 status=ok
// SIG undefined FUN_147d86b9a(void)

bool FUN_147d86b9a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147d86bb4 FUN_147d86bb4 body=24 status=ok
// SIG undefined FUN_147d86bb4(void)

bool FUN_147d86bb4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147d86bd8 FUN_147d86bd8 body=101 status=ok
// SIG undefined FUN_147d86bd8(void)

void FUN_147d86bd8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aae6850;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aae67e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147d86c3e FUN_147d86c3e body=134 status=ok
// SIG undefined FUN_147d86c3e(void)

void FUN_147d86c3e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aae6850;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aae67e0;
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
                    /* WARNING: Could not recover jumptable at 0x000147d86cb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d86cc4 FUN_147d86cc4 body=62 status=ok
// SIG undefined FUN_147d86cc4(void)

void FUN_147d86cc4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147d86cff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147d86d02 FUN_147d86d02 body=177 status=ok
// SIG undefined FUN_147d86d02(void)

bool FUN_147d86d02(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d86dd0 FUN_147d86dd0 body=29 status=ok
// SIG undefined FUN_147d86dd0(void)

bool FUN_147d86dd0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147d86dee FUN_147d86dee body=26 status=ok
// SIG undefined FUN_147d86dee(void)

bool FUN_147d86dee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147d86e08 FUN_147d86e08 body=24 status=ok
// SIG undefined FUN_147d86e08(void)

bool FUN_147d86e08(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147d86e2c FUN_147d86e2c body=101 status=ok
// SIG undefined FUN_147d86e2c(void)

void FUN_147d86e2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aae6930;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aae68c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147d86e92 FUN_147d86e92 body=134 status=ok
// SIG undefined FUN_147d86e92(void)

void FUN_147d86e92(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aae6930;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aae68c0;
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
                    /* WARNING: Could not recover jumptable at 0x000147d86f09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d86f18 FUN_147d86f18 body=62 status=ok
// SIG undefined FUN_147d86f18(void)

void FUN_147d86f18(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147d86f53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147d86f56 FUN_147d86f56 body=229 status=ok
// SIG undefined FUN_147d86f56(void)

bool FUN_147d86f56(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_50 = param_8;
    local_58 = param_7;
    local_60 = param_6;
    local_68 = param_5;
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8703e FUN_147d8703e body=95 status=ok
// SIG undefined FUN_147d8703e(void)

void FUN_147d8703e(longlong param_1,uint param_2)

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



// FUNCTION 147d8709e FUN_147d8709e body=132 status=ok
// SIG undefined FUN_147d8709e(void)

void FUN_147d8709e(longlong param_1,int param_2)

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



// FUNCTION 147d87124 FUN_147d87124 body=24 status=ok
// SIG undefined FUN_147d87124(void)

void FUN_147d87124(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d87138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}


