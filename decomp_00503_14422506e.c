// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14422506e FUN_14422506e body=110 status=ok
// SIG undefined FUN_14422506e(void)

void FUN_14422506e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99ac60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99c270;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1442250dc FUN_1442250dc body=148 status=ok
// SIG undefined FUN_1442250dc(void)

void FUN_1442250dc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b99ac60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99c270;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144225160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144225170 FUN_144225170 body=66 status=ok
// SIG undefined FUN_144225170(void)

void FUN_144225170(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1442251fa(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442251b4 FUN_1442251b4 body=68 status=ok
// SIG undefined FUN_1442251b4(void)

undefined8 FUN_1442251b4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1442251fa(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442251fa FUN_1442251fa body=617 status=ok
// SIG undefined FUN_1442251fa(void)

bool FUN_1442251fa(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar2 = *param_2;
  if (((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) ||
     (plVar3 = (longlong *)param_1[1], plVar3 == (longlong *)0x0)) {
    return false;
  }
  iVar4 = (int)plVar3[1];
  do {
    if (iVar4 == 0) {
      return false;
    }
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar10 = iVar4 == iVar7;
    if (bVar10) {
      *(int *)(plVar3 + 1) = iVar4 + 1;
      iVar7 = iVar4;
    }
    iVar4 = iVar7;
    UNLOCK();
  } while (!bVar10);
  lVar6 = *param_1;
  if (lVar6 != 0) {
    iVar4 = *(int *)(lVar6 + 0x16c);
    if ((((iVar4 == 0) || (uVar5 = *(uint *)(lVar6 + 0x168), (int)uVar5 < 0)) ||
        ((DAT_14c9647dc <= (int)uVar5 ||
         ((lVar8 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar8 == 0 ||
          (*(int *)(lVar8 + 0x10) != iVar4)))))) || ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)) {
      if (((((*(int *)(lVar6 + 0x74) != 0) && (uVar5 = *(uint *)(lVar6 + 0x70), -1 < (int)uVar5)) &&
           ((int)uVar5 < DAT_14c9647dc)) &&
          ((plVar9 = (longlong *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
           plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(lVar6 + 0x74))))) &&
         (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0)))) {
        lVar8 = FUN_14422078c();
        if (lVar8 == 0) {
          *(undefined4 *)(lVar6 + 0x168) = 0;
          iVar4 = 0;
        }
        else {
          uVar5 = *(uint *)(lVar8 + 0xc);
          *(uint *)(lVar6 + 0x168) = uVar5;
          if ((int)uVar5 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          iVar4 = *(int *)(lVar8 + 0x10);
          if (*(int *)(lVar8 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar10 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar10) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar4 = *(int *)(lVar8 + 0x10);
            bVar10 = iVar4 == 0;
            if (bVar10) {
              *(int *)(lVar8 + 0x10) = iVar7;
              iVar4 = 0;
            }
            UNLOCK();
            if (bVar10) {
              iVar4 = iVar7;
            }
          }
        }
        *(int *)(lVar6 + 0x16c) = iVar4;
      }
      if (iVar4 == 0) goto LAB_144225391;
      uVar5 = *(uint *)(lVar6 + 0x168);
    }
    bVar10 = false;
    if (((int)uVar5 < 0) || (DAT_14c9647dc <= (int)uVar5)) goto LAB_144225393;
    plVar9 = (longlong *)
             ((ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
    if ((plVar9 != (longlong *)0x0) &&
       (((int)plVar9[2] == iVar4 && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar6 = *plVar9;
      }
      else {
        lVar6 = 0;
      }
      if ((longlong)*(int *)(lVar6 + 0x368) != 0) {
        lVar8 = *(longlong *)(lVar6 + 0x360);
        lVar6 = (longlong)*(int *)(lVar6 + 0x368) << 5;
        do {
          if (*(longlong *)(lVar8 + 0x10) == lVar2) goto LAB_1442253f8;
          lVar8 = lVar8 + 0x20;
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0);
        lVar8 = 0;
LAB_1442253f8:
        bVar10 = lVar8 != 0;
        goto LAB_144225393;
      }
    }
  }
LAB_144225391:
  bVar10 = false;
LAB_144225393:
  LOCK();
  plVar9 = plVar3 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return bVar10;
}



// FUNCTION 144225464 FUN_144225464 body=9 status=ok
// SIG undefined FUN_144225464(void)

void FUN_144225464(longlong param_1)

{
  FUN_145a38fa8(param_1 + 0x10);
  return;
}



// FUNCTION 14422546e FUN_14422546e body=29 status=ok
// SIG undefined FUN_14422546e(void)

undefined8 FUN_14422546e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14422548c FUN_14422548c body=76 status=ok
// SIG undefined FUN_14422548c(void)

void FUN_14422548c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b63f340;
  plVar3 = *(longlong **)(param_1 + 0x188);
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
  FUN_145a38fa8(param_1 + 0x10);
  return;
}



// FUNCTION 1442254d8 FUN_1442254d8 body=29 status=ok
// SIG undefined FUN_1442254d8(void)

undefined8 FUN_1442254d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442254f6 FUN_1442254f6 body=76 status=ok
// SIG undefined FUN_1442254f6(void)

void FUN_1442254f6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b63f3e0;
  plVar3 = *(longlong **)(param_1 + 0x188);
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
  FUN_145a38fa8(param_1 + 0x10);
  return;
}



// FUNCTION 144225542 FUN_144225542 body=29 status=ok
// SIG undefined FUN_144225542(void)

undefined8 FUN_144225542(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144225560 FUN_144225560 body=254 status=ok
// SIG undefined FUN_144225560(void)

void FUN_144225560(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar3 - uVar1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(uVar1 * 3) < iVar3 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = uVar4 * 0x20;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x400) {
            uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 * 2]];
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
      uVar4 = uVar2 >> 5 & 0xffffffff;
    }
    if ((int)uVar4 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar4;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x20,8);
    }
  }
  return;
}



// FUNCTION 1442256a6 FUN_1442256a6 body=29 status=ok
// SIG undefined FUN_1442256a6(void)

undefined8 FUN_1442256a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14422570c FUN_14422570c body=29 status=ok
// SIG undefined FUN_14422570c(void)

undefined8 FUN_14422570c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14422572a FUN_14422572a body=68 status=ok
// SIG undefined FUN_14422572a(void)

undefined8 * FUN_14422572a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99c740;
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



// FUNCTION 14422578a FUN_14422578a body=68 status=ok
// SIG undefined FUN_14422578a(void)

undefined8 * FUN_14422578a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99c890;
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



// FUNCTION 1442257ce FUN_1442257ce body=129 status=ok
// SIG undefined FUN_1442257ce(void)

void FUN_1442257ce(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b99cfd0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_14b99d010;
  plVar3 = *(longlong **)(param_1 + 0xc0);
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
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b99d020;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_14b99d060;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1 + 0x10);
  return;
}



// FUNCTION 144225850 FUN_144225850 body=29 status=ok
// SIG undefined FUN_144225850(void)

undefined8 FUN_144225850(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14422586e FUN_14422586e body=143 status=ok
// SIG undefined FUN_14422586e(void)

undefined8 * FUN_14422586e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b99cfd0;
  param_1[4] = &PTR_FUN_14b99d010;
  plVar3 = (longlong *)param_1[0x16];
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
  *param_1 = &PTR_FUN_14b99d020;
  param_1[4] = &PTR_FUN_14b99d060;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442258fe FUN_1442258fe body=23 status=ok
// SIG undefined FUN_1442258fe(void)

undefined1 FUN_1442258fe(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 144225916 FUN_144225916 body=341 status=ok
// SIG undefined FUN_144225916(void)

undefined8 FUN_144225916(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint *_Dst;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0x98);
  local_50 = *param_2;
  local_48 = param_2[1];
  FUN_140805e68(plVar1,&local_50);
  iVar4 = *(int *)(param_1 + 0xa0);
  if (0 < iVar4) {
    lVar5 = 0;
    bVar6 = false;
    do {
      while( true ) {
        lVar3 = *plVar1;
        _Dst = (uint *)(lVar3 + lVar5 * 0x10);
        if (((((*(longlong *)(lVar3 + 8 + lVar5 * 0x10) != 0) && (_Dst[1] != 0)) &&
             (uVar2 = *_Dst, -1 < (int)uVar2)) &&
            (((int)uVar2 < DAT_14c9647dc &&
             (plVar8 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar8 != (longlong *)0x0)))) &&
           ((*(uint *)(plVar8 + 2) == _Dst[1] &&
            (((*(uint *)(plVar8 + 1) >> 0x1c & 1) == 0 && (*plVar8 != 0)))))) break;
        iVar7 = iVar4 + ~(uint)lVar5;
        if (iVar7 != 0) {
          if (0 < iVar7) {
            iVar7 = 1;
          }
          memmove(_Dst,(void *)(lVar3 + (longlong)(iVar4 - iVar7) * 0x10),(longlong)iVar7 << 4);
          iVar4 = *(int *)(param_1 + 0xa0);
        }
        iVar4 = iVar4 + -1;
        *(int *)(param_1 + 0xa0) = iVar4;
        bVar6 = true;
        if (iVar4 <= lVar5) goto LAB_144225a62;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
    if (bVar6) {
LAB_144225a62:
      FUN_1400bbcfc(plVar1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 144225a6c FUN_144225a6c body=487 status=ok
// SIG undefined FUN_144225a6c(void)

void FUN_144225a6c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  code *local_a8;
  undefined4 local_a0;
  char local_98 [16];
  longlong *local_88;
  undefined4 local_70 [2];
  char local_68;
  longlong *local_58;
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_68 = '\0';
  local_40[0] = 0;
  uVar2 = FUN_140f0e194(param_2,&DAT_14cbd2d40);
  local_98[0] = '\0';
  local_70[0] = 0;
  pcVar3 = (code *)FUN_14124a572(param_2,&DAT_14cbd2d38,local_98);
  if (pcVar3 != (code *)0x0) {
    if (DAT_14cba8288 == 0) {
      local_c0 = &local_a8;
      local_a8 = FUN_141864c34;
      local_b0 = FUN_14081d0ea;
      local_b8 = &LAB_1464cee30;
      local_c8 = &LAB_148bfac22;
      local_d0 = &LAB_140f21842;
      local_d8 = &DAT_149e063b2;
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 0x10;
      local_f8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(pcVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pcVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) goto LAB_144225b10;
  }
  pcVar3 = (code *)0x0;
LAB_144225b10:
  local_a8 = pcVar3;
  local_a0 = uVar2;
  FUN_1447cd2ec(param_1 + 0x98);
  FUN_1448173f8(local_70);
  if ((local_98[0] == '\x03') && (local_88 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_88 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  FUN_1448173f8(local_40);
  if ((local_68 == '\x03') && (local_58 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_58 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144225c54 FUN_144225c54 body=1176 status=ok
// SIG undefined FUN_144225c54(void)

undefined8 * FUN_144225c54(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 != 0) {
    if (DAT_14cba8288 == 0) {
      local_60 = &local_48;
      local_48 = FUN_141864c34;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1464cee30;
      local_68 = &LAB_148bfac22;
      local_70 = &LAB_140f21842;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
       (lVar6 = FUN_14421c5ac(param_3), lVar6 != 0)) {
      local_48 = (code *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,4,0x10);
      local_40 = 4;
      plVar8 = *(longlong **)(param_1 + 0x48);
      if (plVar8 == (longlong *)0x0) {
LAB_144225e08:
        *(undefined ***)local_48 = &PTR_LAB_14b99d0e0;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar11 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar11 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar11;
        *(longlong *)(local_48 + 0x10) = lVar7;
        *(undefined ***)local_48 = &PTR_FUN_14b99d070;
        *(longlong *)(local_48 + 0x18) = 0;
        *(longlong *)(local_48 + 0x20) = 0;
        *(code **)(local_48 + 0x28) = FUN_144226374;
        *(undefined4 *)(local_48 + 0x30) = 0;
      }
      else {
        iVar4 = (int)plVar8[1];
        do {
          if (iVar4 == 0) goto LAB_144225e08;
          LOCK();
          iVar5 = (int)plVar8[1];
          bVar12 = iVar4 == iVar5;
          if (bVar12) {
            *(int *)(plVar8 + 1) = iVar4 + 1;
            iVar5 = iVar4;
          }
          iVar4 = iVar5;
          UNLOCK();
        } while (!bVar12);
        lVar11 = *(longlong *)(param_1 + 0x40);
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        *(undefined ***)local_48 = &PTR_LAB_14b99d0e0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        *(longlong *)(local_48 + 0x10) = lVar10;
        *(undefined ***)local_48 = &PTR_FUN_14b99d070;
        *(longlong *)(local_48 + 0x18) = lVar11;
        *(longlong **)(local_48 + 0x20) = plVar8;
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        *(code **)(local_48 + 0x28) = FUN_144226374;
        *(undefined4 *)(local_48 + 0x30) = 0;
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      *param_2 = 0;
      if ((local_48 == (code *)0x0 || local_40 == 0) ||
         (cVar3 = (**(code **)(*(longlong *)local_48 + 0x30))(), cVar3 == '\0')) {
        if (local_40 != 0) {
          if (local_48 == (code *)0x0) goto LAB_144225cb3;
          (*(code *)**(undefined8 **)local_48)(local_48,0);
          FUN_1446efa72(&local_48,0,0,0x10);
          goto LAB_144225fee;
        }
      }
      else {
        plVar8 = (longlong *)(lVar6 + 0x250);
        if (*(int *)(lVar6 + 0x264) < 1) {
          iVar4 = *(int *)(lVar6 + 600);
          iVar5 = *(int *)(lVar6 + 0x260) + -1;
          *(int *)(lVar6 + 0x260) = iVar5;
          if (iVar5 <= iVar4) {
            iVar5 = iVar4;
            if (0 < iVar4) {
              iVar9 = 0;
              do {
                if (((*(int *)(*plVar8 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                    (plVar2 = *(longlong **)(*plVar8 + (longlong)iVar9 * 0x10),
                    plVar2 == (longlong *)0x0)) ||
                   (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
                  FUN_14005b288(plVar8,iVar9);
                  FUN_14005b248(plVar8);
                }
                else {
                  iVar9 = iVar9 + 1;
                }
                iVar5 = *(int *)(lVar6 + 600);
              } while (iVar9 < iVar5);
            }
            iVar9 = 2;
            if (2 < iVar5 * 2) {
              iVar9 = iVar5 * 2;
            }
            *(int *)(lVar6 + 0x260) = iVar9;
            if ((iVar9 < iVar4) && (*(int *)(lVar6 + 0x25c) != iVar5)) {
              FUN_14045812c(plVar8);
            }
          }
        }
        if (local_48 == (code *)0x0 || local_40 == 0) {
          local_38 = 0;
        }
        else {
          (**(code **)(*(longlong *)local_48 + 0x38))(local_48,&local_38);
        }
        *param_2 = local_38;
        iVar4 = *(int *)(lVar6 + 600);
        *(uint *)(lVar6 + 600) = iVar4 + 1U;
        if (*(uint *)(lVar6 + 0x25c) < iVar4 + 1U) {
          FUN_1447a71f6(plVar8,iVar4);
        }
        lVar6 = *plVar8;
        lVar11 = (longlong)iVar4 * 0x10;
        *(undefined8 *)(lVar6 + lVar11) = 0;
        *(undefined4 *)(lVar6 + 8 + lVar11) = 0;
        *(code **)(lVar6 + lVar11) = local_48;
        local_48 = (code *)0x0;
        *(int *)(lVar6 + 8 + lVar11) = local_40;
LAB_144225fee:
        local_40 = 0;
      }
      if (local_48 != (code *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_144225cb3;
    }
  }
  *param_2 = 0;
LAB_144225cb3:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1442260ee FUN_1442260ee body=323 status=ok
// SIG undefined FUN_1442260ee(void)

undefined8 FUN_1442260ee(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      lVar1 = FUN_14421c5ac(param_2);
      if ((lVar1 != 0) && (*param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144226246 FUN_144226246 body=144 status=ok
// SIG undefined FUN_144226246(void)

undefined8 * FUN_144226246(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  param_1[-4] = &PTR_FUN_14b99cfd0;
  *param_1 = &PTR_FUN_14b99d010;
  plVar4 = (longlong *)param_1[0x12];
  if (plVar4 != (longlong *)0x0) {
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  puVar3 = param_1 + -4;
  param_1[-4] = &PTR_FUN_14b99d020;
  *param_1 = &PTR_FUN_14b99d060;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(puVar3);
  if (param_2 != 0) {
    FUN_1400020a8(puVar3);
  }
  return puVar3;
}



// FUNCTION 1442262d6 FUN_1442262d6 body=79 status=ok
// SIG undefined FUN_1442262d6(void)

undefined8 * FUN_1442262d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b99d020;
  param_1[4] = &PTR_FUN_14b99d060;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144226326 FUN_144226326 body=77 status=ok
// SIG undefined FUN_144226326(void)

undefined8 * FUN_144226326(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -4;
  param_1[-4] = &PTR_FUN_14b99d020;
  *param_1 = &PTR_FUN_14b99d060;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(puVar1);
  if (param_2 != 0) {
    FUN_1400020a8(puVar1);
  }
  return puVar1;
}



// FUNCTION 144226374 FUN_144226374 body=109 status=ok
// SIG undefined FUN_144226374(void)

void FUN_144226374(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  code *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined8 *local_20;
  undefined4 *local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = &local_4c;
  local_20 = &local_58;
  local_38 = 0;
  local_28 = &PTR_LAB_14b99d150;
  local_48 = FUN_144226758;
  local_58 = param_2;
  local_4c = param_3;
  FUN_140f73374();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442263e2 FUN_1442263e2 body=64 status=ok
// SIG undefined FUN_1442263e2(void)

undefined8 * FUN_1442263e2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99d070;
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



// FUNCTION 144226426 FUN_144226426 body=81 status=ok
// SIG undefined FUN_144226426(void)

undefined8 FUN_144226426(longlong param_1)

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



// FUNCTION 14422647e FUN_14422647e body=89 status=ok
// SIG undefined FUN_14422647e(void)

bool FUN_14422647e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1442264c9;
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
LAB_1442264c9:
  return lVar6 == param_2;
}



// FUNCTION 144226500 FUN_144226500 body=118 status=ok
// SIG undefined FUN_144226500(void)

void FUN_144226500(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99d0e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99d070;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 144226576 FUN_144226576 body=118 status=ok
// SIG undefined FUN_144226576(void)

void FUN_144226576(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99d0e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99d070;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1442265ec FUN_1442265ec body=156 status=ok
// SIG undefined FUN_1442265ec(void)

void FUN_1442265ec(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b99d0e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99d070;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144226678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144226688 FUN_144226688 body=104 status=ok
// SIG undefined FUN_144226688(void)

void FUN_144226688(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001442266d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001442266e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1442266f0 FUN_1442266f0 body=101 status=ok
// SIG undefined FUN_1442266f0(void)

ulonglong FUN_1442266f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14422674a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14422674a;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 144226758 FUN_144226758 body=509 status=ok
// SIG undefined FUN_144226758(void)

void FUN_144226758(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  uint local_58;
  int iStack_54;
  ushort local_40;
  byte local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0;
  local_40 = 8;
  iStack_54 = 0;
  if (*(longlong *)*param_1 == 0) {
    local_58 = 0;
    iVar2 = 0;
  }
  else {
    local_58 = *(uint *)(*(longlong *)*param_1 + 0xc);
    if ((int)local_58 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_58 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_58 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar2 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar4;
      }
    }
  }
  local_38 = 7;
  local_30 = 7;
  if ((DAT_14c9a8cf4 & 0x20) != 0) {
    local_30 = 0;
  }
  iStack_54 = iVar2;
  FUN_141109e26(param_2,&DAT_14cbd2d38,&local_60);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_40 < 0x19) {
      puVar3 = &local_58;
    }
    else {
      puVar3 = (uint *)CONCAT44(iStack_54,local_58);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(CONCAT44(iStack_54,local_58));
  }
  local_58 = *(uint *)param_1[1];
  local_60 = 0;
  local_40 = 4;
  local_38 = 2;
  local_30 = (byte)~DAT_14c9a8754 >> 4 & 2;
  FUN_141109e26(param_2,&DAT_14cbd2d40,&local_60);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_40 < 0x19) {
      puVar3 = &local_58;
    }
    else {
      puVar3 = (uint *)CONCAT44(iStack_54,local_58);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(CONCAT44(iStack_54,local_58));
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144226980 FUN_144226980 body=29 status=ok
// SIG undefined FUN_144226980(void)

undefined8 FUN_144226980(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442269e6 FUN_1442269e6 body=29 status=ok
// SIG undefined FUN_1442269e6(void)

undefined8 FUN_1442269e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144226a78 FUN_144226a78 body=148 status=ok
// SIG undefined FUN_144226a78(void)

longlong * FUN_144226a78(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + -0x58);
  if (plVar3 == (longlong *)0x0) {
LAB_144226ad2:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_144226ad2;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + -0x60);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar7 = lVar4 + 0xa8;
    if (lVar4 == 0) {
      lVar7 = 0;
    }
    *param_2 = lVar7;
    param_2[1] = (longlong)plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 144226b0c FUN_144226b0c body=171 status=ok
// SIG undefined FUN_144226b0c(void)

undefined8 FUN_144226b0c(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if (*(int *)(param_2 + 1) < 1) goto LAB_144226b78;
  uVar1 = ((uint *)*param_2)[1];
  if (uVar1 == 0) {
LAB_144226bb3:
    uVar5 = 0;
  }
  else {
    uVar2 = *(uint *)*param_2;
    uVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar6 + 2) != uVar1 || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
      goto LAB_144226bb3;
      uVar5 = *puVar6;
    }
  }
  cVar3 = FUN_144221f54(param_2,uVar5);
  if (cVar3 != '\0') {
    *(undefined4 *)(param_3 + 4) = 0;
    FUN_148df7c7c(param_1,*param_2);
    return 1;
  }
LAB_144226b78:
  lVar4 = FUN_1408a35a2(param_1 + 0x30);
  if (lVar4 != 0) {
    FUN_140c82872(lVar4,5);
  }
  return 0;
}



// FUNCTION 144226bb8 FUN_144226bb8 body=166 status=ok
// SIG undefined FUN_144226bb8(void)

undefined8 FUN_144226bb8(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x30);
  iVar3 = (int)param_2[1];
  if ((int)uVar6 < iVar3) {
    do {
      if (-1 < (int)uVar6) {
        iVar3 = *(int *)(*param_2 + 4 + (ulonglong)uVar6 * 0xc);
        if ((iVar3 == 0) || (uVar1 = *(uint *)(*param_2 + (ulonglong)uVar6 * 0xc), (int)uVar1 < 0))
        {
LAB_144226c42:
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          if ((int)uVar1 < DAT_14c9647dc) {
            puVar5 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((puVar5 == (undefined8 *)0x0) || (*(int *)(puVar5 + 2) != iVar3)) ||
               ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) goto LAB_144226c42;
            uVar4 = *puVar5;
          }
        }
        cVar2 = FUN_144221f54(param_2,uVar4);
        if (cVar2 != '\0') {
          *(uint *)(param_1 + 0x30) = uVar6;
          *(uint *)(param_3 + 4) = uVar6;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
          return 1;
        }
        iVar3 = (int)param_2[1];
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar3);
  }
  return 0;
}



// FUNCTION 144226c5e FUN_144226c5e body=122 status=ok
// SIG undefined FUN_144226c5e(void)

void FUN_144226c5e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_144226cad;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_144226cad:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144226cc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 144226cd8 FUN_144226cd8 body=132 status=ok
// SIG undefined FUN_144226cd8(void)

undefined8 * FUN_144226cd8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_144226d29;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_144226d29:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144226d5c FUN_144226d5c body=169 status=ok
// SIG undefined FUN_144226d5c(void)

void FUN_144226d5c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b99ee50;
  plVar3 = (longlong *)param_1[7];
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
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_144226dda;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_144226dda:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144226df2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 144226e06 FUN_144226e06 body=122 status=ok
// SIG undefined FUN_144226e06(void)

void FUN_144226e06(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_144226e55;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_144226e55:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144226e6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 144226e80 FUN_144226e80 body=132 status=ok
// SIG undefined FUN_144226e80(void)

undefined8 * FUN_144226e80(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_144226ed1;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_144226ed1:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144226f04 FUN_144226f04 body=122 status=ok
// SIG undefined FUN_144226f04(void)

void FUN_144226f04(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_144226f53;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_144226f53:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144226f6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 144226f7e FUN_144226f7e body=132 status=ok
// SIG undefined FUN_144226f7e(void)

undefined8 * FUN_144226f7e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_144226fcf;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_144226fcf:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14422701e FUN_14422701e body=169 status=ok
// SIG undefined FUN_14422701e(void)

void FUN_14422701e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b99f0f0;
  plVar3 = (longlong *)param_1[7];
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
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_14422709c;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_14422709c:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001442270b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1442270c8 FUN_1442270c8 body=91 status=ok
// SIG undefined FUN_1442270c8(void)

bool FUN_1442270c8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1442270f8;
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
LAB_1442270f8:
  return lVar6 == param_2;
}



// FUNCTION 14422715c FUN_14422715c body=169 status=ok
// SIG undefined FUN_14422715c(void)

void FUN_14422715c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b99f370;
  plVar3 = (longlong *)param_1[7];
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
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1442271da;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1442271da:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001442271f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 144227206 FUN_144227206 body=91 status=ok
// SIG undefined FUN_144227206(void)

bool FUN_144227206(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_144227236;
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
LAB_144227236:
  return lVar6 == param_2;
}



// FUNCTION 14422727e FUN_14422727e body=122 status=ok
// SIG undefined FUN_14422727e(void)

void FUN_14422727e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1442272cd;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1442272cd:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001442272e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1442272f8 FUN_1442272f8 body=132 status=ok
// SIG undefined FUN_1442272f8(void)

undefined8 * FUN_1442272f8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_144227349;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_144227349:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14422737c FUN_14422737c body=64 status=ok
// SIG undefined FUN_14422737c(void)

undefined8 * FUN_14422737c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99f880;
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



// FUNCTION 1442273c0 FUN_1442273c0 body=81 status=ok
// SIG undefined FUN_1442273c0(void)

undefined8 FUN_1442273c0(longlong param_1)

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



// FUNCTION 144227418 FUN_144227418 body=89 status=ok
// SIG undefined FUN_144227418(void)

bool FUN_144227418(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_144227463;
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
LAB_144227463:
  return lVar6 == param_2;
}



// FUNCTION 14422748e FUN_14422748e body=118 status=ok
// SIG undefined FUN_14422748e(void)

void FUN_14422748e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9667e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99f880;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 144227504 FUN_144227504 body=118 status=ok
// SIG undefined FUN_144227504(void)

void FUN_144227504(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9667e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99f880;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14422757a FUN_14422757a body=156 status=ok
// SIG undefined FUN_14422757a(void)

void FUN_14422757a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b9667e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99f880;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144227606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144227616 FUN_144227616 body=104 status=ok
// SIG undefined FUN_144227616(void)

void FUN_144227616(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000144227663. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144227674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14422767e FUN_14422767e body=101 status=ok
// SIG undefined FUN_14422767e(void)

ulonglong FUN_14422767e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1442276d8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1442276d8;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 144227700 FUN_144227700 body=122 status=ok
// SIG undefined FUN_144227700(void)

void FUN_144227700(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_14422774f;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14422774f:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144227767. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14422777a FUN_14422777a body=132 status=ok
// SIG undefined FUN_14422777a(void)

undefined8 * FUN_14422777a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1442277cb;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1442277cb:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14422781a FUN_14422781a body=122 status=ok
// SIG undefined FUN_14422781a(void)

void FUN_14422781a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_144227869;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_144227869:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144227881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 144227894 FUN_144227894 body=132 status=ok
// SIG undefined FUN_144227894(void)

undefined8 * FUN_144227894(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1442278e5;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1442278e5:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144227918 FUN_144227918 body=91 status=ok
// SIG undefined FUN_144227918(void)

bool FUN_144227918(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_144227948;
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
LAB_144227948:
  return lVar6 == param_2;
}



// FUNCTION 144227990 FUN_144227990 body=122 status=ok
// SIG undefined FUN_144227990(void)

void FUN_144227990(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1442279df;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1442279df:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001442279f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 144227a0a FUN_144227a0a body=132 status=ok
// SIG undefined FUN_144227a0a(void)

undefined8 * FUN_144227a0a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_144227a5b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_144227a5b:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144227aa0 FUN_144227aa0 body=68 status=ok
// SIG undefined FUN_144227aa0(void)

undefined8 * FUN_144227aa0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9a0980;
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



// FUNCTION 144227b00 FUN_144227b00 body=5918 status=ok
// SIG undefined FUN_144227b00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144227b00(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_c8 [32];
  char *local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = "AssetRegistry";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2a58 = (ulonglong)uVar2;
  _DAT_14cbd2a60 = 0x47efffffe0000000;
  _DAT_14cbd2a68 = 0x47efffffe0000000;
  _DAT_14cbd2a70 = 0x47efffffe0000000;
  _DAT_14cbd2a78 = 0x47efffffe0000000;
  _DAT_14cbd2a80 = 0x47efffffe0000000;
  _DAT_14cbd2a88 = 0x47efffffe0000000;
  _DAT_14cbd2a90 = 0x47efffffe0000000;
  _DAT_14cbd2a98 = 0x47efffffe0000000;
  local_a8 = "bone";
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "Use";
  local_a0 = 3;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2aa0 = (ulonglong)uVar2;
  local_a8 = "Sight";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2aa8 = (ulonglong)uVar2;
  local_a8 = "TargetLock";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2ab0 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14cbd2ab8);
  if (cVar1 == '\0') {
    _DAT_14cbd2ab8 = 0;
    uRam000000014cbd2ac0 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbd2acc = 0;
  FUN_14052b5e0(&DAT_14cbd2ac8,"PlayerAwareness",0);
  _DAT_14cbd2ad8 = "PlayerAwareness";
  local_a8 = "basic";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2ae0 = (ulonglong)uVar2;
  local_a8 = "challenge";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2ae8 = (ulonglong)uVar2;
  local_a8 = "online";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2af0 = (ulonglong)uVar2;
  local_a8 = "social";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2af8 = (ulonglong)uVar2;
  local_a8 = "alert";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2b00 = (ulonglong)uVar2;
  local_a8 = "photo_mode";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2b08 = (ulonglong)uVar2;
  local_a8 = "generic_task";
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2b10 = (ulonglong)uVar2;
  local_a8 = "mission";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2b18 = (ulonglong)uVar2;
  local_a8 = "mail";
  local_a0 = 4;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2b20 = (ulonglong)uVar2;
  local_a8 = "respawn";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2b28 = (ulonglong)uVar2;
  local_a8 = "tutorial";
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2b30 = (ulonglong)uVar2;
  local_a8 = "special_notification";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2b38 = (ulonglong)uVar2;
  local_a8 = "generic_notification";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2b40 = (ulonglong)uVar2;
  local_a8 = "vault_card";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2b48 = (ulonglong)uVar2;
  local_a8 = "ONLINE_MESSAGE";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2b50 = (ulonglong)uVar2;
  local_a8 = "INGAME_MESSAGE";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2b58 = (ulonglong)uVar2;
  local_a8 = "NOTIFICATION_MESSAGE";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2b60 = (ulonglong)uVar2;
  local_a8 = "MENU_TUTORIAL_MESSAGE";
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2b68 = (ulonglong)uVar2;
  local_a8 = "collectible";
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2b70 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbd2b78,L"GoreStump_");
  atexit((_func_5014 *)&LAB_14421fbcc);
  FUN_140056680(&DAT_14cbd2b88,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_14421fbdd);
  FUN_140056680(&DAT_14cbd2b98,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_14421fbee);
  FUN_140056680(&DAT_14cbd2ba8,L"GoreFX_");
  atexit((_func_5014 *)&LAB_14421fbff);
  FUN_1446f470e(&DAT_14cbd2bb8,L"LIMB_GORED",1);
  _DAT_14cbd2bc0 = 0x4072c00000000000;
  _DAT_14cbd2bc8 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbd2bd0,L"body",1);
  FUN_1446f470e(&DAT_14cbd2bd8,L"title_card",1);
  local_a8 = "SetCommandRingVisible";
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2be0 = (ulonglong)uVar2;
  local_a8 = "GetCommandRingTarget";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2be8 = (ulonglong)uVar2;
  local_a8 = "RegisterCommandRingInitFunc";
  local_a0 = 0x1b;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2bf0 = (ulonglong)uVar2;
  local_a8 = "SetCryoSlowLocked";
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2bf8 = (ulonglong)uVar2;
  local_a8 = "AddPrimeStack";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2c00 = (ulonglong)uVar2;
  local_a8 = "Detonate";
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2c08 = (ulonglong)uVar2;
  local_a8 = "Jumpstart";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2c10 = (ulonglong)uVar2;
  local_a8 = "BindPrimeStackOp";
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2c18 = (ulonglong)uVar2;
  local_a8 = "ClearPrimeStacks";
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2c20 = (ulonglong)uVar2;
  local_a8 = "GetStackCount";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2c28 = (ulonglong)uVar2;
  local_a8 = "Cash";
  local_a0 = 4;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2c30 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbd2c38,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14422116e);
  FUN_1446f470e(&DAT_14cbd2c48,L"UNSET",1);
  local_a8 = "init";
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "update";
  local_a0 = 6;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "config_update";
  local_a0 = 0xd;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "deinit";
  local_a0 = 6;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&DAT_14cbd2c50,L"Party",1);
  FUN_1446f470e(&DAT_14cbd2c58,&DAT_149e063b2);
  local_a8 = "Skill_LockComponent";
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2c60 = (ulonglong)uVar2;
  local_a8 = "SetProfileEnabled";
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2c68 = (ulonglong)uVar2;
  local_a8 = "ProfileItemID";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2c70 = (ulonglong)uVar2;
  local_a8 = "ClearLocks";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2c78 = (ulonglong)uVar2;
  local_a8 = "ReplicatedProfileMask";
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbd2c80 = (ulonglong)uVar2;
  local_a8 = "Skill_LockComponent";
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2c90 = (ulonglong)uVar2;
  local_a8 = "OnChargeAdded";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2ca0 = (ulonglong)uVar2;
  local_a8 = "OnChargeConsumed";
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2ca8 = (ulonglong)uVar2;
  local_a8 = "OnChargesChanged";
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbd2cb0 = (ulonglong)uVar2;
  local_a8 = "ConsumeCharges";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2cb8 = (ulonglong)uVar2;
  local_a8 = "AddCharges";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2cc0 = (ulonglong)uVar2;
  local_a8 = "RefillCooldown";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2cc8 = (ulonglong)uVar2;
  local_a8 = "RefillVirtualCooldown";
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2cd0 = (ulonglong)uVar2;
  local_a8 = "GetCharges";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2cd8 = (ulonglong)uVar2;
  local_a8 = "GetMaxCharges";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2ce0 = (ulonglong)uVar2;
  local_a8 = "Charges";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbd2ce8 = (ulonglong)uVar2;
  local_a8 = "MaxCharges";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbd2cf0 = (ulonglong)uVar2;
  local_a8 = "HasCharges";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2cf8 = (ulonglong)uVar2;
  local_a8 = "FrozenCharacter";
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d00 = (ulonglong)uVar2;
  local_a8 = "dead_character";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d08 = (ulonglong)uVar2;
  local_a8 = "downed_character";
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d10 = (ulonglong)uVar2;
  local_a8 = "level";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d18 = (ulonglong)uVar2;
  local_a8 = "is_moving";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d20 = (ulonglong)uVar2;
  local_a8 = "respawned_character";
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d28 = (ulonglong)uVar2;
  local_a8 = "revived_character";
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d30 = (ulonglong)uVar2;
  local_a8 = "dead_character";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d38 = (ulonglong)uVar2;
  local_a8 = "count";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d40 = (ulonglong)uVar2;
  local_a8 = "VHEOp";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d48 = (ulonglong)uVar2;
  local_a8 = "VHETarget";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d50 = (ulonglong)uVar2;
  local_a8 = "Type";
  local_a0 = 4;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d58 = (ulonglong)uVar2;
  local_a8 = "Target";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d60 = (ulonglong)uVar2;
  local_a8 = "DPS";
  local_a0 = 3;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d68 = (ulonglong)uVar2;
  local_a8 = "Duration";
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d70 = (ulonglong)uVar2;
  local_a8 = "DmgSource";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d78 = (ulonglong)uVar2;
  local_a8 = "DmgInstigator";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d80 = (ulonglong)uVar2;
  local_a8 = "killed_player";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d88 = (ulonglong)uVar2;
  local_a8 = "execution";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d90 = (ulonglong)uVar2;
  local_a8 = "killed_actor";
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2d98 = (ulonglong)uVar2;
  local_a8 = "location";
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2da0 = (ulonglong)uVar2;
  local_a8 = "damage";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2da8 = (ulonglong)uVar2;
  _DAT_14cbd2db0 = &PTR_LAB_14b42a7b0;
  _DAT_14cbd2db8 = 0;
  uRam000000014cbd2dc0 = 0;
  CoCreateGuid((GUID *)&DAT_14cbd2db8);
  _DAT_14cbd2db0 = &PTR_FUN_14b99b700;
  local_a8 = "PingInstigator";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2dc8 = (ulonglong)uVar2;
  local_a8 = "TargetedActor";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2dd0 = (ulonglong)uVar2;
  local_a8 = "Location";
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2dd8 = (ulonglong)uVar2;
  local_a8 = "Type";
  local_a0 = 4;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2de0 = (ulonglong)uVar2;
  local_a8 = "Size";
  local_a0 = 4;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2de8 = (ulonglong)uVar2;
  local_a8 = "ID";
  local_a0 = 2;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2df0 = (ulonglong)uVar2;
  local_a8 = "weapon";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2df8 = (ulonglong)uVar2;
  local_a8 = "reload_completed";
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2e00 = (ulonglong)uVar2;
  local_a8 = "weapon";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2e08 = (ulonglong)uVar2;
  local_a8 = "auto_reload";
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2e10 = (ulonglong)uVar2;
  local_a8 = "new_weapon";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2e18 = (ulonglong)uVar2;
  local_a8 = "previous_weapon";
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2e20 = (ulonglong)uVar2;
  local_a8 = "weapon";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2e28 = (ulonglong)uVar2;
  local_a8 = "OnActionEvent";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbd2e30 = (ulonglong)uVar2;
  local_a8 = "Pressed";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbd2e38 = (ulonglong)uVar2;
  local_a8 = "Released";
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbd2e40 = (ulonglong)uVar2;
  local_a8 = "IsPressed";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2e48 = (ulonglong)uVar2;
  local_a8 = "SetFiringSolution";
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2e68 = (ulonglong)uVar2;
  local_a8 = "OnFiringSolutionNeeded";
  local_a0 = 0x16;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbd2e70 = (ulonglong)uVar2;
  local_a8 = "OnFireAtTarget";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbd2e78 = (ulonglong)uVar2;
  local_a8 = "VisualTarget";
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd2e80 = (ulonglong)uVar2;
  local_a8 = "OnVisualTargetChanged";
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbd2e88 = (ulonglong)uVar2;
  DAT_14cbd2e90 = 0;
  atexit((_func_5014 *)&LAB_1442234b1);
  _DAT_14cbd3198 = &PTR_LAB_14b42a7b0;
  _DAT_14cbd31a0 = 0;
  uRam000000014cbd31a8 = 0;
  CoCreateGuid((GUID *)&DAT_14cbd31a0);
  _DAT_14cbd3198 = &PTR_FUN_14b99bab0;
  _DAT_14cbd31b0 = 0;
  uRam000000014cbd31b8 = 0;
  _DAT_14cbd31c0 = 0;
  DAT_14cbd31c8 = 0;
  uRam000000014cbd31d0 = 0;
  FUN_1446ddda2(&DAT_14cbd31b0,"Allies",0);
  atexit((_func_5014 *)&LAB_144224249);
  _DAT_14cbd31d8 = 0;
  uRam000000014cbd31e0 = 0;
  _DAT_14cbd31e8 = 0;
  DAT_14cbd31f0 = 0;
  uRam000000014cbd31f8 = 0;
  FUN_1446ddda2(&DAT_14cbd31d8,"Companions",0);
  atexit((_func_5014 *)&LAB_14422425a);
  _DAT_14cbd3200 = 0;
  uRam000000014cbd3208 = 0;
  _DAT_14cbd3210 = 0;
  DAT_14cbd3218 = 0;
  uRam000000014cbd3220 = 0;
  FUN_1446ddda2(&DAT_14cbd3200,"ExoMarkedTargets",0);
  atexit((_func_5014 *)&LAB_14422426b);
  _DAT_14cbd3228 = 0;
  uRam000000014cbd3230 = 0;
  _DAT_14cbd3238 = 0;
  DAT_14cbd3240 = 0;
  uRam000000014cbd3248 = 0;
  FUN_1446ddda2(&DAT_14cbd3228,"VHETargets",0);
  atexit((_func_5014 *)&LAB_14422427c);
  local_a8 = "change_op";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd3250 = (ulonglong)uVar2;
  local_a8 = "current";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd3258 = (ulonglong)uVar2;
  local_a8 = "delta";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd3260 = (ulonglong)uVar2;
  DAT_14cbd32c8 = 0;
  _DAT_14cbd32d0 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_144227a9a;
  local_a8 = &DAT_14011fc1e;
  FUN_146103dc6(&local_a8);
  atexit((_func_5014 *)&LAB_1442242b6);
  _DAT_14cbd3378 = &PTR_LAB_14b42a7b0;
  _DAT_14cbd3380 = 0;
  uRam000000014cbd3388 = 0;
  CoCreateGuid((GUID *)&DAT_14cbd3380);
  _DAT_14cbd3378 = &PTR_FUN_14b99bad8;
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14422929e FUN_14422929e body=219 status=ok
// SIG undefined FUN_14422929e(void)

void FUN_14422929e(longlong param_1,ulonglong *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_5;
  FUN_1415cf994();
  uVar2 = DAT_14cbd3544;
  if ((DAT_14cbd3544 == DAT_14c948034) && (uVar2 = DAT_14c948034, DAT_14cbd3540 != DAT_14c948030)) {
    FUN_14011791e(&local_30,DAT_14cbd3540,DAT_14cbd3544 >> 0x20);
    DAT_14cbd3544 = local_30;
    uVar2 = local_30;
  }
  if ((*param_2 == uVar2) && (cVar1 = FUN_1407eda54(*param_3), cVar1 != '\0')) {
    FUN_14422937a(param_1 + -0x4a0);
    local_30 = DAT_14cb7c580;
    FUN_140bfca4e(param_1 + 0x80,&DAT_14cbd3540,&local_30,0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14422937a FUN_14422937a body=440 status=ok
// SIG undefined FUN_14422937a(void)

void FUN_14422937a(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  longlong local_60;
  int local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((longlong)*(int *)(param_1 + 0x498) != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x490);
    puVar4 = puVar6 + *(int *)(param_1 + 0x498);
    do {
      uVar1 = *puVar6;
      FUN_1412b3ab6(uVar1,&local_60,2,0);
      lVar3 = local_60;
      lVar5 = (longlong)local_58;
      if (lVar5 != 0) {
        lVar7 = 0;
        do {
          lVar2 = *(longlong *)(lVar3 + lVar7);
          if (lVar2 != 0) {
            if (DAT_14cba8288 == 0) {
              local_50 = FUN_141864c34;
              local_70 = FUN_14081d0ea;
              local_78 = &LAB_1464cee30;
              local_80 = &local_50;
              local_88 = &LAB_148bfac22;
              local_90 = &LAB_140f21842;
              local_98 = &DAT_149e063b2;
              local_a0 = 0;
              local_a8 = 0x10000004;
              local_b0 = 0x10;
              local_b8 = 0x9cd0;
              FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288);
            }
            if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
              *(undefined4 *)(lVar2 + 0x7948) = 0x1010101;
            }
          }
          lVar7 = lVar7 + 8;
        } while (lVar5 * 8 != lVar7);
      }
      FUN_14607a332(uVar1);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144229534 FUN_144229534 body=720 status=ok
// SIG undefined FUN_144229534(void)

void FUN_144229534(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  FUN_1437eaa58();
  iVar6 = *(int *)(param_2 + 0xf88);
  if ((iVar6 != 0) && (*(char *)(param_1 + 0xf20) != '\0')) {
    if (*(longlong *)(param_1 + 0xf98) != 0) {
      FUN_1405123ea(param_2,0);
      return;
    }
    if ((0 < iVar6) && (*(int *)(param_1 + 0xf30) != 0)) {
      iVar5 = 0;
LAB_14422959f:
      lVar2 = *(longlong *)(param_2 + 0xf80);
      if (*(longlong *)(param_2 + 0xf80) == 0) {
        lVar2 = param_2;
      }
      lVar2 = FUN_1400d690e((longlong)iVar5 * 0xf8 + lVar2);
      if (lVar2 != 0) {
        plVar3 = (longlong *)FUN_140edfc58(lVar2);
        if ((longlong)*(int *)(param_1 + 0xf30) != 0) {
          plVar4 = *(longlong **)(param_1 + 0xf28);
          plVar1 = plVar4 + *(int *)(param_1 + 0xf30);
          do {
            if ((int)plVar3[1] != 0) {
              lVar2 = 0;
              do {
                if (*(longlong *)(*plVar3 + lVar2) == *plVar4) goto LAB_144229648;
                lVar2 = lVar2 + 8;
              } while ((longlong)(int)plVar3[1] << 3 != lVar2);
            }
            if ((int)plVar3[3] != 0) {
              lVar2 = 0;
              do {
                if (*(longlong *)(plVar3[2] + lVar2) == *plVar4) goto LAB_144229648;
                lVar2 = lVar2 + 8;
              } while ((longlong)(int)plVar3[3] << 3 != lVar2);
            }
            plVar4 = plVar4 + 1;
          } while (plVar4 != plVar1);
        }
      }
      FUN_140513388(param_2,iVar5);
      goto LAB_14422964a;
    }
LAB_144229658:
    if ((0 < iVar6) && (*(int *)(param_1 + 0xf50) != 0)) {
      iVar5 = 0;
LAB_14422966f:
      lVar2 = *(longlong *)(param_2 + 0xf80);
      if (*(longlong *)(param_2 + 0xf80) == 0) {
        lVar2 = param_2;
      }
      lVar2 = FUN_1400d690e((longlong)iVar5 * 0xf8 + lVar2);
      if (lVar2 != 0) {
        plVar3 = (longlong *)FUN_140edfc58(lVar2);
        if ((longlong)*(int *)(param_1 + 0xf50) != 0) {
          plVar4 = *(longlong **)(param_1 + 0xf48);
          plVar1 = plVar4 + *(int *)(param_1 + 0xf50);
          do {
            if ((int)plVar3[1] != 0) {
              lVar2 = 0;
              do {
                if (*(longlong *)(*plVar3 + lVar2) == *plVar4) goto LAB_144229718;
                lVar2 = lVar2 + 8;
              } while ((longlong)(int)plVar3[1] << 3 != lVar2);
            }
            if ((int)plVar3[3] != 0) {
              lVar2 = 0;
              do {
                if (*(longlong *)(plVar3[2] + lVar2) == *plVar4) goto LAB_144229718;
                lVar2 = lVar2 + 8;
              } while ((longlong)(int)plVar3[3] << 3 != lVar2);
            }
            plVar4 = plVar4 + 1;
          } while (plVar4 != plVar1);
        }
      }
      FUN_140513388(param_2,iVar5);
      goto LAB_14422971a;
    }
LAB_144229728:
    if ((0 < iVar6) && (*(int *)(param_1 + 0xf70) != 0)) {
      iVar6 = 0;
LAB_14422973f:
      lVar2 = *(longlong *)(param_2 + 0xf80);
      if (*(longlong *)(param_2 + 0xf80) == 0) {
        lVar2 = param_2;
      }
      lVar2 = FUN_1400d690e((longlong)iVar6 * 0xf8 + lVar2);
      if (lVar2 != 0) {
        plVar3 = (longlong *)FUN_140edfc58(lVar2);
        if ((longlong)*(int *)(param_1 + 0xf70) != 0) {
          plVar4 = *(longlong **)(param_1 + 0xf68);
          plVar1 = plVar4 + *(int *)(param_1 + 0xf70);
          do {
            if ((int)plVar3[1] != 0) {
              lVar2 = 0;
              do {
                if (*(longlong *)(*plVar3 + lVar2) == *plVar4) goto LAB_1442297e8;
                lVar2 = lVar2 + 8;
              } while ((longlong)(int)plVar3[1] << 3 != lVar2);
            }
            if ((int)plVar3[3] != 0) {
              lVar2 = 0;
              do {
                if (*(longlong *)(plVar3[2] + lVar2) == *plVar4) goto LAB_1442297e8;
                lVar2 = lVar2 + 8;
              } while ((longlong)(int)plVar3[3] << 3 != lVar2);
            }
            plVar4 = plVar4 + 1;
          } while (plVar4 != plVar1);
        }
      }
      FUN_140513388(param_2,iVar6);
      goto LAB_1442297ea;
    }
  }
  return;
LAB_144229648:
  iVar5 = iVar5 + 1;
LAB_14422964a:
  iVar6 = *(int *)(param_2 + 0xf88);
  if (iVar6 <= iVar5) goto LAB_144229658;
  goto LAB_14422959f;
LAB_144229718:
  iVar5 = iVar5 + 1;
LAB_14422971a:
  iVar6 = *(int *)(param_2 + 0xf88);
  if (iVar6 <= iVar5) goto LAB_144229728;
  goto LAB_14422966f;
LAB_1442297e8:
  iVar6 = iVar6 + 1;
LAB_1442297ea:
  if (*(int *)(param_2 + 0xf88) <= iVar6) {
    return;
  }
  goto LAB_14422973f;
}



// FUNCTION 144229804 FUN_144229804 body=222 status=ok
// SIG undefined FUN_144229804(void)

void FUN_144229804(longlong param_1,ulonglong *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_5;
  FUN_143e3f92e();
  uVar2 = DAT_14cbd356c;
  if ((DAT_14cbd356c == DAT_14c948034) && (uVar2 = DAT_14c948034, DAT_14cbd3568 != DAT_14c948030)) {
    FUN_14011791e(&local_30,DAT_14cbd3568,DAT_14cbd356c >> 0x20);
    DAT_14cbd356c = local_30;
    uVar2 = local_30;
  }
  if ((*param_2 == uVar2) && (cVar1 = FUN_1407eda54(*param_3), cVar1 != '\0')) {
    FUN_1442298e4(param_1 + -0xc30);
    local_30 = DAT_14cb7c580;
    FUN_140bfca4e(param_1 + 0xe0,&DAT_14cbd3568,&local_30,0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442298e4 FUN_1442298e4 body=407 status=ok
// SIG undefined FUN_1442298e4(void)

void FUN_1442298e4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  longlong local_60;
  int local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1412b3ab6(param_1,&local_60,2,0);
  lVar2 = local_60;
  if ((longlong)local_58 != 0) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + lVar3);
      if (lVar1 != 0) {
        if (DAT_14cba8288 == 0) {
          local_50 = FUN_141864c34;
          local_70 = FUN_14081d0ea;
          local_78 = &LAB_1464cee30;
          local_80 = &local_50;
          local_88 = &LAB_148bfac22;
          local_90 = &LAB_140f21842;
          local_98 = &DAT_149e063b2;
          local_a0 = 0;
          local_a8 = 0x10000004;
          local_b0 = 0x10;
          local_b8 = 0x9cd0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        }
        if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
          *(undefined4 *)(lVar1 + 0x7948) = 0x1010101;
        }
        (**(code **)(*param_1 + 0xa68))(param_1,lVar1);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)local_58 * 8 != lVar3);
  }
  if (local_60 != 0) {
    FUN_1400020a8(local_60);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144229ad8 FUN_144229ad8 body=143 status=ok
// SIG undefined FUN_144229ad8(void)

void FUN_144229ad8(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b9a0d70);
  FUN_1402d084a(param_1,param_2);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    local_28 = 0xe7c867c0;
    uStack_24 = 0x900548c6;
    uStack_20 = 0x95dcad92;
    uStack_1c = 0xaab4eaf1;
    iVar1 = FUN_1448a256a(param_1);
    if (iVar1 < 0) {
      FUN_148694eee(param_1 + 0x918,param_1 + 0x520);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144229b68 FUN_144229b68 body=96 status=ok
// SIG undefined FUN_144229b68(void)

void FUN_144229b68(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(longlong **)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144229bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 144229bf6 FUN_144229bf6 body=2255 status=ok
// SIG undefined FUN_144229bf6(void)

ulonglong FUN_144229bf6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  longlong *plVar4;
  code *pcVar5;
  void *pvVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  byte bVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  undefined *puVar18;
  undefined8 unaff_RSI;
  ulonglong uVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  undefined8 *****pppppuVar23;
  longlong lVar24;
  bool bVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  undefined1 auStack_198 [32];
  float local_178;
  float local_174;
  void *local_170;
  uint local_168;
  undefined4 local_164;
  longlong *local_160;
  int local_148;
  float local_140;
  undefined4 uStack_13c;
  ushort local_128;
  byte local_120;
  undefined8 ****local_118;
  uint local_110;
  undefined4 local_10c;
  ushort local_100;
  byte local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar19 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(param_2 + 0x6f4) == 0) {
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (plVar4 != (longlong *)0x0) {
      iVar14 = (int)plVar4[1];
      do {
        if (iVar14 == 0) goto LAB_144229cda;
        LOCK();
        iVar16 = (int)plVar4[1];
        bVar25 = iVar14 == iVar16;
        if (bVar25) {
          *(int *)(plVar4 + 1) = iVar14 + 1;
          iVar16 = iVar14;
        }
        iVar14 = iVar16;
        UNLOCK();
      } while (!bVar25);
      lVar20 = *(longlong *)(param_1 + 0xe0);
      if (lVar20 != 0) {
        local_170 = (void *)((ulonglong)local_170 & 0xffffffffffffff00);
        local_148 = 0;
        FUN_1456bb102(&local_170,param_2);
        if (*(char *)(lVar20 + 0xd8) == '\x01') {
          pfVar21 = &local_140;
          FUN_1447c3578(lVar20 + 0xa0,pfVar21);
          if (local_120 == 3) {
            local_174 = local_140;
            bVar13 = 3;
          }
          else {
            FUN_1400b56fe(&local_118,&local_140);
            local_174 = 0.0;
            if (local_f8 != 0) {
              local_174 = local_118._0_4_;
            }
            pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
            if (pcVar5 != (code *)0x0) {
              pppppuVar23 = &local_118;
              if (0x18 < local_100) {
                pppppuVar23 = (undefined8 *****)local_118;
              }
              (*pcVar5)(pppppuVar23);
            }
            bVar13 = local_120;
            if (0x18 < local_100) {
              FUN_1400020a8(local_118);
              bVar13 = local_120;
            }
          }
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar13 * 0x120));
          if (pcVar5 != (code *)0x0) {
            if (0x18 < local_128) {
              pfVar21 = (float *)CONCAT44(uStack_13c,local_140);
            }
            (*pcVar5)(pfVar21);
          }
          if (0x18 < local_128) {
            FUN_1400020a8(CONCAT44(uStack_13c,local_140));
          }
        }
        else {
          lVar15 = FUN_144860928();
          local_174 = *(float *)(lVar15 + 0xebc);
        }
        lVar15 = DAT_14c9a3da0;
        if ((longlong)local_148 != 0) {
          lVar24 = (longlong)local_148 + -1;
          lVar22 = lVar24 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar22),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar22));
          if (*(longlong *)(lVar15 + lVar22) != 0) {
            FUN_1400020a8();
          }
          lVar15 = DAT_14c9a3da0;
          iVar14 = (int)lVar24;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar14;
          }
          *(undefined4 *)(lVar15 + lVar22) = 0xffffffff;
          iVar16 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar16 = DAT_14c9a3dd0;
          }
          *(int *)(lVar15 + 4 + lVar22) = iVar16;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar18 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar18 = DAT_14c9a3dc0;
          }
          iVar16 = iVar14 + 0x1f;
          if (-1 < iVar14) {
            iVar16 = iVar14;
          }
          bVar13 = (byte)lVar24 & 0x1f;
          DAT_14c9a3dd0 = iVar14;
          *(uint *)(puVar18 + (longlong)(iVar16 >> 5) * 4) =
               *(uint *)(puVar18 + (longlong)(iVar16 >> 5) * 4) &
               (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
          local_148 = 0;
        }
        if (((char)local_170 == '\x03') && (local_160 != (longlong *)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)local_160 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_160 + 0x10))();
          }
        }
        local_170 = (void *)((ulonglong)local_170 & 0xffffffffffffff00);
        local_148 = 0;
        FUN_1456bb102();
        if (*(char *)(lVar20 + 0x118) == '\x01') {
          FUN_1447c3578(lVar20 + 0xe0);
          if (local_120 == 3) {
            uVar17 = 3;
            local_178 = local_140;
          }
          else {
            FUN_1400b56fe(&local_118);
            local_178 = 0.0;
            if (local_f8 != 0) {
              local_178 = local_118._0_4_;
            }
            pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
            if (pcVar5 != (code *)0x0) {
              pppppuVar23 = &local_118;
              if (0x18 < local_100) {
                pppppuVar23 = (undefined8 *****)local_118;
              }
              (*pcVar5)(pppppuVar23);
            }
            if (0x18 < local_100) {
              FUN_1400020a8(local_118);
            }
            uVar17 = (uint)local_120;
          }
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar17 * 0x120));
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)();
          }
          if (0x18 < local_128) {
            FUN_1400020a8();
          }
        }
        else {
          lVar20 = FUN_144860928();
          local_178 = *(float *)(lVar20 + 0xec0);
        }
        lVar20 = DAT_14c9a3da0;
        if ((longlong)local_148 != 0) {
          lVar24 = (longlong)local_148 + -1;
          lVar15 = lVar24 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar15),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar15));
          if (*(longlong *)(lVar20 + lVar15) != 0) {
            FUN_1400020a8();
          }
          lVar20 = DAT_14c9a3da0;
          iVar14 = (int)lVar24;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar14;
          }
          *(undefined4 *)(lVar20 + lVar15) = 0xffffffff;
          iVar16 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar16 = DAT_14c9a3dd0;
          }
          *(int *)(lVar20 + 4 + lVar15) = iVar16;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar18 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar18 = DAT_14c9a3dc0;
          }
          iVar16 = iVar14 + 0x1f;
          if (-1 < iVar14) {
            iVar16 = iVar14;
          }
          bVar13 = (byte)lVar24 & 0x1f;
          DAT_14c9a3dd0 = iVar14;
          *(uint *)(puVar18 + (longlong)(iVar16 >> 5) * 4) =
               *(uint *)(puVar18 + (longlong)(iVar16 >> 5) * 4) &
               (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
          local_148 = 0;
        }
        if (((char)local_170 == '\x03') && (local_160 != (longlong *)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)local_160 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_160 + 0x10))();
          }
        }
        dVar11 = *(double *)(param_2 + 0x260);
        dVar12 = *(double *)(param_2 + 0x268);
        dVar3 = *(double *)(param_2 + 0x270);
        lVar20 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
        local_170 = (void *)0x0;
        local_168 = *(uint *)(lVar20 + 0x1b8);
        lVar15 = (longlong)(int)local_168;
        pvVar6 = *(void **)(lVar20 + 0x1b0);
        if (lVar15 == 0) {
          local_164 = 0;
        }
        else {
          FUN_1405b70fe(&local_170,local_168,0);
          memcpy(local_170,pvVar6,lVar15 * 0x18);
        }
        local_118 = (undefined8 *****)0x0;
        local_110 = *(uint *)(lVar20 + 0x1c8);
        lVar15 = (longlong)(int)local_110;
        pvVar6 = *(void **)(lVar20 + 0x1c0);
        if (lVar15 == 0) {
          local_10c = 0;
          uVar17 = 0;
        }
        else {
          FUN_1405b70fe(&local_118,local_110,0);
          memcpy(local_118,pvVar6,lVar15 * 0x18);
          uVar17 = local_110;
        }
        if ((int)local_168 < (int)uVar17) {
          uVar17 = local_168;
        }
        if (0 < (int)uVar17) {
          lVar20 = 0;
          do {
            dVar8 = dVar3 - *(double *)((longlong)local_170 + lVar20 + 0x10);
            dVar26 = dVar12 - *(double *)((longlong)local_170 + lVar20 + 8);
            dVar7 = dVar11 - *(double *)((longlong)local_170 + lVar20);
            fVar28 = (float)SQRT(dVar8 * dVar8 + dVar7 * dVar7 + dVar26 * dVar26);
            dVar27 = DAT_14c8464e8;
            dVar9 = DAT_14c8464f0;
            dVar10 = DAT_14c8464e0;
            if (1e-08 < fVar28) {
              dVar10 = (double)(1.0 / fVar28);
              dVar9 = dVar8 * dVar10;
              dVar27 = dVar26 * dVar10;
              dVar10 = dVar7 * dVar10;
            }
            if (fVar28 < local_174) {
LAB_14422a0f9:
              if ((undefined8 *****)local_118 != (undefined8 *****)0x0) {
                FUN_1400020a8();
              }
              if (local_170 != (void *)0x0) {
                FUN_1400020a8(local_170);
              }
              goto LAB_144229cbd;
            }
            dVar7 = *(double *)((longlong)local_118 + lVar20 + 8);
            dVar8 = *(double *)((longlong)local_118 + lVar20 + 0x10);
            if ((((9.999999747378752e-05 < ABS(*(double *)((longlong)local_118 + lVar20))) ||
                 (9.999999747378752e-05 < ABS(dVar7))) || (9.999999747378752e-05 < ABS(dVar8))) &&
               (-(float)(dVar8 * dVar9 +
                        *(double *)((longlong)local_118 + lVar20) * dVar10 + dVar27 * dVar7) <
                local_178)) goto LAB_14422a0f9;
            lVar20 = lVar20 + 0x18;
          } while ((ulonglong)uVar17 * 0x18 != lVar20);
        }
        if ((undefined8 *****)local_118 != (undefined8 *****)0x0) {
          FUN_1400020a8();
        }
        if (local_170 != (void *)0x0) {
          FUN_1400020a8();
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
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        goto LAB_144229cdc;
      }
LAB_144229cbd:
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
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
LAB_144229cda:
    uVar19 = 0;
  }
LAB_144229cdc:
  if ((local_f0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14422a4c6 FUN_14422a4c6 body=476 status=ok
// SIG undefined FUN_14422a4c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14422a4c6(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  
  plVar8 = (longlong *)*param_3;
  lVar9 = *plVar8;
  if (lVar9 == 0) {
LAB_14422a508:
    lVar9 = 0;
LAB_14422a50b:
    plVar8 = (longlong *)0x0;
  }
  else {
    uVar5 = FUN_14401dd18();
    cVar4 = FUN_1448093f4(lVar9,uVar5);
    if (cVar4 == '\0') goto LAB_14422a508;
    lVar9 = *plVar8;
    plVar8 = (longlong *)plVar8[1];
    if (plVar8 == (longlong *)0x0) goto LAB_14422a50b;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  lVar3 = param_3[1];
  plVar6 = (longlong *)FUN_14001cc68(0xa0,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b9a2070;
  plVar6[7] = 0;
  plVar6[8] = 0;
  *(undefined1 *)((longlong)plVar6 + 0x1c) = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 2;
  plVar6[2] = (longlong)&PTR_LAB_14b42f4f0;
  plVar6[9] = *(longlong *)(lVar3 + 8);
  lVar3 = *(longlong *)(lVar3 + 0x10);
  plVar6[10] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar1 = plVar6 + 2;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  *(byte *)(plVar6 + 0xf) = *(byte *)(plVar6 + 0xf) & 0xf0;
  plVar6[2] = (longlong)&PTR_FUN_14b9a2090;
  plVar6[0x10] = lVar9;
  plVar6[0x11] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  if ((plVar1 == (longlong *)0x0) ||
     (((plVar6[7] != 0 && (plVar6[8] != 0)) && (0 < *(int *)(plVar6[8] + 8))))) goto LAB_14422a644;
  if (plVar6 == (longlong *)0x0) {
    _DAT_00000038 = 0x10;
    plVar10 = (longlong *)&DAT_00000040;
    plVar7 = _DAT_00000040;
    if (_DAT_00000040 == (longlong *)0x0) goto LAB_14422a644;
LAB_14422a60d:
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    *plVar10 = (longlong)plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_14422a644;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar6[7] = (longlong)plVar1;
    if ((longlong *)plVar6[8] != plVar6) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar6[8] != (longlong *)0x0) {
        plVar10 = plVar6 + 8;
        plVar7 = (longlong *)plVar6[8];
        goto LAB_14422a60d;
      }
      plVar6[8] = (longlong)plVar6;
    }
  }
  LOCK();
  plVar10 = plVar6 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_14422a644:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_2;
}



// FUNCTION 14422a72e FUN_14422a72e body=429 status=ok
// SIG undefined FUN_14422a72e(void)

void FUN_14422a72e(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(ulonglong *)(param_1 + 0x58) = param_2;
  if (((((param_2 >> 0x20 != 0 && (~*(byte *)(param_1 + 0x28) & 5) == 0) &&
        (uVar3 = (uint)param_2, -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) &&
      ((plVar2 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0xd & 0x3fff8))),
       plVar2 != (longlong *)0x0 && ((int)plVar2[2] == (int)(param_2 >> 0x20))))) &&
     (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (lVar4 = *plVar2, lVar4 != 0)))) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    iVar1 = *(int *)(DAT_14cba8288 + 0x38);
    if (((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
         DAT_14cba8288 + 0x30)) ||
       ((lVar4 = *(longlong *)(lVar4 + 0x1b0), lVar4 != 0 &&
        ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
          DAT_14cba8288 + 0x30)))))) {
      FUN_140fbbfc8(lVar4 + 0x4d88,*(undefined8 *)(param_1 + 0x10));
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfb;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14422a8f4 FUN_14422a8f4 body=74 status=ok
// SIG undefined FUN_14422a8f4(void)

void FUN_14422a8f4(longlong param_1)

{
  if ((((*(byte *)(param_1 + 0xc0) & 8) != 0) && (*(char *)(param_1 + 0x20b) == '\x01')) &&
     (*(char *)(param_1 + 0x1c4) == '\x01')) {
    FUN_145863238(param_1 + 0x48,*(undefined4 *)(param_1 + 0x1c0));
    if (*(char *)(param_1 + 0x1c4) == '\x01') {
      *(undefined1 *)(param_1 + 0x1c4) = 0;
    }
  }
  return;
}



// FUNCTION 14422a93e FUN_14422a93e body=117 status=ok
// SIG undefined FUN_14422a93e(void)

longlong * FUN_14422a93e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x98);
    lVar9 = 0;
    do {
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_14423bade(param_2,iVar4);
      }
      puVar1 = (undefined4 *)(lVar5 + lVar9);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(*param_2 + (longlong)iVar4 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      lVar9 = lVar9 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar9);
  }
  return param_2;
}



// FUNCTION 14422a9b4 FUN_14422a9b4 body=1771 status=ok
// SIG undefined FUN_14422a9b4(void)

void FUN_14422a9b4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  float fVar15;
  undefined1 auStack_178 [32];
  code **local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined2 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  code **local_120;
  undefined1 *local_118;
  code *local_110;
  undefined2 local_108 [2];
  undefined4 local_104;
  undefined8 *local_100;
  ulonglong local_f8;
  undefined8 uStack_f0;
  code *local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined4 local_69;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar6 = (**(code **)(*param_3 + 0x10))(param_3);
  if ((lVar6 == 0) || (plVar3 = *(longlong **)(lVar6 + 0xa8), plVar3 == (longlong *)0x0)) {
LAB_14422aa59:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_178);
  }
  if (DAT_14cb61cd0 == 0) {
    local_120 = &local_e8;
    local_e8 = FUN_141030f22;
    local_110 = FUN_14081d0ea;
    local_118 = &LAB_1463b31ae;
    local_128 = &LAB_1486dca4f;
    local_130 = &LAB_1464f50a6;
    local_138 = &DAT_149e063b2;
    local_140 = 0;
    local_148 = 0x10000004;
    local_150 = 8;
    local_158 = (code **)CONCAT44(local_158._4_4_,0xd70);
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
  }
  lVar6 = plVar3[2];
  iVar9 = *(int *)(lVar6 + 0x38);
  if ((iVar9 < *(int *)(DAT_14cb61cd0 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) !=
      DAT_14cb61cd0 + 0x30)) goto LAB_14422aa59;
  if (DAT_14cbadd90 == 0) {
    local_120 = &local_e8;
    local_e8 = FUN_141030f22;
    local_110 = FUN_14081d0ea;
    local_118 = &LAB_1459f2e4c;
    local_128 = &LAB_148c39de3;
    local_130 = &LAB_1457a9eb2;
    local_138 = &DAT_149e063b2;
    local_140 = 0;
    local_148 = 0x10000004;
    local_150 = 0x10;
    local_158 = (code **)CONCAT44(local_158._4_4_,0x3de0);
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    lVar6 = plVar3[2];
    iVar9 = *(int *)(lVar6 + 0x38);
  }
  if (((iVar9 < *(int *)(DAT_14cbadd90 + 0x38)) ||
      (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) !=
       DAT_14cbadd90 + 0x30)) ||
     ((*(longlong *)(param_1 + 8) != 0 &&
      (cVar5 = (**(code **)(*plVar3 + 0x1080))(plVar3), cVar5 != '\0')))) goto LAB_14422aa59;
  cVar5 = (**(code **)(*plVar3 + 0x6c8))(plVar3);
  uVar14 = extraout_XMM0_Da;
  if (cVar5 != '\0') {
    lVar6 = FUN_1447210f0(plVar3);
    uVar14 = extraout_XMM0_Da_00;
    if ((lVar6 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      uVar2 = *(uint *)((longlong)plVar3 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar9 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar9 = *(int *)(lVar11 + 0x10);
        bVar13 = iVar9 == 0;
        if (bVar13) {
          *(int *)(lVar11 + 0x10) = iVar12;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar9 = iVar12;
        }
      }
      uVar8 = *(undefined8 *)(param_1 + 8);
      local_100 = (undefined8 *)0x0;
      local_f8 = local_f8 & 0xffffffff00000000;
      FUN_1446efa72(&local_100,0,3,0x10);
      local_f8 = CONCAT44(local_f8._4_4_,3);
      *local_100 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      local_100[2] = lVar10;
      *local_100 = &PTR_FUN_14b9a3160;
      *(uint *)(local_100 + 3) = uVar2;
      *(int *)((longlong)local_100 + 0x1c) = iVar9;
      local_100[4] = uVar8;
      fVar15 = *(float *)(param_1 + 0x10);
      if (fVar15 <= 1.1754944e-38) {
        fVar15 = 1.1754944e-38;
      }
      if (*(longlong *)(lVar6 + 0x1f0) == 0) {
        puVar7 = (undefined8 *)(lVar6 + 0x458);
      }
      else {
        puVar7 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
      }
      uVar8 = *puVar7;
      local_e8 = (code *)0x0;
      uStack_e0 = (ulonglong)uStack_e0._4_4_ << 0x20;
      FUN_14487d8d8(&local_e8,&local_100);
      uStack_ac._0_5_ = CONCAT14(1,(undefined4)uStack_ac);
      local_158 = (code **)local_108;
      local_108[0] = 0;
      local_104 = 0xbf800000;
      FUN_1406f4044(uVar8,param_3 + 1,&local_e8,fVar15);
      uVar14 = (*(code *)(&PTR_LAB_14a1c87a0)[uStack_ac >> 0x20 & 0xff])(&local_e8);
      if ((int)local_f8 != 0) {
        if (local_100 == (undefined8 *)0x0) goto LAB_14422ac5f;
        (**(code **)*local_100)(local_100,0);
        uVar14 = FUN_1446efa72(&local_100,0,0,0x10);
        local_f8 = local_f8 & 0xffffffff00000000;
      }
      if (local_100 != (undefined8 *)0x0) {
        uVar14 = FUN_1400020a8();
      }
    }
LAB_14422ac5f:
    if (*(char *)(param_1 + 0x24) == '\x01') {
      local_100 = *(undefined8 **)(param_1 + 0x28);
      local_e8 = (code *)0x0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_158 = (code **)((ulonglong)local_158 & 0xffffffffffffff00);
      uVar14 = FUN_145820544(plVar3,&local_100,&local_e8,0xbf800000);
    }
  }
  if ((char)plVar3[0x2f] != '\x03') goto LAB_14422acb1;
  lVar6 = *(longlong *)(param_1 + 0x120);
  if (lVar6 == 0) {
    uVar8 = FUN_145cd7928();
    lVar6 = FUN_14477b664(uVar8);
    *(longlong *)(param_1 + 0x120) = lVar6;
    uVar14 = extraout_XMM0_Da_02;
  }
  plVar1 = (longlong *)(param_1 + 0x118);
  lVar11 = *(longlong *)(param_1 + 0x128);
  if (lVar11 == 0) {
    if ((lVar6 == 0) || (*plVar1 == 0)) goto LAB_14422acb1;
    plVar4 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
      *(undefined8 *)(param_1 + 0x128) = 0;
      goto LAB_14422acb1;
    }
    uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar11 = FUN_144aff482(uVar8,plVar1);
    *(longlong *)(param_1 + 0x128) = lVar11;
    if (lVar11 == 0) goto LAB_14422acb1;
    lVar6 = *(longlong *)(param_1 + 0x120);
    uVar14 = extraout_XMM0_Da_01;
  }
  if (lVar6 == 0) {
    uVar8 = FUN_145cd7928(uVar14,lVar11);
    lVar6 = FUN_14477b664(uVar8);
    *(longlong *)(param_1 + 0x120) = lVar6;
    lVar11 = *(longlong *)(param_1 + 0x128);
    if (((lVar11 == 0) && (lVar11 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
      plVar4 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
        lVar11 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar11 = FUN_144aff482(uVar8,plVar1);
      }
      *(longlong *)(param_1 + 0x128) = lVar11;
    }
  }
  FUN_141306a06(plVar3,lVar11,&DAT_14cbd37e0);
LAB_14422acb1:
  if (*(char *)(param_1 + 0x14) == '\x01') {
    FUN_148e0487a(plVar3,1);
  }
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_148e04960(plVar3,1);
  }
  local_e8 = (code *)((ulonglong)local_e8 & 0xffffffff00000000);
  uStack_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0xffffffff;
  local_6c = 0;
  local_6a = 1;
  local_69 = 0;
  lVar6 = plVar3[0x7a];
  uVar8 = FUN_1447210f0(plVar3);
  local_158 = &local_e8;
  FUN_1407acb05(uVar8,param_1 + 0x130,param_1 + 0x148,lVar6);
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14422b0c6 FUN_14422b0c6 body=109 status=ok
// SIG undefined FUN_14422b0c6(void)

void FUN_14422b0c6(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_145a89a40();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_145a89a40();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (lVar4 != 0) {
          FUN_1418d3b20(lVar4,0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14422b134 FUN_14422b134 body=361 status=ok
// SIG undefined FUN_14422b134(void)

void FUN_14422b134(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  undefined1 auStack_58 [32];
  uint *local_38;
  int local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    uVar4 = FUN_14037bb52();
    lVar5 = (**(code **)(*param_1 + 0x288))(param_1,uVar4);
    if (lVar5 != 0) {
      uVar4 = FUN_14037bb52();
      lVar6 = FUN_144718840(lVar5,uVar4);
      if (lVar6 != 0 && lVar5 != lVar6) {
        FUN_14037baca(lVar6,&local_28);
        if (local_28 != 0) {
          FUN_14422a93e(local_28,&local_38);
          if ((longlong)local_30 != 0) {
            puVar8 = local_38 + (longlong)local_30 * 4;
            puVar7 = local_38;
            do {
              if ((((puVar7[1] != 0 && *(longlong **)(puVar7 + 2) != (longlong *)0x0) &&
                   (uVar3 = *puVar7, -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) &&
                 (((lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8),
                   lVar5 != 0 && (*(uint *)(lVar5 + 0x10) == puVar7[1])) &&
                  (((*(uint *)(lVar5 + 8) & 0x10200000) == 0 &&
                   (lVar5 = (**(code **)(**(longlong **)(puVar7 + 2) + 0x10))(), lVar5 != 0)))))) {
                FUN_1418d3b20(lVar5,0);
              }
              puVar7 = puVar7 + 4;
            } while (puVar7 != puVar8);
          }
          if (local_38 != (uint *)0x0) {
            FUN_1400020a8(local_38);
          }
        }
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_20 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar2 = (int *)((longlong)local_20 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_20 + 0x10))(local_20);
            }
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14422b29e FUN_14422b29e body=11452 status=ok
// SIG undefined FUN_14422b29e(void)

void FUN_14422b29e(longlong param_1,longlong param_2,int param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  undefined1 *puVar19;
  int *piVar20;
  undefined1 *puVar21;
  byte bVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  float *pfVar25;
  longlong *plVar26;
  undefined8 *****pppppuVar27;
  code *pcVar28;
  int iVar29;
  longlong *plVar30;
  ulonglong uVar31;
  code *pcVar32;
  int iVar33;
  uint uVar34;
  bool bVar35;
  ulonglong uVar36;
  undefined1 uVar37;
  int iVar38;
  ulonglong uVar39;
  longlong *plVar40;
  ulonglong uVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_668 [32];
  undefined4 local_648;
  undefined4 local_640;
  undefined4 local_638;
  undefined8 local_630;
  wchar_t *local_628;
  undefined1 *local_620;
  undefined1 *local_618;
  undefined8 *local_610;
  code *local_608;
  code *local_600;
  ulonglong local_5f8;
  undefined1 *local_5f0;
  uint *local_5e8;
  uint *local_5e0;
  longlong local_5d8;
  code *local_5d0;
  longlong *local_5c8;
  undefined1 *local_5c0;
  undefined1 **local_5b8;
  undefined1 **local_5b0;
  longlong local_5a8;
  undefined8 uStack_5a0;
  longlong *local_598;
  undefined8 uStack_590;
  longlong local_580;
  longlong local_578;
  undefined1 local_569;
  void *local_568;
  ulonglong uStack_560;
  longlong local_558;
  uint local_54c;
  undefined1 local_548 [8];
  char local_540 [16];
  longlong *local_530;
  undefined4 local_518 [2];
  undefined8 ****local_510;
  uint *local_508;
  longlong *local_500;
  longlong *local_4f8;
  void **local_4f0;
  undefined8 *local_4e8;
  undefined8 local_4e0;
  int local_4d8 [96];
  int *local_358;
  undefined8 local_350;
  uint local_348 [2];
  uint *local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined1 local_328 [32];
  undefined1 *local_308;
  uint local_300;
  undefined8 local_2f8;
  longlong lStack_2f0;
  longlong local_2e8;
  ushort local_2e0;
  byte local_2d8;
  longlong *local_170;
  undefined8 local_168;
  uint local_160 [2];
  uint *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [32];
  undefined1 *local_120;
  uint local_118;
  float local_110 [6];
  ushort local_f8;
  byte local_f0;
  float local_e8;
  undefined4 uStack_e4;
  ushort local_d0;
  byte local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_668;
  if (((((*(int *)(param_1 + 0x1c) == 0) || (uVar5 = *(uint *)(param_1 + 0x18), (int)uVar5 < 0)) ||
       (DAT_14c9647dc <= (int)uVar5)) ||
      ((plVar30 = (longlong *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       plVar30 == (longlong *)0x0 || ((int)plVar30[2] != *(int *)(param_1 + 0x1c))))) ||
     (((*(uint *)(plVar30 + 1) & 0x10200000) != 0 || (lVar14 = *plVar30, lVar14 == 0))))
  goto LAB_14422dcfc;
  if (DAT_14cac9ca8 == 0) {
    local_610 = &local_2f8;
    local_2f8 = FUN_141030f22;
    local_600 = FUN_14081d0ea;
    local_608 = FUN_14081d0ea;
    local_618 = &LAB_1478c0a72;
    local_620 = &LAB_1417b2375;
    local_628 = L"Engine";
    local_630 = 0x1000000000;
    local_638 = 0x10000004;
    local_640 = 8;
    local_648 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
  }
  if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) goto LAB_14422dcfc;
  lVar11 = FUN_1405c673d();
  uVar5 = FUN_14094497a(lVar11,lVar14,1);
  plVar30 = (longlong *)((ulonglong)uVar5 * 0x28 + *(longlong *)(lVar11 + 0xc0));
  if (*(int *)(lVar11 + 200) <= (int)uVar5) {
    plVar30 = (longlong *)(lVar11 + 0xd0);
  }
  if ((int)uVar5 < 0) {
    plVar30 = (longlong *)(lVar11 + 0xd0);
  }
  local_580 = *plVar30;
  local_598 = (longlong *)0x0;
  uStack_590 = 0;
  uVar12 = FUN_1447210f0(lVar14);
  lVar13 = FUN_14133cf3b(uVar12);
  if ((lVar13 == 0) || (lVar13 = FUN_14133cf88(lVar13), lVar13 == 0)) {
    lVar13 = FUN_1405c6693(lVar14);
    if (lVar13 == 0) {
      uVar37 = 0;
    }
    else {
      uVar37 = *(undefined1 *)(lVar13 + 0x5f4);
    }
    iVar33 = FUN_1440d3ac6(lVar11,lVar14,&local_580,uVar37);
    uVar5 = iVar33 + param_3;
  }
  else {
    local_5d8 = param_2;
    lVar14 = FUN_140d1d7e4();
    puVar15 = (undefined8 *)FUN_140d19a6c(lVar14 + 0x90);
    local_4e0 = (undefined8 *)0x0;
    iVar33 = *(int *)(puVar15 + 1);
    uVar12 = *puVar15;
    local_4d8[0] = iVar33;
    if (iVar33 == 0) {
      local_4d8[1] = 0;
    }
    else {
      FUN_148c13408(&local_4e0,iVar33,0);
      FUN_148c1347b(local_4e0,uVar12,iVar33);
      if ((longlong)local_4d8[0] != 0) {
        lVar14 = (longlong)local_4d8[0] * 0x18;
        puVar15 = local_4e0;
        do {
          lStack_2f0 = 0;
          local_2e8 = 0;
          local_2f8 = (code *)*puVar15;
          uVar12 = FUN_14477b664(puVar15[1]);
          lStack_2f0 = FUN_14477b664(uVar12);
          local_2e8 = puVar15[2];
          if (lStack_2f0 == 0) {
            uVar12 = FUN_141417e7c();
            lStack_2f0 = FUN_14477b664(uVar12);
          }
          lVar16 = local_2e8;
          if (local_2e8 == 0) {
            local_2e8 = 0;
            if (lStack_2f0 == 0) {
LAB_14422de7a:
              lVar16 = 0;
            }
            else {
              lVar16 = 0;
              if (local_2f8 != (code *)0x0) {
                plVar30 = *(longlong **)(lStack_2f0 + 0xb8);
                if ((plVar30 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar30 + 0x108))(), cVar4 == '\0')) goto LAB_14422de7a;
                uVar12 = (**(code **)(*plVar30 + 0x110))(plVar30);
                lVar16 = FUN_144aff482(uVar12,&local_2f8);
              }
            }
          }
          if (lVar16 == lVar13) {
            if (puVar15 != (undefined8 *)0x0) {
              puVar15 = (undefined8 *)FUN_14435d38a(lVar13 + 0x48);
              goto LAB_14422b46a;
            }
            break;
          }
          puVar15 = puVar15 + 3;
          lVar14 = lVar14 + -0x18;
        } while (lVar14 != 0);
      }
    }
    puVar15 = (undefined8 *)(lVar13 + 0x48);
LAB_14422b46a:
    if ((longlong)*(int *)(puVar15 + 1) != 0) {
      plVar30 = (longlong *)*puVar15;
      lVar14 = (longlong)*(int *)(puVar15 + 1) * 0x18;
      do {
        lVar16 = plVar30[1];
        if (lVar16 == 0) {
          uVar12 = FUN_14117f018();
          lVar16 = FUN_14477b664(uVar12);
          plVar30[1] = lVar16;
        }
        lVar17 = plVar30[2];
        if (lVar17 == 0) {
          if ((lVar16 != 0) && (*plVar30 != 0)) {
            plVar40 = *(longlong **)(lVar16 + 0xb8);
            if ((plVar40 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar40 + 0x108))(plVar40), cVar4 == '\0')) {
              plVar30[2] = 0;
            }
            else {
              uVar12 = (**(code **)(*plVar40 + 0x110))(plVar40);
              lVar17 = FUN_144aff482(uVar12,plVar30);
              plVar30[2] = lVar17;
              if (lVar17 != 0) goto LAB_14422b4ad;
            }
          }
        }
        else {
LAB_14422b4ad:
          uVar23 = uStack_590;
          lVar16 = (longlong)(int)uStack_590;
          uVar5 = (int)uStack_590 + 1;
          uStack_590 = CONCAT44(uStack_590._4_4_,uVar5);
          if (uStack_590._4_4_ < uVar5) {
            FUN_1418f2e6e(&local_598,uVar23 & 0xffffffff);
          }
          local_598[lVar16] = lVar17;
        }
        plVar30 = plVar30 + 3;
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != 0);
    }
    param_2 = local_5d8;
    uVar5 = 0;
    if ((longlong)*(int *)(lVar13 + 0x70) != 0) {
      plVar30 = *(longlong **)(lVar13 + 0x68);
      lVar14 = (longlong)*(int *)(lVar13 + 0x70) * 0xc;
      do {
        if (*plVar30 == local_580) {
          if (plVar30 != (longlong *)0x0) {
            uVar5 = *(uint *)(plVar30 + 1);
          }
          break;
        }
        plVar30 = (longlong *)((longlong)plVar30 + 0xc);
        lVar14 = lVar14 + -0xc;
      } while (lVar14 != 0);
    }
    if (local_4e0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  local_5a8 = 0;
  uStack_5a0 = 0;
  if (*(int *)(lVar11 + 0x270) != *(int *)(lVar11 + 0x29c)) {
    uVar6 = (uint)((ulonglong)local_580 >> 0x10);
    uVar34 = (uint)local_580 & 0xffff;
    lVar14 = lVar11 + 0x2a0;
    if (*(longlong *)(lVar11 + 0x2a8) != 0) {
      lVar14 = *(longlong *)(lVar11 + 0x2a8);
    }
    iVar33 = *(int *)(lVar14 + (ulonglong)
                               (*(int *)(lVar11 + 0x2b0) - 1U &
                               (int)((ulonglong)local_580 >> 0x20) +
                               ((uint)local_580 << 0x10 | uVar34) + (uVar6 << 0x13 | uVar6 & 0xffff)
                               + (uVar34 >> 4)) * 4);
    if (iVar33 != -1) {
      do {
        lVar14 = *(longlong *)(lVar11 + 0x268) + (longlong)iVar33 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar11 + 0x268) + (longlong)iVar33 * 0x20) == local_580) {
          if (((lVar14 + 8U & 0xfffffffffffffff7) != 0) && ((longlong)*(int *)(lVar14 + 0x10) != 0))
          {
            plVar40 = *(longlong **)(lVar14 + 8);
            plVar30 = plVar40 + (longlong)*(int *)(lVar14 + 0x10) * 3;
            local_5b8 = &local_308;
            local_5c0 = local_328;
            local_5e8 = local_348;
            local_5b0 = &local_120;
            local_5f0 = auStack_140;
            local_5e0 = local_160;
            local_5c8 = plVar30;
            goto LAB_14422b72f;
          }
          break;
        }
        iVar33 = *(int *)(lVar14 + 0x18);
      } while (iVar33 != -1);
    }
  }
  goto LAB_14422dcea;
  while( true ) {
    FUN_1448173f8(local_518);
    if ((local_540[0] == '\x03') && (local_530 != (longlong *)0x0)) {
      LOCK();
      piVar20 = (int *)((longlong)local_530 + 0xc);
      *piVar20 = *piVar20 + -1;
      UNLOCK();
      if (*piVar20 == 0) {
        (**(code **)(*local_530 + 0x10))();
      }
    }
    lVar14 = local_5a8;
    plVar40 = plVar40 + 3;
    if (plVar40 == plVar30) break;
LAB_14422b72f:
    if ((*(int *)(param_1 + 0x1c) == 0) || (uVar6 = *(uint *)(param_1 + 0x18), (int)uVar6 < 0)) {
LAB_14422db85:
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      if ((int)uVar6 < DAT_14c9647dc) {
        puVar15 = (undefined8 *)
                  ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if (((puVar15 == (undefined8 *)0x0) || (*(int *)(puVar15 + 2) != *(int *)(param_1 + 0x1c)))
           || ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)) goto LAB_14422db85;
        uVar12 = *puVar15;
      }
    }
    local_540[0] = '\0';
    local_518[0] = 0;
    FUN_1456bb102(local_540,uVar12);
    lVar14 = plVar40[1];
    if (lVar14 == 0) {
      uVar12 = FUN_145ce246e();
      lVar14 = FUN_14477b664(uVar12);
      plVar40[1] = lVar14;
    }
    lVar11 = plVar40[2];
    if (lVar11 == 0) {
      if ((lVar14 != 0) && (*plVar40 != 0)) {
        plVar26 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar26 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar26 + 0x108))(plVar26), cVar4 == '\0')) {
          plVar40[2] = 0;
        }
        else {
          uVar12 = (**(code **)(*plVar26 + 0x110))(plVar26);
          lVar11 = FUN_144aff482(uVar12);
          plVar40[2] = lVar11;
          local_558 = lVar11;
          local_54c = uVar5;
          if (lVar11 != 0) goto LAB_14422b83e;
        }
      }
    }
    else {
LAB_14422b83e:
      local_558 = lVar11;
      local_54c = uVar5;
      if (*(int *)(lVar11 + 0x20) != 0) {
        FUN_140168de2(lVar11 + 0x28,&local_2f8,local_540);
        cVar4 = FUN_140168b7a(&local_2f8);
        pcVar32 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2d8 * 0x120));
        if (pcVar32 != (code *)0x0) {
          pcVar28 = (code *)&local_2f8;
          if (0x18 < local_2e0) {
            pcVar28 = local_2f8;
          }
          (*pcVar32)(pcVar28);
          plVar30 = local_5c8;
        }
        if (0x18 < local_2e0) {
          FUN_1400020a8(local_2f8);
        }
        if (cVar4 != '\0') {
          if (*(char *)(local_558 + 0x60) == '\x01') {
            FUN_1448729ea(local_558 + 0x68,&local_2f8,local_540);
            local_54c = FUN_14005fbd2(&local_2f8);
            pcVar32 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2d8 * 0x120));
            if (pcVar32 != (code *)0x0) {
              pcVar28 = (code *)&local_2f8;
              if (0x18 < local_2e0) {
                pcVar28 = local_2f8;
              }
              (*pcVar32)(pcVar28);
            }
            plVar30 = local_5c8;
            if (0x18 < local_2e0) {
              FUN_1400020a8(local_2f8);
              plVar30 = local_5c8;
            }
          }
          if (0 < (int)local_54c) {
            local_4e0 = (undefined8 *)((ulonglong)local_4e0 & 0xffffff0000000000);
            local_358 = (int *)0x0;
            local_350 = 0x1000000000;
            local_340 = (uint *)0x0;
            local_338 = 0x2000000000;
            uStack_330._0_4_ = -1;
            uStack_330._4_4_ = 0;
            local_308 = (undefined1 *)0x0;
            local_300 = 0;
            local_568 = (void *)0x0;
            uStack_560 = 0;
            uVar6 = *(uint *)(local_558 + 0x20);
            if ((int)uVar6 < 1) {
              if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4((ulonglong)uVar6);
              }
            }
            else {
              uStack_560 = (ulonglong)uVar6;
              FUN_1446f48e2(&local_568);
              memset(local_568,0,(ulonglong)uVar6 * 4);
              if (0 < *(int *)(local_558 + 0x20)) {
                pcVar32 = (code *)0x0;
                do {
                  plVar30 = (longlong *)(*(longlong *)(local_558 + 0x18) + (longlong)pcVar32 * 0xc0)
                  ;
                  lVar14 = *(longlong *)
                            (*(longlong *)(local_558 + 0x18) + 8 + (longlong)pcVar32 * 0xc0);
                  local_5d0 = pcVar32;
                  if (lVar14 == 0) {
                    uVar12 = FUN_145ce225c();
                    lVar14 = FUN_14477b664(uVar12);
                    plVar30[1] = lVar14;
                  }
                  uVar23 = plVar30[2];
                  if (uVar23 == 0) {
                    if ((lVar14 != 0) && (*plVar30 != 0)) {
                      plVar26 = *(longlong **)(lVar14 + 0xb8);
                      if ((plVar26 == (longlong *)0x0) ||
                         (cVar4 = (**(code **)(*plVar26 + 0x108))(plVar26), cVar4 == '\0')) {
                        plVar30[2] = 0;
                      }
                      else {
                        uVar12 = (**(code **)(*plVar26 + 0x110))(plVar26);
                        uVar23 = FUN_144aff482(uVar12,plVar30);
                        plVar30[2] = uVar23;
                        if (uVar23 != 0) goto LAB_14422cec2;
                      }
                    }
                  }
                  else {
LAB_14422cec2:
                    if ((0 < *(int *)(uVar23 + 0x20)) &&
                       ((*(int *)(param_2 + 8) == 0 ||
                        (cVar4 = FUN_1410a8654(uVar23 + 200,param_2), cVar4 == '\0')))) {
                      if ((char)plVar30[3] == '\x01') {
                        plVar26 = plVar30 + 4;
                      }
                      else {
                        lVar14 = plVar30[1];
                        if (lVar14 == 0) {
                          uVar12 = FUN_145ce225c();
                          lVar14 = FUN_14477b664(uVar12);
                          plVar30[1] = lVar14;
                        }
                        lVar11 = plVar30[2];
                        if (lVar11 == 0) {
                          if ((lVar14 != 0) && (*plVar30 != 0)) {
                            plVar26 = *(longlong **)(lVar14 + 0xb8);
                            if ((plVar26 == (longlong *)0x0) ||
                               (cVar4 = (**(code **)(*plVar26 + 0x108))(plVar26), cVar4 == '\0')) {
                              plVar30[2] = 0;
                            }
                            else {
                              uVar12 = (**(code **)(*plVar26 + 0x110))(plVar26);
                              lVar11 = FUN_144aff482(uVar12,plVar30);
                              plVar30[2] = lVar11;
                              if (lVar11 != 0) goto LAB_14422cf0e;
                            }
                          }
                          goto LAB_14422d30a;
                        }
LAB_14422cf0e:
                        plVar26 = (longlong *)(lVar11 + 0x78);
                      }
                      FUN_1448729ea(plVar26,&local_510,local_540);
                      if ((byte)local_4f0 == '\x03') {
                        uVar6 = 3;
                        fVar43 = local_510._0_4_;
                      }
                      else {
                        FUN_1400b56fe(&local_2f8,&local_510,3);
                        fVar43 = 0.0;
                        if (local_2d8 != 0) {
                          fVar43 = (float)local_2f8;
                        }
                        pcVar32 = *(code **)((longlong)&DAT_14c9a85d0 +
                                            (ulonglong)((uint)local_2d8 * 0x120));
                        if (pcVar32 != (code *)0x0) {
                          pcVar28 = (code *)&local_2f8;
                          if (0x18 < local_2e0) {
                            pcVar28 = local_2f8;
                          }
                          (*pcVar32)(pcVar28);
                        }
                        if (0x18 < local_2e0) {
                          FUN_1400020a8(local_2f8);
                        }
                        uVar6 = (uint)(byte)local_4f0;
                      }
                      pcVar32 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar6 * 0x120));
                      if (pcVar32 != (code *)0x0) {
                        pppppuVar27 = &local_510;
                        if (0x18 < (ushort)local_4f8) {
                          pppppuVar27 = (undefined8 *****)local_510;
                        }
                        (*pcVar32)(pppppuVar27);
                      }
                      if (0x18 < (ushort)local_4f8) {
                        FUN_1400020a8(local_510);
                      }
                      if (0.0 < fVar43) {
                        if (*(char *)((longlong)plVar30 + 0x19) == '\x01') {
                          plVar30 = plVar30 + 0xe;
LAB_14422cfab:
                          FUN_1448729ea(plVar30,&local_2f8,local_540);
                          uVar9 = FUN_14005fbd2(&local_2f8,0);
                          pcVar32 = *(code **)((longlong)&DAT_14c9a85d0 +
                                              (ulonglong)((uint)local_2d8 * 0x120));
                          if (pcVar32 != (code *)0x0) {
                            pcVar28 = (code *)&local_2f8;
                            if (0x18 < local_2e0) {
                              pcVar28 = local_2f8;
                            }
                            (*pcVar32)(pcVar28);
                          }
                          if (0x18 < local_2e0) {
                            FUN_1400020a8(local_2f8);
                          }
                        }
                        else {
                          lVar14 = plVar30[1];
                          if (lVar14 == 0) {
                            uVar12 = FUN_145ce225c();
                            lVar14 = FUN_14477b664(uVar12);
                            plVar30[1] = lVar14;
                          }
                          lVar11 = plVar30[2];
                          if (lVar11 != 0) {
LAB_14422cfa7:
                            plVar30 = (longlong *)(lVar11 + 0x28);
                            goto LAB_14422cfab;
                          }
                          uVar9 = 0;
                          if ((lVar14 != 0) && (*plVar30 != 0)) {
                            plVar26 = *(longlong **)(lVar14 + 0xb8);
                            if ((plVar26 == (longlong *)0x0) ||
                               (cVar4 = (**(code **)(*plVar26 + 0x108))(plVar26), cVar4 == '\0')) {
                              plVar30[2] = 0;
                            }
                            else {
                              uVar12 = (**(code **)(*plVar26 + 0x110))(plVar26);
                              lVar11 = FUN_144aff482(uVar12,plVar30);
                              plVar30[2] = lVar11;
                              if (lVar11 != 0) goto LAB_14422cfa7;
                            }
                          }
                        }
                        iVar33 = (int)uStack_330;
                        uVar39 = local_350;
                        *(undefined4 *)((longlong)local_568 + (longlong)local_5d0 * 4) = uVar9;
                        if ((1e-08 < fVar43) || (local_4e0._4_1_ == '\x01')) {
                          iVar29 = (int)local_350;
                          fVar42 = (float)local_4e0;
                          if ((int)local_350 != uStack_330._4_4_) {
                            uVar6 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) *
                                    -0x7a143595;
                            uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
                            puVar21 = local_308;
                            if (local_308 == (undefined1 *)0x0) {
                              puVar21 = local_5c0;
                            }
                            iVar38 = *(int *)(puVar21 +
                                             (ulonglong)(local_300 - 1 & (uVar6 >> 0x10 ^ uVar6)) *
                                             4);
                            if (iVar38 != -1) {
                              piVar20 = local_358;
                              if (local_358 == (int *)0x0) {
                                piVar20 = local_4d8;
                              }
                              do {
                                puVar1 = (ulonglong *)(piVar20 + (longlong)iVar38 * 6);
                                if (*puVar1 == uVar23) {
                                  if ((float *)(puVar1 + 1) != (float *)0x0 &&
                                      puVar1 != (ulonglong *)0x0) {
                                    fVar42 = (float)local_4e0 - *(float *)(puVar1 + 1);
                                  }
                                  break;
                                }
                                iVar38 = (int)puVar1[2];
                              } while (iVar38 != -1);
                            }
                          }
                          local_4e0 = (undefined8 *)CONCAT44(local_4e0._4_4_,fVar42 + fVar43);
                          if (uStack_330._4_4_ == 0) {
                            local_350 = CONCAT44(local_350._4_4_,(int)local_350 + 1);
                            if (local_350._4_4_ == iVar29) {
                              FUN_14593ecc2(local_4d8,uVar39 & 0xffffffff);
                            }
                            uVar39 = local_338;
                            if ((int)local_338 == 0) {
                              iVar33 = -1;
                            }
                            else {
                              iVar33 = (int)local_338 + 0x1e;
                              if (-1 < (int)local_338 + -1) {
                                iVar33 = (int)local_338 + -1;
                              }
                              iVar33 = iVar33 >> 5;
                            }
                            iVar38 = (int)local_338 + 1;
                            iVar8 = (int)local_338 + 0x1f;
                            if (-1 < (int)local_338) {
                              iVar8 = (int)local_338;
                            }
                            if (iVar8 >> 5 == iVar33) {
                              local_338 = CONCAT44(local_338._4_4_,iVar38);
                            }
                            else {
                              if (local_338._4_4_ <= (int)local_338) {
                                uVar6 = (int)local_338 + 0x20;
                                local_5f8 = (ulonglong)uVar6;
                                if (uVar6 < 0x40) {
                                  iVar38 = 0x20;
                                  iVar33 = (int)local_338;
                                }
                                else {
                                  uVar6 = uVar6 >> 5;
                                  local_5f8 = (ulonglong)uVar6;
                                  if (local_338._4_4_ + 0x1fU < 0x40) {
                                    uVar34 = 4;
                                    if (4 < uVar6) {
                                      uVar34 = uVar6;
                                    }
                                  }
                                  else {
                                    uVar34 = uVar6 + (uVar6 * 3 >> 3) + 0x10;
                                  }
                                  uVar41 = (ulonglong)(uVar34 * 4);
                                  if (DAT_14c872d28 != (longlong *)0x0) {
                                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8)
                                    {
                                      uVar6 = (uint)(uVar41 + 0xf);
                                      if (uVar34 < 0x1ffd) {
                                        uVar41 = (ulonglong)
                                                 (ushort)(&DAT_14c841d90)
                                                         [0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]]
                                        ;
                                      }
                                      else {
                                        uVar24 = uVar41 + 0xf & 0xfffffffffffffff0;
                                        if (uVar24 < 0x7ff1) {
                                          bVar22 = (&DAT_14c841e00)[uVar6 >> 4];
                                          uVar31 = 0x32;
                                          if (0x32 < bVar22) {
                                            uVar31 = (ulonglong)bVar22;
                                          }
                                          uVar36 = 0x32 - (ulonglong)bVar22;
                                          do {
                                            uVar41 = (ulonglong)
                                                     (ushort)(&DAT_14c841d90)[uVar36 & 0xffffffff];
                                            if (((&DAT_14c841d90)[uVar36 & 0xffffffff] & 0xf) == 0)
                                            goto LAB_14422d76b;
                                            lVar14 = uVar31 + 1 + uVar36;
                                            uVar36 = uVar36 - 1;
                                          } while (lVar14 != 0x33);
                                        }
                                        uVar41 = (ulonglong)DAT_14c841df8;
                                        if (DAT_14c841df8 < 0x11) {
                                          uVar41 = 0x10;
                                        }
                                        uVar41 = -uVar41 & (uVar24 + uVar41) - 1;
                                      }
                                    }
                                    else {
                                      uVar41 = (**(code **)(*DAT_14c872d28 + 0x60))
                                                         (DAT_14c872d28,uVar41,0);
                                    }
                                  }
LAB_14422d76b:
                                  iVar10 = (int)(uVar41 >> 2);
                                  iVar38 = iVar10 << 5;
                                  iVar33 = (int)local_338;
                                  if (iVar10 < (int)local_5f8) {
                                    iVar38 = -0x20;
                                  }
                                }
                                local_338 = CONCAT44(iVar38,(int)local_338);
                                FUN_14008f53c(local_5e8,iVar33);
                                iVar38 = (int)local_338 + 1;
                              }
                              iVar33 = iVar38 + 0x1f;
                              if (-1 < iVar38) {
                                iVar33 = iVar38;
                              }
                              local_338 = CONCAT44(local_338._4_4_,iVar38);
                              if (iVar38 % 0x20 != 0) {
                                puVar18 = local_340;
                                if (local_340 == (uint *)0x0) {
                                  puVar18 = local_5e8;
                                }
                                bVar22 = -(char)(iVar38 % 0x20);
                                puVar18[iVar33 >> 5] =
                                     (puVar18[iVar33 >> 5] << (bVar22 & 0x1f)) >> (bVar22 & 0x1f);
                              }
                            }
                            lVar14 = (longlong)iVar29;
                            puVar18 = local_340;
                            if (local_340 == (uint *)0x0) {
                              puVar18 = local_5e8;
                            }
                            bVar22 = (byte)uVar39 & 0x1f;
                            puVar18[iVar8 >> 5] =
                                 puVar18[iVar8 >> 5] & (-2 << bVar22 | 0xfffffffeU >> 0x20 - bVar22)
                            ;
                            iVar33 = iVar29;
                          }
                          else {
                            piVar20 = local_358;
                            if (local_358 == (int *)0x0) {
                              piVar20 = local_4d8;
                            }
                            lVar14 = (longlong)(int)uStack_330;
                            uStack_330._4_4_ = uStack_330._4_4_ + -1;
                            uStack_330._0_4_ = piVar20[lVar14 * 6 + 1];
                            if (uStack_330._4_4_ != 0) {
                              piVar20[(longlong)piVar20[lVar14 * 6 + 1] * 6] = -1;
                            }
                          }
                          puVar21 = local_5c0;
                          puVar18 = local_340;
                          if (local_340 == (uint *)0x0) {
                            puVar18 = local_5e8;
                          }
                          iVar29 = iVar33 + 0x1f;
                          if (-1 < iVar33) {
                            iVar29 = iVar33;
                          }
                          puVar18[iVar29 >> 5] = puVar18[iVar29 >> 5] | 1 << ((byte)iVar33 & 0x1f);
                          piVar20 = local_358;
                          if (local_358 == (int *)0x0) {
                            piVar20 = local_4d8;
                          }
                          puVar1 = (ulonglong *)(piVar20 + lVar14 * 6);
                          *puVar1 = uVar23;
                          *(float *)(puVar1 + 1) = fVar43;
                          *(int *)(puVar1 + 2) = -1;
                          uVar6 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) *
                                  -0x7a143595;
                          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
                          uVar6 = uVar6 >> 0x10 ^ uVar6;
                          uVar34 = (int)local_350 - uStack_330._4_4_;
                          if ((uVar34 != 0) && (uVar34 != 1)) {
                            puVar19 = local_308;
                            if (local_308 == (undefined1 *)0x0) {
                              puVar19 = local_5c0;
                            }
                            iVar29 = *(int *)(puVar19 + (ulonglong)(local_300 - 1 & uVar6) * 4);
                            if (iVar29 != -1) {
                              piVar20 = local_358;
                              if (local_358 == (int *)0x0) {
                                piVar20 = local_4d8;
                              }
                              do {
                                puVar2 = (ulonglong *)(piVar20 + (longlong)iVar29 * 6);
                                if (*puVar2 == uVar23) {
                                  iVar29 = *(int *)((longlong)puVar1 + 4);
                                  uVar23 = puVar1[1];
                                  iVar38 = *(int *)((longlong)puVar1 + 0xc);
                                  *(int *)puVar2 = (int)*puVar1;
                                  *(int *)((longlong)puVar2 + 4) = iVar29;
                                  *(int *)(puVar2 + 1) = (int)uVar23;
                                  *(int *)((longlong)puVar2 + 0xc) = iVar38;
                                  FUN_14123dbd8(local_4d8,iVar33);
                                  goto LAB_14422d30a;
                                }
                                iVar29 = (int)puVar2[2];
                              } while (iVar29 != -1);
                            }
                          }
                          uVar23 = (ulonglong)(((uVar34 >> 1) - 1) + (uint)(uVar34 >> 1 == 0)) * 2 +
                                   1;
                          lVar14 = 0x3f;
                          if (uVar23 != 0) {
                            for (; uVar23 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                            }
                          }
                          uVar7 = 1 << ((byte)lVar14 & 0x1f);
                          if ((uint)lVar14 < 3) {
                            uVar7 = 8;
                          }
                          if (uVar34 < 4) {
                            uVar7 = 8;
                          }
                          if (((int)uVar34 < 1) || ((int)uVar7 <= (int)local_300)) {
                            uVar6 = local_300 - 1 & uVar6;
                            *(uint *)((longlong)puVar1 + 0x14) = uVar6;
                            puVar21 = local_308;
                            if (local_308 == (undefined1 *)0x0) {
                              puVar21 = local_5c0;
                            }
                            *(int *)(puVar1 + 2) =
                                 *(int *)(puVar21 +
                                         ((longlong)(int)local_300 - 1U & (longlong)(int)uVar6) * 4)
                            ;
                            puVar21 = local_308;
                            if (local_308 == (undefined1 *)0x0) {
                              puVar21 = local_5c0;
                            }
                            *(int *)(puVar21 +
                                    ((longlong)(int)local_300 - 1U & (longlong)(int)uVar6) * 4) =
                                 iVar33;
                          }
                          else {
                            local_300 = uVar7;
                            if (local_308 == (undefined1 *)0x0) {
                              FUN_140a8e97c(local_5c0,0,uVar7,4);
LAB_14422d36e:
                              uVar6 = 0;
                              do {
                                puVar19 = local_308;
                                if (local_308 == (undefined1 *)0x0) {
                                  puVar19 = puVar21;
                                }
                                *(undefined4 *)
                                 (puVar19 + (ulonglong)(local_300 + 0x7fffffff & uVar6) * 4) =
                                     0xffffffff;
                                uVar6 = uVar6 + 1;
                              } while (uVar7 != uVar6);
                            }
                            else {
                              FUN_1446efa72(local_5b8,0,0,4);
                              uVar7 = local_300;
                              puVar21 = local_5c0;
                              if (local_300 == 0) goto LAB_14422d30a;
                              FUN_140a8e97c(local_5c0,0,local_300,4);
                              if (0 < (int)uVar7) goto LAB_14422d36e;
                            }
                            if ((int)local_338 == 0) {
                              uVar23 = 0;
                              uVar39 = 1;
                              iVar33 = 0;
                              iVar29 = 0;
                            }
                            else {
                              puVar18 = local_340;
                              if (local_340 == (uint *)0x0) {
                                puVar18 = local_5e8;
                              }
                              uVar6 = *puVar18;
                              if (uVar6 == 0) {
                                iVar33 = (int)local_338 + 0x1e;
                                if (-1 < (int)local_338 + -1) {
                                  iVar33 = (int)local_338 + -1;
                                }
                                uVar23 = 0;
                                uVar34 = iVar33 >> 5;
                                if (iVar33 >> 5 < 1) {
                                  uVar34 = 0;
                                }
                                iVar29 = 0;
                                do {
                                  if (uVar34 == uVar23) goto LAB_14422d30a;
                                  iVar29 = iVar29 + 0x20;
                                  uVar6 = puVar18[uVar23 + 1];
                                  uVar23 = uVar23 + 1;
                                } while (uVar6 == 0);
                              }
                              else {
                                uVar23 = 0;
                                iVar29 = 0;
                              }
                              uVar39 = (ulonglong)(-uVar6 & uVar6);
                              uVar41 = uVar39 * 2 + 1;
                              lVar14 = 0x3f;
                              if (uVar41 != 0) {
                                for (; uVar41 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                                }
                              }
                              iVar33 = (iVar29 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                              if ((int)local_338 <= iVar33) {
                                iVar33 = (int)local_338;
                              }
                            }
                            if (iVar33 < (int)local_338) {
                              uVar6 = 0xffffffff;
                              do {
                                piVar20 = local_358;
                                if (local_358 == (int *)0x0) {
                                  piVar20 = local_4d8;
                                }
                                lVar14 = (longlong)iVar33;
                                uVar34 = ((uint)(*(ulonglong *)(piVar20 + lVar14 * 6) >> 0x14) &
                                          0xffff ^ (uint)(*(ulonglong *)(piVar20 + lVar14 * 6) >> 4)
                                         ) * -0x7a143595;
                                uVar34 = (uVar34 >> 0xd ^ uVar34) * -0x3d4d51cb;
                                uVar41 = (longlong)(int)(uVar34 >> 0x10 ^ uVar34) &
                                         (longlong)(int)local_300 - 1U;
                                iVar38 = (int)uVar41;
                                piVar20[lVar14 * 6 + 5] = iVar38;
                                puVar21 = local_308;
                                if (local_308 == (undefined1 *)0x0) {
                                  puVar21 = local_5c0;
                                }
                                piVar20[lVar14 * 6 + 4] =
                                     *(int *)(puVar21 + ((longlong)(int)local_300 - 1U & uVar41) * 4
                                             );
                                puVar21 = local_308;
                                if (local_308 == (undefined1 *)0x0) {
                                  puVar21 = local_5c0;
                                }
                                *(int *)(puVar21 +
                                        ((longlong)iVar38 & (longlong)(int)local_300 - 1U) * 4) =
                                     iVar33;
                                uVar6 = ~(uint)uVar39 & uVar6;
                                puVar18 = local_340;
                                if (local_340 == (uint *)0x0) {
                                  puVar18 = local_5e8;
                                }
                                iVar33 = (int)uVar23;
                                lVar14 = (longlong)iVar33;
                                uVar34 = puVar18[lVar14] & uVar6;
                                if (uVar34 == 0) {
                                  iVar38 = (int)local_338 + 0x1e;
                                  if (-1 < (int)local_338 + -1) {
                                    iVar38 = (int)local_338 + -1;
                                  }
                                  iVar38 = iVar38 >> 5;
                                  iVar8 = iVar38;
                                  if (iVar38 < iVar33) {
                                    iVar8 = iVar33;
                                  }
                                  if (iVar38 <= iVar33) break;
                                  lVar11 = 0;
                                  while( true ) {
                                    iVar29 = iVar29 + 0x20;
                                    uVar34 = puVar18[lVar14 + lVar11 + 1];
                                    if (uVar34 != 0) break;
                                    lVar11 = lVar11 + 1;
                                    if (iVar8 - lVar14 == lVar11) goto LAB_14422d30a;
                                  }
                                  uVar23 = (ulonglong)(iVar33 + (int)lVar11 + 1);
                                  uVar6 = 0xffffffff;
                                }
                                uVar39 = (ulonglong)(-uVar34 & uVar34);
                                uVar41 = uVar39 * 2 + 1;
                                lVar14 = 0x3f;
                                if (uVar41 != 0) {
                                  for (; uVar41 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                                  }
                                }
                                iVar33 = (iVar29 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                              } while (iVar33 < (int)local_338);
                            }
                          }
                        }
                      }
                    }
                  }
LAB_14422d30a:
                  pcVar32 = local_5d0 + 1;
                  plVar30 = local_5c8;
                } while ((longlong)pcVar32 < (longlong)*(int *)(local_558 + 0x20));
              }
            }
            local_569 = 0;
            local_510 = (undefined8 ****)&local_569;
            local_508 = &local_54c;
            local_500 = &local_5a8;
            local_4f8 = &local_558;
            local_4f0 = &local_568;
            local_4e8 = &local_4e0;
            if (0 < (int)local_54c) {
              bVar35 = false;
              do {
                if ((local_54c < 100 && !bVar35) &&
                   (fVar43 = (float)(int)local_54c, uVar6 = rand(),
                   fVar43 / 100.0 < (float)(uVar6 & 0x7fff) / 32767.0)) break;
                if ((int)uStack_590 < 1) {
                  uVar6 = rand();
                  fVar43 = ((float)(uVar6 & 0x7fff) / 32767.0) * (float)local_4e0;
                  plVar30 = local_5c8;
                  if ((int)local_338 == 0) {
                    uVar39 = 1;
                    uVar23 = 0;
                    iVar33 = 0;
                    iVar29 = 0;
                  }
                  else {
                    puVar18 = local_340;
                    if (local_340 == (uint *)0x0) {
                      puVar18 = local_5e8;
                    }
                    uVar6 = *puVar18;
                    if (uVar6 == 0) {
                      iVar33 = (int)local_338 + 0x1e;
                      if (-1 < (int)local_338 + -1) {
                        iVar33 = (int)local_338 + -1;
                      }
                      uVar23 = 0;
                      uVar39 = (ulonglong)(uint)(iVar33 >> 5);
                      if (iVar33 >> 5 < 1) {
                        uVar39 = uVar23;
                      }
                      iVar29 = 0;
                      do {
                        if (uVar39 == uVar23) goto LAB_14422cd59;
                        iVar29 = iVar29 + 0x20;
                        uVar6 = puVar18[uVar23 + 1];
                        uVar23 = uVar23 + 1;
                      } while (uVar6 == 0);
                    }
                    else {
                      uVar23 = 0;
                      iVar29 = 0;
                    }
                    uVar39 = (ulonglong)(-uVar6 & uVar6);
                    uVar41 = uVar39 * 2 + 1;
                    lVar14 = 0x3f;
                    if (uVar41 != 0) {
                      for (; uVar41 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                      }
                    }
                    iVar33 = (iVar29 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                    if ((int)local_338 <= iVar33) {
                      iVar33 = (int)local_338;
                    }
                  }
                  if (iVar33 == (int)local_338) break;
                  piVar20 = local_358;
                  if (local_358 == (int *)0x0) {
                    piVar20 = local_4d8;
                  }
                  iVar38 = (int)local_338 + 0x1e;
                  if (-1 < (int)local_338 + -1) {
                    iVar38 = (int)local_338 + -1;
                  }
                  iVar38 = iVar38 >> 5;
                  puVar18 = local_340;
                  if (local_340 == (uint *)0x0) {
                    puVar18 = local_5e8;
                  }
                  uVar6 = 0xffffffff;
                  fVar42 = 0.0;
                  while( true ) {
                    bVar35 = fVar42 <= fVar43;
                    fVar42 = fVar42 + (float)piVar20[(longlong)iVar33 * 6 + 2];
                    iVar8 = (int)uVar23;
                    if ((bVar35) && (fVar43 <= fVar42)) break;
                    uVar6 = uVar6 & ~(uint)uVar39;
                    lVar14 = (longlong)iVar8;
                    uVar34 = puVar18[lVar14] & uVar6;
                    if (uVar34 == 0) {
                      iVar33 = iVar38;
                      if (iVar38 < iVar8) {
                        iVar33 = iVar8;
                      }
                      if (iVar38 <= iVar8) goto LAB_14422cd59;
                      lVar11 = 0;
                      while( true ) {
                        iVar29 = iVar29 + 0x20;
                        uVar34 = puVar18[lVar14 + lVar11 + 1];
                        if (uVar34 != 0) break;
                        lVar11 = lVar11 + 1;
                        if (iVar33 - lVar14 == lVar11) goto LAB_14422cd59;
                      }
                      uVar23 = (ulonglong)(iVar8 + (int)lVar11 + 1);
                      uVar6 = 0xffffffff;
                    }
                    uVar39 = (ulonglong)(-uVar34 & uVar34);
                    uVar41 = uVar39 * 2 + 1;
                    lVar14 = 0x3f;
                    if (uVar41 != 0) {
                      for (; uVar41 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                      }
                    }
                    iVar33 = (iVar29 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                    if ((int)local_338 <= iVar33) goto LAB_14422cd59;
                  }
                  local_578 = *(longlong *)(piVar20 + (longlong)iVar33 * 6);
                  if (local_578 == 0) {
LAB_14422cad3:
                    FUN_14123daaa(&local_4e0);
                  }
                  else {
                    local_2f8 = (code *)((ulonglong)local_2f8 & 0xffffff0000000000);
                    local_170 = (longlong *)0x0;
                    local_168 = 0x1000000000;
                    local_158 = (uint *)0x0;
                    local_150 = 0x2000000000;
                    uStack_148._0_4_ = -1;
                    uStack_148._4_4_ = 0;
                    local_120 = (undefined1 *)0x0;
                    local_118 = 0;
                    if ((longlong)*(int *)(local_578 + 0x20) != 0) {
                      pcVar32 = *(code **)(local_578 + 0x18);
                      local_5d0 = pcVar32 + (longlong)*(int *)(local_578 + 0x20) * 0x70;
                      puVar21 = local_5f0;
                      local_5d8 = param_2;
                      do {
                        lVar14 = *(longlong *)(pcVar32 + 8);
                        if (lVar14 == 0) {
                          FUN_14117f018();
                          lVar14 = FUN_14477b664();
                          *(longlong *)(pcVar32 + 8) = lVar14;
                        }
                        uVar23 = *(ulonglong *)(pcVar32 + 0x10);
                        if (uVar23 == 0) {
                          if ((lVar14 != 0) && (*(longlong *)pcVar32 != 0)) {
                            plVar30 = *(longlong **)(lVar14 + 0xb8);
                            if ((plVar30 == (longlong *)0x0) ||
                               (cVar4 = (**(code **)(*plVar30 + 0x108))(), cVar4 == '\0')) {
                              *(longlong *)(pcVar32 + 0x10) = 0;
                            }
                            else {
                              (**(code **)(*plVar30 + 0x110))(plVar30);
                              uVar23 = FUN_144aff482();
                              *(ulonglong *)(pcVar32 + 0x10) = uVar23;
                              if (uVar23 != 0) goto LAB_14422bc5a;
                            }
                          }
                        }
                        else {
LAB_14422bc5a:
                          if ((*(int *)(param_2 + 8) == 0) ||
                             (cVar4 = FUN_1410a8654(), cVar4 == '\0')) {
                            if ((pcVar32[0x68] == (code)0x1) &&
                               (lVar14 = FUN_14049cbd6(local_540), lVar14 != 0)) {
                              FUN_148ceedd1(local_548,lVar14);
                              FUN_1470e0be8(pcVar32 + 0x20,local_110,local_548,local_540);
                              if (local_f0 == 3) {
                                fVar43 = local_110[0];
                                bVar22 = 3;
                              }
                              else {
                                FUN_1400b56fe(&local_e8);
                                fVar43 = 0.0;
                                if (local_c8 != 0) {
                                  fVar43 = local_e8;
                                }
                                pcVar28 = *(code **)((longlong)&DAT_14c9a85d0 +
                                                    (ulonglong)((uint)local_c8 * 0x120));
                                if (pcVar28 != (code *)0x0) {
                                  pfVar25 = &local_e8;
                                  if (0x18 < local_d0) {
                                    pfVar25 = (float *)CONCAT44(uStack_e4,local_e8);
                                  }
                                  (*pcVar28)(pfVar25);
                                }
                                bVar22 = local_f0;
                                if (0x18 < local_d0) {
                                  FUN_1400020a8(CONCAT44(uStack_e4,local_e8));
                                  bVar22 = local_f0;
                                }
                              }
                              fVar43 = fVar43 * *(float *)(pcVar32 + 0x60);
                              pcVar28 = *(code **)((longlong)&DAT_14c9a85d0 +
                                                  (ulonglong)((uint)bVar22 * 0x120));
                              if (pcVar28 != (code *)0x0) {
                                (*pcVar28)();
                              }
                              puVar21 = local_5f0;
                              if (0x18 < local_f8) {
                                FUN_1400020a8();
                                puVar21 = local_5f0;
                              }
                            }
                            else {
                              FUN_1448729ea(pcVar32 + 0x18);
                              if (local_f0 == 3) {
                                uVar6 = 3;
                                fVar43 = local_110[0];
                              }
                              else {
                                FUN_1400b56fe(&local_e8);
                                fVar43 = 0.0;
                                if (local_c8 != 0) {
                                  fVar43 = local_e8;
                                }
                                pcVar28 = *(code **)((longlong)&DAT_14c9a85d0 +
                                                    (ulonglong)((uint)local_c8 * 0x120));
                                if (pcVar28 != (code *)0x0) {
                                  pfVar25 = &local_e8;
                                  if (0x18 < local_d0) {
                                    pfVar25 = (float *)CONCAT44(uStack_e4,local_e8);
                                  }
                                  (*pcVar28)(pfVar25);
                                }
                                if (0x18 < local_d0) {
                                  FUN_1400020a8(CONCAT44(uStack_e4,local_e8));
                                }
                                uVar6 = (uint)local_f0;
                                puVar21 = local_5f0;
                              }
                              pcVar28 = *(code **)((longlong)&DAT_14c9a85d0 +
                                                  (ulonglong)(uVar6 * 0x120));
                              if (pcVar28 != (code *)0x0) {
                                (*pcVar28)();
                                puVar21 = local_5f0;
                              }
                              if (0x18 < local_f8) {
                                FUN_1400020a8();
                              }
                            }
                            iVar33 = (int)uStack_148;
                            if ((0.0 < fVar43) && ((1e-08 < fVar43 || (local_2f8._4_1_ == '\x01'))))
                            {
                              iVar29 = (int)local_168;
                              uVar39 = local_168 & 0xffffffff;
                              fVar42 = (float)local_2f8;
                              if ((int)local_168 != uStack_148._4_4_) {
                                uVar6 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) *
                                        -0x7a143595;
                                uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
                                puVar19 = local_120;
                                if (local_120 == (undefined1 *)0x0) {
                                  puVar19 = puVar21;
                                }
                                iVar38 = *(int *)(puVar19 +
                                                 (ulonglong)
                                                 (local_118 - 1 & (uVar6 >> 0x10 ^ uVar6)) * 4);
                                if (iVar38 != -1) {
                                  plVar30 = local_170;
                                  if (local_170 == (longlong *)0x0) {
                                    plVar30 = &lStack_2f0;
                                  }
                                  do {
                                    puVar1 = (ulonglong *)(plVar30 + (longlong)iVar38 * 3);
                                    if (*puVar1 == uVar23) {
                                      if ((float *)(puVar1 + 1) != (float *)0x0 &&
                                          puVar1 != (ulonglong *)0x0) {
                                        fVar42 = (float)local_2f8 - *(float *)(puVar1 + 1);
                                      }
                                      break;
                                    }
                                    iVar38 = (int)puVar1[2];
                                  } while (iVar38 != -1);
                                }
                              }
                              local_2f8 = (code *)CONCAT44(local_2f8._4_4_,fVar42 + fVar43);
                              if (uStack_148._4_4_ == 0) {
                                local_168 = CONCAT44(local_168._4_4_,(int)local_168 + 1);
                                if (local_168._4_4_ == iVar29) {
                                  FUN_14593ecc2(&lStack_2f0,uVar39);
                                }
                                uVar41 = local_150;
                                if ((int)local_150 == 0) {
                                  iVar33 = -1;
                                }
                                else {
                                  iVar33 = (int)local_150 + 0x1e;
                                  if (-1 < (int)local_150 + -1) {
                                    iVar33 = (int)local_150 + -1;
                                  }
                                  iVar33 = iVar33 >> 5;
                                }
                                iVar38 = (int)local_150 + 1;
                                iVar29 = (int)local_150 + 0x1f;
                                if (-1 < (int)local_150) {
                                  iVar29 = (int)local_150;
                                }
                                if (iVar29 >> 5 == iVar33) {
                                  local_150 = CONCAT44(local_150._4_4_,iVar38);
                                }
                                else {
                                  if (local_150._4_4_ <= (int)local_150) {
                                    local_5f8 = uVar39;
                                    if ((int)local_150 + 0x20U < 0x40) {
                                      iVar38 = 0x20;
                                      iVar33 = (int)local_150;
                                    }
                                    else {
                                      uVar6 = (int)local_150 + 0x20U >> 5;
                                      if (local_150._4_4_ + 0x1fU < 0x40) {
                                        uVar34 = 4;
                                        if (4 < uVar6) {
                                          uVar34 = uVar6;
                                        }
                                      }
                                      else {
                                        uVar34 = uVar6 + (uVar6 * 3 >> 3) + 0x10;
                                      }
                                      uVar39 = (ulonglong)(uVar34 * 4);
                                      if (DAT_14c872d28 != (longlong *)0x0) {
                                        if (*(code **)(*DAT_14c872d28 + 0x60) ==
                                            (code *)&LAB_14489e5c8) {
                                          uVar7 = (uint)(uVar39 + 0xf);
                                          if (uVar34 < 0x1ffd) {
                                            uVar39 = (ulonglong)
                                                     (ushort)(&DAT_14c841d90)
                                                             [0x32 - (byte)(&DAT_14c841e00)
                                                                           [uVar7 >> 4]];
                                          }
                                          else {
                                            uVar24 = uVar39 + 0xf & 0xfffffffffffffff0;
                                            if (uVar24 < 0x7ff1) {
                                              bVar22 = (&DAT_14c841e00)[uVar7 >> 4];
                                              uVar31 = 0x32;
                                              if (0x32 < bVar22) {
                                                uVar31 = (ulonglong)bVar22;
                                              }
                                              uVar36 = 0x32 - (ulonglong)bVar22;
                                              do {
                                                uVar39 = (ulonglong)
                                                         (ushort)(&DAT_14c841d90)
                                                                 [uVar36 & 0xffffffff];
                                                if (((&DAT_14c841d90)[uVar36 & 0xffffffff] & 0xf) ==
                                                    0) goto LAB_14422c466;
                                                lVar14 = uVar31 + 1 + uVar36;
                                                uVar36 = uVar36 - 1;
                                              } while (lVar14 != 0x33);
                                            }
                                            uVar39 = (ulonglong)DAT_14c841df8;
                                            if (DAT_14c841df8 < 0x11) {
                                              uVar39 = 0x10;
                                            }
                                            uVar39 = -uVar39 & (uVar24 + uVar39) - 1;
                                          }
                                        }
                                        else {
                                          uVar39 = (**(code **)(*DAT_14c872d28 + 0x60))
                                                             (DAT_14c872d28,uVar39,0);
                                        }
                                      }
LAB_14422c466:
                                      iVar8 = (int)(uVar39 >> 2);
                                      iVar38 = iVar8 << 5;
                                      iVar33 = (int)local_150;
                                      if (iVar8 < (int)uVar6) {
                                        iVar38 = -0x20;
                                      }
                                    }
                                    local_150 = CONCAT44(iVar38,(int)local_150);
                                    FUN_14008f53c(local_5e0,iVar33);
                                    iVar38 = (int)local_150 + 1;
                                    uVar39 = local_5f8;
                                  }
                                  iVar33 = iVar38 + 0x1f;
                                  if (-1 < iVar38) {
                                    iVar33 = iVar38;
                                  }
                                  local_150 = CONCAT44(local_150._4_4_,iVar38);
                                  if (iVar38 % 0x20 != 0) {
                                    puVar18 = local_158;
                                    if (local_158 == (uint *)0x0) {
                                      puVar18 = local_5e0;
                                    }
                                    bVar22 = -(char)(iVar38 % 0x20);
                                    puVar18[iVar33 >> 5] =
                                         (puVar18[iVar33 >> 5] << (bVar22 & 0x1f)) >>
                                         (bVar22 & 0x1f);
                                  }
                                }
                                iVar33 = (int)uVar39;
                                lVar14 = (longlong)iVar33;
                                puVar18 = local_158;
                                if (local_158 == (uint *)0x0) {
                                  puVar18 = local_5e0;
                                }
                                bVar22 = (byte)uVar41 & 0x1f;
                                puVar18[iVar29 >> 5] =
                                     puVar18[iVar29 >> 5] &
                                     (-2 << bVar22 | 0xfffffffeU >> 0x20 - bVar22);
                              }
                              else {
                                plVar30 = local_170;
                                if (local_170 == (longlong *)0x0) {
                                  plVar30 = &lStack_2f0;
                                }
                                lVar14 = (longlong)(int)uStack_148;
                                uStack_148._0_4_ = *(int *)((longlong)plVar30 + lVar14 * 0x18 + 4);
                                uStack_148._4_4_ = uStack_148._4_4_ + -1;
                                if (uStack_148._4_4_ != 0) {
                                  *(undefined4 *)(plVar30 + (longlong)(int)uStack_148 * 3) =
                                       0xffffffff;
                                }
                              }
                              param_2 = local_5d8;
                              puVar21 = local_5f0;
                              puVar18 = local_158;
                              if (local_158 == (uint *)0x0) {
                                puVar18 = local_5e0;
                              }
                              iVar29 = iVar33 + 0x1f;
                              if (-1 < iVar33) {
                                iVar29 = iVar33;
                              }
                              puVar18[iVar29 >> 5] =
                                   puVar18[iVar29 >> 5] | 1 << ((byte)iVar33 & 0x1f);
                              plVar30 = local_170;
                              if (local_170 == (longlong *)0x0) {
                                plVar30 = &lStack_2f0;
                              }
                              puVar1 = (ulonglong *)(plVar30 + lVar14 * 3);
                              *puVar1 = uVar23;
                              *(float *)(puVar1 + 1) = fVar43;
                              *(undefined4 *)(puVar1 + 2) = 0xffffffff;
                              uVar6 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) *
                                      -0x7a143595;
                              uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
                              uVar6 = uVar6 >> 0x10 ^ uVar6;
                              uVar34 = (int)local_168 - uStack_148._4_4_;
                              if (1 < uVar34) {
                                puVar19 = local_120;
                                if (local_120 == (undefined1 *)0x0) {
                                  puVar19 = local_5f0;
                                }
                                iVar29 = *(int *)(puVar19 + (ulonglong)(local_118 - 1 & uVar6) * 4);
                                if (iVar29 != -1) {
                                  plVar30 = local_170;
                                  if (local_170 == (longlong *)0x0) {
                                    plVar30 = &lStack_2f0;
                                  }
                                  do {
                                    puVar2 = (ulonglong *)(plVar30 + (longlong)iVar29 * 3);
                                    if (*puVar2 == uVar23) {
                                      uVar9 = *(undefined4 *)((longlong)puVar1 + 4);
                                      uVar23 = puVar1[1];
                                      uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
                                      *(int *)puVar2 = (int)*puVar1;
                                      *(undefined4 *)((longlong)puVar2 + 4) = uVar9;
                                      *(int *)(puVar2 + 1) = (int)uVar23;
                                      *(undefined4 *)((longlong)puVar2 + 0xc) = uVar3;
                                      FUN_148e10f10();
                                      puVar21 = local_5f0;
                                      goto LAB_14422c04f;
                                    }
                                    iVar29 = (int)puVar2[2];
                                  } while (iVar29 != -1);
                                }
                              }
                              uVar23 = (ulonglong)(((uVar34 >> 1) - 1) + (uint)(uVar34 >> 1 == 0)) *
                                       2 + 1;
                              lVar14 = 0x3f;
                              if (uVar23 != 0) {
                                for (; uVar23 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                                }
                              }
                              uVar7 = 1 << ((byte)lVar14 & 0x1f);
                              if ((uint)lVar14 < 3) {
                                uVar7 = 8;
                              }
                              if (uVar34 < 4) {
                                uVar7 = 8;
                              }
                              if (((int)uVar34 < 1) || ((int)uVar7 <= (int)local_118)) {
                                uVar6 = local_118 - 1 & uVar6;
                                *(uint *)((longlong)puVar1 + 0x14) = uVar6;
                                puVar19 = local_120;
                                if (local_120 == (undefined1 *)0x0) {
                                  puVar19 = local_5f0;
                                }
                                *(undefined4 *)(puVar1 + 2) =
                                     *(undefined4 *)
                                      (puVar19 +
                                      ((longlong)(int)local_118 - 1U & (longlong)(int)uVar6) * 4);
                                puVar19 = local_120;
                                if (local_120 == (undefined1 *)0x0) {
                                  puVar19 = local_5f0;
                                }
                                *(int *)(puVar19 +
                                        ((longlong)(int)local_118 - 1U & (longlong)(int)uVar6) * 4)
                                     = iVar33;
                              }
                              else {
                                local_118 = uVar7;
                                if (local_120 == (undefined1 *)0x0) {
                                  FUN_140a8e97c(local_5f0,0,uVar7,4);
LAB_14422c09a:
                                  uVar6 = 0;
                                  do {
                                    puVar19 = local_120;
                                    if (local_120 == (undefined1 *)0x0) {
                                      puVar19 = puVar21;
                                    }
                                    *(undefined4 *)
                                     (puVar19 + (ulonglong)(local_118 + 0x7fffffff & uVar6) * 4) =
                                         0xffffffff;
                                    uVar6 = uVar6 + 1;
                                  } while (uVar7 != uVar6);
                                }
                                else {
                                  FUN_1446efa72(local_5b0,0,0,4);
                                  uVar7 = local_118;
                                  puVar21 = local_5f0;
                                  if (local_118 == 0) goto LAB_14422c04f;
                                  FUN_140a8e97c(local_5f0,0,local_118,4);
                                  if (0 < (int)uVar7) goto LAB_14422c09a;
                                }
                                if ((int)local_150 == 0) {
                                  uVar23 = 0;
                                  uVar39 = 1;
                                  iVar29 = 0;
                                  iVar33 = 0;
                                }
                                else {
                                  puVar18 = local_158;
                                  if (local_158 == (uint *)0x0) {
                                    puVar18 = local_5e0;
                                  }
                                  uVar6 = *puVar18;
                                  if (uVar6 == 0) {
                                    iVar33 = (int)local_150 + 0x1e;
                                    if (-1 < (int)local_150 + -1) {
                                      iVar33 = (int)local_150 + -1;
                                    }
                                    uVar23 = 0;
                                    uVar34 = iVar33 >> 5;
                                    if (iVar33 >> 5 < 1) {
                                      uVar34 = 0;
                                    }
                                    iVar33 = 0;
                                    do {
                                      if (uVar34 == uVar23) goto LAB_14422c04f;
                                      iVar33 = iVar33 + 0x20;
                                      uVar6 = puVar18[uVar23 + 1];
                                      uVar23 = uVar23 + 1;
                                    } while (uVar6 == 0);
                                  }
                                  else {
                                    uVar23 = 0;
                                    iVar33 = 0;
                                  }
                                  uVar39 = (ulonglong)(-uVar6 & uVar6);
                                  uVar41 = uVar39 * 2 + 1;
                                  lVar14 = 0x3f;
                                  if (uVar41 != 0) {
                                    for (; uVar41 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                                    }
                                  }
                                  iVar29 = (iVar33 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                                  if ((int)local_150 <= iVar29) {
                                    iVar29 = (int)local_150;
                                  }
                                }
                                if (iVar29 < (int)local_150) {
                                  uVar6 = 0xffffffff;
                                  do {
                                    local_5f8 = CONCAT44(local_5f8._4_4_,iVar33);
                                    plVar30 = local_170;
                                    if (local_170 == (longlong *)0x0) {
                                      plVar30 = &lStack_2f0;
                                    }
                                    lVar14 = (longlong)iVar29;
                                    uVar34 = ((uint)((ulonglong)plVar30[lVar14 * 3] >> 0x14) &
                                              0xffff ^ (uint)((ulonglong)plVar30[lVar14 * 3] >> 4))
                                             * -0x7a143595;
                                    uVar34 = (uVar34 >> 0xd ^ uVar34) * -0x3d4d51cb;
                                    uVar41 = (longlong)(int)(uVar34 >> 0x10 ^ uVar34) &
                                             (longlong)(int)local_118 - 1U;
                                    iVar38 = (int)uVar41;
                                    *(int *)((longlong)plVar30 + lVar14 * 0x18 + 0x14) = iVar38;
                                    puVar19 = local_120;
                                    if (local_120 == (undefined1 *)0x0) {
                                      puVar19 = puVar21;
                                    }
                                    *(undefined4 *)(plVar30 + lVar14 * 3 + 2) =
                                         *(undefined4 *)
                                          (puVar19 + ((longlong)(int)local_118 - 1U & uVar41) * 4);
                                    puVar19 = local_120;
                                    if (local_120 == (undefined1 *)0x0) {
                                      puVar19 = puVar21;
                                    }
                                    *(int *)(puVar19 +
                                            ((longlong)iVar38 & (longlong)(int)local_118 - 1U) * 4)
                                         = iVar29;
                                    uVar6 = ~(uint)uVar39 & uVar6;
                                    puVar18 = local_158;
                                    if (local_158 == (uint *)0x0) {
                                      puVar18 = local_5e0;
                                    }
                                    iVar29 = (int)uVar23;
                                    lVar14 = (longlong)iVar29;
                                    uVar34 = puVar18[lVar14] & uVar6;
                                    puVar21 = local_5f0;
                                    param_2 = local_5d8;
                                    if (uVar34 == 0) {
                                      iVar38 = (int)local_150 + 0x1e;
                                      if (-1 < (int)local_150 + -1) {
                                        iVar38 = (int)local_150 + -1;
                                      }
                                      iVar38 = iVar38 >> 5;
                                      iVar8 = iVar38;
                                      if (iVar38 < iVar29) {
                                        iVar8 = iVar29;
                                      }
                                      if (iVar38 <= iVar29) break;
                                      lVar11 = 0;
                                      while( true ) {
                                        iVar33 = iVar33 + 0x20;
                                        local_5f8 = CONCAT44(local_5f8._4_4_,iVar33);
                                        uVar34 = puVar18[lVar14 + lVar11 + 1];
                                        if (uVar34 != 0) break;
                                        lVar11 = lVar11 + 1;
                                        if (iVar8 - lVar14 == lVar11) goto LAB_14422c04f;
                                      }
                                      uVar23 = (ulonglong)(iVar29 + (int)lVar11 + 1);
                                      uVar6 = 0xffffffff;
                                    }
                                    uVar39 = (ulonglong)(-uVar34 & uVar34);
                                    uVar41 = uVar39 * 2 + 1;
                                    lVar14 = 0x3f;
                                    if (uVar41 != 0) {
                                      for (; uVar41 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                                      }
                                    }
                                    iVar29 = ((int)local_5f8 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                                    iVar33 = (int)local_5f8;
                                  } while (iVar29 < (int)local_150);
                                }
                              }
                            }
                          }
                        }
LAB_14422c04f:
                        pcVar32 = pcVar32 + 0x70;
                      } while (pcVar32 != local_5d0);
                    }
                    uVar6 = rand();
                    fVar43 = ((float)(uVar6 & 0x7fff) / 32767.0) * (float)local_2f8;
                    if ((int)local_150 == 0) {
                      uVar39 = 1;
                      uVar23 = 0;
                      iVar33 = 0;
                      iVar29 = 0;
                    }
                    else {
                      puVar18 = local_158;
                      if (local_158 == (uint *)0x0) {
                        puVar18 = local_5e0;
                      }
                      uVar6 = *puVar18;
                      if (uVar6 == 0) {
                        iVar33 = (int)local_150 + 0x1e;
                        if (-1 < (int)local_150 + -1) {
                          iVar33 = (int)local_150 + -1;
                        }
                        uVar23 = 0;
                        uVar39 = (ulonglong)(uint)(iVar33 >> 5);
                        if (iVar33 >> 5 < 1) {
                          uVar39 = uVar23;
                        }
                        iVar29 = 0;
                        do {
                          if (uVar39 == uVar23) goto LAB_14422ca1f;
                          iVar29 = iVar29 + 0x20;
                          uVar6 = puVar18[uVar23 + 1];
                          uVar23 = uVar23 + 1;
                        } while (uVar6 == 0);
                      }
                      else {
                        uVar23 = 0;
                        iVar29 = 0;
                      }
                      uVar39 = (ulonglong)(-uVar6 & uVar6);
                      uVar41 = uVar39 * 2 + 1;
                      lVar14 = 0x3f;
                      if (uVar41 != 0) {
                        for (; uVar41 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                        }
                      }
                      iVar33 = (iVar29 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                      if ((int)local_150 <= iVar33) {
                        iVar33 = (int)local_150;
                      }
                    }
                    if (iVar33 == (int)local_150) {
LAB_14422ca1f:
                      lVar14 = 0;
                    }
                    else {
                      plVar30 = local_170;
                      if (local_170 == (longlong *)0x0) {
                        plVar30 = &lStack_2f0;
                      }
                      iVar38 = (int)local_150 + 0x1e;
                      if (-1 < (int)local_150 + -1) {
                        iVar38 = (int)local_150 + -1;
                      }
                      iVar38 = iVar38 >> 5;
                      puVar18 = local_158;
                      if (local_158 == (uint *)0x0) {
                        puVar18 = local_5e0;
                      }
                      uVar6 = 0xffffffff;
                      fVar42 = 0.0;
                      do {
                        bVar35 = fVar42 <= fVar43;
                        fVar42 = fVar42 + *(float *)(plVar30 + (longlong)iVar33 * 3 + 1);
                        if ((bVar35) && (fVar43 <= fVar42)) {
                          lVar14 = plVar30[(longlong)iVar33 * 3];
                          break;
                        }
                        uVar6 = uVar6 & ~(uint)uVar39;
                        iVar33 = (int)uVar23;
                        lVar11 = (longlong)iVar33;
                        uVar34 = puVar18[lVar11] & uVar6;
                        if (uVar34 == 0) {
                          iVar8 = iVar38;
                          if (iVar38 < iVar33) {
                            iVar8 = iVar33;
                          }
                          if (iVar38 <= iVar33) goto LAB_14422ca1f;
                          local_5d0 = (code *)(puVar18 + lVar11 + 1);
                          lVar13 = 0;
                          while( true ) {
                            iVar29 = iVar29 + 0x20;
                            uVar34 = *(uint *)(local_5d0 + lVar13 * 4);
                            if (uVar34 != 0) break;
                            lVar13 = lVar13 + 1;
                            lVar14 = 0;
                            if (iVar8 - lVar11 == lVar13) goto LAB_14422ca2b;
                          }
                          uVar23 = (ulonglong)(iVar33 + (int)lVar13 + 1);
                          uVar6 = 0xffffffff;
                        }
                        uVar39 = (ulonglong)(-uVar34 & uVar34);
                        uVar41 = uVar39 * 2 + 1;
                        lVar14 = 0x3f;
                        if (uVar41 != 0) {
                          for (; uVar41 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                          }
                        }
                        iVar33 = (iVar29 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                        lVar14 = 0;
                      } while (iVar33 < (int)local_150);
                    }
LAB_14422ca2b:
                    local_118 = 0;
                    if (local_120 != (undefined1 *)0x0) {
                      FUN_1400020a8();
                    }
                    uVar23 = local_168 >> 0x20;
                    local_168 = local_168 & 0xffffffff00000000;
                    if ((int)uVar23 != 0) {
                      FUN_140373856(&lStack_2f0,0);
                    }
                    uStack_148 = 0xffffffff;
                    uVar23 = local_150 >> 0x20;
                    local_150 = local_150 & 0xffffffff00000000;
                    if (0x20 < (uint)uVar23) {
                      local_150 = 0x2000000000;
                      FUN_14008f53c(local_5e0,0);
                    }
                    if (local_158 != (uint *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_170 != (longlong *)0x0) {
                      FUN_1400020a8();
                    }
                    if (lVar14 == 0) goto LAB_14422cad3;
                    FUN_14422dfc6(&local_510,lVar14,local_578);
                  }
                  bVar35 = false;
                }
                else {
                  lVar14 = *local_598;
                  local_5f8 = local_5f8 & 0xffffffff00000000;
                  bVar35 = false;
                  local_5d8 = param_2;
                  if (lVar14 != 0) {
                    if (*(int *)(param_2 + 8) != 0) {
                      cVar4 = FUN_1410a8654(lVar14 + 0x18);
                      bVar35 = true;
                      if (cVar4 != '\0') goto LAB_14422cca7;
                    }
                    local_2f8 = (code *)0x0;
                    lStack_2f0 = 0;
                    FUN_148e05190(&local_4e0,&local_2f8);
                    if ((longlong)(int)lStack_2f0 != 0) {
                      local_5d0 = local_2f8 + (longlong)(int)lStack_2f0 * 0x10;
                      pcVar32 = local_2f8;
                      do {
                        lVar11 = *(longlong *)pcVar32;
                        if ((lVar11 != 0) && ((longlong)*(int *)(lVar11 + 0x20) != 0)) {
                          plVar30 = *(longlong **)(lVar11 + 0x18);
                          lVar11 = (longlong)*(int *)(lVar11 + 0x20) * 0x70;
                          do {
                            lVar13 = plVar30[1];
                            if (lVar13 == 0) {
                              uVar12 = FUN_14117f018();
                              lVar13 = FUN_14477b664(uVar12);
                              plVar30[1] = lVar13;
                            }
                            lVar16 = plVar30[2];
                            if (lVar16 == 0) {
                              if (lVar13 == 0) {
                                lVar16 = 0;
                              }
                              else {
                                lVar16 = 0;
                                if (*plVar30 != 0) {
                                  plVar26 = *(longlong **)(lVar13 + 0xb8);
                                  if ((plVar26 == (longlong *)0x0) ||
                                     (cVar4 = (**(code **)(*plVar26 + 0x108))(), cVar4 == '\0')) {
                                    lVar16 = 0;
                                  }
                                  else {
                                    uVar12 = (**(code **)(*plVar26 + 0x110))(plVar26);
                                    lVar16 = FUN_144aff482(uVar12,plVar30);
                                  }
                                  plVar30[2] = lVar16;
                                }
                              }
                            }
                            if (lVar16 == lVar14) {
                              if (plVar30 != (longlong *)0x0) {
                                lVar11 = *(longlong *)pcVar32;
                                goto LAB_14422cc83;
                              }
                              break;
                            }
                            plVar30 = plVar30 + 0xe;
                            lVar11 = lVar11 + -0x70;
                          } while (lVar11 != 0);
                        }
                        pcVar32 = pcVar32 + 0x10;
                      } while (pcVar32 != local_5d0);
                    }
                    lVar11 = 0;
LAB_14422cc83:
                    FUN_14422dfc6(&local_510,lVar14,lVar11);
                    if (local_2f8 != (code *)0x0) {
                      FUN_1400020a8();
                    }
                    bVar35 = false;
                  }
LAB_14422cca7:
                  if ((int)uStack_590 + -1 != 0) {
                    memmove(local_598,local_598 + 1,(longlong)((int)uStack_590 + -1) << 3);
                    local_5f8 = CONCAT44(local_5f8._4_4_,(int)uStack_590 + -1);
                  }
                  uStack_590 = CONCAT44(uStack_590._4_4_,(int)local_5f8);
                  FUN_148e1102a(&local_598);
                  param_2 = local_5d8;
                }
                plVar30 = local_5c8;
              } while (0 < (int)local_54c);
            }
LAB_14422cd59:
            if (local_568 != (void *)0x0) {
              FUN_1400020a8();
            }
            local_300 = 0;
            if (local_308 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            uVar23 = local_350 >> 0x20;
            local_350 = local_350 & 0xffffffff00000000;
            if ((int)uVar23 != 0) {
              FUN_140373856(local_4d8);
            }
            uStack_330 = 0xffffffff;
            uVar23 = local_338 >> 0x20;
            local_338 = local_338 & 0xffffffff00000000;
            if (0x20 < (uint)uVar23) {
              local_338 = 0x2000000000;
              FUN_14008f53c(local_5e8);
            }
            if (local_340 != (uint *)0x0) {
              FUN_1400020a8();
            }
            if (local_358 != (int *)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
  }
  lVar11 = (longlong)(int)uStack_5a0;
  if (lVar11 != 0) {
    lVar13 = 0;
    do {
      FUN_14117e970(param_1,*(undefined8 *)(lVar14 + lVar13));
      lVar13 = lVar13 + 8;
    } while (lVar11 * 8 != lVar13);
  }
  if (local_5a8 != 0) {
    FUN_1400020a8(local_5a8);
  }
LAB_14422dcea:
  if (local_598 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14422dcfc:
  if ((local_c0 ^ (ulonglong)auStack_668) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14422df5c FUN_14422df5c body=49 status=ok
// SIG undefined FUN_14422df5c(void)

void FUN_14422df5c(void)

{
  FUN_140368c45(DAT_14cbd3818,DAT_14cbd3820);
  if (DAT_14cbd3818 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14422dfc6 FUN_14422dfc6 body=374 status=ok
// SIG undefined FUN_14422dfc6(void)

void FUN_14422dfc6(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)*param_1 = 1;
  *(int *)param_1[1] = *(int *)param_1[1] + -100;
  plVar3 = (longlong *)param_1[2];
  iVar2 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar2 + 1U;
  local_50 = param_3;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
    FUN_1418f2e6e(plVar3,iVar2);
  }
  *(undefined8 *)(*plVar3 + (longlong)iVar2 * 8) = param_2;
  if (param_3 != 0) {
    lVar7 = (longlong)*(int *)(*(longlong *)param_1[3] + 0x20);
    lVar12 = -1;
    if (lVar7 != 0) {
      lVar4 = *(longlong *)(*(longlong *)param_1[3] + 0x18);
      uVar11 = 0;
      do {
        plVar3 = (longlong *)(uVar11 + lVar4);
        lVar9 = *(longlong *)(lVar4 + 8 + uVar11);
        if (lVar9 == 0) {
          uVar8 = FUN_145ce225c();
          lVar9 = FUN_14477b664(uVar8);
          plVar3[1] = lVar9;
        }
        lVar10 = *(longlong *)(lVar4 + 0x10 + uVar11);
        if (lVar10 == 0) {
          if (lVar9 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = 0;
            if (*plVar3 != 0) {
              plVar5 = *(longlong **)(lVar9 + 0xb8);
              if ((plVar5 == (longlong *)0x0) ||
                 (cVar6 = (**(code **)(*plVar5 + 0x108))(), cVar6 == '\0')) {
                lVar10 = 0;
              }
              else {
                uVar8 = (**(code **)(*plVar5 + 0x110))(plVar5);
                lVar10 = FUN_144aff482(uVar8,plVar3);
              }
              *(longlong *)(lVar4 + 0x10 + uVar11) = lVar10;
            }
          }
        }
        if (lVar10 == param_3) {
          lVar12 = (longlong)((int)(uVar11 >> 6) * -0x55555555);
          break;
        }
        uVar11 = uVar11 + 0xc0;
      } while (lVar7 * 0xc0 != uVar11);
    }
    piVar1 = (int *)(*(longlong *)param_1[4] + lVar12 * 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14123daaa(param_1[5],&local_50);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14422e1e8 FUN_14422e1e8 body=129 status=ok
// SIG undefined FUN_14422e1e8(void)

void FUN_14422e1e8(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140eb0cd4();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140eb0cd4();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (0 < *(int *)(lVar4 + 0x28) && lVar4 != 0) {
          uVar5 = *(int *)(lVar4 + 0x28) + 1;
          do {
            FUN_1412ec0ca(lVar4,uVar5 - 2);
            uVar5 = uVar5 - 1;
          } while (1 < uVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 14422e2cc FUN_14422e2cc body=655 status=ok
// SIG undefined FUN_14422e2cc(void)

undefined8 * FUN_14422e2cc(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = FUN_14007ca06();
  FUN_140c6b9f8(param_1,uVar6);
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *param_1 = &PTR_FUN_14b5c7440;
  *(undefined4 *)(param_1 + 0x16) = 0xbeef4000;
  param_1[0x17] = "alt_travel_efects";
  FUN_1400b22c2(local_58,"Alt Travel Effects");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (uint *)(param_1 + 0x5a);
  lVar7 = FUN_144007384();
  if (lVar7 == 0) {
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar7);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    iVar5 = DAT_14c9647dc;
    uVar2 = *(uint *)(lVar7 + 0xc);
    if (cVar4 != '\0') {
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_14422e4f4;
      }
    }
    *puVar1 = uVar2;
    if ((int)uVar2 < iVar5) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(lVar7 + 0x10) = iVar8;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar5 = iVar8;
      }
    }
    *(int *)((longlong)param_1 + 0x2d4) = iVar5;
  }
LAB_14422e4f4:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14422e55c FUN_14422e55c body=7 status=ok
// SIG undefined FUN_14422e55c(void)

undefined1 FUN_14422e55c(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x660);
}



// FUNCTION 14422e564 FUN_14422e564 body=3002 status=ok
// SIG undefined FUN_14422e564(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14422e564(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  double *pdVar14;
  undefined8 *puVar15;
  undefined8 *****pppppuVar16;
  undefined8 *puVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double _X;
  double _X_00;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double _X_01;
  undefined1 auStack_268 [32];
  ulonglong local_248;
  double *local_240;
  longlong local_238;
  longlong local_230;
  longlong *local_228;
  longlong local_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  longlong *local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  longlong *plStack_1a0;
  longlong *local_198;
  double dStack_190;
  undefined4 local_180 [2];
  char local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined4 local_150 [4];
  undefined8 ****local_140 [3];
  ushort local_128;
  byte local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 *local_e8;
  int local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_14113258e();
  if (*(longlong *)(param_1 + 0x2960) != 0) {
    local_1b8 = (longlong *)0x0;
    uStack_1b0 = 0;
    FUN_14621adf4(param_1,&local_1b8);
    if ((longlong)(int)uStack_1b0 != 0) {
      local_228 = local_1b8 + (int)uStack_1b0;
      plVar10 = local_1b8;
      local_230 = param_1;
      do {
        lVar8 = *plVar10;
        if (lVar8 != 0) {
          lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x2960) + 0x510);
          if (lVar12 != 0) {
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x2960) + 0x508);
            local_238 = lVar8 + 0x6e8;
            local_220 = lVar9 + 8;
            lVar18 = 0;
            do {
              if (*(longlong *)(lVar8 + 0x658) == *(longlong *)(lVar9 + lVar18)) {
                local_1a8 = (double)((ulonglong)local_1a8 & 0xffffffffffffff00);
                local_180[0] = 0;
                FUN_1456bb102(&local_1a8,param_1);
                local_178 = '\0';
                local_150[0] = 0;
                lVar13 = *(longlong *)(lVar9 + 0x30 + lVar18);
                if (lVar13 == 0) {
                  local_140[0] = *(undefined8 *****)(lVar9 + 0x20 + lVar18);
                  FUN_1446dcdd4(&local_118,local_140);
                  lVar13 = FUN_1448fdc6e(&local_118);
                  if (local_100 != 0) {
                    FUN_1400020a8();
                  }
                  *(longlong *)(lVar9 + 0x30 + lVar18) = lVar13;
                }
                FUN_1400606f6(&local_118,lVar13,&local_1a8);
                puVar15 = local_e8;
                if (local_e8 == (undefined8 *)0x0) {
                  puVar15 = &local_118;
                }
                if (local_e0 < 1) {
                  puVar15 = (undefined8 *)&DAT_14c9a40e0;
                }
                FUN_1400603ec(local_140,lVar13,puVar15);
                puVar15 = local_e8;
                if (local_e8 == (undefined8 *)0x0) {
                  puVar15 = &local_118;
                }
                FUN_1446fdf58(puVar15,local_e0);
                if (local_e8 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
                uVar6 = FUN_140168b7a(local_140,0);
                param_1 = local_230;
                *(undefined1 *)(lVar8 + 0x660) = uVar6;
                pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_120 * 0x120))
                ;
                if (pcVar4 != (code *)0x0) {
                  pppppuVar16 = local_140;
                  if (0x18 < local_128) {
                    pppppuVar16 = (undefined8 *****)local_140[0];
                  }
                  (*pcVar4)(pppppuVar16);
                }
                if (0x18 < local_128) {
                  FUN_1400020a8(local_140[0]);
                }
                FUN_1448173f8(local_150);
                if (local_178 != '\0') {
                  if (local_178 == '\x01') {
                    local_170 = 0;
                  }
                  else if ((local_178 == '\x03') && (local_168 != (longlong *)0x0)) {
                    LOCK();
                    piVar1 = (int *)((longlong)local_168 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*local_168 + 0x10))();
                    }
                  }
                  local_178 = '\0';
                }
                FUN_1448173f8(local_180);
                if ((local_1a8._0_1_ == '\x03') && (local_198 != (longlong *)0x0)) {
                  LOCK();
                  piVar1 = (int *)((longlong)local_198 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_198 + 0x10))();
                  }
                }
                FUN_1465a9244(local_238,local_220 + lVar18);
              }
              lVar18 = lVar18 + 0x38;
            } while (lVar12 * 0x38 - lVar18 != 0);
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != local_228);
    }
    if (*(longlong *)(param_1 + 0x29a0) != 0) {
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x2960) + 0x520);
      if (lVar8 != 0) {
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x2960) + 0x518);
        local_238 = lVar8 * 0x70;
        lVar8 = 0;
        do {
          local_1a8 = (double)((ulonglong)local_1a8 & 0xffffffffffffff00);
          local_180[0] = 0;
          FUN_1456bb102(&local_1a8,param_1);
          local_178 = '\0';
          local_150[0] = 0;
          lVar9 = *(longlong *)(lVar12 + 0x68 + lVar8);
          if (lVar9 == 0) {
            local_140[0] = *(undefined8 *****)(lVar12 + 0x58 + lVar8);
            FUN_1446dcdd4(&local_118,local_140);
            lVar9 = FUN_1448fdc6e(&local_118);
            if (local_100 != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar12 + 0x68 + lVar8) = lVar9;
          }
          FUN_1400606f6(&local_118,lVar9,&local_1a8);
          FUN_1400603ec(local_140,lVar9);
          puVar15 = local_e8;
          if (local_e8 == (undefined8 *)0x0) {
            puVar15 = &local_118;
          }
          FUN_1446fdf58(puVar15,local_e0);
          if (local_e8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          cVar7 = FUN_140168b7a(local_140,0);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_120 * 0x120));
          if (pcVar4 != (code *)0x0) {
            pppppuVar16 = local_140;
            if (0x18 < local_128) {
              pppppuVar16 = (undefined8 *****)local_140[0];
            }
            (*pcVar4)(pppppuVar16);
          }
          if (0x18 < local_128) {
            FUN_1400020a8(local_140[0]);
          }
          FUN_1448173f8(local_150);
          if (local_178 != '\0') {
            if (local_178 == '\x01') {
              local_170 = 0;
            }
            else if ((local_178 == '\x03') && (local_168 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_168 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_168 + 0x10))();
              }
            }
            local_178 = '\0';
          }
          FUN_1448173f8(local_180);
          if ((local_1a8._0_1_ == '\x03') && (local_198 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_198 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_198 + 0x10))();
            }
          }
          if (cVar7 != '\0') {
            if (*(char *)(lVar12 + lVar8) == '\x01') {
              lVar9 = *(longlong *)(param_1 + 0x29a0);
              local_1c8 = *(undefined8 *)(lVar12 + 0x18 + lVar8);
              puVar15 = (undefined8 *)(lVar12 + 8 + lVar8);
              local_1d8 = *puVar15;
              uStack_1d0 = puVar15[1];
              auVar24 = *(undefined1 (*) [16])(lVar9 + 0x1b0);
              dVar20 = auVar24._0_8_;
              dVar21 = auVar24._8_8_;
              dVar19 = *(double *)(lVar9 + 0x1c0);
              pdVar14 = *(double **)(lVar9 + 0x230);
              if (pdVar14 == (double *)0x0) {
                pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
                dVar22 = DAT_14c8463d8;
                *pdVar14 = DAT_14c8463d0;
                pdVar14[1] = dVar22;
                dVar22 = DAT_14c8463e8;
                pdVar14[2] = DAT_14c8463e0;
                pdVar14[3] = dVar22;
                dVar22 = DAT_14c846500;
                pdVar14[4] = DAT_14c8464f8;
                pdVar14[5] = dVar22;
                pdVar14[6] = DAT_14c846508;
                *(double **)(lVar9 + 0x230) = pdVar14;
              }
              auVar28 = _DAT_1499387d0;
              if ((((pdVar14[4] != dVar20) || (NAN(pdVar14[4]) || NAN(dVar20))) ||
                  (pdVar14[5] != dVar21)) || (NAN(pdVar14[5]) || NAN(dVar21))) {
LAB_14422ede4:
                auVar30._8_8_ = 0;
                auVar30._0_8_ = dVar19;
                dVar22 = (double)DAT_1499387d0;
                dVar23 = DAT_1499387d0._8_8_;
                auVar24 = divpd(auVar24,_DAT_1499387d0);
                auVar27 = divpd(auVar30,_DAT_1499387d0);
                auVar24 = roundpd(auVar24,auVar24,3);
                auVar27 = roundpd(auVar27,auVar27,3);
                auVar36._0_8_ = dVar20 - auVar24._0_8_ * dVar22;
                auVar36._8_8_ = dVar21 - auVar24._8_8_ * dVar23;
                auVar31._0_8_ = dVar19 - auVar27._0_8_ * dVar22;
                auVar31._8_8_ = 0.0 - auVar27._8_8_ * dVar23;
                auVar34._0_8_ = auVar36._0_8_ + dVar22;
                auVar34._8_8_ = auVar36._8_8_ + dVar23;
                auVar29._0_8_ = auVar31._0_8_ + dVar22;
                auVar29._8_8_ = auVar31._8_8_ + dVar23;
                auVar27._8_8_ = -(ulonglong)(0.0 <= auVar36._8_8_);
                auVar27._0_8_ = -(ulonglong)(0.0 <= auVar36._0_8_);
                auVar24 = blendvpd(auVar34,auVar36,auVar27);
                auVar35._8_8_ = -(ulonglong)(0.0 <= auVar31._8_8_);
                auVar35._0_8_ = -(ulonglong)(0.0 <= auVar31._0_8_);
                auVar27 = blendvpd(auVar29,auVar31,auVar35);
                auVar32._0_8_ = auVar24._0_8_ + -360.0;
                auVar32._8_8_ = auVar24._8_8_ + -360.0;
                auVar25._8_8_ = -(ulonglong)(180.0 < auVar24._8_8_);
                auVar25._0_8_ = -(ulonglong)(180.0 < auVar24._0_8_);
                auVar35 = blendvpd(auVar24,auVar32,auVar25);
                auVar26._8_8_ = -(ulonglong)(180.0 < auVar27._8_8_);
                auVar26._0_8_ = -(ulonglong)(180.0 < auVar27._0_8_);
                auVar24._8_8_ = auVar27._8_8_ + 0.0;
                auVar24._0_8_ = auVar27._0_8_ + -360.0;
                auVar24 = blendvpd(auVar27,auVar24,auVar26);
                *(undefined1 (*) [16])(pdVar14 + 4) = auVar35;
                dVar19 = auVar24._0_8_;
                pdVar14[6] = dVar19;
                auVar37._8_8_ = 0;
                auVar37._0_8_ = dVar19;
                auVar24 = divpd(auVar35,auVar28);
                auVar28 = divpd(auVar37,auVar28);
                auVar24 = roundpd(auVar24,auVar24,3);
                auVar28 = roundpd(auVar28,auVar28,3);
                dVar33 = (auVar35._0_8_ - auVar24._0_8_ * dVar22) * 0.008726646259971648;
                _X = (auVar35._8_8_ - auVar24._8_8_ * dVar23) * 0.008726646259971648;
                _X_00 = (dVar19 - auVar28._0_8_ * dVar22) * 0.008726646259971648;
                _X_01 = (0.0 - auVar28._8_8_ * dVar23) * 0.008726646259971648;
                dVar19 = sin(dVar33);
                dVar20 = sin(_X);
                dVar21 = sin(_X_00);
                sin(_X_01);
                dVar22 = cos(dVar33);
                dVar23 = cos(_X);
                dVar33 = cos(_X_00);
                cos(_X_01);
                *pdVar14 = dVar19 * dVar20 * dVar33 - dVar22 * dVar23 * dVar21;
                pdVar14[1] = -(dVar19 * dVar23 * dVar33) - dVar22 * dVar20 * dVar21;
                pdVar14[2] = -(dVar23 * dVar19 * dVar21) + dVar20 * dVar22 * dVar33;
                pdVar14[3] = dVar20 * dVar19 * dVar21 + dVar23 * dVar22 * dVar33;
              }
              else if ((pdVar14[6] != dVar19) || (NAN(pdVar14[6]) || NAN(dVar19)))
              goto LAB_14422ede4;
              local_1a8 = *pdVar14;
              plStack_1a0 = (longlong *)pdVar14[1];
              local_198 = (longlong *)pdVar14[2];
              dStack_190 = pdVar14[3];
              local_118 = local_1d8;
              uStack_110 = uStack_1d0;
              local_108 = local_1c8;
              local_240 = (double *)((ulonglong)local_240 & 0xffffffffffffff00);
              local_248 = 0;
              FUN_144927ad4(lVar9,&local_118,&local_1a8,0);
            }
            if (*(char *)(lVar12 + 0x20 + lVar8) == '\x01') {
              local_1e8 = *(undefined8 *)(lVar12 + 0x38 + lVar8);
              puVar15 = (undefined8 *)(lVar12 + 0x28 + lVar8);
              local_1f8 = *puVar15;
              uStack_1f0 = puVar15[1];
              local_248 = local_248 & 0xffffffffffffff00;
              FUN_14020f75c(*(undefined8 *)(param_1 + 0x29a0),&local_1f8,0,0);
            }
            if (*(char *)(lVar12 + 0x40 + lVar8) == '\x01') {
              *(undefined4 *)(*(longlong *)(param_1 + 0x29a0) + 0x2a8) =
                   *(undefined4 *)(lVar12 + 0x44 + lVar8);
            }
            lVar9 = (longlong)*(int *)(lVar12 + 0x50 + lVar8);
            if (lVar9 != 0) {
              lVar8 = *(longlong *)(lVar12 + 0x48 + lVar8);
              lVar12 = 0;
              do {
                iVar2 = *(int *)(lVar8 + lVar12);
                if ((-1 < (longlong)iVar2) &&
                   (iVar2 < *(int *)(*(longlong *)(param_1 + 0x29a0) + 0xc38))) {
                  puVar15 = (undefined8 *)(lVar8 + 0x10 + lVar12);
                  puVar17 = (undefined8 *)
                            ((longlong)iVar2 * 0x80 +
                            *(longlong *)(*(longlong *)(param_1 + 0x29a0) + 0xc30));
                  for (lVar18 = 0xf; lVar18 != 0; lVar18 = lVar18 + -1) {
                    *puVar17 = *puVar15;
                    puVar15 = puVar15 + 1;
                    puVar17 = puVar17 + 1;
                  }
                }
                lVar12 = lVar12 + 0x90;
              } while (lVar9 * 0x90 != lVar12);
            }
            break;
          }
          lVar8 = lVar8 + 0x70;
        } while (local_238 != lVar8);
      }
    }
    if (local_1b8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar8 = FUN_1403ca102(param_1);
  if (lVar8 != 0) {
    lVar9 = FUN_140d27a2a(lVar8);
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    if (lVar12 == 0) {
      puVar15 = &DAT_14c8464e0;
      uVar11 = DAT_14c8464f0;
    }
    else {
      puVar15 = (undefined8 *)(lVar12 + 0x260);
      uVar11 = *(undefined8 *)(lVar12 + 0x270);
    }
    uVar5 = puVar15[1];
    *(undefined8 *)(lVar9 + 0x120) = *puVar15;
    *(undefined8 *)(lVar9 + 0x128) = uVar5;
    *(undefined8 *)(lVar9 + 0x130) = uVar11;
    *(undefined1 *)(lVar9 + 0x138) = 1;
    lVar8 = FUN_140d27a2a(lVar8);
    if ((byte)(*(char *)(lVar8 + 0xb0) - 1U) < 8) {
      FUN_148e0614a(param_1);
    }
  }
  if (*(longlong *)(param_1 + 0x2960) != 0) {
    local_118 = *(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x4e8);
    FUN_1446dcdd4(&local_1a8);
    if (DAT_14cb7d258 == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)FUN_144837462(DAT_14cb7d258,&local_1a8);
    }
    if (dStack_190 != 0.0) {
      FUN_1400020a8();
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10,&local_1a8);
      plVar10 = plStack_1a0;
      if ((double *)(param_1 + 0x32a0) != &local_1a8) {
        *(double *)(param_1 + 0x32a0) = local_1a8;
        local_1a8 = 0.0;
        plVar3 = *(longlong **)(param_1 + 0x32a8);
        if (plStack_1a0 != plVar3) {
          plStack_1a0 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x32a8) = plVar10;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar10 = plVar3 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
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
      plVar10 = plStack_1a0;
      if (plStack_1a0 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_1a0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_1a0)(plStack_1a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      plVar10 = *(longlong **)(param_1 + 0x32a0);
      if (plVar10 != (longlong *)0x0) {
        local_208 = DAT_14c846508;
        local_218 = DAT_14c8464f8;
        dStack_210 = DAT_14c846500;
        uVar11 = FUN_1447210f0(param_1);
        local_248 = local_248 & 0xffffffffffffff00;
        local_240 = &local_218;
        (**(code **)(*plVar10 + 0x10))(plVar10,uVar11,0);
      }
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14422f120 FUN_14422f120 body=185 status=ok
// SIG undefined FUN_14422f120(void)

void FUN_14422f120(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x29a0);
  if (lVar1 != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_148e07cfe(0,&local_38);
    if ((longlong)(int)uStack_30 != 0) {
      iVar2 = 1;
      lVar4 = 0;
      do {
        if (*(longlong *)(local_38 + lVar4) == *(longlong *)(lVar1 + 0xc40)) goto LAB_14422f1c0;
        iVar2 = iVar2 + 1;
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)uStack_30 * 8 - lVar4 != 0);
      iVar2 = 0;
LAB_14422f1c0:
      iVar3 = 0;
      if (iVar2 < (int)uStack_30) {
        iVar3 = iVar2;
      }
      FUN_148e07972(param_1,local_38 + (longlong)iVar3 * 8);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14422f1da FUN_14422f1da body=197 status=ok
// SIG undefined FUN_14422f1da(void)

void FUN_14422f1da(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x29a0);
  if (lVar1 != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_148e07cfe(0,&local_38);
    if ((longlong)(int)uStack_30 != 0) {
      iVar3 = -1;
      lVar4 = 0;
      do {
        if (*(longlong *)(local_38 + lVar4) == *(longlong *)(lVar1 + 0xc40)) goto LAB_14422f27d;
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)uStack_30 * 8 - lVar4 != 0);
      iVar3 = -2;
LAB_14422f27d:
      iVar2 = (int)uStack_30 + -1;
      if (iVar3 < (int)uStack_30) {
        iVar2 = iVar3;
      }
      if (iVar3 < 0) {
        iVar2 = (int)uStack_30 + -1;
      }
      FUN_148e07972(param_1,local_38 + (longlong)iVar2 * 8);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14422f2a0 FUN_14422f2a0 body=117 status=ok
// SIG undefined FUN_14422f2a0(void)

void FUN_14422f2a0(undefined4 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong in_RCX;
  
  if (((*(longlong *)(in_RCX + 0x2960) != 0) &&
      (*(char *)(*(longlong *)(in_RCX + 0x2960) + 0x4bc) == '\x01')) &&
     (lVar1 = *(longlong *)(in_RCX + 0x29a0), lVar1 != 0)) {
    *(byte *)(in_RCX + 0x2998) = *(byte *)(lVar1 + 0x379) >> 6 & 1;
    *(undefined4 *)(in_RCX + 0x299c) = *(undefined4 *)(lVar1 + 0x7ec);
    *(byte *)(lVar1 + 0x379) = *(byte *)(lVar1 + 0x379) | 0x40;
    param_1 = *(undefined4 *)(*(longlong *)(in_RCX + 0x2960) + 0x4c0);
    *(undefined4 *)(*(longlong *)(in_RCX + 0x29a0) + 0x7ec) = param_1;
  }
  FUN_148e088b6(param_1,param_2,1);
  return;
}



// FUNCTION 14422f316 FUN_14422f316 body=96 status=ok
// SIG undefined FUN_14422f316(void)

void FUN_14422f316(undefined4 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong in_RCX;
  
  if (((*(longlong *)(in_RCX + 0x2960) != 0) &&
      (*(char *)(*(longlong *)(in_RCX + 0x2960) + 0x4bc) == '\x01')) &&
     (lVar1 = *(longlong *)(in_RCX + 0x29a0), lVar1 != 0)) {
    *(byte *)(lVar1 + 0x379) = *(byte *)(lVar1 + 0x379) & 0xbf | *(char *)(in_RCX + 0x2998) << 6;
    param_1 = *(undefined4 *)(in_RCX + 0x299c);
    *(undefined4 *)(*(longlong *)(in_RCX + 0x29a0) + 0x7ec) = param_1;
  }
  FUN_148e088b6(param_1,param_2,0);
  return;
}



// FUNCTION 14422f37e FUN_14422f37e body=133 status=ok
// SIG undefined FUN_14422f37e(void)

undefined1 FUN_14422f37e(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14c872bf2 == '\x01') {
    lVar2 = *(longlong *)(param_1 + 0x2290);
    if (lVar2 == 0) {
      local_18 = *(undefined8 *)(param_1 + 0x2280);
      lVar2 = FUN_14050aea0();
      *(longlong *)(param_1 + 0x2290) = lVar2;
      if (lVar2 != 0) goto LAB_14422f3da;
    }
    else {
LAB_14422f3da:
      if (*(char *)(lVar2 + 0x31) == '\x01') goto LAB_14422f39e;
    }
  }
  else {
LAB_14422f39e:
    if (*(char *)(param_1 + 0x2308) == '\x01') {
      uVar1 = *(undefined1 *)(param_1 + 0x2568);
      goto LAB_14422f3a9;
    }
  }
  uVar1 = 0;
LAB_14422f3a9:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14422f414 FUN_14422f414 body=131 status=ok
// SIG undefined FUN_14422f414(void)

undefined1 FUN_14422f414(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14c872bf2 == '\x01') {
    lVar2 = *(longlong *)(param_1 + 0x2290);
    if (lVar2 == 0) {
      local_18 = *(undefined8 *)(param_1 + 0x2280);
      lVar2 = FUN_14050aea0();
      *(longlong *)(param_1 + 0x2290) = lVar2;
      if (lVar2 != 0) goto LAB_14422f46c;
    }
    else {
LAB_14422f46c:
      if (*(char *)(lVar2 + 0x31) == '\x01') goto LAB_14422f434;
    }
  }
  else {
LAB_14422f434:
    if (*(char *)(param_1 + 0x2308) == '\x01') {
      uVar1 = *(undefined1 *)(param_1 + 0x25a0);
      goto LAB_14422f443;
    }
  }
  uVar1 = 0;
LAB_14422f443:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14422f498 FUN_14422f498 body=748 status=ok
// SIG undefined FUN_14422f498(void)

undefined4 FUN_14422f498(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_f8 [32];
  uint local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  ulonglong local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 **local_a0;
  undefined1 *local_98;
  code *local_90;
  longlong local_88 [3];
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  undefined1 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = FUN_1488dd5ae(param_2);
  if (lVar3 == 0) {
    local_70 = 0;
    bVar6 = false;
  }
  else {
    if (DAT_14c947fe0 == 0) {
      lVar4 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar4);
      DAT_14c947fe0 = lVar4;
    }
    FUN_140045924(DAT_14c947fe0,&local_50,lVar3,1);
    local_68 = local_50;
    lVar4 = FUN_14050aea0();
    bVar6 = lVar4 != 0;
    lVar3 = *(longlong *)(lVar3 + 0x80);
    if (lVar3 == 0) {
      local_70 = 0;
    }
    else {
      if (DAT_14c947fe0 == 0) {
        lVar4 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar4);
        DAT_14c947fe0 = lVar4;
      }
      FUN_140045924(DAT_14c947fe0,&local_70,lVar3,1);
    }
  }
  local_60 = 0x6000;
  local_88[0] = local_70;
  local_68 = local_70;
  local_58 = FUN_14050aea0(local_88);
  if ((!bVar6 || param_3 == 0) || local_58 == 0) {
    uVar2 = 0;
    goto LAB_14422f669;
  }
  local_88[0] = 0;
  local_88[1] = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_14422f698:
    lVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
    lVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar5 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar5 == (longlong *)0x0) ||
         (((int)plVar5[2] != *(int *)(param_1 + 0xc) || ((*(uint *)(plVar5 + 1) & 0x10200000) != 0))
         )) goto LAB_14422f698;
      lVar3 = *plVar5;
    }
  }
  if ((*(longlong *)(lVar3 + 0x1f0) != 0) && (DAT_14cb5e538 == 0)) {
    local_a0 = &local_48;
    local_48 = &LAB_1417c5d06;
    local_90 = FUN_14081d0ea;
    local_98 = &LAB_1417ad04a;
    local_a8 = &LAB_1486a7af7;
    local_b0 = &LAB_1464e1631;
    local_b8 = &DAT_149e063b2;
    local_c0 = 0;
    local_c8 = 0x1000000c;
    local_d0 = (longlong *)CONCAT44(local_d0._4_4_,8);
    local_d8 = 0x420;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
  }
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  local_c0 = local_c0 & 0xffffffffffffff00;
  local_d8 = local_d8 & 0xffffff00;
  local_c8 = 0xbf800000;
  local_d0 = local_88;
  uVar2 = FUN_144230d0e(param_1,&local_68,param_3,
                        CONCAT71((int7)((param_4 & 0xffffffff) >> 8),
                                 ((byte)(param_4 & 0xffffffff) ^ 1) * '\x02'));
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
LAB_14422f669:
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14422f78e FUN_14422f78e body=599 status=ok
// SIG undefined FUN_14422f78e(void)

void FUN_14422f78e(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == (longlong *)0x0) goto LAB_14422f9b1;
  lVar4 = param_3[2];
  if (lVar4 == 0) {
    local_50 = *param_3;
    lVar4 = FUN_14050aea0();
    param_3[2] = lVar4;
    if (lVar4 == 0) goto LAB_14422f9b1;
  }
  lVar5 = param_2[0x478];
  lVar2 = param_2[0x479];
  FUN_1416948b4(param_2,param_3,0);
  if ((((*param_3 == param_2[0x478]) && ((int)param_3[1] == (int)param_2[0x479])) &&
      ((int)lVar2 - 1U < 0xfffffffe && lVar5 != 0)) &&
     ((int)param_3[1] != (int)lVar2 || param_2[0x478] != lVar5)) {
    local_48 = 0x6000;
    local_40 = 0;
    local_50 = lVar5;
    lVar5 = FUN_141446784(param_1);
    if (lVar5 != 0) {
      FUN_141446872(lVar5,param_2,0);
    }
  }
  if ((char)param_2[0x2f] == '\x03') {
    cVar3 = FUN_14016169c(param_2,&local_50);
    if ((cVar3 == '\0') || ((int)local_50 == 0)) {
      cVar3 = (**(code **)(*param_2 + 0x6c8))(param_2);
      if (cVar3 != '\0') {
        cVar3 = FUN_141165b38(param_2,lVar4);
        if (cVar3 == '\0') {
          FUN_1407c8d60(lVar4);
        }
      }
    }
  }
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_14422f9d6:
    uVar7 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
    uVar7 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar8 == (undefined8 *)0x0) ||
         ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0xc) ||
          ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_14422f9d6;
      uVar7 = *puVar8;
    }
  }
  lVar5 = FUN_1411db1ae(uVar7);
  if (lVar5 != 0) {
    if (*(longlong *)(lVar5 + 200) == 0) {
      piVar6 = (int *)&DAT_14c948618;
    }
    else {
      piVar6 = (int *)(*(longlong *)(lVar5 + 200) + 8);
    }
    if ((*piVar6 != 0) && ((char)param_2[0x2f] == '\x03')) {
      cVar3 = FUN_14016169c(param_2,&local_50);
      if ((cVar3 == '\0') || ((int)local_50 == 0)) {
        cVar3 = (**(code **)(*param_2 + 0x6c8))(param_2);
        if (cVar3 != '\0') {
          cVar3 = FUN_141165b38(param_2,lVar4);
          if ((cVar3 != '\0') &&
             ((*(longlong *)(param_1 + 0xe8) != *param_3 ||
              (*(int *)(param_1 + 0xf0) != (int)param_3[1])))) {
            *(longlong *)(param_1 + 0xe8) = *param_3;
            *(int *)(param_1 + 0xf0) = (int)param_3[1];
            *(undefined8 *)(param_1 + 0xf8) = 0;
          }
        }
      }
    }
  }
LAB_14422f9b1:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14422f9e6 FUN_14422f9e6 body=332 status=ok
// SIG undefined FUN_14422f9e6(void)

void FUN_14422f9e6(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar5 = (**(code **)(*param_1 + 0x670))();
  if ((cVar5 != '\0') && (cVar5 = FUN_148e096ca(param_1), cVar5 != '\0')) {
    uVar7 = FUN_1447210f0(param_1);
    FUN_1410d53f0(&local_38,uVar7);
    if (local_30 != (longlong *)0x0) {
      iVar6 = (int)local_30[1];
      do {
        if (iVar6 == 0) {
          plVar10 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_30[1];
        bVar11 = iVar6 == iVar4;
        if (bVar11) {
          *(int *)(local_30 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
        plVar10 = local_30;
      } while (!bVar11);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
      if (plVar10 != (longlong *)0x0) {
        if (local_38 == 0) {
LAB_14422fb07:
          plVar9 = (longlong *)0x0;
        }
        else {
          FUN_14422fb34(local_38,param_1,param_2);
          if (*(int *)(local_38 + 0x294) == 0) goto LAB_14422fb07;
          uVar3 = *(uint *)(local_38 + 0x290);
          plVar9 = (longlong *)0x0;
          if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
            puVar8 = (undefined8 *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if ((puVar8 == (undefined8 *)0x0) ||
               ((*(int *)(puVar8 + 2) != *(int *)(local_38 + 0x294) ||
                ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_14422fb07;
            plVar9 = (longlong *)*puVar8;
          }
        }
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        goto LAB_14422fa13;
      }
    }
  }
  plVar9 = (longlong *)0x0;
LAB_14422fa13:
  if (plVar9 != param_1) {
    (**(code **)(*param_1 + 0x6a0))(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14422fb34 FUN_14422fb34 body=1344 status=ok
// SIG undefined FUN_14422fb34(void)

void FUN_14422fb34(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  float fVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar12;
  undefined1 auStack_158 [32];
  undefined2 *local_138;
  undefined8 *local_128;
  int local_120;
  undefined2 local_118 [2];
  undefined4 local_114;
  undefined1 local_110 [8];
  longlong local_108;
  int local_100;
  undefined8 local_f8;
  longlong local_f0;
  float local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  byte local_68;
  ulonglong local_50;
  
  iVar3 = DAT_14c9647dc;
  lVar9 = DAT_14c9647c8;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_2 == (longlong *)0x0) goto LAB_14422fc51;
  if ((byte)(*(char *)(param_1 + 0x1d0) - 3U) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_158);
  }
  if ((((*(int *)(param_1 + 0x294) != 0) && (uVar1 = *(uint *)(param_1 + 0x290), -1 < (int)uVar1))
      && ((int)uVar1 < DAT_14c9647dc)) &&
     (((lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 != 0 &&
       (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x294))) &&
      ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_158);
  }
  if (((*(int *)(param_1 + 0xc) == 0) || (uVar1 = *(uint *)(param_1 + 8), (int)uVar1 < 0)) ||
     ((DAT_14c9647dc <= (int)uVar1 ||
      ((((plVar8 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(param_1 + 0xc))) ||
        ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) || (lVar6 = *plVar8, lVar6 == 0))))))
  goto LAB_14422fc51;
  uVar1 = *(uint *)((longlong)param_2 + 0xc);
  *(uint *)(param_1 + 0x290) = uVar1;
  if ((int)uVar1 < iVar3) {
    lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(lVar9 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  iVar3 = *(int *)(lVar9 + 0x10);
  if (*(int *)(lVar9 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    iVar7 = DAT_14c964868 + 1;
    bVar10 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar10) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar7);
    }
    LOCK();
    iVar3 = *(int *)(lVar9 + 0x10);
    bVar10 = iVar3 == 0;
    if (bVar10) {
      *(int *)(lVar9 + 0x10) = iVar7;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar10) {
      iVar3 = iVar7;
    }
  }
  *(int *)(param_1 + 0x294) = iVar3;
  FUN_148e0b48c(param_1);
  local_108 = 0;
  local_100 = 0x6000;
  local_f8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_ac = DAT_14c948620;
  local_b4 = DAT_14c948618;
  lVar9 = param_2[(ulonglong)(~(uint)*(byte *)(param_2 + 0x8c) & 1) + 0x7e];
  if (lVar9 != 0) {
    if (*(longlong *)(lVar9 + 0x2640) != 0 || *(int *)(lVar9 + 0x2648) != 0x6000) {
      local_108 = *(longlong *)(lVar9 + 0x2640);
      local_100 = *(int *)(lVar9 + 0x2648);
    }
  }
  fVar11 = (float)(**(code **)(*param_2 + 0x690))(param_2);
  local_110[0] = 1;
  local_b8 = local_b8 & 0xffffff00;
  local_e8 = fVar11;
  if (param_3 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(longlong *)(param_3 + 0x398);
    if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar9);
    }
  }
  local_a8 = lVar6 + 0x230;
  local_a0 = 0;
  local_f0 = lVar9;
  FUN_1461e533c(&local_a8);
  if (local_98 != 0) {
    do {
      lVar9 = local_98;
      FUN_145e0ea2c(local_98 + 0x2270,local_110);
      lVar4 = FUN_1402a1246(lVar9);
      uVar12 = extraout_XMM0_Da;
      if (lVar4 != 0) {
        uVar12 = FUN_148dc24ea(lVar4,0);
      }
      FUN_148e0b5aa(uVar12,lVar9);
      local_a0 = local_a0 + 1;
      FUN_1461e533c(&local_a8);
      fVar11 = local_e8;
    } while (local_98 != 0);
  }
  if (0.0 < fVar11) {
    if (*(longlong *)(lVar6 + 0x1f0) == 0) {
      puVar5 = (undefined8 *)(lVar6 + 0x458);
    }
    else {
      puVar5 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar5;
    local_128 = (undefined8 *)0x0;
    local_120 = 0;
    FUN_1446efa72(&local_128,0,3,0x10);
    puVar5 = local_128;
    local_120 = 3;
    *local_128 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_128[2] = lVar4;
    *local_128 = &PTR_FUN_14b9a36d0;
    local_128[3] = 0;
    uVar1 = *(uint *)(lVar6 + 0xc);
    *(uint *)(local_128 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar3 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar3 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar3 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar7;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar3 = iVar7;
      }
    }
    *(int *)((longlong)puVar5 + 0x1c) = iVar3;
    puVar5[4] = param_1;
    local_a8 = 0;
    local_a0 = 0;
    FUN_14487d8d8(&local_a8,&local_128);
    local_68 = 1;
    local_138 = local_118;
    local_118[0] = 0;
    local_114 = 0xbf800000;
    FUN_1406f4044(uVar2,param_1 + 0x288,&local_a8,fVar11);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
    if (local_120 != 0) {
      if (local_128 == (undefined8 *)0x0) goto LAB_14422ffd8;
      (**(code **)*local_128)(local_128,0);
      FUN_1446efa72(&local_128,0,0,0x10);
      local_120 = 0;
    }
    if (local_128 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14422ffd8:
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
LAB_14422fc51:
  if ((local_50 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442300bc FUN_1442300bc body=760 status=ok
// SIG undefined FUN_1442300bc(void)

void FUN_1442300bc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == (longlong *)0x0) goto LAB_144230192;
  if (*(int *)(param_1 + 0x294) == 0) {
LAB_1442301c0:
    plVar8 = (longlong *)0x0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x290);
    plVar8 = (longlong *)0x0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x294) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_1442301c0;
      plVar8 = (longlong *)*puVar6;
    }
  }
  if ((((plVar8 == param_2) && (*(int *)(param_1 + 0xc) != 0)) &&
      (uVar7 = *(uint *)(param_1 + 8), -1 < (int)uVar7)) &&
     ((((int)uVar7 < DAT_14c9647dc &&
       (plVar8 = (longlong *)
                 ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0)) &&
      (((int)plVar8[2] == *(int *)(param_1 + 0xc) &&
       (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar1 = *plVar8, lVar1 != 0)))))))) {
    local_60 = lVar1 + 0x230;
    local_58 = 0;
    FUN_1461e533c(&local_60);
    lVar3 = local_50;
    while (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x2270) = 2;
      local_50 = lVar3;
      FUN_1447715ec(lVar3 + 0x22a0,&DAT_14cbd3cc8);
      lVar9 = param_2[0x85];
      if ((longlong)(int)lVar9 != 0) {
        lVar2 = param_2[0x84];
        lVar10 = 0;
        do {
          if ((*(longlong **)(lVar2 + lVar10) != (longlong *)0x0) &&
             (lVar5 = (**(code **)(**(longlong **)(lVar2 + lVar10) + 0x5d0))(), lVar5 == lVar3)) {
            local_78 = 0;
            local_70 = 0x6000;
            local_68 = 0;
            lVar9 = param_2[(ulonglong)*(byte *)(param_2 + 0x8c) + 0x7e];
            if (lVar9 != 0) {
              if (*(longlong *)(lVar9 + 0x2640) != 0 || *(int *)(lVar9 + 0x2648) != 0x6000) {
                local_78 = *(longlong *)(lVar9 + 0x2640);
                local_70 = *(int *)(lVar9 + 0x2648);
              }
            }
            local_88 = 0;
            local_90 = 0;
            local_98 = 0;
            local_a0 = 0;
            local_a8 = 1;
            cVar4 = FUN_1416a3978(param_1,lVar3,&local_78,0);
            if (cVar4 != '\0') {
              (**(code **)(*param_2 + 0x688))(param_2,lVar3);
            }
            break;
          }
          lVar10 = lVar10 + 8;
        } while ((longlong)(int)lVar9 * 8 != lVar10);
      }
      FUN_148e0b5aa();
      local_58 = local_58 + 1;
      FUN_1461e533c(&local_60);
      lVar3 = local_50;
    }
    *(undefined8 *)(param_1 + 0x290) = 0;
    if (*(longlong *)(lVar1 + 0x1f0) == 0) {
      plVar8 = (longlong *)(lVar1 + 0x458);
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(lVar1 + 0x1f0) + 0xf0);
    }
    lVar1 = *(longlong *)(param_1 + 0x288);
    if (lVar1 != 0) {
      lVar3 = *plVar8;
      uVar7 = (uint)lVar1;
      if ((int)(uVar7 & 0xffffff) < *(int *)(lVar3 + 0x10)) {
        lVar9 = lVar3 + 0x18;
        if (*(longlong *)(lVar3 + 0x28) != 0) {
          lVar9 = *(longlong *)(lVar3 + 0x28);
        }
        if ((*(uint *)(lVar9 + (ulonglong)((uVar7 & 0xffffff) >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0
           ) {
          lVar3 = *(longlong *)(lVar3 + 8);
          lVar9 = (ulonglong)(uVar7 & 0xffffff) * 0x70;
          if (((lVar3 + lVar9 != 0) && (*(longlong *)(lVar3 + 0x60 + lVar9) == lVar1)) &&
             (*(char *)(lVar3 + 1 + lVar9) != '\x04')) {
            FUN_1405a424c();
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x288) = 0;
    (**(code **)(*param_2 + 0x6a0))(param_2);
  }
LAB_144230192:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442303ce FUN_1442303ce body=52 status=ok
// SIG undefined FUN_1442303ce(void)

undefined1 FUN_1442303ce(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0x2a) != '\0')) {
    uVar1 = FUN_141563480(param_1 + 0x30);
    uVar2 = FUN_1411d9864(param_2,uVar1);
    return uVar2;
  }
  return 1;
}



// FUNCTION 144230408 FUN_144230408 body=339 status=ok
// SIG undefined FUN_144230408(void)

longlong * FUN_144230408(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_2[2];
  if (lVar4 == 0) {
    local_40 = *param_2;
    lVar4 = FUN_14050aea0();
    param_2[2] = lVar4;
    if (lVar4 != 0) goto LAB_144230450;
  }
  else {
LAB_144230450:
    FUN_140e4b9fe(lVar4 + 0x38,&local_40);
    if (((local_40 != 0) && (param_3 != 0)) && (*(char *)(local_40 + 0x2a) != '\0')) {
      uVar5 = FUN_141563480(local_40 + 0x30);
      cVar3 = FUN_1411d9864(param_3,uVar5);
      if (cVar3 == '\0') {
        if ((*(longlong *)(lVar4 + 400) == 0) || (0xfffffffd < *(int *)(lVar4 + 0x198) - 1U)) {
          *param_1 = 0;
          *(undefined4 *)(param_1 + 1) = 0x6000;
          param_1[2] = 0;
        }
        else {
          FUN_144230408(param_1,lVar4 + 400,param_3);
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
        goto LAB_1442304c7;
      }
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
  }
  *param_1 = *param_2;
  *(int *)(param_1 + 1) = (int)param_2[1];
  param_1[2] = 0;
LAB_1442304c7:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14423055c FUN_14423055c body=135 status=ok
// SIG undefined FUN_14423055c(void)

void FUN_14423055c(longlong *param_1,longlong *param_2)

{
  char cVar1;
  
  if (((param_2 != (longlong *)0x0) && ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0)) &&
     ((*(byte *)((longlong)param_2 + 0x65) & 0x18) == 0x10)) {
    cVar1 = (**(code **)(*param_2 + 0x668))(param_2);
    if (cVar1 != '\0') {
      *(byte *)*param_1 = *(byte *)*param_1 | 1;
    }
    cVar1 = (**(code **)(*param_2 + 0x670))(param_2);
    if (cVar1 != '\0') {
      *(byte *)*param_1 = *(byte *)*param_1 | 2;
    }
    cVar1 = (**(code **)(*param_2 + 0x678))(param_2);
    if (cVar1 != '\0') {
      *(byte *)*param_1 = *(byte *)*param_1 | 4;
    }
    cVar1 = (**(code **)(*param_2 + 0x680))(param_2);
    if (cVar1 != '\0') {
      *(longlong *)(*param_1 + 4) = param_2[3];
    }
  }
  return;
}



// FUNCTION 1442305e4 FUN_1442305e4 body=596 status=ok
// SIG undefined FUN_1442305e4(void)

void FUN_1442305e4(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined1 local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar4 = FUN_148e096ca();
  if ((cVar4 == '\0') && (lVar6 = FUN_140cf8aa6(param_2), lVar6 != 0)) {
    uVar7 = FUN_1447210f0(param_1);
    FUN_1410d53f0(&local_38,uVar7);
    if (local_30 != (longlong *)0x0) {
      iVar5 = (int)local_30[1];
      do {
        if (iVar5 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_30[1];
        bVar10 = iVar5 == iVar3;
        if (bVar10) {
          *(int *)(local_30 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar8 = local_30;
      } while (!bVar10);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
      if (plVar8 != (longlong *)0x0) {
        if (local_38 != (longlong *)0x0) {
          local_48 = 0;
          local_50 = 1;
          local_58 = 1;
          local_60 = 0;
          local_68 = 1;
          cVar4 = FUN_1416a3978(local_38,lVar6,lVar6 + 0x23c0,0);
          if (cVar4 != '\0') {
            LOCK();
            plVar2 = plVar8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
            goto LAB_14423077e;
          }
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
  }
  if (((char)param_1[0x95] == '\0') &&
     (cVar4 = (**(code **)(*param_1 + 0x670))(param_1), cVar4 != '\0')) {
    lVar6 = FUN_140cf8aa6(param_2);
    if (lVar6 != 0) {
      if ((longlong)(int)param_1[0x97] != 0) {
        lVar9 = 0;
        do {
          if (*(longlong *)(param_1[0x96] + lVar9) == lVar6) {
            local_40 = lVar6;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar6);
            }
            local_38 = &local_40;
            FUN_148e136b8(param_1 + 0x96);
            if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(param_2);
            }
            iVar5 = (int)param_1[0x85];
            *(uint *)(param_1 + 0x85) = iVar5 + 1U;
            if (*(uint *)((longlong)param_1 + 0x42c) < iVar5 + 1U) {
              FUN_1456d180a(param_1 + 0x84,iVar5);
            }
            *(longlong *)(param_1[0x84] + (longlong)iVar5 * 8) = param_2;
            if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(param_2);
            }
            goto LAB_14423077e;
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)(int)param_1[0x97] * 8 != lVar9);
      }
      FUN_148e154d6(param_1,param_2);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x95) = 1;
    FUN_14423eb82(param_1,param_2);
    if ((int)param_1[0x85] == 0) {
      *(undefined1 *)(param_1 + 0x95) = 0;
    }
  }
LAB_14423077e:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14423083a FUN_14423083a body=140 status=ok
// SIG undefined FUN_14423083a(void)

bool FUN_14423083a(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = param_2[2];
  if (lVar2 == 0) {
    local_28 = *param_2;
    lVar2 = FUN_14050aea0();
    param_2[2] = lVar2;
    if (lVar2 != 0) goto LAB_14423089c;
  }
  else {
LAB_14423089c:
    cVar1 = FUN_14595f7e8(param_1,param_2);
    if (cVar1 != '\0') {
      lVar2 = *(longlong *)(lVar2 + 0x50);
      FUN_14583cc56(param_1,&local_30);
      bVar3 = lVar2 == local_30;
      goto LAB_14423087a;
    }
  }
  bVar3 = false;
LAB_14423087a:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}



// FUNCTION 14423096c FUN_14423096c body=771 status=ok
// SIG undefined FUN_14423096c(void)

void FUN_14423096c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  code *local_58;
  int local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    local_58 = (code *)0x0;
    local_50 = 0x6000;
    local_48 = 0;
    FUN_1466360c6(param_1);
    FUN_140457ffc(&DAT_14cb10968,param_1);
  }
  FUN_141245f18(param_1,param_2);
  *(undefined1 *)(param_1 + 0x89) = 0;
  FUN_146241fca(param_1 + 0x168);
  if (((*(longlong *)(param_1 + 0xd0) != *(longlong *)(param_1 + 0xb0)) ||
      (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0xb8))) &&
     (*(longlong *)(param_1 + 0xd0) != 0 || *(int *)(param_1 + 0xd8) != 0x6000)) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0x6000;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  if ((*(longlong *)(param_1 + 0xe8) != 0) || (*(int *)(param_1 + 0xf0) != 0x6000)) {
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0x6000;
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  *(undefined2 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d4) = DAT_14c948618;
  *(undefined4 *)(param_1 + 0x1dc) = DAT_14c948620;
  lVar2 = DAT_14cb10968;
  if (param_2 == 0) goto LAB_144230b7c;
  lVar4 = (longlong)DAT_14cb10970;
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      if ((*(int *)(lVar2 + 8 + lVar5) != 0) &&
         (plVar1 = *(longlong **)(lVar2 + lVar5), plVar1 != (longlong *)0x0)) {
        cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
        if (cVar3 != '\0') goto LAB_144230ae7;
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar4 * 0x10 != lVar5);
  }
  local_58 = FUN_1461e5104;
  local_50 = 0;
  FUN_146636210(&local_40,param_1);
LAB_144230ae7:
  if ((*(longlong *)(param_1 + 0x250) == 0) && (lVar2 = *(longlong *)(param_2 + 0x1f0), lVar2 != 0))
  {
    local_40 = &LAB_14619db7c;
    local_38 = 0;
    FUN_146636932(&local_58,param_1);
    FUN_1457bc922(lVar2 + 0x60,&local_40,&local_58);
    if (local_50 == 0) {
LAB_144230c4e:
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
      goto LAB_144230c4e;
    }
    *(undefined1 **)(param_1 + 0x250) = local_40;
  }
  if (*(longlong *)(param_2 + 0x1f0) != 0) {
    lVar4 = FUN_1403ca142();
    lVar2 = *(longlong *)(param_2 + 0x1f0);
    if (((((lVar2 != 0) && (lVar4 != 0)) && (lVar5 = *(longlong *)(lVar2 + 0x10), lVar5 != 0)) &&
        ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)))) && (*(char *)(lVar2 + 0x530) == '\x01')) {
      local_40 = *(undefined1 **)(param_2 + 0x18);
      FUN_1400021e4(&local_40,&local_58);
      FUN_1418f25a8(param_1,&local_58);
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_144230b7c:
  if (*(longlong *)(param_1 + 0x2a8) == 0) {
    local_58 = FUN_148e0a9e4;
    local_50 = 0;
    FUN_1457371d4(&local_40,param_1);
    *(undefined1 **)(param_1 + 0x2a8) = local_40;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144230c70 FUN_144230c70 body=157 status=ok
// SIG undefined FUN_144230c70(void)

undefined8 FUN_144230c70(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x238) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x230);
    lVar7 = (longlong)*(int *)(param_1 + 0x238) * 0x98;
    do {
      uVar1 = *(uint *)(lVar4 + 0x14);
      uVar3 = (ulonglong)uVar1;
      if ((uVar1 == 0) || (uVar2 = *(uint *)(lVar4 + 0x10), (int)uVar2 < 0)) {
LAB_144230cf1:
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        if ((int)uVar2 < DAT_14c9647dc) {
          plVar6 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (((plVar6 == (longlong *)0x0) || (*(uint *)(plVar6 + 2) != uVar1)) ||
             (uVar3 = (ulonglong)*(uint *)(plVar6 + 1), (*(uint *)(plVar6 + 1) & 0x10200000) != 0))
          goto LAB_144230cf1;
          lVar5 = *plVar6;
        }
      }
      if (lVar5 == param_2) {
        if (lVar4 == 0) {
          return 0;
        }
        return CONCAT71((int7)(uVar3 >> 8),*(undefined1 *)(lVar4 + 0x93));
      }
      lVar4 = lVar4 + 0x98;
      lVar7 = lVar7 + -0x98;
    } while (lVar7 != 0);
  }
  return 0;
}



// FUNCTION 144230d0e FUN_144230d0e body=2634 status=ok
// SIG undefined FUN_144230d0e(void)

ulonglong FUN_144230d0e(longlong param_1,longlong *param_2,ulonglong param_3,char param_4,
                       undefined1 param_5,undefined8 *param_6,undefined4 param_7,char param_8)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined4 uVar14;
  int iVar16;
  code **ppcVar17;
  undefined7 uVar19;
  ulonglong uVar18;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  ulonglong local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code **local_100;
  undefined1 *local_f8;
  code *local_f0;
  char local_d9;
  ulonglong local_d8;
  code *local_d0;
  code *local_c8;
  uint local_c0;
  int local_bc;
  longlong local_b0;
  code *local_a8;
  uint local_a0;
  undefined8 local_98;
  code *local_90;
  uint local_88;
  longlong local_80;
  code *local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong local_60;
  ulonglong local_48;
  code *pcVar15;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pcVar15 = (code *)*param_2;
  uVar6 = *(uint *)(param_2 + 1);
  ppcVar17 = (code **)(ulonglong)uVar6;
  local_a8 = (code *)0x0;
  local_a0 = 0x6000;
  local_98 = 0;
  local_d9 = param_4;
  local_90 = pcVar15;
  local_88 = uVar6;
  cVar5 = FUN_146022bc2(param_1,param_2,&local_a8,0);
  if ((cVar5 != '\0') && (pcVar15 != local_a8 || uVar6 != local_a0)) {
    local_90 = local_a8;
    local_88 = local_a0;
    pcVar15 = local_a8;
  }
  local_78 = pcVar15;
  lVar7 = FUN_14050aea0(&local_78);
  local_80 = lVar7;
  if (lVar7 == 0) {
    uVar18 = 0;
    goto LAB_1442313c1;
  }
  local_d0 = pcVar15;
  if (((((*(int *)(param_1 + 0xc) != 0) && (uVar6 = *(uint *)(param_1 + 8), -1 < (int)uVar6)) &&
       ((int)uVar6 < DAT_14c9647dc)) &&
      ((puVar12 = (undefined8 *)
                  ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
       puVar12 != (undefined8 *)0x0 && (*(int *)(puVar12 + 2) == *(int *)(param_1 + 0xc))))) &&
     ((*(uint *)(puVar12 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(puVar12 + 1) & 0x10200000) == 0) {
      ppcVar17 = (code **)*puVar12;
    }
    else {
      ppcVar17 = (code **)0x0;
    }
    if (ppcVar17[0x3e] != (code *)0x0) {
      lVar8 = FUN_1403ca142();
      pcVar15 = ppcVar17[0x3e];
      if (((pcVar15 != (code *)0x0) && (lVar8 != 0)) &&
         ((lVar9 = *(longlong *)(pcVar15 + 0x10), lVar9 != 0 &&
          ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar9 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
            lVar8 + 0x30)))))) {
        local_b0 = *param_2;
        if ((*(longlong *)(param_1 + 0xb0) != local_b0) ||
           (*(int *)(param_1 + 0xb8) != (int)param_2[1])) {
          *(longlong *)(param_1 + 0xb0) = local_b0;
          *(int *)(param_1 + 0xb8) = (int)param_2[1];
          *(undefined8 *)(param_1 + 0xc0) = 0;
          local_b0 = *param_2;
        }
        FUN_1400021e4();
        iVar4 = local_bc;
        uVar6 = local_c0;
        if ((int)local_c0 < 2) {
          local_78 = (code *)0x0;
          uVar6 = *(uint *)(param_6 + 1);
          _Src = (void *)*param_6;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
          local_d8 = param_3;
          if ((longlong)(int)uVar6 == 0) {
            uStack_70 = (ulonglong)uVar6;
          }
          else {
            FUN_1446dd670(&local_78,uVar6,0);
            memcpy(local_78,_Src,(longlong)(int)uVar6 * 2);
            param_3 = local_d8;
          }
        }
        else {
          iVar16 = *(int *)(param_6 + 1) + -1;
          if (*(int *)(param_6 + 1) == 0) {
            iVar16 = 0;
          }
          local_78 = local_c8;
          local_c8 = (code *)0x0;
          uStack_70 = CONCAT44(local_bc,local_c0);
          local_c0 = 0;
          local_bc = 0;
          iVar1 = iVar16 + uVar6;
          if (iVar1 < (int)uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4((longlong)iVar16);
          }
          if (iVar4 < iVar1) {
            FUN_1446f8c06(&local_78);
          }
          FUN_1400020e8(&local_78,*param_6,iVar16);
        }
        if (local_c8 != (code *)0x0) {
          FUN_1400020a8();
        }
        uVar10 = FUN_140d27a2a(pcVar15);
        ppcVar17 = &local_78;
        FUN_14601018c(uVar10,ppcVar17);
        if (local_78 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  uVar14 = (undefined4)CONCAT71((int7)((ulonglong)pcVar15 >> 8),param_5);
  if (*(longlong *)(lVar7 + 0x1b0) != 0) {
    puVar2 = *(undefined4 **)(*(longlong *)(lVar7 + 0x1b0) + 8);
    puVar11 = &DAT_14c9485f0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar11 = puVar2;
    }
    local_78 = (code *)0x0;
    uStack_70 = 0;
    local_d8 = param_3;
    FUN_1400b2348(puVar11,&local_78,1);
    pcVar15 = local_78;
    ppcVar17 = (code **)(param_1 + 0x90);
    if (ppcVar17 != &local_78) {
      iVar4 = (int)uStack_70;
      lVar8 = (longlong)(int)uStack_70;
      *(int *)(param_1 + 0x98) = (int)uStack_70;
      if ((int)uStack_70 == 0 && *(int *)(param_1 + 0x9c) == 0) {
        *(undefined4 *)(param_1 + 0x9c) = 0;
      }
      else {
        FUN_1446dd670(ppcVar17,uStack_70 & 0xffffffff);
        if (iVar4 != 0) {
          memcpy(*ppcVar17,pcVar15,lVar8 * 2);
        }
      }
    }
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
    uVar14 = (undefined4)CONCAT71((int7)((ulonglong)param_1 >> 8),param_5);
    param_3 = local_d8;
  }
  uVar19 = (undefined7)((ulonglong)ppcVar17 >> 8);
  if (((char)uVar14 == '\0') && (cVar5 = FUN_1413eb406(param_1,lVar7), cVar5 != '\0')) {
    if (param_8 != '\0') {
      *(undefined1 *)(param_1 + 200) = 1;
      lVar8 = *param_2;
      if ((*(longlong *)(param_1 + 0xb0) != lVar8) || (*(int *)(param_1 + 0xb8) != (int)param_2[1]))
      {
        *(longlong *)(param_1 + 0xb0) = lVar8;
        *(int *)(param_1 + 0xb8) = (int)param_2[1];
        *(undefined8 *)(param_1 + 0xc0) = 0;
        lVar8 = *param_2;
      }
      if ((*(longlong *)(param_1 + 0xd0) != lVar8) || (*(int *)(param_1 + 0xd8) != (int)param_2[1]))
      {
        *(longlong *)(param_1 + 0xd0) = lVar8;
        *(int *)(param_1 + 0xd8) = (int)param_2[1];
        *(undefined8 *)(param_1 + 0xe0) = 0;
      }
    }
    uVar18 = CONCAT71(uVar19,1);
    if ((((*(int *)(param_1 + 0xc) == 0) || (uVar6 = *(uint *)(param_1 + 8), (int)uVar6 < 0)) ||
        (DAT_14c9647dc <= (int)uVar6)) ||
       (((plVar13 = (longlong *)
                    ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
         plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)(param_1 + 0xc))) ||
        ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1442313c1;
    if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
      lVar8 = *plVar13;
    }
    else {
      lVar8 = 0;
    }
    if (*(longlong *)(lVar8 + 0x170) == 0) goto LAB_1442313c1;
    lVar9 = FUN_140425b9a();
    lVar8 = *(longlong *)(lVar8 + 0x170);
    if (((lVar8 == 0) || (lVar9 == 0)) ||
       ((lVar3 = *(longlong *)(lVar8 + 0x10), lVar3 == 0 ||
        ((*(int *)(lVar3 + 0x38) < *(int *)(lVar9 + 0x38) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
          lVar9 + 0x30)))))) goto LAB_1442313c1;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_1442316af:
      lVar9 = 0;
    }
    else {
      uVar6 = *(uint *)(param_1 + 8);
      lVar9 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(param_1 + 0xc) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1442316af;
        lVar9 = *plVar13;
      }
    }
    local_78 = (code *)(lVar9 + 0x230);
    uStack_70 = uStack_70 & 0xffffffff00000000;
    FUN_1461e533c(&local_78);
    if (local_68 != (longlong *)0x0) {
      do {
        plVar13 = local_68;
        if ((param_8 != '\0') &&
           (((cVar5 = FUN_14016169c(local_68,&local_c8), cVar5 != '\0' && ((int)local_c8 != 0)) ||
            (cVar5 = (**(code **)(*plVar13 + 0x6c8))(plVar13), cVar5 == '\0')))) {
          lVar9 = plVar13[0x73];
          if (lVar9 != 0) {
            if (DAT_14cbae3d8 == 0) {
              local_c8 = FUN_141030f22;
              local_f0 = FUN_14081d0ea;
              local_f8 = &LAB_1464f5fc4;
              local_100 = &local_c8;
              local_108 = &LAB_148c3dd26;
              local_110 = &LAB_1459673ba;
              local_118 = L"Engine";
              local_120 = 0;
              local_128 = 0x10000004;
              local_130 = CONCAT44(local_130._4_4_,0x10);
              local_138 = 0x1360;
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
              lVar9 = plVar13[0x73];
              if (lVar9 == 0) goto LAB_1442311fd;
            }
            if (((DAT_14cbae3d8 != 0) && (lVar9 = *(longlong *)(lVar9 + 0x10), lVar9 != 0)) &&
               ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar9 + 0x38) &&
                (*(longlong *)
                  (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
                 DAT_14cbae3d8 + 0x30)))) {
              lVar9 = FUN_1403b0700();
              if ((*(longlong *)(lVar9 + 0x38) != 0) &&
                 (*(longlong *)(lVar9 + 0x38) != DAT_14cb71810)) goto LAB_14423126b;
            }
          }
LAB_1442311fd:
          FUN_144145ec4(lVar8,&local_c8,plVar13,param_1);
          if ((local_c0 - 1 < 0xfffffffe && local_c8 != (code *)0x0) &&
             ((local_90 != local_c8 || (local_88 != local_c0)))) {
            local_90 = local_c8;
            local_88 = local_c0;
            local_80 = 0;
          }
        }
LAB_14423126b:
        local_118 = (wchar_t *)((ulonglong)local_118 & 0xffffffffffffff00);
        local_120 = CONCAT71(local_120._1_7_,1);
        local_128 = CONCAT31(local_128._1_3_,1);
        local_130 = local_130 & 0xffffffffffffff00;
        local_138 = CONCAT31(local_138._1_3_,1);
        FUN_1416a3978(param_1,plVar13,&local_90,
                      CONCAT71((int7)((ulonglong)lVar7 >> 8),param_8) & 0xffffffff);
        uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 + 1);
        FUN_1461e533c(&local_78);
      } while (local_68 != (longlong *)0x0);
    }
    goto LAB_1442313c1;
  }
  if ((local_d9 == '\x01') ||
     ((local_d9 == '\x02' && (cVar5 = FUN_144231bb4(param_1,param_3), cVar5 != '\0')))) {
    local_138 = param_7;
    local_130 = param_3;
    FUN_144231c7c(param_1,&local_90,uVar14,param_6);
    uVar18 = CONCAT71(uVar19,1);
    goto LAB_1442313c1;
  }
  FUN_146259a36(param_1,&DAT_14c9485f0);
  pcVar15 = local_d0;
  if (((((*(int *)(param_1 + 0xc) != 0) && (uVar6 = *(uint *)(param_1 + 8), -1 < (int)uVar6)) &&
       ((int)uVar6 < DAT_14c9647dc)) &&
      ((plVar13 = (longlong *)
                  ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
       plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)(param_1 + 0xc))))) &&
     ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
      lVar8 = *plVar13;
    }
    else {
      lVar8 = 0;
    }
    local_c8 = *(code **)(lVar8 + 0x18);
    FUN_1400021e4(&local_c8,&local_78);
    if ((code **)(param_1 + 0xa0) == &local_78) {
      if (local_78 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        FUN_1400020a8();
      }
      *(code **)(param_1 + 0xa0) = local_78;
      local_78 = (code *)0x0;
      *(int *)(param_1 + 0xa8) = (int)uStack_70;
      *(undefined4 *)(param_1 + 0xac) = uStack_70._4_4_;
    }
  }
  local_c8 = pcVar15;
  FUN_1446dcdd4(&local_78);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_1442316ab:
    uVar10 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 8);
    uVar10 = 0;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0xc) ||
          ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_1442316ab;
      uVar10 = *puVar12;
    }
  }
  uVar6 = FUN_14623d188(uVar10,lVar7,param_6);
  uVar18 = (ulonglong)uVar6;
LAB_1442313c1:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffffff;
}



// FUNCTION 14423175a FUN_14423175a body=424 status=ok
// SIG undefined FUN_14423175a(void)

undefined4
FUN_14423175a(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
             longlong param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong *local_a0;
  undefined4 local_98;
  ulonglong local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  longlong local_58 [2];
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined1 *)(param_1 + 0x1d0) = 4;
  *(undefined1 *)(param_1 + 0x1d1) = param_3;
  *(undefined8 *)(param_1 + 0x1d4) = *param_4;
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_4 + 1);
  lVar2 = FUN_1406d51c0();
  uVar1 = *(undefined4 *)(lVar2 + 0x2c8);
  local_58[0] = 0;
  local_58[1] = 0;
  if (param_5 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_70 = &local_48;
      local_48 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1459f2e4c;
      local_78 = &LAB_148c39de3;
      local_80 = &LAB_1457a9eb2;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = (longlong *)CONCAT44(local_a0._4_4_,0x10);
      local_a8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(param_5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_1442317f7;
  }
  param_5 = 0;
LAB_1442317f7:
  local_a0 = local_58;
  local_90 = local_90 & 0xffffffffffffff00;
  local_a8 = CONCAT31(local_a8._1_3_,1);
  local_98 = uVar1;
  uVar1 = FUN_144230d0e(param_1,param_2,param_5,1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144231904 FUN_144231904 body=686 status=ok
// SIG undefined FUN_144231904(void)

undefined4
FUN_144231904(longlong param_1,undefined8 param_2,ulonglong param_3,float param_4,
             undefined8 *param_5,longlong param_6,char param_7)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong *local_c0;
  float local_b8;
  ulonglong local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  longlong local_78 [3];
  undefined1 local_60 [24];
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_144231b03:
    uVar5 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 8);
    uVar5 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0xc) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_144231b03;
      uVar5 = *puVar6;
    }
  }
  FUN_144230408(local_60,param_2,uVar5);
  *(char *)(param_1 + 0x1d0) = param_7;
  *(char *)(param_1 + 0x1d1) = (char)(param_3 & 0xffffffff);
  *(undefined8 *)(param_1 + 0x1d4) = *param_5;
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_5 + 1);
  uVar4 = (uint)CONCAT71((int7)((param_3 & 0xffffffff) >> 8),2);
  if ((byte)(param_7 - 3U) < 2) {
    uVar4 = -(uint)(param_4 != 0.0) & 1;
    if (((*(int *)(param_1 + 0x294) != 0) && (uVar1 = *(uint *)(param_1 + 0x290), -1 < (int)uVar1))
       && ((int)uVar1 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((puVar6 != (undefined8 *)0x0) && (*(int *)(puVar6 + 2) == *(int *)(param_1 + 0x294))) &&
         ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
          plVar3 = (longlong *)*puVar6;
        }
        else {
          plVar3 = (longlong *)0x0;
        }
        (**(code **)(*plVar3 + 0x6a0))();
        *(undefined8 *)(param_1 + 0x290) = 0;
      }
    }
  }
  local_78[0] = 0;
  local_78[1] = 0;
  if (param_6 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_90 = &local_48;
      local_48 = FUN_141030f22;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_1459f2e4c;
      local_98 = &LAB_148c39de3;
      local_a0 = &LAB_1457a9eb2;
      local_a8 = &DAT_149e063b2;
      local_b0 = 0;
      local_b8 = 2.524356e-29;
      local_c0 = (longlong *)CONCAT44(local_c0._4_4_,0x10);
      local_c8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(param_6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_144231a92;
  }
  param_6 = 0;
LAB_144231a92:
  local_c0 = local_78;
  local_b0 = local_b0 & 0xffffffffffffff00;
  local_c8 = CONCAT31(local_c8._1_3_,1);
  local_b8 = param_4;
  uVar2 = FUN_144230d0e(param_1,local_60,param_6,uVar4);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144231bb4 FUN_144231bb4 body=199 status=ok
// SIG undefined FUN_144231bb4(void)

ulonglong FUN_144231bb4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  undefined8 unaff_RSI;
  undefined7 uVar7;
  
  uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
  bVar6 = 1;
  if (((*(int *)(param_1 + 0xc) != 0) && (uVar3 = *(uint *)(param_1 + 8), -1 < (int)uVar3)) &&
     ((int)uVar3 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0xc))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar1 = *plVar5, lVar1 != 0)))) {
      bVar6 = 1;
      if (*(longlong *)(lVar1 + 0x170) != 0) {
        lVar4 = FUN_140425b9a();
        plVar2 = *(longlong **)(lVar1 + 0x170);
        if (((plVar2 != (longlong *)0x0) && (lVar4 != 0)) &&
           ((plVar5 = (longlong *)plVar2[2], plVar5 != (longlong *)0x0 &&
            ((*(int *)(lVar4 + 0x38) <= (int)plVar5[7] &&
             (*(longlong *)(plVar5[6] + (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30))))))
        {
          uVar3 = (**(code **)(*plVar2 + 0x9d0))(plVar2,param_2);
          plVar5 = (longlong *)(ulonglong)uVar3;
          bVar6 = 0;
          uVar7 = 0;
        }
      }
      bVar6 = bVar6 | (byte)plVar5;
    }
  }
  return CONCAT71(uVar7,bVar6) & 0xffffff01;
}



// FUNCTION 144231c7c FUN_144231c7c body=1548 status=ok
// SIG undefined FUN_144231c7c(void)

void FUN_144231c7c(longlong param_1,longlong *param_2,undefined1 param_3,undefined8 *param_4,
                  float param_5,longlong param_6)

{
  char cVar1;
  void *_Src;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  float fVar15;
  undefined1 auStack_158 [32];
  undefined2 *local_138;
  undefined8 *local_128;
  int local_120;
  undefined2 local_118 [2];
  undefined4 local_114;
  longlong local_110;
  longlong local_108;
  int local_100;
  undefined8 local_f8;
  longlong lStack_f0;
  float local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  longlong local_a8;
  int local_a0;
  undefined8 local_98;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((((*(int *)(param_1 + 0xc) == 0) || (uVar5 = *(uint *)(param_1 + 8), (int)uVar5 < 0)) ||
       (DAT_14c9647dc <= (int)uVar5)) ||
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(param_1 + 0xc))))) ||
     ((((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar13 = *plVar7, lVar13 == 0)) ||
      ((*(longlong *)(param_1 + 0x268) == *param_2 && (*(int *)(param_1 + 0x270) == (int)param_2[1])
       ))))) goto LAB_144231d32;
  if (param_2[2] == 0) {
    local_110 = *param_2;
    lVar4 = FUN_14050aea0();
    param_2[2] = lVar4;
    if (lVar4 == 0) goto LAB_144231d32;
  }
  if ((((*(int *)(param_1 + 0x294) != 0) && (uVar5 = *(uint *)(param_1 + 0x290), -1 < (int)uVar5))
      && ((int)uVar5 < DAT_14c9647dc)) &&
     (((puVar8 = (undefined8 *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       puVar8 != (undefined8 *)0x0 && (*(int *)(puVar8 + 2) == *(int *)(param_1 + 0x294))) &&
      ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
      plVar7 = (longlong *)*puVar8;
    }
    else {
      plVar7 = (longlong *)0x0;
    }
    (**(code **)(*plVar7 + 0x6a0))();
    *(undefined8 *)(param_1 + 0x290) = 0;
  }
  if ((byte)(*(char *)(param_1 + 0x1d0) - 3U) < 2) {
    *(undefined1 *)(param_1 + 0x280) = 1;
    if (*(longlong *)(lVar13 + 0x1f0) == 0) {
      plVar7 = (longlong *)(lVar13 + 0x458);
    }
    else {
      plVar7 = (longlong *)(*(longlong *)(lVar13 + 0x1f0) + 0xf0);
    }
    lVar4 = *(longlong *)(param_1 + 0x288);
    fVar15 = -1.0;
    if (lVar4 != 0) {
      lVar6 = *plVar7;
      uVar5 = (uint)lVar4;
      if ((int)(uVar5 & 0xffffff) < *(int *)(lVar6 + 0x10)) {
        lVar11 = lVar6 + 0x18;
        if (*(longlong *)(lVar6 + 0x28) != 0) {
          lVar11 = *(longlong *)(lVar6 + 0x28);
        }
        if ((*(uint *)(lVar11 + (ulonglong)((uVar5 & 0xffffff) >> 5) * 4) >> (uVar5 & 0x1f) & 1) !=
            0) {
          lVar11 = *(longlong *)(lVar6 + 8);
          lVar12 = (ulonglong)(uVar5 & 0xffffff) * 0x70;
          lVar9 = lVar11 + lVar12;
          if (((lVar9 != 0) && (*(longlong *)(lVar11 + 0x60 + lVar12) == lVar4)) &&
             (cVar1 = *(char *)(lVar11 + 1 + lVar12), cVar1 != '\x04')) {
            if (cVar1 == '\x01') {
              fVar15 = (float)(*(double *)(lVar9 + 8) - *(double *)(lVar6 + 0x140));
            }
            else if (cVar1 == '\x03') {
              fVar15 = 0.0;
            }
            else {
              fVar15 = (float)*(double *)(lVar9 + 8);
            }
          }
        }
      }
    }
    param_5 = (float)(~-(uint)(0.0 < fVar15) & (uint)param_5 | (uint)fVar15 & -(uint)(0.0 < fVar15))
    ;
    param_3 = 1;
  }
  FUN_148e0b48c(param_1);
  local_108 = 0;
  local_100 = 0x6000;
  local_f8 = 0;
  lStack_f0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  if (*param_2 != 0 || (int)param_2[1] != 0x6000) {
    local_108 = *param_2;
    local_100 = (int)param_2[1];
  }
  if (param_5 <= 0.0) {
    lVar4 = FUN_140cb9f34();
    param_5 = *(float *)(lVar4 + 0x20);
  }
  local_110 = CONCAT71(local_110._1_7_,1);
  local_b8 = CONCAT13(*(undefined1 *)(param_1 + 0x1d1),
                      CONCAT12(*(undefined1 *)(param_1 + 0x1d0),(short)local_b8)) & 0xffffff00;
  local_e8 = param_5;
  if (param_6 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_6 + 0x398);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
  }
  local_ac = *(undefined4 *)(param_1 + 0x1dc);
  local_b4 = *(undefined8 *)(param_1 + 0x1d4);
  lStack_f0 = lVar4;
  FUN_148e0bc5e(param_1);
  puVar8 = (undefined8 *)(param_1 + 600);
  if (puVar8 != param_4) {
    iVar3 = *(int *)(param_4 + 1);
    _Src = (void *)*param_4;
    *(int *)(param_1 + 0x260) = iVar3;
    if (iVar3 == 0 && *(int *)(param_1 + 0x264) == 0) {
      *(undefined4 *)(param_1 + 0x264) = 0;
    }
    else {
      FUN_1446dd670(puVar8,iVar3);
      if (iVar3 != 0) {
        memcpy((void *)*puVar8,_Src,(longlong)iVar3 * 2);
      }
    }
  }
  local_a8 = *param_2;
  if ((*(longlong *)(param_1 + 0x268) != local_a8) ||
     (local_a0 = *(int *)(param_1 + 0x270), local_a0 != (int)param_2[1])) {
    *(longlong *)(param_1 + 0x268) = local_a8;
    local_a0 = (int)param_2[1];
    *(int *)(param_1 + 0x270) = local_a0;
    *(undefined8 *)(param_1 + 0x278) = 0;
  }
  *(undefined1 *)(param_1 + 0x280) = param_3;
  local_98 = 0;
  FUN_145a06040(param_1 + 0x40);
  fVar15 = local_e8;
  if (*(longlong *)(lVar13 + 0x1f0) == 0) {
    puVar8 = (undefined8 *)(lVar13 + 0x458);
  }
  else {
    puVar8 = (undefined8 *)(*(longlong *)(lVar13 + 0x1f0) + 0xf0);
  }
  uVar2 = *puVar8;
  local_128 = (undefined8 *)0x0;
  local_120 = 0;
  FUN_1446efa72(&local_128,0,3,0x10);
  puVar8 = local_128;
  local_120 = 3;
  *local_128 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_128[2] = lVar6;
  *local_128 = &PTR_FUN_14b9a3780;
  local_128[3] = 0;
  uVar5 = *(uint *)(lVar13 + 0xc);
  *(uint *)(local_128 + 3) = uVar5;
  if ((int)uVar5 < DAT_14c9647dc) {
    lVar13 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
  }
  else {
    lVar13 = 0;
  }
  iVar3 = *(int *)(lVar13 + 0x10);
  if (*(int *)(lVar13 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    iVar10 = DAT_14c964868 + 1;
    bVar14 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar14) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar10);
    }
    LOCK();
    iVar3 = *(int *)(lVar13 + 0x10);
    bVar14 = iVar3 == 0;
    if (bVar14) {
      *(int *)(lVar13 + 0x10) = iVar10;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar14) {
      iVar3 = iVar10;
    }
  }
  *(int *)((longlong)puVar8 + 0x1c) = iVar3;
  puVar8[4] = param_1;
  local_a8 = 0;
  local_a0 = 0;
  FUN_14487d8d8(&local_a8,&local_128);
  local_68 = 1;
  local_138 = local_118;
  local_118[0] = 0;
  local_114 = 0xbf800000;
  FUN_1406f4044(uVar2,param_1 + 0x288,&local_a8,fVar15);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
  if (local_120 == 0) {
LAB_1442321b8:
    if (local_128 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_128 != (undefined8 *)0x0) {
    (**(code **)*local_128)(local_128,0);
    FUN_1446efa72(&local_128,0,0,0x10);
    local_120 = 0;
    goto LAB_1442321b8;
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
LAB_144231d32:
  if ((local_50 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14423229a FUN_14423229a body=7946 status=ok
// SIG undefined FUN_14423229a(void)

void FUN_14423229a(longlong param_1)

{
  int *piVar1;
  double dVar2;
  double _X;
  double _X_00;
  double _X_01;
  undefined1 uVar3;
  longlong lVar4;
  uint *puVar5;
  uchar auVar6 [8];
  uint uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  code **ppcVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  longlong *plVar20;
  code *pcVar21;
  undefined8 uVar22;
  longlong lVar23;
  int iVar24;
  undefined8 *puVar25;
  code *pcVar26;
  int iVar27;
  int iVar28;
  longlong lVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  undefined1 auStack_468 [32];
  code **local_448;
  undefined8 *local_440;
  ulonglong local_438;
  ulonglong local_430;
  undefined2 *local_428;
  undefined1 *local_420;
  undefined1 *local_418;
  code **local_410;
  undefined1 *local_408;
  code *local_400;
  longlong local_3f8;
  char local_3ed;
  uint local_3ec;
  longlong *local_3e8;
  longlong *local_3e0;
  code *local_3d8;
  longlong *local_3d0;
  undefined8 *local_3c8;
  longlong local_3c0;
  uint *local_3b8;
  longlong local_3b0;
  code *local_3a8;
  longlong *local_3a0;
  int local_398;
  undefined4 local_394;
  undefined1 local_390 [8];
  longlong local_388 [2];
  code *local_378;
  longlong *plStack_370;
  code *local_368;
  longlong *plStack_360;
  code *local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  longlong local_348;
  double local_338;
  double dStack_330;
  double local_328;
  GUID local_318;
  undefined1 local_300 [16];
  longlong local_2f0;
  undefined1 local_2e0 [32];
  byte local_2c0;
  ulong local_2b8 [2];
  uchar auStack_2b0 [4];
  uchar auStack_2ac [20];
  byte local_298;
  undefined1 local_290 [16];
  longlong local_280;
  undefined1 local_270 [32];
  byte local_250;
  ulong local_248 [2];
  uchar auStack_240 [4];
  uchar auStack_23c [20];
  byte local_228;
  longlong local_220;
  char local_218;
  longlong local_210;
  undefined1 local_200 [32];
  byte local_1e0;
  code *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong local_1c8;
  undefined1 local_1b8 [32];
  byte local_198;
  undefined1 local_190 [32];
  longlong local_170;
  undefined4 local_168;
  longlong local_160;
  undefined4 local_158;
  code *local_148;
  undefined8 uStack_140;
  double local_138;
  longlong local_d8;
  uint local_d0;
  uint local_cc;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_468;
  if ((((*(int *)(param_1 + 0x218) == 0) || (*(int *)(param_1 + -0x14) == 0)) ||
      (uVar10 = *(uint *)(param_1 + -0x18), (int)uVar10 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar10 ||
       (plVar18 = (longlong *)
                  ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
       plVar18 == (longlong *)0x0)) ||
      (((int)plVar18[2] != *(int *)(param_1 + -0x14) || ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)
       ))))) goto LAB_144233fef;
  lVar16 = param_1 + -0x20;
  if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
    lVar29 = *plVar18;
  }
  else {
    lVar29 = 0;
  }
  dVar2 = *(double *)(lVar29 + 0x6d0);
  local_3ed = FUN_14144f426(lVar16);
  local_3f8 = lVar16;
  if (*(int *)(param_1 + -0x14) == 0) {
LAB_144234092:
    uVar13 = 0;
  }
  else {
    uVar10 = *(uint *)(param_1 + -0x18);
    uVar13 = 0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
      plVar18 = (longlong *)
                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if ((plVar18 != (longlong *)0x0) &&
         ((((int)plVar18[2] == *(int *)(param_1 + -0x14) &&
           ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)) && (lVar29 = *plVar18, lVar29 != 0)))) {
        cVar8 = FUN_14144f426(lVar16);
        iVar11 = 0;
        if (cVar8 == '\0') {
          iVar27 = *(int *)(param_1 + 0x218);
          if ((longlong)iVar27 == 0) {
            uVar13 = 0;
            goto LAB_1442324fe;
          }
          lVar16 = *(longlong *)(param_1 + 0x210);
          lVar23 = 0;
          do {
            iVar11 = *(int *)(lVar16 + 0x14 + lVar23);
            if ((((((iVar11 != 0) && (uVar10 = *(uint *)(lVar16 + 0x10 + lVar23), -1 < (int)uVar10))
                  && (((int)uVar10 < DAT_14c9647dc &&
                      ((plVar18 = (longlong *)
                                  ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                       plVar18 != (longlong *)0x0 && ((int)plVar18[2] == iVar11)))))) &&
                 ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)) &&
                ((plVar18 = (longlong *)*plVar18, plVar18 != (longlong *)0x0 &&
                 (cVar8 = (**(code **)(*plVar18 + 0x6c8))(plVar18), cVar8 != '\0')))) &&
               ((cVar8 = FUN_14016169c(plVar18,&local_148), cVar8 == '\0' || ((int)local_148 == 0)))
               ) {
              lVar16 = FUN_140995560(lVar29);
              if (((lVar16 == 0) || (lVar16 = FUN_1408bbab6(lVar16), lVar16 == 0)) ||
                 ((longlong)*(int *)(lVar16 + 0x520) == 0)) goto LAB_1442324e7;
              lVar23 = *(longlong *)(lVar16 + 0x518);
              plVar18 = (longlong *)((longlong)*(int *)(lVar16 + 0x520) * 0x90);
              goto LAB_144233f7e;
            }
            lVar23 = lVar23 + 0x98;
          } while ((longlong)iVar27 * 0x98 - lVar23 != 0);
          uVar13 = 0;
          lVar16 = local_3f8;
          goto LAB_144234094;
        }
      }
      goto LAB_144234092;
    }
  }
LAB_144234094:
  iVar11 = *(int *)(param_1 + 0x218);
  goto LAB_1442324fe;
LAB_144234136:
  lVar29 = lVar29 + 0x98;
  if ((longlong)*(int *)(param_1 + 0x218) * 0x98 - lVar29 == 0) goto LAB_144234075;
  goto LAB_1442340d8;
  while( true ) {
    lVar23 = lVar23 + 0x90;
    plVar18 = plVar18 + -0x12;
    if (plVar18 == (longlong *)0x0) break;
LAB_144233f7e:
    if ((*(char *)(lVar23 + 0x39) == '\x01') && (cVar8 = FUN_148951aaa(lVar23), cVar8 != '\0'))
    goto LAB_144233fa7;
  }
LAB_1442324e7:
  iVar11 = *(int *)(param_1 + 0x218);
  if (1 < iVar11) {
    FUN_14154b34a(&local_148,lVar29);
    if (((local_148 != (code *)0x0) &&
        (cVar8 = FUN_143cd99ec(), plVar15 = uStack_140, cVar8 != '\0')) &&
       ((longlong)*(int *)(param_1 + 0x218) != 0)) {
      lVar16 = *(longlong *)(param_1 + 0x210);
      lVar29 = 0;
LAB_1442340d8:
      iVar11 = *(int *)(lVar16 + 0x14 + lVar29);
      if ((((((iVar11 == 0) || (uVar10 = *(uint *)(lVar16 + 0x10 + lVar29), (int)uVar10 < 0)) ||
            (DAT_14c9647dc <= (int)uVar10)) ||
           ((plVar18 = (longlong *)
                       ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
            plVar18 == (longlong *)0x0 || ((int)plVar18[2] != iVar11)))) ||
          (((*(uint *)(plVar18 + 1) & 0x10200000) != 0 || (*plVar18 == 0)))) ||
         ((*(char *)(lVar16 + 0x93 + lVar29) == '\x01' && (*(char *)(*plVar18 + 0x23bb) == '\x01')))
         ) goto LAB_144234136;
      if (uStack_140 != (longlong *)0x0) {
        LOCK();
        plVar20 = uStack_140 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
          (**(code **)*uStack_140)(uStack_140);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
LAB_144233fa7:
      uVar13 = CONCAT71((int7)((ulonglong)plVar18 >> 8),1);
      lVar16 = local_3f8;
      goto LAB_144234094;
    }
LAB_144234075:
    plVar18 = uStack_140;
    lVar16 = local_3f8;
    if (uStack_140 != (longlong *)0x0) {
      LOCK();
      plVar15 = uStack_140 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*uStack_140)(uStack_140);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
    goto LAB_144234092;
  }
  uVar13 = 0;
  lVar16 = local_3f8;
LAB_1442324fe:
  lVar29 = *(longlong *)(param_1 + 0x210);
  local_3ec = (uint)uVar13;
  if (local_3ed == '\0') {
LAB_14423254f:
    local_3a0 = (longlong *)0x0;
    local_398 = iVar11;
    if (iVar11 == 0) goto LAB_144233fc6;
    FUN_1418f2fd0(&local_3a0,iVar11);
    FUN_14423c339(local_3a0,lVar29,iVar11);
    if ((longlong)local_398 == 0) goto LAB_144233fd3;
    plVar15 = local_3a0 + (longlong)local_398 * 0x13;
    local_3b8 = (uint *)(param_1 + 0x278);
    local_3c0 = param_1 + 0x50;
    local_3c8 = (undefined8 *)(param_1 + 0x80);
    plVar18 = local_3a0;
    local_3d0 = plVar15;
    local_3b0 = param_1;
    do {
      lVar16 = local_3f8;
      if (((((*(int *)((longlong)plVar18 + 0x14) == 0) ||
            (uVar10 = *(uint *)(plVar18 + 2), (int)uVar10 < 0)) || (DAT_14c9647dc <= (int)uVar10))
          || ((plVar20 = (longlong *)
                         ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
              plVar20 == (longlong *)0x0 || ((int)plVar20[2] != *(int *)((longlong)plVar18 + 0x14)))
             )) || (((*(uint *)(plVar20 + 1) & 0x10200000) != 0 ||
                    (plVar14 = (longlong *)*plVar20, plVar14 == (longlong *)0x0)))) {
        iVar11 = *(int *)(param_1 + 0x218);
        lVar16 = (longlong)iVar11;
        if (lVar16 == 0) goto LAB_144232a00;
        pcVar21 = *(code **)(param_1 + 0x210);
        iVar27 = 0;
        if (*(int *)(pcVar21 + 0x14) == 0) {
LAB_14423288f:
          bVar30 = false;
        }
        else {
          uVar10 = *(uint *)(pcVar21 + 0x10);
          bVar30 = false;
          if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
            lVar29 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
            if ((lVar29 == 0) || (*(int *)(lVar29 + 0x10) != *(int *)(pcVar21 + 0x14)))
            goto LAB_14423288f;
            bVar30 = (*(uint *)(lVar29 + 8) & 0x10200000) == 0;
          }
        }
        local_3a8 = pcVar21 + 0xac;
        iVar9 = 0;
        local_3e0 = plVar18;
        local_3d8 = pcVar21;
        do {
          lVar29 = (longlong)iVar9;
          iVar19 = iVar9 + 1;
          iVar24 = iVar19;
          if (iVar19 < iVar11) {
            iVar24 = iVar11;
          }
          if (lVar29 + 1 < lVar16) {
            local_3e8 = (longlong *)CONCAT44(local_3e8._4_4_,iVar27);
            pcVar26 = local_3a8 + lVar29 * 0x98;
            bVar32 = true;
            lVar23 = lVar29 + 2;
            do {
              pcVar21 = local_3d8;
              iVar28 = iVar19;
              if ((((*(int *)pcVar26 == 0) || (uVar10 = *(uint *)(pcVar26 + -4), (int)uVar10 < 0))
                  || (DAT_14c9647dc <= (int)uVar10)) ||
                 ((lVar17 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8),
                  lVar17 == 0 || (*(int *)(lVar17 + 0x10) != *(int *)pcVar26)))) {
                if (bVar30) break;
              }
              else if ((bool)((*(uint *)(lVar17 + 8) & 0x10200000) == 0 ^ bVar30)) break;
              bVar32 = lVar23 < lVar16;
              iVar19 = iVar19 + 1;
              pcVar26 = pcVar26 + 0x98;
              bVar31 = lVar23 != lVar16;
              lVar23 = lVar23 + 1;
              iVar28 = iVar24;
            } while (bVar31);
          }
          else {
            bVar32 = false;
            iVar28 = iVar24;
          }
          iVar24 = iVar28 - iVar9;
          if (bVar30) {
            if (iVar27 != iVar9) {
              memmove(pcVar21 + (longlong)iVar27 * 0x98,pcVar21 + lVar29 * 0x98,
                      (longlong)iVar24 * 0x98);
            }
            iVar27 = iVar27 + iVar24;
          }
          else {
            FUN_14164267b(pcVar21 + lVar29 * 0x98,iVar24);
          }
          bVar30 = (bool)(bVar30 ^ 1);
          iVar9 = iVar28;
        } while (bVar32);
        *(int *)(local_3b0 + 0x218) = iVar27;
        uVar13 = (ulonglong)local_3ec;
        plVar18 = local_3e0;
        param_1 = local_3b0;
        plVar15 = local_3d0;
        goto LAB_144232a00;
      }
      if (((char)uVar13 == '\0') && (*(char *)((longlong)plVar18 + 0x93) == '\x01')) {
        if (((((*(char *)((longlong)plVar14 + 0x23bb) != '\x01') ||
              (cVar8 = FUN_14144f426(local_3f8), plVar15 = local_3d0, cVar8 != '\0')) ||
             ((*(int *)((longlong)plVar18 + 0x14) == 0 ||
              ((uVar10 = *(uint *)(plVar18 + 2), (int)uVar10 < 0 || (DAT_14c9647dc <= (int)uVar10)))
              ))) || (puVar25 = (undefined8 *)
                                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                     puVar25 == (undefined8 *)0x0)) ||
           (((*(int *)(puVar25 + 2) != *(int *)((longlong)plVar18 + 0x14) ||
             ((*(uint *)(puVar25 + 1) & 0x10200000) != 0)) ||
            (pcVar21 = (code *)*puVar25, pcVar21 == (code *)0x0)))) goto LAB_144232a00;
        if ((*(int *)(param_1 + -0x14) == 0) ||
           (uVar10 = *(uint *)(param_1 + -0x18), (int)uVar10 < 0)) {
LAB_144232e96:
          lVar29 = 0;
        }
        else {
          lVar29 = 0;
          if ((int)uVar10 < DAT_14c9647dc) {
            plVar20 = (longlong *)
                      ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
            if (((plVar20 == (longlong *)0x0) || ((int)plVar20[2] != *(int *)(param_1 + -0x14))) ||
               ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)) goto LAB_144232e96;
            lVar29 = *plVar20;
          }
        }
        if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
          lVar23 = 0;
          do {
            lVar17 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar23);
            if (*(longlong *)(lVar17 + 0x360) == lVar29) {
              if ((lVar17 != 0) && (*(char *)(lVar17 + 0x88) != '\0')) goto LAB_144232a00;
              break;
            }
            lVar23 = lVar23 + 8;
          } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar23);
        }
        if ((lVar29 != 0) && (*(longlong *)(lVar29 + 0x170) != 0)) {
          FUN_140425b9a();
        }
        lVar23 = plVar18[3];
        bVar30 = 1 < (int)plVar18[4] + 1U;
        local_328 = (double)plVar18[0xb];
        local_338 = (double)plVar18[9];
        dStack_330 = (double)plVar18[10];
        local_348 = plVar18[0xe];
        local_358 = (code *)plVar18[0xc];
        uStack_350 = (undefined4)plVar18[0xd];
        uStack_34c = *(undefined4 *)((longlong)plVar18 + 0x6c);
        lVar17 = *(longlong *)(pcVar21 + 0x3d0);
        local_3e0 = plVar18;
        if (lVar17 == 0) {
LAB_144232ac2:
          ppcVar12 = (code **)0x0;
        }
        else {
          if (DAT_14cacf818 == 0) {
            local_148 = FUN_141030f22;
            local_400 = FUN_14081d0ea;
            local_408 = &LAB_1463b216c;
            local_410 = &local_148;
            local_418 = &LAB_1479977e3;
            local_420 = &LAB_1463b2171;
            local_428 = &DAT_149e063b2;
            local_430 = 0;
            local_438 = CONCAT44(local_438._4_4_,0x10000004);
            local_440 = (undefined8 *)CONCAT44(local_440._4_4_,0x10);
            local_448 = (code **)CONCAT44(local_448._4_4_,0x750);
            FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818);
          }
          if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(DAT_14cacf818 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) != DAT_14cacf818 + 0x30))
          goto LAB_144232ac2;
          ppcVar12 = *(code ***)(lVar17 + 0x438);
        }
        plVar18 = local_3e0;
        plVar15 = local_3e0 + 3;
        if ((local_3e0[3] == 0) || (0xfffffffd < (int)local_3e0[4] - 1U)) {
          bVar30 = lVar23 != 0 && bVar30;
        }
        else {
          local_448 = ppcVar12;
          uVar13 = FUN_1442348f4(lVar16,plVar15,&local_338);
          bVar30 = (uVar13 & 1) == 0 && (lVar23 != 0 && bVar30);
        }
        uVar13 = (ulonglong)local_3ec;
        if (!bVar30) {
          local_358 = (code *)0x0;
          local_348 = 0;
          plVar20 = (longlong *)FUN_141446784(lVar16,plVar15);
          if (plVar20 == (longlong *)0x0) {
LAB_144232c73:
            plVar20 = (longlong *)0x0;
          }
          else {
            if (DAT_14cbc0248 == 0) {
              local_148 = FUN_14096c2dc;
              local_400 = FUN_14081d0ea;
              local_408 = &LAB_1465aab14;
              local_410 = &local_148;
              local_418 = &LAB_148cb4c2d;
              local_420 = &LAB_146615fe4;
              local_428 = &DAT_149e063b2;
              local_430 = 0;
              local_438 = CONCAT44(local_438._4_4_,0x10000005);
              local_440 = (undefined8 *)CONCAT44(local_440._4_4_,0x10);
              local_448 = (code **)CONCAT44(local_448._4_4_,0x2720);
              FUN_14081cfa3(L"/Script/OakGame",L"StreamableTravelStationObject",&DAT_14cbc0248);
            }
            if ((*(int *)(plVar20[2] + 0x38) < *(int *)(DAT_14cbc0248 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(plVar20[2] + 0x30) + (longlong)*(int *)(DAT_14cbc0248 + 0x38) * 8)
                != DAT_14cbc0248 + 0x30)) goto LAB_144232c73;
          }
          local_3e8 = plVar15;
          plVar14 = (longlong *)FUN_1447210f0(pcVar21);
          lVar16 = local_3f8;
          if (plVar14 != (longlong *)0x0) {
            lVar23 = *(longlong *)(pcVar21 + 0x3d0);
            local_3d8 = pcVar21;
            if (lVar23 == 0) {
LAB_144232ea6:
              if (((code *)plVar18[3] != (code *)0x0) && ((int)plVar18[4] - 1U < 0xfffffffe)) {
                plVar15 = (longlong *)plVar18[5];
                if (plVar15 == (longlong *)0x0) {
                  local_148 = (code *)plVar18[3];
                  plVar15 = (longlong *)FUN_14050aea0(&local_148);
                  plVar18[5] = (longlong)plVar15;
                  if (plVar15 == (longlong *)0x0) goto LAB_1442331d2;
                }
                lVar16 = FUN_1407c8d60(plVar15);
                if ((lVar16 != 0) && (*(char *)(lVar16 + 0x32) == '\x01')) {
                  cVar8 = FUN_141165b38(pcVar21,plVar15);
                  if ((cVar8 == '\0') ||
                     ((*(longlong *)(pcVar21 + 0x23d8) == plVar18[3] &&
                      (*(int *)(pcVar21 + 0x23e0) == (int)plVar18[4])))) {
                    lVar16 = FUN_1407c8d60(plVar15);
                    if ((lVar16 != 0) && (*(char *)(lVar16 + 0x2e) == '\x01')) {
                      FUN_1441ff9d0(pcVar21,local_3e8,0);
                    }
                  }
                  else {
                    FUN_141166838(pcVar21,local_3e8,0);
                  }
                }
              }
LAB_1442331d2:
              plVar14 = local_3e8;
              lVar16 = local_3f8;
              if ((*(int *)((longlong)plVar18 + 0x14) == 0) ||
                 (uVar10 = *(uint *)(plVar18 + 2), (int)uVar10 < 0)) {
                uVar22 = 0;
              }
              else {
                uVar22 = 0;
                if ((int)uVar10 < DAT_14c9647dc) {
                  puVar25 = (undefined8 *)
                            ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
                  if (((puVar25 == (undefined8 *)0x0) ||
                      (*(int *)(puVar25 + 2) != *(int *)((longlong)plVar18 + 0x14))) ||
                     ((*(uint *)(puVar25 + 1) & 0x10200000) != 0)) {
                    uVar22 = 0;
                  }
                  else {
                    uVar22 = *puVar25;
                  }
                }
              }
              FUN_14144fccc(local_3f8,uVar22,(char)plVar18[0x11]);
              plVar18 = local_3e0;
              if (*(char *)((longlong)local_3e0 + 0x91) == '\0') {
                uVar3 = *(undefined1 *)((longlong)local_3e0 + 0x8e);
                uVar22 = FUN_14591dfb6(local_3f8,pcVar21);
                plVar14 = local_3e8;
                lVar16 = local_3f8;
                FUN_145fcf070(local_3f8,pcVar21,uVar22,
                              CONCAT71((int7)((ulonglong)plVar15 >> 8),uVar3) & 0xffffffff);
              }
              local_148 = (code *)0x0;
              uStack_140 = (longlong *)CONCAT44(uStack_140._4_4_,0x6000);
              local_138 = 0.0;
              local_428 = (undefined2 *)
                          CONCAT71(local_428._1_7_,*(undefined1 *)((longlong)plVar18 + 0x8f));
              local_430 = local_430 & 0xffffffffffffff00;
              local_438 = local_438 & 0xffffffffffffff00;
              local_440 = (undefined8 *)((ulonglong)local_440 & 0xffffffffffffff00);
              local_448 = (code **)((ulonglong)local_448 & 0xffffffffffffff00);
              FUN_14148df3c(pcVar21,0,&local_148,&DAT_14c8464e0);
              local_448 = (code **)CONCAT71(local_448._1_7_,1);
              FUN_144201cae(pcVar21,&local_338,&local_358,plVar20);
              puVar5 = local_3b8;
              if ((((*(int *)(param_1 + 0x27c) != 0) && (uVar10 = *local_3b8, -1 < (int)uVar10)) &&
                  (((int)uVar10 < DAT_14c9647dc &&
                   ((lVar23 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8),
                    lVar23 != 0 && (*(int *)(lVar23 + 0x10) == *(int *)(param_1 + 0x27c))))))) &&
                 (((*(uint *)(lVar23 + 8) & 0x10200000) == 0 &&
                  (cVar8 = FUN_1466362fa(local_3b8,plVar20), cVar8 == '\0')))) {
                if ((*(int *)(param_1 + 0x27c) == 0) || (uVar10 = *puVar5, (int)uVar10 < 0)) {
LAB_144233bb9:
                  plVar18 = (longlong *)0x0;
                }
                else {
                  plVar18 = (longlong *)0x0;
                  if ((int)uVar10 < DAT_14c9647dc) {
                    puVar25 = (undefined8 *)
                              ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
                    if (((puVar25 == (undefined8 *)0x0) ||
                        (*(int *)(puVar25 + 2) != *(int *)(param_1 + 0x27c))) ||
                       ((*(uint *)(puVar25 + 1) & 0x10200000) != 0)) goto LAB_144233bb9;
                    plVar18 = (longlong *)*puVar25;
                  }
                }
                (**(code **)(*plVar18 + 0x690))(plVar18,0);
              }
              if (plVar20 == (longlong *)0x0) {
                *(undefined8 *)(param_1 + 0x278) = 0;
              }
              else {
                uVar10 = *(uint *)((longlong)plVar20 + 0xc);
                *puVar5 = uVar10;
                if ((int)uVar10 < DAT_14c9647dc) {
                  lVar23 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
                }
                else {
                  lVar23 = 0;
                }
                iVar11 = *(int *)(lVar23 + 0x10);
                if (*(int *)(lVar23 + 0x10) == 0) {
                  LOCK();
                  iVar11 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar27 = DAT_14c964868 + 1;
                  bVar30 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar11;
                  if (bVar30) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar27);
                  }
                  LOCK();
                  iVar11 = *(int *)(lVar23 + 0x10);
                  bVar30 = iVar11 == 0;
                  if (bVar30) {
                    *(int *)(lVar23 + 0x10) = iVar27;
                    iVar11 = 0;
                  }
                  UNLOCK();
                  plVar14 = local_3e8;
                  pcVar21 = local_3d8;
                  lVar16 = local_3f8;
                  if (bVar30) {
                    iVar11 = iVar27;
                  }
                }
                *(int *)(param_1 + 0x27c) = iVar11;
                (**(code **)(*plVar20 + 0x690))(plVar20,1);
              }
              FUN_144203c8e(local_3c0,pcVar21);
              lVar16 = FUN_141446784(lVar16,plVar14);
              if (lVar16 != 0) {
                local_148 = pcVar21;
                FUN_1447cd2ec(lVar16 + 0x2610,&local_148);
              }
              if (*(char *)((longlong)local_3e0 + 0x8d) == '\x01') {
                FUN_146256e6c(local_3f8,pcVar21,lVar16);
              }
              lVar16 = local_3f8;
              if ((((*(int *)(param_1 + -0x14) != 0) &&
                   (uVar10 = *(uint *)(param_1 + -0x18), -1 < (int)uVar10)) &&
                  (((int)uVar10 < DAT_14c9647dc &&
                   ((plVar18 = (longlong *)
                               ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                    plVar18 != (longlong *)0x0 && ((int)plVar18[2] == *(int *)(param_1 + -0x14))))))
                  ) && ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)) {
                if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
                  lVar23 = *plVar18;
                }
                else {
                  lVar23 = 0;
                }
                if (*(longlong *)(lVar23 + 0x1f0) != 0) {
                  lVar17 = FUN_1403ca142();
                  lVar23 = *(longlong *)(lVar23 + 0x1f0);
                  if ((((lVar23 != 0) && (lVar17 != 0)) &&
                      (lVar4 = *(longlong *)(lVar23 + 0x10), lVar4 != 0)) &&
                     ((*(int *)(lVar17 + 0x38) <= *(int *)(lVar4 + 0x38) &&
                      (*(longlong *)
                        (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8) ==
                       lVar17 + 0x30)))) {
                    FUN_14144f492(lVar23,pcVar21);
                  }
                }
              }
              local_368 = (code *)0x0;
              plStack_360 = (longlong *)0x0;
              if (((code *)local_3e0[3] != (code *)0x0) && ((int)local_3e0[4] - 1U < 0xfffffffe)) {
                local_1d8 = (code *)local_3e0[3];
                FUN_1400021e4(&local_1d8,&local_148);
                if (local_368 != (code *)0x0) {
                  FUN_1400020a8();
                }
                local_368 = local_148;
                plStack_360 = uStack_140;
              }
              local_378 = (code *)0x0;
              plStack_370 = (longlong *)0x0;
              lVar29 = FUN_14067bb54(lVar29);
              if ((lVar29 != 0) &&
                 (plVar18 = (longlong *)FUN_14067bd00(lVar29,&local_338), plVar18 != (longlong *)0x0
                 )) {
                (**(code **)(*plVar18 + 0x20))(plVar18,&local_148);
                if (local_378 != (code *)0x0) {
                  FUN_1400020a8();
                }
                local_378 = local_148;
                plStack_370 = uStack_140;
              }
              local_228 = 0;
              FUN_140056680(local_2b8,&DAT_149dfb77a);
              (*(code *)(&PTR_FUN_14a1842f0)[local_228])(local_248);
              local_248[0] = local_2b8[0];
              local_248[1] = local_2b8[1];
              auStack_240[0] = auStack_2b0[0];
              auStack_240[1] = auStack_2b0[1];
              auStack_240[2] = auStack_2b0[2];
              auStack_240[3] = auStack_2b0[3];
              auStack_23c[0] = auStack_2ac[0];
              auStack_23c[1] = auStack_2ac[1];
              auStack_23c[2] = auStack_2ac[2];
              auStack_23c[3] = auStack_2ac[3];
              local_228 = 4;
              local_448 = (code **)local_248;
              FUN_140d767d6(&local_220,&DAT_14cbd3e08,3,&DAT_149dfb77a);
              if ((*(longlong *)(local_220 + 0x3c) == 0) ||
                 (*(char *)(local_220 + 0x38) < local_218)) {
                local_298 = 0;
                FUN_140056680(&local_318,&DAT_149dfb77a);
                (*(code *)(&PTR_FUN_14a1842f0)[local_298])(local_2b8);
                auVar6 = local_318.Data4;
                uVar22 = local_318._0_8_;
                local_2b8[0] = local_318.Data1;
                local_2b8[1]._0_2_ = local_318.Data2;
                local_2b8[1]._2_2_ = local_318.Data3;
                auStack_2b0[0] = local_318.Data4[0];
                auStack_2b0[1] = local_318.Data4[1];
                auStack_2b0[2] = local_318.Data4[2];
                auStack_2b0[3] = local_318.Data4[3];
                auStack_2ac[0] = local_318.Data4[4];
                auStack_2ac[1] = local_318.Data4[5];
                auStack_2ac[2] = local_318.Data4[6];
                auStack_2ac[3] = local_318.Data4[7];
                local_298 = 4;
                local_448 = (code **)local_2b8;
                local_318._0_8_ = uVar22;
                local_318.Data4 = auVar6;
                FUN_140d767d6(local_300,&DAT_14cbd3e08,3);
                FUN_140d76846(&local_1d8,local_300);
                bVar30 = false;
              }
              else {
                uVar13 = (longlong)local_3e0 + 0x8d;
                FUN_14583cc56(lVar16,local_390);
                FUN_1400021e4(local_390,local_388);
                local_298 = 0;
                FUN_140056680(&local_318,&DAT_149dfb77a);
                (*(code *)(&PTR_FUN_14a1842f0)[local_298])(local_2b8);
                auVar6 = local_318.Data4;
                uVar22 = local_318._0_8_;
                local_2b8[0] = local_318.Data1;
                local_2b8[1]._0_2_ = local_318.Data2;
                local_2b8[1]._2_2_ = local_318.Data3;
                auStack_2b0[0] = local_318.Data4[0];
                auStack_2b0[1] = local_318.Data4[1];
                auStack_2b0[2] = local_318.Data4[2];
                auStack_2b0[3] = local_318.Data4[3];
                auStack_2ac[0] = local_318.Data4[4];
                auStack_2ac[1] = local_318.Data4[5];
                auStack_2ac[2] = local_318.Data4[6];
                auStack_2ac[3] = local_318.Data4[7];
                local_298 = 4;
                local_448 = (code **)local_2b8;
                local_318._0_8_ = uVar22;
                local_318.Data4 = auVar6;
                FUN_140d767d6(local_290,&DAT_14cbd3e08,3,&DAT_149dfb77a);
                local_440 = local_3c8;
                local_448 = &local_378;
                local_438 = uVar13;
                FUN_14582e95f(&local_1d8,local_290,&local_368);
                bVar30 = true;
              }
              FUN_14027c224(&local_148,&local_1d8);
              uVar10 = *(uint *)(pcVar21 + 0xc);
              if ((int)uVar10 < DAT_14c9647dc) {
                lVar16 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
              }
              else {
                lVar16 = 0;
              }
              iVar11 = *(int *)(lVar16 + 0x10);
              if (*(int *)(lVar16 + 0x10) == 0) {
                LOCK();
                iVar11 = DAT_14c964868 + 1;
                UNLOCK();
                iVar27 = DAT_14c964868 + 1;
                bVar32 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar11;
                if (bVar32) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                               );
                }
                LOCK();
                iVar11 = *(int *)(lVar16 + 0x10);
                bVar32 = iVar11 == 0;
                if (bVar32) {
                  *(int *)(lVar16 + 0x10) = iVar27;
                  iVar11 = 0;
                }
                UNLOCK();
                pcVar21 = local_3d8;
                if (bVar32) {
                  iVar11 = iVar27;
                }
              }
              uVar7 = local_d0;
              uVar22 = DAT_14c9a3c28;
              if ((((char)local_148 == '\x01') && (*(longlong *)((longlong)uStack_140 + 0x3c) != 0))
                 && (local_138._0_1_ <= (char)uStack_140[7])) {
                lVar16 = (longlong)(int)local_d0;
                local_d0 = local_d0 + 1;
                if (local_cc < local_d0) {
                  FUN_141225836(&local_d8,uVar7);
                }
                lVar16 = lVar16 * 0x40;
                *(undefined8 *)(local_d8 + lVar16) = uVar22;
                *(ulonglong *)(local_d8 + 8 + lVar16) = CONCAT44(iVar11,uVar10);
                puVar25 = (undefined8 *)(local_d8 + 0x10 + lVar16);
                *puVar25 = 0;
                puVar25[1] = 0;
                puVar25 = (undefined8 *)(local_d8 + 0x20 + lVar16);
                *puVar25 = 0;
                puVar25[1] = 0;
                puVar25 = (undefined8 *)(local_d8 + 0x30 + lVar16);
                *puVar25 = 0;
                puVar25[1] = 0;
                FUN_1404eec70(0,0);
              }
              local_318.Data1 = 0;
              local_318.Data2 = 0;
              local_318.Data3 = 0;
              local_318.Data4[0] = '\0';
              local_318.Data4[1] = '\0';
              local_318.Data4[2] = '\0';
              local_318.Data4[3] = '\0';
              local_318.Data4[4] = '\0';
              local_318.Data4[5] = '\0';
              local_318.Data4[6] = '\0';
              local_318.Data4[7] = '\0';
              CoCreateGuid(&local_318);
              if ((char)local_148 == '\x01') {
                FUN_14111b8d6(uStack_140,pcVar21,&local_318);
              }
              FUN_14027c198(&local_148);
              FUN_1404eec70(local_160,local_158);
              plVar18 = local_3e0;
              lVar16 = local_3f8;
              if (local_160 != 0) {
                FUN_1400020a8();
              }
              FUN_1404eecb3(local_170,local_168);
              if (local_170 != 0) {
                FUN_1400020a8();
              }
              FUN_1404eec06(local_190);
              (*(code *)(&PTR_FUN_14a1842f0)[local_198])(local_1b8);
              if (local_1c8 != 0) {
                FUN_1400020a8();
              }
              if (bVar30) {
                (*(code *)(&PTR_FUN_14a1842f0)[local_250])(local_270);
                lVar29 = local_388[0];
                if (local_280 != 0) {
                  FUN_1400020a8();
                  lVar29 = local_388[0];
                }
              }
              else {
                (*(code *)(&PTR_FUN_14a1842f0)[local_2c0])(local_2e0);
                lVar29 = local_2f0;
              }
              if (lVar29 != 0) {
                FUN_1400020a8();
              }
              (*(code *)(&PTR_FUN_14a1842f0)[local_1e0])(local_200);
              if (local_210 != 0) {
                FUN_1400020a8();
              }
              if (1 < *(int *)(param_1 + 0x88)) {
                *(undefined4 *)(param_1 + 0x88) = 0;
                if (*(int *)(param_1 + 0x8c) < 0) {
                  FUN_1446f8c06(local_3c8,0);
                }
                if ((undefined2 *)*local_3c8 != (undefined2 *)0x0) {
                  *(undefined2 *)*local_3c8 = 0;
                }
              }
              FUN_145903738(lVar16,pcVar21);
              if (local_378 != (code *)0x0) {
                FUN_1400020a8();
              }
              uVar13 = (ulonglong)local_3ec;
              plVar15 = local_3d0;
              if (local_368 != (code *)0x0) {
                FUN_1400020a8();
                plVar15 = local_3d0;
              }
              goto LAB_144232a00;
            }
            lVar17 = *(longlong *)(lVar23 + 0x1c8);
            if (lVar17 != 0) {
              _X = *(double *)(lVar17 + 0x270);
              _X_00 = *(double *)(lVar17 + 0x260);
              _X_01 = *(double *)(lVar17 + 0x268);
              if ((_X_00 == local_338) && (!NAN(_X_00) && !NAN(local_338))) {
                if ((_X_01 == dStack_330) && (!NAN(_X_01) && !NAN(dStack_330))) {
                  if ((_X == local_328) && (plVar15 = plVar14, !NAN(_X) && !NAN(local_328)))
                  goto LAB_144232ea6;
                }
              }
              local_138 = local_328 + (*(double *)(lVar17 + 0x170) - _X);
              uStack_140 = (longlong *)(dStack_330 + (*(double *)(lVar17 + 0x168) - _X_01));
              local_148 = (code *)(local_338 + (*(double *)(lVar17 + 0x160) - _X_00));
              if ((*(byte *)(lVar23 + 0x65) & 1) == 0) {
                FUN_1405e47c6(lVar23,1);
                local_1c8 = local_348;
                local_1d8 = local_358;
                uStack_1d0 = uStack_350;
                uStack_1cc = uStack_34c;
                uVar10 = FUN_140d7405c(plVar14,lVar23,&local_148);
                FUN_1405e47c6(lVar23,0);
              }
              else {
                local_1c8 = local_348;
                local_1d8 = local_358;
                uStack_1d0 = uStack_350;
                uStack_1cc = uStack_34c;
                uVar10 = FUN_140d7405c(plVar14,lVar23,&local_148);
              }
              iVar11 = _finite((double)local_148);
              pcVar21 = local_3d8;
              lVar16 = local_3f8;
              if ((((((iVar11 != 0) &&
                     (iVar11 = _finite((double)uStack_140), lVar16 = local_3f8, iVar11 != 0)) &&
                    (iVar11 = _finite(local_138), lVar16 = local_3f8, iVar11 != 0)) &&
                   ((iVar11 = _finite(_X_00), lVar16 = local_3f8, iVar11 != 0 &&
                    (iVar11 = _finite(_X_01), lVar16 = local_3f8, iVar11 != 0)))) &&
                  (iVar11 = _finite(_X), lVar16 = local_3f8, iVar11 != 0)) &&
                 (plVar15 = (longlong *)(ulonglong)uVar10, (char)uVar10 != '\0'))
              goto LAB_144232ea6;
            }
          }
        }
        FUN_144234f9c(lVar16,plVar18);
        plVar15 = local_3d0;
      }
      else if ((((*(char *)((longlong)plVar18 + 0x8c) == '\0') &&
                (*(char *)((longlong)plVar18 + 0x92) == '\0')) &&
               (((char)plVar14[0x1e7] != '\x01' || ((char)plVar14[0x477] == '\0')))) &&
              (((*(float *)((longlong)plVar18 + 0x84) <= 0.0 ||
                (*(float *)((longlong)plVar18 + 0x84) + *(float *)(plVar18 + 0x10) <= (float)dVar2))
               && (*(char *)((longlong)plVar18 + 0x8b) == '\0')))) {
        if (*plVar18 != 0) {
          cVar8 = FUN_140373d18(*plVar18,CONCAT71((int7)((ulonglong)plVar20 >> 8),1));
          if (cVar8 != '\0') goto LAB_144232a00;
        }
        if (local_3ed == '\0') {
          lVar16 = plVar18[5];
          if (lVar16 == 0) {
            local_148 = (code *)plVar18[3];
            lVar16 = FUN_14050aea0(&local_148);
            plVar18[5] = lVar16;
            if (lVar16 != 0) goto LAB_144232b43;
          }
          else {
LAB_144232b43:
            lVar29 = FUN_1407c8d60(lVar16);
            if ((lVar29 == 0) || (*(char *)(lVar29 + 0x28) == '\0')) {
              lVar29 = FUN_141446784(local_3f8,plVar18 + 3);
              if (lVar29 == 0) {
                cVar8 = FUN_148e0b2a6(local_3f8);
                if (cVar8 == '\0') {
                  FUN_145a127be(local_3f8,plVar18);
                }
                else {
                  lVar29 = plVar18[8];
                  if (lVar29 == 0) {
                    local_148 = (code *)plVar18[6];
                    lVar29 = FUN_14050aea0(&local_148);
                    plVar18[8] = lVar29;
                  }
                  if (lVar29 == lVar16 || lVar29 == 0) {
                    if ((*(int *)(param_1 + -0x14) == 0) ||
                       (uVar10 = *(uint *)(param_1 + -0x18), (int)uVar10 < 0)) {
LAB_144233b6d:
                      lVar16 = 0;
                    }
                    else {
                      lVar16 = 0;
                      if ((int)uVar10 < DAT_14c9647dc) {
                        plVar20 = (longlong *)
                                  ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
                        if (((plVar20 == (longlong *)0x0) ||
                            ((int)plVar20[2] != *(int *)(param_1 + -0x14))) ||
                           ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)) goto LAB_144233b6d;
                        lVar16 = *plVar20;
                      }
                    }
                    local_1d8 = *(code **)(lVar16 + 0x18);
                    FUN_1400021e4(&local_1d8,&local_148);
                    pcVar21 = (code *)&DAT_149dfb77a;
                    if ((int)uStack_140 != 0) {
                      pcVar21 = local_148;
                    }
                    FUN_1446f470e(&local_1d8,pcVar21,1);
                    FUN_1405f0c40(DAT_14cb84f20,&local_220,local_1d8);
                    if (local_148 != (code *)0x0) {
                      FUN_1400020a8();
                    }
                    lVar16 = FUN_1413e2d1a(&local_220);
                    if (lVar16 != 0) {
                      puVar25 = (undefined8 *)FUN_145d1453e(lVar16);
                      local_1d8 = (code *)*puVar25;
                      uStack_140 = (longlong *)
                                   CONCAT44(uStack_140._4_4_,*(undefined4 *)(puVar25 + 1));
                      local_138 = 0.0;
                      local_148 = local_1d8;
                      local_138 = (double)FUN_14050aea0(&local_1d8);
                      plVar15 = local_3d0;
                      if (local_138 == 0.0) goto LAB_1442330ac;
                      local_428 = (undefined2 *)((ulonglong)local_428 & 0xffffffffffffff00);
                      local_438 = local_438 & 0xffffffffffffff00;
                      local_440 = (undefined8 *)((ulonglong)local_440 & 0xffffffffffffff00);
                      local_448 = (code **)((ulonglong)local_448 & 0xffffffffffffff00);
                      local_430 = CONCAT71(local_430._1_7_,1);
                      FUN_1416a3978(local_3f8,plVar14,&local_148,0);
                      goto LAB_144233b61;
                    }
LAB_1442330ac:
                    cVar8 = (**(code **)(*plVar14 + 0x6c8))(plVar14);
                    if ((((cVar8 != '\0') && (*(int *)(param_1 + -0x14) != 0)) &&
                        ((uVar10 = *(uint *)(param_1 + -0x18), -1 < (int)uVar10 &&
                         (((int)uVar10 < DAT_14c9647dc &&
                          (plVar20 = (longlong *)
                                     ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8))
                          , plVar20 != (longlong *)0x0)))))) &&
                       (((int)plVar20[2] == *(int *)(param_1 + -0x14) &&
                        ((*(uint *)(plVar20 + 1) & 0x10200000) == 0)))) {
                      if ((*(uint *)(plVar20 + 1) & 0x10200000) == 0) {
                        lVar16 = *plVar20;
                      }
                      else {
                        lVar16 = 0;
                      }
                      plVar15 = local_3d0;
                      if (*(longlong *)(lVar16 + 0x1f0) != 0) {
                        lVar29 = FUN_1403ca142();
                        lVar16 = *(longlong *)(lVar16 + 0x1f0);
                        if ((((lVar16 != 0) && (lVar29 != 0)) &&
                            (lVar23 = *(longlong *)(lVar16 + 0x10), lVar23 != 0)) &&
                           ((*(int *)(lVar29 + 0x38) <= *(int *)(lVar23 + 0x38) &&
                            (*(longlong *)
                              (*(longlong *)(lVar23 + 0x30) + (longlong)*(int *)(lVar29 + 0x38) * 8)
                             == lVar29 + 0x30)))) {
                          FUN_14144fccc(local_3f8,plVar14,(char)plVar18[0x11]);
                          lVar29 = FUN_14021f720(lVar16);
                          if ((lVar29 != 0) && (*(int *)(lVar29 + 0xec) != 0)) {
                            FUN_145a12516(lVar16);
                          }
                          if ((*(int *)(*(longlong *)
                                         ((longlong)ThreadLocalStoragePointer +
                                         (ulonglong)_tls_index * 8) + 0x110) < DAT_14c844850) &&
                             (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
                            DAT_14c844840 = (code *)FUN_14001cc68(0x30,0x10);
                            *(undefined8 *)(DAT_14c844840 + 8) = 0;
                            *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
                            *(undefined8 *)(DAT_14c844840 + 0x10) = 0xffffffffffffffff;
                            *(undefined8 *)(DAT_14c844840 + 0x18) = 0;
                            *(undefined8 *)(DAT_14c844840 + 0x20) = 0;
                            *(undefined8 *)(DAT_14c844840 + 0x28) = 0;
                            if (DAT_14c844840 != (code *)0x0) {
                              LOCK();
                              *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
                              UNLOCK();
                            }
                            DAT_14c844848 = 0;
                            atexit(FUN_142760bef);
                            _Init_thread_footer(&DAT_14c844850);
                          }
                          pcVar21 = DAT_14c844840;
                          local_148 = DAT_14c844840;
                          if (DAT_14c844840 == (code *)0x0) {
                            uStack_140 = (longlong *)((ulonglong)uStack_140._4_4_ << 0x20);
                            FUN_148d31758(lVar16,1,&local_148);
                          }
                          else {
                            if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
                              LOCK();
                              *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
                              UNLOCK();
                              uStack_140 = (longlong *)((ulonglong)uStack_140._4_4_ << 0x20);
                              FUN_148d31758(lVar16,1,&local_148);
                              if (pcVar21 == (code *)0x0) goto LAB_144233b61;
                            }
                            else {
                              (**(code **)(*(longlong *)DAT_14c844840 + 8))(DAT_14c844840);
                              uStack_140 = (longlong *)((ulonglong)uStack_140 & 0xffffffff00000000);
                              FUN_148d31758(lVar16,1,&local_148);
                            }
                            (**(code **)(*(longlong *)pcVar21 + 0x10))(pcVar21);
                          }
LAB_144233b61:
                          uVar13 = (ulonglong)local_3ec;
                          plVar15 = local_3d0;
                          goto LAB_144232a00;
                        }
                      }
                    }
                    uVar13 = (ulonglong)local_3ec;
                    goto LAB_144232b7a;
                  }
                  local_428 = (undefined2 *)((ulonglong)local_428 & 0xffffffffffffff00);
                  local_438 = local_438 & 0xffffffffffffff00;
                  local_440 = (undefined8 *)((ulonglong)local_440 & 0xffffffffffffff00);
                  local_448 = (code **)((ulonglong)local_448 & 0xffffffffffffff00);
                  local_430 = CONCAT71(local_430._1_7_,1);
                  FUN_1416a3978(local_3f8,plVar14,plVar18 + 6,0);
                }
              }
              else if ((*(byte *)(lVar29 + 0x65) & 0x18) == 0x10) goto LAB_144232b7a;
              goto LAB_144232a00;
            }
          }
LAB_144232b7a:
          if ((longlong)*(int *)(param_1 + 0x218) != 0) {
            lVar16 = *(longlong *)(param_1 + 0x210);
            lVar29 = (longlong)*(int *)(param_1 + 0x218) * 0x98;
            do {
              if ((*(int *)(lVar16 + 0x14) == 0) ||
                 (uVar10 = *(uint *)(lVar16 + 0x10), (int)uVar10 < 0)) {
LAB_144232c0b:
                plVar20 = (longlong *)0x0;
              }
              else {
                plVar20 = (longlong *)0x0;
                if ((int)uVar10 < DAT_14c9647dc) {
                  puVar25 = (undefined8 *)
                            ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
                  if (((puVar25 == (undefined8 *)0x0) ||
                      (*(int *)(puVar25 + 2) != *(int *)(lVar16 + 0x14))) ||
                     ((*(uint *)(puVar25 + 1) & 0x10200000) != 0)) goto LAB_144232c0b;
                  plVar20 = (longlong *)*puVar25;
                }
              }
              if (plVar20 == plVar14) {
                if (lVar16 != 0) {
                  *(undefined1 *)(lVar16 + 0x93) = 1;
                }
                break;
              }
              lVar16 = lVar16 + 0x98;
              lVar29 = lVar29 + -0x98;
            } while (lVar29 != 0);
          }
        }
        else {
          if ((char)plVar18[0x12] == '\0') {
            FUN_1465e88dc(plVar14,(char)plVar18[0x11]);
          }
          FUN_14144fccc(local_3f8,plVar14,(char)plVar18[0x11]);
        }
      }
LAB_144232a00:
      plVar18 = plVar18 + 0x13;
      iVar11 = local_398;
    } while (plVar18 != plVar15);
  }
  else {
    if (iVar11 != 0) {
      lVar23 = (longlong)iVar11 * 0x98;
      do {
        FUN_14144fe08(lVar16,lVar29);
        lVar29 = lVar29 + 0x98;
        lVar23 = lVar23 + -0x98;
      } while (lVar23 != 0);
      iVar11 = *(int *)(param_1 + 0x218);
      lVar29 = *(longlong *)(param_1 + 0x210);
      uVar13 = (ulonglong)local_3ec;
      goto LAB_14423254f;
    }
    local_398 = 0;
LAB_144233fc6:
    local_3a0 = (longlong *)0x0;
    local_394 = 0;
LAB_144233fd3:
    iVar11 = 0;
  }
  FUN_14164267b(local_3a0,iVar11);
  if (local_3a0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_144233fef:
  if ((local_b0 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442341a6 FUN_1442341a6 body=124 status=ok
// SIG undefined FUN_1442341a6(void)

undefined8 FUN_1442341a6(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x238) != 0) {
    lVar4 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x230) + 0x14 + lVar4);
      if ((((iVar1 != 0) &&
           (uVar2 = *(uint *)(*(longlong *)(param_1 + 0x230) + 0x10 + lVar4), -1 < (int)uVar2)) &&
          ((int)uVar2 < DAT_14c9647dc)) &&
         (((lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar3 != 0 &&
           (*(int *)(lVar3 + 0x10) == iVar1)) && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
        return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
      }
      lVar4 = lVar4 + 0x98;
    } while ((longlong)*(int *)(param_1 + 0x238) * 0x98 - lVar4 != 0);
  }
  return 0;
}



// FUNCTION 144234222 FUN_144234222 body=1144 status=ok
// SIG undefined FUN_144234222(void)

void FUN_144234222(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar12;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  longlong local_b8;
  int local_b0;
  undefined8 local_a8;
  longlong local_a0;
  int local_98;
  longlong local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((((((*(int *)(param_1 + 0x294) != 0) && (uVar6 = *(uint *)(param_1 + 0x290), -1 < (int)uVar6))
        && ((int)uVar6 < DAT_14c9647dc)) &&
       ((plVar10 = (longlong *)
                   ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
        plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(param_1 + 0x294))))) &&
      (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 &&
       ((plVar10 = (longlong *)*plVar10, plVar10 != (longlong *)0x0 &&
        (*(int *)(param_1 + 0xc) != 0)))))) &&
     ((uVar6 = *(uint *)(param_1 + 8), -1 < (int)uVar6 &&
      (((((int)uVar6 < DAT_14c9647dc &&
         (plVar7 = (longlong *)
                   ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
         plVar7 != (longlong *)0x0)) && ((int)plVar7[2] == *(int *)(param_1 + 0xc))) &&
       (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))))))) {
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_88 = 0;
    uStack_80 = 0;
    lVar11 = *plVar7 + 0x230;
    local_98 = 0;
    local_a0 = lVar11;
    FUN_1461e533c(&local_a0);
    if (local_90 == 0) {
      bVar3 = true;
      lVar8 = 0;
    }
    else {
      bVar2 = true;
      lVar8 = 0;
      do {
        uVar4 = uStack_80;
        lVar1 = local_90;
        if (*(char *)(local_90 + 0x2270) == '\x01') {
          lVar9 = (longlong)(int)uStack_80;
          uVar6 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
          if (uStack_80._4_4_ < uVar6) {
            FUN_148cdaf50(&local_88,uVar4 & 0xffffffff);
          }
          *(longlong *)(local_88 + lVar9 * 8) = lVar1;
        }
        if ((bVar2) && (cVar5 = FUN_14423469c(lVar1,&local_78,0), cVar5 != '\0')) {
          bVar2 = false;
          lVar8 = lVar1;
        }
        local_98 = local_98 + 1;
        FUN_1461e533c(&local_a0);
      } while (local_90 != 0);
      bVar3 = true;
      if (!bVar2) {
        (**(code **)(*plVar10 + 0x6a0))(plVar10);
        bVar3 = false;
      }
    }
    local_98 = 0;
    local_a0 = lVar11;
    FUN_1461e533c(&local_a0);
    if (local_90 != 0) {
      do {
        lVar11 = local_90;
        if (bVar3) {
          *(undefined1 *)(local_90 + 0x2270) = 0;
          cVar5 = (**(code **)(*plVar10 + 0x678))(plVar10,local_90);
          uVar12 = extraout_XMM0_Da;
          if (cVar5 != '\0') {
            local_b8 = 0;
            local_b0 = 0x6000;
            local_a8 = 0;
            lVar1 = plVar10[(ulonglong)(~(uint)*(byte *)(plVar10 + 0x8c) & 1) + 0x7e];
            if (lVar1 != 0) {
              if (*(longlong *)(lVar1 + 0x2640) != 0 || *(int *)(lVar1 + 0x2648) != 0x6000) {
                local_b8 = *(longlong *)(lVar1 + 0x2640);
                local_b0 = *(int *)(lVar1 + 0x2648);
              }
            }
            local_c8 = 0;
            local_d0 = 0;
            local_d8 = 0;
            local_e0 = 0;
            local_e8 = 1;
            uVar12 = FUN_1416a3978(param_1,lVar11,&local_b8,0);
          }
        }
        else {
          *(undefined1 *)(local_90 + 0x2270) = 2;
          FUN_1447715ec(local_90 + 0x22a0,&local_78);
          cVar5 = (**(code **)(*plVar10 + 0x680))(plVar10,lVar11);
          if (cVar5 != '\0') {
            local_b8 = 0;
            local_b0 = 0x6000;
            local_a8 = 0;
            lVar1 = plVar10[(ulonglong)*(byte *)(plVar10 + 0x8c) + 0x7e];
            if (lVar1 != 0) {
              if (*(longlong *)(lVar1 + 0x2640) != 0 || *(int *)(lVar1 + 0x2648) != 0x6000) {
                local_b8 = *(longlong *)(lVar1 + 0x2640);
                local_b0 = *(int *)(lVar1 + 0x2648);
              }
            }
            local_c8 = 0;
            local_d0 = 0;
            local_d8 = 0;
            local_e0 = 0;
            local_e8 = 1;
            cVar5 = FUN_1416a3978(param_1,lVar11,&local_b8,0);
            if (cVar5 != '\0') {
              (**(code **)(*plVar10 + 0x688))(plVar10,lVar11);
            }
          }
          uVar12 = FUN_148e145a2(param_1 + 0x28,&local_78,lVar8);
        }
        FUN_148e0b5aa(uVar12,lVar11);
        local_98 = local_98 + 1;
        FUN_1461e533c(&local_a0);
      } while (local_90 != 0);
    }
    *(undefined8 *)(param_1 + 0x290) = 0;
    if (bVar3) {
      FUN_148e0b684(param_1);
      lVar11 = plVar10[(ulonglong)(~(uint)*(byte *)(plVar10 + 0x8c) & 1) + 0x7e];
      if (lVar11 == 0) {
        local_a0 = 0;
      }
      else {
        lVar8 = *(longlong *)(lVar11 + 0x2640);
        local_a0 = 0;
        if (*(int *)(lVar11 + 0x2648) != 0x6000) {
          local_a0 = lVar8;
        }
        if (lVar8 != 0) {
          local_a0 = lVar8;
        }
      }
      lVar11 = FUN_14050aea0();
      if (lVar11 != 0) {
        FUN_1466360c6(param_1,lVar11 + 0x50);
      }
      (**(code **)(*plVar10 + 0x698))(plVar10);
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14423469c FUN_14423469c body=181 status=ok
// SIG undefined FUN_14423469c(void)

undefined8 FUN_14423469c(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  
  cVar1 = FUN_1403ca7ae();
  if (cVar1 != '\0') {
    puVar5 = &DAT_14cbd3d18;
    goto LAB_1442346bc;
  }
  lVar3 = *(longlong *)(param_1 + 0xf48);
  if (lVar3 == 0) {
LAB_144234722:
    uVar2 = 0;
  }
  else {
    if (param_3 == '\0') {
      if (1 < (byte)(*(char *)(lVar3 + 0x5d30) - 1U)) {
        lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x10a0) + 0x20))(lVar3 + 0x10a0);
        if (lVar3 != 0) {
          lVar4 = FUN_140cb9f34();
          cVar1 = FUN_14881fefe(lVar3,*(undefined4 *)(lVar4 + 0x2c));
          if (cVar1 != '\0') {
            puVar5 = &DAT_14cbd3d40;
            goto LAB_1442346bc;
          }
        }
        goto LAB_144234703;
      }
      puVar5 = &DAT_14cbd3cf0;
    }
    else {
LAB_144234703:
      lVar3 = FUN_1402a1246(param_1);
      if ((lVar3 == 0) || (*(char *)(lVar3 + 0x740) == '\0')) goto LAB_144234722;
      puVar5 = &DAT_14cbd3cc8;
    }
LAB_1442346bc:
    FUN_1447715ec(param_2,puVar5);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 144234752 FUN_144234752 body=249 status=ok
// SIG undefined FUN_144234752(void)

void FUN_144234752(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined1 local_58;
  longlong local_48;
  int local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar2 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar2 != (longlong *)0x0 && ((int)plVar2[2] == *(int *)(param_1 + 0xc))) &&
      (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))))) {
    local_48 = *plVar2 + 0x230;
    local_40 = 0;
    FUN_1461e533c(&local_48);
    if (local_38 != 0) {
      do {
        local_58 = 0;
        local_60 = 0;
        local_70 = 0;
        local_78 = 0;
        local_68 = param_3;
        FUN_1416a3978(param_1,local_38,param_2,0);
        local_40 = local_40 + 1;
        FUN_1461e533c(&local_48);
      } while (local_38 != 0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14423484c FUN_14423484c body=167 status=ok
// SIG undefined FUN_14423484c(void)

undefined8 FUN_14423484c(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x238) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x230);
    lVar5 = (longlong)*(int *)(param_1 + 0x238) * 0x98;
    do {
      if ((*(int *)(lVar2 + 0x14) == 0) || (uVar1 = *(uint *)(lVar2 + 0x10), (int)uVar1 < 0)) {
LAB_1442348de:
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        if ((int)uVar1 < DAT_14c9647dc) {
          plVar4 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (((plVar4 == (longlong *)0x0) || ((int)plVar4[2] != *(int *)(lVar2 + 0x14))) ||
             ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) goto LAB_1442348de;
          lVar3 = *plVar4;
        }
      }
      if (lVar3 == param_2) {
        if (lVar2 == 0) {
          return 0;
        }
        return CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x88));
      }
      lVar2 = lVar2 + 0x98;
      lVar5 = lVar5 + -0x98;
    } while (lVar5 != 0);
  }
  return 0;
}



// FUNCTION 1442348f4 FUN_1442348f4 body=1702 status=ok
// SIG undefined FUN_1442348f4(void)

ulonglong FUN_1442348f4(longlong param_1,double *param_2,double *param_3,undefined4 *param_4,
                       undefined8 param_5)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  int iVar10;
  double dVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  double *pdVar15;
  uint uVar16;
  double dVar17;
  longlong *plVar18;
  double *unaff_RBP;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_2c8 [32];
  ulonglong local_2a8;
  undefined8 *local_2a0;
  undefined1 *local_298;
  double *local_288;
  double local_280;
  double local_278;
  double local_270;
  double *local_268;
  undefined8 uStack_260;
  double local_250;
  double dStack_248;
  double local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  char local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  char local_1c8;
  undefined4 local_164;
  undefined4 local_138;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 *local_f8;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined4 local_e4;
  undefined2 local_e0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_98;
  undefined8 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  dVar11 = param_2[2];
  if (dVar11 == 0.0) {
    local_208 = *param_2;
    dVar11 = (double)FUN_14050aea0();
    param_2[2] = dVar11;
    if (dVar11 != 0.0) goto LAB_14423496c;
LAB_144234a88:
    unaff_RBP = (double *)0x0;
    goto LAB_144234b88;
  }
LAB_14423496c:
  lVar12 = FUN_1407c8d60(dVar11);
  if (((lVar12 == 0) || (*(char *)(lVar12 + 0x28) != '\x01')) &&
     (lVar12 = FUN_141446784(param_1,param_2), lVar12 != 0)) {
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_144234a88;
    uVar16 = *(uint *)(param_1 + 8);
    unaff_RBP = (double *)0x0;
    if (((int)uVar16 < 0) || (DAT_14c9647dc <= (int)uVar16)) goto LAB_144234b88;
    plVar18 = (longlong *)
              ((ulonglong)((uVar16 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
    if (((plVar18 == (longlong *)0x0) ||
        (((int)plVar18[2] != *(int *)(param_1 + 0xc) || ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)
         ))) || (lVar1 = *plVar18, lVar1 == 0)) goto LAB_144234a88;
    dVar17 = dVar11;
    lVar13 = FUN_1407c8d60();
    uVar20 = SUB84(dVar17,0);
    if ((lVar13 == 0) || (*(char *)(lVar13 + 0x2a) == '\0')) {
      dVar17 = dVar11;
      lVar13 = FUN_1407c8d60();
      uVar20 = SUB84(dVar17,0);
      if ((lVar13 == 0) || (*(char *)(lVar13 + 0x29) == '\0')) {
        lVar13 = FUN_1407c8d60();
        uVar20 = SUB84(dVar11,0);
        if ((lVar13 == 0) || (*(char *)(lVar13 + 0x2b) != '\x01')) {
          local_268 = (double *)0x0;
          uStack_260 = 0;
          FUN_1461d0af6(lVar12,&local_268);
          unaff_RBP = (double *)0x0;
          if ((int)uStack_260 != 0) {
            unaff_RBP = local_268;
          }
          local_2a0 = (undefined8 *)param_5;
          local_2a8 = 0;
          FUN_144237182(param_1,&local_208,&local_268,0);
          if (local_1c8 == '\x01') {
            param_3[2] = local_1f8;
            *param_3 = local_208;
            param_3[1] = uStack_200;
            *(undefined8 *)(param_4 + 4) = local_1e0;
            *param_4 = (undefined4)uStack_1f0;
            param_4[1] = uStack_1f0._4_4_;
            param_4[2] = local_1e8;
            param_4[3] = uStack_1e4;
            unaff_RBP = (double *)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
          }
          else {
            local_e4 = 0;
            local_e0 = 0x101;
            local_b8 = 0;
            local_b0 = 0x800000000;
            local_98 = 0;
            local_90 = 0x400000000;
            local_108 = 0.0;
            uStack_100 = 0.0;
            local_e8 = 0;
            local_f0 = 1;
            local_f8 = (undefined8 *)0x100010000000000;
            local_ec = 1;
            local_288 = unaff_RBP;
            memset(&local_208,0,0x100);
            pdVar15 = local_268;
            local_138 = 0xffffffff;
            local_208 = (double)CONCAT44(0x3f800000,(undefined4)local_208);
            local_164 = 0xffffffff;
            lVar13 = (longlong)(int)uStack_260;
            if (lVar13 != 0) {
              unaff_RBP = (double *)0x0;
              do {
                iVar10 = *(int *)((longlong)(pdVar15 + 6) + (longlong)unaff_RBP);
                if (iVar10 == 1) {
                  fVar22 = *(float *)((longlong)pdVar15 + 0x3c + (longlong)unaff_RBP);
LAB_144234dd2:
                  fVar21 = fVar22 + fVar22;
                }
                else {
                  fVar22 = *(float *)((longlong)pdVar15 + 0x34 + (longlong)unaff_RBP);
                  if (iVar10 == 2) {
                    fVar21 = fVar22 + fVar22;
                  }
                  else {
                    fVar21 = 0.0;
                    if (iVar10 == 3) {
                      fVar22 = *(float *)((longlong)(pdVar15 + 7) + (longlong)unaff_RBP) - fVar22;
                      if (fVar22 <= 0.0001) {
                        fVar22 = 0.0001;
                      }
                      goto LAB_144234dd2;
                    }
                  }
                }
                dVar11 = (double)fVar21;
                local_240 = *(double *)((longlong)(pdVar15 + 2) + (longlong)unaff_RBP) + dVar11;
                local_278 = *(double *)((longlong)(pdVar15 + 1) + (longlong)unaff_RBP) + 0.0;
                local_280 = *(double *)((longlong)pdVar15 + (longlong)unaff_RBP) + 0.0;
                local_270 = *(double *)((longlong)(pdVar15 + 2) + (longlong)unaff_RBP) - dVar11;
                local_298 = &DAT_14cad0f10;
                local_2a0 = &local_108;
                local_2a8 = local_2a8 & 0xffffffff00000000;
                local_250 = local_280;
                dStack_248 = local_278;
                cVar9 = FUN_1400b50cc(lVar1,&local_208,&local_250,&local_280);
                if (cVar9 != '\0') {
                  *(double *)((longlong)(pdVar15 + 2) + (longlong)unaff_RBP) =
                       dVar11 + (double)CONCAT44(uStack_1e4,local_1e8);
                }
                unaff_RBP = unaff_RBP + 8;
              } while ((double *)(lVar13 * 0x40) != unaff_RBP);
            }
            local_2a0 = (undefined8 *)param_5;
            local_2a8 = 0;
            FUN_144237182(param_1,&local_250,&local_268,0);
            if (local_210 == '\0') {
              local_2a0 = (undefined8 *)param_5;
              local_2a8 = 0;
              FUN_144237182(param_1,&local_250,lVar12 + 0x26d0,0);
              if (local_210 == '\x01') goto LAB_144234ef8;
              lVar12 = FUN_140cb9f34();
              unaff_RBP = (double *)0x0;
              if ((local_288 != (double *)0x0) && (*(char *)(lVar12 + 0x2a8) != '\0')) {
                param_3[2] = local_288[2];
                dVar11 = local_288[1];
                *param_3 = *local_288;
                param_3[1] = dVar11;
                *(double *)(param_4 + 4) = local_288[5];
                local_238 = *(undefined4 *)(local_288 + 3);
                uStack_234 = *(undefined4 *)((longlong)local_288 + 0x1c);
                uStack_230 = *(undefined4 *)(local_288 + 4);
                uStack_22c = *(undefined4 *)((longlong)local_288 + 0x24);
                goto LAB_144234f20;
              }
            }
            else {
LAB_144234ef8:
              param_3[2] = local_240;
              *param_3 = local_250;
              param_3[1] = dStack_248;
              *(undefined8 *)(param_4 + 4) = local_228;
LAB_144234f20:
              *param_4 = local_238;
              param_4[1] = uStack_234;
              param_4[2] = uStack_230;
              param_4[3] = uStack_22c;
              unaff_RBP = (double *)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
            }
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            if (local_b8 != 0) {
              FUN_1400020a8();
            }
          }
          if (local_268 != (double *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_144234b88;
        }
      }
    }
    lVar1 = *(longlong *)(lVar12 + 0x1c8);
    if (lVar1 == 0) {
      puVar14 = &DAT_14c8464e0;
      uVar19 = (undefined4)DAT_14c8464f0;
      uVar23 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar19 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
      uVar23 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
      puVar14 = (undefined8 *)(lVar1 + 0x260);
    }
    uVar24 = *(undefined4 *)((longlong)puVar14 + 4);
    uVar4 = *(undefined4 *)(puVar14 + 1);
    uVar5 = *(undefined4 *)((longlong)puVar14 + 0xc);
    *(undefined4 *)param_3 = *(undefined4 *)puVar14;
    *(undefined4 *)((longlong)param_3 + 4) = uVar24;
    *(undefined4 *)(param_3 + 1) = uVar4;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar5;
    param_3[2] = (double)CONCAT44(uVar23,uVar19);
    lVar12 = *(longlong *)(lVar12 + 0x1c8);
    if (lVar12 == 0) {
      local_f8 = DAT_14c846508;
      uVar20 = (undefined4)DAT_14c8464f8;
      uVar19 = DAT_14c8464f8._4_4_;
      uVar23 = (undefined4)DAT_14c846500;
      uVar24 = DAT_14c846500._4_4_;
    }
    else {
      dVar11 = *(double *)(lVar12 + 0x240);
      dVar17 = *(double *)(lVar12 + 0x248);
      dVar6 = *(double *)(lVar12 + 0x250);
      dVar7 = *(double *)(lVar12 + 600);
      pdVar15 = *(double **)(lVar12 + 0x228);
      local_208 = dVar11;
      uStack_200 = dVar17;
      local_1f8 = dVar6;
      uStack_1f0 = dVar7;
      if (pdVar15 == (double *)0x0) {
        uVar20 = 0x40;
        pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
        dVar8 = DAT_14c8463d8;
        *pdVar15 = DAT_14c8463d0;
        pdVar15[1] = dVar8;
        dVar8 = DAT_14c8463e8;
        pdVar15[2] = DAT_14c8463e0;
        pdVar15[3] = dVar8;
        dVar8 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar15[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar15[5] = dVar8;
        puVar14 = DAT_14c846508;
        pdVar15[6] = (double)DAT_14c846508;
        *(double **)(lVar12 + 0x228) = pdVar15;
      }
      auVar2._8_4_ = (int)-(ulonglong)(dVar17 != pdVar15[1]);
      auVar2._0_8_ = -(ulonglong)(dVar11 != *pdVar15);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar17 != pdVar15[1]) >> 0x20);
      iVar10 = movmskpd((int)puVar14,auVar2);
      auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar15[3]);
      auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar15[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar15[3]) >> 0x20);
      uVar16 = movmskpd(uVar20,auVar3);
      if ((uVar16 & 0x3fffffff) != 0 || iVar10 != 0) {
        *(undefined4 *)(pdVar15 + 2) = (undefined4)local_1f8;
        *(undefined4 *)((longlong)pdVar15 + 0x14) = local_1f8._4_4_;
        *(undefined4 *)(pdVar15 + 3) = (undefined4)uStack_1f0;
        *(undefined4 *)((longlong)pdVar15 + 0x1c) = uStack_1f0._4_4_;
        *(undefined4 *)pdVar15 = (undefined4)local_208;
        *(undefined4 *)((longlong)pdVar15 + 4) = local_208._4_4_;
        *(undefined4 *)(pdVar15 + 1) = (undefined4)uStack_200;
        *(undefined4 *)((longlong)pdVar15 + 0xc) = uStack_200._4_4_;
        FUN_1448052ee(&local_208,&local_108);
        pdVar15[6] = (double)local_f8;
        pdVar15[4] = local_108;
        pdVar15[5] = uStack_100;
      }
      local_f8 = (undefined8 *)pdVar15[6];
      uVar20 = *(undefined4 *)(pdVar15 + 4);
      uVar19 = *(undefined4 *)((longlong)pdVar15 + 0x24);
      uVar23 = *(undefined4 *)(pdVar15 + 5);
      uVar24 = *(undefined4 *)((longlong)pdVar15 + 0x2c);
    }
    local_108 = (double)CONCAT44(uVar19,uVar20);
    uStack_100 = (double)CONCAT44(uVar24,uVar23);
    *(undefined8 **)(param_4 + 4) = local_f8;
  }
  else {
    param_3[2] = *(double *)((longlong)dVar11 + 0x78);
    dVar17 = *(double *)((longlong)dVar11 + 0x70);
    *param_3 = *(double *)((longlong)dVar11 + 0x68);
    param_3[1] = dVar17;
    *(undefined8 *)(param_4 + 4) = *(undefined8 *)((longlong)dVar11 + 0x90);
    uVar20 = *(undefined4 *)((longlong)dVar11 + 0x80);
    uVar19 = *(undefined4 *)((longlong)dVar11 + 0x84);
    uVar23 = *(undefined4 *)((longlong)dVar11 + 0x88);
    uVar24 = *(undefined4 *)((longlong)dVar11 + 0x8c);
  }
  *param_4 = uVar20;
  param_4[1] = uVar19;
  param_4[2] = uVar23;
  param_4[3] = uVar24;
  unaff_RBP = (double *)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
LAB_144234b88:
  if ((local_80 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)unaff_RBP & 0xffffffff;
}



// FUNCTION 144234f9c FUN_144234f9c body=2753 status=ok
// SIG undefined FUN_144234f9c(void)

void FUN_144234f9c(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  uint local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  longlong local_70;
  code *local_68;
  int local_60;
  undefined4 uStack_5c;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar5 = FUN_14144f426();
  if (((((((cVar5 != '\0') || (*(int *)(param_1 + 0xc) == 0)) ||
         (uVar2 = *(uint *)(param_1 + 8), (int)uVar2 < 0)) ||
        ((DAT_14c9647dc <= (int)uVar2 ||
         (lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar10 == 0)))) ||
       ((*(int *)(lVar10 + 0x10) != *(int *)(param_1 + 0xc) ||
        (((*(uint *)(lVar10 + 8) & 0x10200000) != 0 || (*(int *)(param_2 + 0x14) == 0)))))) ||
      (uVar2 = *(uint *)(param_2 + 0x10), (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2))
  goto LAB_14423501a;
  plVar7 = (longlong *)
           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
  if ((((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != *(int *)(param_2 + 0x14))) ||
      ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) ||
     ((plVar7 = (longlong *)*plVar7, plVar7 == (longlong *)0x0 ||
      (lVar10 = FUN_1402a1246(plVar7), lVar10 == 0)))) goto LAB_14423501a;
  if ((*(longlong *)(param_2 + 0x18) == 0) || (0xfffffffd < *(int *)(param_2 + 0x20) - 1U)) {
    local_c8 = *(undefined8 *)(param_2 + 0x58);
    FUN_140002266(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_2 + 0x48),
                  *(undefined8 *)(param_2 + 0x50));
  }
  else {
    local_70 = *(longlong *)(param_2 + 0x18);
    FUN_1400021e4(&local_70,&local_68);
  }
  pcVar8 = local_68;
  if (local_60 == 0) {
    pcVar8 = (code *)&DAT_149dfb77a;
  }
  FUN_140056680(local_58,pcVar8);
  if (local_68 != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((*(byte *)(param_2 + 0x89) < 3) && (*(char *)(param_2 + 0x90) == '\0')) {
    FUN_148e0b984(param_1,param_2);
  }
  else {
    switch(*(undefined1 *)(param_2 + 0x8a)) {
    case 0:
      if (((*(longlong *)(param_2 + 0x18) != *(longlong *)(param_1 + 0xd0)) ||
          (*(int *)(param_2 + 0x20) != *(int *)(param_1 + 0xd8))) &&
         (*(int *)(param_1 + 0xd8) - 1U < 0xfffffffe && *(longlong *)(param_1 + 0xd0) != 0)) {
        local_a8 = (wchar_t *)CONCAT71(local_a8._1_7_,*(undefined1 *)(param_2 + 0x91));
        local_b0 = CONCAT71(local_b0._1_7_,1);
        local_b8 = CONCAT31(local_b8._1_3_,*(undefined1 *)(param_2 + 0x8e));
        local_c8 = CONCAT71(local_c8._1_7_,1);
        local_c0 = local_c0 & 0xffffff00;
        cVar5 = FUN_1416a3978(param_1,plVar7,param_1 + 0xd0,*(undefined1 *)(param_2 + 0x8d));
        if (cVar5 != '\0') {
          if ((longlong)*(int *)(param_1 + 0x238) != 0) {
            lVar10 = *(longlong *)(param_1 + 0x230);
            lVar6 = (longlong)*(int *)(param_1 + 0x238) * 0x98;
            do {
              if ((*(int *)(lVar10 + 0x14) == 0) ||
                 (uVar2 = *(uint *)(lVar10 + 0x10), (int)uVar2 < 0)) {
LAB_144235270:
                plVar9 = (longlong *)0x0;
              }
              else {
                plVar9 = (longlong *)0x0;
                if ((int)uVar2 < DAT_14c9647dc) {
                  puVar11 = (undefined8 *)
                            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                  if (((puVar11 == (undefined8 *)0x0) ||
                      (*(int *)(puVar11 + 2) != *(int *)(lVar10 + 0x14))) ||
                     ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) goto LAB_144235270;
                  plVar9 = (longlong *)*puVar11;
                }
              }
              if (plVar9 == plVar7) {
                if (lVar10 != 0) {
                  *(undefined1 *)(lVar10 + 0x8a) = 1;
                }
                break;
              }
              lVar10 = lVar10 + 0x98;
              lVar6 = lVar6 + -0x98;
            } while (lVar6 != 0);
          }
          goto switchD_144235165_default;
        }
      }
      break;
    case 1:
      break;
    case 2:
      goto switchD_144235165_caseD_2;
    case 3:
      goto switchD_144235165_caseD_3;
    default:
      goto switchD_144235165_default;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_1442358bf:
      lVar10 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 8);
      lVar10 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar9 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar9 == (longlong *)0x0) ||
           (((int)plVar9[2] != *(int *)(param_1 + 0xc) ||
            ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_1442358bf;
        lVar10 = *plVar9;
      }
    }
    if (0 < *(int *)(lVar10 + 0x238)) {
      lVar6 = 0;
      do {
        iVar3 = *(int *)(*(longlong *)(lVar10 + 0x230) + 4 + lVar6 * 8);
        if (((((iVar3 != 0) &&
              (uVar2 = *(uint *)(*(longlong *)(lVar10 + 0x230) + lVar6 * 8), -1 < (int)uVar2)) &&
             ((int)uVar2 < DAT_14c9647dc)) &&
            ((plVar9 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar3)))) &&
           (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 &&
            (plVar9 = (longlong *)*plVar9, plVar9 != (longlong *)0x0)))) {
          if (DAT_14cbadd90 == 0) {
            local_68 = FUN_141030f22;
            local_80 = FUN_14081d0ea;
            local_88 = &LAB_1459f2e4c;
            local_90 = &local_68;
            local_98 = &LAB_148c39de3;
            local_a0 = &LAB_1457a9eb2;
            local_a8 = L"Game";
            local_b0 = 0;
            local_b8 = 0x10000004;
            local_c0 = 0x10;
            local_c8 = CONCAT44(local_c8._4_4_,0x3de0);
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar9[2] + 0x38)) && (plVar9 != plVar7))
             && (*(longlong *)
                  (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8)
                 == DAT_14cbadd90 + 0x30)) {
            local_c8 = CONCAT71(local_c8._1_7_,*(undefined1 *)(param_2 + 0x8d));
            local_c0 = local_c0 & 0xffffff00;
            cVar5 = FUN_1416d511e(param_1,plVar7,plVar9,*(undefined1 *)(param_2 + 0x8e));
            if (cVar5 != '\0') {
              if ((longlong)*(int *)(param_1 + 0x238) == 0) goto switchD_144235165_default;
              lVar10 = *(longlong *)(param_1 + 0x230);
              lVar6 = (longlong)*(int *)(param_1 + 0x238) * 0x98;
              goto LAB_14423547c;
            }
          }
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(lVar10 + 0x238));
    }
switchD_144235165_caseD_2:
    plVar9 = (longlong *)FUN_145d1445c(param_1);
    uVar2 = (int)plVar9[1] - 1;
    if ((uVar2 < 0xfffffffe && *plVar9 != 0) &&
       ((*(longlong *)(param_2 + 0x18) != *plVar9 || (*(int *)(param_2 + 0x20) != (int)plVar9[1]))))
    {
      local_a8 = (wchar_t *)CONCAT71(local_a8._1_7_,*(undefined1 *)(param_2 + 0x91));
      local_b0 = CONCAT71(local_b0._1_7_,1);
      local_b8 = CONCAT31(local_b8._1_3_,*(undefined1 *)(param_2 + 0x8e));
      local_c8 = CONCAT71(local_c8._1_7_,1);
      local_c0 = local_c0 & 0xffffff00;
      cVar5 = FUN_1416a3978(param_1,plVar7,plVar9,
                            CONCAT31((int3)(uVar2 >> 8),*(undefined1 *)(param_2 + 0x8d)));
      if (cVar5 != '\0') {
        if ((longlong)*(int *)(param_1 + 0x238) != 0) {
          lVar10 = *(longlong *)(param_1 + 0x230);
          lVar6 = (longlong)*(int *)(param_1 + 0x238) * 0x98;
          do {
            if ((*(int *)(lVar10 + 0x14) == 0) || (uVar2 = *(uint *)(lVar10 + 0x10), (int)uVar2 < 0)
               ) {
LAB_1442355f5:
              plVar9 = (longlong *)0x0;
            }
            else {
              plVar9 = (longlong *)0x0;
              if ((int)uVar2 < DAT_14c9647dc) {
                puVar11 = (undefined8 *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                if (((puVar11 == (undefined8 *)0x0) ||
                    (*(int *)(puVar11 + 2) != *(int *)(lVar10 + 0x14))) ||
                   ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) goto LAB_1442355f5;
                plVar9 = (longlong *)*puVar11;
              }
            }
            if (plVar9 == plVar7) {
              if (lVar10 != 0) {
                *(undefined1 *)(lVar10 + 0x8a) = 3;
              }
              break;
            }
            lVar10 = lVar10 + 0x98;
            lVar6 = lVar6 + -0x98;
          } while (lVar6 != 0);
        }
        goto switchD_144235165_default;
      }
    }
switchD_144235165_caseD_3:
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_1442358c7:
      lVar10 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 8);
      lVar10 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar9 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar9 == (longlong *)0x0) ||
           (((int)plVar9[2] != *(int *)(param_1 + 0xc) ||
            ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_1442358c7;
        lVar10 = *plVar9;
      }
    }
    if (*(longlong *)(lVar10 + 0x1f0) != 0) {
      lVar6 = FUN_1403ca142();
      plVar9 = *(longlong **)(lVar10 + 0x1f0);
      if ((((plVar9 != (longlong *)0x0) && (lVar6 != 0)) && (lVar10 = plVar9[2], lVar10 != 0)) &&
         ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar10 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)))) {
        FUN_14144fccc(param_1,plVar7,*(undefined1 *)(param_2 + 0x88));
        cVar5 = (**(code **)(*plVar7 + 0x6c8))(plVar7);
        if (cVar5 == '\0') {
          plVar9 = (longlong *)plVar9[9];
          if (plVar9 != (longlong *)0x0) {
            lVar10 = FUN_140b6d0be();
            if ((*(int *)(lVar10 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
                lVar10 + 0x30)) {
              (**(code **)(*plVar7 + 0x10b8))(plVar7,&local_68);
              if (local_68 != (code *)0x0) {
                (**(code **)(*plVar9 + 0x368))(plVar9,local_68,2);
              }
              plVar7 = (longlong *)CONCAT44(uStack_5c,local_60);
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                plVar9 = plVar7 + 1;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)*plVar9 == 0) {
                  (**(code **)*plVar7)(plVar7);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar7 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
              }
            }
          }
        }
        else {
          cVar5 = FUN_14016169c(plVar7,&local_68);
          if ((cVar5 != '\0') && ((int)local_68 != 0)) {
            lVar10 = plVar7[0x86];
            if (lVar10 == 0) {
LAB_1442359b1:
              lVar6 = 0;
            }
            else {
              if (DAT_14cae9568 == 0) {
                local_68 = FUN_1417de738;
                local_80 = (code *)&LAB_145893408;
                local_88 = &LAB_1458cbbd2;
                local_98 = &LAB_147ba21f1;
                local_a0 = &LAB_1463e9233;
                local_a8 = L"Engine";
                local_b0 = 0;
                local_b8 = 0x1000000c;
                local_c0 = 8;
                local_c8 = CONCAT44(local_c8._4_4_,0x2b8);
                local_90 = &local_68;
                FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
                lVar10 = plVar7[0x86];
                if (lVar10 == 0) goto LAB_1442359b1;
              }
              lVar6 = 0;
              if ((DAT_14cae9568 != 0) && (lVar4 = *(longlong *)(lVar10 + 0x10), lVar4 != 0)) {
                if (*(int *)(lVar4 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) goto LAB_1442359b1;
                lVar6 = 0;
                if (*(longlong *)
                     (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
                    DAT_14cae9568 + 0x30) {
                  lVar6 = lVar10;
                }
              }
            }
            cVar5 = (**(code **)(*plVar9 + 0x338))(plVar9,lVar6);
            if (cVar5 != '\0') goto switchD_144235165_default;
          }
          lVar10 = FUN_14021f720(plVar9);
          if ((lVar10 != 0) && (*(int *)(lVar10 + 0xec) != 0)) {
            FUN_145a12516(plVar9);
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
            DAT_14c844840 = (code *)FUN_14001cc68(0x30,0x10);
            *(longlong *)(DAT_14c844840 + 8) = 0;
            *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
            *(longlong *)(DAT_14c844840 + 0x10) = -1;
            *(longlong *)(DAT_14c844840 + 0x18) = 0;
            *(longlong *)(DAT_14c844840 + 0x20) = 0;
            *(longlong *)(DAT_14c844840 + 0x28) = 0;
            if (DAT_14c844840 != (code *)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
          }
          pcVar8 = DAT_14c844840;
          local_68 = DAT_14c844840;
          if (DAT_14c844840 == (code *)0x0) {
            local_60 = 0;
            FUN_148d31758(plVar9,1);
          }
          else {
            if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
              LOCK();
              *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
              UNLOCK();
              local_60 = 0;
              FUN_148d31758(plVar9,1);
              if (pcVar8 == (code *)0x0) goto switchD_144235165_default;
            }
            else {
              (**(code **)(*(longlong *)DAT_14c844840 + 8))(DAT_14c844840);
              local_60 = 0;
              FUN_148d31758(plVar9,1);
            }
            (**(code **)(*(longlong *)pcVar8 + 0x10))(pcVar8);
          }
        }
      }
    }
  }
switchD_144235165_default:
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
LAB_14423501a:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    lVar10 = lVar10 + 0x98;
    lVar6 = lVar6 + -0x98;
    if (lVar6 == 0) break;
LAB_14423547c:
    if ((*(int *)(lVar10 + 0x14) == 0) || (uVar2 = *(uint *)(lVar10 + 0x10), (int)uVar2 < 0)) {
LAB_1442354e2:
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)0x0;
      if ((int)uVar2 < DAT_14c9647dc) {
        puVar11 = (undefined8 *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (((puVar11 == (undefined8 *)0x0) || (*(int *)(puVar11 + 2) != *(int *)(lVar10 + 0x14)))
           || ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) goto LAB_1442354e2;
        plVar9 = (longlong *)*puVar11;
      }
    }
    if (plVar9 == plVar7) {
      if (lVar10 != 0) {
        *(undefined1 *)(lVar10 + 0x8a) = 2;
      }
      break;
    }
  }
  goto switchD_144235165_default;
}



// FUNCTION 144235a5e FUN_144235a5e body=1353 status=ok
// SIG undefined FUN_144235a5e(void)

undefined8 FUN_144235a5e(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  byte bVar12;
  undefined7 uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0;
  byte local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  longlong local_90;
  int local_88;
  undefined8 local_80;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  ulonglong uVar13;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = *(uint *)(param_1 + 8);
    uVar7 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_144235be1;
    plVar10 = (longlong *)
              ((ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar10 != (longlong *)0x0) &&
       (((((int)plVar10[2] == *(int *)(param_1 + 0xc) &&
          ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) && (lVar8 = *plVar10, lVar8 != 0)) &&
        ((cVar4 = FUN_14144f426(param_1), param_2 != (longlong *)0x0 && cVar4 == '\0' &&
         ((longlong)*(int *)(param_1 + 0x238) != 0)))))) {
      lVar16 = *(longlong *)(param_1 + 0x230);
      lVar11 = (longlong)*(int *)(param_1 + 0x238) * 0x98;
      do {
        if ((*(int *)(lVar16 + 0x14) == 0) || (uVar1 = *(uint *)(lVar16 + 0x10), (int)uVar1 < 0)) {
LAB_144235b92:
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)0x0;
          if ((int)uVar1 < DAT_14c9647dc) {
            puVar15 = (undefined8 *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((puVar15 == (undefined8 *)0x0) ||
                (*(int *)(puVar15 + 2) != *(int *)(lVar16 + 0x14))) ||
               ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)) goto LAB_144235b92;
            plVar10 = (longlong *)*puVar15;
          }
        }
        if (plVar10 == param_2) {
          if (lVar16 != 0) {
            local_60 = *(longlong *)(lVar16 + 0x18);
            local_58 = *(int *)(lVar16 + 0x20);
            if ((local_58 - 1U < 0xfffffffe && local_60 != 0) &&
               (local_78 = local_60, lVar11 = FUN_14050aea0(), local_50 = lVar11, lVar11 != 0)) {
              FUN_145aa4abc(param_1,param_2);
              lVar2 = param_2[0x478];
              uVar1 = *(uint *)(param_2 + 0x479);
              uVar13 = (ulonglong)uVar1;
              uVar7 = FUN_140cb9f34();
              FUN_1414adc80(uVar7,&local_60);
              if ((*(longlong *)(lVar16 + 0x30) != lVar2) || (*(uint *)(lVar16 + 0x38) != uVar1)) {
                *(longlong *)(lVar16 + 0x30) = lVar2;
                *(uint *)(lVar16 + 0x38) = uVar1;
                *(undefined8 *)(lVar16 + 0x40) = 0;
              }
              bVar5 = *(byte *)(lVar16 + 0x90);
              if (bVar5 == 0) {
                bVar12 = (**(code **)(*param_2 + 0x6c8))(param_2);
                bVar12 = bVar12 ^ 1;
                bVar5 = *(byte *)(lVar16 + 0x90);
              }
              else {
                bVar12 = 0;
              }
              *(byte *)(lVar16 + 0x8b) = bVar12;
              *(undefined1 *)(lVar16 + 0x8c) = 0;
              *(float *)(lVar16 + 0x80) = (float)*(double *)(lVar8 + 0x6d0);
              local_b0 = *(undefined1 *)(lVar16 + 0x8e);
              local_a0 = *(undefined1 *)(lVar16 + 0x91);
              local_98 = 0;
              local_a8 = bVar5 & 1;
              local_b8 = 0;
              FUN_14148df3c(param_2,*(undefined1 *)(lVar16 + 0x88),&local_60,&DAT_14c8464e0);
              if (((*(int *)(param_1 + 0xc) == 0) ||
                  (uVar1 = *(uint *)(param_1 + 8), (int)uVar1 < 0)) ||
                 ((DAT_14c9647dc <= (int)uVar1 ||
                  (((plVar10 = (longlong *)
                               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                    plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(param_1 + 0xc))) ||
                   ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))))) {
LAB_144235d2b:
                if ((bVar5 & 1) == 0) {
                  FUN_145a12700(param_1,lVar16);
LAB_144235f4d:
                  lVar8 = FUN_1407c8d60(lVar11);
                  bVar17 = false;
                  bVar3 = false;
                  if ((lVar8 == 0) || (bVar3 = false, *(char *)(lVar8 + 0x2a) == '\0')) {
LAB_144235f67:
                    bVar17 = bVar3;
                    lVar8 = FUN_1407c8d60(lVar11);
                    if ((lVar8 == 0) || (*(char *)(lVar8 + 0x2b) == '\0')) {
                      FUN_14148e104(param_1,param_2,&local_60);
                    }
                  }
                }
                else {
                  bVar17 = false;
                }
              }
              else {
                if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
                  lVar8 = *plVar10;
                }
                else {
                  lVar8 = 0;
                }
                plVar10 = *(longlong **)(lVar8 + 0x1f0);
                if (plVar10 == (longlong *)0x0) goto LAB_144235d2b;
                lVar8 = FUN_1403ca142();
                if ((*(int *)(plVar10[2] + 0x38) < *(int *)(lVar8 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
                    lVar8 + 0x30)) goto LAB_144235d2b;
                uVar6 = (**(code **)(*plVar10 + 0x498))(plVar10);
                bVar12 = (char)uVar6 - 6;
                uVar13 = (ulonglong)CONCAT31((int3)((uint)uVar6 >> 8),bVar12);
                bVar17 = bVar12 < 3;
                if ((bVar5 & 1) == 0) {
                  FUN_145a12700(param_1,lVar16);
                  bVar3 = true;
                  if (2 < bVar12) goto LAB_144235f4d;
                  goto LAB_144235f67;
                }
              }
              cVar4 = FUN_14016169c(param_2);
              uVar14 = (undefined7)(uVar13 >> 8);
              uVar7 = CONCAT71(uVar14,1);
              if (((cVar4 == '\0') || ((int)local_78 == 0)) &&
                 (bVar5 = (**(code **)(*param_2 + 0x6c8))(param_2), (bVar17 & bVar5) == 1)) {
                local_78 = *(longlong *)(lVar11 + 0x50);
                local_70 = *(undefined4 *)(lVar11 + 0x58);
                local_68 = 0;
                local_90 = *(longlong *)(param_1 + 0x100);
                local_88 = *(int *)(param_1 + 0x108);
                local_80 = 0;
                if ((param_3 != '\0') || (*(char *)(param_1 + 200) == '\x01')) {
                  if (local_90 != 0 || local_88 != 0x6000) {
                    local_90 = 0;
                    local_88 = 0x6000;
                  }
                  *(undefined1 *)(param_1 + 200) = 0;
                }
                if (*(int *)(param_1 + 0xc) == 0) {
LAB_144235f93:
                  uVar9 = 0;
                }
                else {
                  uVar1 = *(uint *)(param_1 + 8);
                  uVar9 = 0;
                  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
                    puVar15 = (undefined8 *)
                              ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                    if ((puVar15 == (undefined8 *)0x0) ||
                       ((*(int *)(puVar15 + 2) != *(int *)(param_1 + 0xc) ||
                        ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) goto LAB_144235f93;
                    uVar9 = *puVar15;
                  }
                }
                uVar7 = CONCAT71(uVar14,1);
                FUN_14583c447(uVar9,&local_78,&local_90,1);
                if (*(int *)(param_1 + 0xc) == 0) {
LAB_144235f9a:
                  uVar9 = 0;
                }
                else {
                  uVar1 = *(uint *)(param_1 + 8);
                  uVar9 = 0;
                  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
                    puVar15 = (undefined8 *)
                              ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                    if ((puVar15 == (undefined8 *)0x0) ||
                       ((*(int *)(puVar15 + 2) != *(int *)(param_1 + 0xc) ||
                        ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) goto LAB_144235f9a;
                    uVar9 = *puVar15;
                  }
                }
                FUN_14583c447(uVar9,&local_78,&local_90,0);
                FUN_1466360c6(param_1,&local_78);
              }
              goto LAB_144235be1;
            }
          }
          break;
        }
        lVar16 = lVar16 + 0x98;
        lVar11 = lVar11 + -0x98;
      } while (lVar11 != 0);
    }
  }
  uVar7 = 0;
LAB_144235be1:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 144235fa8 FUN_144235fa8 body=251 status=ok
// SIG undefined FUN_144235fa8(void)

ulonglong FUN_144235fa8(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  cVar1 = FUN_14144f426();
  if (cVar1 == '\0') {
    uVar3 = 0;
    cVar1 = FUN_144236d58(param_1,param_2,param_4,0);
    if (((param_3 == 0) || (param_2 == param_3)) || (cVar1 == '\0')) goto LAB_144235fc9;
    if ((*(char *)(param_3 + 0xed8) == '\0') &&
       ((*(longlong *)(param_3 + 0xf48) == 0 || (cVar1 = FUN_140437abc(), cVar1 == '\0')))) {
      if ((longlong)*(int *)(param_1 + 0x238) != 0) {
        uVar3 = *(ulonglong *)(param_1 + 0x230);
        lVar2 = (longlong)*(int *)(param_1 + 0x238) * 0x98;
        do {
          cVar1 = FUN_14088ccfe(uVar3 + 0x10,param_3);
          if (cVar1 != '\0') {
            if (uVar3 != 0) goto LAB_144235fc7;
            break;
          }
          uVar3 = uVar3 + 0x98;
          lVar2 = lVar2 + -0x98;
        } while (lVar2 != 0);
      }
      lVar2 = FUN_1402a1246(param_3);
      if (((lVar2 != 0) && (*(char *)(lVar2 + 0x742) == '\0')) &&
         ((*(char *)(lVar2 + 0x743) == '\0' && (*(char *)(lVar2 + 0x741) == '\0')))) {
        uVar3 = CONCAT71((int7)(uVar3 >> 8),*(longlong *)(param_3 + 0x3d0) != 0);
        goto LAB_144235fc9;
      }
    }
  }
LAB_144235fc7:
  uVar3 = 0;
LAB_144235fc9:
  return uVar3 & 0xffffffff;
}



// FUNCTION 1442360a4 FUN_1442360a4 body=3251 status=ok
// SIG undefined FUN_1442360a4(void)

ulonglong FUN_1442360a4(longlong param_1,longlong param_2,double *param_3,undefined4 *param_4,
                       undefined8 *param_5,undefined4 *param_6,longlong *param_7)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  float fVar18;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_160;
  double *local_158;
  uint uStack_150;
  uint uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  float local_130;
  float local_12c;
  uint local_128;
  int iStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  char local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((param_2 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    uVar5 = *(uint *)(param_1 + 8);
    uVar15 = 0;
    if (((int)uVar5 < 0) || (DAT_14c9647dc <= (int)uVar5)) goto LAB_144236bb3;
    plVar17 = (longlong *)
              ((ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
    if (((plVar17 != (longlong *)0x0) && ((int)plVar17[2] == *(int *)(param_1 + 0xc))) &&
       (plVar6 = *(longlong **)(param_2 + 0xf48), (*(uint *)(plVar17 + 1) & 0x10200000) == 0)) {
      uVar15 = 0;
      if ((plVar6 == (longlong *)0x0) || (lVar13 = *plVar17, uVar15 = 0, lVar13 == 0))
      goto LAB_144236bb3;
      local_12c = 0.0;
      local_130 = 0.0;
      (**(code **)(*plVar6 + 0x528))(plVar6,&local_12c,&local_130);
      fVar11 = local_12c;
      fVar10 = local_130;
      dVar2 = *param_3;
      dVar3 = param_3[1];
      dVar4 = param_3[2];
      local_148 = *param_4;
      uStack_144 = param_4[1];
      uStack_140 = param_4[2];
      uStack_13c = param_4[3];
      local_138 = *(double *)(param_4 + 4);
      uVar16 = 0;
      if (param_7 != (longlong *)0x0) {
        (**(code **)(*param_7 + 0x528))(param_7,&local_12c,&local_130);
        lVar12 = (**(code **)(*param_7 + 0x5d8))(param_7);
        lVar13 = FUN_1400f6e0c(lVar13);
        uVar16 = 0;
        if (((lVar13 != 0) && (lVar12 != 0)) && (uVar16 = 0, *(longlong *)(lVar13 + 200) != 0)) {
          FUN_145ae9e44(*(longlong *)(lVar13 + 200),&local_128,lVar12);
          if (iStack_124 == 0) {
LAB_144236d51:
            uVar16 = 0;
          }
          else {
            uVar16 = 0;
            if ((-1 < (int)local_128) && ((int)local_128 < DAT_14c9647dc)) {
              puVar14 = (undefined8 *)
                        ((ulonglong)((local_128 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_128 >> 0x10) * 8));
              if ((puVar14 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar14 + 2) != iStack_124 ||
                  ((*(uint *)(puVar14 + 1) & 0x10200000) != 0)))) goto LAB_144236d51;
              uVar16 = *puVar14;
            }
          }
        }
      }
      local_158 = (double *)0x0;
      fVar18 = (local_12c + fVar11) * 1.2;
      uStack_150 = 1;
      uStack_14c = 0;
      FUN_1461d0d4a(&local_158,0);
      uVar5 = uStack_150;
      *local_158 = dVar2;
      local_158[1] = dVar3;
      local_158[2] = dVar4;
      *(undefined4 *)(local_158 + 3) = local_148;
      *(undefined4 *)((longlong)local_158 + 0x1c) = uStack_144;
      *(undefined4 *)(local_158 + 4) = uStack_140;
      *(undefined4 *)((longlong)local_158 + 0x24) = uStack_13c;
      local_158[5] = local_138;
      *(undefined4 *)(local_158 + 6) = 3;
      *(float *)((longlong)local_158 + 0x34) = fVar11;
      *(float *)(local_158 + 7) = fVar10;
      dVar7 = (double)fVar18;
      dVar2 = param_3[2];
      dVar3 = param_3[1];
      dVar4 = *param_3;
      lVar13 = (longlong)(int)uStack_150;
      uStack_150 = uStack_150 + 1;
      if (uStack_14c < uStack_150) {
        FUN_1461d0d4a(&local_158,uVar5);
      }
      uVar5 = uStack_150;
      local_158[lVar13 * 8] = dVar4 + dVar7;
      local_158[lVar13 * 8 + 1] = dVar3 + 0.0;
      local_158[lVar13 * 8 + 2] = dVar2 + 0.0;
      pdVar1 = local_158 + lVar13 * 8 + 3;
      *(undefined4 *)pdVar1 = local_148;
      *(undefined4 *)((longlong)pdVar1 + 4) = uStack_144;
      *(undefined4 *)(pdVar1 + 1) = uStack_140;
      *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_13c;
      local_158[lVar13 * 8 + 5] = local_138;
      *(undefined4 *)(local_158 + lVar13 * 8 + 6) = 3;
      *(float *)((longlong)local_158 + lVar13 * 0x40 + 0x34) = fVar11;
      *(float *)(local_158 + lVar13 * 8 + 7) = fVar10;
      dVar2 = param_3[2];
      dVar3 = param_3[1];
      dVar8 = (double)-fVar18;
      dVar4 = *param_3;
      lVar13 = (longlong)(int)uStack_150;
      uStack_150 = uStack_150 + 1;
      if (uStack_14c < uStack_150) {
        FUN_1461d0d4a(&local_158,uVar5);
      }
      uVar5 = uStack_150;
      local_158[lVar13 * 8] = dVar4 + dVar8;
      local_158[lVar13 * 8 + 1] = dVar3 + 0.0;
      local_158[lVar13 * 8 + 2] = dVar2 + 0.0;
      pdVar1 = local_158 + lVar13 * 8 + 3;
      *(undefined4 *)pdVar1 = local_148;
      *(undefined4 *)((longlong)pdVar1 + 4) = uStack_144;
      *(undefined4 *)(pdVar1 + 1) = uStack_140;
      *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_13c;
      local_158[lVar13 * 8 + 5] = local_138;
      *(undefined4 *)(local_158 + lVar13 * 8 + 6) = 3;
      *(float *)((longlong)local_158 + lVar13 * 0x40 + 0x34) = fVar11;
      *(float *)(local_158 + lVar13 * 8 + 7) = fVar10;
      dVar2 = param_3[2];
      dVar3 = param_3[1];
      dVar4 = *param_3;
      lVar13 = (longlong)(int)uStack_150;
      uStack_150 = uStack_150 + 1;
      if (uStack_14c < uStack_150) {
        FUN_1461d0d4a(&local_158,uVar5);
      }
      uVar5 = uStack_150;
      local_158[lVar13 * 8] = dVar4 + 0.0;
      local_158[lVar13 * 8 + 1] = dVar3 + dVar7;
      local_158[lVar13 * 8 + 2] = dVar2 + 0.0;
      pdVar1 = local_158 + lVar13 * 8 + 3;
      *(undefined4 *)pdVar1 = local_148;
      *(undefined4 *)((longlong)pdVar1 + 4) = uStack_144;
      *(undefined4 *)(pdVar1 + 1) = uStack_140;
      *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_13c;
      local_158[lVar13 * 8 + 5] = local_138;
      *(undefined4 *)(local_158 + lVar13 * 8 + 6) = 3;
      *(float *)((longlong)local_158 + lVar13 * 0x40 + 0x34) = fVar11;
      *(float *)(local_158 + lVar13 * 8 + 7) = fVar10;
      dVar2 = param_3[2];
      dVar3 = param_3[1];
      dVar4 = *param_3;
      lVar13 = (longlong)(int)uStack_150;
      uStack_150 = uStack_150 + 1;
      if (uStack_14c < uStack_150) {
        FUN_1461d0d4a(&local_158,uVar5);
      }
      uVar5 = uStack_150;
      local_158[lVar13 * 8] = dVar4 + 0.0;
      local_158[lVar13 * 8 + 1] = dVar3 + dVar8;
      local_158[lVar13 * 8 + 2] = dVar2 + 0.0;
      pdVar1 = local_158 + lVar13 * 8 + 3;
      *(undefined4 *)pdVar1 = local_148;
      *(undefined4 *)((longlong)pdVar1 + 4) = uStack_144;
      *(undefined4 *)(pdVar1 + 1) = uStack_140;
      *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_13c;
      local_158[lVar13 * 8 + 5] = local_138;
      *(undefined4 *)(local_158 + lVar13 * 8 + 6) = 3;
      *(float *)((longlong)local_158 + lVar13 * 0x40 + 0x34) = fVar11;
      *(float *)(local_158 + lVar13 * 8 + 7) = fVar10;
      dVar2 = param_3[2];
      dVar3 = param_3[1];
      dVar4 = *param_3;
      lVar13 = (longlong)(int)uStack_150;
      uStack_150 = uStack_150 + 1;
      if (uStack_14c < uStack_150) {
        FUN_1461d0d4a(&local_158,uVar5);
      }
      uVar5 = uStack_150;
      local_158[lVar13 * 8] = dVar4 + dVar7;
      local_158[lVar13 * 8 + 1] = dVar3 + dVar7;
      local_158[lVar13 * 8 + 2] = dVar2 + 0.0;
      pdVar1 = local_158 + lVar13 * 8 + 3;
      *(undefined4 *)pdVar1 = local_148;
      *(undefined4 *)((longlong)pdVar1 + 4) = uStack_144;
      *(undefined4 *)(pdVar1 + 1) = uStack_140;
      *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_13c;
      local_158[lVar13 * 8 + 5] = local_138;
      *(undefined4 *)(local_158 + lVar13 * 8 + 6) = 3;
      *(float *)((longlong)local_158 + lVar13 * 0x40 + 0x34) = fVar11;
      *(float *)(local_158 + lVar13 * 8 + 7) = fVar10;
      dVar2 = param_3[2];
      dVar3 = param_3[1];
      dVar4 = *param_3;
      lVar13 = (longlong)(int)uStack_150;
      uStack_150 = uStack_150 + 1;
      if (uStack_14c < uStack_150) {
        FUN_1461d0d4a(&local_158,uVar5);
      }
      uVar5 = uStack_150;
      local_158[lVar13 * 8] = dVar4 + dVar8;
      local_158[lVar13 * 8 + 1] = dVar3 + dVar7;
      local_158[lVar13 * 8 + 2] = dVar2 + 0.0;
      pdVar1 = local_158 + lVar13 * 8 + 3;
      *(undefined4 *)pdVar1 = local_148;
      *(undefined4 *)((longlong)pdVar1 + 4) = uStack_144;
      *(undefined4 *)(pdVar1 + 1) = uStack_140;
      *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_13c;
      local_158[lVar13 * 8 + 5] = local_138;
      *(undefined4 *)(local_158 + lVar13 * 8 + 6) = 3;
      *(float *)((longlong)local_158 + lVar13 * 0x40 + 0x34) = fVar11;
      *(float *)(local_158 + lVar13 * 8 + 7) = fVar10;
      dVar2 = param_3[2];
      dVar3 = param_3[1];
      dVar4 = *param_3;
      lVar13 = (longlong)(int)uStack_150;
      uStack_150 = uStack_150 + 1;
      if (uStack_14c < uStack_150) {
        FUN_1461d0d4a(&local_158,uVar5);
      }
      uVar5 = uStack_150;
      local_158[lVar13 * 8] = dVar4 + dVar7;
      local_158[lVar13 * 8 + 1] = dVar3 + dVar8;
      local_158[lVar13 * 8 + 2] = dVar2 + 0.0;
      pdVar1 = local_158 + lVar13 * 8 + 3;
      *(undefined4 *)pdVar1 = local_148;
      *(undefined4 *)((longlong)pdVar1 + 4) = uStack_144;
      *(undefined4 *)(pdVar1 + 1) = uStack_140;
      *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_13c;
      local_158[lVar13 * 8 + 5] = local_138;
      *(undefined4 *)(local_158 + lVar13 * 8 + 6) = 3;
      *(float *)((longlong)local_158 + lVar13 * 0x40 + 0x34) = fVar11;
      *(float *)(local_158 + lVar13 * 8 + 7) = fVar10;
      dVar2 = param_3[2];
      dVar3 = param_3[1];
      dVar4 = *param_3;
      lVar13 = (longlong)(int)uStack_150;
      uStack_150 = uStack_150 + 1;
      if (uStack_14c < uStack_150) {
        FUN_1461d0d4a(&local_158,uVar5);
      }
      uVar5 = uStack_150;
      local_158[lVar13 * 8] = dVar4 + dVar8;
      local_158[lVar13 * 8 + 1] = dVar3 + dVar8;
      local_158[lVar13 * 8 + 2] = dVar2 + 0.0;
      pdVar1 = local_158 + lVar13 * 8 + 3;
      *(undefined4 *)pdVar1 = local_148;
      *(undefined4 *)((longlong)pdVar1 + 4) = uStack_144;
      *(undefined4 *)(pdVar1 + 1) = uStack_140;
      *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_13c;
      local_158[lVar13 * 8 + 5] = local_138;
      *(undefined4 *)(local_158 + lVar13 * 8 + 6) = 3;
      *(float *)((longlong)local_158 + lVar13 * 0x40 + 0x34) = fVar11;
      *(float *)(local_158 + lVar13 * 8 + 7) = fVar10;
      dVar9 = (double)(fVar10 * 0.5);
      dVar2 = param_3[2];
      dVar3 = param_3[1];
      dVar4 = *param_3;
      lVar13 = (longlong)(int)uStack_150;
      uStack_150 = uStack_150 + 1;
      if (uStack_14c < uStack_150) {
        FUN_1461d0d4a(&local_158,uVar5);
      }
      uVar5 = uStack_150;
      local_158[lVar13 * 8] = dVar4 + dVar7;
      local_158[lVar13 * 8 + 1] = dVar3 + 0.0;
      local_158[lVar13 * 8 + 2] = dVar2 + dVar9;
      pdVar1 = local_158 + lVar13 * 8 + 3;
      *(undefined4 *)pdVar1 = local_148;
      *(undefined4 *)((longlong)pdVar1 + 4) = uStack_144;
      *(undefined4 *)(pdVar1 + 1) = uStack_140;
      *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_13c;
      local_158[lVar13 * 8 + 5] = local_138;
      *(undefined4 *)(local_158 + lVar13 * 8 + 6) = 3;
      *(float *)((longlong)local_158 + lVar13 * 0x40 + 0x34) = fVar11;
      *(float *)(local_158 + lVar13 * 8 + 7) = fVar10;
      dVar2 = param_3[2];
      dVar3 = param_3[1];
      dVar4 = *param_3;
      lVar13 = (longlong)(int)uStack_150;
      uStack_150 = uStack_150 + 1;
      if (uStack_14c < uStack_150) {
        FUN_1461d0d4a(&local_158,uVar5);
      }
      uVar5 = uStack_150;
      local_158[lVar13 * 8] = dVar4 + dVar8;
      local_158[lVar13 * 8 + 1] = dVar3 + 0.0;
      local_158[lVar13 * 8 + 2] = dVar2 + dVar9;
      pdVar1 = local_158 + lVar13 * 8 + 3;
      *(undefined4 *)pdVar1 = local_148;
      *(undefined4 *)((longlong)pdVar1 + 4) = uStack_144;
      *(undefined4 *)(pdVar1 + 1) = uStack_140;
      *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_13c;
      local_158[lVar13 * 8 + 5] = local_138;
      *(undefined4 *)(local_158 + lVar13 * 8 + 6) = 3;
      *(float *)((longlong)local_158 + lVar13 * 0x40 + 0x34) = fVar11;
      *(float *)(local_158 + lVar13 * 8 + 7) = fVar10;
      dVar2 = param_3[2];
      dVar3 = param_3[1];
      dVar4 = *param_3;
      lVar13 = (longlong)(int)uStack_150;
      uStack_150 = uStack_150 + 1;
      if (uStack_14c < uStack_150) {
        FUN_1461d0d4a(&local_158,uVar5);
      }
      uVar5 = uStack_150;
      local_158[lVar13 * 8] = dVar4 + 0.0;
      local_158[lVar13 * 8 + 1] = dVar3 + dVar7;
      local_158[lVar13 * 8 + 2] = dVar2 + dVar9;
      pdVar1 = local_158 + lVar13 * 8 + 3;
      *(undefined4 *)pdVar1 = local_148;
      *(undefined4 *)((longlong)pdVar1 + 4) = uStack_144;
      *(undefined4 *)(pdVar1 + 1) = uStack_140;
      *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_13c;
      local_158[lVar13 * 8 + 5] = local_138;
      *(undefined4 *)(local_158 + lVar13 * 8 + 6) = 3;
      *(float *)((longlong)local_158 + lVar13 * 0x40 + 0x34) = fVar11;
      *(float *)(local_158 + lVar13 * 8 + 7) = fVar10;
      dVar2 = param_3[2];
      dVar3 = param_3[1];
      dVar4 = *param_3;
      lVar13 = (longlong)(int)uStack_150;
      uStack_150 = uStack_150 + 1;
      if (uStack_14c < uStack_150) {
        FUN_1461d0d4a(&local_158,uVar5);
      }
      uVar5 = uStack_150;
      local_158[lVar13 * 8] = dVar4 + 0.0;
      local_158[lVar13 * 8 + 1] = dVar3 + dVar8;
      local_158[lVar13 * 8 + 2] = dVar2 + dVar9;
      pdVar1 = local_158 + lVar13 * 8 + 3;
      *(undefined4 *)pdVar1 = local_148;
      *(undefined4 *)((longlong)pdVar1 + 4) = uStack_144;
      *(undefined4 *)(pdVar1 + 1) = uStack_140;
      *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_13c;
      local_158[lVar13 * 8 + 5] = local_138;
      *(undefined4 *)(local_158 + lVar13 * 8 + 6) = 3;
      *(float *)((longlong)local_158 + lVar13 * 0x40 + 0x34) = fVar11;
      *(float *)(local_158 + lVar13 * 8 + 7) = fVar10;
      dVar2 = param_3[2];
      dVar3 = param_3[1];
      dVar4 = *param_3;
      lVar13 = (longlong)(int)uStack_150;
      uStack_150 = uStack_150 + 1;
      if (uStack_14c < uStack_150) {
        FUN_1461d0d4a(&local_158,uVar5);
      }
      uVar5 = uStack_150;
      local_158[lVar13 * 8] = dVar4 + dVar7;
      local_158[lVar13 * 8 + 1] = dVar3 + dVar7;
      local_158[lVar13 * 8 + 2] = dVar2 + dVar9;
      pdVar1 = local_158 + lVar13 * 8 + 3;
      *(undefined4 *)pdVar1 = local_148;
      *(undefined4 *)((longlong)pdVar1 + 4) = uStack_144;
      *(undefined4 *)(pdVar1 + 1) = uStack_140;
      *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_13c;
      local_158[lVar13 * 8 + 5] = local_138;
      *(undefined4 *)(local_158 + lVar13 * 8 + 6) = 3;
      *(float *)((longlong)local_158 + lVar13 * 0x40 + 0x34) = fVar11;
      *(float *)(local_158 + lVar13 * 8 + 7) = fVar10;
      dVar2 = param_3[2];
      dVar3 = param_3[1];
      dVar4 = *param_3;
      lVar13 = (longlong)(int)uStack_150;
      uStack_150 = uStack_150 + 1;
      if (uStack_14c < uStack_150) {
        FUN_1461d0d4a(&local_158,uVar5);
      }
      uVar5 = uStack_150;
      local_158[lVar13 * 8] = dVar4 + dVar8;
      local_158[lVar13 * 8 + 1] = dVar3 + dVar7;
      local_158[lVar13 * 8 + 2] = dVar2 + dVar9;
      pdVar1 = local_158 + lVar13 * 8 + 3;
      *(undefined4 *)pdVar1 = local_148;
      *(undefined4 *)((longlong)pdVar1 + 4) = uStack_144;
      *(undefined4 *)(pdVar1 + 1) = uStack_140;
      *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_13c;
      local_158[lVar13 * 8 + 5] = local_138;
      *(undefined4 *)(local_158 + lVar13 * 8 + 6) = 3;
      *(float *)((longlong)local_158 + lVar13 * 0x40 + 0x34) = fVar11;
      *(float *)(local_158 + lVar13 * 8 + 7) = fVar10;
      dVar2 = param_3[2];
      dVar3 = param_3[1];
      dVar4 = *param_3;
      lVar13 = (longlong)(int)uStack_150;
      uStack_150 = uStack_150 + 1;
      if (uStack_14c < uStack_150) {
        FUN_1461d0d4a(&local_158,uVar5);
      }
      uVar5 = uStack_150;
      local_158[lVar13 * 8] = dVar7 + dVar4;
      local_158[lVar13 * 8 + 1] = dVar3 + dVar8;
      local_158[lVar13 * 8 + 2] = dVar2 + dVar9;
      pdVar1 = local_158 + lVar13 * 8 + 3;
      *(undefined4 *)pdVar1 = local_148;
      *(undefined4 *)((longlong)pdVar1 + 4) = uStack_144;
      *(undefined4 *)(pdVar1 + 1) = uStack_140;
      *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_13c;
      local_158[lVar13 * 8 + 5] = local_138;
      *(undefined4 *)(local_158 + lVar13 * 8 + 6) = 3;
      *(float *)((longlong)local_158 + lVar13 * 0x40 + 0x34) = fVar11;
      *(float *)(local_158 + lVar13 * 8 + 7) = fVar10;
      dVar2 = param_3[2];
      dVar3 = param_3[1];
      dVar4 = *param_3;
      lVar13 = (longlong)(int)uStack_150;
      uStack_150 = uStack_150 + 1;
      if (uStack_14c < uStack_150) {
        FUN_1461d0d4a(&local_158,uVar5);
      }
      local_158[lVar13 * 8] = dVar8 + dVar4;
      local_158[lVar13 * 8 + 1] = dVar3 + dVar8;
      local_158[lVar13 * 8 + 2] = dVar9 + dVar2;
      pdVar1 = local_158 + lVar13 * 8 + 3;
      *(undefined4 *)pdVar1 = local_148;
      *(undefined4 *)((longlong)pdVar1 + 4) = uStack_144;
      *(undefined4 *)(pdVar1 + 1) = uStack_140;
      *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_13c;
      local_158[lVar13 * 8 + 5] = local_138;
      *(undefined4 *)(local_158 + lVar13 * 8 + 6) = 3;
      *(float *)((longlong)local_158 + lVar13 * 0x40 + 0x34) = fVar11;
      *(float *)(local_158 + lVar13 * 8 + 7) = fVar10;
      local_160 = 0;
      local_168 = uVar16;
      FUN_144237182(param_1,&local_128,&local_158,param_7);
      uVar15 = CONCAT71((int7)((ulonglong)param_7 >> 8),local_e8);
      if (local_e8 == '\x01') {
        param_5[2] = local_118;
        *param_5 = CONCAT44(iStack_124,local_128);
        param_5[1] = uStack_120;
        *(undefined8 *)(param_6 + 4) = local_100;
        *param_6 = local_110;
        param_6[1] = uStack_10c;
        param_6[2] = uStack_108;
        param_6[3] = uStack_104;
      }
      if (local_158 != (double *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_144236bb3;
    }
  }
  uVar15 = 0;
LAB_144236bb3:
  if ((local_e0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return uVar15 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144236d58 FUN_144236d58 body=254 status=ok
// SIG undefined FUN_144236d58(void)

undefined8 FUN_144236d58(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  short local_2c [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_1 + 0x238) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x230);
      lVar5 = (longlong)*(int *)(param_1 + 0x238) * 0x98;
      do {
        cVar1 = FUN_14088ccfe(lVar4 + 0x10,param_2);
        if (cVar1 != '\0') {
          if (lVar4 != 0) goto LAB_144236e34;
          break;
        }
        lVar4 = lVar4 + 0x98;
        lVar5 = lVar5 + -0x98;
      } while (lVar5 != 0);
    }
    if ((param_3 != '\0') ||
       (((((lVar4 = FUN_1447210f0(param_2), lVar4 != 0 && (lVar4 = FUN_1400f6f32(lVar4), lVar4 != 0)
           ) && (lVar4 = *(longlong *)(lVar4 + 0x68), lVar4 != 0)) &&
         ((FUN_140d27df6(lVar4,local_2c,param_2), -1 < local_2c[0] &&
          (iVar2 = FUN_1402d8968(lVar4,local_2c), iVar2 == 0xb)))) &&
        ((lVar4 = *(longlong *)(param_2 + 0xf48), lVar4 != 0 &&
         ((*(char *)(lVar4 + 0x1990) == '\0' && (*(char *)(lVar4 + 0x5d30) == '\0')))))))) {
      uVar3 = 1;
      goto LAB_144236e36;
    }
  }
LAB_144236e34:
  uVar3 = 0;
LAB_144236e36:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 144236e58 FUN_144236e58 body=809 status=ok
// SIG undefined FUN_144236e58(void)

undefined8 FUN_144236e58(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined4 *local_130;
  undefined8 local_128;
  char local_120;
  undefined1 local_118;
  longlong local_110;
  int local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = *(uint *)(param_1 + 8);
    uVar6 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_144236ee7;
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0xc) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (lVar2 = *plVar5, lVar2 != 0)))) {
      cVar3 = FUN_14144f426(param_1);
      if (param_2 != (longlong *)0x0 && cVar3 == '\0') {
        local_a8 = param_3[4];
        lStack_a0 = param_3[5];
        local_98 = param_3[6];
        local_78 = *param_3;
        lStack_70 = param_3[1];
        local_68 = param_3[2];
        uStack_60 = (undefined4)param_3[3];
        uStack_5c = *(undefined4 *)((longlong)param_3 + 0x1c);
        FUN_1448052ee(&local_78,&local_c0);
        local_130 = &local_f8;
        local_138 = &local_d8;
        local_128 = 0;
        cVar3 = FUN_1442360a4(param_1,param_2,&local_a8,&local_c0);
        if (cVar3 == '\0') {
          local_c8 = local_98;
          local_d8 = local_a8;
          lStack_d0 = lStack_a0;
          local_f8 = local_c0;
          uStack_f4 = uStack_bc;
          uStack_f0 = uStack_b8;
          uStack_ec = uStack_b4;
          local_e8 = local_b0;
        }
        FUN_145aa4abc(param_1,param_2);
        uVar6 = FUN_140cb9f34();
        cVar3 = FUN_145cb8abc(param_2,&local_d8,uVar6,lVar2);
        lVar7 = FUN_145a13800(param_1,param_2);
        *(float *)(lVar7 + 0x80) = (float)*(double *)(lVar2 + 0x6d0);
        *(longlong *)(lVar7 + 0x58) = local_c8;
        *(longlong *)(lVar7 + 0x48) = local_d8;
        *(longlong *)(lVar7 + 0x50) = lStack_d0;
        *(undefined4 *)(lVar7 + 0x60) = local_f8;
        *(undefined4 *)(lVar7 + 100) = uStack_f4;
        *(undefined4 *)(lVar7 + 0x68) = uStack_f0;
        *(undefined4 *)(lVar7 + 0x6c) = uStack_ec;
        *(undefined8 *)(lVar7 + 0x70) = local_e8;
        if (cVar3 == '\0') {
          bVar4 = (**(code **)(*param_2 + 0x6c8))(param_2);
          bVar4 = bVar4 ^ 1;
        }
        else {
          bVar4 = 0;
        }
        *(byte *)(lVar7 + 0x8b) = bVar4;
        *(undefined2 *)(lVar7 + 0x8c) = 0;
        *(undefined1 *)(lVar7 + 0x8e) = 0;
        *(char *)(lVar7 + 0x90) = cVar3;
        *(char *)(lVar7 + 0x91) = param_4;
        if (param_4 == '\0') {
          FUN_145adddc4(param_1,param_2,lVar7,1);
        }
        if (cVar3 == '\0') {
          FUN_145a12700(param_1,lVar7);
          local_110 = 0;
          local_108 = 0x6000;
          local_100 = 0;
          local_80 = DAT_14cbd40a8;
          local_88 = DAT_14cbd40a0;
          FUN_1448075d0(&local_78);
          FUN_145aa4638(param_1,&local_78,&local_110);
          if (CONCAT44(uStack_5c,uStack_60) != 0) {
            FUN_1400020a8();
          }
          if ((local_110 != 0) && (local_108 - 1U < 0xfffffffe)) {
            FUN_14148e104(param_1,param_2,&local_110);
          }
        }
        local_78 = 0;
        lStack_70 = CONCAT44(lStack_70._4_4_,0x6000);
        local_68 = 0;
        local_118 = 0;
        local_128 = CONCAT71(local_128._1_7_,cVar3);
        local_138 = (longlong *)((ulonglong)local_138 & 0xffffffffffffff00);
        local_130 = (undefined4 *)CONCAT71(local_130._1_7_,1);
        local_120 = param_4;
        FUN_14148df3c(param_2,*(undefined1 *)(lVar7 + 0x88),&local_78,lVar7 + 0x48);
        uVar6 = 1;
        goto LAB_144236ee7;
      }
    }
  }
  uVar6 = 0;
LAB_144236ee7:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144237182 FUN_144237182 body=1578 status=ok
// SIG undefined FUN_144237182(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_144237182(longlong param_1,double *param_2,longlong *param_3,longlong param_4,
                      longlong param_5,longlong *param_6)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double _X;
  longlong lVar10;
  undefined1 auVar11 [16];
  char cVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_248 [32];
  double *local_228;
  undefined1 *local_220;
  undefined4 *local_218;
  undefined4 *local_210;
  longlong local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  longlong local_128;
  undefined8 local_120;
  longlong local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  auVar11 = _DAT_1499387d0;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_200 = param_4;
  if (((((*(int *)(param_1 + 0xc) != 0) && (uVar4 = *(uint *)(param_1 + 8), -1 < (int)uVar4)) &&
       ((int)uVar4 < DAT_14c9647dc)) &&
      ((plVar14 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar14 != (longlong *)0x0 && ((int)plVar14[2] == *(int *)(param_1 + 0xc))))) &&
     (((*(uint *)(plVar14 + 1) & 0x10200000) == 0 &&
      ((lVar5 = *plVar14, lVar5 != 0 && (lVar10 = param_3[1], (longlong)(int)lVar10 != 0)))))) {
    lVar6 = *param_3;
    dVar8 = (double)DAT_1499387d0;
    dVar9 = DAT_1499387d0._8_8_;
    lVar15 = 0;
    do {
      pdVar1 = (double *)(lVar15 + lVar6);
      if (param_5 == 0) {
LAB_14423731e:
        local_1e8 = pdVar1[2];
        local_1f8 = *pdVar1;
        dStack_1f0 = pdVar1[1];
        if (param_6 == (longlong *)0x0) {
          pdVar1 = (double *)(lVar6 + 0x30 + lVar15);
          local_198 = *pdVar1;
          dStack_190 = pdVar1[1];
        }
        else {
          if ((*(int *)(lVar6 + 0x30 + lVar15) == 3) &&
             (fVar16 = (float)(double)param_6[0x52] * *(float *)(param_6 + 200) -
                       *(float *)(lVar6 + 0x38 + lVar15), 0.0 < fVar16)) {
            local_1e8 = (double)fVar16 + local_1e8;
          }
          (**(code **)(*param_6 + 0x820))(param_6,&local_198,0);
        }
        auVar3 = *(undefined1 (*) [16])(lVar6 + 0x18 + lVar15);
        dVar2 = *(double *)(lVar6 + 0x28 + lVar15);
        auVar23 = divpd(auVar3,auVar11);
        auVar24._8_8_ = 0;
        auVar24._0_8_ = dVar2;
        auVar24 = divpd(auVar24,auVar11);
        auVar23 = roundpd(auVar23,auVar23,3);
        auVar24 = roundpd(auVar24,auVar24,3);
        dVar20 = (auVar3._0_8_ - auVar23._0_8_ * dVar8) * 0.008726646259971648;
        dVar21 = (auVar3._8_8_ - auVar23._8_8_ * dVar9) * 0.008726646259971648;
        dVar2 = (dVar2 - auVar24._0_8_ * dVar8) * 0.008726646259971648;
        _X = (0.0 - auVar24._8_8_ * dVar9) * 0.008726646259971648;
        dVar17 = sin(dVar20);
        dVar18 = sin(dVar21);
        dVar19 = sin(dVar2);
        sin(_X);
        dVar20 = cos(dVar20);
        dVar21 = cos(dVar21);
        dVar22 = cos(dVar2);
        cos(_X);
        dVar2 = dVar18 * dVar17 * dVar19 + dVar21 * dVar20 * dVar22;
        local_178 = dVar17 * dVar18 * dVar22 - dVar20 * dVar21 * dVar19;
        dStack_170 = -(dVar17 * dVar21 * dVar22) - dVar20 * dVar18 * dVar19;
        local_168._8_4_ = SUB84(dVar2,0);
        local_168._0_8_ = -(dVar21 * dVar17 * dVar19) + dVar18 * dVar20 * dVar22;
        local_168._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        local_210 = &DAT_14cad0f08;
        local_218 = (undefined4 *)&DAT_14cad0f10;
        local_220 = &DAT_14cad0f68;
        local_228 = (double *)CONCAT44(local_228._4_4_,2);
        cVar12 = FUN_140ad65d6(lVar5,&local_198,&local_1f8,&local_178);
        lVar7 = local_200;
        if (cVar12 == '\0') {
          if (local_200 != 0) {
            local_158._1_7_ = (uint7)((ulonglong)local_158 >> 8) & 0xffffff;
            dStack_150 = (double)CONCAT62(dStack_150._2_6_,0x101);
            local_128 = 0;
            local_120 = 0x800000000;
            local_108 = 0;
            local_100 = 0x400000000;
            local_178 = 0.0;
            dStack_170 = 0.0;
            local_158 = (double)((ulonglong)local_158._1_7_ << 8);
            local_168[8] = 1;
            local_168._0_8_ = 0x100000000000100;
            local_168._12_4_ = 0;
            FUN_1479ab138(&local_178,local_200);
            lVar7 = *(longlong *)(lVar7 + 0x1c8);
            if (lVar7 == 0) {
              puVar13 = &DAT_14c8464e0;
              local_1a8 = DAT_14c8464f0;
            }
            else {
              puVar13 = (undefined8 *)(lVar7 + 0x260);
              local_1a8 = *(undefined8 *)(lVar7 + 0x270);
            }
            local_1b8 = *puVar13;
            uStack_1b0 = puVar13[1];
            local_198 = local_1f8;
            dStack_190 = dStack_1f0;
            local_188 = local_1e8;
            local_218 = &DAT_14cad0f08;
            local_220 = &DAT_14cad0f10;
            local_228 = &local_178;
            cVar12 = FUN_140386a8e(lVar5,&local_1b8,&local_198,2);
            if (local_108 != 0) {
              FUN_1400020a8();
            }
            if (local_128 != 0) {
              FUN_1400020a8();
            }
            if (cVar12 != '\0') goto LAB_144237698;
          }
          local_168._8_8_ = *(double *)(lVar6 + lVar15 + 0x18);
          pdVar1 = (double *)(lVar6 + 0x20 + lVar15);
          local_158 = *pdVar1;
          dStack_150 = pdVar1[1];
          pdVar1 = (double *)(lVar6 + 0x30 + lVar15);
          local_148 = *pdVar1;
          dStack_140 = pdVar1[1];
          local_168._0_8_ = local_1e8;
          local_178 = local_1f8;
          dStack_170 = dStack_1f0;
          param_2[6] = local_148;
          param_2[7] = dStack_140;
          param_2[4] = local_158;
          param_2[5] = dStack_150;
          *param_2 = local_1f8;
          param_2[1] = dStack_1f0;
          param_2[2] = local_1e8;
          param_2[3] = (double)local_168._8_8_;
          *(undefined1 *)(param_2 + 8) = 1;
          goto LAB_144237724;
        }
      }
      else {
        local_1c8 = pdVar1[2];
        local_1d8 = *pdVar1;
        dStack_1d0 = pdVar1[1];
        plVar14 = *(longlong **)(param_5 + 0x3a8);
        if (plVar14 != (longlong *)0x0) {
          cVar12 = (**(code **)(*plVar14 + 0x7c0))(plVar14,&local_1d8,&local_198,&local_178);
          if ((cVar12 != '\0') && (0.0 <= local_198._0_4_)) {
            if (local_198._0_4_ <= 0.0) goto LAB_14423731e;
          }
        }
      }
LAB_144237698:
      lVar15 = lVar15 + 0x40;
    } while ((longlong)(int)lVar10 * 0x40 != lVar15);
  }
  *(undefined1 *)(param_2 + 8) = 0;
LAB_144237724:
  if ((local_f0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442377ae FUN_1442377ae body=1030 status=ok
// SIG undefined FUN_1442377ae(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1442377ae(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  bool bVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined8 unaff_RBP;
  longlong lVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  int local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_80 [3];
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0);
  if (((((*(int *)(param_1 + 0xc) == 0) ||
        (uVar7 = *(uint *)(param_1 + 8), local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0),
        (int)uVar7 < 0)) ||
       (local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0), DAT_14c9647dc <= (int)uVar7)) ||
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
       local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0), plVar9 == (longlong *)0x0 ||
       (local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0), (int)plVar9[2] != *(int *)(param_1 + 0xc)
       )))) || ((local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0),
                (*(uint *)(plVar9 + 1) & 0x10200000) != 0 ||
                (lVar1 = *plVar9, local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0), lVar1 == 0))))
  goto LAB_14423781d;
  *(undefined8 *)(param_1 + 0x288) = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_98 = 0;
  uStack_90 = 0;
  lVar12 = *(longlong *)(lVar1 + 0x178);
  if (lVar12 == 0) {
LAB_1442378a5:
    uVar13 = 0;
  }
  else {
    lVar8 = FUN_14030d660();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        != lVar8 + 0x30)) goto LAB_1442378a5;
    uVar13 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(undefined1 *)(lVar12 + 0x5f5))
    ;
  }
  local_b0 = lVar1 + 0x230;
  local_a8 = 0;
  uVar17 = FUN_1461e533c(&local_b0);
  bVar4 = true;
  if (local_a0 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    do {
      uVar5 = uStack_90;
      lVar8 = local_a0;
      if (*(char *)(local_a0 + 0x2270) == '\x01') {
        lVar14 = (longlong)(int)uStack_90;
        uVar7 = (int)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar7);
        if (uStack_90._4_4_ < uVar7) {
          FUN_148cdaf50(&local_98,uVar5 & 0xffffffff);
        }
        *(longlong *)(local_98 + lVar14 * 8) = lVar8;
      }
      if (bVar4) {
        cVar6 = FUN_14423469c(lVar8,local_80 + 1,uVar13);
        if (cVar6 != '\0') {
          bVar4 = false;
          lVar12 = lVar8;
        }
      }
      local_a8 = local_a8 + 1;
      uVar17 = FUN_1461e533c(&local_b0);
    } while (local_a0 != 0);
  }
  lVar8 = local_98;
  lVar14 = (longlong)(int)uStack_90;
  if (lVar14 != 0) {
    lVar15 = 0;
    do {
      lVar2 = *(longlong *)(lVar8 + lVar15);
      if (*(char *)(lVar2 + 0x2270) == '\x01') {
        if (bVar4) {
          *(undefined1 *)(lVar2 + 0x2270) = 0;
        }
        else {
          *(undefined1 *)(lVar2 + 0x2270) = 2;
          uVar17 = FUN_1447715ec(lVar2 + 0x22a0,local_80 + 1);
        }
        uVar17 = FUN_148e0b5aa(uVar17,lVar2);
      }
      lVar15 = lVar15 + 8;
    } while (lVar14 * 8 != lVar15);
    if (bVar4) {
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_144237b5f:
        uVar10 = 0;
      }
      else {
        uVar7 = *(uint *)(param_1 + 8);
        uVar10 = 0;
        if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
          puVar11 = (undefined8 *)
                    ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
          if ((puVar11 == (undefined8 *)0x0) ||
             ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0xc) ||
              ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_144237b5f;
          uVar10 = *puVar11;
        }
      }
      FUN_140fda471(&local_b0,uVar10);
      lVar12 = CONCAT44(local_a8,local_b0._4_4_);
      if ((lVar12 == DAT_14c948034) && (lVar12 = DAT_14c948034, (int)local_b0 != DAT_14c948030)) {
        FUN_14011791e(local_80,(int)local_b0,local_a8);
        lVar12 = local_80[0];
      }
      local_b0._0_4_ = (int)*(undefined8 *)(param_1 + 0x268);
      local_b0._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x268) >> 0x20);
      lVar8 = FUN_14050aea0();
      if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x1b0) != 0)) {
        puVar3 = *(undefined4 **)(*(longlong *)(lVar8 + 0x1b0) + 8);
        puVar16 = &DAT_14c9485f0;
        if (puVar3 != (undefined4 *)0x0) {
          puVar16 = puVar3;
        }
        if (DAT_14c947fe0 == 0) {
          lVar14 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar14);
          DAT_14c947fe0 = lVar14;
        }
        FUN_140045924(DAT_14c947fe0,&local_b0,puVar16,1);
        if ((CONCAT44(local_b0._4_4_,(int)local_b0) == lVar12) &&
           (*(char *)(param_1 + 0x280) == '\0')) {
          FUN_144234752(param_1,param_1 + 0x268,0);
          goto LAB_144237ae0;
        }
      }
      FUN_14623d188(lVar1,lVar8,param_1 + 600);
    }
    else {
      FUN_148e145a2(param_1 + 0x28,local_80 + 1,lVar12);
    }
LAB_144237ae0:
    if ((*(longlong *)(param_1 + 0x268) != 0) || (*(int *)(param_1 + 0x270) != 0x6000)) {
      *(undefined8 *)(param_1 + 0x268) = 0;
      *(undefined4 *)(param_1 + 0x270) = 0x6000;
      *(undefined8 *)(param_1 + 0x278) = 0;
    }
    *(undefined1 *)(param_1 + 0x280) = 0;
    *(undefined1 *)(param_1 + 0x1d1) = 0;
    *(undefined8 *)(param_1 + 0x1d4) = DAT_14c948618;
    *(undefined4 *)(param_1 + 0x1dc) = DAT_14c948620;
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
LAB_14423781d:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144237bb5 FUN_144237bb5 body=91 status=ok
// SIG undefined FUN_144237bb5(void)

void FUN_144237bb5(void)

{
  if (DAT_14cbd4038 != 0) {
    if (DAT_14cbd4030 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbd4030)(DAT_14cbd4030,0);
    FUN_1446efa72(&DAT_14cbd4030,0,0,0x10);
    DAT_14cbd4038 = 0;
  }
  if (DAT_14cbd4030 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 144237c10 FUN_144237c10 body=31 status=ok
// SIG undefined FUN_144237c10(void)

undefined8 FUN_144237c10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144237c7c FUN_144237c7c body=26 status=ok
// SIG undefined FUN_144237c7c(void)

void FUN_144237c7c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 144237c96 FUN_144237c96 body=523 status=ok
// SIG undefined FUN_144237c96(void)

void FUN_144237c96(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xa08);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x41) {
    *(undefined4 *)((longlong)param_1 + 0xa0c) = 0x40;
LAB_144237cbf:
    if (*(void **)((longlong)param_1 + 0xa00) == (void *)0x0) {
      return;
    }
    memmove(param_1,*(void **)((longlong)param_1 + 0xa00),(longlong)param_2 * 0x28);
    param_2 = 0;
    uVar7 = 0;
  }
  else {
    lVar4 = (longlong)(int)uVar3;
    if (0x40 < *(uint *)((longlong)param_1 + 0xa0c)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar7 = lVar4 * 0x28;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar7 + 0xf;
        if (uVar7 < 0x7ff1) {
          uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_144237d73;
              lVar4 = uVar5 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar4 != 0x33);
          }
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
        }
      }
      else {
        uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
      }
    }
LAB_144237d73:
    uVar7 = uVar7 / 0x28;
    uVar6 = (uint)uVar7;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0xa0c) = 0x7fffffff;
      uVar7 = 0x7fffffff;
    }
    else {
      *(uint *)((longlong)param_1 + 0xa0c) = uVar6;
      if (uVar6 < 0x41) goto LAB_144237cbf;
    }
    if (*(longlong *)((longlong)param_1 + 0xa00) == 0) {
      FUN_1446efa72((longlong)param_1 + 0xa00,0,uVar7,0x28);
      memmove(*(void **)((longlong)param_1 + 0xa00),param_1,(longlong)param_2 * 0x28);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0xa00,param_2,uVar7,0x28);
  return;
}



// FUNCTION 144237ea2 FUN_144237ea2 body=301 status=ok
// SIG undefined FUN_144237ea2(void)

void FUN_144237ea2(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_98 [2];
  longlong *local_88;
  undefined4 local_80;
  undefined8 local_78;
  float local_6c;
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong **local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = &local_88;
  local_88 = (longlong *)0x0;
  local_68 = 0;
  local_58 = &PTR_LAB_14b42fbf0;
  local_78 = &LAB_143e4cde6;
  local_50 = param_3;
  (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
  plVar1 = local_88;
  if (local_88 == (longlong *)0x0) goto LAB_144237f0d;
  local_80 = (undefined4)param_1[0x13];
  local_88 = param_1;
  FUN_14899d8ae(&local_78,param_2,*param_4);
  if ((char)local_68 == '\0') {
    if ((local_78._4_4_ != -1) || ((char)local_78 != '\0')) goto LAB_144237f79;
  }
  else if (0.0 < local_6c) {
LAB_144237f79:
    local_a8 = local_98;
    local_98[0] = 0;
    local_98[1] = 0;
    cVar2 = (**(code **)(*param_1 + 0xb8))(param_1,&local_78,plVar1,param_4);
    if (cVar2 != '\0') {
      FUN_148e0d48c(param_1,local_98);
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_148e0d1c2(&local_88);
LAB_144237f0d:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144237fd0 FUN_144237fd0 body=96 status=ok
// SIG undefined FUN_144237fd0(void)

void FUN_144237fd0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b9a2090;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x88);
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
  FUN_14024cf5a(param_1 + 0x10);
  return;
}



// FUNCTION 144238030 FUN_144238030 body=29 status=ok
// SIG undefined FUN_144238030(void)

undefined8 FUN_144238030(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14423804e FUN_14423804e body=108 status=ok
// SIG undefined FUN_14423804e(void)

undefined8 * FUN_14423804e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b9a2090;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xf];
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
  FUN_14024cf5a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442380ba FUN_1442380ba body=53 status=ok
// SIG undefined FUN_1442380ba(void)

void FUN_1442380ba(longlong param_1)

{
  uint uVar1;
  
  if (0 < *(int *)(param_1 + 0x88)) {
    uVar1 = *(int *)(param_1 + 0x88) + 1;
    do {
      FUN_144238c66(param_1,uVar1 - 2);
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  FUN_1442389ce(param_1);
  return;
}



// FUNCTION 1442380f0 FUN_1442380f0 body=26 status=ok
// SIG undefined FUN_1442380f0(void)

void FUN_1442380f0(undefined8 param_1)

{
  FUN_144239802();
  FUN_1442389ce(param_1);
  return;
}



// FUNCTION 14423810a FUN_14423810a body=26 status=ok
// SIG undefined FUN_14423810a(void)

void FUN_14423810a(undefined8 param_1)

{
  FUN_144239802();
  FUN_1442389ce(param_1);
  return;
}



// FUNCTION 144238124 FUN_144238124 body=1384 status=ok
// SIG undefined FUN_144238124(void)

void FUN_144238124(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar7 = *(longlong *)(param_2 + 0x18);
  if (lVar7 == 0) {
LAB_14423817e:
    if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if (DAT_14cba8288 == 0) {
    local_80 = &local_60;
    local_60 = FUN_141864c34;
    local_70 = FUN_14081d0ea;
    local_78 = &LAB_1464cee30;
    local_88 = &LAB_148bfac22;
    local_90 = &LAB_140f21842;
    local_98 = &DAT_149e063b2;
    local_a0 = 0;
    local_a8 = 0x10000004;
    local_b0 = 0x10;
    local_b8 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_14423817e;
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x80);
    lVar11 = (longlong)*(int *)(param_1 + 0x88) << 4;
    do {
      cVar2 = FUN_140e8a950(lVar9,lVar7);
      if (cVar2 != '\0') {
        if (lVar9 != 0) goto LAB_1442381e1;
        break;
      }
      lVar9 = lVar9 + 0x10;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
  }
  uVar4 = FUN_140eb4c46(*(undefined8 *)(param_1 + 0x38));
  lVar9 = *(longlong *)(param_1 + 0x70);
  lVar11 = *(longlong *)(lVar9 + 0x40);
  if (lVar11 == 0) {
    uVar5 = FUN_145cd97be();
    lVar11 = FUN_14477b664(uVar5);
    *(longlong *)(lVar9 + 0x40) = lVar11;
  }
  lVar6 = *(longlong *)(lVar9 + 0x48);
  if (lVar6 == 0) {
    if ((lVar11 != 0) && (*(longlong *)(lVar9 + 0x38) != 0)) {
      plVar8 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar8 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
        *(undefined8 *)(lVar9 + 0x48) = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar8 + 0x110))(plVar8);
        lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar9 + 0x38));
        *(longlong *)(lVar9 + 0x48) = lVar6;
        if (lVar6 != 0) goto LAB_1442382a4;
      }
    }
    local_60 = (code *)0x0;
  }
  else {
LAB_1442382a4:
    puVar12 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
      puVar12 = *(undefined4 **)(lVar6 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar9 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar9);
      DAT_14c947fe0 = lVar9;
    }
    FUN_140045924(DAT_14c947fe0,&local_60,puVar12,1);
  }
  local_58 = 0x19105;
  local_50 = 0;
  cVar2 = FUN_1489913b4(lVar7,&local_60,uVar4);
  if (cVar2 == '\0') goto LAB_1442381e1;
  iVar3 = *(int *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar3 + 1U) {
    FUN_1442398ba((longlong *)(param_1 + 0x80),iVar3);
  }
  lVar11 = *(longlong *)(param_1 + 0x80);
  lVar9 = lVar11 + (longlong)iVar3 * 0x10;
  FUN_1442398b3(lVar9);
  uVar1 = *(uint *)(lVar7 + 0xc);
  *(uint *)(lVar11 + (longlong)iVar3 * 0x10) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar11 = 0;
  }
  iVar3 = *(int *)(lVar11 + 0x10);
  if (*(int *)(lVar11 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    iVar10 = DAT_14c964868 + 1;
    bVar13 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar13) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar10);
    }
    LOCK();
    iVar3 = *(int *)(lVar11 + 0x10);
    bVar13 = iVar3 == 0;
    if (bVar13) {
      *(int *)(lVar11 + 0x10) = iVar10;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar13) {
      iVar3 = iVar10;
    }
  }
  *(int *)(lVar9 + 4) = iVar3;
  lVar7 = FUN_14421c5ac(lVar7);
  if (lVar7 == 0) {
    *(undefined8 *)(lVar9 + 8) = 0;
  }
  else {
    uVar1 = *(uint *)(lVar7 + 0xc);
    *(uint *)(lVar9 + 8) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar3 = *(int *)(lVar7 + 0x10);
    if (iVar3 == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar3 = *(int *)(lVar7 + 0x10);
      bVar13 = iVar3 == 0;
      if (bVar13) {
        *(int *)(lVar7 + 0x10) = iVar10;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar3 = iVar10;
      }
      *(int *)(lVar9 + 0xc) = iVar3;
      if (iVar3 == 0) goto LAB_1442384d3;
    }
    else {
      *(int *)(lVar9 + 0xc) = iVar3;
    }
    uVar1 = *(uint *)(lVar9 + 8);
    if ((((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
        (plVar8 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar8 != (longlong *)0x0)) &&
       (((int)plVar8[2] == iVar3 && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
        lVar7 = *plVar8;
      }
      else {
        lVar7 = 0;
      }
      lVar9 = FUN_140eb4c46(*(undefined8 *)(param_1 + 0x38));
      if (lVar9 == 0) {
LAB_144238537:
        lVar9 = 0;
      }
      else {
        if (DAT_14cba8288 == 0) {
          local_80 = &local_48;
          local_48 = FUN_141864c34;
          local_70 = FUN_14081d0ea;
          local_78 = &LAB_1464cee30;
          local_88 = &LAB_148bfac22;
          local_90 = &LAB_140f21842;
          local_98 = &DAT_149e063b2;
          local_a0 = 0;
          local_a8 = 0x10000004;
          local_b0 = 0x10;
          local_b8 = 0x9cd0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        }
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30))
        goto LAB_144238537;
      }
      FUN_148de25a4(lVar7 + 0x120,lVar9);
    }
  }
LAB_1442384d3:
  FUN_1442389ce(param_1);
LAB_1442381e1:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1442386b4 FUN_1442386b4 body=792 status=ok
// SIG undefined FUN_1442386b4(void)

void FUN_1442386b4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  undefined1 local_38 [8];
  code *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = FUN_140eb4c46(*(undefined8 *)(param_1 + 0x38));
  if (lVar7 != 0) {
    if (DAT_14cb56270 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_148630fef;
      local_60 = FUN_1464b6a91;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar8 = (longlong *)FUN_144718840(lVar7,DAT_14cb56270);
    if ((plVar8 != (longlong *)0x0) && (lVar7 = (**(code **)(*plVar8 + 0x20))(plVar8), lVar7 != 0))
    {
      local_30 = (code *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,4,0x10);
      local_28 = 4;
      plVar8 = *(longlong **)(param_1 + 0x30);
      if (plVar8 == (longlong *)0x0) {
LAB_144238832:
        *(undefined ***)local_30 = &PTR_LAB_14b3e9ef0;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar5 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar5 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar5;
        *(longlong *)(local_30 + 0x10) = lVar9;
        *(undefined ***)local_30 = &PTR_FUN_14b9a21b0;
        *(undefined8 *)(local_30 + 0x18) = 0;
        *(undefined8 *)(local_30 + 0x20) = 0;
        *(code **)(local_30 + 0x28) = FUN_1442399c0;
        *(undefined4 *)(local_30 + 0x30) = 0;
      }
      else {
        iVar6 = (int)plVar8[1];
        do {
          if (iVar6 == 0) goto LAB_144238832;
          LOCK();
          iVar4 = (int)plVar8[1];
          bVar10 = iVar6 == iVar4;
          if (bVar10) {
            *(int *)(plVar8 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar10);
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        *(undefined ***)local_30 = &PTR_LAB_14b3e9ef0;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar5 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar5 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar5;
        *(longlong *)(local_30 + 0x10) = lVar9;
        *(undefined ***)local_30 = &PTR_FUN_14b9a21b0;
        *(undefined8 *)(local_30 + 0x18) = uVar3;
        *(longlong **)(local_30 + 0x20) = plVar8;
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        *(code **)(local_30 + 0x28) = FUN_1442399c0;
        *(undefined4 *)(local_30 + 0x30) = 0;
        LOCK();
        plVar1 = plVar8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        LOCK();
        plVar1 = plVar8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        LOCK();
        plVar1 = plVar8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      FUN_1403524de(lVar7 + 400,local_38,&local_30);
      if (local_28 != 0) {
        if (local_30 == (code *)0x0) goto LAB_1442388d8;
        (*(code *)**(undefined8 **)local_30)(local_30,0);
        FUN_1446efa72(&local_30,0,0,0x10);
        local_28 = 0;
      }
      if (local_30 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1442388d8:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442389ce FUN_1442389ce body=663 status=ok
// SIG undefined FUN_1442389ce(void)

void FUN_1442389ce(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  undefined8 *local_88;
  int local_80;
  undefined8 local_78;
  undefined4 local_70;
  byte local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = FUN_1410be182(*(undefined8 *)(param_1 + 0x38));
  if (lVar7 != 0) {
    if (*(longlong *)(lVar7 + 0x1f0) == 0) {
      plVar8 = (longlong *)(lVar7 + 0x458);
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
    }
    lVar7 = *plVar8;
    if (lVar7 != 0) {
      local_88 = (undefined8 *)0x0;
      local_80 = 0;
      FUN_1446efa72(&local_88,0,4,0x10);
      local_80 = 4;
      plVar8 = *(longlong **)(param_1 + 0x30);
      if (plVar8 == (longlong *)0x0) {
LAB_144238b2f:
        *local_88 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar5 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar5 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar5;
        local_88[2] = lVar9;
        *local_88 = &PTR_FUN_14b9a2140;
        local_88[3] = 0;
        local_88[4] = 0;
        local_88[5] = FUN_1442391ee;
        *(undefined4 *)(local_88 + 6) = 0;
      }
      else {
        iVar6 = (int)plVar8[1];
        do {
          if (iVar6 == 0) goto LAB_144238b2f;
          LOCK();
          iVar4 = (int)plVar8[1];
          bVar10 = iVar6 == iVar4;
          if (bVar10) {
            *(int *)(plVar8 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar10);
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        *local_88 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar5 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar5 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar5;
        local_88[2] = lVar9;
        *local_88 = &PTR_FUN_14b9a2140;
        local_88[3] = uVar3;
        local_88[4] = plVar8;
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        local_88[5] = FUN_1442391ee;
        *(undefined4 *)(local_88 + 6) = 0;
        LOCK();
        plVar1 = plVar8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        LOCK();
        plVar1 = plVar8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        LOCK();
        plVar1 = plVar8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      local_78 = 0;
      local_70 = 0;
      FUN_14487d8d8(&local_78,&local_88);
      local_38 = 1;
      FUN_14016fdb0(lVar7,local_90,&local_78);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
      if (local_80 != 0) {
        if (local_88 == (undefined8 *)0x0) goto LAB_144238c04;
        (**(code **)*local_88)(local_88,0);
        FUN_1446efa72(&local_88,0,0,0x10);
        local_80 = 0;
      }
      if (local_88 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_144238c04:
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144238c66 FUN_144238c66 body=1161 status=ok
// SIG undefined FUN_144238c66(void)

void FUN_144238c66(longlong param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  bool bVar17;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x88) <= (int)param_2)) goto LAB_144238d4a;
  plVar1 = (longlong *)(param_1 + 0x80);
  lVar15 = (ulonglong)param_2 * 0x10;
  iVar3 = *(int *)(*plVar1 + 4 + lVar15);
  if (((iVar3 != 0) &&
      (((uVar13 = *(uint *)(*plVar1 + lVar15), -1 < (int)uVar13 && ((int)uVar13 < DAT_14c9647dc)) &&
       (plVar12 = (longlong *)
                  ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
       plVar12 != (longlong *)0x0)))) &&
     (((((int)plVar12[2] == iVar3 && ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)) &&
       (*plVar12 != 0)) && ((*(uint *)(*plVar12 + 8) >> 0x1e & 1) == 0)))) {
    uVar5 = FUN_140eb4c46(*(undefined8 *)(param_1 + 0x38));
    lVar9 = *(longlong *)(param_1 + 0x70);
    lVar7 = *(longlong *)(lVar9 + 0x40);
    if (lVar7 == 0) {
      uVar6 = FUN_145cd97be();
      lVar7 = FUN_14477b664(uVar6);
      *(longlong *)(lVar9 + 0x40) = lVar7;
    }
    lVar8 = *(longlong *)(lVar9 + 0x48);
    if (lVar8 == 0) {
      if ((lVar7 != 0) && (*(longlong *)(lVar9 + 0x38) != 0)) {
        plVar12 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar12 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar2 == '\0')) {
          *(undefined8 *)(lVar9 + 0x48) = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar12 + 0x110))(plVar12);
          lVar8 = FUN_144aff482(uVar6,(longlong *)(lVar9 + 0x38));
          *(longlong *)(lVar9 + 0x48) = lVar8;
          if (lVar8 != 0) goto LAB_144238e07;
        }
      }
      local_68 = 0;
    }
    else {
LAB_144238e07:
      puVar16 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar8 + 8) != (undefined4 *)0x0) {
        puVar16 = *(undefined4 **)(lVar8 + 8);
      }
      if (DAT_14c947fe0 == 0) {
        lVar9 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar9);
        DAT_14c947fe0 = lVar9;
      }
      FUN_140045924(DAT_14c947fe0,&local_68,puVar16,1);
    }
    local_60 = 0x19105;
    local_58 = 0;
    iVar3 = *(int *)(*plVar1 + 4 + lVar15);
    if (iVar3 == 0) {
LAB_144238fa4:
      uVar6 = 0;
    }
    else {
      uVar13 = *(uint *)(*plVar1 + lVar15);
      uVar6 = 0;
      if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
        puVar11 = (undefined8 *)
                  ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
        if ((puVar11 == (undefined8 *)0x0) ||
           ((*(int *)(puVar11 + 2) != iVar3 || ((*(uint *)(puVar11 + 1) & 0x10200000) != 0))))
        goto LAB_144238fa4;
        uVar6 = *puVar11;
      }
    }
    FUN_1489914d0(uVar6,&local_68,uVar5);
    iVar3 = *(int *)(*plVar1 + 0xc + lVar15);
    if (((((iVar3 != 0) && (uVar13 = *(uint *)(*plVar1 + lVar15 + 8), -1 < (int)uVar13)) &&
         ((int)uVar13 < DAT_14c9647dc)) &&
        ((puVar11 = (undefined8 *)
                    ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
         puVar11 != (undefined8 *)0x0 && (*(int *)(puVar11 + 2) == iVar3)))) &&
       ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)) {
      uVar14 = 0;
      if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
        uVar5 = *puVar11;
      }
      else {
        uVar5 = 0;
      }
      lVar9 = FUN_140eb4c46(*(undefined8 *)(param_1 + 0x38));
      if (lVar9 == 0) {
LAB_144238f8b:
        uVar10 = 0;
      }
      else {
        if (DAT_14cba8288 == 0) {
          local_80 = &local_50;
          local_50 = FUN_141864c34;
          local_70 = FUN_14081d0ea;
          local_78 = &LAB_1464cee30;
          local_88 = &LAB_148bfac22;
          local_90 = &LAB_140f21842;
          local_98 = &DAT_149e063b2;
          local_a0 = 0;
          local_a8 = 0x10000004;
          local_b0 = 0x10;
          local_b8 = 0x9cd0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        }
        if (*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38))
        goto LAB_144238f8b;
        uVar10 = 0;
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30) {
          uVar13 = *(uint *)(lVar9 + 0xc);
          uVar14 = (ulonglong)uVar13;
          if ((int)uVar13 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          uVar10 = (ulonglong)*(uint *)(lVar9 + 0x10);
          if (*(uint *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            uVar13 = DAT_14c964868 + 1;
            bVar17 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar17) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar13);
            }
            LOCK();
            uVar4 = *(uint *)(lVar9 + 0x10);
            bVar17 = uVar4 == 0;
            if (bVar17) {
              *(uint *)(lVar9 + 0x10) = uVar13;
              uVar4 = 0;
            }
            UNLOCK();
            if (bVar17) {
              uVar4 = uVar13;
            }
            uVar10 = (ulonglong)uVar4;
          }
        }
      }
      FUN_148de28f6(uVar5,uVar14 | uVar10 << 0x20);
    }
  }
  iVar3 = *(int *)(param_1 + 0x88);
  if (~param_2 + iVar3 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x80) + lVar15),
            (void *)(*(longlong *)(param_1 + 0x80) + lVar15 + 0x10),
            (longlong)(int)(~param_2 + iVar3) << 4);
    iVar3 = *(int *)(param_1 + 0x88);
  }
  *(int *)(param_1 + 0x88) = iVar3 + -1;
  FUN_1442390f0(plVar1);
LAB_144238d4a:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442390f0 FUN_1442390f0 body=254 status=ok
// SIG undefined FUN_1442390f0(void)

void FUN_1442390f0(longlong param_1)

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
          uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,4);
          iVar3 = *(int *)(param_1 + 0xc);
        }
      }
      uVar4 = uVar2 >> 4 & 0xffffffff;
    }
    if ((int)uVar4 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar4;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x10,4);
    }
  }
  return;
}



// FUNCTION 1442391ee FUN_1442391ee body=689 status=ok
// SIG undefined FUN_1442391ee(void)

void FUN_1442391ee(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar1 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x80);
    lVar11 = 0;
    do {
      iVar2 = *(int *)(lVar4 + 0xc + lVar11);
      if (((((((iVar2 != 0) && (uVar3 = *(uint *)(lVar4 + 8 + lVar11), -1 < (int)uVar3)) &&
             ((int)uVar3 < DAT_14c9647dc)) &&
            ((lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar10 != 0 &&
             (*(int *)(lVar10 + 0x10) == iVar2)))) &&
           (((*(uint *)(lVar10 + 8) & 0x10200000) == 0 &&
            ((iVar2 = *(int *)(lVar4 + 4 + lVar11), iVar2 != 0 &&
             (uVar3 = *(uint *)(lVar4 + lVar11), -1 < (int)uVar3)))))) &&
          ((int)uVar3 < DAT_14c9647dc)) &&
         (((puVar9 = (undefined8 *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           puVar9 != (undefined8 *)0x0 && (*(int *)(puVar9 + 2) == iVar2)) &&
          ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
          uVar8 = *puVar9;
        }
        else {
          uVar8 = 0;
        }
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))
                          (*(longlong **)(param_1 + 0x38),uVar8);
        iVar2 = *(int *)(lVar4 + 0xc + lVar11);
        if ((iVar2 == 0) || (uVar3 = *(uint *)(lVar4 + 8 + lVar11), (int)uVar3 < 0)) {
LAB_1442393ca:
          lVar10 = 0;
        }
        else {
          lVar10 = 0;
          if ((int)uVar3 < DAT_14c9647dc) {
            plVar7 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar2)) ||
               ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_1442393ca;
            lVar10 = *plVar7;
          }
        }
        lVar6 = FUN_140eb4c46(*(undefined8 *)(param_1 + 0x38));
        if (lVar6 == 0) {
LAB_1442393a0:
          lVar6 = 0;
        }
        else {
          if (DAT_14cba8288 == 0) {
            local_50 = FUN_141864c34;
            local_60 = FUN_14081d0ea;
            local_68 = &LAB_1464cee30;
            local_70 = &local_50;
            local_78 = &LAB_148bfac22;
            local_80 = &LAB_140f21842;
            local_88 = &DAT_149e063b2;
            local_90 = 0;
            local_98 = 0x10000004;
            local_a0 = 0x10;
            local_a8 = 0x9cd0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
          }
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30))
          goto LAB_1442393a0;
        }
        FUN_144223a1e(lVar10 + 0x120,lVar6,uVar5);
      }
      lVar11 = lVar11 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442394a0 FUN_1442394a0 body=64 status=ok
// SIG undefined FUN_1442394a0(void)

undefined8 * FUN_1442394a0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9a2140;
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



// FUNCTION 1442394e4 FUN_1442394e4 body=81 status=ok
// SIG undefined FUN_1442394e4(void)

undefined8 FUN_1442394e4(longlong param_1)

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



// FUNCTION 14423953c FUN_14423953c body=89 status=ok
// SIG undefined FUN_14423953c(void)

bool FUN_14423953c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_144239587;
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
LAB_144239587:
  return lVar6 == param_2;
}



// FUNCTION 1442395b2 FUN_1442395b2 body=118 status=ok
// SIG undefined FUN_1442395b2(void)

void FUN_1442395b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a2140;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 144239628 FUN_144239628 body=118 status=ok
// SIG undefined FUN_144239628(void)

void FUN_144239628(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a2140;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14423969e FUN_14423969e body=156 status=ok
// SIG undefined FUN_14423969e(void)

void FUN_14423969e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a2140;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014423972a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14423973a FUN_14423973a body=100 status=ok
// SIG undefined FUN_14423973a(void)

void FUN_14423973a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000144239786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144239793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14423979e FUN_14423979e body=100 status=ok
// SIG undefined FUN_14423979e(void)

ulonglong FUN_14423979e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1442397f7:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1442397f7;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 144239802 FUN_144239802 body=177 status=ok
// SIG undefined FUN_144239802(void)

void FUN_144239802(longlong param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)*(int *)(param_1 + 0x88);
  if (0 < (longlong)uVar8) {
    lVar7 = uVar8 * 0x10 + -0xc;
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x80) + lVar7);
      if ((iVar1 == 0) ||
         (uVar2 = *(uint *)(*(longlong *)(param_1 + 0x80) + -4 + lVar7), (int)uVar2 < 0)) {
LAB_1442398a7:
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        if ((int)uVar2 < DAT_14c9647dc) {
          puVar6 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (((puVar6 == (undefined8 *)0x0) || (*(int *)(puVar6 + 2) != iVar1)) ||
             ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)) goto LAB_1442398a7;
          uVar5 = *puVar6;
        }
      }
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))
                        (*(longlong **)(param_1 + 0x38),uVar5);
      if (cVar4 == '\0') {
        FUN_144238c66(param_1,(int)uVar8 + -1);
      }
      lVar7 = lVar7 + -0x10;
      bVar3 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar3);
  }
  return;
}



// FUNCTION 1442398b3 FUN_1442398b3 body=7 status=ok
// SIG undefined FUN_1442398b3(void)

void FUN_1442398b3(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1442398ba FUN_1442398ba body=262 status=ok
// SIG undefined FUN_1442398ba(void)

void FUN_1442398ba(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1442399c0 FUN_1442399c0 body=284 status=ok
// SIG undefined FUN_1442399c0(void)

void FUN_1442399c0(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x80);
    lVar9 = 0;
    do {
      iVar2 = *(int *)(lVar4 + 4 + lVar9);
      if ((iVar2 == 0) || (uVar3 = *(uint *)(lVar4 + lVar9), (int)uVar3 < 0)) {
LAB_144239ac8:
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        if ((int)uVar3 < DAT_14c9647dc) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if (((puVar8 == (undefined8 *)0x0) || (*(int *)(puVar8 + 2) != iVar2)) ||
             ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_144239ac8;
          uVar7 = *puVar8;
        }
      }
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))
                        (*(longlong **)(param_1 + 0x38),uVar7);
      uVar7 = FUN_140eb4c46(*(undefined8 *)(param_1 + 0x38));
      iVar2 = *(int *)(lVar4 + 4 + lVar9);
      if ((iVar2 == 0) || (uVar3 = *(uint *)(lVar4 + lVar9), (int)uVar3 < 0)) {
LAB_144239acc:
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        if ((int)uVar3 < DAT_14c9647dc) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if (((puVar8 == (undefined8 *)0x0) || (*(int *)(puVar8 + 2) != iVar2)) ||
             ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_144239acc;
          uVar6 = *puVar8;
        }
      }
      FUN_144215ea2(uVar6,uVar7,uVar5);
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar9);
  }
  return;
}



// FUNCTION 144239adc FUN_144239adc body=64 status=ok
// SIG undefined FUN_144239adc(void)

undefined8 * FUN_144239adc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9a21b0;
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



// FUNCTION 144239b20 FUN_144239b20 body=81 status=ok
// SIG undefined FUN_144239b20(void)

undefined8 FUN_144239b20(longlong param_1)

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



// FUNCTION 144239b78 FUN_144239b78 body=89 status=ok
// SIG undefined FUN_144239b78(void)

bool FUN_144239b78(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_144239bc3;
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
LAB_144239bc3:
  return lVar6 == param_2;
}



// FUNCTION 144239bee FUN_144239bee body=118 status=ok
// SIG undefined FUN_144239bee(void)

void FUN_144239bee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a21b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 144239c64 FUN_144239c64 body=118 status=ok
// SIG undefined FUN_144239c64(void)

void FUN_144239c64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a21b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 144239cda FUN_144239cda body=156 status=ok
// SIG undefined FUN_144239cda(void)

void FUN_144239cda(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a21b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144239d66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144239d76 FUN_144239d76 body=104 status=ok
// SIG undefined FUN_144239d76(void)

void FUN_144239d76(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000144239dc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144239dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 144239dde FUN_144239dde body=101 status=ok
// SIG undefined FUN_144239dde(void)

ulonglong FUN_144239dde(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_144239e38:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_144239e38;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 144239e44 FUN_144239e44 body=301 status=ok
// SIG undefined FUN_144239e44(void)

void FUN_144239e44(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_98 [2];
  longlong *local_88;
  undefined4 local_80;
  undefined8 local_78;
  float local_6c;
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong **local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = &local_88;
  local_88 = (longlong *)0x0;
  local_68 = 0;
  local_58 = &PTR_LAB_14b42fbf0;
  local_78 = &LAB_143e4cde6;
  local_50 = param_3;
  (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
  plVar1 = local_88;
  if (local_88 == (longlong *)0x0) goto LAB_144239eaf;
  local_80 = (undefined4)param_1[0x13];
  local_88 = param_1;
  FUN_14899d8ae(&local_78,param_2,*param_4);
  if ((char)local_68 == '\0') {
    if ((local_78._4_4_ != -1) || ((char)local_78 != '\0')) goto LAB_144239f1b;
  }
  else if (0.0 < local_6c) {
LAB_144239f1b:
    local_a8 = local_98;
    local_98[0] = 0;
    local_98[1] = 0;
    cVar2 = (**(code **)(*param_1 + 0xb8))(param_1,&local_78,plVar1,param_4);
    if (cVar2 != '\0') {
      FUN_148e0e8b6(param_1,local_98);
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_148e0e5da(&local_88);
LAB_144239eaf:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144239f72 FUN_144239f72 body=303 status=ok
// SIG undefined FUN_144239f72(void)

void FUN_144239f72(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_98 [2];
  longlong *local_88;
  undefined4 local_80;
  undefined8 local_78;
  float local_6c;
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong **local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = &local_88;
  local_88 = (longlong *)0x0;
  local_68 = 0;
  local_58 = &PTR_LAB_14b42fbf0;
  local_78 = &LAB_143e4cde6;
  local_50 = param_3;
  (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
  plVar1 = local_88;
  if (local_88 == (longlong *)0x0) goto LAB_144239fdd;
  local_80 = (undefined4)param_1[0x13];
  local_88 = param_1;
  FUN_14899d8ae(&local_78,param_2,*param_4);
  if ((char)local_68 == '\0') {
    if ((local_78._4_4_ != -1) || ((char)local_78 != '\0')) goto LAB_14423a049;
  }
  else if (0.0 < local_6c) {
LAB_14423a049:
    local_a8 = local_98;
    local_98[0] = 0;
    local_98[1] = 0;
    cVar2 = (**(code **)(*param_1 + 0xb8))(param_1,&local_78,plVar1,param_4);
    if (cVar2 != '\0') {
      FUN_148e0ee58(param_1,local_98);
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_14104ad2a(&local_88);
LAB_144239fdd:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14423a0ba FUN_14423a0ba body=29 status=ok
// SIG undefined FUN_14423a0ba(void)

undefined8 FUN_14423a0ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14423a0ec FUN_14423a0ec body=93 status=ok
// SIG undefined FUN_14423a0ec(void)

void FUN_14423a0ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b427060;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a2770;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14423a14a FUN_14423a14a body=93 status=ok
// SIG undefined FUN_14423a14a(void)

void FUN_14423a14a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b427060;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a2770;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14423a1a8 FUN_14423a1a8 body=126 status=ok
// SIG undefined FUN_14423a1a8(void)

void FUN_14423a1a8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b427060;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a2770;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014423a217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14423a234 FUN_14423a234 body=25 status=ok
// SIG undefined FUN_14423a234(void)

undefined1 FUN_14423a234(longlong param_1)

{
  undefined8 in_stack_00000030;
  
  FUN_14423a24e(param_1 + 0x18,in_stack_00000030);
  return 1;
}



// FUNCTION 14423a24e FUN_14423a24e body=561 status=ok
// SIG undefined FUN_14423a24e(void)

void FUN_14423a24e(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) {
    return;
  }
  plVar6 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  if (*(uint *)(plVar6 + 2) != param_1[1]) {
    return;
  }
  if ((*(uint *)(plVar6 + 1) & 0x10200000) != 0) {
    return;
  }
  if (*plVar6 == 0) {
    return;
  }
  if (((((*(int *)(param_2 + 0xdc) == 0) || (uVar1 = *(uint *)(param_2 + 0xd8), (int)uVar1 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar1 ||
        ((plVar6 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_2 + 0xdc))))))) ||
      ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) || ((longlong *)*plVar6 == (longlong *)0x0)) {
LAB_14423a403:
    param_2 = 0;
  }
  else {
    plVar5 = (longlong *)0x0;
    if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
      plVar5 = (longlong *)*plVar6;
    }
    cVar3 = (**(code **)(*plVar5 + 0x568))();
    if (cVar3 == '\0') {
      iVar2 = *(int *)(param_2 + 0xdc);
      if (((iVar2 == 0) || (uVar1 = *(uint *)(param_2 + 0xd8), (int)uVar1 < 0)) ||
         (DAT_14c9647dc <= (int)uVar1)) {
        if (DAT_00000425 != '\0') {
LAB_14423a473:
          lVar4 = 0;
          goto LAB_14423a3fa;
        }
      }
      else {
        plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((plVar6 == (longlong *)0x0) || ((int)plVar6[2] != iVar2)) ||
           ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) {
          lVar4 = 0;
        }
        else {
          lVar4 = *plVar6;
        }
        if (*(char *)(lVar4 + 0x425) != '\0') {
          if (((DAT_14c9647dc <= (int)uVar1) ||
              (plVar6 = (longlong *)
                        ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
              plVar6 == (longlong *)0x0)) ||
             (((int)plVar6[2] != iVar2 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
          goto LAB_14423a473;
          lVar4 = *plVar6;
LAB_14423a3fa:
          if (*(char *)(lVar4 + 0x425) != '\x01') goto LAB_14423a403;
        }
      }
    }
  }
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    lVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14423a448;
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar6 != (longlong *)0x0) &&
       ((*(uint *)(plVar6 + 2) == param_1[1] && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) {
      lVar4 = *plVar6;
      goto LAB_14423a448;
    }
  }
  lVar4 = 0;
LAB_14423a448:
  FUN_140d91b8a(lVar4 + 0x9b60,param_2);
  return;
}



// FUNCTION 14423a480 FUN_14423a480 body=29 status=ok
// SIG undefined FUN_14423a480(void)

undefined8 FUN_14423a480(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14423a61c FUN_14423a61c body=101 status=ok
// SIG undefined FUN_14423a61c(void)

void FUN_14423a61c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a27e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14423a682 FUN_14423a682 body=101 status=ok
// SIG undefined FUN_14423a682(void)

void FUN_14423a682(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a27e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14423a6e8 FUN_14423a6e8 body=134 status=ok
// SIG undefined FUN_14423a6e8(void)

void FUN_14423a6e8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a27e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014423a75f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14423a778 FUN_14423a778 body=269 status=ok
// SIG undefined FUN_14423a778(void)

undefined8 FUN_14423a778(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14423a87f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14423a87f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14423a87f:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14423a833;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14423a886(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14423a833;
    }
  }
  uVar6 = 0;
LAB_14423a833:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14423a886 FUN_14423a886 body=672 status=ok
// SIG undefined FUN_14423a886(void)

void FUN_14423a886(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  if (((*(int *)((longlong)param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 1), -1 < (int)uVar1)
      ) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)((longlong)param_1 + 0xc))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && ((longlong *)*plVar4 != (longlong *)0x0)))) {
      plVar5 = (longlong *)0x0;
      plVar3 = (longlong *)*plVar4;
      if ((*(uint *)(plVar4 + 1) & 0x10200000) != 0) {
        plVar3 = plVar5;
      }
      (**(code **)(*plVar3 + 0x2b0))();
      if (*(int *)((longlong)param_1 + 0xc) != 0) {
        uVar1 = *(uint *)(param_1 + 1);
        plVar5 = (longlong *)0x0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          plVar5 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((plVar5 == (longlong *)0x0) ||
             (((int)plVar5[2] != *(int *)((longlong)param_1 + 0xc) ||
              ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)))) {
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = (longlong *)*plVar5;
          }
        }
      }
      (**(code **)(*plVar5 + 0x420))(plVar5,0);
    }
  }
  if (((*(int *)((longlong)param_1 + 0x14) == 0) || (uVar1 = *(uint *)(param_1 + 2), (int)uVar1 < 0)
      ) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14423aac4;
  plVar4 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar4 == (longlong *)0x0) || ((int)plVar4[2] != *(int *)((longlong)param_1 + 0x14))) ||
     (((*(uint *)(plVar4 + 1) & 0x10200000) != 0 || ((longlong *)*plVar4 == (longlong *)0x0))))
  goto LAB_14423aac4;
  plVar5 = (longlong *)0x0;
  plVar3 = (longlong *)*plVar4;
  if ((*(uint *)(plVar4 + 1) & 0x10200000) != 0) {
    plVar3 = plVar5;
  }
  FUN_1405e47c6(plVar3,0);
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    uVar1 = *(uint *)(param_1 + 2);
    plVar5 = (longlong *)0x0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar5 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar5 == (longlong *)0x0) ||
         (((int)plVar5[2] != *(int *)((longlong)param_1 + 0x14) ||
          ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)))) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)*plVar5;
      }
    }
  }
  (**(code **)(*plVar5 + 0x330))(plVar5,1);
  if (*(int *)((longlong)param_1 + 0x14) == 0) {
LAB_14423ab15:
    uVar6 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 2);
    uVar6 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != *(int *)((longlong)param_1 + 0x14) ||
          ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_14423ab15;
      uVar6 = *puVar7;
    }
  }
  local_68 = 0;
  FUN_140b32deb(&local_38,uVar6,*(longlong *)(lVar2 + 0x30) + 0x410,0);
  local_38 = 0;
  local_30 = 0xffffffffffffffff;
LAB_14423aac4:
  local_48 = DAT_14c8462d0;
  local_58 = (undefined4)DAT_14c8462c0;
  uStack_54 = DAT_14c8462c0._4_4_;
  uStack_50 = (undefined4)DAT_14c8462c8;
  uStack_4c = DAT_14c8462c8._4_4_;
  FUN_140417934(lVar2,DAT_14cbd3678);
  FUN_140416838(lVar2);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14423ab28 FUN_14423ab28 body=29 status=ok
// SIG undefined FUN_14423ab28(void)

undefined8 FUN_14423ab28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14423acc4 FUN_14423acc4 body=101 status=ok
// SIG undefined FUN_14423acc4(void)

void FUN_14423acc4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a2850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14423ad2a FUN_14423ad2a body=101 status=ok
// SIG undefined FUN_14423ad2a(void)

void FUN_14423ad2a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a2850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14423ad90 FUN_14423ad90 body=134 status=ok
// SIG undefined FUN_14423ad90(void)

void FUN_14423ad90(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a2850;
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
                    /* WARNING: Could not recover jumptable at 0x00014423ae07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14423ae20 FUN_14423ae20 body=269 status=ok
// SIG undefined FUN_14423ae20(void)

undefined8 FUN_14423ae20(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14423af27;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14423af27;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14423af27:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14423aedb;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14423af2e(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14423aedb;
    }
  }
  uVar6 = 0;
LAB_14423aedb:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14423af2e FUN_14423af2e body=132 status=ok
// SIG undefined FUN_14423af2e(void)

void FUN_14423af2e(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong *plVar5;
  
  lVar2 = *param_1;
  uVar4 = 1;
  if (*(int *)(lVar2 + 0xe0) < 1) {
    if (*(int *)((longlong)param_1 + 0xc) == 0) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 1);
    if ((int)uVar1 < 0) {
      return;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return;
    }
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    if ((int)plVar5[2] != *(int *)((longlong)param_1 + 0xc)) {
      return;
    }
    if ((*(uint *)(plVar5 + 1) & 0x10200000) != 0) {
      return;
    }
    if (*plVar5 == 0) {
      return;
    }
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    (**(code **)(*(longlong *)(lVar3 + 0x3b58) + 0x20))
              (lVar3 + 0x3b58,CONCAT71((int7)((ulonglong)plVar5 >> 8),1));
    uVar4 = 0;
  }
  *(undefined1 *)(lVar2 + 0xf8) = uVar4;
  return;
}



// FUNCTION 14423afb2 FUN_14423afb2 body=29 status=ok
// SIG undefined FUN_14423afb2(void)

undefined8 FUN_14423afb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14423afe4 FUN_14423afe4 body=93 status=ok
// SIG undefined FUN_14423afe4(void)

void FUN_14423afe4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a28c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14423b042 FUN_14423b042 body=93 status=ok
// SIG undefined FUN_14423b042(void)

void FUN_14423b042(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a28c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14423b0a0 FUN_14423b0a0 body=126 status=ok
// SIG undefined FUN_14423b0a0(void)

void FUN_14423b0a0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a28c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014423b10f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14423b170 FUN_14423b170 body=93 status=ok
// SIG undefined FUN_14423b170(void)

undefined8 FUN_14423b170(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  
  if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x1c))) {
      if (((*(uint *)(plVar2 + 1) & 0x10200000) == 0) && (*plVar2 != 0)) {
        FUN_140416838(*(undefined8 *)(param_1 + 0x20));
      }
    }
  }
  return 1;
}



// FUNCTION 14423b1ce FUN_14423b1ce body=29 status=ok
// SIG undefined FUN_14423b1ce(void)

undefined8 FUN_14423b1ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14423b200 FUN_14423b200 body=85 status=ok
// SIG undefined FUN_14423b200(void)

void FUN_14423b200(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a2960;
  return;
}



// FUNCTION 14423b256 FUN_14423b256 body=85 status=ok
// SIG undefined FUN_14423b256(void)

void FUN_14423b256(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a2960;
  return;
}



// FUNCTION 14423b2ac FUN_14423b2ac body=118 status=ok
// SIG undefined FUN_14423b2ac(void)

void FUN_14423b2ac(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a2960;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014423b313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14423b328 FUN_14423b328 body=29 status=ok
// SIG undefined FUN_14423b328(void)

undefined8 FUN_14423b328(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14423b35a FUN_14423b35a body=85 status=ok
// SIG undefined FUN_14423b35a(void)

void FUN_14423b35a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a29d0;
  return;
}



// FUNCTION 14423b3b0 FUN_14423b3b0 body=85 status=ok
// SIG undefined FUN_14423b3b0(void)

void FUN_14423b3b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a29d0;
  return;
}



// FUNCTION 14423b406 FUN_14423b406 body=118 status=ok
// SIG undefined FUN_14423b406(void)

void FUN_14423b406(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a29d0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014423b46d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14423b482 FUN_14423b482 body=99 status=ok
// SIG undefined FUN_14423b482(void)

undefined8 * FUN_14423b482(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
LAB_14423b4c4:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14423b4c4;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    *param_2 = *(undefined8 *)(param_1 + 0x28);
    param_2[1] = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 14423b534 FUN_14423b534 body=29 status=ok
// SIG undefined FUN_14423b534(void)

undefined8 FUN_14423b534(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14423b566 FUN_14423b566 body=93 status=ok
// SIG undefined FUN_14423b566(void)

void FUN_14423b566(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a2b00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a2a90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14423b5c4 FUN_14423b5c4 body=93 status=ok
// SIG undefined FUN_14423b5c4(void)

void FUN_14423b5c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a2b00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a2a90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14423b622 FUN_14423b622 body=126 status=ok
// SIG undefined FUN_14423b622(void)

void FUN_14423b622(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b9a2b00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a2a90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014423b691. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14423b6cc FUN_14423b6cc body=54 status=ok
// SIG undefined FUN_14423b6cc(void)

undefined8 FUN_14423b6cc(longlong param_1,longlong param_2)

{
  if (((*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x158) != 0) &&
      (*(longlong *)(param_2 + 0x1c8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_2 + 0x1c8) + 0x120) == 0)) {
    FUN_140bfe1fc();
  }
  return 1;
}



// FUNCTION 14423b702 FUN_14423b702 body=228 status=ok
// SIG undefined FUN_14423b702(void)

undefined8 FUN_14423b702(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)((longlong)param_2 + 0x74) != 0) &&
      (uVar3 = *(uint *)(param_2 + 0xe), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)((longlong)param_2 + 0x74))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
      FUN_1410f26bc(*plVar5 + 0x118,&local_38);
      if ((local_38 != 0) && (*(char *)(local_38 + 8) != '\0')) {
        iVar4 = (**(code **)(*param_2 + 0x18))(param_2);
        *(int *)*param_1 = *(int *)*param_1 + iVar4;
      }
      goto LAB_14423b79f;
    }
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
LAB_14423b79f:
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14423b812 FUN_14423b812 body=29 status=ok
// SIG undefined FUN_14423b812(void)

undefined8 FUN_14423b812(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14423b830 FUN_14423b830 body=114 status=ok
// SIG undefined FUN_14423b830(void)

longlong * FUN_14423b830(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  if ((*(longlong *)(param_1 + 0x40) == param_3) &&
     (plVar3 = *(longlong **)(param_1 + 0x38), plVar3 != (longlong *)0x0)) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14423b83f;
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
    lVar6 = *(longlong *)(param_1 + 0x30) + 8;
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar6 = 0;
    }
    *param_2 = lVar6;
    param_2[1] = (longlong)plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  else {
LAB_14423b83f:
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 14423b8a2 FUN_14423b8a2 body=91 status=ok
// SIG undefined FUN_14423b8a2(void)

bool FUN_14423b8a2(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14423b8d2;
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
LAB_14423b8d2:
  return lVar6 == param_2;
}



// FUNCTION 14423b948 FUN_14423b948 body=29 status=ok
// SIG undefined FUN_14423b948(void)

undefined8 FUN_14423b948(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14423b966 FUN_14423b966 body=68 status=ok
// SIG undefined FUN_14423b966(void)

undefined8 * FUN_14423b966(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9a3080;
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



// FUNCTION 14423b9aa FUN_14423b9aa body=91 status=ok
// SIG undefined FUN_14423b9aa(void)

bool FUN_14423b9aa(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14423b9da;
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
LAB_14423b9da:
  return lVar6 == param_2;
}



// FUNCTION 14423ba22 FUN_14423ba22 body=68 status=ok
// SIG undefined FUN_14423ba22(void)

undefined8 * FUN_14423ba22(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9a30f0;
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



// FUNCTION 14423ba66 FUN_14423ba66 body=91 status=ok
// SIG undefined FUN_14423ba66(void)

bool FUN_14423ba66(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14423ba96;
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
LAB_14423ba96:
  return lVar6 == param_2;
}



// FUNCTION 14423bade FUN_14423bade body=262 status=ok
// SIG undefined FUN_14423bade(void)

void FUN_14423bade(longlong param_1,int param_2)

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



// FUNCTION 14423bbe4 FUN_14423bbe4 body=29 status=ok
// SIG undefined FUN_14423bbe4(void)

undefined8 FUN_14423bbe4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14423bc16 FUN_14423bc16 body=93 status=ok
// SIG undefined FUN_14423bc16(void)

void FUN_14423bc16(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a3160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14423bc74 FUN_14423bc74 body=93 status=ok
// SIG undefined FUN_14423bc74(void)

void FUN_14423bc74(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a3160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14423bcd2 FUN_14423bcd2 body=126 status=ok
// SIG undefined FUN_14423bcd2(void)

void FUN_14423bcd2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a3160;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014423bd41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14423bd5a FUN_14423bd5a body=20 status=ok
// SIG undefined FUN_14423bd5a(void)

undefined1 FUN_14423bd5a(longlong param_1)

{
  FUN_14423bd6e(param_1 + 0x18);
  return 1;
}



// FUNCTION 14423bd6e FUN_14423bd6e body=406 status=ok
// SIG undefined FUN_14423bd6e(void)

void FUN_14423bd6e(uint *param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  int local_30;
  undefined8 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0 ||
          (*(uint *)(lVar4 + 0x10) != param_1[1])))) ||
     (((*(uint *)(lVar4 + 8) & 0x10200000) != 0 || (*(longlong *)(param_1 + 2) == 0))))
  goto LAB_14423bed2;
  FUN_1400021e4(param_1 + 2,&local_48);
  puVar5 = local_48;
  if (local_40 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_38,L"UI.State.%s",puVar5);
  iVar2 = local_30 + -1;
  if (local_30 == 0) {
    iVar2 = 0;
  }
  FUN_1446f82e2(&local_28,iVar2,local_38,1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1400702d4(DAT_14caa8580,local_20,local_28,1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
LAB_14423bef0:
    lVar4 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         ((*(uint *)(plVar3 + 2) != param_1[1] || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0))))
      goto LAB_14423bef0;
      lVar4 = *plVar3;
    }
  }
  FUN_1403ca8ec(lVar4 + 0xd98,local_20);
LAB_14423bed2:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14423bf06 FUN_14423bf06 body=29 status=ok
// SIG undefined FUN_14423bf06(void)

undefined8 FUN_14423bf06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14423c0a2 FUN_14423c0a2 body=101 status=ok
// SIG undefined FUN_14423c0a2(void)

void FUN_14423c0a2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a32b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14423c108 FUN_14423c108 body=101 status=ok
// SIG undefined FUN_14423c108(void)

void FUN_14423c108(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a32b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14423c16e FUN_14423c16e body=134 status=ok
// SIG undefined FUN_14423c16e(void)

void FUN_14423c16e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a32b0;
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
                    /* WARNING: Could not recover jumptable at 0x00014423c1e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14423c204 FUN_14423c204 body=273 status=ok
// SIG undefined FUN_14423c204(void)

undefined8 FUN_14423c204(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14423c30f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14423c30f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14423c30f:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14423c2af;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148e08572(*(undefined8 *)(param_1 + 0x20),param_1 + 0x28);
      uVar6 = 1;
      goto LAB_14423c2af;
    }
  }
  uVar6 = 0;
LAB_14423c2af:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14423c339 FUN_14423c339 body=155 status=ok
// SIG undefined FUN_14423c339(void)

void FUN_14423c339(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar6 = 0;
  do {
    *(undefined8 *)(param_1 + lVar6) = *(undefined8 *)(param_2 + lVar6);
    lVar2 = *(longlong *)(param_2 + 8 + lVar6);
    *(longlong *)(param_1 + 8 + lVar6) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    lVar2 = param_1 + lVar6;
    lVar1 = param_2 + lVar6;
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
    *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar1 + 0x30);
    *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(lVar1 + 0x38);
    *(undefined8 *)(lVar2 + 0x40) = 0;
    puVar4 = (undefined8 *)(lVar1 + 0x48);
    puVar5 = (undefined8 *)(lVar2 + 0x48);
    for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)(lVar2 + 0x90) = *(undefined4 *)(lVar1 + 0x90);
    *(undefined1 *)(lVar2 + 0x94) = *(undefined1 *)(lVar1 + 0x94);
    lVar6 = lVar6 + 0x98;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14423c3d4 FUN_14423c3d4 body=29 status=ok
// SIG undefined FUN_14423c3d4(void)

undefined8 FUN_14423c3d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14423c570 FUN_14423c570 body=93 status=ok
// SIG undefined FUN_14423c570(void)

void FUN_14423c570(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a36d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14423c5ce FUN_14423c5ce body=93 status=ok
// SIG undefined FUN_14423c5ce(void)

void FUN_14423c5ce(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a36d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14423c62c FUN_14423c62c body=126 status=ok
// SIG undefined FUN_14423c62c(void)

void FUN_14423c62c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a36d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014423c69b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14423c6b4 FUN_14423c6b4 body=266 status=ok
// SIG undefined FUN_14423c6b4(void)

undefined8 FUN_14423c6b4(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14423c7b8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14423c7b8;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14423c7b8:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14423c76c;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144234222(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_14423c76c;
    }
  }
  uVar6 = 0;
LAB_14423c76c:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14423c7c0 FUN_14423c7c0 body=386 status=ok
// SIG undefined FUN_14423c7c0(void)

void FUN_14423c7c0(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar13 = iVar7 == iVar6;
      if (bVar13) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar13);
    lVar4 = *param_1;
    if (((((lVar4 != 0) && (*(int *)((longlong)param_1 + 0x14) != 0)) &&
         (uVar2 = *(uint *)(param_1 + 2), -1 < (int)uVar2)) &&
        ((((int)uVar2 < DAT_14c9647dc &&
          (plVar9 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar9 != (longlong *)0x0)) &&
         (((int)plVar9[2] == *(int *)((longlong)param_1 + 0x14) &&
          (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (lVar5 = *plVar9, lVar5 != 0)))))))) &&
       ((longlong)*(int *)(lVar4 + 0x238) != 0)) {
      lVar10 = *(longlong *)(lVar4 + 0x230);
      lVar8 = (longlong)*(int *)(lVar4 + 0x238) * 0x98;
      do {
        if ((*(int *)(lVar10 + 0x14) == 0) || (uVar2 = *(uint *)(lVar10 + 0x10), (int)uVar2 < 0)) {
LAB_14423c8e6:
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            plVar12 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((plVar12 == (longlong *)0x0) || ((int)plVar12[2] != *(int *)(lVar10 + 0x14))) ||
               ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) goto LAB_14423c8e6;
            lVar11 = *plVar12;
          }
        }
        if (lVar11 == lVar5) {
          if (lVar10 != 0) {
            lVar10 = 0;
            if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
              lVar10 = lVar5;
            }
            FUN_144235a5e(lVar4,lVar10,
                          CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),(char)param_1[6]));
          }
          break;
        }
        lVar10 = lVar10 + 0x98;
        lVar8 = lVar8 + -0x98;
      } while (lVar8 != 0);
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014423c931. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14423c942 FUN_14423c942 body=115 status=ok
// SIG undefined FUN_14423c942(void)

undefined8 * FUN_14423c942(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14b9a3740;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar2[6] = 0;
  *(undefined1 *)(puVar2 + 7) = *(undefined1 *)(param_1 + 0x38);
  return puVar2 + 1;
}



// FUNCTION 14423c9bc FUN_14423c9bc body=29 status=ok
// SIG undefined FUN_14423c9bc(void)

void FUN_14423c9bc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14423c9da FUN_14423c9da body=64 status=ok
// SIG undefined FUN_14423c9da(void)

undefined8 * FUN_14423c9da(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9a3740;
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 14423ca1a FUN_14423ca1a body=430 status=ok
// SIG undefined FUN_14423ca1a(void)

void FUN_14423ca1a(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar13 = iVar7 == iVar6;
      if (bVar13) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar13);
    lVar4 = *param_1;
    if (((((lVar4 != 0) && (*(int *)((longlong)param_1 + 0x14) != 0)) &&
         (uVar2 = *(uint *)(param_1 + 2), -1 < (int)uVar2)) &&
        ((((int)uVar2 < DAT_14c9647dc &&
          (plVar8 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar8 != (longlong *)0x0)) &&
         (((int)plVar8[2] == *(int *)((longlong)param_1 + 0x14) &&
          (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar5 = *plVar8, lVar5 != 0)))))))) &&
       ((longlong)*(int *)(lVar4 + 0x238) != 0)) {
      lVar10 = *(longlong *)(lVar4 + 0x230);
      lVar9 = (longlong)*(int *)(lVar4 + 0x238) * 0x98;
      do {
        if ((*(int *)(lVar10 + 0x14) == 0) || (uVar2 = *(uint *)(lVar10 + 0x10), (int)uVar2 < 0)) {
LAB_14423cb3f:
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            plVar12 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((plVar12 == (longlong *)0x0) || ((int)plVar12[2] != *(int *)(lVar10 + 0x14))) ||
               ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) goto LAB_14423cb3f;
            lVar11 = *plVar12;
          }
        }
        if (lVar11 == lVar5) {
          if (lVar10 != 0) {
            lVar10 = 0;
            if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
              lVar10 = lVar5;
            }
            FUN_145aa490a(lVar4,lVar10);
          }
          break;
        }
        lVar10 = lVar10 + 0x98;
        lVar9 = lVar9 + -0x98;
      } while (lVar9 != 0);
    }
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014423cb6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14423cbc8 FUN_14423cbc8 body=87 status=ok
// SIG undefined FUN_14423cbc8(void)

undefined8 * FUN_14423cbc8(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14b9a3760;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  puVar3[4] = uVar2;
  return puVar3 + 1;
}



// FUNCTION 14423cc26 FUN_14423cc26 body=29 status=ok
// SIG undefined FUN_14423cc26(void)

void FUN_14423cc26(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14423cc44 FUN_14423cc44 body=64 status=ok
// SIG undefined FUN_14423cc44(void)

undefined8 * FUN_14423cc44(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9a3760;
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 14423cc84 FUN_14423cc84 body=29 status=ok
// SIG undefined FUN_14423cc84(void)

undefined8 FUN_14423cc84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14423ce20 FUN_14423ce20 body=93 status=ok
// SIG undefined FUN_14423ce20(void)

void FUN_14423ce20(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a3780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14423ce7e FUN_14423ce7e body=93 status=ok
// SIG undefined FUN_14423ce7e(void)

void FUN_14423ce7e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a3780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14423cedc FUN_14423cedc body=126 status=ok
// SIG undefined FUN_14423cedc(void)

void FUN_14423cedc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a3780;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014423cf4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14423cf64 FUN_14423cf64 body=266 status=ok
// SIG undefined FUN_14423cf64(void)

undefined8 FUN_14423cf64(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14423d068;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14423d068;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14423d068:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14423d01c;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1442377ae(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_14423d01c;
    }
  }
  uVar6 = 0;
LAB_14423d01c:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14423d070 FUN_14423d070 body=29 status=ok
// SIG undefined FUN_14423d070(void)

undefined8 FUN_14423d070(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14423d20c FUN_14423d20c body=93 status=ok
// SIG undefined FUN_14423d20c(void)

void FUN_14423d20c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a37f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}


