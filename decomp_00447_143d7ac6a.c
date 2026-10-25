// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143d7ac6a FUN_143d7ac6a body=73 status=ok
// SIG undefined FUN_143d7ac6a(void)

void FUN_143d7ac6a(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x20);
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
      plVar4 = plVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143d7acb4 FUN_143d7acb4 body=118 status=ok
// SIG undefined FUN_143d7acb4(void)

void FUN_143d7acb4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x18) + 8) < 1)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    *(undefined1 *)(param_2 + 0x60) = 1;
    iVar2 = *(int *)(param_2 + 0x58);
    lVar6 = (longlong)iVar2;
    *(uint *)(param_2 + 0x58) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
      FUN_14579eadc(param_2,iVar2);
    }
    lVar5 = *(longlong *)(param_2 + 0x50);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      lVar5 = param_2;
    }
    *(undefined8 *)(lVar5 + lVar6 * 0x14) = uVar4;
    *(undefined4 *)(lVar5 + 8 + lVar6 * 0x14) = uVar1;
    *(undefined8 *)(lVar5 + 0xc + lVar6 * 0x14) = uVar3;
  }
  return;
}



// FUNCTION 143d7ad35 FUN_143d7ad35 body=8 status=ok
// SIG undefined FUN_143d7ad35(void)

void FUN_143d7ad35(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 143d7ad3e FUN_143d7ad3e body=356 status=ok
// SIG undefined FUN_143d7ad3e(void)

void FUN_143d7ad3e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0xd0);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  iVar8 = 5;
  if (5 < uVar3) {
    lVar4 = (longlong)(int)uVar3;
    if (5 < *(uint *)(param_1 + 0xd4)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar5 = lVar4 * 0x28;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_143d7adda;
              lVar4 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar4 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
LAB_143d7adda:
    iVar6 = (int)(uVar5 / 0x28);
    iVar8 = 0x7fffffff;
    if ((int)uVar3 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  *(int *)(param_1 + 0xd4) = iVar8;
  FUN_143d7ab96(param_1,param_2);
  return;
}



// FUNCTION 143d7aec0 FUN_143d7aec0 body=477 status=ok
// SIG undefined FUN_143d7aec0(void)

void FUN_143d7aec0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    local_98 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = (longlong *)0x0;
    plStack_b0 = (longlong *)0x0;
    uStack_90 = 0x8000000000;
    local_88 = 0xffffffff;
    FUN_1488a5110(param_1 + 0x38,&local_b8);
    uStack_70 = uStack_70 & 0xffffffff00000000;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1488a4f00(&local_b8);
    if ((longlong)*(int *)(param_1 + 0x20) != 0) {
      plVar9 = *(longlong **)(param_1 + 0x18);
      plVar6 = plVar9 + *(int *)(param_1 + 0x20);
      local_d0 = plVar6;
      do {
        lVar3 = *plVar9;
        if (lVar3 != 0) {
          plVar7 = (longlong *)FUN_14001cc68(0x68,0x10);
          plVar7[1] = (longlong)&DAT_100000001;
          *plVar7 = (longlong)&PTR_FUN_14b40d170;
          plVar6 = plVar7 + 2;
          plVar7[2] = 0;
          plVar7[3] = 0;
          plVar7[4] = lVar3;
          plVar7[5] = 0;
          plVar7[6] = 0;
          plVar7[7] = 0;
          plVar7[8] = 0;
          plVar7[9] = 0;
          plVar7[10] = 0;
          *(undefined8 *)((longlong)plVar7 + 0x51) = 0;
          *(undefined8 *)((longlong)plVar7 + 0x59) = 0;
          local_b8 = plVar6;
          plStack_b0 = plVar7;
          FUN_1488a3ed8(&local_b8,plVar6);
          local_c8 = 0;
          uStack_c0 = 0;
          FUN_14888fe20(plVar6,&local_c8);
          lVar3 = *(longlong *)(param_1 + 0x28);
          if ((lVar3 != 0) && (lVar5 = plVar7[8], (longlong)(int)lVar5 != 0)) {
            lVar4 = plVar7[7];
            lVar8 = 0;
            do {
              (**(code **)(**(longlong **)(lVar4 + lVar8) + 0x50))
                        (*(longlong **)(lVar4 + lVar8),lVar3,param_1 + 0x38);
              lVar8 = lVar8 + 0x10;
            } while ((longlong)(int)lVar5 * 0x10 != lVar8);
          }
          plVar6 = local_d0;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar7 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar6 = local_d0;
              if (*piVar2 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
                plVar6 = local_d0;
              }
            }
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar6);
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d7b0d4 FUN_143d7b0d4 body=127 status=ok
// SIG undefined FUN_143d7b0d4(void)

void FUN_143d7b0d4(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (*(char *)(param_2 + 0x50) == '\0') {
    lVar2 = *param_1;
    lVar3 = *(longlong *)(lVar2 + 0x170);
    iVar1 = *(int *)(lVar2 + 0x178);
    lVar5 = (longlong)iVar1;
    if (lVar5 != 0) {
      uVar4 = 0;
      do {
        if (*(longlong *)(lVar3 + uVar4) == param_2) {
          if ((int)(~uVar4 >> 3) != 0) {
            return;
          }
          break;
        }
        uVar4 = uVar4 + 8;
      } while (lVar5 * 8 - uVar4 != 0);
    }
    *(uint *)(lVar2 + 0x178) = iVar1 + 1U;
    if (*(uint *)(lVar2 + 0x17c) < iVar1 + 1U) {
      FUN_1488a5a22((longlong *)(lVar2 + 0x170),iVar1);
      lVar3 = *(longlong *)(lVar2 + 0x170);
    }
    *(longlong *)(lVar3 + lVar5 * 8) = param_2;
  }
  return;
}



// FUNCTION 143d7b154 FUN_143d7b154 body=67 status=ok
// SIG undefined FUN_143d7b154(void)

void FUN_143d7b154(longlong *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14063f846();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if ((param_2 != 0) && (cVar1 != '\0')) {
    UNRECOVERED_JUMPTABLE = *(code **)*param_1;
                    /* WARNING: Could not recover jumptable at 0x000143d7b18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(((undefined8 *)*param_1)[1],param_2,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}



// FUNCTION 143d7b198 FUN_143d7b198 body=104 status=ok
// SIG undefined FUN_143d7b198(void)

undefined8 * FUN_143d7b198(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b40d4e0;
  plVar3 = (longlong *)param_1[6];
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
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d7b204 FUN_143d7b204 body=81 status=ok
// SIG undefined FUN_143d7b204(void)

undefined8 FUN_143d7b204(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 143d7b25a FUN_143d7b25a body=89 status=ok
// SIG undefined FUN_143d7b25a(void)

bool FUN_143d7b25a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_143d7b2a5;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_143d7b2a5:
  return lVar6 == param_2;
}



// FUNCTION 143d7b2d0 FUN_143d7b2d0 body=159 status=ok
// SIG undefined FUN_143d7b2d0(void)

void FUN_143d7b2d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40d4e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  uVar7 = *(undefined8 *)(param_1 + 0x5c);
  *(undefined8 *)((longlong)puVar1 + 0x54) = *(undefined8 *)(param_1 + 0x54);
  *(undefined8 *)((longlong)puVar1 + 0x5c) = uVar7;
  puVar1[9] = uVar5;
  puVar1[10] = uVar6;
  puVar1[7] = uVar3;
  puVar1[8] = uVar4;
  return;
}



// FUNCTION 143d7b370 FUN_143d7b370 body=159 status=ok
// SIG undefined FUN_143d7b370(void)

void FUN_143d7b370(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40d4e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  uVar7 = *(undefined8 *)(param_1 + 0x5c);
  *(undefined8 *)((longlong)puVar1 + 0x54) = *(undefined8 *)(param_1 + 0x54);
  *(undefined8 *)((longlong)puVar1 + 0x5c) = uVar7;
  puVar1[9] = uVar5;
  puVar1[10] = uVar6;
  puVar1[7] = uVar3;
  puVar1[8] = uVar4;
  return;
}



// FUNCTION 143d7b410 FUN_143d7b410 body=197 status=ok
// SIG undefined FUN_143d7b410(void)

void FUN_143d7b410(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  DWORD DVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40d4e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  lVar2 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  uVar6 = *(undefined4 *)(param_1 + 0x40);
  uVar7 = *(undefined4 *)(param_1 + 0x44);
  uVar8 = *(undefined4 *)(param_1 + 0x48);
  uVar9 = *(undefined4 *)(param_1 + 0x4c);
  DVar10 = *(DWORD *)(param_1 + 0x50);
  DVar11 = *(DWORD *)(param_1 + 0x54);
  DVar12 = *(DWORD *)(param_1 + 0x58);
  uVar13 = *(undefined4 *)(param_1 + 0x5c);
  uVar14 = *(undefined4 *)(param_1 + 0x60);
  p_Var1[1].ContentionCount = *(DWORD *)(param_1 + 0x54);
  p_Var1[1].Flags = DVar12;
  p_Var1[1].CreatorBackTraceIndexHigh = (short)uVar13;
  p_Var1[1].SpareWORD = (short)((uint)uVar13 >> 0x10);
  p_Var1[2].Type = (short)uVar14;
  p_Var1[2].CreatorBackTraceIndex = (short)((uint)uVar14 >> 0x10);
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Blink = uVar8;
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Blink + 4) = uVar9;
  p_Var1[1].EntryCount = DVar10;
  p_Var1[1].ContentionCount = DVar11;
  *(undefined4 *)&p_Var1[1].CriticalSection = uVar4;
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar5;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = uVar6;
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Flink + 4) = uVar7;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d7b4c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d7b4f0 FUN_143d7b4f0 body=67 status=ok
// SIG undefined FUN_143d7b4f0(void)

ulonglong FUN_143d7b4f0(longlong param_1)

{
  undefined8 unaff_RSI;
  ulonglong uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1461a0c5e(*(longlong *)(param_1 + 0x28),param_1 + 0x38,param_1 + 0x40);
    }
  }
  return uVar1 & 0xffffffff;
}



// FUNCTION 143d7b534 FUN_143d7b534 body=68 status=ok
// SIG undefined FUN_143d7b534(void)

undefined8 * FUN_143d7b534(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b40d550;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d7b578 FUN_143d7b578 body=91 status=ok
// SIG undefined FUN_143d7b578(void)

bool FUN_143d7b578(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_143d7b5a8;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_143d7b5a8:
  return lVar6 == param_2;
}



// FUNCTION 143d7b5f0 FUN_143d7b5f0 body=5539 status=ok
// SIG undefined FUN_143d7b5f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d7b5f0(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  char **local_a8;
  char *local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined **local_78;
  undefined1 *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = "AssetRegistry";
  uStack_90 = 0xd;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb7fbc8 = (ulonglong)uVar2;
  DAT_14cb7fc30 = 0;
  uRam000000014cb7fc38 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143d7ad2a;
  local_98 = &DAT_14011fc1e;
  FUN_1460ed1a6(&local_98);
  atexit((_func_5014 *)&LAB_143d7140d);
  DAT_14cb7fd20 = 0;
  uRam000000014cb7fd28 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143d7ad30;
  local_98 = &DAT_14011fc1e;
  FUN_1460ed93c(&local_98);
  atexit((_func_5014 *)&LAB_143d7143b);
  DAT_14cb7fdc8 = 0;
  _DAT_14cb7fdd0 = 0;
  atexit(FUN_143d71471);
  DAT_14cb7fdd8 = 0;
  _DAT_14cb7fde0 = 0;
  atexit(FUN_143d714a2);
  DAT_14cb7fde8 = 0;
  _DAT_14cb7fdf0 = 0;
  atexit((_func_5014 *)&LAB_143d714d3);
  DAT_14cb7fe58 = 0;
  uRam000000014cb7fe60 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143d7aea2;
  local_98 = &DAT_14011fc1e;
  FUN_1460ee0d2(&local_98);
  atexit((_func_5014 *)&LAB_143d71b02);
  local_98 = "Gamepad_Chord_FaceTop_FaceRight";
  uStack_90 = 0x1f;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb7fef0 = (ulonglong)uVar2;
  _DAT_14cb7fef8 = 0;
  DAT_14cb7ff00 = 0;
  atexit(FUN_143d71b07);
  local_98 = "Gamepad_Chord_FaceRight_FaceBottom";
  uStack_90 = 0x22;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb7ff08 = (ulonglong)uVar2;
  _DAT_14cb7ff10 = 0;
  DAT_14cb7ff18 = 0;
  atexit(FUN_143d71b42);
  local_98 = "Gamepad_Chord_FaceLeft_FaceBottom";
  uStack_90 = 0x21;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb7ff20 = (ulonglong)uVar2;
  _DAT_14cb7ff28 = 0;
  DAT_14cb7ff30 = 0;
  atexit(FUN_143d71b7d);
  local_98 = "Gamepad_Chord_FaceTop_FaceLeft";
  uStack_90 = 0x1e;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb7ff38 = (ulonglong)uVar2;
  _DAT_14cb7ff40 = 0;
  DAT_14cb7ff48 = 0;
  atexit(FUN_143d71bb8);
  local_98 = "Gamepad_Chord_LeftShoulder_RightShoulder";
  uStack_90 = 0x28;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb7ff50 = (ulonglong)uVar2;
  _DAT_14cb7ff58 = 0;
  DAT_14cb7ff60 = 0;
  atexit(FUN_143d71bf3);
  DAT_14cb7ffe0 = 0;
  uRam000000014cb7ffe8 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143d7aea8;
  local_98 = &DAT_14011fc1e;
  local_a8 = &local_98;
  FUN_145ca2bf2(&DAT_14cb7fff0,"input_feel",FUN_14888ea7a,0);
  atexit((_func_5014 *)&LAB_143d71d59);
  DAT_14cb800d8 = 0;
  uRam000000014cb800e0 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143d7aeae;
  local_98 = &DAT_14011fc1e;
  FUN_1460ee868(&local_98);
  atexit((_func_5014 *)&LAB_143d71d8e);
  local_98 = "input";
  uStack_90 = 5;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb80178 = (ulonglong)uVar2;
  _DAT_14cb80180 = 0;
  uRam000000014cb80188 = 0;
  _DAT_14cb80190 = 0;
  DAT_14cb80198 = 0;
  uRam000000014cb801a0 = 0;
  FUN_1446ddda2(&DAT_14cb80180,"input",0);
  atexit((_func_5014 *)&LAB_143d71d93);
  _DAT_14cb801a8 = 0;
  uRam000000014cb801b0 = 0;
  _DAT_14cb801b8 = 0;
  DAT_14cb801c0 = 0;
  uRam000000014cb801c8 = 0;
  FUN_1446ddda2(&DAT_14cb801a8,"engine.input",0);
  atexit((_func_5014 *)&LAB_143d71da4);
  DAT_14cb80230 = 0;
  _DAT_14cb80238 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143d7aeb4;
  local_98 = &DAT_14011fc1e;
  FUN_1460eeffe(&local_98);
  atexit((_func_5014 *)&LAB_143d71dde);
  DAT_14cb80320 = 0;
  uRam000000014cb80328 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143d7aeba;
  local_98 = &DAT_14011fc1e;
  FUN_1460ef794(&local_98);
  atexit((_func_5014 *)&LAB_143d72408);
  _DAT_14cb803b0 = 0;
  uRam000000014cb803b8 = 0;
  _DAT_14cb803c0 = 0;
  DAT_14cb803c8 = 0;
  uRam000000014cb803d0 = 0;
  FUN_1446ddda2(&DAT_14cb803b0,"contexts",0);
  atexit((_func_5014 *)&LAB_143d7240d);
  _DAT_14cb803d8 = 0;
  uRam000000014cb803e0 = 0;
  _DAT_14cb803e8 = 0;
  DAT_14cb803f0 = 0;
  uRam000000014cb803f8 = 0;
  FUN_1446ddda2(&DAT_14cb803d8,"contextdef",0);
  atexit((_func_5014 *)&LAB_143d7241e);
  _DAT_14cb80400 = 0;
  uRam000000014cb80408 = 0;
  _DAT_14cb80410 = 0;
  DAT_14cb80418 = 0;
  uRam000000014cb80420 = 0;
  FUN_1446ddda2(&DAT_14cb80400,"rebinddef",0);
  atexit((_func_5014 *)&LAB_143d7242f);
  _DAT_14cb80428 = 0;
  uRam000000014cb80430 = 0;
  _DAT_14cb80438 = 0;
  DAT_14cb80440 = 0;
  uRam000000014cb80448 = 0;
  FUN_1446ddda2(&DAT_14cb80428,"binds_button",0);
  atexit((_func_5014 *)&LAB_143d72440);
  _DAT_14cb80450 = 0;
  uRam000000014cb80458 = 0;
  _DAT_14cb80460 = 0;
  DAT_14cb80468 = 0;
  uRam000000014cb80470 = 0;
  FUN_1446ddda2(&DAT_14cb80450,"binds_axis",0);
  atexit((_func_5014 *)&LAB_143d72451);
  _DAT_14cb80478 = 0;
  uRam000000014cb80480 = 0;
  _DAT_14cb80488 = 0;
  DAT_14cb80490 = 0;
  uRam000000014cb80498 = 0;
  FUN_1446ddda2(&DAT_14cb80478,&DAT_14a1750f0,0);
  atexit((_func_5014 *)&LAB_143d72462);
  _DAT_14cb804a0 = 0;
  uRam000000014cb804a8 = 0;
  _DAT_14cb804b0 = 0;
  DAT_14cb804b8 = 0;
  uRam000000014cb804c0 = 0;
  FUN_1446ddda2(&DAT_14cb804a0,&DAT_14b40bc78,0);
  atexit((_func_5014 *)&LAB_143d72473);
  _DAT_14cb804c8 = 0;
  uRam000000014cb804d0 = 0;
  _DAT_14cb804d8 = 0;
  DAT_14cb804e0 = 0;
  uRam000000014cb804e8 = 0;
  FUN_1446ddda2(&DAT_14cb804c8,&DAT_14a176d1f,0);
  atexit((_func_5014 *)&LAB_143d72484);
  _DAT_14cb804f0 = 0;
  uRam000000014cb804f8 = 0;
  _DAT_14cb80500 = 0;
  DAT_14cb80508 = 0;
  uRam000000014cb80510 = 0;
  FUN_1446ddda2(&DAT_14cb804f0,&DAT_149dfd14a,0);
  atexit((_func_5014 *)&LAB_143d72495);
  _DAT_14cb80518 = 0;
  uRam000000014cb80520 = 0;
  _DAT_14cb80528 = 0;
  DAT_14cb80530 = 0;
  uRam000000014cb80538 = 0;
  FUN_1446ddda2(&DAT_14cb80518,&DAT_14a176d21,0);
  atexit((_func_5014 *)&LAB_143d724a6);
  local_98 = "pressed";
  uStack_90 = 7;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80640 = (ulonglong)uVar2;
  local_98 = "released";
  uStack_90 = 8;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80648 = (ulonglong)uVar2;
  local_98 = "up";
  uStack_90 = 2;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb80650 = (ulonglong)uVar2;
  local_98 = "down";
  uStack_90 = 4;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb80658 = (ulonglong)uVar2;
  local_98 = "left";
  uStack_90 = 4;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80660 = (ulonglong)uVar2;
  local_98 = "right";
  uStack_90 = 5;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb80668 = (ulonglong)uVar2;
  local_98 = "Cancel";
  uStack_90 = 6;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80670 = (ulonglong)uVar2;
  local_98 = "held";
  uStack_90 = 4;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80678 = (ulonglong)uVar2;
  local_98 = "InitialPulse";
  uStack_90 = 0xc;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80680 = (ulonglong)uVar2;
  local_98 = "Pulse";
  uStack_90 = 5;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80688 = (ulonglong)uVar2;
  DAT_14cb80690 = (undefined8 *)0x0;
  _DAT_14cb80698 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x400,0);
  lVar5 = 0x1f;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 4;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  *puVar4 = DAT_14cb80690;
  _DAT_14cb80698 = _DAT_14cb80698 + 0x20;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143d7b09e;
  local_98 = &DAT_14011fc1e;
  DAT_14cb80690 = puVar3;
  local_a8 = &local_98;
  FUN_145ca2bf2(&DAT_14cb806a0,"double_tap",FUN_148894e96,0xffffffff);
  atexit((_func_5014 *)&LAB_143d728f5);
  DAT_14cb80720 = (undefined8 *)0x0;
  _DAT_14cb80728 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x1b00,0);
  lVar5 = 0x1f;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 0x1b;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  _DAT_14cb80728 = _DAT_14cb80728 + 0x20;
  *puVar4 = DAT_14cb80720;
  DAT_14cb80720 = puVar3;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143d7b0a4;
  local_98 = &DAT_14011fc1e;
  local_a8 = &local_98;
  FUN_145ca2bf2(&DAT_14cb80730,"vector_axis",FUN_148894f8a,0xffffffff);
  atexit((_func_5014 *)&LAB_143d72901);
  _DAT_14cb807b8 = &LAB_143d7290d;
  _DAT_14cb807c0 = 0x442f1333;
  DAT_14cb807c4 = 1;
  DAT_14cb807b0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb807b0;
  atexit((_func_5014 *)&LAB_143d72912);
  _DAT_14cb807d8 = &LAB_143d72946;
  _DAT_14cb807e0 = 0x442f2666;
  DAT_14cb807e4 = 1;
  DAT_14cb807d0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb807d0;
  atexit((_func_5014 *)&LAB_143d7294b);
  _DAT_14cb807f8 = &LAB_143d7297f;
  _DAT_14cb80800 = 0x442f2000;
  DAT_14cb80804 = 1;
  DAT_14cb807f0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb807f0;
  atexit((_func_5014 *)&LAB_143d72984);
  _DAT_14cb80818 = &LAB_143d729b8;
  _DAT_14cb80820 = 0x442f0666;
  DAT_14cb80824 = 1;
  DAT_14cb80810 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb80810;
  atexit((_func_5014 *)&LAB_143d729bd);
  _DAT_14cb80838 = &LAB_143d729f1;
  _DAT_14cb80840 = 0x442f0ccd;
  DAT_14cb80844 = 1;
  DAT_14cb80830 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb80830;
  atexit((_func_5014 *)&LAB_143d729f6);
  _DAT_14cb80858 = &LAB_143d72a2a;
  _DAT_14cb80860 = 0x442f2ccd;
  DAT_14cb80864 = 1;
  DAT_14cb80850 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb80850;
  atexit((_func_5014 *)&LAB_143d72a2f);
  _DAT_14cb80878 = &LAB_143d72a63;
  _DAT_14cb80880 = 0x442f199a;
  DAT_14cb80884 = 1;
  DAT_14cb80870 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb80870;
  atexit((_func_5014 *)&LAB_143d72a68);
  DAT_14cb80890 = 0;
  atexit((_func_5014 *)&LAB_143d72a9c);
  local_98 = "AssociatedMission";
  uStack_90 = 0x11;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80938 = (ulonglong)uVar2;
  local_98 = "GbxMomentManager";
  uStack_90 = 0x10;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb80948 = (ulonglong)uVar2;
  local_a8 = (char **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb80950,L"gbx.Moments.MaxNumMomentsPerUpdate",&DAT_14c763950,
                L"If > 0, Maximum number of moments that will update updated per tick.");
  atexit(FUN_143d72ba9);
  _DAT_14cb80968 = 0x47efffffe0000000;
  _DAT_14cb80970 = 0x47efffffe0000000;
  _DAT_14cb80978 = 0x47efffffe0000000;
  _DAT_14cb80980 = 0x47efffffe0000000;
  _DAT_14cb80988 = 0x47efffffe0000000;
  _DAT_14cb80990 = 0x47efffffe0000000;
  _DAT_14cb80998 = 0x47efffffe0000000;
  _DAT_14cb809a0 = 0x47efffffe0000000;
  _DAT_14cb809a8 = 0xffffffff;
  _DAT_14cb809ac = 0;
  FUN_1446f470e(&DAT_14cb809b0,L"Actor",1);
  FUN_1446f470e(&DAT_14cb809b8,L"AINode",1);
  FUN_1446f470e(&DAT_14cb809c0,L"ExecutionState",1);
  FUN_1446f470e(&DAT_14cb809c8,&DAT_14acb36a4,1);
  FUN_1446f470e(&DAT_14cb809d0,L"OnStarted",1);
  _DAT_14cb809d8 = 0x3f0000003f000000;
  uRam000000014cb809e0 = 0x3f8000003f000000;
  DAT_14cb80c50 = 0;
  DAT_14cb80c58 = 0;
  atexit(FUN_143d739f5);
  FUN_1446f470e(&DAT_14cb809e8,L"GbxMomentNode_CinematicMode",1);
  FUN_1446f470e(&DAT_14cb80a14,L"String",1);
  FUN_1446f470e(&DAT_14cb80a1c,L"Time",1);
  FUN_1446f470e(&DAT_14cb80a24,L"Note",1);
  FUN_1446f470e(&DAT_14cb80a2c,L"Duration",1);
  FUN_1446f470e(&DAT_14cb80a34,L"Moment",1);
  FUN_1446f470e(&DAT_14cb80a3c,L"Feedback",1);
  FUN_1446f470e(&DAT_14cb80a44,L"Condition",1);
  FUN_1446f470e(&DAT_14cb80a50,L"Then",1);
  FUN_1446f470e(&DAT_14cb80a58,L"Else",1);
  FUN_1446f470e(&DAT_14cb80a60,L"Target",1);
  FUN_1446f470e(&DAT_14cb80a68,L"Actor",1);
  FUN_1446f470e(&DAT_14cb80a70,L"TimeLimit",1);
  FUN_1446f470e(&DAT_14cb80a78,L"AngleThreshold",1);
  FUN_1446f470e(&DAT_14cb80a80,L"Actor",1);
  FUN_1446f470e(&DAT_14cb80a88,L"Target",1);
  FUN_1446f470e(&DAT_14cb80a90,L"Stage",1);
  FUN_1446f470e(&DAT_14cb80a98,L"Target",1);
  FUN_1446f470e(&DAT_14cb80aa0,L"Actor",1);
  FUN_1446f470e(&DAT_14cb80aa8,L"Target",1);
  FUN_1446f470e(&DAT_14cb80ab0,L"Stage",1);
  FUN_1446f470e(&DAT_14cb80ab8,L"IntroDuration",1);
  FUN_1446f470e(&DAT_14cb80ac0,L"IntroCinematicMode",1);
  FUN_1446f470e(&DAT_14cb80ac8,L"CinematicMode",1);
  FUN_1446f470e(&DAT_14cb80ad0,L"OnSequenceFinished",1);
  FUN_1446f470e(&DAT_14cb80ad8,L"GbxMomentNode_PlayCutscene_IntroOutro",1);
  FUN_1446f470e(&DAT_14cb80ae0,L"GbxMomentNode_PlayCutscene_AutoIntroFadeIn",1);
  FUN_1446f470e(&DAT_14cb80ae8,L"GbxMomentNode_PlayCutscene_Skip",1);
  local_98 = (char *)0x4bfc3b235b54a971;
  uStack_90 = 0xd7d599e9;
  uStack_8c = 0xa4fe8c3f;
  _DAT_14cb80af4 = 0x5b54a971;
  uRam000000014cb80af8 = 0x4bfc3b23;
  uRam000000014cb80afc = 0xd7d599e9;
  uRam000000014cb80b00 = 0xa4fe8c3f;
  FUN_141005458(&local_98,0,L"GbxMomentNodeSettings_PlayDialog",0);
  atexit((_func_5014 *)&LAB_143d765a7);
  local_98 = (char *)0x224c39896230ed5;
  uStack_90 = 0x4bb3a81e;
  uStack_8c = 0x20a5407c;
  _DAT_14cb80b04 = 0x96230ed5;
  uRam000000014cb80b08 = 0x224c398;
  uRam000000014cb80b0c = 0x4bb3a81e;
  uRam000000014cb80b10 = 0x20a5407c;
  FUN_141005458(&local_98,1,L"GbxMomentNodeSettings_PlayDialogLines",0);
  atexit((_func_5014 *)&LAB_143d76a3c);
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb80b20 = (ulonglong)uVar2 | 0x100000000;
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb80b28 = (ulonglong)uVar2 | 0x200000000;
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80b30 = (ulonglong)uVar2 | 0x300000000;
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80b38 = (ulonglong)uVar2 | 0x400000000;
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80b40 = (ulonglong)uVar2 | 0x500000000;
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80b48 = (ulonglong)uVar2 | 0x600000000;
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80b50 = (ulonglong)uVar2 | 0x700000000;
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80b58 = (ulonglong)uVar2 | 0x800000000;
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80b60 = (ulonglong)uVar2 | 0x900000000;
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80b68 = (ulonglong)uVar2 | 0xa00000000;
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80b70 = (ulonglong)uVar2 | 0xb00000000;
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80b78 = (ulonglong)uVar2 | 0xc00000000;
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80b80 = (ulonglong)uVar2 | 0xd00000000;
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80b88 = (ulonglong)uVar2 | 0xe00000000;
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80b90 = (ulonglong)uVar2 | 0xf00000000;
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80b98 = (ulonglong)uVar2 | 0x1000000000;
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80ba0 = (ulonglong)uVar2 | 0x1100000000;
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80ba8 = (ulonglong)uVar2 | 0x1200000000;
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80bb0 = (ulonglong)uVar2 | 0x1300000000;
  local_98 = "OnFinishedLine";
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb80bb8 = (ulonglong)uVar2 | 0x1400000000;
  FUN_1446f470e(&DAT_14cb80bc0,L"Moment",1);
  FUN_1446f470e(&DAT_14cb80bc8,L"Parameters",1);
  local_98 = (char *)0x75d049f28eb36524;
  uStack_90 = 0x80c462dd;
  uStack_8c = 0x9048af91;
  _DAT_14cb80bd0 = 0x8eb36524;
  uRam000000014cb80bd4 = 0x75d049f2;
  uRam000000014cb80bd8 = 0x80c462dd;
  uRam000000014cb80bdc = 0x9048af91;
  FUN_141005458(&local_98,0,L"GbxMomentNodeSettings_PlaySequence",0);
  atexit((_func_5014 *)&LAB_143d77009);
  FUN_1446f470e(&DAT_14cb80be0,L"TransformOrigin",1);
  FUN_1446f470e(&DAT_14cb80be8,L"LevelSequenceActor",1);
  FUN_1446f470e(&DAT_14cb80bf0,L"ai_scripted_move_rotation",1);
  FUN_1446f470e(&DAT_14cb80bf8,L"bInWaitPosition",1);
  FUN_1446f470e(&DAT_14cb80c00,L"MoveToSequenceStart",1);
  FUN_1446f470e(&DAT_14cb80c08,L"ActorsMovingToStartCount",1);
  FUN_1446f470e(&DAT_14cb80c10,L"MoveToStartTimeout",1);
  FUN_1446f470e(&DAT_14cb80c18,L"Actor",1);
  FUN_1446f470e(&DAT_14cb80c20,L"bAllPlayers",1);
  FUN_1446f470e(&DAT_14cb80c28,L"Trick",1);
  FUN_1446f470e(&DAT_14cb80c30,L"bUseDifferentTrickForHost",1);
  FUN_1446f470e(&DAT_14cb80c38,L"HostTrick",1);
  FUN_1446f470e(&DAT_14cb80c40,L"Count",1);
  FUN_1446f470e(&DAT_14cb80c48,L"PlayRate",1);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d7cb94 FUN_143d7cb94 body=133 status=ok
// SIG undefined FUN_143d7cb94(void)

undefined8 * FUN_143d7cb94(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b1b5150;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 8) = 1;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 0xd) = 4;
  *(undefined4 *)(param_1 + 10) = 0x41700000;
  *(undefined1 *)(param_1 + 0xe) = 3;
  *(char *)(param_1 + 0xf) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *param_1 = &PTR_FUN_14b1c13c0;
  FUN_140785382(param_1 + 0x10,0x13);
  return param_1;
}



// FUNCTION 143d7cc20 FUN_143d7cc20 body=224 status=ok
// SIG undefined FUN_143d7cc20(void)

void FUN_143d7cc20(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined2 local_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_58 = 0;
    cVar1 = FUN_140c58c2c(*(longlong *)(param_1 + 8),param_1 + 0x80,&local_50,&DAT_14cb8a5a8);
    if (cVar1 != '\0') {
      puVar2 = (undefined8 *)FUN_14889a422(param_2);
      *puVar2 = CONCAT44(uStack_4c,CONCAT22(uStack_4e,local_50));
      *(undefined4 *)(puVar2 + 1) = uStack_48;
      FUN_1447715ec(puVar2 + 2,&local_40);
      *(undefined1 *)(puVar2 + 7) = 0;
      *(undefined1 *)(puVar2 + 8) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x44) = DAT_14cb8a5c0;
      FUN_140641d04(puVar2 + 8);
    }
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d7cd02 FUN_143d7cd02 body=599 status=ok
// SIG undefined FUN_143d7cd02(void)

void FUN_143d7cd02(longlong param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 *_Dst;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = FUN_1470e53c2(param_2,&DAT_14cb80c68);
  pcVar1 = (char *)(param_1 + 0x88);
  bVar2 = *(byte *)(lVar6 + 0x30);
  _Dst = (undefined8 *)(lVar6 + 0x10);
  if (bVar2 == *(byte *)(param_1 + 0xa8)) {
    pcVar10 = pcVar1;
    if (0x18 < *(ushort *)(param_1 + 0xa0)) {
      pcVar10 = *(char **)(param_1 + 0x88);
    }
    if (0x18 < *(ushort *)(lVar6 + 0x28)) {
      _Dst = (undefined8 *)*_Dst;
    }
    uVar7 = (ulonglong)((uint)bVar2 * 0x120);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar7);
    if (pcVar4 == (code *)0x0) {
      memcpy(_Dst,pcVar10,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
    }
    else {
      (*pcVar4)(_Dst);
    }
  }
  else {
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
    if (pcVar4 != (code *)0x0) {
      puVar9 = _Dst;
      if (0x18 < *(ushort *)(lVar6 + 0x28)) {
        puVar9 = (undefined8 *)*_Dst;
      }
      (*pcVar4)(puVar9);
    }
    if (0x18 < *(ushort *)(lVar6 + 0x28)) {
      FUN_1400020a8(*_Dst);
    }
    bVar2 = *(byte *)(param_1 + 0xa8);
    uVar3 = *(ushort *)(param_1 + 0xa0);
    *(ushort *)(lVar6 + 0x28) = uVar3;
    pcVar10 = pcVar1;
    if (0x18 < uVar3) {
      puVar9 = (undefined8 *)FUN_14001cc68(uVar3,0);
      *_Dst = puVar9;
      pcVar10 = *(char **)pcVar1;
      _Dst = puVar9;
    }
    uVar7 = (ulonglong)((uint)bVar2 * 0x120);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + uVar7);
    if (pcVar4 == (code *)0x0) {
      memcpy(_Dst,pcVar10,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
    }
    else {
      (*pcVar4)(_Dst);
    }
    *(undefined1 *)(lVar6 + 0x30) = *(undefined1 *)(param_1 + 0xa8);
  }
  *(undefined1 *)(lVar6 + 0x38) = *(undefined1 *)(param_1 + 0xb0);
  pcVar10 = pcVar1;
  if (0x18 < *(ushort *)(param_1 + 0xa0)) {
    pcVar10 = *(char **)pcVar1;
  }
  uVar7 = (ulonglong)((uint)*(byte *)(param_1 + 0xa8) * 0x120);
  if (*(code **)(&DAT_14c9a8620 + uVar7) == (code *)0x0) {
    pcVar8 = pcVar10 + *(int *)((longlong)&DAT_14c9a8510 + uVar7);
    do {
      if (pcVar8 <= pcVar10) goto LAB_143d7ce32;
      cVar5 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar5 == '\0');
  }
  else {
    cVar5 = (**(code **)(&DAT_14c9a8620 + uVar7))();
    if (cVar5 != '\0') goto LAB_143d7ce32;
  }
  FUN_140592d2e(pcVar1,&local_50);
  if ((longlong *)(param_2 + 8) == &local_50) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 8) = local_50;
    *(undefined4 *)(param_2 + 0x10) = local_48;
    *(undefined4 *)(param_2 + 0x14) = local_44;
  }
LAB_143d7ce32:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d7cf5a FUN_143d7cf5a body=307 status=ok
// SIG undefined FUN_143d7cf5a(void)

void FUN_143d7cf5a(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_118 [44];
  undefined1 local_ec [4];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined6 local_8e;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined2 local_78 [2];
  undefined8 local_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78[0] = 0;
  local_74 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140c589d6(*(undefined8 *)(param_1 + 0x40),*(longlong *)(param_1 + 0x48) + 0x80,local_78,
                &DAT_14cb8a5a8);
  cVar1 = FUN_140114204(local_78);
  if (cVar1 != '\0') {
    local_dc = 0xc61c4000;
    local_d8[0] = 0;
    local_c8 = (longlong *)0x0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    local_8e = 0;
    uStack_88 = SUB82(&local_dc,0);
    uStack_86 = (undefined6)((ulonglong)&local_dc >> 0x10);
    local_ec[0] = 0;
    local_e8 = 0;
    local_e0 = 0;
    FUN_144976b9c(local_ec,DAT_14cb8a5c0);
    FUN_143d72bf2(*(undefined8 *)(param_1 + 0x40),local_78,local_ec,local_d8);
    if (local_d8[0] != 0) {
      plVar2 = local_c8;
      if (local_c8 == (longlong *)0x0) {
        plVar2 = local_b8;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d7d094 FUN_143d7d094 body=1256 status=ok
// SIG undefined FUN_143d7d094(void)

undefined8 FUN_143d7d094(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  void *_Dst;
  undefined *puVar10;
  undefined8 ****ppppuVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_b8 [40];
  char local_90;
  undefined7 uStack_8f;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined1 local_70;
  int local_68;
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 0x70) = 0;
  lVar15 = *(longlong *)(param_1 + 0x48) + 0x80;
  cVar5 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar15);
  if (cVar5 == '\0') {
    *(undefined4 *)(param_1 + 0x70) = 0;
    uVar8 = 0;
  }
  else {
    lVar18 = *(longlong *)(param_1 + 0x40);
    if (lVar18 == 0) {
      lVar12 = 0;
      local_88 = 0;
LAB_143d7d4c1:
      local_80 = (longlong *)0x0;
      bVar19 = true;
    }
    else {
      if (*(int *)(lVar18 + 0x4c) == 0) {
LAB_143d7d3d9:
        lVar12 = 0;
      }
      else {
        uVar14 = *(uint *)(lVar18 + 0x48);
        lVar12 = 0;
        if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
          plVar16 = (longlong *)
                    ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
          if ((plVar16 == (longlong *)0x0) ||
             (((int)plVar16[2] != *(int *)(lVar18 + 0x4c) ||
              ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)))) goto LAB_143d7d3d9;
          lVar12 = *plVar16;
        }
      }
      plVar16 = *(longlong **)(lVar18 + 0x118);
      local_88 = param_1;
      if (plVar16 == (longlong *)0x0) goto LAB_143d7d4c1;
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar16 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      LOCK();
      *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
      UNLOCK();
      bVar19 = false;
      local_80 = plVar16;
    }
    plVar16 = local_80;
    local_68 = 0;
    local_90 = '\x03';
    local_78._0_4_ = 0;
    if (lVar12 == 0) {
      iVar6 = 0;
      uVar14 = (uint)local_78;
    }
    else {
      uVar14 = *(uint *)(lVar12 + 0xc);
      local_78 = (ulonglong)uVar14;
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar18 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar18 = 0;
      }
      iVar6 = *(int *)(lVar18 + 0x10);
      if (*(int *)(lVar18 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar6 = *(int *)(lVar18 + 0x10);
        bVar20 = iVar6 == 0;
        if (bVar20) {
          *(int *)(lVar18 + 0x10) = iVar13;
          iVar6 = 0;
        }
        UNLOCK();
        uVar14 = (uint)local_78;
        if (bVar20) {
          iVar6 = iVar13;
        }
      }
    }
    local_78._0_4_ = uVar14;
    local_78 = CONCAT44(iVar6,(uint)local_78);
    local_70 = 2;
    if (local_68 != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_68 + -1,1);
      local_68 = 0;
    }
    if (!bVar19) {
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    FUN_1447c3578(lVar15,local_60,&local_90);
    lVar15 = FUN_14030a32e(local_60);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar11 = local_60;
      if (0x18 < local_48) {
        ppppuVar11 = (undefined8 ****)local_60[0];
      }
      (*pcVar3)(ppppuVar11);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60[0]);
    }
    lVar18 = DAT_14c9a3da0;
    if ((longlong)local_68 != 0) {
      lVar12 = (longlong)local_68 + -1;
      lVar17 = lVar12 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar17),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar17));
      if (*(longlong *)(lVar18 + lVar17) != 0) {
        FUN_1400020a8();
      }
      lVar18 = DAT_14c9a3da0;
      iVar6 = (int)lVar12;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
      }
      *(undefined4 *)(lVar18 + lVar17) = 0xffffffff;
      iVar13 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar13 = DAT_14c9a3dd0;
      }
      *(int *)(lVar18 + 4 + lVar17) = iVar13;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar10 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar10 = DAT_14c9a3dc0;
      }
      iVar13 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar13 = iVar6;
      }
      bVar4 = (byte)lVar12 & 0x1f;
      DAT_14c9a3dd0 = iVar6;
      *(uint *)(puVar10 + (longlong)(iVar13 >> 5) * 4) =
           *(uint *)(puVar10 + (longlong)(iVar13 >> 5) * 4) &
           (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      local_68 = 0;
    }
    if ((local_90 == '\x03') && (local_80 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
    if (lVar15 == 0) {
      FUN_1400b22c2(&local_90,"Settings.Actor");
      _Dst = (void *)CONCAT71(uStack_8f,local_90);
      if ((longlong)(int)local_88 != 0) {
        uVar14 = 1;
        lVar15 = 0;
        do {
          if (*(short *)((longlong)_Dst + lVar15) == 0x2e) {
            if (uVar14 != 0) {
              uVar7 = (int)local_88 - 1;
              if ((int)local_88 == 0) {
                uVar7 = 0;
              }
              if ((int)uVar14 < (int)uVar7) {
                uVar7 = uVar14;
              }
              if (0 < (int)uVar7) {
                if ((int)local_88 - uVar7 != 0) {
                  memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar7 * 2),
                          (longlong)(int)((int)local_88 - uVar7) * 2);
                }
                local_88 = CONCAT44(local_88._4_4_,(int)local_88 - uVar7);
                FUN_1449649ae(&local_90);
                _Dst = (void *)CONCAT71(uStack_8f,local_90);
              }
            }
            break;
          }
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 2;
        } while ((longlong)(int)local_88 * 2 != lVar15);
      }
      if (_Dst != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar9 = 0;
      goto LAB_143d7d2e2;
    }
    uVar14 = *(uint *)(lVar15 + 0xc);
    *(uint *)(param_1 + 0x70) = uVar14;
    if ((int)uVar14 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    uVar8 = (ulonglong)*(uint *)(lVar15 + 0x10);
    if (*(uint *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      uVar14 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar14);
      }
      LOCK();
      uVar7 = *(uint *)(lVar15 + 0x10);
      bVar19 = uVar7 == 0;
      if (bVar19) {
        *(uint *)(lVar15 + 0x10) = uVar14;
        uVar7 = 0;
      }
      UNLOCK();
      if (bVar19) {
        uVar7 = uVar14;
      }
      uVar8 = (ulonglong)uVar7;
    }
  }
  *(int *)(param_1 + 0x74) = (int)uVar8;
  uVar9 = CONCAT71((int7)(uVar8 >> 8),1);
LAB_143d7d2e2:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d7d57e FUN_143d7d57e body=639 status=ok
// SIG undefined FUN_143d7d57e(void)

void FUN_143d7d57e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_68 [40];
  longlong *local_40;
  int local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((((*(int *)(param_1 + 0x74) == 0) || (uVar1 = *(uint *)(param_1 + 0x70), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(param_1 + 0x74))))) ||
     (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 ||
      (plVar8 = (longlong *)*plVar8, plVar8 == (longlong *)0x0)))) {
LAB_143d7d64f:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  uVar5 = FUN_140b040c0();
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar5);
  if (plVar8 == (longlong *)0x0) goto LAB_143d7d64f;
  uVar5 = FUN_140b040c0();
  plVar6 = (longlong *)FUN_144718840(plVar8,uVar5);
  if (plVar8 == plVar6 || plVar6 == (longlong *)0x0) goto LAB_143d7d64f;
  lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6);
  if (((lVar7 == 0) || (FUN_140356f00(lVar7,2,3), *(int *)(lVar7 + 0x300) < 1)) ||
     (lVar7 = **(longlong **)(lVar7 + 0x2f8), lVar7 == 0)) goto LAB_143d7d64f;
  FUN_1488b2146(&local_40,param_1);
  if (((local_38 == 0) || (local_40 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_40 + 0x30))(), cVar3 == '\0')) {
    if (local_38 != 0) {
      if (local_40 == (longlong *)0x0) goto LAB_143d7d7a1;
      (**(code **)*local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      goto LAB_143d7d78f;
    }
  }
  else {
    plVar8 = (longlong *)(lVar7 + 0x68);
    if (*(int *)(lVar7 + 0x7c) < 1) {
      iVar2 = *(int *)(lVar7 + 0x70);
      iVar4 = *(int *)(lVar7 + 0x78) + -1;
      *(int *)(lVar7 + 0x78) = iVar4;
      if (iVar4 <= iVar2) {
        iVar4 = iVar2;
        if (0 < iVar2) {
          iVar9 = 0;
          do {
            if (((*(int *)(*plVar8 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                (plVar6 = *(longlong **)(*plVar8 + (longlong)iVar9 * 0x10),
                plVar6 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar6 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(plVar8,iVar9);
              FUN_14005b248(plVar8);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar4 = *(int *)(lVar7 + 0x70);
          } while (iVar9 < iVar4);
        }
        iVar9 = 2;
        if (2 < iVar4 * 2) {
          iVar9 = iVar4 * 2;
        }
        *(int *)(lVar7 + 0x78) = iVar9;
        if ((iVar9 < iVar2) && (*(int *)(lVar7 + 0x74) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_38 != 0) && (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x38))(local_40,local_30);
    }
    iVar2 = *(int *)(lVar7 + 0x70);
    *(uint *)(lVar7 + 0x70) = iVar2 + 1U;
    if (*(uint *)(lVar7 + 0x74) < iVar2 + 1U) {
      FUN_1447a71f6(plVar8,iVar2);
    }
    lVar7 = *plVar8;
    lVar10 = (longlong)iVar2 * 0x10;
    *(undefined8 *)(lVar7 + lVar10) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar10) = 0;
    *(longlong **)(lVar7 + lVar10) = local_40;
    local_40 = (longlong *)0x0;
    *(int *)(lVar7 + 8 + lVar10) = local_38;
LAB_143d7d78f:
    local_38 = 0;
  }
  if (local_40 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143d7d7a1:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d7d80e FUN_143d7d80e body=450 status=ok
// SIG undefined FUN_143d7d80e(void)

void FUN_143d7d80e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined1 local_a8 [4];
  undefined8 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined2 local_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(int *)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
  }
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  cVar4 = FUN_140c589d6(*(undefined8 *)(param_1 + 0x40),lVar2 + 0x80,&local_78,lVar2 + 0xb8);
  if (cVar4 == '\0') {
    FUN_14097c15a(param_1);
  }
  else {
    local_c8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_a8[0] = 0;
    local_a4 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    lStack_80 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    local_e8 = CONCAT44(uStack_74,CONCAT22(uStack_76,local_78));
    local_e0 = uStack_70;
    FUN_1447715ec();
    FUN_140427366(lVar2 + 200,local_a8);
    local_b0 = 0;
    FUN_145c52e44(*(undefined8 *)(param_1 + 0x40),&local_e8);
    lVar2 = lStack_80;
    if (lStack_80 != 0) {
      plVar1 = (longlong *)(lStack_80 + 8);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lStack_80 + 0x28) * 0x120));
      if (pcVar3 != (code *)0x0) {
        plVar5 = plVar1;
        if (0x18 < *(ushort *)(lStack_80 + 0x20)) {
          plVar5 = (longlong *)*plVar1;
        }
        (*pcVar3)(plVar5);
      }
      if (0x18 < *(ushort *)(lVar2 + 0x20)) {
        FUN_1400020a8(*plVar1);
      }
      FUN_1400020a8(lVar2);
    }
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d7d9ee FUN_143d7d9ee body=1081 status=ok
// SIG undefined FUN_143d7d9ee(void)

undefined8 FUN_143d7d9ee(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  void *_Dst;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  char local_98;
  undefined7 uStack_97;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78;
  int local_70 [2];
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 0x70) = 0;
  lVar11 = *(longlong *)(param_1 + 0x48) + 0x80;
  cVar4 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar11);
  if (cVar4 == '\0') {
    *(undefined4 *)(param_1 + 0x70) = 0;
    uVar7 = 0;
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x40);
    if (lVar14 == 0) {
      lVar13 = 0;
      local_90 = 0;
LAB_143d7dd6a:
      local_88 = (longlong *)0x0;
      bVar16 = true;
    }
    else {
      if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_143d7dd33:
        lVar13 = 0;
      }
      else {
        uVar10 = *(uint *)(lVar14 + 0x48);
        lVar13 = 0;
        if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
          plVar12 = (longlong *)
                    ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
          if ((plVar12 == (longlong *)0x0) ||
             (((int)plVar12[2] != *(int *)(lVar14 + 0x4c) ||
              ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_143d7dd33;
          lVar13 = *plVar12;
        }
      }
      plVar12 = *(longlong **)(lVar14 + 0x118);
      local_90 = param_1;
      if (plVar12 == (longlong *)0x0) goto LAB_143d7dd6a;
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      bVar16 = false;
      local_88 = plVar12;
    }
    plVar12 = local_88;
    local_70[0] = 0;
    local_98 = '\x03';
    local_80._0_4_ = 0;
    if (lVar13 == 0) {
      iVar5 = 0;
      uVar10 = (uint)local_80;
    }
    else {
      uVar10 = *(uint *)(lVar13 + 0xc);
      local_80 = (ulonglong)uVar10;
      if ((int)uVar10 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar5 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar5 = *(int *)(lVar14 + 0x10);
        bVar17 = iVar5 == 0;
        if (bVar17) {
          *(int *)(lVar14 + 0x10) = iVar9;
          iVar5 = 0;
        }
        UNLOCK();
        uVar10 = (uint)local_80;
        if (bVar17) {
          iVar5 = iVar9;
        }
      }
    }
    local_80._0_4_ = uVar10;
    local_80 = CONCAT44(iVar5,(uint)local_80);
    local_78 = 2;
    if (local_70[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_70[0] + -1,1);
      local_70[0] = 0;
    }
    if (!bVar16) {
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    FUN_1447c3578(lVar11,local_68,&local_98);
    lVar11 = FUN_14030a32e(local_68);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar15 = local_68;
      if (0x18 < local_50) {
        ppppuVar15 = (undefined8 ****)local_68[0];
      }
      (*pcVar3)(ppppuVar15);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_1448173f8(local_70);
    if ((local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    if (lVar11 == 0) {
      FUN_1400b22c2(&local_98,"Settings.Actor");
      _Dst = (void *)CONCAT71(uStack_97,local_98);
      if ((longlong)(int)local_90 != 0) {
        uVar10 = 1;
        lVar11 = 0;
        do {
          if (*(short *)((longlong)_Dst + lVar11) == 0x2e) {
            if (uVar10 != 0) {
              uVar6 = (int)local_90 - 1;
              if ((int)local_90 == 0) {
                uVar6 = 0;
              }
              if ((int)uVar10 < (int)uVar6) {
                uVar6 = uVar10;
              }
              if (0 < (int)uVar6) {
                if ((int)local_90 - uVar6 != 0) {
                  memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar6 * 2),
                          (longlong)(int)((int)local_90 - uVar6) * 2);
                }
                local_90 = CONCAT44(local_90._4_4_,(int)local_90 - uVar6);
                FUN_1449649ae(&local_98);
                _Dst = (void *)CONCAT71(uStack_97,local_98);
              }
            }
            break;
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 2;
        } while ((longlong)(int)local_90 * 2 != lVar11);
      }
      if (_Dst != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = 0;
      goto LAB_143d7dc3d;
    }
    uVar10 = *(uint *)(lVar11 + 0xc);
    *(uint *)(param_1 + 0x70) = uVar10;
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar7 = (ulonglong)*(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar10);
      }
      LOCK();
      uVar6 = *(uint *)(lVar11 + 0x10);
      bVar16 = uVar6 == 0;
      if (bVar16) {
        *(uint *)(lVar11 + 0x10) = uVar10;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar16) {
        uVar6 = uVar10;
      }
      uVar7 = (ulonglong)uVar6;
    }
  }
  *(int *)(param_1 + 0x74) = (int)uVar7;
  uVar8 = CONCAT71((int7)(uVar7 >> 8),1);
LAB_143d7dc3d:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d7de28 FUN_143d7de28 body=1490 status=ok
// SIG undefined FUN_143d7de28(void)

void FUN_143d7de28(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 ****ppppuVar12;
  int iVar13;
  code ****ppppcVar14;
  bool bVar15;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code ***local_c0;
  code *local_b8;
  code *local_b0;
  int local_a4;
  code ***local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  byte local_80;
  int local_78 [2];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((((*(int *)(param_1 + 0x74) == 0) || (uVar2 = *(uint *)(param_1 + 0x70), (int)uVar2 < 0)) ||
       (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(param_1 + 0x74))))) ||
     ((lVar3 = *(longlong *)(param_1 + 0x48), (*(uint *)(plVar9 + 1) & 0x10200000) != 0 ||
      (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 ||
       (plVar9 = (longlong *)*plVar9, plVar9 == (longlong *)0x0)))))) {
LAB_143d7de93:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
  }
  if (DAT_14c9a4e08 == 0) {
    local_c0 = (code ***)&local_a0;
    local_a0 = (code ***)FUN_1449e2820;
    local_b0 = FUN_14081d0ea;
    local_b8 = FUN_1427b09ee;
    local_c8 = &LAB_1470c76a3;
    local_d0 = FUN_1462ab034;
    local_d8 = L"Engine";
    local_e0 = 0;
    local_e8 = 0x10004001;
    local_f0 = 8;
    local_f8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
  }
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,DAT_14c9a4e08);
  if (plVar9 == (longlong *)0x0) goto LAB_143d7de93;
  if (DAT_14c9a4e08 == 0) {
    local_c0 = (code ***)&local_a0;
    local_a0 = (code ***)FUN_1449e2820;
    local_b0 = FUN_14081d0ea;
    local_b8 = FUN_1427b09ee;
    local_c8 = &LAB_1470c76a3;
    local_d0 = FUN_1462ab034;
    local_d8 = L"Engine";
    local_e0 = 0;
    local_e8 = 0x10004001;
    local_f0 = 8;
    local_f8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
  }
  plVar7 = (longlong *)FUN_144718840(plVar9,DAT_14c9a4e08);
  if ((plVar9 == plVar7 || plVar7 == (longlong *)0x0) || (*(longlong *)(lVar3 + 0xb8) == 0))
  goto LAB_143d7de93;
  uVar8 = (**(code **)(*plVar7 + 0x28))(plVar7);
  if (*(char *)(lVar3 + 0x100) == '\x01') {
    FUN_144a7fe3a(uVar8,&local_a0,lVar3 + 0xb8);
    if (&local_a0 != (code ****)(param_1 + 0x78)) {
      FUN_1488b2656((code ****)(param_1 + 0x78),&local_a0);
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppcVar14 = &local_a0;
      if (0x18 < (ushort)local_88) {
        ppppcVar14 = (code ****)local_a0;
      }
      (*pcVar4)(ppppcVar14);
    }
    if (0x18 < (ushort)local_88) {
      FUN_1400020a8(local_a0);
    }
  }
  lVar11 = *(longlong *)(param_1 + 0x40);
  if (lVar11 == 0) {
    lVar10 = 0;
    local_98 = 0;
  }
  else {
    if (*(int *)(lVar11 + 0x4c) == 0) {
LAB_143d7e1f3:
      lVar10 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar11 + 0x48);
      lVar10 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar9 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar9 == (longlong *)0x0) ||
           (((int)plVar9[2] != *(int *)(lVar11 + 0x4c) ||
            ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_143d7e1f3;
        lVar10 = *plVar9;
      }
    }
    plVar9 = *(longlong **)(lVar11 + 0x118);
    local_98 = param_1;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar7 = plVar9 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      bVar5 = false;
      local_90 = plVar9;
      goto LAB_143d7e06a;
    }
  }
  local_90 = (longlong *)0x0;
  bVar5 = true;
LAB_143d7e06a:
  plVar9 = local_90;
  local_a0 = (code ***)CONCAT71(local_a0._1_7_,3);
  local_78[0] = 0;
  local_88._0_4_ = 0;
  if (lVar10 == 0) {
    iVar6 = 0;
    uVar2 = (uint)local_88;
  }
  else {
    uVar2 = *(uint *)(lVar10 + 0xc);
    local_88 = (ulonglong)uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar6 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar15) {
        local_a4 = iVar13;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
        iVar13 = local_a4;
      }
      LOCK();
      iVar6 = *(int *)(lVar11 + 0x10);
      bVar15 = iVar6 == 0;
      if (bVar15) {
        *(int *)(lVar11 + 0x10) = iVar13;
        iVar6 = 0;
      }
      UNLOCK();
      uVar2 = (uint)local_88;
      if (bVar15) {
        iVar6 = iVar13;
      }
    }
  }
  local_88._0_4_ = uVar2;
  local_88 = CONCAT44(iVar6,(uint)local_88);
  local_80 = 2;
  if (local_78[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
    local_78[0] = 0;
  }
  if (!bVar5) {
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  FUN_1447c3578(lVar3 + 200,local_70,&local_a0);
  FUN_1448173f8(local_78);
  if (((char)local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  FUN_140af060e(uVar8,lVar3 + 0xb8,local_70);
  FUN_14097c15a(param_1);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar12 = local_70;
    if (0x18 < local_58) {
      ppppuVar12 = (undefined8 ****)local_70[0];
    }
    (*pcVar4)(ppppuVar12);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d7e416 FUN_143d7e416 body=61 status=ok
// SIG undefined FUN_143d7e416(void)

void FUN_143d7e416(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x48) + 0x80;
  cVar1 = FUN_140114204(lVar2);
  if (cVar1 == '\0') {
    FUN_14097c15a(param_1);
    return;
  }
  FUN_145c52e44(*(undefined8 *)(param_1 + 0x40),lVar2);
  return;
}



// FUNCTION 143d7e460 FUN_143d7e460 body=1081 status=ok
// SIG undefined FUN_143d7e460(void)

undefined8 FUN_143d7e460(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  void *_Dst;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  char local_98;
  undefined7 uStack_97;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78;
  int local_70 [2];
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 0x70) = 0;
  lVar11 = *(longlong *)(param_1 + 0x48) + 0x80;
  cVar4 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar11);
  if (cVar4 == '\0') {
    *(undefined4 *)(param_1 + 0x70) = 0;
    uVar7 = 0;
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x40);
    if (lVar14 == 0) {
      lVar13 = 0;
      local_90 = 0;
LAB_143d7e7dc:
      local_88 = (longlong *)0x0;
      bVar16 = true;
    }
    else {
      if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_143d7e7a5:
        lVar13 = 0;
      }
      else {
        uVar10 = *(uint *)(lVar14 + 0x48);
        lVar13 = 0;
        if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
          plVar12 = (longlong *)
                    ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
          if ((plVar12 == (longlong *)0x0) ||
             (((int)plVar12[2] != *(int *)(lVar14 + 0x4c) ||
              ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_143d7e7a5;
          lVar13 = *plVar12;
        }
      }
      plVar12 = *(longlong **)(lVar14 + 0x118);
      local_90 = param_1;
      if (plVar12 == (longlong *)0x0) goto LAB_143d7e7dc;
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      bVar16 = false;
      local_88 = plVar12;
    }
    plVar12 = local_88;
    local_70[0] = 0;
    local_98 = '\x03';
    local_80._0_4_ = 0;
    if (lVar13 == 0) {
      iVar5 = 0;
      uVar10 = (uint)local_80;
    }
    else {
      uVar10 = *(uint *)(lVar13 + 0xc);
      local_80 = (ulonglong)uVar10;
      if ((int)uVar10 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar5 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar5 = *(int *)(lVar14 + 0x10);
        bVar17 = iVar5 == 0;
        if (bVar17) {
          *(int *)(lVar14 + 0x10) = iVar9;
          iVar5 = 0;
        }
        UNLOCK();
        uVar10 = (uint)local_80;
        if (bVar17) {
          iVar5 = iVar9;
        }
      }
    }
    local_80._0_4_ = uVar10;
    local_80 = CONCAT44(iVar5,(uint)local_80);
    local_78 = 2;
    if (local_70[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_70[0] + -1,1);
      local_70[0] = 0;
    }
    if (!bVar16) {
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    FUN_1447c3578(lVar11,local_68,&local_98);
    lVar11 = FUN_14030a32e(local_68);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar15 = local_68;
      if (0x18 < local_50) {
        ppppuVar15 = (undefined8 ****)local_68[0];
      }
      (*pcVar3)(ppppuVar15);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_1448173f8(local_70);
    if ((local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    if (lVar11 == 0) {
      FUN_1400b22c2(&local_98,"Settings.Actor");
      _Dst = (void *)CONCAT71(uStack_97,local_98);
      if ((longlong)(int)local_90 != 0) {
        uVar10 = 1;
        lVar11 = 0;
        do {
          if (*(short *)((longlong)_Dst + lVar11) == 0x2e) {
            if (uVar10 != 0) {
              uVar6 = (int)local_90 - 1;
              if ((int)local_90 == 0) {
                uVar6 = 0;
              }
              if ((int)uVar10 < (int)uVar6) {
                uVar6 = uVar10;
              }
              if (0 < (int)uVar6) {
                if ((int)local_90 - uVar6 != 0) {
                  memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar6 * 2),
                          (longlong)(int)((int)local_90 - uVar6) * 2);
                }
                local_90 = CONCAT44(local_90._4_4_,(int)local_90 - uVar6);
                FUN_1449649ae(&local_98);
                _Dst = (void *)CONCAT71(uStack_97,local_98);
              }
            }
            break;
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 2;
        } while ((longlong)(int)local_90 * 2 != lVar11);
      }
      if (_Dst != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = 0;
      goto LAB_143d7e6af;
    }
    uVar10 = *(uint *)(lVar11 + 0xc);
    *(uint *)(param_1 + 0x70) = uVar10;
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar7 = (ulonglong)*(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar10);
      }
      LOCK();
      uVar6 = *(uint *)(lVar11 + 0x10);
      bVar16 = uVar6 == 0;
      if (bVar16) {
        *(uint *)(lVar11 + 0x10) = uVar10;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar16) {
        uVar6 = uVar10;
      }
      uVar7 = (ulonglong)uVar6;
    }
  }
  *(int *)(param_1 + 0x74) = (int)uVar7;
  uVar8 = CONCAT71((int7)(uVar7 >> 8),1);
LAB_143d7e6af:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d7e89a FUN_143d7e89a body=1006 status=ok
// SIG undefined FUN_143d7e89a(void)

void FUN_143d7e89a(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  undefined8 local_40;
  code *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if ((((*(longlong *)(lVar2 + 0xb8) != 0) && (*(int *)(param_1 + 0x74) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x70), -1 < (int)uVar1)) &&
     ((((int)uVar1 < DAT_14c9647dc &&
       (plVar10 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar10 != (longlong *)0x0)) &&
      (((int)plVar10[2] == *(int *)(param_1 + 0x74) &&
       (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 &&
        (plVar10 = (longlong *)*plVar10, plVar10 != (longlong *)0x0)))))))) {
    if (DAT_14cb1c498 == 0) {
      local_60 = &local_38;
      local_38 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_1427b09ee;
      local_68 = &LAB_147e36893;
      local_70 = FUN_146420564;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
    }
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x288))(plVar10,DAT_14cb1c498);
    if (plVar10 != (longlong *)0x0) {
      if (DAT_14cb1c498 == 0) {
        local_60 = &local_38;
        local_38 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_1427b09ee;
        local_68 = &LAB_147e36893;
        local_70 = FUN_146420564;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10004001;
        local_90 = 8;
        local_98 = 0x28;
        FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
      }
      plVar4 = (longlong *)FUN_144718840(plVar10,DAT_14cb1c498);
      if ((((plVar10 != plVar4) && (plVar4 != (longlong *)0x0)) &&
          (lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4), lVar5 != 0)) &&
         (*(int *)(lVar5 + 0xb8) != *(int *)(lVar5 + 0xe4))) {
        lVar3 = *(longlong *)(lVar2 + 0xb8);
        uVar1 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar9 = (uint)lVar3 & 0xffff;
        lVar8 = lVar5 + 0xe8;
        if (*(longlong *)(lVar5 + 0xf0) != 0) {
          lVar8 = *(longlong *)(lVar5 + 0xf0);
        }
        iVar7 = *(int *)(lVar8 + (ulonglong)
                                 (*(int *)(lVar5 + 0xf8) - 1U &
                                 (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar9) +
                                 (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar7 != -1) {
          lVar8 = *(longlong *)(lVar5 + 0xb0);
          iVar11 = iVar7;
          do {
            if (*(longlong *)(lVar8 + (longlong)iVar11 * 0x28) == lVar3) {
              goto LAB_143d7ea54;
            }
            iVar11 = *(int *)(lVar8 + (longlong)iVar11 * 0x28 + 0x20);
          } while (iVar11 != -1);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
  while (iVar7 = (int)plVar10[4], iVar7 != -1) {
LAB_143d7ea54:
    plVar10 = (longlong *)(lVar8 + (longlong)iVar7 * 0x28);
    if (*plVar10 == lVar3) {
      if ((plVar10 != (longlong *)0x0) && (plVar10 != (longlong *)&DAT_fffffffffffffff8)) {
        uVar6 = FUN_14058d91e();
        FUN_14084412e(lVar5,lVar2 + 0xc0,uVar6);
      }
      break;
    }
  }
  if (*(char *)(lVar2 + 0xc9) != '\x01') {
    if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
      FUN_14097c15a(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1488b2728(&local_38,param_1);
  FUN_1457052ce(lVar5 + 0x60,&local_40,&local_38);
  if (local_30 != 0) {
    if (local_38 == (code *)0x0) goto LAB_143d7eb24;
    (*(code *)**(undefined8 **)local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_143d7eb24:
  *(undefined8 *)(param_1 + 0x78) = local_40;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
}



// FUNCTION 143d7ec98 FUN_143d7ec98 body=1081 status=ok
// SIG undefined FUN_143d7ec98(void)

undefined8 FUN_143d7ec98(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  void *_Dst;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  char local_98;
  undefined7 uStack_97;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78;
  int local_70 [2];
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 0x70) = 0;
  lVar11 = *(longlong *)(param_1 + 0x48) + 0x80;
  cVar4 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar11);
  if (cVar4 == '\0') {
    *(undefined4 *)(param_1 + 0x70) = 0;
    uVar7 = 0;
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x40);
    if (lVar14 == 0) {
      lVar13 = 0;
      local_90 = 0;
LAB_143d7f014:
      local_88 = (longlong *)0x0;
      bVar16 = true;
    }
    else {
      if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_143d7efdd:
        lVar13 = 0;
      }
      else {
        uVar10 = *(uint *)(lVar14 + 0x48);
        lVar13 = 0;
        if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
          plVar12 = (longlong *)
                    ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
          if ((plVar12 == (longlong *)0x0) ||
             (((int)plVar12[2] != *(int *)(lVar14 + 0x4c) ||
              ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_143d7efdd;
          lVar13 = *plVar12;
        }
      }
      plVar12 = *(longlong **)(lVar14 + 0x118);
      local_90 = param_1;
      if (plVar12 == (longlong *)0x0) goto LAB_143d7f014;
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      bVar16 = false;
      local_88 = plVar12;
    }
    plVar12 = local_88;
    local_70[0] = 0;
    local_98 = '\x03';
    local_80._0_4_ = 0;
    if (lVar13 == 0) {
      iVar5 = 0;
      uVar10 = (uint)local_80;
    }
    else {
      uVar10 = *(uint *)(lVar13 + 0xc);
      local_80 = (ulonglong)uVar10;
      if ((int)uVar10 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar5 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar5 = *(int *)(lVar14 + 0x10);
        bVar17 = iVar5 == 0;
        if (bVar17) {
          *(int *)(lVar14 + 0x10) = iVar9;
          iVar5 = 0;
        }
        UNLOCK();
        uVar10 = (uint)local_80;
        if (bVar17) {
          iVar5 = iVar9;
        }
      }
    }
    local_80._0_4_ = uVar10;
    local_80 = CONCAT44(iVar5,(uint)local_80);
    local_78 = 2;
    if (local_70[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_70[0] + -1,1);
      local_70[0] = 0;
    }
    if (!bVar16) {
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    FUN_1447c3578(lVar11,local_68,&local_98);
    lVar11 = FUN_14030a32e(local_68);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar15 = local_68;
      if (0x18 < local_50) {
        ppppuVar15 = (undefined8 ****)local_68[0];
      }
      (*pcVar3)(ppppuVar15);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_1448173f8(local_70);
    if ((local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    if (lVar11 == 0) {
      FUN_1400b22c2(&local_98,"Settings.Actor");
      _Dst = (void *)CONCAT71(uStack_97,local_98);
      if ((longlong)(int)local_90 != 0) {
        uVar10 = 1;
        lVar11 = 0;
        do {
          if (*(short *)((longlong)_Dst + lVar11) == 0x2e) {
            if (uVar10 != 0) {
              uVar6 = (int)local_90 - 1;
              if ((int)local_90 == 0) {
                uVar6 = 0;
              }
              if ((int)uVar10 < (int)uVar6) {
                uVar6 = uVar10;
              }
              if (0 < (int)uVar6) {
                if ((int)local_90 - uVar6 != 0) {
                  memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar6 * 2),
                          (longlong)(int)((int)local_90 - uVar6) * 2);
                }
                local_90 = CONCAT44(local_90._4_4_,(int)local_90 - uVar6);
                FUN_1449649ae(&local_98);
                _Dst = (void *)CONCAT71(uStack_97,local_98);
              }
            }
            break;
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 2;
        } while ((longlong)(int)local_90 * 2 != lVar11);
      }
      if (_Dst != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = 0;
      goto LAB_143d7eee7;
    }
    uVar10 = *(uint *)(lVar11 + 0xc);
    *(uint *)(param_1 + 0x70) = uVar10;
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar7 = (ulonglong)*(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar10);
      }
      LOCK();
      uVar6 = *(uint *)(lVar11 + 0x10);
      bVar16 = uVar6 == 0;
      if (bVar16) {
        *(uint *)(lVar11 + 0x10) = uVar10;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar16) {
        uVar6 = uVar10;
      }
      uVar7 = (ulonglong)uVar6;
    }
  }
  *(int *)(param_1 + 0x74) = (int)uVar7;
  uVar8 = CONCAT71((int7)(uVar7 >> 8),1);
LAB_143d7eee7:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d7f0d2 FUN_143d7f0d2 body=662 status=ok
// SIG undefined FUN_143d7f0d2(void)

void FUN_143d7f0d2(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  undefined1 local_40 [24];
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(int *)(param_1 + 0x74) != 0) && (uVar1 = *(uint *)(param_1 + 0x70), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0x74))) &&
       ((lVar2 = *(longlong *)(param_1 + 0x48), (*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
        (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
         (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))))) {
      if (DAT_14cb223d8 == 0) {
        local_60 = &local_28;
        local_28 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_1427b09ee;
        local_68 = &LAB_147f29feb;
        local_70 = FUN_1464384fe;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10004001;
        local_90 = 8;
        local_98 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,DAT_14cb223d8);
      if (plVar5 != (longlong *)0x0) {
        if (DAT_14cb223d8 == 0) {
          local_60 = &local_28;
          local_28 = FUN_1449e2820;
          local_50 = FUN_14081d0ea;
          local_58 = FUN_1427b09ee;
          local_68 = &LAB_147f29feb;
          local_70 = FUN_1464384fe;
          local_78 = L"Engine";
          local_80 = 0;
          local_88 = 0x10004001;
          local_90 = 8;
          local_98 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
        }
        plVar3 = (longlong *)FUN_144718840(plVar5,DAT_14cb223d8);
        if (((plVar5 != plVar3 && plVar3 != (longlong *)0x0) && (*(longlong *)(lVar2 + 0xb8) != 0))
           && (*(int *)(lVar2 + 0xc0) - 1U < 0xfffffffe)) {
          uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
          local_28 = *(code **)(lVar2 + 0xb8);
          FUN_1406407c2(local_40);
          FUN_140365ba6(uVar4,local_40,1);
          FUN_14097c15a(param_1);
          if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
}



// FUNCTION 143d7f37c FUN_143d7f37c body=1082 status=ok
// SIG undefined FUN_143d7f37c(void)

undefined8 FUN_143d7f37c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  void *_Dst;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  char local_98;
  undefined7 uStack_97;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78;
  int local_70 [2];
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 0x70) = 0;
  lVar11 = *(longlong *)(param_1 + 0x48) + 0xc0;
  cVar4 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar11);
  if (cVar4 == '\0') {
    *(undefined4 *)(param_1 + 0x70) = 0;
    uVar7 = 0;
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x40);
    if (lVar14 == 0) {
      lVar13 = 0;
      local_90 = 0;
LAB_143d7f6f9:
      local_88 = (longlong *)0x0;
      bVar16 = true;
    }
    else {
      if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_143d7f6c2:
        lVar13 = 0;
      }
      else {
        uVar10 = *(uint *)(lVar14 + 0x48);
        lVar13 = 0;
        if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
          plVar12 = (longlong *)
                    ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
          if ((plVar12 == (longlong *)0x0) ||
             (((int)plVar12[2] != *(int *)(lVar14 + 0x4c) ||
              ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_143d7f6c2;
          lVar13 = *plVar12;
        }
      }
      plVar12 = *(longlong **)(lVar14 + 0x118);
      local_90 = param_1;
      if (plVar12 == (longlong *)0x0) goto LAB_143d7f6f9;
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      bVar16 = false;
      local_88 = plVar12;
    }
    plVar12 = local_88;
    local_70[0] = 0;
    local_98 = '\x03';
    local_80._0_4_ = 0;
    if (lVar13 == 0) {
      iVar5 = 0;
      uVar10 = (uint)local_80;
    }
    else {
      uVar10 = *(uint *)(lVar13 + 0xc);
      local_80 = (ulonglong)uVar10;
      if ((int)uVar10 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar5 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar5 = *(int *)(lVar14 + 0x10);
        bVar17 = iVar5 == 0;
        if (bVar17) {
          *(int *)(lVar14 + 0x10) = iVar9;
          iVar5 = 0;
        }
        UNLOCK();
        uVar10 = (uint)local_80;
        if (bVar17) {
          iVar5 = iVar9;
        }
      }
    }
    local_80._0_4_ = uVar10;
    local_80 = CONCAT44(iVar5,(uint)local_80);
    local_78 = 2;
    if (local_70[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_70[0] + -1,1);
      local_70[0] = 0;
    }
    if (!bVar16) {
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    FUN_1447c3578(lVar11,local_68,&local_98);
    lVar11 = FUN_14030a32e(local_68);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar15 = local_68;
      if (0x18 < local_50) {
        ppppuVar15 = (undefined8 ****)local_68[0];
      }
      (*pcVar3)(ppppuVar15);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_1448173f8(local_70);
    if ((local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    if (lVar11 == 0) {
      FUN_1400b22c2(&local_98,"Settings.Actor");
      _Dst = (void *)CONCAT71(uStack_97,local_98);
      if ((longlong)(int)local_90 != 0) {
        uVar10 = 1;
        lVar11 = 0;
        do {
          if (*(short *)((longlong)_Dst + lVar11) == 0x2e) {
            if (uVar10 != 0) {
              uVar6 = (int)local_90 - 1;
              if ((int)local_90 == 0) {
                uVar6 = 0;
              }
              if ((int)uVar10 < (int)uVar6) {
                uVar6 = uVar10;
              }
              if (0 < (int)uVar6) {
                if ((int)local_90 - uVar6 != 0) {
                  memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar6 * 2),
                          (longlong)(int)((int)local_90 - uVar6) * 2);
                }
                local_90 = CONCAT44(local_90._4_4_,(int)local_90 - uVar6);
                FUN_1449649ae(&local_98);
                _Dst = (void *)CONCAT71(uStack_97,local_98);
              }
            }
            break;
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 2;
        } while ((longlong)(int)local_90 * 2 != lVar11);
      }
      if (_Dst != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = 0;
      goto LAB_143d7f5cc;
    }
    uVar10 = *(uint *)(lVar11 + 0xc);
    *(uint *)(param_1 + 0x70) = uVar10;
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar7 = (ulonglong)*(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar10);
      }
      LOCK();
      uVar6 = *(uint *)(lVar11 + 0x10);
      bVar16 = uVar6 == 0;
      if (bVar16) {
        *(uint *)(lVar11 + 0x10) = uVar10;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar16) {
        uVar6 = uVar10;
      }
      uVar7 = (ulonglong)uVar6;
    }
  }
  *(int *)(param_1 + 0x74) = (int)uVar7;
  uVar8 = CONCAT71((int7)(uVar7 >> 8),1);
LAB_143d7f5cc:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d7f7b8 FUN_143d7f7b8 body=220 status=ok
// SIG undefined FUN_143d7f7b8(void)

undefined8 FUN_143d7f7b8(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  undefined1 auStack_78 [40];
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((&DAT_14c9a8514)[(uint)*(byte *)(param_2 + 0x28) * 0x120] & 0x20) != 0) {
    cVar2 = FUN_140c58360(*(undefined8 *)(*param_1 + 0x40));
    if (cVar2 != '\0') {
      FUN_1447c3578(param_2,local_50,param_1[1]);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
      if (pcVar1 != (code *)0x0) {
        ppppuVar4 = local_50;
        if (0x18 < local_38) {
          ppppuVar4 = (undefined8 ****)local_50[0];
        }
        (*pcVar1)(ppppuVar4);
      }
      if (0x18 < local_38) {
        FUN_1400020a8(local_50[0]);
      }
      if (local_30 == 0) {
        if (*(char *)param_1[2] == '\0') {
          if (*(float *)param_1[3] <= 0.0) goto LAB_143d7f855;
        }
        uVar3 = 0;
        goto LAB_143d7f857;
      }
    }
  }
LAB_143d7f855:
  uVar3 = 1;
LAB_143d7f857:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d7f896 FUN_143d7f896 body=1154 status=ok
// SIG undefined FUN_143d7f896(void)

void FUN_143d7f896(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  longlong *plVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 uStack_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x48);
  lVar7 = FUN_1405f939e();
  if (lVar7 == 0) goto LAB_143d7f975;
  lVar7 = FUN_140115352(lVar7);
  if ((lVar7 == 0) || (*(longlong *)(lVar3 + 0x80) == 0)) goto LAB_143d7f975;
  lVar9 = *(longlong *)(lVar3 + 0x90);
  if (lVar9 == 0) {
    uVar8 = FUN_14012344a();
    lVar9 = FUN_14477b664(uVar8);
    *(longlong *)(lVar3 + 0x90) = lVar9;
  }
  plVar1 = (longlong *)(lVar3 + 0x88);
  if (*(longlong *)(lVar3 + 0x98) == 0) {
    if ((lVar9 == 0) || (*plVar1 == 0)) goto LAB_143d7f975;
    plVar12 = *(longlong **)(lVar9 + 0xb8);
    if (plVar12 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar12 + 0x108))(plVar12);
      if (cVar5 != '\0') {
        uVar8 = (**(code **)(*plVar12 + 0x110))(plVar12);
        lVar9 = FUN_144aff482(uVar8,plVar1);
        *(longlong *)(lVar3 + 0x98) = lVar9;
        if (lVar9 == 0) goto LAB_143d7f975;
        goto LAB_143d7f99a;
      }
    }
    *(undefined8 *)(lVar3 + 0x98) = 0;
LAB_143d7f975:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
LAB_143d7f99a:
  local_50 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x168);
  uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x160);
  local_58 = (int)uVar8;
  uStack_54 = (undefined4)((ulonglong)uVar8 >> 0x20);
  lVar9 = *(longlong *)(lVar3 + 0xc0);
  if (lVar9 == 0) {
    uVar8 = FUN_14060ed7a();
    lVar9 = FUN_14477b664(uVar8);
    *(longlong *)(lVar3 + 0xc0) = lVar9;
  }
  plVar12 = (longlong *)(lVar3 + 0xb8);
  lVar10 = *(longlong *)(lVar3 + 200);
  if (lVar10 == 0) {
    if ((lVar9 == 0) || (*plVar12 == 0)) goto LAB_143d7fb30;
    plVar4 = *(longlong **)(lVar9 + 0xb8);
    if (plVar4 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
      if (cVar5 != '\0') {
        uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar10 = FUN_144aff482(uVar8,plVar12);
        *(longlong *)(lVar3 + 200) = lVar10;
        if (lVar10 == 0) goto LAB_143d7fb30;
        lVar9 = *(longlong *)(lVar3 + 0xc0);
        goto LAB_143d7fa55;
      }
    }
    *(undefined8 *)(lVar3 + 200) = 0;
    goto LAB_143d7fb30;
  }
LAB_143d7fa55:
  if (lVar9 == 0) {
    uVar8 = FUN_14060ed7a();
    lVar9 = FUN_14477b664(uVar8);
    *(longlong *)(lVar3 + 0xc0) = lVar9;
    lVar10 = *(longlong *)(lVar3 + 200);
    if (((lVar10 == 0) && (lVar10 = 0, lVar9 != 0)) && (*plVar12 != 0)) {
      plVar4 = *(longlong **)(lVar9 + 0xb8);
      if (plVar4 == (longlong *)0x0) {
LAB_143d7fd2a:
        lVar10 = 0;
      }
      else {
        cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
        if (cVar5 == '\0') goto LAB_143d7fd2a;
        uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar10 = FUN_144aff482(uVar8,plVar12);
      }
      *(longlong *)(lVar3 + 200) = lVar10;
    }
  }
  piVar11 = &DAT_14c9485f0;
  if (*(int **)(lVar10 + 8) != (int *)0x0) {
    piVar11 = *(int **)(lVar10 + 8);
  }
  if (((*piVar11 == 0) || (iVar2 = piVar11[1], iVar2 == 0)) || (*piVar11 == DAT_14c948000)) {
LAB_143d7fcc8:
    local_50 = DAT_14c948620;
    uVar8 = DAT_14c948618;
  }
  else {
    if ((iVar2 < 2) && (piVar11[9] < 1)) {
      piVar11 = piVar11 + 2;
    }
    else {
      piVar11 = *(int **)(piVar11 + 6);
    }
    if (iVar2 < 1) goto LAB_143d7fcc8;
    local_50 = piVar11[2];
    uVar8 = *(undefined8 *)piVar11;
  }
  local_58 = (int)uVar8;
  uStack_54 = (undefined4)((ulonglong)uVar8 >> 0x20);
LAB_143d7fb30:
  uVar16 = 0;
  uVar17 = 0;
  uVar14 = 0;
  if (*(char *)(lVar3 + 0xb1) == '\0') {
    if ((CONCAT44(local_50,uStack_54) == DAT_14c948034) && (local_58 != DAT_14c948030)) {
      FUN_14011791e(&uStack_54,local_58,local_50);
    }
    FUN_145772396(lVar7,&local_64,&uStack_54);
    uVar16 = local_64;
    uVar17 = local_60;
    uVar14 = local_5c;
  }
  uVar8 = *(undefined8 *)(lVar3 + 0x80);
  uVar6 = (uint)((ulonglong)uVar8 >> 0x10);
  uVar15 = (uint)uVar8 & 0xffff;
  plVar12 = (longlong *)
            FUN_1488b1a9a(lVar7 + 0x100,
                          ((uint)uVar8 << 0x10 | uVar15) + (int)((ulonglong)uVar8 >> 0x20) +
                          (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar15 >> 4));
  lVar7 = *plVar1;
  if (*plVar12 != lVar7) {
    plVar12[2] = 0;
  }
  *plVar12 = lVar7;
  if (plVar12[1] != *(longlong *)(lVar3 + 0x90)) {
    plVar12[2] = 0;
  }
  uVar8 = FUN_14477b664();
  lVar7 = FUN_14477b664(uVar8);
  plVar12[1] = lVar7;
  plVar12[2] = *(longlong *)(lVar3 + 0x98);
  *(undefined4 *)(plVar12 + 3) = uVar16;
  *(undefined4 *)((longlong)plVar12 + 0x1c) = uVar17;
  *(undefined4 *)(plVar12 + 4) = uVar14;
  plVar12[5] = *(longlong *)(lVar3 + 0xa0);
  uVar6 = rand();
  iVar2 = *(int *)(lVar3 + 0xa8);
  iVar13 = 0;
  if (iVar2 <= *(int *)(lVar3 + 0xac)) {
    iVar13 = iVar2 + (int)((float)(*(int *)(lVar3 + 0xac) - iVar2) *
                          ((float)(uVar6 & 0x7fff) / 32767.0));
  }
  *(int *)((longlong)plVar12 + 0x24) = iVar13;
  *(undefined1 *)((longlong)plVar12 + 0x3c) = *(undefined1 *)(lVar3 + 0xb0);
  *(undefined1 *)((longlong)plVar12 + 0x3d) = *(undefined1 *)(lVar3 + 0xb2);
  plVar12[6] = CONCAT44(uStack_54,local_58);
  *(int *)(plVar12 + 7) = local_50;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d7fd32 FUN_143d7fd32 body=83 status=ok
// SIG undefined FUN_143d7fd32(void)

void FUN_143d7fd32(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  lVar2 = FUN_1405f939e();
  if (lVar2 != 0) {
    lVar2 = FUN_140115352(lVar2);
    if ((lVar2 != 0) && (*(longlong *)(lVar1 + 0x80) != 0)) {
      FUN_14887fa86(lVar2 + 0xf8,lVar1 + 0x80);
    }
  }
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 143d7fd86 FUN_143d7fd86 body=1073 status=ok
// SIG undefined FUN_143d7fd86(void)

undefined8 FUN_143d7fd86(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  void *_Dst;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  char local_98;
  undefined7 uStack_97;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78;
  int local_70 [2];
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar11 = *(longlong *)(param_1 + 0x48) + 0x80;
  cVar4 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar11);
  if (cVar4 == '\0') {
    *(undefined4 *)(param_1 + 0x70) = 0;
    uVar7 = 0;
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x40);
    if (lVar14 == 0) {
      lVar13 = 0;
      local_90 = 0;
LAB_143d800fa:
      local_88 = (longlong *)0x0;
      bVar16 = true;
    }
    else {
      if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_143d800c3:
        lVar13 = 0;
      }
      else {
        uVar10 = *(uint *)(lVar14 + 0x48);
        lVar13 = 0;
        if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
          plVar12 = (longlong *)
                    ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
          if ((plVar12 == (longlong *)0x0) ||
             (((int)plVar12[2] != *(int *)(lVar14 + 0x4c) ||
              ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_143d800c3;
          lVar13 = *plVar12;
        }
      }
      plVar12 = *(longlong **)(lVar14 + 0x118);
      local_90 = param_1;
      if (plVar12 == (longlong *)0x0) goto LAB_143d800fa;
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      bVar16 = false;
      local_88 = plVar12;
    }
    plVar12 = local_88;
    local_70[0] = 0;
    local_98 = '\x03';
    local_80._0_4_ = 0;
    if (lVar13 == 0) {
      iVar5 = 0;
      uVar10 = (uint)local_80;
    }
    else {
      uVar10 = *(uint *)(lVar13 + 0xc);
      local_80 = (ulonglong)uVar10;
      if ((int)uVar10 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar5 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar5 = *(int *)(lVar14 + 0x10);
        bVar17 = iVar5 == 0;
        if (bVar17) {
          *(int *)(lVar14 + 0x10) = iVar9;
          iVar5 = 0;
        }
        UNLOCK();
        uVar10 = (uint)local_80;
        if (bVar17) {
          iVar5 = iVar9;
        }
      }
    }
    local_80._0_4_ = uVar10;
    local_80 = CONCAT44(iVar5,(uint)local_80);
    local_78 = 2;
    if (local_70[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_70[0] + -1,1);
      local_70[0] = 0;
    }
    if (!bVar16) {
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    FUN_1447c3578(lVar11,local_68,&local_98);
    lVar11 = FUN_14030a32e(local_68);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar15 = local_68;
      if (0x18 < local_50) {
        ppppuVar15 = (undefined8 ****)local_68[0];
      }
      (*pcVar3)(ppppuVar15);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_1448173f8(local_70);
    if ((local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    if (lVar11 == 0) {
      FUN_1400b22c2(&local_98,"Settings.Actor");
      _Dst = (void *)CONCAT71(uStack_97,local_98);
      if ((longlong)(int)local_90 != 0) {
        uVar10 = 1;
        lVar11 = 0;
        do {
          if (*(short *)((longlong)_Dst + lVar11) == 0x2e) {
            if (uVar10 != 0) {
              uVar6 = (int)local_90 - 1;
              if ((int)local_90 == 0) {
                uVar6 = 0;
              }
              if ((int)uVar10 < (int)uVar6) {
                uVar6 = uVar10;
              }
              if (0 < (int)uVar6) {
                if ((int)local_90 - uVar6 != 0) {
                  memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar6 * 2),
                          (longlong)(int)((int)local_90 - uVar6) * 2);
                }
                local_90 = CONCAT44(local_90._4_4_,(int)local_90 - uVar6);
                FUN_1449649ae(&local_98);
                _Dst = (void *)CONCAT71(uStack_97,local_98);
              }
            }
            break;
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 2;
        } while ((longlong)(int)local_90 * 2 != lVar11);
      }
      if (_Dst != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = 0;
      goto LAB_143d7ffcd;
    }
    uVar10 = *(uint *)(lVar11 + 0xc);
    *(uint *)(param_1 + 0x70) = uVar10;
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar7 = (ulonglong)*(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar10);
      }
      LOCK();
      uVar6 = *(uint *)(lVar11 + 0x10);
      bVar16 = uVar6 == 0;
      if (bVar16) {
        *(uint *)(lVar11 + 0x10) = uVar10;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar16) {
        uVar6 = uVar10;
      }
      uVar7 = (ulonglong)uVar6;
    }
  }
  *(int *)(param_1 + 0x74) = (int)uVar7;
  uVar8 = CONCAT71((int7)(uVar7 >> 8),1);
LAB_143d7ffcd:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d801b8 FUN_143d801b8 body=1106 status=ok
// SIG undefined FUN_143d801b8(void)

undefined8 FUN_143d801b8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  void *_Dst;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  char local_98;
  undefined7 uStack_97;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78;
  int local_70 [2];
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar11 = *(longlong *)(param_1 + 0x48) + 0xb8;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  cVar4 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar11);
  if (cVar4 == '\0') {
LAB_143d804d9:
    *(undefined4 *)(param_1 + 0xb0) = 0;
    uVar6 = 0;
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x40);
    if (lVar14 == 0) {
      lVar13 = 0;
      local_90 = 0;
LAB_143d8054d:
      local_88 = (longlong *)0x0;
      bVar16 = true;
    }
    else {
      if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_143d80516:
        lVar13 = 0;
      }
      else {
        uVar8 = *(uint *)(lVar14 + 0x48);
        lVar13 = 0;
        if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
          plVar12 = (longlong *)
                    ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
          if ((plVar12 == (longlong *)0x0) ||
             (((int)plVar12[2] != *(int *)(lVar14 + 0x4c) ||
              ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_143d80516;
          lVar13 = *plVar12;
        }
      }
      plVar12 = *(longlong **)(lVar14 + 0x118);
      local_90 = param_1;
      if (plVar12 == (longlong *)0x0) goto LAB_143d8054d;
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      bVar16 = false;
      local_88 = plVar12;
    }
    plVar12 = local_88;
    local_70[0] = 0;
    local_98 = '\x03';
    local_80._0_4_ = 0;
    if (lVar13 == 0) {
      iVar5 = 0;
      uVar8 = (uint)local_80;
    }
    else {
      uVar8 = *(uint *)(lVar13 + 0xc);
      local_80 = (ulonglong)uVar8;
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar5 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar5 = *(int *)(lVar14 + 0x10);
        bVar17 = iVar5 == 0;
        if (bVar17) {
          *(int *)(lVar14 + 0x10) = iVar9;
          iVar5 = 0;
        }
        UNLOCK();
        uVar8 = (uint)local_80;
        if (bVar17) {
          iVar5 = iVar9;
        }
      }
    }
    local_80._0_4_ = uVar8;
    local_80 = CONCAT44(iVar5,(uint)local_80);
    local_78 = 2;
    if (local_70[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_70[0] + -1,1);
      local_70[0] = 0;
    }
    if (!bVar16) {
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    FUN_1447c3578(lVar11,local_68,&local_98);
    lVar11 = FUN_14030a32e(local_68);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar15 = local_68;
      if (0x18 < local_50) {
        ppppuVar15 = (undefined8 ****)local_68[0];
      }
      (*pcVar3)(ppppuVar15);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_1448173f8(local_70);
    if ((local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    if (lVar11 == 0) {
      FUN_1400b22c2(&local_98,"Settings.AINode");
      _Dst = (void *)CONCAT71(uStack_97,local_98);
      if ((longlong)(int)local_90 != 0) {
        uVar8 = 1;
        lVar11 = 0;
        do {
          if (*(short *)((longlong)_Dst + lVar11) == 0x2e) {
            if (uVar8 != 0) {
              uVar10 = (int)local_90 - 1;
              if ((int)local_90 == 0) {
                uVar10 = 0;
              }
              if ((int)uVar8 < (int)uVar10) {
                uVar10 = uVar8;
              }
              if (0 < (int)uVar10) {
                if ((int)local_90 - uVar10 != 0) {
                  memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar10 * 2),
                          (longlong)(int)((int)local_90 - uVar10) * 2);
                }
                local_90 = CONCAT44(local_90._4_4_,(int)local_90 - uVar10);
                FUN_1449649ae(&local_98);
                _Dst = (void *)CONCAT71(uStack_97,local_98);
              }
            }
            break;
          }
          uVar8 = uVar8 + 1;
          lVar11 = lVar11 + 2;
        } while ((longlong)(int)local_90 * 2 != lVar11);
      }
      if (_Dst != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar7 = 0;
      goto LAB_143d804ed;
    }
    lVar11 = FUN_1488a9e2c(lVar11);
    if (lVar11 == 0) goto LAB_143d804d9;
    uVar8 = *(uint *)(lVar11 + 0xc);
    *(uint *)(param_1 + 0xb0) = uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar6 = (ulonglong)*(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar8);
      }
      LOCK();
      uVar10 = *(uint *)(lVar11 + 0x10);
      bVar16 = uVar10 == 0;
      if (bVar16) {
        *(uint *)(lVar11 + 0x10) = uVar8;
        uVar10 = 0;
      }
      UNLOCK();
      if (bVar16) {
        uVar10 = uVar8;
      }
      uVar6 = (ulonglong)uVar10;
    }
  }
  *(int *)(param_1 + 0xb4) = (int)uVar6;
  uVar7 = CONCAT71((int7)(uVar6 >> 8),1);
LAB_143d804ed:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d8060c FUN_143d8060c body=370 status=ok
// SIG undefined FUN_143d8060c(void)

void FUN_143d8060c(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x48);
  lVar1 = param_1 + 0x70;
  cVar5 = FUN_140114204(lVar1);
  if (cVar5 == '\0') {
    cVar5 = FUN_140c589d6(*(undefined8 *)(param_1 + 0x40),lVar3 + 0xb8,lVar1,&DAT_14cb7bde0);
    if (cVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  local_30 = CONCAT31(local_30._1_3_,1);
  local_24 = 1;
  uStack_2c = (undefined4)DAT_14cb7c588;
  iStack_28 = (int)((ulonglong)DAT_14cb7c588 >> 0x20);
  FUN_143d72bf2(*(undefined8 *)(param_1 + 0x40),lVar1,&local_30,0);
  if (((*(int *)(param_1 + 0xb4) != 0) && (uVar2 = *(uint *)(param_1 + 0xb0), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar6 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)(param_1 + 0xb4))) &&
       (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar1 = *plVar6, lVar1 != 0)))) {
      FUN_1488b2c3a(&local_30,param_1);
      FUN_14577054c(lVar1 + 0x6b8,local_38,&local_30);
      if (iStack_28 != 0) {
        puVar4 = (undefined8 *)CONCAT44(uStack_2c,local_30);
        if (puVar4 == (undefined8 *)0x0) goto LAB_143d806de;
        (**(code **)*puVar4)(puVar4,0);
        FUN_1446efa72(&local_30,0,0,0x10);
        iStack_28 = 0;
      }
      if (CONCAT44(uStack_2c,local_30) != 0) {
        FUN_1400020a8();
      }
      goto LAB_143d806de;
    }
  }
  FUN_14097c15a(param_1);
LAB_143d806de:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d8078e FUN_143d8078e body=1316 status=ok
// SIG undefined FUN_143d8078e(void)

void FUN_143d8078e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  void *_Dst;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 ****ppppuVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_b8 [32];
  char local_98;
  undefined7 uStack_97;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78;
  int local_70 [2];
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((char)param_1[0xd] != '\0') || (*(char *)(param_1[8] + 0x180) == '\x01')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
  }
  if (((int)param_1[0x15] == 0) && (*(int *)((longlong)param_1 + 0xac) == 0)) {
    lVar6 = param_1[9];
    cVar4 = FUN_140c58360(param_1[8],lVar6 + 0x80);
    if (cVar4 == '\0') {
      *(undefined4 *)(param_1 + 0x15) = 0;
      iVar5 = 0;
    }
    else {
      lVar12 = param_1[8];
      if (lVar12 == 0) {
        lVar11 = 0;
        local_90 = (longlong *)0x0;
LAB_143d80c0e:
        local_88 = (longlong *)0x0;
        bVar14 = true;
      }
      else {
        if (*(int *)(lVar12 + 0x4c) == 0) {
LAB_143d80bd7:
          lVar11 = 0;
        }
        else {
          uVar7 = *(uint *)(lVar12 + 0x48);
          lVar11 = 0;
          if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
            plVar10 = (longlong *)
                      ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
            if ((plVar10 == (longlong *)0x0) ||
               (((int)plVar10[2] != *(int *)(lVar12 + 0x4c) ||
                ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_143d80bd7;
            lVar11 = *plVar10;
          }
        }
        plVar10 = *(longlong **)(lVar12 + 0x118);
        local_90 = param_1;
        if (plVar10 == (longlong *)0x0) goto LAB_143d80c0e;
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        bVar14 = false;
        local_88 = plVar10;
      }
      plVar10 = local_88;
      local_70[0] = 0;
      local_98 = '\x03';
      local_80._0_4_ = 0;
      if (lVar11 == 0) {
        iVar5 = 0;
        uVar7 = (uint)local_80;
      }
      else {
        uVar7 = *(uint *)(lVar11 + 0xc);
        local_80 = (ulonglong)uVar7;
        if ((int)uVar7 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        iVar5 = *(int *)(lVar12 + 0x10);
        if (*(int *)(lVar12 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar15 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar15) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                         );
          }
          LOCK();
          iVar5 = *(int *)(lVar12 + 0x10);
          bVar15 = iVar5 == 0;
          if (bVar15) {
            *(int *)(lVar12 + 0x10) = iVar9;
            iVar5 = 0;
          }
          UNLOCK();
          uVar7 = (uint)local_80;
          if (bVar15) {
            iVar5 = iVar9;
          }
        }
      }
      local_80._0_4_ = uVar7;
      local_80 = CONCAT44(iVar5,(uint)local_80);
      local_78 = 2;
      if (local_70[0] != 0) {
        FUN_1417398fc(&DAT_14c9a3da0,local_70[0] + -1,1);
        local_70[0] = 0;
      }
      if (!bVar14) {
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      FUN_1447c3578(lVar6 + 0x80,local_68,&local_98);
      lVar6 = FUN_14030a32e(local_68);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
      if (pcVar3 != (code *)0x0) {
        ppppuVar13 = local_68;
        if (0x18 < local_50) {
          ppppuVar13 = (undefined8 ****)local_68[0];
        }
        (*pcVar3)(ppppuVar13);
      }
      if (0x18 < local_50) {
        FUN_1400020a8(local_68[0]);
      }
      FUN_1448173f8(local_70);
      if ((local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_88 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
      if (lVar6 == 0) {
        FUN_1400b22c2(&local_98,"Settings.Actor");
        _Dst = (void *)CONCAT71(uStack_97,local_98);
        if ((longlong)(int)local_90 != 0) {
          uVar7 = 1;
          lVar6 = 0;
          do {
            if (*(short *)((longlong)_Dst + lVar6) == 0x2e) {
              if (uVar7 != 0) {
                uVar8 = (int)local_90 - 1;
                if ((int)local_90 == 0) {
                  uVar8 = 0;
                }
                if ((int)uVar7 < (int)uVar8) {
                  uVar8 = uVar7;
                }
                if (0 < (int)uVar8) {
                  if ((int)local_90 - uVar8 != 0) {
                    memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar8 * 2),
                            (longlong)(int)((int)local_90 - uVar8) * 2);
                  }
                  local_90 = (longlong *)CONCAT44(local_90._4_4_,(int)local_90 - uVar8);
                  FUN_1449649ae(&local_98);
                  _Dst = (void *)CONCAT71(uStack_97,local_98);
                }
              }
              break;
            }
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 2;
          } while ((longlong)(int)local_90 * 2 != lVar6);
        }
        if (_Dst != (void *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_143d80adf;
      }
      uVar7 = *(uint *)(lVar6 + 0xc);
      *(uint *)(param_1 + 0x15) = uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar5 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar5 = *(int *)(lVar6 + 0x10);
        bVar14 = iVar5 == 0;
        if (bVar14) {
          *(int *)(lVar6 + 0x10) = iVar9;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar5 = iVar9;
        }
      }
    }
    *(int *)((longlong)param_1 + 0xac) = iVar5;
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  if (((((*(int *)((longlong)param_1 + 0xac) == 0) ||
        (uVar7 = *(uint *)(param_1 + 0x15), (int)uVar7 < 0)) || (DAT_14c9647dc <= (int)uVar7)) ||
      (((lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar6 == 0 ||
        (*(int *)(lVar6 + 0x10) != *(int *)((longlong)param_1 + 0xac))) ||
       (((*(uint *)(lVar6 + 8) & 0x10200000) != 0 ||
        ((*(int *)((longlong)param_1 + 0xb4) == 0 ||
         (uVar7 = *(uint *)(param_1 + 0x16), (int)uVar7 < 0)))))))) ||
     ((DAT_14c9647dc <= (int)uVar7 ||
      ((((lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar6 == 0 ||
         (*(int *)(lVar6 + 0x10) != *(int *)((longlong)param_1 + 0xb4))) ||
        ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)) || ((char)param_1[0x17] == '\x01')))))) {
    FUN_14097c15a(param_1);
  }
LAB_143d80adf:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d80ccc FUN_143d80ccc body=2215 status=ok
// SIG undefined FUN_143d80ccc(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_143d80ccc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  void *_Dst;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *******pppppppuVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_c8 [40];
  uint local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80;
  int local_78 [2];
  undefined8 *******local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar12 = *(longlong *)(param_1 + 0x48);
  lVar14 = lVar12 + 0x80;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  cVar5 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar14);
  if (cVar5 == '\0') {
    *(undefined8 *)(param_1 + 0x70) = 0;
    goto LAB_143d80fa4;
  }
  lVar17 = *(longlong *)(param_1 + 0x40);
  if (lVar17 == 0) {
    lVar16 = 0;
    uStack_98 = 0;
LAB_143d8138b:
    local_90 = (longlong *)0x0;
    bVar18 = true;
  }
  else {
    if (*(int *)(lVar17 + 0x4c) == 0) {
LAB_143d8128e:
      lVar16 = 0;
    }
    else {
      uVar8 = *(uint *)(lVar17 + 0x48);
      lVar16 = 0;
      if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(lVar17 + 0x4c) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_143d8128e;
        lVar16 = *plVar13;
      }
    }
    plVar13 = *(longlong **)(lVar17 + 0x118);
    uStack_98 = param_1;
    if (plVar13 == (longlong *)0x0) goto LAB_143d8138b;
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar13 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    LOCK();
    *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
    UNLOCK();
    bVar18 = false;
    local_90 = plVar13;
  }
  plVar13 = local_90;
  local_a0 = CONCAT31(local_a0._1_3_,3);
  local_78[0] = 0;
  local_88._0_4_ = 0;
  if (lVar16 == 0) {
    iVar6 = 0;
    uVar8 = (uint)local_88;
  }
  else {
    uVar8 = *(uint *)(lVar16 + 0xc);
    local_88 = (ulonglong)uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar6 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar6 = *(int *)(lVar17 + 0x10);
      bVar19 = iVar6 == 0;
      if (bVar19) {
        *(int *)(lVar17 + 0x10) = iVar10;
        iVar6 = 0;
      }
      UNLOCK();
      uVar8 = (uint)local_88;
      if (bVar19) {
        iVar6 = iVar10;
      }
    }
  }
  local_88._0_4_ = uVar8;
  local_88 = CONCAT44(iVar6,(uint)local_88);
  local_80 = 2;
  if (local_78[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
    local_78[0] = 0;
  }
  if (!bVar18) {
    LOCK();
    piVar2 = (int *)((longlong)plVar13 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  FUN_1447c3578(lVar14,local_70,&local_a0);
  plVar13 = (longlong *)FUN_14030a32e(local_70);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar4 != (code *)0x0) {
    pppppppuVar15 = local_70;
    if (0x18 < local_58) {
      pppppppuVar15 = local_70[0];
    }
    (*pcVar4)(pppppppuVar15);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
  FUN_1448173f8(local_78);
  if (((char)local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_90 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if (plVar13 == (longlong *)0x0) {
    FUN_1400b22c2(&local_a0,"Settings.Actor");
    _Dst = (void *)CONCAT44(uStack_9c,local_a0);
    if ((longlong)(int)uStack_98 != 0) {
      uVar8 = 1;
      lVar14 = 0;
      do {
        if (*(short *)((longlong)_Dst + lVar14) == 0x2e) goto LAB_143d81203;
        uVar8 = uVar8 + 1;
        lVar14 = lVar14 + 2;
      } while ((longlong)(int)uStack_98 * 2 != lVar14);
    }
    goto LAB_143d81252;
  }
  uVar8 = *(uint *)((longlong)plVar13 + 0xc);
  *(uint *)(param_1 + 0x70) = uVar8;
  if ((int)uVar8 < DAT_14c9647dc) {
    lVar14 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
  }
  else {
    lVar14 = 0;
  }
  iVar6 = *(int *)(lVar14 + 0x10);
  if (*(int *)(lVar14 + 0x10) == 0) {
    LOCK();
    iVar6 = DAT_14c964868 + 1;
    UNLOCK();
    iVar10 = DAT_14c964868 + 1;
    bVar18 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar6;
    if (bVar18) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).");
    }
    LOCK();
    iVar6 = *(int *)(lVar14 + 0x10);
    bVar18 = iVar6 == 0;
    if (bVar18) {
      *(int *)(lVar14 + 0x10) = iVar10;
      iVar6 = 0;
    }
    UNLOCK();
    if (bVar18) {
      iVar6 = iVar10;
    }
  }
  *(int *)(param_1 + 0x74) = iVar6;
  uVar7 = FUN_1408a34bc();
  lVar14 = (**(code **)(*plVar13 + 0x288))(plVar13,uVar7);
  if (lVar14 == 0) {
LAB_143d80fa4:
    lVar17 = 0;
  }
  else {
    uVar7 = FUN_1408a34bc();
    lVar17 = FUN_144718840(lVar14,uVar7);
    if (lVar14 == lVar17) goto LAB_143d80fa4;
  }
  FUN_1488b314a(&local_a0,lVar17);
  *(uint *)(param_1 + 0x78) = local_a0;
  *(undefined4 *)(param_1 + 0x7c) = uStack_9c;
  *(int *)(param_1 + 0x80) = (int)uStack_98;
  *(undefined4 *)(param_1 + 0x84) = uStack_98._4_4_;
  lVar12 = lVar12 + 0xb8;
  cVar5 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar12);
  uVar9 = CONCAT71((int7)((ulonglong)&local_a0 >> 8),1);
  if (cVar5 == '\0') goto LAB_143d8125e;
  lVar14 = *(longlong *)(param_1 + 0x40);
  if (lVar14 == 0) {
    lVar17 = 0;
    lVar14 = 0;
LAB_143d81414:
    local_90 = (longlong *)0x0;
    bVar18 = true;
    uStack_98 = lVar14;
  }
  else {
    if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_143d813b3:
      lVar17 = 0;
    }
    else {
      uVar8 = *(uint *)(lVar14 + 0x48);
      lVar17 = 0;
      if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(lVar14 + 0x4c) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_143d813b3;
        lVar17 = *plVar13;
      }
    }
    plVar13 = *(longlong **)(lVar14 + 0x118);
    lVar14 = param_1;
    if (plVar13 == (longlong *)0x0) goto LAB_143d81414;
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar13 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    LOCK();
    *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
    UNLOCK();
    bVar18 = false;
    uStack_98 = param_1;
    local_90 = plVar13;
  }
  plVar13 = local_90;
  local_a0 = CONCAT31(local_a0._1_3_,3);
  local_78[0] = 0;
  local_88._0_4_ = 0;
  if (lVar17 == 0) {
    iVar6 = 0;
    uVar8 = (uint)local_88;
  }
  else {
    uVar8 = *(uint *)(lVar17 + 0xc);
    local_88 = (ulonglong)uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar6 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar6 = *(int *)(lVar14 + 0x10);
      bVar19 = iVar6 == 0;
      if (bVar19) {
        *(int *)(lVar14 + 0x10) = iVar10;
        iVar6 = 0;
      }
      UNLOCK();
      uVar8 = (uint)local_88;
      if (bVar19) {
        iVar6 = iVar10;
      }
    }
  }
  local_88._0_4_ = uVar8;
  local_88 = CONCAT44(iVar6,(uint)local_88);
  local_80 = 2;
  if (local_78[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
    local_78[0] = 0;
  }
  if (!bVar18) {
    LOCK();
    piVar2 = (int *)((longlong)plVar13 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  FUN_1447c3578(lVar12,local_70,&local_a0);
  lVar14 = FUN_14030a32e(local_70);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar4 != (code *)0x0) {
    pppppppuVar15 = local_70;
    if (0x18 < local_58) {
      pppppppuVar15 = local_70[0];
    }
    (*pcVar4)(pppppppuVar15);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
  FUN_1448173f8(local_78);
  if (((char)local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_90 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if (lVar14 != 0) {
    puVar3 = (uint *)(param_1 + 0x88);
    lVar12 = FUN_140b5495e();
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(lVar12 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8
         ) != lVar12 + 0x30)) {
      *puVar3 = 0;
      iVar6 = 0;
    }
    else {
      uVar8 = *(uint *)(lVar14 + 0xc);
      *puVar3 = uVar8;
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar6 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar6 = *(int *)(lVar14 + 0x10);
        bVar18 = iVar6 == 0;
        if (bVar18) {
          *(int *)(lVar14 + 0x10) = iVar10;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar18) {
          iVar6 = iVar10;
        }
      }
    }
    *(int *)(param_1 + 0x8c) = iVar6;
    FUN_1488aae8c(puVar3);
    goto LAB_143d8125e;
  }
  FUN_1400b22c2(&local_a0,"Settings.Cover");
  _Dst = (void *)CONCAT44(uStack_9c,local_a0);
  if ((longlong)(int)uStack_98 != 0) {
    uVar8 = 1;
    lVar14 = 0;
    do {
      if (*(short *)((longlong)_Dst + lVar14) == 0x2e) goto LAB_143d81203;
      uVar8 = uVar8 + 1;
      lVar14 = lVar14 + 2;
    } while ((longlong)(int)uStack_98 * 2 != lVar14);
  }
  goto LAB_143d81252;
LAB_143d81203:
  if (uVar8 != 0) {
    uVar11 = (int)uStack_98 - 1;
    if ((int)uStack_98 == 0) {
      uVar11 = 0;
    }
    if ((int)uVar8 < (int)uVar11) {
      uVar11 = uVar8;
    }
    if (0 < (int)uVar11) {
      iVar6 = (int)uStack_98;
      if ((int)uStack_98 - uVar11 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar11 * 2),
                (longlong)(int)((int)uStack_98 - uVar11) * 2);
        iVar6 = (int)uStack_98;
      }
      uStack_98 = CONCAT44(uStack_98._4_4_,iVar6 - uVar11);
      FUN_1449649ae(&local_a0);
      _Dst = (void *)CONCAT44(uStack_9c,local_a0);
    }
  }
LAB_143d81252:
  if (_Dst != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar9 = 0;
LAB_143d8125e:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d81574 FUN_143d81574 body=1304 status=ok
// SIG undefined FUN_143d81574(void)

void FUN_143d81574(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  code *pcVar11;
  bool bVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  code *local_78;
  code *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((*(int *)(param_1 + 0x74) == 0) || (uVar1 = *(uint *)(param_1 + 0x70), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar9 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(param_1 + 0x74))) ||
      (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 ||
       (plVar9 = (longlong *)*plVar9, plVar9 == (longlong *)0x0)))))) {
LAB_143d81622:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_d8);
  }
  uVar5 = FUN_140b040c0();
  plVar6 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,uVar5);
  if (plVar6 == (longlong *)0x0) goto LAB_143d81622;
  uVar5 = FUN_140b040c0();
  plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
  if (plVar6 == plVar7 || plVar7 == (longlong *)0x0) goto LAB_143d81622;
  FUN_140361b4a(&local_58,plVar7);
  *(uint *)(param_1 + 0x90) = (uint)local_58;
  *(undefined4 *)(param_1 + 0x94) = local_58._4_4_;
  *(int *)(param_1 + 0x98) = iStack_50;
  *(undefined4 *)(param_1 + 0x9c) = uStack_4c;
  if (DAT_14c9a4e08 == 0) {
    local_58 = FUN_1449e2820;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_1427b09ee;
    local_88 = &LAB_1470c76a3;
    local_90 = FUN_1462ab034;
    local_98 = L"Engine";
    local_a0 = 0;
    local_a8 = 0x10004001;
    local_b0 = 8;
    local_b8 = 0x28;
    local_80 = &local_58;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
  }
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,DAT_14c9a4e08);
  if (plVar9 != (longlong *)0x0) {
    if (DAT_14c9a4e08 == 0) {
      local_58 = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_1427b09ee;
      local_88 = &LAB_1470c76a3;
      local_90 = FUN_1462ab034;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10004001;
      local_b0 = 8;
      local_b8 = 0x28;
      local_80 = &local_58;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
    }
    plVar6 = (longlong *)FUN_144718840(plVar9,DAT_14c9a4e08);
    if (plVar9 != plVar6 && plVar6 != (longlong *)0x0) {
      FUN_14070e9ee(&local_58,plVar6);
      *(uint *)(param_1 + 0xa0) = (uint)local_58;
      *(undefined4 *)(param_1 + 0xa4) = local_58._4_4_;
      *(int *)(param_1 + 0xa8) = iStack_50;
      *(undefined4 *)(param_1 + 0xac) = uStack_4c;
      lVar8 = (**(code **)(*plVar7 + 0x20))(plVar7);
      if (lVar8 != 0) {
        FUN_1488aae92(&local_58,param_1);
        cVar3 = FUN_140b068ec(lVar8,2,&DAT_14cb24288,&local_58);
        if (iStack_50 == 0) {
LAB_143d8177c:
          if (local_58 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_58 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          iStack_50 = 0;
          goto LAB_143d8177c;
        }
        if (cVar3 != '\0') {
          if ((((*(int *)(param_1 + 0x8c) != 0) &&
               (uVar1 = *(uint *)(param_1 + 0x88), -1 < (int)uVar1)) &&
              (((int)uVar1 < DAT_14c9647dc &&
               (((plVar9 = (longlong *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(param_1 + 0x8c))) &&
                ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))))) && (lVar8 = *plVar9, lVar8 != 0)) {
            uVar5 = (**(code **)(*plVar6 + 0x28))(plVar6);
            lVar8 = **(longlong **)(lVar8 + 0x3d0);
            local_40 = 8;
            if (lVar8 == 0) {
              local_58._0_4_ = 0;
              iVar4 = 0;
              uVar1 = (uint)local_58;
            }
            else {
              uVar1 = *(uint *)(lVar8 + 0xc);
              local_58 = (code *)(ulonglong)uVar1;
              if ((int)uVar1 < DAT_14c9647dc) {
                lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
              }
              else {
                lVar8 = 0;
              }
              iVar4 = *(int *)(lVar8 + 0x10);
              if (*(int *)(lVar8 + 0x10) == 0) {
                LOCK();
                iVar4 = DAT_14c964868 + 1;
                UNLOCK();
                iVar10 = DAT_14c964868 + 1;
                bVar12 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar4;
                if (bVar12) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar10);
                }
                LOCK();
                iVar4 = *(int *)(lVar8 + 0x10);
                bVar12 = iVar4 == 0;
                if (bVar12) {
                  *(int *)(lVar8 + 0x10) = iVar10;
                  iVar4 = 0;
                }
                UNLOCK();
                uVar1 = (uint)local_58;
                if (bVar12) {
                  iVar4 = iVar10;
                }
              }
            }
            local_58._0_4_ = uVar1;
            local_58 = (code *)CONCAT44(iVar4,(uint)local_58);
            local_38 = 0xe;
            local_68 = DAT_14cb23ef0;
            local_60 = 0xffffffff;
            FUN_140af060e(uVar5,&local_68,&local_58);
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
            if (pcVar2 != (code *)0x0) {
              pcVar11 = (code *)&local_58;
              if (0x18 < local_40) {
                pcVar11 = local_58;
              }
              (*pcVar2)(pcVar11);
            }
            if (0x18 < local_40) {
              FUN_1400020a8(local_58);
            }
          }
          *(undefined1 *)(param_1 + 0xb0) = 1;
          goto LAB_143d816e9;
        }
      }
    }
  }
  FUN_14097c15a(param_1);
LAB_143d816e9:
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d81aa4 FUN_143d81aa4 body=2712 status=ok
// SIG undefined FUN_143d81aa4(void)

undefined8 FUN_143d81aa4(longlong param_1)

{
  longlong *_Dst;
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  code *pcVar4;
  ushort uVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  void *_Dst_00;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  longlong *plVar18;
  undefined8 *******pppppppuVar19;
  bool bVar20;
  bool bVar21;
  undefined1 auStack_c8 [36];
  int local_a4;
  char local_a0;
  undefined7 uStack_9f;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80;
  int local_78 [2];
  undefined8 ******local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar13 = *(longlong *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _Dst = (longlong *)(param_1 + 0x70);
  bVar3 = *(byte *)(param_1 + 0x90);
  if (bVar3 == DAT_14c9ab188) {
    puVar12 = DAT_14c9ab168;
    if (DAT_14c9ab180 < 0x19) {
      puVar12 = &DAT_14c9ab168;
    }
    plVar18 = _Dst;
    if (0x18 < *(ushort *)(param_1 + 0x88)) {
      plVar18 = (longlong *)*_Dst;
    }
    uVar8 = (ulonglong)((uint)bVar3 * 0x120);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar8);
    if (pcVar4 == (code *)0x0) {
      memcpy(plVar18,puVar12,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
    }
    else {
      (*pcVar4)();
    }
  }
  else {
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
    if (pcVar4 != (code *)0x0) {
      plVar18 = _Dst;
      if (0x18 < *(ushort *)(param_1 + 0x88)) {
        plVar18 = (longlong *)*_Dst;
      }
      (*pcVar4)(plVar18);
    }
    if (0x18 < *(ushort *)(param_1 + 0x88)) {
      FUN_1400020a8(*_Dst);
    }
    uVar5 = DAT_14c9ab180;
    uVar11 = (uint)DAT_14c9ab188;
    *(ushort *)(param_1 + 0x88) = DAT_14c9ab180;
    if (uVar5 < 0x19) {
      puVar12 = &DAT_14c9ab168;
      plVar18 = _Dst;
    }
    else {
      plVar18 = (longlong *)FUN_14001cc68(uVar5,0);
      *_Dst = (longlong)plVar18;
      puVar12 = DAT_14c9ab168;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar11 * 0x120));
    if (pcVar4 == (code *)0x0) {
      memcpy(plVar18,puVar12,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar11 * 0x120)));
    }
    else {
      (*pcVar4)();
    }
    *(byte *)(param_1 + 0x90) = DAT_14c9ab188;
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  lVar9 = lVar13 + 0x80;
  cVar6 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar9);
  if (cVar6 == '\0') {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    iVar7 = 0;
  }
  else {
    lVar16 = *(longlong *)(param_1 + 0x40);
    if (lVar16 == 0) {
      lVar15 = 0;
      local_98 = 0;
LAB_143d823a9:
      local_90 = (longlong *)0x0;
      bVar20 = true;
    }
    else {
      if (*(int *)(lVar16 + 0x4c) == 0) {
LAB_143d82326:
        lVar15 = 0;
      }
      else {
        uVar11 = *(uint *)(lVar16 + 0x48);
        lVar15 = 0;
        if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
          plVar18 = (longlong *)
                    ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
          if ((plVar18 == (longlong *)0x0) ||
             (((int)plVar18[2] != *(int *)(lVar16 + 0x4c) ||
              ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))) goto LAB_143d82326;
          lVar15 = *plVar18;
        }
      }
      plVar18 = *(longlong **)(lVar16 + 0x118);
      local_98 = param_1;
      if (plVar18 == (longlong *)0x0) goto LAB_143d823a9;
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
      LOCK();
      *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
      UNLOCK();
      bVar20 = false;
      local_90 = plVar18;
    }
    plVar18 = local_90;
    local_78[0] = 0;
    local_a0 = '\x03';
    local_88._0_4_ = 0;
    if (lVar15 == 0) {
      iVar7 = 0;
      uVar11 = (uint)local_88;
    }
    else {
      uVar11 = *(uint *)(lVar15 + 0xc);
      local_88 = (ulonglong)uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      iVar7 = *(int *)(lVar16 + 0x10);
      if (*(int *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar14 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar21) {
          local_a4 = iVar14;
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar14);
          iVar14 = local_a4;
        }
        LOCK();
        iVar7 = *(int *)(lVar16 + 0x10);
        bVar21 = iVar7 == 0;
        if (bVar21) {
          *(int *)(lVar16 + 0x10) = iVar14;
          iVar7 = 0;
        }
        UNLOCK();
        uVar11 = (uint)local_88;
        if (bVar21) {
          iVar7 = iVar14;
        }
      }
    }
    local_88._0_4_ = uVar11;
    local_88 = CONCAT44(iVar7,(uint)local_88);
    local_80 = 2;
    if (local_78[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
      local_78[0] = 0;
    }
    if (!bVar20) {
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
    FUN_1447c3578(lVar9,local_70,&local_a0);
    lVar9 = FUN_14030a32e(local_70);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppppppuVar19 = local_70;
      if (0x18 < local_58) {
        pppppppuVar19 = (undefined8 *******)local_70[0];
      }
      (*pcVar4)(pppppppuVar19);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    FUN_1448173f8(local_78);
    if ((local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    if (lVar9 == 0) {
      FUN_1400b22c2(&local_a0,"Settings.Actor");
      _Dst_00 = (void *)CONCAT71(uStack_9f,local_a0);
      if ((longlong)(int)local_98 != 0) {
        uVar11 = 1;
        lVar13 = 0;
        do {
          if (*(short *)((longlong)_Dst_00 + lVar13) == 0x2e) goto LAB_143d821dd;
          uVar11 = uVar11 + 1;
          lVar13 = lVar13 + 2;
        } while ((longlong)(int)local_98 * 2 != lVar13);
      }
      goto LAB_143d8222c;
    }
    uVar11 = *(uint *)(lVar9 + 0xc);
    *(uint *)(param_1 + 0xa0) = uVar11;
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar7 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar7 = *(int *)(lVar9 + 0x10);
      bVar20 = iVar7 == 0;
      if (bVar20) {
        *(int *)(lVar9 + 0x10) = iVar14;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar20) {
        iVar7 = iVar14;
      }
    }
  }
  *(int *)(param_1 + 0xa4) = iVar7;
  lVar13 = lVar13 + 0xb8;
  cVar6 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar13);
  if (cVar6 == '\0') {
    if (*(char *)(param_1 + 0x90) != '\0') goto LAB_143d8213c;
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x40);
    if (lVar9 == 0) {
      lVar16 = 0;
      lVar9 = 0;
LAB_143d823d4:
      local_90 = (longlong *)0x0;
      bVar20 = true;
      local_98 = lVar9;
    }
    else {
      if (*(int *)(lVar9 + 0x4c) == 0) {
LAB_143d8232d:
        lVar16 = 0;
      }
      else {
        uVar11 = *(uint *)(lVar9 + 0x48);
        lVar16 = 0;
        if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
          plVar18 = (longlong *)
                    ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
          if ((plVar18 == (longlong *)0x0) ||
             (((int)plVar18[2] != *(int *)(lVar9 + 0x4c) ||
              ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))) goto LAB_143d8232d;
          lVar16 = *plVar18;
        }
      }
      plVar18 = *(longlong **)(lVar9 + 0x118);
      lVar9 = param_1;
      if (plVar18 == (longlong *)0x0) goto LAB_143d823d4;
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
      LOCK();
      *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
      UNLOCK();
      bVar20 = false;
      local_98 = param_1;
      local_90 = plVar18;
    }
    plVar18 = local_90;
    local_78[0] = 0;
    local_a0 = '\x03';
    local_88._0_4_ = 0;
    if (lVar16 == 0) {
      iVar7 = 0;
      uVar11 = (uint)local_88;
    }
    else {
      uVar11 = *(uint *)(lVar16 + 0xc);
      local_88 = (ulonglong)uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar14 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar21 = iVar7 == 0;
        if (bVar21) {
          *(int *)(lVar9 + 0x10) = iVar14;
          iVar7 = 0;
        }
        UNLOCK();
        uVar11 = (uint)local_88;
        if (bVar21) {
          iVar7 = iVar14;
        }
      }
    }
    local_88._0_4_ = uVar11;
    local_88 = CONCAT44(iVar7,(uint)local_88);
    local_80 = 2;
    if (local_78[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
      local_78[0] = 0;
    }
    if (!bVar20) {
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
    FUN_1447c3578(lVar13,local_70,&local_a0);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(param_1 + 0x90) * 0x120));
    if (pcVar4 != (code *)0x0) {
      plVar18 = _Dst;
      if (0x18 < *(ushort *)(param_1 + 0x88)) {
        plVar18 = (longlong *)*_Dst;
      }
      (*pcVar4)(plVar18);
    }
    if (0x18 < *(ushort *)(param_1 + 0x88)) {
      FUN_1400020a8(*_Dst);
    }
    *(ushort *)(param_1 + 0x88) = local_58;
    if (local_58 < 0x19) {
      uVar8 = (ulonglong)((uint)local_50 * 0x120);
      if (*(code **)((longlong)&DAT_14c9a85b8 + uVar8) == (code *)0x0) {
        if (*(code **)((longlong)&DAT_14c9a85b0 + uVar8) == (code *)0x0) {
          memcpy(_Dst,local_70,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b0 + uVar8))(_Dst,local_70);
        }
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b8 + uVar8))(_Dst,local_70);
      }
    }
    else {
      *_Dst = (longlong)local_70[0];
      local_70[0] = (undefined8 *******)0x0;
      local_58 = 0;
    }
    *(byte *)(param_1 + 0x90) = local_50;
    local_50 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      pppppppuVar19 = local_70;
      if (0x18 < local_58) {
        pppppppuVar19 = (undefined8 *******)local_70[0];
      }
      (*DAT_14c9a85d0)(pppppppuVar19);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    FUN_1448173f8(local_78);
    if ((local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    if (*(char *)(param_1 + 0x90) == '\0') {
      FUN_1400b22c2(&local_a0,"Settings.Perch");
      _Dst_00 = (void *)CONCAT71(uStack_9f,local_a0);
      if ((longlong)(int)local_98 != 0) {
        uVar11 = 1;
        lVar13 = 0;
        do {
          if (*(short *)((longlong)_Dst_00 + lVar13) == 0x2e) goto LAB_143d821dd;
          uVar11 = uVar11 + 1;
          lVar13 = lVar13 + 2;
        } while ((longlong)(int)local_98 * 2 != lVar13);
      }
      goto LAB_143d8222c;
    }
LAB_143d8213c:
    lVar13 = FUN_140593260(_Dst);
    if (lVar13 == 0) {
LAB_143d82170:
      lVar13 = FUN_14030a32e(_Dst);
      if (lVar13 != 0) {
        lVar9 = FUN_1459f0ed6();
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) {
          lVar13 = FUN_14061d010(lVar13);
        }
        else {
          lVar13 = (**(code **)(*(longlong *)(lVar13 + 0x390) + 0x10))(lVar13 + 0x390);
        }
        if (lVar13 != 0) goto LAB_143d822c4;
      }
      *(undefined4 *)(param_1 + 0x98) = 0;
      iVar7 = 0;
    }
    else {
      lVar9 = FUN_14061d078();
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) goto LAB_143d82170;
LAB_143d822c4:
      uVar11 = *(uint *)(lVar13 + 0xc);
      *(uint *)(param_1 + 0x98) = uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      iVar7 = *(int *)(lVar13 + 0x10);
      if (*(int *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar14 = DAT_14c964868 + 1;
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar14);
        }
        LOCK();
        iVar7 = *(int *)(lVar13 + 0x10);
        bVar20 = iVar7 == 0;
        if (bVar20) {
          *(int *)(lVar13 + 0x10) = iVar14;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar20) {
          iVar7 = iVar14;
        }
      }
    }
    *(int *)(param_1 + 0x9c) = iVar7;
  }
  uVar10 = 1;
LAB_143d82238:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
LAB_143d821dd:
  if (uVar11 != 0) {
    uVar17 = (int)local_98 - 1;
    if ((int)local_98 == 0) {
      uVar17 = 0;
    }
    if ((int)uVar11 < (int)uVar17) {
      uVar17 = uVar11;
    }
    if (0 < (int)uVar17) {
      iVar7 = (int)local_98;
      if ((int)local_98 - uVar17 != 0) {
        memmove(_Dst_00,(void *)((longlong)_Dst_00 + (ulonglong)uVar17 * 2),
                (longlong)(int)((int)local_98 - uVar17) * 2);
        iVar7 = (int)local_98;
      }
      local_98 = CONCAT44(local_98._4_4_,iVar7 - uVar17);
      FUN_1449649ae(&local_a0);
      _Dst_00 = (void *)CONCAT71(uStack_9f,local_a0);
    }
  }
LAB_143d8222c:
  if (_Dst_00 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar10 = 0;
  goto LAB_143d82238;
}



// FUNCTION 143d8253e FUN_143d8253e body=1423 status=ok
// SIG undefined FUN_143d8253e(void)

void FUN_143d8253e(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  code *pcVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  code *local_88;
  code *local_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  int iStack_58;
  undefined4 uStack_54;
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((((*(int *)(param_1 + 0xa4) == 0) || (uVar1 = *(uint *)(param_1 + 0xa0), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((((plVar13 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)(param_1 + 0xa4))) ||
        (((*(uint *)(plVar13 + 1) & 0x10200000) != 0 ||
         ((plVar13 = (longlong *)*plVar13, plVar13 == (longlong *)0x0 ||
          (*(int *)(param_1 + 0x9c) == 0)))))) ||
       (uVar1 = *(uint *)(param_1 + 0x98), (int)uVar1 < 0)))) ||
     ((((DAT_14c9647dc <= (int)uVar1 ||
        (plVar9 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar9 == (longlong *)0x0)) || ((int)plVar9[2] != *(int *)(param_1 + 0x9c))) ||
      (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (lVar14 = *plVar9, lVar14 == 0)))))) {
LAB_143d8265e:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_e8);
  }
  uVar6 = FUN_140b040c0();
  plVar9 = (longlong *)(**(code **)(*plVar13 + 0x288))(plVar13,uVar6);
  if (plVar9 == (longlong *)0x0) goto LAB_143d8265e;
  uVar6 = FUN_140b040c0();
  plVar7 = (longlong *)FUN_144718840(plVar9,uVar6);
  if (plVar9 == plVar7 || plVar7 == (longlong *)0x0) goto LAB_143d8265e;
  FUN_140361b4a(&local_60,plVar7);
  *(uint *)(param_1 + 0xa8) = (uint)local_60;
  *(undefined4 *)(param_1 + 0xac) = local_60._4_4_;
  *(int *)(param_1 + 0xb0) = iStack_58;
  *(undefined4 *)(param_1 + 0xb4) = uStack_54;
  if (DAT_14c9a4e08 == 0) {
    local_60 = FUN_1449e2820;
    local_80 = FUN_14081d0ea;
    local_88 = FUN_1427b09ee;
    local_98 = &LAB_1470c76a3;
    local_a0 = FUN_1462ab034;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10004001;
    local_c0 = 8;
    local_c8 = 0x28;
    local_90 = &local_60;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
  }
  plVar13 = (longlong *)(**(code **)(*plVar13 + 0x288))(plVar13,DAT_14c9a4e08);
  if (plVar13 != (longlong *)0x0) {
    if (DAT_14c9a4e08 == 0) {
      local_60 = FUN_1449e2820;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_1427b09ee;
      local_98 = &LAB_1470c76a3;
      local_a0 = FUN_1462ab034;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10004001;
      local_c0 = 8;
      local_c8 = 0x28;
      local_90 = &local_60;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
    }
    plVar9 = (longlong *)FUN_144718840(plVar13,DAT_14c9a4e08);
    if (plVar13 != plVar9 && plVar9 != (longlong *)0x0) {
      FUN_14070e9ee(&local_60,plVar9);
      *(uint *)(param_1 + 0xb8) = (uint)local_60;
      *(undefined4 *)(param_1 + 0xbc) = local_60._4_4_;
      *(int *)(param_1 + 0xc0) = iStack_58;
      *(undefined4 *)(param_1 + 0xc4) = uStack_54;
      lVar8 = (**(code **)(*plVar7 + 0x20))(plVar7);
      if (lVar8 != 0) {
        local_60 = (code *)0x0;
        iStack_58 = 0;
        FUN_1446efa72(&local_60,0,3,0x10);
        iStack_58 = 3;
        *(undefined ***)local_60 = &PTR_LAB_14ac8c8d0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar3 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar3 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar3;
        *(longlong *)(local_60 + 0x10) = lVar10;
        *(undefined ***)local_60 = &PTR_FUN_14b40e470;
        *(longlong *)(local_60 + 0x18) = param_1;
        *(code **)(local_60 + 0x20) = FUN_1488ab73c;
        cVar4 = FUN_140b068ec(lVar8,CONCAT71((int7)((ulonglong)lVar10 >> 8),2),&DAT_14cb24290,
                              &local_60);
        if (iStack_58 == 0) {
LAB_143d82805:
          if (local_60 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_60 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_60)(local_60,0);
          FUN_1446efa72(&local_60,0,0,0x10);
          iStack_58 = 0;
          goto LAB_143d82805;
        }
        if (cVar4 != '\0') {
          uVar6 = (**(code **)(*plVar9 + 0x28))(plVar9);
          local_48 = 8;
          uVar1 = *(uint *)(lVar14 + 0xc);
          local_60 = (code *)(ulonglong)uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          iVar5 = *(int *)(lVar14 + 0x10);
          if (*(int *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            iVar11 = DAT_14c964868 + 1;
            bVar15 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar15) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar11);
            }
            LOCK();
            iVar5 = *(int *)(lVar14 + 0x10);
            bVar15 = iVar5 == 0;
            if (bVar15) {
              *(int *)(lVar14 + 0x10) = iVar11;
              iVar5 = 0;
            }
            UNLOCK();
            uVar1 = (uint)local_60;
            if (bVar15) {
              iVar5 = iVar11;
            }
          }
          local_60._0_4_ = uVar1;
          local_60 = (code *)CONCAT44(iVar5,(uint)local_60);
          local_40 = 0xe;
          local_70 = DAT_14cb88ca8;
          local_68 = 0xffffffff;
          FUN_140af060e(uVar6,&local_70,&local_60);
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
          if (pcVar2 != (code *)0x0) {
            pcVar12 = (code *)&local_60;
            if (0x18 < local_48) {
              pcVar12 = local_60;
            }
            (*pcVar2)(pcVar12);
          }
          if (0x18 < local_48) {
            FUN_1400020a8(local_60);
          }
          *(undefined2 *)(param_1 + 200) = 0x101;
          goto LAB_143d8290e;
        }
      }
    }
  }
  FUN_14097c15a(param_1);
LAB_143d8290e:
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d82ae6 FUN_143d82ae6 body=2017 status=ok
// SIG undefined FUN_143d82ae6(void)

undefined8 FUN_143d82ae6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  void *_Dst;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 ****ppppuVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_c8 [36];
  int local_a4;
  char local_a0;
  undefined7 uStack_9f;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80;
  int local_78 [2];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar14 = *(longlong *)(param_1 + 0x48);
  lVar7 = lVar14 + 0x80;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  cVar4 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar7);
  if (cVar4 == '\0') {
    *(uint *)(param_1 + 0x70) = 0;
    iVar5 = 0;
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x40);
    if (lVar12 == 0) {
      lVar11 = 0;
      local_98 = 0;
LAB_143d8313c:
      local_90 = (longlong *)0x0;
      bVar17 = true;
    }
    else {
      if (*(int *)(lVar12 + 0x4c) == 0) {
LAB_143d830d1:
        lVar11 = 0;
      }
      else {
        uVar13 = *(uint *)(lVar12 + 0x48);
        lVar11 = 0;
        if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
          plVar15 = (longlong *)
                    ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
          if ((plVar15 == (longlong *)0x0) ||
             (((int)plVar15[2] != *(int *)(lVar12 + 0x4c) ||
              ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_143d830d1;
          lVar11 = *plVar15;
        }
      }
      plVar15 = *(longlong **)(lVar12 + 0x118);
      local_98 = param_1;
      if (plVar15 == (longlong *)0x0) goto LAB_143d8313c;
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar15 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
      bVar17 = false;
      local_90 = plVar15;
    }
    plVar15 = local_90;
    local_78[0] = 0;
    local_a0 = '\x03';
    local_88._0_4_ = 0;
    if (lVar11 == 0) {
      iVar5 = 0;
      uVar13 = (uint)local_88;
    }
    else {
      uVar13 = *(uint *)(lVar11 + 0xc);
      local_88 = (ulonglong)uVar13;
      if ((int)uVar13 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar5 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar18) {
          local_a4 = iVar10;
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
          iVar10 = local_a4;
        }
        LOCK();
        iVar5 = *(int *)(lVar12 + 0x10);
        bVar18 = iVar5 == 0;
        if (bVar18) {
          *(int *)(lVar12 + 0x10) = iVar10;
          iVar5 = 0;
        }
        UNLOCK();
        uVar13 = (uint)local_88;
        if (bVar18) {
          iVar5 = iVar10;
        }
      }
    }
    local_88._0_4_ = uVar13;
    local_88 = CONCAT44(iVar5,(uint)local_88);
    local_80 = 2;
    if (local_78[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
      local_78[0] = 0;
    }
    if (!bVar17) {
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    FUN_1447c3578(lVar7,local_70,&local_a0);
    lVar7 = FUN_14030a32e(local_70);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar16 = local_70;
      if (0x18 < local_58) {
        ppppuVar16 = (undefined8 ****)local_70[0];
      }
      (*pcVar3)(ppppuVar16);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    FUN_1448173f8(local_78);
    if ((local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    if (lVar7 == 0) {
      FUN_1400b22c2(&local_a0,"Settings.Actor");
      _Dst = (void *)CONCAT71(uStack_9f,local_a0);
      if ((longlong)(int)local_98 != 0) {
        uVar13 = 1;
        lVar7 = 0;
        do {
          if (*(short *)((longlong)_Dst + lVar7) == 0x2e) goto LAB_143d82ff4;
          uVar13 = uVar13 + 1;
          lVar7 = lVar7 + 2;
        } while ((longlong)(int)local_98 * 2 != lVar7);
      }
      goto LAB_143d83043;
    }
    uVar13 = *(uint *)(lVar7 + 0xc);
    *(uint *)(param_1 + 0x70) = uVar13;
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar17 = iVar5 == 0;
      if (bVar17) {
        *(int *)(lVar7 + 0x10) = iVar10;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar5 = iVar10;
      }
    }
  }
  *(int *)(param_1 + 0x74) = iVar5;
  lVar14 = lVar14 + 0xb8;
  cVar4 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar14);
  if (cVar4 == '\0') {
    *(undefined4 *)(param_1 + 0x78) = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x40);
    if (lVar7 == 0) {
      lVar12 = 0;
      lVar7 = 0;
LAB_143d83167:
      local_90 = (longlong *)0x0;
      bVar17 = true;
      local_98 = lVar7;
    }
    else {
      if (*(int *)(lVar7 + 0x4c) == 0) {
LAB_143d830d8:
        lVar12 = 0;
      }
      else {
        uVar13 = *(uint *)(lVar7 + 0x48);
        lVar12 = 0;
        if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
          plVar15 = (longlong *)
                    ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
          if ((plVar15 == (longlong *)0x0) ||
             (((int)plVar15[2] != *(int *)(lVar7 + 0x4c) ||
              ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_143d830d8;
          lVar12 = *plVar15;
        }
      }
      plVar15 = *(longlong **)(lVar7 + 0x118);
      lVar7 = param_1;
      if (plVar15 == (longlong *)0x0) goto LAB_143d83167;
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar15 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
      bVar17 = false;
      local_98 = param_1;
      local_90 = plVar15;
    }
    plVar15 = local_90;
    local_78[0] = 0;
    local_a0 = '\x03';
    local_88._0_4_ = 0;
    if (lVar12 == 0) {
      iVar5 = 0;
      uVar13 = (uint)local_88;
    }
    else {
      uVar13 = *(uint *)(lVar12 + 0xc);
      local_88 = (ulonglong)uVar13;
      if ((int)uVar13 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar5 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar5 = *(int *)(lVar7 + 0x10);
        bVar18 = iVar5 == 0;
        if (bVar18) {
          *(int *)(lVar7 + 0x10) = iVar10;
          iVar5 = 0;
        }
        UNLOCK();
        uVar13 = (uint)local_88;
        if (bVar18) {
          iVar5 = iVar10;
        }
      }
    }
    local_88._0_4_ = uVar13;
    local_88 = CONCAT44(iVar5,(uint)local_88);
    local_80 = 2;
    if (local_78[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
      local_78[0] = 0;
    }
    if (!bVar17) {
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    FUN_1447c3578(lVar14,local_70,&local_a0);
    lVar7 = FUN_14030a32e(local_70);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar16 = local_70;
      if (0x18 < local_58) {
        ppppuVar16 = (undefined8 ****)local_70[0];
      }
      (*pcVar3)(ppppuVar16);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    FUN_1448173f8(local_78);
    if ((local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    if (lVar7 == 0) {
      FUN_1400b22c2(&local_a0,"Settings.Target");
      _Dst = (void *)CONCAT71(uStack_9f,local_a0);
      if ((longlong)(int)local_98 != 0) {
        uVar13 = 1;
        lVar7 = 0;
        do {
          if (*(short *)((longlong)_Dst + lVar7) == 0x2e) goto LAB_143d82ff4;
          uVar13 = uVar13 + 1;
          lVar7 = lVar7 + 2;
        } while ((longlong)(int)local_98 * 2 != lVar7);
      }
      goto LAB_143d83043;
    }
    uVar13 = *(uint *)(lVar7 + 0xc);
    *(uint *)(param_1 + 0x78) = uVar13;
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar8 = (ulonglong)*(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar13 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar13);
      }
      LOCK();
      uVar6 = *(uint *)(lVar7 + 0x10);
      bVar17 = uVar6 == 0;
      if (bVar17) {
        *(uint *)(lVar7 + 0x10) = uVar13;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar17) {
        uVar6 = uVar13;
      }
      uVar8 = (ulonglong)uVar6;
    }
  }
  *(int *)(param_1 + 0x7c) = (int)uVar8;
  uVar9 = CONCAT71((int7)(uVar8 >> 8),1);
  goto LAB_143d8304f;
LAB_143d82ff4:
  if (uVar13 != 0) {
    uVar6 = (int)local_98 - 1;
    if ((int)local_98 == 0) {
      uVar6 = 0;
    }
    if ((int)uVar13 < (int)uVar6) {
      uVar6 = uVar13;
    }
    if (0 < (int)uVar6) {
      iVar5 = (int)local_98;
      if ((int)local_98 - uVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar6 * 2),
                (longlong)(int)((int)local_98 - uVar6) * 2);
        iVar5 = (int)local_98;
      }
      local_98 = CONCAT44(local_98._4_4_,iVar5 - uVar6);
      FUN_1449649ae(&local_a0);
      _Dst = (void *)CONCAT71(uStack_9f,local_a0);
    }
  }
LAB_143d83043:
  if (_Dst != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar9 = 0;
LAB_143d8304f:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d832c8 FUN_143d832c8 body=2041 status=ok
// SIG undefined FUN_143d832c8(void)

void FUN_143d832c8(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 ****ppppuVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 local_d0;
  ushort local_c8;
  uint local_c0 [2];
  undefined1 local_b8;
  float local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined8 ***local_88;
  undefined4 local_80;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((((*(int *)((longlong)param_1 + 0x74) == 0) ||
       (uVar2 = *(uint *)(param_1 + 0xe), (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) ||
     (((plVar10 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)((longlong)param_1 + 0x74))) ||
      ((lVar13 = param_1[9], (*(uint *)(plVar10 + 1) & 0x10200000) != 0 ||
       (plVar10 = (longlong *)*plVar10, plVar10 == (longlong *)0x0)))))) {
LAB_143d83387:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_108);
  }
  uVar6 = FUN_140b040c0();
  plVar10 = (longlong *)(**(code **)(*plVar10 + 0x288))(plVar10,uVar6);
  if (plVar10 == (longlong *)0x0) goto LAB_143d83387;
  uVar6 = FUN_140b040c0();
  plVar7 = (longlong *)FUN_144718840(plVar10,uVar6);
  if (plVar10 == plVar7 || plVar7 == (longlong *)0x0) goto LAB_143d83387;
  FUN_140361b4a(&local_e8,plVar7);
  *(undefined4 *)(param_1 + 0x10) = (undefined4)local_e8;
  *(undefined4 *)((longlong)param_1 + 0x84) = local_e8._4_4_;
  *(uint *)(param_1 + 0x11) = (uint)uStack_e0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uStack_e0._4_4_;
  lVar8 = (**(code **)(*plVar7 + 0x20))(plVar7);
  if (lVar8 != 0) {
    if (*(char *)(lVar13 + 0x128) == '\x01') {
      lVar15 = param_1[8];
      if (lVar15 == 0) {
        lVar14 = 0;
        uStack_e0 = (undefined8 *)0x0;
LAB_143d839ec:
        local_d8 = (longlong *)0x0;
        bVar17 = true;
      }
      else {
        if (*(int *)(lVar15 + 0x4c) == 0) {
LAB_143d8396e:
          lVar14 = 0;
        }
        else {
          uVar2 = *(uint *)(lVar15 + 0x48);
          lVar14 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            plVar10 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((plVar10 == (longlong *)0x0) ||
               (((int)plVar10[2] != *(int *)(lVar15 + 0x4c) ||
                ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_143d8396e;
            lVar14 = *plVar10;
          }
        }
        plVar10 = *(longlong **)(lVar15 + 0x118);
        uStack_e0 = param_1;
        if (plVar10 == (longlong *)0x0) goto LAB_143d839ec;
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar7 = plVar10 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        bVar17 = false;
        local_d8 = plVar10;
      }
      plVar10 = local_d8;
      local_e8 = (undefined8 *)CONCAT71(local_e8._1_7_,3);
      local_c0[0] = 0;
      local_d0._0_4_ = 0;
      if (lVar14 == 0) {
        iVar5 = 0;
        uVar2 = (uint)local_d0;
      }
      else {
        uVar2 = *(uint *)(lVar14 + 0xc);
        local_d0 = (ulonglong)uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar15 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar15 = 0;
        }
        iVar5 = *(int *)(lVar15 + 0x10);
        if (*(int *)(lVar15 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar18 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar18) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
          }
          LOCK();
          iVar5 = *(int *)(lVar15 + 0x10);
          bVar18 = iVar5 == 0;
          if (bVar18) {
            *(int *)(lVar15 + 0x10) = iVar12;
            iVar5 = 0;
          }
          UNLOCK();
          uVar2 = (uint)local_d0;
          if (bVar18) {
            iVar5 = iVar12;
          }
        }
      }
      local_d0._0_4_ = uVar2;
      local_d0 = CONCAT44(iVar5,(uint)local_d0);
      local_c8 = CONCAT11(local_c8._1_1_,2);
      if (local_c0[0] != 0) {
        FUN_1417398fc(&DAT_14c9a3da0,local_c0[0] - 1,1);
        local_c0[0] = 0;
      }
      if (!bVar17) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      pfVar16 = &local_b0;
      FUN_1447c3578(lVar13 + 0xf0,pfVar16,&local_e8);
      if (local_90 == 3) {
        local_90 = 3;
        fVar19 = local_b0;
      }
      else {
        FUN_1400b56fe(&local_88,&local_b0,3);
        fVar19 = 0.0;
        if (local_68 != 0) {
          fVar19 = local_88._0_4_;
        }
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar11 = &local_88;
          if (0x18 < local_70) {
            ppppuVar11 = (undefined8 ****)local_88;
          }
          (*pcVar3)(ppppuVar11);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(local_88);
        }
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_98) {
          pfVar16 = (float *)CONCAT44(uStack_ac,local_b0);
        }
        (*pcVar3)(pfVar16);
      }
      if (0x18 < local_98) {
        FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
      }
      FUN_1448173f8(local_c0);
      if (((char)local_e8 == '\x03') && (local_d8 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d8 + 0x10))();
        }
      }
      *(float *)((longlong)param_1 + 0x94) = fVar19 + *(float *)((longlong)param_1 + 0x54);
    }
    cVar4 = FUN_147f5674e(lVar8,&DAT_14cb24288);
    if (cVar4 != '\0') {
      lVar13 = lVar8 + (ulonglong)*(byte *)(lVar8 + 0x3c0) * 0x138 + 0x18;
      local_e8 = (undefined8 *)0x0;
      local_c8 = 4;
      uStack_e0 = (undefined8 *)CONCAT44(uStack_e0._4_4_,1);
      local_c0[0] = CONCAT31(local_c0[0]._1_3_,1);
      local_b8 = (DAT_14c9a8634 & 0x20) == 0;
      local_80 = 0xffffffff;
      local_88 = DAT_14cb80e08;
      FUN_1402b8456(lVar13,&local_88,&local_e8);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_c0[0] & 0xff) * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar9 = uStack_e0;
        if (local_c8 < 0x19) {
          puVar9 = &uStack_e0;
        }
        (*pcVar3)(puVar9);
      }
      if (0x18 < local_c8) {
        FUN_1400020a8(uStack_e0);
      }
      local_e8 = (undefined8 *)0x0;
      local_c8 = 4;
      uStack_e0 = (undefined8 *)CONCAT44(uStack_e0._4_4_,1);
      local_b8 = (DAT_14c9a8634 & 0x20) == 0;
      local_c0[0] = CONCAT31(local_c0[0]._1_3_,1);
      local_80 = 0xffffffff;
      local_88 = DAT_14cb80e10;
      FUN_1402b8456(lVar13,&local_88,&local_e8);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_c0[0] & 0xff) * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar9 = uStack_e0;
        if (local_c8 < 0x19) {
          puVar9 = &uStack_e0;
        }
        (*pcVar3)(puVar9);
      }
      if (0x18 < local_c8) {
        FUN_1400020a8(uStack_e0);
      }
      if (((((*(int *)((longlong)param_1 + 0x7c) != 0) &&
            (uVar2 = *(uint *)(param_1 + 0xf), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) &&
          ((plVar10 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)((longlong)param_1 + 0x7c)))))
         && (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (*plVar10 != 0)))) {
        local_e8 = (undefined8 *)0x0;
        local_c8 = 8;
        uVar2 = *(uint *)(*plVar10 + 0xc);
        uStack_e0 = (undefined8 *)(ulonglong)uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar5 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
          }
          LOCK();
          iVar5 = *(int *)(lVar8 + 0x10);
          bVar17 = iVar5 == 0;
          if (bVar17) {
            *(int *)(lVar8 + 0x10) = iVar12;
            iVar5 = 0;
          }
          UNLOCK();
          uVar2 = (uint)uStack_e0;
          if (bVar17) {
            iVar5 = iVar12;
          }
        }
        uStack_e0._0_4_ = uVar2;
        uStack_e0 = (undefined8 *)CONCAT44(iVar5,(uint)uStack_e0);
        local_c0[0] = CONCAT31(local_c0[0]._1_3_,7);
        local_b8 = 7;
        if ((DAT_14c9a8cf4 & 0x20) != 0) {
          local_b8 = 0;
        }
        local_80 = 0xffffffff;
        local_88 = DAT_14cb80e00;
        FUN_1402b8456(lVar13,&local_88,&local_e8);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_c0[0] & 0xff) * 0x120));
        if (pcVar3 != (code *)0x0) {
          puVar9 = uStack_e0;
          if (local_c8 < 0x19) {
            puVar9 = &uStack_e0;
          }
          (*pcVar3)(puVar9);
        }
        if (0x18 < local_c8) {
          FUN_1400020a8(uStack_e0);
        }
      }
      goto LAB_143d833eb;
    }
    FUN_1488ac51a(&local_e8,param_1);
    cVar4 = FUN_140b068ec(lVar8,2,&DAT_14cb241d8,&local_e8);
    if ((uint)uStack_e0 == 0) {
LAB_143d83929:
      if (local_e8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_e8 != (undefined8 *)0x0) {
      (**(code **)*local_e8)(local_e8,0);
      FUN_1446efa72(&local_e8,0,0,0x10);
      uStack_e0 = (undefined8 *)((ulonglong)uStack_e0 & 0xffffffff00000000);
      goto LAB_143d83929;
    }
    if (cVar4 != '\0') {
      *(undefined1 *)(param_1 + 0x12) = 1;
      goto LAB_143d833eb;
    }
  }
  FUN_14097c15a(param_1);
LAB_143d833eb:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d83ae6 FUN_143d83ae6 body=206 status=ok
// SIG undefined FUN_143d83ae6(void)

void FUN_143d83ae6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)(int)param_1[0xa4] != 0) {
    lVar2 = param_1[0xa3];
    lVar3 = (longlong)(int)param_1[0xa4] * 0xc0;
    iVar1 = 0;
    do {
      switch(*(undefined4 *)(lVar2 + 0xa8)) {
      case 0:
        FUN_1488ad09c(param_1,lVar2);
        break;
      case 1:
        FUN_1488ad246(param_1,lVar2);
        break;
      case 3:
        FUN_1488ad60a(param_1,lVar2);
        break;
      case 4:
        FUN_1488ad96e(param_1,lVar2);
        break;
      case 5:
        iVar1 = iVar1 + 1;
      }
      lVar2 = lVar2 + 0xc0;
      lVar3 = lVar3 + -0xc0;
    } while (lVar3 != 0);
    if (iVar1 != (int)param_1[0xa4]) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x650))(param_1);
  FUN_1470de17c(param_1,*(char *)((longlong)param_1 + 0x3d5) + '\x01');
  return;
}



// FUNCTION 143d83bb4 FUN_143d83bb4 body=95 status=ok
// SIG undefined FUN_143d83bb4(void)

void FUN_143d83bb4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x240);
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
    plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x3a8) + 0x20))(param_1 + 0x3a8);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d83c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))(plVar1,param_2,*(code **)(*plVar1 + 0x30));
      return;
    }
  }
  return;
}



// FUNCTION 143d83c4a FUN_143d83c4a body=839 status=ok
// SIG undefined FUN_143d83c4a(void)

void FUN_143d83c4a(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  uint *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined1 auStack_98 [32];
  uint *local_78;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined1 local_50 [4];
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    puVar17 = (uint *)(param_1 + 0x2d8);
    iVar2 = *(int *)(param_1 + 0x2f0);
    if (iVar2 == 0) {
      uVar19 = 1;
      uVar13 = 0;
      iVar14 = 0;
      iVar5 = 0;
    }
    else {
      puVar6 = *(uint **)(param_1 + 0x2e8);
      if (*(uint **)(param_1 + 0x2e8) == (uint *)0x0) {
        puVar6 = puVar17;
      }
      uVar15 = *puVar6;
      if (uVar15 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        uVar13 = 0;
        uVar19 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar19 = uVar13;
        }
        iVar14 = 0;
        do {
          if (uVar19 == uVar13) goto LAB_143d83d0a;
          iVar14 = iVar14 + 0x20;
          uVar15 = puVar6[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar13 = 0;
        iVar14 = 0;
      }
      uVar19 = (ulonglong)(-uVar15 & uVar15);
      uVar1 = uVar19 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar5) {
        iVar5 = iVar2;
      }
    }
    if (iVar5 != iVar2) {
      uVar15 = 0xffffffff;
      local_78 = puVar17;
      do {
        if (((((*(int *)(param_1 + 0x4c) != 0) &&
              (uVar11 = *(uint *)(param_1 + 0x48), -1 < (int)uVar11)) &&
             ((int)uVar11 < DAT_14c9647dc)) &&
            ((plVar12 = (longlong *)
                        ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
             plVar12 != (longlong *)0x0 && ((int)plVar12[2] == *(int *)(param_1 + 0x4c))))) &&
           ((plVar18 = (longlong *)((longlong)iVar5 * 0x18 + *(longlong *)(param_1 + 0x2c8)),
            (*(uint *)(plVar12 + 1) & 0x10200000) == 0 && (lVar16 = *plVar12, lVar16 != 0)))) {
          lVar7 = FUN_141147bae();
          puVar17 = local_78;
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
            plVar20 = (longlong *)(lVar16 + 0x398);
            plVar12 = (longlong *)(**(code **)(*(longlong *)(lVar16 + 0x398) + 0x18))(plVar20);
            puVar17 = local_78;
            if ((*plVar18 != 0) && ((longlong)(int)plVar12[1] != 0)) {
              lVar16 = 0;
              do {
                if (*(longlong *)(*plVar12 + 0x68 + lVar16) == *plVar18) {
                  iVar5 = (int)(lVar16 >> 3) * -0xf0f0f0f;
                  if ((iVar5 != -1) && (lVar16 = *plVar12 + (longlong)iVar5 * 0x88, lVar16 != 0)) {
                    local_60 = plVar18[1];
                    local_58 = 0xffffffff;
                    cVar4 = FUN_1448ec59e(lVar16,&local_60);
                    puVar17 = local_78;
                    if (cVar4 != '\0') {
                      uVar8 = (**(code **)(*plVar20 + 0x18))(plVar20);
                      local_4c = 0;
                      local_60 = plVar18[1];
                      local_58 = 0xffffffff;
                      local_70 = *plVar18;
                      local_68 = 0xffffffff;
                      FUN_140f8b8f2(uVar8,&local_70,&local_60,local_50);
                      puVar17 = local_78;
                    }
                  }
                  break;
                }
                lVar16 = lVar16 + 0x88;
              } while ((longlong)(int)plVar12[1] * 0x88 != lVar16);
            }
          }
        }
        uVar15 = uVar15 & ~(uint)uVar19;
        puVar6 = *(uint **)(param_1 + 0x2e8);
        if (*(uint **)(param_1 + 0x2e8) == (uint *)0x0) {
          puVar6 = puVar17;
        }
        iVar3 = *(int *)(param_1 + 0x2f0);
        iVar5 = (int)uVar13;
        lVar16 = (longlong)iVar5;
        uVar11 = puVar6[lVar16] & uVar15;
        if (uVar11 == 0) {
          iVar9 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar9 = iVar3 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar5) {
            iVar10 = iVar5;
          }
          if (iVar5 < iVar9) {
            lVar7 = 0;
            do {
              uVar11 = puVar6[lVar16 + lVar7 + 1];
              if (uVar11 != 0) {
                uVar13 = (ulonglong)(iVar5 + (int)lVar7 + 1);
                uVar15 = 0xffffffff;
                goto LAB_143d83e40;
              }
              iVar14 = iVar14 + 0x20;
              lVar7 = lVar7 + 1;
            } while (iVar10 - lVar16 != lVar7);
            uVar15 = 0xffffffff;
            iVar5 = iVar10;
          }
          uVar13 = (ulonglong)(iVar5 + 1);
          puVar17 = local_78;
          iVar5 = iVar3;
        }
        else {
LAB_143d83e40:
          uVar19 = (ulonglong)(-uVar11 & uVar11);
          uVar1 = uVar19 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar5) {
            iVar5 = iVar3;
          }
        }
      } while (iVar5 != iVar2);
    }
  }
LAB_143d83d0a:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d8403e FUN_143d8403e body=380 status=ok
// SIG undefined FUN_143d8403e(void)

void FUN_143d8403e(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar6 = *(int *)(*param_1 + 0x4c);
  if (((((iVar6 != 0) && (uVar1 = *(uint *)(*param_1 + 0x48), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar6)))) &&
     (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar4 = *plVar7, lVar4 != 0)))) {
    lVar3 = FUN_141147bae();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      plVar8 = (longlong *)(lVar4 + 0x398);
      plVar7 = (longlong *)(**(code **)(*(longlong *)(lVar4 + 0x398) + 0x18))(plVar8);
      if ((*param_2 != 0) && ((longlong)(int)plVar7[1] != 0)) {
        lVar4 = 0;
        do {
          if (*(longlong *)(*plVar7 + 0x68 + lVar4) == *param_2) {
            iVar6 = (int)(lVar4 >> 3) * -0xf0f0f0f;
            if ((iVar6 != -1) && (*plVar7 + (longlong)iVar6 * 0x88 != 0)) {
              local_38 = *param_3;
              local_30 = 0xffffffff;
              cVar2 = FUN_1448ec59e();
              if (cVar2 != '\0') {
                uVar5 = (**(code **)(*plVar8 + 0x18))(plVar8);
                local_24 = 0;
                local_38 = *param_3;
                local_30 = 0xffffffff;
                local_48 = *param_2;
                local_40 = 0xffffffff;
                FUN_140f8b8f2(uVar5);
              }
            }
            break;
          }
          lVar4 = lVar4 + 0x88;
        } while ((longlong)(int)plVar7[1] * 0x88 != lVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d841d4 FUN_143d841d4 body=284 status=ok
// SIG undefined FUN_143d841d4(void)

void FUN_143d841d4(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_38;
  undefined4 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_3;
  if (*param_2 != lVar3) {
    plVar1 = (longlong *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
      uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
      uVar7 = (uint)lVar3 & 0xffff;
      lVar6 = param_1 + 0x58;
      if (*(longlong *)(param_1 + 0x60) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x60);
      }
      iVar5 = *(int *)(lVar6 + (ulonglong)
                               (*(int *)(param_1 + 0x68) - 1U &
                               (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                               (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar5 != -1) {
        do {
          if (*(longlong *)(*plVar1 + (longlong)iVar5 * 0x20) == lVar3) goto LAB_143d841f5;
          iVar5 = *(int *)((longlong)iVar5 * 0x20 + *plVar1 + 0x18);
        } while (iVar5 != -1);
      }
    }
    FUN_1488b600e(plVar1,&local_38,param_2);
    if ((longlong)(int)local_38 != -1) {
      puVar2 = (undefined4 *)(*plVar1 + 8 + (longlong)(int)local_38 * 0x20);
      local_48 = *puVar2;
      uStack_44 = puVar2[1];
      uStack_40 = puVar2[2];
      uStack_3c = puVar2[3];
      FUN_145a1e60a(plVar1);
      local_38 = param_3;
      local_30 = &local_48;
      FUN_1488b609e(plVar1,local_24,&local_38,0);
    }
  }
LAB_143d841f5:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d842f2 FUN_143d842f2 body=440 status=ok
// SIG undefined FUN_143d842f2(void)

void FUN_143d842f2(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  uint *puVar8;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  undefined *local_90;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1488b5e7c(param_1 + 0x80);
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar2 = *param_2;
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar4 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x60);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x20) == lVar2) {
          puVar8 = (uint *)(lVar4 + 8);
          if (puVar8 != (uint *)0x0 && lVar4 != 0) {
            if (param_3 == '\0') {
              local_68 = 0;
              local_58 = &PTR_LAB_14b40e760;
              local_78 = &LAB_143d89616;
              local_a8 = 0;
              local_98 = &PTR_LAB_14b40e740;
              local_90 = &DAT_143d89614;
              local_b8 = &LAB_1488b61fe;
              local_c8 = 1;
              local_50 = param_1;
              cVar3 = FUN_145a163cc(param_1,puVar8);
              if (cVar3 != '\0') goto LAB_143d8449b;
            }
            if ((((*(int *)(lVar4 + 0xc) != 0) && (uVar1 = *puVar8, -1 < (int)uVar1)) &&
                ((int)uVar1 < DAT_14c9647dc)) &&
               (((plVar7 = (longlong *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(lVar4 + 0xc))) &&
                (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))))) {
              FUN_140aeefbc(*plVar7,0,1);
            }
LAB_143d8449b:
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_e8);
          }
          break;
        }
        iVar6 = *(int *)(lVar4 + 0x18);
      } while (iVar6 != -1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d844c6 FUN_143d844c6 body=105 status=ok
// SIG undefined FUN_143d844c6(void)

void FUN_143d844c6(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if ((((param_2 == 0) && (*(int *)(param_1 + 0xc) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0xc))) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      FUN_14132cab0(param_1);
    }
  }
  FUN_141245f18(param_1,param_2);
  return;
}



// FUNCTION 143d84568 FUN_143d84568 body=1380 status=ok
// SIG undefined FUN_143d84568(void)

longlong * FUN_143d84568(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  double dVar5;
  double _X;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  undefined8 *puVar10;
  double *pdVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_1d8 [32];
  undefined **local_1b8;
  double local_1a8 [2];
  undefined1 local_198 [16];
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined2 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar14 = *param_1;
  *param_2 = 0;
  param_2[1] = 0;
  lVar7 = (longlong)*(int *)(lVar14 + 0x30);
  if (lVar7 != 0) {
    lVar14 = *(longlong *)(lVar14 + 0x28);
    lVar7 = lVar7 * 0xc0 + lVar14;
    do {
      if ((longlong)*(int *)(param_3 + 1) != 0) {
        plVar13 = (longlong *)*param_3;
        lVar4 = *(longlong *)(lVar14 + 0x70);
        lVar8 = (longlong)*(int *)(param_3 + 1) * 0x28;
        do {
          if (*plVar13 == lVar4) {
            if (plVar13 != (longlong *)0x0) {
              if ((char)plVar13[1] == '\x01') {
                pdVar9 = (double *)(lVar14 + 0x10);
                pdVar11 = local_1a8;
                for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
                  *pdVar11 = *pdVar9;
                  pdVar9 = pdVar9 + 1;
                  pdVar11 = pdVar11 + 1;
                }
                local_1b8 = &PTR_FUN_14b280690;
                local_138 = 0;
                local_140 = *(undefined8 *)(lVar14 + 0x78);
                local_130 = 0;
                local_148 = lVar4;
                uVar6 = FUN_14477b664(*(undefined8 *)(lVar14 + 0x80));
                local_138 = FUN_14477b664(uVar6);
                local_130 = *(undefined8 *)(lVar14 + 0x88);
                local_128 = *(undefined2 *)(lVar14 + 0x90);
                local_118 = 0;
                local_120 = *(undefined8 *)(lVar14 + 0x98);
                local_110 = 0;
                uVar6 = FUN_14477b664(*(undefined8 *)(lVar14 + 0xa0));
                local_118 = FUN_14477b664(uVar6);
                local_110 = *(undefined8 *)(lVar14 + 0xa8);
                local_108 = *(undefined8 *)(lVar14 + 0xb0);
                auVar2 = *(undefined1 (*) [16])(plVar13 + 2);
                auVar21._12_4_ = 0x40768000;
                auVar21._0_12_ = ZEXT812(0x4076800000000000);
                auVar21 = divpd(auVar2,auVar21);
                auVar22._8_8_ = 0;
                auVar22._0_8_ = plVar13[4];
                auVar23._12_4_ = 0x40768000;
                auVar23._0_12_ = ZEXT812(0x4076800000000000);
                auVar23 = divpd(auVar22,auVar23);
                auVar21 = roundpd(auVar21,auVar21,3);
                auVar23 = roundpd(auVar23,auVar23,3);
                dVar18 = (auVar2._0_8_ - auVar21._0_8_ * 360.0) * 0.008726646259971648;
                dVar19 = (auVar2._8_8_ - auVar21._8_8_ * 360.0) * 0.008726646259971648;
                dVar5 = ((double)plVar13[4] - auVar23._0_8_ * 360.0) * 0.008726646259971648;
                _X = (0.0 - auVar23._8_8_ * 360.0) * 0.008726646259971648;
                dVar15 = sin(dVar18);
                dVar16 = sin(dVar19);
                dVar17 = sin(dVar5);
                sin(_X);
                dVar18 = cos(dVar18);
                dVar19 = cos(dVar19);
                dVar20 = cos(dVar5);
                cos(_X);
                dVar5 = dVar16 * dVar15 * dVar17 + dVar19 * dVar18 * dVar20;
                local_1a8[0] = dVar15 * dVar16 * dVar20 - dVar18 * dVar19 * dVar17;
                local_1a8[1] = -(dVar15 * dVar19 * dVar20) - dVar18 * dVar16 * dVar17;
                local_198._8_4_ = SUB84(dVar5,0);
                local_198._0_8_ = -(dVar19 * dVar15 * dVar17) + dVar16 * dVar18 * dVar20;
                local_198._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
                iVar3 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar3 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
                  FUN_1488b2094(param_2,iVar3);
                }
                lVar4 = *param_2;
                puVar1 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0xc0);
                *puVar1 = &PTR_FUN_14b27fdf0;
                pdVar9 = local_1a8;
                pdVar11 = (double *)(puVar1 + 2);
                for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
                  *pdVar11 = *pdVar9;
                  pdVar9 = pdVar9 + 1;
                  pdVar11 = pdVar11 + 1;
                }
                *puVar1 = &PTR_FUN_14b280690;
                puVar1[0xe] = local_148;
                lVar4 = lVar4 + 0x78 + (longlong)iVar3 * 0xc0;
                FUN_145ca4232(lVar4,&local_140);
                *(undefined2 *)(lVar4 + 0x18) = local_128;
                *(undefined8 *)(lVar4 + 0x20) = 0;
                *(undefined8 *)(lVar4 + 0x28) = 0;
                *(undefined8 *)(lVar4 + 0x30) = 0;
                *(undefined8 *)(lVar4 + 0x20) = local_120;
                uVar6 = FUN_14477b664(local_118);
                uVar6 = FUN_14477b664(uVar6);
                *(undefined8 *)(lVar4 + 0x28) = uVar6;
                *(undefined8 *)(lVar4 + 0x30) = local_110;
                *(undefined8 *)(lVar4 + 0x38) = local_108;
              }
              else {
                iVar3 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar3 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
                  FUN_1488b2094(param_2,iVar3);
                }
                lVar4 = *param_2;
                puVar1 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0xc0);
                *puVar1 = &PTR_FUN_14b27fdf0;
                puVar10 = (undefined8 *)(lVar14 + 0x10);
                puVar12 = puVar1 + 2;
                for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
                  *puVar12 = *puVar10;
                  puVar10 = puVar10 + 1;
                  puVar12 = puVar12 + 1;
                }
                *puVar1 = &PTR_FUN_14b280690;
                puVar1[0xe] = *(undefined8 *)(lVar14 + 0x70);
                lVar4 = lVar4 + (longlong)iVar3 * 0xc0;
                FUN_145ca4232(lVar4 + 0x78,lVar14 + 0x78);
                *(undefined2 *)(lVar4 + 0x90) = *(undefined2 *)(lVar14 + 0x90);
                *(undefined8 *)(lVar4 + 0x98) = 0;
                *(undefined8 *)(lVar4 + 0xa0) = 0;
                *(undefined8 *)(lVar4 + 0xa8) = 0;
                *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(lVar14 + 0x98);
                uVar6 = FUN_14477b664(*(undefined8 *)(lVar14 + 0xa0));
                uVar6 = FUN_14477b664(uVar6);
                *(undefined8 *)(lVar4 + 0xa0) = uVar6;
                *(undefined8 *)(lVar4 + 0xa8) = *(undefined8 *)(lVar14 + 0xa8);
                *(undefined8 *)(lVar4 + 0xb0) = *(undefined8 *)(lVar14 + 0xb0);
              }
            }
            break;
          }
          plVar13 = plVar13 + 5;
          lVar8 = lVar8 + -0x28;
        } while (lVar8 != 0);
      }
      lVar14 = lVar14 + 0xc0;
    } while (lVar14 != lVar7);
  }
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143d84ace FUN_143d84ace body=1968 status=ok
// SIG undefined FUN_143d84ace(void)

void FUN_143d84ace(longlong *param_1,code *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,uint *param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined2 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  code **local_130;
  undefined1 *local_128;
  code *local_120;
  undefined8 *local_118;
  int local_110;
  undefined4 uStack_10c;
  code *local_108;
  longlong local_100;
  longlong local_f8;
  longlong lStack_f0;
  undefined8 local_e8 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((param_1 == (longlong *)0x0) || (lVar8 = (**(code **)(*param_1 + 0x180))(), lVar8 == 0))
  goto LAB_143d84d3e;
  lVar12 = param_3[1];
  if (lVar12 == 0) {
    uVar10 = FUN_1458f96d4();
    lVar12 = FUN_14477b664(uVar10);
    param_3[1] = lVar12;
  }
  lVar13 = param_3[2];
  if (lVar13 == 0) {
    if ((lVar12 == 0) || (*param_3 == 0)) goto LAB_143d84d3e;
    plVar16 = *(longlong **)(lVar12 + 0xb8);
    if ((plVar16 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar6 == '\0')) {
      param_3[2] = 0;
      goto LAB_143d84d3e;
    }
    uVar10 = (**(code **)(*plVar16 + 0x110))(plVar16);
    lVar13 = FUN_144aff482(uVar10,param_3);
    param_3[2] = lVar13;
    if (lVar13 == 0) goto LAB_143d84d3e;
  }
  if (DAT_14caf9cd0 == 0) {
    local_130 = &local_108;
    local_108 = FUN_141030f22;
    local_120 = FUN_14081d0ea;
    local_128 = &LAB_1463c0cc2;
    local_138 = &LAB_147c9db5b;
    local_140 = &LAB_1463f9c44;
    local_148 = &DAT_149e063b2;
    local_150 = 0x2000000000;
    local_158 = 0x10000004;
    local_160 = 8;
    local_168 = 0x958;
    FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
  }
  if ((*(int *)(param_1[2] + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8)
      != DAT_14caf9cd0 + 0x30)) {
    lVar9 = FUN_141147bae();
    lVar12 = param_1[2];
    iVar7 = *(int *)(lVar12 + 0x38);
    if ((iVar7 < *(int *)(lVar9 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
        lVar9 + 0x30)) {
      if (DAT_14cb5b388 == 0) {
        local_130 = &local_108;
        local_108 = FUN_141864c34;
        local_120 = FUN_14081d0ea;
        local_128 = &LAB_146431698;
        local_138 = &LAB_1486775cb;
        local_140 = &LAB_1464cee35;
        local_148 = &DAT_149e063b2;
        local_150 = 0;
        local_158 = 0x10000005;
        local_160 = 0x10;
        local_168 = 0x3a20;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
        lVar12 = param_1[2];
        iVar7 = *(int *)(lVar12 + 0x38);
      }
      if ((iVar7 < *(int *)(DAT_14cb5b388 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8)
          != DAT_14cb5b388 + 0x30)) goto LAB_143d84bc2;
      lVar12 = (**(code **)(*param_1 + 0x5e8))(param_1);
    }
    else if (*(int *)((longlong)param_1 + 0x3ec) == 0) {
LAB_143d84bc2:
      lVar12 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x7d);
      lVar12 = 0;
      if ((-1 < (int)uVar3) && (lVar12 = 0, (int)uVar3 < DAT_14c9647dc)) {
        plVar16 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar16 == (longlong *)0x0) ||
           (((int)plVar16[2] != *(int *)((longlong)param_1 + 0x3ec) ||
            ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)))) goto LAB_143d84bc2;
        lVar12 = *plVar16;
      }
    }
  }
  else {
    lVar12 = param_1[0x73];
  }
  lVar9 = param_5[1];
  if (lVar9 == 0) {
    uVar10 = FUN_140927942();
    lVar9 = FUN_14477b664(uVar10);
    param_5[1] = lVar9;
  }
  lVar11 = param_5[2];
  if (lVar11 == 0) {
    lVar11 = 0;
    if ((lVar9 != 0) && (*param_5 != 0)) {
      plVar16 = *(longlong **)(lVar9 + 0xb8);
      if ((plVar16 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar6 == '\0')) {
        lVar11 = 0;
      }
      else {
        uVar10 = (**(code **)(*plVar16 + 0x110))(plVar16);
        lVar11 = FUN_144aff482(uVar10,param_5);
      }
      param_5[2] = lVar11;
    }
    bVar17 = lVar11 != 0;
    if (lVar12 == 0 && lVar11 == 0) goto LAB_143d84d3e;
  }
  else {
    bVar17 = true;
  }
  local_108 = DAT_14caa8578;
  local_f8 = 0;
  lStack_f0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_58 = 0;
  puVar15 = local_e8;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar15 = *param_4;
    param_4 = param_4 + 1;
    puVar15 = puVar15 + 1;
  }
  if (DAT_14caa8578 != param_2) {
    local_108 = param_2;
  }
  if ((!bVar17) && (lVar11 = local_f8, lVar12 != 0)) {
    lStack_f0 = lVar12;
  }
  local_f8 = lVar11;
  local_100 = lVar13;
  if ((((((*(longlong *)(param_6 + 2) != 0) && (param_6[1] != 0)) &&
        (uVar3 = *param_6, -1 < (int)uVar3)) &&
       (((int)uVar3 < DAT_14c9647dc &&
        (plVar16 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
        plVar16 != (longlong *)0x0)))) &&
      ((*(uint *)(plVar16 + 2) == param_6[1] &&
       (((*(uint *)(plVar16 + 1) & 0x10200000) == 0 && (*plVar16 != 0)))))) &&
     (lVar12 = FUN_1400796d0(*(undefined8 *)(*plVar16 + 0x10),*(longlong *)(param_6 + 2),1),
     lVar12 != 0)) {
    uVar10 = *(undefined8 *)param_6;
    uVar4 = *(undefined8 *)(param_6 + 2);
    local_118 = (undefined8 *)0x0;
    local_110 = 0;
    FUN_1446efa72(&local_118,0,3,0x10);
    puVar15 = local_118;
    local_110 = 3;
    *local_118 = &PTR_LAB_14b40e8d0;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    local_118[2] = lVar13;
    *local_118 = &PTR_FUN_14b40e860;
    local_118[3] = 0;
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_118 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar7 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar7 = *(int *)(lVar12 + 0x10);
      bVar17 = iVar7 == 0;
      if (bVar17) {
        *(int *)(lVar12 + 0x10) = iVar14;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar7 = iVar14;
      }
    }
    iVar14 = local_110;
    puVar5 = local_118;
    *(int *)((longlong)puVar15 + 0x1c) = iVar7;
    puVar15[4] = uVar10;
    puVar15[5] = uVar4;
    local_118 = (undefined8 *)0x0;
    local_110 = 0;
    if (local_58 == 0) {
LAB_143d84f6c:
      if (CONCAT44(uStack_5c,local_60) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar15 = (undefined8 *)CONCAT44(uStack_5c,local_60);
      if (puVar15 != (undefined8 *)0x0) {
        (**(code **)*puVar15)(puVar15,0);
        FUN_1446efa72(&local_60,0,0,0x10);
        local_58 = 0;
        goto LAB_143d84f6c;
      }
    }
    local_60 = SUB84(puVar5,0);
    uStack_5c = (undefined4)((ulonglong)puVar5 >> 0x20);
    local_58 = iVar14;
    if (local_110 != 0) {
      if (local_118 == (undefined8 *)0x0) goto LAB_143d84fd7;
      (**(code **)*local_118)(local_118,0);
      FUN_1446efa72(&local_118,0,0,0x10);
      local_110 = 0;
    }
    if (local_118 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143d84fd7:
  FUN_14132b09a(&local_118,lVar8);
  plVar16 = (longlong *)CONCAT44(uStack_10c,local_110);
  if (plVar16 != (longlong *)0x0) {
    iVar7 = (int)plVar16[1];
    do {
      if (iVar7 == 0) {
        plVar16 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar14 = (int)plVar16[1];
      bVar17 = iVar7 == iVar14;
      if (bVar17) {
        *(int *)(plVar16 + 1) = iVar7 + 1;
        iVar14 = iVar7;
      }
      iVar7 = iVar14;
      UNLOCK();
    } while (!bVar17);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_10c,local_110) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_10c,local_110) + 0x10))();
    }
    if (plVar16 != (longlong *)0x0) {
      if (local_118 != (undefined8 *)0x0) {
        FUN_14144ff90(local_118,&local_108);
      }
      LOCK();
      plVar2 = plVar16 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
  }
  FUN_145a1457c(&local_108);
LAB_143d84d3e:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d85280 FUN_143d85280 body=223 status=ok
// SIG undefined FUN_143d85280(void)

void FUN_143d85280(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_2;
  if ((((param_1 != (longlong *)0x0) && (DAT_14caa8578 != param_2)) &&
      (lVar5 = (**(code **)(*param_1 + 0x180))(), lVar5 != 0)) &&
     (FUN_14132b09a(&local_28,lVar5), local_20 != (longlong *)0x0)) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if ((local_28 != 0) && (lVar5 = FUN_1488ae41c(local_28,&local_18), lVar5 != 0)) {
        FUN_1488ae07e(lVar5 + 0x640);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d85360 FUN_143d85360 body=69 status=ok
// SIG undefined FUN_143d85360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d85360(void)

{
  _DAT_14cb80e98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d853a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb80ea0,1);
  return;
}



// FUNCTION 143d853a5 FUN_143d853a5 body=69 status=ok
// SIG undefined FUN_143d853a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d853a5(void)

{
  _DAT_14cb80eb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d853e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb80eb8,1);
  return;
}



// FUNCTION 143d853ea FUN_143d853ea body=457 status=ok
// SIG undefined FUN_143d853ea(void)

void FUN_143d853ea(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 300) != 0) {
    uVar1 = *(uint *)(param_1 + 0x128);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar2 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar2 != (longlong *)0x0) &&
         ((((int)plVar2[2] == *(int *)(param_1 + 300) && ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)
           ) && (*plVar2 != 0)))) {
        lVar3 = 0;
        if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
          lVar3 = *plVar2;
        }
        plVar2 = (longlong *)(**(code **)(*(longlong *)(lVar3 + 0x520) + 0xa8))(lVar3 + 0x520,0);
        if (plVar2 != (longlong *)0x0) {
          if (DAT_14cad2858 == 0) {
            local_40 = &local_20;
            local_20 = FUN_144a7958c;
            local_30 = FUN_14081d0ea;
            local_38 = &LAB_146395584;
            local_48 = &LAB_147a0ba80;
            local_50 = &LAB_14575ccce;
            local_58 = L"Engine";
            local_60 = 0x40000000000;
            local_68 = 0x10000004;
            local_70 = 0x10;
            local_78 = 0x1180;
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
          }
          if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
              DAT_14cad2858 + 0x30)) {
            (**(code **)(*plVar2 + 0xa18))(plVar2,0);
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d855c8 FUN_143d855c8 body=572 status=ok
// SIG undefined FUN_143d855c8(void)

void FUN_143d855c8(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_118 [32];
  code *local_f8;
  undefined8 local_e8;
  undefined **local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((*(longlong *)(param_1 + 0xd8) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0xd8) + 0x38) == '\x01')) &&
     (FUN_143d853ea(), *param_2 != 0)) {
    if ((longlong)(int)param_2[3] != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(param_2[2] + lVar5) == 0) goto LAB_143d8566f;
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)param_2[3] * 8 != lVar5);
    }
    if ((((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1))
        && (((int)uVar1 < DAT_14c9647dc &&
            ((puVar6 = (undefined8 *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             puVar6 != (undefined8 *)0x0 && (*(int *)(puVar6 + 2) == *(int *)(param_1 + 0x1c)))))))
       && ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar6;
      }
      else {
        uVar3 = 0;
      }
      lVar5 = FUN_1447210f0(uVar3);
      if (lVar5 != 0) {
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_88 = 0x800000100;
        local_78 = 0;
        local_68 = (longlong *)0x0;
        lVar8 = *(longlong *)(param_1 + 0xd8);
        uVar3 = FUN_141089c88();
        lVar5 = FUN_141037e38(lVar5,uVar3,lVar8 + 0x50,&local_b8);
        if (local_78 != 0) {
          plVar4 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar4 = local_58;
          }
          (**(code **)(*plVar4 + 0x10))();
        }
        if (lVar5 != 0) {
          local_c0 = *(undefined8 *)(param_1 + 0xd8);
          *(undefined1 *)(lVar5 + 0x530) = 1;
          lVar8 = 0;
          *(undefined8 *)(lVar5 + 0x534) = 0;
          local_e8 = 0;
          local_d8 = &PTR_LAB_14b40e9b0;
          local_f8 = FUN_143d8a7f4;
          local_d0 = param_1;
          local_c8 = lVar5;
          FUN_140f6405a(lVar5,param_2);
          uVar1 = *(uint *)(lVar5 + 0xc);
          *(uint *)(param_1 + 0x128) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          iVar2 = *(int *)(lVar8 + 0x10);
          if (*(int *)(lVar8 + 0x10) == 0) {
            LOCK();
            iVar2 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar9 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar2;
            if (bVar9) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar2 = *(int *)(lVar8 + 0x10);
            bVar9 = iVar2 == 0;
            if (bVar9) {
              *(int *)(lVar8 + 0x10) = iVar7;
              iVar2 = 0;
            }
            UNLOCK();
            if (bVar9) {
              iVar2 = iVar7;
            }
          }
          *(int *)(param_1 + 300) = iVar2;
        }
      }
    }
  }
LAB_143d8566f:
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d85806 FUN_143d85806 body=1003 status=ok
// SIG undefined FUN_143d85806(void)

void FUN_143d85806(longlong param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  double *pdVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  double *pdVar12;
  double *pdVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(longlong *)(param_1 + 0xd8) != 0) && (lVar6 = FUN_140c8331a(), lVar6 != 0)) {
    lVar8 = *(longlong *)(param_1 + 0xd8);
    if (*(int *)(lVar8 + 0x30) == 0) {
      if (*(char *)(lVar8 + 0x38) != '\x01') goto LAB_143d85b87;
      pdVar9 = (double *)(lVar8 + 0x70);
      pdVar12 = (double *)(lVar8 + 0x80);
    }
    else {
      pdVar9 = (double *)(*(longlong *)(lVar8 + 0x28) + 0x30);
      pdVar12 = (double *)(*(longlong *)(lVar8 + 0x28) + 0x40);
    }
    dVar15 = *(double *)(lVar8 + 0xd0);
    dVar16 = *(double *)(lVar8 + 0xd8);
    dVar17 = *(double *)(lVar8 + 0xe0);
    dVar18 = *(double *)(lVar8 + 0xe8);
    dVar20 = *(double *)(lVar8 + 0xf0);
    dVar21 = *(double *)(lVar8 + 0xf8);
    uVar23 = *(undefined4 *)(lVar8 + 0x100);
    uVar24 = *(undefined4 *)(lVar8 + 0x104);
    uVar25 = *(undefined4 *)(lVar8 + 0x108);
    uVar26 = *(undefined4 *)(lVar8 + 0x10c);
    local_c8 = *(double *)(lVar8 + 0x120);
    dStack_c0 = *(double *)(lVar8 + 0x128);
    local_d8 = *(double *)(lVar8 + 0x110);
    dStack_d0 = *(double *)(lVar8 + 0x118);
    uVar19 = *(undefined4 *)(lVar8 + 0x13c);
    if ((longlong)*(int *)(lVar8 + 0xa08) != 0) {
      pdVar13 = (double *)(*(longlong *)(lVar8 + 0xa00) + 0x10);
      lVar14 = 0;
      do {
        if ((*(double *)(param_1 + 0xe0) != 0.0) && (pdVar13[0xc] == *(double *)(param_1 + 0xe0))) {
          lVar14 = *(longlong *)(lVar8 + 0xa00) - lVar14;
          if (lVar14 != 0) {
            dVar15 = *pdVar13;
            dVar16 = pdVar13[1];
            dVar17 = pdVar13[2];
            dVar18 = pdVar13[3];
            dVar20 = pdVar13[4];
            dVar21 = pdVar13[5];
            uVar23 = *(undefined4 *)(pdVar13 + 6);
            uVar24 = *(undefined4 *)((longlong)pdVar13 + 0x34);
            uVar25 = *(undefined4 *)(pdVar13 + 7);
            uVar26 = *(undefined4 *)((longlong)pdVar13 + 0x3c);
            local_c8 = pdVar13[10];
            dStack_c0 = pdVar13[0xb];
            local_d8 = pdVar13[8];
            dStack_d0 = pdVar13[9];
            puVar7 = (undefined4 *)(lVar8 + 0x13c);
            if (*(char *)(pdVar13 + 0xd) != '\0') {
              puVar7 = (undefined4 *)(lVar14 + 0x7c);
            }
            uVar19 = *puVar7;
          }
          break;
        }
        pdVar13 = pdVar13 + 0x10;
        lVar14 = lVar14 + -0x80;
      } while (-lVar14 != (longlong)*(int *)(lVar8 + 0xa08) * 0x80);
    }
    if (*(longlong *)(lVar6 + 0x3c0) != 0) {
      dVar3 = dVar15 * 1.0 - dVar16 * 0.0;
      dVar22 = dVar16 * 0.0 - dVar17 * 1.0;
      dVar5 = dVar17 * 0.0 - dVar15 * 0.0;
      dVar3 = dVar3 + dVar3;
      dVar22 = dVar22 + dVar22;
      dVar5 = dVar5 + dVar5;
      dVar4 = dVar18 * dVar3 + 0.0 + (dVar5 * dVar15 - dVar16 * dVar22);
      dVar2 = (dVar3 * dVar16 - dVar17 * dVar5) + dVar18 * dVar22 + 0.0;
      dVar3 = (dVar22 * dVar17 - dVar3 * dVar15) + dVar18 * dVar5 + 1.0;
      dVar22 = (double)(float)((*pdVar12 - (double)CONCAT44(uVar24,uVar23)) * dVar4 +
                              (*pdVar9 - dVar20) * dVar2 + (pdVar9[1] - dVar21) * dVar3);
      dVar21 = dVar3 * dVar22 + dVar21;
      *(undefined1 *)(lVar6 + 0x524) = 0;
      *(undefined4 *)(lVar6 + 0x520) = 0;
      *(undefined4 *)(lVar6 + 0x4a0) = *(undefined4 *)(*(longlong *)(lVar6 + 0x3c0) + 0x38c);
      puVar10 = &DAT_14c846480;
      if (*(longlong *)(lVar6 + 0x1c8) != 0) {
        puVar10 = (undefined8 *)(*(longlong *)(lVar6 + 0x1c8) + 0x240);
      }
      puVar11 = (undefined8 *)(lVar6 + 0x440);
      for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      *(double *)(lVar6 + 0x4b0) = dVar15;
      *(double *)(lVar6 + 0x4b8) = dVar16;
      *(double *)(lVar6 + 0x4c0) = dVar17;
      *(double *)(lVar6 + 0x4c8) = dVar18;
      auVar1._8_4_ = SUB84(dVar21,0);
      auVar1._0_8_ = dVar2 * dVar22 + dVar20;
      auVar1._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      *(undefined1 (*) [16])(lVar6 + 0x4d0) = auVar1;
      *(double *)(lVar6 + 0x4e0) = dVar4 * dVar22 + (double)CONCAT44(uVar24,uVar23);
      *(double *)(lVar6 + 0x4e8) = (double)CONCAT44(uVar26,uVar25) + 0.0;
      *(double *)(lVar6 + 0x4f0) = local_d8;
      *(double *)(lVar6 + 0x4f8) = dStack_d0;
      *(double *)(lVar6 + 0x500) = local_c8;
      *(double *)(lVar6 + 0x508) = dStack_c0;
      *(undefined4 *)(lVar6 + 0x510) = uVar19;
    }
    FUN_1446f470e(&local_e0,L"CustomCameraMode",1);
    *(undefined8 *)(param_1 + 0xe0) = local_e0;
  }
LAB_143d85b87:
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d85bf2 FUN_143d85bf2 body=1411 status=ok
// SIG undefined FUN_143d85bf2(void)

void FUN_143d85bf2(longlong param_1)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  undefined8 *puVar22;
  int iVar23;
  undefined8 *puVar24;
  bool bVar25;
  float fVar26;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  iVar19 = *(int *)(param_1 + 0x118);
  if (1 < (longlong)iVar19) {
    lVar4 = *(longlong *)(param_1 + 0x110);
    memset(local_348,0,0x2f0);
    local_350 = lVar4 + (longlong)iVar19 * 0x14 + -0x14;
    local_358 = lVar4;
    fVar26 = logf((float)iVar19);
    local_348[0] = (int)(longlong)(fVar26 + fVar26);
    plVar10 = &local_358;
    do {
      puVar15 = (undefined8 *)*plVar10;
      puVar14 = (undefined8 *)plVar10[1];
      iVar19 = (int)plVar10[2];
      iVar23 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar15) >> 2) * -0x33333333;
      uVar20 = iVar23 + 1;
      puVar16 = puVar15;
      puVar11 = puVar15;
      puVar18 = puVar14;
      if (iVar19 != 0) {
LAB_143d85ca4:
        if (8 < (int)uVar20) {
          uVar17 = (ulonglong)(uVar20 >> 1);
          uVar3 = *(undefined4 *)((longlong)puVar16 + uVar17 * 0x14 + 0x10);
          puVar11 = (undefined8 *)((longlong)puVar16 + uVar17 * 0x14);
          uVar5 = *puVar11;
          uVar6 = puVar11[1];
          *(undefined4 *)((longlong)puVar16 + uVar17 * 0x14 + 0x10) = *(undefined4 *)(puVar16 + 2);
          uVar7 = puVar16[1];
          puVar11 = (undefined8 *)((longlong)puVar16 + uVar17 * 0x14);
          *puVar11 = *puVar16;
          puVar11[1] = uVar7;
          *(undefined4 *)(puVar16 + 2) = uVar3;
          *puVar16 = uVar5;
          puVar16[1] = uVar6;
          puVar24 = (undefined8 *)((longlong)puVar18 + 0x14);
          puVar11 = puVar16;
          do {
            puVar8 = (undefined8 *)((longlong)puVar11 + 0x14);
            puVar9 = (undefined8 *)((longlong)puVar11 + 0x14);
            do {
              puVar11 = puVar9;
              puVar12 = puVar8;
              if (puVar18 < puVar11) break;
              puVar8 = (undefined8 *)((longlong)puVar12 + 0x14);
              puVar9 = (undefined8 *)((longlong)puVar11 + 0x14);
            } while (*(ushort *)(puVar11 + 2) <= *(ushort *)(puVar16 + 2));
            puVar8 = puVar24 + -5;
            do {
              puVar9 = puVar24;
              puVar22 = puVar8;
              puVar24 = (undefined8 *)((longlong)puVar9 + -0x14);
              if (puVar24 <= puVar16) break;
              puVar8 = (undefined8 *)((longlong)puVar22 + -0x14);
            } while (*(ushort *)(puVar16 + 2) <= *(ushort *)((longlong)puVar9 + -4));
            if (puVar24 < puVar11) goto code_r0x000143d85d5a;
            uVar3 = *(undefined4 *)(puVar11 + 2);
            uVar5 = *puVar11;
            uVar6 = puVar11[1];
            *(undefined4 *)(puVar11 + 2) = *(undefined4 *)((longlong)puVar9 + -4);
            uVar7 = *(undefined8 *)((longlong)puVar9 + -0xc);
            *puVar11 = *puVar24;
            puVar11[1] = uVar7;
            *(undefined4 *)((longlong)puVar9 + -4) = uVar3;
            *puVar24 = uVar5;
            *(undefined8 *)((longlong)puVar9 + -0xc) = uVar6;
          } while( true );
        }
        for (; puVar14 = puVar16, puVar15 = puVar16, puVar16 < puVar18;
            puVar18 = (undefined8 *)((longlong)puVar18 + -0x14)) {
          while (puVar11 = puVar14, puVar15 = (undefined8 *)((longlong)puVar15 + 0x14),
                puVar15 <= puVar18) {
            puVar14 = puVar15;
            if (*(ushort *)(puVar15 + 2) <= *(ushort *)(puVar11 + 2)) {
              puVar14 = puVar11;
            }
          }
          local_48 = *(undefined4 *)(puVar11 + 2);
          local_58 = *puVar11;
          uStack_50 = puVar11[1];
          uVar6 = local_58;
          uVar7 = uStack_50;
          *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar18 + 2);
          uVar5 = puVar18[1];
          *puVar11 = *puVar18;
          puVar11[1] = uVar5;
          *(undefined4 *)(puVar18 + 2) = local_48;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar18 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar18 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_50._4_4_;
          local_58 = uVar6;
          uStack_50 = uVar7;
        }
        goto LAB_143d85e81;
      }
LAB_143d85ebd:
      if (uVar20 != 0) {
        iVar19 = (iVar23 - (iVar23 + -1 >> 0x1f)) + -1 >> 1;
        iVar23 = iVar19;
joined_r0x000143d85ee0:
        do {
          iVar21 = iVar19 * 2 + 1;
          if (iVar21 < (int)uVar20) {
            iVar13 = iVar19 * 2 + 2;
            if ((iVar13 < (int)uVar20) &&
               (*(ushort *)((longlong)puVar11 + (longlong)iVar21 * 0x14 + 0x10) <=
                *(ushort *)((longlong)puVar11 + (longlong)iVar13 * 0x14 + 0x10))) {
              iVar21 = iVar13;
            }
            if (*(ushort *)((longlong)puVar11 + (longlong)iVar19 * 0x14 + 0x10) <
                *(ushort *)((longlong)puVar11 + (longlong)iVar21 * 0x14 + 0x10)) {
              puVar18 = (undefined8 *)((longlong)puVar11 + (longlong)iVar19 * 0x14);
              puVar15 = (undefined8 *)((longlong)puVar11 + (longlong)iVar21 * 0x14);
              local_48 = *(undefined4 *)(puVar18 + 2);
              local_58 = *puVar18;
              uStack_50 = puVar18[1];
              uVar6 = local_58;
              uVar7 = uStack_50;
              *(undefined4 *)(puVar18 + 2) = *(undefined4 *)(puVar15 + 2);
              uVar5 = puVar15[1];
              *puVar18 = *puVar15;
              puVar18[1] = uVar5;
              *(undefined4 *)(puVar15 + 2) = local_48;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              *(undefined4 *)puVar15 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar15 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_50._4_4_;
              local_58 = uVar6;
              uStack_50 = uVar7;
              iVar19 = iVar21;
              goto joined_r0x000143d85ee0;
            }
          }
          bVar25 = iVar23 != 0;
          iVar19 = iVar23 + -1;
          iVar23 = iVar19;
        } while (bVar25);
        if (1 < (int)uVar20) {
          uVar17 = (ulonglong)uVar20 - 1;
          local_48 = *(undefined4 *)(puVar11 + 2);
          local_58 = *puVar11;
          uStack_50 = puVar11[1];
          uVar6 = local_58;
          uVar7 = uStack_50;
          *(undefined4 *)(puVar11 + 2) = *(undefined4 *)((longlong)puVar11 + uVar17 * 0x14 + 0x10);
          puVar18 = (undefined8 *)((longlong)puVar11 + uVar17 * 0x14);
          uVar5 = puVar18[1];
          *puVar11 = *puVar18;
          puVar11[1] = uVar5;
          *(undefined4 *)((longlong)puVar11 + uVar17 * 0x14 + 0x10) = local_48;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          puVar2 = (undefined4 *)((longlong)puVar11 + uVar17 * 0x14);
          *puVar2 = (undefined4)local_58;
          puVar2[1] = local_58._4_4_;
          puVar2[2] = (undefined4)uStack_50;
          puVar2[3] = uStack_50._4_4_;
          local_58 = uVar6;
          uStack_50 = uVar7;
          if (uVar20 != 2) {
            do {
              iVar19 = 0;
              iVar21 = 1;
              iVar23 = 0;
              do {
                iVar19 = iVar19 + 2;
                iVar13 = iVar21;
                if (((longlong)iVar19 < (longlong)uVar17) &&
                   (*(ushort *)((longlong)puVar11 + (longlong)iVar21 * 0x14 + 0x10) <=
                    *(ushort *)((longlong)puVar11 + (longlong)iVar19 * 0x14 + 0x10))) {
                  iVar13 = iVar19;
                }
                if (*(ushort *)((longlong)puVar11 + (longlong)iVar13 * 0x14 + 0x10) <=
                    *(ushort *)((longlong)puVar11 + (longlong)iVar23 * 0x14 + 0x10)) break;
                puVar18 = (undefined8 *)((longlong)puVar11 + (longlong)iVar23 * 0x14);
                puVar15 = (undefined8 *)((longlong)puVar11 + (longlong)iVar13 * 0x14);
                uVar3 = *(undefined4 *)(puVar18 + 2);
                uVar5 = *puVar18;
                uVar6 = puVar18[1];
                *(undefined4 *)(puVar18 + 2) = *(undefined4 *)(puVar15 + 2);
                uVar7 = puVar15[1];
                *puVar18 = *puVar15;
                puVar18[1] = uVar7;
                *(undefined4 *)(puVar15 + 2) = uVar3;
                *puVar15 = uVar5;
                puVar15[1] = uVar6;
                iVar19 = iVar13 * 2;
                iVar21 = iVar13 * 2 + 1;
                iVar23 = iVar13;
              } while ((longlong)iVar21 < (longlong)uVar17);
              uVar1 = uVar17 - 1;
              local_48 = *(undefined4 *)(puVar11 + 2);
              local_58 = *puVar11;
              uStack_50 = puVar11[1];
              uVar6 = local_58;
              uVar7 = uStack_50;
              *(undefined4 *)(puVar11 + 2) =
                   *(undefined4 *)((longlong)puVar11 + uVar1 * 0x14 + 0x10);
              puVar18 = (undefined8 *)((longlong)puVar11 + uVar1 * 0x14);
              uVar5 = puVar18[1];
              *puVar11 = *puVar18;
              puVar11[1] = uVar5;
              *(undefined4 *)((longlong)puVar11 + uVar1 * 0x14 + 0x10) = local_48;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              puVar2 = (undefined4 *)((longlong)puVar11 + uVar1 * 0x14);
              *puVar2 = (undefined4)local_58;
              puVar2[1] = local_58._4_4_;
              puVar2[2] = (undefined4)uStack_50;
              puVar2[3] = uStack_50._4_4_;
              bVar25 = 2 < uVar17;
              uVar17 = uVar1;
              local_58 = uVar6;
              uStack_50 = uVar7;
            } while (bVar25);
          }
        }
      }
LAB_143d85e81:
      plVar10 = plVar10 + -3;
    } while (&local_358 <= plVar10);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143d85d5a:
  local_48 = *(undefined4 *)(puVar16 + 2);
  local_58 = *puVar16;
  uStack_50 = puVar16[1];
  uVar6 = local_58;
  uVar7 = uStack_50;
  *(undefined4 *)(puVar16 + 2) = *(undefined4 *)((longlong)puVar9 + -4);
  uVar5 = *(undefined8 *)((longlong)puVar9 + -0xc);
  *puVar16 = *puVar24;
  puVar16[1] = uVar5;
  *(undefined4 *)((longlong)puVar9 + -4) = local_48;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar24 = (undefined4)local_58;
  *(undefined4 *)(puVar9 + -2) = local_58._4_4_;
  *(undefined4 *)((longlong)puVar9 + -0xc) = (undefined4)uStack_50;
  *(undefined4 *)(puVar9 + -1) = uStack_50._4_4_;
  iVar19 = iVar19 + -1;
  local_58 = uVar6;
  uStack_50 = uVar7;
  if ((longlong)puVar22 - (longlong)puVar15 < (longlong)puVar14 - (longlong)puVar12) {
    if (puVar11 < puVar18) {
      *plVar10 = (longlong)puVar11;
      plVar10[1] = (longlong)puVar18;
      *(int *)(plVar10 + 2) = iVar19;
      plVar10 = plVar10 + 3;
    }
    puVar12 = puVar16;
    puVar11 = puVar16;
    puVar18 = puVar9 + -5;
    puVar14 = puVar22;
    if (puVar24 <= (undefined8 *)((longlong)puVar16 + 0x14U)) goto LAB_143d85e81;
  }
  else {
    if ((undefined8 *)((longlong)puVar16 + 0x14U) < puVar24) {
      *plVar10 = (longlong)puVar16;
      plVar10[1] = (longlong)(puVar9 + -5);
      *(int *)(plVar10 + 2) = iVar19;
      plVar10 = plVar10 + 3;
    }
    puVar14 = puVar18;
    if (puVar18 <= puVar11) goto LAB_143d85e81;
  }
  iVar23 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar12) >> 2) * -0x33333333;
  uVar20 = iVar23 + 1;
  puVar15 = puVar12;
  puVar16 = puVar11;
  if (iVar19 == 0) goto LAB_143d85ebd;
  goto LAB_143d85ca4;
}



// FUNCTION 143d86176 FUN_143d86176 body=69 status=ok
// SIG undefined FUN_143d86176(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d86176(void)

{
  _DAT_14cb80ec8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d861b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb80ed0,1);
  return;
}



// FUNCTION 143d861bc FUN_143d861bc body=110 status=ok
// SIG undefined FUN_143d861bc(void)

void FUN_143d861bc(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147121a82(param_1,iVar1);
    }
    FUN_147121a67((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
      FUN_143d8d6f4(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 143d8622b FUN_143d8622b body=836 status=ok
// SIG undefined FUN_143d8622b(void)

ulonglong FUN_143d8622b(int param_1,longlong *param_2,double *param_3,longlong *param_4,
                       double param_5,int param_6,double *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auStack_108 [32];
  double local_e8;
  int local_e0;
  double *local_d8;
  uint local_d0;
  int local_cc;
  int local_c8;
  uint local_c4;
  longlong *local_c0;
  int local_b4;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  LARGE_INTEGER local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar9 = (int)param_4[1];
  local_d0 = param_6 - 1;
  uVar10 = (ulonglong)local_d0;
  uVar12 = 0;
  iVar6 = 0;
  if (0 < param_6 && param_7 != (double *)0x0) {
    uVar12 = 0;
    if (param_6 <= (int)((longlong *)param_7[2])[1]) {
      lVar13 = *(longlong *)param_7[2];
      iVar6 = *(int *)(lVar13 + uVar10 * 8);
      uVar12 = CONCAT71((int7)((ulonglong)lVar13 >> 8),*(undefined1 *)(lVar13 + 4 + uVar10 * 8));
    }
  }
  local_b0 = param_2;
  if (iVar6 < iVar9) {
    plVar7 = (longlong *)((longlong)param_1 * 0x10 + *param_2);
    local_b4 = param_6 + 1;
    local_a8 = (longlong)param_6;
    lVar13 = (longlong)iVar6;
    local_cc = iVar9;
    local_c8 = param_1;
    local_c0 = plVar7;
    local_a0 = param_4;
    do {
      lVar3 = *plVar7;
      iVar6 = *(int *)(lVar3 + lVar13 * 0x10);
      if (iVar6 == param_1) goto LAB_143d86490;
      if (1 < param_6) {
        uVar11 = 0;
        do {
          plVar7 = local_c0;
          if (*(int *)(*param_4 + uVar11 * 4) == iVar6) goto LAB_143d86490;
          uVar11 = uVar11 + 1;
        } while (uVar10 != uVar11);
      }
      puVar8 = (undefined4 *)(lVar3 + lVar13 * 0x10);
      dVar4 = *(double *)(puVar8 + 2) + param_5;
      if (*param_3 <= dVar4 && dVar4 != *param_3) {
        uVar10 = CONCAT71((int7)(uVar12 >> 8),1);
        goto LAB_143d864cf;
      }
      uVar11 = uVar12;
      if ((param_7 != (double *)0x0) &&
         (iVar6 = *(int *)(param_7 + 3), *(uint *)(param_7 + 3) = iVar6 + 1U,
         0 < (int)(iVar6 + 1U & 0x80000003))) {
        QueryPerformanceCounter(&local_98);
        fVar14 = (float)((((double)local_98.QuadPart * DAT_14c83f420 + 16777216.0) - *param_7) *
                        1000.0);
        param_4 = local_a0;
        uVar11 = uVar12 & 0xffffffff;
        iVar9 = local_cc;
        param_1 = local_c8;
        if (fVar14 < *(float *)(param_7 + 1) || fVar14 == *(float *)(param_7 + 1))
        goto LAB_143d863e9;
        *(int *)(*(longlong *)param_7[2] + (longlong)(int)local_d0 * 8) = (int)lVar13;
        uVar12 = uVar12 & 0xffffff01;
        *(char *)(*(longlong *)param_7[2] + 4 + (longlong)(int)local_d0 * 8) = (char)uVar12;
        goto LAB_143d86568;
      }
LAB_143d863e9:
      uVar12 = uVar11;
      lVar3 = local_a8;
      if (local_b4 < iVar9) {
        local_c4 = (uint)uVar12;
        uVar1 = *(undefined4 *)(*param_4 + local_a8 * 4);
        uVar2 = *puVar8;
        *(undefined4 *)(*param_4 + local_a8 * 4) = uVar2;
        local_d8 = param_7;
        local_e0 = local_b4;
        local_e8 = dVar4;
        cVar5 = FUN_143d8622b(uVar2,local_b0,param_3,param_4);
        plVar7 = local_c0;
        iVar9 = local_cc;
        param_1 = local_c8;
        if (cVar5 != '\0') {
          *(undefined4 *)(*param_4 + lVar3 * 4) = uVar1;
          if ((param_7 == (double *)0x0) || (cVar5 != '\x02')) {
            uVar12 = (ulonglong)local_c4;
            if (cVar5 != '\x02') goto LAB_143d86490;
          }
          else {
            *(int *)(*(longlong *)param_7[2] + (longlong)(int)local_d0 * 8) = (int)lVar13;
            *(byte *)(*(longlong *)param_7[2] + 4 + (longlong)(int)local_d0 * 8) =
                 (byte)local_c4 & 1;
          }
LAB_143d86568:
          uVar10 = CONCAT71((int7)(uVar12 >> 8),2);
          goto LAB_143d864cf;
        }
        uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
      }
      else {
        *(undefined4 *)(*param_4 + local_a8 * 4) = *puVar8;
        *param_3 = dVar4;
        uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
        plVar7 = local_c0;
      }
LAB_143d86490:
      lVar13 = lVar13 + 1;
    } while (iVar9 != (int)lVar13);
  }
  if (((param_7 != (double *)0x0) && (0 < param_6)) && (param_6 <= (int)((longlong *)param_7[2])[1])
     ) {
    *(undefined4 *)(*(longlong *)param_7[2] + (ulonglong)local_d0 * 8) = 0;
    *(undefined1 *)(*(longlong *)param_7[2] + 4 + (ulonglong)local_d0 * 8) = 0;
  }
  uVar10 = CONCAT71((int7)(uVar12 >> 8),~(byte)uVar12) & 0xffffffffffffff01;
LAB_143d864cf:
  if ((local_90 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 143d86570 FUN_143d86570 body=373 status=ok
// SIG undefined FUN_143d86570(void)

undefined8 *
FUN_143d86570(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  uint uVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14b40df30;
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  if (*(longlong *)(param_2 + 4) == 0) {
    iVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)(param_2 + 4) + 0xc);
    *(uint *)((longlong)param_1 + 0x14) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar6;
      }
    }
  }
  *(int *)(param_1 + 3) = iVar5;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)(param_1 + 4) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  param_1[6] = *(undefined8 *)(param_3 + 4);
  param_1[7] = 0;
  iVar5 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 8) = iVar5;
  if ((longlong)iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1405b70fe(param_1 + 7,iVar5,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar5 * 0x18);
  }
  param_1[9] = param_5;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0x47efffffe0000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 143d866e6 FUN_143d866e6 body=1228 status=ok
// SIG undefined FUN_143d866e6(void)

void FUN_143d866e6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar15;
  void *pvVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  LARGE_INTEGER *local_98;
  longlong local_90;
  undefined4 local_84;
  LARGE_INTEGER local_80;
  undefined4 local_78;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  QueryPerformanceCounter(&local_80);
  uVar2 = *(uint *)(param_1 + 0x40);
  uVar10 = (ulonglong)uVar2;
  if (uVar10 == 1) {
    local_80.QuadPart = local_80.QuadPart & 0xffffffff00000000;
    FUN_1448156a8(*(undefined8 *)(param_1 + 0x48),&local_80,1);
    uVar11 = *(undefined8 *)(param_1 + 0x14);
    uVar14 = *(undefined4 *)(param_1 + 8);
    uVar17 = *(undefined8 *)(param_1 + 0xc);
    *(undefined1 *)(param_2 + 0x60) = 1;
    iVar12 = *(int *)(param_2 + 0x58);
    lVar15 = (longlong)iVar12;
    *(uint *)(param_2 + 0x58) = iVar12 + 1U;
    if (*(uint *)(param_2 + 0x5c) < iVar12 + 1U) {
      FUN_14579eadc(param_2,iVar12);
    }
    lVar19 = *(longlong *)(param_2 + 0x50);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      lVar19 = param_2;
    }
  }
  else {
    dVar4 = (double)local_80.QuadPart * DAT_14c83f420;
    if ((uVar2 != 0) && (*(int *)(param_1 + 0x58) == 0)) {
      plVar1 = (longlong *)(param_1 + 0x60);
      FUN_143d861bc();
      iVar12 = *(int *)(param_1 + 0x68);
      if (iVar12 < (int)uVar2) {
        *(uint *)(param_1 + 0x68) = uVar2;
        if ((uint)(*(int *)(param_1 + 0x6c) - iVar12) < uVar2 - iVar12) {
          FUN_143d8d7f2(plVar1);
        }
        memset((void *)((longlong)iVar12 * 0x10 + *plVar1),0,(longlong)(int)(uVar2 - iVar12) << 4);
        if (0 < (int)uVar2) goto LAB_143d8684b;
      }
      else {
        if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar10);
        }
        iVar13 = iVar12 - uVar2;
        if (iVar13 != 0 && (int)uVar2 <= iVar12) {
          pvVar16 = (void *)(uVar10 * 0x10 + *(longlong *)(param_1 + 0x60));
          FUN_143d8d9f6(pvVar16);
          iVar6 = *(int *)(param_1 + 0x68) - iVar12;
          if (iVar6 != 0) {
            memmove(pvVar16,(void *)((longlong)iVar13 * 0x10 + (longlong)pvVar16),
                    (longlong)iVar6 << 4);
            iVar12 = *(int *)(param_1 + 0x68);
          }
          *(int *)(param_1 + 0x68) = iVar12 - iVar13;
          FUN_143d8d8f8();
        }
LAB_143d8684b:
        lVar8 = 0x10;
        lVar15 = 0;
        uVar9 = 0;
        do {
          *(int *)(*(longlong *)(param_1 + 0x50) + lVar15) = (int)uVar9;
          lVar19 = *(longlong *)(param_1 + 0x38);
          dVar20 = *(double *)(lVar19 + lVar8) - *(double *)(param_1 + 0x30);
          dVar22 = *(double *)(lVar19 + -8 + lVar8) - *(double *)(param_1 + 0x28);
          dVar21 = *(double *)(lVar19 + -0x10 + lVar8) - *(double *)(param_1 + 0x20);
          *(double *)(*(longlong *)(param_1 + 0x50) + 8 + lVar15) =
               SQRT(dVar20 * dVar20 + dVar21 * dVar21 + dVar22 * dVar22);
          uVar9 = uVar9 + 1;
          lVar15 = lVar15 + 0x10;
          lVar8 = lVar8 + 0x18;
        } while (uVar10 != uVar9);
        uVar9 = 0;
        do {
          lVar19 = uVar9 * 0x10;
          FUN_143d861bc(*plVar1 + lVar19);
          lVar8 = 0x10;
          lVar15 = 0;
          uVar18 = 0;
          do {
            *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar19) + lVar15) = (int)uVar18;
            lVar3 = *(longlong *)(param_1 + 0x38);
            dVar20 = *(double *)(lVar3 + lVar8) - *(double *)(lVar3 + 0x10 + uVar9 * 0x18);
            dVar22 = *(double *)(lVar3 + -8 + lVar8) - *(double *)(lVar3 + 8 + uVar9 * 0x18);
            dVar21 = *(double *)(lVar3 + -0x10 + lVar8) - *(double *)(lVar3 + uVar9 * 0x18);
            *(double *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar19) + 8 + lVar15) =
                 SQRT(dVar20 * dVar20 + dVar21 * dVar21 + dVar22 * dVar22);
            uVar18 = uVar18 + 1;
            lVar15 = lVar15 + 0x10;
            lVar8 = lVar8 + 0x18;
          } while (uVar10 != uVar18);
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar10);
      }
      plVar1 = (longlong *)(param_1 + 0x70);
      iVar13 = uVar2 - 1;
      iVar12 = *(int *)(param_1 + 0x78);
      if (iVar12 < iVar13) {
        *(int *)(param_1 + 0x78) = iVar13;
        if ((uint)(*(int *)(param_1 + 0x7c) - iVar12) < (uint)(iVar13 - iVar12)) {
          FUN_143d8da3e(plVar1,iVar12);
        }
        FUN_143d8da21((longlong)iVar12 * 8 + *plVar1,iVar13 - iVar12);
      }
      else {
        if ((int)uVar2 < 1) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar13);
        }
        if ((int)uVar2 <= iVar12) {
          *(int *)(param_1 + 0x78) = iVar13;
          FUN_143d8db98(plVar1);
        }
      }
      local_80.s.LowPart = 0xffffffff;
      FUN_1448156a8(param_1 + 0x80,&local_80,uVar2);
    }
    local_80 = (LARGE_INTEGER)(dVar4 + 16777216.0);
    local_70 = param_1 + 0x70;
    local_78 = DAT_14c763954;
    local_68 = 0;
    uVar7 = *(uint *)(param_1 + 0x90);
    local_90 = param_2;
    if ((int)uVar7 < (int)uVar2) {
      do {
        **(undefined4 **)(param_1 + 0x80) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (longlong)(int)uVar7 * 0x10);
        lVar8 = (longlong)*(int *)(param_1 + 0x90) * 0x10;
        local_a8 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8 + lVar8);
        local_98 = &local_80;
        local_a0 = 1;
        cVar5 = FUN_143d8622b(*(undefined4 *)(*(longlong *)(param_1 + 0x50) + lVar8),param_1 + 0x60,
                              param_1 + 0x98,param_1 + 0x80);
        if (cVar5 == '\0') {
          iVar12 = *(int *)(param_1 + 0x88);
          pvVar16 = *(void **)(param_1 + 0x80);
          *(int *)(param_1 + 0xa8) = iVar12;
          if (iVar12 == 0 && *(int *)(param_1 + 0xac) == 0) {
            *(undefined4 *)(param_1 + 0xac) = 0;
          }
          else {
            FUN_144a06ca8((undefined8 *)(param_1 + 0xa0),iVar12);
            if (iVar12 != 0) {
              memcpy(*(void **)(param_1 + 0xa0),pvVar16,(longlong)iVar12 << 2);
            }
          }
        }
        else if (cVar5 == '\x02') {
          uVar7 = *(uint *)(param_1 + 0x90);
          break;
        }
        *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
        local_84 = 0xffffffff;
        FUN_1448156a8(param_1 + 0x80,&local_84,uVar2);
        uVar7 = *(uint *)(param_1 + 0x90);
      } while ((int)uVar7 < (int)uVar2);
    }
    if (uVar7 != uVar2) goto LAB_143d86b59;
    FUN_14054c6c4(*(undefined8 *)(param_1 + 0x48),param_1 + 0xa0);
    lVar8 = local_90;
    uVar11 = *(undefined8 *)(param_1 + 0x14);
    uVar14 = *(undefined4 *)(param_1 + 8);
    uVar17 = *(undefined8 *)(param_1 + 0xc);
    *(undefined1 *)(local_90 + 0x60) = 1;
    iVar12 = *(int *)(local_90 + 0x58);
    lVar15 = (longlong)iVar12;
    *(uint *)(local_90 + 0x58) = iVar12 + 1U;
    if (*(uint *)(local_90 + 0x5c) < iVar12 + 1U) {
      FUN_14579eadc(local_90,iVar12);
    }
    lVar19 = *(longlong *)(lVar8 + 0x50);
    if (lVar19 == 0) {
      lVar19 = lVar8;
    }
  }
  *(undefined8 *)(lVar19 + lVar15 * 0x14) = uVar17;
  *(undefined4 *)(lVar19 + 8 + lVar15 * 0x14) = uVar14;
  *(undefined8 *)(lVar19 + 0xc + lVar15 * 0x14) = uVar11;
LAB_143d86b59:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d86bb4 FUN_143d86bb4 body=47 status=ok
// SIG undefined FUN_143d86bb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d86bb4(void)

{
  _DAT_14cb80f30 = 0;
  if (DAT_14cb80f28 != 0) {
    FUN_1400020a8();
  }
  FUN_1401bccca(&DAT_14cb80ee8);
  return;
}



// FUNCTION 143d86be4 FUN_143d86be4 body=3952 status=ok
// SIG undefined FUN_143d86be4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d86be4(longlong param_1,double *param_2,double *param_3,char *param_4,longlong *param_5,
                  longlong *param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  char cVar12;
  uint uVar13;
  undefined1 *puVar14;
  int *_Dst;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  bool bVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auStack_2b8 [32];
  longlong *local_298;
  undefined4 local_290;
  undefined8 *local_288;
  char *local_278;
  int local_270;
  int local_26c;
  double *local_268;
  double *local_260;
  float local_258;
  int local_254;
  int local_250;
  int local_24c;
  longlong *local_248;
  undefined8 local_240;
  double local_238;
  longlong *local_230;
  longlong *local_228;
  double **local_220;
  longlong *local_218;
  double *local_210;
  double *local_208;
  double *local_200;
  longlong *local_1f8;
  int *local_1f0;
  undefined8 *local_1e8;
  char *local_1e0;
  double *local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  int local_1a0;
  undefined1 local_19c;
  longlong local_198;
  code *local_190;
  double ***local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined2 local_15f;
  undefined1 local_15d;
  undefined4 local_15c;
  undefined1 local_158;
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined2 local_148;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_110 [16];
  undefined1 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_198 = param_1;
  if (param_1 != 0) {
    *(undefined4 *)(param_5 + 1) = 0;
    if (*(int *)((longlong)param_5 + 0xc) < 0) {
      FUN_1447a8aa0(param_5,0);
    }
    plVar1 = param_5 + 2;
    *(undefined4 *)(param_5 + 3) = 0;
    if (*(int *)((longlong)param_5 + 0x1c) < 0) {
      FUN_14481578e(plVar1,0);
    }
    if (*(int *)((longlong)param_5 + 0x2c) < 0) {
      *(undefined4 *)(param_5 + 5) = 0;
      FUN_1408652ee(param_5 + 4,0);
    }
    else {
      *(undefined4 *)(param_5 + 5) = 0;
    }
    plVar2 = param_5 + 6;
    *(undefined4 *)(param_5 + 7) = 0;
    if (*(int *)((longlong)param_5 + 0x3c) < 0) {
      FUN_14481578e(plVar2,0);
    }
    local_278 = param_4;
    local_230 = plVar2;
    if (*param_4 == '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb80f88) && (FUN_144b3d300(&DAT_14cb80f88), DAT_14cb80f88 == -1))
      {
        _DAT_14cb80f78 = 0.5;
        _DAT_14cb80f80 = 0.5;
        _Init_thread_footer(&DAT_14cb80f88);
      }
      iVar21 = (int)param_5[1];
      *(uint *)(param_5 + 1) = iVar21 + 1U;
      local_268 = param_2;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar21 + 1U) {
        FUN_1403e3958(param_5,iVar21);
      }
      lVar18 = *param_5;
      *(undefined8 *)(lVar18 + 0x10 + (longlong)iVar21 * 0x18) = DAT_14c8464f0;
      uVar10 = DAT_14c8464e8;
      puVar16 = (undefined8 *)(lVar18 + (longlong)iVar21 * 0x18);
      *puVar16 = DAT_14c8464e0;
      puVar16[1] = uVar10;
      local_260 = param_3;
      local_228 = plVar1;
      if (param_4[0x21] == '\x01') {
        lVar18 = param_5[5];
        uVar13 = (int)lVar18 + 1;
        *(uint *)(param_5 + 5) = uVar13;
        if (*(uint *)((longlong)param_5 + 0x2c) < uVar13) {
          FUN_14489624a(param_5 + 4);
        }
        dVar28 = _DAT_14cb80f80;
        pdVar4 = (double *)(param_5[4] + (longlong)(int)lVar18 * 0x10);
        *pdVar4 = _DAT_14cb80f78;
        pdVar4[1] = dVar28;
        param_4 = local_278;
      }
      iVar21 = 0x20;
      if (*(int *)(param_4 + 0x18) < 0x20) {
        iVar21 = *(int *)(param_4 + 0x18);
      }
      local_24c = 3;
      if (3 < iVar21) {
        local_24c = iVar21;
      }
      local_250 = *(int *)(param_4 + 0x1c);
      local_254 = 0x10;
      if (local_250 < 0x10) {
        local_254 = local_250;
      }
      local_26c = 1;
      if (1 < local_254) {
        local_26c = local_254;
      }
      local_238 = *(double *)(param_4 + 8);
      local_240 = *(undefined8 *)(param_4 + 0x10);
      local_258 = (float)local_24c;
      dVar28 = 1.0 / (double)local_26c;
      local_248 = param_5 + 4;
      local_254 = local_254 + -1;
      local_270 = 1;
      iVar21 = 1;
      do {
        iVar24 = local_24c;
        iVar20 = local_26c;
        dVar31 = (double)(((float)iVar21 * 360.0) / local_258) * 0.017453292519943295;
        dVar32 = sin(dVar31);
        dVar34 = cos(dVar31);
        dVar30 = 1.0 - dVar34;
        dVar38 = DAT_14c8462d8 * DAT_14c8462e8 * dVar30;
        dVar31 = DAT_14c8462e0 * DAT_14c8462e8 * dVar30;
        dVar6 = (dVar31 + dVar32 * DAT_14c8462d8) * DAT_14c8462c8;
        dVar39 = (dVar38 - dVar32 * DAT_14c8462e0) * DAT_14c8462c0;
        dVar29 = (DAT_14c8462e8 * DAT_14c8462e8 * dVar30 + dVar34) * DAT_14c8462d0;
        dVar27 = DAT_14c8462d8 * DAT_14c8462e0 * dVar30;
        dVar40 = (DAT_14c8462e0 * DAT_14c8462e0 * dVar30 + dVar34) * DAT_14c8462c8;
        dVar33 = (dVar27 + dVar32 * DAT_14c8462e8) * DAT_14c8462c0;
        dVar8 = (dVar31 - dVar32 * DAT_14c8462d8) * DAT_14c8462d0;
        dVar27 = (dVar27 - dVar32 * DAT_14c8462e8) * DAT_14c8462c8;
        dVar31 = 1.0;
        dVar34 = (dVar30 * DAT_14c8462d8 * DAT_14c8462d8 + dVar34) * DAT_14c8462c0;
        dVar30 = (dVar38 + dVar32 * DAT_14c8462e0) * DAT_14c8462d0;
        uVar36 = (undefined4)local_240;
        uVar37 = (undefined4)((ulonglong)local_240 >> 0x20);
        dVar32 = local_238;
        do {
          dVar38 = (dVar29 + dVar39 + dVar6) * dVar31 * dVar28;
          dVar9 = (dVar8 + dVar33 + dVar40) * dVar31 * dVar28;
          if (param_4[0x21] == '\x01') {
            dVar32 = dVar38 * 0.5 + _DAT_14cb80f80;
            dVar7 = dVar9 * 0.5 + _DAT_14cb80f78;
            lVar18 = param_5[5];
            uVar13 = (int)lVar18 + 1;
            *(uint *)(param_5 + 5) = uVar13;
            if (*(uint *)((longlong)param_5 + 0x2c) < uVar13) {
              FUN_14489624a(local_248);
            }
            lVar17 = *local_248;
            lVar18 = (longlong)(int)lVar18 * 0x10;
            *(double *)(lVar17 + lVar18) = dVar7;
            *(double *)(lVar17 + 8 + lVar18) = dVar32;
            uVar36 = (undefined4)local_240;
            uVar37 = (undefined4)((ulonglong)local_240 >> 0x20);
            param_4 = local_278;
            dVar32 = local_238;
          }
          if ((param_6 != (longlong *)0x0) && (iVar20 == 1)) {
            lVar18 = param_5[1];
            lVar17 = param_6[1];
            uVar13 = (int)lVar17 + 1;
            *(uint *)(param_6 + 1) = uVar13;
            if (*(uint *)((longlong)param_6 + 0xc) < uVar13) {
              FUN_1446f48e2(param_6);
            }
            *(int *)(*param_6 + (longlong)(int)lVar17 * 4) = (int)lVar18;
            param_4 = local_278;
          }
          lVar18 = (longlong)(int)param_5[1];
          uVar13 = (int)param_5[1] + 1;
          *(uint *)(param_5 + 1) = uVar13;
          if (*(uint *)((longlong)param_5 + 0xc) < uVar13) {
            FUN_1403e3958(param_5);
          }
          plVar1 = local_228;
          lVar17 = *param_5;
          *(double *)(lVar17 + lVar18 * 0x18) = (dVar30 + dVar34 + dVar27) * dVar31 * dVar28;
          *(double *)(lVar17 + 8 + lVar18 * 0x18) = dVar9 * (double)CONCAT44(uVar37,uVar36);
          *(double *)(lVar17 + 0x10 + lVar18 * 0x18) = dVar38 * dVar32;
          dVar31 = dVar31 + 1.0;
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
        iVar20 = iVar21 * local_26c + 1;
        if (iVar21 == iVar24) {
          iVar20 = 1;
        }
        local_298 = local_228;
        FUN_143d87f52(param_4,0,(iVar21 + -1) * local_26c + 1);
        iVar24 = local_270;
        iVar25 = local_254;
        if (1 < local_250) {
          do {
            iVar20 = iVar20 + 1;
            local_298 = plVar1;
            FUN_143d87f52(param_4,iVar24,iVar24 + 1,iVar20);
            local_298 = plVar1;
            FUN_143d87f52(param_4,iVar24,iVar20);
            iVar25 = iVar25 + -1;
            iVar24 = iVar24 + 1;
          } while (iVar25 != 0);
        }
        local_270 = local_270 + local_26c;
        bVar26 = iVar21 != local_24c;
        iVar21 = iVar21 + 1;
      } while (bVar26);
    }
    else {
      if (*param_4 != '\x01') goto LAB_143d879e9;
      local_268 = param_2;
      local_260 = param_3;
      FUN_1488b0b6a(param_4,param_5,param_6);
    }
    auVar11 = _DAT_149934d80;
    if (param_4[0x40] == '\x01') {
      lVar18 = param_5[1];
      if ((longlong)(int)lVar18 != 0) {
        lVar17 = *param_5;
        lVar15 = 0;
        do {
          dVar31 = (*(double *)(lVar17 + lVar15) - (double)*(float *)(param_4 + 0x2c)) *
                   local_268[8];
          dVar6 = *(double *)(lVar17 + 8 + lVar15) * local_268[9];
          dVar39 = *(double *)(lVar17 + 0x10 + lVar15) * local_268[10];
          dVar30 = *local_268;
          dVar40 = local_268[1];
          dVar29 = local_268[2];
          dVar28 = local_268[3];
          dVar32 = dVar6 * dVar30 - dVar31 * dVar40;
          dVar34 = dVar39 * dVar40 - dVar6 * dVar29;
          dVar27 = dVar31 * dVar29 - dVar30 * dVar39;
          dVar34 = dVar34 + dVar34;
          dVar27 = dVar27 + dVar27;
          dVar32 = dVar32 + dVar32;
          dVar8 = ((dVar32 * dVar40 - dVar27 * dVar29) + dVar28 * dVar34 + dVar31 + local_268[4]) -
                  local_260[4];
          dVar29 = ((dVar29 * dVar34 - dVar30 * dVar32) + local_268[3] * dVar27 + dVar6 +
                   local_268[5]) - local_260[5];
          dVar33 = (dVar32 * dVar28 + dVar39 + (dVar27 * dVar30 - dVar34 * dVar40) + local_268[6]) -
                   local_260[6];
          dVar39 = *local_260;
          dVar34 = -dVar39;
          dVar27 = -local_260[1];
          dVar31 = local_260[2] * -1.0;
          dVar6 = local_260[3] * 1.0;
          dVar40 = dVar8 * dVar31 - dVar34 * dVar33;
          dVar32 = dVar29 * dVar34 - dVar27 * dVar8;
          dVar30 = dVar33 * dVar27 - dVar31 * dVar29;
          dVar30 = dVar30 + dVar30;
          dVar40 = dVar40 + dVar40;
          dVar32 = dVar32 + dVar32;
          auVar5 = *(undefined1 (*) [16])(local_260 + 8);
          auVar35 = divpd(auVar11,auVar5);
          dVar28 = local_260[10];
          *(double *)(lVar17 + lVar15) =
               (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._0_8_)) & auVar35._0_8_) *
               ((dVar32 * dVar27 - dVar40 * dVar31) + dVar6 * dVar30 + dVar8);
          ((double *)(lVar17 + lVar15))[1] =
               (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._8_8_)) & auVar35._8_8_) *
               (dVar39 * dVar32 + dVar31 * dVar30 + dVar6 * dVar40 + dVar29);
          *(double *)(lVar17 + 0x10 + lVar15) =
               (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar28)) & (ulonglong)(1.0 / dVar28)
                       ) * (dVar6 * dVar32 + dVar33 + (dVar40 * dVar34 - dVar30 * dVar27));
          lVar15 = lVar15 + 0x18;
        } while ((longlong)(int)lVar18 * 0x18 != lVar15);
      }
    }
    else {
      local_1a0 = 1 << (param_4[0x22] & 0x1fU);
      local_19c = 0;
      local_14c = 0;
      local_168 = 0;
      local_148 = 0x101;
      local_120 = 0;
      local_118 = 0x800000000;
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x400000000;
      local_160 = 0;
      local_154 = 0;
      local_170 = DAT_14cb80f40;
      local_15f = 1;
      local_15d = 0;
      local_150 = 0;
      local_15c = 0x1000000;
      local_158 = 1;
      iVar21 = *(int *)(param_4 + 0x38);
      if ((longlong)iVar21 != 0) {
        lVar18 = *(longlong *)(local_278 + 0x30);
        lVar17 = 0;
        do {
          uVar19 = local_f8;
          uVar36 = *(undefined4 *)(lVar18 + lVar17);
          lVar15 = (longlong)(int)local_f8;
          uVar13 = (int)local_f8 + 1;
          local_f8 = CONCAT44(local_f8._4_4_,uVar13);
          if (local_f8._4_4_ < uVar13) {
            FUN_1447de67e(local_110,uVar19 & 0xffffffff);
          }
          puVar14 = local_100;
          if (local_100 == (undefined1 *)0x0) {
            puVar14 = local_110;
          }
          *(undefined4 *)(puVar14 + lVar15 * 4) = uVar36;
          lVar17 = lVar17 + 4;
        } while ((longlong)iVar21 * 4 != lVar17);
      }
      plVar1 = local_230;
      dVar28 = local_268[2];
      dVar31 = *local_268;
      dVar6 = local_268[1];
      dVar29 = dVar28 - dVar31 * 0.0;
      dVar32 = dVar31 * 0.0 - dVar6;
      dVar34 = dVar6 * 0.0 + dVar28 * -0.0;
      dVar32 = dVar32 + dVar32;
      dVar29 = dVar29 + dVar29;
      dVar34 = dVar34 + dVar34;
      dVar8 = local_268[3];
      local_1c0 = (dVar31 * dVar29 - dVar34 * dVar6) + dVar8 * dVar32 + 0.0;
      local_1c8 = (dVar28 * dVar34 - dVar32 * dVar31) + dVar8 * dVar29 + 0.0;
      local_1b8 = (double)*(float *)(local_278 + 0x24);
      local_1d0 = (dVar6 * dVar32 - dVar29 * dVar28) + dVar8 * dVar34 + 1.0;
      local_1a8 = local_1c0 * local_1b8;
      local_1b0 = local_1c8 * local_1b8;
      local_1b8 = local_1b8 * local_1d0;
      local_208 = &local_1b8;
      dVar28 = (double)*(float *)(local_278 + 0x28);
      local_1c0 = local_1c0 * dVar28;
      local_1c8 = local_1c8 * dVar28;
      local_1d0 = local_1d0 * dVar28;
      local_200 = &local_1d0;
      local_210 = local_268;
      local_1f8 = &local_198;
      local_1f0 = &local_1a0;
      local_1e8 = &local_170;
      local_1e0 = local_278;
      local_1d8 = local_260;
      if (local_278[0x41] == '\0') {
        if (0 < (int)param_5[1]) {
          lVar18 = 0;
          lVar17 = 0;
          do {
            cVar12 = FUN_143d87b64(&local_210,*param_5 + lVar18);
            if (cVar12 == '\0') {
              iVar21 = (int)param_5[7];
              *(uint *)(param_5 + 7) = iVar21 + 1U;
              if (*(uint *)((longlong)param_5 + 0x3c) < iVar21 + 1U) {
                FUN_1446f48e2(plVar1,iVar21);
              }
              *(int *)(*plVar1 + (longlong)iVar21 * 4) = (int)lVar17;
            }
            lVar17 = lVar17 + 1;
            lVar18 = lVar18 + 0x18;
          } while (lVar17 < (int)param_5[1]);
        }
      }
      else {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb80f70) &&
           (FUN_144b3d300(&DAT_14cb80f70), DAT_14cb80f70 == -1)) {
          InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb80f48);
          SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb80f48,4000);
          atexit((_func_5014 *)&LAB_143d87b55);
          _Init_thread_footer(&DAT_14cb80f70);
        }
        local_220 = &local_210;
        local_188 = &local_220;
        local_218 = param_5;
        local_288 = &local_180;
        local_180 = 0;
        local_178 = 0;
        local_190 = FUN_143d8dd0e;
        local_290 = 0;
        FUN_1401f8d10(L"ParallelFor Task",(int)param_5[1]);
      }
      if (0 < (int)param_5[7]) {
        uVar13 = *(uint *)(param_5 + 3);
        uVar19 = (ulonglong)(int)uVar13;
        if (2 < (longlong)uVar19) {
LAB_143d87863:
          if ((longlong)(int)param_5[7] != 0) {
            lVar18 = param_5[2];
            lVar17 = param_5[6];
            _Dst = (int *)(lVar18 + uVar19 * 4 + -0xc);
            lVar15 = (longlong)(int)param_5[7] * 4;
            lVar23 = 0;
            do {
              if (*(int *)(lVar17 + lVar23) == *_Dst) goto LAB_143d878c9;
              lVar23 = lVar23 + 4;
            } while (lVar15 != lVar23);
            lVar23 = 0;
            do {
              if (*(int *)(lVar17 + lVar23) == *(int *)(lVar18 + -8 + uVar19 * 4))
              goto LAB_143d878c9;
              lVar23 = lVar23 + 4;
            } while (lVar15 != lVar23);
            lVar23 = 0;
            do {
              if (*(int *)(lVar17 + lVar23) == *(int *)(lVar18 + -4 + uVar19 * 4))
              goto LAB_143d878c9;
              lVar23 = lVar23 + 4;
            } while (lVar15 != lVar23);
          }
          goto LAB_143d878ff;
        }
LAB_143d87910:
        if ((param_6 != (longlong *)0x0) && (lVar18 = param_5[7], (longlong)(int)lVar18 != 0)) {
          lVar17 = param_5[6];
          lVar15 = 0;
          do {
            local_180 = CONCAT44(local_180._4_4_,*(undefined4 *)(lVar17 + lVar15));
            FUN_1428664a6(param_6,&local_180);
            lVar15 = lVar15 + 4;
          } while ((longlong)(int)lVar18 * 4 != lVar15);
        }
        if ((0 < (int)*(uint *)(param_5 + 1)) && ((longlong)(int)param_5[7] != 0)) {
          lVar18 = param_5[6];
          lVar17 = (longlong)(int)param_5[7] * 4;
          uVar13 = 0;
          do {
            lVar15 = 0;
            while (*(uint *)(lVar18 + lVar15) != uVar13) {
              lVar15 = lVar15 + 4;
              if (lVar17 == lVar15) {
                puVar16 = (undefined8 *)((ulonglong)uVar13 * 0x18 + *param_5);
                lVar15 = 0;
                do {
                  lVar22 = (longlong)*(int *)(lVar18 + lVar15);
                  lVar23 = *param_5;
                  *(undefined8 *)(lVar23 + 0x10 + lVar22 * 0x18) = puVar16[2];
                  uVar10 = puVar16[1];
                  puVar3 = (undefined8 *)(lVar23 + lVar22 * 0x18);
                  *puVar3 = *puVar16;
                  puVar3[1] = uVar10;
                  lVar15 = lVar15 + 4;
                } while (lVar17 != lVar15);
                goto LAB_143d879c5;
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 != *(uint *)(param_5 + 1));
        }
      }
LAB_143d879c5:
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_120 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143d879e9:
  if ((local_f0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143d878c9:
  if (uVar19 != uVar13) {
    iVar21 = uVar13 - (int)uVar19;
    if (2 < iVar21) {
      iVar21 = 3;
    }
    memmove(_Dst,(void *)(lVar18 + (longlong)(int)(uVar13 - iVar21) * 4),(longlong)iVar21 << 2);
    uVar13 = *(uint *)(param_5 + 3);
  }
  uVar13 = uVar13 - 3;
  *(uint *)(param_5 + 3) = uVar13;
LAB_143d878ff:
  bVar26 = (longlong)uVar19 < 6;
  uVar19 = uVar19 - 3;
  if (bVar26) goto LAB_143d87910;
  goto LAB_143d87863;
}



// FUNCTION 143d87b64 FUN_143d87b64 body=1005 status=ok
// SIG undefined FUN_143d87b64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143d87b64(longlong *param_1,double *param_2)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_118 [32];
  double *local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined1 *local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined1 local_a9;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined1 local_71;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  pdVar2 = (double *)*param_1;
  dVar11 = *param_2 * pdVar2[8];
  dVar12 = param_2[1] * pdVar2[9];
  dVar10 = param_2[2] * pdVar2[10];
  dVar3 = *pdVar2;
  dVar4 = pdVar2[1];
  dVar5 = pdVar2[2];
  dVar8 = pdVar2[3];
  dVar13 = dVar12 * dVar3 - dVar11 * dVar4;
  dVar15 = dVar10 * dVar4 - dVar12 * dVar5;
  dVar16 = dVar11 * dVar5 - dVar3 * dVar10;
  dVar15 = dVar15 + dVar15;
  dVar16 = dVar16 + dVar16;
  dVar13 = dVar13 + dVar13;
  local_90 = (dVar13 * dVar4 - dVar16 * dVar5) + dVar8 * dVar15 + dVar11 + pdVar2[4];
  local_88 = (dVar5 * dVar15 - dVar3 * dVar13) + pdVar2[3] * dVar16 + dVar12 + pdVar2[5];
  local_80 = dVar13 * dVar8 + dVar10 + (dVar16 * dVar3 - dVar15 * dVar4) + pdVar2[6];
  pdVar2 = (double *)param_1[1];
  local_98 = pdVar2[2] + local_80;
  local_a0 = pdVar2[1] + local_88;
  local_a8 = *pdVar2 + local_90;
  pdVar2 = (double *)param_1[2];
  local_80 = local_80 + pdVar2[2];
  local_88 = local_88 + pdVar2[1];
  local_90 = local_90 + *pdVar2;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = param_1[4];
  local_e8 = param_1[5];
  local_f8 = &local_90;
  local_d0 = &local_71;
  local_e0 = &DAT_14cad0f10;
  local_f0 = DAT_14cad0ec4;
  FUN_1401e2596(*(undefined8 *)param_1[3],&local_c8,&local_a9);
  if ((longlong)(int)uStack_c0 != 0) {
    lVar6 = 0;
    do {
      if ((*(byte *)(local_c8 + 0xad + lVar6) & 3) == 1) {
        dVar8 = (double)*(float *)(param_1[6] + 0x2c);
        pdVar2 = (double *)param_1[7];
        dVar12 = (*(double *)(local_c8 + 0x58 + lVar6) * dVar8 +
                 *(double *)(local_c8 + 0x10 + lVar6)) - pdVar2[4];
        dVar15 = (*(double *)(local_c8 + 0x60 + lVar6) * dVar8 +
                 *(double *)(local_c8 + 0x18 + lVar6)) - pdVar2[5];
        dVar11 = (dVar8 * *(double *)(local_c8 + 0x68 + lVar6) +
                 *(double *)(local_c8 + 0x20 + lVar6)) - pdVar2[6];
        dVar10 = *pdVar2;
        auVar1 = *(undefined1 (*) [16])(pdVar2 + 8);
        dVar3 = -dVar10;
        dVar4 = -pdVar2[1];
        dVar14 = pdVar2[2] * -1.0;
        dVar17 = pdVar2[3] * 1.0;
        dVar13 = dVar12 * dVar14 - dVar3 * dVar11;
        dVar16 = dVar15 * dVar3 - dVar12 * dVar4;
        dVar5 = dVar11 * dVar4 - dVar15 * dVar14;
        dVar5 = dVar5 + dVar5;
        dVar13 = dVar13 + dVar13;
        dVar16 = dVar16 + dVar16;
        auVar9 = divpd(_DAT_149934d80,auVar1);
        dVar8 = pdVar2[10];
        *param_2 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar9._0_8_) *
                   ((dVar16 * dVar4 - dVar13 * dVar14) + dVar17 * dVar5 + dVar12);
        param_2[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar9._8_8_)
                     * (dVar10 * dVar16 + dVar14 * dVar5 + dVar17 * dVar13 + dVar15);
        param_2[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar8)) &
                             (ulonglong)(1.0 / dVar8)) *
                     (dVar17 * dVar16 + dVar11 + (dVar13 * dVar3 - dVar5 * dVar4));
        uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
        goto LAB_143d87ef6;
      }
      lVar6 = lVar6 + 0x100;
    } while ((longlong)(int)uStack_c0 * 0x100 != lVar6);
  }
  uVar7 = 0;
LAB_143d87ef6:
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d87f52 FUN_143d87f52 body=196 status=ok
// SIG undefined FUN_143d87f52(void)

void FUN_143d87f52(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)param_5[1];
  *(uint *)(param_5 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
    FUN_1446f48e2(param_5,iVar3);
  }
  *(undefined4 *)(*param_5 + (longlong)iVar3 * 4) = param_2;
  cVar1 = *(char *)(param_1 + 0x20);
  iVar3 = (int)param_5[1];
  uVar2 = iVar3 + 1;
  *(uint *)(param_5 + 1) = uVar2;
  if (cVar1 == '\x01') {
    if (*(uint *)((longlong)param_5 + 0xc) < uVar2) {
      FUN_1446f48e2(param_5,iVar3);
    }
    *(undefined4 *)(*param_5 + (longlong)iVar3 * 4) = param_4;
    iVar3 = (int)param_5[1];
    uVar2 = iVar3 + 1;
    *(uint *)(param_5 + 1) = uVar2;
    param_4 = param_3;
  }
  else {
    if (*(uint *)((longlong)param_5 + 0xc) < uVar2) {
      FUN_1446f48e2(param_5,iVar3);
    }
    *(undefined4 *)(*param_5 + (longlong)iVar3 * 4) = param_3;
    iVar3 = (int)param_5[1];
    uVar2 = iVar3 + 1;
    *(uint *)(param_5 + 1) = uVar2;
  }
  if (*(uint *)((longlong)param_5 + 0xc) < uVar2) {
    FUN_1446f48e2(param_5,iVar3);
  }
  *(undefined4 *)(*param_5 + (longlong)iVar3 * 4) = param_4;
  return;
}



// FUNCTION 143d88016 FUN_143d88016 body=90 status=ok
// SIG undefined FUN_143d88016(void)

void FUN_143d88016(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_2 != param_1) {
    iVar1 = *(int *)(param_1 + 1);
    _Src = (void *)*param_1;
    *(int *)(param_2 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_2 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1447bda9e(param_2,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_2,_Src,(longlong)iVar1 << 2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143d88070 FUN_143d88070 body=15 status=ok
// SIG undefined FUN_143d88070(void)

undefined1 * FUN_143d88070(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 143d88080 FUN_143d88080 body=38 status=ok
// SIG undefined FUN_143d88080(void)

void FUN_143d88080(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x33) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}



// FUNCTION 143d880a6 FUN_143d880a6 body=3259 status=ok
// SIG undefined FUN_143d880a6(void)

undefined8 * FUN_143d880a6(undefined8 *param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  byte bVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  byte bVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  undefined1 *local_138;
  code *local_130;
  undefined8 *local_120;
  byte local_111;
  ulonglong local_110;
  uint local_104;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  ulonglong local_88 [2];
  code *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1436b1c00();
  *param_1 = &PTR_FUN_14b40e000;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  local_120 = param_1;
  if (param_2 != 0) {
    if (DAT_14cb63950 == 0) {
      local_140 = &local_78;
      local_78 = FUN_144a7958c;
      local_130 = FUN_14081d0ea;
      local_138 = &LAB_1464ec72a;
      local_148 = &LAB_1486f5f75;
      local_150 = &LAB_140945686;
      local_158 = L"Engine";
      local_160 = 0;
      local_168 = 0x10000004;
      local_170 = 0x10;
      local_178 = 0x19d0;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950);
    }
    if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) == DAT_14cb63950 + 0x30)) {
      local_120[0x7c] = 0;
      uVar23 = *(uint *)(param_2 + 0xc);
      *(uint *)(local_120 + 0x7c) = uVar23;
      if ((int)uVar23 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar24 = *(int *)(lVar14 + 0x10);
      if (iVar24 == 0) {
        LOCK();
        iVar24 = DAT_14c964868 + 1;
        UNLOCK();
        iVar17 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar24;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar24 = *(int *)(lVar14 + 0x10);
        bVar26 = iVar24 == 0;
        if (bVar26) {
          *(int *)(lVar14 + 0x10) = iVar17;
          iVar24 = 0;
        }
        UNLOCK();
        if (bVar26) {
          iVar24 = iVar17;
        }
        *(int *)((longlong)local_120 + 0x3e4) = iVar24;
        *(byte *)((longlong)local_120 + 0x77) = *(byte *)((longlong)local_120 + 0x77) | 0x10;
        if (iVar24 == 0) goto LAB_143d88153;
      }
      else {
        *(int *)((longlong)local_120 + 0x3e4) = iVar24;
        *(byte *)((longlong)local_120 + 0x77) = *(byte *)((longlong)local_120 + 0x77) | 0x10;
      }
      uVar23 = *(uint *)(local_120 + 0x7c);
      if ((((((int)uVar23 < 0) || (DAT_14c9647dc <= (int)uVar23)) ||
           (plVar8 = (longlong *)
                     ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
           plVar8 == (longlong *)0x0)) ||
          (((int)plVar8[2] != iVar24 || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) ||
         (plVar8 = (longlong *)*plVar8, plVar8 == (longlong *)0x0)) goto LAB_143d88153;
      uVar23 = *(uint *)(plVar8 + 0x2c2);
      uVar9 = (ulonglong)uVar23;
      if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar9);
      }
      plVar19 = local_120 + 0x74;
      if (*(int *)((longlong)local_120 + 0x3ac) < (int)uVar23) {
        FUN_141890c88(plVar19);
        uVar9 = (ulonglong)*(uint *)(plVar8 + 0x2c2);
      }
      if (0 < (int)uVar9) {
        lVar14 = 0;
        lVar18 = 0;
        do {
          lVar16 = *(longlong *)(plVar8[0x2c1] + lVar14);
          uVar6 = *(undefined8 *)(lVar16 + 0x40);
          iVar24 = *(int *)(local_120 + 0x75);
          lVar25 = (longlong)iVar24;
          *(uint *)(local_120 + 0x75) = iVar24 + 1U;
          if (*(uint *)((longlong)local_120 + 0x3ac) < iVar24 + 1U) {
            FUN_1488b7014(plVar19,iVar24);
          }
          lVar2 = *plVar19;
          *(longlong *)(lVar2 + lVar25 * 0x18) = lVar16;
          *(undefined8 *)(lVar2 + 8 + lVar25 * 0x18) = uVar6;
          *(int *)(lVar2 + 0x10 + lVar25 * 0x18) = (int)lVar18;
          lVar18 = lVar18 + 1;
          uVar9 = (ulonglong)(int)plVar8[0x2c2];
          lVar14 = lVar14 + 0x18;
        } while (lVar18 < (longlong)uVar9);
      }
      iVar24 = (int)uVar9;
      if (iVar24 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar9 & 0xffffffff);
      }
      plVar19 = local_120 + 0x76;
      if (*(int *)((longlong)local_120 + 0x3bc) < iVar24) {
        FUN_141890dd6(plVar19);
        iVar24 = (int)plVar8[0x2c2];
      }
      local_f8 = plVar8;
      if (iVar24 == 0) {
        uVar9 = 0;
      }
      else {
        lVar14 = plVar8[0x2c1];
        lVar18 = 0;
        uVar9 = 0;
        do {
          iVar17 = *(int *)(local_120 + 0x77);
          *(uint *)(local_120 + 0x77) = iVar17 + 1U;
          if (*(uint *)((longlong)local_120 + 0x3bc) < iVar17 + 1U) {
            FUN_1488b70a8(plVar19,iVar17);
          }
          lVar16 = *(longlong *)(lVar14 + lVar18);
          *(longlong *)(*plVar19 + (longlong)iVar17 * 8) = lVar16;
          uVar23 = *(uint *)(*(longlong *)(lVar16 + 0x40) + 8);
          if ((int)uVar9 < (int)uVar23) {
            uVar9 = (ulonglong)uVar23;
          }
          lVar18 = lVar18 + 0x18;
        } while ((longlong)iVar24 * 0x18 != lVar18);
      }
      puVar12 = local_120;
      iVar24 = DAT_14cae3d68;
      bVar7 = (byte)*(undefined4 *)(param_2 + 0x5c8);
      bVar13 = DAT_14cae3d68 != 0 & bVar7 >> 1;
      if (bVar13 != 0) {
        *(byte *)((longlong)local_120 + 0x73) = *(byte *)((longlong)local_120 + 0x73) | 0x40;
        *(byte *)(local_120 + 0xe) = *(byte *)(local_120 + 0xe) | 1;
        bVar7 = (byte)*(undefined4 *)(param_2 + 0x5c8);
      }
      if ((iVar24 == 2 & bVar7) == 1) {
        *(byte *)((longlong)local_120 + 0x73) = *(byte *)((longlong)local_120 + 0x73) | 0x20;
        *(byte *)(local_120 + 0xe) = *(byte *)(local_120 + 0xe) | 1;
        bVar13 = 1;
      }
      bVar7 = *(byte *)(param_2 + 0x2d6);
      local_100 = local_120 + 0x5c;
      iVar24 = *(int *)((longlong)local_120 + 0x2ec);
      uVar23 = (uint)uVar9;
      if (iVar24 < (int)uVar23) {
        FUN_1417efad6(local_100);
        iVar24 = *(int *)((longlong)puVar12 + 0x2ec);
      }
      plVar19 = local_f8;
      plVar8 = local_100;
      iVar17 = *(int *)(puVar12 + 0x5d);
      *(uint *)(puVar12 + 0x5d) = iVar17 + uVar23;
      if ((uint)(iVar24 - iVar17) < uVar23) {
        FUN_147d1f21a(local_100);
        memset((void *)((longlong)iVar17 * 0x10 + *plVar8),0,uVar9 << 4);
LAB_143d8846a:
        local_111 = (bVar13 | (bVar7 & 2) >> 1) ^ 1;
        local_c8 = local_120 + 0x62;
        local_d8 = 1;
        if (1 < (int)uVar23) {
          local_d8 = uVar9;
        }
        uVar10 = (ulonglong)*(uint *)(plVar19 + 0x2c2);
        local_104 = 0;
        uVar9 = 0;
        uVar6 = 0;
        do {
          iVar24 = 0;
          local_110 = uVar9;
          if ((int)uVar10 != 0) {
            plVar15 = (longlong *)plVar19[0x2c1];
            plVar8 = plVar15 + (longlong)(int)uVar10 * 3;
            iVar24 = 0;
            do {
              uVar23 = *(uint *)(*(longlong **)(*plVar15 + 0x40) + 1);
              if ((ulonglong)uVar23 != 0) {
                uVar21 = uVar23 - 1;
                uVar5 = uVar21;
                if ((int)(uint)uVar9 < (int)uVar21) {
                  uVar5 = (uint)uVar9;
                }
                if ((int)uVar5 < 1) {
                  uVar5 = 0;
                }
                if ((int)uVar5 < (int)uVar23) {
                  lVar14 = **(longlong **)(*plVar15 + 0x40);
                  uVar10 = (ulonglong)uVar5;
                  if ((int)local_104 < (int)uVar21) {
                    uVar21 = local_104;
                  }
                  uVar22 = (ulonglong)uVar21;
                  if ((int)uVar21 < 1) {
                    uVar22 = 0;
                  }
                  lVar18 = uVar22 << 0x20;
                  do {
                    if (*(int *)(*(longlong *)(lVar14 + uVar10 * 8) + 0xec) != 0) {
                      if (lVar18 >> 0x20 < (longlong)uVar9) {
                        local_88[0] = *(ulonglong *)(plVar15[1] + 0x18);
                        FUN_1400021e4(local_88,&local_78);
                        if (local_78 != (code *)0x0) {
                          FUN_1400020a8();
                        }
                        lVar14 = **(longlong **)(*plVar15 + 0x40);
                        uVar9 = local_110;
                      }
                      iVar24 = iVar24 + *(int *)(*(longlong *)(lVar14 + (lVar18 >> 0x20) * 8) + 0x18
                                                );
                      goto LAB_143d885fd;
                    }
                    uVar10 = uVar10 + 1;
                    lVar18 = lVar18 + 0x100000000;
                  } while (uVar23 != uVar10);
                }
              }
              local_88[0] = *(ulonglong *)(plVar15[1] + 0x18);
              FUN_1400021e4(local_88,&local_78);
              uVar9 = local_110;
              plVar19 = local_f8;
              if (local_78 != (code *)0x0) {
                FUN_1400020a8();
                uVar9 = local_110;
                plVar19 = local_f8;
              }
LAB_143d885fd:
              plVar15 = plVar15 + 3;
            } while (plVar15 != plVar8);
            if (iVar24 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar24);
            }
          }
          plVar8 = (longlong *)(*local_100 + uVar9 * 0x10);
          if (*(int *)(*local_100 + 0xc + uVar9 * 0x10) < iVar24) {
            FUN_1417efbb8(plVar8,iVar24);
            uVar9 = local_110;
          }
          uVar10 = (ulonglong)*(uint *)(plVar19 + 0x2c2);
          puVar12 = local_120;
          if (0 < (int)*(uint *)(plVar19 + 0x2c2)) {
            lVar14 = 0;
            local_c0 = plVar8;
            do {
              plVar8 = (longlong *)(lVar14 * 0x18 + plVar19[0x2c1]);
              cVar4 = FUN_1401b1808(plVar19,plVar8);
              local_d0 = lVar14;
              if (cVar4 != '\0') {
                uVar23 = *(uint *)(*(longlong **)(*plVar8 + 0x40) + 1);
                uVar9 = 0xffffffff;
                if ((ulonglong)uVar23 != 0) {
                  uVar5 = uVar23 - 1;
                  if ((int)(uint)local_110 < (int)(uVar23 - 1)) {
                    uVar5 = (uint)local_110;
                  }
                  if ((int)uVar5 < 1) {
                    uVar5 = 0;
                  }
                  if ((int)uVar5 < (int)uVar23) {
                    uVar10 = (ulonglong)uVar5;
                    do {
                      if (*(int *)(*(longlong *)(**(longlong **)(*plVar8 + 0x40) + uVar10 * 8) +
                                  0xec) != 0) {
                        uVar9 = uVar10 & 0xffffffff;
                        break;
                      }
                      uVar10 = uVar10 + 1;
                    } while (uVar23 != uVar10);
                  }
                }
                local_f0 = (longlong *)plVar8[1];
                lVar14 = (**(code **)(*local_f0 + 0x318))(local_f0,uVar9);
                if (lVar14 != 0) {
                  local_98 = *plVar8;
                  local_a0 = (longlong)(int)uVar9;
                  lVar18 = *(longlong *)(**(longlong **)(local_98 + 0x40) + local_a0 * 8);
                  if (0 < *(int *)(lVar18 + 0x18)) {
                    lVar16 = 0xc;
                    lVar25 = 0;
                    local_b8 = lVar18;
                    local_b0 = lVar14;
                    local_a8 = plVar8;
                    do {
                      lVar14 = local_b0;
                      local_e0 = *(longlong *)(local_b8 + 0x10);
                      uVar1 = *(ushort *)(local_e0 + -0x30 + lVar16 * 4);
                      uVar23 = (uint)uVar1;
                      if (lVar25 < *(int *)(local_b0 + 0x10)) {
                        lVar18 = (**(code **)(*local_f0 + 0x3b0))();
                        uVar5 = *(uint *)(*(longlong *)(lVar14 + 8) + lVar25 * 4);
                        uVar23 = (uint)uVar1;
                        if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar18 + 8))) {
                          lVar14 = (**(code **)(*local_f0 + 0x3b0))();
                          uVar23 = *(uint *)(lVar14 + 8);
                          if ((int)uVar5 < (int)*(uint *)(lVar14 + 8)) {
                            uVar23 = uVar5;
                          }
                          if ((int)uVar23 < 1) {
                            uVar23 = 0;
                          }
                        }
                      }
                      if ((int)uVar23 < *(int *)(*(longlong *)(local_98 + 8) + 8 + local_a0 * 0x18))
                      {
                        bVar7 = *(byte *)(*(longlong *)
                                           (*(longlong *)(local_98 + 8) + local_a0 * 0x18) +
                                         (ulonglong)uVar23);
                      }
                      else {
                        bVar7 = 0;
                      }
                      iVar24 = (int)plVar8[2] + uVar23;
                      local_e8 = uVar6;
                      local_90 = (longlong *)(**(code **)(*local_f8 + 0x610))(local_f8,iVar24);
                      if (((local_90 != (longlong *)0x0) && (DAT_14cb0a8e0 != '\0')) &&
                         (uVar5 = (**(code **)(*local_90 + 0x408))(local_90), uVar5 < 2)) {
                        FUN_14003fbd6();
                        plVar8 = DAT_14caea080;
                        local_90 = DAT_14caea080;
                        uVar6 = (**(code **)(*DAT_14caea080 + 0x2b0))(DAT_14caea080);
                        FUN_14582fb3e(plVar8,&local_78,uVar6);
                        puVar12[0x5a] = puVar12[0x5a] | (ulonglong)local_78;
                        bVar13 = (byte)((ulonglong)local_78 >> 0x10);
                        if (bVar13 <= *(byte *)((longlong)puVar12 + 0x2d2)) {
                          bVar13 = *(byte *)((longlong)puVar12 + 0x2d2);
                        }
                        *(byte *)((longlong)puVar12 + 0x2d2) = bVar13;
                      }
                      if (*(int *)(local_e0 + lVar16 * 4) == 0) {
                        if (local_90 != (longlong *)0x0) {
                          bVar26 = false;
                          goto LAB_143d888ce;
                        }
LAB_143d889d7:
                        local_78 = (code *)0x0;
                        uStack_70 = 0;
LAB_143d889df:
                        FUN_14003fbd6();
                        plVar8 = DAT_14caea080;
                        local_90 = DAT_14caea080;
                        uVar6 = (**(code **)(*DAT_14caea080 + 0x2b0))(DAT_14caea080);
                        FUN_14582fb3e(plVar8,local_88,uVar6);
                        puVar12[0x5a] = puVar12[0x5a] | local_88[0];
                        bVar13 = (byte)(local_88[0] >> 0x10);
                        if (bVar13 <= *(byte *)((longlong)puVar12 + 0x2d2)) {
                          bVar13 = *(byte *)((longlong)puVar12 + 0x2d2);
                        }
                        *(byte *)((longlong)puVar12 + 0x2d2) = bVar13;
                        if (local_78 != (code *)0x0) {
                          FUN_1400020a8();
                        }
                      }
                      else {
                        iVar17 = *(int *)(*(longlong *)(local_e0 + -8 + lVar16 * 4) + 8);
                        bVar26 = iVar17 != 0;
                        if (local_90 == (longlong *)0x0) {
                          puVar12 = local_120;
                          if (iVar17 == 0) goto LAB_143d889d7;
                          bVar13 = 0;
LAB_143d88913:
                          bVar20 = 0;
                          plVar8 = (longlong *)0x0;
                          puVar12 = local_120;
LAB_143d88917:
                          bVar13 = bVar13 & bVar20;
                          bVar3 = true;
                        }
                        else {
LAB_143d888ce:
                          bVar3 = false;
                          bVar13 = (**(code **)(*local_90 + 0x340))(local_90,0);
                          puVar12 = local_120;
                          plVar8 = local_90;
                          if (bVar26) {
                            if (local_90 == (longlong *)0x0) goto LAB_143d88913;
                            bVar20 = (**(code **)(*local_90 + 0x340))(local_90,9);
                            plVar8 = local_90;
                            goto LAB_143d88917;
                          }
                        }
                        if ((bVar13 & plVar8 != (longlong *)0x0) == 0) {
                          local_78 = (code *)0x0;
                          uStack_70 = 0;
                          if (plVar8 != (longlong *)0x0) {
                            cVar4 = (**(code **)(*plVar8 + 0x340))(plVar8,0);
                            if (cVar4 == '\0') {
                              FUN_1400020e8(&local_78,L"SkeletalMesh",0xc);
                            }
                            if ((bVar3) &&
                               (cVar4 = (**(code **)(*local_90 + 0x340))(local_90,9), cVar4 == '\0')
                               ) {
                              puVar11 = (undefined2 *)&DAT_14aa8c978;
                              bVar26 = (int)uStack_70 - 2U < 0x7fffffff;
                              if (!bVar26) {
                                puVar11 = &DAT_149dfb77a;
                              }
                              FUN_1400020e8(&local_78,puVar11,bVar26 * '\x03');
                              FUN_1400020e8(&local_78,L"Clothing",8);
                            }
                          }
                          goto LAB_143d889df;
                        }
                      }
                      if (((bVar7 | local_111) & 1) == 0) {
                        lVar14 = (**(code **)(*local_f0 + 0x3b0))();
                        bVar7 = 1;
                        if ((int)uVar23 < *(int *)(lVar14 + 8)) {
                          bVar7 = *(byte *)(local_e0 + -0x23 + lVar16 * 4);
                        }
                      }
                      else {
                        bVar7 = 0;
                      }
                      plVar19 = local_c0;
                      uVar6 = local_e8;
                      *(byte *)((longlong)puVar12 + 0x2cc) =
                           *(byte *)((longlong)puVar12 + 0x2cc) |
                           *(byte *)((longlong)puVar12 + 0x2d5) >> 5 & 1;
                      iVar17 = (int)local_c0[1];
                      lVar14 = (longlong)iVar17;
                      *(uint *)(local_c0 + 1) = iVar17 + 1U;
                      if (*(uint *)((longlong)local_c0 + 0xc) < iVar17 + 1U) {
                        FUN_147d1f2a0(local_c0,iVar17);
                      }
                      plVar8 = local_a8;
                      uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),(byte)uVar6 | bVar7);
                      lVar18 = *plVar19;
                      *(longlong **)(lVar18 + lVar14 * 0x18) = local_90;
                      *(byte *)(lVar18 + 8 + lVar14 * 0x18) = bVar7;
                      *(int *)(lVar18 + 0xc + lVar14 * 0x18) = iVar24;
                      *(undefined1 *)(lVar18 + 0x10 + lVar14 * 0x18) = 0;
                      *(undefined1 *)(lVar18 + 0x10 + lVar14 * 0x18) =
                           *(undefined1 *)((longlong)local_a8 + 0x14);
                      FUN_140282c6a(local_c8,&local_78,&local_90);
                      lVar25 = lVar25 + 1;
                      lVar16 = lVar16 + 0x3e;
                    } while (lVar25 < *(int *)(local_b8 + 0x18));
                  }
                }
              }
              lVar14 = local_d0 + 1;
              uVar10 = (ulonglong)(int)local_f8[0x2c2];
              uVar9 = local_110;
              plVar19 = local_f8;
            } while (lVar14 < (longlong)uVar10);
          }
          uVar9 = uVar9 + 1;
          local_104 = local_104 + 1;
        } while (uVar9 != local_d8);
        bVar20 = (byte)uVar6 & 1;
      }
      else {
        bVar20 = 0;
        memset((void *)((longlong)iVar17 * 0x10 + *local_100),0,uVar9 << 4);
        puVar12 = local_120;
        if (uVar23 != 0) goto LAB_143d8846a;
      }
      *(byte *)(puVar12 + 0xe) = *(byte *)(puVar12 + 0xe) & (bVar20 | 0xfe);
      if (((int)plVar19[0x65] == *(int *)((longlong)plVar19 + 0x32c)) ||
         (iVar24 = FUN_141890854(), iVar24 == 0)) {
        puVar12 = local_120 + 0x7a;
        FUN_14113129a(local_120 + 0x78,plVar19 + 0x301);
        FUN_14113129a(puVar12,plVar19 + 0x303);
      }
      goto LAB_143d88153;
    }
  }
  local_120[0x7c] = 0;
  *(byte *)((longlong)local_120 + 0x77) = *(byte *)((longlong)local_120 + 0x77) | 0x10;
LAB_143d88153:
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_120;
}



// FUNCTION 143d88d78 FUN_143d88d78 body=484 status=ok
// SIG undefined FUN_143d88d78(void)

void FUN_143d88d78(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140824bde(&local_48,100);
  LOCK();
  iVar1 = DAT_14cb80fb0 + 1;
  UNLOCK();
  iVar10 = DAT_14cb80fb0 + 1;
  DAT_14cb80fb0 = iVar1;
  if ((int)param_3[8] != iVar10) {
    *(int *)(param_3 + 8) = iVar10;
    (**(code **)(*param_3 + 0x2b0))(param_3,&local_48);
  }
  lVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar2 = *(uint *)(param_4 + 1);
  *(char *)(lVar3 + 8) = *(char *)(lVar3 + 8) + '\x01';
  bVar12 = (uVar2 & 0xff00) != 0;
  *(char *)(lVar3 + 9) = bVar12 + '\x01';
  uVar7 = (uVar2 & 0xffff) << bVar12;
  uVar2 = *(uint *)(lVar3 + 0x18);
  plVar5 = (longlong *)(lVar3 + 0x10);
  if ((int)uVar2 < (int)uVar7) {
    *(uint *)(lVar3 + 0x18) = uVar7;
    if (*(int *)(lVar3 + 0x1c) - uVar2 < uVar7 - uVar2) {
      FUN_1447403be(plVar5);
    }
    memset((void *)((longlong)(int)uVar2 + *plVar5),0,(longlong)(int)(uVar7 - uVar2));
  }
  else if (uVar7 < uVar2) {
    *(uint *)(lVar3 + 0x18) = uVar7;
    FUN_140b3f66e(plVar5);
  }
  uVar2 = *(uint *)(lVar3 + 0x18);
  if (*(byte *)(lVar3 + 9) == 1) {
    if ((uVar2 & 0xffff) != 0) {
      lVar3 = *plVar5;
      uVar4 = 0;
      do {
        *(undefined1 *)(lVar3 + uVar4) = 0;
        uVar8 = 0xff;
        if ((longlong)(int)uStack_40 != 0) {
          lVar11 = (longlong)(int)uStack_40 << 3;
          lVar6 = 0;
          do {
            if (*(longlong *)(local_48 + lVar6 * 8) == *(longlong *)(*param_4 + uVar4 * 8)) {
              uVar8 = (undefined1)lVar6;
              break;
            }
            lVar6 = lVar6 + 1;
            lVar11 = lVar11 + -8;
          } while (lVar11 != 0);
        }
        *(undefined1 *)(lVar3 + uVar4) = uVar8;
        uVar4 = uVar4 + 1;
      } while (uVar4 != ((ulonglong)uVar2 & 0xffff));
    }
  }
  else {
    uVar2 = (int)uVar2 / (int)(uint)*(byte *)(lVar3 + 9) & 0xffff;
    if (uVar2 != 0) {
      lVar3 = *plVar5;
      uVar4 = 0;
      do {
        *(undefined2 *)(lVar3 + uVar4 * 2) = 0;
        uVar9 = 0xffff;
        if ((longlong)(int)uStack_40 != 0) {
          lVar11 = (longlong)(int)uStack_40 << 3;
          lVar6 = 0;
          do {
            if (*(longlong *)(local_48 + lVar6 * 8) == *(longlong *)(*param_4 + uVar4 * 8)) {
              uVar9 = (undefined2)lVar6;
              break;
            }
            lVar6 = lVar6 + 1;
            lVar11 = lVar11 + -8;
          } while (lVar11 != 0);
        }
        *(undefined2 *)(lVar3 + uVar4 * 2) = uVar9;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar2);
    }
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d88f6e FUN_143d88f6e body=91 status=ok
// SIG undefined FUN_143d88f6e(void)

void FUN_143d88f6e(void)

{
  if (DAT_14cb81088 != 0) {
    if (DAT_14cb81080 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb81080)(DAT_14cb81080,0);
    FUN_1446efa72(&DAT_14cb81080,0,0,0x10);
    DAT_14cb81088 = 0;
  }
  if (DAT_14cb81080 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143d88fca FUN_143d88fca body=145 status=ok
// SIG undefined FUN_143d88fca(void)

undefined8 * FUN_143d88fca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b40df30;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_143d8d9f6(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d89086 FUN_143d89086 body=62 status=ok
// SIG undefined FUN_143d89086(void)

void FUN_143d89086(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*param_2 != 0) {
    lVar1 = FUN_140a40fb0();
    if (lVar1 != 0) {
      FUN_14084412e(lVar1 + 0x1288,param_1 + 1,*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 143d890ee FUN_143d890ee body=29 status=ok
// SIG undefined FUN_143d890ee(void)

undefined8 FUN_143d890ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d891ac FUN_143d891ac body=194 status=ok
// SIG undefined FUN_143d891ac(void)

void FUN_143d891ac(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(undefined8 *)(param_2 + 0x10);
  FUN_144869592(*param_1 + 0x228,local_4c,&local_48,0);
  iVar1 = *(int *)(param_2 + 0x30);
  if ((longlong)iVar1 != 0) {
    puVar2 = (undefined8 *)param_1[1];
    lVar3 = *(longlong *)(param_2 + 0x28);
    lVar8 = 0;
    do {
      if ((*(char *)(lVar3 + 8 + lVar8) == '\x02') &&
         (lVar4 = *(longlong *)(lVar3 + lVar8), lVar4 != 0)) {
        pcVar5 = (code *)*puVar2;
        plVar7 = (longlong *)puVar2[2];
        if ((longlong *)puVar2[2] == (longlong *)0x0) {
          plVar7 = puVar2 + 4;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        (*pcVar5)(uVar6,lVar4);
      }
      lVar8 = lVar8 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d8929a FUN_143d8929a body=29 status=ok
// SIG undefined FUN_143d8929a(void)

undefined8 FUN_143d8929a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d892b8 FUN_143d892b8 body=190 status=ok
// SIG undefined FUN_143d892b8(void)

void FUN_143d892b8(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(undefined8 *)(param_2 + 0x10);
  FUN_144869592(*param_1 + 0x228,local_4c,&local_48,0);
  iVar1 = *(int *)(param_2 + 0x30);
  if ((longlong)iVar1 != 0) {
    puVar2 = (undefined8 *)param_1[1];
    lVar3 = *(longlong *)(param_2 + 0x28);
    lVar8 = 0;
    do {
      if ((*(char *)(lVar3 + 8 + lVar8) == '\x03') &&
         (lVar4 = *(longlong *)(lVar3 + lVar8), lVar4 != 0)) {
        pcVar5 = (code *)*puVar2;
        plVar7 = (longlong *)puVar2[2];
        if ((longlong *)puVar2[2] == (longlong *)0x0) {
          plVar7 = puVar2 + 4;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        (*pcVar5)(uVar6,lVar4);
      }
      lVar8 = lVar8 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d893a2 FUN_143d893a2 body=29 status=ok
// SIG undefined FUN_143d893a2(void)

undefined8 FUN_143d893a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d893c0 FUN_143d893c0 body=82 status=ok
// SIG undefined FUN_143d893c0(void)

void FUN_143d893c0(longlong *param_1)

{
  undefined1 auStack_48 [40];
  longlong *local_20;
  longlong *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 2;
  local_18 = local_20;
  FUN_146247fda(*param_1 + 0x80,local_c);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d89414 FUN_143d89414 body=78 status=ok
// SIG undefined FUN_143d89414(void)

undefined8 * FUN_143d89414(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b40e700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  FUN_145a14a00(puVar1 + 4,param_1 + 0x20);
  return puVar1 + 2;
}



// FUNCTION 143d89468 FUN_143d89468 body=29 status=ok
// SIG undefined FUN_143d89468(void)

void FUN_143d89468(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143d89486 FUN_143d89486 body=52 status=ok
// SIG undefined FUN_143d89486(void)

undefined8 * FUN_143d89486(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b40e700;
  FUN_145a1457c(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d894ba FUN_143d894ba body=273 status=ok
// SIG undefined FUN_143d894ba(void)

void FUN_143d894ba(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x88) != *(int *)(lVar3 + 0xb4)) {
    param_1 = param_1 + 1;
    lVar4 = *param_1;
    uVar6 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar8 = (uint)lVar4 & 0xffff;
    lVar7 = lVar3 + 0xb8;
    if (*(longlong *)(lVar3 + 0xc0) != 0) {
      lVar7 = *(longlong *)(lVar3 + 0xc0);
    }
    iVar2 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar3 + 200) - 1U &
                             (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar8) +
                             (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar2 != -1) {
      lVar7 = *param_2;
      lVar5 = *(longlong *)(lVar3 + 0x80);
      do {
        lVar1 = lVar5 + (longlong)iVar2 * 0xe0;
        if (*(longlong *)(lVar5 + (longlong)iVar2 * 0xe0) == lVar4) {
          if (lVar1 + 0x10 == 0 || lVar1 == 0) {
            return;
          }
          FUN_1488b5df6(lVar3 + 0x20,param_1);
          if (lVar7 != 0) {
            FUN_140aeefbc(lVar7,0,1);
          }
          FUN_14144ff90(lVar3,lVar1 + 0x10);
          FUN_1488b5e7c((longlong *)(lVar3 + 0x80),param_1);
          return;
        }
        iVar2 = *(int *)(lVar1 + 0xd0);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 143d895f6 FUN_143d895f6 body=29 status=ok
// SIG undefined FUN_143d895f6(void)

undefined8 FUN_143d895f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d89654 FUN_143d89654 body=29 status=ok
// SIG undefined FUN_143d89654(void)

undefined8 FUN_143d89654(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d89672 FUN_143d89672 body=71 status=ok
// SIG undefined FUN_143d89672(void)

undefined8 * FUN_143d89672(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b40e780;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d89838 FUN_143d89838 body=146 status=ok
// SIG undefined FUN_143d89838(void)

void FUN_143d89838(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e780;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
  }
  puVar1[0xc] = *(undefined8 *)(param_1 + 0x60);
  return;
}



// FUNCTION 143d898ca FUN_143d898ca body=146 status=ok
// SIG undefined FUN_143d898ca(void)

void FUN_143d898ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e780;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
  }
  puVar1[0xc] = *(undefined8 *)(param_1 + 0x60);
  return;
}



// FUNCTION 143d8995c FUN_143d8995c body=184 status=ok
// SIG undefined FUN_143d8995c(void)

void FUN_143d8995c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40e780;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar4)(puVar4,p_Var1 + 1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  p_Var1[2].Type = (short)uVar3;
  p_Var1[2].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var1[2].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d89a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d89a14 FUN_143d89a14 body=95 status=ok
// SIG undefined FUN_143d89a14(void)

void FUN_143d89a14(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x60);
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d89a74 FUN_143d89a74 body=310 status=ok
// SIG undefined FUN_143d89a74(void)

ulonglong FUN_143d89a74(longlong param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143d89ba4;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_143d89ba4;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar9 = local_30;
  }
  else {
LAB_143d89ba4:
    lVar9 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d89b56;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      local_30 = *(longlong *)(param_1 + 0x60);
      pcVar3 = *(code **)(param_1 + 0x20);
      plVar10 = (longlong *)(param_1 + 0x40);
      if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
        plVar10 = *(longlong **)(param_1 + 0x30);
      }
      uVar6 = (**(code **)(*plVar10 + 8))(plVar10);
      (*pcVar3)(uVar6,&local_30);
      uVar8 = CONCAT71((int7)((ulonglong)&local_30 >> 8),1);
      goto LAB_143d89b56;
    }
  }
  uVar8 = 0;
LAB_143d89b56:
  if ((lVar9 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar9);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d89bac FUN_143d89bac body=71 status=ok
// SIG undefined FUN_143d89bac(void)

undefined8 * FUN_143d89bac(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b40e7f0;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d89d72 FUN_143d89d72 body=146 status=ok
// SIG undefined FUN_143d89d72(void)

void FUN_143d89d72(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e7f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
  }
  puVar1[0xc] = *(undefined8 *)(param_1 + 0x60);
  return;
}



// FUNCTION 143d89e04 FUN_143d89e04 body=146 status=ok
// SIG undefined FUN_143d89e04(void)

void FUN_143d89e04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e7f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
  }
  puVar1[0xc] = *(undefined8 *)(param_1 + 0x60);
  return;
}



// FUNCTION 143d89e96 FUN_143d89e96 body=184 status=ok
// SIG undefined FUN_143d89e96(void)

void FUN_143d89e96(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40e7f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar4)(puVar4,p_Var1 + 1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  p_Var1[2].Type = (short)uVar3;
  p_Var1[2].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var1[2].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d89f3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d89f4e FUN_143d89f4e body=95 status=ok
// SIG undefined FUN_143d89f4e(void)

void FUN_143d89f4e(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x60);
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d89fae FUN_143d89fae body=310 status=ok
// SIG undefined FUN_143d89fae(void)

ulonglong FUN_143d89fae(longlong param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143d8a0de;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_143d8a0de;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar9 = local_30;
  }
  else {
LAB_143d8a0de:
    lVar9 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d8a090;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      local_30 = *(longlong *)(param_1 + 0x60);
      pcVar3 = *(code **)(param_1 + 0x20);
      plVar10 = (longlong *)(param_1 + 0x40);
      if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
        plVar10 = *(longlong **)(param_1 + 0x30);
      }
      uVar6 = (**(code **)(*plVar10 + 8))(plVar10);
      (*pcVar3)(uVar6,&local_30);
      uVar8 = CONCAT71((int7)((ulonglong)&local_30 >> 8),1);
      goto LAB_143d8a090;
    }
  }
  uVar8 = 0;
LAB_143d8a090:
  if ((lVar9 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar9);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d8a0e6 FUN_143d8a0e6 body=29 status=ok
// SIG undefined FUN_143d8a0e6(void)

undefined8 FUN_143d8a0e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d8a282 FUN_143d8a282 body=116 status=ok
// SIG undefined FUN_143d8a282(void)

void FUN_143d8a282(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40e8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e860;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143d8a2f6 FUN_143d8a2f6 body=116 status=ok
// SIG undefined FUN_143d8a2f6(void)

void FUN_143d8a2f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40e8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e860;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143d8a36a FUN_143d8a36a body=149 status=ok
// SIG undefined FUN_143d8a36a(void)

void FUN_143d8a36a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b40e8d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40e860;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d8a3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d8a400 FUN_143d8a400 body=143 status=ok
// SIG undefined FUN_143d8a400(void)

void FUN_143d8a400(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x20);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x24))) &&
          ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0)) {
        lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_1 + 0x28),1);
        if (lVar2 != 0) {
          FUN_14872819e((uint *)(param_1 + 0x20),param_2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143d8a490 FUN_143d8a490 body=395 status=ok
// SIG undefined FUN_143d8a490(void)

undefined8 FUN_143d8a490(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143d8a615;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d8a615;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar7 = local_30;
  }
  else {
LAB_143d8a615:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d8a5bb;
    lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar8 != 0) &&
       ((*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if ((*(longlong *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
        uVar2 = *(uint *)(param_1 + 0x20);
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar5 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar5 != (longlong *)0x0) &&
             ((((int)plVar5[2] == *(int *)(param_1 + 0x24) &&
               ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) && (*plVar5 != 0)))) {
            lVar8 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_1 + 0x28),1);
            if (lVar8 != 0) {
              FUN_14872819e((uint *)(param_1 + 0x20),param_2);
            }
          }
        }
      }
      goto LAB_143d8a5bb;
    }
  }
  uVar6 = 0;
LAB_143d8a5bb:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d8a61c FUN_143d8a61c body=29 status=ok
// SIG undefined FUN_143d8a61c(void)

undefined8 FUN_143d8a61c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d8a64e FUN_143d8a64e body=93 status=ok
// SIG undefined FUN_143d8a64e(void)

void FUN_143d8a64e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d8a6ac FUN_143d8a6ac body=93 status=ok
// SIG undefined FUN_143d8a6ac(void)

void FUN_143d8a6ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d8a70a FUN_143d8a70a body=126 status=ok
// SIG undefined FUN_143d8a70a(void)

void FUN_143d8a70a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40e940;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d8a779. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d8a792 FUN_143d8a792 body=20 status=ok
// SIG undefined FUN_143d8a792(void)

undefined1 FUN_143d8a792(longlong param_1)

{
  FUN_143d8a7a6(param_1 + 0x18);
  return 1;
}



// FUNCTION 143d8a7a6 FUN_143d8a7a6 body=77 status=ok
// SIG undefined FUN_143d8a7a6(void)

void FUN_143d8a7a6(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *param_1;
  FUN_146552a02(uVar1,param_1[1] + 0xb98);
  lVar2 = param_1[1];
  lVar3 = FUN_140c8331a(uVar1);
  if (lVar3 == 0) {
    return;
  }
  FUN_145d6cc76(lVar3,lVar2 + 0xb50);
  return;
}



// FUNCTION 143d8a7f4 FUN_143d8a7f4 body=1992 status=ok
// SIG undefined FUN_143d8a7f4(void)

void FUN_143d8a7f4(longlong *param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  double dVar13;
  double *pdVar14;
  uint uVar15;
  double dVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_188 [32];
  uint local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined8 *local_130;
  code *local_128;
  code *local_120;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar12 = param_1[1];
  if ((lVar12 == 0) || (param_1[2] == 0)) goto LAB_143d8aa12;
  lVar18 = *param_1;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_c8 = 0;
  if (DAT_14cac6e60 == 0.0) {
    local_130 = &local_b8;
    local_b8 = FUN_144a7958c;
    local_120 = FUN_14081d0ea;
    local_128 = FUN_142b47bc4;
    local_138 = &LAB_1478989f1;
    local_140 = &LAB_146391124;
    local_148 = L"Engine";
    local_150 = 0x10000000000;
    local_158 = 0x10000005;
    local_160 = 0x10;
    local_168 = 0x620;
    FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
  }
  dVar1 = DAT_14cac6e60;
  if ((DAT_14cac6e60 == 0.0) || (DAT_14c950c29 == '\0')) {
    if (DAT_14cac6e60 != 0.0) goto LAB_143d8a8ae;
    if (DAT_14cad00c8 == 0.0) goto LAB_143d8af21;
    dVar16 = 0.0;
LAB_143d8a8ed:
    if (dVar16 != DAT_14cad00c8) goto LAB_143d8a8f2;
    local_98 = dVar1;
    if ((dVar1 != 0.0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(dVar1);
    }
    FUN_143d8b00e(lVar12,&local_98,&local_f8);
  }
  else {
    FUN_1456cec3c();
LAB_143d8a8ae:
    if (DAT_14cad00c8 == 0.0) {
      local_130 = &local_b8;
      local_b8 = FUN_144a7958c;
      local_120 = FUN_14081d0ea;
      local_128 = FUN_14081d0ea;
      local_138 = &LAB_1479b7a0c;
      local_140 = &LAB_1463b464e;
      local_148 = L"Engine";
      local_150 = 0;
      local_158 = 0x10000005;
      local_160 = 8;
      local_168 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0.0) {
LAB_143d8af21:
        local_130 = &local_b8;
        local_b8 = FUN_144a7958c;
        local_120 = FUN_14081d0ea;
        local_128 = FUN_14081d0ea;
        local_138 = &LAB_1479b7a0c;
        local_140 = &LAB_1463b464e;
        local_148 = L"Engine";
        local_150 = 0;
        local_158 = 0x10000005;
        local_160 = 8;
        local_168 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        dVar16 = 0.0;
        goto LAB_143d8a8ed;
      }
    }
    if (*(int *)((longlong)DAT_14cad00c8 + 0x38) <= *(int *)((longlong)dVar1 + 0x38)) {
      dVar16 = 0.0;
      if (*(longlong *)
           (*(longlong *)((longlong)dVar1 + 0x30) +
           (longlong)*(int *)((longlong)DAT_14cad00c8 + 0x38) * 8) == (longlong)DAT_14cad00c8 + 0x30
         ) {
        dVar16 = dVar1;
      }
      goto LAB_143d8a8ed;
    }
LAB_143d8a8f2:
    local_110 = dVar1;
    if ((dVar1 != 0.0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(dVar1);
    }
    FUN_143d8b402(lVar12,&local_110,&local_f8);
  }
  *(undefined8 *)(lVar18 + 0x130) = local_f8;
  *(undefined8 *)(lVar18 + 0x138) = 0;
  *(undefined8 *)(lVar18 + 0x140) = local_e8;
  local_168 = local_168 & 0xffffff00;
  FUN_1413d4c10(param_1[1],param_1[2] + 0x50,0,0);
  plVar11 = (longlong *)
            (**(code **)(*(longlong *)(param_1[1] + 0x520) + 0xa8))(param_1[1] + 0x520,0);
  plVar17 = (longlong *)0x0;
  if (plVar11 != (longlong *)0x0) {
    if (DAT_14cb63950 == 0) {
      local_130 = &local_b8;
      local_b8 = FUN_144a7958c;
      local_120 = FUN_14081d0ea;
      local_128 = (code *)&LAB_1464ec72a;
      local_138 = &LAB_1486f5f75;
      local_140 = &LAB_140945686;
      local_148 = L"Engine";
      local_150 = 0;
      local_158 = 0x10000004;
      local_160 = 0x10;
      local_168 = 0x19d0;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    if ((*(int *)(plVar11[2] + 0x38) < *(int *)(DAT_14cb63950 + 0x38)) ||
       (lVar12 = *(longlong *)(plVar11[2] + 0x30),
       *(longlong *)(lVar12 + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) != DAT_14cb63950 + 0x30)
       ) {
      plVar17 = (longlong *)0x0;
    }
    else {
      dVar1 = *(double *)(lVar18 + 0x130);
      dVar16 = *(double *)(lVar18 + 0x138);
      dVar2 = *(double *)(lVar18 + 0x140);
      dVar13 = (double)param_1[1];
      lVar18 = *(longlong *)((longlong)dVar13 + 0x1c8);
      if (lVar18 == 0) {
        local_88 = DAT_14c846508;
        local_98 = DAT_14c8464f8;
        dStack_90 = DAT_14c846500;
LAB_143d8abf2:
        local_100 = 1.0;
        uVar20 = 0;
        uVar21 = 0x3ff00000;
        uVar22 = 0;
        uVar23 = 0x3ff00000;
      }
      else {
        pcVar6 = *(code **)(lVar18 + 0x240);
        dVar7 = *(double *)(lVar18 + 0x248);
        dVar8 = *(double *)(lVar18 + 0x250);
        dVar9 = *(double *)(lVar18 + 600);
        pdVar14 = *(double **)(lVar18 + 0x228);
        local_b8 = pcVar6;
        uStack_b0 = dVar7;
        local_a8 = dVar8;
        dStack_a0 = dVar9;
        if (pdVar14 == (double *)0x0) {
          lVar12 = 0x40;
          pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
          dVar13 = DAT_14c8463d8;
          *pdVar14 = DAT_14c8463d0;
          pdVar14[1] = dVar13;
          dVar13 = DAT_14c8463e8;
          pdVar14[2] = DAT_14c8463e0;
          pdVar14[3] = dVar13;
          dVar13 = DAT_14c846500;
          pdVar14[4] = DAT_14c8464f8;
          pdVar14[5] = dVar13;
          dVar13 = DAT_14c846508;
          pdVar14[6] = DAT_14c846508;
          *(double **)(lVar18 + 0x228) = pdVar14;
        }
        auVar4._8_4_ = (int)-(ulonglong)(dVar7 != pdVar14[1]);
        auVar4._0_8_ = -(ulonglong)((double)pcVar6 != *pdVar14);
        auVar4._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar14[1]) >> 0x20);
        iVar10 = movmskpd(SUB84(dVar13,0),auVar4);
        auVar5._8_4_ = (int)-(ulonglong)(dVar9 != pdVar14[3]);
        auVar5._0_8_ = -(ulonglong)(dVar8 != pdVar14[2]);
        auVar5._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar14[3]) >> 0x20);
        uVar15 = movmskpd((int)lVar12,auVar5);
        if ((uVar15 & 0x3fffffff) != 0 || iVar10 != 0) {
          pdVar14[2] = local_a8;
          pdVar14[3] = dStack_a0;
          *(undefined4 *)pdVar14 = (undefined4)local_b8;
          *(undefined4 *)((longlong)pdVar14 + 4) = local_b8._4_4_;
          *(undefined4 *)(pdVar14 + 1) = (undefined4)uStack_b0;
          *(undefined4 *)((longlong)pdVar14 + 0xc) = uStack_b0._4_4_;
          FUN_1448052ee(&local_b8,&local_98);
          pdVar14[6] = local_88;
          pdVar14[4] = local_98;
          pdVar14[5] = dStack_90;
        }
        local_88 = pdVar14[6];
        local_98 = pdVar14[4];
        dStack_90 = pdVar14[5];
        lVar12 = *(longlong *)(param_1[1] + 0x1c8);
        if (lVar12 == 0) goto LAB_143d8abf2;
        uVar20 = *(undefined4 *)(lVar12 + 0x280);
        uVar21 = *(undefined4 *)(lVar12 + 0x284);
        uVar22 = *(undefined4 *)(lVar12 + 0x288);
        uVar23 = *(undefined4 *)(lVar12 + 0x28c);
        local_100 = *(double *)(lVar12 + 0x290);
      }
      local_100 = dVar2 * local_100;
      local_110 = dVar1 * (double)CONCAT44(uVar21,uVar20);
      local_108 = dVar16 * (double)CONCAT44(uVar23,uVar22);
      FUN_1401c9a0e(&local_98,&local_b8);
      if (*(longlong *)(param_1[1] + 0x1c8) != 0) {
        local_a8 = -local_a8;
        local_b8 = (code *)((ulonglong)local_b8 ^ 0x8000000000000000);
        uStack_b0 = -uStack_b0;
        local_168 = local_168 & 0xffffff00;
        FUN_145849cd0(*(longlong *)(param_1[1] + 0x1c8),&local_b8,0,0);
      }
      *(undefined1 *)((longlong)plVar11 + 0x89c) = 1;
      (**(code **)(plVar11[0xca] + 0x28))(plVar11 + 0xca,0);
      (**(code **)(plVar11[0xca] + 0x30))(plVar11 + 0xca,0);
      (**(code **)(*plVar11 + 0xa18))(plVar11,1);
      plVar17 = plVar11;
    }
  }
  lVar12 = (**(code **)(*(longlong *)(param_1[1] + 0x520) + 0xb8))(param_1[1] + 0x520,plVar17);
  if (lVar12 != 0) {
    *(byte *)(lVar12 + 0x78) = *(byte *)(lVar12 + 0x78) | 6;
    FUN_140cf53b6(lVar12,1);
    FUN_146247d00(lVar12);
    lVar18 = (longlong)*(int *)(param_1[2] + 0xb8);
    if (lVar18 != 0) {
      lVar3 = *(longlong *)(param_1[2] + 0xb0);
      lVar19 = 0;
      do {
        local_160 = CONCAT31(local_160._1_3_,1);
        local_168 = local_168 & 0xffffff00;
        FUN_1409804ea(lVar12,*(undefined8 *)(lVar3 + lVar19),0,0);
        lVar19 = lVar19 + 8;
      } while (lVar18 * 8 != lVar19);
    }
  }
LAB_143d8aa12:
  if ((local_80 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d8aff0 FUN_143d8aff0 body=29 status=ok
// SIG undefined FUN_143d8aff0(void)

undefined8 FUN_143d8aff0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d8b00e FUN_143d8b00e body=1010 status=ok
// SIG undefined FUN_143d8b00e(void)

void FUN_143d8b00e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  code *local_170;
  undefined1 *local_168;
  code **local_160;
  code *local_158;
  code *local_150;
  longlong *local_148;
  undefined8 local_140;
  uint *local_138;
  longlong local_130;
  undefined8 local_128;
  code *local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  puVar15 = (uint *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x268);
  local_128 = param_3;
  if (iVar2 == 0) {
    uVar19 = 1;
    uVar16 = 0;
    iVar17 = 0;
    iVar7 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar9 = puVar15;
    }
    uVar18 = *puVar9;
    if (uVar18 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar16 = 0;
      uVar19 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar19 = uVar16;
      }
      iVar17 = 0;
      do {
        if (uVar19 == uVar16) goto LAB_143d8b3ca;
        iVar17 = iVar17 + 0x20;
        uVar18 = puVar9[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar16 = 0;
      iVar17 = 0;
    }
    uVar19 = (ulonglong)(-uVar18 & uVar18);
    uVar1 = uVar19 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar7 = (iVar17 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 != iVar2) {
    uVar18 = 0xffffffff;
    local_148 = param_2;
    local_140 = param_3;
    local_138 = puVar15;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)iVar7 * 0x10);
      if (plVar4 != (longlong *)0x0) {
        FUN_143d8b932(&local_128,plVar4);
        if (DAT_14cabf8d0 == 0) {
          local_120 = FUN_144a7958c;
          local_150 = FUN_14081d0ea;
          local_158 = FUN_142b47bc4;
          local_160 = &local_120;
          local_168 = &LAB_147860ffd;
          local_170 = FUN_1463713dc;
          local_178 = L"Engine";
          local_180 = 0;
          local_188 = 0x10000005;
          local_190 = 0x10;
          local_198 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
        }
        if (((*(int *)(DAT_14cabf8d0 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cabf8d0 + 0x38) * 8) ==
             DAT_14cabf8d0 + 0x30)) &&
           (lVar10 = (**(code **)(*plVar4 + 0x5d8))(plVar4), uVar1 = local_50, lVar10 != 0)) {
          lVar14 = (longlong)(int)local_50;
          uVar8 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar8);
          if (local_50._4_4_ < uVar8) {
            FUN_1470e9d72(local_118,uVar1 & 0xffffffff);
          }
          puVar11 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar11 = local_118;
          }
          *(longlong *)(puVar11 + lVar14 * 8) = lVar10;
          puVar15 = local_138;
        }
      }
      uVar6 = local_140;
      plVar4 = local_148;
      uVar18 = uVar18 & ~(uint)uVar19;
      puVar9 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar9 = puVar15;
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar7 = (int)uVar16;
      lVar10 = (longlong)iVar7;
      uVar8 = puVar9[lVar10] & uVar18;
      if (uVar8 == 0) {
        iVar12 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar12 = iVar3 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar7) {
          iVar13 = iVar7;
        }
        if (iVar7 < iVar12) {
          lVar14 = 0;
          do {
            uVar8 = puVar9[lVar10 + lVar14 + 1];
            if (uVar8 != 0) {
              uVar16 = (ulonglong)(iVar7 + (int)lVar14 + 1);
              uVar18 = 0xffffffff;
              goto LAB_143d8b240;
            }
            iVar17 = iVar17 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar13 - lVar10 != lVar14);
          uVar18 = 0xffffffff;
          iVar7 = iVar13;
        }
        uVar16 = (ulonglong)(iVar7 + 1);
        iVar7 = iVar3;
      }
      else {
LAB_143d8b240:
        uVar19 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar19 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = (iVar17 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar2);
    lVar10 = (longlong)(int)local_50;
    puVar11 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar11 = local_58;
    }
    if (lVar10 != 0) {
      lVar14 = 0;
      do {
        uVar5 = *(undefined8 *)(puVar11 + lVar14);
        local_130 = *plVar4;
        if ((local_130 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_143d8b00e(uVar5,&local_130,uVar6);
        lVar14 = lVar14 + 8;
      } while (lVar10 * 8 != lVar14);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143d8b3ca:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d8b402 FUN_143d8b402 body=1326 status=ok
// SIG undefined FUN_143d8b402(void)

void FUN_143d8b402(longlong param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  code *local_170;
  undefined1 *local_168;
  code **local_160;
  code *local_158;
  code *local_150;
  uint *local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  code *local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  puVar16 = (uint *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x268);
  local_140 = param_2;
  local_138 = param_3;
  local_128 = param_3;
  if (iVar2 == 0) {
    uVar18 = 1;
    uVar19 = 0;
    iVar14 = 0;
    iVar7 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar9 = puVar16;
    }
    uVar15 = *puVar9;
    if (uVar15 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar19 = 0;
      uVar18 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar18 = uVar19;
      }
      iVar14 = 0;
      do {
        if (uVar18 == uVar19) goto LAB_143d8b8f9;
        iVar14 = iVar14 + 0x20;
        uVar15 = puVar9[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar19 = 0;
      iVar14 = 0;
    }
    uVar18 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar18 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar7 = (iVar14 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 != iVar2) {
    uVar15 = 0xffffffff;
    local_148 = puVar16;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)iVar7 * 0x10);
      if (plVar4 != (longlong *)0x0) {
        lVar10 = *local_140;
        if ((lVar10 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar10);
          puVar16 = local_148;
LAB_143d8b537:
          if (DAT_14cad00c8 == 0) {
            local_120 = FUN_144a7958c;
            local_150 = FUN_14081d0ea;
            local_158 = FUN_14081d0ea;
            local_160 = &local_120;
            local_168 = &LAB_1479b7a0c;
            local_170 = (code *)&LAB_1463b464e;
            local_178 = L"Engine";
            local_180 = 0;
            local_188 = 0x10000005;
            local_190 = 8;
            local_198 = 0x110;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar16 = local_148;
            if (DAT_14cad00c8 == 0) goto LAB_143d8b552;
          }
          if (*(int *)(lVar10 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_143d8b552;
          if (*(longlong *)
               (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar10 = 0;
          }
        }
        else {
          if (lVar10 != 0) goto LAB_143d8b537;
LAB_143d8b552:
          lVar10 = 0;
        }
        if ((*(int *)(lVar10 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
            == lVar10 + 0x30)) {
          FUN_143d8b932(&local_128,plVar4);
          puVar16 = local_148;
        }
        if (DAT_14cabf8d0 == 0) {
          local_120 = FUN_144a7958c;
          local_150 = FUN_14081d0ea;
          local_158 = FUN_142b47bc4;
          local_160 = &local_120;
          local_168 = &LAB_147860ffd;
          local_170 = FUN_1463713dc;
          local_178 = L"Engine";
          local_180 = 0;
          local_188 = 0x10000005;
          local_190 = 0x10;
          local_198 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
          puVar16 = local_148;
        }
        if (((*(int *)(DAT_14cabf8d0 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cabf8d0 + 0x38) * 8) ==
             DAT_14cabf8d0 + 0x30)) &&
           (lVar10 = (**(code **)(*plVar4 + 0x5d8))(plVar4), uVar1 = local_50, puVar16 = local_148,
           lVar10 != 0)) {
          lVar17 = (longlong)(int)local_50;
          uVar8 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar8);
          if (local_50._4_4_ < uVar8) {
            FUN_1470e9d72(local_118,uVar1 & 0xffffffff);
          }
          puVar11 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar11 = local_118;
          }
          *(longlong *)(puVar11 + lVar17 * 8) = lVar10;
          puVar16 = local_148;
        }
      }
      uVar6 = local_138;
      uVar15 = uVar15 & ~(uint)uVar18;
      puVar9 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar9 = puVar16;
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar7 = (int)uVar19;
      lVar10 = (longlong)iVar7;
      uVar8 = puVar9[lVar10] & uVar15;
      if (uVar8 == 0) {
        iVar12 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar12 = iVar3 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar7) {
          iVar13 = iVar7;
        }
        if (iVar7 < iVar12) {
          lVar17 = 0;
          do {
            uVar8 = puVar9[lVar10 + lVar17 + 1];
            if (uVar8 != 0) {
              uVar19 = (ulonglong)(iVar7 + (int)lVar17 + 1);
              uVar15 = 0xffffffff;
              goto LAB_143d8b69f;
            }
            iVar14 = iVar14 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar13 - lVar10 != lVar17);
          uVar15 = 0xffffffff;
          iVar7 = iVar13;
        }
        uVar19 = (ulonglong)(iVar7 + 1);
        puVar16 = local_148;
        iVar7 = iVar3;
      }
      else {
LAB_143d8b69f:
        uVar18 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar18 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = (iVar14 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar2);
    lVar10 = (longlong)(int)local_50;
    puVar11 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar11 = local_58;
    }
    if (lVar10 != 0) {
      lVar17 = 0;
      do {
        uVar5 = *(undefined8 *)(puVar11 + lVar17);
        local_130 = *local_140;
        if ((local_130 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_143d8b402(uVar5,&local_130,uVar6);
        lVar17 = lVar17 + 8;
      } while (lVar10 * 8 != lVar17);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143d8b8f9:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d8b932 FUN_143d8b932 body=2121 status=ok
// SIG undefined FUN_143d8b932(void)

void FUN_143d8b932(longlong *param_1,longlong *param_2)

{
  char cVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  double local_d0;
  code *local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(byte *)((longlong)param_2 + 0x9c) & 1) != 0) {
    cVar1 = (**(code **)(*param_2 + 0x4e8))(param_2);
    if (cVar1 != '\0') {
      if (DAT_14cad2858 == 0) {
        local_f0 = &local_c8;
        local_c8 = FUN_144a7958c;
        local_e0 = FUN_14081d0ea;
        local_e8 = &LAB_146395584;
        local_f8 = &LAB_147a0ba80;
        local_100 = &LAB_14575ccce;
        local_108 = L"Engine";
        local_110 = 0x40000000000;
        local_118 = 0x10000004;
        local_120 = 0x10;
        local_128 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      if (((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
          (*(longlong *)
            (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) !=
           DAT_14cad2858 + 0x30)) || ((int)param_2[0x13b] == 0)) {
        pdVar2 = (double *)*param_1;
        dVar3 = *pdVar2;
        dVar9 = pdVar2[1];
        dVar18 = dVar3 + pdVar2[3];
        dVar17 = dVar9 + pdVar2[4];
        dVar10 = pdVar2[2];
        dVar19 = dVar10 + pdVar2[5];
        dVar4 = dVar3 - pdVar2[3];
        dVar7 = dVar9 - pdVar2[4];
        dVar12 = dVar10 - pdVar2[5];
        dVar16 = dVar4;
        if (dVar18 <= dVar4) {
          dVar16 = dVar18;
        }
        dVar14 = dVar7;
        if (dVar17 <= dVar7) {
          dVar14 = dVar17;
        }
        dVar11 = dVar12;
        if (dVar19 <= dVar12) {
          dVar11 = dVar19;
        }
        if (dVar4 <= dVar18) {
          dVar4 = dVar18;
        }
        if (dVar7 <= dVar17) {
          dVar7 = dVar17;
        }
        if (dVar12 <= dVar19) {
          dVar12 = dVar19;
        }
        dVar5 = (double)param_2[0x2e];
        dVar6 = (double)param_2[0x2c];
        dVar8 = (double)param_2[0x2d];
        dVar18 = dVar6 - (double)param_2[0x2f];
        if (dVar18 <= dVar16) {
          dVar16 = dVar18;
        }
        if (dVar4 <= dVar18) {
          dVar4 = dVar18;
        }
        dVar18 = dVar8 - (double)param_2[0x30];
        if (dVar18 <= dVar14) {
          dVar14 = dVar18;
        }
        if (dVar7 <= dVar18) {
          dVar7 = dVar18;
        }
        dVar18 = dVar5 - (double)param_2[0x31];
        if (dVar18 <= dVar11) {
          dVar11 = dVar18;
        }
        if (dVar12 <= dVar18) {
          dVar12 = dVar18;
        }
        dVar18 = (double)param_2[0x2f] + dVar6;
        if (dVar18 <= dVar16) {
          dVar16 = dVar18;
        }
        if (dVar4 <= dVar18) {
          dVar4 = dVar18;
        }
        dVar18 = (double)param_2[0x31] + dVar5;
        dVar17 = (double)param_2[0x30] + dVar8;
        if (dVar17 <= dVar14) {
          dVar14 = dVar17;
        }
        if (dVar18 <= dVar11) {
          dVar11 = dVar18;
        }
        if (dVar7 <= dVar17) {
          dVar7 = dVar17;
        }
        if (dVar12 <= dVar18) {
          dVar12 = dVar18;
        }
        dVar13 = (dVar12 - dVar11) * 0.5;
        dVar19 = (dVar7 - dVar14) * 0.5;
        dVar17 = (dVar4 - dVar16) * 0.5;
        dVar18 = dVar13 * dVar13 + dVar17 * dVar17 + dVar19 * dVar19;
        dVar14 = dVar14 + dVar19;
        dVar16 = dVar16 + dVar17;
        dVar11 = dVar11 + dVar13;
        dVar9 = (dVar10 - dVar11) * (dVar10 - dVar11) +
                (dVar3 - dVar16) * (dVar3 - dVar16) + (dVar9 - dVar14) * (dVar9 - dVar14);
        dVar3 = SQRT((dVar5 - dVar11) * (dVar5 - dVar11) +
                     (dVar6 - dVar16) * (dVar6 - dVar16) + (dVar8 - dVar14) * (dVar8 - dVar14)) +
                (double)param_2[0x32];
      }
      else {
        dVar7 = (double)param_2[0x48];
        dVar17 = (double)param_2[0x49];
        dVar3 = (double)param_2[0x4a];
        dVar11 = (double)param_2[0x50];
        dVar19 = (double)param_2[0x51];
        dVar13 = (double)param_2[0x52];
        dVar4 = dVar17 + dVar17;
        dVar9 = dVar3 + dVar3;
        dVar10 = dVar7 * (dVar7 + dVar7);
        dVar8 = (1.0 - (dVar3 * dVar9 + dVar17 * dVar4)) * dVar11;
        dVar16 = (1.0 - (dVar3 * dVar9 + dVar10)) * dVar19;
        dVar5 = (1.0 - (dVar10 + dVar17 * dVar4)) * dVar13;
        dVar3 = (double)param_2[0x4b];
        dVar10 = dVar9 * dVar3;
        dVar18 = (dVar7 + dVar7) * (double)param_2[0x4b];
        dVar3 = dVar4 * dVar3;
        dVar14 = (dVar4 * dVar7 + dVar10) * dVar11;
        dVar15 = (dVar9 * dVar17 + dVar18) * dVar19;
        dVar12 = (dVar3 + (double)param_2[0x48] * dVar9) * dVar13;
        dVar11 = ((double)param_2[0x48] * dVar9 - dVar3) * dVar11;
        dVar19 = (dVar4 * dVar7 - dVar10) * dVar19;
        dVar13 = (dVar9 * dVar17 - dVar18) * dVar13;
        dVar3 = (double)param_2[0x144];
        dVar9 = (double)param_2[0x142];
        dVar10 = (double)param_2[0x143];
        dVar18 = (double)param_2[0x145];
        dVar4 = (double)param_2[0x146];
        dVar7 = (double)param_2[0x147];
        dVar20 = ABS(dVar12 * dVar7) + ABS(dVar19 * dVar4) + ABS(dVar8 * dVar18);
        dVar17 = ABS(dVar13 * (double)param_2[0x147]) +
                 ABS(dVar16 * (double)param_2[0x146]) + ABS(dVar14 * (double)param_2[0x145]);
        dVar18 = ABS(dVar5 * dVar7) + ABS(dVar15 * dVar4) + ABS(dVar11 * dVar18);
        dVar4 = dVar12 * dVar12 + dVar19 * dVar19 + dVar8 * dVar8;
        dVar7 = dVar13 * dVar13 + dVar16 * dVar16 + dVar14 * dVar14;
        dVar6 = dVar5 * dVar5 + dVar15 * dVar15 + dVar11 * dVar11;
        if (dVar4 <= dVar7) {
          dVar4 = dVar7;
        }
        if (dVar4 <= dVar6) {
          dVar4 = dVar6;
        }
        pdVar2 = (double *)*param_1;
        dVar7 = dVar3 * dVar12 + dVar10 * dVar19 + dVar9 * dVar8 + (double)param_2[0x4c];
        dVar12 = dVar3 * dVar13 + (double)param_2[0x143] * dVar16 + dVar9 * dVar14 +
                 (double)param_2[0x4d];
        dVar3 = dVar3 * dVar5 + dVar10 * dVar15 + dVar9 * dVar11 + (double)param_2[0x4e];
        if (dVar4 < 0.0) {
          dVar4 = sqrt(dVar4);
        }
        else {
          dVar4 = SQRT(dVar4);
        }
        dVar9 = SQRT(dVar17 * dVar17 + dVar18 * dVar18 + dVar20 * dVar20);
        local_d0 = dVar4 * (double)param_2[0x148];
        if (dVar9 <= dVar4 * (double)param_2[0x148]) {
          local_d0 = dVar9;
        }
        dVar9 = *pdVar2;
        dVar10 = pdVar2[1];
        dVar11 = dVar9 + pdVar2[3];
        dVar19 = dVar10 + pdVar2[4];
        dVar4 = pdVar2[2];
        dVar13 = dVar4 + pdVar2[5];
        dVar5 = dVar9 - pdVar2[3];
        dVar6 = dVar10 - pdVar2[4];
        dVar8 = dVar4 - pdVar2[5];
        dVar16 = dVar5;
        if (dVar11 <= dVar5) {
          dVar16 = dVar11;
        }
        dVar14 = dVar6;
        if (dVar19 <= dVar6) {
          dVar14 = dVar19;
        }
        if (dVar5 <= dVar11) {
          dVar5 = dVar11;
        }
        dVar11 = dVar8;
        if (dVar13 <= dVar8) {
          dVar11 = dVar13;
        }
        if (dVar6 <= dVar19) {
          dVar6 = dVar19;
        }
        if (dVar8 <= dVar13) {
          dVar8 = dVar13;
        }
        dVar19 = dVar7 - dVar20;
        if (dVar19 <= dVar16) {
          dVar16 = dVar19;
        }
        if (dVar5 <= dVar19) {
          dVar5 = dVar19;
        }
        dVar19 = dVar12 - dVar17;
        if (dVar19 <= dVar14) {
          dVar14 = dVar19;
        }
        if (dVar6 <= dVar19) {
          dVar6 = dVar19;
        }
        dVar19 = dVar3 - dVar18;
        if (dVar19 <= dVar11) {
          dVar11 = dVar19;
        }
        if (dVar8 <= dVar19) {
          dVar8 = dVar19;
        }
        dVar18 = dVar3 + dVar18;
        dVar20 = dVar20 + dVar7;
        if (dVar20 <= dVar16) {
          dVar16 = dVar20;
        }
        if (dVar5 <= dVar20) {
          dVar5 = dVar20;
        }
        dVar17 = dVar17 + dVar12;
        if (dVar17 <= dVar14) {
          dVar14 = dVar17;
        }
        if (dVar18 <= dVar11) {
          dVar11 = dVar18;
        }
        if (dVar6 <= dVar17) {
          dVar6 = dVar17;
        }
        if (dVar8 <= dVar18) {
          dVar8 = dVar18;
        }
        dVar13 = (dVar8 - dVar11) * 0.5;
        dVar19 = (dVar6 - dVar14) * 0.5;
        dVar17 = (dVar5 - dVar16) * 0.5;
        dVar18 = dVar13 * dVar13 + dVar17 * dVar17 + dVar19 * dVar19;
        dVar14 = dVar14 + dVar19;
        dVar16 = dVar16 + dVar17;
        dVar11 = dVar11 + dVar13;
        dVar3 = SQRT((dVar3 - dVar11) * (dVar3 - dVar11) +
                     (dVar7 - dVar16) * (dVar7 - dVar16) + (dVar12 - dVar14) * (dVar12 - dVar14)) +
                local_d0;
        dVar9 = (dVar4 - dVar11) * (dVar4 - dVar11) +
                (dVar9 - dVar16) * (dVar9 - dVar16) + (dVar10 - dVar14) * (dVar10 - dVar14);
      }
      dVar10 = SQRT(dVar9) + pdVar2[6];
      if (SQRT(dVar9) + pdVar2[6] <= dVar3) {
        dVar10 = dVar3;
      }
      dVar3 = SQRT(dVar18);
      if (dVar10 <= SQRT(dVar18)) {
        dVar3 = dVar10;
      }
      pdVar2 = (double *)*param_1;
      *pdVar2 = dVar16;
      pdVar2[1] = dVar14;
      pdVar2[2] = dVar11;
      pdVar2[3] = dVar17;
      pdVar2[4] = dVar19;
      pdVar2[5] = dVar13;
      pdVar2[6] = dVar3;
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d8c936 FUN_143d8c936 body=226 status=ok
// SIG undefined FUN_143d8c936(void)

void FUN_143d8c936(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((char)(*(longlong **)(param_1 + 0x18))[9] != '\0') || (**(longlong **)(param_1 + 0x18) == 0)
      ) && (lVar1 = *(longlong *)(param_1 + 0x10),
           *(int *)(lVar1 + 8) - *(int *)(lVar1 + 0x34) != *(int *)(*(longlong *)(param_1 + 8) + 8))
     ) {
    FUN_14010afec(lVar1,0);
    local_4c = 0;
    plVar2 = *(longlong **)(param_1 + 8);
    if (0 < (int)plVar2[1]) {
      do {
        if ((*(int *)(*plVar2 + (longlong)local_4c * 0x14) != -1) ||
           (**(longlong **)(param_1 + 0x18) != 0)) {
          local_48 = *plVar2 + (longlong)local_4c * 0x14;
          local_40 = &local_4c;
          FUN_140263e2a(*(undefined8 *)(param_1 + 0x10),local_34,&local_48,0);
          plVar2 = *(longlong **)(param_1 + 8);
        }
        local_4c = local_4c + 1;
      } while (local_4c < (int)plVar2[1]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d8ca1a FUN_143d8ca1a body=749 status=ok
// SIG undefined FUN_143d8ca1a(void)

bool FUN_143d8ca1a(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  
  lVar11 = *(longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar11 + 0x54);
  if (iVar3 != param_2) goto LAB_143d8ccf3;
  iVar10 = *(int *)(lVar11 + 0x104);
  iVar9 = *(int *)(*(longlong *)(param_1 + 8) + 8);
  if ((iVar10 != iVar9 || iVar10 == -1) || (iVar9 = iVar10, *(int *)(lVar11 + 0x108) == -1)) {
    *(int *)(lVar11 + 0x104) = iVar9;
    lVar11 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
    if (lVar11 == 0) {
      iVar10 = 0;
    }
    else {
      lVar12 = 0;
      iVar10 = 0;
      do {
        iVar10 = iVar10 + (uint)(byte)(*(int *)(**(longlong **)(param_1 + 8) + lVar12) != -1 |
                                      *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
        lVar12 = lVar12 + 0x14;
      } while (lVar11 * 0x14 != lVar12);
    }
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x108) = iVar10;
  }
  lVar11 = *(longlong *)(param_1 + 0x18);
  lVar12 = *(longlong *)(lVar11 + 0x18);
  if (lVar12 != 0) {
    plVar7 = *(longlong **)(lVar12 + 0x10);
    bVar5 = true;
    if (plVar7 == (longlong *)0x0) {
LAB_143d8cc0d:
      uVar8 = 0;
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar10 = (int)plVar7[1];
      do {
        if (iVar10 == 0) goto LAB_143d8cc0d;
        LOCK();
        iVar9 = (int)plVar7[1];
        bVar14 = iVar10 == iVar9;
        if (bVar14) {
          *(int *)(plVar7 + 1) = iVar10 + 1;
          iVar9 = iVar10;
        }
        iVar10 = iVar9;
        UNLOCK();
      } while (!bVar14);
      uVar8 = *(undefined8 *)(lVar12 + 8);
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x10);
    *puVar4 = uVar8;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x000143d8cc5c;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
joined_r0x000143d8cc5c:
          if (iVar10 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    if (!bVar5) {
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    goto LAB_143d8ccf3;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = &PTR_FUN_14ab190a0;
  puVar6[8] = 0;
  *(undefined4 *)(puVar6 + 9) = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar6 + 0x54) = 0;
  puVar6[0xc] = 0;
  *(undefined4 *)(puVar6 + 0xd) = 0;
  *(undefined4 *)(puVar6 + 0xe) = 0xffffffff;
  puVar4 = *(undefined8 **)(lVar11 + 0x10);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14ab190c0;
  plVar7[2] = (longlong)puVar6;
  if (puVar6 == (undefined8 *)0x0) {
LAB_143d8cbe6:
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x000143d8ccab;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
      if (plVar13 != (longlong *)0x0) goto LAB_143d8ccca;
    }
  }
  else {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      puVar6[1] = puVar6;
      if ((longlong *)puVar6[2] != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)puVar6[2];
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
        }
        puVar6[2] = plVar7;
      }
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_143d8cbe6;
    }
    puVar6[1] = puVar6;
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar13 != (longlong *)0x0) {
      puVar4[1] = 0;
LAB_143d8ccca:
      LOCK();
      plVar7 = plVar13 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar10 = *piVar2;
        UNLOCK();
joined_r0x000143d8ccab:
        if (iVar10 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  *(undefined4 *)(puVar6 + 0xe) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x54);
LAB_143d8ccf3:
  return iVar3 != param_2;
}



// FUNCTION 143d8cd08 FUN_143d8cd08 body=231 status=ok
// SIG undefined FUN_143d8cd08(void)

void FUN_143d8cd08(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = *(longlong **)(param_1 + 8);
  if (0 < (int)plVar4[1]) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar3 = *plVar4;
      if (*(int *)(lVar3 + lVar6) != -1) {
        local_58 = (uint *)(lVar3 + lVar6) + 1;
        local_60 = lVar3 + lVar6;
        FUN_140263e2a(param_2,local_4c,&local_60,0);
        uVar1 = *(uint *)(lVar3 + lVar6);
        iVar2 = *(int *)(param_3 + 0x48);
        *(uint *)(param_3 + 0x48) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x4c) < iVar2 + 1U) {
          FUN_14593fc44(param_3,iVar2);
        }
        lVar3 = *(longlong *)(param_3 + 0x40);
        if (*(longlong *)(param_3 + 0x40) == 0) {
          lVar3 = param_3;
        }
        *(ulonglong *)(lVar3 + (longlong)iVar2 * 8) = ((ulonglong)uVar1 << 0x20) + lVar5;
        plVar4 = *(longlong **)(param_1 + 8);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x14;
    } while (lVar5 < (int)plVar4[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d8cdf0 FUN_143d8cdf0 body=1068 status=ok
// SIG undefined FUN_143d8cdf0(void)

void FUN_143d8cdf0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  uint *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = *(longlong **)(param_1 + 8);
  iVar4 = (int)plVar3[1];
  iVar12 = 0;
  iVar10 = 0;
  if ((longlong)iVar4 != 0) {
    lVar14 = 0;
    iVar10 = 0;
    do {
      iVar10 = iVar10 + (uint)(byte)(*(int *)(*plVar3 + lVar14) != -1 |
                                    *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
      lVar14 = lVar14 + 0x14;
    } while ((longlong)iVar4 * 0x14 != lVar14);
  }
  if (param_3 != (longlong *)0x0) {
    iVar12 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  }
  iVar12 = iVar12 - iVar10;
  local_80 = param_2;
  if (0 < iVar4) {
    local_78 = param_3 + 7;
    lVar14 = 0;
    do {
      iVar4 = *(int *)(*plVar3 + lVar14 * 0x14);
      if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x4d) != '\x01') || (iVar4 != -1)) {
        puVar1 = (uint *)(*plVar3 + lVar14 * 0x14);
        if (iVar4 == -1) {
          FUN_140705884(*(undefined8 *)(param_1 + 0x10),puVar1);
        }
        local_60 = puVar1;
        local_58 = puVar1 + 1;
        FUN_140263e2a(local_80,local_4c,&local_60,0);
        uVar13 = *puVar1;
        if ((param_3 != (longlong *)0x0) && ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)))
        {
          plVar3 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar3 = local_78;
          }
          iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_3[9] - 1U & uVar13) * 4);
          if (iVar4 != -1) {
            do {
              lVar11 = *param_3 + (longlong)iVar4 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar4 * 0x10) == uVar13) {
                if ((uint *)(lVar11 + 4) != (uint *)0x0 && lVar11 != 0) {
                  if (*(uint *)(lVar11 + 4) != puVar1[1]) {
                    iVar4 = *(int *)(param_4 + 0x48);
                    *(uint *)(param_4 + 0x48) = iVar4 + 1U;
                    if (*(uint *)(param_4 + 0x4c) < iVar4 + 1U) {
                      FUN_14593fc44(param_4,iVar4);
                    }
                    lVar11 = *(longlong *)(param_4 + 0x40);
                    if (*(longlong *)(param_4 + 0x40) == 0) {
                      lVar11 = param_4;
                    }
                    *(ulonglong *)(lVar11 + (longlong)iVar4 * 8) =
                         ((ulonglong)uVar13 << 0x20) + lVar14;
                  }
                  goto LAB_143d8cf68;
                }
                break;
              }
              iVar4 = *(int *)(lVar11 + 8);
            } while (iVar4 != -1);
          }
        }
        iVar4 = *(int *)(param_4 + 0x48);
        *(uint *)(param_4 + 0x48) = iVar4 + 1U;
        if (*(uint *)(param_4 + 0x4c) < iVar4 + 1U) {
          FUN_14593fc44(param_4,iVar4);
        }
        lVar11 = *(longlong *)(param_4 + 0x40);
        if (*(longlong *)(param_4 + 0x40) == 0) {
          lVar11 = param_4;
        }
        *(ulonglong *)(lVar11 + (longlong)iVar4 * 8) = ((ulonglong)uVar13 << 0x20) + lVar14;
        iVar12 = iVar12 + 1;
      }
LAB_143d8cf68:
      lVar14 = lVar14 + 1;
      plVar3 = *(longlong **)(param_1 + 8);
    } while (lVar14 < (int)plVar3[1]);
  }
  if ((param_3 != (longlong *)0x0) && (0 < iVar12)) {
    puVar1 = (uint *)(param_3 + 2);
    iVar4 = (int)param_3[5];
    if (iVar4 == 0) {
      uVar16 = 1;
      uVar15 = 0;
      iVar10 = 0;
      iVar5 = 0;
    }
    else {
      puVar9 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      uVar13 = *puVar9;
      if (uVar13 == 0) {
        iVar10 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar10 = iVar4 + -1;
        }
        uVar15 = 0;
        uVar16 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar16 = uVar15;
        }
        iVar10 = 0;
        do {
          if (uVar16 == uVar15) goto LAB_143d8d1eb;
          iVar10 = iVar10 + 0x20;
          uVar13 = puVar9[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar15 = 0;
        iVar10 = 0;
      }
      uVar16 = (ulonglong)(-uVar13 & uVar13);
      uVar2 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar5) {
        iVar5 = iVar4;
      }
    }
    if (iVar5 < iVar4) {
      local_68 = local_80 + 7;
      uVar13 = 0xffffffff;
      local_70 = param_3;
      do {
        lVar14 = *param_3;
        if ((int)local_80[1] != *(int *)((longlong)local_80 + 0x34)) {
          uVar6 = *(uint *)(lVar14 + (longlong)iVar5 * 0x10);
          plVar3 = (longlong *)local_80[8];
          if ((longlong *)local_80[8] == (longlong *)0x0) {
            plVar3 = local_68;
          }
          iVar7 = *(int *)((longlong)plVar3 + (ulonglong)((int)local_80[9] - 1U & uVar6) * 4);
          if (iVar7 != -1) {
            do {
              if (*(uint *)(*local_80 + (longlong)iVar7 * 0x10) == uVar6) goto LAB_143d8d156;
              iVar7 = *(int *)((longlong)iVar7 * 0x10 + *local_80 + 8);
            } while (iVar7 != -1);
          }
        }
        iVar4 = *(int *)(param_5 + 0x28);
        *(uint *)(param_5 + 0x28) = iVar4 + 1U;
        if (*(uint *)(param_5 + 0x2c) < iVar4 + 1U) {
          local_78 = (longlong *)CONCAT44(local_78._4_4_,iVar10);
          FUN_1400cc390(param_5,iVar4);
          param_3 = local_70;
          iVar10 = (int)local_78;
        }
        lVar11 = *(longlong *)(param_5 + 0x20);
        if (*(longlong *)(param_5 + 0x20) == 0) {
          lVar11 = param_5;
        }
        *(undefined4 *)(lVar11 + (longlong)iVar4 * 4) =
             *(undefined4 *)(lVar14 + (longlong)iVar5 * 0x10);
        if (iVar12 < 2) break;
        iVar12 = iVar12 + -1;
        iVar4 = (int)param_3[5];
LAB_143d8d156:
        uVar13 = uVar13 & ~(uint)uVar16;
        puVar9 = (uint *)param_3[4];
        if ((uint *)param_3[4] == (uint *)0x0) {
          puVar9 = puVar1;
        }
        iVar5 = (int)uVar15;
        lVar14 = (longlong)iVar5;
        uVar6 = puVar9[lVar14] & uVar13;
        if (uVar6 == 0) {
          iVar7 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar7 = iVar4 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar8 = iVar7;
          if (iVar7 < iVar5) {
            iVar8 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar11 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar6 = puVar9[lVar14 + lVar11 + 1];
            if (uVar6 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar8 - lVar14 == lVar11) goto LAB_143d8d1eb;
          }
          uVar15 = (ulonglong)(iVar5 + (int)lVar11 + 1);
          uVar13 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar6 & uVar6);
        uVar2 = uVar16 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar4);
    }
  }
LAB_143d8d1eb:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d8d21e FUN_143d8d21e body=496 status=ok
// SIG undefined FUN_143d8d21e(void)

void FUN_143d8d21e(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x18);
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,4);
    }
    else {
      FUN_14572512c(plVar1,param_2);
    }
  }
  else {
    *param_2 = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[1] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  local_34 = param_2[0xe];
  puVar2 = (ulonglong *)plVar1[1];
  puVar3 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar3) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_34,4);
    }
    else {
      FUN_14572512c(plVar1,&local_34);
    }
  }
  else {
    local_34 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar3;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[2] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  if (0 < (int)param_2[0xe]) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined4 **)(param_2 + 0xc);
      if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
        puVar3 = param_2 + 4;
      }
      local_38 = puVar3[lVar4];
      puVar2 = (ulonglong *)plVar1[1];
      if (puVar2[1] < *puVar2 + 4) {
        if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar1 + 0x170))(plVar1,&local_38,4);
        }
        else {
          FUN_14572512c(plVar1,&local_38);
        }
      }
      else {
        *puVar2 = *puVar2 + 4;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < (int)param_2[0xe]);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d8d410 FUN_143d8d410 body=723 status=ok
// SIG undefined FUN_143d8d410(void)

undefined8 FUN_143d8d410(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int *piVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_78 [40];
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2,4);
    }
    else {
      FUN_14572512c(plVar5,param_2);
    }
  }
  else {
    *param_2 = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar5);
    }
  }
  else {
    param_2[1] = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  local_4c = 0;
  puVar6 = (ulonglong *)plVar5[1];
  piVar1 = (int *)*puVar6 + 1;
  if ((int *)puVar6[1] < piVar1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,&local_4c,4);
    }
    else {
      FUN_14572512c(plVar5,&local_4c);
    }
  }
  else {
    local_4c = *(int *)*puVar6;
    *puVar6 = (ulonglong)piVar1;
  }
  if (local_4c <= DAT_14c75f430) {
    piVar1 = param_2 + 2;
    piVar7 = *(int **)plVar5[1];
    if ((int *)((undefined8 *)plVar5[1])[1] < piVar7 + 1) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,piVar1,4);
      }
      else {
        FUN_14572512c(plVar5,piVar1);
      }
    }
    else {
      *piVar1 = *piVar7;
      *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
    }
    if (*piVar1 <= DAT_14c75f42c) {
      uVar9 = CONCAT71((uint7)(uint3)((uint)*piVar1 >> 8),1);
      if (0 < local_4c) {
        iVar13 = 0;
        do {
          local_50 = 0;
          puVar6 = (ulonglong *)plVar5[1];
          puVar2 = (uint *)*puVar6 + 1;
          if ((uint *)puVar6[1] < puVar2) {
            if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar5 + 0x170))(plVar5,&local_50,4);
            }
            else {
              FUN_14572512c(plVar5,&local_50);
            }
          }
          else {
            local_50 = *(uint *)*puVar6;
            *puVar6 = (ulonglong)puVar2;
          }
          plVar8 = *(longlong **)(param_1 + 0x10);
          puVar10 = (undefined4 *)(ulonglong)*(uint *)(plVar8 + 1);
          if (*(uint *)(plVar8 + 1) != *(uint *)((longlong)plVar8 + 0x34)) {
            puVar10 = (undefined4 *)(ulonglong)local_50;
            plVar12 = plVar8 + 7;
            if ((longlong *)plVar8[8] != (longlong *)0x0) {
              plVar12 = (longlong *)plVar8[8];
            }
            iVar11 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar8[9] - 1U & local_50) * 4);
            if (iVar11 != -1) {
              do {
                lVar3 = *plVar8 + (longlong)iVar11 * 0x10;
                if (*(uint *)(*plVar8 + (longlong)iVar11 * 0x10) == local_50) {
                  puVar10 = (undefined4 *)(ulonglong)CONCAT31((int3)(local_50 >> 8),lVar3 == 0);
                  if ((undefined4 *)(lVar3 + 4) != (undefined4 *)0x0 && lVar3 != 0) {
                    uVar4 = *(undefined4 *)(lVar3 + 4);
                    iVar11 = param_2[0xe];
                    param_2[0xe] = iVar11 + 1U;
                    if ((uint)param_2[0xf] < iVar11 + 1U) {
                      FUN_1400cc390(param_2 + 4,iVar11);
                    }
                    puVar10 = *(undefined4 **)(param_2 + 0xc);
                    if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
                      puVar10 = param_2 + 4;
                    }
                    puVar10[iVar11] = uVar4;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar3 + 8);
              } while (iVar11 != -1);
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < local_4c);
        uVar9 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
      }
      goto LAB_143d8d671;
    }
  }
  FUN_14572541c(plVar5);
  uVar9 = 0;
LAB_143d8d671:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 143d8d6f4 FUN_143d8d6f4 body=254 status=ok
// SIG undefined FUN_143d8d6f4(void)

void FUN_143d8d6f4(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar3 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar3 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = uVar4 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x800) {
            uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
          }
        }
        else {
          uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
          iVar3 = *(int *)(param_1 + 0xc);
        }
      }
      uVar4 = uVar2 >> 4 & 0xffffffff;
    }
    if ((int)uVar4 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar4;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x10,8);
    }
  }
  return;
}



// FUNCTION 143d8d7f2 FUN_143d8d7f2 body=262 status=ok
// SIG undefined FUN_143d8d7f2(void)

void FUN_143d8d7f2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143d8d8f8 FUN_143d8d8f8 body=254 status=ok
// SIG undefined FUN_143d8d8f8(void)

void FUN_143d8d8f8(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar3 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar3 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = uVar4 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x800) {
            uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
          }
        }
        else {
          uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
          iVar3 = *(int *)(param_1 + 0xc);
        }
      }
      uVar4 = uVar2 >> 4 & 0xffffffff;
    }
    if ((int)uVar4 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar4;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x10,8);
    }
  }
  return;
}



// FUNCTION 143d8d9f6 FUN_143d8d9f6 body=43 status=ok
// SIG undefined FUN_143d8d9f6(void)

void FUN_143d8d9f6(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 143d8da21 FUN_143d8da21 body=28 status=ok
// SIG undefined FUN_143d8da21(void)

void FUN_143d8da21(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_1 + lVar1 * 8) = 0;
      *(undefined1 *)(param_1 + 4 + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 143d8da3e FUN_143d8da3e body=346 status=ok
// SIG undefined FUN_143d8da3e(void)

void FUN_143d8da3e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143d8dad0;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_143d8dad0:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 143d8db98 FUN_143d8db98 body=374 status=ok
// SIG undefined FUN_143d8db98(void)

void FUN_143d8db98(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143d8dc41;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_143d8dc41:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,4);
    }
  }
  return;
}



// FUNCTION 143d8dd0e FUN_143d8dd0e body=121 status=ok
// SIG undefined FUN_143d8dd0e(void)

void FUN_143d8dd0e(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  
  iVar1 = *param_2;
  cVar4 = FUN_143d87b64(*param_1,(longlong)iVar1 * 0x18 + *(longlong *)param_1[1]);
  if (cVar4 != '\0') {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb80f48);
  lVar3 = param_1[1];
  iVar2 = *(int *)(lVar3 + 0x38);
  *(uint *)(lVar3 + 0x38) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x3c) < iVar2 + 1U) {
    FUN_1446f48e2((longlong *)(lVar3 + 0x30),iVar2);
  }
  *(int *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 4) = iVar1;
                    /* WARNING: Could not recover jumptable at 0x000143d8dd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb80f48);
  return;
}



// FUNCTION 143d8dd88 FUN_143d8dd88 body=3102 status=ok
// SIG undefined FUN_143d8dd88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d8dd88(longlong *param_1)

{
  longlong lVar1;
  double dVar2;
  undefined4 extraout_EAX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined1 auStack_338 [32];
  longlong local_318;
  longlong local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  double local_288;
  undefined8 uStack_280;
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
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
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
  double local_150;
  double local_148;
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
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  lVar1 = *param_1;
  if (((*(int *)(lVar1 + 0x14) != 0) && (uVar5 = *(uint *)(lVar1 + 0x10), -1 < (int)uVar5)) &&
     ((int)uVar5 < DAT_14c9647dc)) {
    uVar4 = uVar5 >> 0x10;
    plVar6 = (longlong *)
             ((ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)uVar4 * 8));
    if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)(lVar1 + 0x14))) &&
       (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar8 = *plVar6, lVar8 != 0)))) {
      auVar15 = roundpd(ZEXT816(0xbfd0000000000000),ZEXT816(0xbfd0000000000000),3);
      auVar18 = roundpd(in_XMM1,ZEXT816(0),3);
      dVar20 = (-90.0 - auVar15._0_8_ * 360.0) * 0.008726646259971648;
      dVar21 = (0.0 - auVar15._8_8_ * 360.0) * 0.008726646259971648;
      dVar14 = (0.0 - auVar18._0_8_ * 360.0) * 0.008726646259971648;
      dVar23 = (0.0 - auVar18._8_8_ * 360.0) * 0.008726646259971648;
      dVar9 = sin(dVar20);
      dVar10 = sin(dVar21);
      dVar11 = sin(dVar14);
      sin(dVar23);
      dVar12 = cos(dVar20);
      dVar13 = cos(dVar21);
      dVar14 = cos(dVar14);
      cos(dVar23);
      local_288 = DAT_14c846520;
      dVar35 = DAT_14c846518;
      dVar2 = DAT_14c846510;
      auVar18 = _DAT_149934d80;
      dVar20 = -(dVar13 * dVar9 * dVar11) + dVar10 * dVar12 * dVar14;
      dVar21 = dVar10 * dVar9 * dVar11 + dVar13 * dVar12 * dVar14;
      dVar19 = dVar9 * dVar10 * dVar14 - dVar12 * dVar13 * dVar11;
      dVar11 = -(dVar9 * dVar13 * dVar14) - dVar12 * dVar10 * dVar11;
      dVar14 = *(double *)(lVar1 + 0x20);
      dVar23 = *(double *)(lVar1 + 0x28);
      dVar9 = *(double *)(lVar1 + 0x30);
      dVar10 = *(double *)(lVar1 + 0x38);
      uVar26 = SUB84(DAT_14c846518,0);
      uVar27 = (undefined4)((ulonglong)DAT_14c846518 >> 0x20);
      auVar33._8_8_ = 0;
      auVar33._0_8_ = DAT_14c846520;
      local_2b8 = 0.0;
      dStack_2b0 = 0.0;
      auVar15._8_4_ = uVar26;
      auVar15._0_8_ = DAT_14c846510;
      auVar15._12_4_ = uVar27;
      auVar15 = minpd(_DAT_149934d80,auVar15);
      auVar33 = minpd(ZEXT816(0x3ff0000000000000),auVar33);
      auVar30._8_8_ = -(ulonglong)(auVar15._8_8_ < 0.0);
      auVar30._0_8_ = -(ulonglong)(auVar15._0_8_ < 0.0);
      iVar3 = movmskpd(extraout_EAX,auVar30);
      auVar34._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
      auVar34._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
      uVar5 = movmskpd(uVar4,auVar34);
      if ((uVar5 & 0x3fffffff) == 0 && iVar3 == 0) {
        local_2d8 = dVar11 * dVar9 * -1.0 +
                    dVar20 * dVar23 + dVar14 * dVar21 * 1.0 + dVar10 * dVar19;
        dStack_2d0 = dVar19 * dVar9 * 1.0 +
                     dVar21 * dVar23 + dVar14 * dVar20 * -1.0 + dVar10 * dVar11;
        local_2c8._8_8_ =
             dVar20 * dVar9 * -1.0 + ((dVar14 * dVar19 * -1.0 + dVar10 * dVar21) - dVar23 * dVar11);
        local_2c8._0_8_ =
             dVar21 * dVar9 * 1.0 + ((dVar14 * dVar11 * 1.0 + dVar10 * dVar20) - dVar23 * dVar19);
        dVar13 = DAT_14c846510 * 0.0;
        dVar19 = DAT_14c846518 * 0.0;
        dVar20 = DAT_14c846520 * 0.0;
        dVar11 = dVar19 * dVar14 - dVar23 * dVar13;
        dVar12 = dVar20 * dVar23 - dVar9 * dVar19;
        dVar21 = dVar13 * dVar9 - dVar14 * dVar20;
        dVar35 = dVar10 * 0.0 - dVar10 * 0.0;
        dVar12 = dVar12 + dVar12;
        dVar21 = dVar21 + dVar21;
        dVar11 = dVar11 + dVar11;
        dVar35 = dVar35 + dVar35;
        local_2b8 = *(double *)(lVar1 + 0x40) +
                    (dVar11 * dVar23 - dVar9 * dVar21) + dVar10 * dVar12 + dVar13;
        dStack_2b0 = *(double *)(lVar1 + 0x48) +
                     (dVar12 * dVar9 - dVar11 * dVar14) + dVar10 * dVar21 + dVar19;
        local_e8 = *(double *)(lVar1 + 0x50) +
                   (dVar21 * dVar14 - dVar23 * dVar12) + dVar10 * dVar11 + dVar20;
        dStack_2a0 = (dVar35 * dVar10 - dVar35 * dVar10) + dVar10 * dVar35 + 0.0 + 0.0;
      }
      else {
        dVar12 = DAT_14c846520 * 1.0;
        dVar36 = dVar23 + dVar23;
        dVar13 = dVar9 + dVar9;
        dVar32 = dVar14 * (dVar14 + dVar14);
        local_188 = (1.0 - (dVar32 + dVar23 * dVar36)) * DAT_14c846520;
        dVar31 = (dVar14 + dVar14) * dVar10;
        local_198 = (dVar36 * dVar10 + dVar14 * dVar13) * DAT_14c846520;
        local_1b8 = (dVar36 * dVar14 - dVar13 * dVar10) * DAT_14c846518;
        dStack_190 = (dVar13 * dVar23 - dVar31) * DAT_14c846520;
        local_1d8 = ((double)DAT_149934d80 - (dVar9 * dVar13 + dVar23 * dVar36)) * DAT_14c846510;
        dStack_1b0 = (DAT_149934d80._8_8_ - (dVar9 * dVar13 + dVar32)) * DAT_14c846518;
        dStack_1d0 = (dVar36 * dVar14 + dVar13 * dVar10) * DAT_14c846510;
        local_1a8 = (dVar13 * dVar23 + dVar31) * DAT_14c846518;
        local_1c8 = (dVar14 * dVar13 - dVar36 * dVar10) * DAT_14c846510;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        uStack_180 = 0;
        uStack_160 = 0x3ff0000000000000;
        dVar14 = dVar11 + dVar11;
        dVar9 = dVar20 + dVar20;
        dVar23 = dVar19 * (dVar19 + dVar19);
        local_258 = (double)DAT_149934d80 - (dVar20 * dVar9 + dVar11 * dVar14);
        dStack_230 = DAT_149934d80._8_8_ - (dVar20 * dVar9 + dVar23);
        local_208 = 1.0 - (dVar23 + dVar11 * dVar14);
        dStack_210 = (dVar19 + dVar19) * dVar21;
        dStack_250 = dVar14 * dVar19 + dVar9 * dVar21;
        local_228 = dVar9 * dVar11 + dStack_210;
        local_238 = dVar14 * dVar19 - dVar9 * dVar21;
        dStack_210 = dVar9 * dVar11 - dStack_210;
        local_218 = dVar14 * dVar21 + dVar19 * dVar9;
        local_248 = dVar19 * dVar9 - dVar14 * dVar21;
        uStack_240 = 0;
        uStack_220 = 0;
        uStack_200 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_308 = 0;
        uStack_300 = 0x3ff0000000000000;
        local_1e8 = 0;
        uStack_1e0 = 0x3ff0000000000000;
        local_178 = *(double *)(lVar1 + 0x40);
        dStack_170 = *(double *)(lVar1 + 0x48);
        local_168 = *(double *)(lVar1 + 0x50);
        FUN_1447fea8d(&local_158);
        local_2e0 = local_148;
        dVar20 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
        local_2e8 = local_138;
        local_2f0 = local_128;
        dVar21 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
        local_2f8 = local_108;
        dVar14 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
        uVar7 = -(ulonglong)(0.0 <= dVar20 + -9.99999993922529e-09);
        dVar20 = (double)(~uVar7 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar20)) & uVar7);
        uVar7 = -(ulonglong)(0.0 <= dVar21 + -9.99999993922529e-09);
        dVar21 = (double)(~uVar7 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar21)) & uVar7);
        uVar7 = -(ulonglong)(0.0 <= dVar14 + -9.99999993922529e-09);
        dVar14 = (double)(~uVar7 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar14)) & uVar7);
        auVar16._8_8_ = -(ulonglong)(0.0 <= dVar35);
        auVar16._0_8_ = -(ulonglong)(0.0 <= dVar2);
        auVar15 = blendvpd(_DAT_149936790,auVar18,auVar16);
        uVar7 = -(ulonglong)(0.0 <= dVar12);
        dVar9 = (double)(~uVar7 & 0xbff0000000000000 |
                        (ulonglong)((uint)(uVar7 >> 0x20) & 0x3ff00000) << 0x20);
        dVar23 = auVar15._0_8_;
        local_158 = local_158 * dVar20 * dVar23;
        local_150 = local_150 * dVar20 * dVar23;
        local_148 = dVar20 * local_148 * dVar23;
        dVar20 = auVar15._8_8_;
        local_128 = dVar21 * local_128 * dVar20;
        local_130 = local_130 * dVar21 * dVar20;
        local_138 = dVar20 * local_138 * dVar21;
        local_108 = dVar14 * local_108 * dVar9;
        local_110 = local_110 * dVar14 * dVar9;
        local_118 = dVar9 * local_118 * dVar14;
        FUN_14481fd10(&local_278,&local_158);
        dVar20 = local_268 * local_268 + local_278 * local_278;
        dVar21 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
        auVar22._0_8_ = dVar20 + dVar21;
        auVar22._8_8_ = dVar20 + dVar21;
        auVar17._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
        auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
        auVar15 = sqrtpd(auVar22,auVar22);
        auVar15 = divpd(auVar18,auVar15);
        auVar29._0_8_ = auVar15._0_8_ * local_268;
        auVar29._8_8_ = auVar15._8_8_ * dStack_260;
        auVar18._8_8_ = uStack_300;
        auVar18._0_8_ = local_308;
        local_2c8 = blendvpd(auVar18,auVar29,auVar17);
        local_2d8 = (double)((ulonglong)(local_278 * auVar15._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_));
        dStack_2d0 = (double)((ulonglong)(dStack_270 * auVar15._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_));
        dStack_2a0 = 0.0;
        local_2b8 = local_f8;
        dStack_2b0 = dStack_f0;
      }
      local_288 = local_288 * 1.0;
      local_298._8_4_ = uVar26;
      local_298._0_8_ = dVar2;
      local_298._12_4_ = uVar27;
      uStack_280 = 0;
      local_310 = 0;
      if (*(char *)(lVar1 + 0x120) != '\0') {
        local_310 = lVar1 + 0x110;
      }
      local_318 = lVar1 + 0xd0;
      local_2a8 = local_e8;
      FUN_143d86be4(lVar8,&local_2d8,&DAT_14c846480);
    }
  }
  if ((*(char *)(lVar1 + 0x121) == '\x01') && (0 < *(int *)(lVar1 + 0xe8))) {
    dVar20 = *(double *)(lVar1 + 0x30);
    dVar21 = *(double *)(lVar1 + 0x20);
    dVar14 = *(double *)(lVar1 + 0x28);
    dVar10 = dVar21 * 0.0 + dVar14 * -0.0;
    dVar2 = dVar14 - dVar20 * 0.0;
    dVar9 = dVar20 * 0.0 - dVar21;
    dVar10 = dVar10 + dVar10;
    dVar9 = dVar9 + dVar9;
    dVar2 = dVar2 + dVar2;
    dVar23 = *(double *)(lVar1 + 0x38);
    dVar35 = (dVar21 * dVar9 - dVar2 * dVar14) + dVar23 * dVar10 + 1.0;
    dVar21 = (dVar20 * dVar2 - dVar10 * dVar21) + dVar23 * dVar9 + 0.0;
    dVar20 = (dVar14 * dVar10 - dVar9 * dVar20) + dVar23 * dVar2 + 0.0;
    if ((longlong)*(int *)(lVar1 + 0xd8) < 1) {
      fVar25 = 3.4028235e+38;
      fVar24 = 0.5;
    }
    else {
      fVar24 = 1.1754944e-38;
      fVar25 = 3.4028235e+38;
      uVar7 = 0;
      do {
        if (*(int *)(lVar1 + 0x108) != 0) {
          lVar8 = 0;
          do {
            if (uVar7 == *(uint *)(*(longlong *)(lVar1 + 0x100) + lVar8)) goto LAB_143d8e3b4;
            lVar8 = lVar8 + 4;
          } while ((longlong)*(int *)(lVar1 + 0x108) << 2 != lVar8);
        }
        lVar8 = *(longlong *)(lVar1 + 0xd0);
        fVar28 = -(float)((*(double *)(lVar8 + 0x10 + uVar7 * 0x18) - *(double *)(lVar1 + 0x50)) *
                          dVar35 + (*(double *)(lVar8 + uVar7 * 0x18) - *(double *)(lVar1 + 0x40)) *
                                   dVar20 + (*(double *)(lVar8 + 8 + uVar7 * 0x18) -
                                            *(double *)(lVar1 + 0x48)) * dVar21);
        if (fVar28 <= fVar25) {
          fVar25 = fVar28;
        }
        if (fVar24 <= fVar28) {
          fVar24 = fVar28;
        }
LAB_143d8e3b4:
        uVar7 = uVar7 + 1;
      } while (uVar7 != (longlong)*(int *)(lVar1 + 0xd8));
      fVar25 = fVar25 + -0.5;
      fVar24 = fVar24 + 0.5;
    }
    dVar14 = (double)fVar25;
    *(double *)(lVar1 + 0x40) = *(double *)(lVar1 + 0x40) - dVar20 * dVar14;
    *(double *)(lVar1 + 0x48) = *(double *)(lVar1 + 0x48) - dVar21 * dVar14;
    *(double *)(lVar1 + 0x50) = *(double *)(lVar1 + 0x50) - dVar35 * dVar14;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    fVar28 = 1.0;
    if (1.0 <= fVar24 - fVar25) {
      fVar28 = fVar24 - fVar25;
    }
    *(float *)(lVar1 + 0x80) = fVar28;
  }
  *(undefined1 *)(lVar1 + 0x122) = 1;
  if ((local_d0 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d8e9be FUN_143d8e9be body=83 status=ok
// SIG undefined FUN_143d8e9be(void)

undefined8 * FUN_143d8e9be(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b40e9d0;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 143d8ea12 FUN_143d8ea12 body=68 status=ok
// SIG undefined FUN_143d8ea12(void)

undefined8 * FUN_143d8ea12(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b40e9f0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d8ea56 FUN_143d8ea56 body=91 status=ok
// SIG undefined FUN_143d8ea56(void)

bool FUN_143d8ea56(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_143d8ea86;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_143d8ea86:
  return lVar6 == param_2;
}



// FUNCTION 143d8eab2 FUN_143d8eab2 body=68 status=ok
// SIG undefined FUN_143d8eab2(void)

undefined8 * FUN_143d8eab2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b40ea60;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d8eb12 FUN_143d8eb12 body=967 status=ok
// SIG undefined FUN_143d8eb12(void)

void FUN_143d8eb12(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  
  lVar1 = *param_1;
  plVar6 = (longlong *)(lVar1 + 0x3c0);
  uVar9 = *(uint *)(param_1 + 1);
  if (((int)uVar9 < 0) || (iVar2 = *(int *)(lVar1 + 0x3c8), iVar2 <= (int)uVar9)) {
    if (param_1[2] != 0) {
      FUN_141841038(plVar6,uVar9 + 1,1);
      uVar9 = *(uint *)(param_1 + 1);
    }
    if ((int)uVar9 < 0) {
      return;
    }
    iVar2 = *(int *)(lVar1 + 0x3c8);
  }
  if ((int)uVar9 < iVar2) {
    if (*(longlong *)(*plVar6 + (ulonglong)uVar9 * 8) != param_1[2]) {
      *(longlong *)(*plVar6 + (ulonglong)uVar9 * 8) = param_1[2];
      if (param_1[2] == 0) {
        if ((longlong)*(int *)(lVar1 + 0x3c8) != 0) {
          plVar7 = *(longlong **)(lVar1 + 0x3c0);
          lVar5 = (longlong)*(int *)(lVar1 + 0x3c8) << 3;
          do {
            if (*plVar7 != 0) {
              if (plVar7 != (longlong *)0x0) goto LAB_143d8ebcd;
              break;
            }
            plVar7 = plVar7 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
        *(undefined4 *)(lVar1 + 0x3c8) = 0;
        if (*(int *)(lVar1 + 0x3cc) < 0) {
          FUN_1448831cc(plVar6,0);
        }
      }
LAB_143d8ebcd:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb81020) && (FUN_144b3d300(&DAT_14cb81020), DAT_14cb81020 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar6 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.gbx.ProjectMaskedDigistructEnable",1);
        if (plVar6 == (longlong *)0x0) {
          DAT_14cb81018 = 0;
        }
        else {
          DAT_14cb81018 = (**(code **)(*plVar6 + 0x68))(plVar6);
        }
        _Init_thread_footer(&DAT_14cb81020);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb81028) &&
         (FUN_144b3d300(&DAT_14cb81028), lVar5 = DAT_14cb81018, DAT_14cb81028 == -1)) {
        iVar2 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if ((iVar2 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar2 == 2)))) {
          uVar8 = 0;
        }
        else if (iVar2 == 1) {
          DVar3 = FUN_140ad26c0();
          DVar4 = GetCurrentThreadId();
          uVar8 = (ulonglong)(DVar3 != DVar4);
        }
        else {
          uVar8 = 1;
        }
        DAT_14cb81024 = *(int *)(lVar5 + uVar8 * 4) != 0;
        _Init_thread_footer(&DAT_14cb81028);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb81038) && (FUN_144b3d300(&DAT_14cb81038), DAT_14cb81038 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar6 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.gbx.ProjectTranslucencyDigistructEnable",1);
        if (plVar6 == (longlong *)0x0) {
          DAT_14cb81030 = 0;
        }
        else {
          DAT_14cb81030 = (**(code **)(*plVar6 + 0x68))(plVar6);
        }
        _Init_thread_footer(&DAT_14cb81038);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb81040) &&
         (FUN_144b3d300(&DAT_14cb81040), lVar5 = DAT_14cb81030, DAT_14cb81040 == -1)) {
        iVar2 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if ((iVar2 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar2 == 2)))) {
          uVar8 = 0;
        }
        else if (iVar2 == 1) {
          DVar3 = FUN_140ad26c0();
          DVar4 = GetCurrentThreadId();
          uVar8 = (ulonglong)(DVar3 != DVar4);
        }
        else {
          uVar8 = 1;
        }
        DAT_14cb8103c = *(int *)(lVar5 + uVar8 * 4) != 0;
        _Init_thread_footer(&DAT_14cb81040);
      }
      if ((*(longlong *)(lVar1 + 0x218) != 0) &&
         ((DAT_14cb81024 != '\0' || (DAT_14cb8103c == '\x01')))) {
        (**(code **)(**(longlong **)(lVar1 + 0x210) + 0x4c0))();
                    /* WARNING: Could not recover jumptable at 0x000143d8ecb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(lVar1 + 0x210) + 0x4b8))
                  (*(longlong **)(lVar1 + 0x210),*(undefined8 *)(lVar1 + 0x218),8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143d8eeea FUN_143d8eeea body=12 status=ok
// SIG undefined FUN_143d8eeea(void)

void FUN_143d8eeea(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d8eef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143d8eef6 FUN_143d8eef6 body=29 status=ok
// SIG undefined FUN_143d8eef6(void)

undefined8 FUN_143d8eef6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d8ef14 FUN_143d8ef14 body=282 status=ok
// SIG undefined FUN_143d8ef14(void)

undefined8 * FUN_143d8ef14(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143d8905f);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143d8f02e FUN_143d8f02e body=91 status=ok
// SIG undefined FUN_143d8f02e(void)

void FUN_143d8f02e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143d8eb12(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143d8eb12(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143d8f06a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143d8f08a FUN_143d8f08a body=967 status=ok
// SIG undefined FUN_143d8f08a(void)

void FUN_143d8f08a(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  
  lVar1 = *param_1;
  plVar6 = (longlong *)(lVar1 + 0x3d0);
  uVar9 = *(uint *)(param_1 + 1);
  if (((int)uVar9 < 0) || (iVar2 = *(int *)(lVar1 + 0x3d8), iVar2 <= (int)uVar9)) {
    if (param_1[2] != 0) {
      FUN_141841038(plVar6,uVar9 + 1,1);
      uVar9 = *(uint *)(param_1 + 1);
    }
    if ((int)uVar9 < 0) {
      return;
    }
    iVar2 = *(int *)(lVar1 + 0x3d8);
  }
  if ((int)uVar9 < iVar2) {
    if (*(longlong *)(*plVar6 + (ulonglong)uVar9 * 8) != param_1[2]) {
      *(longlong *)(*plVar6 + (ulonglong)uVar9 * 8) = param_1[2];
      if (param_1[2] == 0) {
        if ((longlong)*(int *)(lVar1 + 0x3d8) != 0) {
          plVar7 = *(longlong **)(lVar1 + 0x3d0);
          lVar5 = (longlong)*(int *)(lVar1 + 0x3d8) << 3;
          do {
            if (*plVar7 != 0) {
              if (plVar7 != (longlong *)0x0) goto LAB_143d8f145;
              break;
            }
            plVar7 = plVar7 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
        *(undefined4 *)(lVar1 + 0x3d8) = 0;
        if (*(int *)(lVar1 + 0x3dc) < 0) {
          FUN_1448831cc(plVar6,0);
        }
      }
LAB_143d8f145:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb81050) && (FUN_144b3d300(&DAT_14cb81050), DAT_14cb81050 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar6 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.gbx.ProjectMaskedDigistructEnable",1);
        if (plVar6 == (longlong *)0x0) {
          DAT_14cb81048 = 0;
        }
        else {
          DAT_14cb81048 = (**(code **)(*plVar6 + 0x68))(plVar6);
        }
        _Init_thread_footer(&DAT_14cb81050);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb81058) &&
         (FUN_144b3d300(&DAT_14cb81058), lVar5 = DAT_14cb81048, DAT_14cb81058 == -1)) {
        iVar2 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if ((iVar2 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar2 == 2)))) {
          uVar8 = 0;
        }
        else if (iVar2 == 1) {
          DVar3 = FUN_140ad26c0();
          DVar4 = GetCurrentThreadId();
          uVar8 = (ulonglong)(DVar3 != DVar4);
        }
        else {
          uVar8 = 1;
        }
        DAT_14cb81054 = *(int *)(lVar5 + uVar8 * 4) != 0;
        _Init_thread_footer(&DAT_14cb81058);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb81068) && (FUN_144b3d300(&DAT_14cb81068), DAT_14cb81068 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar6 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.gbx.ProjectTranslucencyDigistructEnable",1);
        if (plVar6 == (longlong *)0x0) {
          DAT_14cb81060 = 0;
        }
        else {
          DAT_14cb81060 = (**(code **)(*plVar6 + 0x68))(plVar6);
        }
        _Init_thread_footer(&DAT_14cb81068);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb81070) &&
         (FUN_144b3d300(&DAT_14cb81070), lVar5 = DAT_14cb81060, DAT_14cb81070 == -1)) {
        iVar2 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if ((iVar2 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar2 == 2)))) {
          uVar8 = 0;
        }
        else if (iVar2 == 1) {
          DVar3 = FUN_140ad26c0();
          DVar4 = GetCurrentThreadId();
          uVar8 = (ulonglong)(DVar3 != DVar4);
        }
        else {
          uVar8 = 1;
        }
        DAT_14cb8106c = *(int *)(lVar5 + uVar8 * 4) != 0;
        _Init_thread_footer(&DAT_14cb81070);
      }
      if ((*(longlong *)(lVar1 + 0x218) != 0) &&
         ((DAT_14cb81054 != '\0' || (DAT_14cb8106c == '\x01')))) {
        (**(code **)(**(longlong **)(lVar1 + 0x210) + 0x4c0))();
                    /* WARNING: Could not recover jumptable at 0x000143d8f229. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(lVar1 + 0x210) + 0x4b8))
                  (*(longlong **)(lVar1 + 0x210),*(undefined8 *)(lVar1 + 0x218),8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143d8f462 FUN_143d8f462 body=12 status=ok
// SIG undefined FUN_143d8f462(void)

void FUN_143d8f462(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d8f46b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143d8f46e FUN_143d8f46e body=29 status=ok
// SIG undefined FUN_143d8f46e(void)

undefined8 FUN_143d8f46e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d8f48c FUN_143d8f48c body=282 status=ok
// SIG undefined FUN_143d8f48c(void)

undefined8 * FUN_143d8f48c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143d8905f);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143d8f5a6 FUN_143d8f5a6 body=91 status=ok
// SIG undefined FUN_143d8f5a6(void)

void FUN_143d8f5a6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143d8f08a(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143d8f08a(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143d8f5e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143d8f601 FUN_143d8f601 body=1947 status=ok
// SIG undefined FUN_143d8f601(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d8f601(void)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  char *local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  _DAT_14cb80c60 = 0xffffffff;
  _DAT_14cb80c64 = 0;
  FUN_1446f470e(&DAT_14cb80c68,L"LevelSequenceActor",1);
  FUN_1446f470e(&DAT_14cb80c70,L"Actor",1);
  FUN_1446f470e(&DAT_14cb80c78,L"GbxMomentNode_ScreenFade",1);
  FUN_1446f470e(&DAT_14cb80cbc,L"Actor",1);
  FUN_1446f470e(&DAT_14cb80cc4,L"Actor",1);
  local_68 = "AssetRegistry";
  uStack_60 = 0xd;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb80cd0 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cb80cd8,L"Actor",1);
  FUN_1446f470e(&DAT_14cb80ce0,L"StanceTag",1);
  FUN_1446f470e(&DAT_14cb81078,L"MomentSetStance",1);
  local_68 = (char *)0x235447a1207096fc;
  uStack_60 = 0xaeea8612;
  uStack_5c = 0x24a539e1;
  _DAT_14cb80ce8 = 0x207096fc;
  uRam000000014cb80cec = 0x235447a1;
  uRam000000014cb80cf0 = 0xaeea8612;
  uRam000000014cb80cf4 = 0x24a539e1;
  FUN_141005458(&local_68,0,L"GbxMomentNodeSettings_SetStance",0);
  atexit((_func_5014 *)&LAB_143d7e453);
  FUN_1446f470e(&DAT_14cb80cf8,L"Actor",1);
  FUN_1446f470e(&DAT_14cb80d00,L"Actor",1);
  FUN_1446f470e(&DAT_14cb80d08,L"ParticleAsset",1);
  local_68 = "bone";
  uStack_60 = 4;
  uStack_5c = uStack_5c & 0xffffff00;
  FUN_14001a6c0(&local_68,1);
  FUN_1446f470e(&DAT_14cb80d10,L"Actor",1);
  FUN_1446f470e(&DAT_14cb80d18,L"Trick",1);
  _DAT_14cb80d20 = 0x47efffffe0000000;
  _DAT_14cb80d28 = 0x47efffffe0000000;
  _DAT_14cb80d30 = 0x47efffffe0000000;
  _DAT_14cb80d38 = 0x47efffffe0000000;
  _DAT_14cb80d40 = 0x47efffffe0000000;
  _DAT_14cb80d48 = 0x47efffffe0000000;
  _DAT_14cb80d50 = 0x47efffffe0000000;
  _DAT_14cb80d58 = 0x47efffffe0000000;
  FUN_1446f470e(&DAT_14cb80d60,L"Actor",1);
  FUN_1446f470e(&DAT_14cb80d68,L"AINode",1);
  FUN_1446f470e(&DAT_14cb80d70,L"DialogEvent",1);
  FUN_1400b22c2(&local_68,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_68,&DAT_14cb80d78);
  if (cVar1 == '\0') {
    _DAT_14cb80d78 = 0;
    uRam000000014cb80d80 = 0;
  }
  if (local_68 != (char *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&DAT_14cb80d88,L"bCombat",1);
  FUN_1446f470e(&DAT_14cb80d90,L"bFidgeting",1);
  FUN_1446f470e(&DAT_14cb80d98,L"Actor",1);
  FUN_1446f470e(&DAT_14cb80da0,L"Cover",1);
  FUN_1446f470e(&DAT_14cb80da8,L"Stage",1);
  FUN_1446f470e(&DAT_14cb80db0,L"Actor",1);
  FUN_1446f470e(&DAT_14cb80db8,L"Perch",1);
  FUN_1446f470e(&DAT_14cb80dc0,L"Stage",1);
  local_68 = "OnPerchReached";
  uStack_60 = 0xe;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cb80dc8 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cb80dd0,L"Condition",1);
  FUN_1446f470e(&DAT_14cb80dd8,L"Context",1);
  FUN_1446f470e(&DAT_14cb80de0,L"Actor",1);
  FUN_1446f470e(&DAT_14cb80de8,L"Target",1);
  FUN_1446f470e(&DAT_14cb80df0,L"Stage",1);
  FUN_1446f470e(&DAT_14cb80df8,L"Duration",1);
  FUN_1446f470e(&DAT_14cb80e00,L"Target",1);
  FUN_1446f470e(&DAT_14cb80e08,L"bCombat",1);
  FUN_1446f470e(&DAT_14cb80e10,L"bFidgeting",1);
  FUN_1446f470e(&DAT_14cb80e18,L"AlwaysAnimateStandIn",1);
  DAT_14cb80e20 = 0;
  atexit((_func_5014 *)&LAB_143d841bb);
  _DAT_14cb80e80 = &LAB_143d8452f;
  _DAT_14cb80e88 = 0x4628c400;
  DAT_14cb80e8c = 1;
  DAT_14cb80e78 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb80e78;
  atexit((_func_5014 *)&LAB_143d84534);
  local_68._0_4_ = 1;
  local_78 = 0;
  FUN_14078dbce(&DAT_14cb80e98,L"gbx.StandInViewer.AllowDynamicShadows",&local_68,
                L"0: Do not allow dynamic shadows");
  atexit(FUN_143d85360);
  local_68 = (char *)CONCAT44(local_68._4_4_,0xffffffff);
  local_78 = 0;
  FUN_14078dbce(&DAT_14cb80eb0,L"gbx.StandInViewer.Shadow.Virtual.MaxPhysicalPages",&local_68,
                L"When this value > 0 it overrides r.Shadow.Virtual.MaxPhysicalPages for ViewSceneCaptureComponent.Expected to be >= 256 because of GRHIGlobals.ReservedResources.TextureArrayMinimumMipDimension (in FRHITextureDesc::Validate)."
               );
  atexit(FUN_143d853a5);
  local_78 = 0;
  FUN_1415c789c(&DAT_14cb80ec8,L"gbx.MaxShortestPathTimeMS",&DAT_14c763954,
                L"How much time(ms) to give to computing the shortest path between points.");
  atexit(FUN_143d86176);
  local_68 = "nexus";
  uStack_60 = 5;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb80ed8 = (ulonglong)uVar2;
  _DAT_14cb80f08 = 0;
  _DAT_14cb80f10 = 0;
  _DAT_14cb80ee8 = 0;
  _DAT_14cb80ef0 = 0;
  _DAT_14cb80f14 = 0xffffffff00000080;
  DAT_14cb80f1c = 0;
  DAT_14cb80f28 = 0;
  _DAT_14cb80f30 = 0;
  atexit(FUN_143d86bb4);
  FUN_1446f470e(&DAT_14cb80f40,L"ProjectedMesh",1);
  local_68 = "GbxSimpleActorMaterialOverrider";
  uStack_60 = 0x1f;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb80f90 = (ulonglong)uVar2;
  DAT_14cb80fb0 = 0;
  local_68 = (char *)0x6dcc35ba214fc93d;
  uStack_60 = 0xf977ca45;
  uStack_5c = 0xa67a3829;
  _DAT_14cb80fb4 = 0x214fc93d;
  uRam000000014cb80fb8 = 0x6dcc35ba;
  uRam000000014cb80fbc = 0xf977ca45;
  uRam000000014cb80fc0 = 0xa67a3829;
  FUN_141005458(&local_68,0,L"GestaltPartListData",0);
  atexit((_func_5014 *)&LAB_143d88d6c);
  _DAT_14cb80fc8 = 0;
  uRam000000014cb80fd0 = 0;
  _DAT_14cb80fd8 = 0;
  DAT_14cb80fe0 = 0;
  uRam000000014cb80fe8 = 0;
  FUN_1446ddda2(&DAT_14cb80fc8,"cond_channel",0);
  atexit((_func_5014 *)&LAB_143d88f5d);
  local_68 = "default";
  uStack_60 = 7;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_68,1);
  uVar4 = (ulonglong)uVar2;
  local_68 = "FactExpression";
  uStack_60 = 0xe;
  uStack_5c = uStack_5c & 0xffffff00;
  _DAT_14cb80ff0 = uVar4;
  uVar2 = FUN_14001a6c0(&local_68,1);
  uVar3 = (ulonglong)uVar2;
  local_68 = "Unlockable";
  uStack_60 = 10;
  uStack_5c = uStack_5c & 0xffffff00;
  _DAT_14cb80ff8 = uVar3;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cb81000 = (ulonglong)uVar2;
  DAT_14cb81008 = uVar4;
  DAT_14cb81010 = uVar3;
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d8fda0 FUN_143d8fda0 body=41 status=ok
// SIG undefined FUN_143d8fda0(void)

void FUN_143d8fda0(void)

{
  DAT_14cb810f0 = 0;
  if (DAT_14cb810e8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d668d0();
  return;
}



// FUNCTION 143d8fdce FUN_143d8fdce body=41 status=ok
// SIG undefined FUN_143d8fdce(void)

void FUN_143d8fdce(void)

{
  DAT_14cb811e0 = 0;
  if (DAT_14cb811d8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6696e();
  return;
}



// FUNCTION 143d8fe49 FUN_143d8fe49 body=41 status=ok
// SIG undefined FUN_143d8fe49(void)

void FUN_143d8fe49(void)

{
  DAT_14cb81338 = 0;
  if (DAT_14cb81330 != 0) {
    FUN_1400020a8();
  }
  FUN_145d66a0c();
  return;
}



// FUNCTION 143d8fef4 FUN_143d8fef4 body=69 status=ok
// SIG undefined FUN_143d8fef4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d8fef4(void)

{
  _DAT_14cb81470 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d8ff36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb81478,1);
  return;
}



// FUNCTION 143d8ff3a FUN_143d8ff3a body=276 status=ok
// SIG undefined FUN_143d8ff3a(void)

void FUN_143d8ff3a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x18);
  if ((lVar4 != 0) && (lVar2 = *param_1, *(int *)(lVar2 + 0xf0) != *(int *)(lVar2 + 0x11c))) {
    uVar3 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar7 = (uint)lVar4 & 0xffff;
    lVar6 = lVar2 + 0x120;
    if (*(longlong *)(lVar2 + 0x128) != 0) {
      lVar6 = *(longlong *)(lVar2 + 0x128);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar2 + 0x130) - 1U &
                             (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar7) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar2 + 0xe8) + (longlong)iVar5 * 0x14);
        if (*plVar1 == lVar4) {
          if (plVar1 == (longlong *)0x0) {
            return;
          }
          if (plVar1 + 1 == (longlong *)0x0) {
            return;
          }
          if ((int)plVar1[1] == -1) {
            return;
          }
          if (*(char *)(param_2 + 0x10) != '\0') {
            return;
          }
          plVar1 = (longlong *)param_1[1];
          iVar5 = (int)plVar1[1];
          lVar4 = (longlong)iVar5;
          *(uint *)(plVar1 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)plVar1 + 0xc) < iVar5 + 1U) {
            FUN_145984818(plVar1,iVar5);
          }
          lVar2 = *plVar1;
          *(undefined ***)(lVar2 + lVar4 * 0x18) = &PTR_FUN_14b2e1720;
          *(undefined8 *)(lVar2 + 8 + lVar4 * 0x18) = *(undefined8 *)(param_2 + 8);
          *(undefined1 *)(lVar2 + 0x10 + lVar4 * 0x18) = *(undefined1 *)(param_2 + 0x10);
          return;
        }
        iVar5 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 143d900c0 FUN_143d900c0 body=64 status=ok
// SIG undefined FUN_143d900c0(void)

undefined8 FUN_143d900c0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 0x19;
  FUN_14387d746(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d90102 FUN_143d90102 body=81 status=ok
// SIG undefined FUN_143d90102(void)

void FUN_143d90102(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = param_1;
    if (0x18 < *(ushort *)(param_1 + 3)) {
      puVar2 = (undefined8 *)*param_1;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_1 + 3)) {
    FUN_1400020a8(*param_1);
    return;
  }
  return;
}



// FUNCTION 143d90154 FUN_143d90154 body=58 status=ok
// SIG undefined FUN_143d90154(void)

undefined8 FUN_143d90154(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_2 + 0x30);
  *(uint *)(param_2 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x34) < iVar1 + 1U) {
    FUN_142b3d46e(param_2,iVar1);
  }
  lVar2 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(param_2 + 0x28) == 0) {
    lVar2 = param_2;
  }
  *(undefined1 *)(lVar2 + iVar1) = 0x10;
  return 1;
}



// FUNCTION 143d901c6 FUN_143d901c6 body=2023 status=ok
// SIG undefined FUN_143d901c6(void)

void FUN_143d901c6(longlong param_1,longlong param_2,float param_3,ulonglong param_4,
                  longlong param_5,undefined4 param_6)

{
  int *piVar1;
  ulonglong uVar2;
  byte bVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  uint *puVar15;
  longlong lVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  undefined8 unaff_R15;
  ulonglong uVar24;
  undefined4 *puVar25;
  bool bVar26;
  float fVar27;
  undefined1 auStack_138 [32];
  undefined2 *local_118;
  byte local_10a;
  undefined1 local_109;
  longlong local_108;
  longlong local_100;
  undefined8 *local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined2 local_e0 [2];
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  byte local_98;
  ulonglong local_80;
  
  uVar19 = param_4 & 0xffffffff;
  uVar18 = (undefined4)param_4;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(longlong *)(param_1 + 0x5a8) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_1447210f0();
  }
  if (*(longlong *)(param_1 + 0x598) == 0) {
    plVar14 = (longlong *)0x0;
  }
  else {
    plVar14 = *(longlong **)(param_1 + 0x5a0);
  }
  cVar5 = (**(code **)(*plVar14 + 0x20))();
  if (cVar5 == '\0') {
    if ((lVar7 != 0) &&
       ((bVar3 = *(byte *)(lVar7 + 0x152), bVar3 == 1 ||
        ((bVar3 < 7 && ((0x68U >> (bVar3 & 0x1f) & 1) != 0)))))) {
      *(longlong *)(param_1 + 0x70) = param_2;
      *(float *)(param_1 + 0x78) = param_3;
      if ((param_5 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_5);
      }
      *(longlong *)(param_1 + 0x60) = param_5;
      *(float *)(param_1 + 0x68) = (float)*(double *)(lVar7 + 0x6d0);
    }
    goto LAB_143d903f1;
  }
  if (((param_2 == 0) || ((*(byte *)(param_1 + 0x5e8) & 1) == 0)) ||
     (plVar14 = *(longlong **)(param_1 + 0x5e0), plVar14 == (longlong *)0x0)) goto LAB_143d903f1;
  iVar6 = (int)plVar14[1];
  do {
    if (iVar6 == 0) goto LAB_143d903f1;
    LOCK();
    iVar10 = (int)plVar14[1];
    bVar26 = iVar6 == iVar10;
    if (bVar26) {
      *(int *)(plVar14 + 1) = iVar6 + 1;
      iVar10 = iVar6;
    }
    iVar6 = iVar10;
    UNLOCK();
  } while (!bVar26);
  local_100 = *(longlong *)(param_1 + 0x5d8);
  if (local_100 != 0) {
    if (*(char *)(param_2 + 0x18) == '\x02') {
      param_3 = -1.0;
    }
    local_108 = *(longlong *)(param_1 + 0x80);
    bVar3 = *(byte *)(param_1 + 0x19);
    uVar22 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),bVar3);
    *(longlong *)(param_1 + 0x80) = param_2;
    fVar27 = 0.0;
    if (*(char *)(param_2 + 0x18) != '\x01') {
      fVar27 = param_3;
    }
    *(byte *)(param_1 + 0x19) = bVar3 & 0xfe | 0.0 <= fVar27;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (local_108 != param_2) {
      iVar6 = *(int *)(param_1 + 0x120);
      local_109 = (undefined1)uVar19;
      local_10a = bVar3;
      if (iVar6 == 0) {
        uVar22 = 1;
        uVar24 = 0;
        iVar23 = 0;
        iVar10 = 0;
      }
      else {
        puVar15 = *(uint **)(param_1 + 0x118);
        if (*(uint **)(param_1 + 0x118) == (uint *)0x0) {
          puVar15 = (uint *)(param_1 + 0x108);
        }
        uVar21 = *puVar15;
        if (uVar21 == 0) {
          iVar10 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar10 = iVar6 + -1;
          }
          uVar24 = 0;
          uVar22 = (ulonglong)(uint)(iVar10 >> 5);
          if (iVar10 >> 5 < 1) {
            uVar22 = uVar24;
          }
          iVar23 = 0;
          do {
            if (uVar22 == uVar24) goto LAB_143d90531;
            iVar23 = iVar23 + 0x20;
            uVar21 = puVar15[uVar24 + 1];
            uVar24 = uVar24 + 1;
          } while (uVar21 == 0);
        }
        else {
          uVar24 = 0;
          iVar23 = 0;
        }
        uVar22 = (ulonglong)(-uVar21 & uVar21);
        uVar2 = uVar22 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar10 = (iVar23 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar10) {
          iVar10 = iVar6;
        }
      }
      if (iVar10 < iVar6) {
        uVar19 = 0xffffffff;
        do {
          local_118 = *(undefined2 **)(param_1 + 0x80);
          FUN_140ec12ee(local_100,
                        *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar10 * 0x18),
                        param_1,local_108);
          uVar21 = ~(uint)uVar22 & (uint)uVar19;
          puVar15 = *(uint **)(param_1 + 0x118);
          if (*(uint **)(param_1 + 0x118) == (uint *)0x0) {
            puVar15 = (uint *)(param_1 + 0x108);
          }
          iVar6 = *(int *)(param_1 + 0x120);
          iVar10 = (int)uVar24;
          lVar20 = (longlong)iVar10;
          uVar11 = puVar15[lVar20] & uVar21;
          if (uVar11 == 0) {
            iVar12 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar12 = iVar6 + -1;
            }
            iVar12 = iVar12 >> 5;
            iVar13 = iVar12;
            if (iVar12 < iVar10) {
              iVar13 = iVar10;
            }
            if (iVar12 <= iVar10) break;
            lVar16 = 0;
            while( true ) {
              iVar23 = iVar23 + 0x20;
              uVar11 = puVar15[lVar20 + lVar16 + 1];
              if (uVar11 != 0) break;
              lVar16 = lVar16 + 1;
              if (iVar13 - lVar20 == lVar16) goto LAB_143d90531;
            }
            uVar24 = (ulonglong)(iVar10 + (int)lVar16 + 1);
            uVar21 = 0xffffffff;
          }
          uVar19 = (ulonglong)uVar21;
          uVar22 = (ulonglong)(-uVar11 & uVar11);
          uVar2 = uVar22 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar10 = (iVar23 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        } while (iVar10 < iVar6);
      }
LAB_143d90531:
      if (*(longlong *)(param_1 + 0x598) == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)(param_1 + 0x5a0);
      }
      uVar18 = (undefined4)CONCAT71((int7)(uVar19 >> 8),local_109);
      uVar22 = CONCAT71((int7)(uVar24 >> 8),local_10a);
      lVar20 = (**(code **)(*plVar9 + 0x18))();
      puVar17 = &DAT_14c9485f0;
      if (*(longlong *)(param_1 + 0x88) != 0) {
        puVar25 = *(undefined4 **)(*(longlong *)(param_1 + 0x88) + 8);
        puVar17 = &DAT_14c9485f0;
        if (puVar25 != (undefined4 *)0x0) {
          puVar17 = puVar25;
        }
      }
      FUN_1447715ec(lVar20 + 0x28,puVar17);
      puVar17 = &DAT_14c9485f0;
      if (*(longlong *)(param_1 + 0x80) != 0) {
        puVar25 = *(undefined4 **)(*(longlong *)(param_1 + 0x80) + 8);
        puVar17 = &DAT_14c9485f0;
        if (puVar25 != (undefined4 *)0x0) {
          puVar17 = puVar25;
        }
      }
      FUN_1447715ec(lVar20,puVar17);
      *(undefined4 *)(lVar20 + 0x68) = 0;
    }
    FUN_143d909ae(param_1,param_5,param_6);
    FUN_140e40572(param_1,0);
    FUN_143d9112a(param_1,local_108,uVar22 & 0xffffff01);
    puVar17 = *(undefined4 **)(*(longlong *)(param_1 + 0x80) + 8);
    puVar25 = &DAT_14c9485f0;
    if (puVar17 != (undefined4 *)0x0) {
      puVar25 = puVar17;
    }
    if (DAT_14c947fe0 == 0) {
      lVar20 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar20);
      DAT_14c947fe0 = lVar20;
    }
    FUN_140045924(DAT_14c947fe0,&local_e8,puVar25,1);
    local_d8 = local_e8;
    local_d0 = 0x678bcdb;
    local_c8 = 0;
    FUN_14185c17c(param_1 + 0x50,&local_d8,uVar18);
    FUN_1447f69b6(param_1);
    if ((*(byte *)(param_1 + 0xf0) & 1) != 0) {
      FUN_1405ff6be(param_1);
    }
    if (lVar7 != 0) {
      if ((fVar27 <= 0.0) || ((*(byte *)(param_1 + 0x19) & 1) == 0)) {
        lVar20 = *(longlong *)(param_1 + 0x148);
        if (lVar20 != 0) {
          if (*(longlong *)(lVar7 + 0x1f0) == 0) {
            plVar9 = (longlong *)(lVar7 + 0x458);
          }
          else {
            plVar9 = (longlong *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
          }
          lVar7 = *plVar9;
          uVar21 = (uint)lVar20;
          if ((int)(uVar21 & 0xffffff) < *(int *)(lVar7 + 0x10)) {
            lVar16 = lVar7 + 0x18;
            if (*(longlong *)(lVar7 + 0x28) != 0) {
              lVar16 = *(longlong *)(lVar7 + 0x28);
            }
            if ((*(uint *)(lVar16 + (ulonglong)((uVar21 & 0xffffff) >> 5) * 4) >> (uVar21 & 0x1f) &
                1) != 0) {
              lVar7 = *(longlong *)(lVar7 + 8);
              lVar16 = (ulonglong)(uVar21 & 0xffffff) * 0x70;
              if (((lVar7 + lVar16 != 0) && (*(longlong *)(lVar7 + 0x60 + lVar16) == lVar20)) &&
                 (*(char *)(lVar7 + 1 + lVar16) != '\x04')) {
                FUN_1405a424c();
              }
            }
          }
          *(undefined8 *)(param_1 + 0x148) = 0;
        }
      }
      else {
        if (*(longlong *)(lVar7 + 0x1f0) == 0) {
          puVar8 = (undefined8 *)(lVar7 + 0x458);
        }
        else {
          puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
        }
        uVar4 = *puVar8;
        lVar7 = *(longlong *)(param_1 + 0x5a8);
        local_f8 = (undefined8 *)0x0;
        local_f0 = 0;
        FUN_1446efa72(&local_f8,0,3,0x10);
        puVar8 = local_f8;
        local_f0 = 3;
        *local_f8 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar16 = DAT_14c758608 + 1;
        lVar20 = DAT_14c758608 + 1;
        if (lVar16 == 0) {
          LOCK();
          UNLOCK();
          lVar16 = DAT_14c758608 + 2;
          lVar20 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar20;
        local_f8[2] = lVar16;
        *local_f8 = &PTR_FUN_14b40fea0;
        local_f8[3] = 0;
        iVar6 = 0;
        if (lVar7 != 0) {
          uVar21 = *(uint *)(lVar7 + 0xc);
          *(uint *)(local_f8 + 3) = uVar21;
          if ((int)uVar21 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          iVar6 = *(int *)(lVar7 + 0x10);
          if (*(int *)(lVar7 + 0x10) == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            iVar10 = DAT_14c964868 + 1;
            bVar26 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar26) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar10);
            }
            LOCK();
            iVar6 = *(int *)(lVar7 + 0x10);
            bVar26 = iVar6 == 0;
            if (bVar26) {
              *(int *)(lVar7 + 0x10) = iVar10;
              iVar6 = 0;
            }
            UNLOCK();
            if (bVar26) {
              iVar6 = iVar10;
            }
          }
        }
        *(int *)((longlong)puVar8 + 0x1c) = iVar6;
        puVar8[4] = param_1;
        local_d8 = 0;
        local_d0 = 0;
        FUN_14487d8d8(&local_d8,&local_f8);
        local_98 = 1;
        local_118 = local_e0;
        local_e0[0] = 0;
        local_dc = 0xbf800000;
        FUN_1406f4044(uVar4,param_1 + 0x148,&local_d8,fVar27);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_98])(&local_d8);
        if (local_f0 != 0) {
          if (local_f8 == (undefined8 *)0x0) goto LAB_143d908b1;
          (**(code **)*local_f8)(local_f8,0);
          FUN_1446efa72(&local_f8,0,0,0x10);
          local_f0 = 0;
        }
        if (local_f8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_143d908b1:
  LOCK();
  plVar9 = plVar14 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar14)(plVar14);
    LOCK();
    piVar1 = (int *)((longlong)plVar14 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
LAB_143d903f1:
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d909ae FUN_143d909ae body=1494 status=ok
// SIG undefined FUN_143d909ae(void)

void FUN_143d909ae(longlong param_1,longlong param_2,float param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_98 [32];
  longlong *local_78;
  uint *local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x60) = param_2;
  if (param_3 <= 0.0) {
    if (*(longlong *)(param_1 + 0x5a8) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_1447210f0();
    }
    param_3 = (float)*(double *)(lVar7 + 0x6d0);
  }
  *(float *)(param_1 + 0x68) = param_3;
  puVar3 = *(undefined8 **)(param_1 + 0x5e0);
  if (puVar3 != (undefined8 *)0x0) {
    iVar6 = *(int *)(puVar3 + 1);
    do {
      if (iVar6 == 0) goto LAB_143d90f60;
      LOCK();
      iVar9 = *(int *)(puVar3 + 1);
      bVar22 = iVar6 == iVar9;
      if (bVar22) {
        *(int *)(puVar3 + 1) = iVar6 + 1;
        iVar9 = iVar6;
      }
      iVar6 = iVar9;
      UNLOCK();
    } while (!bVar22);
    if (*(longlong *)(param_1 + 0x5d8) != 0) {
      iVar6 = *(int *)(param_1 + 0x120);
      if (iVar6 == 0) {
        uVar21 = 1;
        uVar20 = 0;
        iVar15 = 0;
        iVar9 = 0;
      }
      else {
        puVar12 = *(uint **)(param_1 + 0x118);
        if (*(uint **)(param_1 + 0x118) == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 0x108);
        }
        uVar19 = *puVar12;
        if (uVar19 == 0) {
          iVar9 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar9 = iVar6 + -1;
          }
          uVar20 = 0;
          uVar21 = (ulonglong)(uint)(iVar9 >> 5);
          if (iVar9 >> 5 < 1) {
            uVar21 = uVar20;
          }
          iVar15 = 0;
          do {
            if (uVar21 == uVar20) goto LAB_143d90f1d;
            iVar15 = iVar15 + 0x20;
            uVar19 = puVar12[uVar20 + 1];
            uVar20 = uVar20 + 1;
          } while (uVar19 == 0);
        }
        else {
          uVar20 = 0;
          iVar15 = 0;
        }
        uVar21 = (ulonglong)(-uVar19 & uVar19);
        uVar2 = uVar21 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar9 = (iVar15 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar9) {
          iVar9 = iVar6;
        }
      }
      if (iVar9 < iVar6) {
        local_78 = (longlong *)(*(longlong *)(param_1 + 0x5d8) + 0x78);
        uVar19 = 0xffffffff;
        local_70 = (uint *)(param_1 + 0x108);
        do {
          plVar13 = local_78;
          uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar9 * 0x18);
          if (uVar2 != 0 && DAT_14c950c29 == 1) {
            FUN_1456cec3c(uVar2);
          }
          local_68 = uVar2;
          if ((~DAT_14c950c29 & 1) == 0 && uVar2 != 0) {
            FUN_1456cec3c(uVar2);
          }
          if ((uVar2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
            FUN_1456cec3c(uVar2);
          }
          uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
          uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          iVar6 = FUN_143d9884e(plVar13,uVar5 >> 0x10 ^ uVar5,&local_68);
          if (iVar6 != -1) {
            lVar7 = (longlong)iVar6 * 0x68 + *plVar13;
            if ((longlong *)(lVar7 + 8) != (longlong *)0x0 && lVar7 != 0) {
              plVar13 = (longlong *)0x0;
              if (*(longlong *)(param_1 + 0x598) != 0) {
                plVar13 = *(longlong **)(param_1 + 0x5a0);
              }
              lVar8 = (**(code **)(*plVar13 + 0x10))();
              if (*(int *)(lVar7 + 0x10) != *(int *)(lVar7 + 0x3c)) {
                lVar8 = *(longlong *)(lVar8 + 0x80);
                uVar5 = *(uint *)(lVar8 + 0x38);
                uVar4 = *(undefined8 *)(lVar8 + 0x30);
                uVar14 = (uint)((ulonglong)uVar4 >> 0x10);
                uVar18 = (uint)uVar4 & 0xffff;
                uVar14 = uVar5 >> 0xd ^
                         uVar18 + (int)((ulonglong)uVar4 >> 0x20) + ((uint)uVar4 * 0x10000 - uVar5)
                         + (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar18 >> 4);
                uVar18 = uVar14 << 8 ^ (-0x61c88647 - uVar5) - uVar14;
                uVar16 = uVar18 >> 0xd ^ (uVar5 - uVar14) - uVar18;
                uVar5 = uVar16 >> 0xc ^ (uVar14 - uVar18) - uVar16;
                uVar14 = uVar5 << 0x10 ^ (uVar18 - uVar16) - uVar5;
                uVar18 = uVar14 >> 5 ^ (uVar16 - uVar5) - uVar14;
                uVar16 = uVar18 >> 3 ^ (uVar5 - uVar14) - uVar18;
                uVar5 = uVar16 << 10 ^ (uVar14 - uVar18) - uVar16;
                uVar18 = uVar5 >> 0xf ^ uVar18 - (uVar16 + uVar5);
                uVar5 = *(uint *)(lVar8 + 0x50);
                uVar4 = *(undefined8 *)(lVar8 + 0x48);
                uVar14 = (uint)((ulonglong)uVar4 >> 0x10);
                uVar16 = (uint)uVar4 & 0xffff;
                uVar14 = uVar5 >> 0xd ^
                         uVar16 + (int)((ulonglong)uVar4 >> 0x20) + ((uint)uVar4 * 0x10000 - uVar5)
                         + (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar16 >> 4);
                uVar16 = uVar14 << 8 ^ (-0x61c88647 - uVar5) - uVar14;
                uVar17 = uVar16 >> 0xd ^ (uVar5 - uVar14) - uVar16;
                uVar14 = uVar17 >> 0xc ^ (uVar14 - uVar16) - uVar17;
                uVar5 = uVar14 << 0x10 ^ (uVar16 - uVar17) - uVar14;
                uVar16 = uVar5 >> 5 ^ (uVar17 - uVar14) - uVar5;
                uVar14 = uVar16 >> 3 ^ (uVar14 - uVar5) - uVar16;
                uVar5 = uVar14 << 10 ^ (uVar5 - uVar16) - uVar14;
                uVar5 = uVar18 >> 0xd ^ (uVar5 >> 0xf ^ uVar16 - (uVar14 + uVar5)) - uVar18;
                uVar14 = uVar5 << 8 ^ (-0x61c88647 - uVar18) - uVar5;
                uVar18 = uVar14 >> 0xd ^ (uVar18 - uVar5) - uVar14;
                uVar5 = uVar18 >> 0xc ^ (uVar5 - uVar14) - uVar18;
                uVar14 = uVar5 << 0x10 ^ (uVar14 - uVar18) - uVar5;
                uVar18 = uVar14 >> 5 ^ (uVar18 - uVar5) - uVar14;
                uVar16 = uVar18 >> 3 ^ (uVar5 - uVar14) - uVar18;
                uVar5 = uVar16 << 10 ^ (uVar14 - uVar18) - uVar16;
                uVar5 = uVar5 >> 0xf ^ uVar18 - (uVar16 + uVar5);
                lVar8 = lVar7 + 0x40;
                if (*(longlong *)(lVar7 + 0x48) != 0) {
                  lVar8 = *(longlong *)(lVar7 + 0x48);
                }
                iVar6 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar7 + 0x50) - 1U & uVar5) * 4);
                if (iVar6 != -1) {
                  lVar7 = *(longlong *)(lVar7 + 8);
                  do {
                    lVar8 = lVar7 + (longlong)iVar6 * 0x108;
                    if (*(uint *)(lVar7 + (longlong)iVar6 * 0x108) == uVar5) {
                      if ((lVar8 + 8U & 0xfffffffffffffff7) != 0) {
                        *(undefined1 *)(lVar8 + 0xf8) = 1;
                      }
                      break;
                    }
                    iVar6 = *(int *)(lVar8 + 0x100);
                  } while (iVar6 != -1);
                }
              }
            }
          }
          uVar19 = uVar19 & ~(uint)uVar21;
          puVar12 = *(uint **)(param_1 + 0x118);
          if (*(uint **)(param_1 + 0x118) == (uint *)0x0) {
            puVar12 = local_70;
          }
          iVar6 = *(int *)(param_1 + 0x120);
          iVar9 = (int)uVar20;
          lVar7 = (longlong)iVar9;
          uVar5 = puVar12[lVar7] & uVar19;
          if (uVar5 == 0) {
            iVar10 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar10 = iVar6 + -1;
            }
            iVar10 = iVar10 >> 5;
            iVar11 = iVar10;
            if (iVar10 < iVar9) {
              iVar11 = iVar9;
            }
            if (iVar10 <= iVar9) break;
            lVar8 = 0;
            while( true ) {
              iVar15 = iVar15 + 0x20;
              uVar5 = puVar12[lVar7 + lVar8 + 1];
              if (uVar5 != 0) break;
              lVar8 = lVar8 + 1;
              if (iVar11 - lVar7 == lVar8) goto LAB_143d90f1d;
            }
            uVar20 = (ulonglong)(iVar9 + (int)lVar8 + 1);
            uVar19 = 0xffffffff;
          }
          uVar21 = (ulonglong)(-uVar5 & uVar5);
          uVar2 = uVar21 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar9 = (iVar15 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        } while (iVar9 < iVar6);
      }
    }
LAB_143d90f1d:
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_98);
      }
    }
  }
LAB_143d90f60:
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d90fa4 FUN_143d90fa4 body=41 status=ok
// SIG undefined FUN_143d90fa4(void)

void FUN_143d90fa4(void)

{
  DAT_14cb81680 = 0;
  if (DAT_14cb81678 != 0) {
    FUN_1400020a8();
  }
  FUN_145d66aaa();
  return;
}



// FUNCTION 143d90fd2 FUN_143d90fd2 body=343 status=ok
// SIG undefined FUN_143d90fd2(void)

void FUN_143d90fd2(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  
  *(undefined8 *)(param_1 + 0x1b0) = param_3;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *(undefined4 *)(param_1 + 0x1b8) = *param_2;
  *(undefined4 *)(param_1 + 0x1bc) = uVar5;
  *(undefined4 *)(param_1 + 0x1c0) = uVar6;
  *(undefined4 *)(param_1 + 0x1c4) = uVar7;
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 4);
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x1d4) = 0;
    iVar8 = 0;
  }
  else {
    uVar3 = *(uint *)(param_4 + 0xc);
    *(uint *)(param_1 + 0x1d4) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar11 = iVar8 == 0;
      if (bVar11) {
        *(int *)(lVar9 + 0x10) = iVar10;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar8 = iVar10;
      }
    }
  }
  *(int *)(param_1 + 0x1d8) = iVar8;
  if (*(longlong *)(param_1 + 0x5a8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_1447210f0();
  }
  *(float *)(param_1 + 0x1d0) = (float)*(double *)(lVar9 + 0x6d0);
  plVar4 = *(longlong **)(param_1 + 0x5e0);
  if (plVar4 != (longlong *)0x0) {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) {
        return;
      }
      LOCK();
      iVar10 = (int)plVar4[1];
      bVar11 = iVar8 == iVar10;
      if (bVar11) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar10 = iVar8;
      }
      iVar8 = iVar10;
      UNLOCK();
    } while (!bVar11);
    if (*(longlong *)(param_1 + 0x5d8) != 0) {
      FUN_1405fd550(*(longlong *)(param_1 + 0x5d8),param_1 + 0x598);
    }
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143d910c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143d9112a FUN_143d9112a body=659 status=ok
// SIG undefined FUN_143d9112a(void)

void FUN_143d9112a(longlong param_1,longlong param_2,byte param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(byte *)(*(longlong *)(param_1 + 0x5a8) + 0x65) & 2) == 0) &&
     (((*(longlong *)(param_1 + 0x80) != param_2 || ((*(byte *)(param_1 + 0x19) & 1) != param_3)) &&
      (puVar3 = *(undefined8 **)(param_1 + 0x5e0), puVar3 != (undefined8 *)0x0)))) {
    iVar4 = *(int *)(puVar3 + 1);
    do {
      if (iVar4 == 0) goto LAB_143d913a6;
      LOCK();
      iVar6 = *(int *)(puVar3 + 1);
      bVar17 = iVar4 == iVar6;
      if (bVar17) {
        *(int *)(puVar3 + 1) = iVar4 + 1;
        iVar6 = iVar4;
      }
      iVar4 = iVar6;
      UNLOCK();
    } while (!bVar17);
    local_60 = *(longlong *)(param_1 + 0x5d8);
    if (local_60 != 0) {
      FUN_1405fac16(local_60,param_1 + 0x598);
      iVar4 = *(int *)(param_1 + 0x188);
      if (iVar4 == 0) {
        uVar16 = 1;
        uVar15 = 0;
        iVar12 = 0;
        iVar6 = 0;
      }
      else {
        puVar10 = *(uint **)(param_1 + 0x180);
        if (*(uint **)(param_1 + 0x180) == (uint *)0x0) {
          puVar10 = (uint *)(param_1 + 0x170);
        }
        uVar14 = *puVar10;
        if (uVar14 == 0) {
          iVar6 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar6 = iVar4 + -1;
          }
          uVar15 = 0;
          uVar16 = (ulonglong)(uint)(iVar6 >> 5);
          if (iVar6 >> 5 < 1) {
            uVar16 = uVar15;
          }
          iVar12 = 0;
          do {
            if (uVar16 == uVar15) goto LAB_143d91368;
            iVar12 = iVar12 + 0x20;
            uVar14 = puVar10[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar14 == 0);
        }
        else {
          uVar15 = 0;
          iVar12 = 0;
        }
        uVar16 = (ulonglong)(-uVar14 & uVar14);
        uVar2 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar6) {
          iVar6 = iVar4;
        }
      }
      if (iVar6 < iVar4) {
        uVar14 = 0xffffffff;
        do {
          lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar6 * 0x18);
          if ((lVar13 == 0) || (DAT_14c950c29 == '\0')) {
            if (lVar13 != 0) goto LAB_143d9128e;
            local_50 = 0;
            local_58 = lVar13;
          }
          else {
            FUN_1456cec3c(lVar13);
LAB_143d9128e:
            local_58 = lVar13;
            uVar5 = FUN_1405fa766();
            local_50 = FUN_144718840(lVar13,uVar5);
          }
          FUN_1405fac16(local_60,&local_58);
          uVar14 = uVar14 & ~(uint)uVar16;
          puVar10 = *(uint **)(param_1 + 0x180);
          if (*(uint **)(param_1 + 0x180) == (uint *)0x0) {
            puVar10 = (uint *)(param_1 + 0x170);
          }
          iVar4 = *(int *)(param_1 + 0x188);
          iVar6 = (int)uVar15;
          lVar13 = (longlong)iVar6;
          uVar7 = puVar10[lVar13] & uVar14;
          if (uVar7 == 0) {
            iVar8 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar8 = iVar4 + -1;
            }
            iVar8 = iVar8 >> 5;
            iVar9 = iVar8;
            if (iVar8 < iVar6) {
              iVar9 = iVar6;
            }
            if (iVar8 <= iVar6) break;
            lVar11 = 0;
            while( true ) {
              iVar12 = iVar12 + 0x20;
              uVar7 = puVar10[lVar13 + lVar11 + 1];
              if (uVar7 != 0) break;
              lVar11 = lVar11 + 1;
              if (iVar9 - lVar13 == lVar11) goto LAB_143d91368;
            }
            uVar15 = (ulonglong)(iVar6 + (int)lVar11 + 1);
            uVar14 = 0xffffffff;
          }
          uVar16 = (ulonglong)(-uVar7 & uVar7);
          uVar2 = uVar16 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        } while (iVar6 < iVar4);
      }
    }
LAB_143d91368:
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
      }
    }
  }
LAB_143d913a6:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d913d8 FUN_143d913d8 body=316 status=ok
// SIG undefined FUN_143d913d8(void)

ulonglong FUN_143d913d8(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  if ((longlong *)param_2[1] != (longlong *)0x0 && *param_2 != 0) {
    lVar2 = (**(code **)(*(longlong *)param_2[1] + 0x10))();
    uVar3 = 0;
    if ((*(longlong *)(lVar2 + 0x5d0) == 0) || ((*(byte *)(lVar2 + 0x5e8) & 0x10) != 0))
    goto LAB_143d913ff;
    if ((longlong)*(int *)(param_1 + 0x158) != 0) {
      lVar5 = 0;
      if (*param_2 != 0) {
        lVar5 = param_2[1];
      }
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x150) + lVar6);
        if (lVar1 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x150) + 8 + lVar6);
        }
        if ((lVar1 == *param_2) && (lVar4 == lVar5)) goto LAB_143d913fd;
        lVar6 = lVar6 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x158) * 0x10 != lVar6);
    }
    if ((longlong)*(int *)(lVar2 + 0x158) != 0) {
      lVar5 = 0;
      if (*(longlong *)(param_1 + 0x598) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x5a0);
      }
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x150) + lVar6);
        if (lVar1 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x150) + 8 + lVar6);
        }
        if ((lVar1 == *(longlong *)(param_1 + 0x598)) && (lVar4 == lVar5)) goto LAB_143d913fd;
        lVar6 = lVar6 + 0x10;
      } while ((longlong)*(int *)(lVar2 + 0x158) * 0x10 != lVar6);
    }
    uVar3 = (ulonglong)*(int *)(lVar2 + 0xd8);
    if (uVar3 != 0) {
      lVar5 = uVar3 * 8;
      lVar6 = 0;
      do {
        bVar7 = *(longlong *)(*(longlong *)(lVar2 + 0xd0) + lVar6) == param_3;
        uVar3 = CONCAT71((int7)(uVar3 >> 8),bVar7);
        if (bVar7) break;
        bVar7 = lVar5 + -8 != lVar6;
        lVar6 = lVar6 + 8;
      } while (bVar7);
      goto LAB_143d913ff;
    }
  }
LAB_143d913fd:
  uVar3 = 0;
LAB_143d913ff:
  return uVar3 & 0xffffffff;
}



// FUNCTION 143d91514 FUN_143d91514 body=180 status=ok
// SIG undefined FUN_143d91514(void)

void FUN_143d91514(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined4 *param_5,byte param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0x678bcdb;
  param_2[2] = 0;
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x18);
    do {
      if ((plVar1[-3] == *param_3) && ((int)plVar1[-2] == (int)param_3[1])) {
        if ((*plVar1 != 0) && ((int)plVar1[1] - 1U < 0xfffffffe)) {
          param_4 = plVar1;
        }
        if ((*param_4 != 0) || ((int)param_4[1] != 0x678bcdb)) {
          *param_2 = *param_4;
          *(int *)(param_2 + 1) = (int)param_4[1];
          param_2[2] = 0;
        }
        if (param_5 == (undefined4 *)0x0) {
          return;
        }
        *param_5 = *(undefined4 *)((longlong)plVar1 + (ulonglong)param_6 * 4 + 0x18);
        return;
      }
      plVar2 = plVar1 + 5;
      plVar1 = plVar1 + 8;
    } while (plVar2 != (longlong *)
                       ((longlong)*(int *)(param_1 + 0x28) * 0x40 + *(longlong *)(param_1 + 0x20)));
  }
  return;
}



// FUNCTION 143d915c8 FUN_143d915c8 body=41 status=ok
// SIG undefined FUN_143d915c8(void)

void FUN_143d915c8(void)

{
  DAT_14cb817a8 = 0;
  if (DAT_14cb817a0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d66b48();
  return;
}



// FUNCTION 143d915f6 FUN_143d915f6 body=272 status=ok
// SIG undefined FUN_143d915f6(void)

void FUN_143d915f6(longlong param_1)

{
  longlong lVar1;
  longlong *_Dst;
  longlong lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    iVar8 = *(int *)(lVar1 + 0x100);
    if ((iVar8 != 0) && (0 < iVar8)) {
      do {
        _Dst = *(longlong **)(lVar1 + 0xf8);
        lVar2 = *_Dst;
        iVar6 = 1;
        if (iVar8 != 1) {
          memmove(_Dst,_Dst + 1,(ulonglong)(iVar8 - 1) << 3);
          iVar6 = *(int *)(lVar1 + 0x100);
        }
        *(int *)(lVar1 + 0x100) = iVar6 + -1;
        FUN_1405fa8e4((undefined8 *)(lVar1 + 0xf8));
        if (lVar2 != 0) {
          FUN_143d917a0(lVar2,1);
          bVar7 = 0 < *(int *)(lVar1 + 0x100);
          cVar5 = *(char *)(lVar1 + 299);
          if (bVar7 == (cVar5 != '\0')) {
            return;
          }
          goto LAB_143d91670;
        }
        iVar8 = *(int *)(lVar1 + 0x100);
      } while (0 < iVar8);
    }
    cVar5 = *(char *)(lVar1 + 299);
    if (cVar5 != '\0') {
      bVar7 = false;
LAB_143d91670:
      pbVar3 = *(byte **)(lVar1 + 0x140);
      if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 1) == 0)) {
        *(bool *)(lVar1 + 299) = bVar7;
      }
      else {
        if (bVar7 != (cVar5 != '\0')) {
          uVar4 = *(undefined8 *)(pbVar3 + 0x28);
          FUN_1402eb48e(uVar4,lVar1 + 0x120);
          *(bool *)(lVar1 + 299) = bVar7;
          FUN_1402eb97e(uVar4,lVar1 + 0x120);
          cVar5 = *(char *)(lVar1 + 299);
        }
        if (cVar5 == '\0') {
          *(undefined4 *)(*(longlong *)(lVar1 + 0x140) + 0x24) = 0xbf800000;
        }
      }
    }
  }
  return;
}



// FUNCTION 143d9170c FUN_143d9170c body=133 status=ok
// SIG undefined FUN_143d9170c(void)

void FUN_143d9170c(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x600);
  if (*(longlong *)(param_1 + 0x600) == 0) {
    lVar5 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x608);
  if ((longlong)iVar1 != 0) {
    puVar6 = (undefined8 *)(lVar5 + 8);
    do {
      if (puVar6[-1] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)*puVar6;
      }
      uVar2 = (**(code **)(*plVar3 + 0x10))();
      FUN_143d901c6(uVar2,puVar6[1],*(undefined4 *)(puVar6 + 2),0,puVar6[3],
                    *(undefined4 *)(puVar6 + 4));
      puVar4 = puVar6 + 5;
      puVar6 = puVar6 + 6;
    } while (puVar4 != (undefined8 *)((longlong)iVar1 * 0x30 + lVar5));
  }
  return;
}



// FUNCTION 143d917a0 FUN_143d917a0 body=5163 status=ok
// SIG undefined FUN_143d917a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d917a0(longlong param_1,undefined1 param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 extraout_EAX;
  double extraout_RAX;
  float *pfVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  double *pdVar11;
  undefined4 uVar12;
  uint uVar13;
  double *pdVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auStack_428 [32];
  double *local_408;
  longlong *local_400;
  double *local_3f8;
  double *local_3f0;
  double *local_3e8;
  code *local_3e0;
  longlong *local_3d8;
  code **local_3d0;
  code *local_3c8;
  code *local_3c0;
  double local_3b8;
  undefined8 uStack_3b0;
  undefined1 local_3a8 [16];
  double local_398;
  double local_390;
  double local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  float local_374;
  float local_370;
  float local_36c;
  longlong local_368;
  undefined8 uStack_360;
  longlong local_358 [2];
  longlong local_348 [6];
  double local_318;
  double local_310;
  longlong local_308 [2];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  code *local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  undefined8 uStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8 [7];
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  uint local_140;
  uint local_13c;
  undefined8 local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  auVar28 = roundpd(ZEXT816(0xbfd0000000000000),ZEXT816(0xbfd0000000000000),3);
  auVar31 = roundpd(in_XMM1,ZEXT816(0),3);
  dVar34 = (-90.0 - auVar28._0_8_ * 360.0) * 0.008726646259971648;
  dVar41 = (0.0 - auVar28._8_8_ * 360.0) * 0.008726646259971648;
  dVar39 = (0.0 - auVar31._0_8_ * 360.0) * 0.008726646259971648;
  dVar40 = (0.0 - auVar31._8_8_ * 360.0) * 0.008726646259971648;
  lVar18 = param_1;
  dVar21 = sin(dVar34);
  uVar12 = (undefined4)lVar18;
  dVar22 = sin(dVar41);
  dVar23 = sin(dVar39);
  sin(dVar40);
  dVar24 = cos(dVar34);
  dVar25 = cos(dVar41);
  dVar26 = cos(dVar39);
  cos(dVar40);
  lVar18 = *(longlong *)(param_1 + 0x1c8);
  local_3a8 = *(undefined1 (*) [16])(lVar18 + 0x260);
  local_3b8 = *(double *)(lVar18 + 0x270);
  uStack_3b0 = *(undefined8 *)(lVar18 + 0x278);
  dVar34 = *(double *)(lVar18 + 0x240);
  dVar41 = *(double *)(lVar18 + 0x248);
  dVar39 = *(double *)(lVar18 + 0x250);
  dVar40 = *(double *)(lVar18 + 600);
  pdVar11 = *(double **)(lVar18 + 0x228);
  dVar27 = extraout_RAX;
  local_178 = dVar34;
  dStack_170 = dVar41;
  local_168 = dVar39;
  dStack_160 = dVar40;
  if (pdVar11 == (double *)0x0) {
    uVar12 = 0x40;
    pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
    dVar27 = DAT_14c8463d8;
    *pdVar11 = DAT_14c8463d0;
    pdVar11[1] = dVar27;
    dVar27 = DAT_14c8463e8;
    pdVar11[2] = DAT_14c8463e0;
    pdVar11[3] = dVar27;
    dVar27 = DAT_14c846500;
    pdVar11[4] = DAT_14c8464f8;
    pdVar11[5] = dVar27;
    dVar27 = DAT_14c846508;
    pdVar11[6] = DAT_14c846508;
    *(double **)(lVar18 + 0x228) = pdVar11;
  }
  auVar31._8_8_ = -(ulonglong)(dVar40 != pdVar11[3]);
  auVar31._0_8_ = -(ulonglong)(dVar39 != pdVar11[2]);
  auVar28._8_4_ = (int)-(ulonglong)(dVar41 != pdVar11[1]);
  auVar28._0_8_ = -(ulonglong)(dVar34 != *pdVar11);
  auVar28._12_4_ = (int)(-(ulonglong)(dVar41 != pdVar11[1]) >> 0x20);
  iVar5 = movmskpd(SUB84(dVar27,0),auVar28);
  uVar13 = movmskpd(uVar12,auVar31);
  uVar12 = 0;
  if ((uVar13 & 0x3fffffff) != 0 || iVar5 != 0) {
    pdVar14 = &local_178;
    pdVar11[2] = local_168;
    pdVar11[3] = dStack_160;
    *pdVar11 = local_178;
    pdVar11[1] = dStack_170;
    FUN_1448052ee(pdVar14,&local_1f8);
    uVar12 = SUB84(pdVar14,0);
    pdVar11[6] = local_1e8[0];
    pdVar11[4] = local_1f8;
    pdVar11[5] = dStack_1f0;
  }
  dVar42 = dVar21 * dVar22 * dVar26 - dVar23 * dVar24 * dVar25;
  dVar43 = -(dVar21 * dVar25 * dVar26) - dVar23 * dVar24 * dVar22;
  dVar44 = dVar22 * dVar24 * dVar26 + -(dVar25 * dVar21 * dVar23);
  dVar45 = dVar25 * dVar24 * dVar26 + dVar22 * dVar21 * dVar23;
  auVar28 = *(undefined1 (*) [16])(pdVar11 + 4);
  auVar31 = divpd(auVar28,_DAT_1499387d0);
  auVar32._8_8_ = 0;
  auVar32._0_8_ = pdVar11[6];
  auVar32 = divpd(auVar32,_DAT_1499387d0);
  auVar31 = roundpd(auVar31,auVar31,3);
  auVar32 = roundpd(auVar32,auVar32,3);
  dVar21 = (auVar28._0_8_ - auVar31._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar22 = (auVar28._8_8_ - auVar31._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar34 = (pdVar11[6] - auVar32._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar41 = (0.0 - auVar32._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar39 = sin(dVar21);
  dVar40 = sin(dVar22);
  dVar27 = sin(dVar34);
  sin(dVar41);
  dVar21 = cos(dVar21);
  dVar22 = cos(dVar22);
  dVar23 = cos(dVar34);
  cos(dVar41);
  dVar41 = DAT_14c846518;
  dVar34 = DAT_14c846510;
  dVar25 = -(dVar22 * dVar39 * dVar27) + dVar40 * dVar21 * dVar23;
  dVar26 = dVar40 * dVar39 * dVar27 + dVar22 * dVar21 * dVar23;
  dVar24 = dVar39 * dVar40 * dVar23 - dVar21 * dVar22 * dVar27;
  dVar39 = -(dVar39 * dVar22 * dVar23) - dVar21 * dVar40 * dVar27;
  local_2b8._8_8_ = DAT_14c846518;
  local_2b8._0_8_ = DAT_14c846510;
  uStack_3b0 = 0;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = DAT_14c846520;
  local_2d8 = 0.0;
  dStack_2d0 = 0.0;
  local_2c8 = 0.0;
  dStack_2c0 = 0.0;
  auVar28 = minpd(_DAT_149934d80,local_2b8);
  auVar31 = minpd(ZEXT816(0x3ff0000000000000),auVar33);
  auVar35._8_8_ = -(ulonglong)(auVar28._8_8_ < 0.0);
  auVar35._0_8_ = -(ulonglong)(auVar28._0_8_ < 0.0);
  iVar5 = movmskpd(extraout_EAX,auVar35);
  auVar37._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
  auVar37._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
  uVar13 = movmskpd(uVar12,auVar37);
  if ((uVar13 & 0x3fffffff) == 0 && iVar5 == 0) {
    dVar34 = dVar42 * dVar25 * 1.0 + dVar45 * dVar39 + dVar44 * dVar24 * -1.0 + dVar43 * dVar26;
    local_2f8._8_4_ = SUB84(dVar34,0);
    local_2f8._0_8_ =
         dVar43 * dVar25 * -1.0 + dVar44 * dVar39 + dVar45 * dVar24 * 1.0 + dVar42 * dVar26;
    local_2f8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
    local_2e8._8_8_ =
         dVar44 * dVar25 * -1.0 + ((dVar24 * dVar42 * -1.0 + dVar45 * dVar26) - dVar39 * dVar43);
    local_2e8._0_8_ =
         dVar45 * dVar25 * 1.0 + ((dVar24 * dVar43 * 1.0 + dVar44 * dVar26) - dVar39 * dVar42);
    dVar22 = DAT_14c846510 * 0.0;
    dVar23 = DAT_14c846518 * 0.0;
    dVar27 = DAT_14c846520 * 0.0;
    dVar40 = dVar23 * dVar24 - dVar22 * dVar39;
    dVar21 = dVar27 * dVar39 - dVar23 * dVar25;
    dVar34 = dVar22 * dVar25 - dVar27 * dVar24;
    dVar41 = dVar26 * 0.0 - dVar26 * 0.0;
    dVar21 = dVar21 + dVar21;
    dVar34 = dVar34 + dVar34;
    dVar40 = dVar40 + dVar40;
    dVar41 = dVar41 + dVar41;
    local_2d8 = (double)local_3a8._0_8_ +
                (dVar40 * dVar39 - dVar25 * dVar34) + dVar26 * dVar21 + dVar22;
    dStack_2d0 = (double)local_3a8._8_8_ +
                 (dVar21 * dVar25 - dVar40 * dVar24) + dVar26 * dVar34 + dVar23;
    local_2c8 = local_3b8 + (dVar34 * dVar24 - dVar39 * dVar21) + dVar26 * dVar40 + dVar27;
    dStack_2c0 = (dVar41 * dVar26 - dVar41 * dVar26) + dVar26 * dVar41 + 0.0 + 0.0;
    dVar39 = DAT_14c846520 * 1.0;
    uVar7 = 0;
  }
  else {
    local_388 = DAT_14c846520 * 1.0;
    uStack_380 = 0;
    dVar40 = dVar39 + dVar39;
    dVar27 = dVar25 + dVar25;
    dVar22 = dVar24 * (dVar24 + dVar24);
    local_1a8 = (1.0 - (dVar22 + dVar39 * dVar40)) * DAT_14c846520;
    dVar21 = (dVar24 + dVar24) * dVar26;
    local_1e8[6] = (dVar40 * dVar26 + dVar24 * dVar27) * DAT_14c846520;
    local_1e8[2] = (dVar40 * dVar24 - dVar27 * dVar26) * DAT_14c846518;
    dStack_1b0 = (dVar27 * dVar39 - dVar21) * DAT_14c846520;
    local_1f8 = ((double)DAT_149934d80 - (dVar25 * dVar27 + dVar39 * dVar40)) * DAT_14c846510;
    local_1e8[3] = (DAT_149934d80._8_8_ - (dVar25 * dVar27 + dVar22)) * DAT_14c846518;
    dStack_1f0 = (dVar40 * dVar24 + dVar27 * dVar26) * DAT_14c846510;
    local_1e8[4] = (dVar27 * dVar39 + dVar21) * DAT_14c846518;
    local_1e8[0] = (dVar24 * dVar27 - dVar40 * dVar26) * DAT_14c846510;
    local_1e8[1] = 0.0;
    local_1e8[5] = 0.0;
    uStack_1a0 = 0;
    local_198 = (double)local_3a8._0_8_;
    dStack_190 = (double)local_3a8._8_8_;
    local_188 = local_3b8;
    uStack_180 = 0x3ff0000000000000;
    dVar39 = dVar43 + dVar43;
    dVar27 = dVar44 + dVar44;
    dVar40 = dVar42 * (dVar42 + dVar42);
    local_278 = (double)DAT_149934d80 - (dVar44 * dVar27 + dVar43 * dVar39);
    dStack_250 = DAT_149934d80._8_8_ - (dVar44 * dVar27 + dVar40);
    local_228 = 1.0 - (dVar40 + dVar43 * dVar39);
    dStack_230 = (dVar42 + dVar42) * dVar45;
    uStack_270 = dVar39 * dVar42 + dVar27 * dVar45;
    local_248 = dVar27 * dVar43 + dStack_230;
    local_258 = dVar39 * dVar42 - dVar27 * dVar45;
    dStack_230 = dVar27 * dVar43 - dStack_230;
    local_238 = dVar39 * dVar45 + dVar42 * dVar27;
    local_268 = dVar42 * dVar27 - dVar39 * dVar45;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_3b8 = 0.0;
    uStack_3b0 = 0x3ff0000000000000;
    local_208 = 0;
    uStack_200 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_178);
    uVar7 = uStack_380;
    dVar39 = local_388;
    auVar28 = _DAT_149934d80;
    local_390 = local_168;
    dVar27 = local_168 * local_168 + local_178 * local_178 + dStack_170 * dStack_170;
    dVar22 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    local_398 = local_128;
    dVar40 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    uVar19 = -(ulonglong)(0.0 <= dVar27 + -9.99999993922529e-09);
    dVar21 = (double)(~uVar19 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar27)) & uVar19);
    uVar19 = -(ulonglong)(0.0 <= dVar22 + -9.99999993922529e-09);
    dVar27 = (double)(~uVar19 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar22)) & uVar19);
    uVar19 = -(ulonglong)(0.0 <= dVar40 + -9.99999993922529e-09);
    dVar40 = (double)(~uVar19 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar40)) & uVar19);
    auVar29._8_8_ = -(ulonglong)(0.0 <= dVar41);
    auVar29._0_8_ = -(ulonglong)(0.0 <= dVar34);
    auVar31 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar29);
    dVar41 = (double)(~-(ulonglong)(0.0 <= local_388) & 0xbff0000000000000 |
                     (ulonglong)((uint)(-(ulonglong)(0.0 <= local_388) >> 0x20) & 0x3ff00000) <<
                     0x20);
    dVar34 = auVar31._0_8_;
    local_178 = local_178 * dVar21 * dVar34;
    dStack_170 = dStack_170 * dVar21 * dVar34;
    local_168 = dVar21 * local_168 * dVar34;
    dVar34 = auVar31._8_8_;
    local_148 = dVar27 * local_148 * dVar34;
    local_150 = local_150 * dVar27 * dVar34;
    local_158 = dVar34 * local_158 * dVar27;
    local_128 = dVar40 * local_128 * dVar41;
    local_130 = local_130 * dVar40 * dVar41;
    local_138 = dVar41 * local_138 * dVar40;
    local_3a8 = local_2b8;
    FUN_14481fd10(&local_298,&local_178);
    dVar34 = local_288 * local_288 + (double)local_298 * (double)local_298;
    dVar41 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar36._0_8_ = dVar34 + dVar41;
    auVar36._8_8_ = dVar34 + dVar41;
    auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
    auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
    auVar31 = sqrtpd(auVar36,auVar36);
    auVar28 = divpd(auVar28,auVar31);
    auVar38._0_8_ = auVar28._0_8_ * local_288;
    auVar38._8_8_ = auVar28._8_8_ * dStack_280;
    auVar2._8_8_ = uStack_3b0;
    auVar2._0_8_ = local_3b8;
    local_2e8 = blendvpd(auVar2,auVar38,auVar30);
    local_2f8._8_8_ =
         (ulonglong)(dStack_290 * auVar28._8_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
    local_2f8._0_8_ =
         (ulonglong)((double)local_298 * auVar28._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
    local_2d8 = local_118;
    dStack_2d0 = dStack_110;
    local_2c8 = local_108;
    dStack_2c0 = 0.0;
  }
  local_2a8._8_4_ = (int)uVar7;
  local_2a8._0_8_ = dVar39;
  local_2a8._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
  local_1e8[4] = 0.0;
  local_1e8[5] = 0.0;
  local_1e8[2] = 0.0;
  local_1e8[3] = 0.0;
  local_1e8[0] = 0.0;
  local_1e8[1] = 0.0;
  local_1f8 = 0.0;
  dStack_1f0 = 0.0;
  local_308[0] = 0;
  local_308[1] = 0;
  if ((((*(byte *)(param_1 + 0xb2a) & 8) == 0) || (*(char *)(param_1 + 0xa70) == '\x01')) ||
     (ABS(*(float *)(param_1 + 0xa84) - *(float *)(param_1 + 0xa90)) <= 1e-08)) {
    pfVar6 = (float *)(param_1 + 0xa84);
    bVar3 = false;
  }
  else {
    pfVar6 = (float *)(param_1 + 0xa90);
    bVar3 = true;
  }
  fVar20 = *pfVar6;
  local_318 = (double)fVar20;
  local_310 = *(double *)(*(longlong *)(param_1 + 0x1c8) + 0x1d0) * local_318;
  local_318 = local_318 * *(double *)(*(longlong *)(param_1 + 0x1c8) + 0x1c8);
  FUN_1410486a0(*(undefined8 *)(param_1 + 0xb30),&local_178);
  uVar13 = local_140;
  uVar12 = *(undefined4 *)(param_1 + 0xc);
  lVar18 = (longlong)(int)local_140;
  local_140 = local_140 + 1;
  if (local_13c < local_140) {
    FUN_1447808da(&local_148,uVar13);
  }
  uVar13 = local_140;
  *(undefined4 *)((longlong)local_148 + lVar18 * 4) = uVar12;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    uVar12 = *(undefined4 *)(*(longlong *)(param_1 + 0x168) + 0xc);
    lVar18 = (longlong)(int)local_140;
    local_140 = local_140 + 1;
    if (local_13c < local_140) {
      FUN_1447808da(&local_148,uVar13);
    }
    *(undefined4 *)((longlong)local_148 + lVar18 * 4) = uVar12;
  }
  local_138._0_2_ = CONCAT11(param_2,(undefined1)local_138);
  *(float *)(param_1 + 0xb38) = fVar20;
  if (0.0 < *(float *)(param_1 + 0xa94)) {
    local_158 = (double)((ulonglong)local_158 & 0xffffffff);
    local_150 = (double)CONCAT44(local_150._4_4_,*(float *)(param_1 + 0xa94));
  }
  lVar18 = *(longlong *)(param_1 + 0x1c8);
  uVar7 = FUN_1447210f0(param_1);
  local_400 = local_308;
  local_408 = &local_1f8;
  FUN_143d86be4(uVar7,local_2f8,lVar18 + 0x240,&local_178);
  local_400 = local_358 + 6;
  local_348[4] = 0;
  local_348[5] = 0;
  local_408 = (double *)(local_358 + 4);
  local_348[2] = 0;
  local_348[3] = 0;
  local_3e0 = (code *)(local_358 + 2);
  local_348[0] = 0;
  local_348[1] = 0;
  local_3d8 = local_358;
  local_358[0] = 0;
  local_358[1] = 0;
  local_3f8 = &local_278;
  local_278 = 0.0;
  uStack_270 = 0.0;
  local_3c8 = (code *)((ulonglong)local_3c8 & 0xffffffffffffff00);
  local_3d0 = (code **)CONCAT71(local_3d0._1_7_,1);
  local_3f0 = local_3f8;
  local_3e8 = local_3f8;
  FUN_1411c6d9c(*(undefined8 *)(param_1 + 0xa00),0,&local_1f8,local_1e8);
  if (*(char *)(param_1 + 0xa70) == '\x01') {
    lVar18 = FUN_1447210f0(param_1);
    if (lVar18 == 0) goto LAB_143d9255c;
    lVar18 = FUN_1447210f0(param_1);
    bVar1 = *(byte *)(lVar18 + 0x152);
    if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) goto LAB_143d9255c;
  }
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0xa00) + 0x6b0);
  *(undefined8 *)(param_1 + 0xa60) = *(undefined8 *)(*(longlong *)(param_1 + 0xa00) + 0x698);
  *(undefined8 *)(param_1 + 0xa68) = uVar7;
  *(undefined1 *)(param_1 + 0xa70) = 1;
  if ((*(byte *)(param_1 + 0xb2a) & 0x10) == 0) {
    FUN_1405fb3bc(param_1);
  }
LAB_143d9255c:
  if (bVar3) {
    FUN_1482121b4(*(undefined8 *)(param_1 + 0xa00),0);
  }
  else {
    if (*(longlong *)(param_1 + 0xa08) != 0) {
      local_408 = (double *)
                  CONCAT44(local_408._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 0xb30) + 0x88));
      FUN_1488bc566(*(longlong *)(param_1 + 0xa08),*(longlong *)(param_1 + 0x1c8) + 0x240,&local_1f8
                    ,local_308);
    }
    lVar18 = *(longlong *)(param_1 + 0xa00);
    local_370 = (float)*(double *)(lVar18 + 0x6a8);
    local_374 = (float)*(double *)(lVar18 + 0x6a0);
    local_368 = 0;
    uStack_360 = 0;
    local_36c = (float)(*(double *)(lVar18 + 0x6b0) + 5.0);
    local_378 = 1;
    uVar7 = FUN_1447210f0(param_1);
    lVar8 = FUN_140e40dfb();
    lVar18 = *(longlong *)(param_1 + 0xa00);
    local_278 = *(double *)(lVar18 + 0x240);
    uStack_270 = *(double *)(lVar18 + 0x248);
    local_268 = *(double *)(lVar18 + 0x250);
    uStack_260 = *(undefined8 *)(lVar18 + 600);
    local_298 = *(code **)(lVar18 + 0x260);
    dStack_290 = *(double *)(lVar18 + 0x268);
    local_288 = *(double *)(lVar18 + 0x270);
    local_3e8 = (double *)&DAT_14cad0f08;
    local_3f0 = (double *)&DAT_14cad0f10;
    local_3f8 = (double *)&DAT_14cad0f68;
    local_400 = (longlong *)CONCAT44(local_400._4_4_,(uint)*(byte *)(lVar8 + 0x60));
    local_408 = (double *)&local_368;
    FUN_14052f4ca(uVar7,&local_378,&local_298,&local_278);
    local_278 = 0.0;
    uStack_270 = 0.0;
    if ((longlong)(int)uStack_360 != 0) {
      lVar18 = local_368 + (longlong)(int)uStack_360 * 0x48;
      lVar8 = local_368;
      do {
        lVar9 = FUN_14485cccc(lVar8);
        uVar19 = (ulonglong)uStack_270;
        if (((((lVar9 != 0) && (lVar9 != param_1)) &&
             (((*(byte *)(lVar9 + 0x62) & 4) != 0 &&
              ((((*(int *)(lVar8 + 0x24) != 0 &&
                 (uVar13 = *(uint *)(lVar8 + 0x20), -1 < (int)uVar13)) &&
                ((int)uVar13 < DAT_14c9647dc)) &&
               ((plVar15 = (longlong *)
                           ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
                plVar15 != (longlong *)0x0 && ((int)plVar15[2] == *(int *)(lVar8 + 0x24))))))))) &&
            ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)) &&
           (plVar15 = (longlong *)*plVar15, plVar15 != (longlong *)0x0)) {
          lVar17 = (longlong)(int)uStack_270;
          if (lVar17 != 0) {
            lVar16 = 0;
            do {
              if (*(longlong **)((longlong)local_278 + lVar16) == plVar15) goto LAB_143d9286f;
              lVar16 = lVar16 + 8;
            } while (lVar17 * 8 - lVar16 != 0);
          }
          uVar13 = (int)uStack_270 + 1;
          uStack_270 = (double)CONCAT44(uStack_270._4_4_,uVar13);
          if (uStack_270._4_4_ < uVar13) {
            FUN_140c43e06(&local_278,uVar19 & 0xffffffff);
          }
          *(longlong **)((longlong)local_278 + lVar17 * 8) = plVar15;
          if (DAT_14cb56270 == 0) {
            local_298 = FUN_1449e2820;
            local_3c0 = FUN_14081d0ea;
            local_3c8 = FUN_1427b09ee;
            local_3d8 = (longlong *)&LAB_148630fef;
            local_3e0 = FUN_1464b6a91;
            local_3e8 = (double *)0x149e2b68a;
            local_3f0 = (double *)0x0;
            local_3f8 = (double *)CONCAT44(local_3f8._4_4_,0x10004001);
            local_400 = (longlong *)CONCAT44(local_400._4_4_,8);
            local_408 = (double *)CONCAT44(local_408._4_4_,0x28);
            local_3d0 = &local_298;
            FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
          }
          plVar10 = (longlong *)FUN_144718840(lVar9,DAT_14cb56270);
          uVar7 = FUN_1405fa766();
          lVar17 = FUN_144718840(lVar9,uVar7);
          if (lVar17 == 0) {
            uVar7 = FUN_1405fa766();
            lVar17 = FUN_144718840(plVar15,uVar7);
            if (plVar10 == (longlong *)0x0 && lVar17 == 0) goto LAB_143d9286f;
            if (((plVar10 != (longlong *)0x0) && (lVar17 == 0)) &&
               ((lVar17 = (**(code **)(*plVar10 + 0x20))(plVar10), lVar17 == 0 &&
                (cVar4 = (**(code **)(*plVar10 + 0x28))(plVar10), cVar4 == '\0')))) {
              lVar17 = FUN_140d12354();
              if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar17 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar17 + 0x38) * 8) != lVar17 + 0x30)) goto LAB_143d9286f;
            }
          }
          if ((longlong)(int)plVar15[0x44] < 1) {
            if ((DAT_14c76142c != 1) || ((*(byte *)(plVar15 + 0x3f) & 2) == 0)) {
              cVar4 = (**(code **)(*plVar15 + 0x508))(plVar15,0,1,0);
              *(byte *)(plVar15 + 0x3f) = *(byte *)(plVar15 + 0x3f) & 0xfd | cVar4 * '\x02';
            }
          }
          else {
            lVar9 = *(longlong *)(plVar15[0x43] + -8 + (longlong)(int)plVar15[0x44] * 8);
            *(byte *)(lVar9 + 0x608) = *(byte *)(lVar9 + 0x608) | 2;
            *(undefined4 *)(lVar9 + 0x10) = 3;
            *(undefined4 *)(lVar9 + 200) = 0xffffffff;
          }
        }
LAB_143d9286f:
        lVar8 = lVar8 + 0x48;
      } while (lVar8 != lVar18);
    }
    FUN_14104f46a(param_1 + 0x3a0,1);
    fVar20 = (float)FUN_143adf782(*(undefined8 *)(param_1 + 0xa00),0);
    *(float *)(param_1 + 0xa78) = fVar20;
    lVar18 = *(longlong *)(param_1 + 0x9f8);
    if (lVar18 != 0) {
      *(float *)(param_1 + 0xa78) = fVar20 * *(float *)(lVar18 + 0x108);
      if ((*(longlong **)(param_1 + 0xa18) != (longlong *)0x0) &&
         (*(longlong *)(lVar18 + 0x100) != 0)) {
        (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xa08))();
      }
    }
    if (local_278 != 0.0) {
      FUN_1400020a8();
    }
    if (local_368 != 0) {
      FUN_1400020a8();
    }
    if (local_358[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_348[0] != 0) {
    FUN_1400020a8();
  }
  if (local_348[2] != 0) {
    FUN_1400020a8();
  }
  if (local_348[4] != 0) {
    FUN_1400020a8();
  }
  if (local_148 != 0.0) {
    FUN_1400020a8();
  }
  if (local_308[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1e8[4] != 0.0) {
    FUN_1400020a8();
  }
  if (local_1e8[2] != 0.0) {
    FUN_1400020a8();
  }
  if (local_1e8[0] != 0.0) {
    FUN_1400020a8();
  }
  if (local_1f8 != 0.0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d92c7a FUN_143d92c7a body=69 status=ok
// SIG undefined FUN_143d92c7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d92c7a(void)

{
  _DAT_14cb818d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d92cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb818d8,1);
  return;
}



// FUNCTION 143d92cc4 FUN_143d92cc4 body=334 status=ok
// SIG undefined FUN_143d92cc4(void)

void FUN_143d92cc4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  
  if (param_1[0x169] != 0) {
    lVar2 = FUN_1447210f0(param_1);
    if (lVar2 != 0) {
      lVar2 = FUN_1447210f0(param_1);
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        plVar3 = (longlong *)(lVar2 + 0x458);
      }
      else {
        plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      lVar2 = param_1[0x169];
      if (lVar2 != 0) {
        lVar1 = *plVar3;
        uVar4 = (uint)lVar2;
        if ((int)(uVar4 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
          lVar5 = lVar1 + 0x18;
          if (*(longlong *)(lVar1 + 0x28) != 0) {
            lVar5 = *(longlong *)(lVar1 + 0x28);
          }
          if ((*(uint *)(lVar5 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1) !=
              0) {
            lVar1 = *(longlong *)(lVar1 + 8);
            lVar5 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
            if (((lVar1 + lVar5 != 0) && (*(longlong *)(lVar1 + 0x60 + lVar5) == lVar2)) &&
               (*(char *)(lVar1 + 1 + lVar5) != '\x04')) {
              FUN_1405a424c();
            }
          }
        }
      }
    }
    param_1[0x169] = 0;
  }
  if (0.0 < *(float *)(param_1[0x166] + 0x80)) {
    lVar2 = FUN_1447210f0(param_1);
    if (lVar2 != 0) {
      *(undefined1 *)((longlong)param_1 + 0xa7c) = 4;
      *(float *)((longlong)param_1 + 0xb3c) = (float)*(double *)(lVar2 + 0x6d0);
      *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1[0x166] + 0x80);
    }
    FUN_1405fdecc(param_1,1);
    return;
  }
  if ((char)param_1[0x2f] == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x000143d92dfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x5c8))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143d92e24 FUN_143d92e24 body=821 status=ok
// SIG undefined FUN_143d92e24(void)

void FUN_143d92e24(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong *local_58;
  ulonglong local_50;
  
  _Src = DAT_14cb81948;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = (void *)0x0;
  lVar9 = (longlong)DAT_14cb81950;
  local_60 = DAT_14cb81950;
  if (lVar9 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,DAT_14cb81950,0);
    memcpy(local_68,_Src,lVar9 * 2);
  }
  uVar6 = FUN_1447210f0(*(undefined8 *)*param_1);
  FUN_14084feb6(&local_58,uVar6,&local_68);
  FUN_1403c75f4(*(longlong *)*param_1 + 0xa38,&local_58);
  if ((local_58 != (longlong *)0x0) &&
     (*(int *)(local_58 + 0x21) = (int)local_58[0x21] + -1, (int)local_58[0x26] < 1)) {
    FUN_1400847bc(local_58 + 0x17,0);
    if ((int)local_58[0x21] == 0) {
      FUN_140087e46(local_58);
      if (*local_58 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_143d92efc;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_58);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_58);
      }
    }
  }
LAB_143d92efc:
  plVar2 = *(longlong **)(*(longlong *)*param_1 + 0xa38);
  if ((plVar2 != (longlong *)0x0) && (*plVar2 != -1)) {
    lVar9 = *(longlong *)(*(longlong *)*param_1 + 0x1c8);
    if (lVar9 == 0) {
      plVar7 = &DAT_14c8464e0;
      lVar9 = DAT_14c8464f0;
    }
    else {
      plVar7 = (longlong *)(lVar9 + 0x260);
      lVar9 = *(longlong *)(lVar9 + 0x270);
    }
    lVar3 = *plVar7;
    lVar4 = plVar7[1];
    plVar7 = plVar2 + 0x28;
    uVar5 = *(uint *)((longlong)plVar2 + 0x1d4);
    iVar10 = 0;
    *(undefined4 *)(plVar2 + 0x3a) = 0;
    if ((int)uVar5 < 0) {
      FUN_147f80112(plVar7,0);
      iVar10 = (int)plVar2[0x3a];
      uVar5 = *(uint *)((longlong)plVar2 + 0x1d4);
    }
    *(undefined1 *)((longlong)plVar2 + 0x26c) = 0;
    *(uint *)(plVar2 + 0x3a) = iVar10 + 1U;
    if (uVar5 < iVar10 + 1U) {
      FUN_140089f7a(plVar7,iVar10);
    }
    if ((longlong *)plVar2[0x38] != (longlong *)0x0) {
      plVar7 = (longlong *)plVar2[0x38];
    }
    lVar8 = (longlong)iVar10;
    plVar7[lVar8 * 0x10] = 0;
    (plVar7 + lVar8 * 0x10)[1] = 0;
    plVar1 = plVar7 + lVar8 * 0x10 + 2;
    *(undefined4 *)plVar1 = 0;
    *(undefined4 *)((longlong)plVar1 + 4) = 0;
    *(undefined4 *)(plVar1 + 1) = 0;
    *(undefined4 *)((longlong)plVar1 + 0xc) = 0x3ff00000;
    plVar7[lVar8 * 0x10 + 4] = lVar3;
    (plVar7 + lVar8 * 0x10 + 4)[1] = lVar4;
    plVar7[lVar8 * 0x10 + 6] = lVar9;
    (plVar7 + lVar8 * 0x10 + 6)[1] = 0;
    plVar1 = plVar7 + lVar8 * 0x10 + 8;
    *(undefined4 *)plVar1 = 0;
    *(undefined4 *)((longlong)plVar1 + 4) = 0x3ff00000;
    *(undefined4 *)(plVar1 + 1) = 0;
    *(undefined4 *)((longlong)plVar1 + 0xc) = 0x3ff00000;
    plVar7[lVar8 * 0x10 + 10] = 0x3ff0000000000000;
    (plVar7 + lVar8 * 0x10 + 10)[1] = 0;
    plVar7[lVar8 * 0x10 + 0xc] = 0x3f800000;
    *(undefined2 *)(plVar7 + lVar8 * 0x10 + 0xd) = 0;
    *(undefined8 *)((longlong)plVar7 + lVar8 * 0x80 + 0x6c) = 0;
    FUN_1447906c0(plVar2,0);
    lVar9 = param_1[1];
    plVar2 = *(longlong **)(*(longlong *)*param_1 + 0xa38);
    local_70 = plVar2;
    if (plVar2 == (longlong *)0x0) {
      FUN_140d27362(lVar9 + 0x1e0,&local_70);
    }
    else {
      *(int *)(plVar2 + 0x21) = (int)plVar2[0x21] + 1;
      FUN_140d27362(lVar9 + 0x1e0,&local_70);
      *(int *)(plVar2 + 0x21) = (int)plVar2[0x21] + -1;
      if ((int)plVar2[0x26] < 1) {
        FUN_1400847bc(plVar2 + 0x17,0);
        if ((int)plVar2[0x21] == 0) {
          FUN_140087e46(plVar2);
          if (*plVar2 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_143d93054;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar2);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar2);
          }
        }
      }
    }
  }
LAB_143d93054:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d9315a FUN_143d9315a body=41 status=ok
// SIG undefined FUN_143d9315a(void)

void FUN_143d9315a(void)

{
  DAT_14cb81a70 = 0;
  if (DAT_14cb81a68 != 0) {
    FUN_1400020a8();
  }
  FUN_145d66be6();
  return;
}



// FUNCTION 143d93188 FUN_143d93188 body=69 status=ok
// SIG undefined FUN_143d93188(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d93188(void)

{
  _DAT_14cb81b10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d931ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb81b18,1);
  return;
}



// FUNCTION 143d931cd FUN_143d931cd body=69 status=ok
// SIG undefined FUN_143d931cd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d931cd(void)

{
  _DAT_14cb81b20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d9320f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb81b28,1);
  return;
}



// FUNCTION 143d93212 FUN_143d93212 body=69 status=ok
// SIG undefined FUN_143d93212(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d93212(void)

{
  _DAT_14cb81b30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d93254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb81b38,1);
  return;
}



// FUNCTION 143d93257 FUN_143d93257 body=69 status=ok
// SIG undefined FUN_143d93257(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d93257(void)

{
  _DAT_14cb81b40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d93299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb81b48,1);
  return;
}



// FUNCTION 143d932ca FUN_143d932ca body=181 status=ok
// SIG undefined FUN_143d932ca(void)

void FUN_143d932ca(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_40 = param_2;
    local_38 = param_3;
    FUN_14141c592(0,&local_58);
    lVar2 = local_58;
    lVar4 = (longlong)(int)uStack_50;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar5);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_40), cVar3 != '\0'))
        {
          (**(code **)(*plVar1 + 0x5e8))(plVar1);
        }
        lVar5 = lVar5 + 8;
      } while (lVar4 * 8 != lVar5);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d93380 FUN_143d93380 body=177 status=ok
// SIG undefined FUN_143d93380(void)

void FUN_143d93380(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_40 = param_2;
    local_38 = param_3;
    FUN_14141c592(0,&local_58);
    lVar2 = local_58;
    lVar4 = (longlong)(int)uStack_50;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(lVar2 + lVar5);
        if ((lVar1 != 0) && (cVar3 = FUN_143893b9e(lVar1,&local_40), cVar3 != '\0')) {
          FUN_1415e434e(lVar1);
        }
        lVar5 = lVar5 + 8;
      } while (lVar4 * 8 != lVar5);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d93432 FUN_143d93432 body=214 status=ok
// SIG undefined FUN_143d93432(void)

void FUN_143d93432(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_1 != 0) && (lVar1 = *param_2, lVar1 != 0)) && ((int)param_2[1] - 1U < 0xfffffffe)) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = param_3;
    local_40 = param_4;
    FUN_14141c592(0,&local_58);
    lVar3 = local_58;
    lVar6 = (longlong)(int)uStack_50;
    if (lVar6 != 0) {
      lVar5 = 0;
      do {
        plVar2 = *(longlong **)(lVar3 + lVar5);
        if ((plVar2 != (longlong *)0x0) && (cVar4 = FUN_143893b9e(plVar2,&local_48), cVar4 != '\0'))
        {
          (**(code **)(*plVar2 + 0x5f8))(plVar2,lVar1);
        }
        lVar5 = lVar5 + 8;
      } while (lVar6 * 8 != lVar5);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d9350a FUN_143d9350a body=339 status=ok
// SIG undefined FUN_143d9350a(void)

void FUN_143d9350a(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 local_110 [12];
  undefined8 local_b0 [9];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_128 = param_2;
  local_120 = param_3;
  local_118 = param_4;
  if (param_1 != 0) {
    local_58 = param_7;
    local_50 = param_8;
    local_68 = 0;
    uStack_60 = 0;
    FUN_14141c592(0,&local_68);
    lVar2 = local_68;
    lVar8 = (longlong)(int)uStack_60;
    if (lVar8 != 0) {
      lVar7 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar7);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_58), cVar3 != '\0'))
        {
          puVar5 = local_118;
          puVar6 = local_b0;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar5 = local_120;
          puVar6 = local_110;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          local_130 = param_6;
          local_138 = param_5;
          (**(code **)(*plVar1 + 0x630))(plVar1,local_128,local_110,local_b0);
        }
        lVar7 = lVar7 + 8;
      } while (lVar8 * 8 != lVar7);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d9365e FUN_143d9365e body=322 status=ok
// SIG undefined FUN_143d9365e(void)

void FUN_143d9365e(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_d1;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0 [9];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d1 = param_4;
  local_d0 = param_3;
  if (param_1 != 0) {
    local_58 = param_6;
    local_50 = param_7;
    local_68 = 0;
    uStack_60 = 0;
    FUN_14141c592(0,&local_68);
    lVar2 = local_68;
    lVar8 = (longlong)(int)uStack_60;
    if (lVar8 != 0) {
      lVar7 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar7);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_58), cVar3 != '\0'))
        {
          puVar5 = local_d0;
          puVar6 = local_b0;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          local_b8 = *(undefined8 *)(param_2 + 4);
          local_c8 = *param_2;
          uStack_c4 = param_2[1];
          uStack_c0 = param_2[2];
          uStack_bc = param_2[3];
          local_e8 = param_5;
          (**(code **)(*plVar1 + 0x638))(plVar1,&local_c8,local_b0,local_d1);
        }
        lVar7 = lVar7 + 8;
      } while (lVar8 * 8 != lVar7);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d937a2 FUN_143d937a2 body=309 status=ok
// SIG undefined FUN_143d937a2(void)

void FUN_143d937a2(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_d9;
  undefined8 *local_d8;
  undefined8 local_d0 [9];
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d9 = param_4;
  local_d8 = param_2;
  if (param_1 != 0) {
    local_70 = param_6;
    local_68 = param_7;
    local_88 = 0;
    uStack_80 = 0;
    FUN_14141c592(0,&local_88);
    lVar2 = local_88;
    lVar5 = (longlong)(int)uStack_80;
    if (lVar5 != 0) {
      lVar8 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar8);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_70), cVar3 != '\0'))
        {
          puVar6 = local_d8;
          puVar7 = local_d0;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          local_e8 = param_5;
          (**(code **)(*plVar1 + 0x640))(plVar1,local_d0,param_3,local_d9);
        }
        lVar8 = lVar8 + 8;
      } while (lVar5 * 8 != lVar8);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d938d8 FUN_143d938d8 body=217 status=ok
// SIG undefined FUN_143d938d8(void)

void FUN_143d938d8(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_1 != 0) && (lVar1 = *param_2, lVar1 != 0)) && ((int)param_2[1] - 1U < 0xfffffffe)) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = param_3;
    local_40 = param_4;
    FUN_141270afc(0,&local_58,0);
    lVar3 = local_58;
    lVar6 = (longlong)(int)uStack_50;
    if (lVar6 != 0) {
      lVar5 = 0;
      do {
        plVar2 = *(longlong **)(lVar3 + lVar5);
        if ((plVar2 != (longlong *)0x0) && (cVar4 = FUN_143893b9e(plVar2,&local_48), cVar4 != '\0'))
        {
          (**(code **)(*plVar2 + 0x5f8))(plVar2,lVar1);
        }
        lVar5 = lVar5 + 8;
      } while (lVar6 * 8 != lVar5);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d939b2 FUN_143d939b2 body=342 status=ok
// SIG undefined FUN_143d939b2(void)

void FUN_143d939b2(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 local_110 [12];
  undefined8 local_b0 [9];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_128 = param_2;
  local_120 = param_3;
  local_118 = param_4;
  if (param_1 != 0) {
    local_58 = param_7;
    local_50 = param_8;
    local_68 = 0;
    uStack_60 = 0;
    FUN_141270afc(0,&local_68,0);
    lVar2 = local_68;
    lVar8 = (longlong)(int)uStack_60;
    if (lVar8 != 0) {
      lVar7 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar7);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_58), cVar3 != '\0'))
        {
          puVar5 = local_118;
          puVar6 = local_b0;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar5 = local_120;
          puVar6 = local_110;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          local_130 = param_6;
          local_138 = param_5;
          (**(code **)(*plVar1 + 0x630))(plVar1,local_128,local_110,local_b0);
        }
        lVar7 = lVar7 + 8;
      } while (lVar8 * 8 != lVar7);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d93b0a FUN_143d93b0a body=312 status=ok
// SIG undefined FUN_143d93b0a(void)

void FUN_143d93b0a(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_d9;
  undefined8 *local_d8;
  undefined8 local_d0 [9];
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d9 = param_4;
  local_d8 = param_2;
  if (param_1 != 0) {
    local_70 = param_6;
    local_68 = param_7;
    local_88 = 0;
    uStack_80 = 0;
    FUN_141270afc(0,&local_88,0);
    lVar2 = local_88;
    lVar5 = (longlong)(int)uStack_80;
    if (lVar5 != 0) {
      lVar8 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar8);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_70), cVar3 != '\0'))
        {
          puVar6 = local_d8;
          puVar7 = local_d0;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          local_e8 = param_5;
          (**(code **)(*plVar1 + 0x640))(plVar1,local_d0,param_3,local_d9);
        }
        lVar8 = lVar8 + 8;
      } while (lVar5 * 8 != lVar8);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d93c44 FUN_143d93c44 body=342 status=ok
// SIG undefined FUN_143d93c44(void)

void FUN_143d93c44(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 local_110 [12];
  undefined8 local_b0 [9];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_128 = param_2;
  local_120 = param_3;
  local_118 = param_4;
  if (param_1 != 0) {
    local_58 = param_7;
    local_50 = param_8;
    local_68 = 0;
    uStack_60 = 0;
    FUN_141143592(0,&local_68,0);
    lVar2 = local_68;
    lVar8 = (longlong)(int)uStack_60;
    if (lVar8 != 0) {
      lVar7 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar7);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_58), cVar3 != '\0'))
        {
          puVar5 = local_118;
          puVar6 = local_b0;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar5 = local_120;
          puVar6 = local_110;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          local_130 = param_6;
          local_138 = param_5;
          (**(code **)(*plVar1 + 0x630))(plVar1,local_128,local_110,local_b0);
        }
        lVar7 = lVar7 + 8;
      } while (lVar8 * 8 != lVar7);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d93d9c FUN_143d93d9c body=325 status=ok
// SIG undefined FUN_143d93d9c(void)

void FUN_143d93d9c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_d1;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0 [9];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d1 = param_4;
  local_d0 = param_3;
  if (param_1 != 0) {
    local_58 = param_6;
    local_50 = param_7;
    local_68 = 0;
    uStack_60 = 0;
    FUN_141143592(0,&local_68,0);
    lVar2 = local_68;
    lVar8 = (longlong)(int)uStack_60;
    if (lVar8 != 0) {
      lVar7 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar7);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_58), cVar3 != '\0'))
        {
          puVar5 = local_d0;
          puVar6 = local_b0;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          local_b8 = *(undefined8 *)(param_2 + 4);
          local_c8 = *param_2;
          uStack_c4 = param_2[1];
          uStack_c0 = param_2[2];
          uStack_bc = param_2[3];
          local_e8 = param_5;
          (**(code **)(*plVar1 + 0x638))(plVar1,&local_c8,local_b0,local_d1);
        }
        lVar7 = lVar7 + 8;
      } while (lVar8 * 8 != lVar7);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d93ee2 FUN_143d93ee2 body=312 status=ok
// SIG undefined FUN_143d93ee2(void)

void FUN_143d93ee2(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_d9;
  undefined8 *local_d8;
  undefined8 local_d0 [9];
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d9 = param_4;
  local_d8 = param_2;
  if (param_1 != 0) {
    local_70 = param_6;
    local_68 = param_7;
    local_88 = 0;
    uStack_80 = 0;
    FUN_141143592(0,&local_88,0);
    lVar2 = local_88;
    lVar5 = (longlong)(int)uStack_80;
    if (lVar5 != 0) {
      lVar8 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar8);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_70), cVar3 != '\0'))
        {
          puVar6 = local_d8;
          puVar7 = local_d0;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          local_e8 = param_5;
          (**(code **)(*plVar1 + 0x640))(plVar1,local_d0,param_3,local_d9);
        }
        lVar8 = lVar8 + 8;
      } while (lVar5 * 8 != lVar8);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d9401c FUN_143d9401c body=215 status=ok
// SIG undefined FUN_143d9401c(void)

void FUN_143d9401c(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_1 != 0) && (lVar1 = *param_2, lVar1 != 0)) && ((int)param_2[1] - 1U < 0xfffffffe)) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = param_3;
    local_40 = param_4;
    FUN_145d5b6b2(0,&local_58);
    lVar3 = local_58;
    lVar6 = (longlong)(int)uStack_50;
    if (lVar6 != 0) {
      lVar5 = 0;
      do {
        plVar2 = *(longlong **)(lVar3 + lVar5);
        if ((plVar2 != (longlong *)0x0) && (cVar4 = FUN_143893b9e(plVar2,&local_48), cVar4 != '\0'))
        {
          (**(code **)(*plVar2 + 0x5f8))(plVar2,lVar1);
        }
        lVar5 = lVar5 + 8;
      } while (lVar6 * 8 != lVar5);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d940f4 FUN_143d940f4 body=213 status=ok
// SIG undefined FUN_143d940f4(void)

void FUN_143d940f4(longlong param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_50 = param_3;
    local_48 = param_4;
    FUN_145d5b6b2(0,&local_68);
    lVar2 = local_68;
    lVar4 = (longlong)(int)uStack_60;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar5);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_50), cVar3 != '\0'))
        {
          (**(code **)(*plVar1 + 0x650))(plVar1,param_2,param_5);
        }
        lVar5 = lVar5 + 8;
      } while (lVar4 * 8 != lVar5);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d941ca FUN_143d941ca body=322 status=ok
// SIG undefined FUN_143d941ca(void)

void FUN_143d941ca(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined8 local_110 [12];
  undefined8 local_b0 [9];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_1 != 0) {
    local_58 = param_6;
    local_50 = param_7;
    local_68 = 0;
    uStack_60 = 0;
    FUN_145d5b6b2(0,&local_68);
    lVar2 = local_68;
    lVar8 = (longlong)(int)uStack_60;
    if (lVar8 != 0) {
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar5);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_58), cVar3 != '\0'))
        {
          puVar6 = param_3;
          puVar7 = local_b0;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar6 = param_2;
          puVar7 = local_110;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          local_118 = param_5;
          (**(code **)(*plVar1 + 0x628))(plVar1,local_110,local_b0,param_4);
        }
        lVar5 = lVar5 + 8;
      } while (lVar8 * 8 != lVar5);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d9430e FUN_143d9430e body=333 status=ok
// SIG undefined FUN_143d9430e(void)

void FUN_143d9430e(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_120;
  undefined8 *local_118;
  undefined8 local_110 [12];
  undefined8 local_b0 [9];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_1 != 0) {
    local_58 = param_7;
    local_50 = param_8;
    local_68 = 0;
    uStack_60 = 0;
    FUN_145d5b6b2(0,&local_68);
    lVar2 = local_68;
    lVar8 = (longlong)(int)uStack_60;
    if (lVar8 != 0) {
      lVar5 = 0;
      local_118 = param_4;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar5);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_58), cVar3 != '\0'))
        {
          puVar6 = local_118;
          puVar7 = local_b0;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar6 = param_3;
          puVar7 = local_110;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          local_120 = param_6;
          local_128 = param_5;
          (**(code **)(*plVar1 + 0x630))(plVar1,param_2);
        }
        lVar5 = lVar5 + 8;
      } while (lVar8 * 8 != lVar5);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d9445c FUN_143d9445c body=320 status=ok
// SIG undefined FUN_143d9445c(void)

void FUN_143d9445c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0 [9];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1 != 0) {
    local_58 = param_6;
    local_50 = param_7;
    local_68 = 0;
    uStack_60 = 0;
    FUN_145d5b6b2(0,&local_68);
    lVar2 = local_68;
    lVar6 = (longlong)(int)uStack_60;
    if (lVar6 != 0) {
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar5);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_58), cVar3 != '\0'))
        {
          puVar7 = param_3;
          puVar8 = local_b0;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          local_b8 = *(undefined8 *)(param_2 + 4);
          local_c8 = *param_2;
          uStack_c4 = param_2[1];
          uStack_c0 = param_2[2];
          uStack_bc = param_2[3];
          local_d8 = param_5;
          (**(code **)(*plVar1 + 0x638))(plVar1,&local_c8,local_b0,param_4);
        }
        lVar5 = lVar5 + 8;
      } while (lVar6 * 8 != lVar5);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d9459e FUN_143d9459e body=303 status=ok
// SIG undefined FUN_143d9459e(void)

void FUN_143d9459e(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 local_d0 [9];
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1 != 0) {
    local_70 = param_6;
    local_68 = param_7;
    local_88 = 0;
    uStack_80 = 0;
    FUN_145d5b6b2(0,&local_88);
    lVar2 = local_88;
    lVar7 = (longlong)(int)uStack_80;
    if (lVar7 != 0) {
      lVar8 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar8);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_70), cVar3 != '\0'))
        {
          puVar5 = param_2;
          puVar6 = local_d0;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          local_d8 = param_5;
          (**(code **)(*plVar1 + 0x640))(plVar1,local_d0,param_3,param_4);
        }
        lVar8 = lVar8 + 8;
      } while (lVar7 * 8 != lVar8);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d946ce FUN_143d946ce body=91 status=ok
// SIG undefined FUN_143d946ce(void)

void FUN_143d946ce(void)

{
  if (DAT_14cb81b70 != 0) {
    if (DAT_14cb81b68 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb81b68)(DAT_14cb81b68,0);
    FUN_1446efa72(&DAT_14cb81b68,0,0,0x10);
    DAT_14cb81b70 = 0;
  }
  if (DAT_14cb81b68 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143d94729 FUN_143d94729 body=91 status=ok
// SIG undefined FUN_143d94729(void)

void FUN_143d94729(void)

{
  if (DAT_14cb81ba8 != 0) {
    if (DAT_14cb81ba0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb81ba0)(DAT_14cb81ba0,0);
    FUN_1446efa72(&DAT_14cb81ba0,0,0,0x10);
    DAT_14cb81ba8 = 0;
  }
  if (DAT_14cb81ba0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143d9478c FUN_143d9478c body=751 status=ok
// SIG undefined FUN_143d9478c(void)

void FUN_143d9478c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  
  plVar1 = (longlong *)(param_1 + 0x340);
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FUN_1446efa72(plVar1,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 0x348);
  if (uVar7 == 0) {
    return;
  }
  lVar2 = param_1 + 0x330;
  if (uVar7 < 5) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar1,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_143d9480a;
  }
  uVar3 = 0;
  do {
    lVar6 = *(longlong *)(param_1 + 0x340);
    if (*(longlong *)(param_1 + 0x340) == 0) {
      lVar6 = lVar2;
    }
    *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x348) + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar7 != uVar3);
LAB_143d9480a:
  iVar15 = *(int *)(param_1 + 800);
  if (iVar15 == 0) {
    uVar4 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar5 = 0;
  }
  else {
    puVar10 = *(uint **)(param_1 + 0x318);
    if (*(uint **)(param_1 + 0x318) == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 0x310);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar13 = iVar15 + -1;
      }
      uVar4 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar11 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar7 = puVar10[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar16 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar13 = (iVar5 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar13) {
      iVar13 = iVar15;
    }
  }
  if (iVar13 < iVar15) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *(longlong *)(param_1 + 0x300);
      if (*(longlong *)(param_1 + 0x300) == 0) {
        lVar6 = param_1;
      }
      lVar14 = (longlong)iVar13 * 0x60;
      uVar3 = ((uint)(*(ulonglong *)(lVar6 + lVar14) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar14) >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      uVar16 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)*(int *)(param_1 + 0x348) - 1U;
      iVar15 = (int)uVar16;
      *(int *)(lVar6 + 0x5c + lVar14) = iVar15;
      lVar12 = *(longlong *)(param_1 + 0x340);
      if (*(longlong *)(param_1 + 0x340) == 0) {
        lVar12 = lVar2;
      }
      *(undefined4 *)(lVar6 + 0x58 + lVar14) =
           *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x348) - 1U & uVar16) * 4);
      lVar6 = *(longlong *)(param_1 + 0x340);
      if (*(longlong *)(param_1 + 0x340) == 0) {
        lVar6 = lVar2;
      }
      *(int *)(lVar6 + ((longlong)iVar15 & (longlong)*(int *)(param_1 + 0x348) - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = *(uint **)(param_1 + 0x318);
      if (*(uint **)(param_1 + 0x318) == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 0x310);
      }
      iVar15 = *(int *)(param_1 + 800);
      iVar13 = (int)uVar4;
      lVar6 = (longlong)iVar13;
      uVar3 = puVar10[lVar6] & uVar7;
      if (uVar3 == 0) {
        iVar8 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar8 = iVar15 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar10[lVar6 + lVar12 + 1];
          if (uVar3 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar3 & uVar3);
      uVar16 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar5 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar15);
  }
  return;
}



// FUNCTION 143d94a8e FUN_143d94a8e body=31 status=ok
// SIG undefined FUN_143d94a8e(void)

undefined8 FUN_143d94a8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d94b48 FUN_143d94b48 body=71 status=ok
// SIG undefined FUN_143d94b48(void)

undefined8 * FUN_143d94b48(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b40fb90;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d94d0e FUN_143d94d0e body=250 status=ok
// SIG undefined FUN_143d94d0e(void)

void FUN_143d94d0e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b40fb90;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  pvVar3 = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_140353188(puVar2 + 5,iVar1);
    memcpy((void *)puVar2[5],pvVar3,(longlong)iVar1 << 3);
  }
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  pvVar3 = *(void **)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_140353188(puVar2 + 7,iVar1);
    memcpy((void *)puVar2[7],pvVar3,(longlong)iVar1 << 3);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  return;
}



// FUNCTION 143d94e08 FUN_143d94e08 body=250 status=ok
// SIG undefined FUN_143d94e08(void)

void FUN_143d94e08(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b40fb90;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  pvVar3 = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_140353188(puVar2 + 5,iVar1);
    memcpy((void *)puVar2[5],pvVar3,(longlong)iVar1 << 3);
  }
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  pvVar3 = *(void **)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_140353188(puVar2 + 7,iVar1);
    memcpy((void *)puVar2[7],pvVar3,(longlong)iVar1 << 3);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  return;
}



// FUNCTION 143d94f02 FUN_143d94f02 body=292 status=ok
// SIG undefined FUN_143d94f02(void)

void FUN_143d94f02(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  void *pvVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b40fb90;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  pvVar4 = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_140353188(&p_Var2->Flags,iVar1);
    memcpy(*(void **)&p_Var2->Flags,pvVar4,(longlong)iVar1 << 3);
  }
  p_Var2[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  iVar1 = *(int *)(param_1 + 0x40);
  pvVar4 = *(void **)(param_1 + 0x38);
  *(int *)&p_Var2[1].ProcessLocksList.Flink = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Flink + 4) = 0;
  }
  else {
    FUN_140353188(&p_Var2[1].CriticalSection,iVar1);
    memcpy(p_Var2[1].CriticalSection,pvVar4,(longlong)iVar1 << 3);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d95010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d95030 FUN_143d95030 body=269 status=ok
// SIG undefined FUN_143d95030(void)

undefined8 FUN_143d95030(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143d95137;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d95137;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143d95137:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d950eb;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143d9513e(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143d950eb;
    }
  }
  uVar6 = 0;
LAB_143d950eb:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d9513e FUN_143d9513e body=426 status=ok
// SIG undefined FUN_143d9513e(void)

void FUN_143d9513e(longlong *param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  if ((DAT_14c86a9f8 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar3 = lVar2 + 0x38;
  FUN_140d0dd64(lVar3,(int)param_1[2]);
  FUN_140c6f1fe(lVar3,param_1 + 1);
  lVar2 = lVar2 + 0x48;
  FUN_140d0dd64(lVar2,(int)param_1[4]);
  FUN_140c6f1fe(lVar2,param_1 + 3);
  local_38 = (void *)0x0;
  local_30 = (int)param_1[2];
  lVar2 = (longlong)local_30;
  pvVar1 = (void *)param_1[1];
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_140353188(&local_38,local_30);
    memcpy(local_38,pvVar1,lVar2 << 3);
    pvVar1 = local_38;
    lVar2 = (longlong)local_30;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)((longlong)pvVar1 + lVar3) != 0) {
          FUN_1409959fa();
        }
        lVar3 = lVar3 + 8;
      } while (lVar2 * 8 != lVar3);
    }
    if (local_38 != (void *)0x0) {
      FUN_1400020a8(local_38);
    }
  }
  local_48 = (void *)0x0;
  local_40 = (int)param_1[4];
  lVar2 = (longlong)local_40;
  pvVar1 = (void *)param_1[3];
  if (lVar2 != 0) {
    FUN_140353188(&local_48,local_40);
    memcpy(local_48,pvVar1,lVar2 << 3);
    pvVar1 = local_48;
    lVar2 = (longlong)local_40;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)((longlong)pvVar1 + lVar3) != 0) {
          FUN_1409959fa();
        }
        lVar3 = lVar3 + 8;
      } while (lVar2 * 8 != lVar3);
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d952ea FUN_143d952ea body=73 status=ok
// SIG undefined FUN_143d952ea(void)

undefined8 * FUN_143d952ea(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b40fc00;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d95334 FUN_143d95334 body=6033 status=ok
// SIG undefined FUN_143d95334(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d95334(longlong *param_1)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  double dVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  char cVar14;
  int iVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 uVar19;
  longlong *plVar20;
  longlong lVar21;
  uint *puVar22;
  double *pdVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  code *pcVar30;
  longlong lVar31;
  undefined2 *puVar32;
  longlong lVar33;
  uint uVar34;
  int iVar35;
  longlong lVar36;
  ulonglong uVar37;
  code *pcVar38;
  ulonglong uVar39;
  bool bVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double _X;
  double _X_00;
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double _X_01;
  double dVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined1 auStack_2c8 [32];
  double *local_2a8;
  double *local_2a0;
  double *local_298;
  ulonglong local_290;
  wchar_t *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  undefined8 *local_270;
  undefined1 *local_268;
  code *local_260;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  ulonglong local_240;
  int local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  uint *local_228;
  uint local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  longlong local_208;
  longlong *local_200;
  undefined2 *local_1f8;
  int local_1f0;
  undefined1 local_1e8 [16];
  double dStack_1d8;
  undefined1 local_1d0 [16];
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double dStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  uint uStack_194;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  lVar6 = param_1[0x7c];
  lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x20) + 0x32b8);
  if (*param_1 == 0 || lVar7 == 0) goto LAB_143d96428;
  if ((*(byte *)(lVar6 + 0x2d8) & 0x20) == 0) {
LAB_143d95830:
    if (((~*(uint *)(lVar6 + 0x2d8) & 0x21) == 0) && (param_1[1] != 0)) {
      FUN_1417c06ee(lVar7,&local_160);
      lVar21 = param_1[2];
      uVar61 = *(undefined4 *)((longlong)param_1 + 0x14);
      lVar31 = param_1[3];
      uVar62 = *(undefined4 *)((longlong)param_1 + 0x1c);
      dVar11 = (double)param_1[4];
      lVar26 = param_1[5];
      dVar57 = (double)param_1[6];
      dVar60 = (double)param_1[7];
      dVar9 = (double)param_1[8];
      lVar33 = param_1[10];
      uVar64 = *(undefined4 *)((longlong)param_1 + 0x54);
      plVar18 = (longlong *)param_1[10];
      lVar36 = param_1[0xb];
      uVar66 = *(undefined4 *)((longlong)param_1 + 0x5c);
      uVar34 = *(uint *)(param_1 + 0xc);
      uVar67 = *(undefined4 *)((longlong)param_1 + 100);
      lVar13 = param_1[0xd];
      uVar10 = *(undefined4 *)((longlong)param_1 + 0x6c);
      FUN_140fb9884(lVar6,&local_128,*param_1);
      dVar12 = local_118;
      dVar57 = dVar57 + local_128;
      dVar60 = dVar60 + dStack_120;
      FUN_1400021e4(param_1,local_1e8);
      puVar16 = &DAT_149dfb77a;
      if (local_1e8._8_4_ != 0) {
        puVar16 = (undefined2 *)local_1e8._0_8_;
      }
      puVar32 = &DAT_149dfb77a;
      if (DAT_14cb81408 != 0) {
        puVar32 = DAT_14cb81400;
      }
      FUN_140002266(&local_1b8,L"%s%s",puVar32,puVar16);
      pcVar30 = (code *)&DAT_149dfb77a;
      if ((int)uStack_1b0 != 0) {
        pcVar30 = local_1b8;
      }
      FUN_1446f470e(&local_168,pcVar30,1);
      if (local_1b8 != (code *)0x0) {
        FUN_1400020a8();
      }
      if ((double)local_1e8._0_8_ != 0.0) {
        FUN_1400020a8();
      }
      if (DAT_14cad3688 == 0) {
        local_1b8 = FUN_144b223ce;
        local_260 = FUN_14081d0ea;
        local_268 = &LAB_1417963e0;
        local_278 = &LAB_147a2f4c9;
        local_280 = &LAB_1400ea6f8;
        local_288 = L"Engine";
        local_290 = 0x200000000000;
        local_298 = (double *)CONCAT44(local_298._4_4_,0x10000004);
        local_2a0 = (double *)CONCAT44(local_2a0._4_4_,0x10);
        local_2a8 = (double *)CONCAT44(local_2a8._4_4_,0x720);
        local_270 = &local_1b8;
        FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
      }
      local_2a8 = (double *)((ulonglong)local_2a8 & 0xffffffff00000000);
      FUN_140af9fb2(&local_170,*(undefined8 *)(lVar6 + 0x20),DAT_14cad3688,local_168);
      local_2a0 = (double *)0x0;
      local_2a8 = (double *)((ulonglong)local_2a8 & 0xffffffffffffff00);
      plVar17 = (longlong *)FUN_141797230(*(undefined8 *)(lVar6 + 0x20),local_170,0,0);
      (**(code **)(*plVar17 + 0x720))(plVar17,0);
      (**(code **)(*plVar17 + 0xa78))(plVar17,param_1[1]);
      if ((*(byte *)((longlong)plVar17 + 0x2d3) & 8) != 0) {
        *(byte *)((longlong)plVar17 + 0x2d3) = *(byte *)((longlong)plVar17 + 0x2d3) & 0xf7;
        (**(code **)(*plVar17 + 0x958))(plVar17);
      }
      *(byte *)((longlong)plVar17 + 0x2d4) =
           *(byte *)((longlong)plVar17 + 0x2d4) & 0xbf | *(byte *)(lVar7 + 0x2d4) & 0x40;
      *(byte *)((longlong)plVar17 + 0x2d5) =
           *(byte *)((longlong)plVar17 + 0x2d5) & 0xee | *(byte *)(lVar7 + 0x2d5) & 1;
      *(byte *)((longlong)plVar17 + 0x2d6) = *(byte *)((longlong)plVar17 + 0x2d6) & 0x7f;
      auVar45 = *(undefined1 (*) [16])(plVar17 + 0x36);
      dVar42 = auVar45._0_8_;
      dVar54 = auVar45._8_8_;
      dVar41 = (double)plVar17[0x38];
      pdVar23 = (double *)plVar17[0x46];
      if (pdVar23 == (double *)0x0) {
        pdVar23 = (double *)FUN_14001cc68(0x40,0x10);
        dVar43 = DAT_14c8463d8;
        *pdVar23 = DAT_14c8463d0;
        pdVar23[1] = dVar43;
        dVar43 = DAT_14c8463e8;
        pdVar23[2] = DAT_14c8463e0;
        pdVar23[3] = dVar43;
        dVar43 = DAT_14c846500;
        pdVar23[4] = DAT_14c8464f8;
        pdVar23[5] = dVar43;
        pdVar23[6] = DAT_14c846508;
        plVar17[0x46] = (longlong)pdVar23;
      }
      auVar49 = _DAT_1499387d0;
      if ((((pdVar23[4] != dVar42) || (NAN(pdVar23[4]) || NAN(dVar42))) || (pdVar23[5] != dVar54))
         || (NAN(pdVar23[5]) || NAN(dVar54))) {
LAB_143d95a72:
        auVar51._8_8_ = 0;
        auVar51._0_8_ = dVar41;
        dVar43 = (double)DAT_1499387d0;
        dVar44 = DAT_1499387d0._8_8_;
        auVar45 = divpd(auVar45,_DAT_1499387d0);
        auVar48 = divpd(auVar51,_DAT_1499387d0);
        auVar45 = roundpd(auVar45,auVar45,3);
        auVar48 = roundpd(auVar48,auVar48,3);
        auVar58._0_8_ = dVar42 - auVar45._0_8_ * dVar43;
        auVar58._8_8_ = dVar54 - auVar45._8_8_ * dVar44;
        auVar52._0_8_ = dVar41 - auVar48._0_8_ * dVar43;
        auVar52._8_8_ = 0.0 - auVar48._8_8_ * dVar44;
        auVar55._0_8_ = auVar58._0_8_ + dVar43;
        auVar55._8_8_ = auVar58._8_8_ + dVar44;
        auVar50._0_8_ = auVar52._0_8_ + dVar43;
        auVar50._8_8_ = auVar52._8_8_ + dVar44;
        auVar48._8_8_ = -(ulonglong)(0.0 <= auVar58._8_8_);
        auVar48._0_8_ = -(ulonglong)(0.0 <= auVar58._0_8_);
        auVar45 = blendvpd(auVar55,auVar58,auVar48);
        auVar56._8_8_ = -(ulonglong)(0.0 <= auVar52._8_8_);
        auVar56._0_8_ = -(ulonglong)(0.0 <= auVar52._0_8_);
        auVar48 = blendvpd(auVar50,auVar52,auVar56);
        auVar53._0_8_ = auVar45._0_8_ + -360.0;
        auVar53._8_8_ = auVar45._8_8_ + -360.0;
        auVar46._8_8_ = -(ulonglong)(180.0 < auVar45._8_8_);
        auVar46._0_8_ = -(ulonglong)(180.0 < auVar45._0_8_);
        auVar56 = blendvpd(auVar45,auVar53,auVar46);
        auVar47._8_8_ = -(ulonglong)(180.0 < auVar48._8_8_);
        auVar47._0_8_ = -(ulonglong)(180.0 < auVar48._0_8_);
        auVar45._8_8_ = auVar48._8_8_ + 0.0;
        auVar45._0_8_ = auVar48._0_8_ + -360.0;
        auVar45 = blendvpd(auVar48,auVar45,auVar47);
        *(undefined1 (*) [16])(pdVar23 + 4) = auVar56;
        dVar41 = auVar45._0_8_;
        pdVar23[6] = dVar41;
        auVar59._8_8_ = 0;
        auVar59._0_8_ = dVar41;
        auVar45 = divpd(auVar56,auVar49);
        auVar49 = divpd(auVar59,auVar49);
        auVar45 = roundpd(auVar45,auVar45,3);
        auVar49 = roundpd(auVar49,auVar49,3);
        dVar54 = (auVar56._0_8_ - auVar45._0_8_ * dVar43) * 0.008726646259971648;
        _X = (auVar56._8_8_ - auVar45._8_8_ * dVar44) * 0.008726646259971648;
        _X_00 = (dVar41 - auVar49._0_8_ * dVar43) * 0.008726646259971648;
        _X_01 = (0.0 - auVar49._8_8_ * dVar44) * 0.008726646259971648;
        local_228 = (uint *)sin(dVar54);
        local_218 = uVar34;
        uStack_214 = uVar67;
        uStack_210 = (int)lVar13;
        uStack_20c = uVar10;
        dVar41 = sin(_X);
        local_258 = plVar18;
        uStack_250 = (int)lVar36;
        uStack_24c = uVar66;
        dVar42 = sin(_X_00);
        local_238 = (int)lVar21;
        uStack_234 = uVar61;
        uStack_230 = (int)lVar31;
        uStack_22c = uVar62;
        sin(_X_01);
        dVar54 = cos(dVar54);
        uVar67 = uStack_214;
        uVar34 = local_218;
        dVar43 = cos(_X);
        dVar44 = cos(_X_00);
        cos(_X_01);
        *pdVar23 = (double)local_228 * dVar41 * dVar44 - dVar54 * dVar43 * dVar42;
        pdVar23[1] = -((double)local_228 * dVar43 * dVar44) - dVar54 * dVar41 * dVar42;
        pdVar23[2] = -(dVar43 * (double)local_228 * dVar42) + dVar41 * dVar54 * dVar44;
        pdVar23[3] = dVar41 * (double)local_228 * dVar42 + dVar43 * dVar54 * dVar44;
        uVar63 = (undefined4)local_258;
        uVar64 = local_258._4_4_;
        uVar65 = uStack_250;
        uVar66 = uStack_24c;
        iVar35 = local_238;
        uVar61 = uStack_234;
        uVar68 = uStack_230;
        uVar62 = uStack_22c;
      }
      else if ((pdVar23[6] != dVar41) ||
              (uVar63 = (int)lVar33, uVar65 = (int)lVar36, iVar35 = (int)lVar21,
              uVar68 = (int)lVar31, NAN(pdVar23[6]) || NAN(dVar41))) goto LAB_143d95a72;
      local_1b8 = (code *)*pdVar23;
      uStack_1b0 = (longlong *)pdVar23[1];
      dStack_1a8 = pdVar23[2];
      uStack_1a0 = SUB84(pdVar23[3],0);
      uStack_19c = (undefined4)((ulonglong)pdVar23[3] >> 0x20);
      local_1e8._8_4_ = SUB84(dVar60,0);
      local_1e8._0_8_ = dVar57;
      local_1e8._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
      local_2a0 = (double *)((ulonglong)local_2a0 & 0xffffffffffffff00);
      local_2a8 = (double *)0x0;
      dStack_1d8 = dVar9 + dVar12;
      FUN_144927ad4(plVar17,local_1e8,&local_1b8,0);
      local_1b8 = (code *)CONCAT44(uVar61,iVar35);
      uStack_1b0 = (longlong *)CONCAT44(uVar62,uVar68);
      uStack_1a0 = (undefined4)lVar26;
      uStack_19c = (undefined4)((ulonglong)lVar26 >> 0x20);
      dStack_1a8 = dVar11;
      FUN_1448052ee(&local_1b8,&local_148);
      local_2a8 = (double *)((ulonglong)local_2a8 & 0xffffffffffffff00);
      FUN_14020f75c(plVar17,&local_148,0,0);
      local_188 = (longlong *)CONCAT44(uVar64,uVar63);
      uStack_180 = CONCAT44(uVar66,uVar65);
      local_178 = CONCAT44(uVar67,uVar34);
      (**(code **)(*plVar17 + 0x478))(plVar17);
      plVar18 = (longlong *)FUN_1405bbf8c(param_1);
      lVar26 = plVar18[1];
      if (lVar26 == 0) {
        uVar19 = FUN_1405bc036();
        lVar26 = FUN_14477b664(uVar19);
        plVar18[1] = lVar26;
      }
      if (((plVar18[2] == 0) && (lVar26 != 0)) && (*plVar18 != 0)) {
        plVar20 = *(longlong **)(lVar26 + 0xb8);
        if ((plVar20 == (longlong *)0x0) ||
           (cVar14 = (**(code **)(*plVar20 + 0x108))(plVar20), cVar14 == '\0')) {
          lVar26 = 0;
        }
        else {
          uVar19 = (**(code **)(*plVar20 + 0x110))(plVar20);
          lVar26 = FUN_144aff482(uVar19,plVar18);
        }
        plVar18[2] = lVar26;
      }
      FUN_14035842f(plVar17);
      (**(code **)(*plVar17 + 0x490))(plVar17,lVar7,&DAT_14cadad98,local_160);
      uVar19 = FUN_1447210f0(*(undefined8 *)(lVar6 + 0x20));
      FUN_140b506dc(plVar17,uVar19,0);
      if (*param_1 != 0) {
        if ((((*(byte *)(lVar6 + 0x2d8) & 0x40) != 0) && (param_1[0xf] != 0)) &&
           (((lVar26 = *(longlong *)(lVar7 + 0xb0), lVar26 != 0 ||
             (lVar26 = FUN_1448abda6(lVar7), lVar26 != 0)) &&
            (FUN_1407f7f84(&local_1b8,lVar26), uStack_1b0 != (longlong *)0x0)))) {
          iVar35 = (int)uStack_1b0[1];
          do {
            if (iVar35 == 0) {
              plVar18 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar15 = (int)uStack_1b0[1];
            bVar40 = iVar35 == iVar15;
            if (bVar40) {
              *(int *)(uStack_1b0 + 1) = iVar35 + 1;
              iVar15 = iVar35;
            }
            iVar35 = iVar15;
            UNLOCK();
            plVar18 = uStack_1b0;
          } while (!bVar40);
          LOCK();
          piVar1 = (int *)((longlong)uStack_1b0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*uStack_1b0 + 0x10))();
          }
          if (plVar18 != (longlong *)0x0) {
            if (local_1b8 != (code *)0x0) {
              FUN_1417c06ee(lVar7,&local_1f8,*param_1);
              lVar26 = param_1[0x10];
              lVar21 = param_1[0x11];
              lVar31 = param_1[0x12];
              lVar33 = param_1[0x13];
              dVar57 = (double)param_1[0x14];
              dVar60 = (double)param_1[0x15];
              dVar9 = (double)param_1[0x16];
              pcVar30 = (code *)param_1[0x18];
              plVar17 = (longlong *)param_1[0x19];
              dVar11 = (double)param_1[0x1a];
              FUN_140fb9884(lVar6,&local_108,*param_1);
              dVar12 = local_f8;
              dVar57 = dVar57 + local_108;
              dVar60 = dVar60 + dStack_100;
              FUN_1400021e4(param_1,local_1e8);
              puVar16 = &DAT_149dfb77a;
              if (local_1e8._8_4_ != 0) {
                puVar16 = (undefined2 *)local_1e8._0_8_;
              }
              puVar32 = &DAT_149dfb77a;
              if (DAT_14cb81428 != 0) {
                puVar32 = DAT_14cb81420;
              }
              FUN_140002266(&local_1b8,L"%s%s",puVar32,puVar16);
              pcVar38 = (code *)&DAT_149dfb77a;
              if ((int)uStack_1b0 != 0) {
                pcVar38 = local_1b8;
              }
              FUN_1446f470e(&local_150,pcVar38,1);
              if (local_1b8 != (code *)0x0) {
                FUN_1400020a8();
              }
              if ((double)local_1e8._0_8_ != 0.0) {
                FUN_1400020a8();
              }
              lVar36 = local_150;
              uVar19 = FUN_1405fc15c();
              local_2a8 = (double *)((ulonglong)local_2a8 & 0xffffffff00000000);
              FUN_140af9fb2(&local_158,*(undefined8 *)(lVar6 + 0x20),uVar19,lVar36);
              plVar20 = (longlong *)FUN_140f421d5(*(undefined8 *)(lVar6 + 0x20),local_158,0);
              *(byte *)((longlong)plVar20 + 0x9e) = *(byte *)((longlong)plVar20 + 0x9e) | 8;
              *(byte *)(plVar20 + 0x59) = *(byte *)(plVar20 + 0x59) | 2;
              FUN_14084ef06(plVar20,param_1[0xf]);
              uStack_1a0 = (undefined4)lVar33;
              uStack_19c = (undefined4)((ulonglong)lVar33 >> 0x20);
              local_1e8._8_4_ = SUB84(dVar60,0);
              local_1e8._0_8_ = dVar57;
              local_1e8._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
              dStack_1d8 = dVar9 + dVar12;
              local_2a0 = (double *)((ulonglong)local_2a0 & 0xffffffffffffff00);
              local_2a8 = (double *)0x0;
              local_1b8 = (code *)lVar26;
              uStack_1b0 = (longlong *)lVar21;
              dStack_1a8 = (double)lVar31;
              FUN_144927ad4(plVar20,local_1e8,&local_1b8,0);
              local_1b8 = pcVar30;
              uStack_1b0 = plVar17;
              dStack_1a8 = dVar11;
              if (*(code **)(*plVar20 + 0x478) == FUN_14028a216) {
                FUN_14028a216(plVar20);
              }
              else {
                (**(code **)(*plVar20 + 0x478))(plVar20,&local_1b8);
              }
              plVar17 = (longlong *)FUN_1405bbf8c(param_1);
              lVar26 = plVar17[1];
              if (lVar26 == 0) {
                uVar19 = FUN_1405bc036();
                lVar26 = FUN_14477b664(uVar19);
                plVar17[1] = lVar26;
              }
              if (((plVar17[2] == 0) && (lVar26 != 0)) && (*plVar17 != 0)) {
                plVar8 = *(longlong **)(lVar26 + 0xb8);
                if ((plVar8 == (longlong *)0x0) ||
                   (cVar14 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar14 == '\0')) {
                  lVar26 = 0;
                }
                else {
                  uVar19 = (**(code **)(*plVar8 + 0x110))(plVar8);
                  lVar26 = FUN_144aff482(uVar19,plVar17);
                }
                plVar17[2] = lVar26;
              }
              FUN_143dd320f(plVar20);
              (**(code **)(*plVar20 + 0x490))(plVar20,lVar7,&DAT_14cadad98,local_1f8);
              uVar19 = FUN_1447210f0(*(undefined8 *)(lVar6 + 0x20));
              FUN_140b506dc(plVar20,uVar19,0);
            }
            LOCK();
            plVar17 = plVar18 + 1;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)*plVar17 == 0) {
              (**(code **)*plVar18)(plVar18);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
        }
        if (*param_1 != 0) goto LAB_143d960e2;
      }
    }
    else {
LAB_143d960e2:
      if ((((*(byte *)(lVar6 + 0x2d8) & 4) != 0) && (param_1[0xe] != 0)) &&
         (FUN_1417c06ee(lVar7,&local_1f8), local_1f8 != (undefined2 *)0x0)) {
        pcVar30 = (code *)param_1[2];
        plVar18 = (longlong *)param_1[3];
        dVar12 = (double)param_1[4];
        lVar26 = param_1[5];
        dVar57 = (double)param_1[6];
        dVar60 = (double)param_1[7];
        dVar9 = (double)param_1[8];
        dVar41 = (double)param_1[10];
        dVar42 = (double)param_1[0xb];
        dVar11 = (double)param_1[0xc];
        FUN_140fb9884(lVar6,local_1e8,*param_1);
        dVar54 = dStack_1d8;
        dVar57 = dVar57 + (double)local_1e8._0_8_;
        dVar60 = dVar60 + (double)local_1e8._8_8_;
        bVar40 = true;
        if ((*(longlong *)(lVar6 + 0x20) != 0) && (lVar21 = FUN_1447210f0(), lVar21 != 0)) {
          lVar21 = FUN_1447210f0(*(undefined8 *)(lVar6 + 0x20));
          bVar40 = *(byte *)(lVar21 + 0x152) - 5 < 0xfffffffd;
        }
        uStack_1a0 = (undefined4)lVar26;
        uStack_19c = (undefined4)((ulonglong)lVar26 >> 0x20);
        local_1b8 = pcVar30;
        uStack_1b0 = plVar18;
        dStack_1a8 = dVar12;
        local_108 = dVar41;
        dStack_100 = dVar42;
        local_f8 = dVar11;
        FUN_1448052ee();
        local_2a8 = &local_148;
        local_138 = dVar9 + dVar54;
        local_188 = (longlong *)0x0;
        uStack_180 = 0;
        local_268 = (undefined1 *)((ulonglong)local_268 & 0xffffffffffffff00);
        local_270 = (undefined8 *)((ulonglong)local_270 & 0xffffffffffffff00);
        local_280 = (undefined1 *)((ulonglong)local_280 & 0xffffffffffffff00);
        local_288 = (wchar_t *)CONCAT71(local_288._1_7_,bVar40);
        local_278 = (undefined1 *)CONCAT71(local_278._1_7_,1);
        local_290 = local_290 & 0xffffffff00000000;
        local_2a0 = &local_128;
        local_298 = &local_108;
        local_148 = dVar57;
        dStack_140 = dVar60;
        plVar18 = (longlong *)FUN_140a44d48(param_1[0xe],&local_188,lVar7,local_1f8);
        if (local_188 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (plVar18 != (longlong *)0x0) {
          FUN_1400021e4(param_1,&local_188);
          plVar17 = (longlong *)&DAT_149dfb77a;
          if ((int)uStack_180 != 0) {
            plVar17 = local_188;
          }
          puVar16 = &DAT_149dfb77a;
          if (DAT_14cb81438 != 0) {
            puVar16 = DAT_14cb81430;
          }
          FUN_140002266(&local_1b8,L"%s%s",puVar16,plVar17);
          pcVar30 = (code *)&DAT_149dfb77a;
          if ((int)uStack_1b0 != 0) {
            pcVar30 = local_1b8;
          }
          FUN_1446f470e(&local_150,pcVar30,1);
          if (local_1b8 != (code *)0x0) {
            FUN_1400020a8();
          }
          if (local_188 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          lVar26 = local_150;
          uVar19 = FUN_140288b94();
          local_2a8 = (double *)((ulonglong)local_2a8 & 0xffffffff00000000);
          FUN_140af9fb2(&local_188,*(undefined8 *)(lVar6 + 0x20),uVar19,lVar26);
          FUN_1400021e4(&local_188,&local_1b8);
          pcVar30 = local_1b8;
          if ((int)uStack_1b0 == 0) {
            pcVar30 = (code *)&DAT_149dfb77a;
          }
          (**(code **)(*plVar18 + 0x170))(plVar18,pcVar30,0,0);
          if (local_1b8 != (code *)0x0) {
            FUN_1400020a8();
          }
          plVar17 = (longlong *)FUN_1405bbf8c(param_1);
          lVar26 = plVar17[1];
          if (lVar26 == 0) {
            uVar19 = FUN_1405bc036();
            lVar26 = FUN_14477b664(uVar19);
            plVar17[1] = lVar26;
          }
          if (((plVar17[2] == 0) && (lVar26 != 0)) && (*plVar17 != 0)) {
            plVar20 = *(longlong **)(lVar26 + 0xb8);
            if ((plVar20 == (longlong *)0x0) ||
               (cVar14 = (**(code **)(*plVar20 + 0x108))(plVar20), cVar14 == '\0')) {
              lVar26 = 0;
            }
            else {
              uVar19 = (**(code **)(*plVar20 + 0x110))(plVar20);
              lVar26 = FUN_144aff482(uVar19,plVar17);
            }
            plVar17[2] = lVar26;
          }
          FUN_14189b8e0(plVar18);
        }
      }
    }
  }
  else {
    FUN_1400021e4(param_1,&local_188);
    plVar18 = (longlong *)&DAT_149dfb77a;
    if ((int)uStack_180 != 0) {
      plVar18 = local_188;
    }
    FUN_140002266(&local_1b8,L"Amputated_%s",plVar18);
    pcVar30 = (code *)&DAT_149dfb77a;
    if ((int)uStack_1b0 != 0) {
      pcVar30 = local_1b8;
    }
    FUN_1446f470e(&local_158,pcVar30,1);
    if (local_1b8 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_188 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    dVar57 = (double)param_1[0x1e];
    if ((double)param_1[0x1e] <= 9.999999747378752e-06) {
      dVar57 = 9.999999747378752e-06;
    }
    dVar60 = (double)param_1[0x1c];
    uVar61 = SUB84(dVar60,0);
    uVar62 = (undefined4)((ulonglong)dVar60 >> 0x20);
    dVar9 = (double)param_1[0x1d];
    if ((double)param_1[0x1d] <= 9.999999747378752e-06) {
      dVar9 = 9.999999747378752e-06;
    }
    if (dVar60 <= 9.999999747378752e-06) {
      uVar61 = 0x80000000;
      uVar62 = 0x3ee4f8b5;
    }
    local_1b8 = (code *)0x0;
    uStack_1b0 = (longlong *)((ulonglong)uStack_1b0._4_4_ << 0x20);
    uStack_19c = 0;
    uStack_198 = 0x3f800000;
    uStack_194 = uStack_194 & 0xffffff00;
    FUN_1404163bc(&local_1b8);
    local_1e8._0_8_ = local_1b8;
    auVar45 = local_1e8;
    if ((local_1b8 != (code *)0x0 & DAT_14c950c29) == 1) {
      local_1e8 = auVar45;
      FUN_1456cec3c();
    }
    local_298 = (double *)local_1e8;
    local_1c0 = local_190;
    local_1d0._4_4_ = uStack_19c;
    local_1d0._0_4_ = uStack_1a0;
    local_1d0._8_4_ = uStack_198;
    local_1d0._12_4_ = uStack_194;
    local_1e8._8_8_ = uStack_1b0;
    dStack_1d8 = dStack_1a8;
    local_2a0 = &local_108;
    local_108 = (double)CONCAT44(uVar62,uVar61);
    local_2a8 = &local_128;
    local_128 = DAT_14c8464f8;
    dStack_120 = DAT_14c846500;
    local_118 = DAT_14c846508;
    local_138 = DAT_14c8464f0;
    local_148 = DAT_14c8464e0;
    dStack_140 = DAT_14c8464e8;
    local_270 = (undefined8 *)CONCAT71(local_270._1_7_,1);
    local_278 = (undefined1 *)CONCAT71(local_278._1_7_,1);
    local_280 = (undefined1 *)CONCAT71(local_280._1_7_,1);
    local_288 = (wchar_t *)((ulonglong)local_288 & 0xffffffffffffff00);
    local_290 = local_290 & 0xffffffffffffff00;
    local_268 = (undefined1 *)0x0;
    dStack_100 = dVar9;
    local_f8 = dVar57;
    FUN_14041646c(lVar7,local_158,*param_1);
    lVar26 = *(longlong *)(lVar6 + 0x20);
    if (*(char *)(lVar26 + 0x178) == '\x03') {
      local_188 = (longlong *)0x0;
      uStack_180 = 0;
      FUN_1407329d4(lVar7,0,&local_188);
      if ((longlong)(int)uStack_180 != 0) {
        plVar18 = local_188 + (int)uStack_180;
        plVar17 = local_188;
        do {
          plVar20 = (longlong *)*plVar17;
          if ((plVar20 != (longlong *)0x0) &&
             ((plVar20[0x25] == *param_1 || (cVar14 = FUN_14133ca96(lVar7), cVar14 != '\0')))) {
            local_150 = plVar20[3];
            FUN_1400021e4(&local_150,&local_1f8);
            uVar37 = 0;
            uVar29 = (ulonglong)(DAT_14cb81408 - 1);
            if (DAT_14cb81408 == 0) {
              uVar29 = uVar37;
            }
            if (0 < (int)uVar29) {
              puVar16 = &DAT_149dfb77a;
              if (DAT_14cb81408 != 0) {
                puVar16 = DAT_14cb81400;
              }
              puVar32 = local_1f8;
              if (local_1f0 == 0) {
                puVar32 = &DAT_149dfb77a;
              }
              lVar26 = 0;
LAB_143d956a4:
              uVar3 = *(ushort *)((longlong)puVar32 + lVar26);
              uVar4 = *(ushort *)((longlong)puVar16 + lVar26);
              if (uVar3 == uVar4) {
                iVar35 = 0;
                if ((uVar3 == 0) || (uVar29 == 1)) goto LAB_143d95704;
LAB_143d956c1:
                uVar29 = uVar29 - 1;
                lVar26 = lVar26 + 2;
                goto LAB_143d956a4;
              }
              if ((uVar4 | uVar3) < 0x80) {
                if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4]) {
                  iVar35 = (uint)(byte)(&DAT_149e05da0)[uVar3] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
                  goto LAB_143d95704;
                }
                if (uVar29 == 1) {
                  iVar35 = 0;
                  goto LAB_143d95704;
                }
                goto LAB_143d956c1;
              }
              iVar35 = (uint)uVar3 - (uint)uVar4;
LAB_143d95704:
              uVar37 = (ulonglong)(iVar35 == 0);
            }
            if (local_1f8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if ((char)uVar37 == '\0') {
              lVar26 = FUN_1410316fc();
              if ((*(int *)(lVar26 + 0x38) <= *(int *)(plVar20[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar20[2] + 0x30) + (longlong)*(int *)(lVar26 + 0x38) * 8) ==
                  lVar26 + 0x30)) {
                (**(code **)(*plVar20 + 0x650))(plVar20,0,0);
              }
            }
            else {
              (**(code **)(*plVar20 + 0x420))(plVar20,0);
            }
          }
          plVar17 = plVar17 + 1;
        } while (plVar17 != plVar18);
      }
      if (local_188 != (longlong *)0x0) {
        FUN_1400020a8(local_188);
      }
      lVar26 = *(longlong *)(lVar6 + 0x20);
    }
    if ((lVar26 != 0) && (*param_1 != 0)) {
      pcVar30 = *(code **)(*(longlong *)(lVar26 + 0x1108) + 0x10);
      if (pcVar30 == (code *)&LAB_144801c46) {
        lVar26 = lVar26 + 0x1600;
      }
      else {
        lVar26 = (*pcVar30)(lVar26 + 0x1108);
      }
      if (((*(char *)(lVar26 + 0xe0) == '\0') && (*(char *)(lVar26 + 200) == '\x01')) &&
         (cVar14 = FUN_14133ca08(lVar26,param_1), cVar14 != '\0')) {
        lVar26 = *(longlong *)(lVar6 + 0x20);
        pcVar30 = *(code **)(*(longlong *)(lVar26 + 0x1108) + 0x10);
        if (pcVar30 == (code *)&LAB_144801c46) {
          lVar26 = lVar26 + 0x1600;
        }
        else {
          lVar26 = (*pcVar30)(lVar26 + 0x1108);
        }
        FUN_1400bc96c(lVar26 + 0xe0,&DAT_14cb81440);
      }
    }
    lVar26 = *param_1;
    if ((*(longlong *)(lVar6 + 0x28) != 0) && (lVar26 != 0)) {
      if (*(longlong *)(lVar7 + 0xe50) != 0) {
        uVar34 = *(uint *)(lVar7 + 0x17c8);
        uVar29 = (ulonglong)uVar34;
        if (uVar34 != 0) {
          local_228 = (uint *)(lVar7 + 0x17b0);
          puVar22 = *(uint **)(lVar7 + 0x17c0);
          if (*(uint **)(lVar7 + 0x17c0) == (uint *)0x0) {
            puVar22 = local_228;
          }
          uVar28 = *puVar22;
          if (uVar28 == 0) {
            iVar35 = uVar34 + 0x1e;
            if (-1 < (int)(uVar34 - 1)) {
              iVar35 = uVar34 - 1;
            }
            uVar37 = 0;
            uVar27 = (ulonglong)(uint)(iVar35 >> 5);
            if (iVar35 >> 5 < 1) {
              uVar27 = uVar37;
            }
            iVar35 = 0;
            do {
              if (uVar27 == uVar37) goto LAB_143d96831;
              iVar35 = iVar35 + 0x20;
              uVar28 = puVar22[uVar37 + 1];
              uVar37 = uVar37 + 1;
            } while (uVar28 == 0);
          }
          else {
            uVar37 = 0;
            iVar35 = 0;
          }
          uVar39 = (ulonglong)(-uVar28 & uVar28);
          uVar27 = uVar39 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          iVar15 = (iVar35 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if (iVar15 < (int)uVar34) {
            uVar34 = 0xffffffff;
            local_240 = uVar29;
            do {
              local_258 = *(longlong **)(*(longlong *)(lVar7 + 0x17a0) + (longlong)iVar15 * 0x18);
              local_238 = iVar35;
              local_218 = uVar34;
              if (local_258 != (longlong *)0x0) {
                if ((longlong)*(int *)(lVar7 + 0x19b0) != 0) {
                  lVar26 = *(longlong *)(lVar7 + 0x19a8);
                  lVar21 = (longlong)*(int *)(lVar7 + 0x19b0) << 3;
                  do {
                    cVar14 = FUN_14100b438(lVar26,local_258);
                    if (cVar14 != '\0') goto LAB_143d966ff;
                    lVar26 = lVar26 + 8;
                    lVar21 = lVar21 + -8;
                  } while (lVar21 != 0);
                }
                plVar18 = local_258;
                (**(code **)(*local_258 + 0x4b0))(local_258);
                plVar18 = (longlong *)(**(code **)(*plVar18 + 0x4b0))(plVar18);
                if ((longlong)(int)plVar18[1] != 0) {
                  plVar17 = (longlong *)*plVar18;
                  local_200 = plVar17 + (int)plVar18[1];
                  do {
                    lVar26 = *plVar17;
                    if (lVar26 != 0) {
                      lVar21 = FUN_1414cc2e6();
                      if (((*(int *)(lVar21 + 0x38) <= *(int *)(*(longlong *)(lVar26 + 0x10) + 0x38)
                           ) && (*(longlong *)
                                  (*(longlong *)(*(longlong *)(lVar26 + 0x10) + 0x30) +
                                  (longlong)*(int *)(lVar21 + 0x38) * 8) == lVar21 + 0x30)) &&
                         ((*(int *)(lVar26 + 0xa8) != 0 && (0 < *(int *)(lVar26 + 200))))) {
                        lVar21 = 0;
                        do {
                          if ((*(longlong *)(*(longlong *)(lVar26 + 0xc0) + lVar21 * 8) == *param_1)
                             || (cVar14 = FUN_14133ca96(lVar7), cVar14 != '\0')) {
                            iVar35 = *(int *)(*(longlong *)(lVar26 + 0xa0) + 0x98);
                            local_208 = (longlong)iVar35;
                            if (local_208 == 0) {
                              iVar15 = 0;
                            }
                            else {
                              lVar31 = *(longlong *)(*(longlong *)(lVar26 + 0xa0) + 0x90);
                              lVar33 = local_208 * 0x4c + lVar31;
                              iVar15 = 0;
                              do {
                                lVar36 = 7;
                                do {
                                  if (*(int *)(*(longlong *)(lVar26 + 0xd0) + lVar21 * 4) ==
                                      *(int *)(*(longlong *)(lVar26 + 0xd0) +
                                              (ulonglong)*(ushort *)(lVar31 + -10 + lVar36 * 2) * 4)
                                     ) {
                                    if (*(float *)(*(longlong *)(lVar6 + 0x28) + 0x60) <=
                                        *(float *)(lVar31 + lVar36 * 4)) {
                                      iVar15 = iVar15 + 1;
                                    }
                                    break;
                                  }
                                  lVar36 = lVar36 + 1;
                                } while (lVar36 != 0x13);
                                lVar31 = lVar31 + 0x4c;
                              } while (lVar31 != lVar33);
                            }
                            if (*(float *)(*(longlong *)(lVar6 + 0x28) + 100) <=
                                (float)iVar15 / (float)iVar35) {
                              FUN_1457e063a(lVar7,local_258);
                              uVar29 = local_240;
                              goto LAB_143d966ff;
                            }
                          }
                          lVar21 = lVar21 + 1;
                        } while (lVar21 < *(int *)(lVar26 + 200));
                      }
                    }
                    plVar17 = plVar17 + 1;
                    uVar29 = local_240;
                  } while (plVar17 != local_200);
                }
              }
LAB_143d966ff:
              uVar34 = local_218 & ~(uint)uVar39;
              puVar22 = *(uint **)(lVar7 + 0x17c0);
              if (*(uint **)(lVar7 + 0x17c0) == (uint *)0x0) {
                puVar22 = local_228;
              }
              iVar5 = *(int *)(lVar7 + 0x17c8);
              iVar15 = (int)uVar37;
              lVar26 = (longlong)iVar15;
              uVar28 = puVar22[lVar26] & uVar34;
              iVar35 = local_238;
              if (uVar28 == 0) {
                iVar24 = iVar5 + 0x1e;
                if (-1 < iVar5 + -1) {
                  iVar24 = iVar5 + -1;
                }
                iVar24 = iVar24 >> 5;
                iVar35 = local_238 + 0x20;
                iVar25 = iVar24;
                if (iVar24 < iVar15) {
                  iVar25 = iVar15;
                }
                if (iVar15 < iVar24) {
                  lVar21 = 0;
                  do {
                    uVar28 = puVar22[lVar26 + lVar21 + 1];
                    if (uVar28 != 0) {
                      uVar37 = (ulonglong)(iVar15 + (int)lVar21 + 1);
                      uVar34 = 0xffffffff;
                      goto LAB_143d9679f;
                    }
                    iVar35 = iVar35 + 0x20;
                    lVar21 = lVar21 + 1;
                  } while (iVar25 - lVar26 != lVar21);
                  uVar34 = 0xffffffff;
                  iVar15 = iVar25;
                }
                uVar37 = (ulonglong)(iVar15 + 1);
                iVar15 = iVar5;
              }
              else {
LAB_143d9679f:
                uVar39 = (ulonglong)(-uVar28 & uVar28);
                uVar27 = uVar39 * 2 + 1;
                lVar26 = 0x3f;
                if (uVar27 != 0) {
                  for (; uVar27 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                  }
                }
                iVar15 = (iVar35 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
                if (iVar5 <= iVar15) {
                  iVar15 = iVar5;
                }
              }
            } while (iVar15 != (int)uVar29);
            lVar26 = *param_1;
          }
          goto LAB_143d96831;
        }
      }
      goto LAB_143d95830;
    }
LAB_143d96831:
    if (lVar26 != 0) goto LAB_143d95830;
  }
  FUN_1418910e6(lVar6,param_1,param_1 + 0x58);
  FUN_1405bb6fa(lVar6,lVar7,param_1,param_1 + 0x50);
  bVar2 = *(byte *)(param_1 + 0x46);
  if ((bVar2 & 1) != 0) {
    FUN_145865b76(lVar6);
  }
  if ((bVar2 & 2) != 0) {
    *(byte *)(lVar6 + 0x308) = *(byte *)(lVar6 + 0x308) | 2;
  }
  lVar7 = param_1[0x48];
  if ((longlong)(int)lVar7 != 0) {
    lVar26 = param_1[0x47];
    lVar21 = 0;
    do {
      iVar35 = *(int *)(lVar26 + lVar21);
      if ((-1 < (longlong)iVar35) && (iVar35 < *(int *)(lVar6 + 0x40))) {
        FUN_1414141fa(*(undefined8 *)(*(longlong *)(lVar6 + 0x38) + 8 + (longlong)iVar35 * 0x18),
                      param_1);
        FUN_1418910e6(lVar6,param_1,param_1 + 0x58);
      }
      lVar21 = lVar21 + 4;
    } while ((longlong)(int)lVar7 * 4 != lVar21);
  }
LAB_143d96428:
  if ((local_f0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d96ac6 FUN_143d96ac6 body=277 status=ok
// SIG undefined FUN_143d96ac6(void)

undefined8 * FUN_143d96ac6(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x400,0x10);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b40fc70;
  FUN_141413e7e(puVar4 + 2,param_1 + 0x10);
  puVar4[0x52] = *(undefined8 *)(param_1 + 0x290);
  *(undefined2 *)(puVar4 + 0x53) = *(undefined2 *)(param_1 + 0x298);
  puVar6 = (undefined8 *)(param_1 + 0x2a0);
  puVar7 = puVar4 + 0x54;
  for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(puVar4 + 0x5d) = *(undefined4 *)(param_1 + 0x2e8);
  memcpy(puVar4 + 0x5e,(void *)(param_1 + 0x2f0),0xb8);
  puVar4[0x75] = *(undefined8 *)(param_1 + 0x3a8);
  uVar1 = *(undefined8 *)(param_1 + 0x3b8);
  puVar4[0x76] = *(undefined8 *)(param_1 + 0x3b0);
  puVar4[0x77] = uVar1;
  *(undefined4 *)(puVar4 + 0x78) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined1 *)((longlong)puVar4 + 0x3c4) = *(undefined1 *)(param_1 + 0x3c4);
  puVar4[0x7d] = *(undefined8 *)(param_1 + 1000);
  uVar1 = *(undefined8 *)(param_1 + 0x3c8);
  uVar2 = *(undefined8 *)(param_1 + 0x3d0);
  uVar3 = *(undefined8 *)(param_1 + 0x3e0);
  puVar4[0x7b] = *(undefined8 *)(param_1 + 0x3d8);
  puVar4[0x7c] = uVar3;
  puVar4[0x79] = uVar1;
  puVar4[0x7a] = uVar2;
  puVar4[0x7e] = *(undefined8 *)(param_1 + 0x3f0);
  return puVar4 + 2;
}



// FUNCTION 143d96be2 FUN_143d96be2 body=29 status=ok
// SIG undefined FUN_143d96be2(void)

void FUN_143d96be2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143d96c00 FUN_143d96c00 body=100 status=ok
// SIG undefined FUN_143d96c00(void)

undefined8 * FUN_143d96c00(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b40fc70;
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d96c64 FUN_143d96c64 body=4100 status=ok
// SIG undefined FUN_143d96c64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d96c64(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double _X;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined2 *puVar17;
  longlong *plVar18;
  undefined8 uVar19;
  longlong *plVar20;
  undefined8 uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  undefined2 *puVar27;
  undefined2 *puVar28;
  ulonglong uVar29;
  bool bVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_208 [32];
  undefined4 *local_1e8;
  undefined1 *local_1e0;
  undefined2 **local_1d8;
  ulonglong local_1d0;
  wchar_t *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  code *local_1a0;
  longlong local_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  undefined8 local_170;
  undefined2 *local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_110 [24];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0) goto LAB_143d96d05;
  lVar16 = param_1[0x61];
  lVar15 = FUN_140df24ba();
  if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar15 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) !=
      lVar15 + 0x30)) goto LAB_143d96d05;
  uVar21 = *(undefined8 *)*param_1;
  local_178 = param_1[0x60];
  local_188 = param_1[0x5e];
  lStack_180 = param_1[0x5f];
  local_190 = lVar16;
  lVar16 = FUN_1447210f0(param_2);
  if ((lVar16 != 0) && (param_2[0xa3] != 0)) {
    FUN_14480f766(lVar16 + 0x3f8);
  }
  puVar17 = (undefined2 *)FUN_1401ca522(param_1 + 0x21);
  if (puVar17 != (undefined2 *)0x0) {
    puVar1 = param_1 + 2;
    FUN_1400021e4(puVar1,&local_e8);
    puVar28 = &DAT_149dfb77a;
    if ((int)uStack_e0 != 0) {
      puVar28 = local_e8;
    }
    puVar27 = &DAT_149dfb77a;
    if (DAT_14cb81418 != 0) {
      puVar27 = DAT_14cb81410;
    }
    FUN_140002266(local_138,L"%s%s",puVar27,puVar28);
    puVar28 = &DAT_149dfb77a;
    if (local_138._8_4_ != 0) {
      puVar28 = (undefined2 *)local_138._0_8_;
    }
    FUN_1446f470e(&local_f0,puVar28,1);
    if (local_138._0_8_ != 0) {
      FUN_1400020a8();
    }
    if (local_e8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (DAT_14cad3688 == 0) {
      local_138._0_8_ = FUN_144b223ce;
      local_1a0 = FUN_14081d0ea;
      local_1a8 = &LAB_1417963e0;
      local_1b8 = &LAB_147a2f4c9;
      local_1c0 = &LAB_1400ea6f8;
      local_1c8 = L"Engine";
      local_1d0 = 0x200000000000;
      local_1d8 = (undefined2 **)CONCAT44(local_1d8._4_4_,0x10000004);
      local_1e0 = (undefined1 *)CONCAT44(local_1e0._4_4_,0x10);
      local_1e8 = (undefined4 *)CONCAT44(local_1e8._4_4_,0x720);
      local_1b0 = local_138;
      FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
    }
    local_1e8 = (undefined4 *)((ulonglong)local_1e8 & 0xffffffff00000000);
    FUN_140af9fb2(&local_f8,param_2,DAT_14cad3688,local_f0);
    local_1e0 = (undefined1 *)0x0;
    local_1e8 = (undefined4 *)((ulonglong)local_1e8 & 0xffffffffffffff00);
    plVar18 = (longlong *)FUN_141797230(param_2,local_f8,0,0);
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 0xa78))(plVar18,puVar17);
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(plVar18);
      }
      param_2[0x94] = (longlong)plVar18;
      FUN_14092e51e(param_2,plVar18);
      *(byte *)(param_2[0x94] + 0x2d4) = *(byte *)(param_2[0x94] + 0x2d4) & 0xbf;
      *(byte *)(param_2[0x94] + 0x2d5) = *(byte *)(param_2[0x94] + 0x2d5) & 0xfe;
      local_1e8._0_1_ = 1;
      FUN_140613f88(param_2[0x94],param_1 + 0x52,0,0);
      local_1e8 = (undefined4 *)((ulonglong)local_1e8._1_7_ << 8);
      FUN_1417bf298(param_2[0x94],param_1 + 0x34,0,0);
      (**(code **)(*(longlong *)param_2[0x94] + 0x728))((longlong *)param_2[0x94],DAT_14cb81468,1);
      (**(code **)(*(longlong *)param_2[0x94] + 0x720))((longlong *)param_2[0x94],2);
      (**(code **)(*(longlong *)param_2[0x94] + 0x690))((longlong *)param_2[0x94],1);
      plVar18 = (longlong *)param_2[0x2d];
      if (plVar18 != (longlong *)0x0) {
        uVar19 = FUN_1401fa540();
        plVar18 = (longlong *)(**(code **)(*plVar18 + 0x288))(plVar18,uVar19);
        if (plVar18 != (longlong *)0x0) {
          uVar19 = FUN_1401fa540();
          plVar20 = (longlong *)FUN_144718840(plVar18,uVar19);
          if (((plVar18 != plVar20) && (plVar20 != (longlong *)0x0)) &&
             (lVar15 = (**(code **)(*plVar20 + 0x10))(plVar20), lVar15 != 0)) {
            local_e8 = puVar17;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(puVar17);
            }
            local_138._0_12_ = ZEXT412(1) << 0x40;
            FUN_1417974e0(local_138,1,0);
            FUN_143280618(local_138._0_8_,&local_e8,1);
            local_e8 = (undefined2 *)0x0;
            uStack_e0 = 0;
            FUN_140f5df5a(local_138,lVar15,&local_e8);
            if (0 < (int)uStack_e0) {
              FUN_1406548f2(param_2[0x94]);
              FUN_140da7bee(param_2[0x94] + 0x620,&local_e8);
            }
            if (local_e8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_138._0_8_ != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
      FUN_14035842f(param_2[0x94],uVar21);
      plVar18 = (longlong *)FUN_1405bbf8c(puVar1);
      lVar15 = plVar18[1];
      if (lVar15 == 0) {
        uVar21 = FUN_1405bc036();
        lVar15 = FUN_14477b664(uVar21);
        plVar18[1] = lVar15;
      }
      if (((plVar18[2] == 0) && (lVar15 != 0)) && (*plVar18 != 0)) {
        plVar20 = *(longlong **)(lVar15 + 0xb8);
        if ((plVar20 == (longlong *)0x0) ||
           (cVar13 = (**(code **)(*plVar20 + 0x108))(plVar20), cVar13 == '\0')) {
          lVar15 = 0;
        }
        else {
          uVar21 = (**(code **)(*plVar20 + 0x110))(plVar20);
          lVar15 = FUN_144aff482(uVar21,plVar18);
        }
        plVar18[2] = lVar15;
      }
      FUN_14035842f(param_2[0x94]);
      param_2[0xa2] = local_178;
      param_2[0xa0] = local_188;
      param_2[0xa1] = lStack_180;
      cVar13 = FUN_140cb4e52(param_1 + 0x44);
      if (cVar13 != '\0') {
        lVar15 = param_1[0x44];
        uVar21 = FUN_14477b664(param_1[0x45]);
        lVar22 = FUN_14477b664(uVar21);
        lVar24 = param_1[0x46];
        lVar6 = param_1[0x47];
        if (param_2[0x96] != lVar15) {
          param_2[0x98] = 0;
        }
        param_2[0x96] = lVar15;
        if (param_2[0x97] != lVar22) {
          param_2[0x98] = 0;
        }
        uVar21 = FUN_14477b664(lVar22);
        lVar15 = FUN_14477b664(uVar21);
        param_2[0x97] = lVar15;
        param_2[0x98] = lVar24;
        param_2[0x99] = lVar6;
      }
      plVar18 = (longlong *)FUN_1405bbf8c(puVar1);
      lVar15 = *plVar18;
      if (param_2[0x9a] != lVar15) {
        param_2[0x9c] = 0;
      }
      param_2[0x9a] = lVar15;
      if (param_2[0x9b] != plVar18[1]) {
        param_2[0x9c] = 0;
      }
      uVar21 = FUN_14477b664();
      lVar15 = FUN_14477b664(uVar21);
      param_2[0x9b] = lVar15;
      param_2[0x9c] = plVar18[2];
      uVar5 = *(uint *)((longlong)param_2 + 0xc);
      *(uint *)(param_2 + 0x9d) = uVar5;
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      iVar14 = *(int *)(lVar15 + 0x10);
      if (*(int *)(lVar15 + 0x10) == 0) {
        LOCK();
        iVar14 = DAT_14c964868 + 1;
        UNLOCK();
        iVar25 = DAT_14c964868 + 1;
        bVar30 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar14;
        if (bVar30) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar25);
        }
        LOCK();
        iVar14 = *(int *)(lVar15 + 0x10);
        bVar30 = iVar14 == 0;
        if (bVar30) {
          *(int *)(lVar15 + 0x10) = iVar25;
          iVar14 = 0;
        }
        UNLOCK();
        if (bVar30) {
          iVar14 = iVar25;
        }
      }
      *(int *)((longlong)param_2 + 0x4ec) = iVar14;
      (**(code **)(*(longlong *)param_2[0x94] + 0x310))();
      lVar15 = param_2[0x94];
      uVar21 = FUN_1447210f0(param_2);
      FUN_140b506dc(lVar15,uVar21,0);
      if (lVar16 == 0) {
        lVar16 = FUN_1405bbea6();
        if (*(longlong *)(lVar16 + 0x110) == 0) {
          FUN_140aa6c08(lVar16);
        }
        (**(code **)(*param_2 + 0x388))(param_2);
      }
      else {
        local_138._0_12_ = ZEXT812(0);
        FUN_1446efa72(local_138,0,3,0x10);
        uVar21 = local_138._0_8_;
        local_138._8_4_ = 3;
        *(undefined ***)local_138._0_8_ = &PTR_LAB_14a3a3510;
        LOCK();
        UNLOCK();
        lVar24 = DAT_14c758608 + 1;
        lVar15 = DAT_14c758608 + 1;
        if (lVar24 == 0) {
          LOCK();
          UNLOCK();
          lVar24 = DAT_14c758608 + 2;
          lVar15 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar15;
        *(longlong *)(local_138._0_8_ + 0x10) = lVar24;
        *(undefined ***)local_138._0_8_ = &PTR_FUN_14b40fb20;
        *(undefined8 *)(local_138._0_8_ + 0x18) = 0;
        uVar5 = *(uint *)((longlong)param_2 + 0xc);
        *(uint *)(local_138._0_8_ + 0x18) = uVar5;
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar15 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar15 = 0;
        }
        iVar14 = *(int *)(lVar15 + 0x10);
        if (*(int *)(lVar15 + 0x10) == 0) {
          LOCK();
          iVar14 = DAT_14c964868 + 1;
          UNLOCK();
          iVar25 = DAT_14c964868 + 1;
          bVar30 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar14;
          if (bVar30) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar25);
          }
          LOCK();
          iVar14 = *(int *)(lVar15 + 0x10);
          bVar30 = iVar14 == 0;
          if (bVar30) {
            *(int *)(lVar15 + 0x10) = iVar25;
            iVar14 = 0;
          }
          UNLOCK();
          if (bVar30) {
            iVar14 = iVar25;
          }
        }
        *(int *)(uVar21 + 0x1c) = iVar14;
        *(code **)(uVar21 + 0x20) = FUN_140831a60;
        *(undefined4 *)(uVar21 + 0x28) = 0;
        FUN_1417f9b76(lVar16,&local_e8,local_138);
        param_2[0xa3] = (longlong)local_e8;
        if (local_138._8_4_ != 0) {
          if ((undefined8 *)local_138._0_8_ == (undefined8 *)0x0) goto LAB_143d97416;
          (*(code *)**(undefined8 **)local_138._0_8_)(local_138._0_8_,0);
          FUN_1446efa72(local_138,0,0,0x10);
          local_138._8_4_ = 0;
        }
        if (local_138._0_8_ != 0) {
          FUN_1400020a8();
        }
      }
LAB_143d97416:
      lVar16 = FUN_1402d1dc0(param_1 + 0x26);
      if (lVar16 != 0) {
        auVar4 = *(undefined1 (*) [16])(param_1 + 0x2e);
        auVar37 = divpd(auVar4,_DAT_1499387d0);
        auVar38._8_8_ = 0;
        auVar38._0_8_ = param_1[0x30];
        auVar38 = divpd(auVar38,_DAT_1499387d0);
        auVar37 = roundpd(auVar37,auVar37,3);
        auVar38 = roundpd(auVar38,auVar38,3);
        dVar9 = (auVar4._0_8_ - auVar37._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar10 = (auVar4._8_8_ - auVar37._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar36 = ((double)param_1[0x30] - auVar38._0_8_ * (double)DAT_1499387d0) *
                 0.008726646259971648;
        _X = (0.0 - auVar38._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar31 = sin(dVar9);
        dVar32 = sin(dVar10);
        dVar33 = sin(dVar36);
        sin(_X);
        dVar34 = cos(dVar9);
        dVar35 = cos(dVar10);
        dVar36 = cos(dVar36);
        cos(_X);
        dVar9 = dVar32 * dVar31 * dVar33 + dVar35 * dVar34 * dVar36;
        dVar10 = -(dVar31 * dVar35 * dVar36) - dVar34 * dVar32 * dVar33;
        uVar11 = *(undefined4 *)(param_1 + 0x2b);
        uVar12 = *(undefined4 *)((longlong)param_1 + 0x15c);
        uVar21 = param_1[0x2c];
        uVar19 = param_1[0x2d];
        puVar17 = (undefined2 *)param_1[0x31];
        uVar2 = param_1[0x32];
        uVar3 = param_1[0x33];
        bVar30 = true;
        if ((param_2[0x2d] != 0) && (lVar15 = FUN_1447210f0(), lVar15 != 0)) {
          lVar15 = FUN_1447210f0(param_2[0x2d]);
          bVar30 = *(byte *)(lVar15 + 0x152) - 5 < 0xfffffffd;
        }
        local_138._8_4_ = SUB84(dVar10,0);
        local_138._0_8_ = dVar31 * dVar32 * dVar36 - dVar34 * dVar35 * dVar33;
        local_138._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        local_128._8_4_ = SUB84(dVar9,0);
        local_128._0_8_ = -(dVar35 * dVar31 * dVar33) + dVar32 * dVar34 * dVar36;
        local_128._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        local_e8 = puVar17;
        uStack_e0 = uVar2;
        local_d8 = uVar3;
        FUN_1448052ee(local_138,local_110);
        local_1e8 = &local_158;
        local_168 = (undefined2 *)0x0;
        uStack_160 = 0;
        local_1a8 = (undefined1 *)((ulonglong)local_1a8 & 0xffffffffffffff00);
        local_1b0 = (undefined1 *)((ulonglong)local_1b0 & 0xffffffffffffff00);
        local_1c0 = (undefined1 *)((ulonglong)local_1c0 & 0xffffffffffffff00);
        local_1c8 = (wchar_t *)CONCAT71(local_1c8._1_7_,bVar30);
        local_1d8 = &local_e8;
        local_1b8 = (undefined1 *)CONCAT71(local_1b8._1_7_,1);
        local_1d0 = local_1d0 & 0xffffffff00000000;
        local_1e0 = local_110;
        local_158 = uVar11;
        uStack_154 = uVar12;
        uStack_150 = (int)uVar21;
        uStack_14c = (int)((ulonglong)uVar21 >> 0x20);
        local_148 = uVar19;
        plVar18 = (longlong *)FUN_140a44d48(lVar16,&local_168,param_2[0x94],0);
        if (local_168 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (plVar18 != (longlong *)0x0) {
          FUN_1400021e4(puVar1,&local_168);
          puVar17 = &DAT_149dfb77a;
          if ((int)uStack_160 != 0) {
            puVar17 = local_168;
          }
          puVar28 = &DAT_149dfb77a;
          if (DAT_14cb81438 != 0) {
            puVar28 = DAT_14cb81430;
          }
          FUN_140002266(local_138,L"%s%s",puVar28,puVar17);
          puVar17 = &DAT_149dfb77a;
          if (local_138._8_4_ != 0) {
            puVar17 = (undefined2 *)local_138._0_8_;
          }
          FUN_1446f470e(&local_170,puVar17,1);
          if (local_138._0_8_ != 0) {
            FUN_1400020a8();
          }
          if (local_168 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          uVar21 = FUN_140288b94();
          local_1e8 = (undefined4 *)((ulonglong)local_1e8 & 0xffffffff00000000);
          FUN_140af9fb2(&local_168,param_2,uVar21,local_170);
          FUN_1400021e4(&local_170,local_138);
          if (local_138._8_4_ == 0) {
            puVar17 = &DAT_149dfb77a;
          }
          else {
            puVar17 = (undefined2 *)local_138._0_8_;
          }
          (**(code **)(*plVar18 + 0x170))(plVar18,puVar17,0,0);
          if (local_138._0_8_ != 0) {
            FUN_1400020a8();
          }
          plVar20 = (longlong *)FUN_1405bbf8c(puVar1);
          lVar16 = plVar20[1];
          if (lVar16 == 0) {
            uVar21 = FUN_1405bc036();
            lVar16 = FUN_14477b664(uVar21);
            plVar20[1] = lVar16;
          }
          if (((plVar20[2] == 0) && (lVar16 != 0)) && (*plVar20 != 0)) {
            plVar7 = *(longlong **)(lVar16 + 0xb8);
            if ((plVar7 == (longlong *)0x0) ||
               (cVar13 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar13 == '\0')) {
              lVar16 = 0;
            }
            else {
              uVar21 = (**(code **)(*plVar7 + 0x110))(plVar7);
              lVar16 = FUN_144aff482(uVar21,plVar20);
            }
            plVar20[2] = lVar16;
          }
          FUN_14189b8e0(plVar18);
        }
      }
    }
  }
  lVar16 = local_190;
  if (param_2[0x2d] != 0) {
    uVar5 = *(uint *)((longlong)param_2 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar14 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar14 = DAT_14c964868 + 1;
      UNLOCK();
      iVar25 = DAT_14c964868 + 1;
      bVar30 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar14;
      if (bVar30) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar25);
      }
      LOCK();
      iVar14 = *(int *)(lVar15 + 0x10);
      bVar30 = iVar14 == 0;
      if (bVar30) {
        *(int *)(lVar15 + 0x10) = iVar25;
        iVar14 = 0;
      }
      UNLOCK();
      if (bVar30) {
        iVar14 = iVar25;
      }
    }
    iVar25 = *(int *)(lVar16 + 0x2e8);
    *(uint *)(lVar16 + 0x2e8) = iVar25 + 1U;
    if (*(uint *)(lVar16 + 0x2ec) < iVar25 + 1U) {
      FUN_141892476(lVar16 + 0x2e0,iVar25);
    }
    *(ulonglong *)(*(longlong *)(lVar16 + 0x2e0) + (longlong)iVar25 * 8) = CONCAT44(iVar14,uVar5);
    iVar14 = *(int *)(lVar16 + 0x1c);
    *(int *)(lVar16 + 0x1c) = iVar14 + 1;
    uVar23 = (ulonglong)*(int *)(lVar16 + 0x10);
    if ((longlong)uVar23 < 1) {
      *(int *)(lVar16 + 0x1c) = iVar14;
    }
    else {
      plVar18 = (longlong *)(lVar16 + 8);
      bVar30 = false;
      do {
        lVar15 = uVar23 * 0x10 + -8;
        uVar29 = uVar23;
        while (((*(int *)(*plVar18 + lVar15) != 0 &&
                (plVar20 = *(longlong **)(*plVar18 + -8 + lVar15), plVar20 != (longlong *)0x0)) &&
               (cVar13 = (**(code **)(*plVar20 + 0x60))(plVar20,param_2), cVar13 != '\0'))) {
          lVar15 = lVar15 + -0x10;
          bVar8 = uVar29 < 2;
          uVar29 = uVar29 - 1;
          if (bVar8) {
            iVar14 = *(int *)(lVar16 + 0x1c) + -1;
            *(int *)(lVar16 + 0x1c) = iVar14;
            if (bVar30) goto LAB_143d97537;
            goto LAB_143d96d05;
          }
        }
        uVar23 = uVar29 - 1;
        bVar30 = true;
      } while (1 < uVar29);
      iVar14 = *(int *)(lVar16 + 0x1c) + -1;
      *(int *)(lVar16 + 0x1c) = iVar14;
LAB_143d97537:
      if (iVar14 < 1) {
        iVar14 = *(int *)(lVar16 + 0x10);
        iVar25 = iVar14;
        if (0 < iVar14) {
          iVar26 = 0;
          do {
            if (((*(int *)(*plVar18 + 8 + (longlong)iVar26 * 0x10) == 0) ||
                (plVar20 = *(longlong **)(*plVar18 + (longlong)iVar26 * 0x10),
                plVar20 == (longlong *)0x0)) ||
               (cVar13 = (**(code **)(*plVar20 + 0x28))(), cVar13 != '\0')) {
              FUN_14005b288(plVar18,iVar26);
              FUN_14005b248(plVar18);
            }
            else {
              iVar26 = iVar26 + 1;
            }
            iVar25 = *(int *)(local_190 + 0x10);
          } while (iVar26 < iVar25);
        }
        iVar26 = 2;
        if (2 < iVar25 * 2) {
          iVar26 = iVar25 * 2;
        }
        *(int *)(local_190 + 0x18) = iVar26;
        if ((iVar26 < iVar14) && (*(int *)(local_190 + 0x14) != iVar25)) {
          FUN_14045812c(plVar18);
        }
      }
    }
  }
LAB_143d96d05:
  if ((local_d0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d97c6a FUN_143d97c6a body=106 status=ok
// SIG undefined FUN_143d97c6a(void)

undefined8 * FUN_143d97c6a(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)FUN_14001cc68(800,0x10);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b40fc90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  FUN_141413e7e(puVar1 + 4,param_1 + 0x20);
  puVar3 = (undefined8 *)(param_1 + 0x2a0);
  puVar4 = puVar1 + 0x54;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return puVar1 + 2;
}



// FUNCTION 143d97cda FUN_143d97cda body=29 status=ok
// SIG undefined FUN_143d97cda(void)

void FUN_143d97cda(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143d97cf8 FUN_143d97cf8 body=100 status=ok
// SIG undefined FUN_143d97cf8(void)

undefined8 * FUN_143d97cf8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b40fc90;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d97d5c FUN_143d97d5c body=31 status=ok
// SIG undefined FUN_143d97d5c(void)

undefined8 FUN_143d97d5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d97e16 FUN_143d97e16 body=31 status=ok
// SIG undefined FUN_143d97e16(void)

undefined8 FUN_143d97e16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d97f2a FUN_143d97f2a body=29 status=ok
// SIG undefined FUN_143d97f2a(void)

undefined8 FUN_143d97f2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d980c6 FUN_143d980c6 body=93 status=ok
// SIG undefined FUN_143d980c6(void)

void FUN_143d980c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40fd90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d98124 FUN_143d98124 body=93 status=ok
// SIG undefined FUN_143d98124(void)

void FUN_143d98124(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40fd90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d98182 FUN_143d98182 body=126 status=ok
// SIG undefined FUN_143d98182(void)

void FUN_143d98182(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40fd90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d981f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d9820a FUN_143d9820a body=275 status=ok
// SIG undefined FUN_143d9820a(void)

undefined8 FUN_143d9820a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143d98317;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d98317;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143d98317:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d982ca;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_140f0ab84(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_143d982ca;
    }
  }
  uVar6 = 0;
LAB_143d982ca:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d9831e FUN_143d9831e body=29 status=ok
// SIG undefined FUN_143d9831e(void)

undefined8 FUN_143d9831e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d984ba FUN_143d984ba body=93 status=ok
// SIG undefined FUN_143d984ba(void)

void FUN_143d984ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40fea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d98518 FUN_143d98518 body=93 status=ok
// SIG undefined FUN_143d98518(void)

void FUN_143d98518(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40fea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d98576 FUN_143d98576 body=126 status=ok
// SIG undefined FUN_143d98576(void)

void FUN_143d98576(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40fea0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d985e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d985fe FUN_143d985fe body=266 status=ok
// SIG undefined FUN_143d985fe(void)

undefined8 FUN_143d985fe(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143d98702;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d98702;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143d98702:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d986a9;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1488bbe84(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_143d986a9;
    }
  }
  uVar6 = 0;
LAB_143d986a9:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d9870a FUN_143d9870a body=202 status=ok
// SIG undefined FUN_143d9870a(void)

int FUN_143d9870a(longlong *param_1,uint param_2,longlong *param_3)

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



// FUNCTION 143d987d4 FUN_143d987d4 body=116 status=ok
// SIG undefined FUN_143d987d4(void)

void FUN_143d987d4(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 143d9884e FUN_143d9884e body=208 status=ok
// SIG undefined FUN_143d9884e(void)

int FUN_143d9884e(longlong *param_1,uint param_2,longlong *param_3)

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
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x60 + (longlong)iVar1 * 0x68)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x68);
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



// FUNCTION 143d9891e FUN_143d9891e body=31 status=ok
// SIG undefined FUN_143d9891e(void)

undefined8 FUN_143d9891e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d989d8 FUN_143d989d8 body=29 status=ok
// SIG undefined FUN_143d989d8(void)

undefined8 FUN_143d989d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d98b74 FUN_143d98b74 body=93 status=ok
// SIG undefined FUN_143d98b74(void)

void FUN_143d98b74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40fff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d98bd2 FUN_143d98bd2 body=93 status=ok
// SIG undefined FUN_143d98bd2(void)

void FUN_143d98bd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40fff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d98c30 FUN_143d98c30 body=126 status=ok
// SIG undefined FUN_143d98c30(void)

void FUN_143d98c30(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40fff0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d98c9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d98cc0 FUN_143d98cc0 body=274 status=ok
// SIG undefined FUN_143d98cc0(void)

undefined8 FUN_143d98cc0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143d98dcc;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d98dcc;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143d98dcc:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d98d80;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_140e9e6ee(*(undefined8 *)(param_1 + 0x20),0xbf800000);
      uVar6 = 1;
      goto LAB_143d98d80;
    }
  }
  uVar6 = 0;
LAB_143d98d80:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d98dd4 FUN_143d98dd4 body=29 status=ok
// SIG undefined FUN_143d98dd4(void)

undefined8 FUN_143d98dd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d98f70 FUN_143d98f70 body=93 status=ok
// SIG undefined FUN_143d98f70(void)

void FUN_143d98f70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b410060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d98fce FUN_143d98fce body=93 status=ok
// SIG undefined FUN_143d98fce(void)

void FUN_143d98fce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b410060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d9902c FUN_143d9902c body=126 status=ok
// SIG undefined FUN_143d9902c(void)

void FUN_143d9902c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b410060;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d9909b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d990b4 FUN_143d990b4 body=266 status=ok
// SIG undefined FUN_143d990b4(void)

undefined8 FUN_143d990b4(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143d991b8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d991b8;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143d991b8:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d9916c;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143d92cc4(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_143d9916c;
    }
  }
  uVar6 = 0;
LAB_143d9916c:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d991c0 FUN_143d991c0 body=359 status=ok
// SIG undefined FUN_143d991c0(void)

void FUN_143d991c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar1 = *param_2;
  local_60 = DAT_14cb81918;
  local_58 = 2;
  local_54 = 0xffffffff;
  local_b8[0] = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_c8 = local_b8;
  FUN_140042bb4(uVar1,&local_60,*(undefined4 *)*param_1,0);
  local_60 = DAT_14cb81928;
  local_58 = 2;
  local_54 = 0xffffffff;
  local_b8[0] = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_c8 = local_b8;
  FUN_140042bb4(uVar1,&local_60,*(undefined4 *)param_1[1],0);
  local_60 = DAT_14cb81938;
  local_58 = 2;
  local_54 = 0xffffffff;
  local_b8[0] = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_c8 = local_b8;
  FUN_140042bb4(uVar1,&local_60,*(undefined4 *)param_1[2],0);
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d99328 FUN_143d99328 body=144 status=ok
// SIG undefined FUN_143d99328(void)

void FUN_143d99328(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined1 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_18 = DAT_14cb81970;
  local_10 = 2;
  local_c = 0xffffffff;
  local_78 = local_70;
  local_70[0] = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140042bb4(*param_2,&local_18,*(undefined4 *)*param_1,0);
  if ((local_8 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d993ba FUN_143d993ba body=144 status=ok
// SIG undefined FUN_143d993ba(void)

void FUN_143d993ba(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined1 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_18 = DAT_14cb81980;
  local_10 = 2;
  local_c = 0xffffffff;
  local_78 = local_70;
  local_70[0] = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140042bb4(*param_2,&local_18,*(undefined4 *)*param_1,0);
  if ((local_8 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d9944c FUN_143d9944c body=496 status=ok
// SIG undefined FUN_143d9944c(void)

void FUN_143d9944c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_e8 [32];
  ulonglong *local_c8;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  float local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar1 = *param_2;
  local_60 = DAT_14cb81990;
  local_58._0_1_ = 2;
  local_54 = 0xffffffff;
  local_b8 = local_b8 & 0xffffffffffffff00;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_c8 = &local_b8;
  FUN_140042bb4(uVar1,&local_60,*(undefined4 *)(*(longlong *)(*(longlong *)*param_1 + 0xb30) + 0x90)
                ,0);
  local_60 = DAT_14cb819a0;
  local_58._0_1_ = 2;
  local_54 = 0xffffffff;
  local_b8 = local_b8 & 0xffffffffffffff00;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_c8 = &local_b8;
  FUN_140042bb4(uVar1,&local_60,*(undefined4 *)(*(longlong *)(*(longlong *)*param_1 + 0xb30) + 0x94)
                ,0);
  local_60 = DAT_14cb819b0;
  local_58 = (float)CONCAT31(local_58._1_3_,2);
  local_54 = 0xffffffff;
  local_b8 = local_b8 & 0xffffffffffffff00;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_c8 = &local_b8;
  FUN_140042bb4(uVar1,&local_60,*(undefined4 *)(*(longlong *)(*(longlong *)*param_1 + 0xb30) + 0x98)
                ,0);
  lVar2 = *(longlong *)param_1[1];
  local_58 = (float)*(double *)(lVar2 + 0x270);
  local_b8 = DAT_14cb819c0;
  local_b0 = CONCAT71(local_b0._1_7_,2);
  local_b0 = CONCAT44(0xffffffff,(undefined4)local_b0);
  local_60 = CONCAT44((float)*(double *)(lVar2 + 0x268),(float)*(double *)(lVar2 + 0x260));
  local_54 = 0x3f800000;
  FUN_14016d7a8(uVar1,&local_b8,&local_60);
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d9963e FUN_143d9963e body=947 status=ok
// SIG undefined FUN_143d9963e(void)

void FUN_143d9963e(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_118 [32];
  ulonglong *local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar1 = *param_2;
  lVar2 = *param_1;
  lVar3 = *(longlong *)param_1[1];
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb819d8) {
    FUN_144b3d300(&DAT_14cb819d8);
    if (DAT_14cb819d8 == -1) {
      FUN_1446f470e(&DAT_14cb819d0,L"Color_Highlights",1);
      _Init_thread_footer(&DAT_14cb819d8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb819e8) {
    FUN_144b3d300(&DAT_14cb819e8);
    if (DAT_14cb819e8 == -1) {
      FUN_1446f470e(&DAT_14cb819e0,L"Normal_Strength",1);
      _Init_thread_footer(&DAT_14cb819e8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb819f8) {
    FUN_144b3d300(&DAT_14cb819f8);
    if (DAT_14cb819f8 == -1) {
      FUN_1446f470e(&DAT_14cb819f0,L"Movement_Speed",1);
      _Init_thread_footer(&DAT_14cb819f8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb81a08) {
    FUN_144b3d300(&DAT_14cb81a08);
    if (DAT_14cb81a08 == -1) {
      FUN_1446f470e(&DAT_14cb81a00,L"Opacity",1);
      _Init_thread_footer(&DAT_14cb81a08);
    }
  }
  local_e8 = *(undefined4 *)(lVar2 + 0xb8);
  uStack_e4 = *(undefined4 *)(lVar2 + 0xbc);
  uStack_e0 = *(undefined4 *)(lVar2 + 0xc0);
  uStack_dc = *(undefined4 *)(lVar2 + 0xc4);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  local_d0 = (ulonglong)DAT_14c892c38;
  local_c8 = CONCAT71(local_c8._1_7_,2);
  local_c8 = CONCAT44(0xffffffff,(undefined4)local_c8);
  FUN_14016d7a8(uVar1,&local_d0,&local_e8);
  local_78 = *(undefined8 *)(lVar2 + 200);
  uStack_70 = *(undefined4 *)(lVar2 + 0xd0);
  uStack_6c = *(undefined4 *)(lVar2 + 0xd4);
  local_d0 = DAT_14cb819d0;
  local_c8 = CONCAT71(local_c8._1_7_,2);
  local_c8 = CONCAT44(0xffffffff,(undefined4)local_c8);
  FUN_14016d7a8(uVar1,&local_d0,&local_78);
  local_78 = DAT_14cb819e0;
  uStack_70._0_1_ = 2;
  uStack_6c = 0xffffffff;
  local_d0 = local_d0 & 0xffffffffffffff00;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_f8 = &local_d0;
  FUN_140042bb4(uVar1,&local_78,*(undefined4 *)(lVar2 + 0xd8),0);
  local_78 = DAT_14cb819f0;
  uStack_70._0_1_ = 2;
  uStack_6c = 0xffffffff;
  local_d0 = local_d0 & 0xffffffffffffff00;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_f8 = &local_d0;
  FUN_140042bb4(uVar1,&local_78,*(undefined4 *)(lVar2 + 0xdc),0);
  if (lVar3 == 0) {
    fVar4 = 1.0;
  }
  else {
    fVar4 = *(float *)(lVar3 + 0xa80);
  }
  fVar5 = 0.0;
  if (0.0 <= fVar4) {
    fVar5 = fVar4;
  }
  local_78 = DAT_14cb81a00;
  uStack_70 = CONCAT31(uStack_70._1_3_,2);
  uStack_6c = 0xffffffff;
  local_d0 = local_d0 & 0xffffffffffffff00;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_f8 = &local_d0;
  FUN_140042bb4(uVar1,&local_78,fVar5,0);
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d999f2 FUN_143d999f2 body=141 status=ok
// SIG undefined FUN_143d999f2(void)

void FUN_143d999f2(undefined4 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined1 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_18 = DAT_14cb81a10;
  local_10 = 2;
  local_c = 0xffffffff;
  local_78 = local_70;
  local_70[0] = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140042bb4(*param_2,&local_18,*param_1,0);
  if ((local_8 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d99a86 FUN_143d99a86 body=36 status=ok
// SIG undefined FUN_143d99a86(void)

void FUN_143d99a86(undefined8 *param_1)

{
  FUN_14113775c(*param_1,&DAT_14c846480,1,0,0);
  return;
}



// FUNCTION 143d99ad4 FUN_143d99ad4 body=29 status=ok
// SIG undefined FUN_143d99ad4(void)

undefined8 FUN_143d99ad4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d99af2 FUN_143d99af2 body=31 status=ok
// SIG undefined FUN_143d99af2(void)

undefined8 FUN_143d99af2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d99b11 FUN_143d99b11 body=2621 status=ok
// SIG undefined FUN_143d99b11(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d99b11(void)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  char *local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined **local_78;
  undefined1 *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = "AssetRegistry";
  local_90 = 0xd;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb81098 = (ulonglong)uVar3;
  DAT_14cb81b88 = DAT_14cb81000;
  DAT_14cb81100 = (undefined8 *)0x0;
  _DAT_14cb81108 = 0;
  puVar5 = (undefined8 *)FUN_140595974(0x1c00,0);
  lVar7 = 0x7f;
  puVar1 = puVar5;
  do {
    puVar6 = puVar1 + 7;
    *puVar1 = puVar6;
    lVar7 = lVar7 + -1;
    puVar1 = puVar6;
  } while (lVar7 != 0);
  *puVar6 = DAT_14cb81100;
  _DAT_14cb81108 = _DAT_14cb81108 + 0x80;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143d94a7c;
  local_98 = &DAT_14011fc1e;
  DAT_14cb81100 = puVar5;
  FUN_1460eff2a();
  atexit((_func_5014 *)&LAB_143d8fdc9);
  DAT_14cb811f0 = (undefined8 *)0x0;
  _DAT_14cb811f8 = 0;
  puVar5 = (undefined8 *)FUN_140595974(0xc00,0);
  lVar7 = 0x7f;
  puVar1 = puVar5;
  do {
    puVar6 = puVar1 + 3;
    *puVar1 = puVar6;
    lVar7 = lVar7 + -1;
    puVar1 = puVar6;
  } while (lVar7 != 0);
  _DAT_14cb811f8 = _DAT_14cb811f8 + 0x80;
  *puVar6 = DAT_14cb811f0;
  DAT_14cb811f0 = puVar5;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143d94a82;
  local_98 = &DAT_14011fc1e;
  FUN_1460f06c0(&local_98);
  atexit((_func_5014 *)&LAB_143d8fdf7);
  _DAT_14cb81288 = &LAB_143d8fdfc;
  _DAT_14cb81290 = 0x4498c70a;
  DAT_14cb81294 = 1;
  DAT_14cb81280 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb81280;
  atexit((_func_5014 *)&LAB_143d8fe01);
  _DAT_14cb812a0 = 0;
  uRam000000014cb812a8 = 0;
  _DAT_14cb812b0 = 0;
  DAT_14cb812b8 = 0;
  uRam000000014cb812c0 = 0;
  FUN_1446ddda2(&DAT_14cb812a0,"yield_channel",0);
  atexit((_func_5014 *)&LAB_143d8fe35);
  local_98 = "default";
  local_90 = 7;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  local_98 = "mission";
  local_90 = 7;
  local_8c = 0;
  _DAT_14cb812c8 = (ulonglong)uVar3;
  uVar4 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb812d0 = (ulonglong)uVar4;
  DAT_14cb81348 = (undefined8 *)0x0;
  _DAT_14cb81350 = 0;
  DAT_14cb812d8 = (ulonglong)uVar3;
  DAT_14cb812e0 = _DAT_14cb812d0;
  puVar5 = (undefined8 *)FUN_140595974(0x4200,0);
  lVar7 = 0x3f;
  puVar1 = puVar5;
  do {
    puVar6 = puVar1 + 0x21;
    *puVar1 = puVar6;
    lVar7 = lVar7 + -1;
    puVar1 = puVar6;
  } while (lVar7 != 0);
  _DAT_14cb81350 = _DAT_14cb81350 + 0x40;
  *puVar6 = DAT_14cb81348;
  DAT_14cb81348 = puVar5;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143d94a88;
  local_98 = &DAT_14011fc1e;
  FUN_1460f0e56();
  atexit((_func_5014 *)&LAB_143d8fe72);
  _DAT_14cb813e8 = &LAB_143d8fe77;
  _DAT_14cb813f0 = 0x46804800;
  DAT_14cb813f4 = 1;
  DAT_14cb813e0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb813e0;
  atexit((_func_5014 *)&LAB_143d8fe7c);
  FUN_140056680(&DAT_14cb81400,L"GoreStump_");
  atexit((_func_5014 *)&LAB_143d8feb0);
  FUN_140056680(&DAT_14cb81410,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_143d8fec1);
  FUN_140056680(&DAT_14cb81420,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_143d8fed2);
  FUN_140056680(&DAT_14cb81430,L"GoreFX_");
  atexit((_func_5014 *)&LAB_143d8fee3);
  FUN_1446f470e(&DAT_14cb81440,L"LIMB_GORED",1);
  DAT_14cb81448 = 0x4072c00000000000;
  DAT_14cb81450 = 0x4082c00000000000;
  FUN_1400b22c2(&local_98,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_98,&DAT_14cb81458);
  if (cVar2 == '\0') {
    _DAT_14cb81458 = 0;
    uRam000000014cb81460 = 0;
  }
  if (local_98 != (char *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&DAT_14cb81468,L"GoreLimb",1);
  local_98 = (char *)((ulonglong)local_98 & 0xffffffffffffff00);
  local_a8 = 0;
  FUN_140bd5914(&DAT_14cb81470,L"a.gbx.Gore.UseReducedVariety",&local_98,
                L"When true, Gore will use a reduced variety of assets");
  atexit(FUN_143d8fef4);
  _DAT_14cb81488 = 0x47efffffe0000000;
  _DAT_14cb81490 = 0x47efffffe0000000;
  _DAT_14cb81498 = 0x47efffffe0000000;
  _DAT_14cb814a0 = 0x47efffffe0000000;
  _DAT_14cb814a8 = 0x47efffffe0000000;
  _DAT_14cb814b0 = 0x47efffffe0000000;
  _DAT_14cb814b8 = 0x47efffffe0000000;
  _DAT_14cb814c0 = 0x47efffffe0000000;
  local_98 = "bone";
  local_90 = 4;
  local_8c = 0;
  FUN_14001a6c0(&local_98,1);
  FUN_145fa134c(&DAT_14cb814c8,L"TriggerGore",10);
  _DAT_14cb814e0 = &LAB_143d9004e;
  _DAT_14cb814e8 = 0x4307199a;
  DAT_14cb814ec = 1;
  DAT_14cb814d8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb814d8;
  atexit((_func_5014 *)&LAB_143d90053);
  _DAT_14cb81500 = &LAB_143d90087;
  _DAT_14cb81508 = 0x43070000;
  DAT_14cb8150c = 1;
  DAT_14cb814f8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb814f8;
  atexit((_func_5014 *)&LAB_143d9008c);
  DAT_14cb81528 = 0;
  atexit((_func_5014 *)&LAB_143d901ae);
  DAT_14cb81690 = 0;
  _DAT_14cb81698 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143d97f24;
  local_98 = &DAT_14011fc1e;
  FUN_1461846fa(&local_98);
  atexit((_func_5014 *)&LAB_143d90fcd);
  local_98 = "HazardState";
  local_90 = 0xb;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb81720 = (ulonglong)uVar3;
  local_98 = "HazardStateDef";
  local_90 = 0xe;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb81728 = (ulonglong)uVar3;
  DAT_14cb817b8 = 0;
  _DAT_14cb817c0 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143d98848;
  local_98 = &DAT_14011fc1e;
  FUN_146184df6(&local_98);
  atexit((_func_5014 *)&LAB_143d915f1);
  _DAT_14cb81b98 = 0;
  LOCK();
  DAT_14cb81b90 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143d91706);
  local_98 = "HazardInteraction";
  local_90 = 0x11;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb81860 = (ulonglong)uVar3;
  local_98 = "HazardOverlap";
  local_90 = 0xd;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb81868 = (ulonglong)uVar3;
  _DAT_14cb81878 = &LAB_143d92bcf;
  _DAT_14cb81880 = 0x4425399a;
  DAT_14cb81884 = 1;
  DAT_14cb81870 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb81870;
  atexit((_func_5014 *)&LAB_143d92bd4);
  _DAT_14cb81898 = &LAB_143d92c08;
  _DAT_14cb818a0 = 0x44252ccd;
  DAT_14cb818a4 = 1;
  DAT_14cb81890 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb81890;
  atexit((_func_5014 *)&LAB_143d92c0d);
  _DAT_14cb818b8 = &LAB_143d92c41;
  _DAT_14cb818c0 = 0x44253333;
  DAT_14cb818c4 = 1;
  DAT_14cb818b0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb818b0;
  atexit((_func_5014 *)&LAB_143d92c46);
  local_a8 = 0;
  FUN_1415c789c(&DAT_14cb818d0,L"gbx.Puddle.MaxSpawnRadius",&DAT_14c763970,
                L"Maximum radius for spawned puddles.  Doesn\'t apply to puddles placed in a level.\n"
               );
  atexit(FUN_143d92c7a);
  local_98 = "PuddleHazard";
  local_90 = 0xc;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb818e0 = (ulonglong)uVar3;
  local_98 = "NoCollision";
  local_90 = 0xb;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb818e8 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14cb818f0,L"VisualPuddle",1);
  local_98 = "Collision";
  local_90 = 9;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb818f8 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14cb81900,L"OverlapCollision",1);
  _DAT_14cb81910 = 0;
  LOCK();
  DAT_14cb81908 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143d92cbf);
  DAT_14cb81a80 = 0;
  _DAT_14cb81a88 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143d99a80;
  local_98 = &DAT_14011fc1e;
  FUN_1461854f2(&local_98);
  atexit((_func_5014 *)&LAB_143d93183);
  local_a8 = 0;
  FUN_141471170(&DAT_14cb81b10,L"gbx.Puddle.DefaultCollisionComplexity",&DAT_14c763978,
                L"Adjusts the density of the collision mesh.\n");
  atexit(FUN_143d93188);
  local_a8 = 0;
  FUN_1415c789c(&DAT_14cb81b20,L"gbx.Puddle.CollisionComplexityScale",&DAT_14c76397c,
                L"Limits density of the collision mesh.\n");
  atexit(FUN_143d931cd);
  local_a8 = 0;
  FUN_141471170(&DAT_14cb81b30,L"gbx.Puddle.CollisionRings",&DAT_14c763980,
                L"Adjusts the number of collision rings.\n");
  atexit(FUN_143d93212);
  local_a8 = 0;
  FUN_1415c789c(&DAT_14cb81b40,L"gbx.Puddle.CollisionRingScale",&DAT_14c763984,
                L"Limits the number of collision rings.\n");
  atexit(FUN_143d93257);
  FUN_1446f470e(&DAT_14cb81b50,L"ai_HeldExplosive_Requesting",1);
  FUN_1446f470e(&DAT_14cb81b58,L"ai_HeldMelee_Requesting",1);
  FUN_1446f470e(&DAT_14cb81b60,L"ai_HeldShield_Requesting",1);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d9a561 FUN_143d9a561 body=49 status=ok
// SIG undefined FUN_143d9a561(void)

void FUN_143d9a561(void)

{
  FUN_14589f5c0(DAT_14cb81ca0,DAT_14cb81ca8);
  if (DAT_14cb81ca0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}


