// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1479af4c8 FUN_1479af4c8 body=29 status=ok
// SIG undefined FUN_1479af4c8(void)

undefined8 FUN_1479af4c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479af4e6 FUN_1479af4e6 body=125 status=ok
// SIG undefined FUN_1479af4e6(void)

void FUN_1479af4e6(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar2 << 3,8);
  uVar3 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar2 >> 3)) {
    uVar3 = uVar2 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  FUN_1446f8d3c(param_1,0,uVar3,8,8);
  return;
}



// FUNCTION 1479af564 FUN_1479af564 body=189 status=ok
// SIG undefined FUN_1479af564(void)

void FUN_1479af564(longlong *param_1,undefined4 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1479af5f3;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1479af5f3:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1479af622 FUN_1479af622 body=132 status=ok
// SIG undefined FUN_1479af622(void)

void FUN_1479af622(longlong param_1,int param_2)

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



// FUNCTION 1479af6a8 FUN_1479af6a8 body=263 status=ok
// SIG undefined FUN_1479af6a8(void)

void FUN_1479af6a8(longlong *param_1,undefined8 *param_2)

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
        FUN_14786769c(plVar2 + lVar10 * 2,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 1479af7b0 FUN_1479af7b0 body=25 status=ok
// SIG undefined FUN_1479af7b0(void)

void FUN_1479af7b0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479af7c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1479af7ca FUN_1479af7ca body=29 status=ok
// SIG undefined FUN_1479af7ca(void)

undefined8 FUN_1479af7ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479af7e8 FUN_1479af7e8 body=48 status=ok
// SIG undefined FUN_1479af7e8(void)

void FUN_1479af7e8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1479af818 FUN_1479af818 body=29 status=ok
// SIG undefined FUN_1479af818(void)

undefined8 FUN_1479af818(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479af850 FUN_1479af850 body=29 status=ok
// SIG undefined FUN_1479af850(void)

bool FUN_1479af850(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1479af86e FUN_1479af86e body=26 status=ok
// SIG undefined FUN_1479af86e(void)

bool FUN_1479af86e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1479af888 FUN_1479af888 body=24 status=ok
// SIG undefined FUN_1479af888(void)

bool FUN_1479af888(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1479af8a0 FUN_1479af8a0 body=101 status=ok
// SIG undefined FUN_1479af8a0(void)

void FUN_1479af8a0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14a819900;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479af906 FUN_1479af906 body=101 status=ok
// SIG undefined FUN_1479af906(void)

void FUN_1479af906(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14a819900;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479af96c FUN_1479af96c body=134 status=ok
// SIG undefined FUN_1479af96c(void)

void FUN_1479af96c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined **)p_Var1 = &DAT_149efe500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a819900;
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
                    /* WARNING: Could not recover jumptable at 0x0001479af9e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1479af9f2 FUN_1479af9f2 body=39 status=ok
// SIG undefined FUN_1479af9f2(void)

void FUN_1479af9f2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001479afa15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1479afa1a FUN_1479afa1a body=146 status=ok
// SIG undefined FUN_1479afa1a(void)

bool FUN_1479afa1a(longlong param_1)

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
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479afaae FUN_1479afaae body=147 status=ok
// SIG undefined FUN_1479afaae(void)

void FUN_1479afaae(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xa0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1479afb42 FUN_1479afb42 body=62 status=ok
// SIG undefined FUN_1479afb42(void)

void FUN_1479afb42(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1479afb80(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xa0,8);
  }
  return;
}



// FUNCTION 1479afb80 FUN_1479afb80 body=112 status=ok
// SIG undefined FUN_1479afb80(void)

ulonglong FUN_1479afb80(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xa0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1479afbba;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xa0,8);
      param_2 = param_2 / 0xa0;
    }
  }
LAB_1479afbba:
  return param_2 & 0xffffffff;
}



// FUNCTION 1479afbf0 FUN_1479afbf0 body=48 status=ok
// SIG undefined FUN_1479afbf0(void)

void FUN_1479afbf0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xa0,8);
  }
  return;
}



// FUNCTION 1479afc20 FUN_1479afc20 body=825 status=ok
// SIG undefined FUN_1479afc20(void)

void FUN_1479afc20(void *param_1,uint param_2)

{
  void *pvVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_168 [40];
  undefined1 local_140 [256];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_2 != 0) {
    iVar9 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar4 = iVar9;
joined_r0x0001479afc71:
    do {
      iVar10 = iVar9 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar5 = iVar9 * 2 + 2;
        if (iVar5 < (int)param_2) {
          fVar2 = *(float *)((longlong)param_1 + (longlong)iVar5 * 0x100 + 4);
          fVar3 = *(float *)((longlong)param_1 + (longlong)iVar10 * 0x100 + 4);
          if ((fVar2 != fVar3) || (NAN(fVar2) || NAN(fVar3))) {
            bVar7 = fVar2 < fVar3;
          }
          else {
            bVar7 = (*(byte *)((longlong)param_1 + (longlong)iVar5 * 0x100 + 0xad) & 1) == 0 |
                    *(byte *)((longlong)param_1 + (longlong)iVar10 * 0x100 + 0xad);
          }
          if ((bVar7 & 1) == 0) {
            iVar10 = iVar5;
          }
        }
        pvVar6 = (void *)((longlong)param_1 + (longlong)iVar9 * 0x100);
        pvVar1 = (void *)((longlong)param_1 + (longlong)iVar10 * 0x100);
        fVar2 = *(float *)((longlong)param_1 + (longlong)iVar9 * 0x100 + 4);
        fVar3 = *(float *)((longlong)param_1 + (longlong)iVar10 * 0x100 + 4);
        if ((fVar2 != fVar3) || (NAN(fVar2) || NAN(fVar3))) {
          if (fVar2 < fVar3) goto LAB_1479afd1c;
        }
        else if (((*(byte *)((longlong)pvVar6 + 0xad) & 1) == 0) ||
                ((*(byte *)((longlong)pvVar1 + 0xad) & 1) != 0)) {
LAB_1479afd1c:
          memcpy(local_140,pvVar6,0x100);
          memcpy(pvVar6,pvVar1,0x100);
          memcpy(pvVar1,local_140,0x100);
          iVar9 = iVar10;
          goto joined_r0x0001479afc71;
        }
      }
      bVar12 = iVar4 != 0;
      iVar9 = iVar4 + -1;
      iVar4 = iVar9;
    } while (bVar12);
    if (1 < (int)param_2) {
      pvVar6 = (void *)(((ulonglong)param_2 - 1) * 0x100 + (longlong)param_1);
      memcpy(local_140,param_1,0x100);
      memcpy(param_1,pvVar6,0x100);
      memcpy(pvVar6,local_140,0x100);
      if (param_2 != 2) {
        uVar11 = (ulonglong)param_2 - 1;
        do {
          iVar4 = 0;
          iVar9 = 1;
          iVar10 = 0;
          do {
            iVar4 = iVar4 + 2;
            iVar5 = iVar9;
            if ((longlong)iVar4 < (longlong)uVar11) {
              lVar8 = (longlong)iVar4 * 0x100;
              fVar2 = *(float *)((longlong)param_1 + lVar8 + 4);
              fVar3 = *(float *)((longlong)param_1 + (longlong)iVar9 * 0x100 + 4);
              if ((fVar2 != fVar3) || (NAN(fVar2) || NAN(fVar3))) {
                bVar7 = fVar2 < fVar3;
              }
              else {
                bVar7 = (*(byte *)((longlong)param_1 + lVar8 + 0xad) & 1) == 0 |
                        *(byte *)((longlong)param_1 + (longlong)iVar9 * 0x100 + 0xad);
              }
              if ((bVar7 & 1) == 0) {
                iVar5 = iVar4;
              }
            }
            pvVar6 = (void *)((longlong)param_1 + (longlong)iVar10 * 0x100);
            pvVar1 = (void *)((longlong)param_1 + (longlong)iVar5 * 0x100);
            fVar2 = *(float *)((longlong)param_1 + (longlong)iVar10 * 0x100 + 4);
            fVar3 = *(float *)((longlong)param_1 + (longlong)iVar5 * 0x100 + 4);
            if ((fVar2 != fVar3) || (NAN(fVar2) || NAN(fVar3))) {
              if (fVar3 <= fVar2) break;
            }
            else if (((*(byte *)((longlong)pvVar6 + 0xad) & 1) != 0) &&
                    ((*(byte *)((longlong)pvVar1 + 0xad) & 1) == 0)) break;
            memcpy(local_140,pvVar6,0x100);
            memcpy(pvVar6,pvVar1,0x100);
            memcpy(pvVar1,local_140,0x100);
            iVar4 = iVar5 * 2;
            iVar9 = iVar5 * 2 + 1;
            iVar10 = iVar5;
          } while ((longlong)iVar9 < (longlong)uVar11);
          pvVar6 = (void *)((uVar11 - 1) * 0x100 + (longlong)param_1);
          memcpy(local_140,param_1,0x100);
          memcpy(param_1,pvVar6,0x100);
          memcpy(pvVar6,local_140,0x100);
          bVar12 = 2 < uVar11;
          uVar11 = uVar11 - 1;
        } while (bVar12);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479aff5a FUN_1479aff5a body=136 status=ok
// SIG undefined FUN_1479aff5a(void)

void FUN_1479aff5a(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xa08);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x40;
    if (0x40 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0xa0c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x28,0);
      iVar4 = (int)(uVar3 / 0x28);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xa0c) = iVar5;
    FUN_1401caccc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1479affe4 FUN_1479affe4 body=358 status=ok
// SIG undefined FUN_1479affe4(void)

undefined4 * FUN_1479affe4(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1479b014c(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  local_40[2] = *(ulonglong *)(puVar1 + 4);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)local_40 = *puVar1;
  *(undefined4 *)((longlong)local_40 + 4) = uVar3;
  *(undefined4 *)(local_40 + 1) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar5;
  *(undefined4 *)(local_40 + 3) = *puVar2;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar8 = ((uint)(local_40[1] >> 0x14) & 0xffff ^ (uint)(local_40[1] >> 4)) * -0x7a143595;
  uVar7 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb ^ (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ (uint)local_40[2] ^ uVar7;
  cVar6 = FUN_1463b36d8(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    cVar6 = FUN_1479b0270(param_1,*(int *)(param_1 + 0xa08) - *(int *)(param_1 + 0xa2c));
    if (cVar6 == '\0') {
      uVar10 = (longlong)(int)uVar7 & (longlong)*(int *)(param_1 + 0xab8) - 1U;
      iVar9 = (int)uVar10;
      *(int *)((longlong)local_40 + 0x24) = iVar9;
      lVar11 = *(longlong *)(param_1 + 0xab0);
      if (*(longlong *)(param_1 + 0xab0) == 0) {
        lVar11 = param_1 + 0xa30;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0xab8) - 1U & uVar10) * 4);
      lVar11 = *(longlong *)(param_1 + 0xab0);
      if (*(longlong *)(param_1 + 0xab0) == 0) {
        lVar11 = param_1 + 0xa30;
      }
      *(undefined4 *)(lVar11 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0xab8) - 1U) * 4) =
           uVar3;
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b014c FUN_1479b014c body=291 status=ok
// SIG undefined FUN_1479b014c(void)

int * FUN_1479b014c(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0xa2c) == 0) {
    iVar6 = *(int *)(param_1 + 0xa08);
    *(int *)(param_1 + 0xa08) = iVar6 + 1;
    if (*(int *)(param_1 + 0xa0c) == iVar6) {
      FUN_1479aff5a(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_1407c4842(param_1 + 0xa10,1);
    lVar5 = *(longlong *)(param_1 + 0xa18);
    if (*(longlong *)(param_1 + 0xa18) == 0) {
      lVar5 = param_1 + 0xa10;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0xa00);
    if (*(longlong *)(param_1 + 0xa00) == 0) {
      lVar5 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0xa28);
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(lVar5 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 0xa28) = iVar4;
    iVar3 = *(int *)(param_1 + 0xa2c) + -1;
    *(int *)(param_1 + 0xa2c) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  lVar5 = param_1 + 0xa10;
  if (*(longlong *)(param_1 + 0xa18) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xa18);
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar5 = *(longlong *)(param_1 + 0xa00);
  if (*(longlong *)(param_1 + 0xa00) == 0) {
    lVar5 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar5 + lVar7 * 0x28;
  return param_2;
}



// FUNCTION 1479b0270 FUN_1479b0270 body=100 status=ok
// SIG undefined FUN_1479b0270(void)

undefined8 FUN_1479b0270(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 5) {
    iVar4 = 0x20;
  }
  if (param_2 < 4) {
    iVar4 = 0x20;
  }
  if (((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0xab8))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0xab8) = iVar4;
    FUN_1449a5c52(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1479b02fa FUN_1479b02fa body=324 status=ok
// SIG undefined FUN_1479b02fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1479b02fa(longlong param_1,uint *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 uStack_70;
  byte bStack_6f;
  undefined1 uStack_6e;
  undefined4 uStack_6d;
  undefined4 uStack_69;
  undefined4 uStack_65;
  undefined4 uStack_61;
  undefined1 uStack_5d;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  longlong local_40 [3];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_144a9f2d6();
  local_78 = 0;
  uStack_70 = 0;
  bStack_6f = 0;
  uStack_6e = 1;
  uStack_6d = (undefined4)_DAT_14cad0ed0;
  uStack_69 = (undefined4)((ulonglong)_DAT_14cad0ed0 >> 0x20);
  uStack_65 = (undefined4)_DAT_14cad0ed8;
  uStack_61 = (undefined4)((ulonglong)_DAT_14cad0ed8 >> 0x20);
  uStack_5d = (undefined1)_DAT_14cad0ee0;
  uStack_5c = (undefined4)((ulonglong)_DAT_14cad0ee0 >> 8);
  uStack_58._0_3_ = (undefined3)((ulonglong)_DAT_14cad0ee0 >> 0x28);
  uStack_58._3_1_ = (undefined1)uRam000000014cad0ee8;
  uStack_54 = (undefined4)((ulonglong)uRam000000014cad0ee8 >> 8);
  uStack_50._0_3_ = (undefined3)((ulonglong)uRam000000014cad0ee8 >> 0x28);
  local_4c = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  if ((param_1 != 0) && (lVar3 = (longlong)*(int *)(lVar2 + 0x40), 0 < lVar3)) {
    plVar5 = *(longlong **)(lVar2 + 0x38);
    do {
      if (*plVar5 == param_1) goto LAB_1479b03be;
      plVar5 = plVar5 + 9;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  plVar4 = (longlong *)FUN_1479b04a4(lVar2,param_1);
  if (((plVar4 == (longlong *)0x0) || (*plVar4 == 0)) ||
     (lVar3 = (longlong)*(int *)(lVar2 + 0x40), lVar3 < 1)) {
    uVar6 = 0;
  }
  else {
    plVar5 = *(longlong **)(lVar2 + 0x38);
    uVar6 = 0;
    do {
      if (*plVar5 == *plVar4) goto LAB_1479b03be;
      plVar5 = plVar5 + 9;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
LAB_1479b0409:
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
LAB_1479b03be:
  local_78 = *plVar5;
  uVar1 = (undefined4)plVar5[1];
  uStack_5c = *(undefined4 *)((longlong)plVar5 + 0x1c);
  uStack_58 = (undefined4)plVar5[4];
  uStack_54 = *(undefined4 *)((longlong)plVar5 + 0x24);
  uStack_50 = (undefined4)plVar5[5];
  local_4c = *(undefined8 *)((longlong)plVar5 + 0x2c);
  uStack_65._1_3_ = (undefined3)*(undefined4 *)((longlong)plVar5 + 0x14);
  uStack_65 = CONCAT31(uStack_65._1_3_,(char)((uint)(int)plVar5[2] >> 0x18));
  uStack_61._1_3_ = (undefined3)(int)plVar5[3];
  uStack_61 = CONCAT31(uStack_61._1_3_,
                       (char)((uint)*(undefined4 *)((longlong)plVar5 + 0x14) >> 0x18));
  uStack_5d = (undefined1)((uint)(int)plVar5[3] >> 0x18);
  uStack_70 = (undefined1)uVar1;
  bStack_6f = (byte)((uint)uVar1 >> 8);
  uStack_6e = (undefined1)((uint)uVar1 >> 0x10);
  uStack_6d._1_3_ = (undefined3)*(undefined4 *)((longlong)plVar5 + 0xc);
  uStack_6d = CONCAT31(uStack_6d._1_3_,(char)((uint)uVar1 >> 0x18));
  uStack_69._0_1_ = (undefined1)((uint)*(undefined4 *)((longlong)plVar5 + 0xc) >> 0x18);
  uStack_69 = CONCAT31((int3)(int)plVar5[2],(undefined1)uStack_69);
  FUN_1417bc958(local_40,plVar5 + 7);
  *param_2 = (uint)bStack_6f;
  *(ulonglong *)(param_3 + 4) = CONCAT35((undefined3)uStack_58,CONCAT41(uStack_5c,uStack_5d));
  *(ulonglong *)(param_3 + 6) = CONCAT35((undefined3)uStack_50,CONCAT41(uStack_54,uStack_58._3_1_));
  *param_3 = uStack_6d;
  param_3[1] = uStack_69;
  param_3[2] = uStack_65;
  param_3[3] = uStack_61;
  uVar6 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
  goto LAB_1479b0409;
}



// FUNCTION 1479b0440 FUN_1479b0440 body=100 status=ok
// SIG undefined FUN_1479b0440(void)

undefined8 FUN_1479b0440(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  longlong lVar12;
  longlong lVar13;
  
  if ((param_2 != 0) && (lVar13 = (longlong)*(int *)(param_1 + 0x40), 0 < lVar13)) {
    lVar12 = *(longlong *)(param_1 + 0x38) + 0x38;
    do {
      if (*(longlong *)(lVar12 + -0x38) == param_2) {
        param_3[0xc] = *(undefined4 *)(lVar12 + -8);
        uVar1 = *(undefined4 *)(lVar12 + -0x38);
        uVar2 = *(undefined4 *)(lVar12 + -0x34);
        uVar3 = *(undefined4 *)(lVar12 + -0x30);
        uVar4 = *(undefined4 *)(lVar12 + -0x2c);
        uVar5 = *(undefined4 *)(lVar12 + -0x28);
        uVar6 = *(undefined4 *)(lVar12 + -0x24);
        uVar7 = *(undefined4 *)(lVar12 + -0x20);
        uVar8 = *(undefined4 *)(lVar12 + -0x1c);
        uVar9 = *(undefined4 *)(lVar12 + -0x14);
        uVar10 = *(undefined4 *)(lVar12 + -0x10);
        uVar11 = *(undefined4 *)(lVar12 + -0xc);
        param_3[8] = *(undefined4 *)(lVar12 + -0x18);
        param_3[9] = uVar9;
        param_3[10] = uVar10;
        param_3[0xb] = uVar11;
        param_3[4] = uVar5;
        param_3[5] = uVar6;
        param_3[6] = uVar7;
        param_3[7] = uVar8;
        *param_3 = uVar1;
        param_3[1] = uVar2;
        param_3[2] = uVar3;
        param_3[3] = uVar4;
        FUN_1417bc958(param_3 + 0xe);
        return 1;
      }
      lVar12 = lVar12 + 0x48;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return 0;
}



// FUNCTION 1479b04a4 FUN_1479b04a4 body=157 status=ok
// SIG undefined FUN_1479b04a4(void)

longlong * FUN_1479b04a4(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xe0);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xe8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar5 * 0x18);
        if (*plVar4 == param_2) goto LAB_1479b04b4;
        iVar5 = (int)plVar4[2];
      } while (iVar5 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1479b04b4:
  plVar2 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



// FUNCTION 1479b0542 FUN_1479b0542 body=57 status=ok
// SIG undefined FUN_1479b0542(void)

ulonglong FUN_1479b0542(longlong param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((param_2 < 0x21) && ((longlong)*(int *)(param_1 + 0x168) != 0)) {
    lVar1 = (longlong)*(int *)(param_1 + 0x168) << 2;
    uVar2 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x160) + uVar2 * 4) == param_2) {
        return uVar2 & 0xffffffff;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + -4;
    } while (lVar1 != 0);
  }
  return 0x20;
}



// FUNCTION 1479b057c FUN_1479b057c body=2166 status=ok
// SIG undefined FUN_1479b057c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1479b057c(longlong param_1,double *param_2,double *param_3,float param_4)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar12;
  undefined1 auVar11 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStack_298 [32];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar6 = param_1 + 0x48;
  uVar3 = FUN_144a7484c(lVar6,&local_158);
  auVar23 = _DAT_149934d80;
  dVar9 = (double)param_4;
  dVar10 = dVar9 * *(double *)(param_1 + 0x30);
  dVar12 = dVar9 * *(double *)(param_1 + 0x38);
  dVar9 = dVar9 * *(double *)(param_1 + 0x40);
  auVar19 = *(undefined1 (*) [16])(param_3 + 8);
  dVar1 = auVar19._0_8_;
  dVar2 = auVar19._8_8_;
  dVar13 = SUB168(*(undefined1 (*) [16])(param_3 + 10),0);
  auVar19 = minpd(_DAT_149934d80,auVar19);
  auVar26 = minpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_3 + 10));
  auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
  auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
  iVar4 = movmskpd(uVar3,auVar20);
  auVar19._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
  auVar19._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
  uVar5 = movmskpd((int)lVar6,auVar19);
  if ((uVar5 & 0x3fffffff) == 0 && iVar4 == 0) {
    dVar31 = *param_3;
    dVar32 = param_3[1];
    dVar28 = param_3[3];
    dVar25 = param_3[3];
    dVar30 = param_3[1];
    dVar15 = param_3[1];
    dVar33 = param_3[2];
    dVar14 = param_3[2];
    dVar29 = param_3[2];
    dVar18 = dStack_150 * dVar14 * -1.0 +
             local_148 * dVar30 + dStack_140 * *param_3 * 1.0 + local_158 * dVar28;
    dVar21 = local_158 * dVar29 * 1.0 +
             dStack_140 * dVar15 + local_148 * *param_3 * -1.0 + dStack_150 * dVar25;
    auVar23._0_8_ =
         dStack_140 * dVar14 * 1.0 +
         ((*param_3 * dStack_150 * 1.0 + local_148 * dVar28) - local_158 * dVar30);
    auVar23._8_8_ =
         local_148 * dVar29 * -1.0 +
         ((*param_3 * local_158 * -1.0 + dStack_140 * dVar25) - dStack_150 * dVar15);
    dVar10 = dVar10 * dVar1;
    dVar12 = dVar12 * dVar2;
    dVar9 = dVar9 * dVar13;
    dVar30 = dVar12 * dVar31 - dVar10 * dVar32;
    dVar14 = dVar9 * dVar32 - dVar12 * dVar33;
    dVar15 = dVar10 * dVar33 - dVar9 * dVar31;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar30 = dVar30 + dVar30;
    local_f8 = (dVar30 * dVar32 - dVar33 * dVar15) + dVar28 * dVar14 + dVar10 + param_3[4];
    dStack_f0 = (dVar14 * dVar33 - dVar30 * dVar31) + dVar25 * dVar15 + dVar12 + param_3[5];
    local_e8 = (dVar15 * dVar31 - dVar32 * dVar14) + dVar28 * dVar30 + dVar9 + param_3[6];
  }
  else {
    dVar15 = *param_3;
    dVar14 = param_3[1];
    dVar28 = param_3[2];
    dVar29 = dVar14 + dVar14;
    dVar31 = dVar28 + dVar28;
    dVar30 = dVar15 * (dVar15 + dVar15);
    local_1d8 = ((double)DAT_149934d80 - (dVar28 * dVar31 + dVar14 * dVar29)) * dVar1;
    dVar25 = (DAT_149934d80._8_8_ - (dVar28 * dVar31 + dVar30)) * dVar2;
    dVar28 = param_3[3];
    dVar32 = dVar31 * dVar28;
    dVar33 = (dVar15 + dVar15) * param_3[3];
    dVar28 = dVar29 * dVar28;
    dStack_190 = (dVar31 * dVar14 - dVar33) * dVar13;
    local_198 = (dVar28 + *param_3 * dVar31) * dVar13;
    dStack_1d0 = (dVar29 * dVar15 + dVar32) * dVar1;
    local_1a8 = (dVar31 * dVar14 + dVar33) * dVar2;
    local_188 = (1.0 - (dVar30 + dVar14 * dVar29)) * dVar13;
    local_1c8 = (*param_3 * dVar31 - dVar28) * dVar1;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar25,0);
    local_1b8._0_8_ = (dVar29 * dVar15 - dVar32) * dVar2;
    local_1b8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_3[4];
    dStack_170 = param_3[5];
    local_168 = param_3[6];
    uStack_160 = 0x3ff0000000000000;
    dVar30 = dStack_150 + dStack_150;
    dVar25 = local_148 + local_148;
    dVar28 = local_158 * (local_158 + local_158);
    local_258 = (double)DAT_149934d80 - (local_148 * dVar25 + dStack_150 * dVar30);
    dStack_230 = DAT_149934d80._8_8_ - (local_148 * dVar25 + dVar28);
    local_208 = 1.0 - (dVar28 + dStack_150 * dVar30);
    dVar28 = (local_158 + local_158) * dStack_140;
    dStack_250 = dVar30 * local_158 + dVar25 * dStack_140;
    local_228 = dVar25 * dStack_150 + dVar28;
    local_238 = dVar30 * local_158 - dVar25 * dStack_140;
    dVar28 = dVar25 * dStack_150 - dVar28;
    local_248 = local_158 * dVar25 - dVar30 * dStack_140;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218._8_4_ = SUB84(dVar28,0);
    local_218._0_8_ = dVar30 * dStack_140 + local_158 * dVar25;
    local_218._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
    uStack_200 = 0;
    uStack_1e0 = 0x3ff0000000000000;
    local_1f8 = dVar10;
    dStack_1f0 = dVar12;
    local_1e8 = dVar9;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar26._8_8_ = -(ulonglong)(0.0 <= dVar2);
    auVar26._0_8_ = -(ulonglong)(0.0 <= dVar1);
    auVar19 = blendvpd(_DAT_149936790,auVar23,auVar26);
    uVar7 = -(ulonglong)(0.0 <= dVar13 * 1.0);
    dVar9 = (double)(~uVar7 & 0xbff0000000000000 | uVar7 & 0x3ff0000000000000);
    dVar10 = auVar19._0_8_;
    local_148 = local_148 * dVar10;
    dStack_150 = dStack_150 * dVar10;
    local_158 = local_158 * dVar10;
    dVar10 = auVar19._8_8_;
    local_128 = local_128 * dVar10;
    local_130 = local_130 * dVar10;
    local_138 = dVar10 * local_138;
    local_108 = local_108 * dVar9;
    local_110 = local_110 * dVar9;
    local_118 = dVar9 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar9 = local_268 * local_268 + local_278 * local_278;
    dVar10 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar11._0_8_ = dVar9 + dVar10;
    auVar11._8_8_ = dVar9 + dVar10;
    auVar8._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar11._8_8_);
    auVar8._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_);
    auVar19 = sqrtpd(auVar11,auVar11);
    auVar19 = divpd(auVar23,auVar19);
    auVar27._0_8_ = auVar19._0_8_ * local_268;
    auVar27._8_8_ = auVar19._8_8_ * dStack_260;
    dVar18 = (double)((ulonglong)(local_278 * auVar19._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_));
    dVar21 = (double)((ulonglong)(dStack_270 * auVar19._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar11._8_8_));
    auVar23 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar27,auVar8);
  }
  dVar1 = dVar1 * 0.0;
  dVar2 = dVar2 * 0.0;
  dVar25 = dVar13 * 1.0 * 1.0;
  dVar12 = auVar23._0_8_;
  dVar28 = auVar23._8_8_;
  dVar13 = dVar2 * dVar18 - dVar1 * dVar21;
  dVar9 = dVar25 * dVar21 - dVar2 * dVar12;
  dVar10 = dVar1 * dVar12 - dVar18 * dVar25;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar13 = dVar13 + dVar13;
  fVar24 = param_4 * 0.5 * *(float *)(param_1 + 0x68);
  fVar16 = ABS((float)(dVar28 * dVar13 + dVar25 + (dVar10 * dVar18 - dVar9 * dVar21))) * fVar24;
  fVar22 = ABS((float)((dVar12 * dVar9 - dVar18 * dVar13) + dVar28 * dVar10 + dVar2)) * fVar24;
  fVar24 = fVar24 * ABS((float)((dVar13 * dVar21 - dVar10 * dVar12) + dVar28 * dVar9 + dVar1));
  fVar17 = *(float *)(param_1 + 0x60) * param_4;
  param_4 = param_4 * *(float *)(param_1 + 100);
  *param_2 = (double)(((float)local_f8 - fVar24) - fVar17);
  param_2[1] = (double)(((float)dStack_f0 - fVar22) - fVar17);
  param_2[2] = (double)(((float)local_e8 - fVar16) - fVar17);
  param_2[3] = (double)(param_4 + fVar24 + (float)local_f8);
  param_2[4] = (double)(fVar22 + (float)dStack_f0 + param_4);
  param_2[5] = (double)(fVar16 + (float)local_e8 + param_4);
  *(undefined1 *)(param_2 + 6) = 1;
  if ((local_d0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b0df4 FUN_1479b0df4 body=3564 status=ok
// SIG undefined FUN_1479b0df4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1479b0df4(longlong param_1,undefined8 *param_2,double *param_3,undefined1 (*param_4) [16])

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar31;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auStack_368 [32];
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  double local_328;
  undefined8 uStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined8 local_2a0;
  double local_298;
  double local_290;
  undefined1 local_288;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  undefined1 *puVar14;
  
  auVar38 = _DAT_149934d80;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  lVar3 = *(longlong *)(param_1 + 0x90);
  if (lVar3 != 0) {
    local_2a8 = *(double *)(lVar3 + 200);
    local_2b8 = *(double *)(lVar3 + 0xb8);
    dStack_2b0 = *(double *)(lVar3 + 0xc0);
    local_290 = *(double *)(lVar3 + 0xe0);
    local_2a0 = *(undefined8 *)(lVar3 + 0xd0);
    local_298 = *(double *)(lVar3 + 0xd8);
    local_288 = 1;
    dVar24 = *(double *)*param_4;
    dVar1 = *(double *)(*param_4 + 8);
    dVar2 = *(double *)param_4[1];
    auVar16 = *(undefined1 (*) [16])(param_3 + 8);
    dVar4 = auVar16._0_8_;
    dVar6 = auVar16._8_8_;
    auVar17 = *(undefined1 (*) [16])(param_3 + 10);
    dVar5 = auVar17._0_8_;
    dVar7 = auVar17._8_8_;
    auVar16 = minpd(*param_4,auVar16);
    auVar25._8_8_ = 0;
    auVar25._0_8_ = dVar2;
    auVar25 = minpd(auVar25,auVar17);
    auVar17._8_8_ = -(ulonglong)(auVar16._8_8_ < 0.0);
    auVar17._0_8_ = -(ulonglong)(auVar16._0_8_ < 0.0);
    iVar11 = movmskpd((int)local_2a0,auVar17);
    auVar16._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
    auVar16._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
    uVar12 = movmskpd(SUB84(local_290,0),auVar16);
    local_158 = local_2b8;
    dStack_150 = dStack_2b0;
    local_148 = local_2a8;
    local_140 = local_2a0;
    dStack_138 = local_298;
    local_130 = local_290;
    if ((uVar12 & 0x3fffffff) == 0 && iVar11 == 0) {
      dVar26 = *param_3;
      dVar45 = param_3[1];
      dVar31 = param_3[3];
      dVar22 = param_3[3];
      dVar21 = param_3[1];
      dVar28 = param_3[1];
      dVar46 = param_3[2];
      dVar47 = param_3[3];
      dVar42 = param_3[2];
      dVar48 = param_3[2];
      dVar23 = DAT_14c8463d8 * dVar42 * -1.0 +
               DAT_14c8463e0 * dVar21 + DAT_14c8463e8 * *param_3 * 1.0 + DAT_14c8463d0 * dVar31;
      dVar27 = DAT_14c8463d0 * dVar48 * 1.0 +
               DAT_14c8463e8 * dVar28 + DAT_14c8463e0 * *param_3 * -1.0 + DAT_14c8463d8 * dVar22;
      auVar38._0_8_ =
           DAT_14c8463e8 * dVar42 * 1.0 +
           ((*param_3 * DAT_14c8463d8 * 1.0 + DAT_14c8463e0 * dVar31) - DAT_14c8463d0 * dVar21);
      auVar38._8_8_ =
           DAT_14c8463e0 * dVar48 * -1.0 +
           ((*param_3 * DAT_14c8463d0 * -1.0 + DAT_14c8463e8 * dVar22) - DAT_14c8463d8 * dVar28);
      dVar32 = DAT_14c8464e0 * dVar4;
      dVar34 = DAT_14c8464e8 * dVar6;
      dVar48 = DAT_14c8464f0 * dVar5;
      dVar42 = dVar7 * 0.0;
      dVar28 = dVar34 * dVar26 - dVar32 * dVar45;
      dVar33 = dVar48 * dVar45 - dVar34 * dVar46;
      dVar41 = dVar32 * dVar46 - dVar48 * dVar26;
      dVar21 = dVar42 * dVar47 - dVar42 * dVar47;
      dVar33 = dVar33 + dVar33;
      dVar41 = dVar41 + dVar41;
      dVar28 = dVar28 + dVar28;
      dVar21 = dVar21 + dVar21;
      dVar32 = (dVar28 * dVar45 - dVar46 * dVar41) + dVar31 * dVar33 + dVar32 + param_3[4];
      dVar46 = (dVar33 * dVar46 - dVar28 * dVar26) + dVar22 * dVar41 + dVar34 + param_3[5];
      dVar31 = (dVar41 * dVar26 - dVar45 * dVar33) + dVar31 * dVar28 + dVar48 + param_3[6];
      dVar22 = (dVar21 * dVar47 - dVar21 * dVar47) + dVar22 * dVar21 + dVar42 + param_3[7];
      uVar13 = 0;
    }
    else {
      dVar21 = *param_3;
      dVar48 = param_3[1];
      dVar42 = param_3[2];
      dVar26 = dVar48 + dVar48;
      dVar45 = dVar42 + dVar42;
      dVar28 = dVar21 * (dVar21 + dVar21);
      local_328 = DAT_14c8464f0;
      uStack_320 = 0;
      dVar22 = param_3[3];
      dVar46 = dVar45 * dVar22;
      dVar47 = (dVar21 + dVar21) * param_3[3];
      dVar22 = dVar26 * dVar22;
      local_348._8_8_ = dVar7 * 0.0;
      local_348._0_8_ = dVar2 * dVar5;
      local_188 = (1.0 - (dVar28 + dVar48 * dVar26)) * dVar5;
      local_338 = DAT_14c8464e0;
      dStack_330 = DAT_14c8464e8;
      dVar31 = (dVar45 * dVar48 - dVar47) * dVar5;
      dVar28 = (DAT_149934d80._8_8_ - (dVar42 * dVar45 + dVar28)) * dVar6;
      local_1a8 = (dVar45 * dVar48 + dVar47) * dVar6;
      local_1c8 = (*param_3 * dVar45 - dVar22) * dVar4;
      local_1d8._8_8_ = (dVar26 * dVar21 + dVar46) * dVar4;
      local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar42 * dVar45 + dVar48 * dVar26)) * dVar4;
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar28,0);
      local_1b8._0_8_ = (dVar26 * dVar21 - dVar46) * dVar6;
      local_1b8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      uStack_1a0 = 0;
      local_198._8_4_ = SUB84(dVar31,0);
      local_198._0_8_ = (dVar22 + *param_3 * dVar45) * dVar5;
      local_198._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      uStack_180 = 0;
      local_178 = param_3[4];
      dStack_170 = param_3[5];
      local_168 = param_3[6];
      uStack_160 = 0x3ff0000000000000;
      dVar48 = DAT_14c8463d8 + DAT_14c8463d8;
      dVar28 = DAT_14c8463e0 + DAT_14c8463e0;
      dVar22 = DAT_14c8463d0 * (DAT_14c8463d0 + DAT_14c8463d0);
      local_208 = (1.0 - (dVar22 + DAT_14c8463d8 * dVar48)) * dVar2;
      dVar21 = (DAT_14c8463d0 + DAT_14c8463d0) * DAT_14c8463e8;
      dVar31 = (dVar28 * DAT_14c8463d8 - dVar21) * dVar2;
      local_258 = ((double)DAT_149934d80 - (DAT_14c8463e0 * dVar28 + DAT_14c8463d8 * dVar48)) *
                  dVar24;
      dVar22 = (DAT_149934d80._8_8_ - (DAT_14c8463e0 * dVar28 + dVar22)) * dVar1;
      dStack_250 = (dVar48 * DAT_14c8463d0 + dVar28 * DAT_14c8463e8) * dVar24;
      local_228 = (dVar28 * DAT_14c8463d8 + dVar21) * dVar1;
      local_248 = (DAT_14c8463d0 * dVar28 - dVar48 * DAT_14c8463e8) * dVar24;
      uStack_240 = 0;
      local_238._8_4_ = SUB84(dVar22,0);
      local_238._0_8_ = (dVar48 * DAT_14c8463d0 - dVar28 * DAT_14c8463e8) * dVar1;
      local_238._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      uStack_220 = 0;
      local_218._8_4_ = SUB84(dVar31,0);
      local_218._0_8_ = (dVar48 * DAT_14c8463e8 + DAT_14c8463d0 * dVar28) * dVar2;
      local_218._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      uStack_200 = 0;
      local_1f8 = DAT_14c8464e0;
      dStack_1f0 = DAT_14c8464e8;
      local_1e8 = DAT_14c8464f0;
      uStack_1e0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_158,&local_258,local_1d8);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar36._8_8_ = -(ulonglong)(0.0 <= dVar6 * dVar1);
      auVar36._0_8_ = -(ulonglong)(0.0 <= dVar4 * dVar24);
      auVar16 = blendvpd(_DAT_149936790,auVar38,auVar36);
      uVar15 = -(ulonglong)(0.0 <= dVar2 * dVar5);
      dVar22 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
      dVar31 = auVar16._0_8_;
      local_148 = local_148 * dVar31;
      dStack_150 = dStack_150 * dVar31;
      local_158 = local_158 * dVar31;
      dVar31 = auVar16._8_8_;
      local_128 = local_128 * dVar31;
      local_130 = local_130 * dVar31;
      dStack_138 = dVar31 * dStack_138;
      local_108 = local_108 * dVar22;
      local_110 = local_110 * dVar22;
      local_118 = dVar22 * local_118;
      puVar14 = local_318;
      iVar11 = FUN_14481fd10(puVar14,&local_158);
      uVar13 = SUB84(puVar14,0);
      dVar22 = (double)local_308._0_8_ * (double)local_308._0_8_ +
               (double)local_318._0_8_ * (double)local_318._0_8_;
      dVar31 = (double)local_308._8_8_ * (double)local_308._8_8_ +
               (double)local_318._8_8_ * (double)local_318._8_8_;
      auVar29._0_8_ = dVar22 + dVar31;
      auVar29._8_8_ = dVar22 + dVar31;
      auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
      auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
      auVar16 = sqrtpd(auVar29,auVar29);
      auVar38 = divpd(auVar38,auVar16);
      auVar39._0_8_ = auVar38._0_8_ * (double)local_308._0_8_;
      auVar39._8_8_ = auVar38._8_8_ * (double)local_308._8_8_;
      dVar23 = (double)((ulonglong)((double)local_318._0_8_ * auVar38._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
      dVar27 = (double)((ulonglong)((double)local_318._8_8_ * auVar38._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
      auVar38 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar18);
      dVar22 = 0.0;
      dVar31 = local_e8;
      dVar32 = local_f8;
      dVar46 = dStack_f0;
    }
    auVar25 = _DAT_149934d80;
    dVar2 = dVar2 * dVar5;
    dVar6 = dVar6 * dVar1;
    uVar44 = (undefined4)((ulonglong)(dVar7 * 0.0) >> 0x20);
    uVar43 = SUB84(dVar7 * 0.0,0);
    dVar4 = dVar4 * dVar24;
    local_2e8 = 0.0;
    dStack_2e0 = 0.0;
    local_2f8 = 0.0;
    dStack_2f0 = 0.0;
    auVar16 = *(undefined1 (*) [16])(param_1 + 0x70);
    dVar1 = auVar16._0_8_;
    dVar7 = auVar16._8_8_;
    auVar17 = *(undefined1 (*) [16])(param_1 + 0x80);
    dVar5 = auVar17._0_8_;
    auVar8._8_4_ = SUB84(dVar6,0);
    auVar8._0_8_ = dVar4;
    auVar8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar16 = minpd(auVar16,auVar8);
    local_348._8_4_ = uVar43;
    local_348._0_8_ = dVar2;
    local_348._12_4_ = uVar44;
    auVar9._8_4_ = uVar43;
    auVar9._0_8_ = dVar2;
    auVar9._12_4_ = uVar44;
    auVar36 = minpd(auVar17,auVar9);
    auVar35._8_8_ = -(ulonglong)(auVar16._8_8_ < 0.0);
    auVar35._0_8_ = -(ulonglong)(auVar16._0_8_ < 0.0);
    iVar11 = movmskpd(iVar11,auVar35);
    auVar37._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
    auVar37._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
    uVar12 = movmskpd(uVar13,auVar37);
    dVar24 = auVar38._0_8_;
    dVar28 = auVar38._8_8_;
    uVar10 = local_348._8_8_;
    if ((uVar12 & 0x3fffffff) == 0 && iVar11 == 0) {
      dVar26 = *(double *)(param_1 + 0x30);
      dVar45 = *(double *)(param_1 + 0x38);
      dVar41 = *(double *)(param_1 + 0x40);
      dVar34 = *(double *)(param_1 + 0x48);
      dVar42 = dVar26 * dVar24 * 1.0 + dVar34 * dVar27 + dVar23 * dVar41 * -1.0 + dVar28 * dVar45;
      dVar47 = *(double *)(param_1 + 0x50) * dVar4;
      dVar33 = *(double *)(param_1 + 0x58) * dVar6;
      dVar21 = *(double *)(param_1 + 0x60) * dVar2;
      dVar48 = *(double *)(param_1 + 0x68) * (double)local_348._8_8_;
      local_318._8_4_ = SUB84(dVar42,0);
      local_318._0_8_ =
           dVar45 * dVar24 * -1.0 + dVar41 * dVar27 + dVar23 * dVar34 * 1.0 + dVar28 * dVar26;
      local_318._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
      local_308._8_8_ =
           dVar41 * dVar24 * -1.0 + ((dVar23 * dVar26 * -1.0 + dVar28 * dVar34) - dVar27 * dVar45);
      local_308._0_8_ =
           dVar34 * dVar24 * 1.0 + ((dVar23 * dVar45 * 1.0 + dVar28 * dVar41) - dVar27 * dVar26);
      dVar45 = dVar33 * dVar23 - dVar27 * dVar47;
      dVar41 = dVar21 * dVar27 - dVar24 * dVar33;
      dVar42 = dVar47 * dVar24 - dVar23 * dVar21;
      dVar26 = dVar48 * dVar28 - dVar28 * dVar48;
      dVar41 = dVar41 + dVar41;
      dVar42 = dVar42 + dVar42;
      dVar45 = dVar45 + dVar45;
      dVar26 = dVar26 + dVar26;
      local_2f8 = dVar32 + (dVar45 * dVar27 - dVar24 * dVar42) + dVar28 * dVar41 + dVar47;
      dStack_2f0 = dVar46 + (dVar41 * dVar24 - dVar45 * dVar23) + dVar28 * dVar42 + dVar33;
      local_2e8 = dVar31 + (dVar42 * dVar23 - dVar27 * dVar41) + dVar28 * dVar45 + dVar21;
      dStack_2e0 = dVar22 + (dVar26 * dVar28 - dVar26 * dVar28) + dVar28 * dVar26 + dVar48;
    }
    else {
      dVar22 = dVar27 + dVar27;
      dVar48 = dVar24 + dVar24;
      dVar26 = dVar23 * (dVar23 + dVar23);
      dVar42 = (dVar23 + dVar23) * dVar28;
      dVar21 = (dVar48 * dVar27 - dVar42) * dVar2;
      local_188 = (1.0 - (dVar26 + dVar27 * dVar22)) * dVar2;
      dVar45 = (dVar22 * dVar23 + dVar48 * dVar28) * dVar4;
      local_1a8 = (dVar48 * dVar27 + dVar42) * dVar6;
      local_1c8 = (dVar23 * dVar48 - dVar22 * dVar28) * dVar4;
      local_1d8._8_4_ = SUB84(dVar45,0);
      local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar24 * dVar48 + dVar27 * dVar22)) * dVar4;
      local_1d8._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
      uStack_1c0 = 0;
      local_1b8._8_8_ = (DAT_149934d80._8_8_ - (dVar24 * dVar48 + dVar26)) * dVar6;
      local_1b8._0_8_ = (dVar22 * dVar23 - dVar48 * dVar28) * dVar6;
      uStack_1a0 = 0;
      local_198._8_4_ = SUB84(dVar21,0);
      local_198._0_8_ = (dVar22 * dVar28 + dVar23 * dVar48) * dVar2;
      local_198._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      uStack_180 = 0;
      uStack_160 = 0x3ff0000000000000;
      dVar21 = *(double *)(param_1 + 0x30);
      dVar48 = *(double *)(param_1 + 0x38);
      dVar42 = *(double *)(param_1 + 0x40);
      dVar26 = dVar48 + dVar48;
      dVar45 = dVar42 + dVar42;
      dVar22 = dVar21 * (dVar21 + dVar21);
      local_208 = (1.0 - (dVar22 + dVar48 * dVar26)) * dVar5;
      dVar28 = *(double *)(param_1 + 0x30) * dVar45;
      dVar24 = *(double *)(param_1 + 0x48);
      dVar47 = dVar45 * dVar24;
      dVar33 = (dVar21 + dVar21) * *(double *)(param_1 + 0x48);
      dVar24 = dVar26 * dVar24;
      local_258 = ((double)DAT_149934d80 - (dVar42 * dVar45 + dVar48 * dVar26)) * dVar1;
      dStack_250 = (dVar26 * dVar21 + dVar47) * dVar1;
      local_228 = (dVar45 * dVar48 + dVar33) * dVar7;
      local_248 = (dVar28 - dVar24) * dVar1;
      uStack_240 = 0;
      local_238._8_8_ = (DAT_149934d80._8_8_ - (dVar42 * dVar45 + dVar22)) * dVar7;
      local_238._0_8_ = (dVar26 * dVar21 - dVar47) * dVar7;
      uStack_220 = 0;
      local_218._8_8_ = (dVar45 * dVar48 - dVar33) * dVar5;
      local_218._0_8_ = (dVar24 + dVar28) * dVar5;
      uStack_200 = 0;
      local_1f8 = *(double *)(param_1 + 0x50);
      dStack_1f0 = *(double *)(param_1 + 0x58);
      local_1e8 = *(double *)(param_1 + 0x60);
      uStack_1e0 = 0x3ff0000000000000;
      local_178 = dVar32;
      dStack_170 = dVar46;
      local_168 = dVar31;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar19._8_8_ = -(ulonglong)(0.0 <= dVar6 * dVar7);
      auVar19._0_8_ = -(ulonglong)(0.0 <= dVar4 * dVar1);
      auVar38 = blendvpd(_DAT_149936790,auVar25,auVar19);
      uVar15 = -(ulonglong)(0.0 <= dVar2 * dVar5);
      dVar24 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
      dVar22 = auVar38._0_8_;
      local_148 = local_148 * dVar22;
      dStack_150 = dStack_150 * dVar22;
      local_158 = local_158 * dVar22;
      dVar22 = auVar38._8_8_;
      local_128 = local_128 * dVar22;
      local_130 = local_130 * dVar22;
      dStack_138 = dVar22 * dStack_138;
      local_108 = local_108 * dVar24;
      local_110 = local_110 * dVar24;
      local_118 = dVar24 * local_118;
      FUN_14481fd10(&local_278,&local_158);
      dVar24 = local_268 * local_268 + local_278 * local_278;
      dVar22 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar30._0_8_ = dVar24 + dVar22;
      auVar30._8_8_ = dVar24 + dVar22;
      auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
      auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
      auVar38 = sqrtpd(auVar30,auVar30);
      auVar38 = divpd(auVar25,auVar38);
      auVar40._0_8_ = auVar38._0_8_ * local_268;
      auVar40._8_8_ = auVar38._8_8_ * dStack_260;
      local_308 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar20);
      local_318._8_8_ =
           (ulonglong)(dStack_270 * auVar38._8_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
      local_318._0_8_ =
           (ulonglong)(local_278 * auVar38._0_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
      local_2f8 = local_f8;
      dStack_2f0 = dStack_f0;
      local_2e8 = local_e8;
      dStack_2e0 = 0.0;
    }
    local_2c8 = dVar2 * dVar5;
    dStack_2c0 = (double)uVar10 * auVar17._8_8_;
    local_2d8._8_4_ = SUB84(dVar6 * dVar7,0);
    local_2d8._0_8_ = dVar4 * dVar1;
    local_2d8._12_4_ = (int)((ulonglong)(dVar6 * dVar7) >> 0x20);
    FUN_144a1c3a2(&local_2b8,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_368);
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  if ((local_d0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479b1be2 FUN_1479b1be2 body=2135 status=ok
// SIG undefined FUN_1479b1be2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1479b1be2(longlong param_1,undefined8 *param_2,double *param_3,undefined1 (*param_4) [16])

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar24;
  undefined1 auVar23 [16];
  double dVar25;
  double dVar26;
  double dVar28;
  undefined1 auVar27 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auStack_368 [32];
  double local_348;
  undefined8 uStack_340;
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined8 local_2a0;
  double local_298;
  double local_290;
  undefined1 local_288;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double dStack_1c8;
  undefined8 local_1c0;
  undefined1 auStack_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  plVar14 = *(longlong **)(param_1 + 0x30);
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x80))(plVar14,&local_1d8);
    plVar14 = *(longlong **)(param_1 + 0x30);
    (**(code **)(*plVar14 + 0x80))(plVar14,&local_258);
    local_148 = local_248;
    local_140 = local_1c0;
    dStack_138 = (double)auStack_1b8._0_8_;
    local_130 = (double)auStack_1b8._8_8_;
    local_2b8 = local_258;
    dStack_2b0 = dStack_250;
    local_2a8 = local_248;
    local_2a0 = local_1c0;
    local_298 = (double)auStack_1b8._0_8_;
    local_290 = (double)auStack_1b8._8_8_;
    local_288 = 1;
    local_338 = *param_4;
    dVar1 = *(double *)param_4[1];
    local_2f8 = 0.0;
    dStack_2f0 = 0.0;
    local_2e8 = 0.0;
    dStack_2e0 = 0.0;
    auVar32 = *(undefined1 (*) [16])(param_3 + 8);
    local_2d8 = auVar32._0_8_;
    dStack_2d0 = auVar32._8_8_;
    auVar2 = *(undefined1 (*) [16])(param_3 + 10);
    dVar3 = auVar2._0_8_;
    auVar32 = minpd(local_338,auVar32);
    auVar34._8_8_ = 0;
    auVar34._0_8_ = dVar1;
    auVar34 = minpd(auVar34,auVar2);
    auVar19._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
    auVar19._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
    iVar12 = movmskpd(auStack_1b8._8_4_,auVar19);
    auVar32._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
    auVar32._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
    uVar13 = movmskpd((int)plVar14,auVar32);
    uVar10 = local_338._0_8_;
    uVar11 = local_338._8_8_;
    if ((uVar13 & 0x3fffffff) == 0 && iVar12 == 0) {
      dVar28 = *param_3;
      dVar33 = param_3[1];
      dVar24 = param_3[3];
      dVar22 = param_3[3];
      uStack_340 = 0;
      dVar4 = param_3[1];
      dVar18 = param_3[1];
      dVar8 = param_3[2];
      dVar9 = param_3[3];
      dVar5 = param_3[2];
      dVar30 = param_3[2];
      dVar7 = DAT_14c8463d0 * dVar30 * 1.0 +
              DAT_14c8463e8 * dVar18 + DAT_14c8463e0 * *param_3 * -1.0 + DAT_14c8463d8 * dVar22;
      dVar18 = DAT_14c8463e0 * dVar30 * -1.0 +
               ((*param_3 * DAT_14c8463d0 * -1.0 + DAT_14c8463e8 * dVar22) - DAT_14c8463d8 * dVar18)
      ;
      dVar20 = DAT_14c8464e0 * local_2d8;
      dVar21 = DAT_14c8464e8 * dStack_2d0;
      dVar6 = DAT_14c8464f0 * dVar3;
      dVar25 = auVar2._8_8_ * 0.0;
      dVar30 = dVar21 * dVar28 - dVar20 * dVar33;
      dVar31 = dVar6 * dVar33 - dVar21 * dVar8;
      dVar26 = dVar20 * dVar8 - dVar6 * dVar28;
      dVar29 = dVar25 * dVar9 - dVar25 * dVar9;
      dVar31 = dVar31 + dVar31;
      dVar26 = dVar26 + dVar26;
      dVar30 = dVar30 + dVar30;
      dVar29 = dVar29 + dVar29;
      local_2f8 = (dVar30 * dVar33 - dVar8 * dVar26) + dVar24 * dVar31 + dVar20 + param_3[4];
      dStack_2f0 = (dVar31 * dVar8 - dVar30 * dVar28) + dVar22 * dVar26 + dVar21 + param_3[5];
      local_2e8 = (dVar26 * dVar28 - dVar33 * dVar31) + dVar24 * dVar30 + dVar6 + param_3[6];
      dStack_2e0 = (dVar29 * dVar9 - dVar29 * dVar9) + dVar22 * dVar29 + dVar25 + param_3[7];
      local_318._8_4_ = SUB84(dVar7,0);
      local_318._0_8_ =
           DAT_14c8463d8 * dVar5 * -1.0 +
           DAT_14c8463e0 * dVar4 + DAT_14c8463e8 * *param_3 * 1.0 + DAT_14c8463d0 * dVar24;
      local_318._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      local_308._8_4_ = SUB84(dVar18,0);
      local_308._0_8_ =
           DAT_14c8463e8 * dVar5 * 1.0 +
           ((*param_3 * DAT_14c8463d8 * 1.0 + DAT_14c8463e0 * dVar24) - DAT_14c8463d0 * dVar4);
      local_308._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      local_348 = dVar1;
    }
    else {
      dVar29 = *param_3;
      dVar6 = param_3[1];
      dVar7 = param_3[2];
      dVar18 = dVar6 + dVar6;
      dVar4 = dVar7 + dVar7;
      dVar33 = dVar29 * (dVar29 + dVar29);
      local_348 = DAT_14c8464f0;
      uStack_340 = 0;
      dVar22 = param_3[3];
      dVar30 = dVar4 * dVar22;
      dVar5 = (dVar29 + dVar29) * param_3[3];
      dVar22 = dVar18 * dVar22;
      local_188 = (1.0 - (dVar33 + dVar6 * dVar18)) * dVar3;
      local_328 = DAT_14c8464e0;
      dStack_320 = DAT_14c8464e8;
      dVar24 = (dVar4 * dVar6 - dVar5) * dVar3;
      dVar25 = (double)local_338._0_8_ * local_2d8;
      dVar28 = (double)local_338._8_8_ * dStack_2d0;
      local_1d8 = (1.0 - (dVar7 * dVar4 + dVar6 * dVar18)) * local_2d8;
      dVar7 = (1.0 - (dVar7 * dVar4 + dVar33)) * dStack_2d0;
      dStack_1d0 = (dVar18 * dVar29 + dVar30) * local_2d8;
      local_1a8 = (dVar4 * dVar6 + dVar5) * dStack_2d0;
      dStack_1c8 = (*param_3 * dVar4 - dVar22) * local_2d8;
      local_1c0 = 0;
      auStack_1b8._8_4_ = SUB84(dVar7,0);
      auStack_1b8._0_8_ = (dVar18 * dVar29 - dVar30) * dStack_2d0;
      auStack_1b8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      uStack_1a0 = 0;
      local_198._8_4_ = SUB84(dVar24,0);
      local_198._0_8_ = (dVar22 + *param_3 * dVar4) * dVar3;
      local_198._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      uStack_180 = 0;
      local_178 = param_3[4];
      dStack_170 = param_3[5];
      local_168 = param_3[6];
      uStack_160 = 0x3ff0000000000000;
      dVar4 = DAT_14c8463d8 + DAT_14c8463d8;
      dVar22 = DAT_14c8463e0 + DAT_14c8463e0;
      dVar18 = DAT_14c8463d0 * (DAT_14c8463d0 + DAT_14c8463d0);
      local_208 = (1.0 - (dVar18 + DAT_14c8463d8 * dVar4)) * dVar1;
      dVar24 = (DAT_14c8463d0 + DAT_14c8463d0) * DAT_14c8463e8;
      dVar30 = (dVar22 * DAT_14c8463d8 - dVar24) * dVar1;
      local_258 = (1.0 - (DAT_14c8463e0 * dVar22 + DAT_14c8463d8 * dVar4)) * (double)local_338._0_8_
      ;
      dVar18 = (1.0 - (DAT_14c8463e0 * dVar22 + dVar18)) * (double)local_338._8_8_;
      dStack_250 = (dVar4 * DAT_14c8463d0 + dVar22 * DAT_14c8463e8) * (double)local_338._0_8_;
      local_228 = (dVar22 * DAT_14c8463d8 + dVar24) * (double)local_338._8_8_;
      local_248 = (DAT_14c8463d0 * dVar22 - dVar4 * DAT_14c8463e8) * (double)local_338._0_8_;
      uStack_240 = 0;
      local_238._8_4_ = SUB84(dVar18,0);
      local_238._0_8_ = (dVar4 * DAT_14c8463d0 - dVar22 * DAT_14c8463e8) * (double)local_338._8_8_;
      local_238._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      uStack_220 = 0;
      local_218._8_4_ = SUB84(dVar30,0);
      local_218._0_8_ = (dVar4 * DAT_14c8463e8 + DAT_14c8463d0 * dVar22) * dVar1;
      local_218._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
      uStack_200 = 0;
      local_1f8 = DAT_14c8464e0;
      dStack_1f0 = DAT_14c8464e8;
      local_1e8 = DAT_14c8464f0;
      uStack_1e0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar32 = _DAT_149934d80;
      auVar16._8_8_ = -(ulonglong)(0.0 <= dVar28);
      auVar16._0_8_ = -(ulonglong)(0.0 <= dVar25);
      auVar19 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar16);
      uVar15 = -(ulonglong)(0.0 <= dVar1 * dVar3);
      dVar22 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
      dVar24 = auVar19._0_8_;
      local_148 = local_148 * dVar24;
      local_150 = local_150 * dVar24;
      local_158 = local_158 * dVar24;
      dVar24 = auVar19._8_8_;
      local_128 = local_128 * dVar24;
      local_130 = local_130 * dVar24;
      dStack_138 = dVar24 * dStack_138;
      local_108 = local_108 * dVar22;
      local_110 = local_110 * dVar22;
      local_118 = dVar22 * local_118;
      FUN_14481fd10(&local_278,&local_158);
      dVar22 = local_268 * local_268 + local_278 * local_278;
      dVar24 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar23._0_8_ = dVar22 + dVar24;
      auVar23._8_8_ = dVar22 + dVar24;
      auVar17._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
      auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
      auVar19 = sqrtpd(auVar23,auVar23);
      auVar32 = divpd(auVar32,auVar19);
      auVar27._0_8_ = auVar32._0_8_ * local_268;
      auVar27._8_8_ = auVar32._8_8_ * dStack_260;
      local_308 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar27,auVar17);
      local_318._8_8_ =
           (ulonglong)(dStack_270 * auVar32._8_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
      local_318._0_8_ =
           (ulonglong)(local_278 * auVar32._0_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
      local_2f8 = local_f8;
      dStack_2f0 = dStack_f0;
      local_2e8 = local_e8;
      dStack_2e0 = 0.0;
    }
    dStack_2d0 = (double)uVar11 * dStack_2d0;
    local_2d8 = (double)uVar10 * local_2d8;
    dVar22 = auVar2._8_8_ * 0.0;
    local_2c8._8_4_ = SUB84(dVar22,0);
    local_2c8._0_8_ = dVar1 * dVar3;
    local_2c8._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    FUN_144a1c3a2(&local_2b8,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_368);
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  if ((local_d0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479b243a FUN_1479b243a body=309 status=ok
// SIG undefined FUN_1479b243a(void)

void FUN_1479b243a(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar6 = *(longlong *)(param_1 + 0xf0);
  if ((lVar6 != 0) && (iVar4 = *(int *)(lVar6 + 0x28), 0 < (longlong)iVar4)) {
    lVar12 = 0;
    do {
      lVar7 = *(longlong *)(lVar6 + 0x20);
      dVar8 = (double)*(float *)(lVar7 + 0x14 + lVar12);
      dVar9 = (double)*(float *)(lVar7 + 0x10 + lVar12);
      dVar10 = (double)*(float *)(lVar7 + 0xc + lVar12);
      fVar1 = *(float *)(lVar7 + 8 + lVar12);
      fVar2 = *(float *)(lVar7 + 4 + lVar12);
      fVar3 = *(float *)(lVar7 + lVar12);
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_146bfae70(param_2,iVar5);
      }
      lVar7 = *param_2;
      lVar11 = (longlong)iVar5 * 0x20;
      *(double *)(lVar7 + lVar11) = dVar10;
      *(double *)(lVar7 + 8 + lVar11) = dVar9;
      *(double *)(lVar7 + 0x10 + lVar11) = dVar8;
      *(double *)(lVar7 + 0x18 + lVar11) =
           (double)fVar1 * dVar8 + (double)fVar3 * dVar10 + (double)fVar2 * dVar9;
      lVar12 = lVar12 + 0x18;
    } while ((longlong)iVar4 * 0x18 != lVar12);
  }
  return;
}



// FUNCTION 1479b2570 FUN_1479b2570 body=118 status=ok
// SIG undefined FUN_1479b2570(void)

void FUN_1479b2570(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_14a1dee50;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfe | *(byte *)(param_2 + 0x18) & 1;
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  *(undefined4 *)(param_1 + 4) = 6;
  param_1[5] = param_1;
  *param_1 = &PTR_FUN_14a81ae10;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  uVar6 = *(undefined8 *)(param_2 + 0x5c);
  uVar7 = *(undefined8 *)(param_2 + 100);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  *(undefined8 *)((longlong)param_1 + 0x5c) = uVar6;
  *(undefined8 *)((longlong)param_1 + 100) = uVar7;
  return;
}



// FUNCTION 1479b25e6 FUN_1479b25e6 body=170 status=ok
// SIG undefined FUN_1479b25e6(void)

undefined8 * FUN_1479b25e6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (lVar1 != 0) {
    local_28 = *(undefined8 *)(lVar1 + 200);
    local_38 = *(undefined4 *)(lVar1 + 0xb8);
    uStack_34 = *(undefined4 *)(lVar1 + 0xbc);
    uStack_30 = *(undefined4 *)(lVar1 + 0xc0);
    uStack_2c = *(undefined4 *)(lVar1 + 0xc4);
    local_10 = *(undefined8 *)(lVar1 + 0xe0);
    local_20 = *(undefined4 *)(lVar1 + 0xd0);
    uStack_1c = *(undefined4 *)(lVar1 + 0xd4);
    uVar2 = *(undefined8 *)(lVar1 + 0xd0);
    uStack_18 = *(undefined4 *)(lVar1 + 0xd8);
    uStack_14 = *(undefined4 *)(lVar1 + 0xdc);
    uVar3 = *(undefined8 *)(lVar1 + 0xd8);
    *(undefined4 *)param_2 = local_38;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_34;
    *(undefined4 *)(param_2 + 1) = uStack_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_2c;
    param_2[2] = local_28;
    param_2[3] = uVar2;
    param_2[4] = uVar3;
    param_2[5] = local_10;
    *(undefined1 *)(param_2 + 6) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b2692 FUN_1479b2692 body=46 status=ok
// SIG undefined FUN_1479b2692(void)

void FUN_1479b2692(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (lVar1 == 0) {
    uVar2 = 0;
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(lVar1 + 0x58);
    uVar2 = *(undefined4 *)(lVar1 + 0x50);
    uVar4 = *(undefined4 *)(lVar1 + 0x54);
  }
  *param_2 = uVar2;
  param_2[1] = uVar4;
  param_2[2] = uVar3;
  return;
}



// FUNCTION 1479b26c0 FUN_1479b26c0 body=528 status=ok
// SIG undefined FUN_1479b26c0(void)

void FUN_1479b26c0(longlong param_1,undefined8 *param_2,undefined8 *param_3,int *param_4,
                  float param_5)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 local_e8;
  int local_e0;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [92];
  int local_6c;
  int local_68;
  int local_64;
  double local_60;
  double local_58;
  double local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_6c = *param_4;
  local_68 = param_4[1];
  local_64 = param_4[2];
  dVar7 = (double)param_5;
  local_50 = (double)local_64 * dVar7 + 0.0;
  local_58 = (double)local_68 * dVar7 + 0.0;
  local_60 = (double)local_6c * dVar7 + 0.0;
  local_f8 = 0;
  FUN_146cb3ec4(local_c8);
  local_e0 = param_4[2];
  local_e8 = *(undefined8 *)param_4;
  local_d8 = (void *)0x0;
  local_d0 = *(int *)(param_3 + 1);
  lVar6 = (longlong)local_d0;
  _Src = (void *)*param_3;
  if (lVar6 == 0) {
    local_cc = 0;
  }
  else {
    FUN_1408fdf90(&local_d8,local_d0,0);
    memcpy(local_d8,_Src,lVar6 << 3);
  }
  lVar6 = FUN_14001cc68(0x120,0x10);
  FUN_146dd26ae(lVar6,local_c8,&local_e8,0);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a83af60;
  plVar4[2] = lVar6;
  *(longlong *)(param_1 + 0x90) = lVar6;
  plVar3 = *(longlong **)(param_1 + 0x98);
  if (plVar4 == plVar3) {
    if (plVar4 == (longlong *)0x0) goto LAB_1479b288d;
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1479b288d;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    *(longlong **)(param_1 + 0x98) = plVar4;
    if (plVar3 == (longlong *)0x0) goto LAB_1479b288d;
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1479b288d;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_1479b288d:
  puVar5 = (undefined8 *)(param_1 + 0x30);
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b28d2 FUN_1479b28d2 body=252 status=ok
// SIG undefined FUN_1479b28d2(void)

void FUN_1479b28d2(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 *param_4,
                  float *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x90);
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x30);
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *param_2 = *puVar5;
      puVar5 = puVar5 + 1;
      param_2 = param_2 + 1;
    }
    uVar1 = *(undefined4 *)(lVar3 + 0x58);
    uVar2 = *(undefined4 *)(lVar3 + 0x50);
    *param_4 = *(undefined4 *)(lVar3 + 0x54);
    param_4[1] = uVar2;
    param_4[2] = uVar1;
    *param_5 = (float)*(double *)(lVar3 + 0x60);
    local_38 = 0;
    FUN_146bfae00(param_3,&local_38,*(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x90));
    if (0 < *(int *)(lVar3 + 0x54) * *(int *)(lVar3 + 0x50) * *(int *)(lVar3 + 0x58)) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*param_3 + lVar4 * 8) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x88) + lVar4 * 8);
        lVar4 = lVar4 + 1;
      } while (lVar4 < (longlong)*(int *)(lVar3 + 0x58) *
                       (longlong)*(int *)(lVar3 + 0x54) * (longlong)*(int *)(lVar3 + 0x50));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479b29d0 FUN_1479b29d0 body=573 status=ok
// SIG undefined FUN_1479b29d0(void)

void FUN_1479b29d0(longlong param_1,longlong *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  double dVar19;
  
  lVar8 = *(longlong *)(param_1 + 0x90);
  if ((lVar8 != 0) && (iVar4 = *(int *)(lVar8 + 0x50), 0 < iVar4)) {
    iVar5 = *(int *)(lVar8 + 0x54);
    iVar6 = *(int *)(lVar8 + 0x58);
    iVar17 = 0;
    dVar19 = 0.0;
    do {
      if (0 < iVar5) {
        iVar16 = 0;
        dVar10 = 0.0;
        do {
          if (0 < iVar6) {
            dVar11 = 0.0;
            lVar18 = 0;
            do {
              lVar9 = *(longlong *)(param_1 + 0x90);
              if (*(double *)
                   (*(longlong *)(lVar9 + 0x88) +
                   ((longlong)(*(int *)(lVar9 + 0x7c) * iVar17 + iVar16) *
                    (longlong)*(int *)(lVar9 + 0x80) + lVar18) * 8) <= param_3) {
                dVar1 = *(double *)(lVar8 + 0x70);
                dVar2 = *(double *)(lVar8 + 0x60);
                dVar3 = *(double *)(lVar8 + 0x68);
                dVar12 = dVar1 * dVar11 + *(double *)(lVar8 + 0x30);
                dVar14 = dVar3 * dVar10 + *(double *)(lVar8 + 0x28);
                dVar13 = dVar2 * dVar19 + *(double *)(lVar8 + 0x20);
                iVar7 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar7 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
                  FUN_140555802(param_2,iVar7);
                }
                lVar9 = *param_2;
                lVar15 = (longlong)iVar7 * 0x38;
                *(double *)(lVar9 + lVar15) = dVar13;
                *(double *)(lVar9 + 8 + lVar15) = dVar14;
                *(double *)(lVar9 + 0x10 + lVar15) = dVar12;
                *(double *)(lVar9 + 0x18 + lVar15) = dVar2 + dVar13;
                *(double *)(lVar9 + 0x20 + lVar15) = dVar3 + dVar14;
                *(double *)(lVar9 + 0x28 + lVar15) = dVar1 + dVar12;
                *(undefined1 *)(lVar9 + 0x30 + lVar15) = 1;
              }
              dVar11 = dVar11 + 1.0;
              lVar18 = lVar18 + 1;
            } while (iVar6 != (int)lVar18);
          }
          dVar10 = dVar10 + 1.0;
          iVar16 = iVar16 + 1;
        } while (iVar16 != iVar5);
      }
      dVar19 = dVar19 + 1.0;
      iVar17 = iVar17 + 1;
    } while (iVar17 != iVar4);
  }
  return;
}



// FUNCTION 1479b2c0e FUN_1479b2c0e body=17 status=ok
// SIG undefined FUN_1479b2c0e(void)

void FUN_1479b2c0e(longlong param_1,longlong *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  ulonglong uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  int iStack_170;
  int iStack_16c;
  double dStack_168;
  double dStack_160;
  
  lVar9 = *(longlong *)(param_1 + 0x90);
  if (lVar9 == 0) {
    return;
  }
  iVar5 = *(int *)(lVar9 + 0x50);
  if (1 < iVar5) {
    dVar1 = *(double *)(lVar9 + 0x60);
    dVar2 = *(double *)(lVar9 + 0x68);
    dVar3 = *(double *)(lVar9 + 0x70);
    iVar6 = *(int *)(lVar9 + 0x54);
    iVar7 = *(int *)(lVar9 + 0x58);
    dVar29 = dVar3 * 0.0;
    dVar25 = dVar2 * 0.0;
    dVar26 = dVar1 * 0.0;
    iStack_170 = 1;
    dStack_168 = 0.0;
    iVar14 = 0;
    do {
      if (1 < iVar6) {
        dStack_160 = 0.0;
        iStack_16c = 1;
        iVar15 = 0;
        do {
          if (1 < iVar7) {
            dVar30 = 0.0;
            lVar18 = 0;
            do {
              iVar22 = *(int *)(lVar9 + 0x80);
              lVar19 = *(longlong *)(lVar9 + 0x88);
              iVar20 = iVar14 * *(int *)(lVar9 + 0x7c);
              iVar17 = (iVar15 + iVar20) * iVar22;
              dVar28 = *(double *)(lVar19 + (lVar18 + iVar17) * 8);
              uVar24 = -(ulonglong)(0.0 < dVar28);
              dVar13 = (double)(uVar24 & 0x3ff0000000000000 |
                               ~uVar24 & -(ulonglong)(dVar28 < 0.0) & 0xbff0000000000000);
              dVar28 = *(double *)
                        (lVar19 + ((*(int *)(lVar9 + 0x7c) * iStack_170 + iVar15) * iVar22 + lVar18)
                                  * 8);
              uVar24 = -(ulonglong)(0.0 < dVar28);
              dVar27 = (double)(uVar24 & 0x3ff0000000000000 |
                               ~uVar24 & -(ulonglong)(dVar28 < 0.0) & 0xbff0000000000000);
              dVar28 = *(double *)(lVar19 + ((iVar20 + iStack_16c) * iVar22 + lVar18) * 8);
              dVar4 = *(double *)(lVar19 + (longlong)((int)lVar18 + iVar17 + 1) * 8);
              dVar10 = dVar3 * dVar30 + *(double *)(lVar9 + 0x30);
              dVar11 = *(double *)(lVar9 + 0x28) + dStack_160 * dVar2;
              dVar12 = *(double *)(lVar9 + 0x20) + dStack_168 * dVar1;
              if (dVar13 <= dVar27) {
                if (dVar13 < dVar27) {
                  iVar22 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar22 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar22 + 1U) {
                    FUN_140c0b6f2(param_2,iVar22);
                  }
                  lVar16 = (longlong)iVar22;
                  lVar19 = *param_2;
                  fVar31 = (float)(dVar1 + dVar12);
                  *(float *)(lVar19 + lVar16 * 0xc) = fVar31;
                  *(float *)(lVar19 + 4 + lVar16 * 0xc) = (float)(dVar25 + dVar11);
                  *(float *)(lVar19 + 8 + lVar16 * 0xc) = (float)(dVar29 + dVar10);
                  iVar17 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar17 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar17 + 1U) {
                    FUN_140c0b6f2(param_2,iVar17);
                  }
                  lVar16 = (longlong)iVar17;
                  lVar19 = *param_2;
                  *(float *)(lVar19 + lVar16 * 0xc) = fVar31;
                  *(float *)(lVar19 + 4 + lVar16 * 0xc) = (float)(dVar2 + dVar11);
                  *(float *)(lVar19 + 8 + lVar16 * 0xc) = (float)(dVar29 + dVar10);
                  iVar20 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar20 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar20 + 1U) {
                    FUN_140c0b6f2(param_2,iVar20);
                  }
                  lVar16 = (longlong)iVar20;
                  lVar19 = *param_2;
                  *(float *)(lVar19 + lVar16 * 0xc) = fVar31;
                  *(float *)(lVar19 + 4 + lVar16 * 0xc) = (float)(dVar2 + dVar11);
                  *(float *)(lVar19 + 8 + lVar16 * 0xc) = (float)(dVar3 + dVar10);
                  iVar21 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar21 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar21 + 1U) {
                    FUN_140c0b6f2(param_2,iVar21);
                  }
                  lVar16 = (longlong)iVar21;
                  lVar19 = *param_2;
                  *(float *)(lVar19 + lVar16 * 0xc) = fVar31;
                  *(float *)(lVar19 + 4 + lVar16 * 0xc) = (float)(dVar25 + dVar11);
                  *(float *)(lVar19 + 8 + lVar16 * 0xc) = (float)(dVar3 + dVar10);
                  iVar8 = (int)param_3[1];
                  lVar19 = (longlong)iVar8;
                  *(uint *)(param_3 + 1) = iVar8 + 1U;
                  if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
                    FUN_146ddc768(param_3,iVar8);
                  }
                  lVar16 = *param_3;
                  *(int *)(lVar16 + lVar19 * 0xc) = iVar22;
                  *(int *)(lVar16 + 4 + lVar19 * 0xc) = iVar20;
                  *(int *)(lVar16 + 8 + lVar19 * 0xc) = iVar17;
                  goto LAB_146dd3445;
                }
              }
              else {
                iVar21 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar21 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar21 + 1U) {
                  FUN_140c0b6f2(param_2,iVar21);
                }
                lVar16 = (longlong)iVar21;
                lVar19 = *param_2;
                fVar31 = (float)(dVar1 + dVar12);
                *(float *)(lVar19 + lVar16 * 0xc) = fVar31;
                *(float *)(lVar19 + 4 + lVar16 * 0xc) = (float)(dVar25 + dVar11);
                *(float *)(lVar19 + 8 + lVar16 * 0xc) = (float)(dVar29 + dVar10);
                iVar17 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar17 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar17 + 1U) {
                  FUN_140c0b6f2(param_2,iVar17);
                }
                lVar16 = (longlong)iVar17;
                lVar19 = *param_2;
                *(float *)(lVar19 + lVar16 * 0xc) = fVar31;
                *(float *)(lVar19 + 4 + lVar16 * 0xc) = (float)(dVar2 + dVar11);
                *(float *)(lVar19 + 8 + lVar16 * 0xc) = (float)(dVar29 + dVar10);
                iVar20 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar20 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar20 + 1U) {
                  FUN_140c0b6f2(param_2,iVar20);
                }
                lVar16 = (longlong)iVar20;
                lVar19 = *param_2;
                *(float *)(lVar19 + lVar16 * 0xc) = fVar31;
                *(float *)(lVar19 + 4 + lVar16 * 0xc) = (float)(dVar2 + dVar11);
                *(float *)(lVar19 + 8 + lVar16 * 0xc) = (float)(dVar3 + dVar10);
                iVar22 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar22 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar22 + 1U) {
                  FUN_140c0b6f2(param_2,iVar22);
                }
                lVar16 = (longlong)iVar22;
                lVar19 = *param_2;
                *(float *)(lVar19 + lVar16 * 0xc) = fVar31;
                *(float *)(lVar19 + 4 + lVar16 * 0xc) = (float)(dVar25 + dVar11);
                *(float *)(lVar19 + 8 + lVar16 * 0xc) = (float)(dVar3 + dVar10);
                iVar8 = (int)param_3[1];
                lVar19 = (longlong)iVar8;
                *(uint *)(param_3 + 1) = iVar8 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
                  FUN_146ddc768(param_3,iVar8);
                }
                lVar16 = *param_3;
                *(int *)(lVar16 + lVar19 * 0xc) = iVar21;
                *(int *)(lVar16 + 4 + lVar19 * 0xc) = iVar17;
                *(int *)(lVar16 + 8 + lVar19 * 0xc) = iVar20;
LAB_146dd3445:
                iVar17 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar17 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar17 + 1U) {
                  FUN_146ddc768(param_3,iVar17);
                }
                lVar19 = *param_3;
                lVar16 = (longlong)iVar17;
                *(int *)(lVar19 + lVar16 * 0xc) = iVar20;
                *(int *)(lVar19 + 4 + lVar16 * 0xc) = iVar22;
                *(int *)(lVar19 + 8 + lVar16 * 0xc) = iVar21;
              }
              uVar24 = -(ulonglong)(0.0 < dVar28);
              dVar28 = (double)(uVar24 & 0x3ff0000000000000 |
                               ~uVar24 & (ulonglong)
                                         ((uint)(-(ulonglong)(dVar28 < 0.0) >> 0x20) & 0xbff00000)
                                         << 0x20);
              if (dVar13 <= dVar28) {
                if (dVar13 < dVar28) {
                  iVar22 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar22 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar22 + 1U) {
                    FUN_140c0b6f2(param_2,iVar22);
                  }
                  lVar16 = (longlong)iVar22;
                  lVar19 = *param_2;
                  fVar31 = (float)(dVar2 + dVar11);
                  *(float *)(lVar19 + lVar16 * 0xc) = (float)(dVar26 + dVar12);
                  *(float *)(lVar19 + 4 + lVar16 * 0xc) = fVar31;
                  *(float *)(lVar19 + 8 + lVar16 * 0xc) = (float)(dVar29 + dVar10);
                  iVar17 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar17 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar17 + 1U) {
                    FUN_140c0b6f2(param_2,iVar17);
                  }
                  lVar16 = (longlong)iVar17;
                  lVar19 = *param_2;
                  *(float *)(lVar19 + lVar16 * 0xc) = (float)(dVar1 + dVar12);
                  *(float *)(lVar19 + 4 + lVar16 * 0xc) = fVar31;
                  *(float *)(lVar19 + 8 + lVar16 * 0xc) = (float)(dVar29 + dVar10);
                  iVar20 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar20 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar20 + 1U) {
                    FUN_140c0b6f2(param_2,iVar20);
                  }
                  lVar16 = (longlong)iVar20;
                  lVar19 = *param_2;
                  *(float *)(lVar19 + lVar16 * 0xc) = (float)(dVar1 + dVar12);
                  *(float *)(lVar19 + 4 + lVar16 * 0xc) = fVar31;
                  *(float *)(lVar19 + 8 + lVar16 * 0xc) = (float)(dVar3 + dVar10);
                  iVar21 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar21 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar21 + 1U) {
                    FUN_140c0b6f2(param_2,iVar21);
                  }
                  lVar16 = (longlong)iVar21;
                  lVar19 = *param_2;
                  *(float *)(lVar19 + lVar16 * 0xc) = (float)(dVar26 + dVar12);
                  *(float *)(lVar19 + 4 + lVar16 * 0xc) = fVar31;
                  *(float *)(lVar19 + 8 + lVar16 * 0xc) = (float)(dVar3 + dVar10);
                  iVar8 = (int)param_3[1];
                  lVar19 = (longlong)iVar8;
                  *(uint *)(param_3 + 1) = iVar8 + 1U;
                  if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
                    FUN_146ddc768(param_3,iVar8);
                  }
                  lVar16 = *param_3;
                  *(int *)(lVar16 + lVar19 * 0xc) = iVar22;
                  *(int *)(lVar16 + 4 + lVar19 * 0xc) = iVar17;
                  *(int *)(lVar16 + 8 + lVar19 * 0xc) = iVar20;
                  goto LAB_146dd361d;
                }
              }
              else {
                iVar21 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar21 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar21 + 1U) {
                  FUN_140c0b6f2(param_2,iVar21);
                }
                lVar16 = (longlong)iVar21;
                lVar19 = *param_2;
                fVar31 = (float)(dVar2 + dVar11);
                *(float *)(lVar19 + lVar16 * 0xc) = (float)(dVar26 + dVar12);
                *(float *)(lVar19 + 4 + lVar16 * 0xc) = fVar31;
                *(float *)(lVar19 + 8 + lVar16 * 0xc) = (float)(dVar29 + dVar10);
                iVar17 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar17 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar17 + 1U) {
                  FUN_140c0b6f2(param_2,iVar17);
                }
                lVar16 = (longlong)iVar17;
                lVar19 = *param_2;
                *(float *)(lVar19 + lVar16 * 0xc) = (float)(dVar1 + dVar12);
                *(float *)(lVar19 + 4 + lVar16 * 0xc) = fVar31;
                *(float *)(lVar19 + 8 + lVar16 * 0xc) = (float)(dVar29 + dVar10);
                iVar20 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar20 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar20 + 1U) {
                  FUN_140c0b6f2(param_2,iVar20);
                }
                lVar16 = (longlong)iVar20;
                lVar19 = *param_2;
                *(float *)(lVar19 + lVar16 * 0xc) = (float)(dVar1 + dVar12);
                *(float *)(lVar19 + 4 + lVar16 * 0xc) = fVar31;
                *(float *)(lVar19 + 8 + lVar16 * 0xc) = (float)(dVar3 + dVar10);
                iVar22 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar22 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar22 + 1U) {
                  FUN_140c0b6f2(param_2,iVar22);
                }
                lVar16 = (longlong)iVar22;
                lVar19 = *param_2;
                *(float *)(lVar19 + lVar16 * 0xc) = (float)(dVar26 + dVar12);
                *(float *)(lVar19 + 4 + lVar16 * 0xc) = fVar31;
                *(float *)(lVar19 + 8 + lVar16 * 0xc) = (float)(dVar3 + dVar10);
                iVar8 = (int)param_3[1];
                lVar19 = (longlong)iVar8;
                *(uint *)(param_3 + 1) = iVar8 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
                  FUN_146ddc768(param_3,iVar8);
                }
                lVar16 = *param_3;
                *(int *)(lVar16 + lVar19 * 0xc) = iVar21;
                *(int *)(lVar16 + 4 + lVar19 * 0xc) = iVar20;
                *(int *)(lVar16 + 8 + lVar19 * 0xc) = iVar17;
LAB_146dd361d:
                iVar17 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar17 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar17 + 1U) {
                  FUN_146ddc768(param_3,iVar17);
                }
                lVar19 = *param_3;
                lVar16 = (longlong)iVar17;
                *(int *)(lVar19 + lVar16 * 0xc) = iVar20;
                *(int *)(lVar19 + 4 + lVar16 * 0xc) = iVar21;
                *(int *)(lVar19 + 8 + lVar16 * 0xc) = iVar22;
              }
              uVar24 = -(ulonglong)(0.0 < dVar4);
              dVar28 = (double)(uVar24 & 0x3ff0000000000000 |
                               ~uVar24 & (ulonglong)
                                         ((uint)(-(ulonglong)(dVar4 < 0.0) >> 0x20) & 0xbff00000) <<
                                         0x20);
              if (dVar13 <= dVar28) {
                if (dVar13 < dVar28) {
                  iVar22 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar22 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar22 + 1U) {
                    FUN_140c0b6f2(param_2,iVar22);
                  }
                  lVar16 = (longlong)iVar22;
                  lVar19 = *param_2;
                  fVar31 = (float)(dVar10 + dVar3);
                  *(float *)(lVar19 + lVar16 * 0xc) = (float)(dVar26 + dVar12);
                  *(float *)(lVar19 + 4 + lVar16 * 0xc) = (float)(dVar25 + dVar11);
                  *(float *)(lVar19 + 8 + lVar16 * 0xc) = fVar31;
                  iVar17 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar17 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar17 + 1U) {
                    FUN_140c0b6f2(param_2,iVar17);
                  }
                  lVar16 = (longlong)iVar17;
                  lVar19 = *param_2;
                  *(float *)(lVar19 + lVar16 * 0xc) = (float)(dVar12 + dVar1);
                  *(float *)(lVar19 + 4 + lVar16 * 0xc) = (float)(dVar25 + dVar11);
                  *(float *)(lVar19 + 8 + lVar16 * 0xc) = fVar31;
                  iVar20 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar20 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar20 + 1U) {
                    FUN_140c0b6f2(param_2,iVar20);
                  }
                  lVar16 = (longlong)iVar20;
                  lVar19 = *param_2;
                  *(float *)(lVar19 + lVar16 * 0xc) = (float)(dVar12 + dVar1);
                  *(float *)(lVar19 + 4 + lVar16 * 0xc) = (float)(dVar11 + dVar2);
                  *(float *)(lVar19 + 8 + lVar16 * 0xc) = fVar31;
                  iVar21 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar21 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar21 + 1U) {
                    FUN_140c0b6f2(param_2,iVar21);
                  }
                  lVar16 = (longlong)iVar21;
                  lVar19 = *param_2;
                  *(float *)(lVar19 + lVar16 * 0xc) = (float)(dVar26 + dVar12);
                  *(float *)(lVar19 + 4 + lVar16 * 0xc) = (float)(dVar11 + dVar2);
                  *(float *)(lVar19 + 8 + lVar16 * 0xc) = fVar31;
                  iVar8 = (int)param_3[1];
                  lVar19 = (longlong)iVar8;
                  *(uint *)(param_3 + 1) = iVar8 + 1U;
                  if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
                    FUN_146ddc768(param_3,iVar8);
                  }
                  lVar16 = *param_3;
                  *(int *)(lVar16 + lVar19 * 0xc) = iVar22;
                  *(int *)(lVar16 + 4 + lVar19 * 0xc) = iVar20;
                  *(int *)(lVar16 + 8 + lVar19 * 0xc) = iVar17;
                  goto LAB_146dd37e6;
                }
              }
              else {
                iVar21 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar21 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar21 + 1U) {
                  FUN_140c0b6f2(param_2,iVar21);
                }
                lVar16 = (longlong)iVar21;
                lVar19 = *param_2;
                fVar31 = (float)(dVar10 + dVar3);
                *(float *)(lVar19 + lVar16 * 0xc) = (float)(dVar26 + dVar12);
                *(float *)(lVar19 + 4 + lVar16 * 0xc) = (float)(dVar25 + dVar11);
                *(float *)(lVar19 + 8 + lVar16 * 0xc) = fVar31;
                iVar17 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar17 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar17 + 1U) {
                  FUN_140c0b6f2(param_2,iVar17);
                }
                lVar16 = (longlong)iVar17;
                lVar19 = *param_2;
                *(float *)(lVar19 + lVar16 * 0xc) = (float)(dVar12 + dVar1);
                *(float *)(lVar19 + 4 + lVar16 * 0xc) = (float)(dVar25 + dVar11);
                *(float *)(lVar19 + 8 + lVar16 * 0xc) = fVar31;
                iVar20 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar20 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar20 + 1U) {
                  FUN_140c0b6f2(param_2,iVar20);
                }
                lVar16 = (longlong)iVar20;
                lVar19 = *param_2;
                *(float *)(lVar19 + lVar16 * 0xc) = (float)(dVar12 + dVar1);
                *(float *)(lVar19 + 4 + lVar16 * 0xc) = (float)(dVar11 + dVar2);
                *(float *)(lVar19 + 8 + lVar16 * 0xc) = fVar31;
                iVar22 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar22 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar22 + 1U) {
                  FUN_140c0b6f2(param_2,iVar22);
                }
                lVar16 = (longlong)iVar22;
                lVar19 = *param_2;
                *(float *)(lVar19 + lVar16 * 0xc) = (float)(dVar26 + dVar12);
                *(float *)(lVar19 + 4 + lVar16 * 0xc) = (float)(dVar11 + dVar2);
                *(float *)(lVar19 + 8 + lVar16 * 0xc) = fVar31;
                iVar8 = (int)param_3[1];
                lVar19 = (longlong)iVar8;
                *(uint *)(param_3 + 1) = iVar8 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
                  FUN_146ddc768(param_3,iVar8);
                }
                lVar16 = *param_3;
                *(int *)(lVar16 + lVar19 * 0xc) = iVar21;
                *(int *)(lVar16 + 4 + lVar19 * 0xc) = iVar17;
                *(int *)(lVar16 + 8 + lVar19 * 0xc) = iVar20;
LAB_146dd37e6:
                iVar17 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar17 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar17 + 1U) {
                  FUN_146ddc768(param_3,iVar17);
                }
                lVar19 = *param_3;
                lVar16 = (longlong)iVar17;
                *(int *)(lVar19 + lVar16 * 0xc) = iVar20;
                *(int *)(lVar19 + 4 + lVar16 * 0xc) = iVar22;
                *(int *)(lVar19 + 8 + lVar16 * 0xc) = iVar21;
              }
              dVar30 = dVar30 + 1.0;
              lVar18 = lVar18 + 1;
            } while (iVar7 + -1 != (int)lVar18);
          }
          iStack_16c = iStack_16c + 1;
          bVar23 = iVar15 != iVar6 + -2;
          dStack_160 = dStack_160 + 1.0;
          iVar15 = iVar15 + 1;
        } while (bVar23);
      }
      iStack_170 = iStack_170 + 1;
      bVar23 = iVar14 != iVar5 + -2;
      dStack_168 = dStack_168 + 1.0;
      iVar14 = iVar14 + 1;
    } while (bVar23);
  }
  return;
}



// FUNCTION 1479b2c20 FUN_1479b2c20 body=323 status=ok
// SIG undefined FUN_1479b2c20(void)

void FUN_1479b2c20(longlong param_1)

{
  undefined8 *puVar1;
  double dVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  
  if (*(int *)(param_1 + 0x4c) < 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN_14481578e(param_1 + 0x40,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  FUN_140ab2a56(param_1,0);
  *(undefined8 *)(param_1 + 0x78) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x68) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  uVar4 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x50) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  if (0 < (longlong)*(int *)(param_1 + 0x38)) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    bVar7 = true;
    lVar6 = 0;
    do {
      if (bVar7) {
        puVar1 = (undefined8 *)(lVar3 + lVar6);
        *(undefined8 *)(param_1 + 0x78) = puVar1[2];
        uVar4 = puVar1[1];
        *(undefined8 *)(param_1 + 0x68) = *puVar1;
        *(undefined8 *)(param_1 + 0x70) = uVar4;
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        *(undefined8 *)(param_1 + 0x60) = puVar1[2];
        *(undefined8 *)(param_1 + 0x50) = uVar4;
        *(undefined8 *)(param_1 + 0x58) = uVar5;
        *(undefined1 *)(param_1 + 0x80) = 1;
      }
      else {
        dVar2 = *(double *)(param_1 + 0x50);
        uVar8 = SUB84(dVar2,0);
        uVar9 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar10 = *(double *)(lVar3 + lVar6);
        if (dVar10 <= dVar2) {
          uVar8 = SUB84(dVar10,0);
          uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
        }
        *(ulonglong *)(param_1 + 0x50) = CONCAT44(uVar9,uVar8);
        dVar2 = *(double *)(lVar3 + 8 + lVar6);
        dVar10 = *(double *)(param_1 + 0x58);
        if (dVar2 <= *(double *)(param_1 + 0x58)) {
          dVar10 = dVar2;
        }
        *(double *)(param_1 + 0x58) = dVar10;
        dVar2 = *(double *)(param_1 + 0x60);
        uVar8 = SUB84(dVar2,0);
        uVar9 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar10 = *(double *)(lVar3 + 0x10 + lVar6);
        if (dVar10 <= dVar2) {
          uVar8 = SUB84(dVar10,0);
          uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
        }
        *(ulonglong *)(param_1 + 0x60) = CONCAT44(uVar9,uVar8);
        dVar2 = *(double *)(param_1 + 0x68);
        uVar8 = SUB84(dVar2,0);
        uVar9 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar10 = *(double *)(lVar3 + lVar6);
        if (dVar2 <= dVar10) {
          uVar8 = SUB84(dVar10,0);
          uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
        }
        *(ulonglong *)(param_1 + 0x68) = CONCAT44(uVar9,uVar8);
        dVar2 = *(double *)(param_1 + 0x70);
        uVar8 = SUB84(dVar2,0);
        uVar9 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar10 = *(double *)(lVar3 + 8 + lVar6);
        if (dVar2 <= dVar10) {
          uVar8 = SUB84(dVar10,0);
          uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
        }
        *(ulonglong *)(param_1 + 0x70) = CONCAT44(uVar9,uVar8);
        dVar2 = *(double *)(param_1 + 0x78);
        uVar8 = SUB84(dVar2,0);
        uVar9 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar10 = *(double *)(lVar3 + 0x10 + lVar6);
        if (dVar2 <= dVar10) {
          uVar8 = SUB84(dVar10,0);
          uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
        }
        *(ulonglong *)(param_1 + 0x78) = CONCAT44(uVar9,uVar8);
      }
      lVar6 = lVar6 + 0x18;
      bVar7 = false;
    } while ((longlong)*(int *)(param_1 + 0x38) * 0x18 != lVar6);
  }
  return;
}



// FUNCTION 1479b2d64 FUN_1479b2d64 body=303 status=ok
// SIG undefined FUN_1479b2d64(void)

undefined8 FUN_1479b2d64(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_1400f4f7e(param_2,param_1 + 0x30);
  FUN_14480c34d(param_2,param_1 + 0x50);
  FUN_14480c34d(param_2,param_1 + 0x70);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
      lVar4 = FUN_14001cc68(0x120,0x10);
      FUN_146daec88(lVar4);
      plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar5[1] = (longlong)&DAT_100000001;
      *plVar5 = (longlong)&PTR_FUN_14a83af60;
      plVar5[2] = lVar4;
      *(longlong *)(param_1 + 0x90) = lVar4;
      plVar3 = *(longlong **)(param_1 + 0x98);
      if (plVar5 == plVar3) {
        if (plVar5 == (longlong *)0x0) goto LAB_1479b2db0;
        LOCK();
        plVar3 = plVar5 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 != 0) goto LAB_1479b2db0;
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar3 = plVar5;
      }
      else {
        *(longlong **)(param_1 + 0x98) = plVar5;
        if (plVar3 == (longlong *)0x0) goto LAB_1479b2db0;
        LOCK();
        plVar5 = plVar3 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 != 0) goto LAB_1479b2db0;
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
      }
      if (iVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_1479b2db0:
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_146db2176(*(longlong *)(param_1 + 0x90),param_2);
  }
  return 1;
}



// FUNCTION 1479b2e94 FUN_1479b2e94 body=316 status=ok
// SIG undefined FUN_1479b2e94(void)

undefined8 FUN_1479b2e94(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_e8 [40];
  undefined **local_c0 [17];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x240,0x10);
    FUN_146e4552a(puVar4,2,0x26);
    *puVar4 = &PTR_FUN_149f5ee00;
    puVar4[0x46] = 0;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      UNLOCK();
    }
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1407134c4(local_c0,param_2);
    local_38 = *(undefined8 *)(param_2 + 0x88);
    *(undefined ****)(param_2 + 0x88) = local_c0;
    local_c0[0] = &PTR_FUN_149f52ef0;
    local_30 = param_2;
    uVar3 = FUN_14001cc68(0x158,0x10);
    FUN_140dffb3a(uVar3);
    local_28 = uVar3;
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0xf0))(*(longlong **)(param_1 + 0x30),local_c0);
    FUN_14041e0ac(local_c0);
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b2fd1 FUN_1479b2fd1 body=204 status=ok
// SIG undefined FUN_1479b2fd1(void)

undefined8
FUN_1479b2fd1(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    return 0;
  }
  if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x38) + 0x1e9) == '\x01') &&
     ((cVar1 = FUN_144a61b4f(), cVar1 != '\0' ||
      (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xc60) == 0x40000002)))) {
    uVar2 = FUN_14344b88d(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return uVar2;
  }
  uVar2 = FUN_14344b40e(param_1,param_2,param_3,param_4);
  return uVar2;
}



// FUNCTION 1479b309d FUN_1479b309d body=431 status=ok
// SIG undefined FUN_1479b309d(void)

undefined8
FUN_1479b309d(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    uVar2 = 0;
  }
  else if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x38) + 0x1e9) == '\x01') &&
          ((cVar1 = FUN_144a61b4f(), cVar1 != '\0' ||
           (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) == 0x40000002)))) {
    local_98 = param_5[2];
    local_f8 = &local_a8;
    local_a8 = *param_5;
    uStack_a0 = param_5[1];
    local_c8 = *param_4;
    uStack_c4 = param_4[1];
    uStack_c0 = param_4[2];
    uStack_bc = param_4[3];
    local_b8 = *(undefined8 *)(param_4 + 4);
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = param_8;
    local_e8 = param_7;
    local_f0 = param_6;
    uVar2 = FUN_14344cb35(param_1,param_2,param_3);
  }
  else {
    local_58 = param_5[2];
    local_f8 = &local_68;
    local_68 = *param_5;
    uStack_60 = param_5[1];
    local_88 = *param_4;
    uStack_84 = param_4[1];
    uStack_80 = param_4[2];
    uStack_7c = param_4[3];
    local_78 = *(undefined8 *)(param_4 + 4);
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = param_8;
    local_e8 = param_7;
    local_f0 = param_6;
    uVar2 = FUN_14344c8e4(param_1,param_2,param_3);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1479b324d FUN_1479b324d body=431 status=ok
// SIG undefined FUN_1479b324d(void)

undefined8
FUN_1479b324d(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    uVar2 = 0;
  }
  else if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x38) + 0x1e9) == '\x01') &&
          ((cVar1 = FUN_144a61b4f(), cVar1 != '\0' ||
           (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) == 0x40000002)))) {
    local_98 = param_5[2];
    local_f8 = &local_a8;
    local_a8 = *param_5;
    uStack_a0 = param_5[1];
    local_c8 = *param_4;
    uStack_c4 = param_4[1];
    uStack_c0 = param_4[2];
    uStack_bc = param_4[3];
    local_b8 = *(undefined8 *)(param_4 + 4);
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = param_8;
    local_e8 = param_7;
    local_f0 = param_6;
    uVar2 = FUN_14344e197(param_1,param_2,param_3);
  }
  else {
    local_58 = param_5[2];
    local_f8 = &local_68;
    local_68 = *param_5;
    uStack_60 = param_5[1];
    local_88 = *param_4;
    uStack_84 = param_4[1];
    uStack_80 = param_4[2];
    uStack_7c = param_4[3];
    local_78 = *(undefined8 *)(param_4 + 4);
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = param_8;
    local_e8 = param_7;
    local_f0 = param_6;
    uVar2 = FUN_14344df46(param_1,param_2,param_3);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1479b33fd FUN_1479b33fd body=431 status=ok
// SIG undefined FUN_1479b33fd(void)

undefined8
FUN_1479b33fd(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    uVar2 = 0;
  }
  else if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x38) + 0x1e9) == '\x01') &&
          ((cVar1 = FUN_144a61b4f(), cVar1 != '\0' ||
           (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) == 0x40000002)))) {
    local_98 = param_5[2];
    local_f8 = &local_a8;
    local_a8 = *param_5;
    uStack_a0 = param_5[1];
    local_c8 = *param_4;
    uStack_c4 = param_4[1];
    uStack_c0 = param_4[2];
    uStack_bc = param_4[3];
    local_b8 = *(undefined8 *)(param_4 + 4);
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = param_8;
    local_e8 = param_7;
    local_f0 = param_6;
    uVar2 = FUN_14344f99b(param_1,param_2,param_3);
  }
  else {
    local_58 = param_5[2];
    local_f8 = &local_68;
    local_68 = *param_5;
    uStack_60 = param_5[1];
    local_88 = *param_4;
    uStack_84 = param_4[1];
    uStack_80 = param_4[2];
    uStack_7c = param_4[3];
    local_78 = *(undefined8 *)(param_4 + 4);
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = param_8;
    local_e8 = param_7;
    local_f0 = param_6;
    uVar2 = FUN_14344f74a(param_1,param_2,param_3);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1479b35ad FUN_1479b35ad body=431 status=ok
// SIG undefined FUN_1479b35ad(void)

undefined8
FUN_1479b35ad(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    uVar2 = 0;
  }
  else if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x38) + 0x1e9) == '\x01') &&
          ((cVar1 = FUN_144a61b4f(), cVar1 != '\0' ||
           (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) == 0x40000002)))) {
    local_98 = param_5[2];
    local_f8 = &local_a8;
    local_a8 = *param_5;
    uStack_a0 = param_5[1];
    local_c8 = *param_4;
    uStack_c4 = param_4[1];
    uStack_c0 = param_4[2];
    uStack_bc = param_4[3];
    local_b8 = *(undefined8 *)(param_4 + 4);
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = param_8;
    local_e8 = param_7;
    local_f0 = param_6;
    uVar2 = FUN_143451107(param_1,param_2,param_3);
  }
  else {
    local_58 = param_5[2];
    local_f8 = &local_68;
    local_68 = *param_5;
    uStack_60 = param_5[1];
    local_88 = *param_4;
    uStack_84 = param_4[1];
    uStack_80 = param_4[2];
    uStack_7c = param_4[3];
    local_78 = *(undefined8 *)(param_4 + 4);
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = param_8;
    local_e8 = param_7;
    local_f0 = param_6;
    uVar2 = FUN_143450eb6(param_1,param_2,param_3);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1479b375d FUN_1479b375d body=273 status=ok
// SIG undefined FUN_1479b375d(void)

undefined8
FUN_1479b375d(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    return 0;
  }
  if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x38) + 0x1e9) == '\x01') &&
     ((cVar1 = FUN_144a61b4f(), cVar1 != '\0' ||
      (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xc60) == 0x40000002)))) {
    uVar2 = FUN_143452c22(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          param_10);
    return uVar2;
  }
  uVar2 = FUN_143452786(param_1,param_2,param_3,param_4);
  return uVar2;
}



// FUNCTION 1479b386e FUN_1479b386e body=507 status=ok
// SIG undefined FUN_1479b386e(void)

void FUN_1479b386e(longlong *param_1,undefined8 *param_2,undefined8 *param_3,float param_4,
                  longlong param_5,undefined4 *param_6,undefined8 param_7)

{
  int *piVar1;
  undefined1 auStack_1c8 [32];
  LARGE_INTEGER *local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  LARGE_INTEGER local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined2 local_108;
  byte local_106;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined4 *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (param_1 != (longlong *)0x0) {
    QueryPerformanceCounter(&local_158);
    local_158.QuadPart = (LONGLONG)&PTR_FUN_14a83afe0;
    local_150 = *param_2;
    uStack_148 = param_2[1];
    local_140 = param_2[2];
    local_138 = *param_3;
    uStack_130 = param_3[1];
    local_128 = param_3[2];
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    local_108 = 0x607;
    local_100 = DAT_14c8464e0;
    uStack_f8 = DAT_14c8464e8;
    local_f0 = DAT_14c8464f0;
    local_e8 = param_5;
    local_e0 = param_6;
    local_d8 = *param_6;
    local_d4 = param_6[1];
    local_d0 = param_6[2];
    local_cc = param_6[3];
    local_c8 = 0;
    local_c0 = param_7;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0x3ff00000;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0x3ff0000000000000;
    uStack_70 = 0x3ff0000000000000;
    local_68 = 0x3ff0000000000000;
    uStack_60 = 0;
    local_106 = *(byte *)(param_6 + 4) >> 4 & 1;
    *(int *)(param_5 + 0x88) = *(int *)(param_5 + 0x88) + 1;
    local_168 = param_3[2];
    local_178 = *param_3;
    uStack_170 = param_3[1];
    local_188 = param_2[2];
    local_198 = *(undefined4 *)param_2;
    uStack_194 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_190 = *(undefined4 *)(param_2 + 1);
    uStack_18c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_1a8 = &local_158;
    (**(code **)(*param_1 + 0x50))(param_1,&local_198,&local_178,(double)param_4);
    piVar1 = (int *)(param_5 + 0x88);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1447f4cca(param_5 + 0x90,param_5 + 8,*(undefined1 *)(param_5 + 0x8c));
    }
    QueryPerformanceCounter(&local_158);
  }
  if ((local_50 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b3a6a FUN_1479b3a6a body=509 status=ok
// SIG undefined FUN_1479b3a6a(void)

void FUN_1479b3a6a(longlong *param_1,undefined8 *param_2,undefined8 *param_3,float param_4,
                  longlong param_5,undefined4 *param_6,undefined8 param_7)

{
  int *piVar1;
  undefined1 auStack_1c8 [32];
  LARGE_INTEGER *local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  LARGE_INTEGER local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined2 local_108;
  byte local_106;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined4 *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (param_1 != (longlong *)0x0) {
    QueryPerformanceCounter(&local_158);
    local_158.QuadPart = (LONGLONG)&PTR_FUN_14a83b030;
    local_150 = *param_2;
    uStack_148 = param_2[1];
    local_140 = param_2[2];
    local_138 = *param_3;
    uStack_130 = param_3[1];
    local_128 = param_3[2];
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    local_108 = 0x607;
    local_100 = DAT_14c8464e0;
    uStack_f8 = DAT_14c8464e8;
    local_f0 = DAT_14c8464f0;
    local_e8 = param_5;
    local_e0 = param_6;
    local_d8 = *param_6;
    local_d4 = param_6[1];
    local_d0 = param_6[2];
    local_cc = param_6[3];
    local_c8 = 0;
    local_c0 = param_7;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0x3ff00000;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0x3ff0000000000000;
    uStack_70 = 0x3ff0000000000000;
    local_68 = 0x3ff0000000000000;
    uStack_60 = 0;
    local_106 = *(byte *)(param_6 + 4) >> 4 & 1;
    *(int *)(param_5 + 0x88) = *(int *)(param_5 + 0x88) + 1;
    local_168 = param_3[2];
    local_178 = *param_3;
    uStack_170 = param_3[1];
    local_188 = param_2[2];
    local_198 = *(undefined4 *)param_2;
    uStack_194 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_190 = *(undefined4 *)(param_2 + 1);
    uStack_18c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_1a8 = &local_158;
    (**(code **)(*param_1 + 0x50))(param_1,&local_198,&local_178,(double)param_4);
    piVar1 = (int *)(param_5 + 0x88);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_146ef9d6d(param_5 + 0x90,param_5 + 8,*(undefined1 *)(param_5 + 0x8c));
    }
    QueryPerformanceCounter(&local_158);
  }
  if ((local_50 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b3c68 FUN_1479b3c68 body=212 status=ok
// SIG undefined FUN_1479b3c68(void)

void FUN_1479b3c68(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined2 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_70;
  LARGE_INTEGER local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x9c8) + 0x2d8);
  if (lVar1 != 0) {
    local_70 = lVar1;
    QueryPerformanceCounter(&local_68);
    local_80 = param_8;
    local_88 = param_7;
    local_90 = param_6;
    local_98 = param_5;
    FUN_143428864(&local_70,param_2,param_3,param_4);
    QueryPerformanceCounter(&local_68);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b3d3d FUN_1479b3d3d body=283 status=ok
// SIG undefined FUN_1479b3d3d(void)

void FUN_1479b3d3d(longlong param_1,undefined8 param_2,LARGE_INTEGER *param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined2 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  longlong lVar1;
  LARGE_INTEGER *pLVar2;
  undefined1 auStack_138 [40];
  longlong local_110;
  LARGE_INTEGER local_108 [12];
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_62;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_1 != 0) {
    local_110 = param_1;
    QueryPerformanceCounter(local_108);
    local_88 = &local_62;
    local_62 = param_7;
    local_98 = &local_68;
    local_68 = param_5;
    local_90 = param_6;
    local_80 = param_8;
    local_78 = param_9;
    local_70 = param_10;
    pLVar2 = local_108;
    local_a8 = &local_110;
    local_a0 = param_4;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *pLVar2 = *param_3;
      param_3 = param_3 + 1;
      pLVar2 = pLVar2 + 1;
    }
    FUN_143456736(param_2);
    QueryPerformanceCounter(local_108);
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b3e59 FUN_1479b3e59 body=283 status=ok
// SIG undefined FUN_1479b3e59(void)

void FUN_1479b3e59(longlong param_1,undefined8 param_2,LARGE_INTEGER *param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined2 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  longlong lVar1;
  LARGE_INTEGER *pLVar2;
  undefined1 auStack_138 [40];
  longlong local_110;
  LARGE_INTEGER local_108 [12];
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_62;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_1 != 0) {
    local_110 = param_1;
    QueryPerformanceCounter(local_108);
    local_88 = &local_62;
    local_62 = param_7;
    local_98 = &local_68;
    local_68 = param_5;
    local_90 = param_6;
    local_80 = param_8;
    local_78 = param_9;
    local_70 = param_10;
    pLVar2 = local_108;
    local_a8 = &local_110;
    local_a0 = param_4;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *pLVar2 = *param_3;
      param_3 = param_3 + 1;
      pLVar2 = pLVar2 + 1;
    }
    FUN_143464e67(param_2);
    QueryPerformanceCounter(local_108);
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b3f75 FUN_1479b3f75 body=301 status=ok
// SIG undefined FUN_1479b3f75(void)

void FUN_1479b3f75(longlong param_1,undefined8 param_2,LARGE_INTEGER *param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined2 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  longlong lVar1;
  LARGE_INTEGER *pLVar2;
  undefined1 auStack_138 [40];
  longlong local_110;
  LARGE_INTEGER local_108 [12];
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_62;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x9c8) + 0x2d8);
  if (lVar1 != 0) {
    local_110 = lVar1;
    QueryPerformanceCounter(local_108);
    local_88 = &local_62;
    local_62 = param_7;
    local_98 = &local_68;
    local_68 = param_5;
    local_90 = param_6;
    local_80 = param_8;
    local_78 = param_9;
    local_70 = param_10;
    pLVar2 = local_108;
    local_a8 = &local_110;
    local_a0 = param_4;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *pLVar2 = *param_3;
      param_3 = param_3 + 1;
      pLVar2 = pLVar2 + 1;
    }
    FUN_14345629a(param_2);
    QueryPerformanceCounter(local_108);
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b40a3 FUN_1479b40a3 body=201 status=ok
// SIG undefined FUN_1479b40a3(void)

void FUN_1479b40a3(longlong param_1,undefined8 param_2,LARGE_INTEGER *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  LARGE_INTEGER *pLVar2;
  undefined1 auStack_108 [40];
  longlong local_e0;
  LARGE_INTEGER local_d8 [13];
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1 != 0) {
    local_e0 = param_1;
    QueryPerformanceCounter(local_d8);
    local_60 = param_5;
    local_58 = param_6;
    local_50 = param_7;
    pLVar2 = local_d8;
    local_70 = &local_e0;
    local_68 = param_4;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *pLVar2 = *param_3;
      param_3 = param_3 + 1;
      pLVar2 = pLVar2 + 1;
    }
    FUN_143465804(param_2);
    QueryPerformanceCounter(local_d8);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b416d FUN_1479b416d body=201 status=ok
// SIG undefined FUN_1479b416d(void)

void FUN_1479b416d(longlong param_1,undefined8 param_2,LARGE_INTEGER *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  LARGE_INTEGER *pLVar2;
  undefined1 auStack_108 [40];
  longlong local_e0;
  LARGE_INTEGER local_d8 [13];
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1 != 0) {
    local_e0 = param_1;
    QueryPerformanceCounter(local_d8);
    local_60 = param_5;
    local_58 = param_6;
    local_50 = param_7;
    pLVar2 = local_d8;
    local_70 = &local_e0;
    local_68 = param_4;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *pLVar2 = *param_3;
      param_3 = param_3 + 1;
      pLVar2 = pLVar2 + 1;
    }
    FUN_143471fba(param_2);
    QueryPerformanceCounter(local_d8);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b4237 FUN_1479b4237 body=219 status=ok
// SIG undefined FUN_1479b4237(void)

void FUN_1479b4237(longlong param_1,undefined8 param_2,LARGE_INTEGER *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  LARGE_INTEGER *pLVar2;
  undefined1 auStack_108 [40];
  longlong local_e0;
  LARGE_INTEGER local_d8 [13];
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x9c8) + 0x2d8);
  if (lVar1 != 0) {
    local_e0 = lVar1;
    QueryPerformanceCounter(local_d8);
    local_60 = param_5;
    local_58 = param_6;
    local_50 = param_7;
    pLVar2 = local_d8;
    local_70 = &local_e0;
    local_68 = param_4;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *pLVar2 = *param_3;
      param_3 = param_3 + 1;
      pLVar2 = pLVar2 + 1;
    }
    FUN_14346553d(param_2);
    QueryPerformanceCounter(local_d8);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b4314 FUN_1479b4314 body=430 status=ok
// SIG undefined FUN_1479b4314(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1479b4314(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8,
             undefined4 *param_9,longlong param_10,undefined4 param_11)

{
  longlong *plVar1;
  undefined8 *puVar2;
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
  undefined8 uVar14;
  
  *param_1 = 0;
  FUN_1434411c0(param_1 + 1);
  plVar1 = param_1 + 0x22;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar14 = param_3[1];
  param_1[0x16] = *param_3;
  param_1[0x17] = uVar14;
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  uVar7 = param_4[4];
  uVar8 = param_4[5];
  uVar9 = param_4[6];
  uVar10 = param_4[7];
  uVar11 = *(undefined4 *)((longlong)param_4 + 0x1e);
  uVar12 = *(undefined4 *)((longlong)param_4 + 0x22);
  uVar13 = *(undefined4 *)((longlong)param_4 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x22) = *(undefined4 *)((longlong)param_4 + 0x1a);
  *(undefined4 *)((longlong)param_1 + 0x26) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x2a) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x2e) = uVar13;
  *(undefined4 *)(param_1 + 3) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar8;
  *(undefined4 *)(param_1 + 4) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar10;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 2) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  FUN_14470be02(param_1 + 7,param_4 + 0xc);
  FUN_14471637c(param_1 + 0xd,param_4 + 0x18);
  uVar14 = _DAT_14cad0f18;
  param_1[0x11] = _DAT_14cad0f10;
  param_1[0x12] = uVar14;
  uVar5 = uRam000000014cad0f2c;
  uVar4 = uRam000000014cad0f28;
  uVar3 = uRam000000014cad0f24;
  *(undefined4 *)(param_1 + 0x13) = _DAT_14cad0f20;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar5;
  param_1[0x15] = *param_5;
  *(undefined4 *)(param_1 + 0x18) = param_6;
  *(undefined4 *)(param_1 + 0x19) = param_7;
  *(undefined4 *)((longlong)param_1 + 0xc4) = param_11;
  FUN_14485c47a(param_1,param_2);
  param_1[0x1c] = param_8[2];
  uVar14 = param_8[1];
  param_1[0x1a] = *param_8;
  param_1[0x1b] = uVar14;
  uVar3 = param_9[1];
  uVar4 = param_9[2];
  uVar5 = param_9[3];
  uVar6 = param_9[4];
  uVar7 = param_9[5];
  uVar8 = param_9[6];
  uVar9 = param_9[7];
  *(undefined4 *)(param_1 + 0x1e) = *param_9;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar3;
  *(undefined4 *)(param_1 + 0x1f) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar7;
  *(undefined4 *)(param_1 + 0x21) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar9;
  if (param_10 == 0) {
    if ((*(int *)(param_1 + 0x23) != 0) &&
       (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x23) = 0;
    }
  }
  else {
    FUN_1479d4a52(plVar1);
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (*(int *)((longlong)param_1 + 300) < 0) {
    FUN_1417bb680(param_1 + 0x24,0);
  }
  return param_1;
}



// FUNCTION 1479b44c2 FUN_1479b44c2 body=44 status=ok
// SIG undefined FUN_1479b44c2(void)

void FUN_1479b44c2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_1434281ec(param_6,param_5,param_2,param_3,param_4,param_6,param_7);
  return;
}



// FUNCTION 1479b44ee FUN_1479b44ee body=386 status=ok
// SIG undefined FUN_1479b44ee(void)

void FUN_1479b44ee(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined1 *param_6,int *param_7,undefined1 *param_8)

{
  longlong lVar1;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = 4;
  if (*param_7 - 2U < 2) {
LAB_1479b4535:
    if (*(float *)((longlong)param_7 + lVar1) <= 0.0001) {
LAB_1479b45db:
      local_38 = param_4[2];
      local_d8 = &local_48;
      local_48 = *param_4;
      uStack_40 = param_4[1];
      local_58 = *(undefined8 *)(param_3 + 4);
      local_68 = *param_3;
      uStack_64 = param_3[1];
      uStack_60 = param_3[2];
      uStack_5c = param_3[3];
      local_b0 = &local_21;
      local_b8 = param_6;
      local_c0 = &DAT_14cad0f10;
      local_c8 = param_8;
      local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,DAT_14cad0ec4);
      FUN_14475ef04(local_68,param_2,&local_69);
      goto LAB_1479b464c;
    }
  }
  else {
    if (*param_7 != 1) goto LAB_1479b45db;
    if (((float)param_7[1] <= 0.0001) && (lVar1 = 0xc, (float)param_7[2] <= 0.0001))
    goto LAB_1479b4535;
  }
  local_88 = *param_4;
  uStack_80 = param_4[1];
  local_d0 = &local_88;
  local_78 = param_4[2];
  local_a8 = *param_3;
  uStack_a4 = param_3[1];
  uStack_a0 = param_3[2];
  uStack_9c = param_3[3];
  local_d8 = (undefined8 *)&local_a8;
  local_98 = *(undefined8 *)(param_3 + 4);
  local_b0 = param_6;
  local_b8 = &DAT_14cad0f10;
  local_c0 = param_8;
  local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,DAT_14cad0ec4);
  FUN_140216816(local_a8,param_7,param_5,param_2);
LAB_1479b464c:
  if ((local_20 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479b4672 FUN_1479b4672 body=390 status=ok
// SIG undefined FUN_1479b4672(void)

bool FUN_1479b4672(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined1 *param_6,int *param_7,undefined1 *param_8)

{
  longlong lVar1;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = 4;
  if (*param_7 - 2U < 2) {
LAB_1479b46b8:
    if (*(float *)((longlong)param_7 + lVar1) <= 0.0001) {
LAB_1479b475c:
      local_48 = *param_4;
      uStack_40 = param_4[1];
      local_d8 = &local_48;
      local_38 = param_4[2];
      local_68 = *param_3;
      uStack_64 = param_3[1];
      uStack_60 = param_3[2];
      uStack_5c = param_3[3];
      local_58 = *(undefined8 *)(param_3 + 4);
      local_b0 = &local_21;
      local_b8 = param_6;
      local_c0 = &DAT_14cad0f10;
      local_c8 = param_8;
      local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,DAT_14cad0ec4);
      FUN_1401e2596(local_68,param_2,&local_69);
      goto LAB_1479b47cd;
    }
  }
  else {
    if (*param_7 != 1) goto LAB_1479b475c;
    if (((float)param_7[1] <= 0.0001) && (lVar1 = 0xc, (float)param_7[2] <= 0.0001))
    goto LAB_1479b46b8;
  }
  local_88 = *param_4;
  uStack_80 = param_4[1];
  local_d0 = &local_88;
  local_78 = param_4[2];
  local_a8 = *param_3;
  uStack_a4 = param_3[1];
  uStack_a0 = param_3[2];
  uStack_9c = param_3[3];
  local_d8 = (undefined8 *)&local_a8;
  local_98 = *(undefined8 *)(param_3 + 4);
  local_b0 = param_6;
  local_b8 = &DAT_14cad0f10;
  local_c0 = param_8;
  local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,DAT_14cad0ec4);
  FUN_14038e8fe(local_a8,param_7,param_5,param_2);
LAB_1479b47cd:
  if ((local_20 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0 < *(int *)(param_2 + 8);
}



// FUNCTION 1479b47fa FUN_1479b47fa body=582 status=ok
// SIG undefined FUN_1479b47fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1479b47fa(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_90;
  undefined1 local_89;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = _DAT_14cad0ee0;
  uStack_a0 = uRam000000014cad0ee8;
  local_b8 = _DAT_14cad0ed0;
  uStack_b0 = _DAT_14cad0ed8;
  lVar9 = 0;
  do {
    bVar1 = *(char *)((longlong)&local_b8 + lVar9) == DAT_149c360b0;
    bVar2 = *(char *)((longlong)&local_b8 + lVar9 + 1) == DAT_149c360b0._1_1_;
    bVar3 = *(char *)((longlong)&local_b8 + lVar9 + 2) == DAT_149c360b0._2_1_;
    bVar4 = *(char *)((longlong)&local_b8 + lVar9 + 3) == DAT_149c360b0._3_1_;
    bVar5 = *(char *)((longlong)&local_b8 + lVar9 + 4) == DAT_149c360b0._4_1_;
    bVar6 = *(char *)((longlong)&local_b8 + lVar9 + 5) == DAT_149c360b0._5_1_;
    bVar7 = *(char *)((longlong)&local_b8 + lVar9 + 6) == DAT_149c360b0._6_1_;
    bVar8 = *(char *)((longlong)&local_b8 + lVar9 + 7) == DAT_149c360b0._7_1_;
    if ((bool)(~bVar1 & 1)) {
      *(undefined1 *)((longlong)&local_b8 + lVar9) = 2;
    }
    if ((bool)(~bVar2 & 1)) {
      *(undefined1 *)((longlong)&local_b8 + lVar9 + 1) = 2;
    }
    if ((bool)(~bVar3 & 1)) {
      *(undefined1 *)((longlong)&local_b8 + lVar9 + 2) = 2;
    }
    if ((bool)(~bVar4 & 1)) {
      *(undefined1 *)((longlong)&local_b8 + lVar9 + 3) = 2;
    }
    if ((bool)(~bVar5 & 1)) {
      *(undefined1 *)((longlong)&local_b8 + lVar9 + 4) = 2;
    }
    if ((bool)(~bVar6 & 1)) {
      *(undefined1 *)((longlong)&local_b8 + lVar9 + 5) = 2;
    }
    if ((bool)(~bVar7 & 1)) {
      *(undefined1 *)((longlong)&local_b8 + lVar9 + 6) = 2;
    }
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&local_b8 + lVar9 + 7) = 2;
    }
    if ((bool)(~bVar1 & 1)) {
      *(undefined1 *)((longlong)&uStack_b0 + lVar9) = 2;
    }
    if ((bool)(~bVar2 & 1)) {
      *(undefined1 *)((longlong)&uStack_b0 + lVar9 + 1) = 2;
    }
    if ((bool)(~bVar3 & 1)) {
      *(undefined1 *)((longlong)&uStack_b0 + lVar9 + 2) = 2;
    }
    if ((bool)(~bVar4 & 1)) {
      *(undefined1 *)((longlong)&uStack_b0 + lVar9 + 3) = 2;
    }
    if ((bool)(~bVar5 & 1)) {
      *(undefined1 *)((longlong)&uStack_b0 + lVar9 + 4) = 2;
    }
    if ((bool)(~bVar6 & 1)) {
      *(undefined1 *)((longlong)&uStack_b0 + lVar9 + 5) = 2;
    }
    if ((bool)(~bVar7 & 1)) {
      *(undefined1 *)((longlong)&uStack_b0 + lVar9 + 6) = 2;
    }
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&uStack_b0 + lVar9 + 7) = 2;
    }
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x20);
  FUN_143786bb4(param_5,&local_90,&local_b8);
  local_58 = param_4[2];
  local_e8 = &local_68;
  local_68 = *param_4;
  uStack_60 = param_4[1];
  local_78 = param_3[2];
  local_88 = *param_3;
  uStack_80 = param_3[1];
  local_c0 = &local_41;
  local_c8 = &DAT_14cad0f08;
  local_d8 = param_6;
  local_e0 = local_90;
  local_d0 = &local_b8;
  FUN_14475ef04(param_1,param_2,&local_89);
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b4a42 FUN_1479b4a42 body=582 status=ok
// SIG undefined FUN_1479b4a42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1479b4a42(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_90;
  undefined1 local_89;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = _DAT_14cad0ee0;
  uStack_a0 = uRam000000014cad0ee8;
  local_b8 = _DAT_14cad0ed0;
  uStack_b0 = _DAT_14cad0ed8;
  lVar9 = 0;
  do {
    bVar1 = *(char *)((longlong)&local_b8 + lVar9) == DAT_149c360b0;
    bVar2 = *(char *)((longlong)&local_b8 + lVar9 + 1) == DAT_149c360b0._1_1_;
    bVar3 = *(char *)((longlong)&local_b8 + lVar9 + 2) == DAT_149c360b0._2_1_;
    bVar4 = *(char *)((longlong)&local_b8 + lVar9 + 3) == DAT_149c360b0._3_1_;
    bVar5 = *(char *)((longlong)&local_b8 + lVar9 + 4) == DAT_149c360b0._4_1_;
    bVar6 = *(char *)((longlong)&local_b8 + lVar9 + 5) == DAT_149c360b0._5_1_;
    bVar7 = *(char *)((longlong)&local_b8 + lVar9 + 6) == DAT_149c360b0._6_1_;
    bVar8 = *(char *)((longlong)&local_b8 + lVar9 + 7) == DAT_149c360b0._7_1_;
    if ((bool)(~bVar1 & 1)) {
      *(undefined1 *)((longlong)&local_b8 + lVar9) = 2;
    }
    if ((bool)(~bVar2 & 1)) {
      *(undefined1 *)((longlong)&local_b8 + lVar9 + 1) = 2;
    }
    if ((bool)(~bVar3 & 1)) {
      *(undefined1 *)((longlong)&local_b8 + lVar9 + 2) = 2;
    }
    if ((bool)(~bVar4 & 1)) {
      *(undefined1 *)((longlong)&local_b8 + lVar9 + 3) = 2;
    }
    if ((bool)(~bVar5 & 1)) {
      *(undefined1 *)((longlong)&local_b8 + lVar9 + 4) = 2;
    }
    if ((bool)(~bVar6 & 1)) {
      *(undefined1 *)((longlong)&local_b8 + lVar9 + 5) = 2;
    }
    if ((bool)(~bVar7 & 1)) {
      *(undefined1 *)((longlong)&local_b8 + lVar9 + 6) = 2;
    }
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&local_b8 + lVar9 + 7) = 2;
    }
    if ((bool)(~bVar1 & 1)) {
      *(undefined1 *)((longlong)&uStack_b0 + lVar9) = 2;
    }
    if ((bool)(~bVar2 & 1)) {
      *(undefined1 *)((longlong)&uStack_b0 + lVar9 + 1) = 2;
    }
    if ((bool)(~bVar3 & 1)) {
      *(undefined1 *)((longlong)&uStack_b0 + lVar9 + 2) = 2;
    }
    if ((bool)(~bVar4 & 1)) {
      *(undefined1 *)((longlong)&uStack_b0 + lVar9 + 3) = 2;
    }
    if ((bool)(~bVar5 & 1)) {
      *(undefined1 *)((longlong)&uStack_b0 + lVar9 + 4) = 2;
    }
    if ((bool)(~bVar6 & 1)) {
      *(undefined1 *)((longlong)&uStack_b0 + lVar9 + 5) = 2;
    }
    if ((bool)(~bVar7 & 1)) {
      *(undefined1 *)((longlong)&uStack_b0 + lVar9 + 6) = 2;
    }
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&uStack_b0 + lVar9 + 7) = 2;
    }
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x20);
  FUN_143786bb4(param_5,&local_90,&local_b8);
  local_68 = *param_4;
  uStack_60 = param_4[1];
  local_e8 = &local_68;
  local_58 = param_4[2];
  local_88 = *param_3;
  uStack_80 = param_3[1];
  local_78 = param_3[2];
  local_c0 = &local_41;
  local_c8 = &DAT_14cad0f08;
  local_d8 = param_6;
  local_e0 = local_90;
  local_d0 = &local_b8;
  FUN_1401e2596(param_1,param_2,&local_89);
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b4c8a FUN_1479b4c8a body=535 status=ok
// SIG undefined FUN_1479b4c8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1479b4c8a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = _DAT_14cad0ee0;
  uStack_60 = uRam000000014cad0ee8;
  local_78 = _DAT_14cad0ed0;
  uStack_70 = _DAT_14cad0ed8;
  lVar9 = 0;
  do {
    bVar1 = *(char *)((longlong)&local_78 + lVar9) == DAT_149c360b0;
    bVar2 = *(char *)((longlong)&local_78 + lVar9 + 1) == DAT_149c360b0._1_1_;
    bVar3 = *(char *)((longlong)&local_78 + lVar9 + 2) == DAT_149c360b0._2_1_;
    bVar4 = *(char *)((longlong)&local_78 + lVar9 + 3) == DAT_149c360b0._3_1_;
    bVar5 = *(char *)((longlong)&local_78 + lVar9 + 4) == DAT_149c360b0._4_1_;
    bVar6 = *(char *)((longlong)&local_78 + lVar9 + 5) == DAT_149c360b0._5_1_;
    bVar7 = *(char *)((longlong)&local_78 + lVar9 + 6) == DAT_149c360b0._6_1_;
    bVar8 = *(char *)((longlong)&local_78 + lVar9 + 7) == DAT_149c360b0._7_1_;
    if ((bool)(~bVar1 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9) = 2;
    }
    if ((bool)(~bVar2 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 1) = 2;
    }
    if ((bool)(~bVar3 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 2) = 2;
    }
    if ((bool)(~bVar4 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 3) = 2;
    }
    if ((bool)(~bVar5 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 4) = 2;
    }
    if ((bool)(~bVar6 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 5) = 2;
    }
    if ((bool)(~bVar7 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 6) = 2;
    }
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 7) = 2;
    }
    if ((bool)(~bVar1 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9) = 2;
    }
    if ((bool)(~bVar2 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 1) = 2;
    }
    if ((bool)(~bVar3 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 2) = 2;
    }
    if ((bool)(~bVar4 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 3) = 2;
    }
    if ((bool)(~bVar5 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 4) = 2;
    }
    if ((bool)(~bVar6 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 5) = 2;
    }
    if ((bool)(~bVar7 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 6) = 2;
    }
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 7) = 2;
    }
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x20);
  FUN_143786bb4(param_6,&local_4c,&local_78);
  local_90 = param_8;
  local_98 = param_7;
  local_a0 = local_4c;
  local_a8 = param_5;
  local_88 = &local_78;
  FUN_14021655c(param_1,param_2,param_3,param_4);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b4ea2 FUN_1479b4ea2 body=535 status=ok
// SIG undefined FUN_1479b4ea2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1479b4ea2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = _DAT_14cad0ee0;
  uStack_60 = uRam000000014cad0ee8;
  local_78 = _DAT_14cad0ed0;
  uStack_70 = _DAT_14cad0ed8;
  lVar9 = 0;
  do {
    bVar1 = *(char *)((longlong)&local_78 + lVar9) == DAT_149c360b0;
    bVar2 = *(char *)((longlong)&local_78 + lVar9 + 1) == DAT_149c360b0._1_1_;
    bVar3 = *(char *)((longlong)&local_78 + lVar9 + 2) == DAT_149c360b0._2_1_;
    bVar4 = *(char *)((longlong)&local_78 + lVar9 + 3) == DAT_149c360b0._3_1_;
    bVar5 = *(char *)((longlong)&local_78 + lVar9 + 4) == DAT_149c360b0._4_1_;
    bVar6 = *(char *)((longlong)&local_78 + lVar9 + 5) == DAT_149c360b0._5_1_;
    bVar7 = *(char *)((longlong)&local_78 + lVar9 + 6) == DAT_149c360b0._6_1_;
    bVar8 = *(char *)((longlong)&local_78 + lVar9 + 7) == DAT_149c360b0._7_1_;
    if ((bool)(~bVar1 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9) = 2;
    }
    if ((bool)(~bVar2 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 1) = 2;
    }
    if ((bool)(~bVar3 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 2) = 2;
    }
    if ((bool)(~bVar4 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 3) = 2;
    }
    if ((bool)(~bVar5 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 4) = 2;
    }
    if ((bool)(~bVar6 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 5) = 2;
    }
    if ((bool)(~bVar7 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 6) = 2;
    }
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 7) = 2;
    }
    if ((bool)(~bVar1 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9) = 2;
    }
    if ((bool)(~bVar2 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 1) = 2;
    }
    if ((bool)(~bVar3 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 2) = 2;
    }
    if ((bool)(~bVar4 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 3) = 2;
    }
    if ((bool)(~bVar5 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 4) = 2;
    }
    if ((bool)(~bVar6 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 5) = 2;
    }
    if ((bool)(~bVar7 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 6) = 2;
    }
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 7) = 2;
    }
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x20);
  FUN_143786bb4(param_6,&local_4c,&local_78);
  local_90 = param_8;
  local_98 = param_7;
  local_a0 = local_4c;
  local_a8 = param_5;
  local_88 = &local_78;
  FUN_14038e76e(param_1,param_2,param_3,param_4);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b50ba FUN_1479b50ba body=535 status=ok
// SIG undefined FUN_1479b50ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1479b50ba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined4 *local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = _DAT_14cad0ee0;
  uStack_60 = uRam000000014cad0ee8;
  local_78 = _DAT_14cad0ed0;
  uStack_70 = _DAT_14cad0ed8;
  lVar9 = 0;
  do {
    bVar1 = *(char *)((longlong)&local_78 + lVar9) == DAT_149c360b0;
    bVar2 = *(char *)((longlong)&local_78 + lVar9 + 1) == DAT_149c360b0._1_1_;
    bVar3 = *(char *)((longlong)&local_78 + lVar9 + 2) == DAT_149c360b0._2_1_;
    bVar4 = *(char *)((longlong)&local_78 + lVar9 + 3) == DAT_149c360b0._3_1_;
    bVar5 = *(char *)((longlong)&local_78 + lVar9 + 4) == DAT_149c360b0._4_1_;
    bVar6 = *(char *)((longlong)&local_78 + lVar9 + 5) == DAT_149c360b0._5_1_;
    bVar7 = *(char *)((longlong)&local_78 + lVar9 + 6) == DAT_149c360b0._6_1_;
    bVar8 = *(char *)((longlong)&local_78 + lVar9 + 7) == DAT_149c360b0._7_1_;
    if ((bool)(~bVar1 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9) = 2;
    }
    if ((bool)(~bVar2 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 1) = 2;
    }
    if ((bool)(~bVar3 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 2) = 2;
    }
    if ((bool)(~bVar4 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 3) = 2;
    }
    if ((bool)(~bVar5 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 4) = 2;
    }
    if ((bool)(~bVar6 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 5) = 2;
    }
    if ((bool)(~bVar7 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 6) = 2;
    }
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&local_78 + lVar9 + 7) = 2;
    }
    if ((bool)(~bVar1 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9) = 2;
    }
    if ((bool)(~bVar2 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 1) = 2;
    }
    if ((bool)(~bVar3 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 2) = 2;
    }
    if ((bool)(~bVar4 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 3) = 2;
    }
    if ((bool)(~bVar5 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 4) = 2;
    }
    if ((bool)(~bVar6 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 5) = 2;
    }
    if ((bool)(~bVar7 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 6) = 2;
    }
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&uStack_70 + lVar9 + 7) = 2;
    }
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x20);
  FUN_143786bb4(param_5,&local_4c,&local_78);
  local_88 = &DAT_14cad0f08;
  local_98 = param_7;
  local_a0 = local_4c;
  local_a8 = param_2;
  local_90 = &local_78;
  FUN_14052f4ca(param_1,param_6,param_3,param_4);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b52d2 FUN_1479b52d2 body=130 status=ok
// SIG undefined FUN_1479b52d2(void)

void FUN_1479b52d2(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_14497fce4(*param_1,(int)param_1[1],param_3,&local_11);
  if (1 < (int)param_1[1]) {
    iVar1 = 1;
    lVar2 = 0;
    do {
      if ((*(byte *)(*param_1 + 0xad + lVar2) & 1) != 0) {
        FUN_14009114a(param_1,iVar1,0);
        break;
      }
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 0x100;
    } while ((ulonglong)((int)param_1[1] - 1) << 8 != lVar2);
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479b5356 FUN_1479b5356 body=238 status=ok
// SIG undefined FUN_1479b5356(void)

undefined8
FUN_1479b5356(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12)

{
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined4 *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_188 [344];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_190 = *(undefined4 *)(param_1 + 0x3c0);
  local_198 = param_11;
  local_1a8 = param_5;
  uStack_1a0 = param_6;
  local_1c0 = param_12;
  local_1c8 = param_7;
  local_1d0 = &DAT_14cad0f08;
  local_1d8 = param_10;
  local_1b8 = param_3;
  local_1b0 = param_4;
  FUN_14571518a(local_188,param_1,param_8,param_9);
  FUN_1400cb318(param_2,param_1 + 0x300,local_188);
  FUN_1449b675c(local_188);
  if ((local_30 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b5446 FUN_1479b5446 body=77 status=ok
// SIG undefined FUN_1479b5446(void)

void FUN_1479b5446(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x110);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1479b5494 FUN_1479b5494 body=214 status=ok
// SIG undefined FUN_1479b5494(void)

undefined8
FUN_1479b5494(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined1 local_168 [312];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_178 = *(undefined4 *)(param_1 + 0x3c0);
  local_180 = param_8;
  local_198 = param_9;
  local_1a0 = DAT_14cad0ec4;
  local_1a8 = param_5;
  local_190 = param_3;
  local_188 = param_4;
  FUN_1479b4314(local_168,param_1,param_6,param_7);
  FUN_14342b8bf(param_2,param_1 + 0x300,local_168);
  FUN_1479b5446(local_168);
  if ((local_30 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b556c FUN_1479b556c body=253 status=ok
// SIG undefined FUN_1479b556c(void)

undefined8 * FUN_1479b556c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
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
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 4);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x22);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x26);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x2a);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x22) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x26) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x2a) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x2e) = uVar11;
  FUN_14470be02(param_1 + 7,param_2 + 7);
  FUN_14471637c(param_1 + 0xd,param_2 + 0xd);
  param_1[0x17] = param_2[0x17];
  uVar16 = param_2[0x11];
  uVar17 = param_2[0x12];
  uVar18 = param_2[0x13];
  uVar19 = param_2[0x14];
  uVar20 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar20;
  param_1[0x13] = uVar18;
  param_1[0x14] = uVar19;
  param_1[0x11] = uVar16;
  param_1[0x12] = uVar17;
  param_1[0x18] = param_2[0x18];
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  uVar1 = *(undefined4 *)(param_2 + 0x1a);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xd4);
  uVar3 = *(undefined4 *)(param_2 + 0x1b);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xdc);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xe4);
  uVar6 = *(undefined4 *)(param_2 + 0x1d);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xec);
  uVar8 = *(undefined4 *)(param_2 + 0x1e);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0xf4);
  uVar10 = *(undefined4 *)(param_2 + 0x1f);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0xfc);
  uVar12 = *(undefined4 *)(param_2 + 0x20);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x104);
  uVar14 = *(undefined4 *)(param_2 + 0x21);
  uVar15 = *(undefined4 *)((longlong)param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar5;
  *(undefined4 *)(param_1 + 0x1d) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar7;
  *(undefined4 *)(param_1 + 0x20) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar13;
  *(undefined4 *)(param_1 + 0x21) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar15;
  *(undefined4 *)(param_1 + 0x1a) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar2;
  *(undefined4 *)(param_1 + 0x1b) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar4;
  *(undefined4 *)(param_1 + 0x1e) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar9;
  *(undefined4 *)(param_1 + 0x1f) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar11;
  FUN_1479d4a52(param_1 + 0x22,param_2 + 0x22);
  FUN_1479c9bc0(param_1 + 0x24,param_2 + 0x24);
  return param_1;
}



// FUNCTION 1479b569e FUN_1479b569e body=293 status=ok
// SIG undefined FUN_1479b569e(void)

int FUN_1479b569e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined4 local_5c;
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  iVar5 = *(int *)(param_2 + 1);
  uVar1 = *param_2;
  local_60 = iVar5;
  if (iVar5 == 0) {
    local_5c = 0;
    iVar5 = 0;
  }
  else {
    FUN_140b856de(&local_68,iVar5,0);
    FUN_140b8566a(local_68,uVar1,iVar5);
    iVar5 = local_60;
  }
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x90);
    lVar6 = (longlong)*(int *)(param_1 + 0x98) * 0x10 + lVar4;
    do {
      if (0 < iVar5) {
        iVar3 = 0;
        do {
          FUN_140d5ff90(local_58,lVar4,(longlong)iVar3 * 0x10 + local_68);
          cVar2 = FUN_140d5fc7a(local_58);
          FUN_141701fe8(local_58);
          if (cVar2 == '\0') {
            iVar3 = iVar3 + 1;
          }
          else {
            FUN_146294fd6(&local_68,iVar3);
          }
          iVar5 = local_60;
        } while (iVar3 < local_60);
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != lVar6);
  }
  FUN_1447a1747(local_68,iVar5);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 1479b57cc FUN_1479b57cc body=39 status=ok
// SIG undefined FUN_1479b57cc(void)

byte FUN_1479b57cc(void)

{
  byte bVar1;
  undefined8 uVar2;
  
  FUN_142780aa0(L"SmokeTestCommandlet Main");
  uVar2 = FUN_140dc5480();
  bVar1 = FUN_142770ff6(uVar2);
  return bVar1 ^ 1;
}



// FUNCTION 1479b57f8 FUN_1479b57f8 body=293 status=ok
// SIG undefined FUN_1479b57f8(void)

void FUN_1479b57f8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar6 = 0x10;
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x28);
      plVar2 = (longlong *)
               FUN_140ae7da1(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(lVar1 + -0x10 + lVar6),
                             3);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 0x220))(plVar2,param_2,0);
        if (lVar3 != 0) {
          plVar2 = (longlong *)
                   FUN_1408985b6(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar1 + -8 + lVar6),3
                                );
          if (plVar2 != (longlong *)0x0) {
            lVar4 = FUN_1400796d0(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(lVar1 + lVar6),1);
            if (lVar4 != 0) {
              local_58 = 0;
              FUN_14485c47a(&local_58,param_2);
              local_60 = *(undefined8 *)(lVar1 + lVar6);
              local_68 = local_58;
              local_50 = local_60;
              (**(code **)(*plVar2 + 0x1f0))(plVar2,&local_68,lVar3,0);
            }
          }
        }
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar5 < *(int *)(param_1 + 0x30));
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b591e FUN_1479b591e body=258 status=ok
// SIG undefined FUN_1479b591e(void)

void FUN_1479b591e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar4 = 0x10;
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x28);
      plVar2 = (longlong *)
               FUN_140ae7da1(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(lVar1 + -0x10 + lVar4),
                             3);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 0x220))(plVar2,param_2,0);
        if (lVar3 != 0) {
          plVar2 = (longlong *)
                   FUN_1408985b6(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar1 + -8 + lVar4),3
                                );
          if (plVar2 != (longlong *)0x0) {
            local_78 = 0;
            uStack_70 = 0;
            FUN_14485c47a(&local_78,param_2);
            uStack_70 = *(undefined8 *)(lVar1 + lVar4);
            (**(code **)(*plVar2 + 0x1f8))(plVar2,&local_78,lVar3,0);
          }
        }
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (lVar5 < *(int *)(param_1 + 0x30));
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b5a22 FUN_1479b5a22 body=258 status=ok
// SIG undefined FUN_1479b5a22(void)

void FUN_1479b5a22(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_1 + 0x30);
  if (0 < iVar2) {
    lVar6 = 0x10;
    lVar5 = 0;
    do {
      if (param_3 == (longlong *)0x0) {
        lVar4 = 0;
      }
      else {
        lVar4 = param_3[4];
      }
      lVar1 = *(longlong *)(param_1 + 0x28);
      if (lVar4 == *(longlong *)(lVar1 + -0x10 + lVar6)) {
        plVar3 = (longlong *)FUN_140ae7da1(*(undefined8 *)(param_2 + 0x10),lVar4,3);
        if (plVar3 == param_3) {
          lVar5 = (**(code **)(*plVar3 + 0x220))(plVar3,param_2,0);
          if ((lVar5 != 0) &&
             (plVar3 = (longlong *)
                       FUN_1408985b6(*(undefined8 *)(lVar5 + 0x10),
                                     *(undefined8 *)(lVar1 + -8 + lVar6),3),
             plVar3 != (longlong *)0x0)) {
            local_48 = 0;
            FUN_14485c47a(&local_48,param_2);
            local_40 = *(undefined8 *)(lVar1 + lVar6);
            (**(code **)(*plVar3 + 0x1f8))(plVar3,&local_48,lVar5,0);
          }
          break;
        }
        iVar2 = *(int *)(param_1 + 0x30);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar5 < iVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479b5b26 FUN_1479b5b26 body=384 status=ok
// SIG undefined FUN_1479b5b26(void)

undefined8 * FUN_1479b5b26(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_1d8 [32];
  undefined **local_1b8 [51];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *param_1 = &PTR_FUN_14a81d660;
  lVar1 = *(longlong *)(param_2 + 0x10);
  param_1[0x1d] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_1479ca864(local_1b8,param_2,param_1);
  local_1b8[0] = &PTR_FUN_14a838a90;
  if (param_2 != 0) {
    FUN_1479ca9aa(local_1b8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacffa4) {
    FUN_144b3d300(&DAT_14cacffa4);
    if (DAT_14cacffa4 == -1) {
      DAT_14cacffa0 = FUN_14342bc58();
      _Init_thread_footer(&DAT_14cacffa4);
    }
  }
  if ((*(int *)(param_1 + 2) == DAT_14cacffa0) &&
     (*(undefined4 *)(param_1 + 2) = 0, *(int *)((longlong)param_1 + 0x14) != 0)) {
    FUN_144893a1c(param_1 + 1,0);
  }
  FUN_1479b60fc(local_1b8);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b5ca8 FUN_1479b5ca8 body=159 status=ok
// SIG undefined FUN_1479b5ca8(void)

void FUN_1479b5ca8(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined **local_118 [31];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((param_3 - 1U < 2) && (0 < *(int *)(param_1 + 0x10))) {
    FUN_14072bd94(local_118,param_1);
    local_118[0] = &PTR_FUN_14a838f50;
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    local_128 = FUN_144938c96(param_2);
    local_120 = 0;
    FUN_14496b17c(uVar1,local_118,param_2,uVar1);
    FUN_1479b6204(local_118);
  }
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b5d48 FUN_1479b5d48 body=87 status=ok
// SIG undefined FUN_1479b5d48(void)

ulonglong FUN_1479b5d48(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0x10) == *(longlong *)(param_3 + 0x10))) &&
      ((lVar2 == param_3 ||
       (((DAT_14c872b89 & 1) != 0 &&
        (lVar2 = *(longlong *)(*param_1 + 0x18), lVar2 == *(longlong *)(param_3 + 0x18))))))) &&
     ((char)param_1[1] == *(char *)(param_2 + 0xb9))) {
    if ((char)param_1[1] != '\x02') {
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (-1 < iVar1) {
      return (ulonglong)CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == *(int *)(param_2 + 0x94));
    }
  }
  return 0;
}



// FUNCTION 1479b5da0 FUN_1479b5da0 body=449 status=ok
// SIG undefined FUN_1479b5da0(void)

undefined8 * FUN_1479b5da0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [408];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *param_1 = &PTR_FUN_14a544ad0;
  param_1[0x1d] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  lVar1 = FUN_144938c96(param_2);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x1d] = lVar1;
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0xb9);
  *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)(param_2 + 0x94);
  if ((((*(byte *)(param_2 + 0x9e) & 0x20) != 0) && (*(char *)(param_2 + 0xb9) != '\x02')) ||
     (*(char *)(param_2 + 0x108) == '\x01')) {
    FUN_1479b5f7a(local_1b8,param_2,param_1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cacffac) {
      FUN_144b3d300(&DAT_14cacffac);
      if (DAT_14cacffac == -1) {
        DAT_14cacffa8 = FUN_14342be56();
        _Init_thread_footer(&DAT_14cacffac);
      }
    }
    if ((*(int *)(param_1 + 2) == DAT_14cacffa8) &&
       (*(undefined4 *)(param_1 + 2) = 0, *(int *)((longlong)param_1 + 0x14) != 0)) {
      FUN_144893a1c(param_1 + 1,0);
    }
    FUN_1479b60fc(local_1b8);
  }
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b5f62 FUN_1479b5f62 body=23 status=ok
// SIG undefined FUN_1479b5f62(void)

bool FUN_1479b5f62(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x9e) & 0x20) == 0) {
    return false;
  }
  return *(char *)(param_1 + 0xb9) != '\x02';
}



// FUNCTION 1479b5f7a FUN_1479b5f7a body=384 status=ok
// SIG undefined FUN_1479b5f7a(void)

longlong * FUN_1479b5f7a(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_4c [4];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1479ca864();
  *param_1 = (longlong)&PTR_FUN_14a839410;
  if (param_2 != (longlong *)0x0) {
    plVar1 = param_1 + 0x15;
    FUN_14072be3a(param_2,plVar1);
    (**(code **)(*param_2 + 0x470))(param_2,plVar1);
    if ((param_2[0x15] != 0) && (*(longlong **)(param_2[0x15] + 0x1c8) == param_2)) {
      lVar2 = param_2[2];
      FUN_1446f470e(&local_48,L"RelativeLocation",1);
      local_40 = FUN_144a87586(lVar2,local_48);
      FUN_1479d4be2(plVar1,local_4c,&local_40);
      FUN_1446f470e(&local_58,L"RelativeRotation",1);
      local_40 = FUN_144a87586(lVar2,local_58);
      FUN_1479d4be2(plVar1,local_4c,&local_40);
      FUN_1446f470e(&local_60,L"RelativeScale3D",1);
      local_40 = FUN_144a87586(lVar2,local_60);
      FUN_1479d4be2(plVar1,local_4c,&local_40);
    }
    FUN_1479ca9aa(param_1);
    uVar3 = (**(code **)(*param_1 + 0x58))(param_1);
    FUN_140670b3c(param_3 + 0x100,uVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b60fc FUN_1479b60fc body=95 status=ok
// SIG undefined FUN_1479b60fc(void)

void FUN_1479b60fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a838cf0;
  FUN_1403ecdae(param_1 + 0x20);
  FUN_1403ecd2c(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1401be552(param_1 + 0x15);
  FUN_144a7fc42(param_1);
  return;
}



// FUNCTION 1479b615c FUN_1479b615c body=166 status=ok
// SIG undefined FUN_1479b615c(void)

void FUN_1479b615c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(undefined4 *)(param_1 + 0xf4);
  uVar1 = *(undefined1 *)(param_1 + 0xf0);
  lVar3 = *(longlong *)(param_1 + 0xe8);
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  local_40 = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  local_38 = uVar1;
  local_34 = uVar2;
  FUN_1479b5d48(&local_40,param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b6204 FUN_1479b6204 body=72 status=ok
// SIG undefined FUN_1479b6204(void)

void FUN_1479b6204(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8391b0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1401be552(param_1 + 0x15);
  FUN_144a7fc42(param_1);
  return;
}



// FUNCTION 1479b624c FUN_1479b624c body=245 status=ok
// SIG undefined FUN_1479b624c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1479b624c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(longlong *)(param_2 + 0xe0) != param_2 && *(longlong *)(param_2 + 0xe0) != 0) {
    lVar1 = FUN_1446f8646();
    lVar2 = *(longlong *)(param_2 + 0xe0);
    if (lVar2 != lVar1) {
      _DAT_14c9642e4 = _DAT_14c9642e4 + 1;
      uVar3 = FUN_1479b624c(param_1,lVar2);
      lVar2 = FUN_140584627(uVar3,lVar2,0,0x40,0,0,0,0);
      goto LAB_1479b6329;
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    return *(longlong *)(param_1 + 0x18);
  }
  _DAT_14c9642e4 = _DAT_14c9642e4 + 1;
  lVar2 = FUN_1479b6341(DAT_14c951640);
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar2 != 0) goto LAB_1479b62bd;
    iVar4 = 0;
  }
  else {
    FUN_1456cec3c(lVar2);
LAB_1479b62bd:
    iVar4 = 0;
    lVar1 = lVar2;
    do {
      iVar4 = iVar4 + 1;
      lVar1 = *(longlong *)(lVar1 + 0x20);
    } while (lVar1 != 0);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar2);
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar2;
  *(int *)(param_1 + 0x20) = iVar4;
LAB_1479b6329:
  _DAT_14c9642e4 = _DAT_14c9642e4 + -1;
  return lVar2;
}



// FUNCTION 1479b6341 FUN_1479b6341 body=175 status=ok
// SIG undefined FUN_1479b6341(void)

undefined8 FUN_1479b6341(undefined8 param_1)

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
  local_b8 = FUN_1446f8646();
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



// FUNCTION 1479b63f2 FUN_1479b63f2 body=79 status=ok
// SIG undefined FUN_1479b63f2(void)

void FUN_1479b63f2(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40),0,0);
                    /* WARNING: Could not recover jumptable at 0x0001479b643e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x18,0,0);
  return;
}



// FUNCTION 1479b6442 FUN_1479b6442 body=721 status=ok
// SIG undefined FUN_1479b6442(void)

longlong * FUN_1479b6442(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_1d8 [40];
  longlong *local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  longlong local_188;
  longlong **local_130;
  undefined1 *local_128;
  undefined1 local_11c [4];
  longlong local_118 [24];
  longlong *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_2 != 0) {
    cVar5 = FUN_140940f38(param_2);
    local_58 = (longlong *)0x0;
    local_50 = 0x1800000000;
    local_1a8 = param_2;
    FUN_1448c0c58(param_2,local_118,0);
    if ((int)local_50 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_50 & 0xffffffff);
    }
    if (*(int *)((longlong)param_1 + 0xc) < (int)local_50) {
      FUN_1479d5108(param_1);
    }
    plVar8 = local_118;
    if (local_58 != (longlong *)0x0) {
      plVar8 = local_58;
    }
    if ((int)local_50 != 0) {
      local_1b0 = param_1 + 2;
      plVar1 = plVar8 + (int)local_50;
      do {
        plVar4 = (longlong *)*plVar8;
        if ((cVar5 == '\0') && (1 < (byte)(*(char *)((longlong)plVar4 + 0xb9) - 1U))) {
          if (plVar4 != (longlong *)0x0 && *(char *)((longlong)plVar4 + 0xb9) == '\x03') {
            lVar7 = FUN_144a799b0();
            if ((((*(int *)(lVar7 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                  lVar7 + 0x30)) && (lVar7 = plVar4[0x24], lVar7 != 0)) &&
               ((byte)(*(char *)(lVar7 + 0xb9) - 1U) < 2)) {
              lVar9 = *(longlong *)(local_1a8 + 0x1c8);
              if (lVar9 == 0) {
                do {
                  lVar9 = lVar7;
                  lVar7 = *(longlong *)(lVar9 + 0x120);
                  if (lVar7 == 0) break;
                } while (*(longlong *)(lVar7 + 0xa8) == local_1a8);
              }
              if ((*(byte *)(plVar4 + 0x3f) & 1) == 0) {
                FUN_1447a91cc(plVar4,0,0);
              }
              FUN_1449437a2(plVar4 + 0x48,local_198,lVar9 + 0x240);
              local_1a0 = plVar4;
              if (DAT_14c950c29 == '\x01') {
                FUN_1456cec3c(plVar4);
              }
              local_130 = &local_1a0;
              local_128 = local_198;
              FUN_1479d520c(local_1b0,local_11c,&local_130,0);
            }
          }
        }
        else {
          (**(code **)(*plVar4 + 0x408))(plVar4,local_198);
          cVar6 = FUN_144729dda(local_190);
          if ((cVar6 != '\0') && (local_188 != 0)) {
            iVar3 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
              FUN_1479d5178(param_1,iVar3);
            }
            puVar2 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x28);
            FUN_1468fdb70(puVar2,local_198);
            *puVar2 = &PTR_FUN_14a544b40;
          }
          FUN_1448eac94(local_198);
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar1);
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1479b6716 FUN_1479b6716 body=552 status=ok
// SIG undefined FUN_1479b6716(void)

void FUN_1479b6716(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1479b6940(param_2,*(int *)(param_1 + 0x248) - *(int *)(param_1 + 0x274));
  local_78 = param_1;
  local_70 = param_2;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_14342c094(&local_78);
  }
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x268);
  }
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = (undefined4)uStack_60;
  uStack_8c = uStack_60._4_4_;
  local_a0 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_a0 + (longlong)iStack_84 * 0x10);
      if (lVar4 != 0) {
        lVar5 = FUN_144a799b0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) {
          iVar3 = *(int *)(param_2 + 200);
          *(uint *)(param_2 + 200) = iVar3 + 1U;
          if (*(uint *)(param_2 + 0xcc) < iVar3 + 1U) {
            FUN_1401bf338(param_2,iVar3);
          }
          lVar5 = *(longlong *)(param_2 + 0xc0);
          if (*(longlong *)(param_2 + 0xc0) == 0) {
            lVar5 = param_2;
          }
          *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
        }
        else if (lVar4 != *(longlong *)(param_1 + 0x1c8)) {
          lVar5 = *(longlong *)(lVar4 + 0x120);
          if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0xa8) == param_1)) {
            if ((*(byte *)(lVar4 + 0x9c) & 1) != 0) goto LAB_1479b68cf;
            if ((longlong)*(int *)(lVar5 + 0x140) != 0) {
              lVar6 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar5 + 0x138) + lVar6) == lVar4)
                goto LAB_1479b68cf;
                lVar6 = lVar6 + 8;
              } while ((longlong)*(int *)(lVar5 + 0x140) * 8 != lVar6);
            }
          }
          FUN_14342c094(&local_78,lVar4);
        }
      }
LAB_1479b68cf:
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
    } while (local_a0 != plVar1 || (CONCAT44(uStack_8c,uStack_90) != lVar2 || iStack_84 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479b6940 FUN_1479b6940 body=47 status=ok
// SIG undefined FUN_1479b6940(void)

void FUN_1479b6940(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (param_2 <= *(int *)(param_1 + 0xcc)) {
    return;
  }
  FUN_1470ea508();
  return;
}



// FUNCTION 1479b6970 FUN_1479b6970 body=1095 status=ok
// SIG undefined FUN_1479b6970(void)

void FUN_1479b6970(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  byte bVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  char local_185;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 *local_158;
  longlong *plStack_150;
  ulonglong local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_138 [16];
  undefined1 *local_128;
  int local_120;
  uint local_11c;
  longlong local_118 [24];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_2 == 0) goto LAB_1479b699a;
  local_58 = (longlong *)0x0;
  local_50 = 0x1800000000;
  plVar11 = local_118;
  local_184 = param_3;
  FUN_1479b6716(param_2,local_118);
  local_120 = (int)param_1[1];
  local_128 = (undefined1 *)0x0;
  local_11c = 0x80;
  uVar13 = local_120 + 0x1f;
  if (0x1f < uVar13) {
    if (uVar13 < 0xa0) {
      puVar8 = local_138;
LAB_1479b6d5f:
      uVar13 = uVar13 >> 3 & 0xfffffffc;
      iVar10 = (int)CONCAT71((int7)((ulonglong)plVar11 >> 8),0xff);
    }
    else {
      plVar11 = (longlong *)0x0;
      FUN_14499171c(local_138,0,uVar13 >> 5,4);
      local_11c = uVar13 & 0xffffffe0;
      puVar8 = local_128;
      if (local_128 == (undefined1 *)0x0) {
        puVar8 = local_138;
      }
      if (uVar13 < 0x120) goto LAB_1479b6d5f;
      uVar13 = (uVar13 >> 5) << 2;
      iVar10 = (int)CONCAT71((int7)((ulonglong)plVar11 >> 8),0xff);
    }
    memset(puVar8,iVar10,(ulonglong)uVar13);
    iVar10 = local_120 + 0x1f;
    if (-1 < local_120) {
      iVar10 = local_120;
    }
    if (local_120 % 0x20 != 0) {
      puVar8 = local_128;
      if (local_128 == (undefined1 *)0x0) {
        puVar8 = local_138;
      }
      bVar9 = -(char)(local_120 % 0x20);
      *(uint *)(puVar8 + (longlong)(iVar10 >> 5) * 4) =
           (uint)(*(int *)(puVar8 + (longlong)(iVar10 >> 5) * 4) << (bVar9 & 0x1f)) >>
           (bVar9 & 0x1f);
    }
  }
  if (0 < (int)param_1[1]) {
    lVar12 = 8;
    uVar14 = 0;
    do {
      lVar2 = *param_1;
      cVar4 = FUN_144729dda(lVar2 + lVar12);
      if ((cVar4 == '\0') || (*(longlong *)(lVar2 + 8 + lVar12) == 0)) {
        puVar8 = local_128;
        if (local_128 == (undefined1 *)0x0) {
          puVar8 = local_138;
        }
        bVar9 = (byte)uVar14 & 0x1f;
        *(uint *)(puVar8 + (uVar14 >> 5 & 0x7ffffff) * 4) =
             *(uint *)(puVar8 + (uVar14 >> 5 & 0x7ffffff) * 4) &
             (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
      }
      uVar14 = uVar14 + 1;
      lVar12 = lVar12 + 0x28;
    } while ((longlong)uVar14 < (longlong)(int)param_1[1]);
  }
  local_185 = FUN_140940f38(param_2);
  plVar11 = local_118;
  if (local_58 != (longlong *)0x0) {
    plVar11 = local_58;
  }
  if ((longlong)(int)local_50 != 0) {
    plVar1 = plVar11 + (int)local_50;
    do {
      lVar12 = *plVar11;
      if ((lVar12 != 0) && ((local_185 != '\0' || ((byte)(*(char *)(lVar12 + 0xb9) - 1U) < 2)))) {
        uVar6 = FUN_144938c96(lVar12);
        local_180 = (longlong *)&DAT_100000000;
        local_178 = local_138;
        uStack_170 = (longlong *)&DAT_ffffffff;
        local_168 = local_168 & 0xffffffff00000000;
        if (local_120 != 0) {
          while( true ) {
            FUN_1449c0562(&local_180);
            if (*(int *)(local_178 + 0x18) <= uStack_170._4_4_) break;
            lVar2 = *param_1;
            lVar7 = (longlong)uStack_170._4_4_;
            cVar4 = FUN_1479b615c(*(undefined8 *)(lVar2 + 0x10 + lVar7 * 0x28),lVar12,uVar6);
            if (cVar4 != '\0') {
              plVar3 = *(longlong **)(lVar2 + lVar7 * 0x28 + 0x10);
              (**(code **)(*plVar3 + 0x30))(plVar3,lVar12,local_184);
              puVar8 = local_128;
              if (local_128 == (undefined1 *)0x0) {
                puVar8 = local_138;
              }
              iVar10 = uStack_170._4_4_ + 0x1f;
              if (-1 < (longlong)uStack_170) {
                iVar10 = uStack_170._4_4_;
              }
              bVar9 = (byte)((ulonglong)uStack_170 >> 0x20) & 0x1f;
              *(uint *)(puVar8 + (longlong)(iVar10 >> 5) * 4) =
                   *(uint *)(puVar8 + (longlong)(iVar10 >> 5) * 4) &
                   (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
              break;
            }
            uStack_170 = (longlong *)CONCAT44(uStack_170._4_4_,(uint)uStack_170 & ~local_180._4_4_);
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
  }
  plVar11 = param_1 + 2;
  plVar1 = param_1 + 4;
  local_158 = &DAT_100000000;
  local_148 = 0xffffffff;
  uStack_140 = 0;
  plStack_150 = plVar1;
  if ((int)param_1[7] == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_158);
    iVar10 = (int)param_1[7];
  }
  uStack_160 = CONCAT44(uStack_13c,uStack_140);
  local_168 = local_148;
  uVar14 = local_168;
  local_178 = local_158;
  uStack_170 = plStack_150;
  local_168._4_4_ = (int)(local_148 >> 0x20);
  iVar5 = local_168._4_4_;
  local_180 = plVar11;
  if ((local_168._4_4_ != iVar10) || (local_168 = uVar14, plStack_150 != plVar1)) {
    do {
      local_168 = uVar14;
      lVar12 = *local_180;
      plVar3 = *(longlong **)(lVar12 + (longlong)iVar5 * 0x80);
      if ((plVar3 != (longlong *)0x0) && ((*(uint *)(plVar3 + 1) >> 0x1e & 1) != 0)) {
        (**(code **)(*plVar3 + 0x490))(plVar3,*(undefined8 *)(param_2 + 0x1c8),&DAT_14cadad98,0);
        local_198 = 0;
        FUN_144927a08(plVar3,lVar12 + (longlong)iVar5 * 0x80 + 0x10,0);
      }
      local_168 = CONCAT44(local_168._4_4_,(uint)local_168 & ~local_178._4_4_);
      FUN_1449c0562(&local_178);
      iVar5 = local_168._4_4_;
      uVar14 = local_168;
    } while (local_180 != plVar11 || (uStack_170 != plVar1 || local_168._4_4_ != iVar10));
  }
  if (local_128 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1479b699a:
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b6db8 FUN_1479b6db8 body=97 status=ok
// SIG undefined FUN_1479b6db8(void)

void FUN_1479b6db8(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1479b6e1a(param_2,param_1 + 2);
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = (longlong)(int)param_1[1] * 0x28;
    lVar4 = *param_1 + 8;
    do {
      cVar2 = FUN_144729dda(lVar4);
      if ((cVar2 != '\0') && (plVar1 = *(longlong **)(lVar4 + 8), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 8))(plVar1,param_2);
      }
      lVar4 = lVar4 + 0x28;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1479b6e1a FUN_1479b6e1a body=262 status=ok
// SIG undefined FUN_1479b6e1a(void)

void FUN_1479b6e1a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar2) || (uStack_48 != plVar1)) {
    do {
      (**(code **)(*param_1 + 0x88))(param_1,(longlong)iStack_5c * 0x80 + *local_78,0,0);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b6f22 FUN_1479b6f22 body=16 status=ok
// SIG undefined FUN_1479b6f22(void)

undefined8 FUN_1479b6f22(void)

{
  FUN_1405ef1b4();
  return 0;
}



// FUNCTION 1479b6f4b FUN_1479b6f4b body=66 status=ok
// SIG undefined FUN_1479b6f4b(void)

void FUN_1479b6f4b(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b6f8e FUN_1479b6f8e body=62 status=ok
// SIG undefined FUN_1479b6f8e(void)

void FUN_1479b6f8e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b6fd2 FUN_1479b6fd2 body=162 status=ok
// SIG undefined FUN_1479b6fd2(void)

void FUN_1479b6fd2(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2a8))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b7076 FUN_1479b7076 body=160 status=ok
// SIG undefined FUN_1479b7076(void)

void FUN_1479b7076(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x438))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b7118 FUN_1479b7118 body=160 status=ok
// SIG undefined FUN_1479b7118(void)

void FUN_1479b7118(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x440))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b71c0 FUN_1479b71c0 body=204 status=ok
// SIG undefined FUN_1479b71c0(void)

void FUN_1479b71c0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18));
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_28 != 0) && ((longlong)*(int *)(param_1 + 0x78) != 0)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x70) + lVar2) == local_28) {
        uVar1 = 1;
        goto LAB_1479b7244;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x78) * 8 != lVar2);
  }
  uVar1 = 0;
LAB_1479b7244:
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b732c FUN_1479b732c body=41 status=ok
// SIG undefined FUN_1479b732c(void)

void FUN_1479b732c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x3b8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479b7370 FUN_1479b7370 body=98 status=ok
// SIG undefined FUN_1479b7370(void)

void FUN_1479b7370(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  local_1c = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cad0030);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b73d4 FUN_1479b73d4 body=160 status=ok
// SIG undefined FUN_1479b73d4(void)

void FUN_1479b73d4(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x448))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b7476 FUN_1479b7476 body=160 status=ok
// SIG undefined FUN_1479b7476(void)

void FUN_1479b7476(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x450))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b7522 FUN_1479b7522 body=254 status=ok
// SIG undefined FUN_1479b7522(void)

void FUN_1479b7522(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2b8))(param_1,iVar1 != 0,local_28 != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b762a FUN_1479b762a body=162 status=ok
// SIG undefined FUN_1479b762a(void)

void FUN_1479b762a(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x3b0))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b76ce FUN_1479b76ce body=153 status=ok
// SIG undefined FUN_1479b76ce(void)

void FUN_1479b76ce(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x4c) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b7768 FUN_1479b7768 body=160 status=ok
// SIG undefined FUN_1479b7768(void)

void FUN_1479b7768(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d73116(param_1 + 0x40,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b780a FUN_1479b780a body=9 status=ok
// SIG undefined FUN_1479b780a(void)

void FUN_1479b780a(longlong param_1)

{
  FUN_147d73116(param_1 + 0x40);
  return;
}



// FUNCTION 1479b7818 FUN_1479b7818 body=158 status=ok
// SIG undefined FUN_1479b7818(void)

void FUN_1479b7818(undefined8 param_1,longlong param_2)

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
  FUN_140b361ee(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b78bc FUN_1479b78bc body=161 status=ok
// SIG undefined FUN_1479b78bc(void)

void FUN_1479b78bc(longlong param_1,longlong param_2)

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
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfe | local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b795e FUN_1479b795e body=146 status=ok
// SIG undefined FUN_1479b795e(void)

void FUN_1479b795e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x48) = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b7a64 FUN_1479b7a64 body=20 status=ok
// SIG undefined FUN_1479b7a64(void)

undefined8 FUN_1479b7a64(longlong *param_1)

{
  (**(code **)(*param_1 + 0x120))();
  return 0;
}



// FUNCTION 1479b7a78 FUN_1479b7a78 body=87 status=ok
// SIG undefined FUN_1479b7a78(void)

undefined8 FUN_1479b7a78(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = param_1[0x13];
  *(undefined4 *)(param_1 + 0x13) = 1;
  if (((*(byte *)((longlong)param_1 + 0x9c) & 8) == 0) && (*(longlong *)(param_2 + 0x260) != 0)) {
    cVar2 = (**(code **)param_1[6])(param_1 + 6);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(*param_1 + 0x358))(param_1);
      goto LAB_1479b7ac2;
    }
  }
  uVar3 = 0;
LAB_1479b7ac2:
  *(int *)(param_1 + 0x13) = (int)lVar1;
  return uVar3;
}



// FUNCTION 1479b7ad0 FUN_1479b7ad0 body=93 status=ok
// SIG undefined FUN_1479b7ad0(void)

undefined8 * FUN_1479b7ad0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  FUN_144a7c084(param_2);
  *param_2 = &PTR_FUN_14a544b40;
  FUN_1479d5abe(param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b7b2e FUN_1479b7b2e body=110 status=ok
// SIG undefined FUN_1479b7b2e(void)

undefined8 FUN_1479b7b2e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144750a86(*(undefined8 *)(param_1 + 0x28),local_28,0,0);
  FUN_144a882a8(param_2,local_28,L"[TickComponent]");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b7b9e FUN_1479b7b9e body=391 status=ok
// SIG undefined FUN_1479b7b9e(void)

undefined8 * FUN_1479b7b9e(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 == '\0') {
    *param_2 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) + 0x18);
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa8);
    if (lVar1 == 0) {
      FUN_140056680(&local_40,&DAT_149e01fe8);
    }
    else {
      local_50 = *(undefined2 **)(*(longlong *)(lVar1 + 0x10) + 0x18);
      FUN_1400021e4(&local_50,&local_40);
    }
    local_50 = *(undefined2 **)(*(longlong *)(param_1 + 0x28) + 0x18);
    FUN_1400021e4(&local_50,&local_60);
    local_78 = &DAT_149dfb77a;
    if (local_58 != 0) {
      local_78 = local_60;
    }
    puVar2 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar2 = local_40;
    }
    local_50 = *(undefined2 **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) + 0x18);
    FUN_1400021e4(&local_50,&local_70);
    puVar3 = &DAT_149dfb77a;
    if (local_68 != 0) {
      puVar3 = local_70;
    }
    FUN_140002266(&local_50,L"%s/%s/%s",puVar3,puVar2);
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar2 = local_50;
    if (local_48 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_1446f470e(param_2,puVar2,1);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479b7d34 FUN_1479b7d34 body=166 status=ok
// SIG undefined FUN_1479b7d34(void)

void FUN_1479b7d34(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0x98) = 3;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    lVar2 = FUN_144a79cc8();
    if (lVar2 != 0) {
      local_20 = param_1;
      FUN_1479cbdfe(lVar2 + 0x2f8,local_24,&local_20,0);
    }
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x260);
  FUN_147c69a38(uVar1,param_1 + 0x30);
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0x9f | 0x40;
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b7dec FUN_1479b7dec body=85 status=ok
// SIG undefined FUN_1479b7dec(void)

void FUN_1479b7dec(longlong param_1)

{
  longlong lVar1;
  
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) & 0x9f;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 0x10;
  *(undefined4 *)(param_1 + 0x68) = 2;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar1 = FUN_144a79cc8();
    if (lVar1 != 0) {
      FUN_1479cbf44(lVar1 + 0x348,param_1 + -0x30);
      return;
    }
  }
  return;
}



// FUNCTION 1479b7e42 FUN_1479b7e42 body=85 status=ok
// SIG undefined FUN_1479b7e42(void)

void FUN_1479b7e42(longlong param_1)

{
  longlong lVar1;
  
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) & 0x9f;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xf7;
  *(undefined4 *)(param_1 + 0x68) = 4;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar1 = FUN_144a79cc8();
    if (lVar1 != 0) {
      FUN_1479cbf44(lVar1 + 0x2f8,param_1 + -0x30);
      return;
    }
  }
  return;
}



// FUNCTION 1479b7ef8 FUN_1479b7ef8 body=189 status=ok
// SIG undefined FUN_1479b7ef8(void)

void FUN_1479b7ef8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1 != 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    lStack_50 = 0;
    local_68 = 0;
    lStack_60 = 0;
    local_38 = 0;
    FUN_1479d5e6e(&local_68,param_1);
    param_2[1] = lStack_50;
    lVar1 = local_68;
    if (DAT_14c950c29 == '\x01') {
      if (local_68 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = local_68;
      }
    }
    *param_2 = lVar1;
    *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
    *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
    if (lStack_60 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b7fb6 FUN_1479b7fb6 body=248 status=ok
// SIG undefined FUN_1479b7fb6(void)

longlong FUN_1479b7fb6(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined8 uStack_48;
  longlong local_40;
  undefined2 uStack_38;
  undefined2 local_36;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_28 = 0;
  local_50 = 0;
  uStack_48 = 0;
  if (((*(int *)((longlong)param_1 + 0x14) == 0 && (int)param_1[2] == 0) && (int)param_1[3] == 0) &&
      *(int *)((longlong)param_1 + 0x1c) == 0) {
    lVar3 = param_1[1];
  }
  else {
    lVar3 = 0;
  }
  uStack_34 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_2c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_38 = (undefined2)(int)param_1[2];
  local_36 = (undefined2)((uint)(int)param_1[2] >> 0x10);
  uStack_30 = (undefined2)(int)param_1[3];
  uStack_2e = (undefined2)((uint)(int)param_1[3] >> 0x10);
  local_58 = *param_1;
  local_40 = lVar3;
  if (DAT_14c950c29 == '\x01') {
    if (local_58 == 0) {
      local_58 = 0;
    }
    else {
      FUN_1456cec3c();
      local_58 = *param_1;
    }
  }
  uVar1 = FUN_1446ddbd2();
  lVar2 = FUN_147bc8192(&local_58,0,0,uVar1);
  if (lVar2 == 0) {
    if (lVar3 == param_1[1]) {
      lVar2 = 0;
    }
    else {
      local_40 = param_1[1];
      uVar1 = FUN_1446ddbd2();
      lVar2 = FUN_147bc8192(&local_58,0,0,uVar1);
    }
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b80b0 FUN_1479b80b0 body=342 status=ok
// SIG undefined FUN_1479b80b0(void)

void FUN_1479b80b0(ulonglong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cad01a8);
  if (DAT_14cad0160 != DAT_14cad018c) {
    uVar5 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    puVar6 = &DAT_14cad0190;
    if (DAT_14cad0198 != (undefined *)0x0) {
      puVar6 = DAT_14cad0198;
    }
    iVar2 = *(int *)(puVar6 + (ulonglong)(DAT_14cad01a0 - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14cad0158 + (longlong)iVar2 * 0x20;
      if (*(ulonglong *)(DAT_14cad0158 + (longlong)iVar2 * 0x20) == param_1) {
        if ((lVar1 + 8 != 0 && lVar1 != 0) && (lVar4 = param_2[1], (longlong)(int)lVar4 != 0)) {
          lVar3 = *param_2;
          lVar7 = 0;
          do {
            local_58 = 0;
            uStack_50 = 0;
            local_68 = 0;
            uStack_60 = 0;
            FUN_1479b7ef8(*(undefined8 *)(lVar3 + lVar7),&local_68);
            FUN_1479b8208(lVar1 + 8,&local_68);
            lVar7 = lVar7 + 8;
          } while ((longlong)(int)lVar4 * 8 != lVar7);
        }
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x18);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001479b811c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14cad01a8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
}



// FUNCTION 1479b8208 FUN_1479b8208 body=244 status=ok
// SIG undefined FUN_1479b8208(void)

void FUN_1479b8208(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar3 = 0;
  bVar6 = false;
  do {
    lVar5 = lVar3 << 5;
    while( true ) {
      cVar1 = FUN_1479d6104(*param_1 + lVar5,param_2);
      iVar2 = (int)param_1[1];
      if (cVar1 != '\0') break;
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 0x20;
      if (iVar2 <= lVar3) {
        if (!bVar6) {
          return;
        }
        goto LAB_1479b82e8;
      }
    }
    do {
      if (iVar2 - 1U != (uint)lVar3) {
        iVar4 = ~(uint)lVar3 + iVar2;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        memmove((void *)(*param_1 + lVar5),(void *)((longlong)(iVar2 - iVar4) * 0x20 + *param_1),
                (longlong)iVar4 << 5);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 + -1;
      if (iVar2 + -1 <= lVar3) goto LAB_1479b82e8;
      cVar1 = FUN_1479d6104(*param_1 + lVar5,param_2);
      iVar2 = (int)param_1[1];
    } while (cVar1 != '\0');
    lVar3 = lVar3 + 1;
    bVar6 = true;
  } while (lVar3 < iVar2);
LAB_1479b82e8:
  FUN_1479d616e(param_1);
  return;
}



// FUNCTION 1479b8300 FUN_1479b8300 body=107 status=ok
// SIG undefined FUN_1479b8300(void)

void FUN_1479b8300(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140bee9ec(&local_28);
  FUN_1447cd2ec(param_1,&local_28);
  FUN_1447a1747(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b8370 FUN_1479b8370 body=434 status=ok
// SIG undefined FUN_1479b8370(void)

void FUN_1479b8370(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined4 local_68;
  code *local_60;
  undefined4 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a3ee64();
  local_60 = (code *)&LAB_1479b8624;
  local_58 = 0;
  FUN_1479b8524(&DAT_14c867518,&local_70,param_1,&local_60);
  local_60 = (code *)&LAB_1479b8632;
  local_58 = 0;
  FUN_1479b8524(&DAT_14c872bf8,&local_70,param_1,&local_60);
  local_60 = (code *)&LAB_1479b8640;
  local_58 = 0;
  FUN_1479b8524(&DAT_14c872b90,&local_70,param_1,&local_60);
  local_60 = (code *)&LAB_1479b864e;
  local_58 = 0;
  FUN_1479b8524(&DAT_14c872c10,&local_70,param_1,&local_60);
  uVar1 = FUN_145cb55cc();
  local_70 = &LAB_1479b865c;
  local_68 = 0;
  FUN_1479d64a0(&local_60,param_1,&local_70);
  FUN_145c73a1e(uVar1,&local_70,&local_60);
  FUN_1401cb1ee(&local_60);
  local_60 = (code *)&LAB_1479b866a;
  local_58 = 0;
  FUN_1479b8524(&DAT_14c867578,&local_70,param_1,&local_60);
  local_60 = (code *)&LAB_1479b8772;
  local_58 = 0;
  FUN_1479b8678(&local_70,param_1,&local_60);
  local_60 = FUN_1479b8870;
  local_58 = 0;
  FUN_1479b877e(&local_70,param_1,&local_60);
  local_60 = FUN_1479b89b0;
  local_58 = 0;
  FUN_1479b88b6(&local_70,param_1,&local_60);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b8524 FUN_1479b8524 body=254 status=ok
// SIG undefined FUN_1479b8524(void)

undefined8
FUN_1479b8524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14a83c150;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b8678 FUN_1479b8678 body=248 status=ok
// SIG undefined FUN_1479b8678(void)

undefined8 FUN_1479b8678(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14a83c230;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145cb5b92(&DAT_14c8675a8,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b877e FUN_1479b877e body=241 status=ok
// SIG undefined FUN_1479b877e(void)

undefined8 FUN_1479b877e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a83c310;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14a83c2a0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1479d6ac0(param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b8870 FUN_1479b8870 body=68 status=ok
// SIG undefined FUN_1479b8870(void)

void FUN_1479b8870(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1 + 0x180,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b88b6 FUN_1479b88b6 body=248 status=ok
// SIG undefined FUN_1479b88b6(void)

undefined8 FUN_1479b88b6(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14a83c380;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140c6314c(&DAT_14c867500,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b89b0 FUN_1479b89b0 body=68 status=ok
// SIG undefined FUN_1479b89b0(void)

void FUN_1479b89b0(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1 + 400,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b89f6 FUN_1479b89f6 body=154 status=ok
// SIG undefined FUN_1479b89f6(void)

void FUN_1479b89f6(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1448b6576();
  FUN_140457ffc(&DAT_14c867518,param_1);
  FUN_140457ffc(&DAT_14c872bf8,param_1);
  FUN_140457ffc(&DAT_14c872b90,param_1);
  FUN_140457ffc(&DAT_14c872c10,param_1);
  uVar1 = FUN_145cb55cc();
  FUN_14126849c(uVar1,param_1);
  FUN_140457ffc(&DAT_14c867578,param_1);
  FUN_140457ffc(&DAT_14c8675a8,param_1);
  FUN_140457ffc(&DAT_14c8674e8,param_1);
  FUN_140457ffc(&DAT_14c867500,param_1);
  return;
}



// FUNCTION 1479b8a90 FUN_1479b8a90 body=159 status=ok
// SIG undefined FUN_1479b8a90(void)

void FUN_1479b8a90(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  (**(code **)(*param_1 + 0x9f8))(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b8b30 FUN_1479b8b30 body=152 status=ok
// SIG undefined FUN_1479b8b30(void)

void FUN_1479b8b30(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x620) = local_1c;
  FUN_1448215fa(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b8bca FUN_1479b8bca body=164 status=ok
// SIG undefined FUN_1479b8bca(void)

void FUN_1479b8bca(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x628) = local_1c;
  FUN_1448215fa(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b8c70 FUN_1479b8c70 body=164 status=ok
// SIG undefined FUN_1479b8c70(void)

void FUN_1479b8c70(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x624) = local_1c;
  FUN_1448215fa(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b8d1a FUN_1479b8d1a body=175 status=ok
// SIG undefined FUN_1479b8d1a(void)

void FUN_1479b8d1a(longlong param_1,longlong param_2)

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
  *(byte *)(param_1 + 0x630) = *(byte *)(param_1 + 0x630) & 0xfe | local_1c != 0;
  FUN_1448215fa(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b8dca FUN_1479b8dca body=164 status=ok
// SIG undefined FUN_1479b8dca(void)

void FUN_1479b8dca(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x62c) = local_1c;
  FUN_1448215fa(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b8e74 FUN_1479b8e74 body=177 status=ok
// SIG undefined FUN_1479b8e74(void)

void FUN_1479b8e74(longlong param_1,longlong param_2)

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
  *(byte *)(param_1 + 0x630) = *(byte *)(param_1 + 0x630) & 0xfd | (local_1c != 0) * '\x02';
  FUN_1448215fa(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b8f2a FUN_1479b8f2a body=137 status=ok
// SIG undefined FUN_1479b8f2a(void)

void FUN_1479b8f2a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b8fc8 FUN_1479b8fc8 body=39 status=ok
// SIG undefined FUN_1479b8fc8(void)

void FUN_1479b8fc8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x620,0x10);
  FUN_1479b8ff0(uVar1,param_1);
  return;
}



// FUNCTION 1479b8ff0 FUN_1479b8ff0 body=810 status=ok
// SIG undefined FUN_1479b8ff0(void)

undefined8 * FUN_1479b8ff0(undefined8 *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong *local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined8 *local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8 [2];
  double local_98 [3];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1406ff4f8(param_1,param_2,0);
  *param_1 = &PTR_FUN_14a839c70;
  FUN_1415eaa34(param_1 + 0x53);
  FUN_1415ea9c8(param_1 + 100);
  FUN_1415ea9fe(param_1 + 0x6c);
  FUN_14322417a(param_1 + 0x74);
  param_1[0x74] = &PTR_FUN_14a83cdc0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  FUN_144b1dcb8(param_1 + 0x79,*(undefined4 *)(param_1[0x42] + 8));
  param_1[0x79] = &PTR_FUN_14a1ca480;
  param_1[0xad] = 0x400000000;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x5b4) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x5b6) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x5e4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x620);
  fVar1 = *(float *)(param_2 + 0x624);
  *(float *)((longlong)param_1 + 0x604) = fVar1;
  fVar2 = *(float *)(param_2 + 0x628);
  *(float *)(param_1 + 0xc1) = fVar2;
  *(byte *)((longlong)param_1 + 0x60c) = *(byte *)(param_2 + 0x630) & 1;
  *(undefined4 *)(param_1 + 0xc2) = *(undefined4 *)(param_2 + 0x62c);
  *(byte *)((longlong)param_1 + 0x6f) = *(byte *)((longlong)param_1 + 0x6f) & 0x7f;
  fVar4 = fVar1 * 80.0 * 0.2;
  dVar3 = (double)((fVar4 * -0.5 + fVar1 * fVar2) * 0.5);
  local_98[1] = 0.0;
  local_98[2] = 0.0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_128 = (longlong *)CONCAT44(local_128._4_4_,0x20);
  local_120 = local_a8;
  local_118 = param_1 + 0x77;
  local_98[0] = dVar3;
  FUN_147cb471d(0x3eb2b8c2,0x3eb2b8c2,-fVar4);
  local_128 = (longlong *)(double)(fVar1 * 80.0 * 0.03);
  local_c0 = 0x3ff0000000000000;
  local_b8 = 0;
  uStack_b0 = 0;
  local_d8 = 0;
  local_d0 = 0x3ff0000000000000;
  local_c8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0x3ff0000000000000;
  local_118._0_4_ = 0x10;
  local_120 = (longlong *)dVar3;
  local_110 = local_a8;
  local_108 = param_1 + 0x77;
  FUN_147cb52ba(local_98);
  local_118 = (undefined8 *)((ulonglong)local_118._4_4_ << 0x20);
  local_120 = (longlong *)CONCAT44(local_120._4_4_,1);
  local_128 = local_a8;
  FUN_1413269d8(param_1 + 0x53,0,0,param_1 + 0x79);
  FUN_140308182(param_1 + 0x74,0);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b931c FUN_1479b931c body=84 status=ok
// SIG undefined FUN_1479b931c(void)

void FUN_1479b931c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1411ab38a(param_2,&local_1c);
  *(undefined4 *)(param_1 + 0x620) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1448215fa(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b9371 FUN_1479b9371 body=158 status=ok
// SIG undefined FUN_1479b9371(void)

void FUN_1479b9371(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1479b9410(&local_48);
  local_38 = param_3;
  plVar1 = (longlong *)FUN_14479d2ce(param_1);
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_48);
  FUN_1458791db(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b9410 FUN_1479b9410 body=95 status=ok
// SIG undefined FUN_1479b9410(void)

undefined8 * FUN_1479b9410(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458791db(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1479d7102(param_1,iVar1);
      FUN_1479d7175(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1479b9478 FUN_1479b9478 body=325 status=ok
// SIG undefined FUN_1479b9478(void)

void FUN_1479b9478(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [47];
  undefined1 local_79;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_79 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_79);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_79);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479b95be(param_1,puVar1,local_79);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1477ebf3e(&local_78);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b95be FUN_1479b95be body=784 status=ok
// SIG undefined FUN_1479b95be(void)

void FUN_1479b95be(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_188 [44];
  undefined1 local_15c [4];
  longlong local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  longlong *local_138;
  undefined8 uStack_130;
  longlong *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined1 *local_d8 [2];
  undefined8 *local_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar4 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
  if (lVar4 == 0) goto LAB_1479b9778;
  local_78 = 0;
  iVar7 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar1 = param_2 + 2;
  local_158 = 0x100000000;
  local_148 = 0xffffffff;
  local_140 = 0;
  local_150 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_158);
    iVar7 = (int)param_2[5];
  }
  local_120 = local_148;
  uVar2 = local_120;
  local_118 = CONCAT44(local_13c,local_140);
  uStack_130 = local_158;
  local_128 = local_150;
  local_120._4_4_ = (int)((ulonglong)local_148 >> 0x20);
  iVar3 = local_120._4_4_;
  local_138 = param_2;
  if ((local_120._4_4_ != iVar7) || (local_120 = uVar2, local_150 != plVar1)) {
    do {
      local_120 = uVar2;
      local_158 = *(longlong *)(*local_138 + (longlong)iVar3 * 0x10);
      if ((local_158 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      FUN_1479d87be(&local_98,local_15c,&local_158);
      local_120 = CONCAT44(local_120._4_4_,(uint)local_120 & ~uStack_130._4_4_);
      FUN_1449c0562(&uStack_130);
      iVar3 = local_120._4_4_;
      uVar2 = local_120;
    } while (local_138 != param_2 || (local_128 != plVar1 || local_120._4_4_ != iVar7));
  }
  switch(param_3) {
  case 0:
    *(undefined1 *)(param_1 + 0xa80) = 3;
    lVar6 = 0x928;
    break;
  case 1:
    *(undefined1 *)(param_1 + 0xa81) = 3;
    lVar6 = 0x980;
    break;
  case 2:
    *(undefined1 *)(param_1 + 0xa83) = 3;
    lVar6 = 0xa30;
    break;
  case 3:
    *(undefined1 *)(param_1 + 0xa82) = 3;
    lVar6 = 0x9d8;
    break;
  default:
    goto switchD_1479b97b7_default;
  }
  FUN_1478b4326(lVar6 + param_1,&local_98);
  local_118 = 0;
  local_110 = 0;
  local_138 = (longlong *)0x0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  FUN_1477ce3e2(&local_138,&local_98);
  local_d8[0] = (undefined1 *)0x0;
  local_e8 = param_3;
  puVar5 = (undefined8 *)FUN_14001cc68(0x60,8);
  *puVar5 = &PTR_LAB_14a83c670;
  local_c8 = puVar5;
  FUN_1477ce544(puVar5 + 1,&local_138);
  *(undefined1 *)(puVar5 + 0xb) = local_e8;
  if (puVar5 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_d8[0] = &LAB_1434743b8;
  }
  FUN_147962214(lVar4,*(undefined8 *)(param_1 + 0xba8),local_d8);
  local_f0 = 0;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(&local_138);
switchD_1479b97b7_default:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(&local_98);
LAB_1479b9778:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479b98d0 FUN_1479b98d0 body=190 status=ok
// SIG undefined FUN_1479b98d0(void)

void FUN_1479b98d0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_418 [40];
  undefined1 local_3f0 [976];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_418;
  FUN_1458d791c(local_3f0);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_3f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_3f0);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar1 = local_3f0;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14342da8c(param_1,puVar1);
  FUN_1458219bc(local_3f0);
  if ((local_20 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b9990 FUN_1479b9990 body=331 status=ok
// SIG undefined FUN_1479b9990(void)

void FUN_1479b9990(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_21;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_21;
  FUN_14342fdf0(param_1,local_1c,local_20,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b9adc FUN_1479b9adc body=23 status=ok
// SIG undefined FUN_1479b9adc(void)

void FUN_1479b9adc(void)

{
  FUN_14342fdf0();
  return;
}



// FUNCTION 1479b9afc FUN_1479b9afc body=200 status=ok
// SIG undefined FUN_1479b9afc(void)

void FUN_1479b9afc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_418 [32];
  undefined1 local_3f8 [976];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_418;
  FUN_1458d791c(local_3f8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_3f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_3f8);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar2 = local_3f8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1479b9bc6(param_1,puVar2);
  *param_3 = uVar1;
  FUN_1458219bc(local_3f8);
  if ((local_28 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b9bc6 FUN_1479b9bc6 body=98 status=ok
// SIG undefined FUN_1479b9bc6(void)

undefined8 FUN_1479b9bc6(longlong param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x490) & 0x10) == 0) {
    if (*(longlong *)(param_1 + 0x4e0) == 0) {
      if (*(longlong **)(param_1 + 0x460) == (longlong *)0x0) {
        return 0;
      }
      param_1 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0x2b8))();
    }
    else {
      param_1 = *(longlong *)(param_1 + 0x4e0) + 0x28;
    }
  }
  else {
    param_1 = param_1 + 0x4e8;
  }
  if (param_1 == 0) {
    return 0;
  }
  FUN_1477db452(param_2,param_1);
  return 1;
}



// FUNCTION 1479b9c28 FUN_1479b9c28 body=415 status=ok
// SIG undefined FUN_1479b9c28(void)

void FUN_1479b9c28(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_25;
  (**(code **)(*param_1 + 0x5d8))(param_1,local_1c,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b9dc8 FUN_1479b9dc8 body=329 status=ok
// SIG undefined FUN_1479b9dc8(void)

void FUN_1479b9dc8(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x5e0))(param_1,local_1c,local_20,local_21);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b9f18 FUN_1479b9f18 body=175 status=ok
// SIG undefined FUN_1479b9f18(void)

void FUN_1479b9f18(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1479b9fc8(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479b9fc8 FUN_1479b9fc8 body=680 status=ok
// SIG undefined FUN_1479b9fc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1479b9fc8(longlong param_1,float *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  int local_b0;
  uint local_ac;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar4 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0xa8))(param_1 + 0x2a8);
  uVar6 = local_90;
  if ((cVar4 != '\0') && (*(int *)(param_1 + 0xc3c) < *(int *)(param_1 + 0xc10))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cad05a0) {
      FUN_144b3d300(&DAT_14cad05a0);
      if (DAT_14cad05a0 == -1) {
        DAT_14cad0590 = 0;
        _DAT_14cad0598 = 0;
        atexit((_func_5014 *)&LAB_143430ad0);
        _Init_thread_footer(&DAT_14cad05a0);
      }
    }
    plVar1 = (longlong *)(param_1 + 0xc08);
    iVar7 = 0;
    *param_2 = 0.0;
    lVar2 = param_1 + 0xc18;
    local_80 = 0x100000000;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = lVar2;
    if (*(int *)(param_1 + 0xc30) != 0) {
      FUN_1449c0562(&local_80);
      iVar7 = *(int *)(param_1 + 0xc30);
    }
    local_90 = local_70;
    uVar6 = local_90;
    local_88 = local_68;
    local_84 = local_64;
    local_a0 = local_80;
    local_98 = local_78;
    local_90._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_a8 = plVar1;
    if ((local_90._4_4_ != iVar7) || (local_78 != lVar2)) {
      local_ac = 0;
      local_b0 = 0;
      iVar5 = local_90._4_4_;
      local_90 = uVar6;
      do {
        if (0 < *(int *)(*(longlong *)(*local_a8 + 8 + (longlong)iVar5 * 0x28) + 0x328)) {
          lVar3 = *local_a8 + (longlong)iVar5 * 0x28;
          if (0.0 < *(float *)(lVar3 + 0x10)) {
            bVar8 = (longlong)_DAT_14cad0598 < 0;
            _DAT_14cad0598 = _DAT_14cad0598 & 0xffffffff00000000;
            if (bVar8) {
              FUN_1479d83e4();
            }
            local_80 = local_80 & 0xffffffff00000000;
            uVar6 = *(undefined8 *)(lVar3 + 8);
            local_b8 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0x300))();
            uVar6 = FUN_147d410ba(uVar6,*(undefined4 *)(lVar3 + 0x10),lVar3 + 0x14,&local_80);
            if ((char)uVar6 != '\0') {
              *param_2 = (float)local_80 + *param_2;
              local_b0 = local_b0 + 1;
              local_ac = (uint)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
            }
          }
        }
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
        FUN_1449c0562(&local_a0);
        iVar5 = local_90._4_4_;
      } while (local_a8 != plVar1 || (local_98 != lVar2 || local_90._4_4_ != iVar7));
      uVar6 = local_90;
      if ((local_ac & 1) != 0) {
        *param_2 = *param_2 / (float)local_b0;
        uVar6 = CONCAT71((uint7)(uint3)((ulonglong)local_90 >> 0x28),1);
        goto LAB_1479ba0e1;
      }
    }
  }
  local_90 = uVar6;
  uVar6 = 0;
LAB_1479ba0e1:
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ba278 FUN_1479ba278 body=189 status=ok
// SIG undefined FUN_1479ba278(void)

void FUN_1479ba278(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1479ba336(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ba336 FUN_1479ba336 body=673 status=ok
// SIG undefined FUN_1479ba336(void)

uint FUN_1479ba336(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  uint local_b4;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = param_2;
  cVar8 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0xa8))(param_1 + 0x2a8);
  if (cVar8 == '\0') {
    uVar11 = 0;
  }
  else {
    iVar10 = 0;
    uVar11 = 0;
    if (*(int *)(param_1 + 0xc3c) < *(int *)(param_1 + 0xc10)) {
      plVar1 = (longlong *)(param_1 + 0xc08);
      lVar2 = param_1 + 0xc18;
      local_80 = 0x100000000;
      local_70 = 0xffffffff;
      local_68 = 0;
      local_78 = lVar2;
      if (*(int *)(param_1 + 0xc30) != 0) {
        FUN_1449c0562(&local_80);
        iVar10 = *(int *)(param_1 + 0xc30);
      }
      local_90 = local_70;
      uVar6 = local_90;
      local_88 = local_68;
      local_84 = local_64;
      local_a0 = local_80;
      local_98 = local_78;
      local_90._4_4_ = (int)((ulonglong)local_70 >> 0x20);
      local_a8 = plVar1;
      local_90 = uVar6;
      if ((local_90._4_4_ == iVar10) && (local_78 == lVar2)) {
        local_b4 = 0;
        uVar11 = local_b4;
      }
      else {
        local_b4 = 0;
        iVar9 = local_90._4_4_;
        do {
          lVar5 = *(longlong *)(*local_a8 + 8 + (longlong)iVar9 * 0x28);
          if ((0 < *(int *)(lVar5 + 0x328)) &&
             (lVar3 = *local_a8 + (longlong)iVar9 * 0x28, 0.0 < *(float *)(lVar3 + 0x10))) {
            local_80 = local_80 & 0xffffffff00000000;
            local_c8 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0x300))();
            cVar8 = FUN_147d410ba(lVar5,*(undefined4 *)(lVar3 + 0x10),lVar3 + 0x14,&local_80);
            if (cVar8 != '\0') {
              lVar5 = *(longlong *)(lVar3 + 8);
              if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(lVar5);
              }
              uVar4 = *(undefined4 *)(lVar3 + 0x10);
              uVar7 = (undefined4)local_80;
              iVar9 = (int)local_b0[1];
              *(uint *)(local_b0 + 1) = iVar9 + 1U;
              if (*(uint *)((longlong)local_b0 + 0xc) < iVar9 + 1U) {
                FUN_1479d8424(local_b0,iVar9);
              }
              lVar12 = (longlong)iVar9 * 0x10;
              lVar3 = *local_b0;
              *(undefined4 *)(lVar3 + lVar12) = uVar7;
              *(undefined4 *)(lVar3 + 4 + lVar12) = uVar4;
              *(longlong *)(lVar3 + 8 + lVar12) = lVar5;
              local_b4 = (uint)CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
              if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(lVar5);
              }
            }
          }
          local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
          FUN_1449c0562(&local_a0);
          iVar9 = local_90._4_4_;
          uVar11 = local_b4;
        } while (local_a8 != plVar1 || (local_98 != lVar2 || local_90._4_4_ != iVar10));
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffff01;
}



// FUNCTION 1479ba5de FUN_1479ba5de body=300 status=ok
// SIG undefined FUN_1479ba5de(void)

void FUN_1479ba5de(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar3 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1479ba70c(param_1,plVar3,plVar2);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ba70c FUN_1479ba70c body=1229 status=ok
// SIG undefined FUN_1479ba70c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1479ba70c(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  int local_b0;
  int local_ac;
  longlong *local_a8;
  undefined4 local_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar8 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0xa8))(param_1 + 0x2a8);
  uVar5 = local_90;
  if (((cVar8 != '\0') && (*(int *)(param_1 + 0xc3c) < *(int *)(param_1 + 0xc10))) &&
     (0 < (int)param_2[1])) {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) < 0) {
      FUN_1479d7c96(param_3);
    }
    lVar7 = param_2[1];
    if ((longlong)(int)lVar7 != 0) {
      lVar2 = *param_2;
      lVar12 = 0;
      do {
        uVar4 = *(undefined4 *)(lVar2 + lVar12);
        iVar13 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar13 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar13 + 1U) {
          FUN_1479d7cc6(param_3,iVar13);
        }
        lVar6 = *param_3;
        *(undefined4 *)(lVar6 + (longlong)iVar13 * 0xc) = uVar4;
        *(undefined8 *)(lVar6 + 4 + (longlong)iVar13 * 0xc) = 0;
        lVar12 = lVar12 + 4;
      } while ((longlong)(int)lVar7 * 4 != lVar12);
    }
    plVar1 = (longlong *)(param_1 + 0xc08);
    FUN_1479d7d5a(*param_3,(int)param_3[1]);
    lVar7 = param_1 + 0xc18;
    local_80 = 0x100000000;
    local_70 = 0xffffffff;
    uStack_68 = 0;
    uStack_78 = lVar7;
    if (*(int *)(param_1 + 0xc30) == 0) {
      iVar13 = 0;
    }
    else {
      FUN_1449c0562(&local_80);
      iVar13 = *(int *)(param_1 + 0xc30);
    }
    local_a0 = (undefined4)local_80;
    uStack_9c = local_80._4_4_;
    uStack_98 = (undefined4)uStack_78;
    uStack_94 = uStack_78._4_4_;
    uStack_88 = CONCAT44(uStack_64,uStack_68);
    local_90 = local_70;
    uVar5 = local_90;
    local_90._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_a8 = plVar1;
    if ((local_90._4_4_ != iVar13) || (uStack_78 != lVar7)) {
      uVar16 = 0;
      local_b0 = 0;
      iVar9 = local_90._4_4_;
      local_ac = iVar13;
      local_90 = uVar5;
      do {
        if ((0.0 < *(float *)(*local_a8 + 0x10 + (longlong)iVar9 * 0x28)) &&
           (lVar2 = *local_a8 + (longlong)iVar9 * 0x28,
           0 < *(int *)(*(longlong *)(lVar2 + 8) + 0x318))) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cad0588) && (FUN_144b3d300(&DAT_14cad0588), DAT_14cad0588 == -1)) {
            DAT_14cad0578 = (float *)0x0;
            _DAT_14cad0580 = 0;
            atexit((_func_5014 *)&LAB_143430abf);
            _Init_thread_footer(&DAT_14cad0588);
          }
          bVar17 = (longlong)_DAT_14cad0580 < 0;
          _DAT_14cad0580 = _DAT_14cad0580 & 0xffffffff00000000;
          if (bVar17) {
            FUN_1479d7c96(&DAT_14cad0578);
          }
          uVar5 = *(undefined8 *)(lVar2 + 8);
          local_b8 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0x300))();
          FUN_147d40d90(uVar5,*(undefined4 *)(lVar2 + 0x10),lVar2 + 0x18,&DAT_14cad0578);
          iVar13 = local_ac;
          if (0 < DAT_14cad0580) {
            if ((longlong)(int)param_3[1] != 0) {
              pfVar10 = (float *)*param_3;
              pfVar3 = pfVar10 + (longlong)(int)param_3[1] * 3;
              pfVar11 = DAT_14cad0578;
              do {
                fVar18 = *pfVar10;
                if (*pfVar11 <= fVar18) {
                  uVar14 = DAT_14cad0580 - 1;
                  if (pfVar11[(longlong)(int)uVar14 * 3] <= fVar18) {
                    pfVar10[1] = pfVar11[(longlong)(int)uVar14 * 3 + 1] + pfVar10[1];
                    fVar18 = DAT_14cad0578[(longlong)(DAT_14cad0580 + -1) * 3 + 2];
                    goto LAB_1479ba981;
                  }
                  uVar15 = (ulonglong)uVar14;
                  if ((int)uVar14 < 1) {
                    uVar15 = 0;
                  }
                  lVar2 = 0;
                  fVar19 = *pfVar11;
                  do {
                    fVar20 = fVar19;
                    lVar12 = lVar2;
                    lVar2 = lVar12 + 0xc;
                    if (uVar15 * 0xc + 0xc == lVar2) goto LAB_1479ba98b;
                    fVar19 = *(float *)((longlong)pfVar11 + lVar12 + 0xc);
                  } while ((fVar18 < fVar20) || (fVar19 <= fVar18));
                  fVar19 = (fVar18 - fVar20) / (fVar19 - fVar20);
                  fVar18 = *(float *)((longlong)pfVar11 + lVar12 + 4);
                  pfVar10[1] = (*(float *)((longlong)pfVar11 + lVar12 + 0x10) - fVar18) * fVar19 +
                               fVar18 + pfVar10[1];
                  fVar18 = *(float *)((longlong)pfVar11 + lVar12 + 8);
                  pfVar10[2] = (*(float *)((longlong)pfVar11 + lVar12 + 0x14) - fVar18) * fVar19 +
                               fVar18 + pfVar10[2];
                  pfVar11 = DAT_14cad0578;
                }
                else {
                  pfVar10[1] = pfVar11[1] + pfVar10[1];
                  fVar18 = DAT_14cad0578[2];
LAB_1479ba981:
                  pfVar11 = DAT_14cad0578;
                  pfVar10[2] = fVar18 + pfVar10[2];
                }
LAB_1479ba98b:
                pfVar10 = pfVar10 + 3;
              } while (pfVar10 != pfVar3);
            }
            local_b0 = local_b0 + 1;
            uVar16 = 1;
          }
        }
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~uStack_9c);
        FUN_1449c0562(&local_a0);
        iVar9 = local_90._4_4_;
      } while (local_a8 != plVar1 ||
               (CONCAT44(uStack_94,uStack_98) != lVar7 || local_90._4_4_ != iVar13));
      if ((1 < local_b0) && (lVar7 = param_3[1], (longlong)(int)lVar7 != 0)) {
        lVar2 = *param_3;
        lVar12 = 0;
        do {
          *(float *)(lVar2 + 4 + lVar12) = *(float *)(lVar2 + 4 + lVar12) / (float)local_b0;
          *(float *)(lVar2 + 8 + lVar12) = *(float *)(lVar2 + 8 + lVar12) / (float)local_b0;
          lVar12 = lVar12 + 0xc;
        } while ((longlong)(int)lVar7 * 0xc != lVar12);
      }
      goto LAB_1479ba76e;
    }
  }
  local_90 = uVar5;
  uVar16 = 0;
LAB_1479ba76e:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16;
}



// FUNCTION 1479babe0 FUN_1479babe0 body=201 status=ok
// SIG undefined FUN_1479babe0(void)

void FUN_1479babe0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1479bacaa(param_1,plVar2);
  *param_3 = uVar1;
  FUN_1479d71cc(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bacaa FUN_1479bacaa body=698 status=ok
// SIG undefined FUN_1479bacaa(void)

undefined8 FUN_1479bacaa(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  int local_c4;
  longlong *local_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar7 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0xa8))(param_1 + 0x2a8);
  uVar6 = local_a8;
  if ((cVar7 != '\0') && (*(int *)(param_1 + 0xc3c) < *(int *)(param_1 + 0xc10))) {
    iVar9 = *(int *)((longlong)param_2 + 0xc);
    FUN_1479d71cc(*param_2,(int)param_2[1]);
    *(undefined4 *)(param_2 + 1) = 0;
    if ((iVar9 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1479d82a8(param_2);
    }
    plVar1 = (longlong *)(param_1 + 0xc08);
    lVar2 = param_1 + 0xc18;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
    uStack_90 = lVar2;
    if (*(int *)(param_1 + 0xc30) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_98);
      iVar9 = *(int *)(param_1 + 0xc30);
    }
    local_b8 = (undefined4)local_98;
    uStack_b4 = local_98._4_4_;
    uStack_b0 = (int)uStack_90;
    uStack_ac = uStack_90._4_4_;
    lStack_a0 = uStack_80;
    local_a8 = local_88;
    uVar6 = local_a8;
    local_a8._4_4_ = (int)(local_88 >> 0x20);
    local_c0 = plVar1;
    if ((local_a8._4_4_ != iVar9) || (uStack_90 != lVar2)) {
      uVar10 = 0;
      iVar8 = local_a8._4_4_;
      local_c4 = iVar9;
      local_a8 = uVar6;
      do {
        if ((0.0 < *(float *)(*local_c0 + 0x10 + (longlong)iVar8 * 0x28)) &&
           (lVar3 = *local_c0 + (longlong)iVar8 * 0x28,
           0 < *(int *)(*(longlong *)(lVar3 + 8) + 0x318))) {
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_88 = local_88 & 0xffffffff00000000;
          lVar4 = *(longlong *)(lVar3 + 8);
          if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar4);
          }
          local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(lVar3 + 0x10));
          uVar5 = *(undefined8 *)(lVar3 + 8);
          uStack_80 = lVar4;
          local_d8 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0x300))();
          FUN_147d40d90(uVar5,*(undefined4 *)(lVar3 + 0x10),lVar3 + 0x18,&local_98);
          iVar9 = local_c4;
          if ((int)uStack_90 != 0) {
            iVar8 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar8 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
              FUN_1479d835e(param_2,iVar8);
            }
            FUN_1479d82d8((longlong)iVar8 * 0x20 + *param_2,&local_98);
            uVar10 = 1;
          }
          if (local_98 != 0) {
            FUN_1400020a8();
          }
        }
        local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~uStack_b4);
        FUN_1449c0562(&local_b8);
        iVar8 = local_a8._4_4_;
      } while (local_c0 != plVar1 ||
               (CONCAT44(uStack_ac,uStack_b0) != lVar2 || local_a8._4_4_ != iVar9));
      goto LAB_1479bad0d;
    }
  }
  local_a8 = uVar6;
  uVar10 = 0;
LAB_1479bad0d:
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 1479baf66 FUN_1479baf66 body=213 status=ok
// SIG undefined FUN_1479baf66(void)

void FUN_1479baf66(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_98 [39];
  undefined1 local_71;
  undefined1 local_70 [64];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_71 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_71);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_71);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479bb03c(param_1,local_70,local_71);
  FUN_1477d9b90(param_3,local_70);
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1477ebf3e(local_70);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bb03c FUN_1479bb03c body=439 status=ok
// SIG undefined FUN_1479bb03c(void)

undefined8 * FUN_1479bb03c(longlong param_1,undefined8 *param_2,byte param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [44];
  undefined1 local_7c [4];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
  if ((lVar4 == 0) || (3 < param_3)) {
    param_2[4] = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    param_2[8] = 0;
    *(undefined4 *)(param_2 + 9) = 0;
  }
  else {
    lVar4 = *(longlong *)(&DAT_14a83ced8 + (ulonglong)param_3 * 8);
    plVar1 = (longlong *)(param_1 + lVar4);
    param_2[4] = 0;
    iVar5 = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    param_2[8] = 0;
    *(undefined4 *)(param_2 + 9) = 0;
    lVar4 = param_1 + 0x10 + lVar4;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_48 = lVar4;
    if (*(int *)(lVar4 + 0x18) != 0) {
      FUN_1449c0562(&local_50);
      iVar5 = (int)plVar1[5];
    }
    local_60 = local_40;
    uVar2 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_70 = local_50;
    local_68 = local_48;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar3 = local_60._4_4_;
    local_78 = plVar1;
    if ((local_60._4_4_ != iVar5) || (local_60 = uVar2, local_48 != lVar4)) {
      do {
        local_60 = uVar2;
        local_50 = *(undefined8 *)(*local_78 + (longlong)iVar3 * 0x10);
        FUN_1479d893c(param_2,local_7c);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != plVar1 || (local_68 != lVar4 || local_60._4_4_ != iVar5));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479bb1f4 FUN_1479bb1f4 body=37 status=ok
// SIG undefined FUN_1479bb1f4(void)

void FUN_1479bb1f4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1479bb21a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479bb21a FUN_1479bb21a body=130 status=ok
// SIG undefined FUN_1479bb21a(void)

char FUN_1479bb21a(longlong param_1)

{
  double *pdVar1;
  longlong lVar2;
  float fVar3;
  
  if ((*(byte *)(param_1 + 0x9e) & 0x10) == 0) {
    return '\x01';
  }
  if ((*(byte *)(param_1 + 0x492) & 0x10) != 0) {
    return '\x02';
  }
  if ((*(byte *)(param_1 + 0x492) & 0x40) != 0) {
    return '\x04';
  }
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if ((lVar2 == 0) && (lVar2 = FUN_1448abda6(param_1), lVar2 == 0)) {
    if (DAT_14cad04f0 == 0) {
      fVar3 = 0.0;
      goto LAB_1479bb257;
    }
    pdVar1 = (double *)&DAT_14c866ff8;
  }
  else {
    pdVar1 = (double *)(lVar2 + 0x6e8);
  }
  fVar3 = (float)*pdVar1;
LAB_1479bb257:
  return (fVar3 - *(float *)(param_1 + 0x914) < *(float *)(param_1 + 0x918)) * '\x03';
}



// FUNCTION 1479bb2a0 FUN_1479bb2a0 body=57 status=ok
// SIG undefined FUN_1479bb2a0(void)

void FUN_1479bb2a0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong **)(param_1 + 0x460) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0x338))();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479bb2de FUN_1479bb2de body=57 status=ok
// SIG undefined FUN_1479bb2de(void)

void FUN_1479bb2de(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong **)(param_1 + 0x460) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0x330))();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479bb31c FUN_1479bb31c body=52 status=ok
// SIG undefined FUN_1479bb31c(void)

void FUN_1479bb31c(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0xa8))(param_1 + 0x2a8);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479bb374 FUN_1479bb374 body=160 status=ok
// SIG undefined FUN_1479bb374(void)

void FUN_1479bb374(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x5e8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bb416 FUN_1479bb416 body=947 status=ok
// SIG undefined FUN_1479bb416(void)

void FUN_1479bb416(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_95;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_70 [4];
  undefined8 local_6c;
  undefined1 local_64;
  longlong local_60;
  ulonglong uStack_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  plVar2 = &local_50;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_70[0] = 0x13;
  local_6c = 0x1003f800000;
  local_64 = 0;
  local_60 = 0;
  uStack_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar4 = local_70;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_88 = 0;
  uStack_80 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  puVar3 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar3 = &local_88;
  }
  local_8c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  local_90 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_94 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  local_95 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_95);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_95);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = *puVar3;
  local_d8 = &local_a8;
  puVar3 = &local_88;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  local_a0 = puVar3[1];
  local_b8 = local_95;
  local_c0 = local_94;
  local_c8 = local_90;
  local_d0 = local_8c;
  (**(code **)(*param_1 + 0x5f0))(param_1,local_48,plVar2,puVar4);
  if ((DAT_14c950c29 == '\x01') && (*plVar2 != 0)) {
    FUN_1456cec3c();
  }
  FUN_1477c9821(local_60,uStack_58 & 0xffffffff);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bb7ca FUN_1479bb7ca body=325 status=ok
// SIG undefined FUN_1479bb7ca(void)

void FUN_1479bb7ca(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [47];
  undefined1 local_79;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_79 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_79);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_79);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479bb910(param_1,puVar1,local_79);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1477ebf3e(&local_78);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bb910 FUN_1479bb910 body=817 status=ok
// SIG undefined FUN_1479bb910(void)

void FUN_1479bb910(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_188 [44];
  undefined1 local_15c [4];
  longlong local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  longlong *local_138;
  undefined8 uStack_130;
  longlong *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined1 *local_d8 [2];
  undefined8 *local_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar4 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
  if (lVar4 == 0) goto LAB_1479bbaca;
  local_78 = 0;
  iVar6 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar1 = param_2 + 2;
  local_158 = 0x100000000;
  local_148 = 0xffffffff;
  local_140 = 0;
  local_150 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_158);
    iVar6 = (int)param_2[5];
  }
  local_120 = local_148;
  uVar2 = local_120;
  local_118 = CONCAT44(local_13c,local_140);
  uStack_130 = local_158;
  local_128 = local_150;
  local_120._4_4_ = (int)((ulonglong)local_148 >> 0x20);
  iVar3 = local_120._4_4_;
  local_138 = param_2;
  if ((local_120._4_4_ != iVar6) || (local_120 = uVar2, local_150 != plVar1)) {
    do {
      local_120 = uVar2;
      local_158 = *(longlong *)(*local_138 + (longlong)iVar3 * 0x10);
      if ((local_158 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      FUN_1479d87be(&local_98,local_15c,&local_158);
      local_120 = CONCAT44(local_120._4_4_,(uint)local_120 & ~uStack_130._4_4_);
      FUN_1449c0562(&uStack_130);
      iVar3 = local_120._4_4_;
      uVar2 = local_120;
    } while (local_138 != param_2 || (local_128 != plVar1 || local_120._4_4_ != iVar6));
  }
  switch(param_3) {
  case 0:
    lVar7 = param_1 + 0x928;
    break;
  case 1:
    lVar7 = param_1 + 0x980;
    break;
  case 2:
    lVar7 = param_1 + 0xa30;
    break;
  case 3:
    lVar7 = param_1 + 0x9d8;
    break;
  default:
    goto switchD_1479bbb09_default;
  }
  FUN_1478b4552(lVar7,&local_138,&local_98);
  FUN_1477c0152(lVar7,&local_138);
  local_f0 = 0;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(&local_138);
  local_118 = 0;
  local_110 = 0;
  local_138 = (longlong *)0x0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  FUN_1477ce3e2(&local_138,&local_98);
  local_d8[0] = (undefined1 *)0x0;
  local_e8 = param_3;
  puVar5 = (undefined8 *)FUN_14001cc68(0x60,8);
  *puVar5 = &PTR_LAB_14a83c690;
  local_c8 = puVar5;
  FUN_1477ce544(puVar5 + 1,&local_138);
  *(undefined1 *)(puVar5 + 0xb) = local_e8;
  if (puVar5 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_d8[0] = &LAB_14347443c;
  }
  FUN_147962214(lVar4,*(undefined8 *)(param_1 + 0xba8),local_d8);
  local_f0 = 0;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(&local_138);
switchD_1479bbb09_default:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(&local_98);
LAB_1479bbaca:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479bbc42 FUN_1479bbc42 body=190 status=ok
// SIG undefined FUN_1479bbc42(void)

void FUN_1479bbc42(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_418 [40];
  undefined1 local_3f0 [976];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_418;
  FUN_1458d791c(local_3f0);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_3f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_3f0);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar1 = local_3f0;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479bbd02(param_1,puVar1);
  FUN_1458219bc(local_3f0);
  if ((local_20 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bbd02 FUN_1479bbd02 body=258 status=ok
// SIG undefined FUN_1479bbd02(void)

void FUN_1479bbd02(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_458 [32];
  undefined1 local_438 [976];
  undefined1 *local_68 [2];
  undefined8 *local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_458;
  FUN_1477db452(param_1 + 0x4e8);
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
  if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x9e) & 0x10) != 0)) {
    FUN_1478b30d0(local_438,param_2);
    local_68[0] = (undefined1 *)0x0;
    puVar2 = (undefined8 *)FUN_14001cc68(0x3d8,8);
    *puVar2 = &PTR_LAB_14a83c4b0;
    local_58 = puVar2;
    FUN_1478b30d0(puVar2 + 1,local_438);
    if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_68[0] = &LAB_143473d2a;
    }
    FUN_147962214(lVar1,*(undefined8 *)(param_1 + 0xba8),local_68);
    FUN_1458219bc(local_438);
  }
  if ((local_28 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bbe06 FUN_1479bbe06 body=156 status=ok
// SIG undefined FUN_1479bbe06(void)

void FUN_1479bbe06(undefined8 param_1,longlong param_2)

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
  FUN_1479bbea4(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bbea4 FUN_1479bbea4 body=177 status=ok
// SIG undefined FUN_1479bbea4(void)

void FUN_1479bbea4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x4e0) = param_2;
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
  if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x9e) & 0x10) != 0)) {
    local_48 = 0;
    local_38 = &PTR_LAB_14a83c490;
    local_58 = FUN_143473ca6;
    local_30 = param_2;
    FUN_147962214(lVar1,*(undefined8 *)(param_1 + 0xba8));
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bbf56 FUN_1479bbf56 body=245 status=ok
// SIG undefined FUN_1479bbf56(void)

void FUN_1479bbf56(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = 1;
  FUN_14343059a(param_1,0,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bc04c FUN_1479bc04c body=28 status=ok
// SIG undefined FUN_1479bc04c(void)

void FUN_1479bc04c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14343059a(param_1,0,param_2,param_3,1);
  return;
}



// FUNCTION 1479bc068 FUN_1479bc068 body=245 status=ok
// SIG undefined FUN_1479bc068(void)

void FUN_1479bc068(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = 0;
  FUN_14343059a(param_1,0,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bc15e FUN_1479bc15e body=28 status=ok
// SIG undefined FUN_1479bc15e(void)

void FUN_1479bc15e(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14343059a(param_1,0,param_2,param_3,0);
  return;
}



// FUNCTION 1479bc180 FUN_1479bc180 body=261 status=ok
// SIG undefined FUN_1479bc180(void)

void FUN_1479bc180(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
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
  (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x20))(param_1 + 0x2a8,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bc286 FUN_1479bc286 body=258 status=ok
// SIG undefined FUN_1479bc286(void)

void FUN_1479bc286(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x40))(param_1 + 0x2a8,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bc38e FUN_1479bc38e body=158 status=ok
// SIG undefined FUN_1479bc38e(void)

void FUN_1479bc38e(undefined8 param_1,longlong param_2)

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
  FUN_14342db96(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bc42e FUN_1479bc42e body=156 status=ok
// SIG undefined FUN_1479bc42e(void)

void FUN_1479bc42e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14342dc1c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bc4cc FUN_1479bc4cc body=257 status=ok
// SIG undefined FUN_1479bc4cc(void)

void FUN_1479bc4cc(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x30))(param_1 + 0x2a8,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bc5d2 FUN_1479bc5d2 body=158 status=ok
// SIG undefined FUN_1479bc5d2(void)

void FUN_1479bc5d2(undefined8 param_1,longlong param_2)

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
  FUN_14342dcb4(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bc672 FUN_1479bc672 body=156 status=ok
// SIG undefined FUN_1479bc672(void)

void FUN_1479bc672(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14342dd3a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bc710 FUN_1479bc710 body=397 status=ok
// SIG undefined FUN_1479bc710(void)

void FUN_1479bc710(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [46];
  undefined1 local_7a;
  undefined1 local_79;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_79 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_79);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_79);
  }
  local_7a = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7a);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479bc89e(param_1,puVar1,local_79,local_7a);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1477ebf3e(&local_78);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bc89e FUN_1479bc89e body=380 status=ok
// SIG undefined FUN_1479bc89e(void)

void FUN_1479bc89e(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_208 [40];
  undefined1 local_1e0 [352];
  undefined4 local_80;
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
  if (lVar1 != 0) {
    switch(param_3) {
    case 0:
      *(undefined1 *)(param_1 + 0xa80) = param_4;
      lVar3 = 0x928;
      break;
    case 1:
      *(undefined1 *)(param_1 + 0xa81) = param_4;
      lVar3 = 0x980;
      break;
    case 2:
      *(undefined1 *)(param_1 + 0xa83) = param_4;
      lVar3 = 0xa30;
      break;
    case 3:
      *(undefined1 *)(param_1 + 0xa82) = param_4;
      lVar3 = 0x9d8;
      break;
    default:
      goto switchD_1479bc925_default;
    }
    FUN_1479d84aa(lVar3 + param_1);
    FUN_1479d84ee(lVar3 + param_1,param_2);
    FUN_1477cb252(local_1e0,param_1 + 0x920);
    local_80 = *(undefined4 *)(param_1 + 0xa80);
    local_78[0] = (code *)0x0;
    puVar2 = (undefined8 *)FUN_14001cc68(0x170,8);
    *puVar2 = &PTR_LAB_14a83c650;
    local_68 = puVar2;
    FUN_147972084(puVar2 + 1,local_1e0);
    *(undefined4 *)(puVar2 + 0x2d) = local_80;
    if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_78[0] = FUN_143474326;
    }
    FUN_147962214(lVar1,*(undefined8 *)(param_1 + 0xba8),local_78);
    FUN_145821914(local_1e0);
  }
switchD_1479bc925_default:
  if ((local_30 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479bca20 FUN_1479bca20 body=158 status=ok
// SIG undefined FUN_1479bca20(void)

void FUN_1479bca20(undefined8 param_1,longlong param_2)

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
  FUN_14342ddd2(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bcac4 FUN_1479bcac4 body=158 status=ok
// SIG undefined FUN_1479bcac4(void)

void FUN_1479bcac4(undefined8 param_1,longlong param_2)

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
  FUN_1479bcb64(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bcb64 FUN_1479bcb64 body=163 status=ok
// SIG undefined FUN_1479bcb64(void)

void FUN_1479bcb64(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  char local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(byte *)(param_1 + 0x490) = *(byte *)(param_1 + 0x490) & 0xef | param_2 << 4;
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
  if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x9e) & 0x10) != 0)) {
    local_48 = 0;
    local_38 = &PTR_LAB_14a83c4d0;
    local_58 = &LAB_143473d98;
    local_30 = param_2;
    FUN_147962214(lVar1,*(undefined8 *)(param_1 + 0xba8));
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bcc0c FUN_1479bcc0c body=158 status=ok
// SIG undefined FUN_1479bcc0c(void)

void FUN_1479bcc0c(undefined8 param_1,longlong param_2)

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
  FUN_14342de58(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bccac FUN_1479bccac body=156 status=ok
// SIG undefined FUN_1479bccac(void)

void FUN_1479bccac(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14342df16(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bcd4a FUN_1479bcd4a body=156 status=ok
// SIG undefined FUN_1479bcd4a(void)

void FUN_1479bcd4a(undefined8 param_1,longlong param_2)

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
  FUN_1479bcde8(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bcde8 FUN_1479bcde8 body=199 status=ok
// SIG undefined FUN_1479bcde8(void)

void FUN_1479bcde8(longlong *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  
  cVar2 = (**(code **)(param_1[0x55] + 0xa8))(param_1 + 0x55);
  bVar1 = *(byte *)(param_1 + 0x92);
  bVar3 = bVar1 & 0xfe;
  *(byte *)(param_1 + 0x92) = bVar3;
  if ((*(byte *)((longlong)param_1 + 0x491) & 8) == 0) {
    (**(code **)(*param_1 + 0x600))(param_1);
    bVar3 = *(byte *)(param_1 + 0x92) & 0xfe;
  }
  *(byte *)(param_1 + 0x92) = bVar3 | bVar1 & 1;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x8c] = param_2;
  if ((param_2 != 0) && (DAT_14cad04b8 != 0)) {
    FUN_147abf486(param_2);
  }
  if ((cVar2 != '\0') && ((*(byte *)((longlong)param_1 + 0x491) & 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001479bce8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x5e8))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1479bceb0 FUN_1479bceb0 body=246 status=ok
// SIG undefined FUN_1479bceb0(void)

void FUN_1479bceb0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = 1;
  FUN_14343059a(param_1,local_20,0,local_24);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bcfa8 FUN_1479bcfa8 body=26 status=ok
// SIG undefined FUN_1479bcfa8(void)

void FUN_1479bcfa8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14343059a(param_1,param_2,0,param_3,1);
  return;
}



// FUNCTION 1479bcfc2 FUN_1479bcfc2 body=246 status=ok
// SIG undefined FUN_1479bcfc2(void)

void FUN_1479bcfc2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = 0;
  FUN_14343059a(param_1,local_20,0,local_24);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bd0ba FUN_1479bd0ba body=26 status=ok
// SIG undefined FUN_1479bd0ba(void)

void FUN_1479bd0ba(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14343059a(param_1,param_2,0,param_3,0);
  return;
}



// FUNCTION 1479bd0d4 FUN_1479bd0d4 body=238 status=ok
// SIG undefined FUN_1479bd0d4(void)

void FUN_1479bd0d4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14342dfd0(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bd1c8 FUN_1479bd1c8 body=158 status=ok
// SIG undefined FUN_1479bd1c8(void)

void FUN_1479bd1c8(undefined8 param_1,longlong param_2)

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
  FUN_14342e400(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bd268 FUN_1479bd268 body=156 status=ok
// SIG undefined FUN_1479bd268(void)

void FUN_1479bd268(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14342e4a4(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bd306 FUN_1479bd306 body=258 status=ok
// SIG undefined FUN_1479bd306(void)

void FUN_1479bd306(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
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
  (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x60))(param_1 + 0x2a8,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bd424 FUN_1479bd424 body=156 status=ok
// SIG undefined FUN_1479bd424(void)

void FUN_1479bd424(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14342e55e(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bd540 FUN_1479bd540 body=95 status=ok
// SIG undefined FUN_1479bd540(void)

void FUN_1479bd540(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  FUN_14010df0a();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_2,&DAT_149e3cbd8);
    if ((iVar1 < 0x16) &&
       ((*(float *)(param_1 + 0x4c0) != 10000.0 || (NAN(*(float *)(param_1 + 0x4c0)))))) {
      *(byte *)(param_1 + 0x490) = *(byte *)(param_1 + 0x490) | 0x20;
    }
  }
  return;
}



// FUNCTION 1479bd5a0 FUN_1479bd5a0 body=164 status=ok
// SIG undefined FUN_1479bd5a0(void)

longlong FUN_1479bd5a0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad0550);
  if (DAT_14cad0508 != DAT_14cad0534) {
    puVar3 = &DAT_14cad0538;
    if (DAT_14cad0540 != (undefined *)0x0) {
      puVar3 = DAT_14cad0540;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (DAT_14cad0548 - 1U &
                              (int)param_1 + (int)((ulonglong)param_1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      lVar4 = 0;
      do {
        plVar1 = (longlong *)(DAT_14cad0500 + (longlong)iVar2 * 0x18);
        if (*plVar1 == param_1) {
          if (plVar1 == (longlong *)0x0) goto LAB_1479bd5c4;
          lVar4 = plVar1[1];
          break;
        }
        iVar2 = (int)plVar1[2];
      } while (iVar2 != -1);
      goto LAB_1479bd5c6;
    }
  }
LAB_1479bd5c4:
  lVar4 = 0;
LAB_1479bd5c6:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad0550);
  return lVar4;
}



// FUNCTION 1479bd644 FUN_1479bd644 body=175 status=ok
// SIG undefined FUN_1479bd644(void)

longlong * FUN_1479bd644(longlong param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FUN_14010318a(*(longlong *)(param_1 + 0x460),&local_28,0);
    if (&local_28 == param_2) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_28;
      *(undefined4 *)(param_2 + 1) = local_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_14020fad6(param_2,L"No_Sound");
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479bd6f4 FUN_1479bd6f4 body=49 status=ok
// SIG undefined FUN_1479bd6f4(void)

void FUN_1479bd6f4(longlong param_1)

{
  if ((DAT_14cad04b8 != 0) && (*(longlong *)(param_1 + 0x460) != 0)) {
    FUN_147abf486();
  }
  FUN_140136774(param_1);
  return;
}



// FUNCTION 1479bd726 FUN_1479bd726 body=460 status=ok
// SIG undefined FUN_1479bd726(void)

void FUN_1479bd726(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)((longlong)param_1 + 0x492) < '\0') &&
     ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0)) {
    if (param_1[0x24] != 0) {
      plVar1 = param_1 + 0x173;
      cVar3 = FUN_144729dda(plVar1);
      if (cVar3 == '\0') {
        FUN_14485c47a(plVar1,param_1[0x24]);
      }
      if (param_1[0x174] == 0) {
        param_1[0x174] = param_1[0x25];
      }
      lVar4 = param_1[0x16];
      if (lVar4 == 0) {
        lVar4 = FUN_1448abda6(param_1);
      }
      bVar2 = *(byte *)(lVar4 + 0x152);
      if ((bVar2 == 1) || ((bVar2 < 7 && ((0x68U >> (bVar2 & 0x1f) & 1) != 0)))) {
        lVar4 = (longlong)*(int *)(param_1[0x24] + 0x140);
        if (lVar4 != 0) {
          lVar5 = 0;
          do {
            if (*(longlong **)(*(longlong *)(param_1[0x24] + 0x138) + lVar5) == param_1) {
              if ((((*(byte *)((longlong)param_1 + 0x9e) & 8) == 0) ||
                  (((*(char *)((longlong)param_1 + 0x91c) != '\0' &&
                    (*(char *)((longlong)param_1 + 0x91d) != '\0')) &&
                   (*(char *)((longlong)param_1 + 0x91e) != '\0')))) ||
                 ((param_1[0x174] != param_1[0x25] || (cVar3 = FUN_1403e9e5e(plVar1), cVar3 == '\0')
                  ))) {
                local_1c = 0;
                (**(code **)(*param_1 + 0x4a0))(param_1);
              }
              goto LAB_1479bd81f;
            }
            lVar5 = lVar5 + 8;
          } while (lVar4 * 8 != lVar5);
        }
        FUN_140486fc4(param_1,0,0);
      }
    }
LAB_1479bd81f:
    param_1[0x17a] = param_1[0x35];
    param_1[0x178] = param_1[0x33];
    param_1[0x179] = param_1[0x34];
    param_1[0x17b] = param_1[0x36];
    param_1[0x17c] = param_1[0x37];
    param_1[0x17d] = param_1[0x38];
    *(int *)(param_1 + 0x17e) = (int)param_1[0x39];
    *(undefined4 *)((longlong)param_1 + 0xbf4) = *(undefined4 *)((longlong)param_1 + 0x1cc);
    *(int *)(param_1 + 0x17f) = (int)param_1[0x3a];
    *(undefined4 *)((longlong)param_1 + 0xbfc) = *(undefined4 *)((longlong)param_1 + 0x1d4);
    param_1[0x180] = param_1[0x3b];
  }
  FUN_1401a0912(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479bd8f4 FUN_1479bd8f4 body=56 status=ok
// SIG undefined FUN_1479bd8f4(void)

void FUN_1479bd8f4(longlong *param_1)

{
  FUN_1412a62ac();
  if ((param_1[0x15] != 0) && ((*(byte *)(param_1 + 0x92) & 2) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001479bd925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x600))(param_1);
  return;
}



// FUNCTION 1479bd92c FUN_1479bd92c body=33 status=ok
// SIG undefined FUN_1479bd92c(void)

void FUN_1479bd92c(longlong param_1)

{
  FUN_1448c4a0e();
  FUN_1478b1eb6(param_1 + 0x2b0);
  return;
}



// FUNCTION 1479bd956 FUN_1479bd956 body=31 status=ok
// SIG undefined FUN_1479bd956(void)

ulonglong FUN_1479bd956(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0xa8))(param_1 + 0x2a8);
  return uVar1 ^ 1;
}



// FUNCTION 1479bd976 FUN_1479bd976 body=173 status=ok
// SIG undefined FUN_1479bd976(void)

void FUN_1479bd976(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0 < *(int *)(param_1 + 0xa90)) {
    local_19 = FUN_1479bb21a(param_1);
    FUN_1447cd2ec(param_1 + 0xa88);
  }
  if ((longlong)*(int *)(param_1 + 0xaa0) != 0) {
    lVar2 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0xa98) + 8 + lVar2) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0xa98) + lVar2) != 0)) {
        uVar1 = FUN_1479bb21a(param_1);
        FUN_1479d71f8(param_1 + 0xa98,param_1,uVar1);
        break;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0xaa0) * 0x10 != lVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bda24 FUN_1479bda24 body=122 status=ok
// SIG undefined FUN_1479bda24(void)

undefined8 * FUN_1479bda24(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (((*(char *)(param_1 + 0x492) < '\0') && (*(longlong *)(param_1 + 0x120) == 0)) &&
     (lVar6 = FUN_14479d2ce(param_1 + 0xb98), lVar6 != 0)) {
    param_2[6] = *(undefined8 *)(lVar6 + 400);
    uVar1 = *(undefined8 *)(lVar6 + 0x160);
    uVar2 = *(undefined8 *)(lVar6 + 0x168);
    uVar3 = *(undefined8 *)(lVar6 + 0x170);
    uVar4 = *(undefined8 *)(lVar6 + 0x178);
    uVar5 = *(undefined8 *)(lVar6 + 0x188);
    param_2[4] = *(undefined8 *)(lVar6 + 0x180);
    param_2[5] = uVar5;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    *param_2 = uVar1;
    param_2[1] = uVar2;
    return param_2;
  }
  FUN_144b220b2(param_1,param_2,param_3);
  return param_2;
}



// FUNCTION 1479bda9e FUN_1479bda9e body=253 status=ok
// SIG undefined FUN_1479bda9e(void)

void FUN_1479bda9e(longlong *param_1,longlong param_2)

{
  byte bVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_2 != 0) && (*(char *)((longlong)param_1 + 0x492) < '\0')) &&
     ((bVar1 = *(byte *)(param_2 + 0x152), bVar1 == 1 ||
      ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) {
    if ((*(byte *)((longlong)param_1 + 0x493) & 1) != 0) {
      local_18 = param_1[0x17a];
      local_28 = (undefined4)param_1[0x178];
      uStack_24 = *(undefined4 *)((longlong)param_1 + 0xbc4);
      uStack_20 = (undefined4)param_1[0x179];
      uStack_1c = *(undefined4 *)((longlong)param_1 + 0xbcc);
      FUN_144a48320(param_1);
      local_38 = param_1[0x17d];
      local_48 = (undefined4)param_1[0x17b];
      uStack_44 = *(undefined4 *)((longlong)param_1 + 0xbdc);
      uStack_40 = (undefined4)param_1[0x17c];
      uStack_3c = *(undefined4 *)((longlong)param_1 + 0xbe4);
      FUN_144b21d44(param_1);
      local_58 = param_1[0x180];
      local_68 = (undefined4)param_1[0x17e];
      uStack_64 = *(undefined4 *)((longlong)param_1 + 0xbf4);
      uStack_60 = (undefined4)param_1[0x17f];
      uStack_5c = *(undefined4 *)((longlong)param_1 + 0xbfc);
      FUN_14084f00a(param_1);
      *(byte *)((longlong)param_1 + 0x493) = *(byte *)((longlong)param_1 + 0x493) & 0xfe;
    }
    (**(code **)(*param_1 + 0x4a0))(param_1,&DAT_14cadad64);
  }
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479bdb9c FUN_1479bdb9c body=153 status=ok
// SIG undefined FUN_1479bdb9c(void)

void FUN_1479bdb9c(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_74;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined1 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_74 = 0x3f80000000000000;
  local_6c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0x11;
  local_44 = 0x1003f800000;
  local_3c = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0xffffffff;
  local_78 = param_2;
  FUN_14342e95e(0,&local_78);
  FUN_1477c9968(&local_68);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bdc38 FUN_1479bdc38 body=126 status=ok
// SIG undefined FUN_1479bdc38(void)

void FUN_1479bdc38(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [104];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + -0x2b0);
  FUN_1477e8f36(local_80,param_2 + 0x20);
  lVar2 = *(longlong *)(param_1 + -0x200);
  if (lVar2 == 0) {
    lVar2 = FUN_1448abda6(plVar1);
  }
  (**(code **)(*plVar1 + 0x5f8))(plVar1,lVar2,local_80);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bdcb8 FUN_1479bdcb8 body=1156 status=ok
// SIG undefined FUN_1479bdcb8(void)

void FUN_1479bdcb8(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined1 param_9)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  undefined8 *local_270;
  longlong *local_260;
  undefined8 *local_258;
  undefined1 local_250 [48];
  undefined5 local_220;
  undefined3 uStack_21b;
  undefined5 uStack_218;
  longlong local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined1 local_1dc;
  undefined4 uStack_1db;
  undefined4 uStack_1d7;
  undefined1 local_1d0 [32];
  undefined1 local_1b0 [4];
  undefined8 local_1ac;
  undefined1 local_1a4;
  longlong local_1a0;
  ulonglong uStack_198;
  undefined1 local_190 [104];
  undefined1 local_128 [64];
  undefined1 local_e8 [64];
  undefined5 uStack_a8;
  undefined3 local_a3;
  undefined5 uStack_a0;
  undefined1 local_98 [16];
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (((param_1[0x8a] == 0) || (param_1[0x8b] == 0)) || (*(int *)(param_1[0x8b] + 8) < 1)) {
    if (param_2 == (longlong *)0x0) {
      lVar8 = param_1[0x16];
      if (lVar8 == 0) {
        lVar8 = FUN_1448abda6(param_1);
      }
    }
    else {
      lVar8 = (**(code **)(*param_2 + 0x180))(param_2);
    }
    FUN_1478b1ec2(param_1 + 0x56,lVar8);
  }
  local_260 = param_2;
  local_258 = param_4;
  iVar7 = (**(code **)(*DAT_14cad04c8 + 0xb0))();
  iVar10 = 0x11;
  if (iVar7 < 0x11) {
    iVar10 = iVar7;
  }
  if (iVar10 < 1) {
    iVar10 = 0;
  }
  local_1b0[0] = (undefined1)iVar10;
  local_1ac = 0x1023f800000;
  local_1a4 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  FUN_1477cb53e(local_1d0,local_1b0);
  FUN_1461d2b9a(param_1 + 0x56,local_128);
  FUN_1479be13e(local_e8,local_128,local_1d0);
  FUN_1477cb53e(&local_220,local_1b0);
  local_200 = *param_5;
  local_1f8 = param_5[1];
  local_1f0 = param_6;
  uStack_1ec = param_7;
  uStack_1e8 = param_8;
  uStack_1e4 = CONCAT31(uStack_1e4._1_3_,param_9);
  local_1e0 = local_88;
  local_1dc = 0;
  uStack_1db = 0;
  uStack_1d7 = (uint)uStack_1d7._3_1_ << 0x18;
  FUN_14485c47a(&local_1dc,*param_3);
  uStack_1d7 = uStack_1d7 & 0xffffff;
  if (*param_3 != 0) {
    FUN_1478b1714(local_250);
    plVar5 = local_260;
    FUN_1477e3e10(*param_3,local_260,local_250);
    dVar11 = (double)FUN_1478b17c8(local_250,iVar10);
    puVar3 = local_258;
    dVar12 = (double)FUN_1478b17c8(local_250,*(undefined1 *)local_258);
    iVar10 = DAT_14c761394;
    fVar4 = *(float *)((longlong)puVar3 + 4);
    cVar6 = FUN_1477e01e6(*param_3,plVar5);
    if (((iVar10 != 0) || (dVar12 * (double)fVar4 <= dVar11)) ||
       ((cVar6 == '\0' || (*(char *)((longlong)puVar3 + 0xb) != '\0')))) {
      uStack_a0 = (undefined5)((ulonglong)*(undefined8 *)((longlong)puVar3 + 5) >> 0x18);
      uStack_a8 = (undefined5)*puVar3;
      local_a3 = (undefined3)((ulonglong)*puVar3 >> 0x28);
      FUN_1477c97c2(local_98,puVar3 + 2);
      local_220 = uStack_a8;
      uStack_21b = local_a3;
      uStack_218 = uStack_a0;
      FUN_1477c97c2(&local_210,local_98);
      iVar10 = (int)param_1[0x172];
      *(uint *)(param_1 + 0x172) = iVar10 + 1U;
      if (*(uint *)((longlong)param_1 + 0xb94) < iVar10 + 1U) {
        FUN_1479d72a8(param_1 + 0x171,iVar10);
      }
      lVar8 = param_1[0x171];
      lVar9 = (longlong)iVar10 * 0x50;
      FUN_1477cb53e(lVar8 + lVar9,&local_220);
      puVar3 = (undefined8 *)(lVar8 + 0x20 + lVar9);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined8 *)(lVar8 + 0x20 + lVar9) = local_200;
      *(undefined8 *)(lVar8 + 0x28 + lVar9) = local_1f8;
      puVar2 = (undefined4 *)(lVar8 + 0x3d + lVar9);
      *puVar2 = CONCAT13((undefined1)local_1e0,uStack_1e4._1_3_);
      puVar2[1] = CONCAT13(local_1dc,local_1e0._1_3_);
      puVar2[2] = uStack_1db;
      puVar2[3] = uStack_1d7;
      puVar3 = (undefined8 *)(lVar8 + 0x30 + lVar9);
      *puVar3 = CONCAT44(uStack_1ec,local_1f0);
      puVar3[1] = CONCAT44(uStack_1e4,uStack_1e8);
      FUN_1477e8f36(local_190,local_e8);
      (**(code **)(*param_1 + 0x5f8))(param_1,plVar5,local_190);
    }
    else {
      iVar10 = (int)param_1[0x172];
      *(uint *)(param_1 + 0x172) = iVar10 + 1U;
      if (*(uint *)((longlong)param_1 + 0xb94) < iVar10 + 1U) {
        FUN_1479d72a8(param_1 + 0x171,iVar10);
      }
      lVar8 = param_1[0x171];
      lVar9 = (longlong)iVar10 * 0x50;
      FUN_1477cb53e(lVar8 + lVar9,&local_220);
      puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar9);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar8 + 0x20 + lVar9) = local_200;
      *(undefined8 *)(lVar8 + 0x28 + lVar9) = local_1f8;
      puVar2 = (undefined4 *)(lVar8 + 0x3d + lVar9);
      *puVar2 = CONCAT13((undefined1)local_1e0,uStack_1e4._1_3_);
      puVar2[1] = CONCAT13(local_1dc,local_1e0._1_3_);
      puVar2[2] = uStack_1db;
      puVar2[3] = uStack_1d7;
      puVar1 = (undefined8 *)(lVar8 + 0x30 + lVar9);
      *puVar1 = CONCAT44(uStack_1ec,local_1f0);
      puVar1[1] = CONCAT44(uStack_1e4,uStack_1e8);
      local_270 = puVar3;
      local_278 = param_5;
      FUN_1477e2a20(*param_3,local_260,param_3,local_e8);
    }
  }
  FUN_1477c9821(local_210,local_208);
  if (local_210 != 0) {
    FUN_1400020a8();
  }
  FUN_1477e8fa4(local_e8);
  FUN_1477c9821(local_1a0,uStack_198 & 0xffffffff);
  if (local_1a0 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479be13e FUN_1479be13e body=160 status=ok
// SIG undefined FUN_1479be13e(void)

undefined8 * FUN_1479be13e(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  cVar1 = *(char *)(param_2 + 1);
  *(char *)(param_1 + 1) = cVar1;
  if (cVar1 == '\x01') {
    *param_1 = *param_2;
  }
  cVar1 = *(char *)(param_2 + 4);
  *(char *)(param_1 + 4) = cVar1;
  if (cVar1 == '\x01') {
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar4 = *(undefined4 *)(param_2 + 3);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 3) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  }
  param_1[5] = param_2[5];
  lVar2 = param_2[6];
  param_1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[7] = param_2[7];
  FUN_1477cb53e(param_1 + 8,param_3);
  iVar6 = DAT_14cad0d90 + 1;
  *(int *)(param_1 + 0xc) = DAT_14cad0d90;
  DAT_14cad0d90 = iVar6;
  FUN_1477c9848(param_2);
  FUN_1477c9821(*(undefined8 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x18));
  if (*(longlong *)(param_3 + 0x10) != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1479be1de FUN_1479be1de body=158 status=ok
// SIG undefined FUN_1479be1de(void)

undefined4 * FUN_1479be1de(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 4) = 0;
    plVar2 = *(longlong **)(param_2 + 6);
    plVar3 = *(longlong **)(param_1 + 6);
    if (plVar2 != plVar3) {
      *(undefined8 *)(param_2 + 6) = 0;
      *(longlong **)(param_1 + 6) = plVar2;
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
    }
  }
  uVar4 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x25) = *(undefined8 *)((longlong)param_2 + 0x25);
  *(undefined8 *)(param_1 + 8) = uVar4;
  FUN_1479cc3c0(param_1 + 0xc,param_2 + 0xc);
  FUN_1479cc3c0(param_1 + 0x10,param_2 + 0x10);
  param_1[0x14] = param_2[0x14];
  return param_1;
}



// FUNCTION 1479be27c FUN_1479be27c body=98 status=ok
// SIG undefined FUN_1479be27c(void)

longlong * FUN_1479be27c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  if (*(longlong *)(param_1 + 0x4e0) == 0) {
    if (*(longlong *)(param_1 + 0x460) == 0) {
      *param_2 = 0;
      return param_2;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x460) + 0x110);
    *param_2 = lVar1;
    bVar2 = lVar1 != 0 & DAT_14c950c29;
  }
  else {
    *param_2 = *(longlong *)(param_1 + 0x4e0);
    bVar2 = DAT_14c950c29;
  }
  if (bVar2 == 1) {
    FUN_1456cec3c();
  }
  return param_2;
}



// FUNCTION 1479be2de FUN_1479be2de body=156 status=ok
// SIG undefined FUN_1479be2de(void)

void FUN_1479be2de(longlong param_1,undefined8 *param_2,undefined1 param_3)

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
  plVar5 = *(longlong **)(param_1 + 0x6f8);
  *(undefined8 *)(param_1 + 0x6f0) = uVar3;
  *(longlong *)(param_1 + 0x6f8) = lVar4;
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
  *(undefined1 *)(param_1 + 0x700) = param_3;
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001479be36b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1479be37a FUN_1479be37a body=52 status=ok
// SIG undefined FUN_1479be37a(void)

undefined8 FUN_1479be37a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x460);
  if (plVar1 == (longlong *)0x0) {
    switchD_143c3d4dc::caseD_9(param_1,param_2);
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 1479be3ae FUN_1479be3ae body=155 status=ok
// SIG undefined FUN_1479be3ae(void)

void FUN_1479be3ae(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined1 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0x11;
  local_44 = 0x1003f800000;
  local_3c = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0xffffffff;
  local_6c = param_5;
  local_78 = param_4;
  local_74 = param_2;
  local_70 = param_3;
  FUN_14342e95e(0,&local_78);
  FUN_1477c9968(&local_68);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479be44a FUN_1479be44a body=23 status=ok
// SIG undefined FUN_1479be44a(void)

void FUN_1479be44a(void)

{
  FUN_14342fdf0();
  return;
}



// FUNCTION 1479be46e FUN_1479be46e body=86 status=ok
// SIG undefined FUN_1479be46e(void)

void FUN_1479be46e(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  if (((char)param_2 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x2f0))(param_1), cVar1 == '\0'))
  {
    return;
  }
  (**(code **)(*param_1 + 0x5e8))(param_1,0);
  if ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0) {
    return;
  }
  FUN_1479be4c4((longlong)param_1 + 0xba,param_1,param_2);
  return;
}



// FUNCTION 1479be4c4 FUN_1479be4c4 body=134 status=ok
// SIG undefined FUN_1479be4c4(void)

void FUN_1479be4c4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140845556(param_1,&local_40);
  if (local_40 != 0) {
    local_30 = param_2;
    local_28 = param_3;
    FUN_1447cd2ec();
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479be54c FUN_1479be54c body=68 status=ok
// SIG undefined FUN_1479be54c(void)

void FUN_1479be54c(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2f0))();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x600))(param_1);
    if ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0) {
      FUN_1479be590((longlong)param_1 + 0xbb,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1479be590 FUN_1479be590 body=126 status=ok
// SIG undefined FUN_1479be590(void)

void FUN_1479be590(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402b62fa(param_1,&local_30);
  if (local_30 != 0) {
    local_20 = param_2;
    FUN_1447cd2ec();
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479be610 FUN_1479be610 body=36 status=ok
// SIG undefined FUN_1479be610(void)

void FUN_1479be610(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_1479bb21a();
  if (cVar1 == '\x03') {
    return;
  }
  FUN_1479bd976(param_1);
  return;
}



// FUNCTION 1479be634 FUN_1479be634 body=194 status=ok
// SIG undefined FUN_1479be634(void)

void FUN_1479be634(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (char)param_2;
  if (((*(byte *)(param_1 + 0x492) & 0x20) == 0) == (bool)cVar1) {
    if (0 < *(int *)(param_1 + 0xab8)) {
      local_19 = cVar1;
      FUN_1447cd2ec(param_1 + 0xab0);
    }
    if ((longlong)*(int *)(param_1 + 0xac8) != 0) {
      lVar2 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0xac0) + 8 + lVar2) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0xac0) + lVar2) != 0)) {
          FUN_1479d7afa(param_1 + 0xac0,param_1,param_2);
          break;
        }
        lVar2 = lVar2 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0xac8) * 0x10 != lVar2);
    }
  }
  *(byte *)(param_1 + 0x492) = *(byte *)(param_1 + 0x492) & 0xdf | cVar1 << 5;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479be6f8 FUN_1479be6f8 body=621 status=ok
// SIG undefined FUN_1479be6f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1479be6f8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)(param_1 + 0xc08);
  lVar7 = param_1 + 0xc18;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_68 = (longlong *)lVar7;
  if (*(int *)(param_1 + 0xc30) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    iVar5 = *(int *)(param_1 + 0xc30);
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = plVar2;
  if ((iStack_5c != iVar5) || (uStack_68 != (longlong *)lVar7)) {
    do {
      *(undefined4 *)(*local_98 + 0x10 + (longlong)iStack_7c * 0x28) = 0;
      local_80 = local_80 & ~uStack_8c;
      FUN_1449c0562(&local_90);
    } while (local_98 != plVar2 || (CONCAT44(uStack_84,uStack_88) != lVar7 || iStack_7c != iVar5));
  }
  plVar1 = param_2 + 2;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_68 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    iVar5 = (int)param_2[5];
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = param_2;
  if ((iStack_5c != iVar5) || (uStack_68 != plVar1)) {
    do {
      if (*(int *)(param_1 + 0xc10) != *(int *)(param_1 + 0xc3c)) {
        uVar4 = *(uint *)(*local_98 + (longlong)iStack_7c * 0x10);
        lVar7 = *(longlong *)(param_1 + 0xc48);
        if (*(longlong *)(param_1 + 0xc48) == 0) {
          lVar7 = param_1 + 0xc40;
        }
        uVar6 = *(uint *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0xc50) - 1U & uVar4) * 4);
        if (uVar6 != 0xffffffff) {
          do {
            puVar3 = (uint *)(*plVar2 + (longlong)(int)uVar6 * 0x28);
            if (*puVar3 == uVar4) {
              if (((ulonglong)(puVar3 + 2) & 0xfffffffffffffff7) != 0) {
                fVar8 = *(float *)(*local_98 + (longlong)iStack_7c * 0x10 + 4) - _DAT_14cad04a0;
                if (fVar8 <= 0.0) {
                  fVar8 = 0.0;
                }
                puVar3[4] = (uint)fVar8;
              }
              break;
            }
            uVar6 = puVar3[8];
          } while (uVar6 != 0xffffffff);
        }
      }
      local_80 = local_80 & ~uStack_8c;
      FUN_1449c0562(&local_90);
    } while (local_98 != param_2 ||
             ((longlong *)CONCAT44(uStack_84,uStack_88) != plVar1 || iStack_7c != iVar5));
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479be966 FUN_1479be966 body=164 status=ok
// SIG undefined FUN_1479be966(void)

void FUN_1479be966(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x640) = local_1c;
  FUN_1448215fa(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bea0c FUN_1479bea0c body=160 status=ok
// SIG undefined FUN_1479bea0c(void)

void FUN_1479bea0c(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x9f8))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479beaae FUN_1479beaae body=502 status=ok
// SIG undefined FUN_1479beaae(void)

void FUN_1479beaae(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_30;
  local_48 = local_2c;
  (**(code **)(*param_1 + 0xa08))(param_1,local_20,local_24,local_28);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479beca6 FUN_1479beca6 body=415 status=ok
// SIG undefined FUN_1479beca6(void)

void FUN_1479beca6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  (**(code **)(*param_1 + 0xa00))(param_1,local_1c,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bee52 FUN_1479bee52 body=39 status=ok
// SIG undefined FUN_1479bee52(void)

void FUN_1479bee52(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x2f0,0x10);
  FUN_1479bee7a(uVar1,param_1);
  return;
}



// FUNCTION 1479bee7a FUN_1479bee7a body=456 status=ok
// SIG undefined FUN_1479bee7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1479bee7a(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auVar4 [32];
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  FUN_1406ff4f8(param_1,param_2,0);
  *param_1 = &PTR_FUN_14a83a290;
  *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)(param_2 + 0x62c);
  *(undefined4 *)((longlong)param_1 + 0x2c4) = *(undefined4 *)(param_2 + 0x630);
  *(undefined4 *)((longlong)param_1 + 0x2cc) = *(undefined4 *)(param_2 + 0x638);
  param_1[0x5b] = &DAT_3f8000003f800000;
  param_1[0x5c] = &DAT_3f8000003f800000;
  *(uint *)(param_1 + 0x5d) =
       *(uint *)(param_1 + 0x5d) & 0xfffffffe | *(uint *)(param_2 + 0x628) & 1;
  *(byte *)((longlong)param_1 + 0x6f) = *(byte *)((longlong)param_1 + 0x6f) & 0x7f;
  auVar8 = *(undefined1 (*) [16])(param_2 + 0x280) & _DAT_149931180;
  auVar7 = _DAT_149931180 & *(undefined1 (*) [16])(param_2 + 0x290);
  auVar4._16_16_ = auVar7;
  auVar4._0_16_ = auVar8;
  auVar7._8_8_ = auVar8._0_8_;
  auVar8 = maxpd(auVar8,auVar4._8_16_);
  auVar7 = maxpd(auVar8,auVar7);
  *(float *)(param_1 + 0x58) = (float)auVar7._0_8_ * 0.25;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = *(undefined4 *)(param_2 + 0x640);
  if (*(longlong *)(param_2 + 0x620) == 0) {
    param_1[0x57] = 0;
    *(undefined4 *)(param_1 + 0x59) = 0;
    uVar6 = 0;
  }
  else {
    param_1[0x57] = *(longlong *)(param_2 + 0x620);
    *(undefined4 *)(param_1 + 0x59) = *(undefined4 *)(param_2 + 0x634);
    uVar6 = *(undefined4 *)(param_2 + 0x63c);
  }
  *(undefined4 *)(param_1 + 0x5a) = uVar6;
  lVar3 = *(longlong *)(param_2 + 0xa8);
  if (lVar3 != 0) {
    lVar5 = FUN_145869874();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
         == lVar5 + 0x30)) && (lVar3 = *(longlong *)(lVar3 + 0x390), lVar3 != 0)) {
      bVar1 = *(byte *)(lVar3 + 0x2d0);
      bVar2 = *(byte *)(lVar3 + 0x2d1);
      *(float *)(param_1 + 0x5b) = (float)*(byte *)(lVar3 + 0x2d2) * 0.003921569;
      *(float *)((longlong)param_1 + 0x2dc) = (float)bVar2 * 0.003921569;
      *(float *)(param_1 + 0x5c) = (float)bVar1 * 0.003921569;
      *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x437f0000;
    }
    *(byte *)(param_1 + 0x5d) = *(byte *)(param_1 + 0x5d) & 0xfd;
  }
  return param_1;
}



// FUNCTION 1479bf046 FUN_1479bf046 body=57 status=ok
// SIG undefined FUN_1479bf046(void)

void FUN_1479bf046(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x620) = param_2;
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 1479bf1c2 FUN_1479bf1c2 body=257 status=ok
// SIG undefined FUN_1479bf1c2(void)

void FUN_1479bf1c2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_20;
  local_58 = local_30;
  uStack_54 = uStack_2c;
  uStack_50 = uStack_28;
  uStack_4c = uStack_24;
  FUN_140c9cc04(param_1,&local_58,local_34 != 0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bf2c8 FUN_1479bf2c8 body=148 status=ok
// SIG undefined FUN_1479bf2c8(void)

undefined8 * FUN_1479bf2c8(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x2c0,0x10);
  FUN_1406ff4f8(puVar2,param_1,0);
  *puVar2 = &PTR_FUN_14a83a4d0;
  *(uint *)(puVar2 + 0x53) = *(uint *)(puVar2 + 0x53) & 0xfffffffe | *(byte *)(param_1 + 0x62c) & 1;
  uVar1 = *(undefined8 *)(param_1 + 0x648);
  puVar2[0x54] = *(undefined8 *)(param_1 + 0x640);
  puVar2[0x55] = uVar1;
  puVar2[0x56] = *(undefined8 *)(param_1 + 0x650);
  *(undefined4 *)(puVar2 + 0x57) = *(undefined4 *)(param_1 + 0x628);
  *(undefined4 *)((longlong)puVar2 + 700) = *(undefined4 *)(param_1 + 0x638);
  *(byte *)((longlong)puVar2 + 0x6f) = *(byte *)((longlong)puVar2 + 0x6f) & 0x7f;
  return puVar2;
}



// FUNCTION 1479bf3e8 FUN_1479bf3e8 body=286 status=ok
// SIG undefined FUN_1479bf3e8(void)

undefined8 * FUN_1479bf3e8(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_1[0xc4] == 0) {
LAB_1479bf4e0:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)param_1[0x15];
    if (plVar1 != (longlong *)0x0) {
      lVar6 = FUN_140678110();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        puVar7 = (undefined8 *)(**(code **)(*plVar1 + 0x660))(plVar1,param_1);
        if (puVar7 != (undefined8 *)0x0) {
          return puVar7;
        }
        cVar5 = (**(code **)(*DAT_14cb0d2b0 + 0x340))(DAT_14cb0d2b0,plVar1);
        if (cVar5 != '\0') {
          puVar7 = (undefined8 *)FUN_14001cc68(0x2e0,0x10);
          FUN_1479bf506(puVar7,param_1,plVar1);
          return puVar7;
        }
        goto LAB_1479bf4e0;
      }
    }
    puVar7 = (undefined8 *)FUN_14001cc68(0x2e0,0x10);
    FUN_1406ff4f8(puVar7,param_1,0);
    *puVar7 = &PTR_FUN_14a83a710;
    *(byte *)(puVar7 + 0x53) = *(byte *)(puVar7 + 0x53) & 0xf0;
    *(int *)((longlong)puVar7 + 0x29c) = (int)DAT_14cb0d2b0[0x1a2];
    puVar7[0x56] = param_1[0xc5];
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x558))(param_1);
    uVar2 = puVar8[1];
    uVar3 = puVar8[2];
    uVar4 = puVar8[3];
    puVar7[0x57] = *puVar8;
    puVar7[0x58] = uVar2;
    puVar7[0x59] = uVar3;
    puVar7[0x5a] = uVar4;
    *(byte *)((longlong)puVar7 + 0x6f) = *(byte *)((longlong)puVar7 + 0x6f) & 0x7f;
  }
  return puVar7;
}



// FUNCTION 1479bf506 FUN_1479bf506 body=479 status=ok
// SIG undefined FUN_1479bf506(void)

undefined8 * FUN_1479bf506(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  byte bVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined1 auStack_58 [32];
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406ff4f8(param_1,param_2,0);
  *param_1 = &PTR_FUN_14a83a710;
  *(byte *)(param_1 + 0x53) = *(byte *)(param_1 + 0x53) & 0xf0;
  *(int *)((longlong)param_1 + 0x29c) = (int)DAT_14cb0d2b0[0x1a2];
  param_1[0x56] = param_2[0xc5];
  puVar12 = (undefined4 *)(**(code **)(*param_2 + 0x558))(param_2);
  uVar2 = puVar12[1];
  uVar3 = puVar12[2];
  uVar5 = puVar12[3];
  uVar6 = puVar12[4];
  uVar7 = puVar12[5];
  uVar8 = puVar12[6];
  uVar9 = puVar12[7];
  *(undefined4 *)(param_1 + 0x57) = *puVar12;
  *(undefined4 *)((longlong)param_1 + 700) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = uVar5;
  *(undefined4 *)(param_1 + 0x59) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = uVar7;
  *(undefined4 *)(param_1 + 0x5a) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = uVar9;
  *(byte *)((longlong)param_1 + 0x6f) = *(byte *)((longlong)param_1 + 0x6f) & 0x7f;
  cVar10 = (**(code **)(*DAT_14cb0d2b0 + 0x340))(DAT_14cb0d2b0,param_3);
  if (cVar10 != '\0') {
    bVar11 = (**(code **)(*param_3 + 0x648))(param_3);
    *(uint *)(param_1 + 0x53) = *(uint *)(param_1 + 0x53) & 0xfffffffe | (uint)bVar11;
    bVar11 = FUN_1478c1d1c(param_3);
    *(uint *)(param_1 + 0x53) = (*(uint *)(param_1 + 0x53) & 0xfffffffd) + (uint)bVar11 * 2;
    (**(code **)(*param_3 + 0x658))(param_3,&local_38);
    *(uint *)((longlong)param_1 + 0x29c) = local_38;
    uVar4 = *(uint *)(param_1 + 0x53);
    uVar1 = (uVar4 & 0xfffffffb) + (*(uint *)((longlong)param_3 + 0x39c) & 2) * 2;
    *(uint *)(param_1 + 0x53) = uVar1;
    *(uint *)(param_1 + 0x53) = (uVar1 & 0xfffffff7) + (*(uint *)(param_3 + 0x76) & 1) * 8;
    if ((uVar4 & 2) == 0) {
      uVar13 = thunk_FUN_145ca3388();
      FUN_1478c9120(uVar13,&local_38,param_2);
      *(uint *)(param_1 + 0x54) = local_38;
      *(undefined4 *)((longlong)param_1 + 0x2a4) = uStack_34;
      *(undefined4 *)(param_1 + 0x55) = uStack_30;
      *(undefined4 *)((longlong)param_1 + 0x2ac) = uStack_2c;
    }
    else {
      uVar2 = (&DAT_14c758c60)[local_38 >> 8 & 0xff];
      uVar3 = (&DAT_14c758c60)[local_38 & 0xff];
      *(undefined4 *)(param_1 + 0x54) =
           *(undefined4 *)((longlong)&DAT_14c758c60 + (ulonglong)(local_38 >> 0xe & 0x3fc));
      *(undefined4 *)((longlong)param_1 + 0x2a4) = uVar2;
      *(undefined4 *)(param_1 + 0x55) = uVar3;
      *(float *)((longlong)param_1 + 0x2ac) = (float)(local_38 >> 0x18) * 0.003921569;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bf6e6 FUN_1479bf6e6 body=88 status=ok
// SIG undefined FUN_1479bf6e6(void)

undefined1 FUN_1479bf6e6(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar3 = FUN_140678110();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && (cVar2 = FUN_1478c1d1c(lVar1), cVar2 != '\0')) {
      return 1;
    }
  }
  return *(undefined1 *)(param_1 + 0x2cc);
}


