// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1482647f8 FUN_1482647f8 body=29 status=ok
// SIG undefined FUN_1482647f8(void)

bool FUN_1482647f8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148264816 FUN_148264816 body=26 status=ok
// SIG undefined FUN_148264816(void)

bool FUN_148264816(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148264830 FUN_148264830 body=24 status=ok
// SIG undefined FUN_148264830(void)

bool FUN_148264830(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148264848 FUN_148264848 body=101 status=ok
// SIG undefined FUN_148264848(void)

void FUN_148264848(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6f2b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1482648ae FUN_1482648ae body=101 status=ok
// SIG undefined FUN_1482648ae(void)

void FUN_1482648ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6f2b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148264914 FUN_148264914 body=134 status=ok
// SIG undefined FUN_148264914(void)

void FUN_148264914(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6f2b0;
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
                    /* WARNING: Could not recover jumptable at 0x00014826498b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14826499a FUN_14826499a body=42 status=ok
// SIG undefined FUN_14826499a(void)

void FUN_14826499a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001482649c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1482649c4 FUN_1482649c4 body=154 status=ok
// SIG undefined FUN_1482649c4(void)

bool FUN_1482649c4(longlong param_1,undefined4 param_2)

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



// FUNCTION 148264a60 FUN_148264a60 body=29 status=ok
// SIG undefined FUN_148264a60(void)

undefined8 FUN_148264a60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148264a98 FUN_148264a98 body=29 status=ok
// SIG undefined FUN_148264a98(void)

bool FUN_148264a98(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148264ab6 FUN_148264ab6 body=26 status=ok
// SIG undefined FUN_148264ab6(void)

bool FUN_148264ab6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148264ad0 FUN_148264ad0 body=24 status=ok
// SIG undefined FUN_148264ad0(void)

bool FUN_148264ad0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148264ae8 FUN_148264ae8 body=101 status=ok
// SIG undefined FUN_148264ae8(void)

void FUN_148264ae8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae6f320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148264b4e FUN_148264b4e body=101 status=ok
// SIG undefined FUN_148264b4e(void)

void FUN_148264b4e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae6f320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148264bb4 FUN_148264bb4 body=134 status=ok
// SIG undefined FUN_148264bb4(void)

void FUN_148264bb4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6f320;
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
                    /* WARNING: Could not recover jumptable at 0x000148264c2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148264c3a FUN_148264c3a body=42 status=ok
// SIG undefined FUN_148264c3a(void)

void FUN_148264c3a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148264c61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148264c64 FUN_148264c64 body=154 status=ok
// SIG undefined FUN_148264c64(void)

bool FUN_148264c64(longlong param_1,undefined4 param_2)

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



// FUNCTION 148264d00 FUN_148264d00 body=48 status=ok
// SIG undefined FUN_148264d00(void)

void FUN_148264d00(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148264d30 FUN_148264d30 body=1129 status=ok
// SIG undefined FUN_148264d30(void)

ulonglong FUN_148264d30(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar16 = param_1 + 4;
  cVar6 = FUN_144729dda(plVar16);
  if (((((cVar6 != '\0') || (cVar6 = FUN_144729dda(param_1 + 5), cVar6 != '\0')) &&
       (lVar11 = *param_2, lVar11 != 0)) &&
      ((lVar8 = FUN_14110d11e(), lVar8 != 0 && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar11 + 0x38))))
      ) && ((*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
             lVar8 + 0x30 && (*param_2 != 0)))) {
    lVar11 = param_1[3];
    local_a0 = param_1;
    local_90 = param_3;
    if ((longlong)(int)lVar11 != 0) {
      local_98 = param_1 + 2;
      lVar8 = param_1[2];
      lVar17 = 0;
      do {
        uVar12 = *(ulonglong *)(lVar8 + lVar17);
        lVar4 = *(longlong *)(uVar12 + 0x10);
        lVar10 = *param_2;
        if (((lVar10 == 0) || (lVar9 = FUN_14110d11e(), lVar9 == 0)) ||
           ((*(int *)(lVar10 + 0x38) < *(int *)(lVar9 + 0x38) ||
            (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
             lVar9 + 0x30)))) {
          lVar10 = 0;
        }
        else {
          lVar10 = *param_2;
        }
        if (lVar4 == lVar10) {
          local_78 = uVar12;
          local_50 = uVar12;
          if ((uVar12 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(uVar12);
          }
          FUN_14776745c(local_98,&local_78,1);
          lVar11 = FUN_14479d2ce(plVar16);
          plVar16 = local_a0;
          if (uVar12 != 0) goto LAB_148264eac;
          goto LAB_148264e66;
        }
        lVar17 = lVar17 + 8;
      } while ((longlong)(int)lVar11 * 8 != lVar17);
    }
    lVar11 = FUN_14479d2ce(plVar16);
LAB_148264e66:
    plVar16 = local_a0;
    if (lVar11 == 0) {
      lVar17 = FUN_14479d2ce(local_a0 + 6);
      lVar8 = *param_2;
      if (lVar17 == 0) {
        local_68 = lVar8;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        uVar13 = FUN_14479d2ce(plVar16 + 5);
        uVar12 = FUN_1412b606d(uVar13,&local_68,0);
      }
      else {
        local_60 = lVar8;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        uVar12 = FUN_143335f3f(lVar17,&local_60,0);
      }
    }
    else {
      local_58 = *param_2;
      if ((local_58 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      uVar12 = FUN_143335ec0(lVar11,&local_58,0);
    }
    local_50 = uVar12;
    if (uVar12 != 0) {
LAB_148264eac:
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(uVar12);
      }
      iVar3 = (int)plVar16[1];
      *(uint *)(plVar16 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)plVar16 + 0xc) < iVar3 + 1U) {
        FUN_147702a74(plVar16,iVar3);
      }
      *(ulonglong *)(*plVar16 + (longlong)iVar3 * 8) = uVar12;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(uVar12);
      }
      if (lVar11 == 0) {
LAB_148264fe0:
        uVar7 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        puVar14 = (ulonglong *)FUN_1477675fa(plVar16 + 7,uVar7 >> 0x10 ^ uVar7,&local_50);
        if (*puVar14 == 0) {
          local_88 = *local_90;
          local_80 = local_90[1];
          FUN_147767550(local_50,&local_78);
          plVar16 = local_70;
          if (local_70 == (longlong *)0x0) {
            *puVar14 = local_78;
            plVar15 = (longlong *)puVar14[1];
            if (plVar15 != (longlong *)0x0) {
              puVar14[1] = 0;
LAB_148265133:
              LOCK();
              plVar16 = plVar15 + 1;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)*plVar16 == 0) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar2 = (int *)((longlong)plVar15 + 0xc);
                *piVar2 = *piVar2 + -1;
                iVar3 = *piVar2;
                UNLOCK();
joined_r0x00014826515e:
                if (iVar3 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
            }
          }
          else {
            LOCK();
            *(int *)(local_70 + 1) = (int)local_70[1] + 1;
            UNLOCK();
            *puVar14 = local_78;
            plVar15 = (longlong *)puVar14[1];
            if (local_70 == plVar15) {
              LOCK();
              plVar15 = local_70 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*local_70)(local_70);
                LOCK();
                piVar2 = (int *)((longlong)plVar16 + 0xc);
                *piVar2 = *piVar2 + -1;
                iVar3 = *piVar2;
                UNLOCK();
                plVar15 = plVar16;
                goto joined_r0x00014826515e;
              }
            }
            else {
              puVar14[1] = (ulonglong)local_70;
              if (plVar15 != (longlong *)0x0) goto LAB_148265133;
            }
          }
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_70 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar2 = (int *)((longlong)local_70 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_70 + 0x10))(local_70);
              }
            }
          }
        }
      }
      else {
        FUN_140760c2c(lVar11,&local_78);
        plVar15 = local_70;
        uVar5 = local_78;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        uVar12 = local_50;
        if (uVar5 != 0) goto LAB_148264fe0;
      }
      uVar12 = local_50;
      if (local_50 != 0) {
        lVar11 = FUN_14110d11e();
        if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(uVar12 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) goto LAB_148264da6;
      }
    }
  }
  uVar12 = 0;
LAB_148264da6:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826519a FUN_14826519a body=165 status=ok
// SIG undefined FUN_14826519a(void)

undefined8 *
FUN_14826519a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_4;
  local_20 = param_4[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_148265240(&local_38,*param_3,&local_28);
  *param_1 = local_38;
  param_1[1] = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148265240 FUN_148265240 body=315 status=ok
// SIG undefined FUN_148265240(void)

undefined8 FUN_148265240(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_228 [32];
  undefined8 **local_208;
  undefined8 *local_200;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined8 local_1e0;
  undefined1 local_1d8 [424];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1e0 = param_2;
  FUN_1417aa8de(local_1d8);
  plVar3 = local_28;
  local_30 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 8) = *(int *)((longlong)plVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar5 = (undefined8 *)*local_28;
      local_28 = plVar4;
      (*(code *)*puVar5)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar4 = local_28;
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        plVar4 = local_28;
      }
    }
  }
  local_28 = plVar4;
  local_200 = &local_1e0;
  local_208 = &local_200;
  FUN_1412240d2(local_1f8,"SObjectWidget","Runtime\\UMG\\Public\\Blueprint/UserWidgetPool.h",0x41);
  FUN_1410fb2a4(local_1f8,param_1,local_1d8);
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1f0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar2 = (int *)((longlong)local_1f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1f0 + 0x10))(local_1f0);
      }
    }
  }
  FUN_1417aa988(local_1d8);
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826537c FUN_14826537c body=132 status=ok
// SIG undefined FUN_14826537c(void)

void FUN_14826537c(longlong param_1,int param_2)

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



// FUNCTION 148265402 FUN_148265402 body=175 status=ok
// SIG undefined FUN_148265402(void)

void FUN_148265402(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_14826548b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14826548b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1482654b2 FUN_1482654b2 body=29 status=ok
// SIG undefined FUN_1482654b2(void)

undefined8 FUN_1482654b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482654ea FUN_1482654ea body=29 status=ok
// SIG undefined FUN_1482654ea(void)

bool FUN_1482654ea(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148265508 FUN_148265508 body=26 status=ok
// SIG undefined FUN_148265508(void)

bool FUN_148265508(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148265522 FUN_148265522 body=24 status=ok
// SIG undefined FUN_148265522(void)

bool FUN_148265522(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14826553a FUN_14826553a body=101 status=ok
// SIG undefined FUN_14826553a(void)

void FUN_14826553a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6f040;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ae6f400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1482655a0 FUN_1482655a0 body=101 status=ok
// SIG undefined FUN_1482655a0(void)

void FUN_1482655a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6f040;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ae6f400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148265606 FUN_148265606 body=134 status=ok
// SIG undefined FUN_148265606(void)

void FUN_148265606(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6f040;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6f400;
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
                    /* WARNING: Could not recover jumptable at 0x00014826567d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14826568c FUN_14826568c body=40 status=ok
// SIG undefined FUN_14826568c(void)

void FUN_14826568c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001482656b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,*(undefined8 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1482656b4 FUN_1482656b4 body=150 status=ok
// SIG undefined FUN_1482656b4(void)

bool FUN_1482656b4(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,*(undefined8 *)(param_1 + 8));
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



// FUNCTION 14826574c FUN_14826574c body=164 status=ok
// SIG undefined FUN_14826574c(void)

void FUN_14826574c(longlong *param_1,undefined8 param_2)

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
        goto LAB_1482657cc;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1482657cc:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1482658d4 FUN_1482658d4 body=59 status=ok
// SIG undefined FUN_1482658d4(void)

undefined8 FUN_1482658d4(longlong *param_1)

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



// FUNCTION 1482659ea FUN_1482659ea body=59 status=ok
// SIG undefined FUN_1482659ea(void)

undefined8 FUN_1482659ea(longlong *param_1)

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



// FUNCTION 148265ac8 FUN_148265ac8 body=118 status=ok
// SIG undefined FUN_148265ac8(void)

undefined8 FUN_148265ac8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      *(undefined1 *)(param_2 + lVar3) = *(undefined1 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if (DAT_14c950c29 == '\x01') {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
        }
      }
      lVar1 = param_2 + lVar3;
      *(longlong *)(lVar1 + 8) = lVar2;
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_3 + 0x10 + lVar3);
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(param_3 + 0x18 + lVar3);
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148265b66 FUN_148265b66 body=59 status=ok
// SIG undefined FUN_148265b66(void)

undefined8 FUN_148265b66(longlong *param_1)

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



// FUNCTION 148265c58 FUN_148265c58 body=127 status=ok
// SIG undefined FUN_148265c58(void)

undefined1 FUN_148265c58(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar8) = *(undefined8 *)(param_3 + lVar8);
      lVar7 = *(longlong *)(param_3 + 8 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_14689c22e();
          lVar7 = *(longlong *)(param_3 + 8 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      lVar1 = param_2 + lVar8;
      *(longlong *)(lVar1 + 8) = lVar7;
      puVar2 = (undefined4 *)(param_3 + 0x10 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(lVar1 + 0x10) = *puVar2;
      *(undefined4 *)(lVar1 + 0x14) = uVar3;
      *(undefined4 *)(lVar1 + 0x18) = uVar4;
      *(undefined4 *)(lVar1 + 0x1c) = uVar5;
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_3 + 0x20 + lVar8);
      lVar8 = lVar8 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148265d00 FUN_148265d00 body=59 status=ok
// SIG undefined FUN_148265d00(void)

undefined8 FUN_148265d00(longlong *param_1)

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



// FUNCTION 148265e1a FUN_148265e1a body=59 status=ok
// SIG undefined FUN_148265e1a(void)

undefined8 FUN_148265e1a(longlong *param_1)

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



// FUNCTION 148265f4a FUN_148265f4a body=59 status=ok
// SIG undefined FUN_148265f4a(void)

undefined8 FUN_148265f4a(longlong *param_1)

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



// FUNCTION 1482660a6 FUN_1482660a6 body=173 status=ok
// SIG undefined FUN_1482660a6(void)

undefined1 FUN_1482660a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (param_4 != 0) {
    lVar12 = 0;
    bVar10 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + 0x10 + lVar12) = *(undefined8 *)(param_3 + 0x10 + lVar12);
      puVar3 = (undefined4 *)(param_3 + lVar12);
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      puVar1 = (undefined4 *)(param_2 + lVar12);
      *puVar1 = *puVar3;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      *(undefined8 *)(param_2 + 0x18 + lVar12) = *(undefined8 *)(param_3 + 0x18 + lVar12);
      lVar11 = *(longlong *)(param_3 + 0x20 + lVar12);
      if ((bVar10 & 1) != 0) {
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          FUN_14689c22e();
          lVar11 = *(longlong *)(param_3 + 0x20 + lVar12);
          bVar10 = DAT_14c950c29;
        }
      }
      lVar2 = param_2 + lVar12;
      *(longlong *)(lVar2 + 0x20) = lVar11;
      puVar4 = (undefined8 *)(param_3 + 0x28 + lVar12);
      uVar9 = puVar4[1];
      *(undefined8 *)(lVar2 + 0x28) = *puVar4;
      *(undefined8 *)(lVar2 + 0x30) = uVar9;
      *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(param_3 + 0x38 + lVar12);
      puVar4 = (undefined8 *)(param_3 + 0x40 + lVar12);
      uVar9 = puVar4[1];
      puVar1 = (undefined4 *)(param_3 + 0x4c + lVar12);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      *(undefined8 *)(lVar2 + 0x40) = *puVar4;
      *(undefined8 *)(lVar2 + 0x48) = uVar9;
      *(undefined4 *)(lVar2 + 0x4c) = uVar5;
      *(undefined4 *)(lVar2 + 0x50) = uVar6;
      *(undefined4 *)(lVar2 + 0x54) = uVar7;
      *(undefined4 *)(lVar2 + 0x58) = uVar8;
      lVar12 = lVar12 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14826617c FUN_14826617c body=59 status=ok
// SIG undefined FUN_14826617c(void)

undefined8 FUN_14826617c(longlong *param_1)

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



// FUNCTION 1482662a4 FUN_1482662a4 body=59 status=ok
// SIG undefined FUN_1482662a4(void)

undefined8 FUN_1482662a4(longlong *param_1)

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



// FUNCTION 14826636e FUN_14826636e body=203 status=ok
// SIG undefined FUN_14826636e(void)

undefined1 FUN_14826636e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (param_4 != 0) {
    lVar12 = 0;
    bVar10 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + 0x10 + lVar12) = *(undefined8 *)(param_3 + 0x10 + lVar12);
      uVar9 = ((undefined8 *)(param_3 + lVar12))[1];
      *(undefined8 *)(param_2 + lVar12) = *(undefined8 *)(param_3 + lVar12);
      ((undefined8 *)(param_2 + lVar12))[1] = uVar9;
      puVar2 = (undefined4 *)(param_3 + 0x18 + lVar12);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar3 = (undefined4 *)(param_2 + 0x18 + lVar12);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      *(undefined8 *)(param_2 + 0x28 + lVar12) = *(undefined8 *)(param_3 + 0x28 + lVar12);
      *(undefined8 *)(param_2 + 0x30 + lVar12) = *(undefined8 *)(param_3 + 0x30 + lVar12);
      lVar11 = *(longlong *)(param_3 + 0x38 + lVar12);
      if ((bVar10 & 1) != 0) {
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          FUN_14689c22e();
          lVar11 = *(longlong *)(param_3 + 0x38 + lVar12);
          bVar10 = DAT_14c950c29;
        }
      }
      lVar1 = param_2 + lVar12;
      *(longlong *)(lVar1 + 0x38) = lVar11;
      *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(param_3 + 0x50 + lVar12);
      puVar4 = (undefined8 *)(param_3 + 0x40 + lVar12);
      uVar9 = puVar4[1];
      *(undefined8 *)(lVar1 + 0x40) = *puVar4;
      *(undefined8 *)(lVar1 + 0x48) = uVar9;
      puVar4 = (undefined8 *)(param_3 + 0x58 + lVar12);
      uVar9 = puVar4[1];
      puVar2 = (undefined4 *)(param_3 + 100 + lVar12);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      *(undefined8 *)(lVar1 + 0x58) = *puVar4;
      *(undefined8 *)(lVar1 + 0x60) = uVar9;
      *(undefined4 *)(lVar1 + 100) = uVar5;
      *(undefined4 *)(lVar1 + 0x68) = uVar6;
      *(undefined4 *)(lVar1 + 0x6c) = uVar7;
      *(undefined4 *)(lVar1 + 0x70) = uVar8;
      *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(param_3 + 0x78 + lVar12);
      lVar12 = lVar12 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148266462 FUN_148266462 body=59 status=ok
// SIG undefined FUN_148266462(void)

undefined8 FUN_148266462(longlong *param_1)

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



// FUNCTION 148266510 FUN_148266510 body=36 status=ok
// SIG undefined FUN_148266510(void)

undefined8 FUN_148266510(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148266550 FUN_148266550 body=93 status=ok
// SIG undefined FUN_148266550(void)

void FUN_148266550(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae71740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1482665ae FUN_1482665ae body=123 status=ok
// SIG undefined FUN_1482665ae(void)

void FUN_1482665ae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae71740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14826662a FUN_14826662a body=21 status=ok
// SIG undefined FUN_14826662a(void)

undefined8 FUN_14826662a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148266644 FUN_148266644 body=116 status=ok
// SIG undefined FUN_148266644(void)

void FUN_148266644(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  uVar4 = 0x7fefffffffffffff;
  if (((-1 < (int)param_3) &&
      ((int)param_3 < *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x10) + (ulonglong)(param_3 >> 9) * 8) +
                         (ulonglong)(param_3 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x140) + (ulonglong)(param_3 >> 8) * 8);
    uVar2 = (ulonglong)((param_3 & 0xff) << 4);
    uVar4 = *(undefined8 *)(lVar1 + uVar2);
    uVar3 = *(undefined8 *)(lVar1 + 8 + uVar2);
  }
  *param_2 = uVar4;
  param_2[1] = uVar3;
  return;
}



// FUNCTION 1482666b8 FUN_1482666b8 body=175 status=ok
// SIG undefined FUN_1482666b8(void)

int FUN_1482666b8(longlong *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  
  uVar2 = param_3;
  if ((int)param_2 < (int)param_3) {
    uVar2 = param_2;
  }
  uVar3 = param_3;
  if ((int)param_3 < (int)param_2) {
    uVar3 = param_2;
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar4 = *(uint *)((longlong)plVar5 +
                     (ulonglong)
                     ((int)param_1[9] - 1U &
                     (uVar2 * 0x40 + uVar3 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2)) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*param_1 + (longlong)(int)uVar4 * 0x14);
        if ((*puVar1 == uVar2) && (*(uint *)(*param_1 + 4 + (longlong)(int)uVar4 * 0x14) == uVar3))
        {
          if (puVar1 + 2 == (uint *)0x0 || puVar1 == (uint *)0x0) {
            return 0;
          }
          return (uint)((bool)(char)puVar1[2] == (int)param_3 < (int)param_2) * 2 + -1;
        }
        uVar4 = puVar1[3];
      } while (uVar4 != 0xffffffff);
    }
  }
  return 0;
}



// FUNCTION 148266767 FUN_148266767 body=130 status=ok
// SIG undefined FUN_148266767(void)

undefined4 FUN_148266767(longlong *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  
  uVar2 = param_3;
  if ((int)param_2 < (int)param_3) {
    uVar2 = param_2;
    param_2 = param_3;
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar7 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (uVar2 * 0x40 + param_2 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar6 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar6;
        uVar4 = *(uint *)(lVar1 + lVar5 * 0x14) ^ uVar2;
        bVar8 = *(uint *)(lVar1 + 4 + lVar5 * 0x14) == param_2 && uVar4 == 0;
        uVar3 = CONCAT31((int3)(uVar4 >> 8),bVar8);
        if (bVar8) {
          return uVar3;
        }
        iVar6 = *(int *)(lVar1 + lVar5 * 0x14 + 0xc);
      } while (iVar6 != -1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1482667e9 FUN_1482667e9 body=351 status=ok
// SIG undefined FUN_1482667e9(void)

void FUN_1482667e9(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined1 param_7)

{
  int *piVar1;
  void *_Src;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  int *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  int local_40;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = &local_39;
  local_39 = param_7;
  local_40 = *(int *)(param_5 + 1);
  local_58 = &local_40;
  lVar3 = (longlong)*(int *)(param_2 + 1);
  local_60 = param_1;
  local_50 = param_4;
  if (lVar3 < 1) {
    FUN_143afbe2c(&local_60);
    goto LAB_1482668df;
  }
  local_70 = (void *)0x0;
  _Src = (void *)*param_5;
  local_68 = local_40;
  if (local_40 == 0) {
    local_64 = 0;
LAB_148266874:
    piVar2 = (int *)*param_2;
    piVar1 = piVar2 + lVar3 * 2;
    do {
      *(int *)((longlong)local_70 + (longlong)(*piVar2 % 3) * 4 + (longlong)(*piVar2 / 3) * 0xc) =
           piVar2[1];
      piVar2 = piVar2 + 2;
    } while (piVar2 != piVar1);
  }
  else {
    lVar3 = (longlong)local_40;
    FUN_148278bd0(&local_70,local_40,0);
    memcpy(local_70,_Src,lVar3 * 0xc);
    lVar3 = (longlong)*(int *)(param_2 + 1);
    if (lVar3 != 0) goto LAB_148266874;
  }
  *param_3 = param_6;
  FUN_143afbe2c(&local_60,&local_70);
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1482668df:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148266949 FUN_148266949 body=201 status=ok
// SIG undefined FUN_148266949(void)

undefined8 * FUN_148266949(undefined8 *param_1)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined4 local_44;
  void *local_40;
  ulonglong uStack_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = 1;
  local_46 = 0;
  local_40 = (void *)0x0;
  uStack_38 = 0;
  local_30 = 0xffffffff;
  local_44 = 2;
  FUN_148266a14(&local_78);
  FUN_148266a60(&local_78);
  _Src = local_40;
  *param_1 = 0;
  lVar1 = (longlong)(int)uStack_38;
  *(int *)(param_1 + 1) = (int)uStack_38;
  if (lVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_148278bd0(param_1,uStack_38 & 0xffffffff,0);
    memcpy((void *)*param_1,_Src,lVar1 * 0xc);
  }
  FUN_148267160(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148266a14 FUN_148266a14 body=76 status=ok
// SIG undefined FUN_148266a14(void)

void FUN_148266a14(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_148278c44(param_1,param_2,0);
  iVar1 = *(int *)(param_2 + 0x20);
  if (0 < (longlong)iVar1) {
    lVar2 = 0;
    do {
      FUN_148278c44(param_1,*(longlong *)(param_2 + 0x18) + lVar2,1);
      lVar2 = lVar2 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar2);
  }
  return;
}



// FUNCTION 148266a60 FUN_148266a60 body=1791 status=ok
// SIG undefined FUN_148266a60(void)

ulonglong FUN_148266a60(undefined8 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_238 [32];
  undefined8 **local_218;
  undefined4 local_210;
  undefined1 local_208;
  longlong *local_1f8;
  ulonglong local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  longlong local_1d8 [3];
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  ulonglong uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined2 local_130;
  undefined1 local_12e;
  longlong local_128;
  undefined1 local_120;
  undefined4 local_11c;
  undefined8 *local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    FUN_146be7820(param_1 + 7,0);
  }
  uVar11 = 0;
  local_138 = 0;
  local_130 = 0x100;
  local_128 = 0;
  local_120 = 0;
  local_11c = 1;
  local_12e = 1;
  local_148 = 0;
  local_140 = 0;
  local_158 = *param_1;
  local_150 = *(undefined4 *)(param_1 + 1);
  cVar2 = FUN_146baf7ca();
  if (cVar2 == '\0') goto LAB_148266afb;
  local_130 = 1;
  local_168 = param_1[2];
  local_160 = *(undefined4 *)(param_1 + 3);
  local_178 = *param_1;
  local_170 = *(undefined4 *)(param_1 + 1);
  local_1e0 = param_1 + 7;
  FUN_146bb0640(&local_138);
  local_1f8 = param_1 + 4;
  local_188 = param_1[4];
  local_180 = *(undefined4 *)(param_1 + 5);
  local_198 = *param_1;
  local_190 = *(undefined4 *)(param_1 + 1);
  local_1e8 = param_1;
  FUN_146bb0640(&local_138);
  puVar12 = &local_b8;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  uVar4 = 1;
  uVar11 = 0;
  plVar10 = param_1 + 2;
  do {
    lVar9 = plVar10[1];
    local_1f0 = CONCAT44(local_1f0._4_4_,uVar4);
    if ((longlong)(int)lVar9 != 0) {
      lVar14 = *plVar10;
      lVar16 = 0;
      uVar13 = uVar11;
      do {
        local_1b8 = *(longlong *)(lVar14 + lVar16);
        FUN_146bb283c(&local_138,&local_1b8);
        cVar2 = FUN_146bb2846(&local_138,&local_1b8,0);
        uVar11 = 1;
        if (cVar2 != '\0') {
          local_1d8[0] = CONCAT71(local_1d8[0]._1_7_,local_1b8._4_4_ < (int)local_1b8);
          iVar6 = local_1b8._4_4_;
          if (local_1b8._4_4_ < (int)local_1b8) {
            iVar6 = (int)local_1b8;
          }
          iVar15 = local_1b8._4_4_;
          if ((int)local_1b8 < local_1b8._4_4_) {
            iVar15 = (int)local_1b8;
          }
          local_1a8 = CONCAT44(iVar6,iVar15);
          local_118 = &local_1a8;
          plStack_110 = local_1d8;
          FUN_1482786a4(puVar12,local_1d8 + 2);
          uVar11 = uVar13;
        }
        lVar16 = lVar16 + 8;
        uVar13 = uVar11;
      } while ((longlong)(int)lVar9 * 8 != lVar16);
    }
    puVar12 = &local_108;
    uVar4 = 0;
    plVar10 = local_1f8;
  } while ((local_1f0 & 1) != 0);
  local_118 = (undefined8 *)0x0;
  plStack_110 = (longlong *)0x0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  FUN_146bb0d4a(&local_138,&local_118,&local_1a8);
  uVar13 = (ulonglong)(int)uStack_1a0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  FUN_148267a44(&local_1b8,uStack_1a0 & 0xffffffff);
  local_1d8[2] = 0;
  uStack_1c0 = 0;
  local_1f8 = (longlong *)uVar13;
  if (0 < (longlong)uVar13) {
    uVar13 = 0;
    uVar17 = 0;
LAB_148266d6e:
    puVar12 = local_118;
    lVar16 = local_1a8 + uVar17 * 0xc;
    lVar9 = 2;
    lVar14 = 0;
    local_1f0 = uVar13;
LAB_148266d9f:
    if (-1 < *(int *)(lVar16 + lVar9 * 4)) goto LAB_148266da9;
    uVar4 = *(undefined4 *)((longlong)puVar12 + lVar14 * 4 + uVar13);
    uVar1 = *(undefined4 *)((longlong)puVar12 + lVar9 * 4 + uVar17 * 0xc);
    cVar2 = FUN_148266767(&local_108,uVar4,uVar1);
    if (cVar2 != '\0') goto LAB_148266da9;
    uVar7 = FUN_1482666b8(&local_b8,uVar4,uVar1);
    uVar13 = uStack_1c0;
    lVar9 = (longlong)(int)uStack_1c0;
    uVar5 = (int)uStack_1c0 + 1;
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar5);
    if (uStack_1c0._4_4_ < uVar5) {
      FUN_1406b704c(local_1d8 + 2,uVar13 & 0xffffffff);
    }
    *(ulonglong *)(local_1d8[2] + lVar9 * 8) = ((ulonglong)-uVar7 << 0x20) + uVar17;
    uVar3 = 0xff;
    switch(*(undefined4 *)((longlong)local_1e8 + 0x34)) {
    case 0:
      uVar7 = -uVar7 & 1;
      goto joined_r0x000148266e81;
    case 1:
joined_r0x000148266e81:
      if (uVar7 != 0) {
LAB_148266e57:
        uVar3 = 1;
      }
      break;
    case 2:
      if (-1 < (int)uVar7) break;
      goto LAB_148266e57;
    case 3:
      if (0 < (int)uVar7) goto LAB_148266e57;
    }
    *(undefined1 *)(local_1b8 + uVar17) = uVar3;
    goto LAB_148266e65;
  }
  goto LAB_148267038;
LAB_148266da9:
  lVar8 = lVar14 + 1;
  lVar9 = lVar14;
  lVar14 = lVar8;
  if (lVar8 == 3) goto LAB_148266e65;
  goto LAB_148266d9f;
LAB_148266e65:
  uVar17 = uVar17 + 1;
  uVar13 = local_1f0 + 0xc;
  if ((longlong *)uVar17 == local_1f8) goto LAB_148266e85;
  goto LAB_148266d6e;
LAB_148266e85:
  if ((int)uStack_1c0 != 0) {
    local_1f8 = (longlong *)0x0;
    do {
      uVar13 = (longlong)((int)local_1f8 + 1) % (longlong)(int)uStack_1c0;
      local_1f8 = (longlong *)(uVar13 & 0xffffffff);
      uVar7 = (uint)uVar13;
      lVar9 = (longlong)(int)uVar7;
      lVar14 = (longlong)*(int *)(local_1d8[2] + lVar9 * 8);
      local_1f0 = CONCAT44(local_1f0._4_4_,*(undefined4 *)(local_1d8[2] + 4 + lVar9 * 8));
      iVar15 = ~uVar7 + (int)uStack_1c0;
      iVar6 = (int)uStack_1c0;
      if (iVar15 != 0) {
        if (0 < iVar15) {
          iVar15 = 1;
        }
        memmove((void *)(local_1d8[2] + lVar9 * 8),
                (void *)(local_1d8[2] + (longlong)((int)uStack_1c0 - iVar15) * 8),
                (longlong)iVar15 << 3);
        iVar6 = (int)uStack_1c0;
      }
      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,iVar6 + -1);
      FUN_146b9bf6a(local_1d8 + 2);
      lVar9 = 0;
      lVar16 = 2;
      do {
        lVar8 = lVar9;
        uVar4 = *(undefined4 *)((longlong)local_118 + lVar8 * 4 + lVar14 * 0xc);
        uVar1 = *(undefined4 *)((longlong)local_118 + lVar16 * 4 + lVar14 * 0xc);
        cVar2 = FUN_148266767(&local_108,uVar4,uVar1);
        if (((cVar2 != '\0') ||
            (uVar13 = (ulonglong)*(int *)(local_1a8 + lVar14 * 0xc + lVar16 * 4),
            (longlong)uVar13 < 0)) || (*(char *)(local_1b8 + uVar13) != '\0')) goto LAB_148267007;
        iVar6 = FUN_1482666b8(&local_b8,uVar4,uVar1);
        uVar17 = uStack_1c0;
        lVar9 = (longlong)(int)uStack_1c0;
        uVar7 = (int)uStack_1c0 + 1;
        uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar7);
        if (uStack_1c0._4_4_ < uVar7) {
          FUN_1406b704c(local_1d8 + 2,uVar17 & 0xffffffff);
        }
        uVar7 = iVar6 + (int)local_1f0;
        *(ulonglong *)(local_1d8[2] + lVar9 * 8) = (ulonglong)uVar7 << 0x20 | uVar13;
        uVar3 = 0xff;
        switch(*(undefined4 *)((longlong)local_1e8 + 0x34)) {
        case 0:
          uVar7 = uVar7 & 1;
          goto joined_r0x000148267021;
        case 1:
joined_r0x000148267021:
          if (uVar7 != 0) {
LAB_148266ff9:
            uVar3 = 1;
          }
          break;
        case 2:
          if ((int)uVar7 < 1) break;
          goto LAB_148266ff9;
        case 3:
          if ((int)uVar7 < 0) goto LAB_148266ff9;
        }
        *(undefined1 *)(local_1b8 + uVar13) = uVar3;
LAB_148267007:
        lVar9 = lVar8 + 1;
        lVar16 = lVar8;
      } while (lVar8 + 1 != 3);
    } while ((int)uStack_1c0 != 0);
  }
LAB_148267038:
  puVar12 = local_1e8;
  local_1d8[0] = 0;
  local_1d8[1] = 0;
  uVar4 = *(undefined4 *)(local_1e8 + 1);
  if (*(char *)((longlong)local_1e8 + 0x32) == '\x01') {
    local_218 = (undefined8 **)&local_1a8;
    FUN_148267f1f(local_1d8,local_1e8,&local_1b8,&local_118);
  }
  local_208 = *(undefined1 *)((longlong)puVar12 + 0x31);
  local_218 = &local_118;
  local_210 = uVar4;
  FUN_1482667e9(local_1e0,local_1d8,puVar12 + 9,&local_1b8);
  if (local_1d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1d8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  if (local_118 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_148273ad2(&local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  uVar11 = uVar11 ^ 1;
  FUN_148273ad2(&local_b8);
LAB_148266afb:
  if (local_128 != 0) {
    (**(code **)(local_128 + -0x10))(local_128 + -0x10);
  }
  if ((local_60 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148267160 FUN_148267160 body=75 status=ok
// SIG undefined FUN_148267160(void)

void FUN_148267160(longlong *param_1)

{
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1482671ac FUN_1482671ac body=76 status=ok
// SIG undefined FUN_1482671ac(void)

void FUN_1482671ac(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_148278d4c(param_1,param_2,0);
  iVar1 = *(int *)(param_2 + 0x20);
  if (0 < (longlong)iVar1) {
    lVar2 = 0;
    do {
      FUN_148278d4c(param_1,*(longlong *)(param_2 + 0x18) + lVar2,1);
      lVar2 = lVar2 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar2);
  }
  return;
}



// FUNCTION 1482671f8 FUN_1482671f8 body=1791 status=ok
// SIG undefined FUN_1482671f8(void)

ulonglong FUN_1482671f8(undefined8 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_238 [32];
  undefined8 **local_218;
  undefined4 local_210;
  undefined1 local_208;
  longlong *local_1f8;
  ulonglong local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  longlong local_1d8 [3];
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  ulonglong uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined2 local_130;
  undefined1 local_12e;
  longlong local_128;
  undefined1 local_120;
  undefined4 local_11c;
  undefined8 *local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    FUN_146be7820(param_1 + 7,0);
  }
  uVar11 = 0;
  local_138 = 0;
  local_130 = 0x100;
  local_128 = 0;
  local_120 = 0;
  local_11c = 1;
  local_12e = 1;
  local_148 = 0;
  local_140 = 0;
  local_158 = *param_1;
  local_150 = *(undefined4 *)(param_1 + 1);
  cVar2 = FUN_146baff20();
  if (cVar2 == '\0') goto LAB_148267293;
  local_130 = 1;
  local_168 = param_1[2];
  local_160 = *(undefined4 *)(param_1 + 3);
  local_178 = *param_1;
  local_170 = *(undefined4 *)(param_1 + 1);
  local_1e0 = param_1 + 7;
  FUN_146bb08ca(&local_138);
  local_1f8 = param_1 + 4;
  local_188 = param_1[4];
  local_180 = *(undefined4 *)(param_1 + 5);
  local_198 = *param_1;
  local_190 = *(undefined4 *)(param_1 + 1);
  local_1e8 = param_1;
  FUN_146bb08ca(&local_138);
  puVar12 = &local_b8;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  uVar4 = 1;
  uVar11 = 0;
  plVar10 = param_1 + 2;
  do {
    lVar9 = plVar10[1];
    local_1f0 = CONCAT44(local_1f0._4_4_,uVar4);
    if ((longlong)(int)lVar9 != 0) {
      lVar14 = *plVar10;
      lVar16 = 0;
      uVar13 = uVar11;
      do {
        local_1b8 = *(longlong *)(lVar14 + lVar16);
        FUN_146bb283c(&local_138,&local_1b8);
        cVar2 = FUN_146bb2846(&local_138,&local_1b8,0);
        uVar11 = 1;
        if (cVar2 != '\0') {
          local_1d8[0] = CONCAT71(local_1d8[0]._1_7_,local_1b8._4_4_ < (int)local_1b8);
          iVar6 = local_1b8._4_4_;
          if (local_1b8._4_4_ < (int)local_1b8) {
            iVar6 = (int)local_1b8;
          }
          iVar15 = local_1b8._4_4_;
          if ((int)local_1b8 < local_1b8._4_4_) {
            iVar15 = (int)local_1b8;
          }
          local_1a8 = CONCAT44(iVar6,iVar15);
          local_118 = &local_1a8;
          plStack_110 = local_1d8;
          FUN_1482786a4(puVar12,local_1d8 + 2);
          uVar11 = uVar13;
        }
        lVar16 = lVar16 + 8;
        uVar13 = uVar11;
      } while ((longlong)(int)lVar9 * 8 != lVar16);
    }
    puVar12 = &local_108;
    uVar4 = 0;
    plVar10 = local_1f8;
  } while ((local_1f0 & 1) != 0);
  local_118 = (undefined8 *)0x0;
  plStack_110 = (longlong *)0x0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  FUN_146bb0d4a(&local_138,&local_118,&local_1a8);
  uVar13 = (ulonglong)(int)uStack_1a0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  FUN_148267a44(&local_1b8,uStack_1a0 & 0xffffffff);
  local_1d8[2] = 0;
  uStack_1c0 = 0;
  local_1f8 = (longlong *)uVar13;
  if (0 < (longlong)uVar13) {
    uVar13 = 0;
    uVar17 = 0;
LAB_148267506:
    puVar12 = local_118;
    lVar16 = local_1a8 + uVar17 * 0xc;
    lVar9 = 2;
    lVar14 = 0;
    local_1f0 = uVar13;
LAB_148267537:
    if (-1 < *(int *)(lVar16 + lVar9 * 4)) goto LAB_148267541;
    uVar4 = *(undefined4 *)((longlong)puVar12 + lVar14 * 4 + uVar13);
    uVar1 = *(undefined4 *)((longlong)puVar12 + lVar9 * 4 + uVar17 * 0xc);
    cVar2 = FUN_148266767(&local_108,uVar4,uVar1);
    if (cVar2 != '\0') goto LAB_148267541;
    uVar7 = FUN_1482666b8(&local_b8,uVar4,uVar1);
    uVar13 = uStack_1c0;
    lVar9 = (longlong)(int)uStack_1c0;
    uVar5 = (int)uStack_1c0 + 1;
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar5);
    if (uStack_1c0._4_4_ < uVar5) {
      FUN_1406b704c(local_1d8 + 2,uVar13 & 0xffffffff);
    }
    *(ulonglong *)(local_1d8[2] + lVar9 * 8) = ((ulonglong)-uVar7 << 0x20) + uVar17;
    uVar3 = 0xff;
    switch(*(undefined4 *)((longlong)local_1e8 + 0x34)) {
    case 0:
      uVar7 = -uVar7 & 1;
      goto joined_r0x000148267619;
    case 1:
joined_r0x000148267619:
      if (uVar7 != 0) {
LAB_1482675ef:
        uVar3 = 1;
      }
      break;
    case 2:
      if (-1 < (int)uVar7) break;
      goto LAB_1482675ef;
    case 3:
      if (0 < (int)uVar7) goto LAB_1482675ef;
    }
    *(undefined1 *)(local_1b8 + uVar17) = uVar3;
    goto LAB_1482675fd;
  }
  goto LAB_1482677d0;
LAB_148267541:
  lVar8 = lVar14 + 1;
  lVar9 = lVar14;
  lVar14 = lVar8;
  if (lVar8 == 3) goto LAB_1482675fd;
  goto LAB_148267537;
LAB_1482675fd:
  uVar17 = uVar17 + 1;
  uVar13 = local_1f0 + 0xc;
  if ((longlong *)uVar17 == local_1f8) goto LAB_14826761d;
  goto LAB_148267506;
LAB_14826761d:
  if ((int)uStack_1c0 != 0) {
    local_1f8 = (longlong *)0x0;
    do {
      uVar13 = (longlong)((int)local_1f8 + 1) % (longlong)(int)uStack_1c0;
      local_1f8 = (longlong *)(uVar13 & 0xffffffff);
      uVar7 = (uint)uVar13;
      lVar9 = (longlong)(int)uVar7;
      lVar14 = (longlong)*(int *)(local_1d8[2] + lVar9 * 8);
      local_1f0 = CONCAT44(local_1f0._4_4_,*(undefined4 *)(local_1d8[2] + 4 + lVar9 * 8));
      iVar15 = ~uVar7 + (int)uStack_1c0;
      iVar6 = (int)uStack_1c0;
      if (iVar15 != 0) {
        if (0 < iVar15) {
          iVar15 = 1;
        }
        memmove((void *)(local_1d8[2] + lVar9 * 8),
                (void *)(local_1d8[2] + (longlong)((int)uStack_1c0 - iVar15) * 8),
                (longlong)iVar15 << 3);
        iVar6 = (int)uStack_1c0;
      }
      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,iVar6 + -1);
      FUN_146b9bf6a(local_1d8 + 2);
      lVar9 = 0;
      lVar16 = 2;
      do {
        lVar8 = lVar9;
        uVar4 = *(undefined4 *)((longlong)local_118 + lVar8 * 4 + lVar14 * 0xc);
        uVar1 = *(undefined4 *)((longlong)local_118 + lVar16 * 4 + lVar14 * 0xc);
        cVar2 = FUN_148266767(&local_108,uVar4,uVar1);
        if (((cVar2 != '\0') ||
            (uVar13 = (ulonglong)*(int *)(local_1a8 + lVar14 * 0xc + lVar16 * 4),
            (longlong)uVar13 < 0)) || (*(char *)(local_1b8 + uVar13) != '\0')) goto LAB_14826779f;
        iVar6 = FUN_1482666b8(&local_b8,uVar4,uVar1);
        uVar17 = uStack_1c0;
        lVar9 = (longlong)(int)uStack_1c0;
        uVar7 = (int)uStack_1c0 + 1;
        uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar7);
        if (uStack_1c0._4_4_ < uVar7) {
          FUN_1406b704c(local_1d8 + 2,uVar17 & 0xffffffff);
        }
        uVar7 = iVar6 + (int)local_1f0;
        *(ulonglong *)(local_1d8[2] + lVar9 * 8) = (ulonglong)uVar7 << 0x20 | uVar13;
        uVar3 = 0xff;
        switch(*(undefined4 *)((longlong)local_1e8 + 0x34)) {
        case 0:
          uVar7 = uVar7 & 1;
          goto joined_r0x0001482677b9;
        case 1:
joined_r0x0001482677b9:
          if (uVar7 != 0) {
LAB_148267791:
            uVar3 = 1;
          }
          break;
        case 2:
          if ((int)uVar7 < 1) break;
          goto LAB_148267791;
        case 3:
          if ((int)uVar7 < 0) goto LAB_148267791;
        }
        *(undefined1 *)(local_1b8 + uVar13) = uVar3;
LAB_14826779f:
        lVar9 = lVar8 + 1;
        lVar16 = lVar8;
      } while (lVar8 + 1 != 3);
    } while ((int)uStack_1c0 != 0);
  }
LAB_1482677d0:
  puVar12 = local_1e8;
  local_1d8[0] = 0;
  local_1d8[1] = 0;
  uVar4 = *(undefined4 *)(local_1e8 + 1);
  if (*(char *)((longlong)local_1e8 + 0x32) == '\x01') {
    local_218 = (undefined8 **)&local_1a8;
    FUN_148267ab1(local_1d8,local_1e8,&local_1b8,&local_118);
  }
  local_208 = *(undefined1 *)((longlong)puVar12 + 0x31);
  local_218 = &local_118;
  local_210 = uVar4;
  FUN_1482667e9(local_1e0,local_1d8,puVar12 + 9,&local_1b8);
  if (local_1d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1d8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  if (local_118 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_148273ad2(&local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  uVar11 = uVar11 ^ 1;
  FUN_148273ad2(&local_b8);
LAB_148267293:
  if (local_128 != 0) {
    (**(code **)(local_128 + -0x10))(local_128 + -0x10);
  }
  if ((local_60 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482678f8 FUN_1482678f8 body=75 status=ok
// SIG undefined FUN_1482678f8(void)

void FUN_1482678f8(longlong *param_1)

{
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 148267944 FUN_148267944 body=196 status=ok
// SIG undefined FUN_148267944(void)

undefined8 * FUN_148267944(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  
  *param_1 = 0;
  iVar1 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1401f7a02(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  iVar1 = (int)param_2[1];
  if ((longlong)iVar1 < 1) {
    bVar3 = false;
  }
  else {
    lVar2 = *param_2;
    iVar5 = iVar1 + -1;
    fVar6 = 0.0;
    lVar4 = 0;
    do {
      fVar6 = fVar6 + (*(float *)(lVar2 + (longlong)iVar5 * 8) * *(float *)(lVar2 + 4 + lVar4 * 8) -
                      *(float *)(lVar2 + lVar4 * 8) * *(float *)(lVar2 + 4 + (longlong)iVar5 * 8));
      iVar5 = (int)lVar4;
      lVar4 = lVar4 + 1;
    } while (iVar1 != lVar4);
    bVar3 = fVar6 * 0.5 < 0.0;
  }
  *(bool *)(param_1 + 2) = bVar3;
  return param_1;
}



// FUNCTION 148267a08 FUN_148267a08 body=59 status=ok
// SIG undefined FUN_148267a08(void)

void FUN_148267a08(longlong *param_1)

{
  FUN_148273aa6(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148267a44 FUN_148267a44 body=108 status=ok
// SIG undefined FUN_148267a44(void)

void FUN_148267a44(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140cd36ae(param_1);
    }
    memset((void *)((longlong)iVar1 + *param_1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146d9a3a0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148267ab1 FUN_148267ab1 body=858 status=ok
// SIG undefined FUN_148267ab1(void)

void FUN_148267ab1(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_148 [40];
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong local_100;
  int *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  char *local_d8;
  undefined8 local_d0;
  int *local_c8;
  longlong *local_c0;
  longlong **local_b8;
  longlong **local_b0;
  longlong **local_a8;
  int local_a0;
  char local_99;
  longlong local_98 [4];
  longlong *local_78;
  longlong **local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar5 = (int)param_5[1];
  local_70 = &local_58;
  local_60 = param_5;
  local_78 = param_5;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_108 = param_1;
  local_68 = param_4;
  local_58 = param_4;
  local_4c = iVar5;
  FUN_1403ed7b2(local_98 + 2,iVar5 * 3,1);
  local_120 = param_2;
  FUN_1403ed7b2(local_98,(int)param_2[1],1);
  if (0 < iVar5) {
    uVar9 = 0;
    local_118 = param_4;
    local_110 = param_3;
    do {
      if (*(char *)(*param_3 + uVar9) == '\x01') {
        uVar6 = 2;
        local_100 = uVar9 * 0xc;
        uVar10 = 0;
        do {
          plVar3 = local_120;
          if (*(char *)(uVar9 * 3 + local_98[2] + uVar10) != '\x01') {
            iVar5 = *(int *)(*param_4 + local_100 + uVar10 * 4);
            lVar11 = (longlong)iVar5;
            local_99 = *(char *)(local_98[0] + lVar11);
            local_a0 = -1;
            if (local_99 == '\x01') {
              lVar7 = *local_120;
              uVar2 = *(undefined8 *)(lVar7 + lVar11 * 8);
              iVar1 = (int)local_120[1];
              *(uint *)(local_120 + 1) = iVar1 + 1U;
              if (*(uint *)((longlong)local_120 + 0xc) < iVar1 + 1U) {
                FUN_140752556(local_120,iVar1);
                lVar7 = *plVar3;
              }
              *(undefined8 *)(lVar7 + (longlong)iVar1 * 8) = uVar2;
              param_3 = local_110;
              param_4 = local_118;
              local_a0 = iVar1;
            }
            local_f8 = &local_4c;
            local_e8 = local_98 + 2;
            local_e0 = local_98;
            local_d8 = &local_99;
            local_d0 = local_108;
            local_c8 = &local_a0;
            local_b8 = &local_60;
            local_b0 = &local_68;
            local_a8 = &local_78;
            local_f0 = param_4;
            local_c0 = param_3;
            cVar4 = FUN_148278e26(&local_f8,iVar5,uVar9 & 0xffffffff,uVar10 & 0xffffffff);
            if (((cVar4 == '\0') &&
                (lVar7 = (longlong)
                         *(int *)(uVar9 * 0xc + *local_78 +
                                 (ulonglong)
                                 (((uint)(*(int *)(**local_70 + uVar9 * 0xc + uVar6 * 4) == iVar5) +
                                   (int)uVar6 + 1) % 3) * 4), -1 < lVar7)) &&
               (*(char *)(*param_3 + lVar7) == '\x01')) {
              lVar8 = 0;
              do {
                if (uVar9 == *(uint *)(lVar7 * 0xc + *local_60 + lVar8 * 4)) goto LAB_148267dab;
                lVar8 = lVar8 + 1;
              } while (lVar8 != 3);
              lVar8 = 0xffffffff;
LAB_148267dab:
              FUN_148278e26(&local_f8,iVar5,lVar7,lVar8);
            }
            *(undefined1 *)(local_98[0] + lVar11) = 1;
          }
          uVar6 = uVar10 & 0xffffffff;
          uVar10 = uVar10 + 1;
          iVar5 = local_4c;
        } while (uVar10 != 3);
      }
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < (longlong)iVar5);
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148267e0c FUN_148267e0c body=215 status=ok
// SIG undefined FUN_148267e0c(void)

undefined8 * FUN_148267e0c(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  bool bVar3;
  double *pdVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  
  *param_1 = 0;
  iVar1 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_144721d4c(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  iVar1 = (int)param_2[1];
  if ((longlong)iVar1 < 1) {
    bVar3 = false;
  }
  else {
    lVar2 = *param_2;
    iVar6 = iVar1 + -1;
    pdVar4 = (double *)(lVar2 + 8);
    dVar7 = 0.0;
    lVar5 = 0;
    do {
      dVar7 = dVar7 + (*(double *)(lVar2 + (longlong)iVar6 * 0x10) * *pdVar4 -
                      pdVar4[-1] * *(double *)(lVar2 + 8 + (longlong)iVar6 * 0x10));
      iVar6 = (int)lVar5;
      lVar5 = lVar5 + 1;
      pdVar4 = pdVar4 + 2;
    } while (iVar1 != lVar5);
    bVar3 = dVar7 * 0.5 < 0.0;
  }
  *(bool *)(param_1 + 2) = bVar3;
  return param_1;
}



// FUNCTION 148267ee4 FUN_148267ee4 body=59 status=ok
// SIG undefined FUN_148267ee4(void)

void FUN_148267ee4(longlong *param_1)

{
  FUN_148273b89(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148267f1f FUN_148267f1f body=849 status=ok
// SIG undefined FUN_148267f1f(void)

void FUN_148267f1f(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_138 [40];
  longlong *local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  longlong *local_e0;
  char *local_d8;
  undefined8 local_d0;
  int *local_c8;
  longlong *local_c0;
  longlong **local_b8;
  longlong **local_b0;
  longlong **local_a8;
  int local_a0;
  char local_99;
  longlong local_98 [4];
  longlong *local_78;
  longlong **local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar4 = (int)param_5[1];
  local_70 = &local_58;
  local_60 = param_5;
  local_78 = param_5;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_110 = param_4;
  local_108 = param_1;
  local_68 = param_4;
  local_58 = param_4;
  local_4c = iVar4;
  FUN_1403ed7b2(local_98 + 2,iVar4 * 3,1);
  FUN_1403ed7b2(local_98,(int)param_2[1],1);
  if (0 < iVar4) {
    uVar8 = 0;
    do {
      if (*(char *)(*param_3 + uVar8) == '\x01') {
        uVar5 = 2;
        local_100 = uVar8 * 0xc;
        uVar9 = 0;
        do {
          if (*(char *)(uVar8 * 3 + local_98[2] + uVar9) != '\x01') {
            iVar4 = *(int *)(*local_110 + local_100 + uVar9 * 4);
            lVar10 = (longlong)iVar4;
            local_99 = *(char *)(local_98[0] + lVar10);
            local_a0 = -1;
            if (local_99 == '\x01') {
              lVar6 = *param_2;
              puVar1 = (undefined4 *)(lVar6 + lVar10 * 0x10);
              local_f8._0_4_ = *puVar1;
              local_f8._4_4_ = puVar1[1];
              uStack_f0._0_4_ = puVar1[2];
              uStack_f0._4_4_ = puVar1[3];
              iVar2 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar2 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
                FUN_14489624a(param_2,iVar2);
                lVar6 = *param_2;
              }
              puVar1 = (undefined4 *)(lVar6 + (longlong)iVar2 * 0x10);
              *puVar1 = (undefined4)local_f8;
              puVar1[1] = local_f8._4_4_;
              puVar1[2] = (undefined4)uStack_f0;
              puVar1[3] = uStack_f0._4_4_;
              local_a0 = iVar2;
            }
            local_f8 = &local_4c;
            uStack_f0 = local_110;
            local_e8 = local_98 + 2;
            local_e0 = local_98;
            local_d8 = &local_99;
            local_d0 = local_108;
            local_c8 = &local_a0;
            local_b8 = &local_60;
            local_b0 = &local_68;
            local_a8 = &local_78;
            local_c0 = param_3;
            cVar3 = FUN_148278fa0(&local_f8,iVar4,uVar8 & 0xffffffff,uVar9 & 0xffffffff);
            if (((cVar3 == '\0') &&
                (lVar6 = (longlong)
                         *(int *)(uVar8 * 0xc + *local_78 +
                                 (ulonglong)
                                 (((uint)(*(int *)(**local_70 + uVar8 * 0xc + uVar5 * 4) == iVar4) +
                                   (int)uVar5 + 1) % 3) * 4), -1 < lVar6)) &&
               (*(char *)(*param_3 + lVar6) == '\x01')) {
              lVar7 = 0;
              do {
                if (uVar8 == *(uint *)(lVar6 * 0xc + *local_60 + lVar7 * 4)) goto LAB_148268210;
                lVar7 = lVar7 + 1;
              } while (lVar7 != 3);
              lVar7 = 0xffffffff;
LAB_148268210:
              FUN_148278fa0(&local_f8,iVar4,lVar6,lVar7);
            }
            *(undefined1 *)(local_98[0] + lVar10) = 1;
          }
          uVar5 = uVar9 & 0xffffffff;
          uVar9 = uVar9 + 1;
          iVar4 = local_4c;
        } while (uVar9 != 3);
      }
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < (longlong)iVar4);
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148268272 FUN_148268272 body=695 status=ok
// SIG undefined FUN_148268272(void)

ulonglong FUN_148268272(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStack_198 [32];
  longlong *local_178;
  undefined4 local_170;
  undefined8 *local_168;
  byte local_15a;
  byte local_159;
  undefined8 *local_158;
  undefined8 uStack_150;
  longlong *local_148;
  longlong *local_140;
  longlong local_138 [7];
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  longlong local_90;
  undefined1 local_88;
  undefined4 local_84;
  code *local_80;
  undefined8 **local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    FUN_146be7820(param_1 + 7,0);
  }
  uVar6 = 0;
  local_a0 = 0;
  local_98 = 0x100;
  local_90 = 0;
  local_88 = 0;
  local_84 = 1;
  local_96 = 1;
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = *param_1;
  local_b8 = *(undefined4 *)(param_1 + 1);
  cVar4 = FUN_146baf7ca();
  if (cVar4 != '\0') {
    local_98 = CONCAT11(local_98._1_1_,1);
    local_d0 = param_1[2];
    local_c8 = *(undefined4 *)(param_1 + 3);
    local_e0 = *param_1;
    local_d8 = *(undefined4 *)(param_1 + 1);
    local_159 = FUN_146bb0640(&local_a0);
    local_f0 = param_1[4];
    local_e8 = *(undefined4 *)(param_1 + 5);
    local_100 = *param_1;
    local_f8 = *(undefined4 *)(param_1 + 1);
    local_15a = FUN_146bb0640(&local_a0);
    plVar1 = local_138 + 4;
    local_138[4] = 0;
    local_138[5] = 0;
    local_138[2] = 0;
    local_138[3] = 0;
    FUN_146bb0d4a(&local_a0,plVar1,local_138 + 2);
    lVar3 = local_138[3];
    local_138[0] = 0;
    local_138[1] = 0;
    FUN_148267a44(local_138,local_138[3] & 0xffffffff);
    local_78 = &local_158;
    local_168 = &local_70;
    local_70 = 0;
    local_68 = 0;
    local_80 = FUN_14827911a;
    local_170 = 0;
    local_158 = param_1;
    uStack_150 = param_2;
    local_148 = plVar1;
    local_140 = local_138;
    FUN_1401f8d10(L"ParallelFor Task",lVar3 & 0xffffffff,1);
    local_158 = (undefined8 *)0x0;
    uStack_150 = 0;
    uVar2 = *(undefined4 *)(param_1 + 1);
    if (*(char *)((longlong)param_1 + 0x32) == '\x01') {
      local_178 = local_138 + 2;
      FUN_148267f1f(&local_158,param_1,local_138,local_138 + 4);
    }
    local_168 = (undefined8 *)CONCAT71(local_168._1_7_,*(undefined1 *)((longlong)param_1 + 0x31));
    local_178 = plVar1;
    local_170 = uVar2;
    uVar5 = FUN_1482667e9(param_1 + 7,&local_158,param_1 + 9,local_138);
    if (local_158 != (undefined8 *)0x0) {
      uVar5 = FUN_1400020a8();
    }
    if (local_138[0] != 0) {
      uVar5 = FUN_1400020a8();
    }
    if (local_138[2] != 0) {
      uVar5 = FUN_1400020a8();
    }
    if (local_138[4] != 0) {
      uVar5 = FUN_1400020a8();
    }
    uVar6 = CONCAT71((int7)((ulonglong)uVar5 >> 8),local_159 & local_15a) & 0xffffffff;
  }
  if (local_90 != 0) {
    (**(code **)(local_90 + -0x10))(local_90 + -0x10);
  }
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826852a FUN_14826852a body=158 status=ok
// SIG undefined FUN_14826852a(void)

undefined4 FUN_14826852a(longlong *param_1,longlong *param_2,char param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_30 = 0;
  local_48 = (undefined4)*param_1;
  uStack_44 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_40 = (undefined4)param_1[1];
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0xc);
  local_4c = 2;
  uVar1 = FUN_143afbee5(&local_4c,&local_48,&local_38,param_2);
  if ((param_3 == '\x01' && (char)uVar1 == '\0') && (*param_2 != *param_1)) {
    FUN_1482685ca(param_2,(int)param_1[1]);
    FUN_148268608(param_2,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482685ca FUN_1482685ca body=61 status=ok
// SIG undefined FUN_1482685ca(void)

void FUN_1482685ca(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_14827a09e(param_1);
    return;
  }
  FUN_148273bb4(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 148268608 FUN_148268608 body=95 status=ok
// SIG undefined FUN_148268608(void)

void FUN_148268608(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_148279fb6(param_1,iVar2);
  }
  FUN_14827a155((longlong)iVar2 * 0x28 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148268667 FUN_148268667 body=88 status=ok
// SIG undefined FUN_148268667(void)

void FUN_148268667(undefined4 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  local_2c = 3;
  FUN_143afbee5(&local_2c,&local_28,&local_18,param_3);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482686c0 FUN_1482686c0 body=88 status=ok
// SIG undefined FUN_1482686c0(void)

void FUN_1482686c0(undefined4 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  local_2c = 1;
  FUN_143afbee5(&local_2c,&local_28,&local_18,param_3);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148268719 FUN_148268719 body=88 status=ok
// SIG undefined FUN_148268719(void)

void FUN_148268719(undefined4 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  local_2c = 4;
  FUN_143afbee5(&local_2c,&local_28,&local_18,param_3);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148268772 FUN_148268772 body=158 status=ok
// SIG undefined FUN_148268772(void)

undefined8 * FUN_148268772(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_144721d4c(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  uVar2 = param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_148273c2e(param_1 + 3,iVar1,0);
    FUN_148273c90(param_1[3],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148268810 FUN_148268810 body=2004 status=ok
// SIG undefined FUN_148268810(void)

ulonglong FUN_148268810(longlong *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_328 [32];
  undefined4 local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  longlong alStack_2d8 [8];
  longlong local_298;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined4 uStack_208;
  undefined8 uStack_204;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined2 local_1e7;
  double local_1e0;
  double local_1d8;
  ulonglong local_1d0;
  undefined8 local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8;
  undefined **local_198;
  undefined8 uStack_190;
  longlong *local_188;
  undefined7 local_180;
  undefined4 uStack_179;
  undefined1 uStack_175;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 local_b7;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  dVar11 = 2.0;
  if (2.0 <= (double)param_1[3]) {
    dVar11 = (double)param_1[3];
  }
  param_1[3] = (longlong)dVar11;
  dVar11 = (double)param_1[4];
  local_1d8 = (double)param_1[5];
  dStack_1c0 = DAT_14c8463f8;
  uVar16 = SUB84(DAT_14c8463f0,0);
  uVar17 = (undefined4)((ulonglong)DAT_14c8463f0 >> 0x20);
  uVar18 = SUB84(DAT_14c8463f8,0);
  uVar19 = (undefined4)((ulonglong)DAT_14c8463f8 >> 0x20);
  dStack_1b0 = DAT_14c8463f8;
  local_1b8 = DAT_14c8463f0;
  if ((longlong)(int)param_1[1] == 0) {
    local_1a8 = false;
  }
  else {
    plVar6 = (longlong *)*param_1;
    plVar9 = plVar6 + (longlong)(int)param_1[1] * 2;
    local_1a8 = false;
    do {
      uVar5 = *(uint *)(plVar6 + 1);
      if ((ulonglong)uVar5 != 0) {
        if ((int)uVar5 < 1) {
          uVar21 = 0;
          uVar23 = 0;
          bVar4 = false;
          dVar15 = 0.0;
          uVar24 = 0;
          uVar25 = 0;
          dVar13 = 0.0;
        }
        else {
          lVar8 = *plVar6;
          dVar13 = 0.0;
          lVar10 = 0;
          uVar24 = 0;
          uVar25 = 0;
          dVar15 = 0.0;
          uVar21 = 0;
          uVar23 = 0;
          bVar4 = false;
          do {
            dVar1 = *(double *)(lVar8 + lVar10);
            uVar20 = SUB84(dVar1,0);
            uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
            if (bVar4) {
              if (dVar1 <= (double)CONCAT44(uVar25,uVar24)) {
                uVar24 = uVar20;
                uVar25 = uVar22;
              }
              dVar2 = *(double *)(lVar8 + 8 + lVar10);
              if (dVar2 <= dVar13) {
                dVar13 = dVar2;
              }
              if ((double)CONCAT44(uVar23,uVar21) <= dVar1) {
                uVar21 = uVar20;
                uVar23 = uVar22;
              }
              if (dVar15 <= dVar2) {
                dVar15 = dVar2;
              }
            }
            else {
              dVar13 = *(double *)(lVar8 + 8 + lVar10);
              bVar4 = true;
              dVar15 = dVar13;
              uVar24 = uVar20;
              uVar25 = uVar22;
              uVar21 = uVar20;
              uVar23 = uVar22;
            }
            lVar10 = lVar10 + 0x10;
          } while ((ulonglong)uVar5 << 4 != lVar10);
        }
        uVar20 = (undefined4)((ulonglong)dVar13 >> 0x20);
        if ((bool)local_1a8 == false) {
          if (bVar4 != false) {
            local_1b8 = (double)CONCAT44(uVar23,uVar21);
            dStack_1b0 = dVar15;
            uVar16 = uVar24;
            uVar17 = uVar25;
            uVar18 = SUB84(dVar13,0);
            uVar19 = uVar20;
            local_1a8 = bVar4;
          }
        }
        else if (bVar4 != false) {
          if ((double)CONCAT44(uVar25,uVar24) <= (double)CONCAT44(uVar17,uVar16)) {
            uVar16 = uVar24;
            uVar17 = uVar25;
          }
          if (dVar13 <= (double)CONCAT44(uVar19,uVar18)) {
            uVar18 = SUB84(dVar13,0);
            uVar19 = uVar20;
          }
          if (local_1b8 <= (double)CONCAT44(uVar23,uVar21)) {
            local_1b8 = (double)CONCAT44(uVar23,uVar21);
          }
          if (dStack_1b0 <= dVar15) {
            dStack_1b0 = dVar15;
          }
        }
      }
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar9);
    dStack_1c0 = (double)CONCAT44(uVar19,uVar18);
  }
  local_1c8 = CONCAT44(uVar17,uVar16);
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  local_20c = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_1f8 = 0x4000000000000000;
  local_1f0 = 0;
  local_1e7 = 0;
  dVar15 = dStack_1b0 - (double)CONCAT44(uVar19,uVar18);
  dVar13 = local_1b8 - (double)CONCAT44(uVar17,uVar16);
  if (dVar13 <= dVar15) {
    dVar13 = dVar15;
  }
  uVar24 = 0xe2308c3a;
  uVar25 = 0x3e45798e;
  if (local_1d8 <= 1e-08) {
    local_1d8 = 1e-08;
  }
  if (1e-08 <= dVar13) {
    uVar24 = SUB84(dVar13,0);
    uVar25 = (undefined4)((ulonglong)dVar13 >> 0x20);
  }
  local_270 = CONCAT44(uVar25,uVar24);
  local_1e0 = (double)CONCAT44(uVar25,uVar24) / 9007199254740991.0;
  bVar4 = 0.0 < dVar11;
  if (2000.0 <= dVar11) {
    dVar11 = 2000.0;
  }
  local_1d0 = ~-(ulonglong)bVar4 & 0x409f400000000000 | (ulonglong)dVar11 & -(ulonglong)bVar4;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = local_1d0;
  local_278 = 0;
  local_288 = 0;
  uStack_280 = 0;
  FUN_1482711a8();
  if ((longlong)(int)param_1[1] != 0) {
    plVar6 = (longlong *)*param_1;
    plVar9 = plVar6 + (longlong)(int)param_1[1] * 2;
    do {
      local_198 = (undefined **)0x0;
      uStack_190 = (longlong *)0x0;
      local_188 = (longlong *)0x0;
      FUN_1482768c2(&local_198,(longlong)(int)plVar6[1]);
      if (0 < (int)plVar6[1]) {
        lVar10 = 8;
        lVar8 = 0;
        do {
          local_2e0 = (longlong)
                      (((*(double *)(*plVar6 + -8 + lVar10) - (double)CONCAT44(uVar17,uVar16)) /
                       (double)CONCAT44(uVar25,uVar24)) * 9007199254740991.0 + 0.0);
          alStack_2d8[0] =
               (longlong)
               (((*(double *)(*plVar6 + lVar10) - (double)CONCAT44(uVar19,uVar18)) /
                (double)CONCAT44(uVar25,uVar24)) * 9007199254740991.0 + 0.0);
          if (uStack_190 == local_188) {
            FUN_148276a78(&local_198,uStack_190,&local_2e0);
          }
          else {
            *uStack_190 = local_2e0;
            uStack_190[1] = alStack_2d8[0];
            uStack_190 = uStack_190 + 2;
          }
          lVar8 = lVar8 + 1;
          lVar10 = lVar10 + 0x10;
        } while (lVar8 < (int)plVar6[1]);
      }
      FUN_1482761b2(&local_288,&local_198);
      FUN_148274782(&local_198);
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar9);
  }
  plVar6 = param_1 + 7;
  local_1e8 = 0;
  FUN_1482716fc(&local_268,&local_288,(char)param_1[6],*(undefined1 *)((longlong)param_1 + 0x31));
  local_1f8 = param_1[3];
  auVar12._0_8_ = ((double)param_1[2] / (double)CONCAT44(uVar25,uVar24)) * 9007199254740991.0;
  auVar12._8_8_ = 0;
  auVar14 = roundpd(auVar14,auVar12,1);
  FUN_1482736a8(&local_268,alStack_2d8 + 7,auVar14._0_8_);
  if (local_298 - alStack_2d8[7] == 0) {
    iVar3 = *(int *)((longlong)param_1 + 0x44);
    FUN_148273bb4(param_1[7],(int)param_1[8]);
    *(undefined4 *)(param_1 + 8) = 0;
    uVar7 = CONCAT71((int7)((ulonglong)local_298 >> 8),1);
    if ((iVar3 < 0) && (*(int *)((longlong)param_1 + 0x44) != 0)) {
      FUN_14827a0e4(plVar6,0);
    }
  }
  else if ((ulonglong)((local_298 - alStack_2d8[7] >> 3) * -0x5555555555555555) < 2) {
    iVar3 = *(int *)((longlong)param_1 + 0x44);
    FUN_148273bb4(param_1[7],(int)param_1[8]);
    *(undefined4 *)(param_1 + 8) = 0;
    if ((iVar3 < 0) && (*(int *)((longlong)param_1 + 0x44) != 0)) {
      FUN_14827a0e4(plVar6,0);
    }
    FUN_143afd00a(&local_2e0,local_298 + -0x18,&local_1c8,&local_270);
    FUN_148267e0c(&local_198,&local_2e0);
    iVar3 = (int)param_1[8];
    lVar8 = (longlong)iVar3;
    *(uint *)(param_1 + 8) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0x44) < iVar3 + 1U) {
      FUN_148279fb6(plVar6,iVar3);
    }
    lVar10 = *plVar6;
    *(undefined8 *)(lVar10 + lVar8 * 0x28) = 0;
    *(undefined ***)(lVar10 + lVar8 * 0x28) = local_198;
    local_198 = (undefined **)0x0;
    *(undefined4 *)(lVar10 + 8 + lVar8 * 0x28) = (undefined4)uStack_190;
    *(undefined4 *)(lVar10 + 0xc + lVar8 * 0x28) = uStack_190._4_4_;
    uStack_190 = (longlong *)0x0;
    *(undefined1 *)(lVar10 + 0x10 + lVar8 * 0x28) = local_188._0_1_;
    *(undefined8 *)(lVar10 + 0x18 + lVar8 * 0x28) = 0;
    *(ulonglong *)(lVar10 + 0x18 + lVar8 * 0x28) = CONCAT17((undefined1)uStack_179,local_180);
    local_180 = 0;
    *(uint *)(lVar10 + 0x20 + lVar8 * 0x28) = CONCAT13(uStack_175,uStack_179._1_3_);
    *(undefined4 *)(lVar10 + 0x24 + lVar8 * 0x28) = uStack_174;
    uStack_179 = 0;
    uStack_175 = 0;
    uStack_174 = 0;
    FUN_148267ee4();
    if (local_2e0 != 0) {
      FUN_1400020a8();
    }
    uVar7 = CONCAT71((int7)(int3)((uint)iVar3 >> 8),1);
  }
  else {
    uStack_190 = (longlong *)0x0;
    local_188 = (longlong *)CONCAT44(local_188._4_4_,2);
    local_180 = 0;
    uStack_179 = 0;
    uStack_175 = 1;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    local_b7 = 0;
    local_198 = &PTR_FUN_14ae71888;
    local_b8 = 0;
    FUN_14826b4e6(&local_198,alStack_2d8 + 7,0);
    alStack_2d8[4] = 0;
    alStack_2d8[5] = 0;
    alStack_2d8[2] = 0;
    alStack_2d8[3] = 0;
    alStack_2d8[0] = 0;
    alStack_2d8[1] = 0;
    local_2e0 = 0x3ff0000000000000;
    alStack_2d8[6] = 0;
    local_2e8 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    uVar5 = FUN_14826f336(&local_198,2,&local_2e0);
    uVar7 = (ulonglong)uVar5;
    if ((char)uVar5 != '\0') {
      iVar3 = *(int *)((longlong)param_1 + 0x44);
      FUN_148273bb4(param_1[7],(int)param_1[8]);
      *(undefined4 *)(param_1 + 8) = 0;
      if ((iVar3 < 0) && (*(int *)((longlong)param_1 + 0x44) != 0)) {
        FUN_14827a0e4(plVar6,0);
      }
      local_308 = 0xffffffff;
      FUN_143afcc5d(&local_2e0,plVar6,&local_1c8,&local_270);
    }
    FUN_1482748da(&local_2f8);
    FUN_14826ef48(&local_2e0);
    FUN_14827a04a(alStack_2d8 + 3);
    FUN_148274782(alStack_2d8);
    FUN_14827362e(&local_198);
  }
  FUN_1482748da(alStack_2d8 + 7);
  FUN_1482748da(&local_288);
  FUN_14827a18a(&local_268);
  if ((local_b0 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148268fe5 FUN_148268fe5 body=153 status=ok
// SIG undefined FUN_148268fe5(void)

void FUN_148268fe5(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_50;
  undefined4 uStack_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_10;
  local_18 = 1;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_50 = in_stack_00000040;
  uStack_48 = in_stack_00000048;
  local_68 = &stack0x00000028;
  local_60 = param_3;
  local_58 = param_4;
  local_10 = param_1;
  FUN_143afc467(&local_38,&stack0x00000030,&stack0x00000038,&local_20);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826907f FUN_14826907f body=165 status=ok
// SIG undefined FUN_14826907f(void)

void FUN_14826907f(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_50;
  undefined4 uStack_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = &local_18;
  local_20 = 2;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_50 = in_stack_00000048;
  uStack_48 = in_stack_00000050;
  local_58 = param_5;
  local_68 = &stack0x00000030;
  local_60 = param_4;
  local_18 = param_1;
  local_10 = param_2;
  FUN_143afc467(&local_38,&stack0x00000038,&stack0x00000040,&local_28);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148269126 FUN_148269126 body=434 status=ok
// SIG undefined FUN_148269126(void)

void FUN_148269126(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((double)param_1[0xf] < 0.0) {
    local_70 = *param_1;
    uStack_68 = param_1[1];
    local_60 = param_1[2];
    uStack_58 = param_1[3];
    local_50 = param_1[4];
    uStack_48 = param_1[5];
    local_78 = param_1[0xd];
    dVar1 = (double)param_1[9];
    dVar2 = (double)param_1[10];
    dVar3 = (double)param_1[0xb] + (double)param_1[0xb];
    local_90 = dVar1 * dVar3 + (double)param_1[0xc] * (dVar2 + dVar2);
    local_88 = dVar3 * dVar2 - (dVar1 + dVar1) * (double)param_1[0xc];
    local_80 = 1.0 - ((dVar2 + dVar2) * dVar2 + dVar1 * (dVar1 + dVar1));
    local_a8 = *(undefined4 *)(param_1 + 6);
    uStack_a4 = *(undefined4 *)((longlong)param_1 + 0x34);
    uStack_a0 = *(undefined4 *)(param_1 + 7);
    uStack_9c = *(undefined4 *)((longlong)param_1 + 0x3c);
    local_98 = param_1[8];
    FUN_1482692da(local_128);
    param_1[0xf] = local_120;
    *(undefined4 *)(param_1 + 0x10) = local_118;
    param_1[0x11] = local_110;
    param_1[0x12] = uStack_108;
    param_1[0x13] = local_100;
    param_1[0x14] = local_f8;
    param_1[0x15] = uStack_f0;
    param_1[0x16] = local_e8;
    param_1[0x17] = local_e0;
    param_1[0x18] = uStack_d8;
    param_1[0x19] = local_d0;
    *(undefined4 *)(param_1 + 0x1a) = local_c8;
    *(undefined4 *)((longlong)param_1 + 0xd4) = uStack_c4;
    *(undefined4 *)(param_1 + 0x1b) = uStack_c0;
    *(undefined4 *)((longlong)param_1 + 0xdc) = uStack_bc;
    param_1[0x1c] = local_b8;
    *(undefined1 *)(param_1 + 0x1d) = local_b0;
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482692da FUN_1482692da body=2759 status=ok
// SIG undefined FUN_1482692da(void)

double * FUN_1482692da(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 local_348 [32];
  double *local_328;
  longlong **local_320;
  double *local_318;
  longlong *local_310;
  undefined8 local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  longlong *local_2d8;
  double dStack_2d0;
  double local_2c8;
  longlong *local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  double dStack_288;
  double local_280;
  longlong *local_278;
  double dStack_270;
  double local_268;
  undefined1 uStack_260;
  undefined7 uStack_25f;
  undefined8 local_258;
  undefined8 uStack_250;
  double local_248 [2];
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  double local_228 [4];
  double dStack_208;
  double local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  double local_1e8;
  longlong *local_158;
  double dStack_150;
  double local_148;
  longlong *local_140;
  double dStack_138;
  double local_130;
  longlong *local_128;
  double dStack_120;
  double local_118;
  double local_108 [4];
  longlong *local_e8;
  double dStack_e0;
  double local_d8;
  longlong *local_d0 [4];
  double dStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)local_348;
  local_108[0] = 0.0;
  local_108[1] = 0.0;
  local_108[2] = 0.0;
  local_248[0] = param_2[2];
  local_258 = (longlong *)*param_2;
  uStack_250 = param_2[1];
  lVar5 = 0;
  do {
    (&local_258)[lVar5] = (double)(&local_258)[lVar5] - param_3[lVar5];
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  local_118 = local_248[0];
  local_128 = local_258;
  dStack_120 = uStack_250;
  dVar11 = param_3[4];
  dVar10 = param_3[5];
  local_140 = (longlong *)(dVar11 * param_2[5] - param_2[4] * dVar10);
  dVar1 = param_2[3];
  dVar12 = param_3[3];
  dStack_138 = dVar10 * dVar1 - param_2[5] * dVar12;
  local_130 = param_2[4] * dVar12 - dVar1 * dVar11;
  local_158 = (longlong *)(dVar11 * local_248[0] - uStack_250 * dVar10);
  dStack_150 = dVar10 * (double)local_258 - local_248[0] * dVar12;
  local_148 = uStack_250 * dVar12 - dVar11 * (double)local_258;
  lVar5 = 0;
  do {
    if ((*(double *)((longlong)&local_140 + lVar5) != *(double *)((longlong)local_108 + lVar5)) ||
       (NAN(*(double *)((longlong)&local_140 + lVar5)) ||
        NAN(*(double *)((longlong)local_108 + lVar5)))) {
      lVar5 = 0;
      goto LAB_148269585;
    }
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x18);
  lVar5 = 0;
  do {
    if ((*(double *)((longlong)&local_158 + lVar5) != *(double *)((longlong)local_108 + lVar5)) ||
       (NAN(*(double *)((longlong)&local_158 + lVar5)) ||
        NAN(*(double *)((longlong)local_108 + lVar5)))) {
      *(undefined4 *)(param_1 + 2) = 1;
      dVar1 = dVar1 * (double)local_258;
      lVar5 = 1;
      do {
        dVar1 = dVar1 + param_2[lVar5 + 3] * (double)(&local_158)[lVar5 + 6];
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
LAB_148269bc4:
      dVar1 = -dVar1;
      local_320 = (longlong **)(param_1 + 9);
      local_328 = param_1 + 3;
      goto LAB_148269bec;
    }
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x18);
  FUN_14827a919(local_d0);
  *(undefined4 *)(param_1 + 2) = 1;
  param_1[5] = param_3[2];
  dVar11 = param_3[1];
  param_1[3] = *param_3;
  param_1[4] = dVar11;
  dVar11 = param_3[6];
  lVar5 = 0;
  do {
    local_d0[lVar5] = (longlong *)((double)local_d0[lVar5] * dVar11);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  local_a8 = param_3[2];
  local_d0[3] = (longlong *)*param_3;
  dStack_b0 = param_3[1];
  lVar5 = 0;
  do {
    local_d0[lVar5 + 3] = (longlong *)((double)local_d0[lVar5] + (double)local_d0[lVar5 + 3]);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  param_1[0xb] = local_a8;
  param_1[9] = (double)local_d0[3];
  param_1[10] = dStack_b0;
  uVar4 = 1;
LAB_148269bf7:
  *(undefined1 *)(param_1 + 0xf) = uVar4;
  local_248[0] = param_1[5];
  local_258 = (longlong *)param_1[3];
  uStack_250 = param_1[4];
  lVar5 = 0;
  do {
    (&local_258)[lVar5] = (double)(&local_258)[lVar5] - param_1[lVar5 + 9];
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  dVar11 = local_248[0] * local_248[0] +
           uStack_250 * uStack_250 + (double)local_258 * (double)local_258;
  param_1[1] = dVar11;
  *param_1 = SQRT(dVar11);
  if ((local_a0 ^ (ulonglong)local_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_148269585:
  if ((*(double *)((longlong)&local_158 + lVar5) == *(double *)((longlong)local_108 + lVar5)) &&
     (!NAN(*(double *)((longlong)&local_158 + lVar5)) &&
      !NAN(*(double *)((longlong)local_108 + lVar5)))) goto code_r0x0001482695a5;
  dVar12 = dVar12 * dVar1;
  lVar5 = 4;
  do {
    dVar12 = dVar12 + param_3[lVar5] * param_2[lVar5];
    lVar5 = lVar5 + 1;
  } while (lVar5 != 6);
  if ((dVar12 == 0.0) && (!NAN(dVar12))) {
    dVar11 = (double)local_140 * (double)local_258;
    lVar5 = 1;
    do {
      dVar11 = dVar11 + (double)(&local_158)[lVar5 + 3] * (double)(&local_158)[lVar5 + 6];
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
    dVar1 = dVar1 * (double)local_258;
    lVar5 = 1;
    do {
      dVar1 = dVar1 + param_2[lVar5 + 3] * (double)(&local_158)[lVar5 + 6];
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
    dVar11 = param_3[6] * param_3[6] - dVar11 * dVar11;
    if (0.0 < dVar11) {
      *(undefined4 *)(param_1 + 2) = 2;
      if (dVar11 < 0.0) {
        dVar11 = sqrt(dVar11);
      }
      else {
        dVar11 = SQRT(dVar11);
      }
      local_320 = (longlong **)(param_1 + 9);
      local_328 = param_1 + 3;
      FUN_14827a6bc(param_2,param_3,&local_128,dVar11 - dVar1);
      dVar1 = -dVar1 - dVar11;
      goto LAB_14826960a;
    }
    *(undefined4 *)(param_1 + 2) = 1;
    goto LAB_148269bc4;
  }
  local_2f8 = (double)local_140 * (double)local_158;
  lVar5 = 1;
  do {
    local_2f8 = local_2f8 + (double)(&local_158)[lVar5 + 3] * (double)(&local_158)[lVar5];
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  dVar1 = dVar1 * (double)local_258;
  lVar5 = 1;
  do {
    dVar1 = dVar1 + param_2[lVar5 + 3] * (double)(&local_158)[lVar5 + 6];
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  dVar10 = local_148 * local_148 + dStack_150 * dStack_150 + (double)local_158 * (double)local_158;
  local_300 = local_130 * local_130 +
              dStack_138 * dStack_138 + (double)local_140 * (double)local_140;
  dVar12 = param_3[6] * param_3[6];
  dVar11 = dVar1 * dVar1;
  local_2e0 = dVar10 * dVar11 - local_2f8 * local_2f8 * dVar12;
  local_2e8 = (dVar10 * dVar1 + local_2f8 * dVar11) - local_2f8 * local_300 * dVar12;
  local_2e8 = local_2e8 + local_2e8;
  local_2f0 = (dVar11 * local_300 + local_2f8 * 4.0 * dVar1 + dVar10) -
              local_300 * local_300 * dVar12;
  local_2f8 = dVar1 * local_300 + local_2f8;
  local_2f8 = local_2f8 + local_2f8;
  local_308 = 0;
  local_318 = param_3 + 3;
  local_310 = (longlong *)FUN_14001cc68(0x30,0x10);
  *local_310 = (longlong)local_310;
  local_310[1] = (longlong)local_310;
  local_310[2] = (longlong)local_310;
  *(undefined2 *)(local_310 + 3) = 0x101;
  local_328 = &local_300;
  local_320 = &local_310;
  FUN_14827a4de(&local_2e0,&local_2e8,&local_2f0,&local_2f8);
  plVar2 = local_310;
  plVar6 = (longlong *)*local_310;
  uVar7 = 0;
  if (plVar6 != local_310) {
    dVar11 = param_3[6];
    uVar7 = 0;
    do {
      dVar10 = (double)plVar6[4];
      local_d8 = local_130;
      local_e8 = local_140;
      dStack_e0 = dStack_138;
      lVar5 = 0;
      do {
        (&local_e8)[lVar5] = (longlong *)((double)(&local_e8)[lVar5] * dVar10);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      local_2c8 = local_d8;
      local_2d8 = local_e8;
      dStack_2d0 = dStack_e0;
      local_d8 = local_148;
      local_e8 = local_158;
      dStack_e0 = dStack_150;
      lVar5 = 0;
      do {
        (&local_e8)[lVar5] = (longlong *)((double)(&local_2d8)[lVar5] + (double)(&local_e8)[lVar5]);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      local_2a8 = local_d8;
      local_2b8 = local_e8;
      dStack_2b0 = dStack_e0;
      lVar5 = 0;
      do {
        if ((*(double *)((longlong)&local_2b8 + lVar5) != *(double *)((longlong)local_108 + lVar5))
           || (NAN(*(double *)((longlong)&local_2b8 + lVar5)) ||
               NAN(*(double *)((longlong)local_108 + lVar5)))) {
          local_328 = (double *)&uStack_290;
          local_320 = &local_278;
          FUN_14827a6bc(param_2,param_3,&local_128);
          uStack_260 = 0;
          goto LAB_1482699de;
        }
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x18);
      FUN_14827a919(&local_e8,local_318);
      local_280 = param_3[2];
      uStack_290 = (longlong *)*param_3;
      dStack_288 = param_3[1];
      lVar5 = 0;
      do {
        (&local_e8)[lVar5] = (longlong *)((double)(&local_e8)[lVar5] * dVar11);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      local_2c8 = local_d8;
      local_2d8 = local_e8;
      dStack_2d0 = dStack_e0;
      local_d8 = param_3[2];
      local_e8 = (longlong *)*param_3;
      dStack_e0 = param_3[1];
      lVar5 = 0;
      do {
        (&local_e8)[lVar5] = (longlong *)((double)(&local_2d8)[lVar5] + (double)(&local_e8)[lVar5]);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      local_268 = local_d8;
      local_278 = local_e8;
      dStack_270 = dStack_e0;
      uStack_260 = 1;
LAB_1482699de:
      local_d8 = local_280;
      local_e8 = uStack_290;
      dStack_e0 = dStack_288;
      lVar5 = 0;
      do {
        (&local_e8)[lVar5] = (longlong *)((double)(&local_e8)[lVar5] - (double)(&local_278)[lVar5]);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      dVar10 = local_d8 * local_d8 + dStack_e0 * dStack_e0 + (double)local_e8 * (double)local_e8;
      local_248[uVar7 * 8] = dStack_288;
      local_248[uVar7 * 8 + 1] = local_280;
      *(longlong **)(&local_238 + uVar7 * 0x10) = local_278;
      *(double *)(&uStack_230 + uVar7 * 0x10) = dStack_270;
      local_228[uVar7 * 8] = local_268;
      local_228[uVar7 * 8 + 1] = (double)CONCAT71(uStack_25f,uStack_260);
      local_298._0_4_ = SUB84(dVar10,0);
      local_298._4_4_ = (undefined4)((ulonglong)dVar10 >> 0x20);
      *(undefined4 *)(&local_258 + uVar7 * 8) = (undefined4)local_298;
      *(undefined4 *)((longlong)&local_258 + uVar7 * 0x40 + 4) = local_298._4_4_;
      *(undefined4 *)(&uStack_250 + uVar7 * 8) = (undefined4)uStack_290;
      *(undefined4 *)((longlong)&uStack_250 + uVar7 * 0x40 + 4) = uStack_290._4_4_;
      plVar3 = (longlong *)plVar6[2];
      plVar8 = plVar6;
      if (*(char *)(plVar6[2] + 0x19) == '\0') {
        do {
          plVar6 = plVar3;
          plVar3 = (longlong *)*plVar6;
        } while (*(char *)(*plVar6 + 0x19) == '\0');
      }
      else {
        do {
          plVar6 = (longlong *)plVar8[1];
          if (*(char *)((longlong)plVar6 + 0x19) != '\0') break;
          bVar9 = plVar8 == (longlong *)plVar6[2];
          plVar8 = plVar6;
        } while (bVar9);
      }
      uVar7 = uVar7 + 1;
      local_298 = dVar10;
    } while (plVar6 != plVar2);
  }
  FUN_14827bef7(&local_258,&local_258 + (uVar7 & 0xffffffff) * 8);
  *(undefined4 *)(param_1 + 2) = 1;
  param_1[3] = uStack_250;
  param_1[4] = local_248[0];
  param_1[5] = local_248[1];
  *(undefined4 *)(param_1 + 9) = local_238;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_234;
  *(undefined4 *)(param_1 + 10) = uStack_230;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_22c;
  param_1[0xb] = local_228[0];
  if (1 < (uint)uVar7) {
    if ((local_228[2] == (double)local_258) && (!NAN(local_228[2]) && !NAN((double)local_258))) {
      *(undefined4 *)(param_1 + 2) = 2;
      param_1[6] = local_228[3];
      param_1[7] = dStack_208;
      param_1[8] = local_200;
      *(undefined4 *)(param_1 + 0xc) = local_1f8;
      *(undefined4 *)((longlong)param_1 + 100) = uStack_1f4;
      *(undefined4 *)(param_1 + 0xd) = uStack_1f0;
      *(undefined4 *)((longlong)param_1 + 0x6c) = uStack_1ec;
      param_1[0xe] = local_1e8;
    }
  }
  FUN_14827bb66(plVar2[1]);
  FUN_1400020a8(plVar2);
  goto LAB_148269bf5;
code_r0x0001482695a5:
  lVar5 = lVar5 + 8;
  if (lVar5 == 0x18) goto code_r0x0001482695af;
  goto LAB_148269585;
code_r0x0001482695af:
  *(undefined4 *)(param_1 + 2) = 2;
  dVar1 = SQRT(local_130 * local_130 +
               dStack_138 * dStack_138 + (double)local_140 * (double)local_140) * param_3[6];
  local_320 = (longlong **)(param_1 + 9);
  local_328 = param_1 + 3;
  FUN_14827a6bc(param_2,param_3,&local_128,dVar1);
  dVar1 = -dVar1;
LAB_14826960a:
  local_320 = (longlong **)(param_1 + 0xc);
  local_328 = param_1 + 6;
LAB_148269bec:
  FUN_14827a6bc(param_2,param_3,&local_128,dVar1);
LAB_148269bf5:
  uVar4 = 0;
  goto LAB_148269bf7;
}



// FUNCTION 148269da2 FUN_148269da2 body=71 status=ok
// SIG undefined FUN_148269da2(void)

void FUN_148269da2(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14827cf34();
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
      FUN_14827cfc8();
      return;
    }
  }
  return;
}



// FUNCTION 148269dea FUN_148269dea body=931 status=ok
// SIG undefined FUN_148269dea(void)

void FUN_148269dea(uint param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double dVar2;
  ulonglong uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_1a8 [32];
  double local_188 [4];
  double local_168;
  double dStack_160;
  double local_158 [4];
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  double local_120 [4];
  double adStack_100 [6];
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8 [4];
  double local_98 [3];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  adStack_100[3] = 0.0;
  adStack_100[4] = 0.0;
  adStack_100[5] = 0.0;
  uStack_d0 = 0.0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14827d076(adStack_100 + 3,param_1,param_2);
  if ((int)param_1 < 1) {
    local_128 = uStack_c0;
    local_138._0_4_ = (undefined4)uStack_d0;
    local_138._4_4_ = uStack_d0._4_4_;
    uStack_130 = (undefined4)local_c8;
    uStack_12c = local_c8._4_4_;
    FUN_14827d491();
    dVar5 = 1.79769313486232e+308;
    dVar7 = -1.79769313486232e+308;
    uVar9 = 0;
    uVar11 = 0;
  }
  else {
    uVar3 = (ulonglong)param_1;
    lVar4 = param_2;
    uVar8 = 0;
    uVar10 = 0;
    do {
      FUN_14827d2f0(&local_138,lVar4,adStack_100 + 3);
      uVar9 = uStack_130;
      uVar11 = uStack_12c;
      if ((double)CONCAT44(uStack_12c,uStack_130) <= (double)CONCAT44(uVar10,uVar8)) {
        uVar9 = uVar8;
        uVar11 = uVar10;
      }
      lVar4 = lVar4 + 0x18;
      uVar3 = uVar3 - 1;
      uVar8 = uVar9;
      uVar10 = uVar11;
    } while (uVar3 != 0);
    local_128 = uStack_c0;
    local_138._0_4_ = (undefined4)uStack_d0;
    local_138._4_4_ = uStack_d0._4_4_;
    uStack_130 = (undefined4)local_c8;
    uStack_12c = local_c8._4_4_;
    FUN_14827d491(&local_138);
    dVar7 = -1.79769313486232e+308;
    uVar8 = 0xffffffff;
    uVar10 = 0x7fefffff;
    uVar3 = 0;
    do {
      local_188[2] = *(double *)(param_2 + 0x10 + uVar3 * 0x18);
      pdVar1 = (double *)(param_2 + uVar3 * 0x18);
      local_188[0] = *pdVar1;
      local_188[1] = pdVar1[1];
      lVar4 = 0;
      do {
        local_188[lVar4] = local_188[lVar4] - adStack_100[lVar4 + 3];
        lVar4 = lVar4 + 1;
      } while (lVar4 != 3);
      local_158[2] = local_188[2];
      local_158[0] = local_188[0];
      local_158[1] = local_188[1];
      dVar5 = local_120[0] * local_188[0];
      lVar4 = 1;
      do {
        dVar5 = dVar5 + local_158[lVar4] * local_120[lVar4];
        lVar4 = lVar4 + 1;
      } while (lVar4 != 3);
      dVar6 = local_120[3] * local_188[0];
      lVar4 = 0;
      do {
        dVar6 = dVar6 + local_158[lVar4 + 1] * adStack_100[lVar4];
        lVar4 = lVar4 + 1;
      } while (lVar4 != 2);
      dVar2 = local_188[0] * (double)CONCAT44(local_138._4_4_,(undefined4)local_138);
      lVar4 = 1;
      do {
        dVar2 = dVar2 + local_158[lVar4] * (double)(&local_138)[lVar4];
        lVar4 = lVar4 + 1;
      } while (lVar4 != 3);
      dVar5 = (double)CONCAT44(uVar11,uVar9) - (dVar5 * dVar5 + dVar6 * dVar6);
      dVar6 = 0.0;
      if (0.0 <= dVar5) {
        dVar6 = dVar5;
      }
      dVar5 = SQRT(dVar6) + dVar2;
      if ((double)CONCAT44(uVar10,uVar8) <= dVar5) {
        dVar5 = (double)CONCAT44(uVar10,uVar8);
      }
      dVar2 = dVar2 - SQRT(dVar6);
      if (dVar2 <= dVar7) {
        dVar2 = dVar7;
      }
      dVar7 = dVar2;
      uVar3 = uVar3 + 1;
      uVar8 = SUB84(dVar5,0);
      uVar10 = (undefined4)((ulonglong)dVar5 >> 0x20);
    } while (uVar3 != param_1);
  }
  local_b8[2] = (double)uStack_c0;
  local_b8[0] = uStack_d0;
  local_b8[1] = (double)local_c8;
  lVar4 = 0;
  do {
    local_b8[lVar4] = local_b8[lVar4] * (dVar7 + dVar5) * 0.5;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  local_98[2] = adStack_100[5];
  local_98[0] = adStack_100[3];
  local_98[1] = adStack_100[4];
  lVar4 = 0;
  do {
    local_98[lVar4] = local_b8[lVar4] + local_98[lVar4];
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  FUN_14827e162(local_188,local_98,&uStack_d0,
                -(ulonglong)(dVar5 < dVar7) & (ulonglong)((dVar7 - dVar5) * 0.5));
  param_3[4] = local_168;
  param_3[5] = dStack_160;
  param_3[2] = local_188[2];
  param_3[3] = local_188[3];
  *param_3 = local_188[0];
  param_3[1] = local_188[1];
  if ((double)CONCAT44(uVar11,uVar9) < 0.0) {
    dVar5 = sqrt((double)CONCAT44(uVar11,uVar9));
  }
  else {
    dVar5 = SQRT((double)CONCAT44(uVar11,uVar9));
  }
  param_3[6] = dVar5;
  if ((local_80 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14826a18e FUN_14826a18e body=343 status=ok
// SIG undefined FUN_14826a18e(void)

void FUN_14826a18e(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  double local_48 [4];
  double local_28 [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = *param_1;
  local_48[1] = param_1[1];
  local_48[2] = param_1[2];
  lVar2 = 0;
  do {
    local_48[lVar2] = (param_1 + 3)[lVar2] + local_48[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  lVar2 = 0;
  do {
    local_48[lVar2] = local_48[lVar2] * 0.5;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  param_2[2] = local_48[2];
  *param_2 = local_48[0];
  param_2[1] = local_48[1];
  local_28[0] = param_1[3];
  local_28[1] = param_1[4];
  local_28[2] = param_1[5];
  lVar2 = 0;
  do {
    local_28[lVar2] = local_28[lVar2] - param_1[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  *param_3 = local_28[0];
  param_3[1] = local_28[1];
  param_3[2] = local_28[2];
  dVar1 = SQRT(param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3);
  if (dVar1 <= 0.0) {
    *param_3 = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
  }
  else {
    lVar2 = 0;
    do {
      param_3[lVar2] = param_3[lVar2] * (1.0 / dVar1);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 3);
  }
  *param_4 = dVar1 * 0.5;
  if ((local_8 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14826a2e6 FUN_14826a2e6 body=417 status=ok
// SIG undefined FUN_14826a2e6(void)

undefined8 FUN_14826a2e6(undefined1 *param_1,uint param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  ulonglong local_a0 [5];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_148269da2();
  if (0 < (int)param_2) {
    lVar3 = 0x10;
    uVar2 = 0;
    do {
      local_78._0_4_ = (undefined4)uVar2;
      (*(code *)*param_3)(&local_b8,param_3[1],&local_78);
      puVar1 = (undefined4 *)(local_e8 + -0x10 + lVar3);
      *puVar1 = local_b8;
      puVar1[1] = uStack_b4;
      puVar1[2] = uStack_b0;
      puVar1[3] = uStack_ac;
      *(undefined8 *)(local_e8 + lVar3) = local_a8;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x18;
    } while (param_2 != uVar2);
  }
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[0] = 0x3ff0000000000000;
  lVar3 = 0;
  do {
    (&local_78)[lVar3] = local_a0[lVar3] ^ 0x8000000000000000;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  local_b8 = (undefined4)local_78;
  uStack_b4 = local_78._4_4_;
  uStack_b0 = uStack_70;
  uStack_ac = uStack_6c;
  local_a0[3] = 0x3ff0000000000000;
  FUN_148269dea(param_2,local_e8,&local_b8);
  *param_1 = 1;
  FUN_14826a18e(&local_b8,&local_78,&local_d0,&local_f0);
  *(ulonglong *)(param_1 + 8) = CONCAT44(local_78._4_4_,(undefined4)local_78);
  *(undefined4 *)(param_1 + 0x10) = uStack_70;
  *(undefined4 *)(param_1 + 0x14) = uStack_6c;
  *(undefined4 *)(param_1 + 0x18) = local_68;
  *(undefined4 *)(param_1 + 0x1c) = uStack_64;
  *(undefined4 *)(param_1 + 0x20) = local_d0;
  *(undefined4 *)(param_1 + 0x24) = uStack_cc;
  *(undefined4 *)(param_1 + 0x28) = uStack_c8;
  *(undefined4 *)(param_1 + 0x2c) = uStack_c4;
  *(undefined8 *)(param_1 + 0x30) = local_c0;
  *(undefined8 *)(param_1 + 0x38) = local_f0;
  *(ulonglong *)(param_1 + 0x40) = local_a0[3];
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826a48c FUN_14826a48c body=112 status=ok
// SIG undefined FUN_14826a48c(void)

void FUN_14826a48c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14826a4fe(param_1,param_4);
  local_38 = *param_3;
  local_30 = param_3[1];
  FUN_14826a5c6(*param_1,param_2,&local_38,param_5);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826a4fe FUN_14826a4fe body=199 status=ok
// SIG undefined FUN_14826a4fe(void)

void FUN_14826a4fe(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x80);
  *puVar5 = &LAB_14827e3e5;
  puVar6 = puVar5 + 2;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[4] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(puVar5 + 2) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
  *(undefined4 *)(puVar5 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar4;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0x3ff0000000000000;
  puVar5[9] = 0x3ff0000000000000;
  puVar5[10] = 0x3ff0000000000000;
  puVar5[0xb] = 0x3ff0000000000000;
  puVar5[0xd] = 0x3f847ae147ae147b;
  puVar5[0xe] = 0x30000000a;
  *(undefined4 *)((longlong)puVar5 + 0x7c) = 0;
  lVar1 = *param_1;
  *param_1 = (longlong)puVar6;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
    puVar6 = (undefined8 *)*param_1;
  }
  *(undefined1 *)(puVar6 + 0xd) = param_2;
  return;
}



// FUNCTION 14826a5c6 FUN_14826a5c6 body=471 status=ok
// SIG undefined FUN_14826a5c6(void)

undefined8 FUN_14826a5c6(double *param_1,undefined4 param_2,undefined8 *param_3,char *param_4)

{
  code *pcVar1;
  char cVar2;
  short sVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  double *pdVar7;
  double *pdVar8;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined1 **local_150;
  char *local_148;
  char *local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_119;
  undefined1 *local_118;
  undefined1 *local_110;
  double local_108 [10];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  double *local_90;
  double local_88 [10];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  pdVar8 = param_1;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    local_150 = (undefined1 **)param_1[0xb];
    local_90 = local_108;
    local_98 = &LAB_14827e3bc;
    local_a8 = *param_3;
    local_a0 = param_3[1];
    local_158 = (undefined8 *)CONCAT44(local_158._4_4_,*(undefined4 *)((longlong)param_1 + 0x6c));
    local_148 = param_4;
    FUN_146bb48fb(local_88,param_2);
    lVar5 = 10;
    pdVar7 = local_88;
  }
  else {
    local_b8 = *param_3;
    local_b0 = param_3[1];
    FUN_146bb2944(local_88,*(undefined4 *)((longlong)param_1 + 100),param_2);
    local_110 = &local_119;
    local_150 = &local_118;
    local_118 = &LAB_14827e3c0;
    local_130 = *param_3;
    local_158 = &local_130;
    local_128 = param_3[1];
    local_148 = (char *)CONCAT44(local_148._4_4_,*(undefined4 *)((longlong)param_1 + 0x6c));
    pdVar7 = local_108;
    local_140 = param_4;
    FUN_146bb62f3(pdVar7,local_88,*(undefined4 *)(param_1 + 0xc),param_2);
    lVar5 = 10;
  }
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar8 = *pdVar7;
    pdVar7 = pdVar7 + 1;
    pdVar8 = pdVar8 + 1;
  }
  if (param_4 == (char *)0x0) {
LAB_14826a72b:
    local_88[0] = param_1[9] * param_1[9] + param_1[7] * param_1[7] + param_1[8] * param_1[8];
    sVar3 = _dtest();
    if (sVar3 < 1) {
      *(undefined1 *)(param_1 + 10) = 1;
      uVar4 = 1;
      goto LAB_14826a76b;
    }
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else if (*param_4 == '\0') {
    pcVar1 = *(code **)(param_4 + 0x70);
    plVar6 = (longlong *)(param_4 + 0x90);
    if (*(longlong **)(param_4 + 0x80) != (longlong *)0x0) {
      plVar6 = *(longlong **)(param_4 + 0x80);
    }
    uVar4 = (**(code **)(*plVar6 + 8))();
    cVar2 = (*pcVar1)(uVar4);
    *param_4 = cVar2;
    if (cVar2 == '\0') goto LAB_14826a72b;
  }
  uVar4 = 0;
LAB_14826a76b:
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826a79e FUN_14826a79e body=424 status=ok
// SIG undefined FUN_14826a79e(void)

undefined4
FUN_14826a79e(undefined8 *param_1,uint param_2,int param_3,longlong *param_4,undefined1 param_5,
             undefined8 param_6)

{
  undefined4 *puVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 < (int)param_2) {
    local_a8 = param_1;
    FUN_14826a4fe(param_1,param_5);
    uVar10 = (ulonglong)param_2;
    uVar9 = uVar10 + (uVar10 == 0);
    local_78 = 0;
    uStack_70 = 0;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar10);
    }
    if (param_2 != 0) {
      FUN_1447a8aa0();
      if (0 < param_3) {
        uVar5 = 0xbf400001;
        uVar6 = 0;
        do {
          uVar7 = uVar5 % uVar9;
          local_64 = (undefined4)uVar6;
          (*(code *)*param_4)(&local_90,param_4[1],&local_64);
          uVar6 = uStack_70;
          lVar8 = (longlong)(int)uStack_70;
          uVar3 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar3);
          if (uStack_70._4_4_ < uVar3) {
            FUN_1403e3958(&local_78,uVar6 & 0xffffffff);
          }
          *(undefined8 *)(local_78 + 0x10 + lVar8 * 0x18) = local_80;
          puVar1 = (undefined4 *)(local_78 + lVar8 * 0x18);
          *puVar1 = (undefined4)local_90;
          puVar1[1] = local_90._4_4_;
          puVar1[2] = (undefined4)uStack_88;
          puVar1[3] = uStack_88._4_4_;
          uVar5 = uVar7 + 0xbf400001;
          uVar10 = uVar10 - 1;
          uVar6 = uVar7;
        } while (uVar10 != 0);
      }
    }
    local_90 = &local_78;
    local_98 = &local_90;
    local_a0 = &LAB_14827e3c4;
    uVar4 = FUN_14826a5c6(*local_a8,uStack_70 & 0xffffffff,&local_a0,param_6);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    plVar2 = (longlong *)*param_4;
    lVar8 = param_4[1];
    FUN_14826a4fe(param_1,param_5);
    local_90 = plVar2;
    uStack_88 = lVar8;
    uVar4 = FUN_14826a5c6(*param_1,param_2,&local_90,param_6);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826a948 FUN_14826a948 body=15 status=ok
// SIG undefined FUN_14826a948(void)

undefined8 FUN_14826a948(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x50));
  }
  return 0;
}



// FUNCTION 14826a958 FUN_14826a958 body=19 status=ok
// SIG undefined FUN_14826a958(void)

void FUN_14826a958(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



// FUNCTION 14826a96c FUN_14826a96c body=177 status=ok
// SIG undefined FUN_14826a96c(void)

void FUN_14826a96c(longlong *param_1,ulonglong param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14826aa1e(param_1,param_2,param_4);
  if (0 < (int)param_2) {
    lVar3 = 0x10;
    uVar4 = 0;
    do {
      local_44 = (undefined4)uVar4;
      (*(code *)*param_3)(&local_60,param_3[1],&local_44);
      lVar2 = *(longlong *)(*param_1 + 8);
      puVar1 = (undefined4 *)(lVar2 + -0x10 + lVar3);
      *puVar1 = local_60;
      puVar1[1] = uStack_5c;
      puVar1[2] = uStack_58;
      puVar1[3] = uStack_54;
      *(undefined8 *)(lVar2 + lVar3) = local_50;
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while ((param_2 & 0xffffffff) != uVar4);
  }
  FUN_14826aa98(*param_1);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826aa1e FUN_14826aa1e body=121 status=ok
// SIG undefined FUN_14826aa1e(void)

void FUN_14826aa1e(longlong *param_1,undefined4 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x27c0);
  *puVar2 = FUN_14828accd;
  puVar3 = puVar2 + 2;
  memset(puVar2 + 1,0,0x27b8);
  FUN_14828acec(puVar3);
  lVar1 = *param_1;
  *param_1 = (longlong)puVar3;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
    puVar3 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar3 = param_3;
  FUN_148269da2(*param_1 + 8,param_2);
  return;
}



// FUNCTION 14826aa98 FUN_14826aa98 body=168 status=ok
// SIG undefined FUN_14826aa98(void)

undefined8 FUN_14826aa98(char *param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0x3ff0000000000000;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*param_1 == '\x01') {
    cVar1 = FUN_14827e3ea(param_1 + 0x13f8,*(undefined4 *)(param_1 + 0x10),
                          *(undefined8 *)(param_1 + 8),&local_38);
  }
  else {
    cVar1 = FUN_14827eab8(param_1 + 0x40,*(undefined4 *)(param_1 + 0x10),
                          *(undefined8 *)(param_1 + 8),&local_38);
  }
  param_1[0x38] = cVar1;
  param_1[0x39] = '\x01';
  *(undefined4 *)(param_1 + 0x18) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 0x1c) = local_38._4_4_;
  *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 0x24) = uStack_30._4_4_;
  *(undefined8 *)(param_1 + 0x28) = local_28;
  *(undefined8 *)(param_1 + 0x30) = local_20;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826ab42 FUN_14826ab42 body=32 status=ok
// SIG undefined FUN_14826ab42(void)

void FUN_14826ab42(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  param_2[2] = *(undefined8 *)(lVar1 + 0x28);
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  *param_2 = *(undefined8 *)(lVar1 + 0x18);
  param_2[1] = uVar2;
  param_2[3] = *(undefined8 *)(*param_1 + 0x30);
  return;
}



// FUNCTION 14826ab62 FUN_14826ab62 body=677 status=ok
// SIG undefined FUN_14826ab62(void)

void FUN_14826ab62(longlong param_1,uint param_2,uint param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_108 [32];
  float *local_e8;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar10 = *(longlong *)(param_1 + 0x10);
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar14 = (ulonglong)(param_3 & 0x1ff);
  uVar8 = *(uint *)(lVar11 + uVar14 * 0xc);
  uVar9 = *(uint *)(lVar11 + 4 + uVar14 * 0xc);
  lVar12 = *(longlong *)(lVar10 + (ulonglong)(uVar8 >> 9) * 8);
  uVar15 = (ulonglong)uVar8 & 0x1ff;
  dVar16 = *(double *)(lVar12 + uVar15 * 0x18);
  dVar1 = *(double *)(lVar12 + 8 + uVar15 * 0x18);
  dVar17 = *(double *)(lVar12 + 0x10 + uVar15 * 0x18);
  lVar12 = *(longlong *)(lVar10 + (ulonglong)(uVar9 >> 9) * 8);
  uVar15 = (ulonglong)uVar9 & 0x1ff;
  dVar2 = *(double *)(lVar12 + uVar15 * 0x18);
  dVar3 = *(double *)(lVar12 + 8 + uVar15 * 0x18);
  dVar4 = *(double *)(lVar12 + 0x10 + uVar15 * 0x18);
  uVar8 = *(uint *)(lVar11 + 8 + uVar14 * 0xc);
  lVar10 = *(longlong *)(lVar10 + (ulonglong)(uVar8 >> 9) * 8);
  uVar15 = (ulonglong)uVar8 & 0x1ff;
  dVar5 = *(double *)(lVar10 + uVar15 * 0x18);
  dVar6 = *(double *)(lVar10 + 8 + uVar15 * 0x18);
  dVar7 = *(double *)(lVar10 + 0x10 + uVar15 * 0x18);
  uVar13 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(*(longlong *)(param_1 + 0x208) + 0x28))) {
    uVar13 = *(undefined8 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x20) + (ulonglong)param_2 * 8);
  }
  local_e8 = &local_d8;
  FUN_146c35244(uVar13,param_3,&local_c8,&local_d0);
  dVar4 = dVar4 - dVar17;
  dVar3 = dVar3 - dVar1;
  dVar2 = dVar2 - dVar16;
  dVar7 = dVar7 - dVar17;
  dVar6 = dVar6 - dVar1;
  dVar5 = dVar5 - dVar16;
  dVar16 = dVar2 * dVar6 - dVar5 * dVar3;
  dVar17 = dVar4 * dVar5 - dVar7 * dVar2;
  dVar1 = dVar3 * dVar7 - dVar6 * dVar4;
  dVar16 = ABS((double)((local_d4 - local_c4) * (local_d0 - local_c8) -
                       (local_cc - local_c4) * (local_d8 - local_c8)) * 0.5) /
           (SQRT(dVar16 * dVar16 + dVar1 * dVar1 + dVar17 * dVar17) * 0.5);
  if (dVar16 < 0.0) {
    dVar16 = sqrt(dVar16);
  }
  else {
    dVar16 = SQRT(dVar16);
  }
  if ((local_c0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((double)param_4 * dVar16);
}



// FUNCTION 14826ae08 FUN_14826ae08 body=466 status=ok
// SIG undefined FUN_14826ae08(void)

void FUN_14826ae08(longlong *param_1,longlong *param_2,longlong *param_3)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong in_XMM3_Qb;
  double dVar11;
  
  dVar8 = (double)param_2[5];
  dVar1 = (double)param_3[5];
  if ((dVar8 == dVar1) && (!NAN(dVar8) && !NAN(dVar1))) {
    lVar2 = param_2[3];
    *param_1 = param_2[2];
    param_1[1] = lVar2;
    return;
  }
  if ((dVar8 != 0.0) || (NAN(dVar8))) {
    lVar2 = param_2[1];
    if ((dVar1 != 0.0) || (NAN(dVar1))) {
      dVar9 = (double)*param_2 - (double)lVar2 * dVar8;
      dVar10 = (double)*param_3 - (double)param_3[1] * dVar1;
      dVar11 = (dVar10 - dVar9) / (dVar8 - dVar1);
      auVar5._8_8_ = in_XMM3_Qb & 0x8000000000000000 | 0x3fdfffffffffffff;
      auVar5._0_8_ = (double)((ulonglong)dVar11 & 0x8000000000000000 | 0x3fdfffffffffffff) + dVar11;
      auVar5 = roundsd(auVar5,auVar5,0xb);
      lVar2 = (longlong)auVar5._0_8_;
      if (ABS(dVar1) <= ABS(dVar8)) {
        dVar10 = dVar1 * dVar11 + dVar10;
        auVar7._0_8_ = (double)((ulonglong)dVar10 & 0x8000000000000000 | 0x3fdfffffffffffff) +
                       dVar10;
        auVar7._8_8_ = 0x3fdfffffffffffff;
        auVar5 = roundsd(ZEXT816(0),auVar7,0xb);
        dVar8 = auVar5._0_8_;
      }
      else {
        dVar9 = dVar8 * dVar11 + dVar9;
        auVar6._0_8_ = (double)((ulonglong)dVar9 & 0x8000000000000000 | 0x3fdfffffffffffff) + dVar9;
        auVar6._8_8_ = 0x3fdfffffffffffff;
        auVar5 = roundsd(auVar6,auVar6,0xb);
        dVar8 = auVar5._0_8_;
      }
      lVar3 = (longlong)dVar8;
    }
    else {
      if (param_2[3] != lVar2) {
        lVar3 = *param_3;
        dVar8 = (double)lVar3 / dVar8 + ((double)lVar2 - (double)*param_2 / dVar8);
        goto LAB_14826aea4;
      }
      lVar3 = *param_3;
    }
  }
  else {
    lVar2 = param_3[3];
    if (lVar2 != param_3[1]) {
      lVar3 = *param_2;
      dVar8 = (double)lVar3 / dVar1 + ((double)param_3[1] - (double)*param_3 / dVar1);
LAB_14826aea4:
      auVar4._0_8_ = (double)((ulonglong)dVar8 & 0x8000000000000000 | 0x3fdfffffffffffff) + dVar8;
      auVar4._8_8_ = 0x3fdfffffffffffff;
      auVar5 = roundsd(auVar4,auVar4,0xb);
      *param_1 = lVar3;
      param_1[1] = (longlong)auVar5._0_8_;
      return;
    }
    lVar3 = *param_2;
  }
  *param_1 = lVar3;
  param_1[1] = lVar2;
  return;
}



// FUNCTION 14826afda FUN_14826afda body=399 status=ok
// SIG undefined FUN_14826afda(void)

void FUN_14826afda(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  double *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  *param_5 = 0.0;
  param_5[1] = 0.0;
  lVar1 = *param_2;
  lVar2 = *param_1;
  lVar3 = *param_4;
  lVar4 = *param_3;
  if (lVar1 - lVar2 == 0) {
    if (lVar3 - lVar4 == 0) {
      return;
    }
    dVar6 = (double)(param_4[1] - param_3[1]) / (double)(lVar3 - lVar4);
    dVar7 = (double)param_3[1] - (double)lVar4 * dVar6;
    *param_5 = (double)lVar1;
    lVar1 = *param_1;
  }
  else {
    lVar5 = param_1[1];
    dVar6 = (double)(param_2[1] - lVar5) / (double)(lVar1 - lVar2);
    if (lVar3 - lVar4 != 0) {
      dVar9 = (double)(param_4[1] - param_3[1]) / (double)(lVar3 - lVar4);
      dVar8 = dVar6 - dVar9;
      if (ABS(dVar8) <= 1e-12) {
        *param_5 = (double)(lVar2 + lVar1) * 0.5;
        dVar7 = (double)(param_2[1] + param_1[1]) * 0.5;
      }
      else {
        dVar7 = (double)lVar5 - (double)lVar2 * dVar6;
        dVar8 = (((double)param_3[1] - dVar9 * (double)lVar4) - dVar7) / dVar8;
        *param_5 = dVar8;
        dVar7 = dVar8 * dVar6 + dVar7;
      }
      goto LAB_14826b0a9;
    }
    dVar7 = (double)lVar5 - (double)lVar2 * dVar6;
    *param_5 = (double)lVar3;
    lVar1 = *param_3;
  }
  dVar7 = (double)lVar1 * dVar6 + dVar7;
LAB_14826b0a9:
  param_5[1] = dVar7;
  return;
}



// FUNCTION 14826b169 FUN_14826b169 body=152 status=ok
// SIG undefined FUN_14826b169(void)

longlong * FUN_14826b169(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  plVar2 = param_1;
  while ((plVar2 = (longlong *)plVar2[9], plVar2 != (longlong *)0x0 && (*param_2 <= plVar2[4]))) {
    if ((longlong *)plVar2[0xe] == param_2) {
      return plVar2;
    }
  }
  plVar2 = param_1 + 3;
  while( true ) {
    param_1 = (longlong *)param_1[10];
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    lVar3 = param_1[2];
    if (((param_1[3] != *plVar2) && (lVar1 = *param_1, lVar3 != lVar1)) &&
       (lVar4 = *plVar2 - param_1[1], lVar3 = lVar1, lVar4 != 0)) {
      dVar5 = (double)lVar4 * (double)param_1[5];
      auVar6._0_8_ = (double)((ulonglong)dVar5 & 0x8000000000000000 | 0x3fdfffffffffffff) + dVar5;
      auVar6._8_8_ = 0x3fdfffffffffffff;
      auVar6 = roundsd(ZEXT816(0),auVar6,0xb);
      lVar3 = lVar1 + (longlong)auVar6._0_8_;
    }
    if (*param_2 < lVar3) break;
    if ((longlong *)param_1[0xe] == param_2) {
      return param_1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14826b201 FUN_14826b201 body=81 status=ok
// SIG undefined FUN_14826b201(void)

void FUN_14826b201(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  lVar2 = *(longlong *)(param_2 + 0x40);
  if (lVar1 != lVar2) {
    if (lVar1 != 0) {
      *(longlong *)(lVar1 + 0x18 + (ulonglong)(*(longlong *)(lVar1 + 0x18) != param_1) * 8) =
           param_2;
    }
    if (lVar2 != 0) {
      *(longlong *)(lVar2 + 0x18 + (ulonglong)(*(longlong *)(lVar2 + 0x18) != param_2) * 8) =
           param_1;
    }
    *(longlong *)(param_1 + 0x40) = lVar2;
    *(longlong *)(param_2 + 0x40) = lVar1;
    return;
  }
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  return;
}



// FUNCTION 14826b252 FUN_14826b252 body=191 status=ok
// SIG undefined FUN_14826b252(void)

void FUN_14826b252(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 != 0) {
    do {
      lVar1 = *(longlong *)(lVar2 + 0x48);
      lVar2 = *(longlong *)(lVar2 + 0x50);
      plVar3 = (longlong *)(lVar1 + 0x50);
      if (lVar1 == 0) {
        plVar3 = (longlong *)(param_1 + 0x28);
      }
      *plVar3 = lVar2;
      if (lVar2 != 0) {
        *(longlong *)(lVar2 + 0x48) = lVar1;
      }
      FUN_1400020a8();
      lVar2 = *(longlong *)(param_1 + 0x28);
    } while (lVar2 != 0);
  }
  local_30 = 0;
  FUN_148273e04(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_148273e04(&local_48);
  if (*(longlong *)(param_1 + 0x98) != *(longlong *)(param_1 + 0xa0)) {
    *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0x98);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_14826b352(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826b312 FUN_14826b312 body=63 status=ok
// SIG undefined FUN_14826b312(void)

void FUN_14826b312(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  lVar2 = *(longlong *)(param_2 + 0x50);
  if (lVar1 == 0 && lVar2 == 0) {
    if (*(longlong *)(param_1 + 0x28) != param_2) {
      return;
    }
  }
  else if (lVar1 != 0) {
    plVar3 = (longlong *)(lVar1 + 0x50);
    goto LAB_14826b338;
  }
  plVar3 = (longlong *)(param_1 + 0x28);
LAB_14826b338:
  *plVar3 = lVar2;
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 0x48) = lVar1;
  }
  if (param_2 == 0) {
    return;
  }
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 14826b352 FUN_14826b352 body=118 status=ok
// SIG undefined FUN_14826b352(void)

void FUN_14826b352(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0xb0);
  plVar1 = *(longlong **)(param_1 + 0xb8);
  if (plVar3 != plVar1) {
    do {
      lVar2 = *plVar3;
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        FUN_14826b8a4(lVar2);
      }
      if (lVar2 != 0) {
        FUN_14826b8f6(lVar2);
        FUN_1400020a8(lVar2);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    if (*(longlong *)(param_1 + 0xb8) != *(longlong *)(param_1 + 0xb0)) {
      *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb0);
    }
  }
  return;
}



// FUNCTION 14826b3c8 FUN_14826b3c8 body=116 status=ok
// SIG undefined FUN_14826b3c8(void)

void FUN_14826b3c8(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x40);
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar2 != plVar1) {
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    if (*(longlong *)(param_1 + 0x40) != *(longlong *)(param_1 + 0x48)) {
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x40);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x60);
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (plVar2 != plVar1) {
    do {
      if (*plVar2 != 0) {
        thunk_FUN_1400020a8();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    if (*(longlong *)(param_1 + 0x60) != *(longlong *)(param_1 + 0x68)) {
      *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x60);
    }
  }
  return;
}



// FUNCTION 14826b43c FUN_14826b43c body=168 status=ok
// SIG undefined FUN_14826b43c(void)

void FUN_14826b43c(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x21) == '\0') {
    FUN_148273eff(*(longlong *)(param_1 + 0x40),*(longlong *)(param_1 + 0x48),
                  *(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 3);
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 != *(longlong *)(param_1 + 0x40)) {
    do {
      puVar1 = (undefined8 *)(lVar2 + -8);
      lVar2 = lVar2 + -8;
      local_30 = *(undefined8 *)(*(longlong *)*puVar1 + 8);
      FUN_148274ad0(param_1 + 0x78,&local_30);
    } while (lVar2 != *(longlong *)(param_1 + 0x40));
  }
  *(longlong *)(param_1 + 0x58) = lVar2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826b4e6 FUN_14826b4e6 body=602 status=ok
// SIG undefined FUN_14826b4e6(void)

void FUN_14826b4e6(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined1 *)(param_1 + 0x21) = 0;
  plVar22 = (longlong *)*param_2;
  plVar2 = (longlong *)param_2[1];
  if (plVar22 != plVar2) {
    uVar10 = 0;
    plVar11 = plVar22;
    do {
      uVar9 = uVar10;
      lVar17 = plVar11[1] - *plVar11 >> 4;
      uVar10 = uVar9 + lVar17;
      plVar11 = plVar11 + 3;
    } while (plVar11 != plVar2);
    if (uVar10 != 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar10;
      uVar12 = 0xffffffffffffffff;
      if (SUB168(auVar5 * ZEXT816(0x28),8) == 0) {
        uVar12 = SUB168(auVar5 * ZEXT816(0x28),0);
      }
      local_5c = param_3;
      local_58 = param_1;
      plVar11 = (longlong *)FUN_144a7d36f(uVar12);
      lVar13 = 0;
      do {
        puVar1 = (undefined8 *)((longlong)plVar11 + lVar13 + 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((longlong)plVar11 + lVar13) = 0;
        ((undefined8 *)((longlong)plVar11 + lVar13))[1] = 0;
        *(undefined4 *)((longlong)plVar11 + lVar13 + 0x20) = 0;
        lVar13 = lVar13 + 0x28;
        lVar14 = local_58;
        plVar21 = plVar11;
        local_50 = plVar11;
      } while (lVar17 * 0x28 + uVar9 * 0x28 != lVar13);
      do {
        plVar21[3] = 0;
        plVar15 = (longlong *)*plVar22;
        plVar3 = (longlong *)plVar22[1];
        plVar16 = plVar21;
        if (plVar15 != plVar3) {
          iVar8 = 0;
          plVar20 = (longlong *)0x0;
          plVar18 = plVar21;
          do {
            if (plVar20 == (longlong *)0x0) {
LAB_14826b5e2:
              plVar18[3] = (longlong)plVar20;
              uVar6 = *(undefined4 *)((longlong)plVar15 + 4);
              lVar17 = plVar15[1];
              uVar7 = *(undefined4 *)((longlong)plVar15 + 0xc);
              *(int *)plVar18 = (int)*plVar15;
              *(undefined4 *)((longlong)plVar18 + 4) = uVar6;
              *(int *)(plVar18 + 1) = (int)lVar17;
              *(undefined4 *)((longlong)plVar18 + 0xc) = uVar7;
              *(undefined4 *)(plVar18 + 4) = 0;
              iVar8 = iVar8 + 1;
              plVar19 = plVar18 + 5;
              plVar20 = plVar18;
            }
            else if ((*plVar20 != *plVar15) || (plVar19 = plVar18, plVar20[1] != plVar15[1])) {
              plVar20[2] = (longlong)plVar18;
              goto LAB_14826b5e2;
            }
            plVar15 = plVar15 + 2;
            plVar18 = plVar19;
          } while (plVar15 != plVar3);
          if ((plVar20 != (longlong *)0x0) && ((longlong *)plVar20[3] != (longlong *)0x0)) {
            plVar15 = (longlong *)plVar20[3];
            if (plVar21[1] != plVar20[1] || *plVar20 != *plVar21) {
              plVar15 = plVar20;
            }
            plVar15[2] = (longlong)plVar21;
            plVar21[3] = (longlong)plVar15;
            plVar16 = plVar19;
            if ((2 < iVar8) && (plVar15 != plVar21)) {
              lVar17 = plVar21[1];
LAB_14826b644:
              lVar13 = plVar15[1];
              if (lVar13 == lVar17) goto code_r0x00014826b64d;
              bVar4 = lVar17 < lVar13;
              plVar3 = (longlong *)plVar21[2];
              plVar15 = plVar21;
              while (plVar18 = plVar3, plVar18 != plVar21) {
                if ((plVar15[1] < plVar18[1]) && (bVar4)) {
                  *(byte *)(plVar15 + 4) = *(byte *)(plVar15 + 4) | 4;
                  bVar4 = false;
                }
                else if ((plVar18[1] < plVar15[1]) && (bVar4 == false)) {
                  FUN_14826b742(lVar14,plVar15,local_5c);
                  bVar4 = true;
                  lVar14 = local_58;
                }
                plVar15 = plVar18;
                plVar3 = (longlong *)plVar18[2];
              }
              if (lVar17 < lVar13 != bVar4) {
                if (lVar17 < lVar13) {
                  FUN_14826b742(lVar14,plVar15,local_5c);
                  lVar14 = local_58;
                }
                else {
                  *(byte *)(plVar15 + 4) = *(byte *)(plVar15 + 4) | 4;
                }
              }
            }
          }
        }
LAB_14826b65b:
        plVar22 = plVar22 + 3;
        plVar21 = plVar16;
      } while (plVar22 != plVar2);
      puVar1 = *(undefined8 **)(lVar14 + 0x68);
      if (puVar1 == *(undefined8 **)(lVar14 + 0x70)) {
        FUN_148274952(lVar14 + 0x60,puVar1,&local_50);
      }
      else {
        *puVar1 = plVar11;
        *(longlong *)(lVar14 + 0x68) = *(longlong *)(lVar14 + 0x68) + 8;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014826b64d:
  plVar15 = (longlong *)plVar15[3];
  if (plVar15 == plVar21) goto LAB_14826b65b;
  goto LAB_14826b644;
}



// FUNCTION 14826b742 FUN_14826b742 body=141 status=ok
// SIG undefined FUN_14826b742(void)

void FUN_14826b742(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(param_2 + 0x20) & 8) == 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 8;
    local_28 = (longlong *)FUN_14001cc68(0x10,0x10);
    *local_28 = param_2;
    *(undefined4 *)(local_28 + 1) = param_3;
    *(undefined1 *)((longlong)local_28 + 0xc) = 0;
    plVar1 = *(longlong **)(param_1 + 0x48);
    if (plVar1 == *(longlong **)(param_1 + 0x50)) {
      FUN_148274d86(param_1 + 0x40,plVar1,&local_28);
    }
    else {
      *plVar1 = (longlong)local_28;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 8;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826b7d0 FUN_14826b7d0 body=92 status=ok
// SIG undefined FUN_14826b7d0(void)

bool FUN_14826b7d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x78);
  plVar2 = *(longlong **)(param_1 + 0x80);
  if (plVar1 != plVar2) {
    *param_2 = *plVar1;
    do {
      FUN_14826b82c(param_1 + 0x78);
      if (*(longlong **)(param_1 + 0x78) == *(longlong **)(param_1 + 0x80)) break;
    } while (*param_2 == **(longlong **)(param_1 + 0x78));
  }
  return plVar1 != plVar2;
}



// FUNCTION 14826b82c FUN_14826b82c body=119 status=ok
// SIG undefined FUN_14826b82c(void)

void FUN_14826b82c(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[1];
  if (8 < lVar2 - (longlong)puVar1) {
    local_18 = *(undefined8 *)(lVar2 + -8);
    *(undefined8 *)(lVar2 + -8) = *puVar1;
    FUN_14828adf2(puVar1,(lVar2 + -8) - (longlong)puVar1 >> 3);
    lVar2 = param_1[1];
  }
  param_1[1] = lVar2 + -8;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826b8a4 FUN_14826b8a4 body=81 status=ok
// SIG undefined FUN_14826b8a4(void)

void FUN_14826b8a4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 == 0) {
    return;
  }
  lVar2 = *(longlong *)(lVar3 + 0x10);
  if (*(longlong *)(lVar3 + 0x10) != lVar3) {
    do {
      lVar1 = *(longlong *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        FUN_1400020a8(lVar2);
        lVar3 = *(longlong *)(param_1 + 0x28);
      }
      lVar2 = lVar1;
    } while (lVar1 != lVar3);
    if (lVar1 == 0) goto LAB_14826b8e6;
  }
  FUN_1400020a8();
LAB_14826b8e6:
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 14826b8f6 FUN_14826b8f6 body=52 status=ok
// SIG undefined FUN_14826b8f6(void)

void FUN_14826b8f6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_148273d5c(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_148274782(param_1 + 0x58);
  return;
}



// FUNCTION 14826b92a FUN_14826b92a body=202 status=ok
// SIG undefined FUN_14826b92a(void)

ulonglong FUN_14826b92a(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined3 uVar3;
  uint uVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 3) {
    if (*(int *)(param_2 + 0x34) != -1) {
      return 0;
    }
  }
  else if (iVar1 == 2) {
    if (*(int *)(param_2 + 0x34) != 1) {
      return 0;
    }
  }
  else if ((iVar1 == 1) && ((*(int *)(param_2 + 0x34) + 1U & 0xfffffffd) != 0)) {
    return 0;
  }
  uVar4 = *(int *)(param_1 + 8) - 1;
  if (3 < uVar4) {
    return 0;
  }
  switch(*(int *)(param_1 + 8)) {
  case 2:
    iVar2 = *(int *)(param_2 + 0x38);
    uVar3 = (undefined3)((uint)iVar2 >> 8);
    if (iVar1 == 3) {
      return (ulonglong)CONCAT31(uVar3,-1 < iVar2);
    }
    if (iVar1 != 2) {
      return (ulonglong)CONCAT31(uVar3,iVar2 == 0);
    }
    return (ulonglong)CONCAT31(uVar3,iVar2 < 1);
  case 3:
    iVar2 = *(int *)(param_2 + 0x38);
    if (iVar1 == 3) {
      bVar5 = -1 < iVar2;
    }
    else if (iVar1 == 2) {
      bVar5 = iVar2 < 1;
    }
    else {
      bVar5 = iVar2 == 0;
    }
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x78) >> 8),
                    *(int *)(*(longlong *)(param_2 + 0x78) + 8) != 0 ^ bVar5);
  case 4:
    return CONCAT71((int7)((ulonglong)
                           ((longlong)&switchD_14826b974::switchdataD_14ae71fc0 +
                           (longlong)(int)(&switchD_14826b974::switchdataD_14ae71fc0)[uVar4]) >> 8),
                    1);
  }
  uVar4 = *(uint *)(param_2 + 0x38);
  if (iVar1 == 3) {
    return (ulonglong)(uVar4 >> 0x1f);
  }
  uVar3 = (undefined3)(uVar4 >> 8);
  if (iVar1 != 2) {
    return (ulonglong)CONCAT31(uVar3,uVar4 != 0);
  }
  return (ulonglong)CONCAT31(uVar3,0 < (int)uVar4);
}



// FUNCTION 14826b9f4 FUN_14826b9f4 body=256 status=ok
// SIG undefined FUN_14826b9f4(void)

void FUN_14826b9f4(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  lVar3 = *(longlong *)(param_2 + 0x48);
  iVar1 = *(int *)(*(longlong *)(param_2 + 0x78) + 8);
  do {
    if (lVar3 == 0) {
      *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_2 + 0x30);
      plVar4 = (longlong *)(param_1 + 0x28);
LAB_14826ba29:
      lVar3 = *plVar4;
      if (*(int *)(param_1 + 0xc) == 0) {
        if (lVar3 != param_2) {
          uVar5 = *(uint *)(param_2 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar3 + 0x78) + 8) != iVar1) &&
               (*(char *)(*(longlong *)(lVar3 + 0x78) + 0xc) == '\0')) {
              uVar5 = (uint)(uVar5 == 0);
              *(uint *)(param_2 + 0x38) = uVar5;
            }
            lVar3 = *(longlong *)(lVar3 + 0x50);
          } while (lVar3 != param_2);
        }
      }
      else if (lVar3 != param_2) {
        iVar6 = *(int *)(param_2 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar3 + 0x78) + 8) != iVar1) &&
             (*(char *)(*(longlong *)(lVar3 + 0x78) + 0xc) == '\0')) {
            iVar6 = iVar6 + *(int *)(lVar3 + 0x30);
            *(int *)(param_2 + 0x38) = iVar6;
          }
          lVar3 = *(longlong *)(lVar3 + 0x50);
        } while (lVar3 != param_2);
      }
      return;
    }
    if ((*(int *)(*(longlong *)(lVar3 + 0x78) + 8) == iVar1) &&
       (*(char *)(*(longlong *)(lVar3 + 0x78) + 0xc) != '\x01')) {
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_14826baee:
        iVar6 = *(int *)(param_2 + 0x30);
      }
      else {
        uVar5 = *(uint *)(lVar3 + 0x34);
        if ((int)(*(int *)(lVar3 + 0x30) * uVar5) < 0) {
          uVar2 = -uVar5;
          if ((int)-uVar5 < 0) {
            uVar2 = uVar5;
          }
          if (uVar2 < 2) {
            iVar6 = 1;
            if (*(char *)(*(longlong *)(param_2 + 0x78) + 0xc) == '\0') goto LAB_14826baee;
            goto LAB_14826babe;
          }
        }
        iVar6 = 0;
        if (-1 < *(int *)(lVar3 + 0x30) * *(int *)(param_2 + 0x30)) {
          iVar6 = *(int *)(param_2 + 0x30);
        }
        iVar6 = iVar6 + uVar5;
      }
LAB_14826babe:
      *(int *)(param_2 + 0x34) = iVar6;
      *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(lVar3 + 0x38);
      plVar4 = (longlong *)(lVar3 + 0x50);
      goto LAB_14826ba29;
    }
    lVar3 = *(longlong *)(lVar3 + 0x48);
  } while( true );
}



// FUNCTION 14826baf4 FUN_14826baf4 body=136 status=ok
// SIG undefined FUN_14826baf4(void)

void FUN_14826baf4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0xc) == 0) {
    if (lVar1 == param_2) {
      uVar5 = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      uVar5 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar1 + 0x78) + 8) == 1) {
          uVar3 = uVar3 + 1;
        }
        else {
          uVar5 = uVar5 + (*(byte *)(*(longlong *)(lVar1 + 0x78) + 0xc) ^ 1);
        }
        lVar1 = *(longlong *)(lVar1 + 0x50);
      } while (lVar1 != param_2);
      uVar5 = uVar5 & 1;
      uVar3 = uVar3 & 1;
    }
    *(uint *)(param_2 + 0x34) = uVar5;
    *(uint *)(param_2 + 0x38) = uVar3;
    return;
  }
  if (lVar1 != param_2) {
    iVar2 = *(int *)(param_2 + 0x34);
    iVar4 = *(int *)(param_2 + 0x38);
    do {
      if (*(int *)(*(longlong *)(lVar1 + 0x78) + 8) == 1) {
        iVar4 = iVar4 + *(int *)(lVar1 + 0x30);
        *(int *)(param_2 + 0x38) = iVar4;
      }
      else if (*(char *)(*(longlong *)(lVar1 + 0x78) + 0xc) == '\0') {
        iVar2 = iVar2 + *(int *)(lVar1 + 0x30);
        *(int *)(param_2 + 0x34) = iVar2;
      }
      lVar1 = *(longlong *)(lVar1 + 0x50);
    } while (lVar1 != param_2);
  }
  return;
}



// FUNCTION 14826bb7c FUN_14826bb7c body=592 status=ok
// SIG undefined FUN_14826bb7c(void)

ulonglong FUN_14826bb7c(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 unaff_RBX;
  bool bVar12;
  double dVar13;
  double dVar14;
  
  lVar2 = param_1[4];
  if (param_2[4] == lVar2) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    lVar11 = param_1[2];
    lVar4 = param_1[3];
    lVar5 = param_2[3];
    dVar13 = (double)(param_2[2] - lVar2);
    dVar14 = (double)(lVar2 - lVar11) * (double)(lVar5 - lVar3) - (double)(lVar3 - lVar4) * dVar13;
    if ((dVar14 != 0.0) || (NAN(dVar14))) {
      uVar9 = CONCAT71((int7)((ulonglong)lVar5 >> 8),dVar14 < 0.0);
    }
    else {
      lVar10 = param_1[0xe];
      if (lVar5 < lVar4 && (*(byte *)(lVar10 + 0x20) & 4) == 0) {
        plVar6 = *(longlong **)(lVar10 + 0x10 + (ulonglong)((int)param_1[6] < 1) * 8);
        lVar10 = plVar6[1] - lVar4;
        bVar12 = 0.0 < (double)lVar10 * (double)(lVar11 - lVar2) -
                       (double)(*plVar6 - lVar11) * (double)(lVar4 - lVar3);
      }
      else {
        lVar7 = param_2[0xe];
        if (lVar5 <= lVar4 || (*(byte *)(lVar7 + 0x20) & 4) != 0) {
          cVar1 = (char)param_2[0x10];
          uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1);
          if (param_1[1] != lVar3) {
            return uVar9 & 0xffffffff;
          }
          uVar9 = uVar9 & 0xffffffff;
          if (*(longlong *)(*(longlong *)param_1[0xf] + 8) != lVar3) {
            return uVar9;
          }
          if ((char)param_1[0x10] != cVar1) {
            return uVar9;
          }
          uVar9 = (ulonglong)(0 < (int)param_1[6]);
          plVar6 = *(longlong **)(*(longlong *)(lVar10 + 0x10 + uVar9 * 8) + 0x10 + uVar9 * 8);
          dVar13 = (double)(lVar4 - lVar3) * (double)(*param_1 - *plVar6) -
                   (double)(lVar11 - *param_1) * (double)(lVar3 - plVar6[1]);
          if ((dVar13 == 0.0) && (!NAN(dVar13))) {
            return CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
          }
          uVar9 = (ulonglong)(0 < (int)param_2[6]);
          plVar8 = *(longlong **)(*(longlong *)(lVar7 + 0x10 + uVar9 * 8) + 0x10 + uVar9 * 8);
          lVar11 = plVar8[1] - lVar3;
          return CONCAT71((int7)((ulonglong)lVar11 >> 8),
                          (bool)cVar1 ==
                          0.0 < (double)(*plVar8 - lVar2) * -(double)(lVar3 - plVar6[1]) +
                                (double)lVar11 * (double)(lVar2 - *plVar6));
        }
        plVar6 = *(longlong **)(lVar7 + 0x10 + (ulonglong)((int)param_2[6] < 1) * 8);
        lVar10 = *plVar6 - param_2[2];
        bVar12 = dVar13 * (double)(plVar6[1] - lVar5) - (double)(lVar5 - lVar3) * (double)lVar10 <
                 0.0;
      }
      uVar9 = CONCAT71((int7)((ulonglong)lVar10 >> 8),!bVar12);
    }
  }
  else {
    uVar9 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar2 < param_2[4]);
  }
  return uVar9;
}



// FUNCTION 14826bdcc FUN_14826bdcc body=134 status=ok
// SIG undefined FUN_14826bdcc(void)

void FUN_14826bdcc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  plVar4 = (longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
  }
  else {
    cVar2 = FUN_14826bb7c(lVar1,param_2);
    if (cVar2 == '\0') {
      *(undefined8 *)(param_2 + 0x48) = 0;
      lVar1 = *plVar4;
      *(longlong *)(param_2 + 0x50) = lVar1;
      *(longlong *)(lVar1 + 0x48) = param_2;
    }
    else {
      do {
        lVar3 = lVar1;
        lVar1 = *(longlong *)(lVar3 + 0x50);
        if (lVar1 == 0) break;
        cVar2 = FUN_14826bb7c(lVar1,param_2);
      } while (cVar2 != '\0');
      *(longlong *)(param_2 + 0x50) = lVar1;
      if (*(longlong *)(lVar3 + 0x50) != 0) {
        *(longlong *)(*(longlong *)(lVar3 + 0x50) + 0x48) = param_2;
      }
      *(longlong *)(param_2 + 0x48) = lVar3;
      plVar4 = (longlong *)(lVar3 + 0x50);
    }
  }
  *plVar4 = param_2;
  return;
}



// FUNCTION 14826be52 FUN_14826be52 body=1285 status=ok
// SIG undefined FUN_14826be52(void)

void FUN_14826be52(longlong param_1,longlong param_2)

{
  double dVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong *_Dst;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar5 = *(undefined8 **)(param_1 + 0x58);
  if (puVar5 != *(undefined8 **)(param_1 + 0x48)) {
    do {
      if (*(longlong *)(*(longlong *)*puVar5 + 8) != param_2) break;
      *(undefined8 **)(param_1 + 0x58) = puVar5 + 1;
      plVar10 = (longlong *)*puVar5;
      uVar4 = *(uint *)(*plVar10 + 0x20);
      if ((uVar4 & 1) == 0) {
        _Dst = (longlong *)FUN_14001cc68(0x88);
        memset(_Dst,0,0x88);
        *(undefined4 *)(_Dst + 6) = 1;
        _Dst[8] = 0;
        _Dst[9] = 0;
        _Dst[10] = 0;
        _Dst[0xb] = 0;
        _Dst[0xc] = 0;
        _Dst[0xd] = 0;
        _Dst[0xe] = 0;
        _Dst[0xf] = 0;
        *(undefined1 *)(_Dst + 0x10) = 0;
        lVar11 = ((longlong *)*plVar10)[1];
        *_Dst = *(longlong *)*plVar10;
        _Dst[1] = lVar11;
        lVar11 = *_Dst;
        _Dst[4] = lVar11;
        *(undefined4 *)(_Dst + 6) = 0xffffffff;
        plVar6 = *(longlong **)(*plVar10 + 0x18);
        _Dst[0xe] = (longlong)plVar6;
        lVar9 = plVar6[1];
        _Dst[2] = *plVar6;
        _Dst[3] = lVar9;
        _Dst[8] = 0;
        _Dst[0xf] = (longlong)plVar10;
        if (_Dst[3] - _Dst[1] == 0) {
          dVar1 = *(double *)(&DAT_149f45ef0 + (ulonglong)(lVar11 < _Dst[2]) * 8);
        }
        else {
          dVar1 = (double)(_Dst[2] - lVar11) / (double)(_Dst[3] - _Dst[1]);
        }
        _Dst[5] = (longlong)dVar1;
        uVar4 = *(uint *)(*plVar10 + 0x20);
      }
      else {
        _Dst = (longlong *)0x0;
      }
      if ((uVar4 & 2) == 0) {
        plVar6 = (longlong *)FUN_14001cc68(0x88);
        memset(plVar6,0,0x88);
        *(undefined4 *)(plVar6 + 6) = 1;
        plVar6[8] = 0;
        plVar6[9] = 0;
        plVar6[10] = 0;
        plVar6[0xb] = 0;
        plVar6[0xc] = 0;
        plVar6[0xd] = 0;
        plVar6[0xe] = 0;
        plVar6[0xf] = 0;
        *(undefined1 *)(plVar6 + 0x10) = 0;
        lVar11 = ((longlong *)*plVar10)[1];
        *plVar6 = *(longlong *)*plVar10;
        plVar6[1] = lVar11;
        lVar11 = *plVar6;
        plVar6[4] = lVar11;
        *(undefined4 *)(plVar6 + 6) = 1;
        plVar2 = *(longlong **)(*plVar10 + 0x10);
        plVar6[0xe] = (longlong)plVar2;
        lVar9 = plVar2[1];
        plVar6[2] = *plVar2;
        plVar6[3] = lVar9;
        plVar6[8] = 0;
        plVar6[0xf] = (longlong)plVar10;
        lVar9 = plVar6[3] - plVar6[1];
        if (lVar9 == 0) {
          dVar1 = *(double *)(&DAT_149f45ef0 + (ulonglong)(lVar11 < plVar6[2]) * 8);
        }
        else {
          dVar1 = (double)(plVar6[2] - lVar11) / (double)lVar9;
        }
        plVar6[5] = (longlong)dVar1;
        bVar12 = _Dst != (longlong *)0x0;
        if (plVar6 == (longlong *)0x0 || _Dst == (longlong *)0x0) goto LAB_14826c074;
        plVar10 = plVar6;
        if (_Dst[3] == _Dst[1]) {
          dVar1 = (double)_Dst[5];
          bVar12 = dVar1 == -1.79769313486232e+308;
LAB_14826c21c:
          if ((bVar12) && (!NAN(dVar1))) {
LAB_14826c228:
            plVar10 = _Dst;
            _Dst = plVar6;
          }
        }
        else {
          if (plVar6[3] == plVar6[1]) {
            bVar12 = dVar1 == 1.79769313486232e+308;
            goto LAB_14826c21c;
          }
          if ((double)_Dst[5] <= dVar1 && dVar1 != (double)_Dst[5]) goto LAB_14826c228;
        }
      }
      else {
        bVar12 = _Dst != (longlong *)0x0;
        plVar6 = (longlong *)0x0;
LAB_14826c074:
        plVar10 = plVar6;
        if (!bVar12) {
          plVar10 = (longlong *)0x0;
          _Dst = plVar6;
        }
      }
      *(undefined1 *)(_Dst + 0x10) = 1;
      FUN_14826bdcc(param_1,_Dst);
      if (*(char *)(_Dst[0xf] + 0xc) == '\x01') {
        FUN_14826baf4(param_1,_Dst);
        cVar3 = FUN_14826c358(param_1,_Dst);
      }
      else {
        FUN_14826b9f4(param_1,_Dst);
        cVar3 = FUN_14826b92a(param_1,_Dst);
      }
      if (plVar10 != (longlong *)0x0) {
        *(undefined1 *)(plVar10 + 0x10) = 0;
        *(undefined4 *)((longlong)plVar10 + 0x34) = *(undefined4 *)((longlong)_Dst + 0x34);
        *(int *)(plVar10 + 7) = (int)_Dst[7];
        lVar11 = _Dst[10];
        plVar10[10] = lVar11;
        if (lVar11 != 0) {
          *(longlong **)(lVar11 + 0x48) = plVar10;
        }
        plVar10[9] = (longlong)_Dst;
        _Dst[10] = (longlong)plVar10;
        if (cVar3 != '\0') {
          local_98 = 1;
          FUN_14826c3ac(param_1,_Dst,plVar10,_Dst);
          if ((_Dst[3] != _Dst[1]) && (cVar3 = FUN_14826c53a(_Dst), cVar3 != '\0')) {
            uVar7 = FUN_14826c5c6(_Dst[9],_Dst);
            FUN_14826c660(param_1,uVar7,*(undefined8 *)(_Dst[8] + 0x28));
          }
        }
        do {
          lVar11 = plVar10[10];
          do {
            if (lVar11 == 0) {
              lVar11 = 0;
LAB_14826c179:
              lVar9 = plVar10[1];
              lVar8 = plVar10[3];
              if (lVar8 != lVar9) {
                cVar3 = FUN_14826cc33(plVar10);
                if (cVar3 != '\0') {
                  uVar7 = FUN_14826c5c6(lVar11,plVar10);
                  FUN_14826c660(param_1,*(undefined8 *)(plVar10[8] + 0x28),uVar7);
                  lVar9 = plVar10[1];
                  lVar8 = plVar10[3];
                }
                if (lVar8 != lVar9) {
                  local_88 = lVar8;
                  FUN_148274ad0(param_1 + 0x78);
                  goto LAB_14826c199;
                }
              }
              plVar10[0xc] = *(longlong *)(param_1 + 0x30);
              *(longlong **)(param_1 + 0x30) = plVar10;
              goto LAB_14826c199;
            }
            cVar3 = FUN_14826bb7c(lVar11,plVar10);
            if (cVar3 == '\0') goto LAB_14826c179;
            FUN_14826c75a(param_1,plVar10,lVar11,plVar10);
            lVar9 = plVar10[10];
            lVar11 = *(longlong *)(lVar9 + 0x50);
            if (lVar11 != 0) {
              *(longlong **)(lVar11 + 0x48) = plVar10;
            }
            lVar8 = plVar10[9];
            if (lVar8 != 0) {
              *(longlong *)(lVar8 + 0x50) = lVar9;
            }
            *(longlong *)(lVar9 + 0x48) = lVar8;
            *(longlong **)(lVar9 + 0x50) = plVar10;
            plVar10[9] = lVar9;
            plVar10[10] = lVar11;
          } while (*(longlong *)(lVar9 + 0x48) != 0);
          *(longlong *)(param_1 + 0x28) = lVar9;
        } while( true );
      }
      if (cVar3 != '\0') {
        FUN_14826ccbe(param_1,_Dst,_Dst);
      }
LAB_14826c199:
      if (_Dst[3] == _Dst[1]) {
        _Dst[0xc] = *(longlong *)(param_1 + 0x30);
        *(longlong **)(param_1 + 0x30) = _Dst;
      }
      else {
        local_88 = _Dst[3];
        FUN_148274ad0(param_1 + 0x78,&local_88);
      }
      puVar5 = *(undefined8 **)(param_1 + 0x58);
    } while (puVar5 != *(undefined8 **)(param_1 + 0x48));
  }
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826c358 FUN_14826c358 body=83 status=ok
// SIG undefined FUN_14826c358(void)

ulonglong FUN_14826c358(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined3 uVar2;
  ulonglong uVar3;
  undefined7 uVar5;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_2 + 0x38);
  if (*(int *)(param_1 + 0xc) == 3) {
    uVar4 = (ulonglong)(*(uint *)(param_2 + 0x34) >> 0x1f);
    uVar3 = (ulonglong)(uVar1 >> 0x1f);
  }
  else {
    uVar2 = (undefined3)(uVar1 >> 8);
    uVar5 = (undefined7)((ulonglong)param_2 >> 8);
    if (*(int *)(param_1 + 0xc) == 2) {
      uVar3 = (ulonglong)CONCAT31(uVar2,0 < (int)uVar1);
      uVar4 = CONCAT71(uVar5,0 < *(int *)(param_2 + 0x34));
    }
    else {
      uVar3 = (ulonglong)CONCAT31(uVar2,uVar1 != 0);
      uVar4 = CONCAT71(uVar5,*(int *)(param_2 + 0x34) != 0);
    }
  }
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(param_1 + 8) == 2) {
      uVar3 = (CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 | (byte)uVar3) ^ 1) & 0xffffffff;
    }
    else {
      uVar3 = uVar3 ^ 1;
    }
  }
  return uVar3;
}



// FUNCTION 14826c3ac FUN_14826c3ac body=397 status=ok
// SIG undefined FUN_14826c3ac(void)

void FUN_14826c3ac(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4,
                  char param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar5 = (ulonglong *)FUN_14001cc68(0x78,0x10);
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  plVar1 = *(longlong **)(param_1 + 0xb8);
  *puVar5 = (ulonglong)((longlong)plVar1 - *(longlong *)(param_1 + 0xb0)) >> 3 & 0xffffffff;
  local_38 = puVar5;
  if (plVar1 == *(longlong **)(param_1 + 0xc0)) {
    FUN_148274f04(param_1 + 0xb0,plVar1,&local_38);
  }
  else {
    *plVar1 = (longlong)puVar5;
    *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + 8;
  }
  puVar5[5] = 0;
  puVar5[6] = 0;
  *(ulonglong **)(param_2 + 0x40) = puVar5;
  *(ulonglong **)(param_3 + 0x40) = puVar5;
  if (*(char *)(*(longlong *)(param_2 + 0x78) + 0xc) == '\0') {
    for (lVar7 = *(longlong *)(param_2 + 0x48); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x48)) {
      if ((*(char *)(*(longlong *)(lVar7 + 0x78) + 0xc) == '\0') &&
         (*(ulonglong *)(lVar7 + 0x40) != 0)) {
        puVar5[1] = *(ulonglong *)(lVar7 + 0x40);
        if ((*(longlong *)(*(longlong *)(lVar7 + 0x40) + 0x18) == lVar7) == (bool)param_5)
        goto LAB_14826c4fb;
        goto LAB_14826c46a;
      }
    }
    puVar5[1] = 0;
    if (param_5 == '\0') goto LAB_14826c4fb;
  }
  else {
    puVar5[1] = 0;
    *(undefined1 *)(puVar5 + 0xe) = 1;
    if (*(int *)(param_2 + 0x30) < 1) {
LAB_14826c4fb:
      puVar5[3] = param_3;
      puVar5[4] = param_2;
      goto LAB_14826c472;
    }
  }
LAB_14826c46a:
  puVar5[3] = param_2;
  puVar5[4] = param_3;
LAB_14826c472:
  puVar6 = (undefined4 *)FUN_14001cc68(0x30,0x10);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *puVar6 = *param_4;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(ulonglong **)(puVar6 + 8) = puVar5;
  *(undefined8 *)(puVar6 + 10) = 0;
  *(undefined4 **)(puVar6 + 4) = puVar6;
  *(undefined4 **)(puVar6 + 6) = puVar6;
  puVar5[5] = (ulonglong)puVar6;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14826c53a FUN_14826c53a body=139 status=ok
// SIG undefined FUN_14826c53a(void)

byte FUN_14826c53a(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  
  if ((((param_1[8] == 0) || (*(char *)(param_1[0xf] + 0xc) != '\0')) ||
      (lVar1 = param_1[9], lVar1 == 0)) ||
     (((*(longlong *)(lVar1 + 0x20) != param_1[4] || (*(longlong *)(lVar1 + 0x40) == 0)) ||
      (*(char *)(*(longlong *)(lVar1 + 0x78) + 0xc) != '\0')))) {
    bVar2 = 0;
  }
  else {
    bVar2 = -((double)(param_1[3] - param_1[1]) * (double)(*param_1 - *(longlong *)(lVar1 + 0x10)) -
              (double)(param_1[2] - *param_1) * (double)(param_1[1] - *(longlong *)(lVar1 + 0x18))
             == 0.0) & 1;
  }
  return bVar2;
}



// FUNCTION 14826c5c6 FUN_14826c5c6 body=154 status=ok
// SIG undefined FUN_14826c5c6(void)

longlong * FUN_14826c5c6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  lVar2 = *(longlong *)(lVar1 + 0x18);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  plVar4 = (longlong *)plVar3[2];
  if (lVar2 == param_1) {
    if (*param_2 != *plVar3) goto LAB_14826c617;
    lVar5 = plVar3[1];
    plVar6 = plVar3;
  }
  else {
    if (*param_2 != *plVar4) goto LAB_14826c617;
    lVar5 = plVar4[1];
    plVar6 = plVar4;
  }
  if (param_2[1] == lVar5) {
    return plVar6;
  }
LAB_14826c617:
  plVar6 = (longlong *)FUN_14001cc68(0x30,0x10);
  lVar5 = param_2[1];
  *plVar6 = *param_2;
  plVar6[1] = lVar5;
  plVar6[4] = lVar1;
  plVar6[5] = 0;
  plVar4[3] = (longlong)plVar6;
  plVar6[3] = (longlong)plVar3;
  plVar6[2] = (longlong)plVar4;
  plVar3[2] = (longlong)plVar6;
  if (lVar2 == param_1) {
    *(longlong **)(lVar1 + 0x28) = plVar6;
  }
  return plVar6;
}



// FUNCTION 14826c660 FUN_14826c660 body=249 status=ok
// SIG undefined FUN_14826c660(void)

void FUN_14826c660(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 0x20);
  if ((lVar1 != *(longlong *)(param_3 + 0x20)) ||
     (((param_2 != param_3 &&
       ((*(longlong *)(param_2 + 0x10) != param_3 || (*(longlong *)(lVar1 + 0x28) == param_2)))) &&
      ((*(longlong *)(param_3 + 0x10) != param_2 || (*(longlong *)(lVar1 + 0x28) == param_3)))))) {
    local_28 = (undefined4 *)FUN_14001cc68(0x30,0x10);
    *(longlong *)(local_28 + 2) = param_2;
    *(longlong *)(local_28 + 4) = param_3;
    *(undefined8 *)(local_28 + 10) = 0;
    *(undefined8 *)(local_28 + 6) = *(undefined8 *)(param_2 + 0x28);
    *(undefined4 **)(param_2 + 0x28) = local_28;
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_3 + 0x28);
      *(undefined4 **)(param_3 + 0x28) = local_28;
    }
    *(undefined8 *)(local_28 + 8) = uVar3;
    plVar2 = *(longlong **)(param_1 + 0xd0);
    *local_28 = (int)((ulonglong)((longlong)plVar2 - *(longlong *)(param_1 + 200)) >> 3);
    if (plVar2 == *(longlong **)(param_1 + 0xd8)) {
      FUN_148275e78(param_1 + 200,plVar2,&local_28);
    }
    else {
      *plVar2 = (longlong)local_28;
      *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_1 + 0xd0) + 8;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14826c75a FUN_14826c75a body=1241 status=ok
// SIG undefined FUN_14826c75a(void)

longlong * FUN_14826c75a(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  double dVar14;
  
  plVar5 = (longlong *)param_2[0xf];
  if (*(char *)(param_1 + 0x20) == '\0') {
    plVar6 = (longlong *)param_3[0xf];
  }
  else {
    plVar6 = (longlong *)param_3[0xf];
    if (*(char *)((longlong)plVar5 + 0xc) != '\0') {
      plVar4 = plVar5;
      plVar5 = plVar6;
      plVar12 = param_3;
      param_3 = param_2;
      if (*(char *)((longlong)plVar6 + 0xc) != '\0') {
        return (longlong *)0x0;
      }
LAB_14826c7fd:
      iVar8 = *(int *)((longlong)plVar12 + 0x34);
      if ((iVar8 + 1U & 0xfffffffd) != 0) {
        return (longlong *)0x0;
      }
      if (*(int *)(param_1 + 8) == 2) {
        if (plVar12[8] == 0) {
          return (longlong *)0x0;
        }
      }
      else if ((int)plVar5[1] == 0) {
        return (longlong *)0x0;
      }
      if (*(int *)(param_1 + 0xc) == 3) {
        if (iVar8 != -1) {
          return (longlong *)0x0;
        }
      }
      else if ((*(int *)(param_1 + 0xc) == 2) && (iVar8 != 1)) {
        return (longlong *)0x0;
      }
      if (param_3[8] != 0) {
        plVar5 = (longlong *)FUN_14826c5c6(param_3,param_4);
        *(undefined8 *)
         (param_3[8] + 0x18 + (ulonglong)(*(longlong **)(param_3[8] + 0x18) != param_3) * 8) = 0;
        param_3[8] = 0;
        return plVar5;
      }
      plVar4 = (longlong *)*plVar4;
      if ((((*param_4 == *plVar4) && (param_4[1] == plVar4[1])) &&
          ((*(byte *)(plVar4 + 4) & 3) == 0)) &&
         ((plVar5 = (longlong *)FUN_14826db92(param_3), plVar5 != (longlong *)0x0 &&
          (plVar5[8] != 0)))) {
        param_3[8] = plVar5[8];
        lVar2 = plVar5[8];
        plVar4 = param_3;
        plVar6 = plVar5;
        if (0 < (int)param_3[6]) {
          plVar4 = plVar5;
          plVar6 = param_3;
        }
        *(longlong **)(lVar2 + 0x18) = plVar6;
        *(longlong **)(lVar2 + 0x20) = plVar4;
        return *(longlong **)(plVar5[8] + 0x28);
      }
      plVar5 = (longlong *)FUN_14826ccbe(param_1,param_3,param_4);
      return plVar5;
    }
    plVar4 = plVar6;
    plVar12 = param_2;
    if (*(char *)((longlong)plVar6 + 0xc) != '\0') goto LAB_14826c7fd;
  }
  if ((int)plVar5[1] == (int)plVar6[1]) {
    iVar8 = *(int *)((longlong)param_2 + 0x34);
    if (*(int *)(param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)((longlong)param_3 + 0x34);
    }
    else {
      iVar7 = (int)param_3[6] + iVar8;
      iVar8 = -iVar8;
      if (iVar7 != 0) {
        iVar8 = iVar7;
      }
      *(int *)((longlong)param_2 + 0x34) = iVar8;
      iVar8 = *(int *)((longlong)param_3 + 0x34) - (int)param_2[6];
      if (iVar8 != 0) {
        *(int *)((longlong)param_3 + 0x34) = iVar8;
        goto LAB_14826c82e;
      }
      iVar8 = -*(int *)((longlong)param_3 + 0x34);
    }
    *(int *)((longlong)param_3 + 0x34) = iVar8;
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
    *(uint *)(param_2 + 7) = (uint)((int)param_2[7] == 0);
    *(uint *)(param_3 + 7) = (uint)((int)param_3[7] == 0);
  }
  else {
    *(int *)(param_2 + 7) = (int)param_2[7] + (int)param_3[6];
    *(int *)(param_3 + 7) = (int)param_3[7] - (int)param_2[6];
  }
LAB_14826c82e:
  uVar10 = *(uint *)(param_1 + 0xc);
  if (uVar10 < 2) {
    uVar3 = -*(uint *)((longlong)param_2 + 0x34);
    if ((int)uVar3 < 0) {
      uVar3 = *(uint *)((longlong)param_2 + 0x34);
    }
    uVar9 = -*(uint *)((longlong)param_3 + 0x34);
    if ((int)uVar9 < 0) {
      uVar9 = *(uint *)((longlong)param_3 + 0x34);
    }
  }
  else {
    uVar3 = *(uint *)((longlong)param_2 + 0x34);
    if (uVar10 == *(uint *)(param_1 + 0x10)) {
      uVar9 = *(uint *)((longlong)param_3 + 0x34);
    }
    else {
      uVar3 = -uVar3;
      uVar9 = -*(int *)((longlong)param_3 + 0x34);
    }
  }
  lVar2 = param_2[8];
  if ((1 < uVar3 && lVar2 == 0) || ((lVar1 = param_3[8], lVar1 == 0 && (1 < uVar9)))) {
    return (longlong *)0x0;
  }
  if (lVar2 != 0 && lVar1 != 0) {
    if (((1 < uVar3) || (1 < uVar9)) ||
       ((*(int *)(param_2[0xf] + 8) != *(int *)(param_3[0xf] + 8) && (*(int *)(param_1 + 8) != 4))))
    {
      plVar5 = (longlong *)FUN_14826cdda(param_1,param_2,param_3,param_4);
      return plVar5;
    }
    if ((lVar2 == lVar1) || (*(longlong **)(lVar2 + 0x18) == param_2)) {
      plVar5 = (longlong *)FUN_14826cdda(param_1,param_2,param_3,param_4);
      plVar6 = (longlong *)FUN_14826c3ac(param_1,param_2,param_3,param_4,0);
      if (plVar5 == (longlong *)0x0) {
        return (longlong *)0x0;
      }
      lVar2 = *plVar5;
      if (lVar2 != *plVar6) {
        return plVar5;
      }
      lVar1 = plVar5[1];
      if (lVar1 != plVar6[1]) {
        return plVar5;
      }
      if (param_2[3] != param_2[1]) {
        if (param_3[3] == param_3[1]) {
          return plVar5;
        }
        dVar14 = (double)(param_3[1] - lVar1) * (double)(lVar2 - *param_2) -
                 (double)(*param_3 - lVar2) * (double)(lVar1 - param_2[1]);
        if (dVar14 == 0.0) {
          if (!NAN(dVar14)) {
            FUN_14826c660(param_1,plVar5,plVar6);
            return plVar5;
          }
          return plVar5;
        }
        return plVar5;
      }
      return plVar5;
    }
    plVar5 = (longlong *)FUN_14826c5c6(param_2,param_4);
    FUN_14826c5c6(param_3,param_4);
LAB_14826caf8:
    FUN_14826b201(param_2,param_3);
    return plVar5;
  }
  plVar5 = param_2;
  if ((lVar2 != 0) || (plVar5 = param_3, lVar1 != 0)) {
    plVar5 = (longlong *)FUN_14826c5c6(plVar5,param_4);
    goto LAB_14826caf8;
  }
  if (uVar10 < 2) {
    uVar10 = -*(uint *)(param_2 + 7);
    if ((int)uVar10 < 0) {
      uVar10 = *(uint *)(param_2 + 7);
    }
    uVar11 = (ulonglong)uVar10;
    uVar10 = -*(uint *)(param_3 + 7);
    uVar13 = (ulonglong)uVar10;
    if ((int)uVar10 < 0) {
      uVar13 = (ulonglong)*(uint *)(param_3 + 7);
    }
  }
  else {
    uVar11 = (ulonglong)(int)param_2[7];
    if (uVar10 == *(uint *)(param_1 + 0x10)) {
      uVar13 = (ulonglong)(int)param_3[7];
    }
    else {
      uVar11 = (ulonglong)-(int)param_2[7];
      uVar13 = -(longlong)(int)param_3[7];
    }
  }
  iVar8 = *(int *)(param_2[0xf] + 8);
  if (iVar8 != *(int *)(param_3[0xf] + 8)) goto LAB_14826ca64;
  if (uVar3 != 1) {
    return (longlong *)0x0;
  }
  if (uVar9 != 1) {
    return (longlong *)0x0;
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 != 2) {
    if (iVar7 != 3) {
      if (iVar7 != 4) {
        if ((longlong)uVar11 < 1) {
          return (longlong *)0x0;
        }
        if ((longlong)uVar13 < 1) {
          return (longlong *)0x0;
        }
      }
      goto LAB_14826ca64;
    }
    if (((iVar8 == 1) && (0 < (longlong)uVar11)) && (0 < (longlong)uVar13)) goto LAB_14826ca64;
    if (iVar8 != 0) {
      return (longlong *)0x0;
    }
  }
  if (0 < (longlong)uVar11) {
    return (longlong *)0x0;
  }
  if (0 < (longlong)uVar13) {
    return (longlong *)0x0;
  }
LAB_14826ca64:
  plVar5 = (longlong *)FUN_14826c3ac(param_1,param_2,param_3,param_4,0);
  return plVar5;
}



// FUNCTION 14826cc33 FUN_14826cc33 body=139 status=ok
// SIG undefined FUN_14826cc33(void)

byte FUN_14826cc33(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  
  if ((((param_1[8] == 0) || (*(char *)(param_1[0xf] + 0xc) != '\0')) ||
      (lVar1 = param_1[10], lVar1 == 0)) ||
     (((*(longlong *)(lVar1 + 0x20) != param_1[4] || (*(longlong *)(lVar1 + 0x40) == 0)) ||
      (*(char *)(*(longlong *)(lVar1 + 0x78) + 0xc) != '\0')))) {
    bVar2 = 0;
  }
  else {
    bVar2 = -((double)(param_1[3] - param_1[1]) * (double)(*param_1 - *(longlong *)(lVar1 + 0x10)) -
              (double)(param_1[2] - *param_1) * (double)(param_1[1] - *(longlong *)(lVar1 + 0x18))
             == 0.0) & 1;
  }
  return bVar2;
}



// FUNCTION 14826ccbe FUN_14826ccbe body=283 status=ok
// SIG undefined FUN_14826ccbe(void)

void FUN_14826ccbe(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar6 = (longlong *)FUN_14001cc68(0x78,0x10);
  plVar6[1] = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  plVar1 = *(longlong **)(param_1 + 0xb8);
  *plVar6 = (longlong)plVar1 - *(longlong *)(param_1 + 0xb0) >> 3;
  local_30 = plVar6;
  if (plVar1 == *(longlong **)(param_1 + 0xc0)) {
    FUN_148274f04(param_1 + 0xb0,plVar1,&local_30);
  }
  else {
    *plVar1 = (longlong)plVar6;
    *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + 8;
  }
  plVar6[1] = 0;
  *(undefined1 *)(plVar6 + 0xe) = 1;
  plVar6[5] = 0;
  plVar6[6] = 0;
  lVar8 = param_2;
  lVar5 = 0;
  if (0 < *(int *)(param_2 + 0x30)) {
    lVar8 = 0;
    lVar5 = param_2;
  }
  plVar6[3] = lVar5;
  plVar6[4] = lVar8;
  *(longlong **)(param_2 + 0x40) = plVar6;
  puVar7 = (undefined4 *)FUN_14001cc68(0x30,0x10);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *puVar7 = *param_3;
  puVar7[1] = uVar2;
  puVar7[2] = uVar3;
  puVar7[3] = uVar4;
  *(longlong **)(puVar7 + 8) = plVar6;
  *(undefined8 *)(puVar7 + 10) = 0;
  *(undefined4 **)(puVar7 + 4) = puVar7;
  *(undefined4 **)(puVar7 + 6) = puVar7;
  plVar6[5] = (longlong)puVar7;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14826cdda FUN_14826cdda body=324 status=ok
// SIG undefined FUN_14826cdda(void)

ulonglong FUN_14826cdda(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x18);
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x40) + 0x18);
  if ((lVar1 == param_3) == (lVar6 == param_2)) {
    lVar3 = *(longlong *)(param_2 + 0x40);
    if (((*(byte *)(*(longlong *)(param_2 + 0x70) + 0x20) & 3) == 0) &&
       (lVar3 = *(longlong *)(param_3 + 0x40), lVar6 = lVar1,
       (*(byte *)(*(longlong *)(param_3 + 0x70) + 0x20) & 3) == 0)) {
      *(undefined1 *)(param_1 + 0x23) = 0;
      return 0;
    }
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar3 + 0x20);
    *(longlong *)(lVar3 + 0x20) = lVar6;
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + 0x10);
  }
  uVar4 = FUN_14826c5c6(param_2);
  puVar2 = *(ulonglong **)(param_2 + 0x40);
  if (puVar2 == *(ulonglong **)(param_3 + 0x40)) {
    puVar2[5] = uVar4;
    lVar6 = *(longlong *)(param_2 + 0x40);
    if (lVar6 != 0) {
      *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + 0x40) = 0;
      *(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0x40) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(undefined8 *)(lVar6 + 0x20) = 0;
    }
    if (*(char *)(*(longlong *)(param_2 + 0x78) + 0xc) == '\0') {
      FUN_14826cf1e(param_1,puVar2);
    }
    uVar4 = puVar2[5];
    if (*(char *)(param_1 + 0x22) != '\x01') {
      return uVar4;
    }
    uVar5 = puVar2[1];
    if (uVar5 == 0) {
      return uVar4;
    }
    if (*(longlong *)(uVar5 + 0x18) != 0) {
      return uVar4;
    }
    do {
      uVar5 = *(ulonglong *)(uVar5 + 8);
      if (uVar5 == 0) break;
    } while (*(longlong *)(uVar5 + 0x28) == 0);
    puVar2[1] = uVar5;
    return uVar4;
  }
  lVar6 = param_3;
  if (*(char *)(*(longlong *)(param_2 + 0x78) + 0xc) == '\x01') {
    if (-1 < *(int *)(param_2 + 0x30)) goto LAB_14826cf14;
  }
  else if (**(ulonglong **)(param_3 + 0x40) <= *puVar2) goto LAB_14826cf14;
  lVar6 = param_2;
  param_2 = param_3;
LAB_14826cf14:
  FUN_14826d120(lVar6,param_2);
  return uVar4;
}



// FUNCTION 14826cf1e FUN_14826cf1e body=480 status=ok
// SIG undefined FUN_14826cf1e(void)

void FUN_14826cf1e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_88 [32];
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  for (; param_2 != 0; param_2 = *(longlong *)(param_2 + 8)) {
    plVar2 = *(longlong **)(param_2 + 0x28);
    if (plVar2 != (longlong *)0x0) {
      if ((*(char *)(param_2 + 0x70) == '\0') && (*(longlong *)(param_2 + 0x18) == 0)) {
        plVar1 = (longlong *)(param_2 + 0x28);
        cVar5 = FUN_14826d228(plVar2);
        local_68 = plVar2;
        if (cVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_88);
        }
        goto LAB_14826cfba;
      }
      break;
    }
  }
  goto LAB_14826cf60;
  while (local_68 = plVar7, plVar7 != plVar2) {
LAB_14826cfba:
    if (local_68[5] != 0) goto LAB_14826cf60;
    plVar7 = (longlong *)local_68[2];
    plVar6 = (longlong *)local_68[3];
    lVar3 = *local_68;
    lVar4 = local_68[1];
    dVar8 = (double)(lVar3 - *plVar6);
    dVar9 = (double)(plVar7[1] - lVar4);
    dVar10 = (double)(lVar4 - plVar6[1]);
    dVar11 = (double)(*plVar7 - lVar3);
    dVar12 = dVar8 * dVar9 - dVar10 * dVar11;
    if (((dVar12 == 0.0) && (!NAN(dVar12))) &&
       ((plVar6[1] == lVar4 && *plVar6 == lVar3 ||
        (((plVar7[1] == lVar4 && *plVar7 == lVar3 || (*(char *)(param_1 + 0xe0) != '\x01')) ||
         (dVar8 * dVar11 + dVar9 * dVar10 < 0.0)))))) {
      if (local_68 == (longlong *)*plVar1) {
        *plVar1 = (longlong)plVar6;
        plVar7 = (longlong *)local_68[2];
        plVar6 = (longlong *)local_68[3];
      }
      plVar6[2] = (longlong)plVar7;
      *(longlong *)(local_68[2] + 0x18) = local_68[3];
      if (local_68 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_68 = plVar7;
      cVar5 = FUN_14826d228(plVar7);
      if (plVar7 != (longlong *)0x0 && cVar5 == '\0') {
        FUN_14826d2ac(param_1,&local_68);
      }
      plVar2 = local_68;
      if (cVar5 == '\0') {
        *plVar1 = 0;
        goto LAB_14826cf60;
      }
      goto LAB_14826cfba;
    }
  }
  FUN_14826d344(param_1,param_2);
LAB_14826cf60:
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826d120 FUN_14826d120 body=264 status=ok
// SIG undefined FUN_14826d120(void)

void FUN_14826d120(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x28);
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x28);
  lVar1 = *(longlong *)(lVar5 + 0x10);
  lVar2 = *(longlong *)(lVar6 + 0x10);
  if (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) == param_1) {
    *(longlong *)(lVar2 + 0x18) = lVar5;
    *(longlong *)(lVar5 + 0x10) = lVar2;
    *(longlong *)(lVar6 + 0x10) = lVar1;
    *(longlong *)(lVar1 + 0x18) = lVar6;
    *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x28) = lVar6;
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18) =
         *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x18);
    lVar5 = *(longlong *)(param_1 + 0x40);
    lVar6 = *(longlong *)(lVar5 + 0x18);
  }
  else {
    *(longlong *)(lVar1 + 0x18) = lVar6;
    *(longlong *)(lVar6 + 0x10) = lVar1;
    *(longlong *)(lVar5 + 0x10) = lVar2;
    *(longlong *)(lVar2 + 0x18) = lVar5;
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x20) =
         *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20);
    lVar5 = *(longlong *)(param_1 + 0x40);
    lVar6 = *(longlong *)(lVar5 + 0x20);
  }
  if (lVar6 != 0) {
    *(longlong *)(lVar6 + 0x40) = lVar5;
  }
  lVar5 = *(longlong *)(param_2 + 0x40);
  puVar3 = *(ulonglong **)(lVar5 + 8);
  if (puVar3 != (ulonglong *)0x0) {
    puVar4 = *(ulonglong **)(param_1 + 0x40);
    if ((*puVar3 < *puVar4) &&
       (((ulonglong *)puVar4[1] == (ulonglong *)0x0 || (*puVar3 < *(ulonglong *)puVar4[1])))) {
      puVar4[1] = (ulonglong)puVar3;
      lVar5 = *(longlong *)(param_2 + 0x40);
    }
  }
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20) = 0;
  *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x28) = 0;
  lVar5 = *(longlong *)(param_1 + 0x40);
  *(longlong *)(*(longlong *)(param_2 + 0x40) + 8) = lVar5;
  if ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0x20) & 3) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x28) = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x28) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  return;
}



// FUNCTION 14826d228 FUN_14826d228 body=131 status=ok
// SIG undefined FUN_14826d228(void)

bool FUN_14826d228(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  if (((param_1 == (longlong *)0x0) || (plVar1 = (longlong *)param_1[2], plVar1 == param_1)) ||
     (plVar2 = (longlong *)param_1[3], plVar1 == plVar2)) {
LAB_14826d279:
    bVar5 = false;
  }
  else {
    bVar5 = true;
    if ((longlong *)plVar1[2] != plVar2) {
      return true;
    }
    uVar3 = *param_1 - *plVar1;
    uVar4 = -uVar3;
    if ((longlong)uVar4 < 0) {
      uVar4 = uVar3;
    }
    if (uVar4 < 2) {
      uVar4 = -(param_1[1] - plVar1[1]);
      if ((longlong)uVar4 < 0) {
        uVar4 = param_1[1] - plVar1[1];
      }
      if (uVar4 < 2) goto LAB_14826d279;
    }
    uVar3 = *param_1 - *plVar2;
    uVar4 = -uVar3;
    if ((longlong)uVar4 < 0) {
      uVar4 = uVar3;
    }
    if (uVar4 < 2) {
      uVar4 = -(param_1[1] - plVar2[1]);
      if ((longlong)uVar4 < 0) {
        uVar4 = param_1[1] - plVar2[1];
      }
      bVar5 = 1 < uVar4;
    }
  }
  return bVar5;
}



// FUNCTION 14826d2ac FUN_14826d2ac body=151 status=ok
// SIG undefined FUN_14826d2ac(void)

void FUN_14826d2ac(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar2 = *(longlong *)(*param_2 + 0x20); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 8)) {
    if (*(longlong *)(lVar2 + 0x28) != 0) goto LAB_14826d2d7;
  }
  lVar2 = 0;
LAB_14826d2d7:
  if (*(longlong *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x40) = 0;
  }
  if (*(longlong *)(lVar2 + 0x20) != 0) {
    *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0x40) = 0;
  }
  *(undefined8 *)(*(longlong *)(*param_2 + 0x18) + 0x10) = 0;
  lVar1 = *param_2;
  while (lVar1 != 0) {
    FUN_14826d728(param_1,lVar1);
    lVar1 = *(longlong *)(*param_2 + 0x10);
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = lVar1;
  }
  *(undefined8 *)(lVar2 + 0x28) = 0;
  return;
}



// FUNCTION 14826d344 FUN_14826d344 body=137 status=ok
// SIG undefined FUN_14826d344(void)

void FUN_14826d344(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_2 + 0x28);
  lVar4 = *(longlong *)(lVar2 + 0x10);
  lVar3 = *(longlong *)(lVar2 + 0x18);
  lVar5 = lVar2;
  if (lVar3 != *(longlong *)(lVar4 + 0x10)) {
    do {
      cVar1 = FUN_14826d7b1(lVar3,lVar5,lVar4);
      if (cVar1 == '\0') {
        lVar5 = lVar4;
        if (lVar4 == lVar2) {
          return;
        }
      }
      else {
        if ((lVar5 == lVar2) || (lVar4 == lVar2)) {
          lVar2 = *(longlong *)(lVar2 + 0x18);
          *(longlong *)(param_2 + 0x28) = lVar2;
        }
        lVar2 = FUN_14826d3ce(param_1,lVar2,lVar5);
        *(longlong *)(param_2 + 0x28) = lVar2;
        lVar5 = lVar2;
      }
      lVar4 = *(longlong *)(lVar5 + 0x10);
      lVar3 = *(longlong *)(lVar5 + 0x18);
    } while (lVar3 != *(longlong *)(lVar4 + 0x10));
  }
  return;
}



// FUNCTION 14826d3ce FUN_14826d3ce body=856 status=ok
// SIG undefined FUN_14826d3ce(void)

longlong * FUN_14826d3ce(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_a8 [32];
  double *local_88;
  longlong *local_80;
  double local_78;
  double dStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar9 = (longlong *)param_3[2];
  plVar3 = (longlong *)param_3[3];
  plVar8 = (longlong *)plVar9[2];
  local_88 = &local_78;
  local_78 = 0.0;
  dStack_70 = 0.0;
  FUN_14826afda(plVar3,param_3,plVar9,plVar8);
  auVar14._0_8_ = (double)((ulonglong)local_78 & 0x8000000000000000 | 0x3fdfffffffffffff) + local_78
  ;
  auVar14._8_8_ = 0x3fdfffffffffffff;
  auVar14 = roundsd(ZEXT816(0),auVar14,0xb);
  dVar5 = 0.0;
  plVar7 = param_2;
  do {
    plVar1 = plVar7 + 3;
    lVar10 = *plVar7;
    plVar2 = plVar7 + 1;
    plVar7 = (longlong *)plVar7[2];
    dVar5 = dVar5 + (double)(*(longlong *)*plVar1 - lVar10) *
                    (double)(*plVar2 + ((longlong *)*plVar1)[1]);
  } while (plVar7 != param_2);
  auVar13._0_8_ =
       (double)((ulonglong)dStack_70 & 0x8000000000000000 | 0x3fdfffffffffffff) + dStack_70;
  auVar13._8_8_ = 0x3fdfffffffffffff;
  auVar13 = roundsd(ZEXT816(0),auVar13,0xb);
  lVar10 = (longlong)auVar14._0_8_;
  lVar11 = (longlong)auVar13._0_8_;
  dVar6 = (double)(*param_3 - *plVar9) * (double)(param_3[1] + plVar9[1]) +
          (double)(lVar10 - *param_3) * (double)(param_3[1] + lVar11) +
          (double)(*plVar9 - lVar10) * (double)(plVar9[1] + lVar11);
  plVar7 = plVar3;
  plVar9 = plVar8;
  if (((*plVar3 != lVar10) || (plVar3[1] != lVar11)) &&
     ((*plVar8 != lVar10 || (plVar8[1] != lVar11)))) {
    plVar7 = (longlong *)FUN_14001cc68(0x30,0x10);
    lVar4 = plVar3[4];
    *plVar7 = lVar10;
    plVar7[1] = lVar11;
    plVar7[4] = lVar4;
    plVar7[5] = 0;
    plVar7[3] = (longlong)plVar3;
    plVar7[2] = (longlong)plVar8;
    plVar9 = plVar7;
  }
  plVar8[3] = (longlong)plVar7;
  plVar3[2] = (longlong)plVar9;
  FUN_14826d728(param_1,param_3[2]);
  FUN_14826d728(param_1,param_3);
  dVar12 = ABS(dVar6);
  if (1.0 <= dVar12) {
    if (dVar12 <= ABS(dVar5 * 0.5)) {
      if (dVar5 * 0.5 <= 0.0 == 0.0 < dVar6) goto LAB_14826d57c;
    }
    plVar8 = (longlong *)FUN_14001cc68(0x78,0x10);
    plVar8[1] = 0;
    plVar8[2] = 0;
    plVar8[3] = 0;
    plVar8[4] = 0;
    plVar8[5] = 0;
    plVar8[6] = 0;
    plVar8[7] = 0;
    plVar8[8] = 0;
    plVar8[9] = 0;
    plVar8[10] = 0;
    plVar8[0xb] = 0;
    plVar8[0xc] = 0;
    plVar8[0xd] = 0;
    plVar8[0xe] = 0;
    plVar9 = *(longlong **)(param_1 + 0xb8);
    *plVar8 = (longlong)plVar9 - *(longlong *)(param_1 + 0xb0) >> 3;
    local_80 = plVar8;
    if (plVar9 == *(longlong **)(param_1 + 0xc0)) {
      FUN_148274f04(param_1 + 0xb0,plVar9,&local_80);
    }
    else {
      *plVar9 = (longlong)plVar8;
      *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + 8;
    }
    plVar8[1] = *(longlong *)(plVar3[4] + 8);
    plVar8[6] = 0;
    param_3[4] = (longlong)plVar8;
    *(longlong **)(param_3[2] + 0x20) = plVar8;
    plVar9 = (longlong *)FUN_14001cc68(0x30,0x10);
    *plVar9 = lVar10;
    plVar9[1] = lVar11;
    plVar9[4] = (longlong)plVar8;
    plVar9[5] = 0;
    lVar10 = param_3[2];
    plVar9[3] = lVar10;
    plVar9[2] = (longlong)param_3;
    plVar8[5] = (longlong)plVar9;
    param_3[3] = (longlong)plVar9;
    *(longlong **)(lVar10 + 0x10) = plVar9;
  }
  else {
LAB_14826d57c:
    if (param_3[2] != 0) {
      FUN_1400020a8();
    }
    if (param_3 != (longlong *)0x0) {
      FUN_1400020a8(param_3);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826d728 FUN_14826d728 body=137 status=ok
// SIG undefined FUN_14826d728(void)

void FUN_14826d728(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  
  piVar1 = *(int **)(param_2 + 0x28);
  while (piVar1 != (int *)0x0) {
    if (*piVar1 < 0) {
      FUN_14826ff3a(param_1,param_2);
    }
    else {
      if (*(longlong *)(param_1 + 0x38) != 0) {
        uVar2 = *(undefined8 *)(piVar1 + 2);
        cVar3 = FUN_14826fff8(uVar2);
        if (cVar3 != '\0') {
          FUN_14826ff3a(param_1,uVar2);
        }
        uVar2 = *(undefined8 *)(piVar1 + 4);
        cVar3 = FUN_14826fff8(uVar2);
        if (cVar3 != '\0') {
          FUN_14826ff3a(param_1,uVar2);
        }
      }
      FUN_14827003c(param_1,piVar1);
    }
    piVar1 = *(int **)(param_2 + 0x28);
  }
  return;
}



// FUNCTION 14826d7b1 FUN_14826d7b1 body=248 status=ok
// SIG undefined FUN_14826d7b1(void)

undefined8 FUN_14826d7b1(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  dVar7 = (double)(lVar1 - *param_2);
  dVar8 = (double)(lVar2 - param_2[1]);
  lVar3 = *param_3;
  lVar4 = param_3[1];
  if (0.0 <= ((double)(*param_4 - lVar1) * dVar8 - (double)(param_4[1] - lVar2) * dVar7) *
             ((double)(lVar3 - lVar1) * dVar8 - (double)(lVar4 - lVar2) * dVar7)) {
    uVar6 = 0;
  }
  else {
    dVar7 = (double)(lVar4 - param_4[1]);
    dVar8 = (double)(lVar3 - *param_4);
    lVar5 = param_2[1] - lVar4;
    uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),
                     ((double)(*param_2 - lVar3) * dVar7 - (double)lVar5 * dVar8) *
                     ((double)(lVar1 - lVar3) * dVar7 - (double)(lVar2 - lVar4) * dVar8) < 0.0);
  }
  return uVar6;
}



// FUNCTION 14826d8aa FUN_14826d8aa body=743 status=ok
// SIG undefined FUN_14826d8aa(void)

void FUN_14826d8aa(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar3 = 0.0;
  plVar6 = param_2;
  do {
    plVar7 = plVar6 + 3;
    lVar2 = *plVar6;
    plVar1 = plVar6 + 1;
    plVar6 = (longlong *)plVar6[2];
    dVar3 = dVar3 + (double)(*(longlong *)*plVar7 - lVar2) *
                    (double)(*plVar1 + ((longlong *)*plVar7)[1]);
  } while (plVar6 != param_2);
  dVar4 = 0.0;
  plVar6 = param_3;
  do {
    plVar7 = plVar6 + 3;
    lVar2 = *plVar6;
    plVar1 = plVar6 + 1;
    plVar6 = (longlong *)plVar6[2];
    dVar4 = dVar4 + (double)(*(longlong *)*plVar7 - lVar2) *
                    (double)(*plVar1 + ((longlong *)*plVar7)[1]);
  } while (plVar6 != param_3);
  dVar3 = dVar3 * 0.5;
  local_80 = param_2;
  local_78 = param_3;
  if ((dVar3 != 0.0) || (NAN(dVar3))) {
    dVar4 = dVar4 * 0.5;
    bVar5 = ~(0.0 <= dVar4 != 0.0 < dVar3);
    if (2.0 <= ABS(dVar3) || (bool)(bVar5 & 1)) {
      if (((dVar4 == 0.0) && (!NAN(dVar4))) || (bVar5 == 0 && ABS(dVar4) < 2.0)) {
        FUN_14826d2ac(param_1,&local_78);
        *(longlong **)(param_4 + 0x28) = param_2;
        goto LAB_14826d9db;
      }
      plVar7 = (longlong *)FUN_14001cc68(0x78,0x10);
      plVar7[1] = 0;
      plVar7[2] = 0;
      plVar7[3] = 0;
      plVar7[4] = 0;
      plVar7[5] = 0;
      plVar7[6] = 0;
      plVar7[7] = 0;
      plVar7[8] = 0;
      plVar7[9] = 0;
      plVar7[10] = 0;
      plVar7[0xb] = 0;
      plVar7[0xc] = 0;
      plVar7[0xd] = 0;
      plVar7[0xe] = 0;
      plVar6 = *(longlong **)(param_1 + 0xb8);
      *plVar7 = (longlong)plVar6 - *(longlong *)(param_1 + 0xb0) >> 3;
      local_88 = plVar7;
      if (plVar6 == *(longlong **)(param_1 + 0xc0)) {
        FUN_148274f04(param_1 + 0xb0,plVar6,&local_88);
      }
      else {
        *plVar6 = (longlong)plVar7;
        *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + 8;
      }
      plVar7[6] = 0;
      if (*(char *)(param_1 + 0x22) == '\x01') {
        puVar8 = *(undefined8 **)(param_4 + 0x10);
        if (puVar8 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          *(undefined8 **)(param_4 + 0x10) = puVar8;
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)puVar8[1];
          if (plVar6 != (longlong *)puVar8[2]) {
            *plVar6 = (longlong)plVar7;
            puVar8[1] = puVar8[1] + 8;
            goto LAB_14826db22;
          }
        }
        FUN_148274f04(puVar8,plVar6,&local_88);
        plVar7 = local_88;
      }
LAB_14826db22:
      plVar6 = param_3;
      if (ABS(dVar3) < ABS(dVar4)) {
        plVar6 = param_2;
        param_2 = param_3;
      }
      *(longlong **)(param_4 + 0x28) = param_2;
      plVar7[5] = (longlong)plVar6;
      if (0.0 < dVar3 != dVar4 <= 0.0) {
        param_4 = *(longlong *)(param_4 + 8);
      }
      plVar7[1] = param_4;
      do {
        plVar6[4] = (longlong)plVar7;
        plVar6 = (longlong *)plVar6[2];
      } while (plVar6 != (longlong *)plVar7[5]);
      FUN_14826cf1e(param_1,plVar7);
      goto LAB_14826d9db;
    }
  }
  FUN_14826d2ac(param_1,&local_80);
  *(longlong **)(param_4 + 0x28) = param_3;
LAB_14826d9db:
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14826db92 FUN_14826db92 body=114 status=ok
// SIG undefined FUN_14826db92(void)

longlong * FUN_14826db92(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[10];
  if (plVar1 != (longlong *)0x0) {
    do {
      if (plVar1[0xf] == param_1[0xf]) {
        return plVar1;
      }
    } while (((plVar1[3] == plVar1[1]) || ((*param_1 == *plVar1 && (param_1[1] == plVar1[1])))) &&
            (plVar1 = (longlong *)plVar1[10], plVar1 != (longlong *)0x0));
  }
  plVar1 = (longlong *)param_1[9];
  if (plVar1 != (longlong *)0x0) {
    do {
      if (plVar1[0xf] == param_1[0xf]) {
        return plVar1;
      }
    } while (((plVar1[3] == plVar1[1]) || ((*param_1 == *plVar1 && (param_1[1] == plVar1[1])))) &&
            (plVar1 = (longlong *)plVar1[9], plVar1 != (longlong *)0x0));
    return (longlong *)0x0;
  }
  return (longlong *)0x0;
}



// FUNCTION 14826dc04 FUN_14826dc04 body=303 status=ok
// SIG undefined FUN_14826dc04(void)

ulonglong FUN_14826dc04(undefined8 *param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(int *)(param_1 + 1) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x22) = param_4;
  FUN_14826b43c();
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (param_2 != 0) {
    cVar2 = FUN_14826b7d0(param_1,&local_28);
    if (cVar2 != '\0') {
      if (*(char *)((longlong)param_1 + 0x23) == '\x01') {
        uVar3 = local_28;
        do {
          (**(code **)*param_1)(param_1,uVar3);
          while (param_1[6] != 0) {
            param_1[6] = *(undefined8 *)(param_1[6] + 0x60);
            FUN_14826dd34(param_1);
          }
          if (param_1[7] != 0) {
            FUN_14826e80a(param_1);
          }
          param_1[3] = uVar3;
          cVar2 = FUN_14826b7d0(param_1,&local_28);
          uVar1 = local_28;
          if (cVar2 == '\0') break;
          cVar2 = FUN_14826f3b6(param_1,local_28);
          if (cVar2 != '\0') {
            FUN_14826f4f8(param_1);
            if (param_1[0x13] != param_1[0x14]) {
              param_1[0x14] = param_1[0x13];
            }
          }
          FUN_14826ec74(param_1,uVar1);
          while (param_1[6] != 0) {
            param_1[6] = *(undefined8 *)(param_1[6] + 0x60);
            FUN_14826dd34(param_1);
          }
          uVar3 = uVar1;
        } while (*(char *)((longlong)param_1 + 0x23) != '\0');
      }
      FUN_14826ed74(param_1);
      uVar3 = CONCAT71((int7)(uVar3 >> 8),*(undefined1 *)((longlong)param_1 + 0x23));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826dd34 FUN_14826dd34 body=2614 status=ok
// SIG undefined FUN_14826dd34(void)

void FUN_14826dd34(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_f8 [47];
  char local_c9;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  longlong lStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = param_2[1];
  cVar6 = *(char *)(param_2[0xf] + 0xc);
  if (cVar6 == '\0') {
    lVar13 = param_2[0xe];
    lVar2 = lVar13;
    if ((int)param_2[6] < 1) {
      do {
        lVar11 = lVar2;
        lVar2 = *(longlong *)(lVar11 + 0x18);
      } while (*(longlong *)(*(longlong *)(lVar11 + 0x18) + 8) == *(longlong *)(lVar13 + 8));
    }
    else {
      do {
        lVar11 = lVar2;
        lVar2 = *(longlong *)(lVar11 + 0x10);
      } while (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 8) == *(longlong *)(lVar13 + 8));
    }
    plVar7 = (longlong *)0x0;
    if (lVar11 == 0) goto LAB_14826dd82;
    local_c8 = 0;
    lVar2 = local_c8;
    if (((*(uint *)(lVar11 + 0x20) & 4) != 0) &&
       (plVar7 = (longlong *)FUN_14826b169(param_2,lVar11), lVar2 = lVar13, lVar11 != lVar13)) {
      FUN_14826fb38(param_2,*(undefined1 *)(param_1 + 0xe0));
      lVar2 = lVar11;
    }
  }
  else {
LAB_14826dd82:
    plVar7 = (longlong *)0x0;
    local_c8 = 0;
    lVar2 = local_c8;
  }
  local_c8 = lVar2;
  lVar13 = param_2[2];
  lVar2 = param_2[4];
  plVar8 = param_2;
  lVar11 = lVar2;
  if (*param_2 == lVar13) {
    do {
      plVar8 = (longlong *)plVar8[10];
      bVar5 = plVar8 != (longlong *)0x0;
      lVar13 = lVar2;
      if (plVar8 == (longlong *)0x0) break;
    } while (plVar8 != plVar7);
  }
  else {
    bVar5 = lVar2 < lVar13;
    lVar11 = lVar13;
    if (lVar13 < lVar2) {
      lVar11 = lVar2;
    }
    if (lVar2 < lVar13) {
      lVar13 = lVar2;
    }
  }
  if (param_2[8] != 0) {
    local_88 = lVar2;
    lStack_80 = lVar1;
    FUN_14826c5c6(param_2);
  }
  plVar8 = param_2 + 2;
  local_a0 = param_2 + 10;
  local_b8 = param_2 + 9;
  local_b0 = (longlong *)(param_1 + 0x28);
  local_c9 = cVar6;
  local_c0 = param_1;
  local_a8 = plVar8;
LAB_14826de95:
  if ((cVar6 != '\0') && (lVar1 = param_2[0xe], (*(uint *)(lVar1 + 0x20) & 7) == 4)) {
    lVar2 = lVar1;
    if ((int)param_2[6] < 1) {
      do {
        lVar14 = lVar2;
        lVar2 = *(longlong *)(lVar14 + 0x18);
      } while (*(longlong *)(*(longlong *)(lVar14 + 0x18) + 8) == *(longlong *)(lVar1 + 8));
    }
    else {
      do {
        lVar14 = lVar2;
        lVar2 = *(longlong *)(lVar14 + 0x10);
      } while (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 8) == *(longlong *)(lVar1 + 8));
    }
    if (lVar14 == 0) {
      local_c8 = 0;
    }
    else {
      local_c8 = 0;
      if ((*(uint *)(lVar14 + 0x20) & 4) != 0) {
        plVar7 = (longlong *)FUN_14826b169(param_2,lVar14);
        local_c8 = lVar14;
      }
    }
  }
  plVar10 = local_b8;
  if (bVar5) {
    plVar10 = local_a0;
  }
  plVar10 = (longlong *)*plVar10;
  cVar6 = local_c9;
  lVar1 = local_c0;
  lVar2 = local_90;
  while (local_90 = lVar13, local_c9 = cVar6, local_c0 = lVar1, plVar10 != (longlong *)0x0) {
    if (plVar10 == plVar7) {
      if (param_2[8] != 0) {
        while (param_2[0xe] != plVar10[0xe]) {
          FUN_14826c5c6(param_2,plVar8);
          FUN_14826fbe6(lVar1,param_2);
        }
        plVar8 = (longlong *)FUN_14826cdda(lVar1,param_2,plVar10,plVar8);
        if ((((plVar8 != (longlong *)0x0) && (*(char *)(param_2[0xf] + 0xc) == '\0')) &&
            (*plVar8 == param_2[2])) && (plVar8[1] == param_2[3])) {
          FUN_14826fcf0(lVar1,plVar8);
        }
      }
      lVar1 = plVar10[9];
      lVar13 = plVar10[10];
      if (lVar1 == 0 && lVar13 == 0) {
        if ((longlong *)*local_b0 != plVar7) goto LAB_14826e4b6;
        *local_b0 = 0;
      }
      else {
        plVar7 = local_b0;
        if (lVar1 != 0) {
          plVar7 = (longlong *)(lVar1 + 0x50);
        }
        *plVar7 = lVar13;
        if (lVar13 != 0) {
          *(longlong *)(lVar13 + 0x48) = lVar1;
        }
      }
      FUN_1400020a8(plVar10);
      goto LAB_14826e4b6;
    }
    lVar13 = param_2[0xe];
    if ((local_c8 == lVar13) && ((*(byte *)(lVar13 + 0x20) & 3) == 0)) {
      lVar14 = plVar10[4];
LAB_14826e1b8:
      lVar13 = param_2[1];
      if (bVar5) goto LAB_14826e014;
LAB_14826e107:
      local_88 = lVar14;
      lStack_80 = lVar13;
      plVar8 = (longlong *)FUN_14826c75a(lVar1,plVar10,param_2,&local_88);
      lVar1 = param_2[10];
      if (lVar1 != 0) {
        *(longlong **)(lVar1 + 0x48) = plVar10;
      }
      lVar2 = plVar10[9];
      if (lVar2 != 0) {
        *(longlong **)(lVar2 + 0x50) = param_2;
      }
      param_2[9] = lVar2;
      param_2[10] = (longlong)plVar10;
      plVar10[9] = (longlong)param_2;
      plVar10[10] = lVar1;
      if (param_2[9] == 0) {
        *local_b0 = (longlong)param_2;
      }
      if (((plVar8 != (longlong *)0x0) && (param_2[8] != 0)) &&
         ((*(char *)(param_2[0xf] + 0xc) == '\0' && ((*plVar8 == lVar14 && (plVar8[1] == lVar13)))))
         ) {
        FUN_14826fcf0(local_c0,plVar8);
      }
      plVar9 = local_b8;
      plVar8 = local_a8;
      if ((plVar10[3] != plVar10[1]) &&
         (cVar6 = FUN_14826cc33(plVar10), plVar8 = local_a8, plVar9 = local_b8, cVar6 != '\0')) {
        local_98 = FUN_14826c5c6(plVar10,&local_88);
        uVar12 = FUN_14826c5c6(plVar10[10],&local_88);
        FUN_14826c660(local_c0,local_98,uVar12);
        plVar9 = local_b8;
      }
    }
    else {
      lVar14 = plVar10[4];
      lVar2 = local_90;
      if (bVar5) {
        if (lVar11 < lVar14) break;
      }
      else if (lVar14 < local_90) break;
      if (lVar14 != *plVar8) goto LAB_14826e1b8;
      lVar3 = plVar10[1];
      lVar4 = plVar10[3];
      if (lVar4 == lVar3) goto LAB_14826e1b8;
      plVar9 = *(longlong **)(lVar13 + 0x10 + (ulonglong)((int)param_2[6] < 1) * 8);
      local_88 = *plVar9;
      lStack_80 = plVar9[1];
      lVar13 = plVar10[0xf];
      if (!bVar5) {
        if (((*(char *)(lVar13 + 0xc) == '\0') ||
            (*(int *)(lVar13 + 8) == *(int *)(param_2[0xf] + 8))) || (plVar10[8] != 0)) {
          lVar13 = plVar10[2];
          if (((lVar4 != lStack_80) && (lVar4 = *plVar10, lVar13 != lVar4)) &&
             (lVar13 = lVar4, lStack_80 - lVar3 != 0)) {
            dVar15 = (double)(lStack_80 - lVar3) * (double)plVar10[5];
            auVar17._0_8_ =
                 (double)((ulonglong)dVar15 & 0x8000000000000000 | 0x3fdfffffffffffff) + dVar15;
            auVar17._8_8_ = 0x3fdfffffffffffff;
            auVar16 = roundsd(ZEXT816(0),auVar17,0xb);
            lVar13 = lVar4 + (longlong)auVar16._0_8_;
          }
          if (lVar13 <= local_88) break;
        }
        else {
          lVar13 = plVar10[2];
          if (((lVar4 != lStack_80) && (lVar4 = *plVar10, lVar13 != lVar4)) &&
             (lVar13 = lVar4, lStack_80 - lVar3 != 0)) {
            dVar15 = (double)(lStack_80 - lVar3) * (double)plVar10[5];
            auVar19._0_8_ =
                 (double)((ulonglong)dVar15 & 0x8000000000000000 | 0x3fdfffffffffffff) + dVar15;
            auVar19._8_8_ = 0x3fdfffffffffffff;
            auVar16 = roundsd(ZEXT816(0),auVar19,0xb);
            lVar13 = lVar4 + (longlong)auVar16._0_8_;
          }
          if (lVar13 < local_88) break;
        }
        lVar13 = param_2[1];
        goto LAB_14826e107;
      }
      if (((*(char *)(lVar13 + 0xc) == '\0') || (*(int *)(lVar13 + 8) == *(int *)(param_2[0xf] + 8))
          ) || (plVar10[8] != 0)) {
        lVar13 = plVar10[2];
        if (((lVar4 != lStack_80) && (lVar4 = *plVar10, lVar13 != lVar4)) &&
           (lVar13 = lVar4, lStack_80 - lVar3 != 0)) {
          dVar15 = (double)(lStack_80 - lVar3) * (double)plVar10[5];
          auVar16._0_8_ =
               (double)((ulonglong)dVar15 & 0x8000000000000000 | 0x3fdfffffffffffff) + dVar15;
          auVar16._8_8_ = 0x3fdfffffffffffff;
          auVar16 = roundsd(ZEXT816(0),auVar16,0xb);
          lVar13 = lVar4 + (longlong)auVar16._0_8_;
        }
        if (local_88 <= lVar13) break;
      }
      else {
        lVar13 = plVar10[2];
        if (((lVar4 != lStack_80) && (lVar4 = *plVar10, lVar13 != lVar4)) &&
           (lVar13 = lVar4, lStack_80 - lVar3 != 0)) {
          dVar15 = (double)(lStack_80 - lVar3) * (double)plVar10[5];
          auVar18._0_8_ =
               (double)((ulonglong)dVar15 & 0x8000000000000000 | 0x3fdfffffffffffff) + dVar15;
          auVar18._8_8_ = 0x3fdfffffffffffff;
          auVar16 = roundsd(ZEXT816(0),auVar18,0xb);
          lVar13 = lVar4 + (longlong)auVar16._0_8_;
        }
        if (local_88 < lVar13) break;
      }
      lVar13 = param_2[1];
LAB_14826e014:
      local_88 = lVar14;
      lStack_80 = lVar13;
      plVar8 = (longlong *)FUN_14826c75a(lVar1,param_2,plVar10,&local_88);
      lVar1 = plVar10[10];
      if (lVar1 != 0) {
        *(longlong **)(lVar1 + 0x48) = param_2;
      }
      lVar2 = *local_b8;
      if (lVar2 != 0) {
        *(longlong **)(lVar2 + 0x50) = plVar10;
      }
      plVar10[9] = lVar2;
      plVar10[10] = (longlong)param_2;
      param_2[9] = (longlong)plVar10;
      param_2[10] = lVar1;
      if (plVar10[9] == 0) {
        *local_b0 = (longlong)plVar10;
      }
      if ((((plVar8 != (longlong *)0x0) && (param_2[8] != 0)) &&
          (*(char *)(param_2[0xf] + 0xc) == '\0')) && ((*plVar8 == lVar14 && (plVar8[1] == lVar13)))
         ) {
        FUN_14826fcf0(local_c0,plVar8);
      }
      plVar9 = local_a0;
      plVar8 = local_a8;
      if ((plVar10[3] != plVar10[1]) &&
         (cVar6 = FUN_14826c53a(plVar10), plVar8 = local_a8, plVar9 = local_a0, cVar6 != '\0')) {
        local_98 = FUN_14826c5c6(plVar10[9],&local_88);
        uVar12 = FUN_14826c5c6(plVar10,&local_88);
        FUN_14826c660(local_c0,local_98,uVar12);
        plVar9 = local_a0;
      }
    }
    param_2[4] = plVar10[4];
    lVar13 = local_90;
    cVar6 = local_c9;
    lVar1 = local_c0;
    lVar2 = local_90;
    plVar10 = (longlong *)*plVar9;
  }
  local_90 = lVar2;
  if ((cVar6 != '\0') && ((*(byte *)(param_2[0xe] + 0x20) & 3) != 0)) {
    if (param_2[8] != 0) {
      FUN_14826c5c6(param_2);
      *(undefined8 *)
       (param_2[8] + 0x18 + (ulonglong)(*(longlong **)(param_2[8] + 0x18) != param_2) * 8) = 0;
      param_2[8] = 0;
    }
    goto LAB_14826e4b6;
  }
  if (*(longlong *)(*(longlong *)(param_2[0xe] + 0x10 + (ulonglong)((int)param_2[6] < 1) * 8) + 8)
      == param_2[3]) {
    if (param_2[8] != 0) {
      FUN_14826c5c6(param_2,plVar8);
    }
    FUN_14826fbe6(lVar1,param_2);
    if ((((cVar6 == '\0') && (*(char *)(lVar1 + 0xe0) != '\0')) &&
        (plVar10 = *(longlong **)(param_2[0xe] + 0x10 + (ulonglong)((int)param_2[6] < 1) * 8),
        plVar10[1] == param_2[1])) && (*param_2 < param_2[2] != param_2[2] < *plVar10)) {
      FUN_14826fb38(param_2,1);
    }
    lVar13 = param_2[2];
    lVar1 = param_2[4];
    plVar10 = param_2;
    lVar11 = lVar1;
    if (*param_2 == lVar13) {
      do {
        plVar10 = (longlong *)plVar10[10];
        bVar5 = plVar10 != (longlong *)0x0;
        lVar13 = lVar1;
        if (plVar10 == (longlong *)0x0) break;
      } while (plVar10 != plVar7);
    }
    else {
      lVar11 = lVar13;
      if (lVar13 < lVar1) {
        lVar11 = lVar1;
      }
      bVar5 = lVar1 < lVar13;
      if (lVar1 < lVar13) {
        lVar13 = lVar1;
      }
    }
    goto LAB_14826de95;
  }
  if ((param_2[8] != 0) &&
     (uVar12 = FUN_14826c5c6(param_2,plVar8), *(char *)(param_2[0xf] + 0xc) == '\0')) {
    FUN_14826fcf0(lVar1,uVar12);
  }
  if (cVar6 == '\0') {
    if (local_c8 != param_2[0xe]) goto LAB_14826e52b;
  }
  else if ((*(byte *)(param_2[0xe] + 0x20) & 3) == 0) {
LAB_14826e52b:
    FUN_14826fbe6(lVar1,param_2);
    if (*(char *)(param_2[0xf] + 0xc) == '\0') {
      if (bVar5) {
        cVar6 = FUN_14826cc33();
        if (cVar6 != '\0') {
          FUN_14826c5c6(param_2[10],param_2);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_f8);
        }
      }
      else {
        cVar6 = FUN_14826c53a(param_2);
        if (cVar6 != '\0') {
          FUN_14826c5c6(param_2[9],param_2);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_f8);
        }
      }
    }
    if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (param_2[8] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_f8);
  }
  FUN_14826b312(lVar1,plVar7);
LAB_14826e4b6:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_f8);
}



// FUNCTION 14826e80a FUN_14826e80a body=1128 status=ok
// SIG undefined FUN_14826e80a(void)

void FUN_14826e80a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  char cVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  longlong lVar5;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar13 = *(longlong *)(param_1 + 0x38);
  if (lVar13 != 0) {
    local_70 = param_1;
    do {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar13 + 0x28);
      local_50 = *(longlong **)(lVar13 + 8);
      lVar16 = local_50[5];
      if (local_50[5] == lVar13) {
        plVar14 = local_50 + 5;
      }
      else {
        do {
          while (lVar17 = lVar16, *(longlong **)(lVar17 + 8) == local_50) {
            lVar16 = *(longlong *)(lVar17 + 0x18);
            if (*(longlong *)(lVar17 + 0x18) == lVar13) {
              plVar14 = (longlong *)(lVar17 + 0x18);
              goto LAB_14826e88d;
            }
          }
          lVar16 = *(longlong *)(lVar17 + 0x20);
        } while (*(longlong *)(lVar17 + 0x20) != lVar13);
        plVar14 = (longlong *)(lVar17 + 0x20);
      }
LAB_14826e88d:
      *plVar14 = *(longlong *)(lVar13 + 0x18);
      FUN_1400020a8();
      cVar11 = FUN_1482700e2(&local_50,&local_58);
      plVar15 = local_50;
      plVar14 = local_58;
      if (cVar11 == '\0') {
        lVar13 = local_50[4];
      }
      else {
        lVar13 = *(longlong *)(param_1 + 0x38);
        if (lVar13 != 0) {
LAB_14826e8c7:
          local_60 = *(longlong **)(lVar13 + 8);
          cVar11 = FUN_1482700e2(&local_60,&local_68);
          plVar10 = local_60;
          plVar9 = local_68;
          lVar16 = local_70;
          if (cVar11 != '\0') {
            lVar17 = *local_68;
            lVar1 = *local_60;
            lVar2 = *plVar14;
            lVar3 = *plVar15;
            if (lVar2 + 2 < lVar3) {
              if (lVar17 + 2 < lVar1) {
                lVar6 = lVar1 - lVar2;
                lVar4 = lVar1;
                lVar5 = lVar17;
              }
              else {
                lVar6 = lVar17 - lVar2;
                lVar4 = lVar17;
                lVar5 = lVar1;
              }
              if ((lVar4 != lVar2 && SBORROW8(lVar4,lVar2) == lVar6 < 0) && lVar5 < lVar3)
              goto LAB_14826e977;
            }
            else if (lVar3 + 2 < lVar2) {
              if (lVar17 + 2 < lVar1) {
                if (lVar17 < lVar2 && lVar3 < lVar1) {
LAB_14826e977:
                  plVar12 = local_68;
                  if (plVar15[1] == local_68[1] && lVar3 == lVar17) {
LAB_14826eaad:
                    FUN_14826c660(param_1,plVar15,plVar12);
                    lVar16 = param_1;
                    goto LAB_14826ea7f;
                  }
                  plVar12 = local_60;
                  if (plVar14[1] != local_60[1] || lVar2 != lVar1) {
                    if (plVar15[1] == local_60[1] && lVar3 == lVar1) {
                      FUN_14826c660(local_70,plVar15,local_60);
                      goto LAB_14826ea7f;
                    }
                    plVar12 = local_68;
                    if (plVar14[1] != local_68[1] || lVar2 != lVar17) {
                      if (((lVar3 != lVar1) != (lVar3 == lVar17)) &&
                         (lVar1 < lVar3 != lVar17 <= lVar3)) {
                        plVar12 = (longlong *)FUN_14001cc68(0x30,0x10);
                        lVar13 = plVar10[4];
                        uVar7 = *(undefined4 *)((longlong)plVar15 + 4);
                        lVar16 = plVar15[1];
                        uVar8 = *(undefined4 *)((longlong)plVar15 + 0xc);
                        *(int *)plVar12 = (int)*plVar15;
                        *(undefined4 *)((longlong)plVar12 + 4) = uVar7;
                        *(int *)(plVar12 + 1) = (int)lVar16;
                        *(undefined4 *)((longlong)plVar12 + 0xc) = uVar8;
                        plVar12[4] = lVar13;
                        plVar12[5] = 0;
                        plVar12[2] = (longlong)plVar12;
                        plVar12[3] = (longlong)plVar12;
                        lVar13 = plVar10[2];
                        plVar12[2] = lVar13;
                        *(longlong **)(lVar13 + 0x18) = plVar12;
                        plVar10[2] = (longlong)plVar12;
                        plVar12[3] = (longlong)plVar10;
                        param_1 = local_70;
                        goto LAB_14826eaad;
                      }
                      param_1 = lVar16;
                      if (((lVar2 != lVar1) == (lVar2 == lVar17)) ||
                         (lVar1 < lVar2 == lVar17 <= lVar2)) {
                        if (((lVar2 == lVar1) == (lVar3 != lVar1)) ||
                           (lVar2 <= lVar1 == lVar3 < lVar1)) {
                          if (((lVar2 == lVar17) == (lVar17 != lVar3)) ||
                             (lVar2 <= lVar17 == lVar3 < lVar17)) goto LAB_14826ea7f;
                          plVar12 = (longlong *)FUN_14001cc68(0x30,0x10);
                          lVar13 = plVar15[4];
                          uVar7 = *(undefined4 *)((longlong)plVar9 + 4);
                          lVar16 = plVar9[1];
                          uVar8 = *(undefined4 *)((longlong)plVar9 + 0xc);
                          *(int *)plVar12 = (int)*plVar9;
                          *(undefined4 *)((longlong)plVar12 + 4) = uVar7;
                          *(int *)(plVar12 + 1) = (int)lVar16;
                          *(undefined4 *)((longlong)plVar12 + 0xc) = uVar8;
                          plVar12[4] = lVar13;
                          plVar12[5] = 0;
                          plVar12[2] = (longlong)plVar12;
                          plVar12[3] = (longlong)plVar12;
                          lVar13 = plVar15[2];
                          plVar12[2] = lVar13;
                          *(longlong **)(lVar13 + 0x18) = plVar12;
                          plVar15[2] = (longlong)plVar12;
                          plVar12[3] = (longlong)plVar15;
                          plVar15 = plVar9;
                        }
                        else {
                          plVar12 = (longlong *)FUN_14001cc68(0x30,0x10);
                          lVar13 = plVar15[4];
                          uVar7 = *(undefined4 *)((longlong)plVar10 + 4);
                          lVar16 = plVar10[1];
                          uVar8 = *(undefined4 *)((longlong)plVar10 + 0xc);
                          *(int *)plVar12 = (int)*plVar10;
                          *(undefined4 *)((longlong)plVar12 + 4) = uVar7;
                          *(int *)(plVar12 + 1) = (int)lVar16;
                          *(undefined4 *)((longlong)plVar12 + 0xc) = uVar8;
                          plVar12[4] = lVar13;
                          plVar12[5] = 0;
                          plVar12[2] = (longlong)plVar12;
                          plVar12[3] = (longlong)plVar12;
                          lVar13 = plVar15[2];
                          plVar12[2] = lVar13;
                          *(longlong **)(lVar13 + 0x18) = plVar12;
                          plVar15[2] = (longlong)plVar12;
                          plVar12[3] = (longlong)plVar15;
                          plVar15 = plVar10;
                        }
                      }
                      else {
                        plVar12 = (longlong *)FUN_14001cc68(0x30,0x10);
                        lVar13 = plVar10[4];
                        uVar7 = *(undefined4 *)((longlong)plVar14 + 4);
                        lVar16 = plVar14[1];
                        uVar8 = *(undefined4 *)((longlong)plVar14 + 0xc);
                        *(int *)plVar12 = (int)*plVar14;
                        *(undefined4 *)((longlong)plVar12 + 4) = uVar7;
                        *(int *)(plVar12 + 1) = (int)lVar16;
                        *(undefined4 *)((longlong)plVar12 + 0xc) = uVar8;
                        plVar12[4] = lVar13;
                        plVar12[5] = 0;
                        plVar12[2] = (longlong)plVar12;
                        plVar12[3] = (longlong)plVar12;
                        lVar13 = plVar10[2];
                        plVar12[2] = lVar13;
                        *(longlong **)(lVar13 + 0x18) = plVar12;
                        plVar10[2] = (longlong)plVar12;
                        plVar12[3] = (longlong)plVar10;
                        plVar15 = plVar14;
                      }
                      goto LAB_14826eaad;
                    }
                  }
                  FUN_14826c660(local_70,plVar14,plVar12);
                  goto LAB_14826ea7f;
                }
              }
              else if (lVar3 < lVar17 && lVar1 < lVar2) goto LAB_14826e977;
            }
          }
          lVar13 = *(longlong *)(lVar13 + 0x28);
          if (lVar13 == 0) goto LAB_14826ea8e;
          goto LAB_14826e8c7;
        }
LAB_14826ea8e:
        lVar13 = plVar15[4];
      }
      FUN_14826cf1e(param_1,lVar13);
      lVar16 = param_1;
LAB_14826ea7f:
      lVar13 = *(longlong *)(lVar16 + 0x38);
      param_1 = lVar16;
    } while (lVar13 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14826ec74 FUN_14826ec74 body=255 status=ok
// SIG undefined FUN_14826ec74(void)

void FUN_14826ec74(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  plVar3 = *(longlong **)(param_1 + 0x28);
  do {
    while( true ) {
      if (plVar3 == (longlong *)0x0) {
        return;
      }
      lVar2 = plVar3[2];
      if (plVar3[3] == param_2) break;
      lVar1 = *plVar3;
      if ((lVar2 != lVar1) && (lVar2 = lVar1, param_2 - plVar3[1] != 0)) {
        dVar4 = (double)(param_2 - plVar3[1]) * (double)plVar3[5];
        auVar5._0_8_ = (double)((ulonglong)dVar4 & 0x8000000000000000 | 0x3fdfffffffffffff) + dVar4;
        auVar5._8_8_ = 0x3fdfffffffffffff;
        auVar5 = roundsd(ZEXT816(0),auVar5,0xb);
        lVar2 = lVar1 + (longlong)auVar5._0_8_;
      }
      plVar3[4] = lVar2;
LAB_14826ed02:
      plVar3 = (longlong *)plVar3[10];
    }
    plVar3[4] = lVar2;
    if ((*(byte *)(plVar3[0xe] + 0x20) & 4) == 0) {
      if (plVar3[8] != 0) {
        FUN_14826c5c6(plVar3,plVar3 + 2);
      }
      FUN_14826fbe6(param_1,plVar3);
      if (plVar3[3] == plVar3[1]) {
        plVar3[0xc] = *(longlong *)(param_1 + 0x30);
        *(longlong **)(param_1 + 0x30) = plVar3;
      }
      goto LAB_14826ed02;
    }
    plVar3 = (longlong *)FUN_14826fd56(param_1,plVar3);
  } while( true );
}



// FUNCTION 14826ed74 FUN_14826ed74 body=114 status=ok
// SIG undefined FUN_14826ed74(void)

void FUN_14826ed74(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 200);
  plVar1 = *(longlong **)(param_1 + 0xd0);
  if (plVar3 != plVar1) {
    do {
      if (*plVar3 != 0) {
        if (*(char *)(param_1 + 0x23) == '\0') {
          FUN_1400020a8(*plVar3);
        }
        else {
          uVar2 = FUN_1482701e4(param_1);
          FUN_14826cf1e(param_1,uVar2);
        }
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    if (*(longlong *)(param_1 + 0xd0) != *(longlong *)(param_1 + 200)) {
      *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_1 + 200);
    }
  }
  return;
}



// FUNCTION 14826ede6 FUN_14826ede6 body=108 status=ok
// SIG undefined FUN_14826ede6(void)

void FUN_14826ede6(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = *param_3;
  lVar1 = param_3[1];
  if (lVar3 != lVar1) {
    do {
      FUN_148274782(lVar3);
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != lVar1);
    param_3[1] = *param_3;
  }
  cVar2 = FUN_14826dc04(param_1,2,param_2,0);
  if (cVar2 != '\0') {
    FUN_14826ee52(param_1,param_3);
  }
  FUN_14826b252(param_1);
  return;
}



// FUNCTION 14826ee52 FUN_14826ee52 body=244 status=ok
// SIG undefined FUN_14826ee52(void)

void FUN_14826ee52(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar5 = lVar1;
  if (lVar2 != lVar1) {
    do {
      FUN_148274782(lVar5);
      lVar5 = lVar5 + 0x18;
    } while (lVar5 != lVar2);
    param_2[1] = lVar1;
  }
  FUN_1482711a8(param_2,*(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) >> 3);
  plVar6 = *(longlong **)(param_1 + 0xb0);
  plVar3 = *(longlong **)(param_1 + 0xb8);
  if (plVar6 != plVar3) {
    do {
      if (*(longlong *)(*plVar6 + 0x28) != 0) {
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        cVar4 = FUN_148271082(*(longlong *)(*plVar6 + 0x28),*(undefined1 *)(param_1 + 0xe1),0,
                              &local_58);
        if (cVar4 != '\0') {
          FUN_1482761b2(param_2,&local_58);
        }
        FUN_148274782(&local_58);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14826ef48 FUN_14826ef48 body=104 status=ok
// SIG undefined FUN_14826ef48(void)

void FUN_14826ef48(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != plVar1) {
    do {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        FUN_14826ef48(lVar2);
        FUN_14827a04a(lVar2 + 0x20);
        FUN_148274782(lVar2 + 8);
        FUN_1400020a8(lVar2);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    if (*(longlong *)(param_1 + 0x28) != *(longlong *)(param_1 + 0x20)) {
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20);
    }
  }
  return;
}



// FUNCTION 14826efb0 FUN_14826efb0 body=900 status=ok
// SIG undefined FUN_14826efb0(void)

void FUN_14826efb0(longlong param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStack_98 [32];
  ulonglong local_78 [7];
  
  local_78[3] = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14826ef48(param_2);
  lVar1 = *param_3;
  lVar2 = param_3[1];
  lVar15 = lVar1;
  if (lVar2 != lVar1) {
    do {
      FUN_148274782(lVar15);
      lVar15 = lVar15 + 0x18;
    } while (lVar15 != lVar2);
    param_3[1] = lVar1;
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1482711a8(param_3,*(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) >> 3);
  }
  plVar14 = *(longlong **)(param_1 + 0xb0);
  plVar3 = *(longlong **)(param_1 + 0xb8);
  if (plVar14 == plVar3) {
LAB_14826f149:
    if ((local_78[3] ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
LAB_14826f032:
  puVar13 = (ulonglong *)*plVar14;
  if ((puVar13 != (ulonglong *)0x0) && (puVar13[5] != 0)) {
    if ((char)puVar13[0xe] == '\x01') {
      local_78[0] = 0;
      local_78[1] = 0;
      local_78[2] = 0;
      cVar6 = FUN_148271082(puVar13[5],*(undefined1 *)(param_1 + 0xe1),1,local_78);
      if (cVar6 != '\0') {
        FUN_1482744da(param_3,local_78);
      }
      FUN_148274782(local_78);
      goto LAB_14826f044;
    }
    cVar6 = FUN_148271082();
    if (cVar6 == '\0') goto LAB_14826f044;
    if (((longlong)puVar13[10] <= (longlong)puVar13[8]) ||
       ((longlong)puVar13[9] <= (longlong)puVar13[7])) {
      puVar12 = (ulonglong *)puVar13[0xb];
      uVar7 = DAT_14cb466c0;
      uVar8 = DAT_14cb466b8;
      uVar9 = DAT_14cb466b0;
      uVar10 = DAT_14cb466a8;
      if (puVar12 == (ulonglong *)puVar13[0xc]) {
        uVar7 = 0;
        uVar8 = 0;
        uVar9 = 0;
        uVar10 = 0;
      }
      else {
        do {
          uVar11 = *puVar12;
          if ((longlong)uVar11 < (longlong)uVar10) {
            uVar10 = uVar11;
          }
          uVar4 = puVar12[1];
          if ((longlong)uVar8 < (longlong)uVar11) {
            uVar8 = uVar11;
          }
          if ((longlong)uVar4 < (longlong)uVar9) {
            uVar9 = uVar4;
          }
          if ((longlong)uVar7 < (longlong)uVar4) {
            uVar7 = uVar4;
          }
          puVar12 = puVar12 + 2;
        } while (puVar12 != (ulonglong *)puVar13[0xc]);
      }
      puVar13[7] = uVar10;
      puVar13[8] = uVar9;
      puVar13[9] = uVar8;
      puVar13[10] = uVar7;
    }
    for (uVar7 = puVar13[1]; uVar8 = param_2, uVar7 != 0; uVar7 = *(ulonglong *)(uVar7 + 8)) {
      if (*(longlong *)(uVar7 + 0x28) != 0) {
        puVar13[1] = uVar7;
        FUN_14827121c(param_1,puVar13);
        puVar12 = (ulonglong *)puVar13[1];
        if (puVar12 == (ulonglong *)0x0) goto LAB_14826f1e3;
        if (*puVar12 <= *puVar13) goto LAB_14826f303;
        *(ulonglong **)(*(longlong *)(param_1 + 0xb0) + *puVar12 * 8) = puVar13;
        *(ulonglong **)(*(longlong *)(param_1 + 0xb0) + *puVar13 * 8) = puVar12;
        uVar7 = *puVar13;
        *puVar13 = *puVar12;
        *puVar12 = uVar7;
        uVar7 = puVar12[1];
        goto LAB_14826f12f;
      }
    }
    puVar13[1] = 0;
    goto LAB_14826f1e3;
  }
  goto LAB_14826f044;
LAB_14826f12f:
  if (uVar7 == 0) goto LAB_14826f26c;
  if (*(longlong *)(uVar7 + 0x28) != 0) goto LAB_14826f26e;
  uVar7 = *(ulonglong *)(uVar7 + 8);
  goto LAB_14826f12f;
LAB_14826f26c:
  uVar7 = 0;
LAB_14826f26e:
  puVar12[1] = uVar7;
  FUN_148271082();
  if (((longlong)puVar12[10] <= (longlong)puVar12[8]) ||
     ((longlong)puVar12[9] <= (longlong)puVar12[7])) {
    puVar13 = (ulonglong *)puVar12[0xb];
    uVar7 = DAT_14cb466c0;
    uVar9 = DAT_14cb466b8;
    uVar10 = DAT_14cb466b0;
    uVar11 = DAT_14cb466a8;
    if (puVar13 == (ulonglong *)puVar12[0xc]) {
      uVar7 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
    }
    else {
      do {
        uVar4 = *puVar13;
        if ((longlong)uVar4 < (longlong)uVar11) {
          uVar11 = uVar4;
        }
        uVar5 = puVar13[1];
        if ((longlong)uVar9 < (longlong)uVar4) {
          uVar9 = uVar4;
        }
        if ((longlong)uVar5 < (longlong)uVar10) {
          uVar10 = uVar5;
        }
        if ((longlong)uVar7 < (longlong)uVar5) {
          uVar7 = uVar5;
        }
        puVar13 = puVar13 + 2;
      } while (puVar13 != (ulonglong *)puVar12[0xc]);
    }
    puVar12[7] = uVar11;
    puVar12[8] = uVar10;
    puVar12[9] = uVar9;
    puVar12[10] = uVar7;
  }
  puVar13 = puVar12;
  if (puVar12[1] != 0) {
    FUN_14827121c(param_1,puVar12);
    puVar12 = (ulonglong *)puVar12[1];
    if (puVar12 != (ulonglong *)0x0) {
LAB_14826f303:
      uVar8 = puVar12[6];
      if (puVar12[6] == 0) {
        uVar8 = param_2;
      }
    }
  }
LAB_14826f1e3:
  uVar7 = FUN_148271596(uVar8,puVar13 + 0xb);
  puVar13[6] = uVar7;
LAB_14826f044:
  plVar14 = plVar14 + 1;
  if (plVar14 == plVar3) goto LAB_14826f149;
  goto LAB_14826f032;
}



// FUNCTION 14826f336 FUN_14826f336 body=128 status=ok
// SIG undefined FUN_14826f336(void)

undefined1 FUN_14826f336(longlong param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  FUN_14826ef48(param_3);
  lVar3 = *param_4;
  lVar1 = param_4[1];
  if (lVar3 != lVar1) {
    do {
      FUN_148274782(lVar3);
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != lVar1);
    param_4[1] = *param_4;
  }
  cVar2 = FUN_14826dc04(param_1,param_2,1,1);
  if (cVar2 != '\0') {
    FUN_14826efb0(param_1,param_3,param_4);
  }
  FUN_14826b252(param_1);
  return *(undefined1 *)(param_1 + 0x23);
}



// FUNCTION 14826f3b6 FUN_14826f3b6 body=322 status=ok
// SIG undefined FUN_14826f3b6(void)

undefined8 FUN_14826f3b6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((*(longlong *)(param_1 + 0x28) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x50) == 0)) {
    return 0;
  }
  FUN_14826f8a4();
  do {
    lVar5 = *(longlong *)(param_1 + 0x30);
    if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x68) == 0)) {
      return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0xa0) >> 8),
                      *(longlong *)(param_1 + 0xa0) != *(longlong *)(param_1 + 0x98));
    }
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar5 + 0x68);
      if (lVar3 == 0) break;
      lVar1 = *(longlong *)(lVar3 + 0x68);
      *(longlong *)(lVar5 + 0x68) = lVar1;
      lVar4 = lVar3;
      lVar7 = lVar5;
      if (lVar3 != lVar1 && lVar5 != lVar3) {
        do {
          lVar2 = lVar4;
          if (*(longlong *)(lVar4 + 0x20) < *(longlong *)(lVar5 + 0x20)) {
            do {
              lVar2 = *(longlong *)(lVar2 + 0x58);
              FUN_14826f6a0(param_1,lVar2,lVar4,param_2);
            } while (lVar2 != lVar5);
            lVar3 = *(longlong *)(lVar4 + 0x58);
            lVar2 = *(longlong *)(lVar4 + 0x60);
            if (lVar2 != 0) {
              *(longlong *)(lVar2 + 0x58) = lVar3;
            }
            *(longlong *)(lVar3 + 0x60) = lVar2;
            lVar3 = *(longlong *)(lVar5 + 0x58);
            *(longlong *)(lVar4 + 0x58) = lVar3;
            if (lVar3 != 0) {
              *(longlong *)(lVar3 + 0x60) = lVar4;
            }
            *(longlong *)(lVar4 + 0x60) = lVar5;
            *(longlong *)(lVar5 + 0x58) = lVar4;
            lVar3 = lVar2;
            if (lVar5 == lVar7) {
              *(longlong *)(lVar4 + 0x68) = lVar1;
              lVar7 = lVar4;
              if (lVar6 == 0) {
                *(longlong *)(param_1 + 0x30) = lVar4;
              }
              else {
                *(longlong *)(lVar6 + 0x68) = lVar4;
              }
            }
          }
          else {
            lVar5 = *(longlong *)(lVar5 + 0x60);
          }
        } while ((lVar5 != lVar3) && (lVar4 = lVar2, lVar2 != lVar1));
      }
      lVar6 = lVar7;
      lVar5 = lVar1;
    } while (lVar1 != 0);
  } while( true );
}



// FUNCTION 14826f4f8 FUN_14826f4f8 body=423 status=ok
// SIG undefined FUN_14826f4f8(void)

void FUN_14826f4f8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14827515a(*(longlong *)(param_1 + 0x98),*(longlong *)(param_1 + 0xa0),
                *(longlong *)(param_1 + 0xa0) - *(longlong *)(param_1 + 0x98) >> 5);
  puVar14 = *(undefined8 **)(param_1 + 0x98);
  puVar3 = puVar14;
  if (puVar14 != *(undefined8 **)(param_1 + 0xa0)) {
    do {
      lVar10 = puVar14[2];
      lVar11 = puVar14[3];
      if ((*(longlong *)(lVar10 + 0x50) != lVar11) &&
         (puVar8 = puVar3 + 4, *(longlong *)(lVar10 + 0x48) != lVar11)) {
        do {
          puVar13 = puVar8;
          if (*(longlong *)(puVar13[2] + 0x50) == puVar13[3]) break;
          puVar8 = puVar13 + 4;
        } while (*(longlong *)(puVar13[2] + 0x48) != puVar13[3]);
        uVar12 = *puVar14;
        uVar4 = puVar14[1];
        local_38 = puVar14[2];
        uStack_30 = puVar14[3];
        uVar5 = *puVar13;
        uVar6 = puVar13[1];
        uVar7 = puVar13[3];
        puVar14[2] = puVar13[2];
        puVar14[3] = uVar7;
        *puVar14 = uVar5;
        puVar14[1] = uVar6;
        local_48._0_4_ = (undefined4)uVar12;
        local_48._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
        uStack_40._0_4_ = (undefined4)uVar4;
        uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
        puVar13[2] = local_38;
        puVar13[3] = uStack_30;
        *(undefined4 *)puVar13 = (undefined4)local_48;
        *(undefined4 *)((longlong)puVar13 + 4) = local_48._4_4_;
        *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_40._4_4_;
        lVar10 = puVar14[2];
        lVar11 = puVar14[3];
        local_48 = uVar12;
        uStack_40 = uVar4;
      }
      FUN_14826c75a(param_1,lVar10,lVar11,puVar14);
      lVar10 = puVar14[2];
      lVar11 = puVar14[3];
      lVar1 = *(longlong *)(lVar11 + 0x50);
      if (lVar1 != 0) {
        *(longlong *)(lVar1 + 0x48) = lVar10;
      }
      lVar2 = *(longlong *)(lVar10 + 0x48);
      if (lVar2 != 0) {
        *(longlong *)(lVar2 + 0x50) = lVar11;
      }
      *(longlong *)(lVar11 + 0x48) = lVar2;
      *(longlong *)(lVar11 + 0x50) = lVar10;
      *(longlong *)(lVar10 + 0x48) = lVar11;
      *(longlong *)(lVar10 + 0x50) = lVar1;
      if (*(longlong *)(lVar11 + 0x48) == 0) {
        *(longlong *)(param_1 + 0x28) = lVar11;
      }
      lVar10 = puVar14[3];
      cVar9 = FUN_14826f92e(lVar10,puVar14);
      if (cVar9 == '\0') {
        uVar12 = puVar14[2];
        cVar9 = FUN_14826fa33(uVar12,puVar14);
        if (cVar9 != '\0') {
          lVar10 = FUN_14826c5c6(uVar12,puVar14);
          uVar12 = *(undefined8 *)(puVar14[2] + 0x50);
          goto LAB_14826f620;
        }
      }
      else {
        lVar10 = FUN_14826c5c6(*(undefined8 *)(lVar10 + 0x48),puVar14);
        uVar12 = puVar14[3];
LAB_14826f620:
        lVar11 = FUN_14826c5c6(uVar12,puVar14);
        if (lVar10 != lVar11) {
          FUN_14826c660(param_1,lVar10,lVar11);
        }
      }
      puVar14 = puVar14 + 4;
      puVar3 = puVar3 + 4;
    } while (puVar14 != *(undefined8 **)(param_1 + 0xa0));
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14826f6a0 FUN_14826f6a0 body=515 status=ok
// SIG undefined FUN_14826f6a0(void)

void FUN_14826f6a0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14826ae08(&local_40);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 < local_38) {
    local_38 = lVar1;
    if (ABS((double)param_3[5]) <= ABS((double)param_2[5])) {
      local_40 = param_3[2];
      if (((param_3[3] == lVar1) || (lVar3 = *param_3, local_40 == lVar3)) ||
         (local_40 = lVar3, lVar1 - param_3[1] == 0)) goto LAB_14826f7cd;
      dVar4 = (double)param_3[5] * (double)(lVar1 - param_3[1]);
      auVar5._0_8_ = (double)((ulonglong)dVar4 & 0x8000000000000000 | 0x3fdfffffffffffff) + dVar4;
      auVar5._8_8_ = 0x3fdfffffffffffff;
      auVar5 = roundsd(auVar5,auVar5,0xb);
      dVar4 = auVar5._0_8_;
    }
    else {
      local_40 = param_2[2];
      if (((param_2[3] == lVar1) || (lVar3 = *param_2, local_40 == lVar3)) ||
         (local_40 = lVar3, lVar1 - param_2[1] == 0)) goto LAB_14826f7cd;
      dVar4 = (double)param_2[5] * (double)(lVar1 - param_2[1]);
      auVar6._0_8_ = (double)((ulonglong)dVar4 & 0x8000000000000000 | 0x3fdfffffffffffff) + dVar4;
      auVar6._8_8_ = 0x3fdfffffffffffff;
      auVar5 = roundsd(ZEXT816(0),auVar6,0xb);
      dVar4 = auVar5._0_8_;
    }
    local_40 = lVar3 + (longlong)dVar4;
  }
  else if (local_38 < param_4) {
    if (param_2[3] == param_4) {
      local_40 = param_2[2];
      local_38 = param_4;
    }
    else if (param_3[3] == param_4) {
      local_40 = param_3[2];
      local_38 = param_4;
    }
    else if (ABS((double)param_3[5]) <= ABS((double)param_2[5])) {
      local_40 = param_3[4];
      local_38 = param_4;
    }
    else {
      local_40 = param_2[4];
      local_38 = param_4;
    }
  }
LAB_14826f7cd:
  local_68 = local_40;
  local_60 = local_38;
  plVar2 = *(longlong **)(param_1 + 0xa0);
  local_58 = param_2;
  local_50 = param_3;
  if (plVar2 == *(longlong **)(param_1 + 0xa8)) {
    FUN_148274fca(param_1 + 0x98,plVar2,&local_68);
  }
  else {
    plVar2[2] = (longlong)param_2;
    plVar2[3] = (longlong)param_3;
    *plVar2 = local_40;
    plVar2[1] = local_38;
    *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + 0x20;
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14826f8a4 FUN_14826f8a4 body=138 status=ok
// SIG undefined FUN_14826f8a4(void)

void FUN_14826f8a4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  *(longlong **)(param_1 + 0x30) = *(longlong **)(param_1 + 0x28);
  plVar3 = *(longlong **)(param_1 + 0x28);
  while (plVar3 != (longlong *)0x0) {
    plVar3[0xb] = plVar3[9];
    plVar1 = (longlong *)plVar3[10];
    plVar3[0xc] = (longlong)plVar1;
    plVar3[0xd] = (longlong)plVar1;
    lVar4 = plVar3[2];
    if (((plVar3[3] != param_2) && (lVar2 = *plVar3, lVar4 != lVar2)) &&
       (lVar4 = lVar2, param_2 - plVar3[1] != 0)) {
      dVar5 = (double)(param_2 - plVar3[1]) * (double)plVar3[5];
      auVar6._0_8_ = (double)((ulonglong)dVar5 & 0x8000000000000000 | 0x3fdfffffffffffff) + dVar5;
      auVar6._8_8_ = 0x3fdfffffffffffff;
      auVar6 = roundsd(ZEXT816(0),auVar6,0xb);
      lVar4 = lVar2 + (longlong)auVar6._0_8_;
    }
    plVar3[4] = lVar4;
    plVar3 = plVar1;
  }
  return;
}



// FUNCTION 14826f92e FUN_14826f92e body=261 status=ok
// SIG undefined FUN_14826f92e(void)

byte FUN_14826f92e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  double dVar8;
  ulonglong in_XMM0_Qb;
  undefined1 auVar9 [16];
  
  if (((((*(longlong *)(param_1 + 0x40) != 0) &&
        (*(char *)(*(longlong *)(param_1 + 0x78) + 0xc) == '\0')) &&
       (plVar1 = *(longlong **)(param_1 + 0x48), plVar1 != (longlong *)0x0)) &&
      ((*(char *)(plVar1[0xf] + 0xc) == '\0' && (plVar1[8] != 0)))) &&
     (plVar1[3] < *(longlong *)(param_1 + 8))) {
    lVar2 = param_2[1];
    lVar3 = plVar1[2];
    lVar5 = lVar2 - plVar1[3];
    lVar7 = lVar3;
    if (((lVar5 != 0) && (lVar4 = *plVar1, lVar3 != lVar4)) &&
       (lVar7 = lVar4, lVar2 - plVar1[1] != 0)) {
      dVar8 = (double)(lVar2 - plVar1[1]) * (double)plVar1[5];
      auVar9._8_8_ = in_XMM0_Qb & 0x8000000000000000 | 0x3fdfffffffffffff;
      auVar9._0_8_ = (double)((ulonglong)dVar8 & 0x8000000000000000 | 0x3fdfffffffffffff) + dVar8;
      auVar9 = roundsd(ZEXT816(0),auVar9,0xb);
      lVar7 = lVar4 + (longlong)auVar9._0_8_;
    }
    lVar4 = *param_2;
    uVar6 = -(lVar7 - lVar4);
    if ((longlong)uVar6 < 0) {
      uVar6 = lVar7 - lVar4;
    }
    if (uVar6 < 2) {
      return -((double)(*(longlong *)(param_1 + 0x18) - lVar2) * (double)(lVar4 - lVar3) -
               (double)(*(longlong *)(param_1 + 0x10) - lVar4) * (double)lVar5 == 0.0) & 1;
    }
  }
  return 0;
}



// FUNCTION 14826fa33 FUN_14826fa33 body=261 status=ok
// SIG undefined FUN_14826fa33(void)

byte FUN_14826fa33(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  double dVar8;
  ulonglong in_XMM0_Qb;
  undefined1 auVar9 [16];
  
  if (((((*(longlong *)(param_1 + 0x40) != 0) &&
        (*(char *)(*(longlong *)(param_1 + 0x78) + 0xc) == '\0')) &&
       (plVar1 = *(longlong **)(param_1 + 0x50), plVar1 != (longlong *)0x0)) &&
      ((*(char *)(plVar1[0xf] + 0xc) == '\0' && (plVar1[8] != 0)))) &&
     (plVar1[3] < *(longlong *)(param_1 + 8))) {
    lVar2 = param_2[1];
    lVar3 = plVar1[2];
    lVar5 = lVar2 - plVar1[3];
    lVar7 = lVar3;
    if (((lVar5 != 0) && (lVar4 = *plVar1, lVar3 != lVar4)) &&
       (lVar7 = lVar4, lVar2 - plVar1[1] != 0)) {
      dVar8 = (double)(lVar2 - plVar1[1]) * (double)plVar1[5];
      auVar9._8_8_ = in_XMM0_Qb & 0x8000000000000000 | 0x3fdfffffffffffff;
      auVar9._0_8_ = (double)((ulonglong)dVar8 & 0x8000000000000000 | 0x3fdfffffffffffff) + dVar8;
      auVar9 = roundsd(ZEXT816(0),auVar9,0xb);
      lVar7 = lVar4 + (longlong)auVar9._0_8_;
    }
    lVar4 = *param_2;
    uVar6 = -(lVar7 - lVar4);
    if ((longlong)uVar6 < 0) {
      uVar6 = lVar7 - lVar4;
    }
    if (uVar6 < 2) {
      return -((double)(*(longlong *)(param_1 + 0x18) - lVar2) * (double)(lVar4 - lVar3) -
               (double)(*(longlong *)(param_1 + 0x10) - lVar4) * (double)lVar5 == 0.0) & 1;
    }
  }
  return 0;
}



// FUNCTION 14826fb38 FUN_14826fb38 body=173 status=ok
// SIG undefined FUN_14826fb38(void)

void FUN_14826fb38(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  double dVar8;
  
  uVar6 = (ulonglong)((int)param_1[6] < 1);
  lVar1 = param_1[3];
  plVar7 = *(longlong **)(param_1[0xe] + 0x10 + uVar6 * 8);
  if (plVar7[1] == lVar1) {
    lVar2 = *param_1;
    bVar4 = false;
    lVar5 = param_1[2];
    do {
      lVar3 = *plVar7;
      if ((param_2 != '\0') && (lVar5 <= lVar2 == lVar3 < lVar5)) {
        if (!bVar4) {
          return;
        }
        break;
      }
      param_1[0xe] = (longlong)plVar7;
      param_1[2] = lVar3;
      lVar5 = lVar3;
      if ((*(byte *)(plVar7 + 4) & 4) != 0) break;
      plVar7 = (longlong *)plVar7[uVar6 + 2];
      bVar4 = true;
    } while (plVar7[1] == lVar1);
    if (lVar1 - param_1[1] == 0) {
      dVar8 = *(double *)(&DAT_149f45ef0 + (ulonglong)(lVar2 < lVar5) * 8);
    }
    else {
      dVar8 = (double)(lVar5 - lVar2) / (double)(lVar1 - param_1[1]);
    }
    param_1[5] = (longlong)dVar8;
  }
  return;
}



// FUNCTION 14826fbe6 FUN_14826fbe6 body=243 status=ok
// SIG undefined FUN_14826fbe6(void)

void FUN_14826fbe6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = param_2[2];
  param_2[1] = param_2[3];
  plVar1 = *(longlong **)(param_2[0xe] + 0x10 + (ulonglong)((int)param_2[6] < 1) * 8);
  param_2[0xe] = (longlong)plVar1;
  lVar2 = plVar1[1];
  param_2[2] = *plVar1;
  param_2[3] = lVar2;
  lVar2 = *param_2;
  param_2[4] = lVar2;
  lVar4 = param_2[3] - param_2[1];
  if (lVar4 == 0) {
    param_2[5] = *(longlong *)(&DAT_149f45ef0 + (ulonglong)(lVar2 < param_2[2]) * 8);
  }
  else {
    param_2[5] = (longlong)((double)(param_2[2] - lVar2) / (double)lVar4);
    local_28 = param_2[3];
    FUN_148274ad0(param_1 + 0x78);
    cVar3 = FUN_14826c53a(param_2);
    if (cVar3 != '\0') {
      FUN_14826c5c6(param_2[9],param_2);
      FUN_14826c5c6(param_2,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826fcf0 FUN_14826fcf0 body=102 status=ok
// SIG undefined FUN_14826fcf0(void)

void FUN_14826fcf0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 *puVar3;
  
  if (*(char *)(*(longlong *)(param_2 + 0x20) + 0x70) == '\0') {
    cVar2 = FUN_14826fff8(param_2);
    if (cVar2 == '\0') {
      puVar3 = (undefined4 *)FUN_14001cc68(0x30);
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      *(longlong *)(puVar3 + 2) = param_2;
      *(undefined8 *)(puVar3 + 4) = 0;
      *(undefined8 *)(puVar3 + 10) = uVar1;
      *puVar3 = 0xffffffff;
      *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(param_2 + 0x28);
      *(undefined4 **)(param_2 + 0x28) = puVar3;
      *(undefined8 *)(puVar3 + 8) = 0;
      *(undefined4 **)(param_1 + 0x38) = puVar3;
    }
  }
  return;
}



// FUNCTION 14826fd56 FUN_14826fd56 body=483 status=ok
// SIG undefined FUN_14826fd56(void)

longlong FUN_14826fd56(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_2 + 0x50);
  if ((*(byte *)(*(longlong *)(param_2 + 0x70) + 0x20) & 3) != 0) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_14826c5c6(param_2);
    }
    if (*(longlong *)(param_2 + 0x18) == *(longlong *)(param_2 + 8)) {
      return lVar6;
    }
    lVar2 = *(longlong *)(param_2 + 0x40);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x18 + (ulonglong)(*(longlong *)(lVar2 + 0x18) != param_2) * 8) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
    FUN_14826b312(param_1,param_2);
    return lVar6;
  }
  lVar2 = *(longlong *)(param_2 + 0x48);
  lVar5 = param_2;
  do {
    lVar5 = *(longlong *)(lVar5 + 0x50);
    if (lVar5 == 0) {
      return lVar6;
    }
  } while (*(longlong *)(lVar5 + 0x70) != *(longlong *)(param_2 + 0x70));
  if (lVar6 != lVar5) {
    do {
      FUN_14826c75a(param_1,param_2,lVar6,param_2 + 0x10);
      lVar3 = *(longlong *)(lVar6 + 0x50);
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 0x48) = param_2;
      }
      lVar1 = *(longlong *)(param_2 + 0x48);
      if (lVar1 != 0) {
        *(longlong *)(lVar1 + 0x50) = lVar6;
      }
      *(longlong *)(lVar6 + 0x48) = lVar1;
      *(longlong *)(lVar6 + 0x50) = param_2;
      *(longlong *)(param_2 + 0x48) = lVar6;
      *(longlong *)(param_2 + 0x50) = lVar3;
      if (*(longlong *)(lVar6 + 0x48) == 0) {
        *(longlong *)(param_1 + 0x28) = lVar6;
        lVar3 = *(longlong *)(param_2 + 0x50);
      }
      lVar6 = lVar3;
    } while (lVar3 != lVar5);
  }
  if (*(char *)(*(longlong *)(param_2 + 0x78) + 0xc) == '\x01') {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_14826cdda(param_1,param_2,lVar5,param_2 + 0x10);
    }
    lVar6 = *(longlong *)(lVar5 + 0x48);
    lVar3 = *(longlong *)(lVar5 + 0x50);
    if (lVar6 == 0 && lVar3 == 0) {
      if (*(longlong *)(param_1 + 0x28) == lVar5) goto LAB_14826fede;
    }
    else {
      if (lVar6 == 0) {
LAB_14826fede:
        plVar4 = (longlong *)(param_1 + 0x28);
      }
      else {
        plVar4 = (longlong *)(lVar6 + 0x50);
      }
      *plVar4 = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 0x48) = lVar6;
      }
      FUN_1400020a8(lVar5);
    }
    FUN_14826b312(param_1,param_2);
    goto LAB_14826ff01;
  }
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_14826cdda(param_1,param_2,lVar5,param_2 + 0x10);
  }
  FUN_14826b312(param_1,param_2);
  lVar6 = *(longlong *)(lVar5 + 0x48);
  lVar3 = *(longlong *)(lVar5 + 0x50);
  if (lVar6 == 0 && lVar3 == 0) {
    if (*(longlong *)(param_1 + 0x28) != lVar5) goto LAB_14826ff01;
LAB_14826ff1f:
    plVar4 = (longlong *)(param_1 + 0x28);
  }
  else {
    if (lVar6 == 0) goto LAB_14826ff1f;
    plVar4 = (longlong *)(lVar6 + 0x50);
  }
  *plVar4 = lVar3;
  if (lVar3 != 0) {
    *(longlong *)(lVar3 + 0x48) = lVar6;
  }
  FUN_1400020a8(lVar5);
LAB_14826ff01:
  plVar4 = (longlong *)(param_1 + 0x28);
  if (lVar2 != 0) {
    plVar4 = (longlong *)(lVar2 + 0x50);
  }
  return *plVar4;
}



// FUNCTION 14826ff3a FUN_14826ff3a body=189 status=ok
// SIG undefined FUN_14826ff3a(void)

void FUN_14826ff3a(longlong param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (piVar4 = *(int **)(param_2 + 0x28), piVar4 != (int *)0x0)) {
    piVar3 = (int *)0x0;
    do {
      if (*piVar4 < 0) {
        piVar1 = *(int **)(param_1 + 0x38);
        piVar2 = (int *)(param_1 + 0x38);
        if (piVar4 != piVar1) {
          do {
            piVar2 = piVar1;
            piVar1 = *(int **)(piVar2 + 10);
          } while (piVar1 != piVar4);
          piVar2 = piVar2 + 10;
        }
        *(undefined8 *)piVar2 = *(undefined8 *)(piVar4 + 10);
        if (piVar3 == (int *)0x0) {
          *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(piVar4 + 6);
          FUN_1400020a8();
          piVar4 = *(int **)(param_2 + 0x28);
          piVar3 = (int *)0x0;
        }
        else {
          *(undefined8 *)(piVar3 + (ulonglong)(*(longlong *)(piVar3 + 2) != param_2) * 2 + 6) =
               *(undefined8 *)(piVar4 + 6);
          FUN_1400020a8();
          piVar4 = piVar3;
        }
      }
      else {
        do {
          piVar3 = piVar4;
          if (*(longlong *)(piVar3 + 2) == param_2) {
            piVar4 = *(int **)(piVar3 + 6);
          }
          else {
            piVar4 = *(int **)(piVar3 + 8);
          }
          if (piVar4 == (int *)0x0) {
            return;
          }
        } while (-1 < *piVar4);
      }
    } while (piVar4 != (int *)0x0);
  }
  return;
}



// FUNCTION 14826fff8 FUN_14826fff8 body=67 status=ok
// SIG undefined FUN_14826fff8(void)

undefined8 FUN_14826fff8(longlong param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 < 0) {
      return 1;
    }
    do {
      if (*(longlong *)(piVar1 + 2) == param_1) {
        piVar1 = *(int **)(piVar1 + 6);
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        if (*piVar1 < 0) {
          return 1;
        }
      }
      else {
        if ((*(int **)(piVar1 + 8) != (int *)0x0) && (**(int **)(piVar1 + 8) < 0)) {
          return 1;
        }
        piVar1 = *(int **)(piVar1 + 6);
      }
    } while (piVar1 != (int *)0x0);
  }
  return 0;
}



// FUNCTION 14827003c FUN_14827003c body=166 status=ok
// SIG undefined FUN_14827003c(void)

void FUN_14827003c(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  
  lVar1 = *(longlong *)(param_2 + 2);
  lVar2 = *(longlong *)(param_2 + 4);
  piVar3 = *(int **)(lVar1 + 0x28);
  if (*(int **)(lVar1 + 0x28) == param_2) {
    piVar4 = (int *)(lVar1 + 0x28);
  }
  else {
    do {
      while (piVar4 = piVar3, *(longlong *)(piVar4 + 2) == lVar1) {
        piVar3 = *(int **)(piVar4 + 6);
        if (*(int **)(piVar4 + 6) == param_2) {
          piVar4 = piVar4 + 6;
          goto LAB_14827007b;
        }
      }
      piVar3 = *(int **)(piVar4 + 8);
    } while (*(int **)(piVar4 + 8) != param_2);
    piVar4 = piVar4 + 8;
  }
LAB_14827007b:
  *(undefined8 *)piVar4 = *(undefined8 *)(param_2 + 6);
  piVar3 = *(int **)(lVar2 + 0x28);
  if (*(int **)(lVar2 + 0x28) == param_2) {
    piVar4 = (int *)(lVar2 + 0x28);
  }
  else {
    do {
      while (piVar4 = piVar3, *(longlong *)(piVar4 + 2) == lVar2) {
        piVar3 = *(int **)(piVar4 + 6);
        if (*(int **)(piVar4 + 6) == param_2) {
          piVar4 = piVar4 + 6;
          goto LAB_1482700b5;
        }
      }
      piVar3 = *(int **)(piVar4 + 8);
    } while (*(int **)(piVar4 + 8) != param_2);
    piVar4 = piVar4 + 8;
  }
LAB_1482700b5:
  *(undefined8 *)piVar4 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(*(longlong *)(param_1 + 200) + (longlong)*param_2 * 8) = 0;
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 1482700e2 FUN_1482700e2 body=257 status=ok
// SIG undefined FUN_1482700e2(void)

undefined8 FUN_1482700e2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  for (lVar4 = *(longlong *)(lVar1 + 0x20); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 8)) {
    if (*(longlong *)(lVar4 + 0x28) != 0) goto LAB_1482700ff;
  }
  lVar4 = 0;
LAB_1482700ff:
  *param_2 = lVar1;
  if (*(longlong *)(lVar4 + 0x18) == 0) {
    lVar4 = *param_1;
    for (lVar2 = *(longlong *)(*param_1 + 0x18);
        (lVar2 != lVar1 && (*(longlong *)(lVar2 + 8) == *(longlong *)(lVar4 + 8)));
        lVar2 = *(longlong *)(lVar2 + 0x18)) {
      *param_1 = lVar2;
      lVar1 = *param_2;
      lVar4 = lVar2;
    }
    lVar2 = lVar4;
    lVar5 = *(longlong *)(lVar1 + 0x10);
    lVar6 = lVar4;
    if (*(longlong *)(lVar1 + 0x10) != lVar4) {
      do {
        lVar4 = lVar2;
        lVar6 = lVar5;
        if (*(longlong *)(lVar5 + 8) != *(longlong *)(lVar1 + 8)) break;
        *param_2 = lVar5;
        lVar4 = *(longlong *)(lVar5 + 0x10);
        lVar1 = lVar5;
        lVar2 = *param_1;
        lVar5 = lVar4;
        lVar6 = lVar4;
      } while (lVar4 != *param_1);
    }
    uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar6 != lVar4 && lVar1 != lVar4);
  }
  else {
    lVar5 = *param_1;
    lVar2 = *(longlong *)(lVar5 + 0x18);
    lVar6 = lVar2;
    if ((lVar2 != *(longlong *)(lVar4 + 0x28)) &&
       (lVar6 = *(longlong *)(lVar4 + 0x28), *(longlong *)(lVar2 + 8) == *(longlong *)(lVar5 + 8)))
    {
      do {
        lVar5 = lVar2;
        *param_1 = lVar5;
        lVar2 = *(longlong *)(lVar5 + 0x18);
        lVar6 = lVar2;
        if (lVar2 == *(longlong *)(lVar4 + 0x28)) break;
        lVar6 = *(longlong *)(lVar4 + 0x28);
      } while (*(longlong *)(lVar2 + 8) == *(longlong *)(lVar5 + 8));
      lVar1 = *param_2;
    }
    lVar2 = lVar1;
    if (lVar1 != lVar6) {
      do {
        lVar1 = *(longlong *)(lVar2 + 0x10);
        lVar6 = lVar2;
        if (*(longlong *)(lVar1 + 8) != *(longlong *)(lVar2 + 8)) break;
        *param_2 = lVar1;
        lVar2 = lVar1;
        lVar6 = lVar1;
      } while (lVar1 != *(longlong *)(lVar4 + 0x28));
      lVar5 = *param_1;
    }
    uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar6 != lVar5);
  }
  return uVar3;
}



// FUNCTION 1482701e4 FUN_1482701e4 body=3221 status=ok
// SIG undefined FUN_1482701e4(void)

ulonglong * FUN_1482701e4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  char cVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  longlong lVar15;
  bool bVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_138 [46];
  char local_10a;
  char local_109;
  longlong *local_108;
  longlong *local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar9 = *(longlong **)(param_2 + 8);
  plVar10 = *(longlong **)(param_2 + 0x10);
  for (puVar14 = (ulonglong *)plVar9[4]; puVar14 != (ulonglong *)0x0;
      puVar14 = (ulonglong *)puVar14[1]) {
    if (puVar14[5] != 0) goto LAB_148270262;
  }
  puVar14 = (ulonglong *)0x0;
LAB_148270262:
  for (puVar13 = (ulonglong *)plVar10[4]; puVar13 != (ulonglong *)0x0;
      puVar13 = (ulonglong *)puVar13[1]) {
    if (puVar13[5] != 0) goto LAB_14827027a;
  }
  puVar13 = (ulonglong *)0x0;
LAB_14827027a:
  local_a0 = plVar10;
  local_98 = plVar9;
  FUN_14827003c(param_1);
  if (puVar13[5] != 0) {
    cVar7 = FUN_14826d228(plVar10);
    if (cVar7 == '\0') {
      FUN_14826d2ac(param_1,&local_a0);
    }
    else if ((puVar14[5] == 0) || (cVar7 = FUN_14826d228(plVar9), cVar7 == '\0')) {
      FUN_14826d2ac(param_1,&local_98);
      puVar14 = puVar13;
    }
    else if ((puVar14 != puVar13) ||
            (((plVar9 != plVar10 && ((longlong *)plVar9[2] != plVar10)) &&
             ((longlong *)plVar9[3] != plVar10)))) {
      FUN_148270e7a(&local_98,plVar10,puVar14);
      plVar9 = local_98;
      FUN_148270e7a(&local_a0,local_98,puVar13);
      if (((longlong *)plVar9[2] != local_a0) &&
         (plVar10 = local_a0, local_98 != (longlong *)0x0 && (longlong *)local_a0[2] != plVar9)) {
        while( true ) {
          plVar9 = (longlong *)local_98[2];
          if ((plVar9 == local_98) ||
             (((plVar10 == (longlong *)0x0 || (plVar1 = (longlong *)plVar10[2], plVar1 == plVar10))
              || ((plVar2 = (longlong *)local_98[3], puVar14 == puVar13 &&
                  ((plVar9 == plVar10 || (plVar2 == plVar10)))))))) goto LAB_148270289;
          local_f8 = *plVar2;
          local_b0 = plVar2[1];
          lVar11 = *plVar1;
          local_e8 = plVar1[1];
          bVar16 = local_b0 == local_e8;
          bVar17 = local_f8 == lVar11;
          local_100 = plVar10;
          local_d0 = plVar2;
          local_c0 = plVar1;
          if ((bVar17) && (local_b0 == local_e8)) break;
          local_a8 = *local_98;
          lVar15 = local_98[1];
          dVar24 = (double)(lVar15 - local_b0);
          dVar22 = (double)(local_e8 - lVar15) * (double)(local_a8 - local_f8) -
                   (double)(lVar11 - local_a8) * dVar24;
          plVar12 = local_98;
          if ((dVar22 == 0.0) && (!NAN(dVar22))) {
            local_108 = local_98;
            cVar7 = FUN_148270f7d(plVar2,local_98,plVar10,plVar1);
            plVar12 = local_108;
            if (cVar7 != '\0') goto LAB_148270a61;
          }
          plVar10 = (longlong *)local_100[3];
          lVar3 = *plVar9;
          local_d8 = plVar9[1];
          local_c8 = *plVar10;
          local_f0 = plVar10[1];
          local_10a = local_d8 == local_f0;
          local_109 = lVar3 == local_c8;
          if (((bool)local_109) && (local_d8 == local_f0)) {
            local_109 = '\x01';
            local_10a = '\x01';
            local_108 = plVar12;
            local_f0 = local_d8;
            local_e0 = plVar10;
            local_c8 = lVar3;
            local_b8 = lVar15;
LAB_148270ac8:
            if (puVar14 == puVar13) {
              if ((local_c8 != lVar3) || (local_f0 != local_d8)) {
                if (((local_c8 == local_a8 || local_109 != '\0') ||
                    (local_a8 < local_c8 != lVar3 <= local_c8)) &&
                   ((local_f0 == local_b8 || local_10a != '\0' ||
                    (local_b8 < local_f0 != local_d8 <= local_f0)))) {
                  plVar9 = (longlong *)FUN_14001cc68(0x30,0x10);
                  lVar11 = local_108[4];
                  uVar18 = *(undefined4 *)((longlong)local_e0 + 4);
                  lVar15 = local_e0[1];
                  uVar19 = *(undefined4 *)((longlong)local_e0 + 0xc);
                  *(int *)plVar9 = (int)*local_e0;
                  *(undefined4 *)((longlong)plVar9 + 4) = uVar18;
                  *(int *)(plVar9 + 1) = (int)lVar15;
                  *(undefined4 *)((longlong)plVar9 + 0xc) = uVar19;
                  plVar9[4] = lVar11;
                  plVar9[5] = 0;
                  lVar11 = local_108[2];
                  plVar9[2] = lVar11;
                  *(longlong **)(lVar11 + 0x18) = plVar9;
                  plVar9[3] = (longlong)local_108;
                  local_108[2] = (longlong)plVar9;
                  local_e0 = (longlong *)local_100[3];
                }
                else {
                  plVar10 = (longlong *)FUN_14001cc68(0x30,0x10);
                  lVar11 = local_e0[4];
                  uVar18 = *(undefined4 *)((longlong)plVar9 + 4);
                  lVar15 = plVar9[1];
                  uVar19 = *(undefined4 *)((longlong)plVar9 + 0xc);
                  *(int *)plVar10 = (int)*plVar9;
                  *(undefined4 *)((longlong)plVar10 + 4) = uVar18;
                  *(int *)(plVar10 + 1) = (int)lVar15;
                  *(undefined4 *)((longlong)plVar10 + 0xc) = uVar19;
                  plVar10[4] = lVar11;
                  plVar10[5] = 0;
                  lVar11 = local_e0[2];
                  plVar10[2] = lVar11;
                  *(longlong **)(lVar11 + 0x18) = plVar10;
                  local_e0[2] = (longlong)plVar10;
                  plVar10[3] = (longlong)local_e0;
                  local_100[3] = (longlong)plVar10;
                  plVar9 = (longlong *)local_108[2];
                  local_e0 = plVar10;
                }
              }
              local_e0[2] = (longlong)plVar9;
              plVar9[3] = (longlong)local_e0;
              local_100[3] = (longlong)local_108;
              local_108[2] = (longlong)local_100;
              plVar9 = local_e0;
              goto LAB_148270d91;
            }
            plVar9[3] = (longlong)local_e0;
            local_e0[2] = (longlong)plVar9;
            local_108[2] = (longlong)local_100;
            local_100[3] = (longlong)local_108;
            if (*puVar13 <= *puVar14) {
              puVar13[5] = (ulonglong)local_108;
              goto LAB_148270b6c;
            }
            puVar14[5] = (ulonglong)local_108;
            goto LAB_148270aff;
          }
          lVar4 = *local_100;
          lVar5 = local_100[1];
          dVar22 = (double)(local_c8 - lVar4);
          dVar23 = (double)(local_f0 - lVar5) * (double)(lVar4 - lVar3) -
                   (double)(lVar5 - local_d8) * dVar22;
          if (((dVar23 == 0.0) && (!NAN(dVar23))) &&
             (local_108 = plVar12, local_e0 = plVar10, local_b8 = lVar15,
             cVar7 = FUN_148270f7d(plVar9,plVar12,local_100,plVar10), plVar12 = local_108,
             plVar10 = local_e0, lVar15 = local_b8, cVar7 != '\0')) goto LAB_148270ac8;
          plVar1 = local_d0;
          if (((((lVar3 != local_c8) && (lVar4 != lVar3)) && (local_c8 <= lVar3 == lVar4 < lVar3))
              || (((local_d8 != local_f0 && (lVar5 != local_d8)) &&
                  (local_f0 <= local_d8 == lVar5 < local_d8)))) ||
             (dVar23 = (double)(lVar5 - local_f0),
             dVar25 = ((double)lVar3 * dVar23 + (double)local_d8 * dVar22) -
                      ((double)lVar4 * dVar23 + (double)lVar5 * dVar22),
             2.01 <= (dVar25 * dVar25) / (dVar23 * dVar23 + dVar22 * dVar22))) {
            if ((((local_f8 == lVar11) || (lVar11 == local_a8)) ||
                (local_f8 <= lVar11 != local_a8 <= lVar11)) &&
               ((((local_b0 == local_e8 || (local_e8 == lVar15)) ||
                 (local_b0 <= local_e8 != lVar15 <= local_e8)) &&
                (dVar22 = (double)(local_f8 - local_a8),
                dVar23 = ((double)lVar11 * dVar24 + (double)local_e8 * dVar22) -
                         ((double)local_a8 * dVar24 + (double)lVar15 * dVar22),
                (dVar23 * dVar23) / (dVar24 * dVar24 + dVar22 * dVar22) < 2.01)))) {
              puVar8 = (undefined4 *)FUN_14001cc68(0x30,0x10);
              lVar11 = plVar1[4];
              uVar18 = (undefined4)*local_c0;
              uVar19 = *(undefined4 *)((longlong)local_c0 + 4);
              uVar20 = (undefined4)local_c0[1];
              uVar21 = *(undefined4 *)((longlong)local_c0 + 0xc);
              plVar12 = plVar1;
              goto LAB_1482708d2;
            }
            if ((((local_f8 == lVar11) || (local_f8 == lVar4)) ||
                (lVar11 <= local_f8 != lVar4 <= local_f8)) &&
               (((local_b0 == local_e8 || (local_b0 == lVar5)) ||
                (local_e8 <= local_b0 != lVar5 <= local_b0)))) {
              dVar24 = (double)(lVar5 - local_e8);
              dVar22 = (double)(lVar11 - lVar4);
              dVar23 = ((double)local_f8 * dVar24 + (double)local_b0 * dVar22) -
                       ((double)lVar4 * dVar24 + (double)lVar5 * dVar22);
              if (2.01 <= (dVar23 * dVar23) / (dVar24 * dVar24 + dVar22 * dVar22))
              goto LAB_1482707e9;
              puVar8 = (undefined4 *)FUN_14001cc68(0x30,0x10);
              lVar11 = local_100[4];
              uVar18 = *(undefined4 *)((longlong)local_d0 + 4);
              lVar15 = local_d0[1];
              uVar19 = *(undefined4 *)((longlong)local_d0 + 0xc);
              *puVar8 = (int)*local_d0;
              puVar8[1] = uVar18;
              puVar8[2] = (int)lVar15;
              puVar8[3] = uVar19;
              *(longlong *)(puVar8 + 8) = lVar11;
              *(undefined8 *)(puVar8 + 10) = 0;
              *(undefined4 **)(puVar8 + 4) = puVar8;
              *(undefined4 **)(puVar8 + 6) = puVar8;
              lVar11 = local_100[2];
              *(longlong *)(puVar8 + 4) = lVar11;
              *(undefined4 **)(lVar11 + 0x18) = puVar8;
              local_100[2] = (longlong)puVar8;
              *(longlong **)(puVar8 + 6) = local_100;
              plVar10 = local_100;
            }
            else {
LAB_1482707e9:
              if ((((local_c8 == local_a8) || (lVar3 == local_c8)) ||
                  (local_a8 < local_c8 != lVar3 <= local_c8)) &&
                 (((local_f0 == lVar15 || (local_d8 == local_f0)) ||
                  (lVar15 < local_f0 != local_d8 <= local_f0)))) {
                dVar24 = (double)(lVar15 - local_d8);
                dVar22 = (double)(lVar3 - local_a8);
                dVar23 = ((double)local_c8 * dVar24 + (double)local_f0 * dVar22) -
                         ((double)local_a8 * dVar24 + (double)lVar15 * dVar22);
                if ((dVar23 * dVar23) / (dVar24 * dVar24 + dVar22 * dVar22) < 2.01) {
                  puVar8 = (undefined4 *)FUN_14001cc68(0x30,0x10);
                  lVar11 = plVar12[4];
                  uVar18 = (undefined4)*plVar10;
                  uVar19 = *(undefined4 *)((longlong)plVar10 + 4);
                  uVar20 = (undefined4)plVar10[1];
                  uVar21 = *(undefined4 *)((longlong)plVar10 + 0xc);
                  goto LAB_1482708d2;
                }
              }
              FUN_148270e7a(&local_98,local_100,puVar14);
              plVar2 = local_98;
              FUN_148270e7a(&local_a0,local_98,puVar14);
              plVar9 = (longlong *)local_a0[2];
              plVar1 = (longlong *)plVar2[3];
              plVar10 = local_a0;
              if (((*plVar1 - *plVar9 == 0) && (plVar1[1] == plVar9[1])) ||
                 (dVar24 = (double)(*plVar1 - *plVar9), dVar22 = (double)(plVar1[1] - plVar9[1]),
                 2.01 <= dVar22 * dVar22 + dVar24 * dVar24)) {
                plVar9 = (longlong *)local_a0[3];
                plVar1 = (longlong *)plVar2[2];
                if (((*plVar1 - *plVar9 == 0) && (plVar1[1] == plVar9[1])) ||
                   (dVar24 = (double)(*plVar1 - *plVar9), dVar22 = (double)(plVar1[1] - plVar9[1]),
                   2.01 <= dVar22 * dVar22 + dVar24 * dVar24)) {
                  puVar14[5] = (ulonglong)plVar2;
                  if (puVar14 != puVar13) {
                    puVar13[5] = (ulonglong)local_a0;
                    FUN_14826cf1e(param_1,puVar13);
                  }
                  goto LAB_148270289;
                }
                uVar18 = *(undefined4 *)((longlong)plVar1 + 4);
                lVar11 = plVar1[1];
                uVar19 = *(undefined4 *)((longlong)plVar1 + 0xc);
                *(int *)plVar9 = (int)*plVar1;
                *(undefined4 *)((longlong)plVar9 + 4) = uVar18;
                *(int *)(plVar9 + 1) = (int)lVar11;
                *(undefined4 *)((longlong)plVar9 + 0xc) = uVar19;
              }
              else {
                uVar18 = *(undefined4 *)((longlong)plVar9 + 4);
                lVar11 = plVar9[1];
                uVar19 = *(undefined4 *)((longlong)plVar9 + 0xc);
                *(int *)plVar1 = (int)*plVar9;
                *(undefined4 *)((longlong)plVar1 + 4) = uVar18;
                *(int *)(plVar1 + 1) = (int)lVar11;
                *(undefined4 *)((longlong)plVar1 + 0xc) = uVar19;
              }
            }
          }
          else {
            puVar8 = (undefined4 *)FUN_14001cc68(0x30,0x10);
            lVar11 = plVar10[4];
            uVar18 = (undefined4)*plVar9;
            uVar19 = *(undefined4 *)((longlong)plVar9 + 4);
            uVar20 = (undefined4)plVar9[1];
            uVar21 = *(undefined4 *)((longlong)plVar9 + 0xc);
            plVar12 = plVar10;
LAB_1482708d2:
            *puVar8 = uVar18;
            puVar8[1] = uVar19;
            puVar8[2] = uVar20;
            puVar8[3] = uVar21;
            *(longlong *)(puVar8 + 8) = lVar11;
            *(undefined8 *)(puVar8 + 10) = 0;
            *(undefined4 **)(puVar8 + 4) = puVar8;
            *(undefined4 **)(puVar8 + 6) = puVar8;
            lVar11 = plVar12[2];
            *(longlong *)(puVar8 + 4) = lVar11;
            *(undefined4 **)(lVar11 + 0x18) = puVar8;
            plVar12[2] = (longlong)puVar8;
            *(longlong **)(puVar8 + 6) = plVar12;
            plVar10 = local_100;
          }
          if (local_98 == (longlong *)0x0) goto LAB_148270289;
        }
        local_108 = local_98;
        bVar17 = true;
        bVar16 = true;
        lVar11 = local_f8;
        local_e8 = local_b0;
LAB_148270a61:
        if (puVar14 == puVar13) {
          if ((local_f8 != lVar11) || (local_b0 != local_e8)) {
            if ((((bool)(bVar17 | local_f8 == *local_100)) ||
                (lVar11 <= local_f8 != *local_100 < local_f8)) &&
               (((bool)(bVar16 | local_b0 == local_100[1]) ||
                (local_e8 <= local_b0 != local_100[1] < local_b0)))) {
              local_c0 = (longlong *)FUN_14001cc68(0x30,0x10);
              lVar11 = local_100[4];
              uVar18 = *(undefined4 *)((longlong)local_d0 + 4);
              lVar15 = local_d0[1];
              uVar19 = *(undefined4 *)((longlong)local_d0 + 0xc);
              *(int *)local_c0 = (int)*local_d0;
              *(undefined4 *)((longlong)local_c0 + 4) = uVar18;
              *(int *)(local_c0 + 1) = (int)lVar15;
              *(undefined4 *)((longlong)local_c0 + 0xc) = uVar19;
              local_c0[4] = lVar11;
              local_c0[5] = 0;
              local_c0[2] = (longlong)local_c0;
              local_c0[3] = (longlong)local_c0;
              lVar11 = local_100[2];
              local_c0[2] = lVar11;
              *(longlong **)(lVar11 + 0x18) = local_c0;
              local_c0[3] = (longlong)local_100;
              local_100[2] = (longlong)local_c0;
              local_d0 = (longlong *)local_108[3];
            }
            else {
              plVar9 = (longlong *)FUN_14001cc68(0x30,0x10);
              lVar11 = local_d0[4];
              uVar18 = *(undefined4 *)((longlong)local_c0 + 4);
              lVar15 = local_c0[1];
              uVar19 = *(undefined4 *)((longlong)local_c0 + 0xc);
              *(int *)plVar9 = (int)*local_c0;
              *(undefined4 *)((longlong)plVar9 + 4) = uVar18;
              *(int *)(plVar9 + 1) = (int)lVar15;
              *(undefined4 *)((longlong)plVar9 + 0xc) = uVar19;
              plVar9[4] = lVar11;
              plVar9[5] = 0;
              lVar11 = local_d0[2];
              plVar9[2] = lVar11;
              *(longlong **)(lVar11 + 0x18) = plVar9;
              local_d0[2] = (longlong)plVar9;
              plVar9[3] = (longlong)local_d0;
              local_108[3] = (longlong)plVar9;
              local_c0 = (longlong *)local_100[2];
              local_d0 = plVar9;
            }
          }
          local_d0[2] = (longlong)local_c0;
          local_c0[3] = (longlong)local_d0;
          local_108[3] = (longlong)local_100;
          local_100[2] = (longlong)local_108;
          plVar9 = local_d0;
LAB_148270d91:
          FUN_14826d8aa(param_1,local_108,plVar9,puVar14);
        }
        else {
          local_d0[2] = (longlong)local_c0;
          local_c0[3] = (longlong)local_d0;
          local_108[3] = (longlong)local_100;
          local_100[2] = (longlong)local_108;
          if (*puVar14 < *puVar13) {
            puVar14[5] = (ulonglong)local_108;
LAB_148270aff:
            puVar13[5] = 0;
            if (((ulonglong *)puVar14[1] != (ulonglong *)0x0) &&
               ((puVar6 = (ulonglong *)puVar13[1], puVar6 == (ulonglong *)0x0 ||
                (*puVar6 < *(ulonglong *)puVar14[1])))) {
              puVar14[1] = (ulonglong)puVar6;
            }
            puVar13[1] = (ulonglong)puVar14;
          }
          else {
            puVar13[5] = (ulonglong)local_108;
LAB_148270b6c:
            puVar14[5] = 0;
            if (((ulonglong *)puVar13[1] != (ulonglong *)0x0) &&
               ((puVar6 = (ulonglong *)puVar14[1], puVar6 == (ulonglong *)0x0 ||
                (*puVar6 < *(ulonglong *)puVar13[1])))) {
              puVar13[1] = (ulonglong)puVar6;
            }
            puVar14[1] = (ulonglong)puVar13;
            puVar14 = puVar13;
          }
        }
      }
    }
  }
LAB_148270289:
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar14;
}



// FUNCTION 148270e7a FUN_148270e7a body=259 status=ok
// SIG undefined FUN_148270e7a(void)

void FUN_148270e7a(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  while ((((plVar1 = (longlong *)plVar3[3], plVar1 != plVar3 && (plVar3 != param_2)) &&
          (*plVar3 == *plVar1)) &&
         (((plVar3[1] == plVar1[1] && (plVar1[5] != 0)) && (plVar3[5] == 0))))) {
    if (plVar3 == *(longlong **)(param_3 + 0x28)) {
      *(longlong **)(param_3 + 0x28) = plVar1;
      plVar3 = (longlong *)*param_1;
    }
    lVar2 = plVar3[2];
    *(longlong *)(plVar3[3] + 0x10) = lVar2;
    *(longlong *)(lVar2 + 0x18) = plVar3[3];
    if (plVar3 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    *param_1 = lVar2;
    plVar3 = *(longlong **)(lVar2 + 0x18);
    *param_1 = (longlong)plVar3;
  }
  while (((plVar1 = (longlong *)plVar3[2], plVar1 != plVar3 && (plVar3 != param_2)) &&
         ((*plVar3 == *plVar1 &&
          (((plVar3[1] == plVar1[1] && (plVar1[5] != 0)) && (plVar3[5] == 0))))))) {
    if (plVar3 == *(longlong **)(param_3 + 0x28)) {
      *(longlong *)(param_3 + 0x28) = plVar3[3];
      plVar3 = (longlong *)*param_1;
    }
    lVar2 = plVar3[2];
    *(longlong *)(plVar3[3] + 0x10) = lVar2;
    *(longlong *)(lVar2 + 0x18) = plVar3[3];
    if (plVar3 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    *param_1 = lVar2;
    plVar3 = *(longlong **)(lVar2 + 0x18);
    *param_1 = (longlong)plVar3;
  }
  return;
}



// FUNCTION 148270f7d FUN_148270f7d body=261 status=ok
// SIG undefined FUN_148270f7d(void)

undefined8 FUN_148270f7d(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  ulonglong uVar9;
  undefined7 uVar10;
  bool bVar11;
  
  lVar1 = *param_1;
  lVar2 = *param_2;
  lVar3 = *param_4;
  if (lVar1 == lVar2) {
    if (lVar3 != *param_3 || lVar1 != *param_3) {
      return 0;
    }
  }
  else {
    lVar7 = *param_3;
    if (lVar1 < lVar2) {
      if (lVar7 < lVar3) {
        if (lVar3 <= lVar1 || lVar2 <= lVar7) {
          return 0;
        }
      }
      else {
        bVar11 = lVar3 < lVar2;
        bVar8 = lVar1 < lVar7;
LAB_14827101e:
        if (!(bool)(bVar11 & bVar8)) {
          return 0;
        }
      }
    }
    else {
      if (lVar7 < lVar3) {
        bVar8 = lVar7 < lVar1;
        bVar11 = lVar2 < lVar3;
        goto LAB_14827101e;
      }
      if (lVar7 <= lVar2 || lVar1 <= lVar3) {
        return 0;
      }
    }
  }
  uVar4 = param_1[1];
  uVar5 = param_2[1];
  uVar6 = param_4[1];
  if (uVar4 == uVar5) {
    uVar9 = uVar4 ^ param_3[1];
    if (uVar6 != param_3[1] || uVar9 != 0) {
      return 0;
    }
  }
  else {
    lVar1 = param_3[1];
    uVar10 = (undefined7)(uVar4 >> 8);
    if ((longlong)uVar4 < (longlong)uVar5) {
      if (lVar1 < (longlong)uVar6) {
        uVar9 = CONCAT71(uVar10,(longlong)uVar4 < (longlong)uVar6);
        if ((longlong)uVar4 >= (longlong)uVar6 || (longlong)uVar5 <= lVar1) {
          return 0;
        }
        goto LAB_148270fbe;
      }
      bVar11 = (longlong)uVar6 < (longlong)uVar5;
      bVar8 = (longlong)uVar4 < lVar1;
    }
    else {
      if ((longlong)uVar6 <= lVar1) {
        uVar9 = CONCAT71(uVar10,(longlong)uVar4 <= (longlong)uVar6);
        if (lVar1 <= (longlong)uVar5 || (longlong)uVar4 <= (longlong)uVar6) {
          return 0;
        }
        goto LAB_148270fbe;
      }
      bVar8 = lVar1 < (longlong)uVar4;
      bVar11 = (longlong)uVar5 < (longlong)uVar6;
    }
    uVar9 = CONCAT71(uVar10,bVar8);
    if ((bVar11 & bVar8) == 0) {
      return 0;
    }
  }
LAB_148270fbe:
  return CONCAT71((int7)(uVar9 >> 8),1);
}



// FUNCTION 148271082 FUN_148271082 body=293 status=ok
// SIG undefined FUN_148271082(void)

undefined8 FUN_148271082(longlong *param_1,byte param_2,char param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((longlong *)param_1[2] == param_1) ||
     ((param_3 == '\0' && ((longlong *)param_1[2] == (longlong *)param_1[3])))) {
    uVar6 = 0;
  }
  else {
    puVar1 = (undefined4 *)*param_4;
    puVar7 = (undefined4 *)param_4[1];
    if ((undefined4 *)param_4[1] != puVar1) {
      param_4[1] = (longlong)puVar1;
      puVar7 = puVar1;
    }
    if (param_2 == 0) {
      param_1 = (longlong *)param_1[2];
      local_48 = (undefined4)*param_1;
      uStack_44 = *(undefined4 *)((longlong)param_1 + 4);
      uStack_40 = (undefined4)param_1[1];
      uStack_3c = *(undefined4 *)((longlong)param_1 + 0xc);
      plVar5 = param_1 + 2;
    }
    else {
      local_48 = (undefined4)*param_1;
      uStack_44 = *(undefined4 *)((longlong)param_1 + 4);
      uStack_40 = (undefined4)param_1[1];
      uStack_3c = *(undefined4 *)((longlong)param_1 + 0xc);
      plVar5 = param_1 + 3;
    }
    plVar5 = (longlong *)*plVar5;
    if (puVar7 == (undefined4 *)param_4[2]) {
      FUN_148276066(param_4,puVar7,&local_48);
    }
    else {
      *puVar7 = local_48;
      puVar7[1] = uStack_44;
      puVar7[2] = uStack_40;
      puVar7[3] = uStack_3c;
      param_4[1] = param_4[1] + 0x10;
    }
    if (plVar5 != param_1) {
      do {
        if ((*plVar5 != CONCAT44(uStack_44,local_48)) ||
           (plVar5[1] != CONCAT44(uStack_3c,uStack_40))) {
          local_48 = (undefined4)*plVar5;
          uStack_44 = *(undefined4 *)((longlong)plVar5 + 4);
          uStack_40 = (undefined4)plVar5[1];
          uStack_3c = *(undefined4 *)((longlong)plVar5 + 0xc);
          puVar1 = (undefined4 *)param_4[1];
          if (puVar1 == (undefined4 *)param_4[2]) {
            FUN_148276066(param_4,puVar1,&local_48);
          }
          else {
            uVar2 = *(undefined4 *)((longlong)plVar5 + 4);
            lVar4 = plVar5[1];
            uVar3 = *(undefined4 *)((longlong)plVar5 + 0xc);
            *puVar1 = (int)*plVar5;
            puVar1[1] = uVar2;
            puVar1[2] = (int)lVar4;
            puVar1[3] = uVar3;
            param_4[1] = param_4[1] + 0x10;
          }
        }
        plVar5 = (longlong *)plVar5[(ulonglong)param_2 + 2];
      } while (plVar5 != param_1);
    }
    uVar6 = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1482711a8 FUN_1482711a8 body=114 status=ok
// SIG undefined FUN_1482711a8(void)

void FUN_1482711a8(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined1 auStack_38 [40];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if ((ulonglong)((param_1[2] - *param_1 >> 3) * -0x5555555555555555) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_1482747d6();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_14827612e(param_1,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827121c FUN_14827121c body=675 status=ok
// SIG undefined FUN_14827121c(void)

undefined8 FUN_14827121c(longlong param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  bool bVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  
  uVar4 = param_3[8];
  uVar6 = param_3[10];
  if ((longlong)uVar4 < (longlong)uVar6) {
    uVar7 = param_3[7];
    uVar10 = param_3[9];
    if ((longlong)uVar7 < (longlong)uVar10) goto LAB_1482712bf;
  }
  puVar8 = (ulonglong *)param_3[0xb];
  uVar4 = DAT_14cb466b0;
  uVar6 = DAT_14cb466c0;
  uVar7 = DAT_14cb466a8;
  uVar10 = DAT_14cb466b8;
  if (puVar8 == (ulonglong *)param_3[0xc]) {
    uVar7 = 0;
    uVar4 = 0;
    uVar10 = 0;
    uVar6 = 0;
  }
  else {
    do {
      uVar12 = *puVar8;
      if ((longlong)uVar12 < (longlong)uVar7) {
        uVar7 = uVar12;
      }
      uVar1 = puVar8[1];
      if ((longlong)uVar10 < (longlong)uVar12) {
        uVar10 = uVar12;
      }
      if ((longlong)uVar1 < (longlong)uVar4) {
        uVar4 = uVar1;
      }
      if ((longlong)uVar6 < (longlong)uVar1) {
        uVar6 = uVar1;
      }
      puVar8 = puVar8 + 2;
    } while (puVar8 != (ulonglong *)param_3[0xc]);
  }
  param_3[7] = uVar7;
  param_3[8] = uVar4;
  param_3[9] = uVar10;
  param_3[10] = uVar6;
LAB_1482712bf:
  uVar12 = param_2[7];
  if ((longlong)uVar12 < (longlong)uVar7) {
    bVar9 = false;
  }
  else {
    bVar9 = ((longlong)param_2[10] <= (longlong)uVar6 && (longlong)param_2[9] <= (longlong)uVar10)
            && (longlong)uVar4 <= (longlong)param_2[8];
  }
  puVar13 = (undefined8 *)param_3[2];
  if (puVar13 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)puVar13[1];
    for (puVar13 = (undefined8 *)*puVar13; puVar13 != puVar2; puVar13 = puVar13 + 1) {
      puVar8 = (ulonglong *)*puVar13;
LAB_148271308:
      if (puVar8 != (ulonglong *)0x0) {
        if (puVar8[5] == 0) goto code_r0x000148271318;
        if ((puVar8 != param_2) && (*param_3 < *puVar8)) {
          if ((puVar8[2] != 0) && (cVar3 = FUN_14827121c(param_1), cVar3 != '\0'))
          goto LAB_1482714a2;
          if (puVar8[0xc] == puVar8[0xb]) {
            FUN_148271082(puVar8[5],*(undefined1 *)(param_1 + 0xe1),0,puVar8 + 0xb);
          }
          uVar4 = puVar8[8];
          uVar6 = puVar8[10];
          if ((longlong)uVar4 < (longlong)uVar6) {
            uVar7 = puVar8[7];
            uVar10 = puVar8[9];
            if ((longlong)uVar7 < (longlong)uVar10) goto LAB_1482713d6;
          }
          puVar11 = (ulonglong *)puVar8[0xb];
          uVar4 = DAT_14cb466b0;
          uVar6 = DAT_14cb466c0;
          uVar7 = DAT_14cb466a8;
          uVar10 = DAT_14cb466b8;
          if (puVar11 == (ulonglong *)puVar8[0xc]) {
            uVar7 = 0;
            uVar4 = 0;
            uVar10 = 0;
            uVar6 = 0;
          }
          else {
            do {
              uVar12 = *puVar11;
              if ((longlong)uVar12 < (longlong)uVar7) {
                uVar7 = uVar12;
              }
              uVar1 = puVar11[1];
              if ((longlong)uVar10 < (longlong)uVar12) {
                uVar10 = uVar12;
              }
              if ((longlong)uVar1 < (longlong)uVar4) {
                uVar4 = uVar1;
              }
              if ((longlong)uVar6 < (longlong)uVar1) {
                uVar6 = uVar1;
              }
              puVar11 = puVar11 + 2;
            } while (puVar11 != (ulonglong *)puVar8[0xc]);
          }
          puVar8[7] = uVar7;
          puVar8[8] = uVar4;
          puVar8[9] = uVar10;
          puVar8[10] = uVar6;
LAB_1482713d6:
          uVar12 = param_2[7];
          if (((((longlong)uVar7 <= (longlong)uVar12) && ((longlong)param_2[9] <= (longlong)uVar10))
              && ((longlong)uVar4 <= (longlong)param_2[8])) &&
             (((longlong)param_2[10] <= (longlong)uVar6 &&
              (cVar3 = FUN_1482714bf(param_2), cVar3 != '\0')))) {
            param_2[1] = (ulonglong)puVar8;
            goto LAB_1482714a2;
          }
        }
      }
    }
  }
  puVar8 = (ulonglong *)param_2[1];
  if (puVar8 == param_3) {
    while ((!bVar9 || (cVar3 = FUN_1482714bf(param_2,puVar8), cVar3 == '\0'))) {
      puVar8 = (ulonglong *)puVar8[1];
      param_2[1] = (ulonglong)puVar8;
      if (puVar8 == (ulonglong *)0x0) break;
      bVar9 = false;
      if ((longlong)puVar8[7] <= (longlong)uVar12) {
        bVar9 = false;
        if ((longlong)param_2[9] <= (longlong)puVar8[9]) {
          bVar9 = false;
          if ((longlong)puVar8[8] <= (longlong)param_2[8]) {
            bVar9 = (longlong)param_2[10] <= (longlong)puVar8[10];
          }
        }
      }
    }
LAB_1482714a2:
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
code_r0x000148271318:
  puVar8 = (ulonglong *)puVar8[1];
  goto LAB_148271308;
}



// FUNCTION 1482714bf FUN_1482714bf body=215 status=ok
// SIG undefined FUN_1482714bf(void)

bool FUN_1482714bf(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  
  plVar5 = *(longlong **)(param_1 + 0x28);
  plVar6 = plVar5;
  do {
    iVar4 = FUN_14827635e(plVar6,param_2 + 0x58);
    if (iVar4 != 0) {
      return iVar4 == 1;
    }
    plVar6 = (longlong *)plVar6[2];
  } while (plVar6 != plVar5);
  dVar7 = 0.0;
  do {
    plVar1 = plVar6 + 3;
    lVar3 = *plVar6;
    plVar2 = plVar6 + 1;
    plVar6 = (longlong *)plVar6[2];
    dVar7 = dVar7 + (double)(*(longlong *)*plVar1 - lVar3) *
                    (double)(*plVar2 + ((longlong *)*plVar1)[1]);
  } while (plVar6 != plVar5);
  dVar8 = 0.0;
  plVar5 = *(longlong **)(param_2 + 0x28);
  do {
    plVar6 = plVar5 + 3;
    lVar3 = *plVar5;
    plVar1 = plVar5 + 1;
    plVar5 = (longlong *)plVar5[2];
    dVar8 = dVar8 + (double)(*(longlong *)*plVar6 - lVar3) *
                    (double)(*plVar1 + ((longlong *)*plVar6)[1]);
  } while (plVar5 != *(longlong **)(param_2 + 0x28));
  return dVar7 * 0.5 < dVar8 * 0.5;
}



// FUNCTION 148271596 FUN_148271596 body=205 status=ok
// SIG undefined FUN_148271596(void)

undefined8 FUN_148271596(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar2 = *param_1;
  puVar2[3] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  FUN_1482746b2(puVar2 + 1,param_2[1] - *param_2 >> 4,param_2,param_2 + 1);
  puVar2[6] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[7] = param_1;
  puVar1 = (undefined8 *)param_1[5];
  local_48 = puVar2;
  if (puVar1 == (undefined8 *)param_1[6]) {
    FUN_14828af3a(param_1 + 4,puVar1,&local_48);
    lVar3 = param_1[5];
  }
  else {
    *puVar1 = puVar2;
    lVar3 = param_1[5] + 8;
    param_1[5] = lVar3;
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined8 *)(lVar3 + -8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148271664 FUN_148271664 body=151 status=ok
// SIG undefined FUN_148271664(void)

double * FUN_148271664(double *param_1,longlong *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = 0.0;
  dVar3 = 0.0;
  if (param_3[1] != param_2[1] || *param_3 != *param_2) {
    dVar3 = (double)(*param_3 - *param_2);
    dVar1 = (double)(param_3[1] - param_2[1]);
    dVar2 = hypot(dVar3,dVar1);
    dVar1 = dVar1 * (1.0 / dVar2);
    dVar3 = -(1.0 / dVar2) * dVar3;
  }
  *param_1 = dVar1;
  param_1[1] = dVar3;
  return param_1;
}



// FUNCTION 1482716fc FUN_1482716fc body=320 status=ok
// SIG undefined FUN_1482716fc(void)

void FUN_1482716fc(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2[1] - *param_2 != 0) {
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    FUN_148276b66(&local_98,(param_2[1] - *param_2 >> 3) * -0x5555555555555555,param_2,param_2 + 1);
    uVar7 = local_50;
    uVar6 = local_88;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_50 = local_50 & 0xffffff00;
    puVar1 = *(undefined4 **)(param_1 + 0x58);
    uStack_4c = param_3;
    local_48 = param_4;
    if (puVar1 == *(undefined4 **)(param_1 + 0x60)) {
      FUN_1482764e2(param_1 + 0x50,puVar1,&local_98);
    }
    else {
      local_88 = 0;
      uVar2 = (undefined4)local_98;
      uVar3 = local_98._4_4_;
      uVar4 = (undefined4)uStack_90;
      uVar5 = uStack_90._4_4_;
      local_98 = 0;
      uStack_90 = 0;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      *(undefined8 *)(puVar1 + 4) = uVar6;
      local_70 = 0;
      local_80 = 0;
      uStack_78 = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      uStack_58 = 0;
      uStack_68 = 0;
      local_60 = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      *(ulonglong *)(puVar1 + 0x12) = CONCAT44(param_3,uVar7) & 0xffffffffffffff00;
      puVar1[0x14] = param_4;
      *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 0x58;
    }
    FUN_148274782(&uStack_68);
    FUN_1482748da(&local_80);
    FUN_1482748da(&local_98);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827183e FUN_14827183e body=257 status=ok
// SIG undefined FUN_14827183e(void)

void FUN_14827183e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0x20) != *(longlong *)(param_1 + 0x28)) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20);
  }
  FUN_148271940(lVar1,param_2[1] - *param_2 >> 4);
  lVar5 = *param_2;
  if (param_2[1] != lVar5) {
    lVar3 = param_2[1] + -0x10;
    if (lVar5 != lVar3) {
      do {
        lVar4 = lVar5 + 0x10;
        FUN_148271664(&local_48,lVar5,lVar4);
        puVar2 = *(undefined4 **)(param_1 + 0x28);
        if (puVar2 == *(undefined4 **)(param_1 + 0x30)) {
          FUN_1482769b0(lVar1,puVar2,&local_48);
        }
        else {
          *puVar2 = local_48;
          puVar2[1] = uStack_44;
          puVar2[2] = uStack_40;
          puVar2[3] = uStack_3c;
          *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 0x10;
        }
        lVar5 = lVar4;
      } while (lVar4 != lVar3);
      lVar5 = *param_2;
    }
    FUN_148271664(&local_48,lVar3,lVar5);
    puVar2 = *(undefined4 **)(param_1 + 0x28);
    if (puVar2 == *(undefined4 **)(param_1 + 0x30)) {
      FUN_1482769b0(lVar1,puVar2,&local_48);
    }
    else {
      *puVar2 = local_48;
      puVar2[1] = uStack_44;
      puVar2[2] = uStack_40;
      puVar2[3] = uStack_3c;
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 0x10;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148271940 FUN_148271940 body=125 status=ok
// SIG undefined FUN_148271940(void)

void FUN_148271940(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  void *_Dst;
  
  lVar1 = *param_1;
  if (param_2 <= (ulonglong)(param_1[2] - lVar1 >> 4)) {
    return;
  }
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_1[1];
    _Dst = (void *)FUN_148276822(param_2);
    memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
    FUN_148276940(param_1,_Dst,lVar2 - lVar1 >> 4,param_2);
    return;
  }
  FUN_148276810();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



// FUNCTION 1482719bd FUN_1482719bd body=252 status=ok
// SIG undefined FUN_1482719bd(void)

void FUN_1482719bd(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = *param_2;
  dVar3 = *param_3;
  dVar1 = *param_4;
  dVar2 = *param_5;
  if ((dVar5 != dVar3) || (NAN(dVar5) || NAN(dVar3))) {
    dVar4 = param_2[1];
    dVar3 = (param_3[1] - dVar4) / (dVar3 - dVar5);
    if ((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) {
      dVar2 = (param_5[1] - param_4[1]) / (dVar2 - dVar1);
      if ((dVar3 == dVar2) && (!NAN(dVar3) && !NAN(dVar2))) goto LAB_1482719f0;
      dVar4 = dVar4 - dVar5 * dVar3;
      dVar5 = ((param_4[1] - dVar1 * dVar2) - dVar4) / (dVar3 - dVar2);
      dVar4 = dVar3 * dVar5 + dVar4;
      *param_1 = dVar5;
    }
    else {
      dVar4 = dVar3 * dVar1 + (dVar4 - dVar5 * dVar3);
      *param_1 = dVar1;
    }
  }
  else {
    if ((dVar1 == dVar2) && (!NAN(dVar1) && !NAN(dVar2))) {
LAB_1482719f0:
      *param_1 = 0.0;
      param_1[1] = 0.0;
      return;
    }
    dVar3 = (param_5[1] - param_4[1]) / (dVar2 - dVar1);
    dVar4 = dVar3 * dVar5 + (param_4[1] - dVar1 * dVar3);
    *param_1 = dVar5;
  }
  param_1[1] = dVar4;
  return;
}



// FUNCTION 148271aba FUN_148271aba body=1002 status=ok
// SIG undefined FUN_148271aba(void)

void FUN_148271aba(double *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  double *pdVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_f8 [32];
  double *local_d8;
  longlong local_d0;
  longlong local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  pdVar1 = (double *)param_1[4];
  if (param_4 == param_5) {
    local_a8 = -*pdVar1;
    local_b0 = pdVar1[1];
    dVar4 = pdVar1[param_4 * 2];
    dVar5 = pdVar1[param_4 * 2 + 1];
  }
  else {
    dVar4 = pdVar1[param_5 * 2];
    dVar5 = pdVar1[param_5 * 2 + 1];
    dVar8 = dVar4 - pdVar1[param_4 * 2];
    dVar9 = pdVar1[param_4 * 2 + 1] - dVar5;
    dVar7 = SQRT(dVar9 * dVar9 + dVar8 * dVar8);
    dVar6 = ABS(dVar7);
    dVar7 = 1.0 / dVar7;
    local_b0 = 0.0;
    if (0.001 <= dVar6) {
      local_b0 = dVar9 * dVar7;
    }
    local_a8 = (double)(~-(ulonglong)(dVar6 < 0.001) & (ulonglong)(dVar8 * dVar7));
  }
  lVar2 = *param_3;
  dVar10 = (double)*(longlong *)(lVar2 + 8 + param_4 * 0x10);
  dVar9 = (double)*(longlong *)(lVar2 + param_4 * 0x10);
  dVar8 = local_a8 * param_1[1] + dVar10;
  dVar6 = param_1[1] * local_b0 + dVar9;
  dVar7 = *param_1;
  local_a8 = local_a8 * dVar7;
  local_b0 = local_b0 * dVar7;
  local_78 = dVar8 - local_b0;
  local_80 = dVar6 + local_a8;
  local_88 = dVar8 + local_b0;
  local_90 = dVar6 - local_a8;
  local_98 = (double)*(longlong *)(lVar2 + 8 + param_5 * 0x10) + dVar5 * dVar7;
  local_a0 = (double)*(longlong *)(lVar2 + param_5 * 0x10) + dVar4 * dVar7;
  if (param_4 == param_5) {
    local_a8 = local_a8 + local_98;
    local_b0 = local_b0 + local_a0;
    local_d8 = &local_b0;
    FUN_1482719bd(&local_c0,&local_80,&local_90,&local_a0);
    local_c8 = (longlong)((dVar8 - local_b8) + dVar8);
    local_d0 = (longlong)((dVar6 - local_c0) + dVar6);
    plVar3 = *(longlong **)(param_2 + 0x38);
    if (plVar3 == *(longlong **)(param_2 + 0x40)) {
      FUN_148276a78(param_2 + 0x30,plVar3,&local_d0);
      plVar3 = *(longlong **)(param_2 + 0x38);
    }
    else {
      *plVar3 = local_d0;
      plVar3[1] = local_c8;
      plVar3 = (longlong *)(*(longlong *)(param_2 + 0x38) + 0x10);
      *(longlong **)(param_2 + 0x38) = plVar3;
    }
  }
  else {
    local_a8 = dVar5 * dVar7 + dVar10;
    local_b0 = dVar4 * dVar7 + dVar9;
    local_d8 = &local_b0;
    FUN_1482719bd(&local_c0,&local_80,&local_90,&local_a0);
    local_c8 = (longlong)local_b8;
    local_d0 = (longlong)local_c0;
    plVar3 = *(longlong **)(param_2 + 0x38);
    if (plVar3 == *(longlong **)(param_2 + 0x40)) {
      FUN_148276a78(param_2 + 0x30,plVar3,&local_d0);
      plVar3 = *(longlong **)(param_2 + 0x38);
    }
    else {
      *plVar3 = local_d0;
      plVar3[1] = local_c8;
      plVar3 = (longlong *)(*(longlong *)(param_2 + 0x38) + 0x10);
      *(longlong **)(param_2 + 0x38) = plVar3;
    }
    local_b8 = (dVar8 - local_b8) + dVar8;
    local_c0 = (dVar6 - local_c0) + dVar6;
  }
  local_d0 = (longlong)local_c0;
  local_c8 = (longlong)local_b8;
  if (plVar3 == *(longlong **)(param_2 + 0x40)) {
    FUN_148276a78(param_2 + 0x30,plVar3,&local_d0);
  }
  else {
    *plVar3 = local_d0;
    plVar3[1] = local_c8;
    *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x38) + 0x10;
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148271ea6 FUN_148271ea6 body=203 status=ok
// SIG undefined FUN_148271ea6(void)

void FUN_148271ea6(double *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong param_5,double param_6)

{
  double dVar1;
  longlong *plVar2;
  double dVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  dVar3 = *param_1 / (param_6 + 1.0);
  param_4 = param_4 * 0x10;
  dVar1 = param_1[4];
  local_10 = (longlong)
             ((*(double *)((longlong)dVar1 + 8 + param_5 * 0x10) +
              *(double *)((longlong)dVar1 + 8 + param_4)) * dVar3) +
             *(longlong *)(*param_3 + 8 + param_4);
  local_18 = (longlong)
             ((*(double *)((longlong)dVar1 + param_5 * 0x10) +
              *(double *)((longlong)dVar1 + param_4)) * dVar3) + *(longlong *)(*param_3 + param_4);
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (plVar2 == *(longlong **)(param_2 + 0x40)) {
    FUN_148276a78(param_2 + 0x30,plVar2,&local_18);
  }
  else {
    *plVar2 = local_18;
    plVar2[1] = local_10;
    *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x38) + 0x10;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148271f72 FUN_148271f72 body=654 status=ok
// SIG undefined FUN_148271f72(void)

void FUN_148271f72(double *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong param_5,double param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar10 = param_4 * 0x10;
  lVar2 = *(longlong *)(*param_3 + lVar10);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = ABS(param_6) * param_1[3];
  auVar12 = roundsd(ZEXT816(0),auVar12,10);
  lVar3 = *(longlong *)(*param_3 + 8 + lVar10);
  param_6 = param_6 / (double)(int)auVar12._0_8_;
  dVar5 = sin(param_6);
  dVar6 = cos(param_6);
  dVar8 = *(double *)((longlong)param_1[4] + 8 + param_5 * 0x10) * *param_1;
  dVar7 = *param_1 * *(double *)((longlong)param_1[4] + param_5 * 0x10);
  if (param_4 == param_5) {
    dVar7 = -dVar7;
    dVar8 = -dVar8;
  }
  iVar11 = (int)auVar12._0_8_;
  lVar1 = param_2 + 0x30;
  local_a8 = (longlong)dVar8 + lVar3;
  local_b0 = (longlong)dVar7 + lVar2;
  plVar4 = *(longlong **)(param_2 + 0x38);
  if (plVar4 == *(longlong **)(param_2 + 0x40)) {
    FUN_148276a78(lVar1,plVar4,&local_b0);
  }
  else {
    *plVar4 = local_b0;
    plVar4[1] = local_a8;
    *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x38) + 0x10;
  }
  if (1 < iVar11) {
    iVar11 = iVar11 + -1;
    do {
      dVar9 = dVar7 * dVar5 + dVar6 * dVar8;
      dVar7 = dVar7 * dVar6 + dVar8 * -dVar5;
      local_a8 = (longlong)dVar9 + lVar3;
      local_b0 = (longlong)dVar7 + lVar2;
      plVar4 = *(longlong **)(param_2 + 0x38);
      if (plVar4 == *(longlong **)(param_2 + 0x40)) {
        FUN_148276a78(lVar1,plVar4,&local_b0);
      }
      else {
        *plVar4 = local_b0;
        plVar4[1] = local_a8;
        *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x38) + 0x10;
      }
      iVar11 = iVar11 + -1;
      dVar8 = dVar9;
    } while (iVar11 != 0);
  }
  local_a8 = (longlong)(*(double *)((longlong)param_1[4] + 8 + lVar10) * *param_1) +
             *(longlong *)(*param_3 + 8 + lVar10);
  local_b0 = (longlong)(*param_1 * *(double *)((longlong)param_1[4] + lVar10)) +
             *(longlong *)(*param_3 + lVar10);
  plVar4 = *(longlong **)(param_2 + 0x38);
  if (plVar4 == *(longlong **)(param_2 + 0x40)) {
    FUN_148276a78(lVar1,plVar4,&local_b0);
  }
  else {
    *plVar4 = local_b0;
    plVar4[1] = local_a8;
    *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x38) + 0x10;
  }
  if ((local_a0 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148272202 FUN_148272202 body=894 status=ok
// SIG undefined FUN_148272202(void)

void FUN_148272202(double *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  double _Y;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 *puVar17;
  double _X;
  double dVar18;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  double local_d0;
  longlong *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar4 = *param_5;
  dVar18 = param_1[4];
  lVar16 = param_4 * 0x10;
  dVar1 = *(double *)((longlong)dVar18 + lVar16);
  dVar2 = *(double *)((longlong)dVar18 + 8 + lVar16);
  dVar3 = *(double *)((longlong)dVar18 + lVar4 * 0x10);
  dVar18 = *(double *)((longlong)dVar18 + 8 + lVar4 * 0x10);
  dVar7 = dVar2 * dVar3 - dVar1 * dVar18;
  _X = dVar1 * dVar3 + dVar2 * dVar18;
  _Y = 1.0;
  if ((dVar7 <= 1.0) && (_Y = dVar7, dVar7 < -1.0)) {
    _Y = -1.0;
  }
  dVar7 = *param_1;
  if ((ABS(_Y) < 0.001 && 0.0 < _X) || (_Y * dVar7 < 0.0)) {
    dVar6 = (double)*(longlong *)(*param_3 + 8 + lVar16);
    lVar15 = (longlong)(dVar18 * dVar7 + dVar6);
    dVar18 = (double)*(longlong *)(*param_3 + lVar16);
    lVar14 = (longlong)(dVar3 * dVar7 + dVar18);
    lVar12 = (longlong)(dVar2 * dVar7 + dVar6);
    lVar13 = (longlong)(dVar1 * dVar7 + dVar18);
    lVar4 = param_2 + 0x30;
    plVar5 = *(longlong **)(param_2 + 0x38);
    local_b0 = lVar13;
    uStack_a8 = lVar12;
    local_a0 = lVar14;
    local_98 = lVar15;
    if (plVar5 == *(longlong **)(param_2 + 0x40)) {
      local_c0 = param_3;
      local_b8 = param_4;
      FUN_148276066(lVar4,plVar5,&local_a0);
      param_4 = local_b8;
      param_3 = local_c0;
    }
    else {
      *plVar5 = lVar14;
      plVar5[1] = lVar15;
      *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x38) + 0x10;
    }
    if ((lVar14 != lVar13) || (lVar15 != lVar12)) {
      puVar11 = *(undefined4 **)(param_2 + 0x38);
      if (ABS(_Y) >= 0.001 || 0.0 >= _X) {
        puVar17 = (undefined4 *)(lVar16 + *param_3);
        if (puVar11 == *(undefined4 **)(param_2 + 0x40)) {
          FUN_148276066(lVar4,puVar11,puVar17);
          puVar11 = *(undefined4 **)(param_2 + 0x38);
        }
        else {
          uVar8 = puVar17[1];
          uVar9 = puVar17[2];
          uVar10 = puVar17[3];
          *puVar11 = *puVar17;
          puVar11[1] = uVar8;
          puVar11[2] = uVar9;
          puVar11[3] = uVar10;
          puVar11 = (undefined4 *)(*(longlong *)(param_2 + 0x38) + 0x10);
          *(undefined4 **)(param_2 + 0x38) = puVar11;
        }
      }
      if (puVar11 == *(undefined4 **)(param_2 + 0x40)) {
        FUN_148276066(lVar4,puVar11,&local_b0);
      }
      else {
        *puVar11 = (undefined4)local_b0;
        puVar11[1] = local_b0._4_4_;
        puVar11[2] = (undefined4)uStack_a8;
        puVar11[3] = uStack_a8._4_4_;
        *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x38) + 0x10;
      }
    }
  }
  else {
    local_d8 = lVar4;
    if (*(int *)(param_1 + 0xd) == 2) {
      if (param_1[2] + -1.0 < _X) {
        local_d0 = _X;
        FUN_148271ea6(param_1,param_2,param_3);
        goto LAB_1482723b2;
      }
    }
    else if (*(int *)(param_1 + 0xd) == 1) {
      local_d0 = atan2(_Y,_X);
      local_d8 = *param_5;
      FUN_148271f72(param_1,param_2,param_3,param_4);
      goto LAB_1482723b2;
    }
    if (-0.001 <= _X) {
      local_d0 = _X;
      FUN_148271ea6(param_1,param_2,param_3);
    }
    else {
      FUN_148271aba(param_1,param_2,param_3);
    }
  }
LAB_1482723b2:
  *param_5 = param_4;
  if ((local_90 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148272582 FUN_148272582 body=189 status=ok
// SIG undefined FUN_148272582(void)

void FUN_148272582(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  ulonglong *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_2 + 0x30) != *(longlong *)(param_2 + 0x38)) {
    *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x30);
  }
  local_40 = (param_3[1] - *param_3 >> 4) - 1;
  if (param_3[1] != *param_3) {
    uVar1 = 0;
    do {
      uVar2 = uVar1;
      local_48 = &local_40;
      FUN_148272202(param_1,param_2,param_3,uVar2);
      uVar1 = uVar2 + 1;
      local_40 = uVar2;
    } while (uVar2 + 1 < (ulonglong)(param_3[1] - *param_3 >> 4));
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_1482744da(param_2 + 0x18,param_2 + 0x30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148272640 FUN_148272640 body=151 status=ok
// SIG undefined FUN_148272640(void)

void FUN_148272640(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148272582();
  puVar5 = (undefined8 *)*param_3;
  puVar1 = (undefined8 *)param_3[1];
  if (puVar5 != puVar1) {
    do {
      puVar6 = puVar1 + -2;
      if (puVar6 == puVar5) break;
      uVar2 = *puVar5;
      uVar3 = puVar5[1];
      uVar4 = puVar1[-1];
      *puVar5 = *puVar6;
      puVar5[1] = uVar4;
      local_38._0_4_ = (undefined4)uVar2;
      local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar3;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      *(undefined4 *)puVar6 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar1 + -0xc) = local_38._4_4_;
      *(undefined4 *)(puVar1 + -1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar1 + -4) = uStack_30._4_4_;
      puVar5 = puVar5 + 2;
      puVar1 = puVar6;
      local_38 = uVar2;
      uStack_30 = uVar3;
    } while (puVar6 != puVar5);
  }
  FUN_14827183e(param_1,param_3);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_148272582(param_1,param_2,param_3);
  return;
}



// FUNCTION 1482726d8 FUN_1482726d8 body=1008 status=ok
// SIG undefined FUN_1482726d8(void)

void FUN_1482726d8(double *param_1,longlong param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  double dVar16;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  int local_64;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar15 = *(longlong **)(param_2 + 0x30);
  plVar11 = *(longlong **)(param_2 + 0x38);
  if (plVar15 != *(longlong **)(param_2 + 0x38)) {
    *(longlong **)(param_2 + 0x38) = plVar15;
    plVar11 = plVar15;
  }
  lVar12 = param_2 + 0x30;
  if (param_4 == 4) {
    local_70 = 0x400921fb60000000;
    local_78 = (longlong *)0x0;
    FUN_148271f72(param_1,param_2,param_3,0);
  }
  else if (param_4 == 2) {
    local_50 = (longlong)((double)((longlong *)*param_3)[1] - ((double *)param_1[4])[1] * *param_1);
    dVar16 = *param_1 * *(double *)param_1[4];
    local_58 = (longlong)((double)*(longlong *)*param_3 - dVar16);
    if (plVar11 == *(longlong **)(param_2 + 0x40)) {
      FUN_148276a78(lVar12,dVar16,&local_58);
      plVar15 = *(longlong **)(param_2 + 0x38);
    }
    else {
      *plVar11 = local_58;
      plVar11[1] = local_50;
      plVar15 = (longlong *)(*(longlong *)(param_2 + 0x38) + 0x10);
      *(longlong **)(param_2 + 0x38) = plVar15;
    }
    dVar16 = ((double *)param_1[4])[1] * *param_1;
    local_50 = (longlong)dVar16 + ((longlong *)*param_3)[1];
    local_58 = (longlong)(*param_1 * *(double *)param_1[4]) + *(longlong *)*param_3;
    if (plVar15 == *(longlong **)(param_2 + 0x40)) {
      FUN_148276a78(lVar12,dVar16,&local_58);
    }
    else {
      *plVar15 = local_58;
      plVar15[1] = local_50;
      *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x38) + 0x10;
    }
  }
  else {
    local_78 = (longlong *)0x0;
    FUN_148271aba(param_1,param_2,param_3,0);
  }
  lVar14 = param_3[1] - *param_3 >> 4;
  plVar15 = (longlong *)(lVar14 - 1);
  local_58 = 0;
  if (plVar15 < (longlong *)0x2) {
    bVar10 = true;
    if (plVar15 == (longlong *)0x0) goto LAB_148272877;
  }
  else {
    lVar13 = 1;
    local_64 = param_4;
    local_60 = lVar12;
    do {
      local_78 = &local_58;
      FUN_148272202(param_1,param_2,param_3,lVar13);
      lVar1 = lVar13 - lVar14;
      lVar13 = lVar13 + 1;
      lVar12 = local_60;
      param_4 = local_64;
    } while (lVar1 != -2);
  }
  lVar14 = lVar14 * 0x10 + -8;
  plVar11 = plVar15;
  do {
    puVar3 = (ulonglong *)((longlong)param_1[4] + -0x18 + lVar14);
    uVar6 = puVar3[1];
    puVar4 = (ulonglong *)((longlong)param_1[4] + -8 + lVar14);
    *puVar4 = *puVar3 ^ 0x8000000000000000;
    puVar4[1] = uVar6 ^ 0x8000000000000000;
    lVar14 = lVar14 + -0x10;
    plVar11 = (longlong *)((longlong)plVar11 - 1);
  } while (plVar11 != (longlong *)0x0);
  bVar10 = false;
LAB_148272877:
  puVar5 = (undefined4 *)param_1[4];
  lVar14 = (longlong)plVar15 * 0x10;
  puVar2 = puVar5 + (longlong)plVar15 * 4;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  *puVar5 = *puVar2;
  puVar5[1] = uVar7;
  puVar5[2] = uVar8;
  puVar5[3] = uVar9;
  if (param_4 == 2) {
    local_50 = (longlong)
               ((double)*(longlong *)(*param_3 + 8 + lVar14) -
               *(double *)((longlong)param_1[4] + 8 + lVar14) * *param_1);
    local_58 = (longlong)
               ((double)*(longlong *)(*param_3 + lVar14) -
               *param_1 * *(double *)((longlong)param_1[4] + lVar14));
    plVar11 = *(longlong **)(param_2 + 0x38);
    if (plVar11 == *(longlong **)(param_2 + 0x40)) {
      FUN_148276a78(lVar12,plVar11,&local_58);
      plVar11 = *(longlong **)(param_2 + 0x38);
    }
    else {
      *plVar11 = local_58;
      plVar11[1] = local_50;
      plVar11 = (longlong *)(*(longlong *)(param_2 + 0x38) + 0x10);
      *(longlong **)(param_2 + 0x38) = plVar11;
    }
    dVar16 = *(double *)((longlong)param_1[4] + 8 + lVar14) * *param_1;
    local_50 = (longlong)dVar16 + *(longlong *)(*param_3 + 8 + lVar14);
    local_58 = (longlong)(*param_1 * *(double *)((longlong)param_1[4] + lVar14)) +
               *(longlong *)(*param_3 + lVar14);
    if (plVar11 == *(longlong **)(param_2 + 0x40)) {
      FUN_148276a78(lVar12,dVar16,&local_58);
    }
    else {
      *plVar11 = local_58;
      plVar11[1] = local_50;
      *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x38) + 0x10;
    }
  }
  else {
    local_78 = plVar15;
    if (param_4 == 4) {
      local_70 = 0x400921fb60000000;
      FUN_148271f72(param_1,param_2,param_3,plVar15);
    }
    else {
      FUN_148271aba(param_1,param_2,param_3,plVar15);
    }
  }
  local_58 = 0;
  if (!bVar10) {
    do {
      local_78 = &local_58;
      FUN_148272202(param_1,param_2,param_3,plVar15);
      plVar15 = (longlong *)((longlong)plVar15 - 1);
    } while (plVar15 != (longlong *)0x0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1482744da(param_2 + 0x18,lVar12);
  return;
}



// FUNCTION 148272aca FUN_148272aca body=1386 status=ok
// SIG undefined FUN_148272aca(void)

void FUN_148272aca(double *param_1,longlong *param_2,double param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_1b8 [32];
  int local_198;
  longlong *local_190;
  undefined **local_188;
  longlong lStack_180;
  longlong local_178;
  longlong *local_170;
  longlong local_168;
  undefined **local_158;
  longlong lStack_150;
  longlong local_148;
  undefined7 local_140;
  undefined4 uStack_139;
  undefined1 local_135;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined1 local_77;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (*(uint *)(param_2 + 10) != 0) {
    param_3 = ABS(param_3) * 0.5;
  }
  if (*(uint *)(param_2 + 10) < 2) {
    lVar9 = *param_2;
    if (param_2[1] - lVar9 == 0) {
      lVar5 = 0;
    }
    else {
      lVar8 = (param_2[1] - lVar9 >> 3) * -0x5555555555555555;
      lVar11 = -0x8000000000000000;
      lVar5 = 0;
      lVar10 = 0;
      lVar6 = 0;
      do {
        for (plVar12 = *(longlong **)(lVar9 + lVar10 * 0x18);
            plVar12 != *(longlong **)(lVar9 + 8 + lVar10 * 0x18); plVar12 = plVar12 + 2) {
          lVar2 = plVar12[1];
          if (lVar11 < lVar2) {
            lVar5 = lVar10;
            lVar6 = *plVar12;
            lVar11 = lVar2;
          }
          else if ((lVar2 == lVar11) && (*plVar12 < lVar6)) {
            lVar5 = lVar10;
            lVar6 = *plVar12;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar8 + (ulonglong)(lVar8 == 0));
    }
    dVar14 = (double)FUN_148273035(lVar9 + lVar5 * 0x18);
    if ((dVar14 == 0.0) && (!NAN(dVar14))) goto LAB_148272fdc;
    *(bool *)(param_2 + 9) = dVar14 < 0.0;
    if (dVar14 < 0.0) {
      param_3 = -param_3;
    }
  }
  else {
    *(undefined1 *)(param_2 + 9) = 0;
  }
  *param_1 = param_3;
  param_1[1] = ABS(param_3);
  iVar1 = *(int *)((longlong)param_2 + 0x4c);
  *(int *)(param_1 + 0xd) = iVar1;
  uVar13 = *(uint *)(param_2 + 10);
  if (uVar13 == 4 || iVar1 == 1) {
    dVar3 = ABS(param_3) * param_1[0x11];
    dVar14 = param_1[0xf];
    if (dVar14 <= 1e-12) {
      dVar14 = log10(dVar3 + 2.0);
      dVar14 = dVar14 * 0.25;
    }
    dVar14 = acos(1.0 - dVar14 / dVar3);
    dVar3 = (1.0 / (dVar14 + dVar14)) * 3.0 * param_1[0x12];
    dVar14 = param_1[0x13];
    if (dVar3 <= dVar14 || dVar14 <= 0.0) {
      dVar14 = dVar3;
    }
    param_1[3] = dVar14;
    uVar13 = *(uint *)(param_2 + 10);
  }
  lVar9 = *param_2;
  if (lVar9 != param_2[1]) {
    plVar12 = param_2 + 6;
    local_190 = param_2 + 3;
    do {
      FUN_148273103(&local_170,lVar9,uVar13 < 2);
      plVar4 = local_170;
      lVar5 = local_168 - (longlong)local_170 >> 4;
      if (lVar5 != 0) {
        if (lVar5 == 1) {
          FUN_148274782(plVar12);
          param_2[8] = 0;
          *plVar12 = 0;
          param_2[7] = 0;
          local_148 = 0;
          local_158 = (undefined **)0x0;
          lStack_150 = 0;
          FUN_148274782(&local_158);
          dVar14 = param_1[1];
          if (*(int *)((longlong)param_2 + 0x4c) == 1) {
            local_198 = (int)((param_1[3] + param_1[3]) * 3.1415927410125732);
            if (local_198 < 4) {
              local_198 = 3;
            }
            FUN_148273289(&local_158,plVar4,dVar14,dVar14);
            FUN_148274782(plVar12);
            param_2[6] = (longlong)local_158;
            param_2[7] = lStack_150;
            param_2[8] = local_148;
            local_158 = (undefined **)0x0;
            lStack_150 = 0;
            local_148 = 0;
            pppuVar7 = &local_158;
          }
          else {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = dVar14;
            auVar15 = roundsd(ZEXT816(0),auVar15,10);
            lVar6 = (longlong)(int)auVar15._0_8_;
            lVar5 = plVar4[1] + lVar6;
            local_148 = *plVar4 + lVar6;
            lStack_150 = plVar4[1] - lVar6;
            local_158 = (undefined **)(*plVar4 - lVar6);
            local_140 = (undefined7)lVar5;
            uStack_139._0_1_ = (undefined1)((ulonglong)lVar5 >> 0x38);
            pppuVar7 = &local_188;
            FUN_1482734ca(&local_158,pppuVar7);
            FUN_148274782(plVar12);
            param_2[6] = (longlong)local_188;
            param_2[7] = lStack_180;
            param_2[8] = local_178;
            local_188 = (undefined **)0x0;
            lStack_180 = 0;
            local_178 = 0;
          }
          FUN_148274782(pppuVar7);
          FUN_1482744da(local_190,plVar12);
        }
        else {
          FUN_14827183e(param_1,&local_170);
          if ((int)param_2[10] == 1) {
            FUN_148272640(param_1,param_2,&local_170);
          }
          else if ((int)param_2[10] == 0) {
            FUN_148272582();
          }
          else {
            FUN_1482726d8();
          }
        }
      }
      FUN_148274782(&local_170);
      lVar9 = lVar9 + 0x18;
    } while (lVar9 != param_2[1]);
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    lStack_150 = 0;
    local_148 = CONCAT44(local_148._4_4_,2);
    local_140 = 0;
    uStack_139 = 0;
    local_135 = 1;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_158 = &PTR_FUN_14ae71888;
    local_78 = 0;
    local_77 = *(char *)((longlong)param_1 + 0x82) != (char)param_2[9];
    FUN_14826b4e6(&local_158,param_2 + 3,0);
    FUN_14826ede6(&local_158,*(byte *)(param_2 + 9) | 2,param_2 + 3);
    FUN_14827362e(&local_158);
  }
  FUN_1482711a8(param_1 + 7,
                (param_2[4] - param_2[3] >> 3) * -0x5555555555555555 +
                ((longlong)param_1[8] - (longlong)param_1[7] >> 3) * -0x5555555555555555);
  lVar9 = param_2[3];
  lVar5 = param_2[4];
  if (lVar9 != lVar5) {
    do {
      FUN_1482744da(param_1 + 7,lVar9);
      lVar9 = lVar9 + 0x18;
    } while (lVar9 != lVar5);
    lVar9 = param_2[3];
    lVar5 = param_2[4];
  }
  if (lVar9 != lVar5) {
    do {
      FUN_148274782(lVar9);
      lVar9 = lVar9 + 0x18;
    } while (lVar9 != lVar5);
    param_2[4] = param_2[3];
  }
LAB_148272fdc:
  if ((local_70 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148273035 FUN_148273035 body=206 status=ok
// SIG undefined FUN_148273035(void)

double FUN_148273035(longlong *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  
  plVar3 = (longlong *)*param_1;
  plVar2 = (longlong *)param_1[1];
  uVar1 = (longlong)plVar2 - (longlong)plVar3;
  dVar8 = 0.0;
  if (0x20 < uVar1) {
    plVar5 = plVar2 + -2;
    if ((uVar1 & 0x10) != 0) {
      plVar2 = plVar5;
    }
    if (plVar3 != plVar2) {
      lVar6 = *plVar5;
      plVar3 = plVar3 + 2;
      plVar4 = plVar5;
      do {
        plVar5 = plVar3;
        lVar7 = lVar6 - plVar5[-2];
        lVar6 = *plVar5;
        dVar8 = (double)(plVar5[-2] - lVar6) * (double)(plVar5[-1] + plVar5[1]) +
                (double)lVar7 * (double)(plVar4[1] + plVar5[-1]) + dVar8;
        plVar3 = plVar5 + 4;
        plVar4 = plVar5;
      } while (plVar5 + 2 != plVar2);
      plVar3 = plVar5 + 2;
    }
    if ((uVar1 & 0x10) != 0) {
      dVar8 = dVar8 + (double)(*plVar5 - *plVar3) * (double)(plVar3[1] + plVar5[1]);
    }
    dVar8 = dVar8 * 0.5;
  }
  return dVar8;
}



// FUNCTION 148273103 FUN_148273103 body=389 status=ok
// SIG undefined FUN_148273103(void)

longlong * FUN_148273103(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong lStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = param_2[1];
  lVar1 = *param_2;
  if (lVar6 - lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1482768c2(param_1,lVar6 - lVar1 >> 4);
  plVar7 = (longlong *)*param_2;
  local_48 = *plVar7;
  lStack_40 = plVar7[1];
  local_58 = (undefined4)*plVar7;
  uStack_54 = *(undefined4 *)((longlong)plVar7 + 4);
  uStack_50 = (undefined4)plVar7[1];
  uStack_4c = *(undefined4 *)((longlong)plVar7 + 0xc);
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 == (undefined4 *)param_1[2]) {
    FUN_148276066(param_1,puVar2,&local_48);
  }
  else {
    uVar3 = *(undefined4 *)((longlong)plVar7 + 4);
    lVar6 = plVar7[1];
    uVar4 = *(undefined4 *)((longlong)plVar7 + 0xc);
    *puVar2 = (int)*plVar7;
    puVar2[1] = uVar3;
    puVar2[2] = (int)lVar6;
    puVar2[3] = uVar4;
    param_1[1] = (longlong)(puVar2 + 4);
  }
  plVar7 = plVar7 + 2;
  if (plVar7 != (longlong *)param_2[1]) {
    do {
      if ((*plVar7 != CONCAT44(uStack_54,local_58)) || (plVar7[1] != CONCAT44(uStack_4c,uStack_50)))
      {
        local_58 = (undefined4)*plVar7;
        uStack_54 = *(undefined4 *)((longlong)plVar7 + 4);
        uStack_50 = (undefined4)plVar7[1];
        uStack_4c = *(undefined4 *)((longlong)plVar7 + 0xc);
        puVar2 = (undefined4 *)param_1[1];
        if (puVar2 == (undefined4 *)param_1[2]) {
          FUN_148276066(param_1,puVar2,&local_58);
        }
        else {
          uVar3 = *(undefined4 *)((longlong)plVar7 + 4);
          lVar6 = plVar7[1];
          uVar4 = *(undefined4 *)((longlong)plVar7 + 0xc);
          *puVar2 = (int)*plVar7;
          puVar2[1] = uVar3;
          puVar2[2] = (int)lVar6;
          puVar2[3] = uVar4;
          param_1[1] = (longlong)(puVar2 + 4);
        }
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != (longlong *)param_2[1]);
  }
  if (param_3 != '\0') {
    lVar6 = param_1[1];
    uVar5 = lVar6 - *param_1;
    if (0x10 < uVar5) {
      if ((*(longlong *)(lVar6 + -0x10) == local_48) &&
         (lVar1 = lVar6, *(longlong *)(lVar6 + -8) == lStack_40)) {
        while( true ) {
          lVar6 = lVar1 + -0x10;
          uVar5 = uVar5 - 0x10;
          if (uVar5 < 0x11) break;
          if ((*(longlong *)(lVar1 + -0x20) != local_48) ||
             (plVar7 = (longlong *)(lVar1 + -0x18), lVar1 = lVar6, *plVar7 != lStack_40)) break;
        }
      }
      param_1[1] = lVar6;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148273289 FUN_148273289 body=576 status=ok
// SIG undefined FUN_148273289(void)

undefined8 *
FUN_148273289(undefined8 *param_1,longlong *param_2,double param_3,double param_4,int param_5)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 <= 0.0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_c8);
  }
  dVar2 = sin(6.2831854820251465 / (double)param_5);
  dVar3 = cos(6.2831854820251465 / (double)param_5);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1482768c2(param_1,param_5);
  local_98 = param_2[1];
  local_a0 = (longlong)((double)*param_2 + param_3);
  plVar1 = (longlong *)param_1[1];
  if (plVar1 == (longlong *)param_1[2]) {
    FUN_148276a78(param_1,plVar1,&local_a0);
  }
  else {
    *plVar1 = local_a0;
    plVar1[1] = local_98;
    param_1[1] = plVar1 + 2;
  }
  param_5 = param_5 + -1;
  dVar5 = dVar3;
  dVar4 = dVar2;
  do {
    local_98 = (longlong)
               ((double)(~-(ulonglong)(0.0 < param_4) & (ulonglong)param_3 |
                        (ulonglong)param_4 & -(ulonglong)(0.0 < param_4)) * dVar4 +
               (double)param_2[1]);
    local_a0 = (longlong)(param_3 * dVar5 + (double)*param_2);
    plVar1 = (longlong *)param_1[1];
    if (plVar1 == (longlong *)param_1[2]) {
      FUN_148276a78(param_1,plVar1,&local_a0);
    }
    else {
      *plVar1 = local_a0;
      plVar1[1] = local_98;
      param_1[1] = plVar1 + 2;
    }
    dVar6 = dVar2 * dVar5;
    dVar5 = dVar5 * dVar3 - dVar2 * dVar4;
    dVar4 = dVar4 * dVar3 + dVar6;
    param_5 = param_5 + -1;
  } while (param_5 != 0);
  if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1482734ca FUN_1482734ca body=354 status=ok
// SIG undefined FUN_1482734ca(void)

undefined8 * FUN_1482734ca(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_1482768c2(param_2,4);
  uVar1 = *(undefined4 *)((longlong)param_1 + 4);
  local_28 = *param_1;
  uVar2 = *(undefined4 *)(param_1 + 1);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
  uStack_20 = param_1[1];
  puVar5 = (undefined8 *)param_2[1];
  puVar4 = (undefined8 *)param_2[2];
  if (puVar5 == puVar4) {
    FUN_148276a78(param_2,puVar5,&local_28);
    puVar5 = (undefined8 *)param_2[1];
    puVar4 = (undefined8 *)param_2[2];
  }
  else {
    *(undefined4 *)puVar5 = *(undefined4 *)param_1;
    *(undefined4 *)((longlong)puVar5 + 4) = uVar1;
    *(undefined4 *)(puVar5 + 1) = uVar2;
    *(undefined4 *)((longlong)puVar5 + 0xc) = uVar3;
    puVar5 = puVar5 + 2;
    param_2[1] = puVar5;
  }
  uStack_20 = param_1[1];
  local_28 = param_1[2];
  if (puVar5 == puVar4) {
    FUN_148276a78(param_2,puVar5,&local_28);
    puVar5 = (undefined8 *)param_2[1];
    puVar4 = (undefined8 *)param_2[2];
  }
  else {
    *puVar5 = local_28;
    puVar5[1] = uStack_20;
    puVar5 = puVar5 + 2;
    param_2[1] = puVar5;
  }
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_28 = param_1[2];
  uVar2 = *(undefined4 *)(param_1 + 3);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_20 = param_1[3];
  if (puVar5 == puVar4) {
    FUN_148276a78(param_2,puVar5,&local_28);
    puVar5 = (undefined8 *)param_2[1];
    puVar4 = (undefined8 *)param_2[2];
  }
  else {
    *(undefined4 *)puVar5 = *(undefined4 *)(param_1 + 2);
    *(undefined4 *)((longlong)puVar5 + 4) = uVar1;
    *(undefined4 *)(puVar5 + 1) = uVar2;
    *(undefined4 *)((longlong)puVar5 + 0xc) = uVar3;
    puVar5 = puVar5 + 2;
    param_2[1] = puVar5;
  }
  local_28 = *param_1;
  uStack_20 = param_1[3];
  if (puVar5 == puVar4) {
    FUN_148276a78(param_2,puVar5,&local_28);
  }
  else {
    *puVar5 = local_28;
    puVar5[1] = uStack_20;
    param_2[1] = param_2[1] + 0x10;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827362e FUN_14827362e body=121 status=ok
// SIG undefined FUN_14827362e(void)

void FUN_14827362e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae71878;
  FUN_14826b252();
  FUN_14826b3c8(param_1);
  param_1[0xb] = param_1[8];
  *(undefined2 *)(param_1 + 4) = 0;
  FUN_148273d08(param_1 + 0x19);
  FUN_148273d5c(param_1 + 0x16);
  FUN_148273db0(param_1 + 0x13);
  FUN_148273e04(param_1 + 0xf);
  FUN_148273e58(param_1 + 0xc);
  FUN_148273eac(param_1 + 8);
  return;
}



// FUNCTION 1482736a8 FUN_1482736a8 body=745 status=ok
// SIG undefined FUN_1482736a8(void)

undefined8 * FUN_1482736a8(longlong param_1,undefined8 *param_2,double param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  double dVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_168 [32];
  undefined **local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined7 local_130;
  undefined4 uStack_129;
  undefined1 local_125;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_67;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar1 = (longlong *)(param_1 + 0x38);
  plVar2 = (longlong *)(param_1 + 0x40);
  lVar7 = *(longlong *)(param_1 + 0x38);
  lVar6 = *(longlong *)(param_1 + 0x40);
  if (lVar7 != lVar6) {
    do {
      FUN_148274782();
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != lVar6);
    lVar7 = *plVar1;
    *plVar2 = lVar7;
  }
  if (0.25 <= ABS(param_3)) {
    dVar3 = *(double *)(param_1 + 0x70);
    *(ulonglong *)(param_1 + 0x10) =
         (ulonglong)(2.0 / (dVar3 * dVar3)) & -(ulonglong)(1.0 < dVar3) |
         ~-(ulonglong)(1.0 < dVar3) & 0x4000000000000000;
    for (lVar6 = *(longlong *)(param_1 + 0x50); lVar6 != *(longlong *)(param_1 + 0x58);
        lVar6 = lVar6 + 0x58) {
      FUN_148272aca(param_1,lVar6);
    }
    if ((*(char *)(param_1 + 0x80) == '\x01') && (lVar6 != *(longlong *)(param_1 + 0x50))) {
      local_140 = 0;
      local_138 = 2;
      local_130 = 0;
      uStack_129 = 0;
      local_125 = 1;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      local_148 = &PTR_FUN_14ae71888;
      local_68 = 0;
      local_67 = *(char *)(param_1 + 0x82) != *(char *)(*(longlong *)(param_1 + 0x50) + 0x48);
      FUN_14826b4e6(&local_148,plVar1,0);
      FUN_14826ede6(&local_148,*(byte *)(*(longlong *)(param_1 + 0x50) + 0x48) | 2,plVar1);
      FUN_14827362e(&local_148);
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    FUN_148276b66(param_2,(*plVar2 - *plVar1 >> 3) * -0x5555555555555555,plVar1,plVar2);
    if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  plVar5 = *(longlong **)(param_1 + 0x50);
  plVar4 = *(longlong **)(param_1 + 0x58);
  lVar6 = lVar7;
  if (plVar5 != plVar4) {
    do {
      FUN_1482711a8(plVar1,(plVar5[1] - *plVar5 >> 3) * -0x5555555555555555 +
                           (*plVar2 - *plVar1 >> 3) * -0x5555555555555555);
      lVar7 = plVar5[1];
      for (lVar6 = *plVar5; lVar6 != lVar7; lVar6 = lVar6 + 0x18) {
        FUN_1482744da(plVar1,lVar6);
      }
      plVar5 = plVar5 + 0xb;
    } while (plVar5 != plVar4);
    lVar7 = *plVar2;
    lVar6 = *plVar1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_148276b66(param_2,(lVar7 - lVar6 >> 3) * -0x5555555555555555,plVar1,plVar2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_168);
}



// FUNCTION 148273992 FUN_148273992 body=237 status=ok
// SIG undefined FUN_148273992(void)

void FUN_148273992(longlong *param_1,ulonglong param_2,undefined1 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  longlong local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  undefined1 local_30 [16];
  longlong local_20;
  ulonglong local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = param_1[3];
  local_9 = param_3;
  if (param_2 < uVar2 || param_2 == uVar2) {
    if (param_2 < uVar2) {
      uVar1 = (uVar2 >> 5) + 0xf800000000000000;
      if (-1 < (longlong)uVar2) {
        uVar1 = uVar2 >> 5;
      }
      local_40 = *param_1 + uVar1 * 4;
      local_38 = (ulonglong)((uint)uVar2 & 0x1f);
      uVar2 = param_2 >> 5 | 0xf800000000000000;
      if (-1 < (longlong)param_2) {
        uVar2 = param_2 >> 5;
      }
      local_50 = *param_1 + uVar2 * 4;
      local_48 = (ulonglong)((uint)param_2 & 0x1f);
      FUN_148277d3a(param_1,local_30);
    }
  }
  else {
    uVar1 = uVar2 >> 5 | 0xf800000000000000;
    if (-1 < (longlong)uVar2) {
      uVar1 = uVar2 >> 5;
    }
    local_20 = uVar1 * 4 + *param_1;
    local_18 = (ulonglong)((uint)uVar2 & 0x1f);
    local_58 = &local_9;
    FUN_148277c8a(param_1,local_30);
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148273a80 FUN_148273a80 body=38 status=ok
// SIG undefined FUN_148273a80(void)

undefined8 FUN_148273a80(undefined8 param_1,int param_2)

{
  FUN_14827362e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148273aa6 FUN_148273aa6 body=43 status=ok
// SIG undefined FUN_148273aa6(void)

void FUN_148273aa6(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 148273ad2 FUN_148273ad2 body=54 status=ok
// SIG undefined FUN_148273ad2(void)

void FUN_148273ad2(longlong *param_1)

{
  FUN_148273b08(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148273b08 FUN_148273b08 body=128 status=ok
// SIG undefined FUN_148273b08(void)

void FUN_148273b08(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 148273b89 FUN_148273b89 body=43 status=ok
// SIG undefined FUN_148273b89(void)

void FUN_148273b89(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 148273bb4 FUN_148273bb4 body=38 status=ok
// SIG undefined FUN_148273bb4(void)

void FUN_148273bb4(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148267ee4(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 148273bda FUN_148273bda body=82 status=ok
// SIG undefined FUN_148273bda(void)

void FUN_148273bda(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 148273c2e FUN_148273c2e body=98 status=ok
// SIG undefined FUN_148273c2e(void)

void FUN_148273c2e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148273c90 FUN_148273c90 body=119 status=ok
// SIG undefined FUN_148273c90(void)

void FUN_148273c90(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_144721d4c(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148273d08 FUN_148273d08 body=82 status=ok
// SIG undefined FUN_148273d08(void)

void FUN_148273d08(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 148273d5c FUN_148273d5c body=82 status=ok
// SIG undefined FUN_148273d5c(void)

void FUN_148273d5c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 148273db0 FUN_148273db0 body=82 status=ok
// SIG undefined FUN_148273db0(void)

void FUN_148273db0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 148273e04 FUN_148273e04 body=82 status=ok
// SIG undefined FUN_148273e04(void)

void FUN_148273e04(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 148273e58 FUN_148273e58 body=82 status=ok
// SIG undefined FUN_148273e58(void)

void FUN_148273e58(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 148273eac FUN_148273eac body=82 status=ok
// SIG undefined FUN_148273eac(void)

void FUN_148273eac(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 148273eff FUN_148273eff body=369 status=ok
// SIG undefined FUN_148273eff(void)

void FUN_148273eff(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = (longlong)param_2 - (longlong)param_1;
  if (0x100 < (longlong)uVar5) {
    if (0 < (longlong)param_3) {
      puVar3 = param_2;
      do {
        FUN_148274129(&local_50,param_1,puVar3);
        puVar2 = local_48;
        param_2 = local_50;
        param_3 = (param_3 >> 2) + (param_3 >> 1);
        if ((longlong)local_50 - (longlong)param_1 < (longlong)puVar3 - (longlong)local_48) {
          FUN_148273eff(param_1,local_50,param_3);
          param_1 = puVar2;
          param_2 = puVar3;
        }
        else {
          FUN_148273eff(local_48,puVar3,param_3);
        }
        uVar5 = (longlong)param_2 - (longlong)param_1;
        if ((longlong)uVar5 < 0x101) goto LAB_148274064;
        puVar3 = param_2;
      } while (param_3 != 0);
    }
    uVar7 = uVar5 >> 4;
    do {
      uVar6 = uVar7 - 1;
      local_50 = (undefined8 *)param_1[uVar6];
      FUN_14827430e(param_1,uVar6,uVar5 >> 3,&local_50);
      bVar1 = 1 < uVar7;
      uVar7 = uVar6;
    } while (bVar1);
    lVar4 = (longlong)param_2 - (longlong)param_1;
    if (8 < lVar4) {
      do {
        param_2 = param_2 + -1;
        local_50 = (undefined8 *)*param_2;
        *param_2 = *param_1;
        lVar4 = lVar4 + -8;
        FUN_14827430e(param_1,0,lVar4 >> 3,&local_50);
      } while (8 < lVar4);
    }
    if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_148274064:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 148274129 FUN_148274129 body=485 status=ok
// SIG undefined FUN_148274129(void)

undefined8 * FUN_148274129(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  
  lVar11 = (longlong)param_3 - (longlong)param_2 >> 4;
  FUN_1482743d1(param_2,param_2 + lVar11,param_3 + -1);
  puVar6 = param_2 + lVar11;
  while (puVar8 = puVar6, param_2 < puVar8) {
    if (((*(longlong **)*puVar8)[1] != (*(longlong **)puVar8[-1])[1]) ||
       (puVar6 = puVar8 + -1, **(longlong **)puVar8[-1] != **(longlong **)*puVar8)) break;
  }
  puVar6 = param_2 + lVar11;
  while (puVar6 = puVar6 + 1, puVar7 = puVar6, puVar10 = puVar8, puVar6 < param_3) {
    if (((*(longlong **)*puVar8)[1] != (*(longlong **)*puVar6)[1]) ||
       (**(longlong **)*puVar6 != **(longlong **)*puVar8)) break;
  }
LAB_1482741bf:
  do {
    puVar4 = puVar8;
    if (puVar7 < param_3) {
      plVar1 = *(longlong **)*puVar7;
      lVar11 = plVar1[1];
      lVar2 = (*(longlong **)*puVar8)[1];
      bVar13 = SBORROW8(lVar11,lVar2);
      lVar3 = lVar11 - lVar2;
      bVar12 = false;
      if (lVar11 == lVar2) {
        lVar11 = *plVar1;
        lVar2 = **(longlong **)*puVar8;
        bVar13 = SBORROW8(lVar11,lVar2);
        lVar3 = lVar11 - lVar2;
        bVar12 = lVar11 == lVar2;
      }
      if (bVar13 == lVar3 < 0) {
        if (!bVar12 && bVar13 == lVar3 < 0) goto joined_r0x000148274205;
        if (puVar7 != puVar6) {
          uVar9 = *puVar6;
          *puVar6 = (longlong *)*puVar7;
          *puVar7 = uVar9;
        }
        puVar6 = puVar6 + 1;
      }
      puVar7 = puVar7 + 1;
      goto LAB_1482741bf;
    }
joined_r0x000148274205:
    while (puVar5 = puVar10, param_2 < puVar5) {
      puVar10 = puVar5 + -1;
      lVar11 = (*(longlong **)*puVar4)[1];
      plVar1 = *(longlong **)puVar5[-1];
      lVar2 = plVar1[1];
      bVar13 = SBORROW8(lVar11,lVar2);
      lVar3 = lVar11 - lVar2;
      bVar12 = lVar11 == lVar2;
      if (!bVar12) goto LAB_14827424c;
      lVar11 = **(longlong **)*puVar4;
      lVar2 = *plVar1;
      bVar13 = SBORROW8(lVar11,lVar2);
      lVar3 = lVar11 - lVar2;
      bVar12 = lVar11 == lVar2;
      if (lVar2 <= lVar11) goto LAB_148274236;
    }
LAB_148274261:
    if ((puVar7 == param_3) && (puVar5 == param_2)) {
      *param_1 = puVar4;
      param_1[1] = puVar6;
      return param_1;
    }
    if (puVar5 == param_2) {
      uVar9 = *puVar4;
      if (puVar6 != puVar7) {
        *puVar4 = *puVar6;
        *puVar6 = uVar9;
        uVar9 = *puVar4;
      }
      puVar6 = puVar6 + 1;
      *puVar4 = *puVar7;
      *puVar7 = uVar9;
      puVar8 = puVar4 + 1;
      puVar7 = puVar7 + 1;
      puVar10 = param_2;
    }
    else {
      puVar10 = puVar5 + -1;
      if (puVar7 == param_3) {
        puVar8 = puVar4 + -1;
        uVar9 = puVar4[-1];
        if (puVar5 != puVar4) {
          uVar9 = *puVar10;
          *puVar10 = puVar4[-1];
          *puVar8 = uVar9;
        }
        *puVar8 = puVar6[-1];
        puVar6[-1] = uVar9;
        puVar6 = puVar6 + -1;
      }
      else {
        uVar9 = *puVar7;
        *puVar7 = *puVar10;
        *puVar10 = uVar9;
        puVar7 = puVar7 + 1;
        puVar8 = puVar4;
      }
    }
  } while( true );
LAB_14827424c:
  if (lVar2 <= lVar11) {
LAB_148274236:
    if (!bVar12 && bVar13 == lVar3 < 0) goto LAB_148274261;
    puVar8 = puVar4 + -1;
    bVar12 = puVar5 != puVar4;
    puVar4 = puVar8;
    if (bVar12) {
      uVar9 = *puVar8;
      *puVar8 = (longlong *)puVar5[-1];
      *puVar10 = uVar9;
    }
  }
  goto joined_r0x000148274205;
}



// FUNCTION 14827430e FUN_14827430e body=195 status=ok
// SIG undefined FUN_14827430e(void)

void FUN_14827430e(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar7 = (longlong)(param_3 - 1) >> 1;
  lVar4 = param_2;
  while (lVar4 < lVar7) {
    plVar1 = (longlong *)**(longlong **)(param_1 + 8 + lVar4 * 0x10);
    plVar2 = (longlong *)**(longlong **)(param_1 + 0x10 + lVar4 * 0x10);
    lVar5 = plVar2[1];
    lVar3 = plVar1[1];
    bVar8 = SBORROW8(lVar3,lVar5);
    lVar6 = lVar3 - lVar5;
    if (lVar3 == lVar5) {
      lVar6 = *plVar1;
      lVar5 = *plVar2;
      bVar8 = SBORROW8(lVar6,lVar5);
      lVar6 = lVar6 - lVar5;
    }
    if (bVar8 == lVar6 < 0) {
      lVar5 = lVar4 * 2 + 2;
    }
    else {
      lVar5 = lVar4 * 2 + 1;
    }
    *(undefined8 *)(param_1 + lVar4 * 8) = *(undefined8 *)(param_1 + lVar5 * 8);
    lVar4 = lVar5;
  }
  if (((param_3 & 1) == 0) && (lVar4 == lVar7)) {
    *(undefined8 *)(param_1 + lVar7 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar4 = param_3 - 1;
  }
  while (param_2 < lVar4) {
    lVar6 = lVar4 + -1 >> 1;
    plVar1 = *(longlong **)(param_1 + lVar6 * 8);
    plVar2 = (longlong *)*plVar1;
    lVar7 = plVar2[1];
    lVar5 = (*(longlong **)*param_4)[1];
    bVar8 = SBORROW8(lVar5,lVar7);
    lVar3 = lVar5 - lVar7;
    if (lVar5 == lVar7) {
      lVar3 = **(longlong **)*param_4;
      lVar7 = *plVar2;
      bVar8 = SBORROW8(lVar3,lVar7);
      lVar3 = lVar3 - lVar7;
    }
    if (bVar8 == lVar3 < 0) break;
    *(longlong **)(param_1 + lVar4 * 8) = plVar1;
    lVar4 = lVar6;
  }
  *(undefined8 *)(param_1 + lVar4 * 8) = *param_4;
  return;
}



// FUNCTION 1482743d1 FUN_1482743d1 body=145 status=ok
// SIG undefined FUN_1482743d1(void)

void FUN_1482743d1(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_3 - param_1 >> 3;
  if (0x28 < lVar2) {
    uVar3 = lVar2 + 1;
    uVar1 = uVar3 >> 3;
    uVar3 = uVar3 & 0xfffffffffffffff8;
    FUN_148274462(param_1,param_1 + uVar3,param_1 + uVar1 * 0x10);
    FUN_148274462(param_2 - uVar3,param_2,param_2 + uVar3);
    FUN_148274462(param_3 + uVar1 * -0x10,param_3 - uVar3,param_3);
    param_1 = param_1 + uVar3;
    param_3 = param_3 - uVar3;
  }
  FUN_148274462(param_1,param_2,param_3);
  return;
}



// FUNCTION 148274462 FUN_148274462 body=120 status=ok
// SIG undefined FUN_148274462(void)

void FUN_148274462(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar4 = (longlong *)*param_2;
  plVar1 = *(longlong **)*param_1;
  lVar6 = plVar1[1];
  plVar5 = (longlong *)*plVar4;
  lVar2 = plVar5[1];
  if (lVar6 == lVar2) {
    if (*plVar5 <= *plVar1) goto LAB_14827449c;
  }
  else {
    bVar7 = lVar2 <= lVar6;
    lVar6 = lVar2;
    if (bVar7) goto LAB_14827449c;
  }
  *param_2 = (longlong *)*param_1;
  *param_1 = plVar4;
  plVar4 = (longlong *)*param_2;
  plVar5 = (longlong *)*plVar4;
  lVar6 = plVar5[1];
LAB_14827449c:
  plVar1 = (longlong *)*param_3;
  lVar2 = ((longlong *)*plVar1)[1];
  bVar7 = SBORROW8(lVar6,lVar2);
  lVar3 = lVar6 - lVar2;
  if (lVar6 == lVar2) {
    lVar3 = *(longlong *)*plVar1;
    bVar7 = SBORROW8(*plVar5,lVar3);
    lVar3 = *plVar5 - lVar3;
  }
  if (bVar7 != lVar3 < 0) {
    *param_3 = plVar4;
    *param_2 = plVar1;
    plVar4 = *(longlong **)*param_1;
    lVar6 = ((longlong *)*plVar1)[1];
    lVar2 = plVar4[1];
    bVar7 = SBORROW8(lVar2,lVar6);
    lVar3 = lVar2 - lVar6;
    if (lVar2 == lVar6) {
      lVar3 = *plVar4;
      lVar6 = *(longlong *)*plVar1;
      bVar7 = SBORROW8(lVar3,lVar6);
      lVar3 = lVar3 - lVar6;
    }
    if (bVar7 != lVar3 < 0) {
      *param_2 = (longlong *)*param_1;
      *param_1 = plVar1;
    }
  }
  return;
}



// FUNCTION 1482744da FUN_1482744da body=85 status=ok
// SIG undefined FUN_1482744da(void)

void FUN_1482744da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    FUN_148274530(param_1,puVar1);
    return;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN_1482746b2(puVar1,param_2[1] - *param_2 >> 4,param_2,param_2 + 1);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x18;
  return;
}



// FUNCTION 148274530 FUN_148274530 body=385 status=ok
// SIG undefined FUN_148274530(void)

longlong FUN_148274530(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  lVar1 = *param_1;
  lVar11 = (longlong)param_2 - lVar1;
  uVar12 = (param_1[1] - lVar1 >> 3) * -0x5555555555555555 + 1;
  uVar10 = (param_1[2] - lVar1 >> 3) * -0x5555555555555555;
  uVar7 = 0xaaaaaaaaaaaaaaa - (uVar10 >> 1);
  uVar13 = (uVar10 >> 1) + uVar10;
  if (uVar13 <= uVar12) {
    uVar13 = uVar12;
  }
  if (uVar7 <= uVar10 && uVar10 - uVar7 != 0) {
    uVar13 = 0xaaaaaaaaaaaaaaa;
  }
  puVar5 = (undefined8 *)FUN_148274882(uVar13);
  *(undefined8 *)((longlong)puVar5 + lVar11) = 0;
  ((undefined8 *)((longlong)puVar5 + lVar11))[1] = 0;
  *(undefined8 *)((longlong)puVar5 + lVar11 + 0x10) = 0;
  FUN_1482746b2((longlong)puVar5 + lVar11,param_3[1] - *param_3 >> 4,param_3,param_3 + 1);
  puVar6 = (undefined8 *)*param_1;
  puVar9 = (undefined8 *)param_1[1];
  puVar8 = puVar5;
  if (puVar9 == param_2) {
    for (; puVar6 != param_2; puVar6 = puVar6 + 3) {
      uVar2 = puVar6[2];
      puVar6[2] = 0;
      uVar3 = *puVar6;
      uVar4 = puVar6[1];
      *puVar6 = 0;
      puVar6[1] = 0;
      *puVar8 = uVar3;
      puVar8[1] = uVar4;
      puVar8[2] = uVar2;
      puVar8 = puVar8 + 3;
    }
  }
  else {
    if (puVar6 != param_2) {
      do {
        uVar2 = puVar6[2];
        puVar6[2] = 0;
        uVar3 = *puVar6;
        uVar4 = puVar6[1];
        *puVar6 = 0;
        puVar6[1] = 0;
        *puVar8 = uVar3;
        puVar8[1] = uVar4;
        puVar8[2] = uVar2;
        puVar6 = puVar6 + 3;
        puVar8 = puVar8 + 3;
      } while (puVar6 != param_2);
      puVar9 = (undefined8 *)param_1[1];
    }
    if (puVar9 != param_2) {
      puVar6 = (undefined8 *)((longlong)puVar5 + lVar11 + 0x28);
      do {
        uVar2 = param_2[2];
        param_2[2] = 0;
        uVar3 = *param_2;
        uVar4 = param_2[1];
        *param_2 = 0;
        param_2[1] = 0;
        puVar6[-2] = uVar3;
        puVar6[-1] = uVar4;
        *puVar6 = uVar2;
        param_2 = param_2 + 3;
        puVar6 = puVar6 + 3;
      } while (param_2 != puVar9);
    }
  }
  FUN_1482747e8(param_1,puVar5,uVar12,uVar13);
  return (longlong)puVar5 + lVar11;
}



// FUNCTION 1482746b2 FUN_1482746b2 body=113 status=ok
// SIG undefined FUN_1482746b2(void)

void FUN_1482746b2(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,longlong *param_4)

{
  code *pcVar1;
  void *_Dst;
  size_t _Size;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3c != 0) {
      FUN_148274724();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    _Dst = (void *)FUN_148274736(param_2);
    *param_1 = _Dst;
    param_1[1] = _Dst;
    param_1[2] = (void *)(param_2 * 0x10 + (longlong)_Dst);
    _Size = *param_4 - (longlong)*param_3;
    memmove(_Dst,(void *)*param_3,_Size);
    param_1[1] = _Size + (longlong)_Dst;
  }
  return;
}



// FUNCTION 148274724 FUN_148274724 body=16 status=ok
// SIG undefined FUN_148274724(void)

void FUN_148274724(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 148274736 FUN_148274736 body=75 status=ok
// SIG undefined FUN_148274736(void)

undefined8 FUN_148274736(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0xff < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 << 4);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 << 4,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 148274782 FUN_148274782 body=82 status=ok
// SIG undefined FUN_148274782(void)

void FUN_148274782(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1482747d6 FUN_1482747d6 body=16 status=ok
// SIG undefined FUN_1482747d6(void)

void FUN_1482747d6(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 1482747e8 FUN_1482747e8 body=152 status=ok
// SIG undefined FUN_1482747e8(void)

void FUN_1482747e8(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        FUN_148274782(lVar1);
        lVar1 = lVar1 + 0x18;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x18;
  param_1[2] = param_2 + param_4 * 0x18;
  return;
}



// FUNCTION 148274882 FUN_148274882 body=86 status=ok
// SIG undefined FUN_148274882(void)

undefined8 FUN_148274882(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0xaaaaaaaaaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0xaa < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 0x18);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 0x18,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1482748da FUN_1482748da body=118 status=ok
// SIG undefined FUN_1482748da(void)

void FUN_1482748da(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        FUN_148274782(lVar1);
        lVar1 = lVar1 + 0x18;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 148274952 FUN_148274952 body=198 status=ok
// SIG undefined FUN_148274952(void)

void FUN_148274952(longlong *param_1,void *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *pvVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *param_1;
  uVar4 = (param_1[1] - lVar1 >> 3) + 1;
  uVar3 = param_1[2] - lVar1 >> 3;
  uVar5 = (uVar3 >> 1) + uVar3;
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  if (0x1fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  _Dst = (void *)FUN_148274a82(uVar5);
  *(undefined8 *)((longlong)_Dst + ((longlong)param_2 - lVar1)) = *param_3;
  pvVar2 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar2 != param_2) {
    memmove((void *)((longlong)_Dst + ((longlong)param_2 - lVar1) + 8),param_2,
            param_1[1] - (longlong)param_2);
  }
  FUN_148274a18(param_1,_Dst,uVar4,uVar5);
  return;
}



// FUNCTION 148274a18 FUN_148274a18 body=104 status=ok
// SIG undefined FUN_148274a18(void)

void FUN_148274a18(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}



// FUNCTION 148274a82 FUN_148274a82 body=76 status=ok
// SIG undefined FUN_148274a82(void)

undefined8 FUN_148274a82(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x1ff < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 8);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 8,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 148274ad0 FUN_148274ad0 body=130 status=ok
// SIG undefined FUN_148274ad0(void)

void FUN_148274ad0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if ((undefined8 *)param_1[1] == (undefined8 *)param_1[2]) {
    FUN_148274b52(param_1);
    lVar5 = param_1[1];
  }
  else {
    *(undefined8 *)param_1[1] = *param_2;
    lVar5 = param_1[1] + 8;
    param_1[1] = lVar5;
  }
  lVar1 = *param_1;
  lVar3 = lVar5 - lVar1 >> 3;
  if (1 < lVar3) {
    lVar5 = *(longlong *)(lVar5 + -8);
    uVar4 = lVar3 - 1;
    uVar6 = lVar3 - 2;
    do {
      uVar7 = uVar6 >> 1;
      lVar3 = *(longlong *)(lVar1 + uVar7 * 8);
      if (lVar5 <= lVar3) goto LAB_148274b3a;
      *(longlong *)(lVar1 + uVar4 * 8) = lVar3;
      bVar2 = 1 < uVar6;
      uVar4 = uVar7;
      uVar6 = uVar7 - 1;
    } while (bVar2);
    uVar4 = 0;
LAB_148274b3a:
    *(longlong *)(lVar1 + uVar4 * 8) = lVar5;
  }
  return;
}



// FUNCTION 148274b52 FUN_148274b52 body=201 status=ok
// SIG undefined FUN_148274b52(void)

void FUN_148274b52(longlong *param_1,void *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *pvVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *param_1;
  uVar4 = (param_1[1] - lVar1 >> 3) + 1;
  uVar3 = param_1[2] - lVar1 >> 3;
  uVar5 = (uVar3 >> 1) + uVar3;
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  if (0x1fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  _Dst = (void *)FUN_148274c86(param_1,uVar5);
  *(undefined8 *)((longlong)_Dst + ((longlong)param_2 - lVar1)) = *param_3;
  pvVar2 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar2 != param_2) {
    memmove((void *)((longlong)_Dst + ((longlong)param_2 - lVar1) + 8),param_2,
            param_1[1] - (longlong)param_2);
  }
  FUN_148274c1c(param_1,_Dst,uVar4,uVar5);
  return;
}



// FUNCTION 148274c1c FUN_148274c1c body=104 status=ok
// SIG undefined FUN_148274c1c(void)

void FUN_148274c1c(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}



// FUNCTION 148274c86 FUN_148274c86 body=70 status=ok
// SIG undefined FUN_148274c86(void)

undefined8 FUN_148274c86(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x1ff < param_2) {
    uVar1 = FUN_140c1ca1d();
    return uVar1;
  }
  if (param_2 != 0) {
    uVar1 = FUN_14001cc68(param_2 * 8,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 148274cce FUN_148274cce body=104 status=ok
// SIG undefined FUN_148274cce(void)

void FUN_148274cce(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}



// FUNCTION 148274d38 FUN_148274d38 body=76 status=ok
// SIG undefined FUN_148274d38(void)

undefined8 FUN_148274d38(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x1ff < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 8);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 8,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 148274d86 FUN_148274d86 body=198 status=ok
// SIG undefined FUN_148274d86(void)

void FUN_148274d86(longlong *param_1,void *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *pvVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *param_1;
  uVar4 = (param_1[1] - lVar1 >> 3) + 1;
  uVar3 = param_1[2] - lVar1 >> 3;
  uVar5 = (uVar3 >> 1) + uVar3;
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  if (0x1fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  _Dst = (void *)FUN_148274eb6(uVar5);
  *(undefined8 *)((longlong)_Dst + ((longlong)param_2 - lVar1)) = *param_3;
  pvVar2 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar2 != param_2) {
    memmove((void *)((longlong)_Dst + ((longlong)param_2 - lVar1) + 8),param_2,
            param_1[1] - (longlong)param_2);
  }
  FUN_148274e4c(param_1,_Dst,uVar4,uVar5);
  return;
}



// FUNCTION 148274e4c FUN_148274e4c body=104 status=ok
// SIG undefined FUN_148274e4c(void)

void FUN_148274e4c(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}



// FUNCTION 148274eb6 FUN_148274eb6 body=76 status=ok
// SIG undefined FUN_148274eb6(void)

undefined8 FUN_148274eb6(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x1ff < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 8);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 8,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 148274f04 FUN_148274f04 body=198 status=ok
// SIG undefined FUN_148274f04(void)

void FUN_148274f04(longlong *param_1,void *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *pvVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *param_1;
  uVar4 = (param_1[1] - lVar1 >> 3) + 1;
  uVar3 = param_1[2] - lVar1 >> 3;
  uVar5 = (uVar3 >> 1) + uVar3;
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  if (0x1fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  _Dst = (void *)FUN_148274d38(uVar5);
  *(undefined8 *)((longlong)_Dst + ((longlong)param_2 - lVar1)) = *param_3;
  pvVar2 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar2 != param_2) {
    memmove((void *)((longlong)_Dst + ((longlong)param_2 - lVar1) + 8),param_2,
            param_1[1] - (longlong)param_2);
  }
  FUN_148274cce(param_1,_Dst,uVar4,uVar5);
  return;
}



// FUNCTION 148274fca FUN_148274fca body=211 status=ok
// SIG undefined FUN_148274fca(void)

void FUN_148274fca(longlong *param_1,void *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *_Dst;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar2 = *param_1;
  lVar9 = (longlong)param_2 - lVar2;
  uVar8 = (param_1[1] - lVar2 >> 5) + 1;
  uVar7 = param_1[2] - lVar2 >> 5;
  uVar10 = (uVar7 >> 1) + uVar7;
  if (uVar10 <= uVar8) {
    uVar10 = uVar8;
  }
  if (0x7ffffffffffffff - (uVar7 >> 1) < uVar7) {
    uVar10 = 0x7ffffffffffffff;
  }
  _Dst = (void *)FUN_14827510e(uVar10);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined8 *)((longlong)_Dst + lVar9) = *param_3;
  ((undefined8 *)((longlong)_Dst + lVar9))[1] = uVar4;
  puVar1 = (undefined8 *)((longlong)_Dst + lVar9 + 0x10);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  pvVar3 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar3 != param_2) {
    memmove((void *)((longlong)_Dst + lVar9 + 0x20),param_2,param_1[1] - (longlong)param_2);
  }
  FUN_14827509e(param_1,_Dst,uVar8,uVar10);
  return;
}



// FUNCTION 14827509e FUN_14827509e body=110 status=ok
// SIG undefined FUN_14827509e(void)

void FUN_14827509e(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x20 + param_2;
  param_1[2] = param_4 * 0x20 + param_2;
  return;
}



// FUNCTION 14827510e FUN_14827510e body=75 status=ok
// SIG undefined FUN_14827510e(void)

undefined8 FUN_14827510e(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x7f < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 << 5);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 << 5,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14827515a FUN_14827515a body=616 status=ok
// SIG undefined FUN_14827515a(void)

void FUN_14827515a(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar9 = (longlong)param_2 - (longlong)param_1;
  if ((longlong)uVar9 < 0x401) {
LAB_14827518c:
    plVar11 = param_1 + 4;
    plVar12 = param_1;
    if (param_1 + 4 != param_2 && param_1 != param_2) {
      do {
        plVar10 = plVar11;
        lVar13 = plVar12[4];
        lVar1 = plVar10[1];
        local_68 = (longlong *)plVar10[2];
        uStack_60 = (longlong *)plVar10[3];
        bVar6 = param_1[1] < lVar1;
        if (lVar1 == param_1[1]) {
          bVar6 = lVar13 < *param_1;
        }
        if (bVar6) {
          memmove((void *)((longlong)plVar12 + (0x40 - ((longlong)plVar10 - (longlong)param_1))),
                  param_1,(longlong)plVar10 - (longlong)param_1);
          plVar11 = param_1;
        }
        else {
          bVar6 = plVar10[-3] < lVar1;
          if (lVar1 == plVar10[-3]) {
            bVar6 = lVar13 < plVar10[-4];
          }
          plVar11 = plVar10;
          plVar12 = plVar10;
          if (bVar6) {
            do {
              plVar11 = plVar12 + -4;
              plVar12[2] = plVar12[-2];
              plVar12[3] = plVar12[-1];
              *plVar12 = plVar12[-4];
              plVar12[1] = plVar12[-3];
              bVar6 = plVar12[-7] < lVar1;
              if (lVar1 == plVar12[-7]) {
                bVar6 = lVar13 < plVar12[-8];
              }
              plVar12 = plVar11;
            } while (bVar6);
          }
        }
        *plVar11 = lVar13;
        plVar11[1] = lVar1;
        *(undefined4 *)(plVar11 + 2) = (undefined4)local_68;
        *(undefined4 *)((longlong)plVar11 + 0x14) = local_68._4_4_;
        *(undefined4 *)(plVar11 + 3) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_60._4_4_;
        plVar11 = plVar10 + 4;
        plVar12 = plVar10;
      } while (plVar10 + 4 != param_2);
    }
  }
  else {
    if (0 < (longlong)param_3) {
      plVar11 = param_2;
      do {
        FUN_1482753c3(&local_68,param_1,plVar11);
        plVar12 = uStack_60;
        param_2 = local_68;
        param_3 = (param_3 >> 2) + (param_3 >> 1);
        if ((longlong)local_68 - (longlong)param_1 < (longlong)plVar11 - (longlong)uStack_60) {
          FUN_14827515a(param_1,local_68,param_3);
          param_1 = plVar12;
          param_2 = plVar11;
        }
        else {
          FUN_14827515a(uStack_60,plVar11,param_3);
        }
        uVar9 = (longlong)param_2 - (longlong)param_1;
        if ((longlong)uVar9 < 0x401) goto LAB_14827518c;
        plVar11 = param_2;
      } while (param_3 != 0);
    }
    uVar14 = (uVar9 >> 6) + 1;
    plVar11 = param_1 + (uVar9 >> 6) * 4;
    do {
      local_68 = (longlong *)plVar11[-4];
      uStack_60 = (longlong *)plVar11[-3];
      local_58 = plVar11[-2];
      lStack_50 = plVar11[-1];
      FUN_14827578f(param_1,uVar14 - 2,uVar9 >> 5,&local_68);
      uVar14 = uVar14 - 1;
      plVar11 = plVar11 + -4;
    } while (1 < uVar14);
    lVar13 = (longlong)param_2 - (longlong)param_1;
    if (0x20 < lVar13) {
      do {
        plVar11 = param_2 + -4;
        local_68 = (longlong *)*plVar11;
        uStack_60 = (longlong *)param_2[-3];
        local_58 = param_2[-2];
        lStack_50 = param_2[-1];
        uVar2 = *(undefined4 *)((longlong)param_1 + 4);
        lVar1 = param_1[1];
        uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
        lVar7 = param_1[2];
        uVar4 = *(undefined4 *)((longlong)param_1 + 0x14);
        lVar8 = param_1[3];
        uVar5 = *(undefined4 *)((longlong)param_1 + 0x1c);
        *(int *)plVar11 = (int)*param_1;
        *(undefined4 *)((longlong)param_2 + -0x1c) = uVar2;
        *(int *)(param_2 + -3) = (int)lVar1;
        *(undefined4 *)((longlong)param_2 + -0x14) = uVar3;
        *(int *)(param_2 + -2) = (int)lVar7;
        *(undefined4 *)((longlong)param_2 + -0xc) = uVar4;
        *(int *)(param_2 + -1) = (int)lVar8;
        *(undefined4 *)((longlong)param_2 + -4) = uVar5;
        lVar13 = lVar13 + -0x20;
        FUN_14827578f(param_1,0,lVar13 >> 5,&local_68);
        param_2 = plVar11;
      } while (0x20 < lVar13);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482753c3 FUN_1482753c3 body=971 status=ok
// SIG undefined FUN_1482753c3(void)

undefined8 * FUN_1482753c3(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar14 = (longlong)param_3 - (longlong)param_2 >> 6;
  FUN_1482758c8(param_2,param_2 + lVar14 * 4,param_3 + -4);
  plVar9 = param_2 + lVar14 * 4;
  do {
    plVar12 = plVar9;
    if (plVar12 <= param_2) break;
    lVar1 = plVar12[-3];
    lVar2 = plVar12[1];
    bVar7 = lVar2 < lVar1;
    if (lVar1 == lVar2) {
      bVar7 = plVar12[-4] < *plVar12;
    }
    if (bVar7) break;
    bVar7 = lVar1 < lVar2;
    if (lVar2 == lVar1) {
      bVar7 = *plVar12 < plVar12[-4];
    }
    plVar9 = plVar12 + -4;
  } while (!bVar7);
  plVar9 = param_2 + lVar14 * 4;
  do {
    plVar10 = plVar9 + 4;
    plVar11 = plVar10;
    plVar13 = plVar12;
    if (param_3 <= plVar10) break;
    lVar14 = plVar9[5];
    lVar1 = plVar12[1];
    bVar7 = lVar1 < lVar14;
    if (lVar14 == lVar1) {
      bVar7 = *plVar10 < *plVar12;
    }
    if (bVar7) break;
    bVar7 = lVar14 < lVar1;
    if (lVar1 == lVar14) {
      bVar7 = *plVar12 < *plVar10;
    }
    plVar9 = plVar10;
  } while (!bVar7);
LAB_1482754c2:
  do {
    if (plVar11 < param_3) {
      lVar14 = plVar12[1];
      lVar1 = plVar11[1];
      bVar7 = lVar1 < lVar14;
      if (lVar14 == lVar1) {
        bVar7 = *plVar12 < *plVar11;
      }
      if (!bVar7) {
        bVar7 = lVar14 < lVar1;
        if (lVar1 == lVar14) {
          bVar7 = *plVar11 < *plVar12;
        }
        if (bVar7) goto joined_r0x000148275556;
        if (plVar11 != plVar10) {
          lVar14 = *plVar10;
          lVar1 = plVar10[1];
          local_58 = plVar10[2];
          lStack_50 = plVar10[3];
          lVar2 = *plVar11;
          lVar3 = plVar11[1];
          lVar4 = plVar11[3];
          plVar10[2] = plVar11[2];
          plVar10[3] = lVar4;
          *plVar10 = lVar2;
          plVar10[1] = lVar3;
          local_68._0_4_ = (undefined4)lVar14;
          local_68._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
          uStack_60._0_4_ = (undefined4)lVar1;
          uStack_60._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
          plVar11[2] = local_58;
          plVar11[3] = lStack_50;
          *(undefined4 *)plVar11 = (undefined4)local_68;
          *(undefined4 *)((longlong)plVar11 + 4) = local_68._4_4_;
          *(undefined4 *)(plVar11 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_60._4_4_;
          local_68 = lVar14;
          uStack_60 = lVar1;
        }
        plVar10 = plVar10 + 4;
      }
      plVar11 = plVar11 + 4;
      goto LAB_1482754c2;
    }
joined_r0x000148275556:
    while (plVar8 = plVar13, plVar9 = plVar12, plVar12 = plVar9, param_2 < plVar8) {
      plVar13 = plVar8 + -4;
      lVar14 = plVar8[-3];
      lVar1 = plVar9[1];
      bVar7 = lVar1 < lVar14;
      if (lVar14 == lVar1) {
        bVar7 = plVar8[-4] < *plVar9;
      }
      if (!bVar7) {
        bVar7 = lVar14 < lVar1;
        if (lVar1 == lVar14) {
          bVar7 = *plVar9 < plVar8[-4];
        }
        if (bVar7) break;
        plVar12 = plVar9 + -4;
        if (plVar8 != plVar9) {
          lVar14 = *plVar12;
          lVar1 = plVar9[-3];
          local_58 = plVar9[-2];
          lStack_50 = plVar9[-1];
          lVar2 = *plVar13;
          lVar3 = plVar8[-3];
          lVar4 = plVar8[-1];
          plVar9[-2] = plVar8[-2];
          plVar9[-1] = lVar4;
          *plVar12 = lVar2;
          plVar9[-3] = lVar3;
          local_68._0_4_ = (undefined4)lVar14;
          local_68._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
          uStack_60._0_4_ = (undefined4)lVar1;
          uStack_60._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
          plVar8[-2] = local_58;
          plVar8[-1] = lStack_50;
          *(undefined4 *)plVar13 = (undefined4)local_68;
          *(undefined4 *)((longlong)plVar8 + -0x1c) = local_68._4_4_;
          *(undefined4 *)(plVar8 + -3) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)plVar8 + -0x14) = uStack_60._4_4_;
          local_68 = lVar14;
          uStack_60 = lVar1;
        }
      }
    }
    if ((plVar11 == param_3) && (plVar8 == param_2)) {
      *param_1 = plVar9;
      param_1[1] = plVar10;
      if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
    if (plVar8 == param_2) {
      if (plVar10 != plVar11) {
        lVar14 = *plVar9;
        lVar1 = plVar9[1];
        lVar2 = plVar9[2];
        lVar3 = plVar9[3];
        lVar4 = *plVar10;
        lVar5 = plVar10[1];
        lVar6 = plVar10[3];
        plVar9[2] = plVar10[2];
        plVar9[3] = lVar6;
        *plVar9 = lVar4;
        plVar9[1] = lVar5;
        plVar10[2] = lVar2;
        plVar10[3] = lVar3;
        *plVar10 = lVar14;
        plVar10[1] = lVar1;
      }
      plVar10 = plVar10 + 4;
      lVar14 = *plVar9;
      lVar1 = plVar9[1];
      local_58 = plVar9[2];
      lStack_50 = plVar9[3];
      lVar2 = *plVar11;
      lVar3 = plVar11[1];
      lVar4 = plVar11[3];
      plVar9[2] = plVar11[2];
      plVar9[3] = lVar4;
      *plVar9 = lVar2;
      plVar9[1] = lVar3;
      local_68._0_4_ = (undefined4)lVar14;
      local_68._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
      uStack_60._0_4_ = (undefined4)lVar1;
      uStack_60._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
      plVar11[2] = local_58;
      plVar11[3] = lStack_50;
      *(undefined4 *)plVar11 = (undefined4)local_68;
      *(undefined4 *)((longlong)plVar11 + 4) = local_68._4_4_;
      *(undefined4 *)(plVar11 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_60._4_4_;
      plVar12 = plVar9 + 4;
      plVar11 = plVar11 + 4;
      plVar13 = param_2;
      local_68 = lVar14;
      uStack_60 = lVar1;
    }
    else {
      plVar13 = plVar8 + -4;
      if (plVar11 == param_3) {
        plVar12 = plVar9 + -4;
        if (plVar8 != plVar9) {
          lVar14 = *plVar13;
          lVar1 = plVar8[-3];
          lVar2 = plVar8[-2];
          lVar3 = plVar8[-1];
          lVar4 = *plVar12;
          lVar5 = plVar9[-3];
          lVar6 = plVar9[-1];
          plVar8[-2] = plVar9[-2];
          plVar8[-1] = lVar6;
          *plVar13 = lVar4;
          plVar8[-3] = lVar5;
          plVar9[-2] = lVar2;
          plVar9[-1] = lVar3;
          *plVar12 = lVar14;
          plVar9[-3] = lVar1;
        }
        lVar14 = *plVar12;
        lVar1 = plVar9[-3];
        local_58 = plVar9[-2];
        lStack_50 = plVar9[-1];
        lVar2 = plVar10[-4];
        lVar3 = plVar10[-3];
        lVar4 = plVar10[-1];
        plVar9[-2] = plVar10[-2];
        plVar9[-1] = lVar4;
        *plVar12 = lVar2;
        plVar9[-3] = lVar3;
        local_68._0_4_ = (undefined4)lVar14;
        local_68._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
        uStack_60._0_4_ = (undefined4)lVar1;
        uStack_60._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
        plVar10[-2] = local_58;
        plVar10[-1] = lStack_50;
        *(undefined4 *)(plVar10 + -4) = (undefined4)local_68;
        *(undefined4 *)((longlong)plVar10 + -0x1c) = local_68._4_4_;
        *(undefined4 *)(plVar10 + -3) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)plVar10 + -0x14) = uStack_60._4_4_;
        plVar10 = plVar10 + -4;
        local_68 = lVar14;
        uStack_60 = lVar1;
      }
      else {
        lVar14 = *plVar11;
        lVar1 = plVar11[1];
        local_58 = plVar11[2];
        lStack_50 = plVar11[3];
        lVar2 = *plVar13;
        lVar3 = plVar8[-3];
        lVar4 = plVar8[-1];
        plVar11[2] = plVar8[-2];
        plVar11[3] = lVar4;
        *plVar11 = lVar2;
        plVar11[1] = lVar3;
        local_68._0_4_ = (undefined4)lVar14;
        local_68._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
        uStack_60._0_4_ = (undefined4)lVar1;
        uStack_60._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
        plVar8[-2] = local_58;
        plVar8[-1] = lStack_50;
        *(undefined4 *)plVar13 = (undefined4)local_68;
        *(undefined4 *)((longlong)plVar8 + -0x1c) = local_68._4_4_;
        *(undefined4 *)(plVar8 + -3) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)plVar8 + -0x14) = uStack_60._4_4_;
        plVar11 = plVar11 + 4;
        local_68 = lVar14;
        uStack_60 = lVar1;
      }
    }
  } while( true );
}



// FUNCTION 14827578f FUN_14827578f body=313 status=ok
// SIG undefined FUN_14827578f(void)

void FUN_14827578f(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  
  lVar1 = param_3 - 1;
  lVar15 = lVar1 >> 1;
  lVar10 = param_2;
  while (lVar10 < lVar15) {
    lVar13 = lVar10 * 2 + 2;
    lVar11 = lVar10 * 2 + 1;
    lVar12 = lVar11 * 0x20;
    lVar16 = lVar13 * 0x20;
    lVar4 = *(longlong *)(param_1 + 8 + lVar16);
    lVar5 = *(longlong *)(param_1 + 8 + lVar12);
    bVar9 = lVar5 < lVar4;
    if (lVar4 == lVar5) {
      bVar9 = *(longlong *)(param_1 + lVar16) < *(longlong *)(param_1 + lVar12);
    }
    if (!bVar9) {
      lVar11 = lVar13;
    }
    puVar2 = (undefined8 *)(param_1 + lVar11 * 0x20);
    uVar6 = *puVar2;
    uVar7 = puVar2[1];
    puVar2 = (undefined8 *)(param_1 + 0x10 + lVar11 * 0x20);
    uVar8 = puVar2[1];
    puVar14 = (undefined8 *)(param_1 + 0x10 + lVar10 * 0x20);
    *puVar14 = *puVar2;
    puVar14[1] = uVar8;
    puVar2 = (undefined8 *)(param_1 + lVar10 * 0x20);
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    lVar10 = lVar11;
  }
  if (((param_3 & 1) == 0) && (lVar10 == lVar15)) {
    puVar2 = (undefined8 *)(param_1 + lVar1 * 0x20);
    uVar6 = *puVar2;
    uVar7 = puVar2[1];
    puVar2 = (undefined8 *)(param_1 + 0x10 + lVar1 * 0x20);
    uVar8 = puVar2[1];
    puVar14 = (undefined8 *)(param_1 + 0x10 + lVar15 * 0x20);
    *puVar14 = *puVar2;
    puVar14[1] = uVar8;
    puVar2 = (undefined8 *)(param_1 + lVar15 * 0x20);
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    lVar10 = lVar1;
  }
  while (param_2 < lVar10) {
    lVar15 = lVar10 + -1 >> 1;
    lVar13 = lVar15 * 0x20;
    lVar1 = *(longlong *)(param_1 + 8 + lVar13);
    bVar9 = param_4[1] < lVar1;
    if (lVar1 == param_4[1]) {
      bVar9 = *(longlong *)(param_1 + lVar13) < *param_4;
    }
    if (!bVar9) break;
    puVar14 = (undefined8 *)(lVar13 + param_1);
    uVar6 = *puVar14;
    uVar7 = puVar14[1];
    uVar8 = puVar14[3];
    puVar2 = (undefined8 *)(param_1 + 0x10 + lVar10 * 0x20);
    *puVar2 = puVar14[2];
    puVar2[1] = uVar8;
    puVar2 = (undefined8 *)(param_1 + lVar10 * 0x20);
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    lVar10 = lVar15;
  }
  lVar1 = *param_4;
  lVar15 = param_4[1];
  lVar13 = param_4[3];
  plVar3 = (longlong *)(param_1 + 0x10 + lVar10 * 0x20);
  *plVar3 = param_4[2];
  plVar3[1] = lVar13;
  plVar3 = (longlong *)(param_1 + lVar10 * 0x20);
  *plVar3 = lVar1;
  plVar3[1] = lVar15;
  return;
}



// FUNCTION 1482758c8 FUN_1482758c8 body=1454 status=ok
// SIG undefined FUN_1482758c8(void)

void FUN_1482758c8(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar10 = (longlong)param_3 - (longlong)param_1 >> 5;
  if (lVar10 < 0x29) {
    lVar10 = *param_2;
    lVar8 = param_2[1];
    bVar2 = param_1[1] < lVar8;
    if (lVar8 == param_1[1]) {
      bVar2 = lVar10 < *param_1;
    }
    if (bVar2) {
      lVar3 = *param_2;
      lVar4 = param_2[1];
      lVar5 = param_2[2];
      lVar6 = param_2[3];
      lVar10 = *param_1;
      lVar8 = param_1[1];
      lVar7 = param_1[3];
      param_2[2] = param_1[2];
      param_2[3] = lVar7;
      *param_2 = lVar10;
      param_2[1] = lVar8;
      local_48._0_4_ = (undefined4)lVar3;
      local_48._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      uStack_40._0_4_ = (undefined4)lVar4;
      uStack_40._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
      local_38._0_4_ = (undefined4)lVar5;
      local_38._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
      uStack_30._0_4_ = (undefined4)lVar6;
      uStack_30._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
      *(undefined4 *)(param_1 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_1 + 0x14) = local_38._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_30._4_4_;
      *(undefined4 *)param_1 = (undefined4)local_48;
      *(undefined4 *)((longlong)param_1 + 4) = local_48._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_40._4_4_;
      lVar10 = *param_2;
      lVar8 = param_2[1];
      local_48 = lVar3;
      uStack_40 = lVar4;
      local_38 = lVar5;
      uStack_30 = lVar6;
    }
    bVar2 = lVar8 < param_3[1];
    if (param_3[1] == lVar8) {
      bVar2 = *param_3 < lVar10;
    }
    if (bVar2) {
      lVar10 = *param_3;
      lVar8 = param_3[1];
      lVar3 = param_3[2];
      lVar4 = param_3[3];
      lVar5 = *param_2;
      lVar6 = param_2[1];
      lVar7 = param_2[3];
      param_3[2] = param_2[2];
      param_3[3] = lVar7;
      *param_3 = lVar5;
      param_3[1] = lVar6;
      local_48._0_4_ = (undefined4)lVar10;
      local_48._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
      uStack_40._0_4_ = (undefined4)lVar8;
      uStack_40._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
      local_38._0_4_ = (undefined4)lVar3;
      local_38._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      uStack_30._0_4_ = (undefined4)lVar4;
      uStack_30._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
      *(undefined4 *)(param_2 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_2 + 0x14) = local_38._4_4_;
      *(undefined4 *)(param_2 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_30._4_4_;
      *(undefined4 *)param_2 = (undefined4)local_48;
      *(undefined4 *)((longlong)param_2 + 4) = local_48._4_4_;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_40._4_4_;
      bVar2 = param_1[1] < param_2[1];
      if (param_2[1] == param_1[1]) {
        bVar2 = *param_2 < *param_1;
      }
      local_48 = lVar10;
      uStack_40 = lVar8;
      local_38 = lVar3;
      uStack_30 = lVar4;
      if (bVar2) {
        lVar10 = *param_2;
        lVar8 = param_2[1];
        lVar3 = param_2[2];
        lVar4 = param_2[3];
        lVar5 = *param_1;
        lVar6 = param_1[1];
        lVar7 = param_1[3];
        param_2[2] = param_1[2];
        param_2[3] = lVar7;
        *param_2 = lVar5;
        param_2[1] = lVar6;
        local_48._0_4_ = (undefined4)lVar10;
        local_48._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
        uStack_40._0_4_ = (undefined4)lVar8;
        uStack_40._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
        local_38._0_4_ = (undefined4)lVar3;
        local_38._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
        uStack_30._0_4_ = (undefined4)lVar4;
        uStack_30._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
        *(undefined4 *)(param_1 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)param_1 + 0x14) = local_38._4_4_;
        *(undefined4 *)(param_1 + 3) = (undefined4)uStack_30;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_30._4_4_;
        *(undefined4 *)param_1 = (undefined4)local_48;
        *(undefined4 *)((longlong)param_1 + 4) = local_48._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_40._4_4_;
        local_48 = lVar10;
        uStack_40 = lVar8;
        local_38 = lVar3;
        uStack_30 = lVar4;
      }
    }
  }
  else {
    uVar11 = lVar10 + 1U >> 3;
    plVar12 = param_1 + uVar11 * 8;
    plVar1 = param_1 + uVar11 * 4;
    lVar10 = param_1[uVar11 * 4];
    lVar8 = param_1[uVar11 * 4 + 1];
    bVar2 = param_1[1] < lVar8;
    if (lVar8 == param_1[1]) {
      bVar2 = lVar10 < *param_1;
    }
    if (bVar2) {
      lVar3 = *plVar1;
      lVar4 = plVar1[1];
      lVar5 = plVar1[2];
      lVar6 = plVar1[3];
      lVar10 = *param_1;
      lVar8 = param_1[1];
      lVar7 = param_1[3];
      plVar1[2] = param_1[2];
      plVar1[3] = lVar7;
      *plVar1 = lVar10;
      plVar1[1] = lVar8;
      local_48._0_4_ = (undefined4)lVar3;
      local_48._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      uStack_40._0_4_ = (undefined4)lVar4;
      uStack_40._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
      local_38._0_4_ = (undefined4)lVar5;
      local_38._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
      uStack_30._0_4_ = (undefined4)lVar6;
      uStack_30._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
      *(undefined4 *)(param_1 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_1 + 0x14) = local_38._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_30._4_4_;
      *(undefined4 *)param_1 = (undefined4)local_48;
      *(undefined4 *)((longlong)param_1 + 4) = local_48._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_40._4_4_;
      lVar10 = *plVar1;
      lVar8 = plVar1[1];
      local_48 = lVar3;
      uStack_40 = lVar4;
      local_38 = lVar5;
      uStack_30 = lVar6;
    }
    bVar2 = lVar8 < plVar12[1];
    if (plVar12[1] == lVar8) {
      bVar2 = *plVar12 < lVar10;
    }
    if (bVar2) {
      lVar10 = *plVar12;
      lVar8 = plVar12[1];
      lVar3 = plVar12[2];
      lVar4 = plVar12[3];
      lVar5 = *plVar1;
      lVar6 = plVar1[1];
      lVar7 = plVar1[3];
      plVar12[2] = plVar1[2];
      plVar12[3] = lVar7;
      *plVar12 = lVar5;
      plVar12[1] = lVar6;
      local_48._0_4_ = (undefined4)lVar10;
      local_48._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
      uStack_40._0_4_ = (undefined4)lVar8;
      uStack_40._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
      local_38._0_4_ = (undefined4)lVar3;
      local_38._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      uStack_30._0_4_ = (undefined4)lVar4;
      uStack_30._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
      *(undefined4 *)(plVar1 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar1 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar1 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_30._4_4_;
      *(undefined4 *)plVar1 = (undefined4)local_48;
      *(undefined4 *)((longlong)plVar1 + 4) = local_48._4_4_;
      *(undefined4 *)(plVar1 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uStack_40._4_4_;
      bVar2 = param_1[1] < plVar1[1];
      if (plVar1[1] == param_1[1]) {
        bVar2 = *plVar1 < *param_1;
      }
      local_48 = lVar10;
      uStack_40 = lVar8;
      local_38 = lVar3;
      uStack_30 = lVar4;
      if (bVar2) {
        lVar10 = *plVar1;
        lVar8 = plVar1[1];
        lVar3 = plVar1[2];
        lVar4 = plVar1[3];
        lVar5 = *param_1;
        lVar6 = param_1[1];
        lVar7 = param_1[3];
        plVar1[2] = param_1[2];
        plVar1[3] = lVar7;
        *plVar1 = lVar5;
        plVar1[1] = lVar6;
        local_48._0_4_ = (undefined4)lVar10;
        local_48._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
        uStack_40._0_4_ = (undefined4)lVar8;
        uStack_40._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
        local_38._0_4_ = (undefined4)lVar3;
        local_38._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
        uStack_30._0_4_ = (undefined4)lVar4;
        uStack_30._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
        *(undefined4 *)(param_1 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)param_1 + 0x14) = local_38._4_4_;
        *(undefined4 *)(param_1 + 3) = (undefined4)uStack_30;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_30._4_4_;
        *(undefined4 *)param_1 = (undefined4)local_48;
        *(undefined4 *)((longlong)param_1 + 4) = local_48._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_40._4_4_;
        local_48 = lVar10;
        uStack_40 = lVar8;
        local_38 = lVar3;
        uStack_30 = lVar4;
      }
    }
    plVar12 = param_2 + uVar11 * 4;
    plVar9 = param_2 + uVar11 * -4;
    lVar10 = *param_2;
    lVar8 = param_2[1];
    bVar2 = plVar9[1] < lVar8;
    if (lVar8 == plVar9[1]) {
      bVar2 = lVar10 < *plVar9;
    }
    if (bVar2) {
      lVar3 = *param_2;
      lVar4 = param_2[1];
      lVar5 = param_2[2];
      lVar6 = param_2[3];
      lVar10 = *plVar9;
      lVar8 = plVar9[1];
      lVar7 = plVar9[3];
      param_2[2] = plVar9[2];
      param_2[3] = lVar7;
      *param_2 = lVar10;
      param_2[1] = lVar8;
      local_48._0_4_ = (undefined4)lVar3;
      local_48._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      uStack_40._0_4_ = (undefined4)lVar4;
      uStack_40._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
      local_38._0_4_ = (undefined4)lVar5;
      local_38._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
      uStack_30._0_4_ = (undefined4)lVar6;
      uStack_30._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
      *(undefined4 *)(plVar9 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar9 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_30._4_4_;
      *(undefined4 *)plVar9 = (undefined4)local_48;
      *(undefined4 *)((longlong)plVar9 + 4) = local_48._4_4_;
      *(undefined4 *)(plVar9 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)plVar9 + 0xc) = uStack_40._4_4_;
      lVar10 = *param_2;
      lVar8 = param_2[1];
      local_48 = lVar3;
      uStack_40 = lVar4;
      local_38 = lVar5;
      uStack_30 = lVar6;
    }
    bVar2 = lVar8 < plVar12[1];
    if (plVar12[1] == lVar8) {
      bVar2 = *plVar12 < lVar10;
    }
    if (bVar2) {
      lVar10 = *plVar12;
      lVar8 = plVar12[1];
      lVar3 = plVar12[2];
      lVar4 = plVar12[3];
      lVar5 = *param_2;
      lVar6 = param_2[1];
      lVar7 = param_2[3];
      plVar12[2] = param_2[2];
      plVar12[3] = lVar7;
      *plVar12 = lVar5;
      plVar12[1] = lVar6;
      local_48._0_4_ = (undefined4)lVar10;
      local_48._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
      uStack_40._0_4_ = (undefined4)lVar8;
      uStack_40._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
      local_38._0_4_ = (undefined4)lVar3;
      local_38._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      uStack_30._0_4_ = (undefined4)lVar4;
      uStack_30._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
      *(undefined4 *)(param_2 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_2 + 0x14) = local_38._4_4_;
      *(undefined4 *)(param_2 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_30._4_4_;
      *(undefined4 *)param_2 = (undefined4)local_48;
      *(undefined4 *)((longlong)param_2 + 4) = local_48._4_4_;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_40._4_4_;
      bVar2 = plVar9[1] < param_2[1];
      if (param_2[1] == plVar9[1]) {
        bVar2 = *param_2 < *plVar9;
      }
      local_48 = lVar10;
      uStack_40 = lVar8;
      local_38 = lVar3;
      uStack_30 = lVar4;
      if (bVar2) {
        lVar10 = *param_2;
        lVar8 = param_2[1];
        lVar3 = param_2[2];
        lVar4 = param_2[3];
        lVar5 = *plVar9;
        lVar6 = plVar9[1];
        lVar7 = plVar9[3];
        param_2[2] = plVar9[2];
        param_2[3] = lVar7;
        *param_2 = lVar5;
        param_2[1] = lVar6;
        local_48._0_4_ = (undefined4)lVar10;
        local_48._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
        uStack_40._0_4_ = (undefined4)lVar8;
        uStack_40._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
        local_38._0_4_ = (undefined4)lVar3;
        local_38._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
        uStack_30._0_4_ = (undefined4)lVar4;
        uStack_30._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
        *(undefined4 *)(plVar9 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)plVar9 + 0x14) = local_38._4_4_;
        *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_30;
        *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_30._4_4_;
        *(undefined4 *)plVar9 = (undefined4)local_48;
        *(undefined4 *)((longlong)plVar9 + 4) = local_48._4_4_;
        *(undefined4 *)(plVar9 + 1) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)plVar9 + 0xc) = uStack_40._4_4_;
        local_48 = lVar10;
        uStack_40 = lVar8;
        local_38 = lVar3;
        uStack_30 = lVar4;
      }
    }
    plVar12 = param_3 + uVar11 * -4;
    plVar9 = param_3 + uVar11 * -8;
    lVar10 = param_3[uVar11 * -4];
    lVar8 = param_3[uVar11 * -4 + 1];
    bVar2 = param_3[uVar11 * -8 + 1] < lVar8;
    if (lVar8 == param_3[uVar11 * -8 + 1]) {
      bVar2 = lVar10 < *plVar9;
    }
    if (bVar2) {
      lVar3 = *plVar12;
      lVar4 = plVar12[1];
      lVar5 = plVar12[2];
      lVar6 = plVar12[3];
      lVar10 = *plVar9;
      lVar8 = plVar9[1];
      lVar7 = plVar9[3];
      plVar12[2] = plVar9[2];
      plVar12[3] = lVar7;
      *plVar12 = lVar10;
      plVar12[1] = lVar8;
      local_48._0_4_ = (undefined4)lVar3;
      local_48._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      uStack_40._0_4_ = (undefined4)lVar4;
      uStack_40._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
      local_38._0_4_ = (undefined4)lVar5;
      local_38._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
      uStack_30._0_4_ = (undefined4)lVar6;
      uStack_30._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
      *(undefined4 *)(plVar9 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar9 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_30._4_4_;
      *(undefined4 *)plVar9 = (undefined4)local_48;
      *(undefined4 *)((longlong)plVar9 + 4) = local_48._4_4_;
      *(undefined4 *)(plVar9 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)plVar9 + 0xc) = uStack_40._4_4_;
      lVar10 = *plVar12;
      lVar8 = plVar12[1];
      local_48 = lVar3;
      uStack_40 = lVar4;
      local_38 = lVar5;
      uStack_30 = lVar6;
    }
    bVar2 = lVar8 < param_3[1];
    if (param_3[1] == lVar8) {
      bVar2 = *param_3 < lVar10;
    }
    if (bVar2) {
      lVar10 = *param_3;
      lVar8 = param_3[1];
      lVar3 = param_3[2];
      lVar4 = param_3[3];
      lVar5 = *plVar12;
      lVar6 = plVar12[1];
      lVar7 = plVar12[3];
      param_3[2] = plVar12[2];
      param_3[3] = lVar7;
      *param_3 = lVar5;
      param_3[1] = lVar6;
      local_48._0_4_ = (undefined4)lVar10;
      local_48._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
      uStack_40._0_4_ = (undefined4)lVar8;
      uStack_40._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
      local_38._0_4_ = (undefined4)lVar3;
      local_38._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      uStack_30._0_4_ = (undefined4)lVar4;
      uStack_30._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
      *(undefined4 *)(plVar12 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar12 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar12 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)plVar12 + 0x1c) = uStack_30._4_4_;
      *(undefined4 *)plVar12 = (undefined4)local_48;
      *(undefined4 *)((longlong)plVar12 + 4) = local_48._4_4_;
      *(undefined4 *)(plVar12 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)plVar12 + 0xc) = uStack_40._4_4_;
      bVar2 = plVar9[1] < plVar12[1];
      if (plVar12[1] == plVar9[1]) {
        bVar2 = *plVar12 < *plVar9;
      }
      local_48 = lVar10;
      uStack_40 = lVar8;
      local_38 = lVar3;
      uStack_30 = lVar4;
      if (bVar2) {
        lVar10 = *plVar12;
        lVar8 = plVar12[1];
        lVar3 = plVar12[2];
        lVar4 = plVar12[3];
        lVar5 = *plVar9;
        lVar6 = plVar9[1];
        lVar7 = plVar9[3];
        plVar12[2] = plVar9[2];
        plVar12[3] = lVar7;
        *plVar12 = lVar5;
        plVar12[1] = lVar6;
        local_48._0_4_ = (undefined4)lVar10;
        local_48._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
        uStack_40._0_4_ = (undefined4)lVar8;
        uStack_40._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
        local_38._0_4_ = (undefined4)lVar3;
        local_38._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
        uStack_30._0_4_ = (undefined4)lVar4;
        uStack_30._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
        *(undefined4 *)(plVar9 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)plVar9 + 0x14) = local_38._4_4_;
        *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_30;
        *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_30._4_4_;
        *(undefined4 *)plVar9 = (undefined4)local_48;
        *(undefined4 *)((longlong)plVar9 + 4) = local_48._4_4_;
        *(undefined4 *)(plVar9 + 1) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)plVar9 + 0xc) = uStack_40._4_4_;
        local_48 = lVar10;
        uStack_40 = lVar8;
        local_38 = lVar3;
        uStack_30 = lVar4;
      }
    }
    lVar10 = *param_2;
    lVar8 = param_2[1];
    bVar2 = plVar1[1] < lVar8;
    if (lVar8 == plVar1[1]) {
      bVar2 = lVar10 < *plVar1;
    }
    if (bVar2) {
      lVar3 = *param_2;
      lVar4 = param_2[1];
      lVar5 = param_2[2];
      lVar6 = param_2[3];
      lVar10 = *plVar1;
      lVar8 = plVar1[1];
      lVar7 = plVar1[3];
      param_2[2] = plVar1[2];
      param_2[3] = lVar7;
      *param_2 = lVar10;
      param_2[1] = lVar8;
      local_48._0_4_ = (undefined4)lVar3;
      local_48._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      uStack_40._0_4_ = (undefined4)lVar4;
      uStack_40._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
      local_38._0_4_ = (undefined4)lVar5;
      local_38._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
      uStack_30._0_4_ = (undefined4)lVar6;
      uStack_30._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
      *(undefined4 *)(plVar1 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar1 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar1 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_30._4_4_;
      *(undefined4 *)plVar1 = (undefined4)local_48;
      *(undefined4 *)((longlong)plVar1 + 4) = local_48._4_4_;
      *(undefined4 *)(plVar1 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uStack_40._4_4_;
      lVar10 = *param_2;
      lVar8 = param_2[1];
      local_48 = lVar3;
      uStack_40 = lVar4;
      local_38 = lVar5;
      uStack_30 = lVar6;
    }
    bVar2 = lVar8 < plVar12[1];
    if (plVar12[1] == lVar8) {
      bVar2 = *plVar12 < lVar10;
    }
    if (bVar2) {
      lVar10 = *plVar12;
      lVar8 = plVar12[1];
      lVar3 = plVar12[2];
      lVar4 = plVar12[3];
      lVar5 = *param_2;
      lVar6 = param_2[1];
      lVar7 = param_2[3];
      plVar12[2] = param_2[2];
      plVar12[3] = lVar7;
      *plVar12 = lVar5;
      plVar12[1] = lVar6;
      local_48._0_4_ = (undefined4)lVar10;
      local_48._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
      uStack_40._0_4_ = (undefined4)lVar8;
      uStack_40._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
      local_38._0_4_ = (undefined4)lVar3;
      local_38._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      uStack_30._0_4_ = (undefined4)lVar4;
      uStack_30._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
      *(undefined4 *)(param_2 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_2 + 0x14) = local_38._4_4_;
      *(undefined4 *)(param_2 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_30._4_4_;
      *(undefined4 *)param_2 = (undefined4)local_48;
      *(undefined4 *)((longlong)param_2 + 4) = local_48._4_4_;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_40._4_4_;
      bVar2 = plVar1[1] < param_2[1];
      if (param_2[1] == plVar1[1]) {
        bVar2 = *param_2 < *plVar1;
      }
      local_48 = lVar10;
      uStack_40 = lVar8;
      local_38 = lVar3;
      uStack_30 = lVar4;
      if (bVar2) {
        lVar10 = *param_2;
        lVar8 = param_2[1];
        lVar3 = param_2[2];
        lVar4 = param_2[3];
        lVar5 = *plVar1;
        lVar6 = plVar1[1];
        lVar7 = plVar1[3];
        param_2[2] = plVar1[2];
        param_2[3] = lVar7;
        *param_2 = lVar5;
        param_2[1] = lVar6;
        local_48._0_4_ = (undefined4)lVar10;
        local_48._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
        uStack_40._0_4_ = (undefined4)lVar8;
        uStack_40._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
        local_38._0_4_ = (undefined4)lVar3;
        local_38._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
        uStack_30._0_4_ = (undefined4)lVar4;
        uStack_30._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
        *(undefined4 *)(plVar1 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)plVar1 + 0x14) = local_38._4_4_;
        *(undefined4 *)(plVar1 + 3) = (undefined4)uStack_30;
        *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_30._4_4_;
        *(undefined4 *)plVar1 = (undefined4)local_48;
        *(undefined4 *)((longlong)plVar1 + 4) = local_48._4_4_;
        *(undefined4 *)(plVar1 + 1) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)plVar1 + 0xc) = uStack_40._4_4_;
        local_48 = lVar10;
        uStack_40 = lVar8;
        local_38 = lVar3;
        uStack_30 = lVar4;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148275e78 FUN_148275e78 body=198 status=ok
// SIG undefined FUN_148275e78(void)

void FUN_148275e78(longlong *param_1,void *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *pvVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *param_1;
  uVar4 = (param_1[1] - lVar1 >> 3) + 1;
  uVar3 = param_1[2] - lVar1 >> 3;
  uVar5 = (uVar3 >> 1) + uVar3;
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  if (0x1fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  _Dst = (void *)FUN_148275fa8(uVar5);
  *(undefined8 *)((longlong)_Dst + ((longlong)param_2 - lVar1)) = *param_3;
  pvVar2 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar2 != param_2) {
    memmove((void *)((longlong)_Dst + ((longlong)param_2 - lVar1) + 8),param_2,
            param_1[1] - (longlong)param_2);
  }
  FUN_148275f3e(param_1,_Dst,uVar4,uVar5);
  return;
}



// FUNCTION 148275f3e FUN_148275f3e body=104 status=ok
// SIG undefined FUN_148275f3e(void)

void FUN_148275f3e(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}



// FUNCTION 148275fa8 FUN_148275fa8 body=76 status=ok
// SIG undefined FUN_148275fa8(void)

undefined8 FUN_148275fa8(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x1ff < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 8);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 8,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 148275ff6 FUN_148275ff6 body=110 status=ok
// SIG undefined FUN_148275ff6(void)

void FUN_148275ff6(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x10 + param_2;
  param_1[2] = param_4 * 0x10 + param_2;
  return;
}



// FUNCTION 148276066 FUN_148276066 body=200 status=ok
// SIG undefined FUN_148276066(void)

void FUN_148276066(longlong *param_1,void *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *_Dst;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar2 = *param_1;
  uVar6 = (param_1[1] - lVar2 >> 4) + 1;
  uVar5 = param_1[2] - lVar2 >> 4;
  uVar7 = (uVar5 >> 1) + uVar5;
  if (uVar7 <= uVar6) {
    uVar7 = uVar6;
  }
  if (0xfffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar7 = 0xfffffffffffffff;
  }
  _Dst = (void *)FUN_148274736(uVar7);
  uVar4 = param_3[1];
  puVar1 = (undefined8 *)((longlong)_Dst + ((longlong)param_2 - lVar2));
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  pvVar3 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar3 != param_2) {
    memmove((void *)((longlong)_Dst + ((longlong)param_2 - lVar2) + 0x10),param_2,
            param_1[1] - (longlong)param_2);
  }
  FUN_148275ff6(param_1,_Dst,uVar6,uVar7);
  return;
}



// FUNCTION 14827612e FUN_14827612e body=131 status=ok
// SIG undefined FUN_14827612e(void)

void FUN_14827612e(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  puVar7 = (undefined8 *)FUN_148274882(*param_2);
  puVar3 = (undefined8 *)param_1[1];
  puVar9 = puVar7;
  for (puVar8 = (undefined8 *)*param_1; puVar8 != puVar3; puVar8 = puVar8 + 3) {
    uVar4 = puVar8[2];
    puVar8[2] = 0;
    uVar5 = *puVar8;
    uVar6 = puVar8[1];
    *puVar8 = 0;
    puVar8[1] = 0;
    *puVar9 = uVar5;
    puVar9[1] = uVar6;
    puVar9[2] = uVar4;
    puVar9 = puVar9 + 3;
  }
  FUN_1482747e8(param_1,puVar7,(lVar2 - lVar1 >> 3) * -0x5555555555555555,*param_2);
  return;
}



// FUNCTION 1482761b2 FUN_1482761b2 body=53 status=ok
// SIG undefined FUN_1482761b2(void)

longlong FUN_1482761b2(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  
  puVar14 = (undefined8 *)param_1[1];
  if (puVar14 == (undefined8 *)param_1[2]) {
    lVar1 = *param_1;
    lVar16 = (longlong)puVar14 - lVar1;
    uVar15 = (param_1[1] - lVar1 >> 3) * -0x5555555555555555 + 1;
    uVar11 = (param_1[2] - lVar1 >> 3) * -0x5555555555555555;
    uVar9 = 0xaaaaaaaaaaaaaaa - (uVar11 >> 1);
    uVar17 = (uVar11 >> 1) + uVar11;
    if (uVar17 <= uVar15) {
      uVar17 = uVar15;
    }
    if (uVar9 <= uVar11 && uVar11 - uVar9 != 0) {
      uVar17 = 0xaaaaaaaaaaaaaaa;
    }
    puVar8 = (undefined4 *)FUN_148274882(uVar17);
    uVar2 = param_2[2];
    param_2[2] = 0;
    uVar3 = *(undefined4 *)param_2;
    uVar4 = *(undefined4 *)((longlong)param_2 + 4);
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
    puVar12 = (undefined4 *)((longlong)puVar8 + lVar16);
    *puVar12 = uVar3;
    puVar12[1] = uVar4;
    puVar12[2] = uVar5;
    puVar12[3] = uVar6;
    *(undefined8 *)((longlong)puVar8 + lVar16 + 0x10) = uVar2;
    puVar10 = (undefined8 *)*param_1;
    puVar13 = (undefined8 *)param_1[1];
    puVar12 = puVar8;
    if (puVar13 == puVar14) {
      for (; puVar10 != puVar14; puVar10 = puVar10 + 3) {
        uVar2 = puVar10[2];
        puVar10[2] = 0;
        uVar3 = *(undefined4 *)puVar10;
        uVar4 = *(undefined4 *)((longlong)puVar10 + 4);
        uVar5 = *(undefined4 *)(puVar10 + 1);
        uVar6 = *(undefined4 *)((longlong)puVar10 + 0xc);
        *puVar10 = 0;
        puVar10[1] = 0;
        *puVar12 = uVar3;
        puVar12[1] = uVar4;
        puVar12[2] = uVar5;
        puVar12[3] = uVar6;
        *(undefined8 *)(puVar12 + 4) = uVar2;
        puVar12 = puVar12 + 6;
      }
    }
    else {
      if (puVar10 != puVar14) {
        do {
          uVar2 = puVar10[2];
          puVar10[2] = 0;
          uVar3 = *(undefined4 *)puVar10;
          uVar4 = *(undefined4 *)((longlong)puVar10 + 4);
          uVar5 = *(undefined4 *)(puVar10 + 1);
          uVar6 = *(undefined4 *)((longlong)puVar10 + 0xc);
          *puVar10 = 0;
          puVar10[1] = 0;
          *puVar12 = uVar3;
          puVar12[1] = uVar4;
          puVar12[2] = uVar5;
          puVar12[3] = uVar6;
          *(undefined8 *)(puVar12 + 4) = uVar2;
          puVar10 = puVar10 + 3;
          puVar12 = puVar12 + 6;
        } while (puVar10 != puVar14);
        puVar13 = (undefined8 *)param_1[1];
      }
      if (puVar13 != puVar14) {
        puVar10 = (undefined8 *)((longlong)puVar8 + lVar16 + 0x28);
        do {
          uVar2 = puVar14[2];
          puVar14[2] = 0;
          uVar3 = *(undefined4 *)puVar14;
          uVar4 = *(undefined4 *)((longlong)puVar14 + 4);
          uVar5 = *(undefined4 *)(puVar14 + 1);
          uVar6 = *(undefined4 *)((longlong)puVar14 + 0xc);
          *puVar14 = 0;
          puVar14[1] = 0;
          *(undefined4 *)(puVar10 + -2) = uVar3;
          *(undefined4 *)((longlong)puVar10 + -0xc) = uVar4;
          *(undefined4 *)(puVar10 + -1) = uVar5;
          *(undefined4 *)((longlong)puVar10 + -4) = uVar6;
          *puVar10 = uVar2;
          puVar14 = puVar14 + 3;
          puVar10 = puVar10 + 3;
        } while (puVar14 != puVar13);
      }
    }
    FUN_1482747e8(param_1,puVar8,uVar15,uVar17);
    return (longlong)puVar8 + lVar16;
  }
  lVar1 = param_2[2];
  param_2[2] = 0;
  uVar2 = *param_2;
  uVar7 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  *puVar14 = uVar2;
  puVar14[1] = uVar7;
  puVar14[2] = lVar1;
  param_1[1] = param_1[1] + 0x18;
  return lVar1;
}



// FUNCTION 1482761e8 FUN_1482761e8 body=374 status=ok
// SIG undefined FUN_1482761e8(void)

longlong FUN_1482761e8(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  lVar1 = *param_1;
  lVar14 = (longlong)param_2 - lVar1;
  uVar13 = (param_1[1] - lVar1 >> 3) * -0x5555555555555555 + 1;
  uVar10 = (param_1[2] - lVar1 >> 3) * -0x5555555555555555;
  uVar8 = 0xaaaaaaaaaaaaaaa - (uVar10 >> 1);
  uVar15 = (uVar10 >> 1) + uVar10;
  if (uVar15 <= uVar13) {
    uVar15 = uVar13;
  }
  if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
    uVar15 = 0xaaaaaaaaaaaaaaa;
  }
  puVar7 = (undefined4 *)FUN_148274882(uVar15);
  uVar2 = param_3[2];
  param_3[2] = 0;
  uVar3 = *(undefined4 *)param_3;
  uVar4 = *(undefined4 *)((longlong)param_3 + 4);
  uVar5 = *(undefined4 *)(param_3 + 1);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_3 = 0;
  param_3[1] = 0;
  puVar11 = (undefined4 *)((longlong)puVar7 + lVar14);
  *puVar11 = uVar3;
  puVar11[1] = uVar4;
  puVar11[2] = uVar5;
  puVar11[3] = uVar6;
  *(undefined8 *)((longlong)puVar7 + lVar14 + 0x10) = uVar2;
  puVar9 = (undefined8 *)*param_1;
  puVar12 = (undefined8 *)param_1[1];
  puVar11 = puVar7;
  if (puVar12 == param_2) {
    for (; puVar9 != param_2; puVar9 = puVar9 + 3) {
      uVar2 = puVar9[2];
      puVar9[2] = 0;
      uVar3 = *(undefined4 *)puVar9;
      uVar4 = *(undefined4 *)((longlong)puVar9 + 4);
      uVar5 = *(undefined4 *)(puVar9 + 1);
      uVar6 = *(undefined4 *)((longlong)puVar9 + 0xc);
      *puVar9 = 0;
      puVar9[1] = 0;
      *puVar11 = uVar3;
      puVar11[1] = uVar4;
      puVar11[2] = uVar5;
      puVar11[3] = uVar6;
      *(undefined8 *)(puVar11 + 4) = uVar2;
      puVar11 = puVar11 + 6;
    }
  }
  else {
    if (puVar9 != param_2) {
      do {
        uVar2 = puVar9[2];
        puVar9[2] = 0;
        uVar3 = *(undefined4 *)puVar9;
        uVar4 = *(undefined4 *)((longlong)puVar9 + 4);
        uVar5 = *(undefined4 *)(puVar9 + 1);
        uVar6 = *(undefined4 *)((longlong)puVar9 + 0xc);
        *puVar9 = 0;
        puVar9[1] = 0;
        *puVar11 = uVar3;
        puVar11[1] = uVar4;
        puVar11[2] = uVar5;
        puVar11[3] = uVar6;
        *(undefined8 *)(puVar11 + 4) = uVar2;
        puVar9 = puVar9 + 3;
        puVar11 = puVar11 + 6;
      } while (puVar9 != param_2);
      puVar12 = (undefined8 *)param_1[1];
    }
    if (puVar12 != param_2) {
      puVar9 = (undefined8 *)((longlong)puVar7 + lVar14 + 0x28);
      do {
        uVar2 = param_2[2];
        param_2[2] = 0;
        uVar3 = *(undefined4 *)param_2;
        uVar4 = *(undefined4 *)((longlong)param_2 + 4);
        uVar5 = *(undefined4 *)(param_2 + 1);
        uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined4 *)(puVar9 + -2) = uVar3;
        *(undefined4 *)((longlong)puVar9 + -0xc) = uVar4;
        *(undefined4 *)(puVar9 + -1) = uVar5;
        *(undefined4 *)((longlong)puVar9 + -4) = uVar6;
        *puVar9 = uVar2;
        param_2 = param_2 + 3;
        puVar9 = puVar9 + 3;
      } while (param_2 != puVar12);
    }
  }
  FUN_1482747e8(param_1,puVar7,uVar13,uVar15);
  return (longlong)puVar7 + lVar14;
}



// FUNCTION 14827635e FUN_14827635e body=388 status=ok
// SIG undefined FUN_14827635e(void)

undefined8 FUN_14827635e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  double dVar12;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)param_2[1];
  if (0x20 < (ulonglong)((longlong)plVar2 - (longlong)plVar1)) {
    lVar3 = param_1[1];
    lVar7 = plVar2[-1];
    plVar9 = plVar2 + -2;
    while (lVar7 == lVar3) {
      if (plVar9 == plVar1) {
        return 2;
      }
      plVar10 = plVar9 + -1;
      plVar9 = plVar9 + -2;
      lVar7 = *plVar10;
    }
    if (plVar1 != plVar2) {
      bVar8 = lVar7 < lVar3;
      iVar11 = 0;
      plVar9 = plVar1;
      do {
        if (bVar8 == false) {
          while( true ) {
            if (plVar9 == plVar2) goto LAB_148276441;
            lVar7 = plVar9[1];
            if (lVar7 <= lVar3) break;
            plVar9 = plVar9 + 2;
          }
        }
        else {
          while( true ) {
            if (plVar9 == plVar2) goto LAB_148276441;
            lVar7 = plVar9[1];
            if (lVar3 <= lVar7) break;
            plVar9 = plVar9 + 2;
          }
        }
        plVar10 = plVar9 + -2;
        if (plVar9 == plVar1) {
          plVar10 = plVar2 + -2;
        }
        lVar4 = *param_1;
        lVar5 = *plVar9;
        if (lVar3 - lVar7 == 0) {
          if (lVar4 == lVar5) {
            return 0;
          }
          if ((lVar3 == plVar10[1]) && (lVar5 <= lVar4 == lVar4 < *plVar10)) {
            return 0;
          }
        }
        else {
          lVar6 = *plVar10;
          if ((lVar5 <= lVar4) || (lVar6 <= lVar4)) {
            if ((lVar4 - lVar5 == 0 || lVar4 < lVar5) || (lVar4 <= lVar6)) {
              dVar12 = (double)(lVar3 - lVar7) * (double)(lVar5 - lVar6) -
                       (double)(lVar4 - lVar5) * (double)(lVar7 - plVar10[1]);
              if ((dVar12 == 0.0) && (!NAN(dVar12))) {
                return 0;
              }
              if (bVar8 == dVar12 < 0.0) {
                iVar11 = 1 - iVar11;
              }
            }
            else {
              iVar11 = 1 - iVar11;
            }
          }
          bVar8 = (bool)(bVar8 ^ 1);
        }
        plVar9 = plVar9 + 2;
      } while (plVar9 != plVar2);
LAB_148276441:
      if (iVar11 != 0) {
        return 1;
      }
    }
  }
  return 2;
}



// FUNCTION 1482764e2 FUN_1482764e2 body=324 status=ok
// SIG undefined FUN_1482764e2(void)

void FUN_1482764e2(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  
  lVar12 = *param_1;
  lVar17 = param_2 - lVar12;
  uVar15 = (param_1[1] - lVar12 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  uVar13 = (param_1[2] - lVar12 >> 3) * 0x2e8ba2e8ba2e8ba3;
  uVar11 = 0x2e8ba2e8ba2e8ba - (uVar13 >> 1);
  uVar18 = (uVar13 >> 1) + uVar13;
  if (uVar18 <= uVar15) {
    uVar18 = uVar15;
  }
  if (uVar11 <= uVar13 && uVar13 - uVar11 != 0) {
    uVar18 = 0x2e8ba2e8ba2e8ba;
  }
  lVar10 = FUN_14827678a();
  uVar3 = param_3[2];
  param_3[2] = 0;
  uVar8 = *param_3;
  uVar9 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined8 *)(lVar10 + lVar17) = uVar8;
  ((undefined8 *)(lVar10 + lVar17))[1] = uVar9;
  *(undefined8 *)(lVar10 + 0x10 + lVar17) = uVar3;
  uVar3 = param_3[5];
  param_3[5] = 0;
  uVar8 = param_3[3];
  uVar9 = param_3[4];
  param_3[3] = 0;
  param_3[4] = 0;
  puVar1 = (undefined8 *)(lVar10 + 0x18 + lVar17);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  *(undefined8 *)(lVar10 + 0x28 + lVar17) = uVar3;
  uVar3 = param_3[8];
  param_3[8] = 0;
  uVar4 = *(undefined4 *)(param_3 + 6);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x34);
  uVar6 = *(undefined4 *)(param_3 + 7);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x3c);
  param_3[6] = 0;
  param_3[7] = 0;
  puVar2 = (undefined4 *)(lVar10 + 0x30 + lVar17);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  *(undefined8 *)(lVar10 + 0x40 + lVar17) = uVar3;
  *(undefined4 *)(lVar10 + 0x50 + lVar17) = *(undefined4 *)(param_3 + 10);
  *(undefined8 *)(lVar10 + 0x48 + lVar17) = param_3[9];
  lVar12 = *param_1;
  lVar14 = param_1[1];
  lVar16 = lVar10;
  if (lVar14 != param_2) {
    FUN_148276626(lVar12,param_2,lVar10,param_1);
    lVar14 = param_1[1];
    lVar12 = param_2;
    lVar16 = lVar10 + lVar17 + 0x58;
  }
  FUN_148276626(lVar12,lVar14,lVar16,param_1);
  FUN_1482766e0(param_1,lVar10,uVar15,uVar18);
  return;
}



// FUNCTION 148276626 FUN_148276626 body=185 status=ok
// SIG undefined FUN_148276626(void)

void FUN_148276626(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 0xb) {
    uVar1 = param_1[2];
    param_1[2] = 0;
    uVar6 = *param_1;
    uVar7 = param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    *local_20 = uVar6;
    local_20[1] = uVar7;
    local_20[2] = uVar1;
    uVar1 = param_1[5];
    param_1[5] = 0;
    uVar6 = param_1[3];
    uVar7 = param_1[4];
    param_1[3] = 0;
    param_1[4] = 0;
    local_20[3] = uVar6;
    local_20[4] = uVar7;
    local_20[5] = uVar1;
    uVar1 = param_1[8];
    param_1[8] = 0;
    uVar2 = *(undefined4 *)(param_1 + 6);
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x34);
    uVar4 = *(undefined4 *)(param_1 + 7);
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x3c);
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined4 *)(local_20 + 6) = uVar2;
    *(undefined4 *)((longlong)local_20 + 0x34) = uVar3;
    *(undefined4 *)(local_20 + 7) = uVar4;
    *(undefined4 *)((longlong)local_20 + 0x3c) = uVar5;
    local_20[8] = uVar1;
    local_20[9] = param_1[9];
    *(undefined4 *)(local_20 + 10) = *(undefined4 *)(param_1 + 10);
    local_20 = local_20 + 0xb;
  }
  local_18 = local_20;
  local_10 = param_4;
  FUN_1482767d6();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482766e0 FUN_1482766e0 body=168 status=ok
// SIG undefined FUN_1482766e0(void)

void FUN_1482766e0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        FUN_148274782(lVar1 + 0x30);
        FUN_1482748da(lVar1 + 0x18);
        FUN_1482748da(lVar1);
        lVar1 = lVar1 + 0x58;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x58 + param_2;
  param_1[2] = param_4 * 0x58 + param_2;
  return;
}


