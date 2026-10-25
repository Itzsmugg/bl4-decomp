// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14780ab72 FUN_14780ab72 body=213 status=ok
// SIG undefined FUN_14780ab72(void)

ulonglong FUN_14780ab72(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  longlong *plVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar5 = 0;
  }
  else {
    plVar6 = (longlong *)(param_1 + 0x30);
    lVar3 = *(longlong *)*plVar6;
    plVar4 = (longlong *)((longlong *)*plVar6)[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar3 != 0);
    if (lVar3 != 0) {
      FUN_14780b0a0(plVar6,0);
      FUN_14780b116(plVar6);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)param_2[1];
      *param_2 = lVar3;
      param_2[1] = (longlong)plVar4;
      if (plVar6 != (longlong *)0x0) {
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar5 & 0xffffffff;
}



// FUNCTION 14780ac48 FUN_14780ac48 body=180 status=ok
// SIG undefined FUN_14780ac48(void)

ulonglong FUN_14780ac48(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (*(int *)(param_1 + 0x38) == 0) {
LAB_14780acc4:
    uVar6 = 0;
    goto LAB_14780acc6;
  }
  lVar3 = **(longlong **)(param_1 + 0x30);
  plVar4 = (longlong *)(*(longlong **)(param_1 + 0x30))[1];
  if (plVar4 == (longlong *)0x0) {
    if (lVar3 == 0) goto LAB_14780acc4;
LAB_14780ac87:
    plVar5 = (longlong *)param_2[1];
    *param_2 = lVar3;
    param_2[1] = (longlong)plVar4;
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
    uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if (plVar4 == (longlong *)0x0) goto LAB_14780acc6;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (lVar3 != 0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      goto LAB_14780ac87;
    }
    uVar6 = 0;
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_14780acc6:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar6 & 0xffffffff;
}



// FUNCTION 14780acfc FUN_14780acfc body=347 status=ok
// SIG undefined FUN_14780acfc(void)

ulonglong FUN_14780acfc(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar7 = *(int *)(param_1 + 0x38);
  if (iVar7 == 0) {
    uVar9 = 0;
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0x30);
    lVar3 = *plVar8;
    plVar4 = (longlong *)plVar8[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar7 = *(int *)(param_1 + 0x38);
      plVar8 = *(longlong **)(param_1 + 0x30);
    }
    lVar5 = plVar8[(longlong)(iVar7 + -1) * 2];
    plVar8 = (longlong *)plVar8[(longlong)(iVar7 + -1) * 2 + 1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),lVar5 != 0 && lVar3 != 0);
    if (lVar5 != 0 && lVar3 != 0) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)param_2[1];
      *param_2 = lVar3;
      param_2[1] = (longlong)plVar4;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)param_3[1];
      *param_3 = lVar5;
      param_3[1] = (longlong)plVar8;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar4 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar9 & 0xffffffff;
}



// FUNCTION 14780ae58 FUN_14780ae58 body=312 status=ok
// SIG undefined FUN_14780ae58(void)

void FUN_14780ae58(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [40];
  longlong local_80;
  LPCRITICAL_SECTION local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(local_78);
  local_80 = (longlong)*(int *)(param_1 + 0x38);
  if (0 < local_80) {
    local_80 = local_80 << 4;
    lVar8 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x60))(plVar2,&local_58);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar8);
        (**(code **)(*plVar2 + 0x20))(plVar2,&local_60);
        uVar6 = local_50;
        lVar9 = local_60 + local_58;
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar8);
        (**(code **)(*plVar2 + 0x60))(plVar2,&local_70);
        uVar5 = local_68;
        uVar4 = local_70;
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_147808ba8(param_2,iVar1);
        }
        lVar3 = *param_2;
        lVar7 = (longlong)iVar1 * 0x30;
        *(undefined1 *)(lVar3 + lVar7) = 1;
        *(undefined8 *)(lVar3 + 8 + lVar7) = uVar4;
        *(undefined8 *)(lVar3 + 0x10 + lVar7) = uVar5;
        *(undefined1 *)(lVar3 + 0x18 + lVar7) = 0;
        *(longlong *)(lVar3 + 0x20 + lVar7) = lVar9;
        *(undefined8 *)(lVar3 + 0x28 + lVar7) = uVar6;
      }
      lVar8 = lVar8 + 0x10;
    } while (local_80 != lVar8);
  }
  LeaveCriticalSection(local_78);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14780af92 FUN_14780af92 body=84 status=ok
// SIG undefined FUN_14780af92(void)

ulonglong FUN_14780af92(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((*(int *)(param_1 + 0x38) == 0) ||
     (puVar1 = (undefined8 *)(param_1 + 0x30), *(longlong *)*puVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    FUN_14780b0a0(puVar1,0);
    FUN_14780b116(puVar1);
    uVar2 = CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar2 & 0xffffffff;
}



// FUNCTION 14780afe6 FUN_14780afe6 body=45 status=ok
// SIG undefined FUN_14780afe6(void)

longlong FUN_14780afe6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_147805aa0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14780b01a FUN_14780b01a body=132 status=ok
// SIG undefined FUN_14780b01a(void)

void FUN_14780b01a(longlong param_1,int param_2)

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



// FUNCTION 14780b0a0 FUN_14780b0a0 body=118 status=ok
// SIG undefined FUN_14780b0a0(void)

void FUN_14780b0a0(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 14780b116 FUN_14780b116 body=63 status=ok
// SIG undefined FUN_14780b116(void)

void FUN_14780b116(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14780b156(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14780b156 FUN_14780b156 body=97 status=ok
// SIG undefined FUN_14780b156(void)

ulonglong FUN_14780b156(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14780b1b7 FUN_14780b1b7 body=73 status=ok
// SIG undefined FUN_14780b1b7(void)

void FUN_14780b1b7(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14780b200 FUN_14780b200 body=73 status=ok
// SIG undefined FUN_14780b200(void)

void FUN_14780b200(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14780b249 FUN_14780b249 body=73 status=ok
// SIG undefined FUN_14780b249(void)

void FUN_14780b249(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14780b292 FUN_14780b292 body=96 status=ok
// SIG undefined FUN_14780b292(void)

void FUN_14780b292(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14780b2f2 FUN_14780b2f2 body=96 status=ok
// SIG undefined FUN_14780b2f2(void)

void FUN_14780b2f2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14780b352 FUN_14780b352 body=96 status=ok
// SIG undefined FUN_14780b352(void)

void FUN_14780b352(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14780b3b2 FUN_14780b3b2 body=391 status=ok
// SIG undefined FUN_14780b3b2(void)

void FUN_14780b3b2(longlong param_1,longlong param_2,char param_3,int *param_4,int *param_5,
                  int *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_d8 [47];
  char local_a9;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [8];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_4 = -1;
  *param_5 = -1;
  *param_6 = 0;
  iVar1 = *(int *)(param_1 + 0x58);
  local_a9 = param_3;
  local_a8 = param_1;
  if (0 < (longlong)iVar1) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(local_a8 + 0x50);
      (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x60))(*(longlong **)(lVar2 + lVar6),&local_88);
      (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x20))(*(longlong **)(lVar2 + lVar6),&local_90);
      lVar3 = local_80;
      lVar7 = local_90 + local_88;
      (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x60))(*(longlong **)(lVar2 + lVar6),&local_a0);
      local_78[0] = 1;
      local_70 = local_a0;
      uStack_6c = uStack_9c;
      uStack_68 = uStack_98;
      uStack_64 = uStack_94;
      local_60 = 0;
      local_50 = lVar3;
      local_58 = lVar7;
      cVar4 = FUN_147805044(param_2,local_78);
      if (cVar4 == '\0') {
        if (local_a9 == '\0') {
          if ((*(longlong *)(param_2 + 0x28) < CONCAT44(uStack_64,uStack_68)) ||
             ((CONCAT44(uStack_64,uStack_68) == *(longlong *)(param_2 + 0x28) &&
              (*(longlong *)(param_2 + 0x20) <= CONCAT44(uStack_6c,local_70))))) break;
        }
        else if ((local_50 < *(longlong *)(param_2 + 0x10)) ||
                ((local_50 == *(longlong *)(param_2 + 0x10) &&
                 (local_58 <= *(longlong *)(param_2 + 8))))) break;
        if (-1 < *param_4) goto LAB_14780b4e4;
        *param_6 = *param_6 + 1;
      }
      else {
        if (*param_4 < 0) {
          *param_4 = (int)lVar5;
        }
LAB_14780b4e4:
        *param_5 = (int)lVar5;
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar1 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14780b53a FUN_14780b53a body=95 status=ok
// SIG undefined FUN_14780b53a(void)

void FUN_14780b53a(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_14780b249(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14780b59a FUN_14780b59a body=95 status=ok
// SIG undefined FUN_14780b59a(void)

void FUN_14780b59a(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_14780b1b7(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14780b5fa FUN_14780b5fa body=95 status=ok
// SIG undefined FUN_14780b5fa(void)

void FUN_14780b5fa(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_14780b200(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14780b65a FUN_14780b65a body=34 status=ok
// SIG undefined FUN_14780b65a(void)

void FUN_14780b65a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a58a9e0;
  return;
}



// FUNCTION 14780b67c FUN_14780b67c body=31 status=ok
// SIG undefined FUN_14780b67c(void)

undefined8 FUN_14780b67c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14780b6b8 FUN_14780b6b8 body=93 status=ok
// SIG undefined FUN_14780b6b8(void)

void FUN_14780b6b8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a58a970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14780b716 FUN_14780b716 body=126 status=ok
// SIG undefined FUN_14780b716(void)

void FUN_14780b716(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a58a970;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014780b785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14780b7a0 FUN_14780b7a0 body=21 status=ok
// SIG undefined FUN_14780b7a0(void)

undefined8 FUN_14780b7a0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14780b7b6 FUN_14780b7b6 body=29 status=ok
// SIG undefined FUN_14780b7b6(void)

undefined8 FUN_14780b7b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14780b7dc FUN_14780b7dc body=184 status=ok
// SIG undefined FUN_14780b7dc(void)

bool FUN_14780b7dc(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_78 [32];
  int *local_58;
  undefined1 *local_50;
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  local_50 = local_3c;
  local_58 = &local_38;
  FUN_14780b3b2(param_1,param_2,param_3,&local_34);
  if ((-1 < local_34) && (local_38 - local_34 != -1)) {
    FUN_14780b53a(param_1 + 0x50,local_34);
    FUN_14780b116(param_1 + 0x50);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return -1 < local_34;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780b896 FUN_14780b896 body=184 status=ok
// SIG undefined FUN_14780b896(void)

bool FUN_14780b896(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_78 [32];
  int *local_58;
  undefined1 *local_50;
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  local_50 = local_3c;
  local_58 = &local_38;
  FUN_14780b950(param_1,param_2,param_3,&local_34);
  if ((-1 < local_34) && (local_38 - local_34 != -1)) {
    FUN_14780bad8(param_1 + 0x50,local_34);
    FUN_147808b06(param_1 + 0x50);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return -1 < local_34;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780b950 FUN_14780b950 body=391 status=ok
// SIG undefined FUN_14780b950(void)

void FUN_14780b950(longlong param_1,longlong param_2,char param_3,int *param_4,int *param_5,
                  int *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_d8 [47];
  char local_a9;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [8];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_4 = -1;
  *param_5 = -1;
  *param_6 = 0;
  iVar1 = *(int *)(param_1 + 0x58);
  local_a9 = param_3;
  local_a8 = param_1;
  if (0 < (longlong)iVar1) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(local_a8 + 0x50);
      (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x30))(*(longlong **)(lVar2 + lVar6),&local_88);
      (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x10))(*(longlong **)(lVar2 + lVar6),&local_90);
      lVar3 = local_80;
      lVar7 = local_90 + local_88;
      (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x30))(*(longlong **)(lVar2 + lVar6),&local_a0);
      local_78[0] = 1;
      local_70 = local_a0;
      uStack_6c = uStack_9c;
      uStack_68 = uStack_98;
      uStack_64 = uStack_94;
      local_60 = 0;
      local_50 = lVar3;
      local_58 = lVar7;
      cVar4 = FUN_147805044(param_2,local_78);
      if (cVar4 == '\0') {
        if (local_a9 == '\0') {
          if ((*(longlong *)(param_2 + 0x28) < CONCAT44(uStack_64,uStack_68)) ||
             ((CONCAT44(uStack_64,uStack_68) == *(longlong *)(param_2 + 0x28) &&
              (*(longlong *)(param_2 + 0x20) <= CONCAT44(uStack_6c,local_70))))) break;
        }
        else if ((local_50 < *(longlong *)(param_2 + 0x10)) ||
                ((local_50 == *(longlong *)(param_2 + 0x10) &&
                 (local_58 <= *(longlong *)(param_2 + 8))))) break;
        if (-1 < *param_4) goto LAB_14780ba82;
        *param_6 = *param_6 + 1;
      }
      else {
        if (*param_4 < 0) {
          *param_4 = (int)lVar5;
        }
LAB_14780ba82:
        *param_5 = (int)lVar5;
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar1 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14780bad8 FUN_14780bad8 body=95 status=ok
// SIG undefined FUN_14780bad8(void)

void FUN_14780bad8(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_147808960(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14780bb38 FUN_14780bb38 body=184 status=ok
// SIG undefined FUN_14780bb38(void)

bool FUN_14780bb38(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_78 [32];
  int *local_58;
  undefined1 *local_50;
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  local_50 = local_3c;
  local_58 = &local_38;
  FUN_14780bbf2(param_1,param_2,param_3,&local_34);
  if ((-1 < local_34) && (local_38 - local_34 != -1)) {
    FUN_14780b59a(param_1 + 0x50,local_34);
    FUN_14780a2da(param_1 + 0x50);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return -1 < local_34;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780bbf2 FUN_14780bbf2 body=390 status=ok
// SIG undefined FUN_14780bbf2(void)

void FUN_14780bbf2(longlong param_1,longlong param_2,char param_3,int *param_4,int *param_5,
                  int *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_d8 [47];
  char local_a9;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [8];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_4 = -1;
  *param_5 = -1;
  *param_6 = 0;
  iVar1 = *(int *)(param_1 + 0x58);
  local_a9 = param_3;
  local_a8 = param_1;
  if (0 < (longlong)iVar1) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(local_a8 + 0x50);
      (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x18))(*(longlong **)(lVar2 + lVar6),&local_88);
      (**(code **)**(undefined8 **)(lVar2 + lVar6))(*(undefined8 **)(lVar2 + lVar6),&local_90);
      lVar3 = local_80;
      lVar7 = local_90 + local_88;
      (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x18))(*(longlong **)(lVar2 + lVar6),&local_a0);
      local_78[0] = 1;
      local_70 = local_a0;
      uStack_6c = uStack_9c;
      uStack_68 = uStack_98;
      uStack_64 = uStack_94;
      local_60 = 0;
      local_50 = lVar3;
      local_58 = lVar7;
      cVar4 = FUN_147805044(param_2,local_78);
      if (cVar4 == '\0') {
        if (local_a9 == '\0') {
          if ((*(longlong *)(param_2 + 0x28) < CONCAT44(uStack_64,uStack_68)) ||
             ((CONCAT44(uStack_64,uStack_68) == *(longlong *)(param_2 + 0x28) &&
              (*(longlong *)(param_2 + 0x20) <= CONCAT44(uStack_6c,local_70))))) break;
        }
        else if ((local_50 < *(longlong *)(param_2 + 0x10)) ||
                ((local_50 == *(longlong *)(param_2 + 0x10) &&
                 (local_58 <= *(longlong *)(param_2 + 8))))) break;
        if (-1 < *param_4) goto LAB_14780bd23;
        *param_6 = *param_6 + 1;
      }
      else {
        if (*param_4 < 0) {
          *param_4 = (int)lVar5;
        }
LAB_14780bd23:
        *param_5 = (int)lVar5;
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar1 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14780bd7a FUN_14780bd7a body=184 status=ok
// SIG undefined FUN_14780bd7a(void)

bool FUN_14780bd7a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_78 [32];
  int *local_58;
  undefined1 *local_50;
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  local_50 = local_3c;
  local_58 = &local_38;
  FUN_14780be34(param_1,param_2,param_3,&local_34);
  if ((-1 < local_34) && (local_38 - local_34 != -1)) {
    FUN_14780b5fa(param_1 + 0x50,local_34);
    FUN_14780a9ec(param_1 + 0x50);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return -1 < local_34;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780be34 FUN_14780be34 body=391 status=ok
// SIG undefined FUN_14780be34(void)

void FUN_14780be34(longlong param_1,longlong param_2,char param_3,int *param_4,int *param_5,
                  int *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_d8 [47];
  char local_a9;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [8];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_4 = -1;
  *param_5 = -1;
  *param_6 = 0;
  iVar1 = *(int *)(param_1 + 0x58);
  local_a9 = param_3;
  local_a8 = param_1;
  if (0 < (longlong)iVar1) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(local_a8 + 0x50);
      (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x18))(*(longlong **)(lVar2 + lVar6),&local_88);
      (**(code **)(**(longlong **)(lVar2 + lVar6) + 8))(*(longlong **)(lVar2 + lVar6),&local_90);
      lVar3 = local_80;
      lVar7 = local_90 + local_88;
      (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x18))(*(longlong **)(lVar2 + lVar6),&local_a0);
      local_78[0] = 1;
      local_70 = local_a0;
      uStack_6c = uStack_9c;
      uStack_68 = uStack_98;
      uStack_64 = uStack_94;
      local_60 = 0;
      local_50 = lVar3;
      local_58 = lVar7;
      cVar4 = FUN_147805044(param_2,local_78);
      if (cVar4 == '\0') {
        if (local_a9 == '\0') {
          if ((*(longlong *)(param_2 + 0x28) < CONCAT44(uStack_64,uStack_68)) ||
             ((CONCAT44(uStack_64,uStack_68) == *(longlong *)(param_2 + 0x28) &&
              (*(longlong *)(param_2 + 0x20) <= CONCAT44(uStack_6c,local_70))))) break;
        }
        else if ((local_50 < *(longlong *)(param_2 + 0x10)) ||
                ((local_50 == *(longlong *)(param_2 + 0x10) &&
                 (local_58 <= *(longlong *)(param_2 + 8))))) break;
        if (-1 < *param_4) goto LAB_14780bf66;
        *param_6 = *param_6 + 1;
      }
      else {
        if (*param_4 < 0) {
          *param_4 = (int)lVar5;
        }
LAB_14780bf66:
        *param_5 = (int)lVar5;
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar1 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14780c010 FUN_14780c010 body=45 status=ok
// SIG undefined FUN_14780c010(void)

void FUN_14780c010(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14479d2ce(param_1 + 400);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14780c03e FUN_14780c03e body=12 status=ok
// SIG undefined FUN_14780c03e(void)

void FUN_14780c03e(longlong param_1)

{
  FUN_14479d2ce(param_1 + 400);
  return;
}



// FUNCTION 14780c07e FUN_14780c07e body=168 status=ok
// SIG undefined FUN_14780c07e(void)

void FUN_14780c07e(longlong param_1,longlong param_2)

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
  FUN_14485c47a(param_1 + 400,local_20);
  FUN_141571642(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780c128 FUN_14780c128 body=33 status=ok
// SIG undefined FUN_14780c128(void)

void FUN_14780c128(longlong param_1)

{
  FUN_14485c47a(param_1 + 400);
  FUN_141571642(param_1);
  return;
}



// FUNCTION 14780c184 FUN_14780c184 body=75 status=ok
// SIG undefined FUN_14780c184(void)

void FUN_14780c184(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14780c1d0(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780c1d0 FUN_14780c1d0 body=214 status=ok
// SIG undefined FUN_14780c1d0(void)

void FUN_14780c1d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  switchD_143c3d4dc::caseD_21();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3906c);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e393d0);
  FUN_1448332aa(param_2,&DAT_149e393d0);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3906c);
  if ((iVar1 < 1) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_14021219d(param_2,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38[2] ^ (ulonglong)auStack_58);
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014780c2a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x80);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780c2b8 FUN_14780c2b8 body=418 status=ok
// SIG undefined FUN_14780c2b8(void)

void FUN_14780c2b8(longlong *param_1,undefined8 param_2)

{
  void *_Src;
  char cVar1;
  wchar_t *pwVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_40);
  if (1 < local_38) {
    FUN_1446ddc76(&local_68,&DAT_14a58c048,1);
    _Src = local_40;
    local_60 = local_68;
    local_58 = (void *)0x0;
    local_50 = local_38;
    if ((longlong)local_38 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_38,0);
      memcpy(local_58,_Src,(longlong)local_38 * 2);
    }
    local_48 = 1;
    FUN_1407c67d8(param_2);
  }
  cVar1 = (**(code **)(*param_1 + 0x2a8))(param_1);
  pwVar2 = L"False";
  if (cVar1 != '\0') {
    pwVar2 = L"True";
  }
  FUN_140056680(&local_98,pwVar2);
  FUN_1446ddc76(&local_a0,"Validate",1);
  local_88 = local_a0;
  local_80 = local_98;
  uStack_78 = uStack_90;
  local_98 = 0;
  uStack_90 = 0;
  local_70 = 1;
  FUN_1407c67d8(param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1427dc336(local_a8,param_2);
  switchD_143c3d4dc::caseD_3d(param_1,local_a8);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780c462 FUN_14780c462 body=68 status=ok
// SIG undefined FUN_14780c462(void)

void FUN_14780c462(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780c4b4 FUN_14780c4b4 body=171 status=ok
// SIG undefined FUN_14780c4b4(void)

void FUN_14780c4b4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14780c560(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780c560 FUN_14780c560 body=415 status=ok
// SIG undefined FUN_14780c560(void)

void FUN_14780c560(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50;
  undefined8 uStack_48;
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a7e010(param_1 + 0xa0);
  if ((*(int *)(param_2 + 8) < 2) ||
     (cVar1 = FUN_144a791f8(param_2,&DAT_149e32c52,2,1), cVar1 != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  FUN_1401aea18(&local_30,param_2);
  FUN_1410f2562(&local_50);
  FUN_140aa5ef8(&local_40,&local_50);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  iVar3 = local_38 + -1;
  puVar2 = local_40;
  if (local_38 == 0) {
    puVar2 = &DAT_149dfb77a;
    iVar3 = 0;
  }
  cVar1 = FUN_144a791f8(&local_30,puVar2,iVar3,1);
  if (cVar1 != '\0') {
    puVar2 = local_40;
    if (local_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_14107002a(&local_30,puVar2);
    FUN_140056680(local_60,&DAT_149e32c52);
    FUN_144a7dea0(&local_50,local_60,&local_30);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    local_30 = local_50;
    uStack_28 = uStack_48;
    local_50 = 0;
    uStack_48 = 0;
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  iVar3 = (int)uStack_28 + -1;
  if ((int)uStack_28 == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(param_1 + 0x88,local_30,iVar3);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780c71e FUN_14780c71e body=97 status=ok
// SIG undefined FUN_14780c71e(void)

undefined8 * FUN_14780c71e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  FUN_14780c780();
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xa8);
  _Src = *(void **)(param_1 + 0xa0);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 14780c780 FUN_14780c780 body=974 status=ok
// SIG undefined FUN_14780c780(void)

void FUN_14780c780(longlong param_1)

{
  undefined8 **ppuVar1;
  void *pvVar2;
  char cVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_a8 [32];
  void *local_88;
  int local_80;
  void *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined8 local_60;
  void *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0xa8) < 2) {
    ppuVar1 = (undefined8 **)(param_1 + 0xa0);
    iVar5 = *(int *)(param_1 + 0x90);
    pvVar2 = *(void **)(param_1 + 0x88);
    *(int *)(param_1 + 0xa8) = iVar5;
    if (iVar5 == 0 && *(int *)(param_1 + 0xac) == 0) {
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
    else {
      FUN_1446dd670(ppuVar1,iVar5);
      if (iVar5 != 0) {
        memcpy(*ppuVar1,pvVar2,(longlong)iVar5 * 2);
      }
    }
    cVar3 = FUN_1401aeb9c(param_1 + 0x88);
    if (cVar3 != '\0') {
      cVar3 = FUN_144a791f8(ppuVar1,&DAT_149e32c52,2,1);
      if (cVar3 != '\0') {
        FUN_144a49bb4(param_1 + 0x88,&local_78,2);
        FUN_1410f2562();
        local_58 = local_88;
        iStack_50 = local_80 + -1;
        if (local_80 == 0) {
          iStack_50 = 0;
        }
        local_48 = local_78;
        local_40 = iStack_70 + -1;
        if (iStack_70 == 0) {
          local_40 = 0;
        }
        FUN_140bee87a(&local_68,&local_58,2);
        if (ppuVar1 == &local_68) {
          if (local_68 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*ppuVar1 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          *(undefined8 **)(param_1 + 0xa0) = local_68;
          local_68 = (undefined8 *)0x0;
          *(int *)(param_1 + 0xa8) = (int)local_60;
          *(undefined4 *)(param_1 + 0xac) = local_60._4_4_;
          local_60 = 0;
        }
        if (local_88 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
        FUN_1401aea18(&local_58,ppuVar1);
        cVar3 = FUN_1415258a0(&local_58);
        if (cVar3 != '\0') {
          iVar5 = iStack_50 + -1;
          if (iStack_50 == 0) {
            iVar5 = 0;
          }
          FUN_1402980a2(ppuVar1,local_58,iVar5);
        }
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (cVar3 != '\0') goto LAB_14780cb06;
      }
      FUN_14597eae4(&local_68);
      local_78 = (void *)0x0;
      iStack_70 = *(int *)(param_1 + 0xa8);
      lVar7 = (longlong)iStack_70;
      pvVar2 = *(void **)(param_1 + 0xa0);
      if (lVar7 == 0) {
        uStack_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iStack_70,0);
        memcpy(local_78,pvVar2,lVar7 * 2);
      }
      puVar4 = (undefined8 *)FUN_1401aecd6();
      iVar5 = 0;
      if (*(int *)(puVar4 + 1) == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*puVar4;
        iVar5 = *(int *)(puVar4 + 1) + -1;
      }
      cVar3 = FUN_144a791f8(ppuVar1,puVar6,iVar5,1);
      if (cVar3 != '\0') {
        lVar7 = FUN_1401aecd6();
        iVar5 = *(int *)(lVar7 + 8) + -1;
        if (*(int *)(lVar7 + 8) == 0) {
          iVar5 = 0;
        }
        FUN_144a49bb4(ppuVar1,&local_58,iVar5);
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_78 = local_58;
        iStack_70 = iStack_50;
        uStack_6c = uStack_4c;
      }
      if ((longlong)(int)local_60 != 0) {
        puVar8 = local_68 + (longlong)(int)local_60 * 2;
        puVar4 = local_68;
        do {
          local_58 = (void *)*puVar4;
          iStack_50 = *(int *)(puVar4 + 1) + -1;
          if (*(int *)(puVar4 + 1) == 0) {
            iStack_50 = 0;
          }
          local_48 = local_78;
          local_40 = iStack_70 + -1;
          if (iStack_70 == 0) {
            local_40 = 0;
          }
          FUN_140bee87a(&local_88,&local_58,2);
          FUN_140aa5ef8(&local_58,&local_88);
          if (local_88 != (void *)0x0) {
            FUN_1400020a8();
          }
          cVar3 = FUN_1415258a0(&local_58);
          if (cVar3 != '\0') {
            iVar5 = iStack_50 + -1;
            if (iStack_50 == 0) {
              iVar5 = 0;
            }
            FUN_1402980a2(ppuVar1,local_58,iVar5);
          }
          if (local_58 != (void *)0x0) {
            FUN_1400020a8();
          }
          puVar4 = puVar4 + 2;
        } while (puVar4 != puVar8);
      }
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
      FUN_1447a1747(local_68,local_60 & 0xffffffff);
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14780cb06:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14780cb50 FUN_14780cb50 body=63 status=ok
// SIG undefined FUN_14780cb50(void)

ulonglong FUN_14780cb50(longlong param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 unaff_RBX;
  
  if (*param_2 == DAT_14cabc1d0) {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(undefined1 *)(param_1 + 0x70));
  }
  else {
    uVar2 = (ulonglong)param_3;
    piVar1 = (int *)FUN_147813c5c(param_1 + -0x28);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 2)) {
      uVar2 = FUN_146918d3a(piVar1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 14780cb90 FUN_14780cb90 body=48 status=ok
// SIG undefined FUN_14780cb90(void)

ulonglong FUN_14780cb90(longlong param_1,undefined8 param_2,uint param_3)

{
  int *piVar1;
  ulonglong uVar2;
  
  piVar1 = (int *)FUN_147813c5c(param_1 + -0x28);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 2)) {
    uVar2 = FUN_146918d3a(piVar1);
    return uVar2;
  }
  return (ulonglong)param_3;
}



// FUNCTION 14780cbd4 FUN_14780cbd4 body=132 status=ok
// SIG undefined FUN_14780cbd4(void)

undefined8 FUN_14780cbd4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar3 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        bVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar6 * 0x28) == lVar1;
        uVar4 = CONCAT71((int7)(int3)((uint)iVar6 >> 8),bVar7);
        if (bVar7) {
          return uVar4;
        }
        iVar6 = *(int *)(*(longlong *)(param_1 + 8) + (longlong)iVar6 * 0x28 + 0x20);
      } while (iVar6 != -1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 14780cc58 FUN_14780cc58 body=133 status=ok
// SIG undefined FUN_14780cc58(void)

undefined8 FUN_14780cc58(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14780c71e(param_1,local_30);
  FUN_140056680(local_40,L"file://");
  FUN_1401c7f3e(param_2,local_40,local_30);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780ccde FUN_14780ccde body=33 status=ok
// SIG undefined FUN_14780ccde(void)

void FUN_14780ccde(longlong param_1)

{
  FUN_14780c780();
  FUN_1415258a0(param_1 + 0xa0);
  return;
}



// FUNCTION 14780cd1c FUN_14780cd1c body=8 status=ok
// SIG undefined FUN_14780cd1c(void)

undefined8 FUN_14780cd1c(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



// FUNCTION 14780cd42 FUN_14780cd42 body=89 status=ok
// SIG undefined FUN_14780cd42(void)

void FUN_14780cd42(longlong param_1)

{
  longlong lVar1;
  
  FUN_144a3ee64();
  if ((*(longlong *)(param_1 + 0x118) != 0) && (lVar1 = *(longlong *)(param_1 + 0x110), lVar1 != 0))
  {
    FUN_14485c47a(lVar1 + 400);
    FUN_141571642(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00014780cd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0x318))();
    return;
  }
  return;
}



// FUNCTION 14780cd9b FUN_14780cd9b body=96 status=ok
// SIG undefined FUN_14780cd9b(void)

void FUN_14780cd9b(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a787a6(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780cdfc FUN_14780cdfc body=96 status=ok
// SIG undefined FUN_14780cdfc(void)

void FUN_14780cdfc(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a787a6(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780ce66 FUN_14780ce66 body=44 status=ok
// SIG undefined FUN_14780ce66(void)

void FUN_14780ce66(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477fe924(*(undefined8 *)(param_1 + 0x130));
  *param_3 = uVar1;
  return;
}



// FUNCTION 14780ce98 FUN_14780ce98 body=163 status=ok
// SIG undefined FUN_14780ce98(void)

void FUN_14780ce98(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_14336d9c2(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780cf42 FUN_14780cf42 body=178 status=ok
// SIG undefined FUN_14780cf42(void)

void FUN_14780cf42(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14336da58(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780cff6 FUN_14780cff6 body=69 status=ok
// SIG undefined FUN_14780cff6(void)

void FUN_14780cff6(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14156ba50(*(undefined8 *)(param_1 + 0x130));
  FUN_147810686(param_1,0);
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x150) = 0;
  return;
}



// FUNCTION 14780d03c FUN_14780d03c body=246 status=ok
// SIG undefined FUN_14780d03c(void)

void FUN_14780d03c(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1477fed04(*(undefined8 *)(param_1 + 0x130),local_24,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780d134 FUN_14780d134 body=246 status=ok
// SIG undefined FUN_14780d134(void)

void FUN_14780d134(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1477fedda(*(undefined8 *)(param_1 + 0x130),local_24,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780d22c FUN_14780d22c body=322 status=ok
// SIG undefined FUN_14780d22c(void)

void FUN_14780d22c(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_1477fee3e(*(undefined8 *)(param_1 + 0x130),&local_38,local_24,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780d390 FUN_14780d390 body=107 status=ok
// SIG undefined FUN_14780d390(void)

void FUN_14780d390(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477ff53c(*(undefined8 *)(param_1 + 0x130),local_28);
  lVar1 = 0;
  if (!SBORROW8(0,local_28[0])) {
    lVar1 = local_28[0];
  }
  *param_3 = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48,-local_28[0]);
}



// FUNCTION 14780d3fc FUN_14780d3fc body=38 status=ok
// SIG undefined FUN_14780d3fc(void)

void FUN_14780d3fc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14780d422();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14780d422 FUN_14780d422 body=111 status=ok
// SIG undefined FUN_14780d422(void)

longlong FUN_14780d422(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_147810eee(DAT_14c951640);
  if (lVar1 != 0) {
    FUN_1477ff53c(*(undefined8 *)(param_1 + 0x130),&local_28);
    *(undefined8 *)(lVar1 + 0x28) = local_28;
    *(undefined8 *)(lVar1 + 0x30) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780d492 FUN_14780d492 body=95 status=ok
// SIG undefined FUN_14780d492(void)

void FUN_14780d492(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477feef6(*(undefined8 *)(param_1 + 0x130),&local_20);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780d4f2 FUN_14780d4f2 body=29 status=ok
// SIG undefined FUN_14780d4f2(void)

undefined8 FUN_14780d4f2(longlong param_1,undefined8 param_2)

{
  FUN_1477feef6(*(undefined8 *)(param_1 + 0x130));
  return param_2;
}



// FUNCTION 14780d510 FUN_14780d510 body=115 status=ok
// SIG undefined FUN_14780d510(void)

void FUN_14780d510(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_14 = 0;
  local_18 = 0;
  cVar1 = FUN_1477ffa56(*(undefined8 *)(param_1 + 0x130));
  uVar2 = local_14;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  *param_3 = uVar2;
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14780d584 FUN_14780d584 body=124 status=ok
// SIG undefined FUN_14780d584(void)

void FUN_14780d584(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14336daf4(param_1,local_68);
  FUN_147816836(param_3,local_68);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_147816a50(local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780d602 FUN_14780d602 body=111 status=ok
// SIG undefined FUN_14780d602(void)

void FUN_14780d602(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,local_28);
  FUN_140008f88(param_3,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780d672 FUN_14780d672 body=244 status=ok
// SIG undefined FUN_14780d672(void)

void FUN_14780d672(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
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
  uVar1 = FUN_1477ff0b6(*(undefined8 *)(param_1 + 0x130),local_21,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780d768 FUN_14780d768 body=163 status=ok
// SIG undefined FUN_14780d768(void)

void FUN_14780d768(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1477ff04c(*(undefined8 *)(param_1 + 0x130),local_21);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780d80c FUN_14780d80c body=171 status=ok
// SIG undefined FUN_14780d80c(void)

void FUN_14780d80c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_14780d8b8(param_1,&local_30,local_21);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780d8b8 FUN_14780d8b8 body=238 status=ok
// SIG undefined FUN_14780d8b8(void)

float * FUN_14780d8b8(longlong param_1,float *param_2,undefined1 param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_58 [32];
  char local_38 [8];
  longlong local_30;
  char local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147801afa(*(undefined8 *)(param_1 + 0x130),local_38,param_3);
  if ((local_38[0] != '\x02') && (local_28 != '\x02')) {
    if (local_20 < local_30) {
      fVar1 = -1.0;
      fVar2 = -1.0;
      goto LAB_14780d921;
    }
    if (local_30 == local_20) {
      fVar2 = -1.0;
      fVar1 = -1.0;
      if (local_28 == '\0' || local_38[0] == '\0') goto LAB_14780d921;
    }
  }
  fVar1 = (float)((double)local_30 / 10000000.0);
  fVar2 = (float)((double)local_20 / 10000000.0);
LAB_14780d921:
  *param_2 = fVar1;
  param_2[1] = fVar2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780d9a8 FUN_14780d9a8 body=95 status=ok
// SIG undefined FUN_14780d9a8(void)

void FUN_14780d9a8(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477ff128(*(undefined8 *)(param_1 + 0x130),&local_20);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780da08 FUN_14780da08 body=50 status=ok
// SIG undefined FUN_14780da08(void)

void FUN_14780da08(longlong param_1,longlong param_2,undefined8 *param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147810652();
  *param_3 = *(undefined8 *)(param_1 + 0xe0);
  return;
}



// FUNCTION 14780da54 FUN_14780da54 body=46 status=ok
// SIG undefined FUN_14780da54(void)

void FUN_14780da54(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477ff1e0(*(undefined8 *)(param_1 + 0x130));
  *param_3 = uVar1;
  return;
}



// FUNCTION 14780da82 FUN_14780da82 body=12 status=ok
// SIG undefined FUN_14780da82(void)

void FUN_14780da82(longlong param_1)

{
  FUN_1477ff1e0(*(undefined8 *)(param_1 + 0x130));
  return;
}



// FUNCTION 14780da8e FUN_14780da8e body=163 status=ok
// SIG undefined FUN_14780da8e(void)

void FUN_14780da8e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1477ff2c8(*(undefined8 *)(param_1 + 0x130),local_21);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780db38 FUN_14780db38 body=264 status=ok
// SIG undefined FUN_14780db38(void)

void FUN_14780db38(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14780dc42(param_1,plVar1,local_3c != 0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780dc42 FUN_14780dc42 body=160 status=ok
// SIG undefined FUN_14780dc42(void)

void FUN_14780dc42(longlong param_1,void **param_2)

{
  void *_Src;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1477ff250(*(undefined8 *)(param_1 + 0x130),&local_30);
  _Src = local_30;
  if (&local_30 != param_2) {
    *(int *)(param_2 + 1) = local_28;
    if (local_28 == 0 && *(int *)((longlong)param_2 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_147818032(param_2,local_28);
      if (local_28 != 0) {
        memcpy(*param_2,_Src,(longlong)local_28 << 4);
      }
    }
  }
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780dce4 FUN_14780dce4 body=95 status=ok
// SIG undefined FUN_14780dce4(void)

void FUN_14780dce4(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477ff2d4(*(undefined8 *)(param_1 + 0x130),&local_20);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780dd44 FUN_14780dd44 body=29 status=ok
// SIG undefined FUN_14780dd44(void)

undefined8 FUN_14780dd44(longlong param_1,undefined8 param_2)

{
  FUN_1477ff2d4(*(undefined8 *)(param_1 + 0x130));
  return param_2;
}



// FUNCTION 14780dd82 FUN_14780dd82 body=38 status=ok
// SIG undefined FUN_14780dd82(void)

void FUN_14780dd82(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14780dda8();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14780dda8 FUN_14780dda8 body=111 status=ok
// SIG undefined FUN_14780dda8(void)

longlong FUN_14780dda8(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_147810eee(DAT_14c951640);
  if (lVar1 != 0) {
    FUN_1477ff3d0(*(undefined8 *)(param_1 + 0x130),&local_28);
    *(undefined8 *)(lVar1 + 0x28) = local_28;
    *(undefined8 *)(lVar1 + 0x30) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780de18 FUN_14780de18 body=284 status=ok
// SIG undefined FUN_14780de18(void)

void FUN_14780de18(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  undefined4 local_28;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
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
  FUN_1477ff556(*(undefined8 *)(param_1 + 0x130),local_38,local_21,local_28);
  FUN_140008f88(param_3,local_38);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780df36 FUN_14780df36 body=244 status=ok
// SIG undefined FUN_14780df36(void)

void FUN_14780df36(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
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
  uVar1 = FUN_1477ff5ee(*(undefined8 *)(param_1 + 0x130),local_21,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780e02c FUN_14780e02c body=320 status=ok
// SIG undefined FUN_14780e02c(void)

void FUN_14780e02c(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
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
  FUN_1477ff664(*(undefined8 *)(param_1 + 0x130),&local_38,local_21,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780e192 FUN_14780e192 body=13 status=ok
// SIG undefined FUN_14780e192(void)

longlong FUN_14780e192(longlong param_1)

{
  return *(longlong *)(param_1 + 0x130) + 0x218;
}



// FUNCTION 14780e1a0 FUN_14780e1a0 body=115 status=ok
// SIG undefined FUN_14780e1a0(void)

void FUN_14780e1a0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_14 = 0;
  local_18 = 0;
  cVar1 = FUN_1477ffa56(*(undefined8 *)(param_1 + 0x130));
  uVar2 = local_18;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  *param_3 = uVar2;
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14780e214 FUN_14780e214 body=248 status=ok
// SIG undefined FUN_14780e214(void)

void FUN_14780e214(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1477ff6e4(*(undefined8 *)(param_1 + 0x130),local_24,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780e30e FUN_14780e30e body=267 status=ok
// SIG undefined FUN_14780e30e(void)

void FUN_14780e30e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_1477ff7ec(*(undefined8 *)(param_1 + 0x130),&local_30,local_24,local_28);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780e41a FUN_14780e41a body=29 status=ok
// SIG undefined FUN_14780e41a(void)

undefined8 FUN_14780e41a(longlong param_1,undefined8 param_2)

{
  FUN_1477ff7ec(*(undefined8 *)(param_1 + 0x130));
  return param_2;
}



// FUNCTION 14780e438 FUN_14780e438 body=248 status=ok
// SIG undefined FUN_14780e438(void)

void FUN_14780e438(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1477ff870(*(undefined8 *)(param_1 + 0x130),local_24,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780e532 FUN_14780e532 body=267 status=ok
// SIG undefined FUN_14780e532(void)

void FUN_14780e532(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_1477ff8f4(*(undefined8 *)(param_1 + 0x130),&local_38,local_24,local_28);
  *param_3 = local_38;
  param_3[1] = uStack_34;
  param_3[2] = uStack_30;
  param_3[3] = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780e63e FUN_14780e63e body=322 status=ok
// SIG undefined FUN_14780e63e(void)

void FUN_14780e63e(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_1477ff988(*(undefined8 *)(param_1 + 0x130),&local_38,local_24,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780e782 FUN_14780e782 body=146 status=ok
// SIG undefined FUN_14780e782(void)

void FUN_14780e782(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_1477ffaca(*(undefined8 *)(param_1 + 0x130),local_38);
  if (cVar1 == '\0') {
    local_48 = DAT_14c846508;
    local_58 = DAT_14c8464f8;
    uStack_50 = DAT_14c846500;
  }
  else {
    FUN_1448052ee(local_38,&local_58);
  }
  *(undefined8 *)(param_3 + 4) = local_48;
  *param_3 = (undefined4)local_58;
  param_3[1] = local_58._4_4_;
  param_3[2] = (undefined4)uStack_50;
  param_3[3] = uStack_50._4_4_;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780e81a FUN_14780e81a body=44 status=ok
// SIG undefined FUN_14780e81a(void)

void FUN_14780e81a(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477ffb36(*(undefined8 *)(param_1 + 0x130));
  *param_3 = uVar1;
  return;
}



// FUNCTION 14780e84a FUN_14780e84a body=44 status=ok
// SIG undefined FUN_14780e84a(void)

void FUN_14780e84a(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477ffba4(*(undefined8 *)(param_1 + 0x130));
  *param_3 = uVar1;
  return;
}



// FUNCTION 14780e87a FUN_14780e87a body=44 status=ok
// SIG undefined FUN_14780e87a(void)

void FUN_14780e87a(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477ffe1c(*(undefined8 *)(param_1 + 0x130));
  *param_3 = uVar1;
  return;
}



// FUNCTION 14780e8a6 FUN_14780e8a6 body=12 status=ok
// SIG undefined FUN_14780e8a6(void)

void FUN_14780e8a6(longlong param_1)

{
  FUN_1477ffe1c(*(undefined8 *)(param_1 + 0x130));
  return;
}



// FUNCTION 14780e8b6 FUN_14780e8b6 body=44 status=ok
// SIG undefined FUN_14780e8b6(void)

void FUN_14780e8b6(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477ffc0e(*(undefined8 *)(param_1 + 0x130));
  *param_3 = uVar1;
  return;
}



// FUNCTION 14780e8e6 FUN_14780e8e6 body=44 status=ok
// SIG undefined FUN_14780e8e6(void)

void FUN_14780e8e6(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477ffc78(*(undefined8 *)(param_1 + 0x130));
  *param_3 = uVar1;
  return;
}



// FUNCTION 14780e912 FUN_14780e912 body=12 status=ok
// SIG undefined FUN_14780e912(void)

void FUN_14780e912(longlong param_1)

{
  FUN_1477ffc78(*(undefined8 *)(param_1 + 0x130));
  return;
}



// FUNCTION 14780e922 FUN_14780e922 body=44 status=ok
// SIG undefined FUN_14780e922(void)

void FUN_14780e922(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477ffcde(*(undefined8 *)(param_1 + 0x130));
  *param_3 = uVar1;
  return;
}



// FUNCTION 14780e94e FUN_14780e94e body=12 status=ok
// SIG undefined FUN_14780e94e(void)

void FUN_14780e94e(longlong param_1)

{
  FUN_1477ffcde(*(undefined8 *)(param_1 + 0x130));
  return;
}



// FUNCTION 14780e95e FUN_14780e95e body=44 status=ok
// SIG undefined FUN_14780e95e(void)

void FUN_14780e95e(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477ffd48(*(undefined8 *)(param_1 + 0x130));
  *param_3 = uVar1;
  return;
}



// FUNCTION 14780e98a FUN_14780e98a body=12 status=ok
// SIG undefined FUN_14780e98a(void)

void FUN_14780e98a(longlong param_1)

{
  FUN_1477ffd48(*(undefined8 *)(param_1 + 0x130));
  return;
}



// FUNCTION 14780e99a FUN_14780e99a body=44 status=ok
// SIG undefined FUN_14780e99a(void)

void FUN_14780e99a(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477ffdb2(*(undefined8 *)(param_1 + 0x130));
  *param_3 = uVar1;
  return;
}



// FUNCTION 14780e9c6 FUN_14780e9c6 body=12 status=ok
// SIG undefined FUN_14780e9c6(void)

void FUN_14780e9c6(longlong param_1)

{
  FUN_1477ffdb2(*(undefined8 *)(param_1 + 0x130));
  return;
}



// FUNCTION 14780e9d6 FUN_14780e9d6 body=44 status=ok
// SIG undefined FUN_14780e9d6(void)

void FUN_14780e9d6(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477ffe86(*(undefined8 *)(param_1 + 0x130));
  *param_3 = uVar1;
  return;
}



// FUNCTION 14780ea02 FUN_14780ea02 body=12 status=ok
// SIG undefined FUN_14780ea02(void)

void FUN_14780ea02(longlong param_1)

{
  FUN_1477ffe86(*(undefined8 *)(param_1 + 0x130));
  return;
}



// FUNCTION 14780ea12 FUN_14780ea12 body=37 status=ok
// SIG undefined FUN_14780ea12(void)

void FUN_14780ea12(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14336e1da();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14780ea3e FUN_14780ea3e body=178 status=ok
// SIG undefined FUN_14780ea3e(void)

void FUN_14780ea3e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14336e332(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780eaf8 FUN_14780eaf8 body=166 status=ok
// SIG undefined FUN_14780eaf8(void)

void FUN_14780eaf8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_14336e39c(param_1,local_28,0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780eba6 FUN_14780eba6 body=244 status=ok
// SIG undefined FUN_14780eba6(void)

void FUN_14780eba6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14336e39c(param_1,local_28,local_2c);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780eca2 FUN_14780eca2 body=166 status=ok
// SIG undefined FUN_14780eca2(void)

void FUN_14780eca2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_14336e9d0(param_1,local_28,0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780ed4a FUN_14780ed4a body=8 status=ok
// SIG undefined FUN_14780ed4a(void)

void FUN_14780ed4a(undefined8 param_1,undefined8 param_2)

{
  FUN_14336e9d0(param_1,param_2,0);
  return;
}



// FUNCTION 14780ed5a FUN_14780ed5a body=729 status=ok
// SIG undefined FUN_14780ed5a(void)

void FUN_14780ed5a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined1 local_d9;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [16];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 local_9c;
  undefined1 local_94;
  undefined8 local_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_80 [2] [16];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_d0 = 0xffffffffffffffff;
  auStack_c8 = (undefined1  [16])0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_d8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_b0 = 0;
  local_ac = 0xffffffff;
  uStack_a8 = 0xffffffff;
  uStack_a4 = 0xffffffff;
  uStack_a0 = 0xffffffff;
  local_9c = 0xffffffff;
  local_94 = 1;
  local_90 = 0;
  local_88 = 1;
  local_86 = 0;
  local_60 = 0;
  local_58 = 0;
  local_80[0] = (undefined1  [16])0x0;
  local_54 = 0xffffffff00000080;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  *(undefined1 (*) [16])(param_2 + 0x38) = (undefined1  [16])0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  puVar2 = &local_b0;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  local_d9 = 0;
  *(undefined1 (*) [16])(param_2 + 0x38) = (undefined1  [16])0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d9);
  }
  uVar1 = local_d8;
  puVar3 = &local_d9;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = local_d0;
  uStack_f0 = auStack_c8._0_8_;
  local_e8 = auStack_c8._8_8_;
  if ((auStack_c8._8_8_ != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_108 = puVar2;
  local_100 = puVar3;
  FUN_14780f034(param_1,local_b8,&local_f8,uVar1);
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_145a369d8(local_80);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780f034 FUN_14780f034 body=195 status=ok
// SIG undefined FUN_14780f034(void)

void FUN_14780f034(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 *param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_6 = 0;
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_2,1);
  if (lVar1 != 0) {
    uVar2 = FUN_14119d0a4(lVar1);
    lVar1 = FUN_1478180d4(uVar2,*(undefined8 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 4));
    if (lVar1 == 0) {
      uVar3 = FUN_14001cc68(200,0x10);
      FUN_14336ec12(uVar3,param_3,param_1,param_4,param_5,param_6);
      FUN_140b1330e(uVar2,*(undefined8 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 4),uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 14780f100 FUN_14780f100 body=405 status=ok
// SIG undefined FUN_14780f100(void)

void FUN_14780f100(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 local_9c;
  undefined1 local_94;
  undefined8 local_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_80 [2] [16];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_b0 = 0;
  local_ac = 0xffffffff;
  uStack_a8 = 0xffffffff;
  uStack_a4 = 0xffffffff;
  uStack_a0 = 0xffffffff;
  local_9c = 0xffffffff;
  local_94 = 1;
  local_90 = 0;
  local_88 = 1;
  local_86 = 0;
  local_60 = 0;
  local_58 = 0;
  local_80[0] = (undefined1  [16])0x0;
  local_54 = 0xffffffff00000080;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  *(undefined1 (*) [16])(param_2 + 0x38) = (undefined1  [16])0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  if (*(undefined4 **)(param_2 + 0x38) == (undefined4 *)0x0) {
    puVar2 = &local_b0;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14336e9d0(param_1,local_b8,puVar2);
  *param_3 = uVar1;
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_145a369d8(local_80);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780f296 thunk_FUN_14336e9d0 body=5 status=ok
// SIG undefined thunk_FUN_14336e9d0(void)

undefined4 thunk_FUN_14336e9d0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  longlong alStack_40 [2];
  ulonglong uStack_30;
  
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14156ba50(*(undefined8 *)(param_1 + 0x130));
  uVar5 = 0;
  FUN_147810686(param_1,0);
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x150) = 0;
  if (param_2 != (longlong *)0x0) {
    cVar2 = (**(code **)(*param_2 + 0x2a8))(param_2);
    if (cVar2 != '\0') {
      FUN_147810652(param_1);
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        FUN_1478110f4(*(longlong *)(param_1 + 0xe0),param_2);
        bVar3 = FUN_1477ffd48(*(undefined8 *)(param_1 + 0x130));
        *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) | bVar3;
        iVar6 = *(int *)(*(longlong *)(param_1 + 0xe0) + 0x30);
        if (iVar6 < 1) {
          iVar6 = -1;
        }
        else {
          iVar6 = iVar6 + -1;
          if (*(int *)(param_1 + 0xe8) < iVar6) {
            iVar6 = *(int *)(param_1 + 0xe8);
          }
          iVar4 = -1;
          if (-1 < iVar6) {
            iVar4 = iVar6;
          }
          *(int *)(param_1 + 0xe8) = iVar4 + 1;
          iVar6 = (iVar4 + 1) % *(int *)(*(longlong *)(param_1 + 0xe0) + 0x30);
        }
        *(int *)(param_1 + 0xe8) = iVar6;
        FUN_1415c442c(param_1);
        uVar1 = *(undefined8 *)(param_1 + 0x130);
        (**(code **)(*param_2 + 0x2a0))(param_2,alStack_40);
        uVar5 = FUN_14336aac2(uVar1,alStack_40,param_2 + 5,param_3);
        if (alStack_40[0] != 0) {
          FUN_1400020a8();
        }
        goto LAB_14336ea35;
      }
    }
    uVar5 = 0;
  }
LAB_14336ea35:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780f2a2 FUN_14780f2a2 body=178 status=ok
// SIG undefined FUN_14780f2a2(void)

void FUN_14780f2a2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14336e4ba(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780f35a FUN_14780f35a body=47 status=ok
// SIG undefined FUN_14780f35a(void)

void FUN_14780f35a(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147801690(*(undefined8 *)(param_1 + 0x130),0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14780f38e FUN_14780f38e body=52 status=ok
// SIG undefined FUN_14780f38e(void)

void FUN_14780f38e(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147801690(*(undefined8 *)(param_1 + 0x130),0x3f800000);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14780f3d8 FUN_14780f3d8 body=105 status=ok
// SIG undefined FUN_14780f3d8(void)

void FUN_14780f3d8(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  *(undefined1 *)(param_1 + 0x150) = 0;
  cVar2 = FUN_147801690(*(undefined8 *)(param_1 + 0x130),0x3f800000);
  if (((cVar2 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x130) + 0xb8) == '\x01')) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x58) != 0)) {
    cVar2 = FUN_1477feaea();
    if ((cVar2 != '\0') &&
       (lVar1 = *(longlong *)(param_1 + 0x130), *(char *)(lVar1 + 0x60) == '\x01')) {
      FUN_147800c6c(lVar1,lVar1 + 0x58);
      return;
    }
  }
  return;
}



// FUNCTION 14780f446 FUN_14780f446 body=37 status=ok
// SIG undefined FUN_14780f446(void)

void FUN_14780f446(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14336e534();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14780f474 FUN_14780f474 body=93 status=ok
// SIG undefined FUN_14780f474(void)

void FUN_14780f474(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_18 = 0;
  uVar1 = FUN_147800c6c(*(undefined8 *)(param_1 + 0x130));
  *param_3 = uVar1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780f4d8 FUN_14780f4d8 body=180 status=ok
// SIG undefined FUN_14780f4d8(void)

void FUN_14780f4d8(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147800c6c(*(undefined8 *)(param_1 + 0x130),puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780f594 FUN_14780f594 body=244 status=ok
// SIG undefined FUN_14780f594(void)

void FUN_14780f594(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
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
  uVar1 = FUN_147802388(*(undefined8 *)(param_1 + 0x130),local_21,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780f68a FUN_14780f68a body=173 status=ok
// SIG undefined FUN_14780f68a(void)

void FUN_14780f68a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  puVar1 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147800f0e(*(undefined8 *)(param_1 + 0x130),puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780f738 FUN_14780f738 body=159 status=ok
// SIG undefined FUN_14780f738(void)

void FUN_14780f738(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x28) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780f7e2 FUN_14780f7e2 body=165 status=ok
// SIG undefined FUN_14780f7e2(void)

void FUN_14780f7e2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14336d8d6(param_1,local_24 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780f88e FUN_14780f88e body=167 status=ok
// SIG undefined FUN_14780f88e(void)

void FUN_14780f88e(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1478018e8(*(undefined8 *)(param_1 + 0x130),local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780f93c FUN_14780f93c body=269 status=ok
// SIG undefined FUN_14780f93c(void)

void FUN_14780f93c(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  longlong local_38;
  undefined1 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0xff7fffff7f7fffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  auVar2._0_8_ = (double)local_48._4_4_ * 10000000.0 + 0.5;
  auVar2._8_8_ = 0;
  auVar2 = roundpd(auVar2,auVar2,1);
  local_28 = (longlong)auVar2._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (double)(float)local_48 * 10000000.0 + 0.5;
  auVar2 = roundpd(auVar3,auVar3,1);
  local_38 = (longlong)auVar2._0_8_;
  local_40 = 1;
  local_30 = 0;
  uVar1 = FUN_147801b7c(*(undefined8 *)(param_1 + 0x130));
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780fa50 FUN_14780fa50 body=167 status=ok
// SIG undefined FUN_14780fa50(void)

void FUN_14780fa50(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_147801690(*(undefined8 *)(param_1 + 0x130),local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780faf8 FUN_14780faf8 body=159 status=ok
// SIG undefined FUN_14780faf8(void)

void FUN_14780faf8(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x30) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780fb9e FUN_14780fb9e body=334 status=ok
// SIG undefined FUN_14780fb9e(void)

void FUN_14780fb9e(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147801904(*(undefined8 *)(param_1 + 0x130),local_21,local_28,local_2c);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780fcf4 FUN_14780fcf4 body=337 status=ok
// SIG undefined FUN_14780fcf4(void)

void FUN_14780fcf4(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14780194c(*(undefined8 *)(param_1 + 0x130),local_24,local_28,local_2c);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780fe52 FUN_14780fe52 body=379 status=ok
// SIG undefined FUN_14780fe52(void)

void FUN_14780fe52(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 unaff_RBP;
  bool bVar4;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  uVar2 = local_54;
  uVar1 = local_58;
  bVar4 = local_5c != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140932b6e();
  uVar3 = FUN_1478019a0(*(undefined8 *)(param_1 + 0x130),uVar2,uVar1,
                        CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar4) & 0xffffffff);
  *param_3 = uVar3;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780ffda FUN_14780ffda body=304 status=ok
// SIG undefined FUN_14780ffda(void)

void FUN_14780ffda(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 unaff_RBP;
  undefined1 *puVar4;
  bool bVar5;
  undefined1 auStack_98 [36];
  int local_74;
  undefined1 local_70 [24];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_74 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  puVar4 = local_70;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  bVar5 = local_74 != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140932b6e();
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  FUN_144a7484c(puVar4,local_58);
  uVar3 = FUN_147801a02(uVar2,local_58,
                        CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar5) & 0xffffffff);
  *param_3 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147810110 FUN_147810110 body=44 status=ok
// SIG undefined FUN_147810110(void)

void FUN_147810110(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477feb54(*(undefined8 *)(param_1 + 0x130));
  *param_3 = uVar1;
  return;
}



// FUNCTION 147810148 FUN_147810148 body=260 status=ok
// SIG undefined FUN_147810148(void)

void FUN_147810148(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
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
  uVar1 = FUN_147801a42(*(undefined8 *)(param_1 + 0x130),local_24,local_28 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147810252 FUN_147810252 body=44 status=ok
// SIG undefined FUN_147810252(void)

void FUN_147810252(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477fea80(*(undefined8 *)(param_1 + 0x130));
  *param_3 = uVar1;
  return;
}



// FUNCTION 147810282 FUN_147810282 body=44 status=ok
// SIG undefined FUN_147810282(void)

void FUN_147810282(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477feaea(*(undefined8 *)(param_1 + 0x130));
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478102ae FUN_1478102ae body=12 status=ok
// SIG undefined FUN_1478102ae(void)

void FUN_1478102ae(longlong param_1)

{
  FUN_1477feaea(*(undefined8 *)(param_1 + 0x130));
  return;
}



// FUNCTION 1478102de FUN_1478102de body=843 status=ok
// SIG undefined FUN_1478102de(void)

void FUN_1478102de(longlong param_1,int param_2)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined1 local_58 [40];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_147809800(param_1 + 0x118);
  uVar7 = (ulonglong)(param_2 - 1U);
  switch(uVar7) {
  case 0:
    break;
  default:
    goto switchD_147810322_caseD_1;
  case 2:
    FUN_14780167a(*(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0xc0),
                  *(undefined8 *)(param_1 + 0xd0));
    lVar6 = *(longlong *)(param_1 + 0x130);
    if ((*(char *)(lVar6 + 0xb8) == '\x01') && (*(char *)(lVar6 + 0x62) != '\0')) {
      bVar8 = *(char *)(lVar6 + 0x62) == '\x01';
LAB_1478104f7:
      uVar7 = CONCAT71((int7)(uVar7 >> 8),bVar8);
    }
    else if ((*(byte *)(param_1 + 0xdc) & 2) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = CONCAT71((uint7)(uint3)(param_2 - 1U >> 8),1);
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        bVar8 = *(int *)(*(longlong *)(param_1 + 0xe0) + 0x30) == 1;
        goto LAB_1478104f7;
      }
    }
    plVar5 = *(longlong **)(lVar6 + 0x260);
    if (plVar5 != (longlong *)0x0) {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5);
      (**(code **)(*plVar5 + 0x48))(plVar5,uVar7);
      lVar6 = *(longlong *)(param_1 + 0x130);
    }
    FUN_1478019a0(lVar6,*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc),1);
    uVar3 = *(undefined8 *)(param_1 + 0x130);
    FUN_144a7484c(param_1 + 0x100,local_58);
    FUN_147801a02(uVar3,local_58,1);
    *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x30) = *(undefined8 *)(param_1 + 0xf0);
    local_68 = (void *)0x0;
    local_60 = *(int *)(*(longlong *)(param_1 + 0x130) + 0x220);
    lVar6 = (longlong)local_60;
    pvVar2 = *(void **)(*(longlong *)(param_1 + 0x130) + 0x218);
    if (lVar6 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,pvVar2,lVar6 * 2);
    }
    FUN_14780cd9b(param_1 + 0x50,&local_68);
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((*(char *)(*(longlong *)(param_1 + 0x130) + 0xb8) == '\x01') &&
       (cVar1 = *(char *)(*(longlong *)(param_1 + 0x130) + 0x61), cVar1 != '\0')) {
joined_r0x000147810602:
      if (cVar1 != '\x01') goto switchD_147810322_caseD_1;
    }
    else if (*(char *)(param_1 + 0xd9) == '\0') {
      cVar1 = *(char *)(param_1 + 0x150);
      goto joined_r0x000147810602;
    }
    FUN_14780f3d8(param_1);
    goto switchD_147810322_caseD_1;
  case 3:
    local_78 = (void *)0x0;
    local_70 = *(int *)(*(longlong *)(param_1 + 0x130) + 0x220);
    lVar6 = (longlong)local_70;
    pvVar2 = *(void **)(*(longlong *)(param_1 + 0x130) + 0x218);
    if (lVar6 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,pvVar2,lVar6 * 2);
    }
    FUN_14780cdfc(param_1 + 0x60,&local_78);
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((*(longlong *)(param_1 + 0xe0) != 0) &&
       (((iVar4 = *(int *)(*(longlong *)(param_1 + 0xe0) + 0x30),
         (*(byte *)(param_1 + 0xdc) & 2) != 0 && (bVar8 = iVar4 != 1, iVar4 = 1, bVar8)) ||
        (*(int *)(param_1 + 0xe8) + 1 < iVar4)))) {
      FUN_14336e1da(param_1);
    }
    goto switchD_147810322_caseD_1;
  case 4:
    FUN_1447cd2ec(param_1 + 0x30,0);
    if ((*(longlong *)(param_1 + 0xe0) != 0) &&
       (((iVar4 = *(int *)(*(longlong *)(param_1 + 0xe0) + 0x30),
         (*(byte *)(param_1 + 0xdc) & 2) != 0 && (bVar8 = iVar4 != 1, iVar4 = 1, bVar8)) ||
        (*(int *)(param_1 + 0xe8) + 1 < iVar4)))) {
      *(undefined1 *)(param_1 + 0x150) = 1;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
    }
switchD_147810322_caseD_1:
    if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
}



// FUNCTION 147810652 FUN_147810652 body=52 status=ok
// SIG undefined FUN_147810652(void)

void FUN_147810652(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    return;
  }
  uVar1 = FUN_147810776(DAT_14c951640);
  FUN_147810686(param_1,uVar1);
  return;
}



// FUNCTION 147810686 FUN_147810686 body=240 status=ok
// SIG undefined FUN_147810686(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147810686(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xe0);
  if (lVar2 != param_2 && lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x1e & 1) == 0)
      goto LAB_1478106a9;
      lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
    }
    else {
      if ((_DAT_00000008 >> 0x1e & 1) == 0) goto LAB_1478106a9;
      lVar2 = 0;
    }
    FUN_14482b126(lVar2,0x40000000);
  }
LAB_1478106a9:
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0xe0) = param_2;
    if (param_2 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0xe0) = param_2;
  }
  if (DAT_14c9647bc < *(int *)(param_1 + 0xc)) {
    return;
  }
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  FUN_1447f71cc(lVar2,0x40000000);
  return;
}



// FUNCTION 147810776 FUN_147810776 body=174 status=ok
// SIG undefined FUN_147810776(void)

undefined8 FUN_147810776(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14589332a();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0x48;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 147810826 FUN_147810826 body=29 status=ok
// SIG undefined FUN_147810826(void)

undefined8 FUN_147810826(longlong param_1,undefined8 param_2)

{
  FUN_1477fef66(*(undefined8 *)(param_1 + 0x130));
  return param_2;
}



// FUNCTION 147810844 FUN_147810844 body=245 status=ok
// SIG undefined FUN_147810844(void)

ulonglong FUN_147810844(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined1 auStack_f8 [40];
  undefined **local_d0;
  ulonglong *local_c8;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  memset(&local_d0,0,0x90);
  FUN_144869430(&local_d0);
  local_40 = 0;
  local_d0 = &PTR_FUN_149e1e050;
  local_30 = 0x7fffffffffffffff;
  local_38 = param_1 + 8;
  FUN_140996f94(&local_d0,1);
  (*(code *)local_d0[0x1e])(&local_d0,1);
  puVar1 = (undefined1 *)*local_c8 + 1;
  if ((undefined1 *)local_c8[1] < puVar1) {
    (*(code *)local_d0[0x2e])(&local_d0,&local_21,1);
  }
  else {
    local_21 = *(undefined1 *)*local_c8;
    *local_c8 = (ulonglong)puVar1;
  }
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_21);
  FUN_144a7fc42(&local_d0);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781093a FUN_14781093a body=245 status=ok
// SIG undefined FUN_14781093a(void)

ulonglong FUN_14781093a(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined1 auStack_f8 [40];
  undefined **local_d0;
  ulonglong *local_c8;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  memset(&local_d0,0,0x90);
  FUN_144869430(&local_d0);
  local_40 = 0;
  local_d0 = &PTR_FUN_149e1e050;
  local_30 = 0x7fffffffffffffff;
  local_38 = param_1 + 8;
  FUN_140996f94(&local_d0,1);
  (*(code *)local_d0[0x1e])(&local_d0,1);
  puVar1 = (undefined1 *)*local_c8 + 1;
  if ((undefined1 *)local_c8[1] < puVar1) {
    (*(code *)local_d0[0x2e])(&local_d0,&local_21,1);
  }
  else {
    local_21 = *(undefined1 *)*local_c8;
    *local_c8 = (ulonglong)puVar1;
  }
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_21);
  FUN_144a7fc42(&local_d0);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147810a30 FUN_147810a30 body=275 status=ok
// SIG undefined FUN_147810a30(void)

undefined2 FUN_147810a30(longlong param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined1 auStack_e8 [32];
  undefined **local_c8;
  ulonglong *local_c0;
  byte local_9e;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memset(&local_c8,0,0x90);
  FUN_144869430(&local_c8);
  local_38 = 0;
  local_c8 = &PTR_FUN_149e1e050;
  local_28 = 0x7fffffffffffffff;
  local_30 = param_1 + 8;
  FUN_140996f94(&local_c8,1);
  (*(code *)local_c8[0x1e])(&local_c8,1);
  puVar1 = (undefined2 *)*local_c0 + 1;
  if ((undefined2 *)local_c0[1] < puVar1) {
    if ((local_9e & 2) == 0) {
      (*(code *)local_c8[0x2e])(&local_c8,&local_1a,2);
    }
    else {
      thunk_FUN_1457251a8(&local_c8,&local_1a);
    }
  }
  else {
    local_1a = *(undefined2 *)*local_c0;
    *local_c0 = (ulonglong)puVar1;
  }
  uVar2 = local_1a;
  FUN_144a7fc42(&local_c8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147810b44 FUN_147810b44 body=275 status=ok
// SIG undefined FUN_147810b44(void)

undefined2 FUN_147810b44(longlong param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined1 auStack_e8 [32];
  undefined **local_c8;
  ulonglong *local_c0;
  byte local_9e;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memset(&local_c8,0,0x90);
  FUN_144869430(&local_c8);
  local_38 = 0;
  local_c8 = &PTR_FUN_149e1e050;
  local_28 = 0x7fffffffffffffff;
  local_30 = param_1 + 8;
  FUN_140996f94(&local_c8,1);
  (*(code *)local_c8[0x1e])(&local_c8,1);
  puVar1 = (undefined2 *)*local_c0 + 1;
  if ((undefined2 *)local_c0[1] < puVar1) {
    if ((local_9e & 2) == 0) {
      (*(code *)local_c8[0x2e])(&local_c8,&local_1a,2);
    }
    else {
      thunk_FUN_1457251a8(&local_c8,&local_1a);
    }
  }
  else {
    local_1a = *(undefined2 *)*local_c0;
    *local_c0 = (ulonglong)puVar1;
  }
  uVar2 = local_1a;
  FUN_144a7fc42(&local_c8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147810c58 FUN_147810c58 body=272 status=ok
// SIG undefined FUN_147810c58(void)

undefined4 FUN_147810c58(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_e8 [32];
  undefined **local_c8;
  ulonglong *local_c0;
  byte local_9e;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memset(&local_c8,0,0x90);
  FUN_144869430(&local_c8);
  local_38 = 0;
  local_c8 = &PTR_FUN_149e1e050;
  local_28 = 0x7fffffffffffffff;
  local_30 = param_1 + 8;
  FUN_140996f94(&local_c8,1);
  (*(code *)local_c8[0x1e])(&local_c8,1);
  puVar1 = (undefined4 *)*local_c0 + 1;
  if ((undefined4 *)local_c0[1] < puVar1) {
    if ((local_9e & 2) == 0) {
      (*(code *)local_c8[0x2e])(&local_c8,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(&local_c8,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*local_c0;
    *local_c0 = (ulonglong)puVar1;
  }
  uVar2 = local_1c;
  FUN_144a7fc42(&local_c8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147810d6a FUN_147810d6a body=276 status=ok
// SIG undefined FUN_147810d6a(void)

undefined8 FUN_147810d6a(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [32];
  undefined **local_c8;
  ulonglong *local_c0;
  byte local_9e;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memset(&local_c8,0,0x90);
  FUN_144869430(&local_c8);
  local_38 = 0;
  local_c8 = &PTR_FUN_149e1e050;
  local_28 = 0x7fffffffffffffff;
  local_30 = param_1 + 8;
  FUN_140996f94(&local_c8,1);
  (*(code *)local_c8[0x1e])(&local_c8,1);
  puVar1 = (undefined8 *)*local_c0 + 1;
  if ((undefined8 *)local_c0[1] < puVar1) {
    if ((local_9e & 2) == 0) {
      (*(code *)local_c8[0x2e])(&local_c8,&local_20,8);
    }
    else {
      thunk_FUN_146821949(&local_c8,&local_20);
    }
  }
  else {
    local_20 = *(undefined8 *)*local_c0;
    *local_c0 = (ulonglong)puVar1;
  }
  uVar2 = local_20;
  FUN_144a7fc42(&local_c8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147810e80 FUN_147810e80 body=75 status=ok
// SIG undefined FUN_147810e80(void)

void FUN_147810e80(longlong *param_1)

{
  if (param_1[6] != 0) {
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



// FUNCTION 147810ecc FUN_147810ecc body=34 status=ok
// SIG undefined FUN_147810ecc(void)

void FUN_147810ecc(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x130);
  lVar1 = *(longlong *)(param_1 + 0x138);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147810eee FUN_147810eee body=148 status=ok
// SIG undefined FUN_147810eee(void)

undefined8 FUN_147810eee(undefined8 param_1)

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
  uVar1 = FUN_14594a4c8();
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



// FUNCTION 147810f84 FUN_147810f84 body=107 status=ok
// SIG undefined FUN_147810f84(void)

undefined8 FUN_147810f84(longlong param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
    *param_2 = -1;
    uVar5 = 0;
  }
  else {
    iVar4 = 0;
    if (1 < iVar1) {
      uVar2 = rand();
      iVar3 = (int)((float)(iVar1 + -1) * ((float)(uVar2 & 0x7fff) / 32767.0));
      iVar4 = iVar1 + -2;
      if (iVar3 < iVar1 + -2) {
        iVar4 = iVar3;
      }
    }
    *param_2 = iVar4;
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 8);
  }
  return uVar5;
}



// FUNCTION 147810ff0 FUN_147810ff0 body=234 status=ok
// SIG undefined FUN_147810ff0(void)

undefined4 FUN_147810ff0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_2 + 8) < 2) {
    uVar1 = 0;
  }
  else {
    FUN_140c50e86(&local_30,param_2,1);
    puVar3 = local_30;
    if (local_28 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_40,puVar3,1);
    uVar2 = FUN_145a6a890();
    local_48 = 0;
    FUN_140af9fb2(&local_38,DAT_14c951640,uVar2,local_40);
    uVar2 = FUN_147811eb5(DAT_14c951640,local_38,0x48);
    FUN_14780c560(uVar2,param_2);
    uVar1 = FUN_1478110f4(param_1,uVar2);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1478110dc FUN_1478110dc body=23 status=ok
// SIG undefined FUN_1478110dc(void)

undefined8 FUN_1478110dc(longlong param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x30))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 1478110f4 FUN_1478110f4 body=114 status=ok
// SIG undefined FUN_1478110f4(void)

bool FUN_1478110f4(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
      FUN_147818208((longlong *)(param_1 + 0x28),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  return param_2 != 0;
}



// FUNCTION 147811166 FUN_147811166 body=32 status=ok
// SIG undefined FUN_147811166(void)

undefined8 FUN_147811166(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"UMediaPlayer");
  return param_2;
}



// FUNCTION 147811186 FUN_147811186 body=160 status=ok
// SIG undefined FUN_147811186(void)

void FUN_147811186(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_1412e3d1e(&local_28);
    *(undefined4 *)(param_1 + 0x140) = local_28;
    *(undefined4 *)(param_1 + 0x144) = uStack_24;
    *(undefined4 *)(param_1 + 0x148) = uStack_20;
    *(undefined4 *)(param_1 + 0x14c) = uStack_1c;
    FUN_14603b820(*(undefined8 *)(param_1 + 0x130),param_1 + 0x140);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      lVar1 = FUN_147810776(DAT_14c951640);
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar1);
      }
      *(longlong *)(param_1 + 0xe0) = lVar1;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147811228 FUN_147811228 body=54 status=ok
// SIG undefined FUN_147811228(void)

void FUN_147811228(longlong param_1)

{
  FUN_1446e0b6e();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_14603b820(*(undefined8 *)(param_1 + 0x130),param_1 + 0x140);
    return;
  }
  return;
}



// FUNCTION 14781125e FUN_14781125e body=326 status=ok
// SIG undefined FUN_14781125e(void)

undefined8 * FUN_14781125e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x130) != 0) goto LAB_147811279;
  plVar4 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a598c90;
  FUN_1478113a4(plVar4 + 2,param_1 + -0x28);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x130) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x138);
    if (plVar5 == (longlong *)0x0) goto LAB_147811279;
    *(undefined8 *)(param_1 + 0x138) = 0;
LAB_14781130f:
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
    if (plVar4 == (longlong *)0x0) goto LAB_147811279;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x130) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x138);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x138) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_14781130f;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_147811279:
  *param_2 = *(undefined8 *)(param_1 + 0x130);
  lVar3 = *(longlong *)(param_1 + 0x138);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1478113a4 FUN_1478113a4 body=245 status=ok
// SIG undefined FUN_1478113a4(void)

undefined8 * FUN_1478113a4(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147818190(&local_28);
  param_1[1] = local_28;
  *param_1 = &PTR_FUN_14a592e30;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  uVar2 = *(undefined8 *)(param_2 + 0x130);
  plVar3 = *(longlong **)(param_2 + 0x138);
  if (plVar3 == (longlong *)0x0) {
    param_1[2] = uVar2;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    param_1[2] = uVar2;
    if ((longlong *)param_1[3] != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = (longlong *)param_1[3];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      param_1[3] = plVar3;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  *(uint *)(param_1 + 4) = uVar5 >> 0x10 ^ uVar5;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478114a4 FUN_1478114a4 body=163 status=ok
// SIG undefined FUN_1478114a4(void)

void FUN_1478114a4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1478110f4(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781154e FUN_14781154e body=178 status=ok
// SIG undefined FUN_14781154e(void)

void FUN_14781154e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147810ff0(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147811608 FUN_147811608 body=178 status=ok
// SIG undefined FUN_147811608(void)

void FUN_147811608(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14336eb18(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478116bc FUN_1478116bc body=177 status=ok
// SIG undefined FUN_1478116bc(void)

void FUN_1478116bc(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  if (((longlong)local_24 < 0) || (*(int *)(param_1 + 0x30) <= local_24)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)local_24 * 8);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781176e FUN_14781176e body=225 status=ok
// SIG undefined FUN_14781176e(void)

void FUN_14781176e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_48 [36];
  int local_24;
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
  piVar4 = &local_24;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar4 = *(int **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(int *)(param_1 + 0x30) < 1) {
    *piVar4 = -1;
    uVar3 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x30) + -1;
    if (*piVar4 < iVar5) {
      iVar5 = *piVar4;
    }
    iVar2 = -1;
    if (-1 < iVar5) {
      iVar2 = iVar5;
    }
    *piVar4 = iVar2 + 1;
    uVar1 = (longlong)(iVar2 + 1) % (longlong)*(int *)(param_1 + 0x30);
    *piVar4 = (int)uVar1;
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (uVar1 & 0xffffffff) * 8);
  }
  *param_3 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147811850 FUN_147811850 body=232 status=ok
// SIG undefined FUN_147811850(void)

void FUN_147811850(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined1 auStack_48 [36];
  int local_24;
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
  piVar4 = &local_24;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar4 = *(int **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 < 1) {
    *piVar4 = -1;
    uVar3 = 0;
  }
  else {
    if (*piVar4 < iVar2) {
      iVar2 = *piVar4;
    }
    iVar1 = 0;
    if (0 < iVar2) {
      iVar1 = iVar2;
    }
    *piVar4 = iVar1 + -1;
    iVar2 = iVar1 + -1 + *(int *)(param_1 + 0x30);
    *piVar4 = iVar2;
    iVar2 = iVar2 % *(int *)(param_1 + 0x30);
    *piVar4 = iVar2;
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 8);
  }
  *param_3 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781193a FUN_14781193a body=176 status=ok
// SIG undefined FUN_14781193a(void)

void FUN_14781193a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_147810f84(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478119ec FUN_1478119ec body=231 status=ok
// SIG undefined FUN_1478119ec(void)

void FUN_1478119ec(undefined8 param_1,longlong param_2)

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
  FUN_147811ad4(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147811ad4 FUN_147811ad4 body=119 status=ok
// SIG undefined FUN_147811ad4(void)

void FUN_147811ad4(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0x30);
  local_28 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  if (param_3 < iVar1) {
    iVar1 = param_3;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  FUN_147812022(param_1 + 0x28,&local_28,iVar2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147811b6a FUN_147811b6a body=163 status=ok
// SIG undefined FUN_147811b6a(void)

void FUN_147811b6a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_147811c0e(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147811c0e FUN_147811c0e body=108 status=ok
// SIG undefined FUN_147811c0e(void)

bool FUN_147811c0e(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  iVar1 = FUN_14781828e(param_1 + 0x28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147811c82 FUN_147811c82 body=161 status=ok
// SIG undefined FUN_147811c82(void)

void FUN_147811c82(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_147811d24(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147811d24 FUN_147811d24 body=94 status=ok
// SIG undefined FUN_147811d24(void)

undefined8 FUN_147811d24(longlong param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((int)param_2 < 0) || (iVar1 = *(int *)(param_1 + 0x30), iVar1 <= (int)param_2)) {
    uVar2 = 0;
  }
  else {
    if (~param_2 + iVar1 != 0) {
      memmove((void *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 8),
              (void *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 8 + 8),
              (longlong)(int)(~param_2 + iVar1) << 3);
      iVar1 = *(int *)(param_1 + 0x30);
    }
    *(int *)(param_1 + 0x30) = iVar1 + -1;
    FUN_1478183cc(param_1 + 0x28);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 147811d88 FUN_147811d88 body=297 status=ok
// SIG undefined FUN_147811d88(void)

void FUN_147811d88(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
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
  lVar2 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar4 = (longlong)local_2c;
  if ((lVar4 < 0) || (*(int *)(param_1 + 0x30) <= local_2c)) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_38);
    }
    *(longlong *)(lVar1 + lVar4 * 8) = lVar2;
    uVar3 = 1;
  }
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147811eb5 FUN_147811eb5 body=189 status=ok
// SIG undefined FUN_147811eb5(void)

undefined8 FUN_147811eb5(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145a6a890();
  FUN_144a5c54a(local_b8,uVar1);
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  local_a0 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147811f73 FUN_147811f73 body=174 status=ok
// SIG undefined FUN_147811f73(void)

undefined8 FUN_147811f73(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b3a4ee();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0x48;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 147812022 FUN_147812022 body=129 status=ok
// SIG undefined FUN_147812022(void)

uint FUN_147812022(longlong *param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147818208(param_1,iVar1);
  }
  uVar3 = (ulonglong)param_3;
  memmove((void *)(*param_1 + uVar3 * 8 + 8),(void *)(*param_1 + uVar3 * 8),
          (ulonglong)(iVar1 - param_3) << 3);
  lVar2 = *param_2;
  *(longlong *)(*param_1 + uVar3 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_3;
}



// FUNCTION 1478120ac FUN_1478120ac body=257 status=ok
// SIG undefined FUN_1478120ac(void)

void FUN_1478120ac(longlong param_1,longlong param_2,undefined1 *param_3)

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
  puVar2 = local_3f8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(byte *)(param_1 + 0x2a8) & 8) == 0) {
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
      param_1 = *(longlong *)(param_1 + 0x2b0) + 0x28;
      goto LAB_147812141;
    }
  }
  else {
    param_1 = param_1 + 0x2b8;
LAB_147812141:
    if (param_1 != 0) {
      FUN_1477db452(puVar2,param_1);
      uVar1 = 1;
      goto LAB_147812148;
    }
  }
  uVar1 = 0;
LAB_147812148:
  *param_3 = uVar1;
  FUN_1458219bc(local_3f8);
  if ((local_28 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478121de FUN_1478121de body=45 status=ok
// SIG undefined FUN_1478121de(void)

void FUN_1478121de(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14479d2ce(param_1 + 0x970);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14781220c FUN_14781220c body=12 status=ok
// SIG undefined FUN_14781220c(void)

void FUN_14781220c(longlong param_1)

{
  FUN_14479d2ce(param_1 + 0x970);
  return;
}



// FUNCTION 147812218 FUN_147812218 body=170 status=ok
// SIG undefined FUN_147812218(void)

void FUN_147812218(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(char *)(param_1 + 0x9c8) == '\x01') && (*(longlong *)(param_1 + 0x9e0) != 0)) {
    FUN_147812b2e(*(longlong *)(param_1 + 0x9e0),&local_28);
  }
  else {
    local_28 = 0;
    uStack_20 = 0;
  }
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
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_20._4_4_;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478122c4 FUN_1478122c4 body=170 status=ok
// SIG undefined FUN_1478122c4(void)

void FUN_1478122c4(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(char *)(param_1 + 0x9c8) == '\x01') && (*(longlong *)(param_1 + 0x9e0) != 0)) {
    FUN_147812a4a(*(longlong *)(param_1 + 0x9e0),&local_28);
  }
  else {
    local_28 = 0;
    uStack_20 = 0;
  }
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
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_20._4_4_;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147812374 FUN_147812374 body=158 status=ok
// SIG undefined FUN_147812374(void)

void FUN_147812374(undefined8 param_1,longlong param_2)

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
  FUN_147812414(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147812414 FUN_147812414 body=82 status=ok
// SIG undefined FUN_147812414(void)

void FUN_147812414(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x9c9) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x9e0);
  if (lVar1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x1c0));
    *(undefined1 *)(lVar1 + 0x35) = param_2;
    *(undefined4 *)(lVar1 + 0x1b8) = 0;
                    /* WARNING: Could not recover jumptable at 0x000147812456. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x1c0));
    return;
  }
  return;
}



// FUNCTION 14781246a FUN_14781246a body=202 status=ok
// SIG undefined FUN_14781246a(void)

void FUN_14781246a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [36];
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
  bVar2 = local_24 != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x9c8) = bVar2;
  lVar1 = *(longlong *)(param_1 + 0x9e0);
  if (lVar1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x1c0));
    *(bool *)(lVar1 + 0x34) = bVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x1c0));
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147812536 FUN_147812536 body=229 status=ok
// SIG undefined FUN_147812536(void)

void FUN_147812536(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14781261c(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781261c FUN_14781261c body=101 status=ok
// SIG undefined FUN_14781261c(void)

void FUN_14781261c(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x9c0) = param_2;
  *(undefined4 *)(param_1 + 0x9c4) = param_3;
  lVar1 = *(longlong *)(param_1 + 0x9e0);
  if (lVar1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x1c0));
    *(undefined4 *)(lVar1 + 0x38) = param_2;
    *(undefined4 *)(lVar1 + 0x3c) = param_3;
    *(undefined1 *)(lVar1 + 0x1bc) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014781266f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x1c0));
    return;
  }
  return;
}



// FUNCTION 147812682 FUN_147812682 body=163 status=ok
// SIG undefined FUN_147812682(void)

void FUN_147812682(longlong param_1,longlong param_2)

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
  FUN_14485c47a(param_1 + 0x970,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147812726 FUN_147812726 body=12 status=ok
// SIG undefined FUN_147812726(void)

void FUN_147812726(longlong param_1)

{
  FUN_14485c47a(param_1 + 0x970);
  return;
}



// FUNCTION 147812732 FUN_147812732 body=328 status=ok
// SIG undefined FUN_147812732(void)

void FUN_147812732(undefined8 param_1,longlong param_2)

{
  void *_Src;
  undefined8 unaff_RBX;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_49;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_49 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_49);
  local_60 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_40;
  local_58 = (int)uStack_40;
  if (lVar2 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1447c510a(&local_60,uStack_40 & 0xffffffff,0);
    memcpy(local_60,_Src,lVar2 << 2);
  }
  FUN_14781287c(param_1,&local_60,uVar1 & 0xffffffff);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781287c FUN_14781287c body=118 status=ok
// SIG undefined FUN_14781287c(void)

void FUN_14781287c(longlong param_1,longlong *param_2,byte param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x200;
  if (param_3 < 4) {
    uVar1 = (undefined4)(0x400020001000040 >> ((param_3 & 3) << 4));
  }
  *(short *)(param_1 + 0x9ba) = (short)uVar1;
  FUN_144a67f5c(param_1 + 0x9a8);
  if (*(longlong *)(param_1 + 0x9e0) != 0) {
    FUN_1478129ec(*(longlong *)(param_1 + 0x9e0),uVar1,param_2);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478128fe FUN_1478128fe body=163 status=ok
// SIG undefined FUN_1478128fe(void)

undefined8 * FUN_1478128fe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar2 = param_2[2];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[5] = param_2[5];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  _Src = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],_Src,(longlong)iVar1 << 2);
  }
  param_1[10] = param_2[10];
  uVar6 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar6;
  return param_1;
}



// FUNCTION 1478129a2 FUN_1478129a2 body=73 status=ok
// SIG undefined FUN_1478129a2(void)

void FUN_1478129a2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
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
                    /* WARNING: Could not recover jumptable at 0x0001478129e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1478129ec FUN_1478129ec body=94 status=ok
// SIG undefined FUN_1478129ec(void)

void FUN_1478129ec(longlong param_1,undefined2 param_2,undefined8 param_3)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  *(undefined2 *)(param_1 + 0x42) = param_2;
  FUN_144a67f5c(param_1 + 0x48,param_3);
  FUN_14703a642(param_1 + 0x118,param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000147812a43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  return;
}



// FUNCTION 147812a4a FUN_147812a4a body=228 status=ok
// SIG undefined FUN_147812a4a(void)

longlong * FUN_147812a4a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  if (*(char *)(param_1 + 0x34) == '\x01') {
    lVar1 = param_1 + 0x118;
    FUN_14703a6a4(lVar1);
    *param_2 = 0;
    param_2[1] = 0;
    iVar3 = *(int *)(param_1 + 0x50);
    if ((longlong)iVar3 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
      lVar7 = 0;
      do {
        uVar2 = *(undefined4 *)(lVar5 + lVar7);
        uVar8 = FUN_14703a652(lVar1,uVar2,1);
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_147818468(param_2,iVar4);
        }
        lVar6 = *param_2;
        *(undefined4 *)(lVar6 + (longlong)iVar4 * 8) = uVar2;
        *(undefined4 *)(lVar6 + 4 + (longlong)iVar4 * 8) = uVar8;
        lVar7 = lVar7 + 4;
      } while ((longlong)iVar3 * 4 != lVar7);
    }
    FUN_14703a714(lVar1);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  return param_2;
}



// FUNCTION 147812b2e FUN_147812b2e body=228 status=ok
// SIG undefined FUN_147812b2e(void)

longlong * FUN_147812b2e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  if (*(char *)(param_1 + 0x34) == '\x01') {
    lVar1 = param_1 + 0x118;
    FUN_14703a6a4(lVar1);
    *param_2 = 0;
    param_2[1] = 0;
    iVar3 = *(int *)(param_1 + 0x50);
    if ((longlong)iVar3 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
      lVar7 = 0;
      do {
        uVar2 = *(undefined4 *)(lVar5 + lVar7);
        uVar8 = FUN_14703a65c(lVar1,uVar2,1);
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_147818468(param_2,iVar4);
        }
        lVar6 = *param_2;
        *(undefined4 *)(lVar6 + (longlong)iVar4 * 8) = uVar2;
        *(undefined4 *)(lVar6 + 4 + (longlong)iVar4 * 8) = uVar8;
        lVar7 = lVar7 + 4;
      } while ((longlong)iVar3 * 4 != lVar7);
    }
    FUN_14703a714(lVar1);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  return param_2;
}



// FUNCTION 147812c12 FUN_147812c12 body=1169 status=ok
// SIG undefined FUN_147812c12(void)

void FUN_147812c12(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = FUN_14479d2ce(param_1 + 0x970);
  if (lVar8 == 0) {
    *(undefined4 *)(param_1 + 0x938) = 0;
    *(undefined8 *)(param_1 + 0x940) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x948));
    *(undefined8 *)(param_1 + 0x990) = 0;
    plVar4 = *(longlong **)(param_1 + 0x998);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x998) = 0;
      LOCK();
      plVar10 = plVar4 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x9e0) = 0;
    plVar4 = *(longlong **)(param_1 + 0x9e8);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x9e8) = 0;
      LOCK();
      plVar10 = plVar4 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  lVar5 = *(longlong *)(lVar8 + 0x130);
  plVar4 = *(longlong **)(lVar8 + 0x138);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar10 = *(longlong **)(param_1 + 0x980);
  if (plVar10 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    iVar7 = (int)plVar10[1];
    lVar8 = 0;
    do {
      if (iVar7 == 0) goto LAB_147812d35;
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar12 = iVar7 == iVar6;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar12);
    lVar8 = *(longlong *)(param_1 + 0x978);
    LOCK();
    plVar9 = plVar10 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
LAB_147812d35:
  if (lVar5 == lVar8) {
    if ((*(byte *)(param_1 + 0x9e) & 0x10) == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x948));
      *(undefined8 *)(param_1 + 0x990) = 0;
      plVar10 = *(longlong **)(param_1 + 0x998);
      if (plVar10 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x998) = 0;
        LOCK();
        plVar9 = plVar10 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      plVar10 = *(longlong **)(param_1 + 0x980);
      *(undefined8 *)(param_1 + 0x978) = 0;
      *(undefined8 *)(param_1 + 0x980) = 0;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x948));
    }
    goto LAB_147812e1f;
  }
  if ((*(byte *)(param_1 + 0x9e) & 0x10) == 0) goto LAB_147812e1f;
  plVar9 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14a598cc0;
  plVar10 = plVar9 + 2;
  FUN_1478059a4(plVar10,8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_50 = plVar10;
  local_48 = plVar9;
  FUN_1477fe5de(lVar5,&local_50);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x948));
  if (plVar9 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x990) = 0x10;
    plVar10 = *(longlong **)(param_1 + 0x998);
    if (plVar10 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x998) = 0;
LAB_14781307d:
      LOCK();
      plVar3 = plVar10 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar7 = *piVar1;
        UNLOCK();
joined_r0x00014781306a:
        if (iVar7 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x990) = plVar10;
    plVar10 = *(longlong **)(param_1 + 0x998);
    if (plVar9 == plVar10) {
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar7 = *piVar1;
        UNLOCK();
        plVar10 = plVar9;
        goto joined_r0x00014781306a;
      }
    }
    else {
      *(longlong **)(param_1 + 0x998) = plVar9;
      if (plVar10 != (longlong *)0x0) goto LAB_14781307d;
    }
  }
  if (*(longlong *)(param_1 + 0x9e0) != 0) {
    FUN_14336f20c(*(longlong *)(param_1 + 0x9e0),param_1 + 0x990);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x948));
  *(longlong *)(param_1 + 0x978) = lVar5;
  plVar10 = *(longlong **)(param_1 + 0x980);
  if (plVar10 != plVar4) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar10 = *(longlong **)(param_1 + 0x980);
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x980) = plVar4;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
LAB_147812e1f:
  uVar13 = FUN_1477ff1e0(lVar5);
  *(undefined4 *)(param_1 + 0x938) = uVar13;
  FUN_1477ff2d4(lVar5,&local_50);
  *(longlong **)(param_1 + 0x940) = local_50;
  lVar8 = *(longlong *)(param_1 + 0x9e0);
  if (lVar8 == 0) {
    uVar11 = 0x8000000000000000;
  }
  else {
    *(undefined8 *)(param_1 + 0x9a0) = *(undefined8 *)(lVar8 + 0x1b0);
    LOCK();
    *(undefined4 *)(lVar8 + 0x1a0) = *(undefined4 *)(param_1 + 0x938);
    UNLOCK();
    LOCK();
    *(undefined8 *)(lVar8 + 0x1a8) = *(undefined8 *)(param_1 + 0x940);
    UNLOCK();
    uVar11 = *(undefined8 *)(param_1 + 0x9a0);
  }
  FUN_147801be8(lVar5,uVar11);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar4 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478130c4 FUN_1478130c4 body=210 status=ok
// SIG undefined FUN_1478130c4(void)

void FUN_1478130c4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x948));
  *(undefined8 *)(param_1 + 0x990) = 0;
  plVar3 = *(longlong **)(param_1 + 0x998);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x998) = 0;
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x948));
  plVar3 = *(longlong **)(param_1 + 0x980);
  *(undefined8 *)(param_1 + 0x978) = 0;
  *(undefined8 *)(param_1 + 0x980) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x9e0) = 0;
  plVar3 = *(longlong **)(param_1 + 0x9e8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x9e8) = 0;
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
  FUN_1477db116(param_1);
  return;
}



// FUNCTION 147813196 FUN_147813196 body=26 status=ok
// SIG undefined FUN_147813196(void)

void FUN_147813196(undefined8 param_1)

{
  FUN_144a7e84a();
  FUN_147812c12(param_1);
  return;
}



// FUNCTION 1478131b0 FUN_1478131b0 body=61 status=ok
// SIG undefined FUN_1478131b0(void)

void FUN_1478131b0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  if ((char)param_2 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x2f0))(param_1);
    if (cVar1 == '\0') goto LAB_1478131dd;
  }
  (**(code **)(*param_1 + 0x3b0))(param_1,1);
LAB_1478131dd:
  FUN_1477daa3c(param_1,param_2);
  return;
}



// FUNCTION 1478131ee FUN_1478131ee body=254 status=ok
// SIG undefined FUN_1478131ee(void)

void FUN_1478131ee(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  
  cVar4 = (**(code **)(*param_1 + 0x2f0))();
  if (cVar4 == '\0') {
    (**(code **)(*param_1 + 0x3b0))(param_1,0);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x129));
    param_1[0x132] = 0;
    plVar3 = (longlong *)param_1[0x133];
    if (plVar3 != (longlong *)0x0) {
      param_1[0x133] = 0;
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
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x129));
    plVar3 = (longlong *)param_1[0x130];
    param_1[0x12f] = 0;
    param_1[0x130] = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    param_1[0x13c] = 0;
    plVar3 = (longlong *)param_1[0x13d];
    if (plVar3 != (longlong *)0x0) {
      param_1[0x13d] = 0;
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
  }
  FUN_1477dab0e(param_1);
  return;
}



// FUNCTION 1478132ec FUN_1478132ec body=126 status=ok
// SIG undefined FUN_1478132ec(void)

void FUN_1478132ec(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140136774();
  lVar1 = *(longlong *)(param_1 + 0x930);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  local_28 = 0;
  FUN_14485c47a(&local_28,lVar1);
  *(undefined8 *)(param_1 + 0x970) = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147813398 FUN_147813398 body=585 status=ok
// SIG undefined FUN_147813398(void)

longlong * FUN_147813398(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [40];
  int local_90;
  undefined4 local_8c;
  longlong *local_88;
  undefined6 uStack_80;
  undefined2 uStack_7a;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  uStack_7a = 0;
  uStack_78 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_90 = (int)*(float *)(param_3 + 0x10);
  local_8c = *(undefined4 *)(param_3 + 0x18);
  uStack_74 = *(undefined1 *)(param_1 + 0x9c8);
  uStack_73 = *(undefined1 *)(param_1 + 0x9c9);
  local_70 = *(undefined4 *)(param_1 + 0x9c0);
  local_6c = *(undefined4 *)(param_1 + 0x9c4);
  local_68 = *(undefined8 *)(param_1 + 0x9b8);
  FUN_144a67f5c(&local_60,param_1 + 0x9a8);
  local_50 = *(undefined4 *)(param_1 + 0x938);
  local_48 = *(undefined8 *)(param_1 + 0x940);
  uStack_40 = *(undefined8 *)(param_1 + 0x9a0);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x948));
  local_88 = *(longlong **)(param_1 + 0x990);
  lVar3 = *(longlong *)(param_1 + 0x998);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)CONCAT26(uStack_7a,uStack_80);
  uStack_80 = (undefined6)lVar3;
  uStack_7a = (undefined2)((ulonglong)lVar3 >> 0x30);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  uVar2 = 0;
  if (local_88 != (longlong *)0x0) {
    uVar2 = (**(code **)(*local_88 + 0x20))();
  }
  uStack_78 = uVar2;
  lVar3 = FUN_14001cc68(0x210,0x10);
  FUN_14336ef52(lVar3,&local_90);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a598ce0;
  plVar4[2] = lVar3;
  *(longlong *)(param_1 + 0x9e0) = lVar3;
  plVar5 = *(longlong **)(param_1 + 0x9e8);
  plVar6 = plVar4;
  if (plVar4 != plVar5) {
    *(longlong **)(param_1 + 0x9e8) = plVar4;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      lVar3 = *(longlong *)(param_1 + 0x9e0);
      plVar4 = *(longlong **)(param_1 + 0x9e8);
    }
    plVar6 = (longlong *)0x0;
    plVar5 = plVar4;
  }
  *param_2 = lVar3;
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x948));
  FUN_1478129a2(&local_90);
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1478135e2 FUN_1478135e2 body=143 status=ok
// SIG undefined FUN_1478135e2(void)

void FUN_1478135e2(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_28);
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



// FUNCTION 147813678 FUN_147813678 body=250 status=ok
// SIG undefined FUN_147813678(void)

void FUN_147813678(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
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
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147813774(param_1,puVar2,local_2c != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147813774 FUN_147813774 body=117 status=ok
// SIG undefined FUN_147813774(void)

void FUN_147813774(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong local_48;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14171d2aa(local_50,param_3);
  local_38 = param_2;
  local_30 = local_50;
  FUN_14781854c(param_1 + 0x30,local_24);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478137ea FUN_1478137ea body=247 status=ok
// SIG undefined FUN_1478137ea(void)

void FUN_1478137ea(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  float local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
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
  local_2c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147813e22(param_1,puVar2,(double)local_2c);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478138e2 FUN_1478138e2 body=247 status=ok
// SIG undefined FUN_1478138e2(void)

void FUN_1478138e2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
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
  local_30 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478139da(param_1,puVar2,local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478139da FUN_1478139da body=117 status=ok
// SIG undefined FUN_1478139da(void)

void FUN_1478139da(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong local_48;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147813e98(local_50,param_3);
  local_38 = param_2;
  local_30 = local_50;
  FUN_14781854c(param_1 + 0x30,local_24);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147813a50 FUN_147813a50 body=265 status=ok
// SIG undefined FUN_147813a50(void)

void FUN_147813a50(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  plVar1 = local_38 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147813b5a(param_1,plVar1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147813b5a FUN_147813b5a body=197 status=ok
// SIG undefined FUN_147813b5a(void)

void FUN_147813b5a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  longlong local_58;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = (void *)0x0;
  local_68 = *(int *)(param_3 + 1);
  lVar1 = (longlong)local_68;
  _Src = (void *)*param_3;
  if (lVar1 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_68,0);
    memcpy(local_70,_Src,lVar1 * 2);
  }
  FUN_146918c70(local_60,&local_70);
  local_48 = param_2;
  local_40 = local_60;
  FUN_14781854c(param_1 + 0x30,local_34);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147813c24 FUN_147813c24 body=41 status=ok
// SIG undefined FUN_147813c24(void)

void FUN_147813c24(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147813c5c FUN_147813c5c body=142 status=ok
// SIG undefined FUN_147813c5c(void)

longlong * FUN_147813c5c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar6 = (uint)lVar1 & 0xffff;
    lVar5 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x70);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x78) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar7 * 0x28);
        if (*plVar4 == lVar1) goto LAB_147813c66;
        iVar7 = (int)plVar4[4];
      } while (iVar7 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_147813c66:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 147813cea FUN_147813cea body=61 status=ok
// SIG undefined FUN_147813cea(void)

undefined4 FUN_147813cea(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_147813c5c(param_1 + -0x28);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 8)) {
    uVar2 = FUN_146918e4a(piVar1);
    return uVar2;
  }
  return param_3;
}



// FUNCTION 147813d28 FUN_147813d28 body=49 status=ok
// SIG undefined FUN_147813d28(void)

undefined8 FUN_147813d28(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = (int *)FUN_147813c5c(param_1 + -0x28);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0xf)) {
    uVar2 = FUN_146b82fce(piVar1);
    return uVar2;
  }
  return param_3;
}



// FUNCTION 147813d5a FUN_147813d5a body=120 status=ok
// SIG undefined FUN_147813d5a(void)

undefined8 *
FUN_147813d5a(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  piVar2 = (int *)FUN_147813c5c(param_1 + -0x28,param_3);
  if ((piVar2 == (int *)0x0) || (*piVar2 != 0x18)) {
    *param_2 = 0;
    iVar1 = *(int *)(param_4 + 1);
    _Src = (void *)*param_4;
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    FUN_14691873a(piVar2,param_2);
  }
  return param_2;
}



// FUNCTION 147813dd2 FUN_147813dd2 body=45 status=ok
// SIG undefined FUN_147813dd2(void)

longlong * FUN_147813dd2(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_4;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)param_4[1];
  return param_2;
}



// FUNCTION 147813e00 FUN_147813e00 body=27 status=ok
// SIG undefined FUN_147813e00(void)

undefined8 *
FUN_147813e00(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  *param_2 = *param_4;
  lVar1 = param_4[1];
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147813e22 FUN_147813e22 body=117 status=ok
// SIG undefined FUN_147813e22(void)

void FUN_147813e22(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong local_48;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146918a60(local_50,param_3);
  local_38 = param_2;
  local_30 = local_50;
  FUN_14781854c(param_1 + 0x30,local_24);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147813e98 FUN_147813e98 body=196 status=ok
// SIG undefined FUN_147813e98(void)

undefined4 * FUN_147813e98(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_108 [40];
  undefined **local_e0 [5];
  byte local_b8;
  byte local_b7;
  undefined8 local_50;
  undefined4 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  local_38 = param_2;
  memset(local_e0,0,0x90);
  FUN_144869430(local_e0);
  local_50 = 0;
  local_40 = 0;
  local_b8 = local_b8 | 4;
  local_b7 = local_b7 | 1;
  local_e0[0] = &PTR_FUN_149e1e330;
  local_48 = param_1 + 2;
  FUN_1408383eb(local_e0,&local_38);
  *param_1 = 0xf;
  FUN_144a7fc42(local_e0);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147813f9c FUN_147813f9c body=76 status=ok
// SIG undefined FUN_147813f9c(void)

undefined8 * FUN_147813f9c(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x14c) == '\x01') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
    uVar1 = *(undefined4 *)(param_1 + 0x184);
    uVar2 = *(undefined4 *)(param_1 + 0x188);
    uVar3 = *(undefined4 *)(param_1 + 0x18c);
    *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x180);
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
  }
  return param_2;
}



// FUNCTION 147813ff0 FUN_147813ff0 body=58 status=ok
// SIG undefined FUN_147813ff0(void)

undefined8 FUN_147813ff0(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"%ix%i [%s]",*(undefined4 *)(param_1 + 0x1a8),
                *(undefined4 *)(param_1 + 0x1ac),DAT_14c873470);
  return param_2;
}



// FUNCTION 14781402a FUN_14781402a body=38 status=ok
// SIG undefined FUN_14781402a(void)

void FUN_14781402a(longlong param_1,undefined8 param_2)

{
  switchD_143c3d4dc::caseD_38();
  FUN_140347a44(param_2,*(undefined8 *)(param_1 + 0x1d8));
  return;
}



// FUNCTION 147814054 FUN_147814054 body=69 status=ok
// SIG undefined FUN_147814054(void)

void FUN_147814054(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  uint uVar2;
  undefined1 uVar3;
  
  dVar1 = (double)(**(code **)(*(longlong *)*param_2 + 0x90))();
  *(float *)(param_1 + 0x150) = (float)dVar1;
  uVar2 = (**(code **)(*(longlong *)*param_2 + 0x88))();
  uVar3 = 0;
  if (uVar2 < 4) {
    uVar3 = (undefined1)uVar2;
  }
  *(undefined1 *)(param_1 + 0x154) = uVar3;
  return;
}



// FUNCTION 14781409a FUN_14781409a body=84 status=ok
// SIG undefined FUN_14781409a(void)

void FUN_14781409a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x68);
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
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001478140ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1478140ee FUN_1478140ee body=43 status=ok
// SIG undefined FUN_1478140ee(void)

void FUN_1478140ee(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1447b4020();
  if (lVar1 + -0x10 == 0 || lVar1 == 0) {
    return;
  }
  FUN_14781411a(lVar1 + -0x10);
  return;
}



// FUNCTION 14781411a FUN_14781411a body=78 status=ok
// SIG undefined FUN_14781411a(void)

void FUN_14781411a(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_143370192();
    lVar1 = *(longlong *)(param_1 + 0x128);
    if (lVar1 != 0) {
      *(undefined8 *)(param_1 + 0x128) = 0;
      FUN_14781409a(lVar1);
      FUN_1400020a8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 147814168 FUN_147814168 body=181 status=ok
// SIG undefined FUN_147814168(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147814168(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cabc7d8) {
    FUN_144b3d300(&DAT_14cabc7d8);
    if (DAT_14cabc7d8 == -1) {
      _DAT_14cabc770 = &PTR_FUN_14a5986e0;
      _DAT_14cabc798 = 0;
      _DAT_14cabc7a0 = 0;
      _DAT_14cabc778 = 0;
      uRam000000014cabc780 = 0;
      _DAT_14cabc7a4 = 0xffffffff00000080;
      _DAT_14cabc7ac = 0;
      _DAT_14cabc7b8 = 0;
      _DAT_14cabc7c0 = 0;
      _DAT_14cabc7c8 = 0;
      uRam000000014cabc7d0 = 0;
      atexit((_func_5014 *)&LAB_14336fdd4);
      _Init_thread_footer(&DAT_14cabc7d8);
    }
  }
  return &DAT_14cabc770;
}



// FUNCTION 14781421e FUN_14781421e body=70 status=ok
// SIG undefined FUN_14781421e(void)

void FUN_14781421e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5986e0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1478171a4(param_1 + 1);
  return;
}



// FUNCTION 147814264 FUN_147814264 body=379 status=ok
// SIG undefined FUN_147814264(void)

void FUN_147814264(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *param_3;
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
  }
  local_50 = 0;
  FUN_14485c47a(&local_50,lVar4);
  iVar3 = 0;
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x58);
    lVar6 = (longlong)*(int *)(param_1 + 0x60) << 3;
    do {
      cVar2 = FUN_147818b66(lVar4,&local_50);
      if (cVar2 != '\0') goto LAB_147814306;
      lVar4 = lVar4 + 8;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
    iVar3 = *(int *)(param_1 + 0x60);
  }
  *(uint *)(param_1 + 0x60) = iVar3 + 1U;
  if (*(uint *)(param_1 + 100) < iVar3 + 1U) {
    FUN_147818b9c(param_1 + 0x58,iVar3);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar3 * 8) = local_50;
  local_48 = &local_50;
  FUN_147818c22(param_1 + 8,local_3c);
LAB_147814306:
  local_48 = (undefined8 *)local_50;
  iVar3 = FUN_147818efa((longlong *)(param_1 + 8),
                        (uint)((ulonglong)local_50 >> 0x20) ^ (uint)local_50);
  if (iVar3 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 8);
  }
  plVar5 = (longlong *)(lVar4 + 8);
  if (lVar4 == 0) {
    plVar5 = (longlong *)0x0;
  }
  uVar1 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  iVar3 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar3 + 1U) {
    FUN_147819210(plVar5,iVar3);
  }
  lVar6 = *plVar5;
  *(undefined8 *)(lVar6 + (longlong)iVar3 * 0x10) = uVar1;
  *(longlong *)(lVar6 + 8 + (longlong)iVar3 * 0x10) = lVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478143e0 FUN_1478143e0 body=247 status=ok
// SIG undefined FUN_1478143e0(void)

void FUN_1478143e0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *param_3;
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
  }
  local_30 = 0;
  FUN_14485c47a(&local_30,lVar4);
  local_40 = local_30;
  iVar3 = FUN_147818efa((longlong *)(param_1 + 8),
                        (uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
  if ((iVar3 != -1) &&
     (lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 8), lVar5 = lVar4 + 8,
     lVar5 != 0 && lVar4 != 0)) {
    local_40 = *param_2;
    plVar2 = (longlong *)param_2[1];
    local_38 = plVar2;
    if (plVar2 == (longlong *)0x0) {
      FUN_1478144d8(lVar5,&local_40);
    }
    else {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      FUN_1478144d8();
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478144d8 FUN_1478144d8 body=301 status=ok
// SIG undefined FUN_1478144d8(void)

void FUN_1478144d8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  longlong *plVar10;
  bool bVar11;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  uVar6 = 0;
  bVar9 = false;
LAB_1478144ff:
  do {
    lVar7 = *param_1;
    plVar10 = *(longlong **)(lVar7 + 8 + uVar6 * 0x10);
    if (plVar10 == (longlong *)0x0) {
LAB_147814528:
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar10[1];
      do {
        if (iVar5 == 0) goto LAB_147814528;
        LOCK();
        iVar4 = (int)plVar10[1];
        bVar11 = iVar5 == iVar4;
        if (bVar11) {
          *(int *)(plVar10 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar11);
    }
    lVar7 = *(longlong *)(lVar7 + uVar6 * 0x10);
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
LAB_14781457b:
      lVar8 = 0;
    }
    else {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) goto LAB_14781457b;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar11 = iVar5 == iVar4;
        if (bVar11) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar11);
      lVar8 = *param_2;
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
    if (plVar10 == (longlong *)0x0) {
      lVar7 = 0;
    }
    else {
      LOCK();
      plVar3 = plVar10 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if (lVar7 != lVar8) break;
    FUN_1478192d4(param_1,uVar6 & 0xffffffff);
    bVar9 = true;
    if ((longlong)(int)param_1[1] <= (longlong)uVar6) goto LAB_1478145ed;
  } while( true );
  uVar6 = uVar6 + 1;
  if ((longlong)(int)param_1[1] <= (longlong)uVar6) {
    if (!bVar9) {
      return;
    }
LAB_1478145ed:
    FUN_147819296(param_1);
    return;
  }
  goto LAB_1478144ff;
}



// FUNCTION 147814606 FUN_147814606 body=167 status=ok
// SIG undefined FUN_147814606(void)

longlong FUN_147814606(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_2;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  local_30 = 0;
  FUN_14485c47a(&local_30,lVar3);
  local_28 = local_30;
  iVar1 = FUN_147818efa((longlong *)(param_1 + 8),
                        (uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
  if (iVar1 == -1) {
    lVar3 = 0;
  }
  else {
    lVar3 = (longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 8);
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478146b2 FUN_1478146b2 body=75 status=ok
// SIG undefined FUN_1478146b2(void)

void FUN_1478146b2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1478146fe(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478146fe FUN_1478146fe body=214 status=ok
// SIG undefined FUN_1478146fe(void)

void FUN_1478146fe(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  switchD_143c3d4dc::caseD_21();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3906c);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e393d0);
  FUN_1448332aa(param_2,&DAT_149e393d0);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3906c);
  if ((iVar1 < 1) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_14021219d(param_2,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38[2] ^ (ulonglong)auStack_58);
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001478147d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x80);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478147e6 FUN_1478147e6 body=68 status=ok
// SIG undefined FUN_1478147e6(void)

void FUN_1478147e6(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781482c FUN_14781482c body=48 status=ok
// SIG undefined FUN_14781482c(void)

undefined8 * FUN_14781482c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else {
    (*(code *)**(undefined8 **)(lVar1 + 0x28))(lVar1 + 0x28,param_2);
  }
  return param_2;
}



// FUNCTION 147814860 FUN_147814860 body=89 status=ok
// SIG undefined FUN_147814860(void)

undefined8 * FUN_147814860(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x90);
  _Src = *(void **)(param_1 + 0x88);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1478148ba FUN_1478148ba body=62 status=ok
// SIG undefined FUN_1478148ba(void)

bool FUN_1478148ba(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1447ee042(param_1 + 0x88,&DAT_149e3579e,3,1,0,0xffffffff);
  return iVar1 != -1;
}



// FUNCTION 14781490c FUN_14781490c body=77 status=ok
// SIG undefined FUN_14781490c(void)

ulonglong FUN_14781490c(longlong param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 unaff_RBX;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (*param_2 == DAT_14cabc818) {
    uVar2 = CONCAT71(uVar3,*(undefined1 *)(param_1 + 0x60));
  }
  else if (*param_2 == DAT_14cabc830) {
    uVar2 = CONCAT71(uVar3,*(undefined1 *)(param_1 + 0x70));
  }
  else {
    uVar2 = (ulonglong)param_3;
    piVar1 = (int *)FUN_147813c5c(param_1 + -0x28);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 2)) {
      uVar2 = FUN_146918d3a(piVar1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 14781495a FUN_14781495a body=82 status=ok
// SIG undefined FUN_14781495a(void)

ulonglong FUN_14781495a(longlong param_1,longlong *param_2,ulonglong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  
  if (*param_2 == DAT_14cabc820) {
    uVar3 = 4;
    if ((int)*(uint *)(param_1 + 100) < 4) {
      uVar3 = *(uint *)(param_1 + 100);
    }
    param_3 = 0;
    if (0 < (int)uVar3) {
      param_3 = (ulonglong)uVar3;
    }
  }
  else {
    piVar1 = (int *)FUN_147813c5c(param_1 + -0x28);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0xf)) {
      uVar2 = FUN_146b82fce(piVar1);
      return uVar2;
    }
  }
  return param_3;
}


