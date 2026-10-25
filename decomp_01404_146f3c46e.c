// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146f3c46e FUN_146f3c46e body=129 status=ok
// SIG undefined FUN_146f3c46e(void)

ulonglong FUN_146f3c46e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x10;
  if (0x10 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x18) < 0x4000) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x18,0);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 146f3c4f0 FUN_146f3c4f0 body=132 status=ok
// SIG undefined FUN_146f3c4f0(void)

void FUN_146f3c4f0(longlong param_1,int param_2)

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



// FUNCTION 146f3c576 FUN_146f3c576 body=62 status=ok
// SIG undefined FUN_146f3c576(void)

void FUN_146f3c576(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f3c5b4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146f3c5b4 FUN_146f3c5b4 body=93 status=ok
// SIG undefined FUN_146f3c5b4(void)

ulonglong FUN_146f3c5b4(uint param_1,uint param_2)

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



// FUNCTION 146f3c612 FUN_146f3c612 body=154 status=ok
// SIG undefined FUN_146f3c612(void)

void FUN_146f3c612(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar7 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar7 * 0x20;
        if (*(uint *)(*param_1 + (longlong)iVar7 * 0x20) == param_3) {
          if (((lVar1 + 4U & 0xfffffffffffffffb) != 0) && ((longlong)*(int *)(lVar1 + 8) != -1)) {
            lVar2 = param_1[10];
            lVar5 = (longlong)*(int *)(lVar1 + 8) * 0x30;
            lVar1 = *(longlong *)(lVar2 + 0x20 + lVar5);
            lVar6 = lVar2 + lVar5;
            if (lVar1 != 0) {
              lVar6 = lVar1;
            }
            *param_2 = lVar6;
            uVar3 = *(undefined4 *)(lVar2 + 0x28 + lVar5);
            goto LAB_146f3c626;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x18);
      } while (iVar7 != -1);
    }
  }
  *param_2 = 0;
  uVar3 = 0;
LAB_146f3c626:
  *(undefined4 *)(param_2 + 1) = uVar3;
  return;
}



// FUNCTION 146f3c6ac FUN_146f3c6ac body=130 status=ok
// SIG undefined FUN_146f3c6ac(void)

void FUN_146f3c6ac(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 3)) {
        uVar5 = uVar3 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x14) = (int)uVar5;
    FUN_146f3c730(param_1,param_2,uVar5,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f3c730 FUN_146f3c730 body=133 status=ok
// SIG undefined FUN_146f3c730(void)

void FUN_146f3c730(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f3c7b6 FUN_146f3c7b6 body=130 status=ok
// SIG undefined FUN_146f3c7b6(void)

void FUN_146f3c7b6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 2)) {
        uVar5 = uVar3 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x14) = (int)uVar5;
    FUN_144aa70c6(param_1,param_2,uVar5,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f3c83a FUN_146f3c83a body=97 status=ok
// SIG undefined FUN_146f3c83a(void)

void FUN_146f3c83a(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x10) = param_2;
    if ((uint)(*(int *)(param_1 + 0x14) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f3c7b6(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 4),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (param_2 < iVar1) {
    *(int *)(param_1 + 0x10) = param_2;
  }
  return;
}



// FUNCTION 146f3c89c FUN_146f3c89c body=125 status=ok
// SIG undefined FUN_146f3c89c(void)

void FUN_146f3c89c(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x20;
    if (0x20 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x40c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 5,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 5)) {
        uVar4 = uVar2 >> 5 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x40c) = (int)uVar4;
    FUN_146f3c91a(param_1,param_2,uVar4,0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f3c91a FUN_146f3c91a body=142 status=ok
// SIG undefined FUN_146f3c91a(void)

void FUN_146f3c91a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x400,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x400,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f3c9ce FUN_146f3c9ce body=29 status=ok
// SIG undefined FUN_146f3c9ce(void)

undefined8 FUN_146f3c9ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f3ca06 FUN_146f3ca06 body=29 status=ok
// SIG undefined FUN_146f3ca06(void)

bool FUN_146f3ca06(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146f3ca24 FUN_146f3ca24 body=26 status=ok
// SIG undefined FUN_146f3ca24(void)

bool FUN_146f3ca24(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146f3ca3e FUN_146f3ca3e body=24 status=ok
// SIG undefined FUN_146f3ca3e(void)

bool FUN_146f3ca3e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146f3ca56 FUN_146f3ca56 body=93 status=ok
// SIG undefined FUN_146f3ca56(void)

void FUN_146f3ca56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e41aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146f3cab4 FUN_146f3cab4 body=93 status=ok
// SIG undefined FUN_146f3cab4(void)

void FUN_146f3cab4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e41aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146f3cb12 FUN_146f3cb12 body=126 status=ok
// SIG undefined FUN_146f3cb12(void)

void FUN_146f3cb12(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e41aa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f9c250;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146f3cb81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146f3cb90 FUN_146f3cb90 body=38 status=ok
// SIG undefined FUN_146f3cb90(void)

void FUN_146f3cb90(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000146f3cbb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 146f3cbb6 FUN_146f3cbb6 body=147 status=ok
// SIG undefined FUN_146f3cbb6(void)

bool FUN_146f3cbb6(longlong param_1,undefined4 param_2)

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
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 146f3cc4a FUN_146f3cc4a body=132 status=ok
// SIG undefined FUN_146f3cc4a(void)

void FUN_146f3cc4a(longlong param_1,int param_2)

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



// FUNCTION 146f3ccd0 FUN_146f3ccd0 body=48 status=ok
// SIG undefined FUN_146f3ccd0(void)

void FUN_146f3ccd0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 146f3cd00 FUN_146f3cd00 body=322 status=ok
// SIG undefined FUN_146f3cd00(void)

undefined4 * FUN_146f3cd00(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  FUN_146f3ce44(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = ((uint)((ulonglong)*local_40 >> 0x20) & 0xfffffff) * 0x17 + (int)*local_40;
  cVar3 = FUN_146f3cf2a(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_146f3d03e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3ce44 FUN_146f3ce44 body=230 status=ok
// SIG undefined FUN_146f3ce44(void)

int * FUN_146f3ce44(longlong *param_1,int *param_2)

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



// FUNCTION 146f3cf2a FUN_146f3cf2a body=161 status=ok
// SIG undefined FUN_146f3cf2a(void)

undefined8 FUN_146f3cf2a(longlong *param_1,uint param_2,ulonglong *param_3,int *param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (((*puVar1 ^ *param_3) & 0xfffffffffffffff) == 0) {
          puVar2 = (undefined8 *)puVar1[1];
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          uVar5 = param_3[1];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)puVar1 = (int)*param_3;
          *(undefined4 *)((longlong)puVar1 + 4) = uVar3;
          *(int *)(puVar1 + 1) = (int)uVar5;
          *(undefined4 *)((longlong)puVar1 + 0xc) = uVar4;
          FUN_146f3cfcc(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = (int)puVar1[2];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f3cfcc FUN_146f3cfcc body=114 status=ok
// SIG undefined FUN_146f3cfcc(void)

void FUN_146f3cfcc(longlong *param_1,int param_2)

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



// FUNCTION 146f3d03e FUN_146f3d03e body=454 status=ok
// SIG undefined FUN_146f3d03e(void)

void FUN_146f3d03e(longlong *param_1)

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
        uVar10 = (longlong)(int)(((uint)((ulonglong)uVar4 >> 0x20) & 0xfffffff) * 0x17 + (int)uVar4)
                 & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 146f3d206 FUN_146f3d206 body=116 status=ok
// SIG undefined FUN_146f3d206(void)

void FUN_146f3d206(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(((uint)(uVar2 >> 0x20) & 0xfffffff) * 0x17 + (int)uVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (((*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) ^ uVar2) & 0xfffffffffffffff) == 0)
        {
          FUN_146f3d27a();
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146f3d27a FUN_146f3d27a body=87 status=ok
// SIG undefined FUN_146f3d27a(void)

void FUN_146f3d27a(longlong *param_1,int param_2)

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
  FUN_146f3d2d2();
  return;
}



// FUNCTION 146f3d2d2 FUN_146f3d2d2 body=57 status=ok
// SIG undefined FUN_146f3d2d2(void)

void FUN_146f3d2d2(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*param_1 + 8 + (longlong)param_2 * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_146f3cfcc(param_1,param_2);
  return;
}



// FUNCTION 146f3d30c FUN_146f3d30c body=164 status=ok
// SIG undefined FUN_146f3d30c(void)

void FUN_146f3d30c(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_146f3d38c;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_146f3d38c:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 146f3d3b0 FUN_146f3d3b0 body=157 status=ok
// SIG undefined FUN_146f3d3b0(void)

void FUN_146f3d3b0(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar7 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar7 * 0x20;
        if (*(uint *)(*param_1 + (longlong)iVar7 * 0x20) == param_3) {
          if (((lVar1 + 4U & 0xfffffffffffffffb) != 0) && ((longlong)*(int *)(lVar1 + 0x14) != -1))
          {
            lVar2 = param_1[0x18];
            lVar5 = (longlong)*(int *)(lVar1 + 0x14) * 0x50;
            lVar1 = *(longlong *)(lVar2 + 0x40 + lVar5);
            lVar6 = lVar2 + lVar5;
            if (lVar1 != 0) {
              lVar6 = lVar1;
            }
            *param_2 = lVar6;
            uVar3 = *(undefined4 *)(lVar2 + 0x48 + lVar5);
            goto LAB_146f3d3c4;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x18);
      } while (iVar7 != -1);
    }
  }
  *param_2 = 0;
  uVar3 = 0;
LAB_146f3d3c4:
  *(undefined4 *)(param_2 + 1) = uVar3;
  return;
}



// FUNCTION 146f3d44e FUN_146f3d44e body=168 status=ok
// SIG undefined FUN_146f3d44e(void)

void FUN_146f3d44e(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined8 local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar3 * 0x1c;
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x1c) == *param_3) {
          if (lVar1 != 0) goto LAB_146f3d4da;
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x14);
      } while (iVar3 != -1);
    }
  }
  local_28 = param_3;
  local_20 = param_4;
  FUN_146f3d4f8(param_1,local_14,param_2,&local_28);
LAB_146f3d4da:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3d4f8 FUN_146f3d4f8 body=287 status=ok
// SIG undefined FUN_146f3d4f8(void)

undefined4 * FUN_146f3d4f8(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146f3d618(param_1,local_48);
  puVar1 = (undefined8 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0x14) = 0xffffffff;
  cVar2 = FUN_146f3d714(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 3) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0x14) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_146f3d824(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3d618 FUN_146f3d618 body=251 status=ok
// SIG undefined FUN_146f3d618(void)

int * FUN_146f3d618(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 146f3d714 FUN_146f3d714 body=144 status=ok
// SIG undefined FUN_146f3d714(void)

undefined8 FUN_146f3d714(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x1c);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x1c) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          puVar1[4] = (int)param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_146f3d7a4((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[5];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f3d7a4 FUN_146f3d7a4 body=128 status=ok
// SIG undefined FUN_146f3d7a4(void)

void FUN_146f3d7a4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 146f3d824 FUN_146f3d824 body=480 status=ok
// SIG undefined FUN_146f3d824(void)

void FUN_146f3d824(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
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
      iVar6 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar5 = (longlong)iVar6 * 0x1c;
        uVar4 = *(undefined8 *)(lVar3 + lVar5);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x18 + lVar5) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar5) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar6 = local_58._4_4_;
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



// FUNCTION 146f3da06 FUN_146f3da06 body=326 status=ok
// SIG undefined FUN_146f3da06(void)

undefined4 * FUN_146f3da06(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f3db4e(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_146f3dc34(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
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
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146f3dd26(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3db4e FUN_146f3db4e body=230 status=ok
// SIG undefined FUN_146f3db4e(void)

int * FUN_146f3db4e(longlong *param_1,int *param_2)

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



// FUNCTION 146f3dc34 FUN_146f3dc34 body=128 status=ok
// SIG undefined FUN_146f3dc34(void)

undefined8 FUN_146f3dc34(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_146f3dcb4((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f3dcb4 FUN_146f3dcb4 body=114 status=ok
// SIG undefined FUN_146f3dcb4(void)

void FUN_146f3dcb4(longlong *param_1,int param_2)

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



// FUNCTION 146f3dd26 FUN_146f3dd26 body=474 status=ok
// SIG undefined FUN_146f3dd26(void)

void FUN_146f3dd26(longlong *param_1)

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



// FUNCTION 146f3df02 FUN_146f3df02 body=335 status=ok
// SIG undefined FUN_146f3df02(void)

undefined4 * FUN_146f3df02(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f3e052(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar11 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  uVar11 = ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar7 >> 4);
  cVar6 = FUN_146f3e138(param_1,uVar11,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
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
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_40 + 0x1c) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_146f3e234(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3e052 FUN_146f3e052 body=229 status=ok
// SIG undefined FUN_146f3e052(void)

int * FUN_146f3e052(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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



// FUNCTION 146f3e138 FUN_146f3e138 body=137 status=ok
// SIG undefined FUN_146f3e138(void)

undefined8 FUN_146f3e138(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_146f3e1c2((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f3e1c2 FUN_146f3e1c2 body=114 status=ok
// SIG undefined FUN_146f3e1c2(void)

void FUN_146f3e1c2(longlong *param_1,int param_2)

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



// FUNCTION 146f3e234 FUN_146f3e234 body=476 status=ok
// SIG undefined FUN_146f3e234(void)

void FUN_146f3e234(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 146f3e412 FUN_146f3e412 body=335 status=ok
// SIG undefined FUN_146f3e412(void)

undefined4 * FUN_146f3e412(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  FUN_146f3e562(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_146f3e648(param_1,uVar9,local_40,&local_4c);
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
      FUN_146f3e73a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3e562 FUN_146f3e562 body=230 status=ok
// SIG undefined FUN_146f3e562(void)

int * FUN_146f3e562(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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



// FUNCTION 146f3e648 FUN_146f3e648 body=128 status=ok
// SIG undefined FUN_146f3e648(void)

undefined8 FUN_146f3e648(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_146f3e6c8((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f3e6c8 FUN_146f3e6c8 body=114 status=ok
// SIG undefined FUN_146f3e6c8(void)

void FUN_146f3e6c8(longlong *param_1,int param_2)

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



// FUNCTION 146f3e73a FUN_146f3e73a body=473 status=ok
// SIG undefined FUN_146f3e73a(void)

void FUN_146f3e73a(longlong *param_1)

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
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
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



// FUNCTION 146f3e914 FUN_146f3e914 body=63 status=ok
// SIG undefined FUN_146f3e914(void)

void FUN_146f3e914(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145a41a4c(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146f3d824(param_1);
    return;
  }
  FUN_146f3e954(param_1);
  FUN_145a41a4c(param_1);
  return;
}



// FUNCTION 146f3e954 FUN_146f3e954 body=329 status=ok
// SIG undefined FUN_146f3e954(void)

void FUN_146f3e954(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x18 + (longlong)iVar4 * 0x1c) * 4) =
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



// FUNCTION 146f3ea9e FUN_146f3ea9e body=67 status=ok
// SIG undefined FUN_146f3ea9e(void)

void FUN_146f3ea9e(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145a41e6a(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146f3e234(param_1);
    return;
  }
  FUN_146f3eae2(param_1);
  FUN_145a41e6a(param_1,0);
  return;
}



// FUNCTION 146f3eae2 FUN_146f3eae2 body=322 status=ok
// SIG undefined FUN_146f3eae2(void)

void FUN_146f3eae2(longlong *param_1)

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



// FUNCTION 146f3ec26 FUN_146f3ec26 body=63 status=ok
// SIG undefined FUN_146f3ec26(void)

void FUN_146f3ec26(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145a41db6(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146f3e73a(param_1);
    return;
  }
  FUN_146f3ec66(param_1);
  FUN_145a41db6(param_1);
  return;
}



// FUNCTION 146f3ec66 FUN_146f3ec66 body=322 status=ok
// SIG undefined FUN_146f3ec66(void)

void FUN_146f3ec66(longlong *param_1)

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



// FUNCTION 146f3edaa FUN_146f3edaa body=63 status=ok
// SIG undefined FUN_146f3edaa(void)

void FUN_146f3edaa(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145a41e10(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146f3dd26(param_1);
    return;
  }
  FUN_146f3edea(param_1);
  FUN_145a41e10(param_1);
  return;
}



// FUNCTION 146f3edea FUN_146f3edea body=322 status=ok
// SIG undefined FUN_146f3edea(void)

void FUN_146f3edea(longlong *param_1)

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



// FUNCTION 146f3ef2e FUN_146f3ef2e body=341 status=ok
// SIG undefined FUN_146f3ef2e(void)

undefined4 * FUN_146f3ef2e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  FUN_146f3d618(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0x14) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_146f3d714(param_1,uVar9,local_40,&local_4c);
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
      *(uint *)(local_40 + 3) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0x14) =
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
      FUN_146f3d824(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3f084 FUN_146f3f084 body=243 status=ok
// SIG undefined FUN_146f3f084(void)

undefined8 * FUN_146f3f084(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_2 != (longlong *)0x0 && (int)param_2[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14c997f60,CONCAT71(uVar5,1));
      plVar1 = (longlong *)*param_2;
      if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
        local_28 = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
      }
      *param_1 = local_28;
      uVar3 = DAT_14c997f68;
      lVar6 = (longlong)(int)DAT_14c997f68;
      DAT_14c997f68 = DAT_14c997f68 + 1;
      if (DAT_14c997f6c < DAT_14c997f68) {
        FUN_1447a71f6(&DAT_14c997f60,uVar3);
      }
      lVar2 = DAT_14c997f60;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14c997f60 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3f186 FUN_146f3f186 body=243 status=ok
// SIG undefined FUN_146f3f186(void)

undefined8 * FUN_146f3f186(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_2 != (longlong *)0x0 && (int)param_2[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14c997f78,CONCAT71(uVar5,1));
      plVar1 = (longlong *)*param_2;
      if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
        local_28 = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
      }
      *param_1 = local_28;
      uVar3 = DAT_14c997f80;
      lVar6 = (longlong)(int)DAT_14c997f80;
      DAT_14c997f80 = DAT_14c997f80 + 1;
      if (DAT_14c997f84 < DAT_14c997f80) {
        FUN_1447a71f6(&DAT_14c997f78,uVar3);
      }
      lVar2 = DAT_14c997f78;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14c997f78 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3f288 FUN_146f3f288 body=132 status=ok
// SIG undefined FUN_146f3f288(void)

void FUN_146f3f288(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f3f30e FUN_146f3f30e body=531 status=ok
// SIG undefined FUN_146f3f30e(void)

void FUN_146f3f30e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  longlong lStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    local_88 = 0;
    uStack_80 = 0;
    local_a8 = 0;
    lStack_a0 = 0;
    uStack_7c = 0x80;
    uStack_78 = 0xffffffff;
    uStack_74 = 0;
    FUN_145a41e6a(&local_a8,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
    local_c0 = param_1 + 2;
    local_c8 = 0x100000000;
    local_b8 = 0xffffffff;
    local_b0 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_c8);
    }
    uStack_60 = local_c8;
    local_58 = local_c0;
    uStack_50 = local_b8;
    uVar12 = uStack_50;
    local_48 = CONCAT44(local_ac,local_b0);
    uStack_50._4_4_ = (int)((ulonglong)local_b8 >> 0x20);
    if (uStack_50._4_4_ < (int)local_c0[3]) {
      local_68 = param_1;
      uStack_50 = uVar12;
      do {
        FUN_146f3e052(&local_a8,&local_c8);
        puVar1 = (undefined4 *)(*local_68 + (longlong)uStack_50._4_4_ * 0x20);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar1 = (undefined4 *)(*local_68 + 0x10 + (longlong)uStack_50._4_4_ * 0x20);
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        *(undefined4 *)(local_c0 + 2) = *puVar1;
        *(undefined4 *)((longlong)local_c0 + 0x14) = uVar6;
        *(undefined4 *)(local_c0 + 3) = uVar7;
        *(undefined4 *)((longlong)local_c0 + 0x1c) = uVar8;
        *(undefined4 *)local_c0 = uVar2;
        *(undefined4 *)((longlong)local_c0 + 4) = uVar3;
        *(undefined4 *)(local_c0 + 1) = uVar4;
        *(undefined4 *)((longlong)local_c0 + 0xc) = uVar5;
        uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 & ~uStack_60._4_4_);
        FUN_1449c0562(&uStack_60);
      } while (uStack_50._4_4_ < (int)local_58[3]);
    }
    local_38 = param_1[6];
    local_68 = (longlong *)*param_1;
    uStack_60 = param_1[1];
    lVar9 = param_1[2];
    lVar10 = param_1[3];
    local_48 = param_1[4];
    lVar11 = param_1[5];
    param_1[6] = CONCAT44(uStack_74,uStack_78);
    param_1[4] = local_88;
    param_1[5] = CONCAT44(uStack_7c,uStack_80);
    param_1[2] = CONCAT44(uStack_94,local_98);
    param_1[3] = CONCAT44(uStack_8c,uStack_90);
    *param_1 = local_a8;
    param_1[1] = lStack_a0;
    uStack_78 = (undefined4)local_38;
    uStack_74 = (undefined4)((ulonglong)local_38 >> 0x20);
    local_58._0_4_ = (undefined4)lVar9;
    local_58._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
    uStack_50._0_4_ = (uint)lVar10;
    uStack_50._4_4_ = (int)((ulonglong)lVar10 >> 0x20);
    uStack_40._0_4_ = (undefined4)lVar11;
    uStack_40._4_4_ = (undefined4)((ulonglong)lVar11 >> 0x20);
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = (undefined4)local_58;
    uStack_94 = local_58._4_4_;
    uStack_90 = (uint)uStack_50;
    uStack_8c = uStack_50._4_4_;
    local_a8 = (longlong)local_68;
    lStack_a0 = uStack_60;
    local_88 = local_48;
    local_58 = (longlong *)lVar9;
    uStack_50 = lVar10;
    uStack_40 = lVar11;
    FUN_145a41b7e();
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3f522 FUN_146f3f522 body=123 status=ok
// SIG undefined FUN_146f3f522(void)

undefined8 * FUN_146f3f522(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146f3f59e();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 146f3f59e FUN_146f3f59e body=146 status=ok
// SIG undefined FUN_146f3f59e(void)

longlong * FUN_146f3f59e(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 146f3f630 FUN_146f3f630 body=196 status=ok
// SIG undefined FUN_146f3f630(void)

longlong FUN_146f3f630(longlong *param_1,uint param_2,float *param_3,undefined8 param_4)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  float *local_30;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar4 = *param_1 + (longlong)iVar2 * 0x10;
        fVar1 = *(float *)(*param_1 + (longlong)iVar2 * 0x10);
        if ((fVar1 == *param_3) && (!NAN(fVar1) && !NAN(*param_3))) {
          if (lVar4 != 0) goto LAB_146f3f6d7;
          break;
        }
        iVar2 = *(int *)(lVar4 + 8);
      } while (iVar2 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_146f3f6f6(param_1,&local_1c,param_2,&local_30);
  lVar4 = (longlong)local_1c * 0x10 + *param_1;
LAB_146f3f6d7:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 4;
}



// FUNCTION 146f3f6f6 FUN_146f3f6f6 body=281 status=ok
// SIG undefined FUN_146f3f6f6(void)

undefined4 * FUN_146f3f6f6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146f3f810(param_1,local_48);
  puVar1 = (undefined4 *)param_4[1];
  *local_40 = *(undefined4 *)*param_4;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  cVar2 = FUN_146f3f8f6(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[3] = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_40[2] = *(undefined4 *)
                     (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_146f3f9f0(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3f810 FUN_146f3f810 body=229 status=ok
// SIG undefined FUN_146f3f810(void)

int * FUN_146f3f810(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 146f3f8f6 FUN_146f3f8f6 body=135 status=ok
// SIG undefined FUN_146f3f8f6(void)

undefined8 FUN_146f3f8f6(longlong *param_1,uint param_2,float *param_3,int *param_4)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
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
      fVar2 = *param_3;
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar5 * 0x10);
        fVar3 = *(float *)(*param_1 + (longlong)iVar5 * 0x10);
        if ((fVar3 == fVar2) && (!NAN(fVar3) && !NAN(fVar2))) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_146f3f97e(fVar2,*param_4);
          *param_4 = iVar5;
          return 1;
        }
        iVar5 = *(int *)(puVar1 + 1);
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f3f97e FUN_146f3f97e body=114 status=ok
// SIG undefined FUN_146f3f97e(void)

void FUN_146f3f97e(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 146f3f9f0 FUN_146f3f9f0 body=422 status=ok
// SIG undefined FUN_146f3f9f0(void)

void FUN_146f3f9f0(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 146f3fb98 FUN_146f3fb98 body=338 status=ok
// SIG undefined FUN_146f3fb98(void)

void FUN_146f3fb98(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *_Dst;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 1);
    iVar8 = uVar3 - iVar2;
    iVar7 = iVar8;
    if ((int)param_1[6] != -1) {
      lVar5 = *param_1;
      iVar9 = (int)param_1[6];
      uVar11 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar9 * 0x10);
        if (iVar9 < iVar8) {
          puVar15 = (undefined8 *)((longlong)iVar9 * 0x10 + lVar5);
          plVar16 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar16 = param_1 + 2;
          }
          puVar13 = (undefined8 *)((longlong)(int)(uVar11 - 1) * 0x10 + lVar5 + 0x10);
          uVar10 = uVar11;
          do {
            puVar12 = puVar13;
            uVar11 = uVar10 - 1;
            uVar14 = uVar10 + 0x1e;
            if (-1 < (int)uVar11) {
              uVar14 = uVar11;
            }
            puVar13 = puVar12 + -2;
            uVar10 = uVar11;
          } while ((*(uint *)((longlong)plVar16 + (longlong)((int)uVar14 >> 5) * 4) >>
                    (uVar11 & 0x1f) & 1) == 0);
          uVar6 = puVar12[-1];
          *puVar15 = *puVar13;
          puVar15[1] = uVar6;
          plVar16 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar16 = param_1 + 2;
          }
          iVar17 = iVar9 + 0x1f;
          if (-1 < iVar9) {
            iVar17 = iVar9;
          }
          puVar1 = (uint *)((longlong)plVar16 + (longlong)(iVar17 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
        }
        iVar9 = iVar4;
      } while (iVar4 != -1);
      iVar9 = (int)param_1[1] - uVar3;
      if (iVar9 != 0) {
        _Dst = (void *)((longlong)iVar8 * 0x10 + *param_1);
        memmove(_Dst,(void *)((longlong)iVar2 * 0x10 + (longlong)_Dst),(longlong)iVar9 << 4);
        iVar7 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar7;
    FUN_144a6134a(param_1 + 2,iVar8,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_14472eb64(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 146f3fcea FUN_146f3fcea body=119 status=ok
// SIG undefined FUN_146f3fcea(void)

void FUN_146f3fcea(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x210);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x214)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x214) = iVar5;
    FUN_146f3fd62(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f3fd62 FUN_146f3fd62 body=141 status=ok
// SIG undefined FUN_146f3fd62(void)

void FUN_146f3fd62(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,0x20);
  return;
}



// FUNCTION 146f3fdef FUN_146f3fdef body=26 status=ok
// SIG undefined FUN_146f3fdef(void)

void FUN_146f3fdef(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f3fe0a FUN_146f3fe0a body=147 status=ok
// SIG undefined FUN_146f3fe0a(void)

void FUN_146f3fe0a(longlong param_1,int param_2)

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



// FUNCTION 146f3fe9e FUN_146f3fe9e body=98 status=ok
// SIG undefined FUN_146f3fe9e(void)

void FUN_146f3fe9e(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_145c98e95(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f3ff00 FUN_146f3ff00 body=62 status=ok
// SIG undefined FUN_146f3ff00(void)

void FUN_146f3ff00(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f3ff3e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 146f3ff3e FUN_146f3ff3e body=112 status=ok
// SIG undefined FUN_146f3ff3e(void)

ulonglong FUN_146f3ff3e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146f3ff78;
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
LAB_146f3ff78:
  return param_2 & 0xffffffff;
}



// FUNCTION 146f3ffae FUN_146f3ffae body=19 status=ok
// SIG undefined FUN_146f3ffae(void)

void FUN_146f3ffae(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 146f3ffc2 FUN_146f3ffc2 body=132 status=ok
// SIG undefined FUN_146f3ffc2(void)

void FUN_146f3ffc2(longlong param_1,int param_2)

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



// FUNCTION 146f40048 FUN_146f40048 body=89 status=ok
// SIG undefined FUN_146f40048(void)

void FUN_146f40048(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_145c44f8f(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f400a2 FUN_146f400a2 body=62 status=ok
// SIG undefined FUN_146f400a2(void)

void FUN_146f400a2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f400e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146f400e0 FUN_146f400e0 body=93 status=ok
// SIG undefined FUN_146f400e0(void)

ulonglong FUN_146f400e0(uint param_1,uint param_2)

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



// FUNCTION 146f4013e FUN_146f4013e body=112 status=ok
// SIG undefined FUN_146f4013e(void)

void FUN_146f4013e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 146f401ae FUN_146f401ae body=104 status=ok
// SIG undefined FUN_146f401ae(void)

undefined4 * FUN_146f401ae(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  lVar1 = *(longlong *)(param_2 + 4);
  *(longlong *)(param_1 + 4) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar5 = DAT_14c950c29;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  lVar1 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar1;
  if ((lVar1 != 0 & bVar5) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 146f40216 FUN_146f40216 body=147 status=ok
// SIG undefined FUN_146f40216(void)

void FUN_146f40216(longlong param_1,int param_2)

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



// FUNCTION 146f402aa FUN_146f402aa body=112 status=ok
// SIG undefined FUN_146f402aa(void)

void FUN_146f402aa(longlong param_1,uint param_2)

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



// FUNCTION 146f4031a FUN_146f4031a body=48 status=ok
// SIG undefined FUN_146f4031a(void)

void FUN_146f4031a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 146f4034a FUN_146f4034a body=132 status=ok
// SIG undefined FUN_146f4034a(void)

void FUN_146f4034a(longlong param_1,int param_2)

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



// FUNCTION 146f403cf FUN_146f403cf body=30 status=ok
// SIG undefined FUN_146f403cf(void)

void FUN_146f403cf(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(byte *)((longlong)param_1 + 0x14) = *(byte *)((longlong)param_1 + 0x14) & 0xfe;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f403ee FUN_146f403ee body=147 status=ok
// SIG undefined FUN_146f403ee(void)

void FUN_146f403ee(longlong param_1,int param_2)

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



// FUNCTION 146f40482 FUN_146f40482 body=98 status=ok
// SIG undefined FUN_146f40482(void)

void FUN_146f40482(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_146f40522(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f404e4 FUN_146f404e4 body=62 status=ok
// SIG undefined FUN_146f404e4(void)

void FUN_146f404e4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f4054e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 146f40522 FUN_146f40522 body=43 status=ok
// SIG undefined FUN_146f40522(void)

void FUN_146f40522(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f4054e FUN_146f4054e body=112 status=ok
// SIG undefined FUN_146f4054e(void)

ulonglong FUN_146f4054e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146f40588;
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
LAB_146f40588:
  return param_2 & 0xffffffff;
}



// FUNCTION 146f405be FUN_146f405be body=8 status=ok
// SIG undefined FUN_146f405be(void)

void FUN_146f405be(undefined8 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146f405c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(*param_2);
  return;
}



// FUNCTION 146f405c6 FUN_146f405c6 body=24 status=ok
// SIG undefined FUN_146f405c6(void)

longlong FUN_146f405c6(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_149f9c870;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 146f405e4 FUN_146f405e4 body=12 status=ok
// SIG undefined FUN_146f405e4(void)

void FUN_146f405e4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146f405ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 146f405f0 FUN_146f405f0 body=29 status=ok
// SIG undefined FUN_146f405f0(void)

undefined8 FUN_146f405f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f4060e FUN_146f4060e body=69 status=ok
// SIG undefined FUN_146f4060e(void)

void FUN_146f4060e(undefined8 *param_1)

{
  int iVar1;
  
  if (*(longlong *)*param_1 != 0) {
    FUN_1400020a8();
  }
  iVar1 = 0;
  if (*(int *)(param_1 + 1) != 1) {
    memmove((void *)*param_1,(void *)((longlong)*param_1 + 8),
            (longlong)(*(int *)(param_1 + 1) + -1) << 3);
    iVar1 = *(int *)(param_1 + 1) + -1;
  }
  *(int *)(param_1 + 1) = iVar1;
  return;
}



// FUNCTION 146f40654 FUN_146f40654 body=119 status=ok
// SIG undefined FUN_146f40654(void)

void FUN_146f40654(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_146f406cc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f406cc FUN_146f406cc body=141 status=ok
// SIG undefined FUN_146f406cc(void)

void FUN_146f406cc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,8);
  return;
}



// FUNCTION 146f4075a FUN_146f4075a body=112 status=ok
// SIG undefined FUN_146f4075a(void)

void FUN_146f4075a(longlong param_1,uint param_2)

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



// FUNCTION 146f407ca FUN_146f407ca body=147 status=ok
// SIG undefined FUN_146f407ca(void)

void FUN_146f407ca(longlong param_1,int param_2)

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



// FUNCTION 146f4085e FUN_146f4085e body=119 status=ok
// SIG undefined FUN_146f4085e(void)

void FUN_146f4085e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x110);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x114)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x114) = iVar5;
    FUN_146f408d6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f408d6 FUN_146f408d6 body=141 status=ok
// SIG undefined FUN_146f408d6(void)

void FUN_146f408d6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,0x20);
  return;
}



// FUNCTION 146f40964 FUN_146f40964 body=125 status=ok
// SIG undefined FUN_146f40964(void)

void FUN_146f40964(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x20;
    if (0x20 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x20c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x20c) = (int)uVar4;
    FUN_146f409e2(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f409e2 FUN_146f409e2 body=142 status=ok
// SIG undefined FUN_146f409e2(void)

void FUN_146f409e2(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f40a70 FUN_146f40a70 body=139 status=ok
// SIG undefined FUN_146f40a70(void)

undefined8 FUN_146f40a70(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(((uint)(uVar2 >> 0x20) & 0xfffffff) * 0x17 + (int)uVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (((*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x30) ^ uVar2) & 0xfffffffffffffff) == 0)
        {
          FUN_146f40afc();
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x30 + *param_1 + 0x28);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f40afc FUN_146f40afc body=95 status=ok
// SIG undefined FUN_146f40afc(void)

void FUN_146f40afc(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x28 + lVar5 * 0x30);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x30 + 0x28);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_146f40b5c();
  return;
}



// FUNCTION 146f40b5c FUN_146f40b5c body=122 status=ok
// SIG undefined FUN_146f40b5c(void)

void FUN_146f40b5c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 146f40bd6 FUN_146f40bd6 body=125 status=ok
// SIG undefined FUN_146f40bd6(void)

void FUN_146f40bd6(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xc08);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x180;
    if (0x180 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x180 < *(uint *)(param_1 + 0xc0c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xc0c) = iVar5;
    FUN_146f40c54(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f40c54 FUN_146f40c54 body=144 status=ok
// SIG undefined FUN_146f40c54(void)

void FUN_146f40c54(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc00);
  if ((uint)param_3 < 0x181) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc00,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0xc00),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc00,param_2,param_3,8);
  return;
}



// FUNCTION 146f40ce4 FUN_146f40ce4 body=125 status=ok
// SIG undefined FUN_146f40ce4(void)

void FUN_146f40ce4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x608);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x180;
    if (0x180 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x180 < *(uint *)(param_1 + 0x60c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x60c) = iVar5;
    FUN_146f40d62(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f40d62 FUN_146f40d62 body=144 status=ok
// SIG undefined FUN_146f40d62(void)

void FUN_146f40d62(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x600);
  if ((uint)param_3 < 0x181) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x600,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x600),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x600,param_2,param_3,4);
  return;
}



// FUNCTION 146f40df2 FUN_146f40df2 body=63 status=ok
// SIG undefined FUN_146f40df2(void)

void FUN_146f40df2(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145a41ca8(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146f40f7a(param_1);
    return;
  }
  FUN_146f40e32(param_1);
  FUN_145a41ca8(param_1);
  return;
}



// FUNCTION 146f40e32 FUN_146f40e32 body=326 status=ok
// SIG undefined FUN_146f40e32(void)

void FUN_146f40e32(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
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



// FUNCTION 146f40f7a FUN_146f40f7a body=458 status=ok
// SIG undefined FUN_146f40f7a(void)

void FUN_146f40f7a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar10 = (longlong)
                 (int)(((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) & 0xfffffff) *
                       0x17 + (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
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



// FUNCTION 146f41146 FUN_146f41146 body=119 status=ok
// SIG undefined FUN_146f41146(void)

void FUN_146f41146(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_146f411be(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f411be FUN_146f411be body=141 status=ok
// SIG undefined FUN_146f411be(void)

void FUN_146f411be(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,0x10);
  return;
}



// FUNCTION 146f4124c FUN_146f4124c body=48 status=ok
// SIG undefined FUN_146f4124c(void)

void FUN_146f4124c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 146f4127c FUN_146f4127c body=132 status=ok
// SIG undefined FUN_146f4127c(void)

void FUN_146f4127c(longlong param_1,int param_2)

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



// FUNCTION 146f41302 FUN_146f41302 body=334 status=ok
// SIG undefined FUN_146f41302(void)

undefined4 *
FUN_146f41302(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146f41452(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_48 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  uVar6 = puVar1[4];
  uVar7 = puVar1[5];
  uVar8 = puVar1[6];
  uVar9 = puVar1[7];
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = uVar3;
  *(undefined4 *)(local_48 + 2) = uVar4;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar5;
  *(undefined4 *)(local_48 + 3) = uVar6;
  *(undefined4 *)((longlong)local_48 + 0x1c) = uVar7;
  *(undefined4 *)(local_48 + 4) = uVar8;
  *(undefined4 *)((longlong)local_48 + 0x24) = uVar9;
  *(undefined4 *)(local_48 + 5) = 0xffffffff;
  local_54 = local_50[0];
  uVar15 = ((uint)((ulonglong)uVar2 >> 0x20) & 0xfffffff) * 0x17 + (int)uVar2;
  local_68 = param_4;
  cVar10 = FUN_146f41540(param_1,uVar15,local_48,&local_54);
  uVar3 = local_54;
  if (cVar10 == '\0') {
    uVar11 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar13 = 1;
    if (3 < uVar11) {
      uVar12 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar13 <= *(int *)(param_1 + 0x48))) {
      uVar15 = *(int *)(param_1 + 0x48) - 1U & uVar15;
      *(uint *)((longlong)local_48 + 0x2c) = uVar15;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 5) =
           *(undefined4 *)
            (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4);
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4) = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_146f40f7a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f41452 FUN_146f41452 body=238 status=ok
// SIG undefined FUN_146f41452(void)

int * FUN_146f41452(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 146f41540 FUN_146f41540 body=169 status=ok
// SIG undefined FUN_146f41540(void)

void FUN_146f41540(longlong *param_1,uint param_2,ulonglong *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 uVar10;
  longlong *plVar11;
  int iVar12;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar12 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x30);
        if (((*(ulonglong *)(*param_1 + (longlong)iVar12 * 0x30) ^ *param_3) & 0xfffffffffffffff) ==
            0) {
          uVar6 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          uVar7 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar8 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          uVar9 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(ulonglong *)(puVar1 + 8) = param_3[4];
          puVar1[4] = (int)uVar8;
          puVar1[5] = uVar4;
          puVar1[6] = (int)uVar9;
          puVar1[7] = uVar5;
          *puVar1 = (int)uVar6;
          puVar1[1] = uVar2;
          puVar1[2] = (int)uVar7;
          puVar1[3] = uVar3;
          FUN_146f40b5c((int)uVar6,*param_4);
          *param_4 = iVar12;
          uVar10 = 1;
          goto LAB_146f415b3;
        }
        iVar12 = puVar1[10];
      } while (iVar12 != -1);
    }
  }
  uVar10 = 0;
LAB_146f415b3:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar10;
  }
  return;
}



// FUNCTION 146f415ea FUN_146f415ea body=127 status=ok
// SIG undefined FUN_146f415ea(void)

int * FUN_146f415ea(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar2 = FUN_144a78877(*param_3,param_3[1]);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & uVar2) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar3;
        if ((*(int *)(lVar1 + lVar5 * 0x18) == *param_3) &&
           (*(int *)(lVar1 + 4 + lVar5 * 0x18) == param_3[1])) goto LAB_146f41613;
        iVar3 = *(int *)(lVar1 + lVar5 * 0x18 + 0x10);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_146f41613:
  *param_2 = iVar3;
  return param_2;
}



// FUNCTION 146f4166a FUN_146f4166a body=87 status=ok
// SIG undefined FUN_146f4166a(void)

void FUN_146f4166a(longlong *param_1,int param_2)

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
  FUN_146f416c2();
  return;
}



// FUNCTION 146f416c2 FUN_146f416c2 body=114 status=ok
// SIG undefined FUN_146f416c2(void)

void FUN_146f416c2(longlong *param_1,int param_2)

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



// FUNCTION 146f41734 FUN_146f41734 body=317 status=ok
// SIG undefined FUN_146f41734(void)

undefined4 *
FUN_146f41734(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
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
  FUN_146f41872(param_1,local_50);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_48 = uVar6;
  local_48[1] = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = FUN_144a78877(uVar6,uVar6 >> 0x20);
  local_68 = param_4;
  cVar3 = FUN_146f41958(param_1,uVar4,local_48,&local_54);
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
      FUN_146f419ee(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f41872 FUN_146f41872 body=230 status=ok
// SIG undefined FUN_146f41872(void)

int * FUN_146f41872(longlong *param_1,int *param_2)

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



// FUNCTION 146f41958 FUN_146f41958 body=150 status=ok
// SIG undefined FUN_146f41958(void)

void FUN_146f41958(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x18);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar8 * 0x18) == param_3[1])
           ) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146f416c2(iVar2,*param_4);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_146f419ca;
        }
        iVar8 = piVar1[4];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_146f419ca:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 146f419ee FUN_146f419ee body=446 status=ok
// SIG undefined FUN_146f419ee(void)

void FUN_146f419ee(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10 * 0x18),
                              *(undefined4 *)(lVar3 + 4 + lVar10 * 0x18));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x14 + lVar10 * 0x18) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f41bae FUN_146f41bae body=132 status=ok
// SIG undefined FUN_146f41bae(void)

void FUN_146f41bae(longlong param_1,int param_2)

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



// FUNCTION 146f41c34 FUN_146f41c34 body=5 status=ok
// SIG undefined FUN_146f41c34(void)

void FUN_146f41c34(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  UNLOCK();
  return;
}



// FUNCTION 146f41c3a FUN_146f41c3a body=5 status=ok
// SIG undefined FUN_146f41c3a(void)

void FUN_146f41c3a(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  UNLOCK();
  return;
}



// FUNCTION 146f41c40 FUN_146f41c40 body=250 status=ok
// SIG undefined FUN_146f41c40(void)

longlong * FUN_146f41c40(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  ushort uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar5 = *(uint *)(param_1 + 0x308);
  uVar8 = (ulonglong)uVar5;
  uVar9 = 0;
  if (uVar8 < 0x10000) {
    uVar11 = (ulonglong)(uVar5 * 8 + 0x1f & 0xffff8);
    plVar4 = (longlong *)FUN_14153c902(uVar11 + uVar8 * 8,8);
    *plVar4 = (longlong)(plVar4 + 3);
    plVar4[1] = uVar11 + (longlong)plVar4;
    *(short *)(plVar4 + 2) = (short)uVar5;
    uVar5 = -(uint)(uVar8 != 0);
    lVar7 = *(longlong *)(param_1 + 0x300);
    if (*(longlong *)(param_1 + 0x300) == 0) {
      lVar7 = param_1;
    }
    iVar1 = *(int *)(param_1 + 0x308);
    if ((longlong)iVar1 != 0) {
      lVar10 = 0;
      uVar8 = 0;
      uVar9 = 0;
      do {
        *(undefined8 *)(*plVar4 + uVar8 * 8) = *(undefined8 *)(lVar7 + 8 + lVar10);
        lVar3 = *(longlong *)(lVar7 + 0x10 + lVar10);
        *(longlong *)(plVar4[1] + uVar8 * 8) = lVar3;
        uVar2 = *(uint *)(lVar3 + 8);
        uVar9 = uVar9 | uVar2;
        uVar5 = uVar5 & uVar2;
        uVar8 = (ulonglong)((int)uVar8 + 1);
        lVar10 = lVar10 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar10);
    }
    uVar6 = 0;
    if ((uVar9 >> 0xb & 1) != 0) {
      uVar6 = ((ushort)(uVar5 >> 6) & 0x20) + 0x20;
    }
    *(ushort *)((longlong)plVar4 + 0x12) =
         uVar6 | (ushort)(uVar9 >> 6) & 0x98 | (ushort)(uVar9 >> 7) & 3;
  }
  else {
    plVar4 = (longlong *)0x0;
  }
  return plVar4;
}



// FUNCTION 146f41d3a FUN_146f41d3a body=80 status=ok
// SIG undefined FUN_146f41d3a(void)

void FUN_146f41d3a(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x10);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + uVar4 * 8);
      if ((puVar3 != (undefined8 *)0x0) && ((*(uint *)(puVar3 + 1) & 8) != 0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146f41d8a FUN_146f41d8a body=365 status=ok
// SIG undefined FUN_146f41d8a(void)

undefined4 FUN_146f41d8a(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_168 [32];
  undefined1 local_148 [256];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x2000000000;
  lVar7 = *(longlong *)(param_1 + 0x300);
  if (*(longlong *)(param_1 + 0x300) == 0) {
    lVar7 = param_1;
  }
  iVar5 = *(int *)(param_1 + 0x308);
  if ((longlong)iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    lVar9 = 0;
    do {
      lVar1 = *(longlong *)(lVar7 + lVar9);
      lVar8 = (longlong)(int)(uint)local_40;
      uVar2 = (uint)local_40 + 1;
      if (local_40._4_4_ < uVar2) {
        uVar6 = local_40 & 0xffffffff;
        local_40._0_4_ = uVar2;
        FUN_146f4cfd4(local_148,uVar6);
        uVar2 = (uint)local_40;
      }
      local_40._0_4_ = uVar2;
      puVar4 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar4 = local_148;
      }
      *(undefined8 *)(puVar4 + lVar8 * 8) = *(undefined8 *)(lVar1 + 0x90);
      uVar2 = (uint)local_40;
      lVar1 = *(longlong *)(lVar7 + lVar9);
      lVar8 = (longlong)(int)(uint)local_40;
      local_40._0_4_ = (uint)local_40 + 1;
      if (local_40._4_4_ < (uint)local_40) {
        FUN_146f4cfd4(local_148,uVar2);
      }
      puVar4 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar4 = local_148;
      }
      *(undefined8 *)(puVar4 + lVar8 * 8) = *(undefined8 *)(lVar1 + 0x98);
      lVar9 = lVar9 + 0x18;
    } while ((longlong)iVar5 * 0x18 != lVar9);
    iVar5 = (uint)local_40 << 3;
  }
  puVar4 = local_48;
  if (local_48 == (undefined1 *)0x0) {
    puVar4 = local_148;
  }
  uVar3 = FUN_1447053be(puVar4,iVar5);
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f41ef8 FUN_146f41ef8 body=126 status=ok
// SIG undefined FUN_146f41ef8(void)

undefined8 FUN_146f41ef8(longlong *param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if ((int)param_1[9] == 0) {
    return 0;
  }
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  iVar4 = *(int *)((longlong)plVar3 + (longlong)(int)((int)param_1[9] - 1U & param_2) * 4);
  do {
    if (iVar4 == -1) {
      return 0;
    }
    lVar1 = *param_1;
    lVar5 = (longlong)iVar4 * 0x20;
    iVar4 = *(int *)(lVar1 + 0x18 + lVar5);
  } while (*(uint *)(lVar1 + lVar5) != param_2);
  lVar2 = *(longlong *)(lVar1 + 0x10 + lVar5);
  do {
    if (lVar2 == param_3) {
      return *(undefined8 *)(lVar1 + lVar5 + 8);
    }
    do {
      if (iVar4 == -1) {
        return 0;
      }
      lVar5 = (longlong)iVar4 * 0x20;
      iVar4 = *(int *)(lVar1 + 0x18 + lVar5);
    } while (*(uint *)(lVar1 + lVar5) != param_2);
    lVar2 = *(longlong *)(lVar1 + 0x10 + lVar5);
  } while( true );
}



// FUNCTION 146f41f76 FUN_146f41f76 body=201 status=ok
// SIG undefined FUN_146f41f76(void)

void FUN_146f41f76(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146f4df6e(param_1 + 0x50,&local_2c,param_2);
  if ((longlong)local_2c != -1) {
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x50) + 8 + (longlong)local_2c * 0x20);
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    FUN_146f4dff4(param_1 + 0x50);
    uVar3 = CONCAT44(uStack_44,local_48);
    iVar2 = *(int *)(param_1 + 0xf8);
    *(uint *)(param_1 + 0xf8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xfc) < iVar2 + 1U) {
      FUN_146f4e1e4(param_1 + 0xf0,iVar2);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar2 * 8) = uVar3;
    FUN_146f42040(param_1,*(undefined4 *)(param_2 + 0x2c),&local_48);
  }
  FUN_146f420e8(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f42040 FUN_146f42040 body=168 status=ok
// SIG undefined FUN_146f42040(void)

undefined8 FUN_146f42040(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  uVar2 = 0;
  if ((int)param_1[9] != 0) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + (longlong)(int)((int)param_1[9] - 1U & param_2) * 4);
    do {
      iVar4 = iVar3;
      if (iVar4 == -1) {
        return 0;
      }
      lVar1 = *param_1;
      iVar3 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
    } while (*(uint *)(lVar1 + (longlong)iVar4 * 0x20) != param_2);
    while ((*(longlong *)(lVar1 + 8 + (longlong)iVar4 * 0x20) != *param_3 ||
           (*(longlong *)((longlong)iVar4 * 0x20 + lVar1 + 0x10) != param_3[1]))) {
      do {
        iVar4 = iVar3;
        if (iVar4 == -1) {
          return 0;
        }
        iVar3 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
      } while (*(uint *)(lVar1 + (longlong)iVar4 * 0x20) != param_2);
    }
    FUN_146f4e04e(param_1,iVar4);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 146f420e8 FUN_146f420e8 body=150 status=ok
// SIG undefined FUN_146f420e8(void)

void FUN_146f420e8(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (0 < *(int *)(param_1 + 0xf8)) {
    uVar2 = 0;
    do {
      uVar3 = (ulonglong)uVar2;
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + uVar3 * 8) + 0x40) == 0) {
        FUN_142a95f78(param_1);
        iVar1 = *(int *)(param_1 + 0xf8);
        if (~uVar2 + iVar1 != 0) {
          memmove((void *)(*(longlong *)(param_1 + 0xf0) + uVar3 * 8),
                  (void *)(*(longlong *)(param_1 + 0xf0) + uVar3 * 8 + 8),
                  (longlong)(int)(~uVar2 + iVar1) << 3);
          iVar1 = *(int *)(param_1 + 0xf8);
        }
        *(int *)(param_1 + 0xf8) = iVar1 + -1;
        FUN_146f4e26a((longlong *)(param_1 + 0xf0));
        uVar2 = uVar2 - 1;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < *(int *)(param_1 + 0xf8));
  }
  return;
}



// FUNCTION 146f4217e FUN_146f4217e body=162 status=ok
// SIG undefined FUN_146f4217e(void)

void FUN_146f4217e(longlong *param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar6;
  int iVar5;
  
  if ((int)param_1[9] != 0) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (longlong)(int)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    while (iVar5 = iVar4, iVar5 != -1) {
      lVar1 = *param_1;
      lVar6 = (longlong)iVar5;
      iVar4 = *(int *)(lVar1 + 0x10 + lVar6 * 0x18);
      if (*(ulonglong *)(lVar1 + lVar6 * 0x18) == param_2) {
        do {
          if (*(longlong *)(lVar1 + 8 + lVar6 * 0x18) == param_3) {
            FUN_146f4e11a(param_1,iVar5);
            return;
          }
          do {
            iVar5 = iVar4;
            if (iVar5 == -1) {
              return;
            }
            lVar6 = (longlong)iVar5;
            iVar4 = *(int *)(lVar1 + 0x10 + lVar6 * 0x18);
          } while (*(ulonglong *)(lVar1 + lVar6 * 0x18) != param_2);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 146f42220 FUN_146f42220 body=443 status=ok
// SIG undefined FUN_146f42220(void)

void FUN_146f42220(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_178 [40];
  undefined1 local_150 [256];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  int iVar6;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_50 = (undefined1 *)0x0;
  local_44 = 0x20;
  if (*(int *)(param_1 + 0xe8) != 0) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar3 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xe0);
    }
    iVar5 = *(int *)(lVar3 + (longlong)
                             (int)(*(int *)(param_1 + 0xe8) - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
    while (iVar6 = iVar5, iVar6 != -1) {
      lVar3 = *(longlong *)(param_1 + 0xa0);
      iVar5 = *(int *)(lVar3 + 0x10 + (longlong)iVar6 * 0x18);
      if (*(ulonglong *)(lVar3 + (longlong)iVar6 * 0x18) == param_2) {
        uVar1 = 0;
        do {
          local_48 = uVar1 + 1;
          if (local_44 < uVar1 + 1) {
            FUN_146f4e306(local_150,uVar1);
          }
          puVar2 = local_50;
          if (local_50 == (undefined1 *)0x0) {
            puVar2 = local_150;
          }
          *(undefined8 *)(puVar2 + (longlong)(int)uVar1 * 8) =
               *(undefined8 *)(lVar3 + (longlong)iVar6 * 0x18 + 8);
          do {
            iVar6 = iVar5;
            if (iVar6 == -1) {
              lVar3 = (longlong)(int)local_48;
              puVar2 = local_150;
              if (local_50 != (undefined1 *)0x0) {
                puVar2 = local_50;
              }
              if (lVar3 != 0) {
                lVar4 = 0;
                do {
                  FUN_146f41f76(param_1,*(undefined8 *)(puVar2 + lVar4));
                  lVar4 = lVar4 + 8;
                } while (lVar3 * 8 != lVar4);
              }
              if (local_50 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_146f423a0;
            }
            lVar3 = *(longlong *)(param_1 + 0xa0);
            iVar5 = *(int *)(lVar3 + 0x10 + (longlong)iVar6 * 0x18);
            uVar1 = local_48;
          } while (*(ulonglong *)(lVar3 + (longlong)iVar6 * 0x18) != param_2);
        } while( true );
      }
    }
  }
LAB_146f423a0:
  if ((local_40 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f423dc FUN_146f423dc body=448 status=ok
// SIG undefined FUN_146f423dc(void)

void FUN_146f423dc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x50);
  lVar2 = param_1 + 0x60;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar3 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x78);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (local_50 != lVar2)) {
    do {
      FUN_142a95f78(param_1,*(undefined8 *)(*local_80 + 8 + (longlong)iStack_64 * 0x20));
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (local_70 != lVar2 || iStack_64 != iVar3));
  }
  lVar2 = *(longlong *)(param_1 + 0xf0);
  iVar3 = *(int *)(param_1 + 0xf8);
  if ((longlong)iVar3 != 0) {
    lVar4 = 0;
    do {
      FUN_142a95f78(param_1,*(undefined8 *)(lVar2 + lVar4));
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar3 * 8 != lVar4);
    lVar2 = *(longlong *)(param_1 + 0xf0);
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_146f4a85c(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_146f4a8ea(plVar1);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_146f4a978(param_1);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4259e FUN_146f4259e body=239 status=ok
// SIG undefined FUN_146f4259e(void)

undefined8 FUN_146f4259e(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  short sVar5;
  longlong lVar6;
  undefined1 auStack_38 [40];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar6 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xe8);
    }
    iVar2 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0xf0) - 1U &
                             (int)param_2 + ((uint)(param_2 >> 0x20) & 0xfffffff) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar2 * 0x18);
        if (((*puVar1 ^ param_2) & 0xfffffffffffffff) == 0) {
          puVar3 = puVar1 + 1;
          if ((puVar3 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) &&
             (sVar5 = (short)*puVar3 + -1, *(short *)puVar3 = sVar5, sVar5 < 1)) {
            FUN_146f4e40c((longlong *)(param_1 + 0xa8),&local_10);
            uVar4 = 1;
            goto LAB_146f425c6;
          }
          break;
        }
        iVar2 = (int)puVar1[2];
      } while (iVar2 != -1);
    }
  }
  uVar4 = 0;
LAB_146f425c6:
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146f4268e FUN_146f4268e body=239 status=ok
// SIG undefined FUN_146f4268e(void)

undefined8 FUN_146f4268e(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  short sVar5;
  longlong lVar6;
  undefined1 auStack_38 [40];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
    lVar6 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x138);
    }
    iVar2 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x140) - 1U &
                             (int)param_2 + ((uint)(param_2 >> 0x20) & 0xfffffff) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar2 * 0x18);
        if (((*puVar1 ^ param_2) & 0xfffffffffffffff) == 0) {
          puVar3 = puVar1 + 1;
          if ((puVar3 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) &&
             (sVar5 = (short)*puVar3 + -1, *(short *)puVar3 = sVar5, sVar5 < 1)) {
            FUN_146f4e40c((longlong *)(param_1 + 0xf8),&local_10);
            uVar4 = 1;
            goto LAB_146f426b6;
          }
          break;
        }
        iVar2 = (int)puVar1[2];
      } while (iVar2 != -1);
    }
  }
  uVar4 = 0;
LAB_146f426b6:
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146f4277e FUN_146f4277e body=656 status=ok
// SIG undefined FUN_146f4277e(void)

undefined8 * FUN_146f4277e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xa0;
  *(undefined4 *)(param_1 + 4) = 10;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x10;
  *(undefined4 *)(param_1 + 5) = 0x20;
  FUN_144a89ed8(param_1 + 6,0);
  FUN_146f16030(param_1 + 0xb,param_1 + 6);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x47] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x37c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 900) = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0xffffffff;
  FUN_146f15e40(param_1 + 0x76);
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  *(undefined1 *)((longlong)param_1 + 0x434) = 0;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar1 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"net.DelayUnmappedRPCs",0);
  param_1[0x87] = uVar1;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return param_1;
}



// FUNCTION 146f42a0e FUN_146f42a0e body=502 status=ok
// SIG undefined FUN_146f42a0e(void)

void FUN_146f42a0e(longlong param_1)

{
  FUN_146f15e74(param_1 + 0x3b0);
  *(undefined4 *)(param_1 + 0x398) = 0;
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_1400020a8();
  }
  FUN_146f4aa06(param_1 + 0x350);
  *(undefined4 *)(param_1 + 0x348) = 0;
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FUN_1400020a8();
  }
  FUN_146f4aa06(param_1 + 0x300);
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FUN_1400020a8();
  }
  FUN_146f4aa93(*(undefined8 *)(param_1 + 0x2d0),*(undefined4 *)(param_1 + 0x2d8));
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FUN_1400020a8();
  }
  FUN_146f4ab14(param_1 + 0x280);
  *(undefined4 *)(param_1 + 0x278) = 0;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FUN_1400020a8();
  }
  FUN_146f4ab14(param_1 + 0x230);
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x210) = 0;
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FUN_1400020a8();
  }
  FUN_146f4aba2(param_1 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  FUN_1459ad93e(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  FUN_146f4ab14(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_146f4ab14(param_1 + 0x88);
  FUN_14004673c(param_1 + 0x30,0);
  return;
}



// FUNCTION 146f42c04 FUN_146f42c04 body=257 status=ok
// SIG undefined FUN_146f42c04(void)

void FUN_146f42c04(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
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
  undefined8 uVar13;
  longlong lVar14;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  param_1[8] = uVar9;
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  lVar14 = *(longlong *)(param_1 + 4);
  lVar1 = *(longlong *)(lVar14 + 0x28);
  *(longlong *)(param_1 + 0x1a) = lVar1 + 0x60;
  *(longlong *)(param_1 + 0x1c) = lVar1 + 0x160;
  *(longlong *)(param_1 + 0x1e) = lVar1 + 0x610;
  *(longlong *)(param_1 + 0xe8) = lVar1 + 0xf00;
  *(longlong *)(param_1 + 0x108) = lVar1 + 0xd38;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*(longlong *)(lVar14 + 0x28) + 0x808);
  param_1[0x10c] = param_2[3];
  uVar13 = FUN_146f28fd4(*(undefined8 *)(*(longlong *)(lVar14 + 0x28) + 0x58));
  *(undefined8 *)(param_1 + 0x10a) = uVar13;
  lVar14 = *(longlong *)(param_1 + 0x1a);
  if (*(longlong *)(lVar14 + 0xf60) != 0) {
    local_18 = *(longlong *)(lVar14 + 0xf60);
    FUN_146f15ed4(param_1 + 0xec);
    lVar14 = *(longlong *)(param_1 + 0x1a);
  }
  if (*(longlong *)(lVar14 + 0xf68) != 0) {
    param_1[0xea] = *(undefined4 *)(*(longlong *)(lVar14 + 0xf68) + 0x30);
  }
  FUN_146f42d1a(param_1,0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f42d06 FUN_146f42d06 body=9 status=ok
// SIG undefined FUN_146f42d06(void)

longlong FUN_146f42d06(longlong param_1)

{
  return *(longlong *)(param_1 + 0x28) + 0x60;
}



// FUNCTION 146f42d10 FUN_146f42d10 body=9 status=ok
// SIG undefined FUN_146f42d10(void)

undefined8 FUN_146f42d10(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x58);
}



// FUNCTION 146f42d1a FUN_146f42d1a body=511 status=ok
// SIG undefined FUN_146f42d1a(void)

undefined8 * FUN_146f42d1a(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *_Dst;
  undefined8 *puVar4;
  undefined1 auStack_1c8 [40];
  int local_1a0;
  int local_19c;
  int *local_198;
  undefined1 auStack_190 [8];
  undefined8 local_188;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined4 local_15c;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_198 = &local_1a0;
  local_1a0 = param_2;
  FUN_146f4e8b6(param_1 + 0x1c8,&local_19c,&local_198);
  lVar1 = *(longlong *)(param_1 + 0x1c8) + (longlong)local_19c * 0x178;
  puVar4 = (undefined8 *)(lVar1 + 8);
  local_170 = 0;
  local_168 = 0;
  local_198 = (int *)0x0;
  auStack_190 = (undefined1  [8])0x0;
  local_188 = 0;
  local_164 = 0xffffffff00000080;
  local_15c = 0;
  local_150 = 0;
  local_148 = 0;
  local_120 = 0;
  local_118 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_114 = 0xffffffff00000080;
  local_10c = 0;
  local_100 = 0;
  local_f8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c4 = 0xffffffff00000080;
  local_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0x280000000000000;
  FUN_146f430ec(puVar4,&local_198);
  FUN_146f43160(&local_198);
  *(int *)(lVar1 + 0x160) = local_1a0;
  if (local_1a0 != 0) {
    uVar2 = *(uint *)(*(longlong *)
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x270) +
                         (longlong)(local_1a0 / 100) * 8) + 0x10 +
                       (ulonglong)(uint)(local_1a0 % 100) * 0x38) + 0x24);
    uVar3 = uVar2 & 0xffff;
    *(short *)(lVar1 + 0x164) = (short)uVar2;
    if (uVar3 < 0x41) {
      _Dst = (undefined8 *)(auStack_190 + 4);
      if (uVar3 != 0) {
        _Dst = puVar4;
      }
    }
    else {
      _Dst = (undefined8 *)FUN_14001cc68(uVar3 + 0x1f >> 3 & 0xfffffffc);
      *puVar4 = _Dst;
    }
    memset(_Dst,0,(ulonglong)(uVar3 + 0x1f >> 3 & 0xfffffffc));
  }
  if ((local_28 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar4;
}



// FUNCTION 146f42f1a FUN_146f42f1a body=140 status=ok
// SIG undefined FUN_146f42f1a(void)

void FUN_146f42f1a(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(param_2 + 0x2b) != 0) && (0x40 < *(ushort *)((longlong)param_2 + 0x15c))) {
    FUN_1400020a8(*param_2);
  }
  uVar1 = *(uint *)((longlong)param_2 + 0x15c);
  uVar2 = uVar1 >> 0x16 & 3;
  if (uVar2 != 2) {
    FUN_146f14d5e(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_2 + 0x2b),
                  param_2[(ulonglong)uVar2 + 0x29]);
    uVar1 = *(uint *)((longlong)param_2 + 0x15c);
  }
  uVar1 = uVar1 >> 0x18 & 3;
  if (uVar1 == 2) {
    return;
  }
  FUN_146f14d5e(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_2 + 0x2b),
                param_2[(ulonglong)uVar1 + 0x29]);
  return;
}



// FUNCTION 146f42fa6 FUN_146f42fa6 body=325 status=ok
// SIG undefined FUN_146f42fa6(void)

void FUN_146f42fa6(longlong param_1,uint param_2,char param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x1d0) != *(int *)(param_1 + 0x1fc))) {
    lVar4 = param_1 + 0x200;
    if (*(longlong *)(param_1 + 0x208) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x208);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x210) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x1c8);
      do {
        lVar1 = lVar4 + (longlong)iVar2 * 0x178;
        if (*(uint *)(lVar4 + (longlong)iVar2 * 0x178) == param_2) {
          lVar4 = lVar1 + 8;
          if (lVar4 == 0 || lVar1 == 0) {
            return;
          }
          lVar1 = *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x270) +
                   (longlong)((int)param_2 / 100) * 8);
          lVar3 = (ulonglong)(uint)((int)param_2 % 100) * 0x38;
          FUN_142a96514(param_1,lVar4);
          FUN_146f1ddb4(param_1 + 0x3b0,param_2);
          iVar2 = 1;
          if (param_3 == '\0') {
            iVar2 = (param_4 & 0xff) * 2;
          }
          FUN_142a8cb1a(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(lVar1 + lVar3),iVar2,
                        *(ushort *)(lVar1 + 0x32 + lVar3) >> 5 & 1);
          FUN_146f42f1a(param_1,lVar4);
          FUN_146f4ef14((longlong *)(param_1 + 0x1c8),param_2);
          return;
        }
        iVar2 = *(int *)(lVar1 + 0x170);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146f430ec FUN_146f430ec body=116 status=ok
// SIG undefined FUN_146f430ec(void)

undefined8 * FUN_146f430ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  FUN_146f4ad40(param_1 + 1,param_2 + 1);
  FUN_146f4ad40(param_1 + 0xb,param_2 + 0xb);
  FUN_146f4ae30(param_1 + 0x15,param_2 + 0x15);
  FUN_146f4ae30(param_1 + 0x1f,param_2 + 0x1f);
  uVar1 = param_2[0x2a];
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x154);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x15c);
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x154) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x15c) = uVar3;
  return param_1;
}



// FUNCTION 146f43160 FUN_146f43160 body=171 status=ok
// SIG undefined FUN_146f43160(void)

void FUN_146f43160(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  FUN_146f4af20(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_146f4af20(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_146f4aa06(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_146f4aa06(param_1 + 8);
  return;
}



// FUNCTION 146f4320c FUN_146f4320c body=114 status=ok
// SIG undefined FUN_146f4320c(void)

longlong FUN_146f4320c(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1d0) != *(int *)(param_1 + 0x1fc)) {
    lVar2 = param_1 + 0x200;
    if (*(longlong *)(param_1 + 0x208) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x208);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x210) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x1c8) + (longlong)iVar3 * 0x178;
        if (*(uint *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar3 * 0x178) == param_2)
        goto LAB_146f4321c;
        iVar3 = *(int *)(lVar2 + 0x170);
      } while (iVar3 != -1);
    }
  }
  lVar2 = 0;
LAB_146f4321c:
  lVar1 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 146f4327e FUN_146f4327e body=1387 status=ok
// SIG undefined FUN_146f4327e(void)

longlong FUN_146f4327e(longlong param_1,ulonglong param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_128 [44];
  undefined4 local_fc;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0 [11];
  ulonglong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_fc = (undefined4)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  local_f8 = param_1;
  if ((longlong)*(int *)(param_1 + 0x2d8) == 0) {
LAB_146f432ce:
    lVar11 = 0;
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x2d0) + 0xc0;
    lVar8 = (longlong)*(int *)(param_1 + 0x2d8) * 0x128;
    lVar11 = 0;
    do {
      if (((*(ulonglong *)(lVar14 + 0x60) ^ param_2) & 0xfffffffffffffff) == 0) {
        lVar11 = lVar14 + -0xc0;
        if (lVar11 == 0) goto LAB_146f432ce;
        lVar8 = *(longlong *)(lVar14 + 0x20);
        if (*(longlong *)(lVar14 + 0x20) == 0) {
          lVar8 = lVar14;
        }
        iVar1 = *(int *)(lVar14 + 0x28);
        if ((longlong)iVar1 == 0) {
          local_fc = 0;
        }
        else {
          lVar14 = 0;
          do {
            local_e0[3] = *(undefined8 *)(lVar8 + lVar14);
            FUN_146f4eff6(param_3,local_e0 + 3);
            lVar14 = lVar14 + 8;
          } while ((longlong)iVar1 * 8 != lVar14);
          local_fc = 0;
        }
        break;
      }
      lVar14 = lVar14 + 0x128;
      lVar8 = lVar8 + -0x128;
    } while (lVar8 != 0);
  }
  lVar14 = local_f8;
  local_58 = (undefined4 *)0x0;
  local_50 = 0x400000000;
  local_88 = (ulonglong *)0x0;
  local_80 = 0x400000000;
  uVar5 = *(uint *)(param_3 + 1);
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar5);
  }
  local_f0 = lVar11;
  if (4 < uVar5) {
    FUN_146f4f068(&local_78);
    uVar5 = *(uint *)(param_3 + 1);
  }
  puVar10 = local_e0 + 3;
  FUN_146f437ec(puVar10,uVar5);
  lVar8 = param_3[1];
  if ((longlong)(int)lVar8 != 0) {
    local_e8 = *param_3;
    lVar11 = lVar14 + 0x428;
    lVar12 = 0;
    do {
      uVar2 = *(ulonglong *)(local_e8 + lVar12);
      local_e0[2] = 0;
      local_e0[1] = 0;
      local_e0[0] = uVar2;
      uVar5 = FUN_142a836ac(*(undefined8 *)(lVar14 + 0x420),local_e0,lVar11);
      uVar3 = local_80;
      if ((uVar5 & 2) == 0) {
        if (uVar5 == 0) {
          lVar14 = (longlong)(int)local_80;
          uVar5 = (int)local_80 + 1;
          local_80 = CONCAT44(local_80._4_4_,uVar5);
          if (local_80._4_4_ < uVar5) {
            FUN_146f4f0e0(puVar10,uVar3 & 0xffffffff);
          }
          puVar6 = local_88;
          if (local_88 == (ulonglong *)0x0) {
            puVar6 = puVar10;
          }
          puVar6[lVar14 * 2] = uVar2;
          puVar6[lVar14 * 2 + 1] = local_e0[2];
          lVar14 = local_f8;
        }
      }
      else {
        cVar4 = FUN_146f29a54(*(undefined8 *)(lVar14 + 0x420),uVar2,1);
        uVar3 = local_50;
        if (cVar4 == '\0') {
          lVar14 = (longlong)(int)local_50;
          uVar5 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar5);
          if (local_50._4_4_ < uVar5) {
            FUN_146f314a6(&local_78,uVar3 & 0xffffffff);
          }
          puVar7 = local_58;
          if (local_58 == (undefined4 *)0x0) {
            puVar7 = &local_78;
          }
          *(ulonglong *)(puVar7 + lVar14 * 2) = uVar2;
          lVar14 = local_f8;
        }
      }
      lVar12 = lVar12 + 8;
    } while ((longlong)(int)lVar8 * 8 != lVar12);
  }
  lVar8 = local_f0;
  if ((int)local_50 == 0) {
    if ((char)local_fc == '\0') {
      if (*(int *)(local_f0 + 0xec) < 0) {
        *(undefined4 *)(local_f0 + 0xe8) = 0;
        FUN_146f4f068(local_f0 + 0xc0,0);
      }
      else {
        *(undefined4 *)(local_f0 + 0xe8) = 0;
      }
      if (local_88 != (ulonglong *)0x0) {
        puVar10 = local_88;
      }
      if ((longlong)(int)local_80 != 0) {
        puVar6 = puVar10 + (longlong)(int)local_80 * 2;
        lVar11 = lVar8 + 0xf0;
        do {
          lVar12 = *(longlong *)(lVar8 + 0x110);
          lVar9 = lVar12;
          if (lVar12 == 0) {
            lVar9 = lVar11;
          }
          iVar1 = *(int *)(lVar8 + 0x118);
          lVar15 = (longlong)iVar1;
          if (lVar15 != 0) {
            lVar13 = 0;
            do {
              if (((*(ulonglong *)(lVar9 + lVar13) ^ *puVar10) & 0xfffffffffffffff) == 0)
              goto LAB_146f43751;
              lVar13 = lVar13 + 8;
            } while (lVar15 * 8 - lVar13 != 0);
          }
          *(uint *)(lVar8 + 0x118) = iVar1 + 1U;
          if (*(uint *)(lVar8 + 0x11c) < iVar1 + 1U) {
            FUN_146f314a6(lVar11,iVar1);
            lVar12 = *(longlong *)(lVar8 + 0x110);
          }
          if (lVar12 == 0) {
            lVar12 = lVar11;
          }
          uVar2 = *puVar10;
          *(ulonglong *)(lVar12 + lVar15 * 8) = uVar2;
          FUN_146f29df4(*(undefined8 *)(lVar14 + 0x420),uVar2,puVar10[1]);
LAB_146f43751:
          puVar10 = puVar10 + 2;
        } while (puVar10 != puVar6);
      }
    }
    else {
      lVar8 = 0;
    }
  }
  else {
    if ((char)local_fc != '\0') {
      lVar8 = FUN_146f43866(lVar14 + 0x2d0);
      *(ulonglong *)(lVar8 + 0x120) = param_2;
    }
    if ((undefined4 *)(lVar8 + 0xc0) != &local_78) {
      if (local_58 == (undefined4 *)0x0) {
        *(undefined8 *)(lVar8 + 0xd0) = local_68;
        *(undefined8 *)(lVar8 + 0xd8) = uStack_60;
        *(undefined4 *)(lVar8 + 0xc0) = local_78;
        *(undefined4 *)(lVar8 + 0xc4) = uStack_74;
        *(undefined4 *)(lVar8 + 200) = uStack_70;
        *(undefined4 *)(lVar8 + 0xcc) = uStack_6c;
      }
      if (*(longlong *)(lVar8 + 0xe0) != 0) {
        FUN_1400020a8();
      }
      *(undefined4 **)(lVar8 + 0xe0) = local_58;
      local_58 = (undefined4 *)0x0;
      *(int *)(lVar8 + 0xe8) = (int)local_50;
      *(uint *)(lVar8 + 0xec) = local_50._4_4_;
      local_50 = 0x400000000;
    }
    if (local_88 != (ulonglong *)0x0) {
      puVar10 = local_88;
    }
    if ((longlong)(int)local_80 != 0) {
      puVar6 = puVar10 + (longlong)(int)local_80 * 2;
      lVar11 = lVar8 + 0xf0;
      do {
        lVar12 = *(longlong *)(lVar8 + 0x110);
        lVar9 = lVar12;
        if (lVar12 == 0) {
          lVar9 = lVar11;
        }
        iVar1 = *(int *)(lVar8 + 0x118);
        lVar15 = (longlong)iVar1;
        if (lVar15 != 0) {
          lVar13 = 0;
          do {
            if (((*(ulonglong *)(lVar9 + lVar13) ^ *puVar10) & 0xfffffffffffffff) == 0)
            goto LAB_146f435ae;
            lVar13 = lVar13 + 8;
          } while (lVar15 * 8 - lVar13 != 0);
        }
        *(uint *)(lVar8 + 0x118) = iVar1 + 1U;
        if (*(uint *)(lVar8 + 0x11c) < iVar1 + 1U) {
          FUN_146f314a6(lVar11,iVar1);
          lVar12 = *(longlong *)(lVar8 + 0x110);
        }
        if (lVar12 == 0) {
          lVar12 = lVar11;
        }
        uVar2 = *puVar10;
        *(ulonglong *)(lVar12 + lVar15 * 8) = uVar2;
        FUN_146f29df4(*(undefined8 *)(lVar14 + 0x420),uVar2,puVar10[1]);
LAB_146f435ae:
        puVar10 = puVar10 + 2;
      } while (puVar10 != puVar6);
    }
  }
  if (local_88 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 146f437ec FUN_146f437ec body=120 status=ok
// SIG undefined FUN_146f437ec(void)

void FUN_146f437ec(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x48) = param_2;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f4f0e0(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1;
    }
    FUN_146f4f0cc((longlong)iVar1 * 0x10 + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x48) = param_2;
    FUN_146f4f1d4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f43866 FUN_146f43866 body=62 status=ok
// SIG undefined FUN_146f43866(void)

longlong FUN_146f43866(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f4f2ca(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x128 + *param_1;
  FUN_146f4f274(lVar2);
  return lVar2;
}



// FUNCTION 146f438a4 FUN_146f438a4 body=174 status=ok
// SIG undefined FUN_146f438a4(void)

void FUN_146f438a4(undefined8 param_1,longlong param_2,undefined8 param_3,char param_4,uint param_5)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0xd8);
  if (param_4 == '\0') goto LAB_146f4390e;
  FUN_142a96900(param_1,param_2,param_3,0);
  if ((*(longlong *)(param_2 + 8) == 0) &&
     ((*(longlong *)(param_2 + 0xd8) == 0 || (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) == 0)))
     ) {
    if (*(longlong *)(param_2 + 0xe0) == 0) goto LAB_146f4390e;
    iVar1 = *(int *)(*(longlong *)(param_2 + 0xe0) + 0x18);
    while (iVar1 == 0) {
LAB_146f4390e:
      do {
        if (param_5 <= *(uint *)(lVar2 + 0xc)) {
          return;
        }
        FUN_142a96900(param_1,param_2,param_3,1);
        if (*(longlong *)(param_2 + 8) != 0) {
          return;
        }
        if ((*(longlong *)(param_2 + 0xd8) != 0) &&
           (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) != 0)) {
          return;
        }
      } while (*(longlong *)(param_2 + 0xe0) == 0);
      iVar1 = *(int *)(*(longlong *)(param_2 + 0xe0) + 0x18);
    }
  }
  return;
}



// FUNCTION 146f43952 FUN_146f43952 body=228 status=ok
// SIG undefined FUN_146f43952(void)

void FUN_146f43952(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if (DAT_14c75f474 == '\x01') {
    if (*(int *)(param_1 + 0x238) != *(int *)(param_1 + 0x264)) {
      lVar2 = param_1 + 0x268;
      if (*(longlong *)(param_1 + 0x270) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x270);
      }
      iVar1 = *(int *)(lVar2 + (ulonglong)
                               (*(int *)(param_1 + 0x278) - 1U &
                               (int)param_2 + ((uint)(param_2 >> 0x20) & 0xfffffff) * 0x17) * 4);
      if (iVar1 != -1) {
        do {
          if (((*(ulonglong *)(*(longlong *)(param_1 + 0x230) + (longlong)iVar1 * 0x18) ^ param_2) &
              0xfffffffffffffff) == 0) goto LAB_146f43a19;
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x230) + (longlong)iVar1 * 0x18 + 0x10);
        } while (iVar1 != -1);
      }
    }
    FUN_146f504d2(param_1 + 0x88,&local_20);
    FUN_146f504d2(param_1 + 0xd8,&local_20);
  }
LAB_146f43a19:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f43a38 FUN_146f43a38 body=172 status=ok
// SIG undefined FUN_146f43a38(void)

void FUN_146f43a38(longlong *param_1,ulonglong *param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar6;
  int iVar5;
  
  if ((int)param_1[9] != 0) {
    uVar1 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (longlong)
                    (int)((int)param_1[9] - 1U &
                         ((uint)(uVar1 >> 0x20) & 0xfffffff) * 0x17 + (int)uVar1) * 4);
    while (iVar5 = iVar4, iVar5 != -1) {
      lVar2 = *param_1;
      lVar6 = (longlong)iVar5;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
      if (((*(ulonglong *)(lVar2 + lVar6 * 0x18) ^ uVar1) & 0xfffffffffffffff) == 0) {
        do {
          if (*(int *)(lVar2 + 8 + lVar6 * 0x18) == param_3) {
            FUN_146f4f5ee(param_1,iVar5);
            return;
          }
          do {
            iVar5 = iVar4;
            if (iVar5 == -1) {
              return;
            }
            lVar6 = (longlong)iVar5;
            iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
          } while (((*(ulonglong *)(lVar2 + lVar6 * 0x18) ^ uVar1) & 0xfffffffffffffff) != 0);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 146f43ae4 FUN_146f43ae4 body=358 status=ok
// SIG undefined FUN_146f43ae4(void)

void FUN_146f43ae4(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  undefined2 local_50;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 8);
  local_40 = param_1 + 0x18;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_70 = local_38;
  iStack_6c = iStack_34;
  local_68 = local_30;
  local_64 = local_2c;
  local_80 = local_48;
  local_78 = local_40;
  local_50 = 0;
  local_88 = plVar1;
  local_60 = plVar1;
  local_58 = plVar1;
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    do {
      uVar2 = *(ulonglong *)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      if (((uVar2 ^ param_2) & 0xfffffffffffffff) == 0) {
        FUN_146f4b02a(local_60);
        local_50 = CONCAT11(local_50._1_1_,1);
        if (DAT_14c9999a0 == '\x01') {
          FUN_146f4259e(param_1,uVar2);
        }
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
    if (((local_50 & 1) != 0) && (local_50._1_1_ == '\x01')) {
      FUN_146f4b2d6(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f43c4c FUN_146f43c4c body=361 status=ok
// SIG undefined FUN_146f43c4c(void)

void FUN_146f43c4c(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  undefined2 local_50;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x58);
  local_40 = param_1 + 0x68;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_70 = local_38;
  iStack_6c = iStack_34;
  local_68 = local_30;
  local_64 = local_2c;
  local_80 = local_48;
  local_78 = local_40;
  local_50 = 0;
  local_88 = plVar1;
  local_60 = plVar1;
  local_58 = plVar1;
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    do {
      uVar2 = *(ulonglong *)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      if (((uVar2 ^ param_2) & 0xfffffffffffffff) == 0) {
        FUN_146f4b02a(local_60);
        local_50 = CONCAT11(local_50._1_1_,1);
        if (DAT_14c9999a0 == '\x01') {
          FUN_146f4268e(param_1,uVar2);
        }
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
    if (((local_50 & 1) != 0) && (local_50._1_1_ == '\x01')) {
      FUN_146f4b2d6(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f43db6 FUN_146f43db6 body=214 status=ok
// SIG undefined FUN_146f43db6(void)

void FUN_146f43db6(longlong *param_1,ulonglong *param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  if ((int)param_1[9] != 0) {
    uVar1 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (longlong)
                    (int)((int)param_1[9] - 1U &
                         ((uint)(uVar1 >> 0x20) & 0xfffffff) * 0x17 + (int)uVar1) * 4);
    while (iVar5 = iVar4, iVar5 != -1) {
      lVar2 = *param_1;
      iVar4 = *(int *)(lVar2 + 0x10 + (longlong)iVar5 * 0x18);
      if (((*(ulonglong *)(lVar2 + (longlong)iVar5 * 0x18) ^ uVar1) & 0xfffffffffffffff) == 0) {
        do {
          if (*(int *)(lVar2 + 8 + (longlong)iVar5 * 0x18) == param_3) {
            FUN_146f4f5ee(param_1);
            uVar1 = *param_2;
          }
          do {
            iVar5 = iVar4;
            if (iVar5 == -1) {
              return;
            }
            lVar2 = *param_1;
            iVar4 = *(int *)(lVar2 + 0x10 + (longlong)iVar5 * 0x18);
          } while (((*(ulonglong *)(lVar2 + (longlong)iVar5 * 0x18) ^ uVar1) & 0xfffffffffffffff) !=
                   0);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 146f43e8c FUN_146f43e8c body=516 status=ok
// SIG undefined FUN_146f43e8c(void)

void FUN_146f43e8c(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                  longlong *param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  undefined4 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = param_3;
  local_80 = param_4;
  memset((void *)*param_5,0,(ulonglong)*(uint *)(param_5 + 1) << 2);
  lVar1 = param_1 + 0x300;
  FUN_146f4ff20(lVar1);
  lVar2 = param_1 + 0x350;
  FUN_146f4ff20(lVar2);
  lVar7 = *(longlong *)(param_2 + 0x400);
  if (*(longlong *)(param_2 + 0x400) == 0) {
    lVar7 = param_2;
  }
  iVar4 = *(int *)(param_2 + 0x408);
  if ((longlong)iVar4 != 0) {
    lVar8 = 0;
    do {
      if (*(int *)(lVar7 + 0x1c + lVar8) == 0) {
        local_4c = 0xffffffff;
      }
      else {
        uVar5 = *(uint *)(lVar7 + 0x18 + lVar8);
        puVar3 = (uint *)(*param_5 + (ulonglong)(uVar5 >> 5) * 4);
        *puVar3 = *puVar3 | 1 << ((byte)uVar5 & 0x1f);
        local_4c = 0xffffffff;
        if (*(int *)(lVar7 + 0x1c + lVar8) != 0) {
          local_4c = *(undefined4 *)(lVar7 + 0x18 + lVar8);
        }
      }
      local_58 = *(ulonglong *)(lVar7 + 8 + lVar8);
      FUN_146f50230(lVar1,&local_4c,&local_58);
      lVar8 = lVar8 + 0x20;
    } while ((longlong)iVar4 * 0x20 != lVar8);
  }
  lVar7 = param_2 + 0x410;
  if (*(longlong *)(param_2 + 0x810) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x810);
  }
  iVar4 = *(int *)(param_2 + 0x818);
  if ((longlong)iVar4 != 0) {
    lVar8 = 0;
    do {
      uVar6 = *(ulonglong *)(lVar7 + 8 + lVar8);
      if ((uVar6 & 1) == 0 && uVar6 != 0) {
        local_4c = 0xffffffff;
        if (*(int *)(lVar7 + 0x1c + lVar8) != 0) {
          local_4c = *(undefined4 *)(lVar7 + 0x18 + lVar8);
        }
        local_58 = uVar6;
        FUN_146f50230(lVar2,&local_4c,&local_58);
      }
      lVar8 = lVar8 + 0x20;
    } while ((longlong)iVar4 * 0x20 != lVar8);
  }
  local_a0 = lVar1;
  local_98 = lVar2;
  if (DAT_14c9999a0 == '\0') {
    local_78 = *local_88;
    uStack_74 = local_88[1];
    uStack_70 = local_88[2];
    uStack_6c = local_88[3];
    local_a8 = param_6;
    FUN_142a972d4(param_1,local_80,&local_78,*(undefined1 *)(param_2 + 0x820));
  }
  else {
    local_68 = *local_88;
    uStack_64 = local_88[1];
    uStack_60 = local_88[2];
    uStack_5c = local_88[3];
    local_a8 = param_6;
    FUN_142a98c10(param_1,local_80);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f44092 FUN_146f44092 body=571 status=ok
// SIG undefined FUN_146f44092(void)

void FUN_146f44092(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  undefined1 auStack_5c8 [40];
  longlong *local_5a0;
  longlong local_598;
  undefined1 local_590 [1024];
  undefined1 *local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178 [26];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_5c8;
  *(byte *)(param_1 + 0x820) = param_4;
  local_178[0] = 0;
  local_178[1] = 0;
  lVar9 = 0x18;
  do {
    *(undefined8 *)((longlong)local_178 + lVar9) = 0;
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0xd8);
  local_a8 = 0;
  uStack_68 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_60 = 0xffffffff00000000;
  local_70 = param_5;
  local_58 = (uint)param_4 | local_58 & 0xfffffffc;
  local_190 = (undefined1 *)0x0;
  local_188 = 0x2000000000;
  local_180 = 0;
  FUN_146f3bafe(local_178,local_590,param_6,param_7);
  puVar13 = local_190;
  if (local_190 == (undefined1 *)0x0) {
    puVar13 = local_590;
  }
  if ((longlong)(int)local_188 != 0) {
    lVar9 = param_1 + 0x410;
    local_5a0 = (longlong *)(param_1 + 0x400);
    lVar11 = (longlong)(int)local_188 << 5;
    puVar14 = (undefined4 *)(puVar13 + 8);
    do {
      local_598 = 0;
      FUN_142a836ac(param_2,puVar14,param_3,&local_598);
      if (local_598 == 0) {
        iVar12 = *(int *)(param_1 + 0x408);
        *(uint *)(param_1 + 0x408) = iVar12 + 1U;
        lVar8 = param_1;
        plVar10 = local_5a0;
        if (*(uint *)(param_1 + 0x40c) < iVar12 + 1U) {
          FUN_146f3c89c(param_1,iVar12);
          plVar10 = local_5a0;
        }
      }
      else {
        iVar12 = *(int *)(param_1 + 0x818);
        *(uint *)(param_1 + 0x818) = iVar12 + 1U;
        lVar8 = lVar9;
        plVar10 = (longlong *)(param_1 + 0x810);
        if (*(uint *)(param_1 + 0x81c) < iVar12 + 1U) {
          FUN_146f3c89c(lVar9,iVar12);
        }
      }
      if (*plVar10 != 0) {
        lVar8 = *plVar10;
      }
      uVar3 = puVar14[-2];
      uVar4 = puVar14[-1];
      uVar5 = *puVar14;
      uVar6 = puVar14[1];
      uVar7 = *(undefined8 *)(puVar14 + 4);
      puVar2 = (undefined8 *)(lVar8 + 0x10 + (longlong)iVar12 * 0x20);
      *puVar2 = *(undefined8 *)(puVar14 + 2);
      puVar2[1] = uVar7;
      puVar1 = (undefined4 *)(lVar8 + (longlong)iVar12 * 0x20);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      puVar14 = puVar14 + 8;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
  }
  if (local_190 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_5c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f442ce FUN_146f442ce body=68 status=ok
// SIG undefined FUN_146f442ce(void)

void FUN_146f442ce(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146f5038e();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146f44312 FUN_146f44312 body=66 status=ok
// SIG undefined FUN_146f44312(void)

void FUN_146f44312(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1403d445a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1447a08a2(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146f44354 FUN_146f44354 body=197 status=ok
// SIG undefined FUN_146f44354(void)

void FUN_146f44354(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_146b7f620(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_1449809d4(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 2;
    do {
      FUN_144980568(param_1,local_2c,lVar4,0);
      lVar4 = lVar4 + 4;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4441c FUN_146f4441c body=737 status=ok
// SIG undefined FUN_146f4441c(void)

void FUN_146f4441c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  undefined1 auStack_4b8 [40];
  longlong local_490;
  longlong local_488;
  undefined4 local_47c;
  ulonglong local_478;
  ulonglong *local_470;
  undefined4 *local_468;
  undefined1 local_45c [4];
  undefined1 local_458 [1024];
  undefined1 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x10000000000;
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x268);
  if (lVar5 != 0) {
    piVar7 = *(int **)(*(longlong *)(param_1 + 0x70) + 0x260);
    piVar8 = piVar7 + lVar5;
    local_490 = param_1 + 0x230;
    local_488 = param_1 + 0x280;
    do {
      lVar5 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x270) + (longlong)(*piVar7 / 100) * 8
               );
      lVar2 = (ulonglong)(uint)(*piVar7 % 100) * 0x38;
      local_478 = *(ulonglong *)(lVar5 + lVar2);
      if ((local_478 & 1) == 0 && local_478 != 0) {
        lVar5 = lVar5 + lVar2;
        if ((*(byte *)(lVar5 + 0x32) & 2) != 0) {
          bVar9 = (longlong)local_50 < 0;
          local_50 = local_50 & 0xffffffff00000000;
          if (bVar9) {
            FUN_146f5068a(local_458);
          }
          lVar2 = local_490;
          FUN_146f446fe(local_490,&local_478,local_458);
          FUN_146f506e4(lVar2,&local_478);
          FUN_146f43952(param_1,local_478);
          puVar6 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar6 = local_458;
          }
          lVar2 = (longlong)(int)local_50;
          if (lVar2 != 0) {
            lVar4 = 0;
            do {
              lVar3 = FUN_146f4320c(param_1,*(undefined4 *)(puVar6 + lVar4));
              if (lVar3 != 0) {
                FUN_146f43ae4(lVar3,local_478);
              }
              lVar4 = lVar4 + 4;
            } while (lVar2 * 4 != lVar4);
          }
        }
        bVar9 = (longlong)local_50 < 0;
        local_50 = local_50 & 0xffffffff00000000;
        if (bVar9) {
          FUN_146f5068a(local_458);
        }
        FUN_146f446fe(local_488,&local_478,local_458);
        if (0 < (int)local_50) {
          FUN_146f506e4(local_488,&local_478);
          puVar6 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar6 = local_458;
          }
          lVar2 = (longlong)(int)local_50;
          if ((*(byte *)(lVar5 + 0x32) & 2) == 0) {
            if ((int)local_50 != 0) {
              lVar5 = 0;
              do {
                local_47c = *(undefined4 *)(puVar6 + lVar5);
                lVar4 = FUN_146f4320c(param_1);
                if ((lVar4 != 0) && (cVar1 = FUN_142a995ee(lVar4,local_478), cVar1 != '\0')) {
                  local_470 = &local_478;
                  local_468 = &local_47c;
                  FUN_146f4f64c(local_490,local_45c,&local_470);
                }
                lVar5 = lVar5 + 4;
              } while (lVar2 * 4 != lVar5);
            }
          }
          else if ((int)local_50 != 0) {
            lVar5 = 0;
            do {
              lVar4 = FUN_146f4320c(param_1,*(undefined4 *)(puVar6 + lVar5));
              if (lVar4 != 0) {
                FUN_146f43c4c(lVar4,local_478);
              }
              lVar5 = lVar5 + 4;
            } while (lVar2 * 4 != lVar5);
          }
        }
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar8);
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_4b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f446fe FUN_146f446fe body=273 status=ok
// SIG undefined FUN_146f446fe(void)

void FUN_146f446fe(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if ((int)param_1[9] != 0) {
    uVar2 = *param_2;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar4 +
                    (longlong)
                    (int)((int)param_1[9] - 1U &
                         ((uint)(uVar2 >> 0x20) & 0xfffffff) * 0x17 + (int)uVar2) * 4);
    while (iVar5 = iVar6, iVar5 != -1) {
      lVar7 = *param_1;
      iVar6 = *(int *)(lVar7 + 0x10 + (longlong)iVar5 * 0x18);
      if (((*(ulonglong *)(lVar7 + (longlong)iVar5 * 0x18) ^ uVar2) & 0xfffffffffffffff) == 0) {
        do {
          iVar1 = *(int *)(param_3 + 0x408);
          *(uint *)(param_3 + 0x408) = iVar1 + 1U;
          if (*(uint *)(param_3 + 0x40c) < iVar1 + 1U) {
            FUN_14063e724(param_3,iVar1);
          }
          lVar3 = *(longlong *)(param_3 + 0x400);
          if (*(longlong *)(param_3 + 0x400) == 0) {
            lVar3 = param_3;
          }
          *(undefined4 *)(lVar3 + (longlong)iVar1 * 4) =
               *(undefined4 *)(lVar7 + (longlong)iVar5 * 0x18 + 8);
          do {
            iVar5 = iVar6;
            if (iVar5 == -1) {
              return;
            }
            lVar7 = *param_1;
            iVar6 = *(int *)(lVar7 + 0x10 + (longlong)iVar5 * 0x18);
          } while (((*(ulonglong *)(lVar7 + (longlong)iVar5 * 0x18) ^ *param_2) & 0xfffffffffffffff)
                   != 0);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 146f44810 FUN_146f44810 body=107 status=ok
// SIG undefined FUN_146f44810(void)

void FUN_146f44810(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)(int)(*(longlong **)(param_1 + 0x218))[1];
  if (lVar3 != 0) {
    lVar2 = **(longlong **)(param_1 + 0x218);
    lVar4 = 0;
    do {
      uVar1 = *(uint *)(lVar2 + 0x10 + lVar4);
      if ((uVar1 & 0x20) != 0) {
        FUN_146f42fa6(param_1,*(undefined4 *)(lVar2 + lVar4),(uVar1 & 0x10) >> 4,(uVar1 & 8) >> 3);
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar3 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 146f4487c FUN_146f4487c body=187 status=ok
// SIG undefined FUN_146f4487c(void)

void FUN_146f4487c(undefined8 *param_1,int param_2,longlong *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *_Dst;
  ulonglong uVar3;
  
  if (*(uint *)((longlong)param_1 + 0xc) < (uint)(param_2 + *(int *)(param_1 + 1))) {
    uVar2 = param_2 + *(int *)(param_1 + 1) + 0x20;
    uVar3 = (ulonglong)uVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
    _Dst = (undefined4 *)(*param_3 + 0xfU & 0xfffffffffffffff0);
    puVar1 = _Dst + uVar3 * 6;
    if ((undefined4 *)param_3[1] < puVar1) {
      FUN_140023dd8(param_3,uVar2 * 0x18 + 0x10);
      _Dst = (undefined4 *)(*param_3 + 0xfU & 0xfffffffffffffff0);
      puVar1 = _Dst + uVar3 * 6;
    }
    *param_3 = (longlong)puVar1;
    if (uVar3 != 0) {
      puVar1 = _Dst;
      do {
        *puVar1 = 0;
        *(undefined8 *)(puVar1 + 2) = 0;
        *(undefined1 *)(puVar1 + 4) = 0;
        puVar1 = puVar1 + 6;
      } while (puVar1 != _Dst + uVar3 * 6);
    }
    if ((ulonglong)*(uint *)(param_1 + 1) != 0) {
      memcpy(_Dst,(void *)*param_1,(ulonglong)*(uint *)(param_1 + 1) * 0x18);
    }
    *param_1 = _Dst;
  }
  return;
}



// FUNCTION 146f44938 FUN_146f44938 body=109 status=ok
// SIG undefined FUN_146f44938(void)

void FUN_146f44938(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f2ac26(param_1,iVar1);
    }
    FUN_146f1b20c((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146f5077e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f449a6 FUN_146f449a6 body=153 status=ok
// SIG undefined FUN_146f449a6(void)

undefined8 * FUN_146f449a6(undefined8 *param_1,uint param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  uVar3 = (ulonglong)param_2;
  *(uint *)((longlong)param_1 + 0xc) = param_2 + 0x20;
  puVar1 = (undefined4 *)(*param_3 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar1 + uVar3 * 6 + 0xc0;
  if ((undefined4 *)param_3[1] < puVar2) {
    FUN_140023dd8(param_3,param_2 * 0x18 + 0x310);
    puVar1 = (undefined4 *)(*param_3 + 0xfU & 0xfffffffffffffff0);
    puVar2 = puVar1 + uVar3 * 6 + 0xc0;
  }
  *param_3 = (longlong)puVar2;
  puVar2 = puVar1;
  do {
    *puVar2 = 0;
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    puVar2 = puVar2 + 6;
  } while (puVar2 != puVar1 + (uVar3 + 0x20) * 6);
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 146f44a40 FUN_146f44a40 body=88 status=ok
// SIG undefined FUN_146f44a40(void)

void FUN_146f44a40(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x128 + *param_1);
  FUN_146f4aabc(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x128),(longlong)(int)(~param_2 + iVar1) * 0x128);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_146f5081a(param_1);
  return;
}



// FUNCTION 146f44a98 FUN_146f44a98 body=166 status=ok
// SIG undefined FUN_146f44a98(void)

void FUN_146f44a98(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_146f15edc(param_1 + 0x3b0,2,0);
  if (cVar2 == '\0') {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x410);
  while (((lVar3 = *(longlong *)(lVar1 + 0x10), lVar3 != 0 &&
          (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 0x14))) &&
         (lVar3 = FUN_146f15b0a(), lVar3 != 0))) {
    FUN_142a9bc96(param_1,param_2,lVar3);
    FUN_146f15b92(lVar1);
    if (*(longlong *)(param_2 + 8) != 0) {
      return;
    }
  }
  do {
    lVar3 = *(longlong *)(lVar1 + 8);
    if (lVar3 == 0) {
      return;
    }
    if (*(int *)(lVar3 + 0x10) == *(int *)(lVar3 + 0x14)) {
      return;
    }
    lVar3 = FUN_146f15b0a();
    if (lVar3 == 0) {
      return;
    }
    FUN_142a9bc96(param_1,param_2,lVar3);
    FUN_146f15bd4(lVar1);
  } while (*(longlong *)(param_2 + 8) == 0);
  return;
}



// FUNCTION 146f44b3e FUN_146f44b3e body=193 status=ok
// SIG undefined FUN_146f44b3e(void)

void FUN_146f44b3e(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < 1) {
    return;
  }
  lVar7 = 0;
  bVar4 = false;
  do {
    uVar5 = (uint)lVar7;
    lVar7 = (longlong)(int)uVar5;
    lVar1 = *param_1 + lVar7 * 4;
    lVar9 = 0;
    while (*(int *)(lVar1 + lVar9 * 4) != *param_2) {
      lVar2 = lVar7 + lVar9;
      lVar9 = lVar9 + 1;
      if ((longlong)iVar3 <= lVar2 + 1) {
        if (!bVar4) {
          return;
        }
        goto LAB_146f44bdd;
      }
    }
    iVar8 = (int)lVar9;
    if (~uVar5 + iVar3 != iVar8) {
      iVar6 = (~uVar5 + iVar3) - iVar8;
      if (0 < iVar6) {
        iVar6 = 1;
      }
      memmove((void *)(lVar1 + lVar9 * 4),(void *)(*param_1 + (longlong)(iVar3 - iVar6) * 4),
              (longlong)iVar6 << 2);
      iVar3 = (int)param_1[1];
    }
    lVar7 = lVar7 + lVar9;
    iVar3 = iVar3 + -1;
    *(int *)(param_1 + 1) = iVar3;
    bVar4 = true;
  } while ((int)(uVar5 + iVar8) < iVar3);
LAB_146f44bdd:
  FUN_144780a3c(param_1);
  return;
}



// FUNCTION 146f44c00 FUN_146f44c00 body=247 status=ok
// SIG undefined FUN_146f44c00(void)

void FUN_146f44c00(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0x48) = param_2;
  uVar4 = *(uint *)(param_1 + 0x50) & 0xfffffffe | (uint)*(byte *)((longlong)param_3 + 0x24);
  *(uint *)(param_1 + 0x50) = uVar4;
  *(uint *)(param_1 + 0x50) = (uVar4 & 0xfffffffd) + (uint)*(byte *)((longlong)param_3 + 0x25) * 2;
  lVar1 = *param_3;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  *(longlong *)(param_1 + 0x38) = lVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x1350,0x10);
  *puVar2 = FUN_146f508c6;
  puVar2[1] = 0;
  puVar2 = puVar2 + 2;
  FUN_146f508ea(puVar2,param_1,param_3);
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(param_1 + 0x28) = puVar2;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
    puVar2 = *(undefined8 **)(param_1 + 0x28);
  }
  FUN_146f44cf8(puVar2,param_3);
  uVar3 = FUN_140b631de();
  FUN_146f45156(uVar3,&local_28,param_1,&LAB_146f4521a);
  *(undefined8 *)(param_1 + 0x30) = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f44cf8 FUN_146f44cf8 body=1116 status=ok
// SIG undefined FUN_146f44cf8(void)

void FUN_146f44cf8(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [36];
  undefined4 local_b4;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2[7] != 0) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x48);
    lVar8 = FUN_146f2948c(param_2[7],DAT_14c9995f4);
    if (lVar8 != 0) {
      lVar8 = FUN_146f2948c(param_2[7],DAT_14c9995fc);
      if (lVar8 != 0) {
        lVar8 = param_1 + 0x160;
        local_88 = CONCAT44(*(undefined4 *)(param_2 + 1),uVar2);
        local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_2 + 2));
        local_80 = CONCAT44(*(undefined4 *)((longlong)param_2 + 0x14),
                            *(undefined4 *)((longlong)param_2 + 0xc));
        FUN_142a802b4(lVar8);
        FUN_146f4b820(param_1 + 0x560,local_50,param_1);
        local_b4 = *(undefined4 *)(param_1 + 0x160);
        uVar3 = *(undefined4 *)(param_1 + 0x16c);
        if (*(char *)((longlong)param_2 + 0x25) == '\x01') {
          local_80 = CONCAT44(uVar3,uVar2);
          local_88 = lVar8;
          FUN_142a76828(param_1 + 0x5b0);
        }
        local_a0 = param_1 + 0x610;
        local_88 = *(undefined8 *)(param_1 + 0x50);
        local_78 = CONCAT44(uVar3,local_b4);
        local_70 = CONCAT44(*(undefined4 *)((longlong)param_2 + 0x1c),
                            *(undefined4 *)(param_1 + 0x878));
        local_80 = lVar8;
        FUN_146f14ae6(local_a0,&local_88);
        local_90 = param_1 + 0xb68;
        local_80._4_4_ = *(undefined4 *)(param_2 + 4);
        local_88 = lVar8;
        local_80._0_4_ = uVar3;
        FUN_146f19ff0(local_90,&local_88);
        local_88 = param_1 + 0x60;
        FUN_146f14908(param_1 + 0x7b0,&local_88);
        local_88._0_4_ = uVar3;
        FUN_146f262b8(param_1 + 0x1050,&local_88);
        local_88 = CONCAT44(local_88._4_4_,uVar3);
        FUN_146f53e8a(param_1 + 0x1080,&local_88);
        lVar1 = param_1 + 0x1210;
        local_80 = CONCAT44(local_80._4_4_,uVar3);
        local_88 = param_1 + 0x1110;
        FUN_146f16a14(lVar1,&local_88);
        local_70 = local_a0;
        local_60 = local_b4;
        local_58 = *(undefined4 *)((longlong)param_2 + 0x1c);
        local_68 = *(undefined8 *)(param_1 + 0x50);
        local_b0 = param_1 + 0x848;
        local_a8 = lVar8;
        local_98 = lVar1;
        local_88 = lVar1;
        local_80 = param_1 + 0x848;
        local_78 = lVar8;
        local_5c = uVar3;
        FUN_146f16bb6(param_1 + 0x1110,&local_88);
        lVar8 = *(longlong *)(param_1 + 0x50);
        if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_14689c22e(lVar8);
        }
        lVar6 = local_90;
        lVar9 = local_a8;
        lVar1 = local_b0;
        local_70 = local_b0;
        local_80 = local_a8;
        local_78 = local_90;
        local_68 = CONCAT44(*(undefined4 *)(param_2 + 4),uVar3);
        local_88 = lVar8;
        FUN_146f20c7e(param_1 + 0x880,&local_88);
        FUN_146f4b960(param_1);
        local_88 = lVar9;
        local_78 = lVar1;
        local_70 = lVar6;
        local_68 = local_98;
        local_5c = *(undefined4 *)(param_1 + 0x878);
        local_80 = param_1 + 0x880;
        local_60 = uVar3;
        FUN_146f160f0(param_1 + 0xbe0,&local_88);
        lVar8 = *(longlong *)(param_1 + 0x50);
        if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_14689c22e(lVar8);
        }
        lVar1 = local_a8;
        local_78 = local_b0;
        local_80 = local_a8;
        local_70 = CONCAT44(local_70._4_4_,uVar3);
        local_88 = lVar8;
        FUN_146f3817e(param_1 + 0xca0);
        plVar5 = (longlong *)*param_2;
        *(longlong **)(param_1 + 0x808) = plVar5;
        (**(code **)(*plVar5 + 0x2a0))(plVar5,*(undefined8 *)(param_1 + 0x50));
        FUN_146f29920(param_1 + 0xd38,*(undefined8 *)(param_1 + 0x50));
        lVar8 = FUN_146f1aaa0(DAT_14c951640);
        uVar4 = *(uint *)(lVar8 + 0xc);
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        FUN_1447f71cc(lVar9,0x40000000);
        *(longlong *)(param_1 + 0x810) = lVar8;
        local_88 = *(longlong *)(param_1 + 0x50);
        local_80 = CONCAT71(local_80._1_7_,*(undefined1 *)(local_88 + 0x50)) & 0xffffffffffffff01;
        FUN_146f23b2a(param_1 + 0xf00);
        if ((longlong *)param_2[5] != (longlong *)0x0 && *(int *)(param_2 + 6) != 0) {
          cVar7 = (**(code **)(*(longlong *)param_2[5] + 0x30))();
          if (cVar7 != '\0') {
            local_88 = 0;
            local_80 = local_80 & 0xffffffff00000000;
            FUN_146f4bc4a(&local_88,param_2 + 5);
            FUN_146f4bb62(param_1 + 0x12c8,local_50,&local_88);
            FUN_1449db362(&local_88);
          }
        }
        FUN_146f14ba4(param_1 + 0x1308,*(undefined4 *)(param_1 + 0x878));
        local_88 = lVar1;
        FUN_146f6025c(param_1 + 0x12a0);
        if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
    }
  }
  FUN_140033559(".\\Runtime/Experimental/Iris/Core/Private/Iris/ReplicationSystem/ReplicationSystem.cpp"
                ,0x78,L"Cannot initialize ReplicationSystem with invalid NetTokenStore");
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
}



// FUNCTION 146f45156 FUN_146f45156 body=195 status=ok
// SIG undefined FUN_146f45156(void)

undefined8
FUN_146f45156(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  local_48 = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x28,&local_50);
  *puVar1 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149f9e020;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f45220 FUN_146f45220 body=159 status=ok
// SIG undefined FUN_146f45220(void)

uint FUN_146f45220(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar3 = FUN_140b631de();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14480f766(uVar3);
  }
  FUN_146f452c0(*(undefined8 *)(param_1 + 0x28));
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    (**(code **)(lVar4 + -0x10))(lVar4 + -0x10);
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  FUN_144757f48(lVar4,0x40000000);
  uVar2 = *(uint *)(lVar4 + 0xc);
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  do {
    uVar2 = *(uint *)(lVar4 + 8);
    if ((uVar2 >> 0x15 & 1) != 0) break;
    LOCK();
    uVar1 = *(uint *)(lVar4 + 8);
    bVar5 = uVar2 == uVar1;
    if (bVar5) {
      *(uint *)(lVar4 + 8) = uVar2 | 0x200000;
      uVar1 = uVar2;
    }
    uVar2 = uVar1;
    UNLOCK();
  } while (!bVar5);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return uVar2;
}



// FUNCTION 146f452c0 FUN_146f452c0 body=295 status=ok
// SIG undefined FUN_146f452c0(void)

void FUN_146f452c0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  FUN_146f38286(param_1 + 0xca0);
  FUN_146f2138e(param_1 + 0x880);
  FUN_146f3a3f6(param_1 + 0x848);
  FUN_146f16c9e(param_1 + 0x1110);
  FUN_146f14c78(param_1 + 0x610);
  if (*(longlong *)(param_1 + 0x5f8) != 0) {
    FUN_146f17f04(param_1 + 0x5b0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x808) + 0x2a8))();
  lVar3 = *(longlong *)(param_1 + 0x810);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    FUN_14482b126(lVar2,0x40000000);
    FUN_144757f48(lVar3,0x40000000);
    uVar1 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    do {
      uVar1 = *(uint *)(lVar3 + 8);
      if ((uVar1 >> 0x15 & 1) != 0) break;
      LOCK();
      bVar4 = uVar1 == *(uint *)(lVar3 + 8);
      if (bVar4) {
        *(uint *)(lVar3 + 8) = uVar1 | 0x200000;
      }
      UNLOCK();
    } while (!bVar4);
    *(undefined8 *)(param_1 + 0x810) = 0;
  }
  FUN_140457ffc(param_1 + 0x560,param_1);
  FUN_146f27ac4(param_1 + 0x160);
  return;
}



// FUNCTION 146f453e8 FUN_146f453e8 body=9 status=ok
// SIG undefined FUN_146f453e8(void)

longlong FUN_146f453e8(longlong param_1)

{
  return *(longlong *)(param_1 + 0x28) + 0x60;
}



// FUNCTION 146f453f2 FUN_146f453f2 body=567 status=ok
// SIG undefined FUN_146f453f2(void)

void FUN_146f453f2(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  ulonglong _Size;
  uint uVar7;
  longlong lVar8;
  void *_Dst;
  ulonglong uVar9;
  undefined1 auStack_2c8 [32];
  undefined1 *local_2a8;
  undefined4 local_2a0;
  uint local_28c;
  longlong local_288;
  undefined8 *local_280;
  ulonglong local_278;
  longlong local_270;
  undefined1 *local_268;
  undefined4 local_260;
  undefined1 local_258 [512];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  lVar8 = *(longlong *)(param_1 + 0x28);
  iVar6 = *(int *)(lVar8 + 0x1320);
  if (iVar6 != 0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0x8000000000;
    if (iVar6 == 1) {
      local_28c = 0xffffffff >> (-*(char *)(lVar8 + 0x1318) & 0x1fU);
      uVar1 = *(uint *)(lVar8 + 0x1310);
      _Size = 0;
      _Dst = *(void **)(lVar8 + 0x1308);
      if ((ulonglong)uVar1 != 0) {
        local_270 = *(longlong *)(lVar8 + 0x868);
        local_278 = (ulonglong)(uVar1 - 1);
        uVar9 = 0;
        local_288 = param_1;
        local_280 = param_2;
        do {
          uVar7 = 0xffffffff;
          if (uVar9 == local_278) {
            uVar7 = local_28c;
          }
          uVar7 = uVar7 & *(uint *)((longlong)_Dst + uVar9 * 4) & *(uint *)(local_270 + uVar9 * 4);
          iVar6 = (int)_Size;
          if (uVar7 != 0) {
            do {
              if ((uVar7 & 1) != 0) {
                lVar8 = (longlong)(int)local_50;
                uVar4 = (int)local_50 + 1;
                local_50 = CONCAT44(local_50._4_4_,uVar4);
                if (local_50._4_4_ < uVar4) {
                  FUN_146f52c56(local_258);
                }
                puVar5 = local_58;
                if (local_58 == (undefined1 *)0x0) {
                  puVar5 = local_258;
                }
                *(int *)(puVar5 + lVar8 * 4) = (int)_Size;
              }
              _Size = (ulonglong)((int)_Size + 1);
              bVar2 = 1 < uVar7;
              uVar7 = uVar7 >> 1;
            } while (bVar2);
          }
          uVar9 = uVar9 + 1;
          _Size = (ulonglong)(iVar6 + 0x20);
        } while (uVar9 != uVar1);
        _Dst = *(void **)(*(longlong *)(local_288 + 0x28) + 0x1308);
        _Size = (longlong)*(int *)(*(longlong *)(local_288 + 0x28) + 0x1310) << 2;
        param_2 = local_280;
      }
      memset(_Dst,0,_Size);
    }
    else if (iVar6 == 2) {
      uVar3 = FUN_146efd25e(*(undefined8 *)(lVar8 + 0x868),*(undefined4 *)(lVar8 + 0x878),0,
                            0xffffffff);
      FUN_146f4562a(local_258,uVar3);
      local_2a8 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        local_2a8 = local_258;
      }
      local_2a0 = (int)local_50;
      FUN_146efd1b6(*(undefined8 *)(lVar8 + 0x868),*(undefined4 *)(lVar8 + 0x878),0,0xffffffff);
    }
    local_268 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      local_268 = local_258;
    }
    local_260 = (int)local_50;
    (*(code *)*param_2)(param_2[1]);
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f4562a FUN_146f4562a body=138 status=ok
// SIG undefined FUN_146f4562a(void)

void FUN_146f4562a(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x208);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x208) = param_2;
    if ((uint)(*(int *)(param_1 + 0x20c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f52c56(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 4),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x208) = param_2;
    FUN_146f52d64(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f456b6 FUN_146f456b6 body=85 status=ok
// SIG undefined FUN_146f456b6(void)

void FUN_146f456b6(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x12e4) = 0;
  FUN_146f4c1b2(param_1 + 0x818);
  FUN_142a81142(param_1 + 0x160);
  FUN_142a8de40(*(undefined8 *)(param_1 + 0x808));
  FUN_146f16a32(param_1 + 0x1210);
                    /* WARNING: Could not recover jumptable at 0x000146f45704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x808) + 0x2c0))();
  return;
}



// FUNCTION 146f4570c FUN_146f4570c body=18 status=ok
// SIG undefined FUN_146f4570c(void)

void FUN_146f4570c(longlong param_1)

{
  FUN_142a8d816(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x808),0);
  return;
}



// FUNCTION 146f4571e FUN_146f4571e body=88 status=ok
// SIG undefined FUN_146f4571e(void)

void FUN_146f4571e(longlong param_1,undefined4 param_2)

{
  thunk_FUN_146f16ee6(param_1 + 0x1110);
  FUN_146f3891a(param_1 + 0xca0,param_2);
  FUN_142a7c1c0(param_1 + 0x880,param_2);
  FUN_146f1653e(param_1 + 0xbe0,param_2);
  FUN_146f3a5e6(param_1 + 0x848,param_2);
  return;
}



// FUNCTION 146f45776 FUN_146f45776 body=74 status=ok
// SIG undefined FUN_146f45776(void)

void FUN_146f45776(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_146f18900(*(longlong *)(param_1 + 0x28) + 0x160);
  if (iVar1 != 0) {
    FUN_146f38464(*(longlong *)(param_1 + 0x28) + 0xca0,iVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 146f457c0 FUN_146f457c0 body=69 status=ok
// SIG undefined FUN_146f457c0(void)

undefined8 FUN_146f457c0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    iVar2 = FUN_146f18900(lVar1 + 0x160);
    if (iVar2 != 0) {
      uVar3 = FUN_142a8abc4(lVar1 + 0xca0,iVar2,param_3);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 146f45806 FUN_146f45806 body=17 status=ok
// SIG undefined FUN_146f45806(void)

void FUN_146f45806(longlong param_1)

{
  FUN_146f384f4(*(longlong *)(param_1 + 0x28) + 0xca0);
  return;
}



// FUNCTION 146f45818 FUN_146f45818 body=321 status=ok
// SIG undefined FUN_146f45818(void)

void FUN_146f45818(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar6 = 0;
  if (DAT_14c75f483 == '\x01') {
    plVar2 = *(longlong **)(param_1 + 0x28);
    iVar6 = 0;
    iVar8 = 0;
    iVar7 = 0;
    if (param_4 != 0) {
      local_60 = 0;
      FUN_14485c47a(&local_60,param_4,param_5);
      iVar8 = (int)local_60;
      iVar7 = local_60._4_4_;
    }
    uVar3 = FUN_144a78877(iVar8,iVar7);
    if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
      plVar5 = plVar2 + 7;
      if ((longlong *)plVar2[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar2[8];
      }
      iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar2[9] - 1U & uVar3) * 4);
      if (iVar4 != -1) {
        do {
          piVar1 = (int *)(*plVar2 + (longlong)iVar4 * 0x14);
          if ((*piVar1 == iVar8) && (*(int *)(*plVar2 + 4 + (longlong)iVar4 * 0x14) == iVar7)) {
            iVar6 = 0;
            if (piVar1 + 2 != (int *)0x0 && piVar1 != (int *)0x0) {
              iVar6 = piVar1[2];
            }
            break;
          }
          iVar4 = piVar1[3];
        } while (iVar4 != -1);
      }
    }
  }
  local_60 = param_2;
  local_58 = param_3;
  local_50 = param_4;
  FUN_142a7dbb6(*(longlong *)(param_1 + 0x28) + 0xf00,&local_60,param_5,iVar6);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f4595a FUN_146f4595a body=26 status=ok
// SIG undefined FUN_146f4595a(void)

void FUN_146f4595a(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_146f3a48c(*(longlong *)(param_1 + 0x28) + 0x848,*(undefined4 *)(param_1 + 0x48),param_2,
                param_3);
  return;
}



// FUNCTION 146f45974 FUN_146f45974 body=91 status=ok
// SIG undefined FUN_146f45974(void)

void FUN_146f45974(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x868) +
                (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (longlong)(int)param_2 * 0x28 + *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x848);
  }
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_3);
  }
  *(longlong *)(lVar1 + 0x18) = param_3;
  return;
}



// FUNCTION 146f459d0 FUN_146f459d0 body=63 status=ok
// SIG undefined FUN_146f459d0(void)

undefined8 FUN_146f459d0(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (((param_2 < *(uint *)(lVar1 + 0x878)) &&
      ((*(uint *)(*(longlong *)(lVar1 + 0x868) + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f)
       & 1) != 0)) &&
     (lVar1 = (longlong)(int)param_2 * 0x28 + *(longlong *)(lVar1 + 0x848), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x18);
  }
  return 0;
}



// FUNCTION 146f45a10 FUN_146f45a10 body=116 status=ok
// SIG undefined FUN_146f45a10(void)

undefined8 FUN_146f45a10(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar1 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x58);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             (int)param_2 + ((uint)(param_2 >> 0x20) & 0xfffffff) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = (*(ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x18) ^ param_2)
                << 4;
        uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 == 0);
        if (lVar1 == 0) {
          return uVar2;
        }
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x18 + 0x10);
      } while (iVar3 != -1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 146f45a84 FUN_146f45a84 body=86 status=ok
// SIG undefined FUN_146f45a84(void)

undefined8 FUN_146f45a84(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  iVar2 = FUN_146f18900(lVar1 + 0x160);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x3d0) + (longlong)(iVar2 / 100) * 8) + 0x10 +
             (ulonglong)(uint)(iVar2 % 100) * 0x38);
  }
  return uVar3;
}



// FUNCTION 146f45ada FUN_146f45ada body=98 status=ok
// SIG undefined FUN_146f45ada(void)

void FUN_146f45ada(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_146f18900(*(longlong *)(param_1 + 0x28) + 0x160);
  if ((iVar1 != 0) && (*(char *)(*(longlong *)(param_1 + 0x28) + 0x12e4) == '\0')) {
    FUN_142a7388e(*(longlong *)(param_1 + 0x28) + 0xbe0,iVar1,param_3);
    FUN_142a7bd5a(*(longlong *)(param_1 + 0x28) + 0x880,iVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 146f45b3c FUN_146f45b3c body=81 status=ok
// SIG undefined FUN_146f45b3c(void)

ulonglong FUN_146f45b3c(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = FUN_146f18900(*(longlong *)(param_1 + 0x28) + 0x160);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if ((*(byte *)(lVar1 + 0xb60) & 8) != 0) {
      uVar3 = FUN_146f2180c(lVar1 + 0x880,iVar2);
      return uVar3;
    }
    uVar3 = (ulonglong)*(ushort *)(*(longlong *)(lVar1 + 0x940) + (longlong)iVar2 * 2);
  }
  return uVar3;
}



// FUNCTION 146f45b8e FUN_146f45b8e body=84 status=ok
// SIG undefined FUN_146f45b8e(void)

undefined8 FUN_146f45b8e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_146f18900(*(longlong *)(param_1 + 0x28) + 0x160);
  if ((iVar1 != 0) && (*(char *)(*(longlong *)(param_1 + 0x28) + 0x12e4) == '\0')) {
    uVar2 = FUN_142a7bde6(*(longlong *)(param_1 + 0x28) + 0x880,iVar1,param_3,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 146f45be2 FUN_146f45be2 body=152 status=ok
// SIG undefined FUN_146f45be2(void)

longlong * FUN_146f45be2(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar1 = lVar2 + 0xb68;
  FUN_146f1a120(lVar1);
  if (*param_2 == 0) {
    FUN_142a776d0(lVar1,&local_38,param_3);
    *param_2 = local_38;
    if (local_38 != 0) {
      FUN_142a7c40a(lVar2 + 0x880);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f45c7e FUN_146f45c7e body=121 status=ok
// SIG undefined FUN_146f45c7e(void)

ulonglong * FUN_146f45c7e(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x28);
  FUN_146f1a120(lVar1 + 0xb68,&local_28);
  if ((local_28 == 0) ||
     ((*(uint *)(*(longlong *)(lVar1 + 0xa60) + (ulonglong)((uint)(local_28 >> 3) & 0x1ffffc)) >>
       ((uint)local_28 & 0x1f) & 1) == 0)) {
    local_28 = 0;
  }
  *param_2 = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f45cf8 FUN_146f45cf8 body=166 status=ok
// SIG undefined FUN_146f45cf8(void)

void FUN_146f45cf8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_146efd136(param_2);
  if ((cVar1 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x28) + 0x12e4) == '\0')) {
    FUN_146f45c7e(param_1,&local_38,param_2);
    if (local_38 != 0) {
      FUN_142a7c4be(*(longlong *)(param_1 + 0x28) + 0x880,local_38,param_3,param_4);
      FUN_142a73722(*(longlong *)(param_1 + 0x28) + 0xbe0,local_38);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f45da0 FUN_146f45da0 body=25 status=ok
// SIG undefined FUN_146f45da0(void)

undefined8 FUN_146f45da0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = FUN_146f1a26a(*(longlong *)(param_1 + 0x28) + 0xb68);
  return uVar1;
}



// FUNCTION 146f45dba FUN_146f45dba body=129 status=ok
// SIG undefined FUN_146f45dba(void)

void FUN_146f45dba(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  if (param_2 != 0) {
    cVar2 = FUN_146f1a26a(*(longlong *)(param_1 + 0x28) + 0xb68);
    if (cVar2 != '\0') {
      iVar3 = FUN_146f18900(*(longlong *)(param_1 + 0x28) + 0x160,param_3);
      if ((iVar3 != 0) && (lVar1 = *(longlong *)(param_1 + 0x28), *(char *)(lVar1 + 0x12e4) == '\0')
         ) {
        FUN_142a778ce(lVar1 + 0xb68,param_2,iVar3);
        FUN_142a7d1b8(lVar1 + 0x880,param_2,iVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146f45e3c FUN_146f45e3c body=232 status=ok
// SIG undefined FUN_146f45e3c(void)

void FUN_146f45e3c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar4 = FUN_146f18900(lVar1 + 0x160);
  if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x12e4) == '\0') {
    local_58 = 0;
    uStack_50 = 0;
    FUN_146f1a564(lVar1 + 0xb68,uVar4,&local_58);
    lVar3 = local_58;
    lVar5 = (longlong)(int)uStack_50;
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar3 + lVar6);
        FUN_142a778ce(lVar1 + 0xb68,uVar2,uVar4);
        FUN_142a7d1b8(lVar1 + 0x880,uVar2,uVar4);
        lVar6 = lVar6 + 8;
      } while (lVar5 * 8 != lVar6);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f45f26 FUN_146f45f26 body=96 status=ok
// SIG undefined FUN_146f45f26(void)

undefined8 FUN_146f45f26(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    cVar2 = FUN_146f1a26a(*(longlong *)(param_1 + 0x28) + 0xb68);
    if (cVar2 != '\0') {
      lVar1 = *(longlong *)(param_1 + 0x28);
      uVar3 = FUN_146f18900(lVar1 + 0x160,param_3);
      uVar4 = FUN_146f1a40c(lVar1 + 0xb68,param_2,uVar3);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 146f45f86 FUN_146f45f86 body=116 status=ok
// SIG undefined FUN_146f45f86(void)

void FUN_146f45f86(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  if (param_2 != 0) {
    cVar3 = FUN_146f1a26a(*(longlong *)(param_1 + 0x28) + 0xb68);
    if ((cVar3 != '\0') || (((uint)param_2 & 0xffffff) - 1 < 3)) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar1 = lVar2 + 0x880;
      FUN_142a7c7b2(lVar1,param_2);
      FUN_142a7c478(lVar1,param_2);
      FUN_142a777bc(lVar2 + 0xb68,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 146f45ffa FUN_146f45ffa body=78 status=ok
// SIG undefined FUN_146f45ffa(void)

undefined8 FUN_146f45ffa(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    cVar1 = FUN_146f1a26a(*(longlong *)(param_1 + 0x28) + 0xb68);
    if ((cVar1 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x28) + 0x12e4) == '\0')) {
      uVar2 = FUN_142a7c6d8(*(longlong *)(param_1 + 0x28) + 0x880,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 146f46048 FUN_146f46048 body=97 status=ok
// SIG undefined FUN_146f46048(void)

void FUN_146f46048(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = FUN_146f1a26a(*(longlong *)(param_1 + 0x28) + 0xb68);
    if ((cVar1 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x28) + 0x12e4) == '\0')) {
      FUN_142a7d05a(*(longlong *)(param_1 + 0x28) + 0x880,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 146f460aa FUN_146f460aa body=170 status=ok
// SIG undefined FUN_146f460aa(void)

void FUN_146f460aa(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 auStack_58 [32];
  int *local_38;
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    cVar1 = FUN_146f1a26a(*(longlong *)(param_1 + 0x28) + 0xb68);
    if ((cVar1 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x28) + 0x12e4) == '\0')) {
      local_2c = (int)param_3[2];
      local_38 = (int *)*param_3;
      local_30 = local_2c + 0x1fU >> 5;
      if (local_2c == 0) {
        local_38 = &local_2c;
      }
      FUN_142a7ccd8(*(longlong *)(param_1 + 0x28) + 0x880,param_2,&local_38,param_4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f46156 FUN_146f46156 body=84 status=ok
// SIG undefined FUN_146f46156(void)

undefined8 FUN_146f46156(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_146f18900(*(longlong *)(param_1 + 0x28) + 0x160);
  if ((iVar1 != 0) && (*(char *)(*(longlong *)(param_1 + 0x28) + 0x12e4) == '\0')) {
    uVar2 = FUN_142a737a0(*(longlong *)(param_1 + 0x28) + 0xbe0,iVar1,param_3,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 146f461aa FUN_146f461aa body=73 status=ok
// SIG undefined FUN_146f461aa(void)

undefined8 FUN_146f461aa(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_146f18900(*(longlong *)(param_1 + 0x28) + 0x160);
  if (iVar1 != 0) {
    uVar2 = FUN_142a73974(*(longlong *)(param_1 + 0x28) + 0xbe0,iVar1,param_3,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 146f461f4 FUN_146f461f4 body=81 status=ok
// SIG undefined FUN_146f461f4(void)

void FUN_146f461f4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  iVar2 = FUN_146f18900(lVar1 + 0x160);
  if ((iVar2 != 0) && (*(char *)(*(longlong *)(param_1 + 0x28) + 0x12e4) == '\0')) {
    FUN_146f1710a(lVar1 + 0x1110,iVar2,param_3);
    return;
  }
  return;
}



// FUNCTION 146f46246 FUN_146f46246 body=114 status=ok
// SIG undefined FUN_146f46246(void)

void FUN_146f46246(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar1 = lVar2 + 0x160;
  iVar3 = FUN_146f18900(lVar1);
  if ((iVar3 != 0) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x3f0) + (longlong)(iVar3 / 100) * 8) +
       (longlong)(iVar3 % 100) * 8) != 0)) {
    FUN_146f28e0e(lVar1,param_2,0);
    return;
  }
  return;
}



// FUNCTION 146f462b8 FUN_146f462b8 body=25 status=ok
// SIG undefined FUN_146f462b8(void)

void FUN_146f462b8(longlong param_1,undefined8 param_2)

{
  FUN_146f39fa0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x808),param_2,0x12,1);
  return;
}



// FUNCTION 146f462d2 FUN_146f462d2 body=48 status=ok
// SIG undefined FUN_146f462d2(void)

void FUN_146f462d2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f18900(*(longlong *)(param_1 + 0x28) + 0x160);
  if (iVar1 != 0) {
    FUN_142a769ba(*(undefined4 *)(param_1 + 0x48),iVar1);
    return;
  }
  return;
}



// FUNCTION 146f46302 FUN_146f46302 body=48 status=ok
// SIG undefined FUN_146f46302(void)

void FUN_146f46302(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f18900(*(longlong *)(param_1 + 0x28) + 0x160);
  if (iVar1 != 0) {
    FUN_142a76978(*(undefined4 *)(param_1 + 0x48),iVar1);
    return;
  }
  return;
}



// FUNCTION 146f46332 FUN_146f46332 body=11 status=ok
// SIG undefined FUN_146f46332(void)

undefined4 FUN_146f46332(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x878);
}



// FUNCTION 146f4633e FUN_146f4633e body=10 status=ok
// SIG undefined FUN_146f4633e(void)

longlong FUN_146f4633e(longlong param_1)

{
  return *(longlong *)(param_1 + 0x28) + 0x1050;
}



// FUNCTION 146f46348 FUN_146f46348 body=10 status=ok
// SIG undefined FUN_146f46348(void)

longlong FUN_146f46348(longlong param_1)

{
  return *(longlong *)(param_1 + 0x28) + 0x1080;
}



// FUNCTION 146f46352 FUN_146f46352 body=101 status=ok
// SIG undefined FUN_146f46352(void)

void FUN_146f46352(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146f27d38(&local_28,param_2,*(undefined4 *)(param_1 + 0x48));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x808);
  (**(code **)(*plVar1 + 0x328))(plVar1,local_28,param_3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f463b8 FUN_146f463b8 body=115 status=ok
// SIG undefined FUN_146f463b8(void)

void FUN_146f463b8(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146f27d38(&local_30,param_3,*(undefined4 *)(param_1 + 0x48));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x808);
  (**(code **)(*plVar1 + 0x330))(plVar1,param_2,local_30,param_4);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4642c FUN_146f4642c body=117 status=ok
// SIG undefined FUN_146f4642c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_146f4642c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999a60) {
    FUN_144b3d300(&DAT_14c999a60);
    if (DAT_14c999a60 == -1) {
      DAT_14c999a48 = 0;
      _DAT_14c999a50 = 0;
      _DAT_14c999a58 = 2;
      atexit(FUN_142a9d645);
      _Init_thread_footer(&DAT_14c999a60);
    }
  }
  return &DAT_14c999a48;
}



// FUNCTION 146f464a2 FUN_146f464a2 body=117 status=ok
// SIG undefined FUN_146f464a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_146f464a2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c999a80) {
    FUN_144b3d300(&DAT_14c999a80);
    if (DAT_14c999a80 == -1) {
      DAT_14c999a68 = 0;
      _DAT_14c999a70 = 0;
      _DAT_14c999a78 = 2;
      atexit(FUN_142a9d676);
      _Init_thread_footer(&DAT_14c999a80);
    }
  }
  return &DAT_14c999a68;
}



// FUNCTION 146f46517 FUN_146f46517 body=148 status=ok
// SIG undefined FUN_146f46517(void)

undefined8 FUN_146f46517(undefined8 param_1)

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
  uVar1 = FUN_145b0a69c();
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



// FUNCTION 146f465ac FUN_146f465ac body=184 status=ok
// SIG undefined FUN_146f465ac(void)

void FUN_146f465ac(longlong param_1)

{
  FUN_146f46664();
  FUN_146f46820(param_1);
  FUN_146f468a2(param_1);
  FUN_146f46982(param_1 + 0x318);
  FUN_146f469cc(param_1 + 0x1d0);
  FUN_146f46a0a(param_1 + 0x110);
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_146f46a66(param_1 + 0x30);
  return;
}



// FUNCTION 146f46664 FUN_146f46664 body=443 status=ok
// SIG undefined FUN_146f46664(void)

void FUN_146f46664(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  short sVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_a8 [44];
  int local_7c;
  undefined8 local_78;
  uint local_70 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_7c = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x54);
  if (local_7c != 0) {
    iVar10 = 0;
    do {
      uVar5 = *(uint *)(param_1 + 0x54);
      uVar1 = *(ushort *)
               (*(longlong *)(param_1 + 0x60) + (ulonglong)(*(uint *)(param_1 + 0x58) & uVar5) * 2);
      if (*(uint *)(param_1 + 0x50) != uVar5) {
        *(uint *)(param_1 + 0x54) = uVar5 + 1;
      }
      if (uVar1 != 0) {
        uVar5 = *(uint *)(param_1 + 0x34);
        uVar9 = 0;
        do {
          lVar4 = (ulonglong)(uVar5 & *(uint *)(param_1 + 0x38)) * 0x10;
          if ((*(byte *)(*(longlong *)(param_1 + 0x40) + 0xb + lVar4) & 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar5 = *(uint *)(param_1 + 0x74);
            uVar6 = *(ulonglong *)
                     (*(longlong *)(param_1 + 0x80) +
                     (ulonglong)(*(uint *)(param_1 + 0x78) & uVar5) * 8);
            if (*(uint *)(param_1 + 0x70) != uVar5) {
              *(uint *)(param_1 + 0x74) = uVar5 + 1;
            }
          }
          puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar4);
          local_78 = 0;
          local_70[0] = 3;
          local_70[1] = 2;
          local_70[2] = 1;
          local_70[3] = 0;
          lVar4 = 0;
          do {
            *(short *)((longlong)&local_78 + (ulonglong)*(uint *)((longlong)local_70 + lVar4) * 2) =
                 (short)uVar6;
            uVar6 = uVar6 >> 0x10;
            lVar4 = lVar4 + 4;
          } while (lVar4 != 0x10);
          uVar6 = (ulonglong)(*(uint *)(puVar8 + 1) & 0xfffff);
          lVar4 = *(longlong *)(param_1 + 0xa8);
          uVar2 = *(ushort *)
                   (*(longlong *)(param_1 + 0x98) + 8 +
                   (ulonglong)((*(uint *)(puVar8 + 1) & 0xfffff) << 4));
          FUN_146f482fe(param_1,puVar8,&local_78);
          if (((*(byte *)((longlong)puVar8 + 0xb) & 2) != 0) && (0x40 < uVar2)) {
            FUN_1400020a8(*puVar8);
          }
          sVar7 = *(short *)(lVar4 + uVar6 * 4);
          sVar3 = *(short *)(param_1 + 0x90);
          *(undefined2 *)(lVar4 + 2 + uVar6 * 4) =
               *(undefined2 *)
                (*(longlong *)(param_1 + 0x40) + 0xc +
                (ulonglong)(*(uint *)(param_1 + 0x38) & *(uint *)(param_1 + 0x34)) * 0x10);
          if (sVar7 == sVar3) {
            sVar7 = -0x8000;
          }
          *(short *)(lVar4 + uVar6 * 4) = sVar7;
          *(ushort *)(param_1 + 0x90) = (short)*(undefined4 *)(param_1 + 0x90) + 1U & 0x7fff;
          uVar5 = *(uint *)(param_1 + 0x30);
          if (uVar5 != *(uint *)(param_1 + 0x34)) {
            uVar5 = *(uint *)(param_1 + 0x34) + 1;
            *(uint *)(param_1 + 0x34) = uVar5;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar1);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != local_7c);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f46820 FUN_146f46820 body=128 status=ok
// SIG undefined FUN_146f46820(void)

void FUN_146f46820(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x398);
  local_28 = param_1;
  if (lVar1 != 0) {
    do {
      FUN_142aa233a(&local_28,lVar1);
      lVar1 = *(longlong *)(lVar1 + 0x5f0);
    } while (lVar1 != 0);
  }
  FUN_146f4a1a6(param_1 + 0x390);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1403d43ee(param_1 + 0x340,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f468a2 FUN_146f468a2 body=223 status=ok
// SIG undefined FUN_146f468a2(void)

void FUN_146f468a2(longlong param_1)

{
  ulonglong *puVar1;
  short *psVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x98) + 8);
    *puVar1 = *puVar1 & 0xffffffffffe0ffff;
    iVar3 = *(int *)(param_1 + 0xa0);
    if (0 < (longlong)iVar3) {
      lVar7 = 0;
      lVar5 = 0;
      uVar6 = 0;
      do {
        uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar5 * 2);
        if ((uVar4 & 0x1f0000) != 0) {
          if (0x40 < ((uint)uVar4 & 0xffff)) {
            FUN_1400020a8(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + lVar5 * 2));
          }
          psVar2 = (short *)(*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x2b0) +
                              (ulonglong)
                              ((uint)((uVar6 & 0xffffffff) * 0x51eb851f >> 0x22) & 0xfffffff8)) +
                            lVar7 + (uVar6 / 100) * -200);
          *psVar2 = *psVar2 + -1;
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 8;
        lVar7 = lVar7 + 2;
      } while ((longlong)iVar3 * 8 != lVar5);
    }
  }
  return;
}



// FUNCTION 146f46982 FUN_146f46982 body=74 status=ok
// SIG undefined FUN_146f46982(void)

void FUN_146f46982(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined ***)(param_1 + 0x78) = &PTR_FUN_149f9e0f8;
  FUN_146f4a1a6(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(param_1 + 0x28);
  return;
}



// FUNCTION 146f469cc FUN_146f469cc body=62 status=ok
// SIG undefined FUN_146f469cc(void)

void FUN_146f469cc(longlong *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f46a0a FUN_146f46a0a body=91 status=ok
// SIG undefined FUN_146f46a0a(void)

void FUN_146f46a0a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x60;
  do {
    lVar1 = *(longlong *)(param_1 + lVar2);
    if (lVar1 != 0) {
      FUN_146f14ffe(lVar1);
      thunk_FUN_1400020a8(lVar1,0x30);
    }
    lVar2 = lVar2 + -8;
  } while (lVar2 != 0x48);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_146f4cdc6(param_1);
  return;
}



// FUNCTION 146f46a66 FUN_146f46a66 body=100 status=ok
// SIG undefined FUN_146f46a66(void)

void FUN_146f46a66(undefined4 *param_1)

{
  param_1[0x11] = param_1[0x10];
  param_1[0x16] = 0;
  if (*(longlong *)(param_1 + 0x14) != 0) {
    FUN_1400020a8();
  }
  param_1[9] = param_1[8];
  param_1[0xe] = 0;
  if (*(longlong *)(param_1 + 0xc) != 0) {
    FUN_1400020a8();
  }
  param_1[1] = *param_1;
  param_1[6] = 0;
  if (*(longlong *)(param_1 + 4) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f46aca FUN_146f46aca body=57 status=ok
// SIG undefined FUN_146f46aca(void)

undefined8 FUN_146f46aca(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_146f247dc(*(longlong *)(param_1 + 0x178) + 0xea0);
  if (cVar1 != '\0') {
    return 0;
  }
  uVar2 = FUN_146f157a8(param_1 + 0x110);
  return uVar2;
}



// FUNCTION 146f46b04 FUN_146f46b04 body=118 status=ok
// SIG undefined FUN_146f46b04(void)

void FUN_146f46b04(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f52e18(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146f52e9e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f46b7c FUN_146f46b7c body=118 status=ok
// SIG undefined FUN_146f46b7c(void)

void FUN_146f46b7c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f52f3a(param_1);
    }
    memset((void *)((longlong)iVar1 * 4 + *param_1),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146f52fc0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f46bf4 FUN_146f46bf4 body=74 status=ok
// SIG undefined FUN_146f46bf4(void)

void FUN_146f46bf4(longlong param_1,undefined4 param_2)

{
  FUN_146efc8cc(param_1 + 200);
  FUN_146efc8cc(param_1 + 0xe0,param_2);
  FUN_146efc8cc(param_1 + 0xf8,param_2);
  FUN_146efc8cc(param_1 + 0x1d0,param_2);
  return;
}



// FUNCTION 146f46c3e FUN_146f46c3e body=174 status=ok
// SIG undefined FUN_146f46c3e(void)

undefined8 FUN_146f46c3e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x28,&local_40);
  *puVar1 = &PTR_LAB_149e41aa0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149f9e090;
  puVar1[3] = param_3;
  puVar1[4] = FUN_146f46cee;
  FUN_145ff191a(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f46cee FUN_146f46cee body=78 status=ok
// SIG undefined FUN_146f46cee(void)

void FUN_146f46cee(longlong param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_146f46b04(param_1 + 0x98,param_2);
    FUN_146f46b7c(param_1 + 0xa8,param_2);
    FUN_144aa29e6(param_1 + 0xb8,param_2,1);
  }
  FUN_146f46bf4(param_1,param_2);
  return;
}



// FUNCTION 146f46d3c FUN_146f46d3c body=20 status=ok
// SIG undefined FUN_146f46d3c(void)

void FUN_146f46d3c(longlong param_1)

{
  FUN_140457ffc(*(longlong *)(param_1 + 0x180) + 0x400);
  return;
}



// FUNCTION 146f46d50 FUN_146f46d50 body=128 status=ok
// SIG undefined FUN_146f46d50(void)

void FUN_146f46d50(int *param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  int *local_28;
  uint local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = *(int *)(param_2 + 0x24);
  uVar1 = local_1c + 0x1fU >> 5;
  if (local_1c == 0) {
    param_1 = &local_1c;
  }
  local_28 = param_1;
  local_20 = uVar1;
  memset(param_1,CONCAT31((int3)((ulonglong)param_2 >> 8),0xff),(ulonglong)(uVar1 * 4));
  if (local_1c != 0) {
    param_1[uVar1 - 1] =
         (uint)(param_1[uVar1 - 1] << (-(char)local_1c & 0x1fU)) >> (-(char)local_1c & 0x1fU);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


