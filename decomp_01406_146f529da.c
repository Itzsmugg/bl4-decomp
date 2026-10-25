// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146f529da FUN_146f529da body=110 status=ok
// SIG undefined FUN_146f529da(void)

ulonglong FUN_146f529da(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x130) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146f52a13;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x130,8);
      param_2 = param_2 / 0x130;
    }
  }
LAB_146f52a13:
  return param_2 & 0xffffffff;
}



// FUNCTION 146f52a48 FUN_146f52a48 body=34 status=ok
// SIG undefined FUN_146f52a48(void)

undefined8 FUN_146f52a48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146f52a84 FUN_146f52a84 body=29 status=ok
// SIG undefined FUN_146f52a84(void)

bool FUN_146f52a84(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146f52aa2 FUN_146f52aa2 body=26 status=ok
// SIG undefined FUN_146f52aa2(void)

bool FUN_146f52aa2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146f52abc FUN_146f52abc body=24 status=ok
// SIG undefined FUN_146f52abc(void)

bool FUN_146f52abc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146f52ad4 FUN_146f52ad4 body=60 status=ok
// SIG undefined FUN_146f52ad4(void)

void FUN_146f52ad4(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149f9e020;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 146f52b10 FUN_146f52b10 body=60 status=ok
// SIG undefined FUN_146f52b10(void)

void FUN_146f52b10(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149f9e020;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 146f52b4c FUN_146f52b4c body=97 status=ok
// SIG undefined FUN_146f52b4c(void)

void FUN_146f52b4c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  EnterCriticalSection(param_2);
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149f9e020;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146f52bae FUN_146f52bae body=35 status=ok
// SIG undefined FUN_146f52bae(void)

void FUN_146f52bae(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000146f52bcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 146f52bd2 FUN_146f52bd2 body=130 status=ok
// SIG undefined FUN_146f52bd2(void)

bool FUN_146f52bd2(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f52c56 FUN_146f52c56 body=125 status=ok
// SIG undefined FUN_146f52c56(void)

void FUN_146f52c56(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x80;
    if (0x80 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_146f52cd4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f52cd4 FUN_146f52cd4 body=144 status=ok
// SIG undefined FUN_146f52cd4(void)

void FUN_146f52cd4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,4);
  return;
}



// FUNCTION 146f52d64 FUN_146f52d64 body=67 status=ok
// SIG undefined FUN_146f52d64(void)

void FUN_146f52d64(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f52da8(*(undefined4 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x20c));
  if (iVar1 == *(int *)(param_1 + 0x20c)) {
    return;
  }
  *(int *)(param_1 + 0x20c) = iVar1;
  FUN_146f52cd4(param_1,*(undefined4 *)(param_1 + 0x208),iVar1);
  return;
}



// FUNCTION 146f52da8 FUN_146f52da8 body=111 status=ok
// SIG undefined FUN_146f52da8(void)

ulonglong FUN_146f52da8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x80;
  if (0x80 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146f52e18 FUN_146f52e18 body=132 status=ok
// SIG undefined FUN_146f52e18(void)

void FUN_146f52e18(longlong param_1,int param_2)

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



// FUNCTION 146f52e9e FUN_146f52e9e body=62 status=ok
// SIG undefined FUN_146f52e9e(void)

void FUN_146f52e9e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f52edc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146f52edc FUN_146f52edc body=93 status=ok
// SIG undefined FUN_146f52edc(void)

ulonglong FUN_146f52edc(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146f52f3a FUN_146f52f3a body=132 status=ok
// SIG undefined FUN_146f52f3a(void)

void FUN_146f52f3a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f52fc0 FUN_146f52fc0 body=62 status=ok
// SIG undefined FUN_146f52fc0(void)

void FUN_146f52fc0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f52ffe(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,2);
  }
  return;
}



// FUNCTION 146f52ffe FUN_146f52ffe body=93 status=ok
// SIG undefined FUN_146f52ffe(void)

ulonglong FUN_146f52ffe(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,2);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146f5305c FUN_146f5305c body=34 status=ok
// SIG undefined FUN_146f5305c(void)

undefined8 FUN_146f5305c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146f5309a FUN_146f5309a body=60 status=ok
// SIG undefined FUN_146f5309a(void)

void FUN_146f5309a(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_149e41aa0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149f9e090;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 146f530d6 FUN_146f530d6 body=60 status=ok
// SIG undefined FUN_146f530d6(void)

void FUN_146f530d6(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_149e41aa0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149f9e090;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 146f53112 FUN_146f53112 body=97 status=ok
// SIG undefined FUN_146f53112(void)

void FUN_146f53112(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  EnterCriticalSection(param_2);
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar2 = &PTR_LAB_149e41aa0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149f9e090;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146f53182 FUN_146f53182 body=21 status=ok
// SIG undefined FUN_146f53182(void)

undefined8 FUN_146f53182(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146f53198 FUN_146f53198 body=136 status=ok
// SIG undefined FUN_146f53198(void)

void FUN_146f53198(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x288);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x28c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x28,0);
      iVar4 = (int)(uVar3 / 0x28);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x28c) = iVar5;
    FUN_146f53222(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f53222 FUN_146f53222 body=149 status=ok
// SIG undefined FUN_146f53222(void)

void FUN_146f53222(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x280);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x280,0,param_3,0x28);
    memmove(*(void **)((longlong)param_1 + 0x280),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x280,param_2,param_3,0x28);
  return;
}



// FUNCTION 146f532b8 FUN_146f532b8 body=120 status=ok
// SIG undefined FUN_146f532b8(void)

void FUN_146f532b8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x10;
    if (0x10 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x18c)) {
    *(int *)(param_1 + 0x18c) = iVar3;
    FUN_146f53330(param_1,*(undefined4 *)(param_1 + 0x188));
    return;
  }
  return;
}



// FUNCTION 146f53330 FUN_146f53330 body=149 status=ok
// SIG undefined FUN_146f53330(void)

void FUN_146f53330(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x180);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x180,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x180),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x180,param_2,param_3,0x18);
  return;
}



// FUNCTION 146f533c5 FUN_146f533c5 body=10 status=ok
// SIG undefined FUN_146f533c5(void)

void FUN_146f533c5(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 146f533d0 FUN_146f533d0 body=136 status=ok
// SIG undefined FUN_146f533d0(void)

void FUN_146f533d0(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x188);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x18c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x18c) = iVar5;
    FUN_146f53330(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f5345a FUN_146f5345a body=53 status=ok
// SIG undefined FUN_146f5345a(void)

undefined8 * FUN_146f5345a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f9e0f8;
  FUN_146f4a1a6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 146f53494 FUN_146f53494 body=142 status=ok
// SIG undefined FUN_146f53494(void)

undefined4 * FUN_146f53494(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  FUN_146f53522(param_1 + 2,param_2 + 2);
  FUN_146f535ac(param_1 + 0x68,param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x178) = 0;
  iVar1 = param_2[0x17a];
  uVar2 = *(undefined8 *)(param_2 + 0x178);
  param_1[0x17a] = iVar1;
  if (iVar1 == 0) {
    param_1[0x17b] = 0;
  }
  else {
    FUN_146f1dbaa(param_1 + 0x178,iVar1,0);
    FUN_146f1ae2b(*(undefined8 *)(param_1 + 0x178),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 146f53522 FUN_146f53522 body=137 status=ok
// SIG undefined FUN_146f53522(void)

void * FUN_146f53522(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x188);
  _Src = *(void **)((longlong)param_2 + 0x180);
  *(int *)((longlong)param_1 + 0x188) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x18c) = 0x10;
  }
  else {
    if (_Src == (void *)0x0) {
      _Src = param_2;
    }
    FUN_146f53786(param_1,iVar1);
    _Dst = *(void **)((longlong)param_1 + 0x180);
    if (*(void **)((longlong)param_1 + 0x180) == (void *)0x0) {
      _Dst = param_1;
    }
    memcpy(_Dst,_Src,(longlong)iVar1 * 0x18);
  }
  *(undefined4 *)((longlong)param_1 + 400) = *(undefined4 *)((longlong)param_2 + 400);
  return param_1;
}



// FUNCTION 146f535ac FUN_146f535ac body=474 status=ok
// SIG undefined FUN_146f535ac(void)

void * FUN_146f535ac(void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x108);
  pvVar3 = *(void **)((longlong)param_2 + 0x100);
  *(int *)((longlong)param_1 + 0x108) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0x20;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = param_2;
    }
    FUN_146f537f4(param_1,iVar1);
    pvVar2 = *(void **)((longlong)param_1 + 0x100);
    if (*(void **)((longlong)param_1 + 0x100) == (void *)0x0) {
      pvVar2 = param_1;
    }
    memcpy(pvVar2,pvVar3,(longlong)iVar1 << 3);
  }
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x198);
  pvVar3 = *(void **)((longlong)param_2 + 400);
  *(int *)((longlong)param_1 + 0x198) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x19c) = 0x20;
  }
  else {
    pvVar2 = (void *)((longlong)param_2 + 0x110);
    if (pvVar3 != (void *)0x0) {
      pvVar2 = pvVar3;
    }
    FUN_146f53858((void *)((longlong)param_1 + 0x110),iVar1);
    pvVar3 = *(void **)((longlong)param_1 + 400);
    if (*(void **)((longlong)param_1 + 400) == (void *)0x0) {
      pvVar3 = (void *)((longlong)param_1 + 0x110);
    }
    memcpy(pvVar3,pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined8 *)((longlong)param_1 + 0x3a0) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x3a8);
  pvVar3 = *(void **)((longlong)param_2 + 0x3a0);
  *(int *)((longlong)param_1 + 0x3a8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3ac) = 0x20;
  }
  else {
    pvVar2 = (void *)((longlong)param_2 + 0x1a0);
    if (pvVar3 != (void *)0x0) {
      pvVar2 = pvVar3;
    }
    FUN_146f538bc((void *)((longlong)param_1 + 0x1a0),iVar1);
    pvVar3 = *(void **)((longlong)param_1 + 0x3a0);
    if (*(void **)((longlong)param_1 + 0x3a0) == (void *)0x0) {
      pvVar3 = (void *)((longlong)param_1 + 0x1a0);
    }
    memcpy(pvVar3,pvVar2,(longlong)iVar1 << 4);
  }
  *(undefined8 *)((longlong)param_1 + 0x430) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x438);
  pvVar3 = *(void **)((longlong)param_2 + 0x430);
  *(int *)((longlong)param_1 + 0x438) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x43c) = 0x20;
  }
  else {
    pvVar2 = (void *)((longlong)param_2 + 0x3b0);
    if (pvVar3 != (void *)0x0) {
      pvVar2 = pvVar3;
    }
    FUN_146f53858((void *)((longlong)param_1 + 0x3b0),iVar1);
    pvVar3 = *(void **)((longlong)param_1 + 0x430);
    if (*(void **)((longlong)param_1 + 0x430) == (void *)0x0) {
      pvVar3 = (void *)((longlong)param_1 + 0x3b0);
    }
    memcpy(pvVar3,pvVar2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 146f53786 FUN_146f53786 body=110 status=ok
// SIG undefined FUN_146f53786(void)

undefined8 FUN_146f53786(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 0x11) {
    iVar5 = 0x10;
  }
  else {
    iVar4 = 0;
    uVar2 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
    iVar5 = (int)(uVar2 / 0x18);
    if (iVar5 < (int)param_2) {
      iVar5 = 0x7fffffff;
    }
    else if (iVar5 < 1) goto LAB_146f537c8;
  }
  iVar4 = iVar5;
  uVar3 = FUN_146f53330(param_1,0,iVar4);
LAB_146f537c8:
  *(int *)(param_1 + 0x18c) = iVar4;
  return uVar3;
}



// FUNCTION 146f537f4 FUN_146f537f4 body=99 status=ok
// SIG undefined FUN_146f537f4(void)

void FUN_146f537f4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 0x21) {
    iVar3 = 0x20;
  }
  else {
    iVar2 = 0;
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    iVar3 = (int)(uVar1 >> 3);
    if (iVar3 < (int)param_2) {
      iVar3 = 0x7fffffff;
    }
    else if (iVar3 < 1) goto LAB_146f53825;
  }
  iVar2 = iVar3;
  FUN_146f1b29e(param_1,0,iVar2,8);
LAB_146f53825:
  *(int *)(param_1 + 0x10c) = iVar2;
  return;
}



// FUNCTION 146f53858 FUN_146f53858 body=99 status=ok
// SIG undefined FUN_146f53858(void)

void FUN_146f53858(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 0x21) {
    iVar3 = 0x20;
  }
  else {
    iVar2 = 0;
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
    iVar3 = (int)(uVar1 >> 2);
    if (iVar3 < (int)param_2) {
      iVar3 = 0x7fffffff;
    }
    else if (iVar3 < 1) goto LAB_146f53889;
  }
  iVar2 = iVar3;
  FUN_146f1afe0(param_1,0,iVar2,4);
LAB_146f53889:
  *(int *)(param_1 + 0x8c) = iVar2;
  return;
}



// FUNCTION 146f538bc FUN_146f538bc body=99 status=ok
// SIG undefined FUN_146f538bc(void)

void FUN_146f538bc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 0x21) {
    iVar3 = 0x20;
  }
  else {
    iVar2 = 0;
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
    iVar3 = (int)(uVar1 >> 4);
    if (iVar3 < (int)param_2) {
      iVar3 = 0x7fffffff;
    }
    else if (iVar3 < 1) goto LAB_146f538ed;
  }
  iVar2 = iVar3;
  FUN_146f1b536(param_1,0,iVar2,0x10);
LAB_146f538ed:
  *(int *)(param_1 + 0x20c) = iVar2;
  return;
}



// FUNCTION 146f53920 FUN_146f53920 body=304 status=ok
// SIG undefined FUN_146f53920(void)

undefined4 * FUN_146f53920(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f53a52(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_146f53b38(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146f53c2a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f53a52 FUN_146f53a52 body=230 status=ok
// SIG undefined FUN_146f53a52(void)

int * FUN_146f53a52(longlong *param_1,int *param_2)

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



// FUNCTION 146f53b38 FUN_146f53b38 body=128 status=ok
// SIG undefined FUN_146f53b38(void)

undefined8 FUN_146f53b38(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_146f53bb8((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f53bb8 FUN_146f53bb8 body=114 status=ok
// SIG undefined FUN_146f53bb8(void)

void FUN_146f53bb8(longlong *param_1,int param_2)

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



// FUNCTION 146f53c2a FUN_146f53c2a body=447 status=ok
// SIG undefined FUN_146f53c2a(void)

void FUN_146f53c2a(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 146f53dea FUN_146f53dea body=62 status=ok
// SIG undefined FUN_146f53dea(void)

void FUN_146f53dea(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f53e28(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146f53e28 FUN_146f53e28 body=93 status=ok
// SIG undefined FUN_146f53e28(void)

ulonglong FUN_146f53e28(uint param_1,uint param_2)

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



// FUNCTION 146f53e8a FUN_146f53e8a body=153 status=ok
// SIG undefined FUN_146f53e8a(void)

void FUN_146f53e8a(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_146f14ba4(param_1,*param_2);
  FUN_146f14ba4(param_1 + 0x18,*param_2);
  FUN_146f14ba4(param_1 + 0x30,*param_2);
  lVar5 = FUN_145b0a864();
  lVar6 = *(longlong *)(lVar5 + 0x110);
  if (lVar6 == 0) {
    FUN_140aa6c08(lVar5);
    lVar6 = *(longlong *)(lVar5 + 0x110);
  }
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar6 + 0x38);
  uVar1 = *(undefined4 *)(lVar6 + 0x2c);
  uVar2 = *(undefined4 *)(lVar6 + 0x30);
  uVar3 = *(undefined4 *)(lVar6 + 0x34);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar6 + 0x28);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  lVar5 = FUN_145b0a864();
  lVar6 = *(longlong *)(lVar5 + 0x110);
  if (lVar6 == 0) {
    FUN_140aa6c08(lVar5);
    lVar6 = *(longlong *)(lVar5 + 0x110);
  }
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar6 + 0x50);
  uVar4 = *(undefined8 *)(lVar6 + 0x48);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar6 + 0x40);
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  return;
}



// FUNCTION 146f53f24 FUN_146f53f24 body=47 status=ok
// SIG undefined FUN_146f53f24(void)

void FUN_146f53f24(longlong param_1,undefined4 param_2)

{
  FUN_146efc8cc();
  FUN_146efc8cc(param_1 + 0x18,param_2);
  FUN_146efc8cc(param_1 + 0x30,param_2);
  return;
}



// FUNCTION 146f53f54 FUN_146f53f54 body=175 status=ok
// SIG undefined FUN_146f53f54(void)

int FUN_146f53f54(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = (int)param_1[1];
  iVar2 = (int)param_1[2];
  iVar4 = iVar2 + param_2 + 0x7ff;
  iVar3 = iVar2 + param_2 + 0xffe;
  if (-1 < iVar4) {
    iVar3 = iVar4;
  }
  *(int *)(param_1 + 2) = iVar2 + param_2;
  if (iVar7 < iVar3 >> 0xb) {
    do {
      lVar5 = FUN_14001cc68(0x10000,0x10);
      lVar6 = 0;
      do {
        puVar1 = (undefined8 *)(lVar5 + 0xc + lVar6);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar5 + lVar6) = 0;
        ((undefined8 *)(lVar5 + lVar6))[1] = 0;
        lVar6 = lVar6 + 0x20;
      } while (lVar6 != 0x10000);
      iVar4 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
        FUN_1456bd870(param_1,iVar4);
      }
      *(longlong *)(*param_1 + (longlong)iVar4 * 8) = lVar5;
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar3 >> 0xb);
  }
  return iVar2;
}



// FUNCTION 146f54004 FUN_146f54004 body=292 status=ok
// SIG undefined FUN_146f54004(void)

void FUN_146f54004(longlong param_1,uint param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  double *pdVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  
  uVar3 = param_2 + 0x7ff;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  uVar5 = (ulonglong)(param_2 >> 5);
  uVar6 = 1 << ((byte)param_2 & 0x1f);
  pdVar4 = (double *)
           ((ulonglong)(uint)((int)param_2 % 0x800) * 0x20 +
           *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)((int)uVar3 >> 0xb) * 8));
  uVar3 = uVar6;
  if ((*(uint *)(*(longlong *)(param_1 + 0x18) + uVar5 * 4) >> (param_2 & 0x1f) & 1) == 0) {
    if ((*pdVar4 == *param_3) && (!NAN(*pdVar4) && !NAN(*param_3))) {
      if ((pdVar4[1] == param_3[1]) && (!NAN(pdVar4[1]) && !NAN(param_3[1]))) {
        if ((pdVar4[2] == param_3[2]) && (!NAN(pdVar4[2]) && !NAN(param_3[2]))) {
          uVar3 = 0;
          if (*(float *)(pdVar4 + 3) != *(float *)(param_3 + 3)) {
            uVar3 = uVar6;
          }
          if (NAN(*(float *)(pdVar4 + 3)) || NAN(*(float *)(param_3 + 3))) {
            uVar3 = uVar6;
          }
        }
      }
    }
  }
  dVar1 = *param_3;
  dVar11 = param_3[1];
  dVar2 = param_3[3];
  pdVar4[2] = param_3[2];
  pdVar4[3] = dVar2;
  *pdVar4 = dVar1;
  pdVar4[1] = dVar11;
  dVar1 = param_3[2];
  uVar7 = SUB84(dVar1,0);
  uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar11 = *(double *)(param_1 + 0x88);
  if (dVar11 <= dVar1) {
    uVar7 = SUB84(dVar11,0);
    uVar8 = (undefined4)((ulonglong)dVar11 >> 0x20);
  }
  dVar1 = *(double *)(param_1 + 0x70);
  if ((double)CONCAT44(uVar8,uVar7) <= dVar1) {
    uVar7 = SUB84(dVar1,0);
    uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = *param_3;
  uVar9 = SUB84(dVar1,0);
  uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar11 = param_3[1];
  if (*(double *)(param_1 + 0x80) <= param_3[1]) {
    dVar11 = *(double *)(param_1 + 0x80);
  }
  if (dVar11 <= *(double *)(param_1 + 0x68)) {
    dVar11 = *(double *)(param_1 + 0x68);
  }
  dVar2 = *(double *)(param_1 + 0x78);
  if (dVar2 <= dVar1) {
    uVar9 = SUB84(dVar2,0);
    uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  dVar1 = *(double *)(param_1 + 0x60);
  if ((double)CONCAT44(uVar10,uVar9) <= dVar1) {
    uVar9 = SUB84(dVar1,0);
    uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  *pdVar4 = (double)CONCAT44(uVar10,uVar9);
  pdVar4[1] = dVar11;
  pdVar4[2] = (double)CONCAT44(uVar8,uVar7);
  *(uint *)(*(longlong *)(param_1 + 0x18) + uVar5 * 4) =
       ~uVar6 & *(uint *)(*(longlong *)(param_1 + 0x18) + uVar5 * 4) | uVar3;
  return;
}



// FUNCTION 146f54128 FUN_146f54128 body=192 status=ok
// SIG undefined FUN_146f54128(void)

void FUN_146f54128(longlong param_1,uint param_2,double *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar6 = param_3[2];
  if (*(double *)(param_1 + 0x88) <= param_3[2]) {
    dVar6 = *(double *)(param_1 + 0x88);
  }
  if (dVar6 <= *(double *)(param_1 + 0x70)) {
    dVar6 = *(double *)(param_1 + 0x70);
  }
  dVar8 = param_3[1];
  if (*(double *)(param_1 + 0x80) <= param_3[1]) {
    dVar8 = *(double *)(param_1 + 0x80);
  }
  if (dVar8 <= *(double *)(param_1 + 0x68)) {
    dVar8 = *(double *)(param_1 + 0x68);
  }
  dVar7 = *param_3;
  if (*(double *)(param_1 + 0x78) <= *param_3) {
    dVar7 = *(double *)(param_1 + 0x78);
  }
  if (dVar7 <= *(double *)(param_1 + 0x60)) {
    dVar7 = *(double *)(param_1 + 0x60);
  }
  uVar3 = param_2 + 0x7ff;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)((int)uVar3 >> 0xb) * 8);
  lVar5 = (ulonglong)(uint)((int)param_2 % 0x800) * 0x20;
  *(double *)(lVar2 + lVar5) = dVar7;
  *(double *)(lVar2 + 8 + lVar5) = dVar8;
  *(double *)(lVar2 + 0x10 + lVar5) = dVar6;
  uVar4 = 1 << ((byte)param_2 & 0x1f);
  uVar3 = 0;
  if (NAN(dVar6)) {
    uVar3 = uVar4;
  }
  if (NAN(dVar8)) {
    uVar3 = uVar4;
  }
  if (NAN(dVar7)) {
    uVar3 = uVar4;
  }
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(param_2 >> 5) * 4);
  if ((uVar1 >> (param_2 & 0x1f) & 1) != 0) {
    uVar3 = uVar4;
  }
  *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(param_2 >> 5) * 4) =
       uVar1 & ~(1 << (param_2 & 0x1f)) | uVar3;
  return;
}



// FUNCTION 146f541e8 FUN_146f541e8 body=338 status=ok
// SIG undefined FUN_146f541e8(void)

void FUN_146f541e8(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined4 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  if (*(short *)(lVar2 + 2) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  lVar4 = *param_2;
  FUN_146f5435e(uVar3,0,1);
  FUN_146f5435e(uVar3,*(undefined2 *)(lVar2 + 2),*(undefined2 *)(lVar4 + 0x12));
  lVar4 = *(longlong *)(lVar4 + 0x38);
  plVar5 = *(longlong **)(lVar4 + 0x10);
  local_58 = 0;
  local_68[1] = 0;
  local_68[0] = plVar5[1];
  local_50 = *(longlong *)(lVar2 + 8);
  lVar6 = *plVar5;
  uVar10 = (ulonglong)*(uint *)(lVar4 + 0x74);
  uVar8 = *(uint *)((longlong)param_2 + 0xc);
  plVar5 = *(longlong **)(param_1 + 0x108);
  if (plVar5 == (longlong *)0x0 || uVar8 < 2) {
    uVar8 = (uint)*(ushort *)(lVar2 + 2);
    if (*(ushort *)(lVar2 + 2) != 0) {
      do {
        (**(code **)(lVar6 + 8))(param_1,local_68);
        local_50 = local_50 + uVar10;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  else {
    uVar1 = *(ushort *)(lVar2 + 2);
    if (uVar1 != 0) {
      lVar2 = param_2[1];
      uVar9 = 0;
      do {
        uVar7 = uVar9 % (uVar8 - 1) + (int)lVar2 + 1;
        if ((*(uint *)(*plVar5 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
          (**(code **)(lVar6 + 8))(param_1);
        }
        local_50 = local_50 + uVar10;
        uVar9 = uVar9 + 1;
      } while (uVar1 != uVar9);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f5435e FUN_146f5435e body=205 status=ok
// SIG undefined FUN_146f5435e(void)

void FUN_146f5435e(longlong *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  sbyte sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if ((int)param_1[3] == 0) {
    uVar6 = *(uint *)(param_1 + 2);
    uVar5 = (int)param_1[1] - uVar6;
    iVar4 = param_3 - uVar5;
    if (param_3 < uVar5 || iVar4 == 0) {
      uVar5 = 0x20 - (uVar6 & 0x1f);
      *(uint *)(param_1 + 2) = uVar6 + param_3;
      bVar1 = (byte)uVar5;
      bVar2 = (byte)param_3 - bVar1;
      sVar3 = (sbyte)(uVar6 & 0x1f);
      if (param_3 < uVar5) {
        uVar6 = ~(-1 << ((byte)param_3 & 0x1f));
        param_2 = ~(uVar6 << sVar3) & *(uint *)((longlong)param_1 + 0x14) |
                  (uVar6 & param_2) << sVar3;
      }
      else {
        *(uint *)(*param_1 + (ulonglong)(uVar6 >> 5) * 4) =
             ~(-1 << sVar3) & *(uint *)((longlong)param_1 + 0x14) | param_2 << sVar3;
        if (((int)param_1[1] + 0x1fU & 0xffffffe0) <= *(uint *)(param_1 + 2)) {
          return;
        }
        param_2 = param_2 >> (bVar1 & 0x1f);
        param_2 = ((*(uint *)(*param_1 + (ulonglong)(*(uint *)(param_1 + 2) >> 5) * 4) ^ param_2) >>
                  (bVar2 & 0x1f)) << (bVar2 & 0x1f) ^ param_2;
      }
      *(uint *)((longlong)param_1 + 0x14) = param_2;
    }
    else {
      *(int *)(param_1 + 3) = iVar4;
    }
  }
  return;
}



// FUNCTION 146f5442c FUN_146f5442c body=296 status=ok
// SIG undefined FUN_146f5442c(void)

void FUN_146f5442c(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_5c;
  longlong *local_58;
  uint local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(ushort *)(param_2[3] + 2);
  uVar9 = (uint)uVar1;
  if (uVar1 != 0) {
    lVar4 = param_2[4];
    lVar5 = *(longlong *)(*param_2 + 0x38);
    lVar7 = *(longlong *)(param_2[3] + 8);
    uVar2 = *(uint *)(lVar5 + 0x74);
    uVar3 = *(uint *)((longlong)param_2 + 0xc);
    local_58 = *(longlong **)(param_1 + 0x108);
    if (local_58 == (longlong *)0x0 || uVar3 < 2) {
      do {
        local_68 = lVar5;
        FUN_146f3b614(param_1,lVar4,param_2 + 1,lVar7);
        lVar7 = lVar7 + (ulonglong)uVar2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    else {
      local_5c = (int)param_2[1] + 1;
      uVar8 = 0;
      do {
        uVar6 = uVar8 % (uVar3 - 1) + local_5c;
        if ((*(uint *)(*local_58 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0) {
          local_50[1] = 1;
          local_68 = lVar5;
          local_50[0] = uVar6;
          FUN_146f3b614(param_1,lVar4,local_50,lVar7);
        }
        lVar7 = lVar7 + (ulonglong)uVar2;
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f54556 FUN_146f54556 body=379 status=ok
// SIG undefined FUN_146f54556(void)

void FUN_146f54556(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined4 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_2;
  lVar3 = param_2[3];
  uVar4 = *(undefined8 *)(param_1 + 0xd8);
  iVar7 = FUN_146f546d2(uVar4,1);
  if ((iVar7 == 0) &&
     (uVar8 = FUN_146f546d2(uVar4,*(undefined2 *)(lVar2 + 0x12)), uVar4 = DAT_14c999b78,
     *(ushort *)(lVar2 + 0x10) < uVar8)) {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar4;
    }
  }
  else {
    lVar5 = *(longlong *)(lVar2 + 0x38);
    plVar6 = *(longlong **)(lVar5 + 0x10);
    FUN_146f54774(param_1,lVar3,lVar2);
    local_58 = 0;
    local_68[1] = 0;
    local_68[0] = plVar6[1];
    local_50 = *(longlong *)(lVar3 + 8);
    lVar2 = *plVar6;
    uVar11 = (ulonglong)*(uint *)(lVar5 + 0x74);
    uVar8 = *(uint *)((longlong)param_2 + 0xc);
    plVar6 = *(longlong **)(param_1 + 0x108);
    if (plVar6 == (longlong *)0x0 || uVar8 < 2) {
      uVar8 = (uint)*(ushort *)(lVar3 + 2);
      if (*(ushort *)(lVar3 + 2) != 0) {
        do {
          (**(code **)(lVar2 + 0x10))(param_1,local_68);
          local_50 = local_50 + uVar11;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    else {
      uVar1 = *(ushort *)(lVar3 + 2);
      if (uVar1 != 0) {
        lVar3 = param_2[1];
        uVar10 = 0;
        do {
          uVar9 = uVar10 % (uVar8 - 1) + (int)lVar3 + 1;
          if ((*(uint *)(*plVar6 + (ulonglong)(uVar9 >> 5) * 4) >> (uVar9 & 0x1f) & 1) != 0) {
            (**(code **)(lVar2 + 0x10))(param_1);
          }
          local_50 = local_50 + uVar11;
          uVar10 = uVar10 + 1;
        } while (uVar1 != uVar10);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f546d2 FUN_146f546d2 body=162 status=ok
// SIG undefined FUN_146f546d2(void)

uint FUN_146f546d2(longlong *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  sbyte sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (*(int *)((longlong)param_1 + 0x14) == 0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    uVar5 = *(uint *)(param_1 + 1) - uVar1;
    iVar4 = param_2 - uVar5;
    if (param_2 < uVar5 || iVar4 == 0) {
      uVar6 = 0x20 - (uVar1 & 0x1f);
      uVar5 = uVar1 + param_2;
      *(uint *)((longlong)param_1 + 0xc) = uVar5;
      bVar2 = (byte)uVar6;
      sVar3 = (sbyte)(uVar1 & 0x1f);
      if (param_2 < uVar6) {
        uVar6 = *(uint *)(param_1 + 2) >> sVar3 & ~(-1 << ((byte)param_2 & 0x1f));
      }
      else {
        uVar6 = *(uint *)(param_1 + 2) >> sVar3;
        if ((uVar5 & 0xffffffe0) < *(uint *)(param_1 + 1)) {
          uVar1 = *(uint *)(*param_1 + (ulonglong)(uVar5 >> 5) * 4);
          uVar6 = uVar6 | (~(-1 << ((byte)param_2 - bVar2 & 0x1f)) & uVar1) << (bVar2 & 0x1f);
          *(uint *)(param_1 + 2) = uVar1;
        }
      }
    }
    else {
      *(int *)((longlong)param_1 + 0x14) = iVar4;
    }
  }
  return uVar6;
}



// FUNCTION 146f54774 FUN_146f54774 body=235 status=ok
// SIG undefined FUN_146f54774(void)

void FUN_146f54774(undefined8 param_1,ushort *param_2,longlong param_3,ulonglong param_4)

{
  ushort uVar1;
  ushort uVar2;
  void *_Dst;
  ulonglong uVar3;
  size_t _Size;
  
  uVar2 = (ushort)param_4;
  uVar1 = param_2[1];
  if (uVar1 <= uVar2) {
    if (*param_2 < uVar2) {
      uVar3 = (ulonglong)*(uint *)(*(longlong *)(param_3 + 0x38) + 0x74);
      _Size = (param_4 & 0xffff) * uVar3;
      _Dst = (void *)(**(code **)(*DAT_14c872d28 + 0x28))
                               (DAT_14c872d28,_Size,
                                *(undefined2 *)(*(longlong *)(param_3 + 0x38) + 0x7a));
      memset(_Dst,0,_Size);
      memcpy(_Dst,*(void **)(param_2 + 4),param_2[1] * uVar3);
      (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,*(undefined8 *)(param_2 + 4));
      *param_2 = uVar2;
      param_2[1] = uVar2;
      *(void **)(param_2 + 4) = _Dst;
    }
    else {
      if (uVar1 < uVar2) {
        uVar3 = (ulonglong)*(uint *)(*(longlong *)(param_3 + 0x38) + 0x74);
        memset((void *)(uVar3 * uVar1 + *(longlong *)(param_2 + 4)),0,
               ((param_4 & 0xffff) - (ulonglong)uVar1) * uVar3);
      }
      param_2[1] = uVar2;
    }
    return;
  }
  if (uVar2 == 0) {
    FUN_146f55892();
    return;
  }
  FUN_146f55952(param_1,param_2,param_3,param_4 & 0xffffffff);
  return;
}



// FUNCTION 146f54860 FUN_146f54860 body=631 status=ok
// SIG undefined FUN_146f54860(void)

void FUN_146f54860(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = *param_2;
  local_90 = param_2[3];
  local_78 = param_2[4];
  uVar4 = *(undefined8 *)(param_1 + 0xe0);
  uVar1 = *(ushort *)(local_90 + 2);
  uVar2 = *(ushort *)(local_78 + 2);
  uVar12 = (uint)uVar2;
  local_98 = param_1;
  FUN_146f5435e(uVar4,uVar1 == uVar2,1);
  if (uVar1 != uVar2) {
    FUN_146f5435e(uVar4,*(undefined2 *)(local_90 + 2),*(undefined2 *)(lVar3 + 0x12));
  }
  lVar3 = *(longlong *)(lVar3 + 0x38);
  plVar6 = *(longlong **)(lVar3 + 0x10);
  uVar8 = *(uint *)(lVar3 + 0x74);
  uVar15 = (ulonglong)uVar8;
  if (*(uint *)((longlong)param_2 + 0xc) < 2) {
    local_88 = (longlong *)0x0;
  }
  else {
    local_88 = *(longlong **)(local_98 + 0x108);
  }
  lVar3 = *plVar6;
  iVar13 = (int)param_2[1] + 1;
  if (local_88 == (longlong *)0x0) {
    iVar13 = 0;
  }
  uVar14 = *(uint *)((longlong)param_2 + 0xc) - 1;
  uVar11 = (uint)uVar2;
  uVar10 = (uint)uVar1;
  if (uVar11 != 0) {
    uVar9 = (uint)uVar1;
    if (uVar9 < uVar11) {
      uVar11 = uVar9;
    }
    local_60 = 0;
    local_68 = 0;
    local_70 = plVar6[1];
    local_58 = *(longlong *)(local_90 + 8);
    local_50 = *(longlong *)(local_78 + 8);
    if (local_88 == (longlong *)0x0) {
      while (local_80 = plVar6, uVar9 != 0) {
        (**(code **)(lVar3 + 0x18))(local_98);
        local_58 = local_58 + uVar15;
        local_50 = local_50 + uVar15;
        uVar11 = uVar11 - 1;
        plVar6 = local_80;
        uVar9 = uVar11;
      }
    }
    else {
      local_80 = plVar6;
      if (uVar10 != 0) {
        uVar9 = 0;
        do {
          uVar7 = uVar9 % uVar14 + iVar13;
          if ((*(uint *)(*local_88 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
            (**(code **)(lVar3 + 0x18))(local_98);
          }
          local_58 = local_58 + uVar15;
          local_50 = local_50 + uVar15;
          uVar9 = uVar9 + 1;
          plVar6 = local_80;
        } while (uVar11 != uVar9);
      }
    }
  }
  lVar5 = local_98;
  if (uVar2 < uVar1) {
    local_60 = 0;
    local_68 = 0;
    local_70 = plVar6[1];
    local_58 = (ulonglong)(uVar8 * uVar2) + *(longlong *)(local_90 + 8);
    plVar6 = local_88;
    if (local_88 == (longlong *)0x0) {
      iVar13 = uVar10 - uVar2;
      do {
        (**(code **)(lVar3 + 8))(lVar5,&local_70);
        local_58 = local_58 + uVar15;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    else {
      do {
        uVar8 = uVar12 % uVar14 + iVar13;
        if ((*(uint *)(*plVar6 + (ulonglong)(uVar8 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0) {
          (**(code **)(lVar3 + 8))(lVar5);
          plVar6 = local_88;
        }
        local_58 = local_58 + uVar15;
        uVar12 = uVar12 + 1;
      } while (uVar10 != uVar12);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f54ad8 FUN_146f54ad8 body=664 status=ok
// SIG undefined FUN_146f54ad8(void)

void FUN_146f54ad8(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [36];
  uint local_94;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *param_2;
  local_88 = param_2[3];
  lVar3 = param_2[4];
  uVar1 = *(ushort *)(lVar3 + 2);
  uVar14 = (ulonglong)uVar1;
  iVar6 = FUN_146f546d2();
  uVar11 = uVar14;
  if (iVar6 == 0) {
    uVar7 = FUN_146f546d2();
    uVar11 = (ulonglong)uVar7;
  }
  uVar5 = DAT_14c999b78;
  uVar7 = (uint)uVar11;
  if (*(ushort *)(lVar2 + 0x10) < uVar7) {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar5;
    }
  }
  else {
    local_80 = *(longlong **)(*(longlong *)(lVar2 + 0x38) + 0x10);
    if (*(uint *)((longlong)param_2 + 0xc) < 2) {
      local_90 = (longlong *)0x0;
    }
    else {
      local_90 = *(longlong **)(param_1 + 0x108);
    }
    iVar6 = (int)param_2[1] + 1;
    if (local_90 == (longlong *)0x0) {
      iVar6 = 0;
    }
    uVar16 = *(uint *)((longlong)param_2 + 0xc) - 1;
    lVar4 = *local_80;
    uVar9 = *(uint *)(*(longlong *)(lVar2 + 0x38) + 0x74);
    uVar17 = (ulonglong)uVar9;
    local_78 = lVar3;
    FUN_146f54774(param_1,local_88,lVar2,uVar11);
    uVar13 = (uint)uVar1;
    local_94 = uVar7;
    if (uVar1 != 0) {
      uVar12 = (ulonglong)(uint)uVar1;
      if (uVar7 < uVar13) {
        uVar12 = uVar11;
      }
      local_60 = 0;
      local_68 = 0;
      local_70 = local_80[1];
      local_58 = *(longlong *)(local_88 + 8);
      local_50 = *(longlong *)(local_78 + 8);
      if (local_90 == (longlong *)0x0) {
        while (uVar7 != 0) {
          (**(code **)(lVar4 + 0x20))(param_1);
          local_58 = local_58 + uVar17;
          local_50 = local_50 + uVar17;
          uVar7 = (int)uVar12 - 1;
          uVar12 = (ulonglong)uVar7;
        }
      }
      else if (uVar7 != 0) {
        uVar7 = 0;
        do {
          uVar8 = uVar7 % uVar16 + iVar6;
          if ((*(uint *)(*local_90 + (ulonglong)(uVar8 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0) {
            (**(code **)(lVar4 + 0x20))(param_1);
          }
          local_58 = local_58 + uVar17;
          local_50 = local_50 + uVar17;
          uVar7 = uVar7 + 1;
        } while ((uint)uVar12 != uVar7);
      }
    }
    uVar7 = local_94;
    iVar10 = local_94 - uVar13;
    if (uVar1 <= local_94 && iVar10 != 0) {
      local_60 = 0;
      local_68 = 0;
      local_70 = local_80[1];
      local_58 = (ulonglong)(uVar9 * uVar13) + *(longlong *)(local_88 + 8);
      plVar15 = local_90;
      if (local_90 == (longlong *)0x0) {
        do {
          (**(code **)(lVar4 + 0x10))(param_1,&local_70);
          local_58 = local_58 + uVar17;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      else {
        do {
          uVar9 = (int)(uVar14 % (ulonglong)uVar16) + iVar6;
          if ((*(uint *)(*plVar15 + (ulonglong)(uVar9 >> 5) * 4) >> (uVar9 & 0x1f) & 1) != 0) {
            (**(code **)(lVar4 + 0x10))(param_1);
            plVar15 = local_90;
          }
          local_58 = local_58 + uVar17;
          uVar9 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar9;
        } while (uVar7 != uVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f54d72 FUN_146f54d72 body=703 status=ok
// SIG undefined FUN_146f54d72(void)

void FUN_146f54d72(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_b8 [47];
  byte local_89;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70 [2];
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar12 = *param_2;
  puVar2 = (ulonglong *)param_2[3];
  lVar6 = FUN_1446e6bbc();
  if (((*(longlong *)(lVar12 + 0x18) != 0) && (cVar5 = FUN_144729dda(lVar12 + 0x20), cVar5 != '\0'))
     || (*(int *)(lVar12 + 0x30) == 0)) goto LAB_146f54dc5;
  plVar3 = (longlong *)(lVar12 + 0x18);
  lVar14 = FUN_14007daa4(plVar3,0,0);
  if (lVar14 != 0) {
    lVar9 = *(longlong *)(lVar14 + 8);
    if (*(ulonglong *)(lVar6 + 8) == 0) {
      bVar15 = lVar9 != 0;
      if (lVar9 != lVar6 && bVar15) {
        do {
          lVar9 = *(longlong *)(lVar9 + 0x30);
          bVar15 = lVar9 != 0;
          if (lVar9 == lVar6) break;
        } while (lVar9 != 0);
      }
      if (bVar15) {
LAB_146f5502a:
        *plVar3 = lVar14;
        goto LAB_146f54dc5;
      }
    }
    else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0) goto LAB_146f5502a;
  }
  if (*plVar3 != 0) {
    *plVar3 = 0;
    *(undefined8 *)(lVar12 + 0x20) = 0;
  }
LAB_146f54dc5:
  lVar6 = *(longlong *)(lVar12 + 0x18);
  local_89 = *(byte *)(lVar6 + 0x70);
  (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x178))();
  uVar4 = DAT_14c999b78;
  uVar1 = (uint)puVar2[1];
  uVar13 = (ulonglong)uVar1;
  if (*(ushort *)(lVar12 + 0x10) < uVar1) {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar4;
    }
  }
  else {
    lVar14 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x78) + 0x34);
    lVar6 = param_2[4];
    FUN_146f54774(param_1,lVar6,lVar12,uVar1);
    plVar3 = *(longlong **)(*(longlong *)(lVar12 + 0x38) + 0x10);
    local_70[1] = 0;
    local_60 = 0;
    local_70[0] = plVar3[1];
    local_58 = 0;
    local_50 = *(longlong *)(lVar6 + 8);
    uVar1 = *(uint *)((longlong)param_2 + 0xc);
    local_78 = *(longlong **)(param_1 + 0x108);
    local_88 = *plVar3;
    uVar11 = (ulonglong)*(uint *)(*(longlong *)(lVar12 + 0x38) + 0x74);
    local_80 = param_1;
    if (local_78 == (longlong *)0x0 || uVar1 < 2) {
      if (uVar13 != 0) {
        lVar12 = 0;
        do {
          if ((int)puVar2[1] == 0) {
            local_58 = 0;
          }
          else {
            if ((local_89 & 1) == 0) {
              uVar7 = *puVar2;
            }
            else {
              uVar7 = *puVar2;
              if ((uVar7 & 1) != 0) {
                uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)puVar2;
              }
            }
            local_58 = uVar7 + lVar12;
          }
          (**(code **)(local_88 + 0x28))(local_80,local_70);
          local_50 = local_50 + uVar11;
          lVar12 = lVar12 + lVar14;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
    else if (uVar13 != 0) {
      lVar12 = param_2[1];
      lVar6 = 0;
      uVar7 = 0;
      do {
        uVar10 = (int)((uVar7 & 0xffffffff) % (ulonglong)(uVar1 - 1)) + (int)lVar12 + 1;
        if ((*(uint *)(*local_78 + (ulonglong)(uVar10 >> 5) * 4) >> (uVar10 & 0x1f) & 1) != 0) {
          if ((int)puVar2[1] == 0) {
            local_58 = 0;
          }
          else {
            if ((local_89 & 1) == 0) {
              uVar8 = *puVar2;
            }
            else {
              uVar8 = *puVar2;
              if ((uVar8 & 1) != 0) {
                uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)puVar2;
              }
            }
            local_58 = uVar8 + lVar6;
          }
          (**(code **)(local_88 + 0x28))(local_80);
        }
        local_50 = local_50 + uVar11;
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + lVar14;
      } while (uVar13 != uVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f55032 FUN_146f55032 body=631 status=ok
// SIG undefined FUN_146f55032(void)

void FUN_146f55032(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  undefined4 local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong *local_60;
  int local_58;
  undefined4 local_54;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *param_2;
  puVar5 = (ulonglong *)param_2[4];
  lVar8 = FUN_1446e6bbc();
  if (((*(longlong *)(lVar4 + 0x18) != 0) && (cVar7 = FUN_144729dda(lVar4 + 0x20), cVar7 != '\0'))
     || (*(int *)(lVar4 + 0x30) == 0)) goto LAB_146f550e9;
  plVar1 = (longlong *)(lVar4 + 0x18);
  lVar9 = FUN_14007daa4(plVar1,0,0);
  if (lVar9 == 0) {
LAB_146f550dd:
    if (*plVar1 != 0) {
      *plVar1 = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
    }
  }
  else {
    lVar11 = *(longlong *)(lVar9 + 8);
    if (*(ulonglong *)(lVar8 + 8) == 0) {
      bVar16 = lVar11 != 0;
      if (lVar11 != lVar8 && bVar16) {
        do {
          lVar11 = *(longlong *)(lVar11 + 0x30);
          bVar16 = lVar11 != 0;
          if (lVar11 == lVar8) break;
        } while (lVar11 != 0);
      }
      if (!bVar16) goto LAB_146f550dd;
    }
    else if ((*(ulonglong *)(lVar11 + 0x18) & *(ulonglong *)(lVar8 + 8)) == 0) goto LAB_146f550dd;
    *plVar1 = lVar9;
  }
LAB_146f550e9:
  lVar8 = *(longlong *)(lVar4 + 0x18);
  bVar2 = *(byte *)(lVar8 + 0x70);
  local_54 = (**(code **)(**(longlong **)(lVar8 + 0x78) + 0x178))();
  local_68 = *(longlong *)(lVar8 + 0x78);
  local_58 = *(int *)(local_68 + 0x34);
  lVar8 = param_2[3];
  uVar13 = (ulonglong)*(ushort *)(lVar8 + 2);
  local_60 = puVar5;
  local_50 = bVar2;
  FUN_144a8a902(&local_68,uVar13);
  plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x38) + 0x10);
  local_90[1] = 0;
  local_80 = 0;
  local_90[0] = plVar1[1];
  local_78 = *(longlong *)(lVar8 + 8);
  local_70 = 0;
  uVar3 = *(uint *)((longlong)param_2 + 0xc);
  plVar6 = *(longlong **)(param_1 + 0x108);
  lVar8 = *plVar1;
  uVar14 = (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0x38) + 0x74);
  if (plVar6 == (longlong *)0x0 || uVar3 < 2) {
    if (uVar13 != 0) {
      uVar15 = 0;
      do {
        if ((int)local_60[1] == 0) {
          local_70 = 0;
        }
        else {
          if ((local_50 & 1) == 0) {
            uVar10 = *local_60;
          }
          else {
            uVar10 = *local_60;
            if ((uVar10 & 1) != 0) {
              uVar10 = (longlong)local_60 + ((longlong)uVar10 >> 0x18);
            }
          }
          local_70 = (longlong)local_58 * uVar15 + uVar10;
        }
        (**(code **)(lVar8 + 0x30))(param_1,local_90);
        local_78 = local_78 + uVar14;
        uVar15 = uVar15 + 1;
      } while (uVar13 != uVar15);
    }
  }
  else if (uVar13 != 0) {
    lVar4 = param_2[1];
    uVar15 = 0;
    do {
      uVar12 = (int)((uVar15 & 0xffffffff) % (ulonglong)(uVar3 - 1)) + (int)lVar4 + 1;
      if ((*(uint *)(*plVar6 + (ulonglong)(uVar12 >> 5) * 4) >> (uVar12 & 0x1f) & 1) != 0) {
        if ((int)local_60[1] == 0) {
          local_70 = 0;
        }
        else {
          if ((local_50 & 1) == 0) {
            uVar10 = *local_60;
          }
          else {
            uVar10 = *local_60;
            if ((uVar10 & 1) != 0) {
              uVar10 = (longlong)local_60 + ((longlong)uVar10 >> 0x18);
            }
          }
          local_70 = (longlong)local_58 * uVar15 + uVar10;
        }
        (**(code **)(lVar8 + 0x30))(param_1);
      }
      local_78 = local_78 + uVar14;
      uVar15 = uVar15 + 1;
    } while (uVar13 != uVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f552aa FUN_146f552aa body=779 status=ok
// SIG undefined FUN_146f552aa(void)

undefined8 FUN_146f552aa(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_a8 [39];
  byte local_81;
  longlong local_80;
  longlong local_78 [2];
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((char)param_2[5] == '\x01') {
    uVar2 = *(ushort *)(param_2[3] + 2);
    uVar15 = (uint)uVar2;
    if (uVar2 != *(ushort *)(param_2[4] + 2)) {
LAB_146f55588:
      uVar12 = 0;
      goto LAB_146f5558a;
    }
    plVar5 = *(longlong **)(*(longlong *)(*param_2 + 0x38) + 0x10);
    local_68 = 0;
    local_78[1] = 0;
    local_78[0] = plVar5[1];
    local_60 = *(longlong *)(param_2[3] + 8);
    local_58 = *(longlong *)(param_2[4] + 8);
    local_50 = 1;
    if (uVar2 != 0) {
      uVar14 = (ulonglong)*(uint *)(*(longlong *)(*param_2 + 0x38) + 0x74);
      lVar6 = *plVar5;
      do {
        cVar9 = (**(code **)(lVar6 + 0x38))(param_1,local_78);
        if (cVar9 == '\0') goto LAB_146f55588;
        local_60 = local_60 + uVar14;
        local_58 = local_58 + uVar14;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  else {
    lVar6 = *param_2;
    puVar7 = (ulonglong *)param_2[3];
    plVar5 = (longlong *)(lVar6 + 0x18);
    lVar10 = FUN_1446e6bbc();
    if (((*(longlong *)(lVar6 + 0x18) == 0) || (cVar9 = FUN_144729dda(lVar6 + 0x20), cVar9 == '\0'))
       && (*(int *)(lVar6 + 0x30) != 0)) {
      lVar11 = FUN_14007daa4(plVar5,0,0);
      if (lVar11 == 0) {
LAB_146f553ea:
        if (*plVar5 != 0) {
          *plVar5 = 0;
          *(undefined8 *)(lVar6 + 0x20) = 0;
        }
      }
      else {
        lVar13 = *(longlong *)(lVar11 + 8);
        if (*(ulonglong *)(lVar10 + 8) == 0) {
          bVar17 = lVar13 != 0;
          if (lVar13 != lVar10 && bVar17) {
            do {
              lVar13 = *(longlong *)(lVar13 + 0x30);
              bVar17 = lVar13 != 0;
              if (lVar13 == lVar10) break;
            } while (lVar13 != 0);
          }
          if (!bVar17) goto LAB_146f553ea;
        }
        else if ((*(ulonglong *)(lVar13 + 0x18) & *(ulonglong *)(lVar10 + 8)) == 0)
        goto LAB_146f553ea;
        *plVar5 = lVar11;
      }
    }
    lVar10 = *plVar5;
    local_81 = *(byte *)(lVar10 + 0x70);
    (**(code **)(**(longlong **)(lVar10 + 0x78) + 0x178))();
    local_80 = (longlong)*(int *)(*(longlong *)(lVar10 + 0x78) + 0x34);
    puVar8 = (ulonglong *)param_2[4];
    lVar10 = FUN_1446e6bbc();
    if (((*plVar5 == 0) || (cVar9 = FUN_144729dda(lVar6 + 0x20), cVar9 == '\0')) &&
       (*(int *)(lVar6 + 0x30) != 0)) {
      lVar11 = FUN_14007daa4(plVar5,0,0);
      if (lVar11 == 0) {
LAB_146f55499:
        if (*plVar5 != 0) {
          *plVar5 = 0;
          *(undefined8 *)(lVar6 + 0x20) = 0;
        }
      }
      else {
        lVar13 = *(longlong *)(lVar11 + 8);
        if (*(ulonglong *)(lVar10 + 8) == 0) {
          bVar17 = lVar13 != 0;
          if (lVar13 != lVar10 && bVar17) {
            do {
              lVar13 = *(longlong *)(lVar13 + 0x30);
              bVar17 = lVar13 != 0;
              if (lVar13 == lVar10) break;
            } while (lVar13 != 0);
          }
          if (!bVar17) goto LAB_146f55499;
        }
        else if ((*(ulonglong *)(lVar13 + 0x18) & *(ulonglong *)(lVar10 + 8)) == 0)
        goto LAB_146f55499;
        *plVar5 = lVar11;
      }
    }
    lVar10 = *plVar5;
    bVar1 = *(byte *)(lVar10 + 0x70);
    (**(code **)(**(longlong **)(lVar10 + 0x78) + 0x178))();
    iVar3 = (int)puVar7[1];
    if (iVar3 != (int)puVar8[1]) goto LAB_146f55588;
    iVar4 = *(int *)(*(longlong *)(lVar10 + 0x78) + 0x34);
    plVar5 = *(longlong **)(*(longlong *)(lVar6 + 0x38) + 0x10);
    local_68 = 0;
    local_78[1] = 0;
    local_78[0] = plVar5[1];
    local_50 = 0;
    if (iVar3 != 0) {
      lVar6 = *plVar5;
      iVar16 = 0;
      do {
        if ((int)puVar7[1] == 0) {
          local_60 = 0;
        }
        else {
          if ((local_81 & 1) == 0) {
            uVar14 = *puVar7;
          }
          else {
            uVar14 = *puVar7;
            if ((uVar14 & 1) != 0) {
              uVar14 = ((longlong)uVar14 >> 0x18) + (longlong)puVar7;
            }
          }
          local_60 = iVar16 * local_80 + uVar14;
        }
        if ((int)puVar8[1] == 0) {
          local_58 = 0;
        }
        else {
          if ((bVar1 & 1) == 0) {
            uVar14 = *puVar8;
          }
          else {
            uVar14 = *puVar8;
            if ((uVar14 & 1) != 0) {
              uVar14 = ((longlong)uVar14 >> 0x18) + (longlong)puVar8;
            }
          }
          local_58 = (longlong)iVar16 * (longlong)iVar4 + uVar14;
        }
        cVar9 = (**(code **)(lVar6 + 0x38))(param_1);
        if (cVar9 == '\0') goto LAB_146f55588;
        iVar16 = iVar16 + 1;
      } while (iVar3 != iVar16);
    }
  }
  uVar12 = 1;
LAB_146f5558a:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 146f555b6 FUN_146f555b6 body=447 status=ok
// SIG undefined FUN_146f555b6(void)

ulonglong FUN_146f555b6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *unaff_RDI;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_98 [39];
  byte local_71;
  undefined8 local_70;
  longlong local_68 [2];
  undefined4 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *param_2;
  puVar3 = (ulonglong *)param_2[3];
  local_70 = param_1;
  lVar6 = FUN_1446e6bbc();
  if (((*(longlong *)(lVar2 + 0x18) != 0) && (cVar5 = FUN_144729dda(lVar2 + 0x20), cVar5 != '\0'))
     || (*(int *)(lVar2 + 0x30) == 0)) goto LAB_146f5566c;
  unaff_RDI = (longlong *)(lVar2 + 0x18);
  lVar7 = FUN_14007daa4(unaff_RDI,0,0);
  if (lVar7 == 0) {
LAB_146f55660:
    if (*unaff_RDI != 0) {
      *unaff_RDI = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
    }
  }
  else {
    lVar9 = *(longlong *)(lVar7 + 8);
    if (*(ulonglong *)(lVar6 + 8) == 0) {
      bVar13 = lVar9 != 0;
      if (lVar9 != lVar6 && bVar13) {
        do {
          lVar9 = *(longlong *)(lVar9 + 0x30);
          bVar13 = lVar9 != 0;
          if (lVar9 == lVar6) break;
        } while (lVar9 != 0);
      }
      if (!bVar13) goto LAB_146f55660;
    }
    else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0) goto LAB_146f55660;
    *unaff_RDI = lVar7;
  }
LAB_146f5566c:
  lVar6 = *(longlong *)(lVar2 + 0x18);
  local_71 = *(byte *)(lVar6 + 0x70);
  (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x178))();
  uVar12 = (ulonglong)(uint)puVar3[1];
  if (((uint)*(ushort *)(lVar2 + 0x10) < (uint)puVar3[1]) ||
     (*(short *)(*(longlong *)(lVar2 + 0x38) + 0x7c) != 1)) {
    uVar11 = 0;
  }
  else {
    iVar1 = *(int *)(*(longlong *)(lVar6 + 0x78) + 0x34);
    plVar4 = *(longlong **)(*(longlong *)(lVar2 + 0x38) + 0x10);
    local_58 = 0;
    local_68[1] = 0;
    local_68[0] = plVar4[1];
    if (uVar12 == 0) {
      uVar11 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    }
    else {
      lVar2 = *plVar4;
      lVar6 = 0;
      uVar11 = 0;
      uVar10 = 1;
      do {
        if ((int)puVar3[1] == 0) {
          local_50 = 0;
        }
        else {
          if ((local_71 & 1) == 0) {
            uVar8 = *puVar3;
          }
          else {
            uVar8 = *puVar3;
            if ((uVar8 & 1) != 0) {
              uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)puVar3;
            }
          }
          local_50 = uVar8 + lVar6;
        }
        cVar5 = (**(code **)(lVar2 + 0x40))(local_70,local_68);
        if (cVar5 == '\0') break;
        uVar11 = (ulonglong)(uVar12 <= uVar10);
        lVar6 = lVar6 + iVar1;
        bVar13 = uVar10 != uVar12;
        uVar10 = uVar10 + 1;
      } while (bVar13);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffff01;
}



// FUNCTION 146f55776 FUN_146f55776 body=270 status=ok
// SIG undefined FUN_146f55776(void)

void FUN_146f55776(undefined8 param_1,longlong *param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 uVar4;
  void *_Dst;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined4 local_58;
  longlong local_50;
  void *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined2 *)param_2[4];
  lVar2 = param_2[3];
  lVar3 = *(longlong *)(*param_2 + 0x38);
  uVar6 = (ulonglong)*(uint *)(lVar3 + 0x74);
  if ((ulonglong)*(ushort *)(lVar2 + 2) == 0) {
    uVar4 = 0;
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)(**(code **)(*DAT_14c872d28 + 0x28))
                             (DAT_14c872d28,*(ushort *)(lVar2 + 2) * uVar6,
                              *(undefined2 *)(lVar3 + 0x7a));
    memcpy(_Dst,*(void **)(lVar2 + 8),*(ushort *)(lVar2 + 2) * uVar6);
    uVar4 = *(undefined2 *)(lVar2 + 2);
  }
  *puVar1 = uVar4;
  puVar1[1] = *(undefined2 *)(lVar2 + 2);
  *(void **)(puVar1 + 4) = _Dst;
  if (((*(byte *)(lVar3 + 0xb8) & 0x40) != 0) &&
     (uVar5 = (uint)*(ushort *)(lVar2 + 2), *(ushort *)(lVar2 + 2) != 0)) {
    local_58 = 0;
    local_68[1] = 0;
    local_68[0] = (*(longlong **)(lVar3 + 0x10))[1];
    local_50 = *(longlong *)(lVar2 + 8);
    lVar2 = **(longlong **)(lVar3 + 0x10);
    local_48 = _Dst;
    do {
      (**(code **)(lVar2 + 0x48))(param_1,local_68);
      local_50 = local_50 + uVar6;
      local_48 = (void *)((longlong)local_48 + uVar6);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f55892 FUN_146f55892 body=190 status=ok
// SIG undefined FUN_146f55892(void)

void FUN_146f55892(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_3 + 0x38);
  if ((*(byte *)(lVar2 + 0xb8) & 0x40) != 0) {
    lVar3 = **(longlong **)(lVar2 + 0x10);
    uVar1 = *(uint *)(lVar2 + 0x74);
    local_48 = 0;
    local_58[1] = 0;
    local_58[0] = (*(longlong **)(lVar2 + 0x10))[1];
    local_40 = *(longlong *)(param_2 + 2);
    uVar4 = (uint)*(ushort *)((longlong)param_2 + 2);
    if (*(ushort *)((longlong)param_2 + 2) != 0) {
      do {
        (**(code **)(lVar3 + 0x50))(param_1,local_58);
        local_40 = local_40 + (ulonglong)uVar1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,*(undefined8 *)(param_2 + 2));
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f55952 FUN_146f55952 body=182 status=ok
// SIG undefined FUN_146f55952(void)

void FUN_146f55952(undefined8 param_1,longlong param_2,longlong param_3,ushort param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined4 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_3 + 0x38);
  if ((*(byte *)(lVar2 + 0xb8) & 0x40) != 0) {
    lVar3 = **(longlong **)(lVar2 + 0x10);
    uVar1 = *(uint *)(lVar2 + 0x74);
    local_50 = 0;
    local_60[1] = 0;
    local_60[0] = (*(longlong **)(lVar2 + 0x10))[1];
    local_48 = (ulonglong)(uVar1 * param_4) + *(longlong *)(param_2 + 8);
    if (param_4 < *(ushort *)(param_2 + 2)) {
      iVar4 = (uint)*(ushort *)(param_2 + 2) - (uint)param_4;
      do {
        (**(code **)(lVar3 + 0x50))(param_1,local_60);
        local_48 = local_48 + (ulonglong)uVar1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  *(ushort *)(param_2 + 2) = param_4;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f55a24 FUN_146f55a24 body=37 status=ok
// SIG undefined FUN_146f55a24(void)

void FUN_146f55a24(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  **(undefined1 **)(param_2 + 0x18) = uVar1;
  return;
}



// FUNCTION 146f55ab1 FUN_146f55ab1 body=93 status=ok
// SIG undefined FUN_146f55ab1(void)

bool FUN_146f55ab1(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  byte local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18[0] = 0;
  local_18[*(byte *)(param_2 + 0x71)] =
       ~*(byte *)(param_2 + 0x73) & local_18[*(byte *)(param_2 + 0x71)] | *(byte *)(param_2 + 0x72);
  *(byte *)(param_1 + 0x10) = local_18[0];
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return (byte)(local_18[0] - 1) < (byte)(local_18[0] ^ local_18[0] - 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f55b0f FUN_146f55b0f body=159 status=ok
// SIG undefined FUN_146f55b0f(void)

void FUN_146f55b0f(undefined8 param_1,int *param_2,int param_3,longlong param_4,uint param_5,
                  byte param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  
  uVar1 = (ulonglong)param_5 * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = FUN_146f546d2(param_1,lVar2);
  if (iVar3 == 0) {
    uVar4 = FUN_146f546d2(param_1,param_6);
    bVar6 = param_6 - 1;
    uVar4 = uVar4 ^ 1 << (bVar6 & 0x1f);
  }
  else {
    bVar6 = *(byte *)(param_4 + (ulonglong)(iVar3 - 1));
    uVar4 = FUN_146f546d2(param_1,bVar6);
    uVar5 = bVar6 - 1;
    bVar6 = (byte)(param_6 - 1);
    uVar4 = ((param_3 - (1 << ((byte)uVar5 & 0x1f))) + (uVar4 ^ 1 << (uVar5 & 0x1f)) <<
            (-param_6 & 0x1f)) >> (-param_6 & 0x1f) ^ 1 << (param_6 - 1 & 0x1f);
  }
  *param_2 = uVar4 - (1 << (bVar6 & 0x1f));
  return;
}



// FUNCTION 146f55bae FUN_146f55bae body=132 status=ok
// SIG undefined FUN_146f55bae(void)

void FUN_146f55bae(undefined8 param_1,uint *param_2,int param_3,longlong param_4,uint param_5,
                  char param_6)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = (ulonglong)param_5 * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar4 = FUN_146f546d2(param_1,lVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_146f546d2(param_1,param_6);
  }
  else {
    bVar2 = *(byte *)(param_4 + (ulonglong)(iVar4 - 1));
    uVar5 = FUN_146f546d2(param_1,bVar2);
    uVar6 = bVar2 - 1;
    iVar4 = (param_3 - (1 << ((byte)uVar6 & 0x1f))) + (uVar5 ^ 1 << (uVar6 & 0x1f));
  }
  *param_2 = (uint)(iVar4 << (-param_6 & 0x1fU)) >> (-param_6 & 0x1fU);
  return;
}



// FUNCTION 146f55c32 FUN_146f55c32 body=281 status=ok
// SIG undefined FUN_146f55c32(void)

void FUN_146f55c32(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,
                  uint param_5,byte param_6)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = (ulonglong)param_5 * 2 + 1;
  lVar7 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
    }
  }
  iVar2 = FUN_146f546d2(param_1,lVar7);
  if (iVar2 == 0) {
    if (param_6 < 0x21) {
      uVar5 = FUN_146f546d2(param_1,param_6);
      uVar6 = (ulonglong)uVar5;
    }
    else {
      uVar3 = FUN_146f546d2(param_1,0x20);
      uVar4 = FUN_146f546d2(param_1,param_6 - 0x20);
      uVar6 = CONCAT44(uVar4,uVar3);
    }
    lVar7 = (uVar6 ^ 1L << ((ulonglong)(byte)(param_6 - 1) & 0x3f)) - (1L << (param_6 - 1 & 0x3f));
  }
  else {
    bVar1 = *(byte *)(param_4 + (ulonglong)(iVar2 - 1));
    if (bVar1 < 0x21) {
      uVar5 = FUN_146f546d2(param_1,bVar1);
      uVar6 = (ulonglong)uVar5;
    }
    else {
      uVar5 = FUN_146f546d2(param_1,0x20);
      lVar7 = FUN_146f546d2(param_1,bVar1 - 0x20);
      uVar6 = lVar7 << 0x20 | (ulonglong)uVar5;
    }
    uVar5 = bVar1 - 1;
    lVar7 = (((param_3 - (1L << ((byte)uVar5 & 0x3f))) + (uVar6 ^ 1L << ((ulonglong)uVar5 & 0x3f))
             << (-param_6 & 0x3f)) >> (-param_6 & 0x3f) ^ 1L << ((ulonglong)(param_6 - 1) & 0x3f)) -
            (1L << ((byte)(param_6 - 1) & 0x3f));
  }
  *param_2 = lVar7;
  return;
}



// FUNCTION 146f55d4b FUN_146f55d4b body=252 status=ok
// SIG undefined FUN_146f55d4b(void)

void FUN_146f55d4b(undefined8 param_1,ulonglong *param_2,longlong param_3,longlong param_4,
                  uint param_5,byte param_6)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_5 * 2 + 1;
  lVar6 = 0x3f;
  if (uVar7 != 0) {
    for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
    }
  }
  iVar2 = FUN_146f546d2(param_1,lVar6);
  if (iVar2 == 0) {
    if (param_6 < 0x21) {
      uVar5 = FUN_146f546d2(param_1,param_6);
      uVar7 = (ulonglong)uVar5;
    }
    else {
      uVar3 = FUN_146f546d2(param_1,0x20);
      uVar4 = FUN_146f546d2(param_1,param_6 - 0x20);
      uVar7 = CONCAT44(uVar4,uVar3);
    }
  }
  else {
    bVar1 = *(byte *)(param_4 + (ulonglong)(iVar2 - 1));
    if (bVar1 < 0x21) {
      uVar5 = FUN_146f546d2(param_1,bVar1);
      uVar7 = (ulonglong)uVar5;
    }
    else {
      uVar5 = FUN_146f546d2(param_1,0x20);
      lVar6 = FUN_146f546d2(param_1,bVar1 - 0x20);
      uVar7 = lVar6 << 0x20 | (ulonglong)uVar5;
    }
    uVar5 = bVar1 - 1;
    uVar7 = (param_3 - (1L << ((byte)uVar5 & 0x3f))) + (uVar7 ^ 1L << ((ulonglong)uVar5 & 0x3f));
  }
  *param_2 = (uVar7 << (0x40 - param_6 & 0x3f)) >> (0x40 - param_6 & 0x3f);
  return;
}



// FUNCTION 146f55e66 FUN_146f55e66 body=37 status=ok
// SIG undefined FUN_146f55e66(void)

void FUN_146f55e66(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  **(undefined1 **)(param_2 + 0x18) = uVar1;
  return;
}



// FUNCTION 146f55eb0 FUN_146f55eb0 body=62 status=ok
// SIG undefined FUN_146f55eb0(void)

void FUN_146f55eb0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  uVar2 = **(ulonglong **)(param_2 + 0x18);
  FUN_146f5435e(uVar1,uVar2 & 0xffffffff,0x20);
  FUN_146f5435e(uVar1,uVar2 >> 0x20,0x20);
  return;
}



// FUNCTION 146f55eee FUN_146f55eee body=67 status=ok
// SIG undefined FUN_146f55eee(void)

void FUN_146f55eee(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uVar2 = FUN_146f546d2(uVar1,0x20);
  lVar3 = FUN_146f546d2(uVar1,0x20);
  **(ulonglong **)(param_2 + 0x18) = lVar3 << 0x20 | (ulonglong)uVar2;
  return;
}



// FUNCTION 146f55f64 FUN_146f55f64 body=29 status=ok
// SIG undefined FUN_146f55f64(void)

void FUN_146f55f64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f9f140;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 146f55f82 FUN_146f55f82 body=24 status=ok
// SIG undefined FUN_146f55f82(void)

void FUN_146f55f82(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ushort uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_1a8 [32];
  undefined8 uStack_188;
  undefined5 uStack_180;
  undefined3 uStack_17b;
  undefined5 uStack_178;
  undefined8 uStack_173;
  undefined8 uStack_168;
  byte bStack_160;
  undefined8 auStack_158 [26];
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte bStack_38;
  ulonglong uStack_28;
  
  *param_1 = &PTR_FUN_149f9f140;
  lVar3 = param_1[2];
  if (lVar3 == 0) {
    return;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((*(byte *)(lVar3 + 0xb8) & 8) != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0xbc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      lVar7 = *(longlong *)(lVar3 + 0xc0);
      if (lVar7 != 0) {
        if ((*(byte *)(lVar3 + 0xb8) & 0x40) != 0) {
          auStack_158[0] = 0;
          auStack_158[1] = 0;
          lVar5 = 0x18;
          do {
            *(undefined8 *)((longlong)auStack_158 + lVar5) = 0;
            lVar5 = lVar5 + 0x18;
          } while (lVar5 != 0xd8);
          uStack_88 = 0;
          uStack_70 = 0;
          uStack_80 = 0;
          uStack_78 = 0;
          uStack_60 = 0;
          uStack_58 = 0;
          uStack_50 = 0;
          uStack_48 = 0;
          uStack_40 = 0xffffffff00000000;
          bStack_38 = bStack_38 & 0xfc;
          puStack_68 = &uStack_188;
          uStack_168 = 0;
          uStack_188 = 0;
          uStack_180 = 0;
          uStack_17b = 0;
          uStack_178 = 0;
          uStack_173 = 0;
          bStack_160 = bStack_160 & 0xfc;
          FUN_146f3ac12(auStack_158,lVar7,lVar3);
        }
        FUN_1400020a8(lVar7);
      }
      uVar4 = *(ushort *)(lVar3 + 0x7c);
      if (uVar4 != 0) {
        lVar7 = 8;
        uVar6 = 0;
        do {
          puVar2 = *(undefined8 **)(*(longlong *)(lVar3 + 0x10) + lVar7);
          if ((*(byte *)(puVar2 + 1) & 1) != 0) {
            (**(code **)*puVar2)(puVar2,0);
            uVar4 = *(ushort *)(lVar3 + 0x7c);
          }
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 0x10;
        } while (uVar6 < uVar4);
      }
      uVar4 = *(ushort *)(lVar3 + 0x7e);
      if (uVar4 != 0) {
        lVar7 = *(longlong *)(lVar3 + 0x20);
        lVar5 = 0;
        do {
          FUN_146f11920(*(undefined8 *)(lVar7 + 8 + lVar5));
          lVar5 = lVar5 + 0x10;
        } while ((ulonglong)uVar4 * 0x10 != lVar5);
      }
      FUN_1400020a8(lVar3);
    }
  }
  if ((uStack_28 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f55f9a FUN_146f55f9a body=81 status=ok
// SIG undefined FUN_146f55f9a(void)

void FUN_146f55f9a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uStack_20 = *(undefined4 *)(param_2 + 8);
  uStack_1c = *(undefined4 *)(param_2 + 0xc);
  local_18 = *(undefined4 *)(param_2 + 0x10);
  uStack_14 = *(undefined4 *)(param_2 + 0x14);
  uStack_10 = *(undefined4 *)(param_2 + 0x18);
  uStack_c = *(undefined4 *)(param_2 + 0x1c);
  local_28 = &DAT_14c99a1f0;
  (*DAT_14c99c040)();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f55fec FUN_146f55fec body=81 status=ok
// SIG undefined FUN_146f55fec(void)

void FUN_146f55fec(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uStack_20 = *(undefined4 *)(param_2 + 8);
  uStack_1c = *(undefined4 *)(param_2 + 0xc);
  local_18 = *(undefined4 *)(param_2 + 0x10);
  uStack_14 = *(undefined4 *)(param_2 + 0x14);
  uStack_10 = *(undefined4 *)(param_2 + 0x18);
  uStack_c = *(undefined4 *)(param_2 + 0x1c);
  local_28 = &DAT_14c99a1f0;
  (*DAT_14c99c048)();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5603e FUN_146f5603e body=92 status=ok
// SIG undefined FUN_146f5603e(void)

void FUN_146f5603e(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  local_18 = *(undefined8 *)(param_2 + 8);
  local_38 = &DAT_14c99a1f0;
  (*DAT_14c99c050)(*param_2,&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5609c FUN_146f5609c body=92 status=ok
// SIG undefined FUN_146f5609c(void)

void FUN_146f5609c(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  local_18 = *(undefined8 *)(param_2 + 8);
  local_38 = &DAT_14c99a1f0;
  (*DAT_14c99c058)(*param_2,&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f560fa FUN_146f560fa body=194 status=ok
// SIG undefined FUN_146f560fa(void)

void FUN_146f560fa(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 local_48;
  longlong alStack_40 [3];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_2 + 0x18);
  local_48 = 0;
  alStack_40[0] = 0;
  alStack_40[1] = 0;
  uVar2 = *(undefined8 *)(lVar1 + 8);
  local_78 = (undefined *)uVar2;
  cVar3 = FUN_144729dda();
  if (cVar3 != '\0') {
    local_48 = uVar2;
    FUN_1406fa324(alStack_40,lVar1 + 0x10);
  }
  uStack_70 = *(undefined4 *)(param_2 + 8);
  uStack_6c = *(undefined4 *)(param_2 + 0xc);
  local_68 = *(undefined4 *)(param_2 + 0x10);
  uStack_64 = *(undefined4 *)(param_2 + 0x14);
  local_58 = *(undefined8 *)(param_2 + 0x20);
  puStack_60 = &local_48;
  local_78 = &DAT_14c99a1f0;
  (*DAT_14c99c060)(param_1);
  if (alStack_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f561be FUN_146f561be body=229 status=ok
// SIG undefined FUN_146f561be(void)

void FUN_146f561be(undefined8 param_1,longlong param_2)

{
  void **ppvVar1;
  undefined8 *puVar2;
  void *_Src;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined8 local_48;
  void *pvStack_40;
  ulonglong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_38 = 0;
  uStack_70 = *(undefined4 *)(param_2 + 8);
  uStack_6c = *(undefined4 *)(param_2 + 0xc);
  local_68 = *(undefined4 *)(param_2 + 0x10);
  uStack_64 = *(undefined4 *)(param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 0x18);
  uStack_5c = *(undefined4 *)(param_2 + 0x1c);
  local_58 = &local_48;
  local_78 = &DAT_14c99a1f0;
  (*DAT_14c99c068)();
  _Src = pvStack_40;
  puVar2[1] = local_48;
  ppvVar1 = (void **)(puVar2 + 2);
  if (ppvVar1 != &pvStack_40) {
    iVar3 = (int)local_38;
    lVar4 = (longlong)(int)local_38;
    *(int *)(puVar2 + 3) = (int)local_38;
    if ((int)local_38 == 0 && *(int *)((longlong)puVar2 + 0x1c) == 0) {
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    }
    else {
      FUN_1401b309e(ppvVar1,local_38 & 0xffffffff);
      if (iVar3 != 0) {
        memcpy(*ppvVar1,_Src,lVar4 << 3);
      }
    }
  }
  *puVar2 = 0;
  if (pvStack_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f562a4 FUN_146f562a4 body=359 status=ok
// SIG undefined FUN_146f562a4(void)

undefined4 FUN_146f562a4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong alStack_a0 [3];
  undefined8 local_88;
  longlong alStack_80 [3];
  undefined *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    uStack_60 = *(undefined4 *)(param_2 + 8);
    uStack_5c = *(undefined4 *)(param_2 + 0xc);
    local_58 = *(undefined4 *)(param_2 + 0x10);
    uStack_54 = *(undefined4 *)(param_2 + 0x14);
    puStack_50 = *(undefined8 **)(param_2 + 0x18);
    local_48 = *(undefined8 **)(param_2 + 0x20);
    uStack_40 = *(undefined4 *)(param_2 + 0x28);
    uStack_3c = *(undefined4 *)(param_2 + 0x2c);
    local_68 = &DAT_14c99a1f0;
    uVar5 = (*DAT_14c99c070)(param_1);
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x18);
    lVar2 = *(longlong *)(param_2 + 0x20);
    alStack_80[1] = 0;
    local_88 = 0;
    alStack_80[0] = 0;
    alStack_a0[1] = 0;
    local_a8 = 0;
    alStack_a0[0] = 0;
    uVar3 = *(undefined8 *)(lVar1 + 8);
    local_68 = (undefined *)uVar3;
    cVar4 = FUN_144729dda();
    if (cVar4 != '\0') {
      local_88 = uVar3;
      FUN_1406fa324(alStack_80,lVar1 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar2 + 8);
    local_68 = (undefined *)uVar3;
    cVar4 = FUN_144729dda();
    if (cVar4 != '\0') {
      local_a8 = uVar3;
      FUN_1406fa324(alStack_a0,lVar2 + 0x10);
    }
    uStack_60 = *(undefined4 *)(param_2 + 8);
    uStack_5c = *(undefined4 *)(param_2 + 0xc);
    local_58 = *(undefined4 *)(param_2 + 0x10);
    uStack_54 = *(undefined4 *)(param_2 + 0x14);
    uStack_40 = *(undefined4 *)(param_2 + 0x28);
    uStack_3c = *(undefined4 *)(param_2 + 0x2c);
    puStack_50 = &local_88;
    local_48 = &local_a8;
    local_68 = &DAT_14c99a1f0;
    uVar5 = (*DAT_14c99c070)(param_1);
    if (alStack_a0[0] != 0) {
      FUN_1400020a8();
    }
    if (alStack_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5640c FUN_146f5640c body=190 status=ok
// SIG undefined FUN_146f5640c(void)

undefined4 FUN_146f5640c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  undefined *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  longlong alStack_40 [3];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_2 + 0x18);
  local_48 = 0;
  alStack_40[0] = 0;
  alStack_40[1] = 0;
  uVar2 = *(undefined8 *)(lVar1 + 8);
  local_68 = (undefined *)uVar2;
  cVar3 = FUN_144729dda();
  if (cVar3 != '\0') {
    local_48 = uVar2;
    FUN_1406fa324(alStack_40,lVar1 + 0x10);
  }
  uStack_60 = *(undefined4 *)(param_2 + 8);
  uStack_5c = *(undefined4 *)(param_2 + 0xc);
  local_58 = *(undefined8 *)(param_2 + 0x10);
  local_50 = &local_48;
  local_68 = &DAT_14c99a1f0;
  uVar4 = (*DAT_14c99c078)(param_1);
  if (alStack_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f564cc FUN_146f564cc body=113 status=ok
// SIG undefined FUN_146f564cc(void)

void FUN_146f564cc(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14c99a200 != 0) && ((*(byte *)(DAT_14c99a200 + 0xb8) & 4) != 0)) {
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    local_28 = param_2[4];
    uStack_24 = param_2[5];
    uStack_20 = param_2[6];
    uStack_1c = param_2[7];
    local_18 = *(undefined8 *)(param_2 + 8);
    local_38 = &DAT_14c99a1f0;
    (*DAT_14c99c090)(*param_2,&local_38);
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5653e FUN_146f5653e body=92 status=ok
// SIG undefined FUN_146f5653e(void)

void FUN_146f5653e(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  local_18 = *(undefined8 *)(param_2 + 8);
  local_38 = &DAT_14c99a1f0;
  (*DAT_14c99c080)(*param_2,&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5659c FUN_146f5659c body=81 status=ok
// SIG undefined FUN_146f5659c(void)

void FUN_146f5659c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uStack_20 = *(undefined4 *)(param_2 + 8);
  uStack_1c = *(undefined4 *)(param_2 + 0xc);
  local_18 = *(undefined4 *)(param_2 + 0x10);
  uStack_14 = *(undefined4 *)(param_2 + 0x14);
  uStack_10 = *(undefined4 *)(param_2 + 0x18);
  uStack_c = *(undefined4 *)(param_2 + 0x1c);
  local_28 = &DAT_14c99a1f0;
  (*DAT_14c99c088)();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f565ee FUN_146f565ee body=243 status=ok
// SIG undefined FUN_146f565ee(void)

void FUN_146f565ee(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  uint local_60;
  uint local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_146289f56();
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_30 = 0xffffffff00000007;
  FUN_142a6f4a0(&local_20,uVar2);
  lVar1 = DAT_14c99a200;
  DAT_14c99a200 = local_20;
  local_20 = 0;
  if (lVar1 != 0) {
    FUN_146f11920();
    if (local_20 != 0) {
      FUN_146f11920();
    }
  }
  if (8 < *(ushort *)(DAT_14c99a200 + 0x7a) || 0x20 < *(uint *)(DAT_14c99a200 + 0x74)) {
    local_58 = (uint)*(ushort *)(DAT_14c99a200 + 0x7a);
    local_68 = 8;
    local_60 = *(uint *)(DAT_14c99a200 + 0x74);
    FUN_140033559(".\\Runtime/Experimental/Iris/Core/Private/Iris/Serialization/FieldPathNetSerializer.cpp"
                  ,0xee,
                  L"FQuantizedType::QuantizedStruct has size %u and alignment %u but requires size %u and alignment %u."
                  ,0x20);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f56716 FUN_146f56716 body=88 status=ok
// SIG undefined FUN_146f56716(void)

void FUN_146f56716(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = **(int **)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  FUN_146f5435e(uVar2,iVar1 != 0,1);
  if (iVar1 == 0) {
    return;
  }
  FUN_146f5435e(uVar2,iVar1,0x20);
  return;
}



// FUNCTION 146f5676e FUN_146f5676e body=66 status=ok
// SIG undefined FUN_146f5676e(void)

void FUN_146f5676e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uVar2 = FUN_146f546d2(uVar1,1);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_146f546d2(uVar1,0x20);
  }
  **(undefined4 **)(param_2 + 0x18) = uVar3;
  return;
}



// FUNCTION 146f567b0 FUN_146f567b0 body=55 status=ok
// SIG undefined FUN_146f567b0(void)

void FUN_146f567b0(longlong param_1,longlong param_2)

{
  FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),**(undefined4 **)(param_2 + 0x18),
                **(undefined4 **)(param_2 + 0x20),&DAT_149f9e908,3,0x20);
  return;
}



// FUNCTION 146f567e8 FUN_146f567e8 body=56 status=ok
// SIG undefined FUN_146f567e8(void)

void FUN_146f567e8(longlong param_1,longlong param_2)

{
  FUN_146f55bae(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_2 + 0x18),
                **(undefined4 **)(param_2 + 0x20),&DAT_149f9e908,3,0x20);
  return;
}



// FUNCTION 146f56820 FUN_146f56820 body=110 status=ok
// SIG undefined FUN_146f56820(void)

void FUN_146f56820(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = **(ulonglong **)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  FUN_146f5435e(uVar2,uVar1 != 0,1);
  if (uVar1 == 0) {
    return;
  }
  FUN_146f5435e(uVar2,uVar1 & 0xffffffff,0x20);
  FUN_146f5435e(uVar2,uVar1 >> 0x20,0x20);
  return;
}



// FUNCTION 146f5688e FUN_146f5688e body=88 status=ok
// SIG undefined FUN_146f5688e(void)

void FUN_146f5688e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uVar3 = FUN_146f546d2(uVar1,1);
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_146f546d2(uVar1,0x20);
    lVar4 = FUN_146f546d2(uVar1,0x20);
    uVar3 = lVar4 << 0x20 | (ulonglong)uVar2;
  }
  **(ulonglong **)(param_2 + 0x18) = uVar3;
  return;
}



// FUNCTION 146f568e6 FUN_146f568e6 body=56 status=ok
// SIG undefined FUN_146f568e6(void)

void FUN_146f568e6(longlong param_1,longlong param_2)

{
  FUN_142aa28e2(*(undefined8 *)(param_1 + 0xe0),**(undefined8 **)(param_2 + 0x18),
                **(undefined8 **)(param_2 + 0x20),&DAT_149f9e90b,3,0x40);
  return;
}



// FUNCTION 146f5691e FUN_146f5691e body=56 status=ok
// SIG undefined FUN_146f5691e(void)

void FUN_146f5691e(longlong param_1,longlong param_2)

{
  FUN_146f55d4b(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_2 + 0x18),
                **(undefined8 **)(param_2 + 0x20),&DAT_149f9e90b,3,0x40);
  return;
}



// FUNCTION 146f56956 FUN_146f56956 body=146 status=ok
// SIG undefined FUN_146f56956(void)

void FUN_146f56956(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  
  piVar5 = *(int **)(param_2 + 0x18);
  iVar1 = piVar5[1];
  iVar2 = *piVar5;
  iVar3 = piVar5[2];
  iVar4 = piVar5[3];
  uVar6 = *(undefined8 *)(param_1 + 0xe0);
  FUN_146f5435e(uVar6,((iVar1 != 0 || iVar2 != 0) || iVar3 != 0) || iVar4 != 0,1);
  if (((iVar1 == 0 && iVar2 == 0) && iVar3 == 0) && iVar4 == 0) {
    return;
  }
  FUN_146f5435e(uVar6,*piVar5,0x20);
  FUN_146f5435e(uVar6,piVar5[1],0x20);
  FUN_146f5435e(uVar6,piVar5[2],0x20);
  FUN_146f5435e(uVar6,piVar5[3],0x20);
  return;
}



// FUNCTION 146f569e8 FUN_146f569e8 body=146 status=ok
// SIG undefined FUN_146f569e8(void)

void FUN_146f569e8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uVar3 = FUN_146f546d2(uVar1,1);
  uVar4 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  if ((uVar3 & 1) != 0) {
    uVar5 = FUN_146f546d2(uVar1,0x20);
    uVar6 = FUN_146f546d2(uVar1,0x20);
    uVar7 = FUN_146f546d2(uVar1,0x20);
    uVar4 = FUN_146f546d2(uVar1,0x20);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x18);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar4;
  return;
}



// FUNCTION 146f56a7a FUN_146f56a7a body=190 status=ok
// SIG undefined FUN_146f56a7a(void)

LPCRITICAL_SECTION FUN_146f56a7a(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].SpinCount = 0;
  *(undefined4 *)&param_1[2].DebugInfo = 0;
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  *(undefined8 *)((longlong)&param_1[2].DebugInfo + 4) = 0xffffffff00000080;
  param_1[2].RecursionCount = 0;
  param_1[2].LockSemaphore = (HANDLE)0x0;
  *(undefined4 *)&param_1[2].SpinCount = 0;
  param_1[4].OwningThread = (HANDLE)0x0;
  *(undefined4 *)&param_1[4].LockSemaphore = 0;
  param_1[3].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[3].LockCount = 0;
  param_1[3].RecursionCount = 0;
  *(undefined4 *)&param_1[3].OwningThread = 0;
  param_1[3].LockSemaphore = (HANDLE)0x0;
  param_1[3].SpinCount = 0;
  *(undefined8 *)((longlong)&param_1[4].LockSemaphore + 4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)&param_1[4].SpinCount + 4) = 0;
  param_1[5].LockCount = 0;
  param_1[5].RecursionCount = 0;
  *(undefined4 *)&param_1[5].OwningThread = 0;
  param_1[6].OwningThread = (HANDLE)0x0;
  *(undefined4 *)&param_1[6].LockSemaphore = 0;
  param_1[5].LockSemaphore = (HANDLE)0x0;
  param_1[5].SpinCount = 0;
  *(undefined8 *)((longlong)&param_1[6].LockSemaphore + 4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)&param_1[6].SpinCount + 4) = 0;
  param_1[7].LockCount = 0;
  param_1[7].RecursionCount = 0;
  *(undefined4 *)&param_1[7].OwningThread = 0;
  *(undefined4 *)&param_1[8].DebugInfo = 0;
  param_1[7].LockSemaphore = (HANDLE)0x0;
  param_1[7].SpinCount = 0;
  return param_1;
}



// FUNCTION 146f56b38 FUN_146f56b38 body=65 status=ok
// SIG undefined FUN_146f56b38(void)

void FUN_146f56b38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f9eaa8;
  FUN_146f56b7a(param_1 + 4);
  FUN_140a87f81(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f56b7a FUN_146f56b7a body=130 status=ok
// SIG undefined FUN_146f56b7a(void)

void FUN_146f56b7a(LPCRITICAL_SECTION param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1[7].LockSemaphore != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  *(undefined4 *)&param_1[7].OwningThread = 0;
  lVar1._0_4_ = param_1[7].LockCount;
  lVar1._4_4_ = param_1[7].RecursionCount;
  if (lVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_146f68094(&param_1[5].LockSemaphore);
  *(undefined4 *)&param_1[5].OwningThread = 0;
  lVar2._0_4_ = param_1[5].LockCount;
  lVar2._4_4_ = param_1[5].RecursionCount;
  if (lVar2 != 0) {
    FUN_1400020a8();
  }
  FUN_146f62244(&param_1[3].LockSemaphore);
  FUN_146f57d76(param_1 + 1);
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 146f56bfc FUN_146f56bfc body=311 status=ok
// SIG undefined FUN_146f56bfc(void)

void FUN_146f56bfc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auStack_98 [32];
  undefined ***local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 *local_60;
  undefined **local_50;
  undefined4 local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = (undefined8 *)param_2[3];
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  local_50 = &PTR_FUN_149f9f140;
  local_40 = (undefined ***)0x0;
  local_48 = 1;
  if (puVar1[5] == 0) {
    bVar3 = false;
  }
  else {
    FUN_146f56d34(*param_2 + 0x20,&local_78);
    local_40 = local_78;
    bVar3 = local_78 != (undefined ***)0x0;
  }
  local_78 = (undefined ***)CONCAT71(local_78._1_7_,bVar3);
  FUN_146f5435e(uVar2,bVar3 != false,1);
  if ((char)local_78 != '\0') {
    uStack_70 = (undefined4)param_2[1];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_68 = param_2[2];
    local_60 = puVar1 + 3;
    local_78 = DAT_14c99a550;
    (*DAT_14c99a4f0)(param_1,&local_78);
    local_68 = param_2[2];
    uStack_70 = (undefined4)param_2[1];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_60 = (undefined8 *)*puVar1;
    local_78 = &local_50;
    (*DAT_14c99c040)(param_1,&local_78);
  }
  local_50 = &PTR_FUN_149f9f140;
  if ((undefined ***)local_40 != (undefined ***)0x0) {
    FUN_146f11920();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f56d34 FUN_146f56d34 body=327 status=ok
// SIG undefined FUN_146f56d34(void)

undefined2 ** FUN_146f56d34(undefined8 param_1,undefined2 **param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_3;
  FUN_146f58040(param_1,&local_40);
  *param_2 = local_40;
  if (local_40 == (undefined2 *)0x0) {
    FUN_1400021e4(&local_30,&local_40);
    puVar4 = local_40;
    if (local_38 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    uVar1 = FUN_1446f4bba();
    local_50 = 0;
    local_60 = 0;
    local_58 = 1;
    local_68 = 0;
    lVar2 = FUN_1412ecd05(uVar1,0,puVar4,0);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (lVar2 != 0) {
      lVar3 = FUN_1446f4bba();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        FUN_146f5826e(param_1,&local_40,lVar2,local_30);
        if (&local_40 != param_2) {
          puVar4 = *param_2;
          *param_2 = local_40;
          local_40 = (undefined2 *)0x0;
          if (puVar4 == (undefined2 *)0x0) goto LAB_146f56d6f;
          FUN_146f11920();
        }
        if (local_40 != (undefined2 *)0x0) {
          FUN_146f11920();
        }
      }
    }
  }
LAB_146f56d6f:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146f56e7c FUN_146f56e7c body=697 status=ok
// SIG undefined FUN_146f56e7c(void)

void FUN_146f56e7c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined **local_b0;
  undefined4 local_a8;
  undefined ***local_a0;
  undefined ***local_98;
  longlong lStack_90;
  ulonglong local_88;
  undefined8 *local_80;
  undefined ***local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *param_2;
  plVar2 = (longlong *)param_2[3];
  uVar6 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  if ((uVar6 & 1) == 0) {
    FUN_146f57906(param_1,lVar1,plVar2);
    if (*plVar2 != 0) {
      (**(code **)(*DAT_14c872d28 + 0x48))();
    }
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[2] = 0;
    plVar2[3] = 0;
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[6] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
  }
  local_68 = 0;
  uStack_60 = 0;
  lStack_90 = param_2[1];
  local_88 = param_2[2];
  local_98 = DAT_14c99a550;
  local_80 = &local_68;
  (*DAT_14c99a4f8)(param_1,&local_98);
  local_b0 = (undefined **)0x0;
  lStack_90 = 0;
  local_88 = local_88 & 0xffffffff00000000;
  local_98 = DAT_14c99a550;
  local_80 = &local_68;
  local_78 = &local_b0;
  (*DAT_14c99a518)(param_1,&local_98);
  ppuVar4 = local_b0;
  if (local_b0 != (undefined **)0x0) {
    lVar7 = FUN_1446f4bba();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(ppuVar4[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(ppuVar4[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
        lVar7 + 0x30)) {
      local_b0 = &PTR_FUN_149f9f140;
      local_a8 = 1;
      FUN_146f57136(lVar1 + 0x20,&local_98,ppuVar4);
      pppuVar5 = local_98;
      local_a0 = local_98;
      if (local_98 != (undefined ***)0x0) {
        if ((((local_68 ^ plVar2[3]) & 0xfffffffffffffff) != 0) ||
           ((int)uStack_60 != (int)plVar2[4])) {
          local_b8 = plVar2 + 3;
          FUN_146f57906(param_1,lVar1,plVar2);
          if ((ulonglong)*(uint *)(plVar2 + 1) != 0) {
            memset((void *)*plVar2,0,(ulonglong)*(uint *)(plVar2 + 1));
          }
          FUN_146f5723c(plVar2,*(undefined4 *)((longlong)pppuVar5 + 0x74),
                        *(undefined2 *)((longlong)pppuVar5 + 0x7a));
          *(undefined4 *)local_b8 = (undefined4)local_68;
          *(undefined4 *)((longlong)local_b8 + 4) = local_68._4_4_;
          *(int *)(local_b8 + 1) = (int)uStack_60;
          *(undefined4 *)((longlong)local_b8 + 0xc) = uStack_60._4_4_;
          *(undefined4 *)(plVar2 + 6) = *(undefined4 *)(pppuVar5 + 0x17);
          FUN_14010318a(ppuVar4,&local_98,0);
          iVar8 = (int)lStack_90 + -1;
          if ((int)lStack_90 == 0) {
            iVar8 = 0;
          }
          FUN_1446f82e2(&local_50,iVar8,local_98,1);
          plVar2[5] = local_50;
          if (local_98 != (undefined ***)0x0) {
            FUN_1400020a8();
          }
        }
        local_88 = param_2[2];
        lStack_90 = param_2[1];
        local_80 = (undefined8 *)*plVar2;
        local_98 = &local_b0;
        (*DAT_14c99c048)(param_1);
        local_b0 = &PTR_FUN_149f9f140;
        if (local_a0 != (undefined ***)0x0) {
          FUN_146f11920();
        }
        goto LAB_146f5706c;
      }
    }
  }
  uVar3 = DAT_14c99c018;
  FUN_146f5b89e(param_1);
  if (*(longlong *)(param_1 + 8) == 0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
  }
LAB_146f5706c:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f57136 FUN_146f57136 body=260 status=ok
// SIG undefined FUN_146f57136(void)

longlong * FUN_146f57136(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  FUN_14010318a(param_3,&local_50,0);
  iVar5 = local_48 + -1;
  if (local_48 == 0) {
    iVar5 = 0;
  }
  FUN_1446f82e2(&local_40,iVar5,local_50,1);
  lVar2 = local_40;
  FUN_146f58040(param_1,&local_40,local_40);
  lVar3 = local_40;
  lVar1 = *param_2;
  *param_2 = local_40;
  if (lVar1 != 0) {
    FUN_146f11920();
  }
  if (lVar3 == 0) {
    cVar4 = FUN_146f57eee(param_1,param_3);
    if (cVar4 != '\0') {
      FUN_146f5826e(param_1,&local_40,param_3,lVar2);
      if (&local_40 == param_2) {
        if (local_40 != 0) {
          FUN_146f11920();
        }
      }
      else {
        *param_2 = local_40;
      }
    }
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5723c FUN_146f5723c body=205 status=ok
// SIG undefined FUN_146f5723c(void)

void FUN_146f5723c(ulonglong *param_1,uint param_2,uint param_3)

{
  void *_Dst;
  uint uVar1;
  
  if (param_2 == 0) {
    if (*param_1 != 0) {
      (**(code **)(*DAT_14c872d28 + 0x48))();
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    if ((*(uint *)((longlong)param_1 + 0xc) < param_2) || (((ulonglong)param_3 - 1 & *param_1) != 0)
       ) {
      _Dst = (void *)(**(code **)(*DAT_14c872d28 + 0x28))
                               (DAT_14c872d28,(ulonglong)param_2,(ulonglong)param_3);
      memset(_Dst,0,(ulonglong)param_2);
      if ((ulonglong)(uint)param_1[1] != 0) {
        memcpy(_Dst,(void *)*param_1,(ulonglong)(uint)param_1[1]);
      }
      (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,*param_1);
      *param_1 = (ulonglong)_Dst;
      *(uint *)(param_1 + 1) = param_2;
      *(uint *)((longlong)param_1 + 0xc) = param_2;
    }
    else {
      uVar1 = (uint)param_1[1] - param_2;
      if (param_2 <= (uint)param_1[1] && uVar1 != 0) {
        memset((void *)(*param_1 + (ulonglong)param_2),0,(ulonglong)uVar1);
      }
      *(uint *)(param_1 + 1) = param_2;
    }
    *(uint *)(param_1 + 2) = param_3;
  }
  return;
}



// FUNCTION 146f57316 FUN_146f57316 body=615 status=ok
// SIG undefined FUN_146f57316(void)

void FUN_146f57316(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_d8 [40];
  undefined **local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined ***local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_68;
  int local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *param_2;
  plVar2 = (longlong *)param_2[3];
  plVar3 = (longlong *)param_2[4];
  if ((plVar2[1] != 0) && (lVar4 = *plVar2, lVar4 != 0)) {
    local_50 = lVar4;
    FUN_146f57136(lVar1 + 0x20,&local_58,lVar4);
    if (local_58 != 0) {
      FUN_14010318a(lVar4,&local_68,0);
      iVar5 = local_60 + -1;
      if (local_60 == 0) {
        iVar5 = 0;
      }
      FUN_1446f82e2(&local_98,iVar5,local_68,1);
      if (local_98 != (undefined ***)plVar3[5]) {
        FUN_146f57906(param_1,lVar1,plVar3);
        if ((ulonglong)*(uint *)(plVar3 + 1) != 0) {
          memset((void *)*plVar3,0,(ulonglong)*(uint *)(plVar3 + 1));
        }
        FUN_146f5723c(plVar3,*(undefined4 *)(local_58 + 0x74),*(undefined2 *)(local_58 + 0x7a));
        plVar3[5] = (longlong)local_98;
        *(undefined4 *)(plVar3 + 6) = *(undefined4 *)(local_58 + 0xb8);
        uStack_90 = (undefined4)param_2[1];
        uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
        local_88 = param_2[2];
        local_80 = &local_50;
        local_78 = plVar3 + 3;
        local_98 = DAT_14c99a550;
        (*DAT_14c99a510)(param_1);
      }
      if ((int)plVar3[1] != 0) {
        local_b0 = &PTR_FUN_149f9f140;
        local_a0 = 0;
        local_a8 = 1;
        if ((local_58 != 0) && (local_a0 = local_58, (*(byte *)(local_58 + 0xb8) & 8) != 0)) {
          LOCK();
          *(int *)(local_58 + 0xbc) = *(int *)(local_58 + 0xbc) + 1;
          UNLOCK();
        }
        local_88 = param_2[2];
        uStack_90 = (undefined4)param_2[1];
        uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
        local_80 = (longlong *)plVar2[1];
        local_78 = (longlong *)*plVar3;
        local_98 = &local_b0;
        (*DAT_14c99c060)(param_1);
        local_b0 = &PTR_FUN_149f9f140;
        if (local_a0 != 0) {
          FUN_146f11920();
        }
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != 0) {
        FUN_146f11920();
      }
      goto LAB_146f57392;
    }
  }
  FUN_146f57906(param_1,lVar1,plVar3);
  if (*plVar3 != 0) {
    (**(code **)(*DAT_14c872d28 + 0x48))();
  }
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[6] = 0;
LAB_146f57392:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5757e FUN_146f5757e body=387 status=ok
// SIG undefined FUN_146f5757e(void)

void FUN_146f5757e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined **ppuVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  undefined **local_90;
  undefined4 local_88;
  undefined ***local_80;
  undefined ***local_78;
  longlong lStack_70;
  ulonglong local_68;
  longlong local_60;
  undefined ***local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *param_2;
  plVar2 = (longlong *)param_2[3];
  plVar3 = (longlong *)param_2[4];
  if ((plVar2[3] == 0) && ((*(uint *)(plVar2 + 4) & 0xfffff) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
  }
  local_60 = (longlong)(plVar2 + 3);
  local_90 = (undefined **)0x0;
  lStack_70 = 0;
  local_68 = local_68 & 0xffffffff00000000;
  local_78 = DAT_14c99a550;
  local_58 = &local_90;
  (*DAT_14c99a518)(param_1);
  ppuVar4 = local_90;
  if (local_90 != (undefined **)0x0) {
    lVar5 = FUN_1446f4bba();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(ppuVar4[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(ppuVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      if (ppuVar4 != (undefined **)*plVar3) {
        FUN_1401fa0f0(plVar3,ppuVar4,0);
      }
      local_90 = &PTR_FUN_149f9f140;
      local_88 = 1;
      FUN_146f57136(lVar1 + 0x20,&local_78,ppuVar4);
      local_80 = local_78;
      if (local_78 != (undefined ***)0x0) {
        lStack_70 = param_2[1];
        local_68 = param_2[2];
        local_60 = *plVar2;
        local_58 = (undefined ***)plVar3[1];
        local_78 = &local_90;
        (*DAT_14c99c068)(param_1);
        local_90 = &PTR_FUN_149f9f140;
        if (local_80 != (undefined ***)0x0) {
          FUN_146f11920();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5771a FUN_146f5771a body=90 status=ok
// SIG undefined FUN_146f5771a(void)

undefined8 FUN_146f5771a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 extraout_var;
  
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (((*(uint *)(puVar1 + 1) == *(uint *)(puVar2 + 1)) &&
        (((puVar1[3] ^ puVar2[3]) & 0xfffffffffffffff) == 0)) &&
       (*(int *)(puVar1 + 4) == *(int *)(puVar2 + 4))) {
      iVar3 = memcmp((void *)*puVar1,(void *)*puVar2,(ulonglong)*(uint *)(puVar1 + 1));
      uVar4 = CONCAT71((int7)(CONCAT44(extraout_var,iVar3) >> 8),iVar3 == 0);
    }
    else {
      uVar4 = 0;
    }
    return uVar4;
  }
  uVar4 = FUN_14688c2e2(puVar1,puVar2,0);
  return uVar4;
}



// FUNCTION 146f57778 FUN_146f57778 body=237 status=ok
// SIG undefined FUN_146f57778(void)

void FUN_146f57778(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [32];
  undefined ***local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined **local_58;
  undefined4 local_50;
  undefined ***local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_2;
  puVar2 = (undefined8 *)param_2[3];
  puVar3 = (undefined8 *)param_2[4];
  FUN_146f57866(puVar3,puVar2);
  if ((*(byte *)(puVar2 + 6) & 0x40) != 0) {
    local_58 = &PTR_FUN_149f9f140;
    local_50 = 1;
    FUN_146f56d34(lVar1 + 0x20,&local_88,puVar2[5]);
    local_48 = local_88;
    if (local_88 != (undefined ***)0x0) {
      uStack_80 = (undefined4)param_2[1];
      uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_78 = param_2[2];
      local_88 = &local_58;
      local_70 = *puVar2;
      local_68 = *puVar3;
      (*DAT_14c99c080)(param_1);
      local_58 = &PTR_FUN_149f9f140;
      if (local_48 != (undefined ***)0x0) {
        FUN_146f11920();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f57866 FUN_146f57866 body=96 status=ok
// SIG undefined FUN_146f57866(void)

void FUN_146f57866(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  void *_Dst;
  
  if (*(int *)(param_2 + 1) != 0) {
    _Dst = (void *)(**(code **)(*DAT_14c872d28 + 0x28))
                             (DAT_14c872d28,*(int *)(param_2 + 1),*(undefined4 *)(param_2 + 2));
    *param_1 = _Dst;
    uVar1 = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    memcpy(_Dst,(void *)*param_2,(ulonglong)*(uint *)(param_2 + 1));
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 146f578c6 FUN_146f578c6 body=63 status=ok
// SIG undefined FUN_146f578c6(void)

void FUN_146f578c6(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_2[3];
  FUN_146f57906(param_1,*param_2,plVar1);
  if (*plVar1 != 0) {
    (**(code **)(*DAT_14c872d28 + 0x48))();
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 0;
  return;
}



// FUNCTION 146f57906 FUN_146f57906 body=187 status=ok
// SIG undefined FUN_146f57906(void)

void FUN_146f57906(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined **local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_3 + 1) != 0) && ((*(byte *)(param_3 + 6) & 0x40) != 0)) {
    local_38 = &PTR_FUN_149f9f140;
    local_30 = 1;
    FUN_146f56d34(param_2 + 0x20,&local_28,param_3[5]);
    local_40 = *param_3;
    local_48 = 0;
    local_50 = 0;
    local_58 = &local_38;
    (*DAT_14c99c088)(param_1);
    local_38 = &PTR_FUN_149f9f140;
    if (local_28 != 0) {
      FUN_146f11920();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f579c2 FUN_146f579c2 body=264 status=ok
// SIG undefined FUN_146f579c2(void)

void FUN_146f579c2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined ***local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  longlong local_58;
  undefined **local_50;
  undefined4 local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_2;
  puVar2 = (undefined8 *)param_2[3];
  if ((puVar2[3] != 0) || ((*(uint *)(puVar2 + 4) & 0xfffff) != 0)) {
    local_78 = (undefined ***)CONCAT62(local_78._2_6_,1);
    FUN_146f3b77a(param_2[4],&local_78,puVar2 + 3,param_2 + 1);
  }
  if ((*(byte *)(puVar2 + 6) & 4) != 0) {
    local_50 = &PTR_FUN_149f9f140;
    local_48 = 1;
    FUN_146f56d34(lVar1 + 0x20,&local_78,puVar2[5]);
    local_40 = local_78;
    if (local_78 != (undefined ***)0x0) {
      uStack_70 = (undefined4)param_2[1];
      uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_68 = (undefined4)param_2[2];
      uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
      local_58 = param_2[4];
      local_78 = &local_50;
      uStack_60 = *puVar2;
      (*DAT_14c99c090)(param_1);
      local_50 = &PTR_FUN_149f9f140;
      if (local_40 != (undefined ***)0x0) {
        FUN_146f11920();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f57acb FUN_146f57acb body=603 status=ok
// SIG undefined FUN_146f57acb(void)

void FUN_146f57acb(longlong param_1,longlong param_2)

{
  void **ppvVar1;
  int iVar2;
  void *_Src;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x1c);
  FUN_140a87f81(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    FUN_146f67fb8(param_1 + 0x10);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_1412d7f26(&local_48,0x100);
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  if ((uVar3 & 1) == 0) {
    if (uVar3 == 0) goto LAB_146f57be0;
    FUN_1400021e4(uVar3 + 0x20,&local_58);
    iVar2 = local_50 + -1;
    if (local_50 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(&local_48,local_58,iVar2);
    FUN_140002184(&local_48,0x2e);
  }
  else {
    uVar3 = uVar3 & 0xfffffffffffffffe;
    if (uVar3 == 0) goto LAB_146f57be0;
    if (DAT_14c950c29 == '\x01') {
      FUN_14689c22e(uVar3);
    }
    local_38 = *(undefined8 *)(uVar3 + 0x18);
    FUN_1400021e4(&local_38,&local_58);
    iVar2 = local_50 + -1;
    if (local_50 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(&local_48,local_58,iVar2);
    FUN_140002184(&local_48,0x2e);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_146f57be0:
  if (param_2 == 0) {
    FUN_140056680(&local_58,&DAT_149e01fe8);
  }
  else {
    FUN_1400021e4(param_2 + 0x20,&local_58);
  }
  iVar2 = local_50 + -1;
  if (local_50 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(&local_48,local_58,iVar2);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  _Src = local_48;
  ppvVar1 = (void **)(param_1 + 0x150);
  if (ppvVar1 != &local_48) {
    iVar2 = (int)uStack_40;
    lVar4 = (longlong)(int)uStack_40;
    *(int *)(param_1 + 0x158) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)(param_1 + 0x15c) == 0) {
      *(undefined4 *)(param_1 + 0x15c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_40 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar4 * 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar5 = (longlong)*(int *)(param_1 + 0x18) * 0x28;
    do {
      FUN_146f688d0(param_1 + 0x100,&local_48,lVar4);
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
  FUN_142aa2a92(param_1 + 0x20,DAT_14c75f494);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f57d2c FUN_146f57d2c body=73 status=ok
// SIG undefined FUN_146f57d2c(void)

undefined8 * FUN_146f57d2c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = &PTR_FUN_149f9eaa8;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_146f56a7a(param_2 + 4);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_146f57acb(param_2,param_3);
  return param_2;
}



// FUNCTION 146f57d76 FUN_146f57d76 body=49 status=ok
// SIG undefined FUN_146f57d76(void)

void FUN_146f57d76(longlong param_1)

{
  FUN_146f57da8(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_146f67fe8(param_1);
  return;
}



// FUNCTION 146f57da8 FUN_146f57da8 body=325 status=ok
// SIG undefined FUN_146f57da8(void)

void FUN_146f57da8(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar3 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_1[5];
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if ((iStack_44 != iVar3) || (local_50 != plVar1)) {
    do {
      lVar2 = *(longlong *)(*local_80 + (longlong)iStack_64 * 0x10);
      if (lVar2 != 0) {
        if (*(longlong *)(lVar2 + 0x18) != 0) {
          FUN_146f11920();
        }
        thunk_FUN_1400020a8(lVar2,0x20);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_1 || (local_70 != plVar1 || iStack_64 != iVar3));
  }
  *(int *)(param_1 + 0xc) = param_2;
  iVar3 = 0;
  if (0 < param_2) {
    iVar3 = param_2;
  }
  FUN_146f68206(param_1,iVar3);
  param_1[10] = 0;
  param_1[0xb] = 0;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f57eee FUN_146f57eee body=336 status=ok
// SIG undefined FUN_146f57eee(void)

ulonglong FUN_146f57eee(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
    plVar1 = (longlong *)(param_1 + 0xe0);
    lVar2 = param_1 + 0xf0;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = lVar2;
    if (*(int *)(param_1 + 0x108) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = *(int *)(param_1 + 0x108);
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    uVar3 = local_68;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar4 = local_68._4_4_;
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar6) || (local_68 = uVar3, uStack_50 != lVar2)) {
      do {
        local_68 = uVar3;
        lVar5 = FUN_14000e0c8((longlong)iVar4 * 0x30 + *local_80);
        if ((lVar5 != 0) &&
           ((*(int *)(lVar5 + 0x38) <= *(int *)(param_2 + 0x38) &&
            (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
             lVar5 + 0x30)))) goto LAB_146f57f1a;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar4 = local_68._4_4_;
        uVar3 = local_68;
      } while ((CONCAT44(uStack_6c,uStack_70) != lVar2 || local_68._4_4_ != iVar6) ||
               local_80 != plVar1);
    }
    uVar7 = 0;
  }
LAB_146f57f1a:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146f58040 FUN_146f58040 body=296 status=ok
// SIG undefined FUN_146f58040(void)

ulonglong * FUN_146f58040(LPCRITICAL_SECTION param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  LPCRITICAL_SECTION p_Var4;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_3;
  EnterCriticalSection(param_1);
  if (*(int *)&param_1[8].DebugInfo < 1) {
    iVar3 = FUN_144a788f7(param_3 & 0xffffffff);
    if ((int)param_1[3].SpinCount != *(int *)((longlong)&param_1[4].SpinCount + 4)) {
      p_Var4 = param_1 + 5;
      if (*(LPCRITICAL_SECTION *)&param_1[5].LockCount != (LPCRITICAL_SECTION)0x0) {
        p_Var4 = *(LPCRITICAL_SECTION *)&param_1[5].LockCount;
      }
      iVar3 = *(int *)((longlong)&p_Var4->DebugInfo +
                      (ulonglong)
                      (*(int *)&param_1[5].OwningThread - 1U & iVar3 + (int)(param_3 >> 0x20)) * 4);
      if (iVar3 != -1) {
        do {
          puVar1 = (ulonglong *)((longlong)param_1[3].LockSemaphore + (longlong)iVar3 * 0x18);
          if (*puVar1 == param_3) {
            if (puVar1 != (ulonglong *)0x0) {
              uVar2 = puVar1[1];
              *param_2 = uVar2;
              if ((uVar2 != 0) && ((*(byte *)(uVar2 + 0xb8) & 8) != 0)) {
                LOCK();
                *(int *)(uVar2 + 0xbc) = *(int *)(uVar2 + 0xbc) + 1;
                UNLOCK();
              }
              goto LAB_146f58093;
            }
            break;
          }
          iVar3 = (int)puVar1[2];
        } while (iVar3 != -1);
      }
    }
    *param_2 = 0;
  }
  else {
    FUN_146f5816a(param_1 + 1,param_2,&local_28);
  }
LAB_146f58093:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5816a FUN_146f5816a body=260 status=ok
// SIG undefined FUN_146f5816a(void)

longlong * FUN_146f5816a(longlong *param_1,longlong *param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  
  uVar2 = *param_3;
  iVar5 = FUN_144a788f7(uVar2 & 0xffffffff);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)((int)param_1[9] - 1U & iVar5 + (int)(uVar2 >> 0x20)) * 4);
    if (iVar5 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar5 * 0x10);
        puVar3 = *(ulonglong **)(*param_1 + (longlong)iVar5 * 0x10);
        if (*puVar3 == uVar2) {
          if (plVar6 != (longlong *)0x0) {
            if (((ulonglong *)param_1[10] == puVar3) &&
               (uVar2 = ((ulonglong *)param_1[10])[2], uVar2 != 0)) {
              param_1[10] = uVar2;
            }
            if ((ulonglong *)param_1[0xb] != puVar3) {
              uVar2 = puVar3[2];
              if (puVar3[1] != 0) {
                *(ulonglong *)(puVar3[1] + 0x10) = uVar2;
              }
              puVar1 = puVar3 + 1;
              if (uVar2 != 0) {
                *(ulonglong *)(uVar2 + 8) = *puVar1;
              }
              *puVar1 = 0;
              puVar3[2] = 0;
              uVar2 = param_1[0xb];
              *puVar1 = uVar2;
              if (uVar2 != 0) {
                *(ulonglong **)(uVar2 + 0x10) = puVar3;
              }
              param_1[0xb] = (longlong)puVar3;
            }
            lVar4 = *(longlong *)(*plVar6 + 0x18);
            *param_2 = lVar4;
            if (lVar4 == 0) {
              return param_2;
            }
            if ((*(byte *)(lVar4 + 0xb8) & 8) == 0) {
              return param_2;
            }
            LOCK();
            *(int *)(lVar4 + 0xbc) = *(int *)(lVar4 + 0xbc) + 1;
            UNLOCK();
            return param_2;
          }
          break;
        }
        iVar5 = (int)plVar6[1];
      } while (iVar5 != -1);
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 146f5826e FUN_146f5826e body=228 status=ok
// SIG undefined FUN_146f5826e(void)

undefined8 **
FUN_146f5826e(LPCRITICAL_SECTION param_1,undefined8 **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = (undefined8 *)0x0;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0xffffffff00000007;
  local_40 = param_4;
  FUN_142a6f4a0(&local_38,param_3);
  if (&local_38 == param_2) {
    if (local_38 != (undefined8 *)0x0) {
      FUN_146f11920();
    }
  }
  else {
    *param_2 = local_38;
  }
  EnterCriticalSection(param_1);
  if (*(int *)&param_1[8].DebugInfo < 1) {
    local_38 = &local_40;
    local_30 = param_2;
    FUN_146f695da(&param_1[3].LockSemaphore,local_24);
  }
  else {
    FUN_146f58354(param_1 + 1,&local_40,param_2);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f58354 FUN_146f58354 body=545 status=ok
// SIG undefined FUN_146f58354(void)

void FUN_146f58354(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *param_2;
  iVar8 = FUN_144a788f7(uVar3 & 0xffffffff);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar9 +
                    (ulonglong)((int)param_1[9] - 1U & iVar8 + (int)(uVar3 >> 0x20)) * 4);
    if (iVar8 != -1) {
      do {
        lVar2 = *param_1 + (longlong)iVar8 * 0x10;
        puVar4 = *(ulonglong **)(*param_1 + (longlong)iVar8 * 0x10);
        if (*puVar4 == uVar3) {
          if (lVar2 != 0) {
            uVar3 = *param_3;
            uVar7 = puVar4[3];
            if (uVar7 != uVar3) {
              puVar4[3] = uVar3;
              if ((uVar3 != 0) && ((*(byte *)(uVar3 + 0xb8) & 8) != 0)) {
                LOCK();
                *(int *)(uVar3 + 0xbc) = *(int *)(uVar3 + 0xbc) + 1;
                UNLOCK();
              }
              if (uVar7 != 0) {
                FUN_146f11920();
              }
            }
            if (((ulonglong *)param_1[10] == puVar4) &&
               (uVar3 = ((ulonglong *)param_1[10])[2], uVar3 != 0)) {
              param_1[10] = uVar3;
            }
            if ((ulonglong *)param_1[0xb] != puVar4) {
              uVar3 = puVar4[2];
              if (puVar4[1] != 0) {
                *(ulonglong *)(puVar4[1] + 0x10) = uVar3;
              }
              puVar1 = puVar4 + 1;
              if (uVar3 != 0) {
                *(ulonglong *)(uVar3 + 8) = *puVar1;
              }
              *puVar1 = 0;
              puVar4[2] = 0;
              uVar3 = param_1[0xb];
              *puVar1 = uVar3;
              if (uVar3 != 0) {
                *(ulonglong **)(uVar3 + 0x10) = puVar4;
              }
              param_1[0xb] = (longlong)puVar4;
            }
            goto LAB_146f5853a;
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 8);
      } while (iVar8 != -1);
    }
  }
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == (int)param_1[0xc]) &&
     (puVar5 = (undefined8 *)param_1[10], puVar5 != (undefined8 *)0x0)) {
    FUN_146f69200(param_1,*puVar5);
    if ((undefined8 *)param_1[10] == puVar5) {
      param_1[10] = puVar5[2];
    }
    lVar2 = puVar5[1];
    if ((undefined8 *)param_1[0xb] == puVar5) {
      param_1[0xb] = lVar2;
    }
    lVar6 = puVar5[2];
    if (lVar2 != 0) {
      *(longlong *)(lVar2 + 0x10) = lVar6;
    }
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 8) = puVar5[1];
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    if (puVar5[3] != 0) {
      FUN_146f11920();
    }
    thunk_FUN_1400020a8(puVar5,0x20);
  }
  local_38 = (ulonglong *)FUN_14001cc68(0x20,0x10);
  *local_38 = *param_2;
  local_38[2] = 0;
  uVar3 = *param_3;
  local_38[3] = uVar3;
  if ((uVar3 != 0) && ((*(byte *)(uVar3 + 0xb8) & 8) != 0)) {
    LOCK();
    *(int *)(uVar3 + 0xbc) = *(int *)(uVar3 + 0xbc) + 1;
    UNLOCK();
  }
  uVar3 = param_1[0xb];
  local_38[1] = uVar3;
  if (uVar3 != 0) {
    *(ulonglong **)(uVar3 + 0x10) = local_38;
  }
  param_1[0xb] = (longlong)local_38;
  if (param_1[10] == 0) {
    param_1[10] = (longlong)local_38;
  }
  FUN_146f6934a(param_1,local_3c,&local_38);
LAB_146f5853a:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f58576 FUN_146f58576 body=16 status=ok
// SIG undefined FUN_146f58576(void)

undefined1 FUN_146f58576(void)

{
  FUN_146f58586();
  return 1;
}



// FUNCTION 146f58586 FUN_146f58586 body=126 status=ok
// SIG undefined FUN_146f58586(void)

void FUN_146f58586(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_2 + 0x48) < 1) {
    *(undefined2 *)(param_1 + 0x10) = 0;
    uVar2 = 0;
  }
  else {
    lVar3 = 0x7fffffffffffffff;
    lVar6 = 0;
    lVar4 = -0x8000000000000000;
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 8 + lVar6);
      if (lVar5 <= lVar3) {
        lVar3 = lVar5;
      }
      if (0x7e < lVar5) {
        lVar5 = 0x7f;
      }
      if (lVar5 <= lVar4) {
        lVar5 = lVar4;
      }
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar5;
    } while ((longlong)*(int *)(param_2 + 0x48) * 0x10 != lVar6);
    *(char *)(param_1 + 0x10) = (char)lVar3;
    *(char *)(param_1 + 0x11) = (char)lVar5;
    uVar1 = (ulonglong)((int)lVar5 - (int)lVar3 & 0xff) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar2 = (undefined1)lVar3;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar2;
  *(longlong *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 146f58604 FUN_146f58604 body=16 status=ok
// SIG undefined FUN_146f58604(void)

undefined1 FUN_146f58604(void)

{
  FUN_146f58614();
  return 1;
}



// FUNCTION 146f58614 FUN_146f58614 body=128 status=ok
// SIG undefined FUN_146f58614(void)

void FUN_146f58614(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_2 + 0x48) < 1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    uVar2 = 0;
  }
  else {
    lVar3 = 0x7fffffffffffffff;
    lVar6 = 0;
    lVar4 = -0x8000000000000000;
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 8 + lVar6);
      if (lVar5 <= lVar3) {
        lVar3 = lVar5;
      }
      if (0x7ffe < lVar5) {
        lVar5 = 0x7fff;
      }
      if (lVar5 <= lVar4) {
        lVar5 = lVar4;
      }
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar5;
    } while ((longlong)*(int *)(param_2 + 0x48) * 0x10 != lVar6);
    *(short *)(param_1 + 0x10) = (short)lVar3;
    *(short *)(param_1 + 0x12) = (short)lVar5;
    uVar1 = (ulonglong)((int)lVar5 - (int)lVar3 & 0xffff) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar2 = (undefined1)lVar3;
  }
  *(undefined1 *)(param_1 + 0x14) = uVar2;
  *(longlong *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 146f58694 FUN_146f58694 body=16 status=ok
// SIG undefined FUN_146f58694(void)

undefined1 FUN_146f58694(void)

{
  FUN_146f586a4();
  return 1;
}



// FUNCTION 146f586a4 FUN_146f586a4 body=125 status=ok
// SIG undefined FUN_146f586a4(void)

void FUN_146f586a4(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_2 + 0x48) < 1) {
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    lVar2 = 0x7fffffffffffffff;
    lVar5 = 0;
    lVar3 = -0x8000000000000000;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 8 + lVar5);
      if (lVar4 <= lVar2) {
        lVar2 = lVar4;
      }
      if (0x7ffffffe < lVar4) {
        lVar4 = 0x7fffffff;
      }
      if (lVar4 <= lVar3) {
        lVar4 = lVar3;
      }
      lVar5 = lVar5 + 0x10;
      lVar3 = lVar4;
    } while ((longlong)*(int *)(param_2 + 0x48) * 0x10 != lVar5);
    *(int *)(param_1 + 0x10) = (int)lVar2;
    *(int *)(param_1 + 0x14) = (int)lVar4;
    uVar1 = (ulonglong)(uint)((int)lVar4 - (int)lVar2) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    *(char *)(param_1 + 0x18) = (char)lVar2;
  }
  *(longlong *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 146f58721 FUN_146f58721 body=122 status=ok
// SIG undefined FUN_146f58721(void)

undefined8 FUN_146f58721(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar2 = (ulonglong)*(int *)(param_2 + 0x48);
  if ((longlong)uVar2 < 1) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar3 = 0x7fffffffffffffff;
    lVar4 = -0x8000000000000000;
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 8 + lVar6);
      if (lVar1 <= lVar3) {
        lVar3 = lVar1;
      }
      if (lVar4 < lVar1) {
        lVar4 = lVar1;
      }
      lVar6 = lVar6 + 0x10;
    } while (uVar2 * 0x10 != lVar6);
    *(longlong *)(param_1 + 0x10) = lVar3;
    *(longlong *)(param_1 + 0x18) = lVar4;
    uVar5 = lVar4 - lVar3;
    if (uVar5 == 0) {
      uVar2 = 0x40;
    }
    else {
      uVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> uVar2 == 0; uVar2 = uVar2 - 1) {
        }
      }
      uVar2 = uVar2 ^ 0x3f;
    }
    *(char *)(param_1 + 0x20) = '@' - (char)uVar2;
  }
  *(longlong *)(param_1 + 0x28) = param_2;
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 146f5879b FUN_146f5879b body=16 status=ok
// SIG undefined FUN_146f5879b(void)

undefined1 FUN_146f5879b(void)

{
  FUN_146f587ac();
  return 1;
}



// FUNCTION 146f587ac FUN_146f587ac body=129 status=ok
// SIG undefined FUN_146f587ac(void)

void FUN_146f587ac(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_2 + 0x48) < 1) {
    *(undefined2 *)(param_1 + 0x10) = 0;
    uVar1 = 0;
  }
  else {
    uVar2 = 0xffffffffffffffff;
    lVar5 = 0;
    uVar3 = 0;
    do {
      uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x40) + 8 + lVar5);
      if (uVar4 <= uVar2) {
        uVar2 = uVar4;
      }
      if (0xfe < uVar4) {
        uVar4 = 0xff;
      }
      if (uVar4 <= uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = lVar5 + 0x10;
      uVar3 = uVar4;
    } while ((longlong)*(int *)(param_2 + 0x48) * 0x10 != lVar5);
    *(char *)(param_1 + 0x10) = (char)uVar2;
    *(char *)(param_1 + 0x11) = (char)uVar4;
    uVar2 = (ulonglong)(((uint)uVar4 & 0xff) - ((uint)uVar2 & 0xff)) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar1 = (undefined1)lVar5;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  *(longlong *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 146f5882d FUN_146f5882d body=16 status=ok
// SIG undefined FUN_146f5882d(void)

undefined1 FUN_146f5882d(void)

{
  FUN_146f5883e();
  return 1;
}



// FUNCTION 146f5883e FUN_146f5883e body=132 status=ok
// SIG undefined FUN_146f5883e(void)

void FUN_146f5883e(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_2 + 0x48) < 1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    uVar1 = 0;
  }
  else {
    uVar2 = 0xffffffffffffffff;
    lVar5 = 0;
    uVar3 = 0;
    do {
      uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x40) + 8 + lVar5);
      if (uVar4 <= uVar2) {
        uVar2 = uVar4;
      }
      if (0xfffe < uVar4) {
        uVar4 = 0xffff;
      }
      if (uVar4 <= uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = lVar5 + 0x10;
      uVar3 = uVar4;
    } while ((longlong)*(int *)(param_2 + 0x48) * 0x10 != lVar5);
    *(short *)(param_1 + 0x10) = (short)uVar2;
    *(short *)(param_1 + 0x12) = (short)uVar4;
    uVar2 = (ulonglong)(((uint)uVar4 & 0xffff) - ((uint)uVar2 & 0xffff)) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar1 = (undefined1)lVar5;
  }
  *(undefined1 *)(param_1 + 0x14) = uVar1;
  *(longlong *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 146f588c2 FUN_146f588c2 body=16 status=ok
// SIG undefined FUN_146f588c2(void)

undefined1 FUN_146f588c2(void)

{
  FUN_146f588d2();
  return 1;
}



// FUNCTION 146f588d2 FUN_146f588d2 body=122 status=ok
// SIG undefined FUN_146f588d2(void)

void FUN_146f588d2(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_2 + 0x48) < 1) {
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar1 = 0xffffffffffffffff;
    lVar4 = 0;
    uVar2 = 0;
    do {
      uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x40) + 8 + lVar4);
      if (uVar3 <= uVar1) {
        uVar1 = uVar3;
      }
      if (0xfffffffe < uVar3) {
        uVar3 = 0xffffffff;
      }
      if (uVar3 <= uVar2) {
        uVar3 = uVar2;
      }
      lVar4 = lVar4 + 0x10;
      uVar2 = uVar3;
    } while ((longlong)*(int *)(param_2 + 0x48) * 0x10 != lVar4);
    *(int *)(param_1 + 0x10) = (int)uVar1;
    *(int *)(param_1 + 0x14) = (int)uVar3;
    uVar1 = (ulonglong)(uint)((int)uVar3 - (int)uVar1) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    *(char *)(param_1 + 0x18) = (char)lVar4;
  }
  *(longlong *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 146f5894c FUN_146f5894c body=118 status=ok
// SIG undefined FUN_146f5894c(void)

undefined8 FUN_146f5894c(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar2 = (ulonglong)*(int *)(param_2 + 0x48);
  if ((longlong)uVar2 < 1) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    uVar3 = 0xffffffffffffffff;
    lVar5 = 0;
    uVar4 = 0;
    do {
      uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x40) + 8 + lVar5);
      if (uVar1 <= uVar3) {
        uVar3 = uVar1;
      }
      if (uVar4 < uVar1) {
        uVar4 = uVar1;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar2 * 0x10 != lVar5);
    *(ulonglong *)(param_1 + 0x10) = uVar3;
    *(ulonglong *)(param_1 + 0x18) = uVar4;
    uVar4 = uVar4 - uVar3;
    if (uVar4 == 0) {
      uVar2 = 0x40;
    }
    else {
      uVar2 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> uVar2 == 0; uVar2 = uVar2 - 1) {
        }
      }
      uVar2 = uVar2 ^ 0x3f;
    }
    *(char *)(param_1 + 0x20) = '@' - (char)uVar2;
  }
  *(longlong *)(param_1 + 0x28) = param_2;
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 146f589c2 FUN_146f589c2 body=85 status=ok
// SIG undefined FUN_146f589c2(void)

undefined8 * FUN_146f589c2(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  *param_1 = param_2;
  lVar1 = FUN_146f42d06(param_2);
  param_1[1] = lVar1 + 0xcd8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  lVar1 = FUN_146f42d06(param_2);
  param_1[4] = *(undefined8 *)(lVar1 + 0x7b0);
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc;
  return param_1;
}



// FUNCTION 146f58a18 FUN_146f58a18 body=38 status=ok
// SIG undefined FUN_146f58a18(void)

void FUN_146f58a18(void)

{
  FUN_1411316ac();
  FUN_1447f69b6(&DAT_14c99a488);
  FUN_1448a8284(&DAT_14c99a488);
  return;
}



// FUNCTION 146f58a3e FUN_146f58a3e body=38 status=ok
// SIG undefined FUN_146f58a3e(void)

void FUN_146f58a3e(void)

{
  FUN_141131722();
  FUN_1447f69b6(&DAT_14c99a4a8);
  FUN_1448a8284(&DAT_14c99a4a8);
  return;
}



// FUNCTION 146f58a64 FUN_146f58a64 body=25 status=ok
// SIG undefined FUN_146f58a64(void)

void FUN_146f58a64(void)

{
  FUN_14580f142();
  FUN_1447f69b6(&DAT_14c99a4c8);
  return;
}



// FUNCTION 146f58a7e FUN_146f58a7e body=47 status=ok
// SIG undefined FUN_146f58a7e(void)

void FUN_146f58a7e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f9ed30;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 146f58aae FUN_146f58aae body=60 status=ok
// SIG undefined FUN_146f58aae(void)

void FUN_146f58aae(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f9ed30;
  if (param_1[7] != 0) {
    FUN_146f11920();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f58aea FUN_146f58aea body=44 status=ok
// SIG undefined FUN_146f58aea(void)

undefined8 FUN_146f58aea(undefined *param_1)

{
  return CONCAT71(0x14c99a5,
                  param_1 == &DAT_14c99a5e8 ||
                  (param_1 == &DAT_14c99a568 || param_1 == &DAT_14c99a4e8));
}



// FUNCTION 146f58b96 FUN_146f58b96 body=576 status=ok
// SIG undefined FUN_146f58b96(void)

undefined8 FUN_146f58b96(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong *puVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [37];
  byte local_43 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0xe0);
  if (lVar2 != 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) {
      local_43[0] = 0xff;
      puVar3 = (ulonglong *)param_2[1];
      pbVar1 = (byte *)*puVar3 + 1;
      if ((byte *)puVar3[1] < pbVar1) {
        (**(code **)(*param_2 + 0x170))(param_2,local_43,1);
        bVar4 = local_43[0];
      }
      else {
        bVar4 = *(byte *)*puVar3;
        *puVar3 = (ulonglong)pbVar1;
      }
      if ((bVar4 == 0xff) || (*(int *)(lVar2 + 0x28) <= (int)(uint)bVar4)) goto LAB_146f58d87;
      lVar8 = *(longlong *)(lVar2 + 0x20);
      if (*(longlong *)(lVar2 + 0x20) == 0) {
        lVar8 = lVar2;
      }
      *param_4 = *(longlong *)(lVar8 + (ulonglong)bVar4 * 8);
LAB_146f58cbc:
      uVar6 = 1;
      goto LAB_146f58d89;
    }
    lVar8 = *param_4;
    if (lVar8 != 0 && DAT_14c950c29 == 1) {
      FUN_14689c22e(lVar8);
    }
    lVar7 = *(longlong *)(lVar2 + 0x20);
    if (*(longlong *)(lVar2 + 0x20) == 0) {
      lVar7 = lVar2;
    }
    bVar4 = DAT_14c950c29;
    if ((longlong)*(int *)(lVar2 + 0x28) == 0) {
      uVar10 = 0;
LAB_146f58cc6:
      lVar8 = *param_4;
      if ((lVar8 != 0) && ((bVar4 & 1) != 0)) {
        FUN_14689c22e(lVar8);
        uVar10 = (ulonglong)*(uint *)(lVar2 + 0x28);
      }
      uVar5 = (int)uVar10 + 1;
      *(uint *)(lVar2 + 0x28) = uVar5;
      if (*(uint *)(lVar2 + 0x2c) < uVar5) {
        FUN_146f69916(lVar2,uVar10);
      }
      lVar7 = *(longlong *)(lVar2 + 0x20);
      if (*(longlong *)(lVar2 + 0x20) == 0) {
        lVar7 = lVar2;
      }
      *(longlong *)(lVar7 + (longlong)(int)uVar10 * 8) = lVar8;
      if ((lVar8 != 0) && (DAT_14c950c29 != 0)) {
        FUN_14689c22e(lVar8);
      }
LAB_146f58d16:
      if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(lVar2 + 0x28))) {
        local_43[2] = (byte)uVar10;
        puVar3 = (ulonglong *)param_2[1];
        if (puVar3[1] < *puVar3 + 1) {
          (**(code **)(*param_2 + 0x170))(param_2,local_43 + 2,1);
        }
        else {
          *puVar3 = *puVar3 + 1;
        }
        goto LAB_146f58cbc;
      }
    }
    else {
      lVar9 = (longlong)*(int *)(lVar2 + 0x28) << 3;
      uVar10 = 0;
      do {
        if ((~bVar4 & 1) == 0 && lVar8 != 0) {
          FUN_14689c22e(lVar8);
          bVar4 = DAT_14c950c29;
        }
        if (*(longlong *)(lVar7 + uVar10 * 8) == lVar8) {
          if ((int)uVar10 != -1) goto LAB_146f58d16;
          break;
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
      uVar10 = (ulonglong)*(uint *)(lVar2 + 0x28);
      if ((int)*(uint *)(lVar2 + 0x28) < 0xff) goto LAB_146f58cc6;
    }
    local_43[1] = 0xff;
    puVar3 = (ulonglong *)param_2[1];
    if (puVar3[1] < *puVar3 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,local_43 + 1,1);
    }
    else {
      *puVar3 = *puVar3 + 1;
    }
  }
LAB_146f58d87:
  uVar6 = 0;
LAB_146f58d89:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 146f58dd8 FUN_146f58dd8 body=463 status=ok
// SIG undefined FUN_146f58dd8(void)

undefined8 FUN_146f58dd8(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_58 [37];
  byte local_33 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0xe0);
  if ((lVar3 == 0) || (DAT_14c75f498 == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  lVar11 = lVar3 + 0x30;
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    local_33[0] = 0xff;
    puVar4 = (ulonglong *)param_2[1];
    pbVar1 = (byte *)*puVar4 + 1;
    if ((byte *)puVar4[1] < pbVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,local_33,1);
      bVar5 = local_33[0];
    }
    else {
      bVar5 = *(byte *)*puVar4;
      *puVar4 = (ulonglong)pbVar1;
    }
    if ((bVar5 != 0xff) && ((int)(uint)bVar5 < *(int *)(lVar3 + 0x58))) {
      if (*(longlong *)(lVar3 + 0x50) != 0) {
        lVar11 = *(longlong *)(lVar3 + 0x50);
      }
      *param_3 = *(longlong *)(lVar11 + (ulonglong)bVar5 * 8);
LAB_146f58f6b:
      uVar7 = 1;
      goto LAB_146f58f74;
    }
  }
  else {
    lVar6 = *(longlong *)(lVar3 + 0x50);
    lVar8 = lVar6;
    if (lVar6 == 0) {
      lVar8 = lVar11;
    }
    iVar2 = *(int *)(lVar3 + 0x58);
    lVar13 = (longlong)iVar2;
    if (lVar13 == 0) {
LAB_146f58ebc:
      *(uint *)(lVar3 + 0x58) = iVar2 + 1U;
      if (*(uint *)(lVar3 + 0x5c) < iVar2 + 1U) {
        FUN_1456af342(lVar11,iVar2);
        lVar6 = *(longlong *)(lVar3 + 0x50);
      }
      if (lVar6 != 0) {
        lVar11 = lVar6;
      }
      *(longlong *)(lVar11 + lVar13 * 8) = *param_3;
      iVar9 = iVar2;
LAB_146f58edc:
      if ((-1 < iVar9) && (iVar9 < *(int *)(lVar3 + 0x58))) {
        local_33[2] = (byte)iVar9;
        puVar4 = (ulonglong *)param_2[1];
        if (puVar4[1] < *puVar4 + 1) {
          (**(code **)(*param_2 + 0x170))(param_2,local_33 + 2,1);
        }
        else {
          *puVar4 = *puVar4 + 1;
        }
        goto LAB_146f58f6b;
      }
    }
    else {
      lVar12 = lVar13 * 8;
      lVar10 = 0;
      do {
        if (*(longlong *)(lVar8 + lVar10 * 8) == *param_3) {
          iVar9 = (int)lVar10;
          if (iVar9 != -1) goto LAB_146f58edc;
          break;
        }
        lVar10 = lVar10 + 1;
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
      if (iVar2 < 0xff) goto LAB_146f58ebc;
    }
    local_33[1] = 0xff;
    puVar4 = (ulonglong *)param_2[1];
    if (puVar4[1] < *puVar4 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,local_33 + 1,1);
    }
    else {
      *puVar4 = *puVar4 + 1;
    }
  }
  uVar7 = 0;
LAB_146f58f74:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146f58fc2 FUN_146f58fc2 body=78 status=ok
// SIG undefined FUN_146f58fc2(void)

void FUN_146f58fc2(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < 0) {
    FUN_146f6394a(param_1,0);
  }
  if (-1 < *(int *)(param_1 + 0x5c)) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_146f63a36(param_1 + 0x30,0);
  return;
}



// FUNCTION 146f59010 FUN_146f59010 body=630 status=ok
// SIG undefined FUN_146f59010(void)

void FUN_146f59010(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined ***local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined **local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  uVar1 = *(uint *)(param_2 + 0x48);
  uVar6 = (ulonglong)uVar1;
  local_78 = (undefined ***)CONCAT71(local_78._1_7_,uVar6 != 0);
  FUN_146f5435e(uVar3,uVar6 != 0,1);
  if ((char)local_78 != '\0') {
    uVar4 = uVar6 * 2 | 2;
    lVar8 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar7 = ((uint)lVar8 ^ 0xffffffc0) + 0x47;
    FUN_146f5435e(uVar3,(uVar7 >> 3) - 1,2);
    FUN_146f5435e(uVar3,uVar6,uVar7 & 0x78);
    local_50 = 0;
    local_58 = &PTR_FUN_149f8c5d0;
    lVar8 = *(longlong *)(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      lVar8 = param_2;
    }
    if (uVar6 != 0) {
      lVar5 = (longlong)(int)uVar1 << 4;
      do {
        local_68 = 0;
        local_70 = 0;
        local_78 = &local_58;
        local_60 = lVar8;
        (*DAT_14c99a4f0)(param_1,&local_78);
        lVar8 = lVar8 + 0x10;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
    }
  }
  uVar1 = *(uint *)(param_2 + 0xb8);
  uVar6 = (ulonglong)uVar1;
  local_78 = (undefined ***)CONCAT71(local_78._1_7_,uVar6 != 0);
  FUN_146f5435e(uVar3,uVar6 != 0,1);
  if ((char)local_78 != '\0') {
    uVar4 = uVar6 * 2 | 2;
    lVar8 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar7 = ((uint)lVar8 ^ 0xffffffc0) + 0x47;
    FUN_146f5435e(uVar3,(uVar7 >> 3) - 1,2);
    FUN_146f5435e(uVar3,uVar6,uVar7 & 0x78);
    local_58 = &PTR_FUN_149f897c8;
    local_50 = 0;
    lVar8 = param_2 + 0x50;
    if (*(longlong *)(param_2 + 0xb0) != 0) {
      lVar8 = *(longlong *)(param_2 + 0xb0);
    }
    if (uVar6 != 0) {
      lVar5 = (longlong)(int)uVar1 * 0x18;
      do {
        local_68 = 0;
        local_70 = 0;
        local_78 = &local_58;
        local_60 = lVar8;
        (*DAT_14c99aae0)(param_1,&local_78);
        lVar8 = lVar8 + 0x18;
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != 0);
    }
  }
  lVar8 = *(longlong *)(param_1 + 0xf8);
  if (lVar8 != 0) {
    iVar2 = *(int *)(param_2 + 0xd8);
    lVar5 = param_2 + 0xc0;
    if (*(longlong *)(param_2 + 0xd0) != 0) {
      lVar5 = *(longlong *)(param_2 + 0xd0);
    }
    if ((longlong)iVar2 != 0) {
      lVar9 = 0;
      do {
        local_78 = (undefined ***)CONCAT44(local_78._4_4_,*(undefined4 *)(lVar5 + lVar9));
        FUN_146f1aed8(*(longlong *)(lVar8 + 8) + 0x3b0,&local_78);
        lVar9 = lVar9 + 4;
      } while ((longlong)iVar2 * 4 != lVar9);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f59287 FUN_146f59287 body=71 status=ok
// SIG undefined FUN_146f59287(void)

void FUN_146f59287(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = 0x3f;
  if ((ulonglong)(param_2 | 1) != 0) {
    for (; (ulonglong)(param_2 | 1) * 2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar2 = ((uint)lVar1 ^ 0xffffffc0) + 0x47;
  FUN_146f5435e(param_1,(uVar2 >> 3) - 1,2);
  FUN_146f5435e(param_1,param_2,uVar2 & 0x78);
  return;
}



// FUNCTION 146f592ce FUN_146f592ce body=38 status=ok
// SIG undefined FUN_146f592ce(void)

void FUN_146f592ce(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f546d2(param_1,2);
  FUN_146f546d2(param_1,iVar1 * 8 + 8);
  return;
}



// FUNCTION 146f592f4 FUN_146f592f4 body=89 status=ok
// SIG undefined FUN_146f592f4(void)

void FUN_146f592f4(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = 4;
  if (4 < param_2) {
    uVar3 = param_2;
  }
  FUN_146f6998c(param_1,*(undefined4 *)(param_1 + 0x48),uVar3);
  *(uint *)(param_1 + 0x4c) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x48);
  if (uVar1 < uVar3) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1;
    }
    memset((void *)((ulonglong)uVar1 * 0x10 + lVar2),0,(ulonglong)(uVar3 - uVar1) << 4);
  }
  *(uint *)(param_1 + 0x48) = param_2;
  return;
}



// FUNCTION 146f5934e FUN_146f5934e body=91 status=ok
// SIG undefined FUN_146f5934e(void)

void FUN_146f5934e(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = 4;
  if (4 < param_2) {
    uVar3 = param_2;
  }
  FUN_146f69a32(param_1,*(undefined4 *)(param_1 + 0x68),uVar3);
  *(uint *)(param_1 + 0x6c) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x68);
  if (uVar1 < uVar3) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (ulonglong)uVar1 * 0x18),0,(ulonglong)(uVar3 - uVar1) * 0x18);
  }
  *(uint *)(param_1 + 0x68) = param_2;
  return;
}



// FUNCTION 146f593aa FUN_146f593aa body=520 status=ok
// SIG undefined FUN_146f593aa(void)

void FUN_146f593aa(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong *local_88;
  undefined ***local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  longlong local_60;
  undefined **local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar7 = (ulonglong)*(uint *)(param_2 + 0x28);
  FUN_146f592f4(param_4,uVar7);
  local_90 = param_4;
  if (uVar7 != 0) {
    local_50 = 0;
    local_58 = &PTR_FUN_149f8c5d0;
    lVar4 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar4 = param_2;
    }
    lVar5 = *(longlong *)(param_4 + 0x40);
    if (*(longlong *)(param_4 + 0x40) == 0) {
      lVar5 = param_4;
    }
    local_88 = param_3;
    do {
      local_70 = 0;
      local_78 = 0;
      local_80 = &local_58;
      local_68 = lVar4;
      local_60 = lVar5;
      (*DAT_14c99a510)(param_1,&local_80);
      lVar5 = lVar5 + 0x10;
      lVar4 = lVar4 + 8;
      uVar7 = uVar7 - 1;
      param_3 = local_88;
    } while (uVar7 != 0);
  }
  lVar5 = local_90;
  uVar7 = (ulonglong)*(uint *)(param_2 + 0x58);
  lVar4 = local_90 + 0x50;
  FUN_146f5934e(lVar4,uVar7);
  if (uVar7 != 0) {
    local_58 = &PTR_FUN_149f897c8;
    local_50 = 0;
    lVar3 = param_2 + 0x30;
    if (*(longlong *)(param_2 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_2 + 0x50);
    }
    lVar5 = *(longlong *)(lVar5 + 0xb0);
    if (lVar5 != 0) {
      lVar4 = lVar5;
    }
    do {
      local_70 = 0;
      local_78 = 0;
      local_80 = &local_58;
      local_68 = lVar3;
      local_60 = lVar4;
      (*DAT_14c99ab00)(param_1,&local_80);
      lVar4 = lVar4 + 0x18;
      lVar3 = lVar3 + 8;
      uVar7 = uVar7 - 1;
      lVar5 = local_90;
    } while (uVar7 != 0);
  }
  uVar1 = *(uint *)(param_3 + 1);
  lVar4 = lVar5 + 0xc0;
  uVar6 = 4;
  if (4 < uVar1) {
    uVar6 = uVar1;
  }
  FUN_146f69ae0(lVar4,*(undefined4 *)(lVar5 + 0xd8),uVar6);
  *(uint *)(lVar5 + 0xdc) = uVar6;
  uVar2 = *(uint *)(lVar5 + 0xd8);
  if (uVar2 < uVar6) {
    lVar3 = *(longlong *)(lVar5 + 0xd0);
    if (*(longlong *)(lVar5 + 0xd0) == 0) {
      lVar3 = lVar4;
    }
    memset((void *)(lVar3 + (ulonglong)uVar2 * 4),0,(ulonglong)(uVar6 - uVar2) << 2);
  }
  *(uint *)(lVar5 + 0xd8) = uVar1;
  if (*(longlong *)(lVar5 + 0xd0) != 0) {
    lVar4 = *(longlong *)(lVar5 + 0xd0);
  }
  if (uVar1 != 0) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lVar4 + lVar5 * 4) = *(undefined4 *)(*param_3 + (longlong)(int)lVar5 * 4);
      lVar5 = lVar5 + 1;
    } while (uVar1 != (uint)lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f595b4 FUN_146f595b4 body=379 status=ok
// SIG undefined FUN_146f595b4(void)

void FUN_146f595b4(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined ***local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  longlong local_60;
  undefined **local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = (ulonglong)*(uint *)(param_2 + 0x48);
  if (uVar3 != 0) {
    FUN_146f59730(param_3,uVar3);
    local_50 = 0;
    local_58 = &PTR_FUN_149f8c5d0;
    lVar2 = *(longlong *)(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      lVar2 = param_2;
    }
    lVar1 = *(longlong *)(param_3 + 0x20);
    if (*(longlong *)(param_3 + 0x20) == 0) {
      lVar1 = param_3;
    }
    local_88 = param_3;
    do {
      local_70 = 0;
      local_78 = 0;
      local_80 = &local_58;
      local_68 = lVar2;
      local_60 = lVar1;
      (*DAT_14c99a518)(param_1,&local_80);
      lVar1 = lVar1 + 8;
      lVar2 = lVar2 + 0x10;
      uVar3 = uVar3 - 1;
      param_3 = local_88;
    } while (uVar3 != 0);
  }
  uVar3 = (ulonglong)*(uint *)(param_2 + 0xb8);
  if (uVar3 != 0) {
    FUN_146f59778(param_3 + 0x30,uVar3);
    local_58 = &PTR_FUN_149f897c8;
    local_50 = 0;
    lVar2 = param_2 + 0x50;
    if (*(longlong *)(param_2 + 0xb0) != 0) {
      lVar2 = *(longlong *)(param_2 + 0xb0);
    }
    lVar1 = *(longlong *)(param_3 + 0x50);
    if (*(longlong *)(param_3 + 0x50) == 0) {
      lVar1 = param_3 + 0x30;
    }
    do {
      local_70 = 0;
      local_78 = 0;
      local_80 = &local_58;
      local_68 = lVar2;
      local_60 = lVar1;
      (*DAT_14c99ab08)(param_1,&local_80);
      lVar1 = lVar1 + 8;
      lVar2 = lVar2 + 0x18;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f59730 FUN_146f59730 body=71 status=ok
// SIG undefined FUN_146f59730(void)

void FUN_146f59730(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f69916();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x28) = param_2;
      FUN_146f69b86();
      return;
    }
  }
  return;
}



// FUNCTION 146f59778 FUN_146f59778 body=71 status=ok
// SIG undefined FUN_146f59778(void)

void FUN_146f59778(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1456af342();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x28) = param_2;
      FUN_146f010de();
      return;
    }
  }
  return;
}



// FUNCTION 146f597c0 FUN_146f597c0 body=165 status=ok
// SIG undefined FUN_146f597c0(void)

undefined8 FUN_146f597c0(undefined8 param_1,void *param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 uVar5;
  void *pvVar6;
  void *pvVar7;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x48);
  if (((uVar1 == *(uint *)((longlong)param_3 + 0x48)) &&
      (uVar2 = *(uint *)((longlong)param_2 + 0xb8), uVar2 == *(uint *)((longlong)param_3 + 0xb8)))
     && (uVar4 = (ulonglong)*(uint *)((longlong)param_2 + 0xd8),
        *(uint *)((longlong)param_2 + 0xd8) == *(uint *)((longlong)param_3 + 0xd8))) {
    if ((ulonglong)uVar1 != 0) {
      pvVar7 = *(void **)((longlong)param_3 + 0x40);
      if (*(void **)((longlong)param_3 + 0x40) == (void *)0x0) {
        pvVar7 = param_3;
      }
      pvVar6 = *(void **)((longlong)param_2 + 0x40);
      if (*(void **)((longlong)param_2 + 0x40) == (void *)0x0) {
        pvVar6 = param_2;
      }
      iVar3 = memcmp(pvVar6,pvVar7,(ulonglong)uVar1 << 4);
      uVar4 = CONCAT44(extraout_var,iVar3);
      if (iVar3 != 0) goto LAB_146f5981b;
    }
    if ((ulonglong)uVar2 != 0) {
      pvVar7 = (void *)((longlong)param_3 + 0x50);
      if (*(void **)((longlong)param_3 + 0xb0) != (void *)0x0) {
        pvVar7 = *(void **)((longlong)param_3 + 0xb0);
      }
      pvVar6 = (void *)((longlong)param_2 + 0x50);
      if (*(void **)((longlong)param_2 + 0xb0) != (void *)0x0) {
        pvVar6 = *(void **)((longlong)param_2 + 0xb0);
      }
      iVar3 = memcmp(pvVar6,pvVar7,(ulonglong)uVar2 << 3);
      uVar4 = CONCAT44(extraout_var_00,iVar3);
      if (iVar3 != 0) goto LAB_146f5981b;
    }
    uVar5 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  else {
LAB_146f5981b:
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 146f59866 FUN_146f59866 body=64 status=ok
// SIG undefined FUN_146f59866(void)

void FUN_146f59866(undefined8 param_1,longlong param_2,longlong param_3)

{
  FUN_146f598a6(param_2,param_3);
  FUN_146f59932(param_2 + 0x50,param_3 + 0x50);
  FUN_146f599c8(param_2 + 0xc0,param_3 + 0xc0);
  return;
}



// FUNCTION 146f598a6 FUN_146f598a6 body=140 status=ok
// SIG undefined FUN_146f598a6(void)

void FUN_146f598a6(void *param_1,void *param_2)

{
  uint uVar1;
  void *_Dst;
  void *pvVar2;
  uint uVar3;
  ulonglong uVar4;
  
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  uVar1 = *(uint *)((longlong)param_2 + 0x48);
  uVar4 = (ulonglong)uVar1;
  uVar3 = 4;
  if (4 < uVar1) {
    uVar3 = uVar1;
  }
  FUN_146f6998c(param_1,0,uVar3);
  pvVar2 = *(void **)((longlong)param_2 + 0x40);
  if (*(void **)((longlong)param_2 + 0x40) == (void *)0x0) {
    pvVar2 = param_2;
  }
  _Dst = *(void **)((longlong)param_1 + 0x40);
  if (*(void **)((longlong)param_1 + 0x40) == (void *)0x0) {
    _Dst = param_1;
  }
  memcpy(_Dst,pvVar2,uVar4 * 0x10);
  if (uVar4 < 4) {
    pvVar2 = *(void **)((longlong)param_1 + 0x40);
    if (*(void **)((longlong)param_1 + 0x40) == (void *)0x0) {
      pvVar2 = param_1;
    }
    memset((void *)((longlong)pvVar2 + uVar4 * 0x10),0,uVar4 * -0x10 + 0x40);
  }
  *(uint *)((longlong)param_1 + 0x4c) = uVar3;
  *(uint *)((longlong)param_1 + 0x48) = uVar1;
  return;
}



// FUNCTION 146f59932 FUN_146f59932 body=150 status=ok
// SIG undefined FUN_146f59932(void)

void FUN_146f59932(void *param_1,void *param_2)

{
  uint uVar1;
  void *pvVar2;
  void *_Dst;
  uint uVar3;
  ulonglong uVar4;
  
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  uVar1 = *(uint *)((longlong)param_2 + 0x68);
  uVar4 = (ulonglong)uVar1;
  uVar3 = 4;
  if (4 < uVar1) {
    uVar3 = uVar1;
  }
  FUN_146f69a32(param_1,0,uVar3);
  pvVar2 = *(void **)((longlong)param_2 + 0x60);
  if (*(void **)((longlong)param_2 + 0x60) == (void *)0x0) {
    pvVar2 = param_2;
  }
  _Dst = *(void **)((longlong)param_1 + 0x60);
  if (*(void **)((longlong)param_1 + 0x60) == (void *)0x0) {
    _Dst = param_1;
  }
  memcpy(_Dst,pvVar2,uVar4 * 0x18);
  if (uVar4 < 4) {
    pvVar2 = *(void **)((longlong)param_1 + 0x60);
    if (*(void **)((longlong)param_1 + 0x60) == (void *)0x0) {
      pvVar2 = param_1;
    }
    memset((void *)((longlong)pvVar2 + uVar4 * 0x18),0,(ulonglong)((uVar3 - uVar1) * 0x18));
  }
  *(uint *)((longlong)param_1 + 0x6c) = uVar3;
  *(uint *)((longlong)param_1 + 0x68) = uVar1;
  return;
}



// FUNCTION 146f599c8 FUN_146f599c8 body=142 status=ok
// SIG undefined FUN_146f599c8(void)

void FUN_146f599c8(void *param_1,void *param_2)

{
  uint uVar1;
  void *pvVar2;
  void *_Dst;
  uint uVar3;
  ulonglong uVar4;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  uVar1 = *(uint *)((longlong)param_2 + 0x18);
  uVar4 = (ulonglong)uVar1;
  uVar3 = 4;
  if (4 < uVar1) {
    uVar3 = uVar1;
  }
  FUN_146f69ae0(param_1,0,uVar3);
  pvVar2 = *(void **)((longlong)param_2 + 0x10);
  if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
    pvVar2 = param_2;
  }
  _Dst = *(void **)((longlong)param_1 + 0x10);
  if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
    _Dst = param_1;
  }
  memcpy(_Dst,pvVar2,uVar4 * 4);
  if (uVar4 < 4) {
    pvVar2 = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      pvVar2 = param_1;
    }
    memset((void *)((longlong)pvVar2 + uVar4 * 4),0,uVar4 * -4 + 0x10);
  }
  *(uint *)((longlong)param_1 + 0x1c) = uVar3;
  *(uint *)((longlong)param_1 + 0x18) = uVar1;
  return;
}



// FUNCTION 146f59a56 FUN_146f59a56 body=278 status=ok
// SIG undefined FUN_146f59a56(void)

void FUN_146f59a56(undefined8 param_1,void *param_2)

{
  uint uVar1;
  
  if (*(void **)((longlong)param_2 + 0x40) != (void *)0x0) {
    uVar1 = 4;
    if (*(uint *)((longlong)param_2 + 0x48) < 4) {
      uVar1 = *(uint *)((longlong)param_2 + 0x48);
    }
    memmove(param_2,*(void **)((longlong)param_2 + 0x40),(ulonglong)(uVar1 << 4));
    if (*(longlong *)((longlong)param_2 + 0x40) != 0) {
      (**(code **)(*DAT_14c872d28 + 0x48))();
      *(undefined8 *)((longlong)param_2 + 0x40) = 0;
    }
  }
  *(undefined8 *)((longlong)param_2 + 0x48) = 0x400000000;
  if (*(void **)((longlong)param_2 + 0xb0) != (void *)0x0) {
    uVar1 = 4;
    if (*(uint *)((longlong)param_2 + 0xb8) < 4) {
      uVar1 = *(uint *)((longlong)param_2 + 0xb8);
    }
    memmove((void *)((longlong)param_2 + 0x50),*(void **)((longlong)param_2 + 0xb0),
            (ulonglong)(uVar1 * 0x18));
    if (*(longlong *)((longlong)param_2 + 0xb0) != 0) {
      (**(code **)(*DAT_14c872d28 + 0x48))();
      *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
    }
  }
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0x400000000;
  if (*(void **)((longlong)param_2 + 0xd0) != (void *)0x0) {
    uVar1 = 4;
    if (*(uint *)((longlong)param_2 + 0xd8) < 4) {
      uVar1 = *(uint *)((longlong)param_2 + 0xd8);
    }
    memmove((void *)((longlong)param_2 + 0xc0),*(void **)((longlong)param_2 + 0xd0),
            (ulonglong)(uVar1 << 2));
    if (*(longlong *)((longlong)param_2 + 0xd0) != 0) {
      (**(code **)(*DAT_14c872d28 + 0x48))();
      *(undefined8 *)((longlong)param_2 + 0xd0) = 0;
    }
  }
  *(undefined8 *)((longlong)param_2 + 0xd8) = 0x400000000;
  return;
}



// FUNCTION 146f59b6c FUN_146f59b6c body=129 status=ok
// SIG undefined FUN_146f59b6c(void)

void FUN_146f59b6c(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [38];
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_32 = 1;
  lVar1 = *(longlong *)(param_2 + 0x40);
  if (*(longlong *)(param_2 + 0x40) == 0) {
    lVar1 = param_2;
  }
  if ((longlong)*(int *)(param_2 + 0x48) != 0) {
    lVar2 = (longlong)*(int *)(param_2 + 0x48) << 4;
    do {
      FUN_146f3b77a(param_4,&local_32,lVar1,param_3);
      lVar1 = lVar1 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f59bee FUN_146f59bee body=23 status=ok
// SIG undefined FUN_146f59bee(void)

bool FUN_146f59bee(undefined8 param_1,longlong param_2)

{
  return *(uint *)(param_2 + 0xb8) < 0x81 && *(uint *)(param_2 + 0x48) < 0x81;
}



// FUNCTION 146f59ca6 FUN_146f59ca6 body=481 status=ok
// SIG undefined FUN_146f59ca6(void)

void FUN_146f59ca6(longlong *param_1,longlong param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  if ((int)param_1[3] == 0) {
    uVar10 = *(uint *)(param_1 + 2);
    uVar5 = (int)param_1[1] - uVar10;
    iVar3 = param_4 - uVar5;
    if (param_4 < uVar5 || iVar3 == 0) {
      lVar2 = *param_1;
      *(uint *)(param_1 + 2) = uVar10 + param_4;
      uVar6 = uVar10 & 0x1f;
      uVar5 = param_3;
      if (uVar6 != 0) {
        uVar4 = 0x20 - uVar6;
        if (param_4 <= 0x20 - uVar6) {
          uVar4 = param_4;
        }
        uVar5 = uVar4 + param_3;
        uVar7 = (uVar4 + param_3) - 1 >> 5;
        uVar8 = ~(-1 << ((byte)uVar4 & 0x1f));
        *(uint *)(lVar2 + (ulonglong)(uVar10 >> 5) * 4) =
             ~(uVar8 << (sbyte)uVar6) & *(uint *)((longlong)param_1 + 0x14) |
             (((param_3 >> 5) - uVar7 &
               *(int *)(param_2 + (ulonglong)uVar7 * 4) << (-(byte)param_3 & 0x1f) |
              *(uint *)(param_2 + (ulonglong)(param_3 >> 5) * 4) >> ((byte)param_3 & 0x1f)) & uVar8)
             << (sbyte)uVar6;
        uVar10 = uVar10 + uVar4;
        param_4 = param_4 - uVar4;
      }
      if (0x1f < param_4) {
        if ((uVar5 & 7) == 0) {
          memcpy((void *)(lVar2 + (ulonglong)(uVar10 >> 5) * 4),
                 (void *)((ulonglong)(uVar5 >> 3) + param_2),(ulonglong)(param_4 >> 3 & 0xfffffffc))
          ;
        }
        else {
          puVar1 = (uint *)(param_2 + (ulonglong)(uVar5 >> 5) * 4);
          lVar9 = 0;
          uVar6 = *puVar1;
          do {
            uVar4 = puVar1[lVar9 + 1];
            *(uint *)(lVar2 + (ulonglong)(uVar10 >> 5) * 4 + lVar9 * 4) =
                 uVar6 >> ((byte)uVar5 & 0x1f) | uVar4 << (-(byte)uVar5 & 0x1f);
            lVar9 = lVar9 + 1;
            uVar6 = uVar4;
          } while (param_4 >> 5 != (uint)lVar9);
        }
        uVar5 = uVar5 + (param_4 & 0xffffffe0);
        uVar10 = uVar10 + (param_4 & 0xffffffe0);
        param_4 = param_4 & 0x1f;
      }
      if (param_4 == 0) {
        if (uVar10 < ((int)param_1[1] + 0x1fU & 0xffffffe0)) {
          *(undefined4 *)((longlong)param_1 + 0x14) =
               *(undefined4 *)(lVar2 + (ulonglong)(uVar10 >> 5) * 4);
        }
      }
      else {
        uVar6 = (param_4 + uVar5) - 1 >> 5;
        uVar5 = (uVar5 >> 5) - uVar6 &
                *(int *)(param_2 + (ulonglong)uVar6 * 4) << (-(byte)uVar5 & 0x1f) |
                *(uint *)(param_2 + (ulonglong)(uVar5 >> 5) * 4) >> ((byte)uVar5 & 0x1f);
        *(uint *)((longlong)param_1 + 0x14) =
             ((*(uint *)(lVar2 + (ulonglong)(uVar10 >> 5) * 4) ^ uVar5) >> ((byte)param_4 & 0x1f))
             << ((byte)param_4 & 0x1f) ^ uVar5;
      }
    }
    else {
      *(int *)(param_1 + 3) = iVar3;
    }
  }
  return;
}



// FUNCTION 146f59e88 FUN_146f59e88 body=206 status=ok
// SIG undefined FUN_146f59e88(void)

void FUN_146f59e88(longlong param_1,ushort param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (param_2 + 7 >> 3) + 3;
  uVar3 = uVar2 & 0x7ffc;
  if (uVar3 == 0) {
    FUN_146f59a56(param_1,param_1);
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,*(undefined8 *)(param_1 + 0xe8));
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  else if (*(ushort *)(param_1 + 0xe0) < uVar3) {
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,*(undefined8 *)(param_1 + 0xe8));
    lVar1 = (**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,uVar3,4);
    *(undefined4 *)(lVar1 + -4 + (ulonglong)(uVar2 & 0xfffffffc)) = 0;
    *(short *)(param_1 + 0xe0) = (short)uVar3;
    *(ushort *)(param_1 + 0xe2) = param_2;
    *(longlong *)(param_1 + 0xe8) = lVar1;
  }
  else {
    *(ushort *)(param_1 + 0xe2) = param_2;
    *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + -4 + (ulonglong)(uVar2 & 0xfffffffc)) = 0;
  }
  return;
}



// FUNCTION 146f59f56 FUN_146f59f56 body=287 status=ok
// SIG undefined FUN_146f59f56(void)

void FUN_146f59f56(longlong *param_1,void *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (*(int *)((longlong)param_1 + 0x14) == 0) {
    uVar5 = *(uint *)((longlong)param_1 + 0xc);
    uVar6 = *(uint *)(param_1 + 1) - uVar5;
    iVar4 = param_3 - uVar6;
    if (param_3 < uVar6 || iVar4 == 0) {
      lVar3 = *param_1;
      uVar6 = uVar5 + param_3;
      *(uint *)((longlong)param_1 + 0xc) = uVar6;
      if (uVar6 < *(uint *)(param_1 + 1)) {
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar3 + (ulonglong)(uVar6 >> 5) * 4);
      }
      if (param_3 < 0x20) {
        uVar8 = 0;
      }
      else {
        if ((uVar5 & 7) == 0) {
          uVar8 = (ulonglong)(param_3 >> 5);
          memcpy(param_2,(void *)((ulonglong)(uVar5 >> 3) + lVar3),(ulonglong)((param_3 >> 5) * 4));
        }
        else {
          uVar8 = (ulonglong)(param_3 >> 5);
          puVar1 = (uint *)(lVar3 + (ulonglong)(uVar5 >> 5) * 4);
          uVar7 = 0;
          uVar6 = *puVar1;
          do {
            uVar2 = puVar1[uVar7 + 1];
            *(uint *)((longlong)param_2 + uVar7 * 4) =
                 uVar6 >> ((byte)uVar5 & 0x1f) | uVar2 << (-(byte)uVar5 & 0x1f);
            uVar7 = uVar7 + 1;
            uVar6 = uVar2;
          } while (uVar8 != uVar7);
        }
        uVar5 = uVar5 + (param_3 & 0xffffffe0);
        param_3 = param_3 & 0x1f;
      }
      if (param_3 != 0) {
        uVar6 = (param_3 + uVar5) - 1 >> 5;
        uVar5 = (uVar5 >> 5) - uVar6 &
                *(int *)(lVar3 + (ulonglong)uVar6 * 4) << (-(byte)uVar5 & 0x1f) |
                *(uint *)(lVar3 + (ulonglong)(uVar5 >> 5) * 4) >> ((byte)uVar5 & 0x1f);
        *(uint *)((longlong)param_2 + uVar8 * 4) =
             ((*(uint *)((longlong)param_2 + uVar8 * 4) ^ uVar5) >> ((byte)param_3 & 0x1f)) <<
             ((byte)param_3 & 0x1f) ^ uVar5;
      }
    }
    else {
      *(int *)((longlong)param_1 + 0x14) = iVar4;
    }
  }
  return;
}



// FUNCTION 146f5a076 FUN_146f5a076 body=707 status=ok
// SIG undefined FUN_146f5a076(void)

void FUN_146f5a076(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_1e8 [32];
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b0 [40];
  undefined1 local_188 [144];
  void *local_f8;
  ulonglong local_e8;
  undefined1 local_c0 [16];
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [32];
  longlong local_80;
  undefined8 local_78;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar7 = *param_2;
  plVar1 = (longlong *)(lVar7 + 0x10);
  lVar3 = FUN_1446ddbd2();
  if (((*(longlong *)(lVar7 + 0x10) != 0) && (cVar2 = FUN_144729dda(lVar7 + 0x18), cVar2 != '\0'))
     || (*(int *)(lVar7 + 0x28) == 0)) goto LAB_146f5a0ce;
  lVar4 = FUN_14007daa4(plVar1,0,0);
  if (lVar4 != 0) {
    lVar5 = *(longlong *)(lVar4 + 8);
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar8 = lVar5 != 0;
      if (lVar5 != lVar3 && bVar8) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar8 = lVar5 != 0;
          if (lVar5 == lVar3) break;
        } while (lVar5 != 0);
      }
      if (bVar8) {
LAB_146f5a332:
        *plVar1 = lVar4;
        goto LAB_146f5a0ce;
      }
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) goto LAB_146f5a332;
  }
  if (*plVar1 != 0) {
    *plVar1 = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
  }
LAB_146f5a0ce:
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x20);
  }
  plVar1 = (longlong *)*plVar1;
  lVar3 = param_2[4];
  local_80 = 0;
  local_78 = 0x400000000;
  local_50 = 0;
  local_48 = 0x400000000;
  local_b0 = (undefined1 *)0x0;
  local_a8 = 0x400000000;
  if (lVar7 != 0) {
    *(undefined1 **)(lVar7 + 0xe0) = local_a0;
    FUN_146f58fc2();
  }
  FUN_144a679e2(local_188,lVar7,0x2000);
  if ((*(longlong **)(param_1 + 0xf0) == (longlong *)0x0) ||
     (lVar4 = **(longlong **)(param_1 + 0xf0), lVar4 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 0x28) + 0x58);
  }
  local_1c8 = &DAT_149e3cc88;
  FUN_144b076fa(local_1b0,local_188,uVar6,local_c0);
  local_1c8 = (undefined1 *)0x0;
  (**(code **)(*plVar1 + 0xd8))(plVar1,local_188,lVar7,param_2[3]);
  uVar6 = DAT_14c999b78;
  if (local_e8 < 0x10000) {
    local_1c0 = local_c0;
    if (local_b0 != (undefined1 *)0x0) {
      local_1c0 = local_b0;
    }
    local_1b8 = (undefined4)local_a8;
    FUN_146f593aa(param_1,local_a0,&local_1c0,lVar3);
    FUN_146f59e88(lVar3,local_e8 & 0xffffffff);
    if (local_e8 != 0) {
      memcpy(*(void **)(lVar3 + 0xe8),local_f8,local_e8 + 7 >> 3);
    }
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar6;
    }
  }
  FUN_142a63f42(local_1b0);
  FUN_144a8b786(local_188);
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f5a33a FUN_146f5a33a body=583 status=ok
// SIG undefined FUN_146f5a33a(void)

void FUN_146f5a33a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined1 local_160 [192];
  undefined1 local_a0 [32];
  longlong local_80;
  undefined8 local_78;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = *param_2;
  plVar1 = (longlong *)(lVar2 + 0x10);
  lVar5 = FUN_1446ddbd2();
  if (((*(longlong *)(lVar2 + 0x10) != 0) && (cVar4 = FUN_144729dda(lVar2 + 0x18), cVar4 != '\0'))
     || (*(int *)(lVar2 + 0x28) == 0)) goto LAB_146f5a392;
  lVar7 = FUN_14007daa4(plVar1,0,0);
  if (lVar7 != 0) {
    lVar8 = *(longlong *)(lVar7 + 8);
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar9 = lVar8 != 0;
      if (lVar8 != lVar5 && bVar9) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar9 = lVar8 != 0;
          if (lVar8 == lVar5) break;
        } while (lVar8 != 0);
      }
      if (bVar9) {
LAB_146f5a57a:
        *plVar1 = lVar7;
        goto LAB_146f5a392;
      }
    }
    else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) goto LAB_146f5a57a;
  }
  if (*plVar1 != 0) {
    *plVar1 = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
  }
LAB_146f5a392:
  lVar2 = param_2[3];
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x20);
  }
  plVar1 = (longlong *)*plVar1;
  lVar7 = 0;
  local_80 = 0;
  local_78 = 0x400000000;
  local_50 = 0;
  local_48 = 0x400000000;
  FUN_146f595b4(param_1,lVar2,local_a0);
  plVar3 = *(longlong **)(param_1 + 0xf0);
  uVar6 = 0;
  if (plVar3 != (longlong *)0x0) {
    lVar7 = plVar3[2];
    if (*plVar3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(*plVar3 + 0x28) + 0x58);
    }
  }
  *(undefined1 **)(lVar5 + 0xe0) = local_a0;
  *(undefined8 *)(lVar5 + 0xe8) = uVar6;
  *(longlong *)(lVar5 + 0xf0) = lVar7;
  if (*(short *)(lVar2 + 0xe2) == 0) {
    if ((~plVar1[7] & 0x1000000200U) == 0) {
      memset((void *)param_2[4],0,(longlong)*(int *)((longlong)plVar1 + 0x34));
    }
    else {
      (**(code **)(*plVar1 + 0x140))(plVar1);
    }
  }
  else {
    FUN_1448fcc30(local_160,lVar5,*(undefined8 *)(lVar2 + 0xe8));
    local_168 = 0;
    (**(code **)(*plVar1 + 0xd8))(plVar1,local_160,lVar5,param_2[4]);
    FUN_144aa1b5a(local_160);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f5a582 FUN_146f5a582 body=310 status=ok
// SIG undefined FUN_146f5a582(void)

bool FUN_146f5a582(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  if ((char)param_2[5] == '\x01') {
    lVar3 = param_2[3];
    lVar7 = param_2[4];
    uVar2 = *(ushort *)(lVar3 + 0xe2);
    if ((uVar2 == *(ushort *)(lVar7 + 0xe2)) &&
       (cVar5 = FUN_146f597c0(param_1,lVar3,lVar7), cVar5 != '\0')) {
      if (uVar2 != 0) {
        iVar6 = memcmp(*(void **)(lVar3 + 0xe8),*(void **)(lVar7 + 0xe8),
                       (ulonglong)((uVar2 + 7 >> 3) + 3 & 0xfffffffc));
        return iVar6 == 0;
      }
      return true;
    }
    return false;
  }
  lVar3 = *param_2;
  plVar1 = (longlong *)(lVar3 + 0x10);
  lVar7 = FUN_1446ddbd2();
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (cVar5 = FUN_144729dda(lVar3 + 0x18), cVar5 != '\0'))
     || (*(int *)(lVar3 + 0x28) == 0)) goto LAB_146f5a64a;
  lVar8 = FUN_14007daa4(plVar1,0,0);
  if (lVar8 == 0) {
LAB_146f5a63e:
    if (*plVar1 != 0) {
      *plVar1 = 0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
    }
  }
  else {
    lVar9 = *(longlong *)(lVar8 + 8);
    if (*(ulonglong *)(lVar7 + 8) == 0) {
      bVar10 = lVar9 != 0;
      if (lVar9 != lVar7 && bVar10) {
        do {
          lVar9 = *(longlong *)(lVar9 + 0x30);
          bVar10 = lVar9 != 0;
          if (lVar9 == lVar7) break;
        } while (lVar9 != 0);
      }
      if (!bVar10) goto LAB_146f5a63e;
    }
    else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0) goto LAB_146f5a63e;
    *plVar1 = lVar8;
  }
LAB_146f5a64a:
                    /* WARNING: Could not recover jumptable at 0x000146f5a66b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(longlong *)*plVar1 + 200))((longlong *)*plVar1,param_2[3],param_2[4],0);
  return (bool)uVar4;
}



// FUNCTION 146f5a6b8 FUN_146f5a6b8 body=165 status=ok
// SIG undefined FUN_146f5a6b8(void)

void FUN_146f5a6b8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x18);
  lVar2 = *(longlong *)(param_2 + 0x20);
  FUN_146f598a6(lVar2,lVar1);
  FUN_146f59932(lVar2 + 0x50,lVar1 + 0x50);
  FUN_146f599c8(lVar2 + 0xc0,lVar1 + 0xc0);
  uVar3 = (*(ushort *)(lVar1 + 0xe2) + 7 >> 3) + 3 & 0xfffffffc;
  if (uVar3 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,(ulonglong)uVar3,4);
    memcpy(_Dst,*(void **)(lVar1 + 0xe8),(ulonglong)uVar3);
  }
  *(short *)(lVar2 + 0xe0) = (short)uVar3;
  *(undefined2 *)(lVar2 + 0xe2) = *(undefined2 *)(lVar1 + 0xe2);
  *(void **)(lVar2 + 0xe8) = _Dst;
  return;
}



// FUNCTION 146f5a75e FUN_146f5a75e body=64 status=ok
// SIG undefined FUN_146f5a75e(void)

void FUN_146f5a75e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x18);
  FUN_146f59a56(param_1,lVar1);
  (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,*(undefined8 *)(lVar1 + 0xe8));
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  return;
}



// FUNCTION 146f5a79e FUN_146f5a79e body=488 status=ok
// SIG undefined FUN_146f5a79e(void)

bool FUN_146f5a79e(longlong param_1,longlong param_2)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_2 + 8);
    lVar5 = FUN_1446ddbd2();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar8 = lVar6 != 0;
      if (lVar6 != lVar5 && bVar8) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar8 = lVar6 != 0;
          if (lVar6 == lVar5) break;
        } while (lVar6 != 0);
      }
    }
    else {
      bVar8 = (*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0;
    }
    lVar6 = 0;
    if (bVar8) {
      lVar6 = param_2;
    }
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1449651a4(&local_58,lVar6);
  lVar6 = FUN_1446ddbd2();
  if (local_58 == 0) {
    if ((int)uStack_40 != 0) goto LAB_146f5a82d;
  }
  else {
    cVar4 = FUN_144729dda(&uStack_50);
    lVar5 = local_58;
    lVar3 = local_58;
    if ((cVar4 != '\0') || ((int)uStack_40 == 0)) goto LAB_146f5a8f4;
LAB_146f5a82d:
    lVar5 = FUN_14007daa4(&local_58,0,0);
    if (lVar5 != 0) {
      lVar7 = *(longlong *)(lVar5 + 8);
      lVar3 = lVar5;
      if (*(ulonglong *)(lVar6 + 8) == 0) {
        bVar8 = lVar7 != 0;
        if (lVar7 != lVar6 && bVar8) {
          do {
            lVar7 = *(longlong *)(lVar7 + 0x30);
            bVar8 = lVar7 != 0;
            if (lVar7 == lVar6) break;
          } while (lVar7 != 0);
        }
        if (bVar8) goto LAB_146f5a8f4;
      }
      else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0) goto LAB_146f5a8f4;
    }
    if (local_58 != 0) {
      local_58 = 0;
      uStack_50 = 0;
    }
  }
  lVar5 = 0;
  lVar3 = local_58;
LAB_146f5a8f4:
  local_58 = lVar3;
  _Src = local_48;
  *(longlong *)(param_1 + 0x10) = lVar5;
  *(undefined8 *)(param_1 + 0x18) = uStack_50;
  ppvVar1 = (void **)(param_1 + 0x20);
  if (ppvVar1 != &local_48) {
    iVar2 = (int)uStack_40;
    lVar6 = (longlong)(int)uStack_40;
    *(int *)(param_1 + 0x28) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)(param_1 + 0x2c) == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      FUN_1401b309e(ppvVar1,uStack_40 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar6 << 3);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2 != 0;
}



// FUNCTION 146f5a988 FUN_146f5a988 body=138 status=ok
// SIG undefined FUN_146f5a988(void)

void FUN_146f5a988(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [38];
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  local_32 = 1;
  lVar2 = *(longlong *)(lVar3 + 0x40);
  if (*(longlong *)(lVar3 + 0x40) == 0) {
    lVar2 = lVar3;
  }
  if ((longlong)*(int *)(lVar3 + 0x48) != 0) {
    lVar3 = (longlong)*(int *)(lVar3 + 0x48) << 4;
    do {
      FUN_146f3b77a(uVar1,&local_32,lVar2,param_2 + 8);
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5aa14 FUN_146f5aa14 body=18 status=ok
// SIG undefined FUN_146f5aa14(void)

undefined8 * FUN_146f5aa14(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 146f5aa26 FUN_146f5aa26 body=1 status=ok
// SIG undefined FUN_146f5aa26(void)

void FUN_146f5aa26(void)

{
  return;
}



// FUNCTION 146f5aa28 FUN_146f5aa28 body=25 status=ok
// SIG undefined FUN_146f5aa28(void)

void FUN_146f5aa28(undefined8 *param_1,undefined4 *param_2,int param_3)

{
  *param_1 = param_2;
  *(int *)(param_1 + 1) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 2) = *param_2;
  }
  return;
}



// FUNCTION 146f5aa41 FUN_146f5aa41 body=99 status=ok
// SIG undefined FUN_146f5aa41(void)

void FUN_146f5aa41(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = 0x3f;
  if ((param_2 | 1) != 0) {
    for (; (param_2 | 1) >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar2 = ((uint)lVar1 ^ 0xffffffc0) + 0x48;
  uVar3 = uVar2 & 0x78;
  FUN_146f5435e(param_1,(uVar2 >> 3) - 1,3);
  if (0x20 < uVar3) {
    FUN_146f5435e(param_1,param_2 & 0xffffffff,0x20);
    uVar3 = uVar3 - 0x20;
    param_2 = param_2 >> 0x20;
  }
  FUN_146f5435e(param_1,param_2 & 0xffffffff,uVar3);
  return;
}



// FUNCTION 146f5aaa4 FUN_146f5aaa4 body=92 status=ok
// SIG undefined FUN_146f5aaa4(void)

ulonglong FUN_146f5aaa4(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar1 = FUN_146f546d2(param_1,3);
  if (iVar1 * 8 + 8U < 0x21) {
    uVar2 = FUN_146f546d2(param_1);
    uVar4 = (ulonglong)uVar2;
  }
  else {
    uVar2 = FUN_146f546d2(param_1,0x20);
    lVar3 = FUN_146f546d2(param_1,iVar1 * 8 + -0x18);
    uVar4 = lVar3 << 0x20 | (ulonglong)uVar2;
  }
  return uVar4;
}



// FUNCTION 146f5ab00 FUN_146f5ab00 body=78 status=ok
// SIG undefined FUN_146f5ab00(void)

void FUN_146f5ab00(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = (ulonglong)((int)param_2 >> 0x1f ^ param_2) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar3 = ((uint)lVar2 ^ 0xffffffc0) + 0x48;
  FUN_146f5435e(param_1,(uVar3 >> 3) - 1,2);
  FUN_146f5435e(param_1,param_2,uVar3 & 0x78);
  return;
}



// FUNCTION 146f5ab4e FUN_146f5ab4e body=61 status=ok
// SIG undefined FUN_146f5ab4e(void)

int FUN_146f5ab4e(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_146f546d2(param_1,2);
  uVar2 = FUN_146f546d2(param_1,iVar1 * 8 + 8);
  uVar3 = 0x80 << ((char)iVar1 * '\b' & 0x1fU);
  return (uVar2 ^ uVar3) - uVar3;
}



// FUNCTION 146f5ab8b FUN_146f5ab8b body=69 status=ok
// SIG undefined FUN_146f5ab8b(void)

void FUN_146f5ab8b(undefined8 param_1,ushort param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)param_2 + (uint)param_2 | 3;
  uVar2 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> uVar2 == 0; uVar2 = uVar2 - 1) {
    }
  }
  uVar2 = (uVar2 ^ 0xffffffe0) + 0x27;
  FUN_146f5435e(param_1,(uVar2 >> 3) - 1,1);
  FUN_146f5435e(param_1,param_2,uVar2 & 0x38);
  return;
}



// FUNCTION 146f5abd0 FUN_146f5abd0 body=38 status=ok
// SIG undefined FUN_146f5abd0(void)

void FUN_146f5abd0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f546d2(param_1,1);
  FUN_146f546d2(param_1,iVar1 * 8 + 8);
  return;
}



// FUNCTION 146f5abf6 FUN_146f5abf6 body=83 status=ok
// SIG undefined FUN_146f5abf6(void)

void FUN_146f5abf6(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x408);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x408) = param_2;
    if ((uint)(*(int *)(param_1 + 0x40c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f69c2c();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x408) = param_2;
      FUN_146f69d2a();
      return;
    }
  }
  return;
}



// FUNCTION 146f5ac4a FUN_146f5ac4a body=83 status=ok
// SIG undefined FUN_146f5ac4a(void)

void FUN_146f5ac4a(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x408);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x408) = param_2;
    if ((uint)(*(int *)(param_1 + 0x40c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f69db4();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x408) = param_2;
      FUN_146f69eb2();
      return;
    }
  }
  return;
}



// FUNCTION 146f5adbe FUN_146f5adbe body=288 status=ok
// SIG undefined FUN_146f5adbe(void)

void FUN_146f5adbe(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_1d8 [40];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158 [26];
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined4 local_3c;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_158[0] = 0;
  local_158[1] = 0;
  lVar1 = 0x18;
  do {
    *(undefined8 *)((longlong)local_158 + lVar1) = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0xd8);
  local_88 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_3c = 0xffffffff;
  local_38 = local_38 & 0xfc;
  local_170 = &local_168;
  local_168 = 0;
  uStack_160 = 0;
  local_180 = 0;
  local_178 = DAT_14c99ac58;
  local_188 = DAT_14c99acc0;
  local_80 = param_1;
  (*DAT_14c99ac68)(local_158,&local_188);
  local_1a8 = 0;
  local_1a0 = DAT_14c99ac58;
  local_198 = local_170;
  local_1b0 = DAT_14c99acc0;
  local_190 = param_2;
  (*DAT_14c99ac88)(local_158);
  if ((local_28 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5aedf FUN_146f5aedf body=491 status=ok
// SIG undefined FUN_146f5aedf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f5aedf(undefined8 param_1,double *param_2,double *param_3,float param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_188 [47];
  char local_159;
  undefined8 local_158 [26];
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_158[0] = 0;
  local_158[1] = 0;
  lVar5 = 0x18;
  do {
    *(undefined8 *)((longlong)local_158 + lVar5) = 0;
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0xd8);
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0xffffffff00000000;
  local_38 = local_38 & 0xfc;
  dVar13 = (double)param_4;
  dVar1 = (double)DAT_1499387d0;
  dVar2 = DAT_1499387d0._8_8_;
  auVar15._8_8_ = param_2[1] - param_3[1];
  auVar15._0_8_ = *param_2 - *param_3;
  auVar7._0_8_ = (param_2[2] - param_3[2]) / 360.0;
  auVar16 = divpd(auVar15,_DAT_1499387d0);
  auVar7._8_8_ = 0;
  auVar17 = roundpd(auVar16,auVar16,3);
  auVar16 = roundpd(auVar7,auVar7,3);
  auVar21._0_8_ = (param_2[2] - param_3[2]) - auVar16._0_8_ * dVar1;
  auVar21._8_8_ = 0.0 - auVar16._8_8_ * dVar2;
  dVar19 = (*param_2 - *param_3) - auVar17._0_8_ * dVar1;
  dVar20 = (param_2[1] - param_3[1]) - auVar17._8_8_ * dVar2;
  auVar18._0_8_ = dVar19 + dVar1;
  auVar18._8_8_ = dVar20 + dVar2;
  auVar14._0_8_ = dVar1 + auVar21._0_8_;
  auVar14._8_8_ = dVar2 + auVar21._8_8_;
  auVar8._8_8_ = -(ulonglong)(0.0 <= dVar20);
  auVar8._0_8_ = -(ulonglong)(0.0 <= dVar19);
  auVar17._8_8_ = dVar20;
  auVar17._0_8_ = dVar19;
  auVar17 = blendvpd(auVar18,auVar17,auVar8);
  auVar9._8_8_ = -(ulonglong)(0.0 <= auVar21._8_8_);
  auVar9._0_8_ = -(ulonglong)(0.0 <= auVar21._0_8_);
  auVar16 = blendvpd(auVar14,auVar21,auVar9);
  auVar22._0_8_ = auVar17._0_8_ + -360.0;
  auVar22._8_8_ = auVar17._8_8_ + -360.0;
  auVar10._8_8_ = -(ulonglong)(180.0 < auVar17._8_8_);
  auVar10._0_8_ = -(ulonglong)(180.0 < auVar17._0_8_);
  auVar7 = blendvpd(auVar17,auVar22,auVar10);
  auVar11._8_8_ = -(ulonglong)(180.0 < auVar16._8_8_);
  auVar11._0_8_ = -(ulonglong)(180.0 < auVar16._0_8_);
  auVar3._8_8_ = auVar16._8_8_ + -360.0;
  auVar3._0_8_ = auVar16._0_8_ + -360.0;
  auVar17 = blendvpd(auVar16,auVar3,auVar11);
  auVar16._8_8_ = -(ulonglong)(dVar13 < ABS(auVar7._8_8_));
  auVar16._0_8_ = -(ulonglong)(dVar13 < ABS(auVar7._0_8_));
  iVar4 = movmskpd(0,auVar16);
  auVar12._8_8_ = -(ulonglong)(dVar13 < ABS(auVar17._8_8_));
  auVar12._0_8_ = -(ulonglong)(dVar13 < ABS(auVar17._0_8_));
  uVar6 = movmskpd((int)param_1,auVar12);
  local_159 = (uVar6 & 0x3fffffff) != 0 || iVar4 != 0;
  local_78 = param_1;
  FUN_146f5435e(param_1,local_159,1);
  if (local_159 == '\0') {
    if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_188);
}



// FUNCTION 146f5b0e7 FUN_146f5b0e7 body=70 status=ok
// SIG undefined FUN_146f5b0e7(void)

void FUN_146f5b0e7(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_146f546d2(param_1,1);
  if ((uVar2 & 1) == 0) {
    param_2[2] = param_3[2];
    uVar1 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar1;
    return;
  }
  FUN_146f5adbe(param_1,param_2);
  return;
}



// FUNCTION 146f5b12d FUN_146f5b12d body=166 status=ok
// SIG undefined FUN_146f5b12d(void)

void FUN_146f5b12d(undefined8 param_1,longlong param_2,uint param_3,char param_4)

{
  if (param_4 == '\0') {
    for (; 0x3ff < param_3; param_3 = param_3 - 0x400) {
      FUN_142aa347d(param_1,param_2,0x400);
      param_2 = param_2 + 0x80;
    }
    if (param_3 != 0) {
      FUN_142aa347d(param_1,param_2,param_3);
      return;
    }
  }
  else {
    for (; 0x3ff < param_3; param_3 = param_3 - 0x400) {
      FUN_142aa374c(param_1,param_2,0x400);
      param_2 = param_2 + 0x80;
    }
    if (param_3 != 0) {
      FUN_142aa374c(param_1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 146f5b1d3 FUN_146f5b1d3 body=166 status=ok
// SIG undefined FUN_146f5b1d3(void)

void FUN_146f5b1d3(undefined8 param_1,longlong param_2,uint param_3,char param_4)

{
  if (param_4 == '\0') {
    for (; 0x3ff < param_3; param_3 = param_3 - 0x400) {
      FUN_142aa38db(param_1,param_2,0x400);
      param_2 = param_2 + 0x80;
    }
    if (param_3 != 0) {
      FUN_142aa38db(param_1,param_2,param_3);
      return;
    }
  }
  else {
    for (; 0x3ff < param_3; param_3 = param_3 - 0x400) {
      FUN_142aa3b1a(param_1,param_2,0x400);
      param_2 = param_2 + 0x80;
    }
    if (param_3 != 0) {
      FUN_142aa3b1a(param_1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 146f5b27a FUN_146f5b27a body=18 status=ok
// SIG undefined FUN_146f5b27a(void)

undefined8 * FUN_146f5b27a(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) & 0xf8;
  return param_1;
}



// FUNCTION 146f5b28c FUN_146f5b28c body=37 status=ok
// SIG undefined FUN_146f5b28c(void)

void FUN_146f5b28c(longlong *param_1)

{
  if ((*(uint *)(param_1 + 2) < ((int)param_1[1] + 0x1fU & 0xffffffe0)) &&
     ((*(uint *)((longlong)param_1 + 0x1c) & 4) == 0)) {
    *(undefined4 *)(*param_1 + (ulonglong)(*(uint *)(param_1 + 2) >> 5) * 4) =
         *(undefined4 *)((longlong)param_1 + 0x14);
  }
  return;
}



// FUNCTION 146f5b2b2 FUN_146f5b2b2 body=37 status=ok
// SIG undefined FUN_146f5b2b2(void)

void FUN_146f5b2b2(longlong *param_1)

{
  if ((*(uint *)(param_1 + 2) < ((int)param_1[1] + 0x1fU & 0xffffffe0)) &&
     ((*(uint *)((longlong)param_1 + 0x1c) & 4) == 0)) {
    *(undefined4 *)(*param_1 + (ulonglong)(*(uint *)(param_1 + 2) >> 5) * 4) =
         *(undefined4 *)((longlong)param_1 + 0x14);
  }
  return;
}



// FUNCTION 146f5b2d8 FUN_146f5b2d8 body=34 status=ok
// SIG undefined FUN_146f5b2d8(void)

void FUN_146f5b2d8(undefined8 *param_1,undefined4 *param_2,uint param_3)

{
  *param_1 = param_2;
  *(uint *)(param_1 + 1) = param_3 * 8;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if (3 < param_3) {
    *(undefined4 *)((longlong)param_1 + 0x14) = *param_2;
  }
  return;
}



// FUNCTION 146f5b2fa FUN_146f5b2fa body=95 status=ok
// SIG undefined FUN_146f5b2fa(void)

void FUN_146f5b2fa(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 + *(uint *)((longlong)param_1 + 0xc);
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 < uVar2 || CARRY4(param_2,*(uint *)((longlong)param_1 + 0xc))) {
    if (uVar2 < uVar1 + 1) {
      uVar2 = uVar1 + 1;
    }
    *(uint *)(param_1 + 3) = uVar2 - uVar1;
    return;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  uVar1 = uVar1 + 0x1f & 0xffffffe0;
  if (*(uint *)(param_1 + 2) < uVar1) {
    *(undefined4 *)(*param_1 + (ulonglong)(*(uint *)(param_1 + 2) >> 5) * 4) =
         *(undefined4 *)((longlong)param_1 + 0x14);
  }
  *(uint *)(param_1 + 2) = uVar2;
  if (uVar2 < uVar1) {
    *(undefined4 *)((longlong)param_1 + 0x14) =
         *(undefined4 *)(*param_1 + (ulonglong)(uVar2 >> 5) * 4);
  }
  return;
}



// FUNCTION 146f5b35a FUN_146f5b35a body=76 status=ok
// SIG undefined FUN_146f5b35a(void)

void FUN_146f5b35a(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[3];
  param_2[2] = param_1[2];
  param_2[3] = uVar3;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  iVar5 = *(int *)(param_1 + 2);
  *(int *)((longlong)param_2 + 0xc) = iVar5;
  *(uint *)((longlong)param_2 + 0x1c) = *(uint *)((longlong)param_2 + 0x1c) & 0xfffffffc | 2;
  *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) | 1;
  if (*(int *)(param_1 + 3) == 0) {
    uVar4 = *(int *)(param_1 + 1) - iVar5;
    if (param_3 < (uint)(*(int *)(param_1 + 1) - iVar5)) {
      uVar4 = param_3;
    }
    iVar5 = iVar5 + uVar4;
  }
  else {
    *(int *)(param_2 + 3) = *(int *)(param_1 + 3);
  }
  *(int *)(param_2 + 1) = iVar5;
  return;
}



// FUNCTION 146f5b3a6 FUN_146f5b3a6 body=155 status=ok
// SIG undefined FUN_146f5b3a6(void)

void FUN_146f5b3a6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((((int)param_1[2] == *(int *)((longlong)param_2 + 0xc)) && (*param_1 == *param_2)) &&
     (uVar1 = *(uint *)((longlong)param_2 + 0x1c),
     (~((uVar1 | *(uint *)((longlong)param_1 + 0x1c)) >> 2 | uVar1) &
      *(uint *)((longlong)param_1 + 0x1c) & 1) != 0)) {
    if ((int)param_2[3] == 0) {
      uVar2 = *(uint *)(param_2 + 2);
      if ((char)((uVar1 & 4) >> 2) == '\0' && uVar2 < ((int)param_2[1] + 0x1fU & 0xffffffe0)) {
        *(undefined4 *)(*param_2 + (ulonglong)(uVar2 >> 5) * 4) =
             *(undefined4 *)((longlong)param_2 + 0x14);
        uVar2 = *(uint *)(param_2 + 2);
      }
      *(uint *)(param_1 + 2) = uVar2;
      if (*(uint *)(param_2 + 2) < ((int)param_1[1] + 0x1fU & 0xffffffe0)) {
        *(undefined4 *)((longlong)param_1 + 0x14) =
             *(undefined4 *)(*param_1 + (ulonglong)(*(uint *)(param_2 + 2) >> 5) * 4);
      }
    }
    *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) & 0xfe;
    *(byte *)((longlong)param_2 + 0x1c) = *(byte *)((longlong)param_2 + 0x1c) | 4;
  }
  return;
}



// FUNCTION 146f5b442 FUN_146f5b442 body=59 status=ok
// SIG undefined FUN_146f5b442(void)

void FUN_146f5b442(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  
  if ((((int)param_1[2] == *(int *)((longlong)param_2 + 0xc)) && (*param_1 == *param_2)) &&
     (uVar1 = *(uint *)((longlong)param_1 + 0x1c),
     (~((*(uint *)((longlong)param_2 + 0x1c) | uVar1) >> 2 | *(uint *)((longlong)param_2 + 0x1c)) &
      uVar1 & 1) != 0)) {
    *(uint *)((longlong)param_1 + 0x1c) = uVar1 & 0xfffffffe;
    *(byte *)((longlong)param_2 + 0x1c) = *(byte *)((longlong)param_2 + 0x1c) | 4;
  }
  return;
}



// FUNCTION 146f5b47e FUN_146f5b47e body=14 status=ok
// SIG undefined FUN_146f5b47e(void)

void FUN_146f5b47e(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    *(undefined8 *)(param_1 + 8) = param_2;
  }
  return;
}



// FUNCTION 146f5b48c FUN_146f5b48c body=131 status=ok
// SIG undefined FUN_146f5b48c(void)

void FUN_146f5b48c(longlong param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)param_2[3] == *(char *)(*param_2 + 0x1b)) &&
     ((*(uint *)(*(longlong *)(param_1 + 0xf0) + 0x28) & 1) != 0)) {
    local_18 = param_2[2];
    local_28 = (undefined4)*param_2;
    uStack_24 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_20 = (undefined4)param_2[1];
    uStack_1c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_10 = *param_2 + 0x1c;
    FUN_146f69f3c(local_28,&local_28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_48);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_146f69f3c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_48);
}



// FUNCTION 146f5b546 FUN_146f5b546 body=99 status=ok
// SIG undefined FUN_146f5b546(void)

void FUN_146f5b546(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  
  uVar3 = DAT_14c99c018;
  lVar1 = *param_2;
  bVar5 = (byte)*(undefined4 *)(lVar1 + 0x18);
  bVar4 = *(char *)param_2[3] + bVar5;
  bVar2 = *(byte *)(lVar1 + 0x19);
  if (bVar4 < *(byte *)(lVar1 + 0x19)) {
    bVar2 = bVar4;
  }
  if (bVar2 < bVar5) {
    bVar2 = bVar5;
  }
  if (bVar2 == bVar4) {
    *(byte *)(param_2[4] + (longlong)*(int *)(lVar1 + 0x14)) = bVar4;
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar3;
    }
  }
  return;
}



// FUNCTION 146f5b626 FUN_146f5b626 body=389 status=ok
// SIG undefined FUN_146f5b626(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_146f5b626(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c99acfa == '\0') {
    if ((longlong)*(int *)(param_2 + 0x48) < 1) {
      uVar8 = 0;
      uVar10 = 0;
      uVar7 = 0;
    }
    else {
      uVar8 = 0xffffffffffffffff;
      lVar6 = 0;
      uVar9 = 0;
      do {
        uVar10 = *(ulonglong *)(*(longlong *)(param_2 + 0x40) + 8 + lVar6);
        if (uVar10 <= uVar8) {
          uVar8 = uVar10;
        }
        if (0xfe < uVar10) {
          uVar10 = 0xff;
        }
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        lVar6 = lVar6 + 0x10;
        uVar9 = uVar10;
      } while ((longlong)*(int *)(param_2 + 0x48) * 0x10 != lVar6);
      uVar9 = (ulonglong)(((uint)uVar10 & 0xff) - ((uint)uVar8 & 0xff)) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar7 = (undefined1)lVar6;
    }
    FUN_140056680(local_58,L"ROLE_AutonomousProxy");
    uVar4 = FUN_14689a7b0(param_2,local_58,2);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(local_58,L"ROLE_SimulatedProxy");
    uVar5 = FUN_14689a7b0(param_2,local_58,2);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    _DAT_14c99acf8 = CONCAT13(uVar4,CONCAT12(uVar7,CONCAT11((char)uVar10,(char)uVar8)));
    _DAT_14c99acfc = CONCAT31(DAT_14c99acfc_1,uVar5);
    DAT_14c99ad00 = param_2;
  }
  *(undefined4 *)(param_1 + 8) = DAT_14c99ace8;
  uVar3 = _DAT_14c99acfc;
  uVar2 = _DAT_14c99acf8;
  uVar1 = uRam000000014c99acf4;
  *(undefined4 *)(param_1 + 0x10) = _DAT_14c99acf0;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  lVar6 = DAT_14c99ad00;
  *(longlong *)(param_1 + 0x20) = DAT_14c99ad00;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5b7ac FUN_146f5b7ac body=45 status=ok
// SIG undefined FUN_146f5b7ac(void)

undefined8 FUN_146f5b7ac(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0xd8) == 0) ||
      (uVar1 = 1, *(int *)(*(longlong *)(param_1 + 0xd8) + 0x14) == 0)) &&
     ((*(longlong *)(param_1 + 0xe0) == 0 ||
      (uVar1 = 1, *(int *)(*(longlong *)(param_1 + 0xe0) + 0x18) == 0)))) {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 146f5b7da FUN_146f5b7da body=96 status=ok
// SIG undefined FUN_146f5b7da(void)

void FUN_146f5b7da(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  if (((param_1[1] == 0) && ((lVar3 = param_1[0x1b], lVar3 == 0 || (*(int *)(lVar3 + 0x14) == 0))))
     && ((param_1[0x1c] == 0 || (*(int *)(param_1[0x1c] + 0x18) == 0)))) {
    uVar4 = *param_1;
    uVar1 = *(undefined4 *)(lVar3 + 0xc);
    uVar2 = *(uint *)(param_1 + 0x1a);
    uVar5 = (ulonglong)(uVar2 & 7);
    param_1[uVar5 * 3 + 2] = param_2;
    param_1[uVar5 * 3 + 3] = uVar4;
    *(undefined4 *)(param_1 + uVar5 * 3 + 4) = uVar1;
    *(uint *)(param_1 + 0x1a) = uVar2 + 1;
  }
  return;
}



// FUNCTION 146f5b83a FUN_146f5b83a body=99 status=ok
// SIG undefined FUN_146f5b83a(void)

void FUN_146f5b83a(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  if (((param_1[1] == 0) && ((lVar3 = param_1[0x1b], lVar3 == 0 || (*(int *)(lVar3 + 0x14) == 0))))
     && ((param_1[0x1c] == 0 || (*(int *)(param_1[0x1c] + 0x18) == 0)))) {
    uVar4 = *param_1;
    uVar1 = *(undefined4 *)(lVar3 + 0xc);
    uVar2 = *(uint *)(param_1 + 0x1a);
    uVar5 = (ulonglong)(uVar2 & 7);
    param_1[uVar5 * 3 + 2] = *param_2;
    param_1[uVar5 * 3 + 3] = uVar4;
    *(undefined4 *)(param_1 + uVar5 * 3 + 4) = uVar1;
    *(uint *)(param_1 + 0x1a) = uVar2 + 1;
  }
  return;
}



// FUNCTION 146f5b89e FUN_146f5b89e body=80 status=ok
// SIG undefined FUN_146f5b89e(void)

void FUN_146f5b89e(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xd8);
  if ((puVar1 != (undefined8 *)0x0) && (*(int *)((longlong)puVar1 + 0x14) == 0)) {
    if (*(int *)(puVar1 + 1) == -1) {
      *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)*puVar1;
    }
    else {
      *(undefined4 *)((longlong)puVar1 + 0x14) = 1;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0xe0);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x18) == 0)) {
    FUN_146f5b2fa(lVar2,*(int *)(lVar2 + 8) + 1);
    return;
  }
  return;
}



// FUNCTION 146f5b8ee FUN_146f5b8ee body=17 status=ok
// SIG undefined FUN_146f5b8ee(void)

void FUN_146f5b8ee(void)

{
                    /* WARNING: Could not recover jumptable at 0x000146f5b8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c872d28 + 0x38))();
  return;
}



// FUNCTION 146f5b900 FUN_146f5b900 body=54 status=ok
// SIG undefined FUN_146f5b900(void)

void FUN_146f5b900(longlong *param_1)

{
  (**(code **)(*param_1 + 8))();
  FUN_1411316ac();
  if (param_1[1] != 0) {
    FUN_14480f766(&DAT_14c99a488);
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 146f5b936 FUN_146f5b936 body=54 status=ok
// SIG undefined FUN_146f5b936(void)

void FUN_146f5b936(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_141131722();
  if (param_1[2] != 0) {
    FUN_14480f766(&DAT_14c99a4a8);
  }
  param_1[2] = 0;
  return;
}



// FUNCTION 146f5b979 FUN_146f5b979 body=126 status=ok
// SIG undefined FUN_146f5b979(void)

ulonglong FUN_146f5b979(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  if (param_2 == 0) {
    uVar2 = FUN_146f5435e(uVar1,0,1);
    return uVar2 & 0xffffffffffffff00;
  }
  FUN_146f5435e(uVar1,1,1);
  uVar2 = FUN_146f5aa41(uVar1,param_2 & 0xfffffffffffffff);
  return uVar2;
}



// FUNCTION 146f5b9f7 FUN_146f5b9f7 body=77 status=ok
// SIG undefined FUN_146f5b9f7(void)

undefined8 * FUN_146f5b9f7(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_2 + 0xd8);
  uVar2 = FUN_146f546d2(lVar1,1);
  if (((uVar2 & 1) != 0) && (uVar3 = FUN_146f5aaa4(lVar1), *(int *)(lVar1 + 0x14) == 0)) {
    FUN_146f28ec4(param_1,uVar3);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 146f5ba44 FUN_146f5ba44 body=22 status=ok
// SIG undefined FUN_146f5ba44(void)

void FUN_146f5ba44(longlong param_1,undefined8 param_2)

{
  FUN_142a84138(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 8),param_1,param_2);
  return;
}



// FUNCTION 146f5ba5a FUN_146f5ba5a body=80 status=ok
// SIG undefined FUN_146f5ba5a(void)

void FUN_146f5ba5a(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_142a84392(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 8),param_1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5bade FUN_146f5bade body=202 status=ok
// SIG undefined FUN_146f5bade(void)

void FUN_146f5bade(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)param_2[4];
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 8);
  if (lVar2 != 0) {
    local_30 = 0;
    FUN_142a836ac(lVar2,param_2[3],*(longlong *)(param_1 + 0xf0) + 0x10,&local_30);
    lVar2 = local_30;
    if (local_30 != 0) {
      lVar4 = FUN_144718840(local_30,*(undefined8 *)(*param_2 + 0x10));
      uVar3 = DAT_14c99c018;
      if (lVar4 == 0) {
        FUN_146f5b89e(param_1);
        if (*(longlong *)(param_1 + 8) == 0) {
          *(undefined8 *)(param_1 + 8) = uVar3;
        }
      }
      else {
        if (DAT_14c950c29 == '\x01') {
          FUN_14689c22e(lVar2);
        }
        *plVar1 = lVar2;
        plVar1[1] = lVar4;
      }
      goto LAB_146f5bb6c;
    }
  }
  *plVar1 = 0;
  plVar1[1] = 0;
LAB_146f5bb6c:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5bbaa FUN_146f5bbaa body=55 status=ok
// SIG undefined FUN_146f5bbaa(void)

undefined8 FUN_146f5bbaa(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)param_2[3];
  if (lVar2 == 0) {
LAB_146f5bbd9:
    uVar3 = 1;
  }
  else {
    lVar1 = ((longlong *)param_2[3])[1];
    if (lVar1 != 0) {
      lVar2 = FUN_144718840(lVar2,*(undefined8 *)(*param_2 + 0x10));
      if (lVar1 == lVar2) goto LAB_146f5bbd9;
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 146f5bc46 FUN_146f5bc46 body=125 status=ok
// SIG undefined FUN_146f5bc46(void)

void FUN_146f5bc46(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar5 = **(ulonglong **)(param_2 + 0x18);
  uVar4 = (longlong)uVar5 >> 0x3f ^ uVar5;
  uVar3 = 0x40;
  if (uVar4 != 0) {
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar3 = (uint)lVar2 ^ 0x3f;
  }
  uVar6 = 0x48 - uVar3 & 0xfffffff8;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  FUN_146f5435e(uVar1,(0x48 - uVar3 >> 3) - 1,3);
  if (0x20 < uVar6) {
    FUN_146f5435e(uVar1,uVar5 & 0xffffffff,0x20);
    uVar6 = uVar6 - 0x20;
    uVar5 = uVar5 >> 0x20;
  }
  FUN_146f5435e(uVar1,uVar5 & 0xffffffff,uVar6);
  return;
}



// FUNCTION 146f5bcc4 FUN_146f5bcc4 body=133 status=ok
// SIG undefined FUN_146f5bcc4(void)

void FUN_146f5bcc4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  iVar2 = FUN_146f546d2(uVar1,3);
  if (iVar2 * 8 + 8U < 0x21) {
    uVar3 = FUN_146f546d2(uVar1);
    uVar5 = (ulonglong)uVar3;
  }
  else {
    uVar3 = FUN_146f546d2(uVar1,0x20);
    lVar4 = FUN_146f546d2(uVar1,iVar2 * 8 + -0x18);
    uVar5 = lVar4 << 0x20 | (ulonglong)uVar3;
  }
  bVar6 = (byte)(iVar2 * 8);
  **(longlong **)(param_2 + 0x18) =
       (uVar5 ^ 1L << ((ulonglong)(bVar6 | 7) & 0x3f)) - (1L << (bVar6 & 0x3f | 7));
  return;
}



// FUNCTION 146f5bd4a FUN_146f5bd4a body=56 status=ok
// SIG undefined FUN_146f5bd4a(void)

void FUN_146f5bd4a(longlong param_1,longlong param_2)

{
  FUN_142aa28e2(*(undefined8 *)(param_1 + 0xe0),**(undefined8 **)(param_2 + 0x18),
                **(undefined8 **)(param_2 + 0x20),&DAT_149f9f2d8,3,0x40);
  return;
}



// FUNCTION 146f5bd82 FUN_146f5bd82 body=56 status=ok
// SIG undefined FUN_146f5bd82(void)

void FUN_146f5bd82(longlong param_1,longlong param_2)

{
  FUN_146f55c32(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_2 + 0x18),
                **(undefined8 **)(param_2 + 0x20),&DAT_149f9f2d8,3,0x40);
  return;
}



// FUNCTION 146f5bdba FUN_146f5bdba body=110 status=ok
// SIG undefined FUN_146f5bdba(void)

void FUN_146f5bdba(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = **(ulonglong **)(param_2 + 0x18);
  lVar2 = 0x3f;
  if ((uVar3 | 1) != 0) {
    for (; (uVar3 | 1) >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar4 = ((uint)lVar2 ^ 0xffffffc0) + 0x48;
  uVar5 = uVar4 & 0x78;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  FUN_146f5435e(uVar1,(uVar4 >> 3) - 1,3);
  if (0x20 < uVar5) {
    FUN_146f5435e(uVar1,uVar3 & 0xffffffff,0x20);
    uVar5 = uVar5 - 0x20;
    uVar3 = uVar3 >> 0x20;
  }
  FUN_146f5435e(uVar1,uVar3 & 0xffffffff,uVar5);
  return;
}



// FUNCTION 146f5be28 FUN_146f5be28 body=114 status=ok
// SIG undefined FUN_146f5be28(void)

void FUN_146f5be28(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  iVar2 = FUN_146f546d2(uVar1,3);
  if (iVar2 * 8 + 8U < 0x21) {
    uVar3 = FUN_146f546d2(uVar1);
    uVar5 = (ulonglong)uVar3;
  }
  else {
    uVar3 = FUN_146f546d2(uVar1,0x20);
    lVar4 = FUN_146f546d2(uVar1,iVar2 * 8 + -0x18);
    uVar5 = lVar4 << 0x20 | (ulonglong)uVar3;
  }
  **(ulonglong **)(param_2 + 0x18) = uVar5;
  return;
}



// FUNCTION 146f5be9a FUN_146f5be9a body=56 status=ok
// SIG undefined FUN_146f5be9a(void)

void FUN_146f5be9a(longlong param_1,longlong param_2)

{
  FUN_142aa28e2(*(undefined8 *)(param_1 + 0xe0),**(undefined8 **)(param_2 + 0x18),
                **(undefined8 **)(param_2 + 0x20),&DAT_149f9f2d8,3,0x40);
  return;
}



// FUNCTION 146f5bed2 FUN_146f5bed2 body=56 status=ok
// SIG undefined FUN_146f5bed2(void)

void FUN_146f5bed2(longlong param_1,longlong param_2)

{
  FUN_146f55d4b(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_2 + 0x18),
                **(undefined8 **)(param_2 + 0x20),&DAT_149f9f2d8,3,0x40);
  return;
}



// FUNCTION 146f5bf0a FUN_146f5bf0a body=89 status=ok
// SIG undefined FUN_146f5bf0a(void)

void FUN_146f5bf0a(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar2 = **(uint **)(param_2 + 0x18);
  uVar1 = (ulonglong)((int)uVar2 >> 0x1f ^ uVar2) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  uVar5 = ((uint)lVar4 ^ 0xffffffc0) + 0x48;
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  FUN_146f5435e(uVar3,(uVar5 >> 3) - 1,2);
  FUN_146f5435e(uVar3,uVar2,uVar5 & 0x78);
  return;
}



// FUNCTION 146f5bf64 FUN_146f5bf64 body=79 status=ok
// SIG undefined FUN_146f5bf64(void)

void FUN_146f5bf64(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  iVar2 = FUN_146f546d2(uVar1,2);
  uVar3 = FUN_146f546d2(uVar1,iVar2 * 8 + 8);
  uVar4 = 0x80 << ((char)iVar2 * '\b' & 0x1fU);
  **(int **)(param_2 + 0x18) = (uVar3 ^ uVar4) - uVar4;
  return;
}



// FUNCTION 146f5bfb4 FUN_146f5bfb4 body=55 status=ok
// SIG undefined FUN_146f5bfb4(void)

void FUN_146f5bfb4(longlong param_1,longlong param_2)

{
  FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),**(undefined4 **)(param_2 + 0x18),
                **(undefined4 **)(param_2 + 0x20),&DAT_149f9f2db,3,0x20);
  return;
}



// FUNCTION 146f5bfec FUN_146f5bfec body=56 status=ok
// SIG undefined FUN_146f5bfec(void)

void FUN_146f5bfec(longlong param_1,longlong param_2)

{
  FUN_146f55b0f(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_2 + 0x18),
                **(undefined4 **)(param_2 + 0x20),&DAT_149f9f2db,3,0x20);
  return;
}



// FUNCTION 146f5c024 FUN_146f5c024 body=84 status=ok
// SIG undefined FUN_146f5c024(void)

void FUN_146f5c024(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar1 = **(uint **)(param_2 + 0x18);
  uVar4 = (ulonglong)uVar1 * 2 | 2;
  lVar3 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar5 = ((uint)lVar3 ^ 0xffffffc0) + 0x47;
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  FUN_146f5435e(uVar2,(uVar5 >> 3) - 1,2);
  FUN_146f5435e(uVar2,(ulonglong)uVar1,uVar5 & 0x78);
  return;
}



// FUNCTION 146f5c078 FUN_146f5c078 body=57 status=ok
// SIG undefined FUN_146f5c078(void)

void FUN_146f5c078(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  iVar2 = FUN_146f546d2(uVar1,2);
  uVar3 = FUN_146f546d2(uVar1,iVar2 * 8 + 8);
  **(undefined4 **)(param_2 + 0x18) = uVar3;
  return;
}



// FUNCTION 146f5c0b2 FUN_146f5c0b2 body=55 status=ok
// SIG undefined FUN_146f5c0b2(void)

void FUN_146f5c0b2(longlong param_1,longlong param_2)

{
  FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),**(undefined4 **)(param_2 + 0x18),
                **(undefined4 **)(param_2 + 0x20),&DAT_149f9f2db,3,0x20);
  return;
}



// FUNCTION 146f5c0ea FUN_146f5c0ea body=56 status=ok
// SIG undefined FUN_146f5c0ea(void)

void FUN_146f5c0ea(longlong param_1,longlong param_2)

{
  FUN_146f55bae(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_2 + 0x18),
                **(undefined4 **)(param_2 + 0x20),&DAT_149f9f2db,3,0x20);
  return;
}



// FUNCTION 146f5c438 FUN_146f5c438 body=987 status=ok
// SIG undefined FUN_146f5c438(void)

void FUN_146f5c438(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte bVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = *(longlong **)(param_2 + 0x18);
  plVar2 = *(longlong **)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  uVar10 = *(uint *)(plVar1 + 3) & 0x40;
  if (uVar10 == (*(uint *)(plVar2 + 3) & 0x40)) {
    uVar8 = *(uint *)(plVar2 + 3) & 0x3f;
    uVar7 = *(uint *)(plVar1 + 3) & 0x3f;
    if ((uVar7 == 0) || (uVar8 == 0)) {
      if (uVar7 == uVar8) {
        lVar13 = *plVar1;
        local_70 = plVar1[1];
        lVar4 = *plVar2;
        lVar5 = plVar2[1];
        local_78 = plVar1[2];
        local_80 = plVar2[2];
        bVar16 = local_78 != local_80;
        bVar14 = (lVar13 != lVar4) + (local_70 != lVar5) * '\x02';
        FUN_146f5435e(uVar3,1,1);
        FUN_146f5435e(uVar3,bVar14 | bVar16 << 2,3);
        if (bVar16 || bVar14 != 0) {
          if (uVar10 == 0) {
            if (lVar13 != lVar4) {
              FUN_146f5435e(uVar3,(int)*plVar1,0x20);
            }
            if (local_70 != lVar5) {
              FUN_146f5435e(uVar3,(int)plVar1[1],0x20);
            }
            if (local_78 != local_80) {
LAB_146f5c712:
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
            }
          }
          else {
            if (lVar13 != lVar4) {
              FUN_146f5435e(uVar3,(int)*plVar1,0x20);
              FUN_146f5435e(uVar3,*(undefined4 *)((longlong)plVar1 + 4),0x20);
            }
            if (local_70 != lVar5) {
              FUN_146f5435e(uVar3,(int)plVar1[1],0x20);
              FUN_146f5435e(uVar3,*(undefined4 *)((longlong)plVar1 + 0xc),0x20);
            }
            if (local_78 != local_80) {
              FUN_146f5435e(uVar3,(int)plVar1[2],0x20);
              goto LAB_146f5c712;
            }
          }
        }
LAB_146f5c5cb:
        if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
    }
    else {
      local_68[0] = *plVar1 - *plVar2;
      local_78 = plVar1[1];
      local_80 = plVar2[1];
      local_68[1] = local_78 - local_80;
      local_68[2] = plVar1[2] - plVar2[2];
      uVar12 = (longlong)local_68[2] >> 0x3f ^ local_68[2];
      uVar8 = 0x40;
      uVar10 = 0x40;
      if (uVar12 != 0) {
        lVar13 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar10 = (uint)lVar13 ^ 0x3f;
      }
      uVar15 = (uint)(local_68[0] != 0);
      uVar12 = (longlong)local_68[1] >> 0x3f ^ local_68[1];
      if (uVar12 != 0) {
        lVar13 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar8 = (uint)lVar13 ^ 0x3f;
      }
      iVar11 = (local_68[1] != 0) + uVar15 + (uint)(local_68[2] != 0);
      uVar6 = 0x41 - uVar8;
      if (0x41 - uVar8 < 0x41 - uVar10) {
        uVar6 = 0x41 - uVar10;
      }
      uVar12 = (longlong)local_68[0] >> 0x3f ^ local_68[0];
      uVar10 = 0x40;
      if (uVar12 != 0) {
        lVar13 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar10 = (uint)lVar13 ^ 0x3f;
      }
      uVar8 = 0x41 - uVar10;
      if (0x41 - uVar10 < uVar6) {
        uVar8 = uVar6;
      }
      iVar9 = uVar8 * iVar11;
      uVar10 = iVar9 + 3;
      if (iVar11 != 0) {
        uVar10 = iVar9 + 9;
      }
      if (uVar10 < uVar7 * 3 + 7) {
        uVar10 = (uint)(plVar1[2] != plVar2[2]) * 4 + (uint)(local_78 != local_80) * 2;
        FUN_146f5435e(uVar3,1,1);
        FUN_146f5435e(uVar3,uVar10 | uVar15,3);
        uVar10 = uVar10 | uVar15;
        if (uVar10 != 0) {
          FUN_146f5435e(uVar3,uVar8,6);
          if (uVar8 < 0x21) {
            uVar7 = 1;
            lVar13 = 0;
            do {
              if ((uVar7 & uVar10) != 0) {
                FUN_146f5435e(uVar3,(int)local_68[lVar13],uVar8);
              }
              lVar13 = lVar13 + 1;
              uVar7 = uVar7 * 2;
            } while (lVar13 != 3);
          }
          else {
            uVar7 = 1;
            lVar13 = 0;
            do {
              if ((uVar7 & uVar10) != 0) {
                uVar12 = local_68[lVar13];
                FUN_146f5435e(uVar3,uVar12 & 0xffffffff,0x20);
                FUN_146f5435e(uVar3,uVar12 >> 0x20,uVar8 - 0x20);
              }
              lVar13 = lVar13 + 1;
              uVar7 = uVar7 * 2;
            } while (lVar13 != 3);
          }
        }
        goto LAB_146f5c5cb;
      }
    }
  }
  FUN_146f5435e(uVar3,0,1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 146f5c850 FUN_146f5c850 body=1063 status=ok
// SIG undefined FUN_146f5c850(void)

void FUN_146f5c850(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  iVar4 = FUN_146f546d2(uVar1,1);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
  }
  puVar2 = *(ulonglong **)(param_2 + 0x20);
  local_70 = *puVar2;
  uVar15 = puVar2[1];
  uVar12 = puVar2[2];
  uVar14 = (uint)puVar2[3];
  local_74 = *(undefined4 *)((longlong)puVar2 + 0x1c);
  uVar5 = FUN_146f546d2(uVar1,3);
  if ((uVar14 & 0x3f) == 0) {
    if ((puVar2[3] & 0x40) == 0) {
      if ((uVar5 & 1) != 0) {
        local_70 = FUN_146f546d2(uVar1,0x20);
      }
      if ((uVar5 & 2) != 0) {
        uVar6 = FUN_146f546d2(uVar1,0x20);
        uVar15 = (ulonglong)uVar6;
      }
      if ((uVar5 & 4) != 0) {
        uVar5 = FUN_146f546d2(uVar1,0x20);
        uVar12 = (ulonglong)uVar5;
      }
      uVar13 = local_70;
      local_60 = CONCAT44((int)uVar15,(int)local_70);
      local_58 = CONCAT44(local_58._4_4_,(int)uVar12);
      cVar3 = FUN_144afe7b6();
      if (cVar3 != '\0') {
LAB_146f5ca1b:
        uVar1 = DAT_14c99c018;
        FUN_146f5b89e(param_1);
        if (*(longlong *)(param_1 + 8) == 0) {
          *(undefined8 *)(param_1 + 8) = uVar1;
        }
        goto LAB_146f5c912;
      }
      uVar15 = uVar15 & 0xffffffff;
      uVar12 = uVar12 & 0xffffffff;
      uVar13 = uVar13 & 0xffffffff;
    }
    else {
      if ((uVar5 & 1) != 0) {
        uVar6 = FUN_146f546d2(uVar1,0x20);
        lVar10 = FUN_146f546d2(uVar1,0x20);
        local_70 = lVar10 << 0x20 | (ulonglong)uVar6;
      }
      if ((uVar5 & 2) != 0) {
        uVar7 = FUN_146f546d2(uVar1,0x20);
        uVar8 = FUN_146f546d2(uVar1,0x20);
        uVar15 = CONCAT44(uVar8,uVar7);
      }
      if ((uVar5 & 4) != 0) {
        uVar7 = FUN_146f546d2(uVar1,0x20);
        uVar8 = FUN_146f546d2(uVar1,0x20);
        uVar12 = CONCAT44(uVar8,uVar7);
      }
      uVar13 = local_70;
      local_60 = local_70;
      local_58 = uVar15;
      local_50 = uVar12;
      cVar3 = FUN_144afe924();
      if (cVar3 != '\0') goto LAB_146f5ca1b;
    }
  }
  else {
    uVar13 = local_70;
    if (uVar5 == 0) goto LAB_146f5c8fb;
    uVar6 = FUN_146f546d2(uVar1,6);
    uVar13 = 1L << ((char)uVar6 - 1U & 0x3f);
    if (uVar6 < 0x21) {
      if ((uVar5 & 1) != 0) {
        uVar9 = FUN_146f546d2(uVar1,uVar6);
        local_70 = (local_70 - uVar13) + (uVar9 ^ uVar13);
      }
      if ((uVar5 & 2) != 0) {
        uVar9 = FUN_146f546d2(uVar1,uVar6);
        uVar15 = (uVar15 - uVar13) + (uVar9 ^ uVar13);
      }
      if ((uVar5 & 4) != 0) {
        uVar5 = FUN_146f546d2(uVar1,uVar6);
        uVar11 = (ulonglong)uVar5;
LAB_146f5cc85:
        uVar12 = (uVar12 - uVar13) + (uVar11 ^ uVar13);
      }
    }
    else {
      iVar4 = uVar6 - 0x20;
      if ((uVar5 & 1) != 0) {
        uVar6 = FUN_146f546d2(uVar1,0x20);
        local_68 = uVar13;
        lVar10 = FUN_146f546d2(uVar1,iVar4);
        local_70 = (local_70 - local_68) + ((lVar10 << 0x20 | (ulonglong)uVar6) ^ local_68);
        uVar13 = local_68;
      }
      if ((uVar5 & 2) != 0) {
        uVar6 = FUN_146f546d2(uVar1,0x20);
        local_68 = uVar13;
        lVar10 = FUN_146f546d2(uVar1,iVar4);
        uVar15 = (uVar15 - local_68) + ((lVar10 << 0x20 | (ulonglong)uVar6) ^ local_68);
        uVar13 = local_68;
      }
      if ((uVar5 & 4) != 0) {
        uVar5 = FUN_146f546d2(uVar1,0x20);
        lVar10 = FUN_146f546d2(uVar1,iVar4);
        uVar11 = lVar10 << 0x20 | (ulonglong)uVar5;
        goto LAB_146f5cc85;
      }
    }
    uVar13 = (longlong)uVar12 >> 0x3f ^ uVar12;
    uVar5 = 0x40;
    uVar6 = 0x40;
    if (uVar13 != 0) {
      lVar10 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar6 = (uint)lVar10 ^ 0x3f;
    }
    uVar13 = (longlong)uVar15 >> 0x3f ^ uVar15;
    if (uVar13 != 0) {
      lVar10 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar5 = (uint)lVar10 ^ 0x3f;
    }
    uVar9 = 0x41 - uVar5;
    if (0x41 - uVar5 < 0x41 - uVar6) {
      uVar9 = 0x41 - uVar6;
    }
    uVar13 = (longlong)local_70 >> 0x3f ^ local_70;
    if (uVar13 == 0) {
      uVar5 = 0x40;
    }
    else {
      lVar10 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar5 = (uint)lVar10 ^ 0x3f;
    }
    uVar6 = 0x41 - uVar5;
    if (0x41 - uVar5 < uVar9) {
      uVar6 = uVar9;
    }
    uVar14 = uVar14 & 0x40 | uVar6;
    uVar13 = local_70;
  }
LAB_146f5c8fb:
  puVar2 = *(ulonglong **)(param_2 + 0x18);
  *puVar2 = uVar13;
  puVar2[1] = uVar15;
  puVar2[2] = uVar12;
  *(uint *)(puVar2 + 3) = uVar14;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = local_74;
LAB_146f5c912:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f5cc94 FUN_146f5cc94 body=648 status=ok
// SIG undefined FUN_146f5cc94(void)

void FUN_146f5cc94(byte param_1,longlong param_2)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  uint uVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  double dVar10;
  ulonglong uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  pdVar1 = *(double **)(param_2 + 0x18);
  pdVar2 = *(double **)(param_2 + 0x20);
  cVar6 = FUN_144afe924(pdVar1);
  if (cVar6 == '\0') {
    dVar13 = (double)(1L << (param_1 & 0x3f));
    dVar8 = *pdVar1;
    dVar10 = pdVar1[1];
    dVar7 = pdVar1[2];
    dVar4 = ABS(dVar13 * dVar7);
    dVar15 = ABS(dVar10 * dVar13);
    dVar14 = ABS(dVar8 * dVar13);
    if (dVar14 <= dVar15) {
      dVar14 = dVar15;
    }
    if (dVar14 <= dVar4) {
      dVar14 = dVar4;
    }
    if (4.611686018427388e+18 <= dVar14) {
      *pdVar2 = dVar8;
      pdVar2[1] = dVar10;
      pdVar2[2] = dVar7;
      uVar9 = 0x40;
    }
    else {
      dVar4 = ABS(dVar8);
      if (ABS(dVar10) <= ABS(dVar8)) {
        dVar4 = ABS(dVar10);
      }
      if (ABS(dVar7) <= dVar4) {
        dVar4 = ABS(dVar7);
      }
      dVar14 = dVar13 * dVar7;
      dVar15 = dVar10 * dVar13;
      dVar13 = dVar8 * dVar13;
      if (4503599627370496.0 <= dVar4) {
        dVar14 = dVar7;
        dVar15 = dVar10;
        dVar13 = dVar8;
      }
      dVar8 = (double)(longlong)
                      ((double)(-(ulonglong)(0.0 < dVar14) & 0x3ff0000000000000 |
                               ~-(ulonglong)(0.0 < dVar14) &
                               -(ulonglong)(dVar14 < 0.0) & 0xbff0000000000000) * 0.5 + dVar14);
      dVar10 = (double)(longlong)
                       ((double)(-(ulonglong)(0.0 < dVar15) & 0x3ff0000000000000 |
                                (ulonglong)
                                (~(uint)(-(ulonglong)(0.0 < dVar15) >> 0x20) &
                                (uint)(-(ulonglong)(dVar15 < 0.0) >> 0x20) & 0xbff00000) << 0x20) *
                        0.5 + dVar15);
      uVar11 = (longlong)dVar8 >> 0x3f ^ (ulonglong)dVar8;
      uVar12 = 0x40;
      uVar9 = 0x40;
      if (uVar11 != 0) {
        lVar3 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        uVar9 = (uint)lVar3 ^ 0x3f;
      }
      dVar7 = (double)(longlong)
                      ((double)(-(ulonglong)(0.0 < dVar13) & 0x3ff0000000000000 |
                               (ulonglong)
                               (~(uint)(-(ulonglong)(0.0 < dVar13) >> 0x20) &
                               (uint)(-(ulonglong)(dVar13 < 0.0) >> 0x20) & 0xbff00000) << 0x20) *
                       0.5 + dVar13);
      uVar11 = (longlong)dVar10 >> 0x3f ^ (ulonglong)dVar10;
      if (uVar11 != 0) {
        lVar3 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        uVar12 = (uint)lVar3 ^ 0x3f;
      }
      uVar5 = 0x41 - uVar12;
      if (0x41 - uVar12 < 0x41 - uVar9) {
        uVar5 = 0x41 - uVar9;
      }
      uVar11 = (longlong)dVar7 >> 0x3f ^ (ulonglong)dVar7;
      if (uVar11 == 0) {
        uVar12 = 0x40;
      }
      else {
        lVar3 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        uVar12 = (uint)lVar3 ^ 0x3f;
      }
      uVar9 = 0x41 - uVar12;
      if (0x41 - uVar12 < uVar5) {
        uVar9 = uVar5;
      }
      uVar9 = uVar9 | (uint)(dVar4 < 4503599627370496.0) << 6;
      *pdVar2 = dVar7;
      pdVar2[1] = dVar10;
      pdVar2[2] = dVar8;
    }
  }
  else {
    *pdVar2 = 0.0;
    pdVar2[1] = 0.0;
    pdVar2[2] = 0.0;
    uVar9 = 0x41;
  }
  *(uint *)(pdVar2 + 3) = uVar9;
  *(undefined4 *)((longlong)pdVar2 + 0x1c) = 0;
  return;
}



// FUNCTION 146f5cf9c FUN_146f5cf9c body=265 status=ok
// SIG undefined FUN_146f5cf9c(void)

bool FUN_146f5cf9c(ulonglong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_2 + 5) == '\x01') {
    plVar1 = (longlong *)param_2[3];
    local_48 = *plVar1;
    lStack_40 = plVar1[1];
    local_38 = plVar1[2];
    lStack_30 = plVar1[3];
    puVar2 = (undefined4 *)param_2[4];
    local_68 = *puVar2;
    uStack_64 = puVar2[1];
    uStack_60 = puVar2[2];
    uStack_5c = puVar2[3];
    local_58 = *(longlong *)(puVar2 + 4);
    uStack_50 = *(undefined8 *)(puVar2 + 6);
  }
  else {
    local_80 = 0;
    local_88 = 0;
    local_90 = *param_2;
    local_78 = param_2[3];
    local_70 = &local_48;
    FUN_146f5cc94(param_1,&local_90);
    local_78 = param_2[4];
    local_70 = (longlong *)&local_68;
    FUN_146f5cc94(param_1 & 0xffffffff,&local_90);
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return (int)lStack_30 == (int)uStack_50 &&
           (local_38 == local_58 &&
           (lStack_40 == CONCAT44(uStack_5c,uStack_60) && local_48 == CONCAT44(uStack_64,local_68)))
    ;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5d0a6 FUN_146f5d0a6 body=20 status=ok
// SIG undefined FUN_146f5d0a6(void)

byte FUN_146f5d0a6(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = FUN_144afe924(*(undefined8 *)(param_2 + 0x18));
  return bVar1 ^ 1;
}



// FUNCTION 146f5d104 FUN_146f5d104 body=127 status=ok
// SIG undefined FUN_146f5d104(void)

void FUN_146f5d104(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uVar3 = FUN_146f546d2(uVar1,0x10);
  uVar4 = FUN_146f546d2(uVar1,0x10);
  uVar5 = FUN_146f546d2(uVar1,0x10);
  piVar2 = *(int **)(param_2 + 0x18);
  *piVar2 = (uVar3 ^ 0x8000) - 0x8000;
  piVar2[1] = (uVar4 ^ 0x8000) - 0x8000;
  piVar2[2] = (uVar5 ^ 0x8000) - 0x8000;
  piVar2[3] = 0;
  return;
}



// FUNCTION 146f5d184 FUN_146f5d184 body=260 status=ok
// SIG undefined FUN_146f5d184(void)

void FUN_146f5d184(undefined8 param_1,longlong param_2)

{
  double *pdVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pdVar1 = *(double **)(param_2 + 0x18);
  piVar2 = *(int **)(param_2 + 0x20);
  fVar3 = (float)*pdVar1;
  fVar4 = (float)pdVar1[1];
  fVar5 = (float)pdVar1[2];
  *piVar2 = (int)((float)(-(uint)(0.0 < fVar3) & 0x3f800000 |
                         ~-(uint)(0.0 < fVar3) & -(uint)(fVar3 < 0.0) & 0xbf800000) * 0.5 +
                 fVar3 * 32767.0);
  piVar2[1] = (int)((float)(-(uint)(0.0 < fVar4) & 0x3f800000 |
                           ~-(uint)(0.0 < fVar4) & -(uint)(fVar4 < 0.0) & 0xbf800000) * 0.5 +
                   fVar4 * 32767.0);
  piVar2[2] = (int)((float)(-(uint)(0.0 < fVar5) & 0x3f800000 |
                           ~-(uint)(0.0 < fVar5) & -(uint)(fVar5 < 0.0) & 0xbf800000) * 0.5 +
                   fVar5 * 32767.0);
  piVar2[3] = 0;
  return;
}



// FUNCTION 146f5d2d0 FUN_146f5d2d0 body=484 status=ok
// SIG undefined FUN_146f5d2d0(void)

undefined8 FUN_146f5d2d0(undefined8 param_1,longlong param_2)

{
  double *pdVar1;
  undefined8 uVar2;
  double *pdVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  pdVar1 = *(double **)(param_2 + 0x18);
  pdVar3 = *(double **)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    uVar4 = *(uint *)((longlong)pdVar1 + 0xc) ^ *(uint *)((longlong)pdVar3 + 0xc) |
            *(uint *)(pdVar1 + 1) ^ *(uint *)(pdVar3 + 1) |
            *(uint *)((longlong)pdVar1 + 4) ^ *(uint *)((longlong)pdVar3 + 4) |
            *(uint *)pdVar1 ^ *(uint *)pdVar3;
LAB_146f5d311:
    uVar2 = CONCAT71((int7)((ulonglong)pdVar3 >> 8),uVar4 == 0);
  }
  else {
    fVar5 = (float)*pdVar1;
    fVar6 = (float)*pdVar3;
    if ((int)((float)(-(uint)(0.0 < fVar5) & 0x3f800000 |
                     ~-(uint)(0.0 < fVar5) & -(uint)(fVar5 < 0.0) & 0xbf800000) * 0.5 +
             fVar5 * 32767.0) ==
        (int)((float)(-(uint)(0.0 < fVar6) & 0x3f800000 |
                     ~-(uint)(0.0 < fVar6) & -(uint)(fVar6 < 0.0) & 0xbf800000) * 0.5 +
             fVar6 * 32767.0)) {
      fVar5 = (float)pdVar1[1];
      fVar6 = (float)pdVar3[1];
      if ((int)((float)(-(uint)(0.0 < fVar5) & 0x3f800000 |
                       ~-(uint)(0.0 < fVar5) & -(uint)(fVar5 < 0.0) & 0xbf800000) * 0.5 +
               fVar5 * 32767.0) ==
          (int)((float)(-(uint)(0.0 < fVar6) & 0x3f800000 |
                       ~-(uint)(0.0 < fVar6) & -(uint)(fVar6 < 0.0) & 0xbf800000) * 0.5 +
               fVar6 * 32767.0)) {
        fVar5 = (float)pdVar1[2];
        fVar6 = (float)pdVar3[2];
        uVar4 = (uint)((float)(-(uint)(0.0 < fVar6) & 0x3f800000 |
                              ~-(uint)(0.0 < fVar6) & -(uint)(fVar6 < 0.0) & 0xbf800000) * 0.5 +
                      fVar6 * 32767.0);
        pdVar3 = (double *)(ulonglong)uVar4;
        uVar4 = (int)((float)(-(uint)(0.0 < fVar5) & 0x3f800000 |
                             ~-(uint)(0.0 < fVar5) & -(uint)(fVar5 < 0.0) & 0xbf800000) * 0.5 +
                     fVar5 * 32767.0) - uVar4;
        goto LAB_146f5d311;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 146f5d4b4 FUN_146f5d4b4 body=136 status=ok
// SIG undefined FUN_146f5d4b4(void)

byte FUN_146f5d4b4(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double *pdVar2;
  char cVar3;
  byte bVar4;
  double dVar5;
  
  pdVar2 = *(double **)(param_2 + 0x18);
  cVar3 = FUN_144afe924(pdVar2);
  if (cVar3 == '\0') {
    dVar1 = *pdVar2;
    dVar5 = dVar1;
    if (1.0 <= dVar1) {
      dVar5 = 1.0;
    }
    if (dVar5 <= -1.0) {
      dVar5 = -1.0;
    }
    bVar4 = 0;
    if ((dVar5 == dVar1) && (!NAN(dVar5) && !NAN(dVar1))) {
      dVar1 = pdVar2[1];
      dVar5 = dVar1;
      if (1.0 <= dVar1) {
        dVar5 = 1.0;
      }
      if (dVar5 <= -1.0) {
        dVar5 = -1.0;
      }
      if ((dVar5 == dVar1) && (bVar4 = 0, !NAN(dVar5) && !NAN(dVar1))) {
        dVar1 = pdVar2[2];
        dVar5 = dVar1;
        if (1.0 <= dVar1) {
          dVar5 = 1.0;
        }
        if (dVar5 <= -1.0) {
          dVar5 = -1.0;
        }
        bVar4 = -(dVar5 == dVar1) & 1;
      }
    }
  }
  else {
    bVar4 = 0;
  }
  return bVar4;
}



// FUNCTION 146f5d53c FUN_146f5d53c body=80 status=ok
// SIG undefined FUN_146f5d53c(void)

longlong * FUN_146f5d53c(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_145a37fb9(*param_1,(int)param_1[1]);
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



// FUNCTION 146f5d58c FUN_146f5d58c body=17 status=ok
// SIG undefined FUN_146f5d58c(void)

void FUN_146f5d58c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000146f5d59a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c872d28 + 0x48))();
  return;
}



// FUNCTION 146f5d59e thunk_FUN_146f3b614 body=5 status=ok
// SIG undefined thunk_FUN_146f3b614(void)

void thunk_FUN_146f3b614(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                        longlong *param_5)

{
  ushort uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint *puVar5;
  ushort uVar6;
  uint *puVar7;
  undefined1 auStack_a8 [32];
  longlong lStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  
  uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((ulonglong)*(ushort *)((longlong)param_5 + 0x82) != 0) {
    puVar7 = (uint *)param_5[6];
    puVar5 = puVar7 + (ulonglong)*(ushort *)((longlong)param_5 + 0x82) * 3;
    do {
      if ((char)puVar7[1] == '\0') {
        plVar3 = (longlong *)((ulonglong)*(ushort *)((longlong)puVar7 + 6) * 0x10 + param_5[2]);
        lVar4 = (ulonglong)*(ushort *)((longlong)puVar7 + 6) * 8 + *param_5;
        lStack_70 = param_4;
        for (uVar6 = (ushort)puVar7[2]; uVar6 != 0xffff;
            uVar6 = *(ushort *)(plVar2[6] + 8 + (ulonglong)uVar6 * 0xc)) {
          plVar2 = *(longlong **)(plVar3[1] + 0x10);
          lStack_70 = lStack_70 + (ulonglong)*(uint *)(lVar4 + 4);
          uVar1 = *(ushort *)(plVar2[6] + 6 + (ulonglong)uVar6 * 0xc);
          plVar3 = (longlong *)((ulonglong)uVar1 * 0x10 + plVar2[2]);
          lVar4 = (ulonglong)uVar1 * 8 + *plVar2;
        }
        lStack_70 = (ulonglong)*(uint *)(lVar4 + 4) + lStack_70;
        lStack_88 = plVar3[1];
        uStack_80 = *param_3;
        uStack_78 = 0;
        uStack_68 = param_2;
        (**(code **)(*plVar3 + 0x58))(param_1,&lStack_88);
      }
      else {
        FUN_146f3b77a(param_2,puVar7 + 1,(ulonglong)*puVar7 + param_4,param_3);
      }
      puVar7 = puVar7 + 3;
    } while (puVar7 != puVar5);
  }
  if ((uStack_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f5d5a4 thunk_FUN_146f3b282 body=5 status=ok
// SIG undefined thunk_FUN_146f3b282(void)

void thunk_FUN_146f3b282(undefined8 param_1,void *param_2,void *param_3,longlong param_4)

{
  memcpy(param_2,param_3,(ulonglong)*(uint *)(param_4 + 0x74));
  if ((*(byte *)(param_4 + 0xb8) & 0x40) == 0) {
    return;
  }
  FUN_146f3b482(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f5d668 FUN_146f5d668 body=512 status=ok
// SIG undefined FUN_146f5d668(void)

void FUN_146f5d668(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong *local_80;
  undefined8 *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = param_2[3];
  puVar3 = (undefined8 *)param_2[4];
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  lVar5 = FUN_14479d2ce(lVar2);
  if (lVar5 == 0) {
    if (*(longlong *)(lVar2 + 8) != 0) {
      lVar5 = FUN_140007850();
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar5 == 0) || (cVar4 == '\0')) {
        FUN_14485c47a(lVar2,lVar5);
        if (lVar5 == 0) goto LAB_146f5d80a;
      }
      else {
        uVar1 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(lVar2,lVar5);
        }
      }
      if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_146f5d6c6;
    }
  }
  else {
LAB_146f5d6c6:
    local_70 = lVar5;
    cVar4 = FUN_14008df0e(lVar5);
    if (cVar4 == '\0') {
      if (*(char *)(puVar3 + 4) == '\0') {
        (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,puVar3[1]);
        *puVar3 = 0;
        puVar3[1] = 0;
      }
      local_48 = CONCAT71(local_48._1_7_,1);
      uStack_90 = *(undefined4 *)(param_2 + 1);
      uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_88 = param_2[2];
      local_98 = DAT_14c99b620;
      local_80 = &local_70;
      local_78 = &local_58;
      (*DAT_14c99a510)(param_1);
      goto LAB_146f5d740;
    }
  }
LAB_146f5d80a:
  local_48 = local_48 & 0xffffffffffffff00;
  FUN_14475cc44(lVar2 + 8,local_a8);
  local_88 = param_2[2];
  local_98 = *param_2;
  uStack_90 = *(undefined4 *)(param_2 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_80 = (longlong *)0x0;
  local_78 = &local_68;
  FUN_146f5d890(param_1,&local_98,local_a8);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
LAB_146f5d740:
  puVar3[4] = local_48;
  *(undefined4 *)(puVar3 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar3 + 0x14) = local_58._4_4_;
  *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_50._4_4_;
  *(undefined4 *)puVar3 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
  *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f5d86a FUN_146f5d86a body=38 status=ok
// SIG undefined FUN_146f5d86a(void)

void FUN_146f5d86a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,puVar1[1]);
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}



// FUNCTION 146f5d890 FUN_146f5d890 body=317 status=ok
// SIG undefined FUN_146f5d890(void)

void FUN_146f5d890(longlong param_1,longlong param_2,longlong *param_3)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  short *psVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_3[1] == 0) {
    psVar7 = &DAT_149dfb77a;
  }
  else {
    psVar7 = (short *)*param_3;
  }
  puVar3 = *(uint **)(param_2 + 0x20);
  do {
    sVar1 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (0xff80 < (ushort)(sVar1 - 0x80U));
  *puVar3 = *puVar3 & 0xfffffffe | (uint)(sVar1 != 0);
  uVar6 = DAT_14c999b78;
  uVar2 = *(uint *)(param_3 + 1);
  if (sVar1 == 0) {
    uVar11 = uVar2 - 1;
    if (uVar2 == 0) {
      uVar11 = 0;
    }
    if (uVar11 < 0xffff) {
      iVar8 = uVar11 + 1;
      if (uVar2 < 2) {
        iVar8 = 0;
      }
      FUN_146f5f9ac(puVar3,iVar8);
      if (1 < uVar2) {
        lVar4 = *param_3;
        lVar5 = *(longlong *)(puVar3 + 2);
        lVar9 = 0;
        do {
          *(undefined1 *)(lVar5 + lVar9) = *(undefined1 *)(lVar4 + lVar9 * 2);
          lVar9 = lVar9 + 1;
        } while ((ulonglong)uVar11 + 1 != lVar9);
      }
      goto LAB_146f5d9ab;
    }
  }
  else if (uVar2 < 0x5556) {
    iVar10 = uVar2 + (uVar2 == 0);
    iVar8 = iVar10 * 3;
    FUN_146f5f9ac(puVar3,iVar8);
    local_48 = &local_34;
    local_34 = 0;
    FUN_146f5f722(*(undefined8 *)(puVar3 + 2),iVar8,*param_3,iVar10);
    *(undefined2 *)((longlong)puVar3 + 6) = (undefined2)local_34;
    goto LAB_146f5d9ab;
  }
  FUN_146f5b89e(param_1);
  if (*(longlong *)(param_1 + 8) == 0) {
    *(undefined8 *)(param_1 + 8) = uVar6;
  }
LAB_146f5d9ab:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f5d9ce FUN_146f5d9ce body=515 status=ok
// SIG undefined FUN_146f5d9ce(void)

void FUN_146f5d9ce(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  longlong *local_80;
  longlong local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (*(char *)(*(longlong *)(param_2 + 6) + 0x20) == '\x01') {
    local_58 = &local_50;
    local_50 = 0;
    iStack_70 = param_2[2];
    uStack_6c = param_2[3];
    local_68 = *(undefined8 *)(param_2 + 4);
    local_78 = DAT_14c99b620;
    local_60 = *(longlong *)(param_2 + 6) + 0x10;
    (*DAT_14c99a518)(*param_2,&local_78);
    lVar4 = local_50;
    if (local_50 == 0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      if (*(int *)((longlong)puVar2 + 0x24) < 0) {
        FUN_1446f8c06(puVar2 + 3,0);
      }
      puVar3 = (undefined2 *)puVar2[3];
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
      }
    }
    else {
      FUN_1400bbfae(&local_48,local_50);
      *(undefined4 *)(puVar2 + 1) = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar2 + 0xc) = local_48._4_4_;
      *(int *)(puVar2 + 2) = (int)uStack_40;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_40._4_4_;
      if (puVar2 + 1 == &local_48) {
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (puVar2[3] != 0) {
          FUN_1400020a8();
        }
        puVar2[3] = local_38;
        local_38 = 0;
        *(undefined4 *)(puVar2 + 4) = local_30;
        *(undefined4 *)((longlong)puVar2 + 0x24) = local_2c;
      }
      cVar5 = (*(code *)PTR_FUN_14c758760)();
      if (cVar5 != '\0') {
        uVar1 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
          *puVar2 = 0;
          goto LAB_146f5db35;
        }
      }
      FUN_14485c47a(puVar2,lVar4);
    }
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    FUN_146f5dbd2();
    *puVar2 = 0;
    local_78 = local_48;
    iStack_70 = (int)uStack_40 + -1;
    if ((int)uStack_40 == 0) {
      iStack_70 = 0;
    }
    FUN_14475bf92(puVar2 + 1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
LAB_146f5db35:
  local_80 = &local_78;
  local_88 = &DAT_1468b2d92;
  FUN_14171bf7e(puVar2 + 1);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5dbd2 FUN_146f5dbd2 body=506 status=ok
// SIG undefined FUN_146f5dbd2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_146f5dbd2(longlong param_1,longlong param_2,undefined8 ****param_3)

{
  ushort uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 ****ppppuVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_1088 [32];
  uint *local_1068;
  undefined8 **local_1058;
  undefined4 local_1050;
  undefined4 local_104c;
  uint local_1044;
  undefined8 ***local_1040;
  undefined4 local_1038;
  undefined4 local_1034;
  undefined8 ***local_40;
  uint local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1088;
  pbVar2 = *(byte **)(param_2 + 0x18);
  if ((*pbVar2 & 1) == 0) {
    iVar7 = *(ushort *)(pbVar2 + 6) - 1;
    if (*(ushort *)(pbVar2 + 6) == 0) {
      iVar7 = 0;
    }
    FUN_142746720(&local_1040,*(undefined8 *)(pbVar2 + 8),iVar7);
    if (&local_1040 != param_3) {
      if (*param_3 != (undefined8 ***)0x0) {
        FUN_1400020a8();
      }
      *param_3 = local_1040;
      *(undefined4 *)(param_3 + 1) = local_1038;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_1034;
      goto LAB_146f5dc51;
    }
  }
  else {
    uVar1 = *(ushort *)(pbVar2 + 6);
    uVar6 = (ulonglong)((uint)uVar1 * 4) / 3;
    local_40 = (undefined8 ****)0x0;
    local_34 = 0x800;
    local_38 = ((uint)uVar1 * 4) / 3;
    if (0x600 < uVar1) {
      FUN_146f6a23a(&local_1040);
      uVar6 = (ulonglong)local_38;
    }
    local_1068 = &local_1044;
    local_1044 = 0;
    ppppuVar5 = (undefined8 ****)local_40;
    if ((undefined8 ****)local_40 == (undefined8 ****)0x0) {
      ppppuVar5 = &local_1040;
    }
    cVar4 = FUN_146f5f84a(ppppuVar5,uVar6,*(undefined8 *)(pbVar2 + 8),uVar1);
    if (cVar4 == '\0') {
      FUN_144a7e010(param_3);
      uVar3 = DAT_14c99b8f0;
      FUN_146f5b89e(param_1);
      local_1040 = local_40;
      if (*(longlong *)(param_1 + 8) == 0) {
        *(undefined8 *)(param_1 + 8) = uVar3;
      }
    }
    else {
      if (local_1044 == 0) {
LAB_146f5dd40:
        uVar6 = (ulonglong)local_1044;
      }
      else {
        ppppuVar5 = (undefined8 ****)local_40;
        if ((undefined8 ****)local_40 == (undefined8 ****)0x0) {
          ppppuVar5 = &local_1040;
        }
        uVar6 = (ulonglong)(local_1044 - 1);
        if (*(short *)((longlong)ppppuVar5 + uVar6 * 2) != 0) goto LAB_146f5dd40;
      }
      ppppuVar5 = &local_1040;
      if ((undefined8 ****)local_40 != (undefined8 ****)0x0) {
        ppppuVar5 = (undefined8 ****)local_40;
      }
      FUN_14006620a(&local_1058,ppppuVar5,uVar6);
      if ((undefined8 ****)&local_1058 == param_3) {
        local_1040 = local_40;
        if ((undefined8 ***)local_1058 != (undefined8 ***)0x0) {
          FUN_1400020a8();
          local_1040 = local_40;
        }
      }
      else {
        if (*param_3 != (undefined8 ***)0x0) {
          FUN_1400020a8();
        }
        *param_3 = (undefined8 ***)local_1058;
        local_1058 = (undefined8 ***)0x0;
        *(undefined4 *)(param_3 + 1) = local_1050;
        *(undefined4 *)((longlong)param_3 + 0xc) = local_104c;
        local_1040 = local_40;
      }
    }
  }
  if ((undefined8 ****)local_1040 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
LAB_146f5dc51:
  if ((local_30 ^ (ulonglong)auStack_1088) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


