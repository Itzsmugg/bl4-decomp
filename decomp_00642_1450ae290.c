// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1450ae290 FUN_1450ae290 body=457 status=ok
// SIG undefined FUN_1450ae290(void)

undefined8 FUN_1450ae290(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (((*(uint *)(param_1 + 0x50) & 0xfffffffd) != 0) || (*(int *)(param_1 + 0xb0) != 0)) {
    return 1;
  }
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x50) = 1;
  do {
    uVar3 = 0;
    uVar4 = uVar3;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      if (*(int *)(param_1 + 0x50) != 0) {
        iVar2 = *(int *)(param_1 + 0x20);
        while (iVar2 != 0) {
          piVar1 = *(int **)(param_1 + 0x18);
          uVar3 = *(ulonglong *)(piVar1 + 2);
          if (*piVar1 != 0) {
            FUN_1450adff0(param_1 + 0x98,piVar1);
            iVar5 = piVar1[1];
            FUN_1450ae040(param_1 + 0x18,0);
            break;
          }
          if (*(longlong *)(piVar1 + 4) != 0) {
            FUN_144d4a460();
          }
          if (1 < *(uint *)(param_1 + 0x20)) {
            memmove(piVar1,piVar1 + 6,(ulonglong)(*(uint *)(param_1 + 0x20) * 0x18 - 0x18));
          }
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
          FUN_1450b2bc0(DAT_14c790fc0,*(undefined4 *)(param_1 + 0x74),0,uVar3);
          iVar2 = *(int *)(param_1 + 0x20);
        }
        uVar4 = (ulonglong)*(uint *)(param_1 + 0x98);
        if (*(uint *)(param_1 + 0x98) == 0) {
          *(undefined4 *)(param_1 + 0x50) = 2;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    }
    piVar1 = *(int **)(param_1 + 0xa8);
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_144d4a460();
    }
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 + 1;
    }
    *(int **)(param_1 + 0x60) = piVar1;
    if (((int)uVar4 == 0) ||
       (iVar2 = FUN_1450aefd0(param_1,uVar4,iVar5,param_2,param_3), iVar2 == 1)) {
      return 1;
    }
    FUN_1450b2bc0(DAT_14c790fc0,*(undefined4 *)(param_1 + 0x74),uVar4,uVar3);
  } while( true );
}



// FUNCTION 1450ae460 FUN_1450ae460 body=23 status=ok
// SIG undefined FUN_1450ae460(void)

void FUN_1450ae460(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xbc) = 0;
  FUN_1450af3c0(param_1,0,param_2,param_3);
  return;
}



// FUNCTION 1450ae480 FUN_1450ae480 body=40 status=ok
// SIG undefined FUN_1450ae480(void)

undefined8 FUN_1450ae480(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0xbc) = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    uVar1 = FUN_1450af3c0(param_1,1,0);
    return uVar1;
  }
  return 1;
}



// FUNCTION 1450ae4b0 FUN_1450ae4b0 body=683 status=ok
// SIG undefined FUN_1450ae4b0(void)

undefined8 FUN_1450ae4b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((*(int *)(param_1 + 0x50) == 0) ||
     (*(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1, *(int *)(param_1 + 0xb0) != 1)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(DAT_14c790fd8 + 0x88);
  FUN_145082280(DAT_14c790fd8);
  piVar1 = DAT_14c791060;
  uVar3 = *(uint *)(param_1 + 0x80);
  lVar7 = 0;
  if (uVar3 != 0) {
    do {
      while (iVar4 = *piVar1, iVar4 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
        if (*piVar1 < 0) goto LAB_1450ae54f;
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
      }
      LOCK();
      iVar2 = *piVar1;
      if (iVar4 == iVar2) {
        *piVar1 = iVar4 + 1;
      }
      UNLOCK();
    } while (iVar4 != iVar2);
LAB_1450ae54f:
    lVar6 = lVar7;
    if (piVar1[0x12] != 0) {
      for (lVar5 = *(longlong *)
                    (*(longlong *)(piVar1 + 0x10) +
                    ((ulonglong)uVar3 % (ulonglong)(uint)piVar1[0x12]) * 8);
          (lVar6 = lVar7, lVar5 != 0 && (lVar6 = lVar5, *(uint *)(lVar5 + 0x10) != uVar3));
          lVar5 = *(longlong *)(lVar5 + 8)) {
      }
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar4 = *piVar1;
    while (-1 < iVar4) {
      LOCK();
      iVar2 = *piVar1;
      if (iVar4 == iVar2) {
        *piVar1 = iVar4 + -1;
      }
      UNLOCK();
      if (iVar4 == iVar2) {
        if ((iVar4 + -1 == 0) && (0 < piVar1[0xc])) {
          SetEvent(*(HANDLE *)(piVar1 + 0xe));
        }
        goto LAB_1450ae5ce;
      }
      iVar4 = *piVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1450ae5ce:
    lVar5 = lVar6 + -0x10;
    if (lVar6 == 0) {
      lVar5 = lVar7;
    }
    if (lVar5 != 0) {
      FUN_1450d4940(lVar5,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x74),param_2,
                    param_3);
      LOCK();
      piVar1 = (int *)(lVar5 + 0x24);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*(longlong *)(lVar5 + 0x10) + 0x18))();
      }
    }
  }
  piVar1 = DAT_14c791060;
  uVar3 = *(uint *)(param_1 + 0x98);
  if (uVar3 != 0) {
    do {
      while (iVar4 = *piVar1, iVar4 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
        if (*piVar1 < 0) goto LAB_1450ae631;
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
      }
      LOCK();
      iVar2 = *piVar1;
      if (iVar4 == iVar2) {
        *piVar1 = iVar4 + 1;
      }
      UNLOCK();
    } while (iVar4 != iVar2);
LAB_1450ae631:
    lVar6 = lVar7;
    if (piVar1[0x12] != 0) {
      for (lVar5 = *(longlong *)
                    (*(longlong *)(piVar1 + 0x10) +
                    ((ulonglong)uVar3 % (ulonglong)(uint)piVar1[0x12]) * 8);
          (lVar6 = lVar7, lVar5 != 0 && (lVar6 = lVar5, *(uint *)(lVar5 + 0x10) != uVar3));
          lVar5 = *(longlong *)(lVar5 + 8)) {
      }
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar4 = *piVar1;
    while (-1 < iVar4) {
      LOCK();
      iVar2 = *piVar1;
      if (iVar4 == iVar2) {
        *piVar1 = iVar4 + -1;
      }
      UNLOCK();
      if (iVar4 == iVar2) {
        if ((iVar4 + -1 == 0) && (0 < piVar1[0xc])) {
          SetEvent(*(HANDLE *)(piVar1 + 0xe));
        }
        goto LAB_1450ae6cf;
      }
      iVar4 = *piVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1450ae6cf:
    lVar5 = lVar6 + -0x10;
    if (lVar6 == 0) {
      lVar5 = lVar7;
    }
    if (lVar5 != 0) {
      FUN_1450d4940(lVar5,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x74),param_2,
                    param_3);
      LOCK();
      piVar1 = (int *)(lVar5 + 0x24);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*(longlong *)(lVar5 + 0x10) + 0x18))();
      }
    }
  }
  return 1;
}



// FUNCTION 1450ae760 FUN_1450ae760 body=729 status=ok
// SIG undefined FUN_1450ae760(void)

undefined8 FUN_1450ae760(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((*(int *)(param_1 + 0xb0) != 0) &&
     (iVar4 = *(int *)(param_1 + 0xb0) + -1, *(int *)(param_1 + 0xb0) = iVar4, iVar4 == 0)) {
    if (*(int *)(param_1 + 0x50) != 1) {
      FUN_1450ae290();
    }
    FUN_145082730(DAT_14c790fd8);
    piVar1 = DAT_14c791060;
    uVar3 = *(uint *)(param_1 + 0x80);
    lVar7 = 0;
    if (uVar3 != 0) {
      do {
        while (iVar4 = *piVar1, iVar4 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
          if (*piVar1 < 0) goto LAB_1450ae7f0;
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
        }
        LOCK();
        iVar2 = *piVar1;
        if (iVar4 == iVar2) {
          *piVar1 = iVar4 + 1;
        }
        UNLOCK();
      } while (iVar4 != iVar2);
LAB_1450ae7f0:
      lVar6 = lVar7;
      if (piVar1[0x12] != 0) {
        for (lVar5 = *(longlong *)
                      (*(longlong *)(piVar1 + 0x10) +
                      ((ulonglong)uVar3 % (ulonglong)(uint)piVar1[0x12]) * 8);
            (lVar6 = lVar7, lVar5 != 0 && (lVar6 = lVar5, *(uint *)(lVar5 + 0x10) != uVar3));
            lVar5 = *(longlong *)(lVar5 + 8)) {
        }
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
          UNLOCK();
        }
      }
      iVar4 = *piVar1;
      while (-1 < iVar4) {
        LOCK();
        iVar2 = *piVar1;
        if (iVar4 == iVar2) {
          *piVar1 = iVar4 + -1;
        }
        UNLOCK();
        if (iVar4 == iVar2) {
          if ((iVar4 + -1 == 0) && (0 < piVar1[0xc])) {
            SetEvent(*(HANDLE *)(piVar1 + 0xe));
          }
          goto LAB_1450ae86e;
        }
        iVar4 = *piVar1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1450ae86e:
      lVar5 = lVar6 + -0x10;
      if (lVar6 == 0) {
        lVar5 = lVar7;
      }
      if (lVar5 != 0) {
        FUN_1450d49a0(lVar5,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x74),param_2,
                      param_3);
        LOCK();
        piVar1 = (int *)(lVar5 + 0x24);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*(longlong *)(lVar5 + 0x10) + 0x18))();
        }
      }
    }
    piVar1 = DAT_14c791060;
    uVar3 = *(uint *)(param_1 + 0x98);
    if (uVar3 != 0) {
      do {
        while (iVar4 = *piVar1, iVar4 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
          if (*piVar1 < 0) goto LAB_1450ae8d1;
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
        }
        LOCK();
        iVar2 = *piVar1;
        if (iVar4 == iVar2) {
          *piVar1 = iVar4 + 1;
        }
        UNLOCK();
      } while (iVar4 != iVar2);
LAB_1450ae8d1:
      lVar6 = lVar7;
      if (piVar1[0x12] != 0) {
        for (lVar5 = *(longlong *)
                      (*(longlong *)(piVar1 + 0x10) +
                      ((ulonglong)uVar3 % (ulonglong)(uint)piVar1[0x12]) * 8);
            (lVar6 = lVar7, lVar5 != 0 && (lVar6 = lVar5, *(uint *)(lVar5 + 0x10) != uVar3));
            lVar5 = *(longlong *)(lVar5 + 8)) {
        }
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
          UNLOCK();
        }
      }
      iVar4 = *piVar1;
      while (-1 < iVar4) {
        LOCK();
        iVar2 = *piVar1;
        if (iVar4 == iVar2) {
          *piVar1 = iVar4 + -1;
        }
        UNLOCK();
        if (iVar4 == iVar2) {
          if ((iVar4 + -1 == 0) && (0 < piVar1[0xc])) {
            SetEvent(*(HANDLE *)(piVar1 + 0xe));
          }
          goto LAB_1450ae97d;
        }
        iVar4 = *piVar1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1450ae97d:
      lVar5 = lVar6 + -0x10;
      if (lVar6 == 0) {
        lVar5 = lVar7;
      }
      if (lVar5 != 0) {
        FUN_1450d49a0(lVar5,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x74),param_2,
                      param_3);
        LOCK();
        piVar1 = (int *)(lVar5 + 0x24);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*(longlong *)(lVar5 + 0x10) + 0x18))();
        }
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(DAT_14c790fd8 + 0x88) - *(int *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0xb4) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  return 1;
}



// FUNCTION 1450aea40 FUN_1450aea40 body=673 status=ok
// SIG undefined FUN_1450aea40(void)

undefined8 FUN_1450aea40(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 local_48 [2];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined2 local_29;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  byte local_c;
  
  piVar1 = DAT_14c791060;
  if (*(int *)(param_1 + 0x50) == 0) {
    return 1;
  }
  local_40 = *(longlong *)(param_1 + 0x58);
  if (local_40 == 0) {
    return 2;
  }
  local_38 = *(undefined4 *)(param_1 + 0x74);
  bVar5 = *(byte *)(param_2 + 0xc) & 1;
  plVar7 = (longlong *)0x0;
  local_29 = 0;
  local_20 = 0;
  local_c = (*(byte *)(param_2 + 0xd) & 1) * '\x02' | bVar5 | local_c & 0xfc;
  local_18 = 0;
  local_2c = 0;
  local_2a = 0;
  local_30 = 4;
  local_34 = 0;
  if (bVar5 == 0) {
    local_10 = *(undefined4 *)(param_2 + 8);
  }
  else {
    local_10 = *(undefined4 *)(param_2 + 8);
  }
  uVar3 = *(uint *)(param_1 + 0x80);
  local_48[0] = 4;
  if (uVar3 == 0) {
    uVar3 = *(uint *)(param_1 + 0x98);
    if (uVar3 == 0) {
      return 0xf;
    }
    do {
      while (iVar4 = *piVar1, iVar4 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
        if (*piVar1 < 0) goto LAB_1450aebf4;
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
      }
      LOCK();
      iVar2 = *piVar1;
      if (iVar4 == iVar2) {
        *piVar1 = iVar4 + 1;
      }
      UNLOCK();
    } while (iVar4 != iVar2);
LAB_1450aebf4:
    if (piVar1[0x12] != 0) {
      for (plVar6 = *(longlong **)
                     (*(longlong *)(piVar1 + 0x10) +
                     ((ulonglong)uVar3 % (ulonglong)(uint)piVar1[0x12]) * 8);
          (plVar8 = plVar7, plVar6 != (longlong *)0x0 &&
          (plVar8 = plVar6, *(uint *)(plVar6 + 2) != uVar3)); plVar6 = (longlong *)plVar6[1]) {
      }
      plVar7 = plVar8;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar4 = *piVar1;
    while (-1 < iVar4) {
      LOCK();
      iVar2 = *piVar1;
      if (iVar4 == iVar2) {
        *piVar1 = iVar4 + -1;
      }
      UNLOCK();
      if (iVar4 == iVar2) {
        if ((iVar4 + -1 == 0) && (0 < piVar1[0xc])) {
          SetEvent(*(HANDLE *)(piVar1 + 0xe));
        }
        goto LAB_1450aec6a;
      }
      iVar4 = *piVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1450aec6a:
    if (plVar7 == (longlong *)0x0) {
      return 0xf;
    }
    plVar6 = plVar7 + -2;
  }
  else {
    do {
      while (iVar4 = *piVar1, iVar4 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
        if (*piVar1 < 0) goto LAB_1450aeb1f;
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
      }
      LOCK();
      iVar2 = *piVar1;
      if (iVar4 == iVar2) {
        *piVar1 = iVar4 + 1;
      }
      UNLOCK();
    } while (iVar4 != iVar2);
LAB_1450aeb1f:
    plVar8 = plVar7;
    if (piVar1[0x12] != 0) {
      for (plVar6 = *(longlong **)
                     (*(longlong *)(piVar1 + 0x10) +
                     ((ulonglong)uVar3 % (ulonglong)(uint)piVar1[0x12]) * 8);
          (plVar8 = plVar7, plVar6 != (longlong *)0x0 &&
          (plVar8 = plVar6, *(uint *)(plVar6 + 2) != uVar3)); plVar6 = (longlong *)plVar6[1]) {
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar4 = *piVar1;
    while (-1 < iVar4) {
      LOCK();
      iVar2 = *piVar1;
      if (iVar4 == iVar2) {
        *piVar1 = iVar4 + -1;
      }
      UNLOCK();
      if (iVar4 == iVar2) {
        if ((iVar4 + -1 != 0) || (piVar1[0xc] < 1)) goto LAB_1450aeb9a;
        SetEvent(*(HANDLE *)(piVar1 + 0xe));
        plVar6 = plVar8 + -2;
        if (plVar8 == (longlong *)0x0) {
          plVar6 = plVar7;
        }
        goto LAB_1450aec73;
      }
      iVar4 = *piVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1450aeb9a:
    plVar6 = plVar8 + -2;
    if (plVar8 == (longlong *)0x0) {
      plVar6 = plVar7;
    }
  }
LAB_1450aec73:
  if (plVar6 == (longlong *)0x0) {
    return 0xf;
  }
  (**(code **)(*plVar6 + 0x80))(plVar6,local_48);
  LOCK();
  piVar1 = (int *)((longlong)plVar6 + 0x24);
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar4 == 1) {
    (**(code **)(plVar6[2] + 0x18))();
  }
  return 1;
}



// FUNCTION 1450aecf0 FUN_1450aecf0 body=24 status=ok
// SIG undefined FUN_1450aecf0(void)

void FUN_1450aecf0(longlong param_1)

{
  if ((*(int *)(param_1 + 0x50) == 2) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_1450ae290(param_1,0,4);
    return;
  }
  return;
}



// FUNCTION 1450aed10 FUN_1450aed10 body=104 status=ok
// SIG undefined FUN_1450aed10(void)

void FUN_1450aed10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  void *pvVar1;
  
  pvVar1 = AK::MemoryMgr::Malloc(0,0x408);
  if (pvVar1 != (void *)0x0) {
    FUN_14538edd0(pvVar1,param_4,param_2,param_3,param_5,*(undefined4 *)(param_1 + 0x7c));
  }
  return;
}



// FUNCTION 1450aed80 FUN_1450aed80 body=90 status=ok
// SIG undefined FUN_1450aed80(void)

void FUN_1450aed80(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  *param_2 = *(undefined4 *)(param_1 + 0x98);
  *param_3 = *(undefined8 *)(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x0001450aedd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 1450aede0 FUN_1450aede0 body=99 status=ok
// SIG undefined FUN_1450aede0(void)

void FUN_1450aede0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  *param_2 = *(undefined4 *)(param_1 + 0xb4);
  *param_3 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xb8) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001450aee3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 1450aee50 FUN_1450aee50 body=95 status=ok
// SIG undefined FUN_1450aee50(void)

void FUN_1450aee50(longlong param_1)

{
  int iVar1;
  undefined2 uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x50);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if (iVar1 == 2) {
    uVar2 = FUN_145087f90();
    lVar3 = FUN_145080f50(DAT_14c790fd8,0x19,uVar2);
    LOCK();
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    UNLOCK();
    *(longlong *)(lVar3 + 4) = param_1;
    *(undefined4 *)(lVar3 + 0xc) = 6;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1450aeeb0 FUN_1450aeeb0 body=261 status=ok
// SIG undefined FUN_1450aeeb0(void)

void FUN_1450aeeb0(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0x58) != param_3) && (param_3 != 0)) {
    return;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  else {
    if (param_2 == 1) {
      if (*(int *)(param_1 + 0x50) == 0) {
        return;
      }
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      if (*(int *)(param_1 + 0xb0) != 1) {
        return;
      }
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(DAT_14c790fd8 + 0x88);
      return;
    }
    if (param_2 != 2) {
      return;
    }
    if (*(int *)(param_1 + 0xb0) == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0xb0) + -1;
    *(int *)(param_1 + 0xb0) = iVar1;
    if (iVar1 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x50) != 1) {
      FUN_1450ae290(param_1,0,4);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(DAT_14c790fd8 + 0x88) - *(int *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 1450aefd0 FUN_1450aefd0 body=1001 status=ok
// SIG undefined FUN_1450aefd0(void)

int FUN_1450aefd0(longlong param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  byte bVar8;
  longlong *plVar9;
  bool bVar10;
  byte local_res8 [8];
  undefined4 local_398;
  undefined4 local_394;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  longlong lStack_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_358 [2];
  longlong local_350;
  undefined8 local_348;
  undefined4 *local_340;
  int *local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined8 *local_2d0;
  undefined8 local_2c8;
  undefined2 local_2c0 [2];
  char local_2bb;
  undefined8 local_2b0;
  undefined1 local_2a8 [600];
  undefined4 local_50;
  byte local_4c;
  byte local_48;
  
  piVar1 = DAT_14c791060;
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return 2;
  }
  do {
    while (iVar4 = *piVar1, iVar4 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
      if (*piVar1 < 0) goto LAB_1450af021;
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
    }
    LOCK();
    iVar2 = *piVar1;
    if (iVar4 == iVar2) {
      *piVar1 = iVar4 + 1;
    }
    UNLOCK();
  } while (iVar4 != iVar2);
LAB_1450af021:
  plVar6 = (longlong *)0x0;
  plVar7 = plVar6;
  if (piVar1[0x12] != 0) {
    for (plVar9 = *(longlong **)
                   (*(longlong *)(piVar1 + 0x10) +
                   ((ulonglong)param_2 % (ulonglong)(uint)piVar1[0x12]) * 8);
        (plVar7 = plVar6, plVar9 != (longlong *)0x0 &&
        (plVar7 = plVar9, *(uint *)(plVar9 + 2) != param_2)); plVar9 = (longlong *)plVar9[1]) {
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0x14) = *(int *)((longlong)plVar7 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar4 = *piVar1;
  while (-1 < iVar4) {
    LOCK();
    iVar2 = *piVar1;
    if (iVar4 == iVar2) {
      *piVar1 = iVar4 + -1;
    }
    UNLOCK();
    if (iVar4 == iVar2) {
      if ((iVar4 + -1 == 0) && (0 < piVar1[0xc])) {
        SetEvent(*(HANDLE *)(piVar1 + 0xe));
      }
      goto LAB_1450af09f;
    }
    iVar4 = *piVar1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1450af09f:
  plVar9 = plVar7 + -2;
  if (plVar7 == (longlong *)0x0) {
    plVar9 = plVar6;
  }
  if (plVar9 == (longlong *)0x0) {
    return 0xf;
  }
  local_390 = 0;
  uStack_388 = 0;
  local_394 = param_5;
  local_380 = 0;
  lStack_378 = 0;
  local_370 = 0;
  local_368 = 0;
  local_360 = 0;
  local_398 = param_4;
  lVar5 = FUN_14538ec50();
  bVar10 = lStack_378 != 0;
  lStack_378 = lVar5;
  if (bVar10) {
    FUN_14538eca0();
  }
  if (lStack_378 == 0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0x24);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(plVar9[2] + 0x18))();
    }
    FUN_14538dec0(&local_368);
    if (lStack_378 == 0) {
      return 2;
    }
    FUN_14538eca0();
    return 2;
  }
  local_350 = 0;
  local_328 = 0;
  local_330 = 0;
  local_338 = (int *)0x0;
  local_2dc = 0;
  local_2c8 = 0;
  local_2c0[0] = 0xff00;
  local_2b0 = 0;
  FUN_144d51920(local_2a8);
  local_328._4_4_ = *(undefined4 *)(param_1 + 0x74);
  local_4c = local_4c & 0xfe;
  local_48 = local_48 & 0xf3 | 3;
  piVar1 = *(int **)(param_1 + 0x60);
  local_330 = *(undefined8 *)(param_1 + 0x68);
  local_328._0_4_ = *(undefined4 *)(param_1 + 0x70);
  local_50 = 0;
  local_320 = 0;
  local_358[0] = 2;
  local_350 = param_1;
  if (local_338 != (int *)0x0) {
    FUN_144d4a460();
  }
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  bVar8 = local_48 | 2;
  local_2d8 = 0;
  local_348 = *(undefined8 *)(param_1 + 0x58);
  local_340 = &local_398;
  local_2d0 = &local_390;
  local_2d4 = (undefined4)((longlong)((ulonglong)DAT_14c72f42c * (longlong)param_3) / 1000);
  if (*(int *)(param_1 + 0x7c) == 0) {
    iVar4 = *(int *)(param_1 + 0xbc);
    while (iVar2 = DAT_14c72f598, DAT_14c72f598 = iVar2, iVar4 == 0) {
      DAT_14c72f598 = iVar2 + 1;
      *(int *)(param_1 + 0xbc) = iVar2;
      iVar4 = iVar2;
    }
  }
  local_2c8 = CONCAT44(param_2,*(undefined4 *)(param_1 + 0xbc));
  local_338 = piVar1;
  if (((char)local_2c0[0] == -0x70) && (local_2bb != '\0')) {
    local_res8[0] = local_48 & 1;
    local_48 = bVar8;
    uVar3 = FUN_1450e98e0(local_358);
    iVar4 = FUN_14536f6c0(plVar9,local_2c0,uVar3,local_res8,local_348,local_328._4_4_);
    if (iVar4 != 1) goto LAB_1450af35d;
    bVar8 = local_res8[0] & 1 | local_48 & 0xfe;
  }
  local_48 = bVar8;
  iVar4 = FUN_14536f160(plVar9,local_358);
  if (iVar4 == 3) {
    iVar4 = 1;
  }
  else if (iVar4 == 1) {
    iVar4 = (**(code **)(*plVar9 + 0x250))(plVar9,local_358);
  }
LAB_1450af35d:
  LOCK();
  piVar1 = (int *)((longlong)plVar9 + 0x24);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)(plVar9[2] + 0x18))();
  }
  FUN_144d51aa0(local_2a8);
  if (local_338 != (int *)0x0) {
    FUN_144d4a460();
  }
  FUN_14538dec0(&local_368);
  if (lStack_378 != 0) {
    FUN_14538eca0();
  }
  return iVar4;
}



// FUNCTION 1450af3c0 FUN_1450af3c0 body=679 status=ok
// SIG undefined FUN_1450af3c0(void)

undefined8 FUN_1450af3c0(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar7 = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  FUN_145083690(DAT_14c790fd8);
  piVar1 = DAT_14c791060;
  uVar3 = *(uint *)(param_1 + 0x98);
  if ((uVar3 != 0) && (param_2 == 0)) {
    do {
      while (iVar4 = *piVar1, iVar4 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
        if (*piVar1 < 0) goto LAB_1450af433;
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
      }
      LOCK();
      iVar2 = *piVar1;
      if (iVar4 == iVar2) {
        *piVar1 = iVar4 + 1;
      }
      UNLOCK();
    } while (iVar4 != iVar2);
LAB_1450af433:
    if (piVar1[0x12] != 0) {
      for (lVar7 = *(longlong *)
                    (*(longlong *)(piVar1 + 0x10) +
                    ((ulonglong)uVar3 % (ulonglong)(uint)piVar1[0x12]) * 8); lVar7 != 0;
          lVar7 = *(longlong *)(lVar7 + 8)) {
        if (*(uint *)(lVar7 + 0x10) == uVar3) goto LAB_1450af462;
      }
      lVar7 = 0;
LAB_1450af462:
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar4 = *piVar1;
    while (-1 < iVar4) {
      LOCK();
      iVar2 = *piVar1;
      if (iVar4 == iVar2) {
        *piVar1 = iVar4 + -1;
      }
      UNLOCK();
      if (iVar4 == iVar2) {
        if ((iVar4 + -1 == 0) && (0 < piVar1[0xc])) {
          SetEvent(*(HANDLE *)(piVar1 + 0xe));
        }
        goto LAB_1450af4ae;
      }
      iVar4 = *piVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1450af4ae:
    lVar5 = lVar7 + -0x10;
    if (lVar7 == 0) {
      lVar5 = 0;
    }
    if (lVar5 != 0) {
      FUN_1450d48f0(lVar5,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x74),param_3,
                    param_4);
      LOCK();
      piVar1 = (int *)(lVar5 + 0x24);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*(longlong *)(lVar5 + 0x10) + 0x18))();
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  piVar1 = DAT_14c791060;
  uVar3 = *(uint *)(param_1 + 0x80);
  if (uVar3 != 0) {
    do {
      while (iVar4 = *piVar1, iVar4 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
        if (*piVar1 < 0) goto LAB_1450af537;
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
      }
      LOCK();
      iVar2 = *piVar1;
      if (iVar4 == iVar2) {
        *piVar1 = iVar4 + 1;
      }
      UNLOCK();
    } while (iVar4 != iVar2);
LAB_1450af537:
    if (piVar1[0x12] == 0) {
      lVar7 = 0;
    }
    else {
      for (lVar7 = *(longlong *)
                    (*(longlong *)(piVar1 + 0x10) +
                    ((ulonglong)uVar3 % (ulonglong)(uint)piVar1[0x12]) * 8); lVar7 != 0;
          lVar7 = *(longlong *)(lVar7 + 8)) {
        if (*(uint *)(lVar7 + 0x10) == uVar3) goto LAB_1450af563;
      }
      lVar7 = 0;
LAB_1450af563:
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar4 = *piVar1;
    while (-1 < iVar4) {
      LOCK();
      iVar2 = *piVar1;
      if (iVar4 == iVar2) {
        *piVar1 = iVar4 + -1;
      }
      UNLOCK();
      if (iVar4 == iVar2) {
        if ((iVar4 + -1 == 0) && (0 < piVar1[0xc])) {
          SetEvent(*(HANDLE *)(piVar1 + 0xe));
        }
        goto LAB_1450af5d9;
      }
      iVar4 = *piVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1450af5d9:
    plVar6 = (longlong *)(lVar7 + -0x10);
    if (lVar7 == 0) {
      plVar6 = (longlong *)0x0;
    }
    if (plVar6 != (longlong *)0x0) {
      if (param_2 == 0) {
        FUN_1450d48f0(plVar6,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x74),param_3
                      ,param_4);
      }
      else {
        (**(code **)(*plVar6 + 0xa0))
                  (plVar6,*(undefined8 *)(param_1 + 0x58),plVar6,*(undefined4 *)(param_1 + 0x74));
      }
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0x24);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(plVar6[2] + 0x18))();
      }
    }
  }
  return 1;
}



// FUNCTION 1450af670 FUN_1450af670 body=301 status=ok
// SIG undefined FUN_1450af670(void)

int FUN_1450af670(longlong param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  void *_Dst;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    while (iVar2 != 0) {
      piVar1 = *(int **)(param_1 + 0x18);
      *param_3 = *(undefined8 *)(piVar1 + 2);
      if (*piVar1 != 0) {
        FUN_1450adff0(param_1 + 0x98,piVar1);
        *param_2 = piVar1[1];
        FUN_1450ae040(param_1 + 0x18,0);
        break;
      }
      _Dst = *(void **)(param_1 + 0x18);
      if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
        FUN_144d4a460();
      }
      if (1 < *(uint *)(param_1 + 0x20)) {
        memmove(_Dst,(void *)((longlong)_Dst + 0x18),
                (ulonglong)(*(uint *)(param_1 + 0x20) * 0x18 - 0x18));
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      FUN_1450b2bc0(DAT_14c790fc0,*(undefined4 *)(param_1 + 0x74),0,*param_3);
      iVar2 = *(int *)(param_1 + 0x20);
    }
    iVar2 = *(int *)(param_1 + 0x98);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x50) = 2;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return iVar2;
}



// FUNCTION 1450af7a0 FUN_1450af7a0 body=308 status=ok
// SIG undefined FUN_1450af7a0(void)

undefined8 * FUN_1450af7a0(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_149c269a0;
  lVar5 = param_1[3];
  if (lVar5 != 0) {
    lVar1 = lVar5 + (ulonglong)*(uint *)(param_1 + 4) * 0x18;
    for (; lVar5 != lVar1; lVar5 = lVar5 + 0x18) {
      if (*(longlong *)(lVar5 + 0x10) != 0) {
        FUN_144d4a460();
      }
    }
    *(undefined4 *)(param_1 + 4) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[3]);
    param_1[3] = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  puVar2 = (undefined8 *)param_1[0xb];
  if (puVar2 != (undefined8 *)0x0) {
    if ((*(uint *)(puVar2 + 0xc) < 2) && (*(char *)((longlong)puVar2 + 100) != '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar4 = *(uint *)(puVar2 + 0xc) - 1;
    *(uint *)(puVar2 + 0xc) = uVar4;
    if ((uVar4 == 0) || (((bVar3 && (uVar4 < 2)) && (*(char *)((longlong)puVar2 + 100) != '\0')))) {
      FUN_1453550a0(puVar2);
    }
    if (*(int *)(puVar2 + 0xc) == 0) {
      (**(code **)*puVar2)(puVar2,0);
      AK::MemoryMgr::Free(4,puVar2);
    }
  }
  if (param_1[0x15] != 0) {
    FUN_144d4a460();
  }
  if (param_1[0x12] != 0) {
    FUN_144d4a460();
  }
  if (param_1[0xc] != 0) {
    FUN_144d4a460();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  FUN_145374b40(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1450af8e0 FUN_1450af8e0 body=21 status=ok
// SIG undefined FUN_1450af8e0(void)

undefined4 * FUN_1450af8e0(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 4) = 100;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 1450af900 FUN_1450af900 body=20 status=ok
// SIG undefined FUN_1450af900(void)

void FUN_1450af900(longlong param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    AK::MemoryMgr::Free(1,*(void **)(param_1 + 8));
    return;
  }
  return;
}



// FUNCTION 1450af920 FUN_1450af920 body=134 status=ok
// SIG undefined FUN_1450af920(void)

undefined8 FUN_1450af920(undefined4 *param_1,void *param_2,uint param_3,undefined4 param_4)

{
  void *_Dst;
  
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    AK::MemoryMgr::Free(1,*(void **)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = 0;
  }
  if (param_3 != 0) {
    _Dst = AK::MemoryMgr::Malloc(1,(ulonglong)param_3);
    *(void **)(param_1 + 2) = _Dst;
    if (_Dst == (void *)0x0) {
      return 0x34;
    }
    memcpy(_Dst,param_2,(ulonglong)param_3);
  }
  *param_1 = param_4;
  return 1;
}



// FUNCTION 1450af9b0 FUN_1450af9b0 body=284 status=ok
// SIG undefined FUN_1450af9b0(void)

/* WARNING: Removing unreachable block (ram,0x0001450afac2) */

undefined4
FUN_1450af9b0(int *param_1,undefined4 param_2,undefined8 param_3,ulonglong param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 local_18 [16];
  
  if ((int)param_4 != *param_1) {
    return 0;
  }
  if ((int)param_4 == 0) {
    lVar3 = *(longlong *)(param_1 + 2);
  }
  else if (*(char *)((longlong)param_1 + 0x12) == '\0') {
    lVar3 = FUN_1450b00b0(param_1,*(undefined8 *)(param_1 + 2),param_3,param_4,param_2,param_6,
                          param_7);
  }
  else {
    lVar3 = FUN_1450afd70(param_1,param_3,param_4 & 0xffffffff,param_2,param_5,local_18,param_6,
                          param_7);
  }
  if (lVar3 != 0) {
    if ((*(ushort *)(param_1 + 4) < 100) || (bVar1 = false, *(ushort *)(lVar3 + 10) < 100)) {
      DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
      bVar1 = false;
      if ((ushort)((short)param_1[4] * *(short *)(lVar3 + 10)) <=
          (ushort)(int)((double)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656612875245797e-06)) {
        bVar1 = true;
      }
    }
    uVar2 = *(undefined4 *)(lVar3 + 4);
    if (bVar1) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 1450afad0 FUN_1450afad0 body=270 status=ok
// SIG undefined FUN_1450afad0(void)

undefined8 FUN_1450afad0(int *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  
  if (*param_1 != 1) {
    return 0;
  }
  if (*(ushort *)(*(longlong *)(param_1 + 2) + 6) != 0) {
    uVar10 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 2) + 6);
    piVar9 = (int *)0x0;
    do {
      piVar6 = (int *)*param_2;
      uVar8 = (ulonglong)*(uint *)(param_2 + 1);
      lVar4 = *(longlong *)(param_1 + 2);
      piVar1 = piVar6 + uVar8 * 2;
      iVar2 = *(int *)(lVar4 + (longlong)piVar9);
      for (; (piVar6 != piVar1 && (*piVar6 != iVar2)); piVar6 = piVar6 + 2) {
      }
      piVar7 = piVar6 + 1;
      if (piVar6 == piVar1) {
        piVar7 = (int *)0x0;
      }
      if (piVar7 == (int *)0x0) {
        if (((uVar8 < *(uint *)((longlong)param_2 + 0xc)) ||
            (cVar5 = FUN_1450b0250(param_2), cVar5 != '\0')) &&
           (uVar8 < *(uint *)((longlong)param_2 + 0xc))) {
          uVar3 = *(uint *)(param_2 + 1);
          *(uint *)(param_2 + 1) = uVar3 + 1;
          piVar1 = (int *)(*param_2 + (ulonglong)uVar3 * 8);
          if (piVar1 != (int *)0x0) {
            *piVar1 = iVar2;
            piVar1[1] = *(int *)(lVar4 + 4 + (longlong)piVar9);
          }
        }
      }
      else {
        *piVar7 = *(int *)(lVar4 + 4 + (longlong)piVar9);
      }
      piVar9 = piVar9 + 3;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return 1;
}



// FUNCTION 1450afbe0 FUN_1450afbe0 body=60 status=ok
// SIG undefined FUN_1450afbe0(void)

undefined4 FUN_1450afbe0(int *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*param_1 == 1) {
    lVar1 = *(longlong *)(param_1 + 2);
    uVar3 = 0;
    if (*(ushort *)(lVar1 + 6) != 0) {
      do {
        if (param_2 == *(int *)(lVar1 + uVar3 * 0xc)) {
          return *(undefined4 *)(lVar1 + uVar3 * 0xc + 4);
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *(ushort *)(lVar1 + 6));
    }
  }
  return 0;
}



// FUNCTION 1450afc20 FUN_1450afc20 body=186 status=ok
// SIG undefined FUN_1450afc20(void)

undefined8 FUN_1450afc20(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 1);
  iVar3 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  _Var6 = (ulonglong)(iVar3 + uVar1) << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450afcbd;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_1450afcbd:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450afce0 FUN_1450afce0 body=130 status=ok
// SIG undefined FUN_1450afce0(void)

void FUN_1450afce0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  
  uVar3 = *(uint *)(param_3 + 1);
  if ((*(uint *)((longlong)param_3 + 0xc) <= uVar3) &&
     (cVar4 = FUN_1450afc20(param_3), cVar4 == '\0')) {
    return;
  }
  if (uVar3 < *(uint *)((longlong)param_3 + 0xc)) {
    uVar3 = *(uint *)(param_3 + 1);
    *(uint *)(param_3 + 1) = uVar3 + 1;
    plVar1 = (longlong *)(*param_3 + (ulonglong)uVar3 * 8);
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = param_2;
      uVar2 = *(ushort *)(param_2 + 8);
      if (uVar2 == 100) {
        *(int *)(param_3 + 2) = (int)param_3[2] + 1;
        *(uint *)(param_3 + 3) = (int)param_3[3] + (uint)uVar2;
        return;
      }
      if (uVar2 == 0) {
        *(int *)((longlong)param_3 + 0x14) = *(int *)((longlong)param_3 + 0x14) + 1;
      }
      *(uint *)(param_3 + 3) = (int)param_3[3] + (uint)uVar2;
    }
  }
  return;
}



// FUNCTION 1450afd70 FUN_1450afd70 body=440 status=ok
// SIG undefined FUN_1450afd70(void)

longlong FUN_1450afd70(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                      undefined8 param_5,undefined1 *param_6,undefined8 param_7,undefined8 param_8)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *local_28;
  ulonglong local_20;
  undefined8 local_18;
  uint local_10;
  
  lVar4 = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_1450aff30(param_1,*(undefined8 *)(param_1 + 8),param_2,param_3,&local_28,param_4,param_7,
                param_8);
  uVar5 = local_20 & 0xffffffff;
  if ((uint)local_20 == 0) {
    *param_6 = 4;
  }
  else {
    DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
    uVar1 = DAT_14c791078 >> 0x21;
    if ((int)local_18 == 0) {
      if (local_18._4_4_ < (uint)local_20) {
        uVar1 = uVar1 % (ulonglong)local_10;
        for (plVar2 = local_28; plVar2 != local_28 + uVar5; plVar2 = plVar2 + 1) {
          if ((uint)uVar1 < (uint)*(ushort *)(*plVar2 + 8)) {
            *(uint *)(param_6 + 8) = (uint)local_20;
            *(uint *)(param_6 + 4) = (uint)local_20 - local_18._4_4_;
            *param_6 = 2;
            lVar4 = *plVar2;
            break;
          }
          uVar1 = (ulonglong)((uint)uVar1 - (uint)*(ushort *)(*plVar2 + 8));
        }
      }
      else {
        uVar1 = uVar1 % (ulonglong)local_18._4_4_;
        for (plVar2 = local_28; plVar2 != local_28 + uVar5; plVar2 = plVar2 + 1) {
          if ((*(short *)(*plVar2 + 8) == 0) &&
             (iVar3 = (int)uVar1, uVar1 = (ulonglong)(iVar3 - 1), iVar3 == 0)) {
            *(uint *)(param_6 + 4) = local_18._4_4_;
            *(uint *)(param_6 + 8) = (uint)local_20;
            *param_6 = 3;
            lVar4 = *plVar2;
            break;
          }
        }
      }
    }
    else {
      uVar1 = uVar1 % (local_18 & 0xffffffff);
      for (plVar2 = local_28; plVar2 != local_28 + uVar5; plVar2 = plVar2 + 1) {
        if ((*(short *)(*plVar2 + 8) == 100) &&
           (iVar3 = (int)uVar1, uVar1 = (ulonglong)(iVar3 - 1), iVar3 == 0)) {
          *(int *)(param_6 + 4) = (int)local_18;
          *(uint *)(param_6 + 8) = (uint)local_20;
          *param_6 = 1;
          lVar4 = *plVar2;
          break;
        }
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    local_20 = local_20 & 0xffffffff00000000;
    AK::MemoryMgr::Free(0,local_28);
  }
  return lVar4;
}



// FUNCTION 1450aff30 FUN_1450aff30 body=373 status=ok
// SIG undefined FUN_1450aff30(void)

void FUN_1450aff30(longlong param_1,int *param_2,uint *param_3,int param_4,undefined8 param_5,
                  undefined4 param_6,code *param_7,undefined8 param_8)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *(longlong *)(param_1 + 8);
  do {
    if (lVar2 == 0) {
      return;
    }
    iVar5 = 0;
    iVar6 = *(ushort *)((longlong)param_2 + 6) - 1;
    param_2 = (int *)(lVar2 + (ulonglong)*(ushort *)(param_2 + 1) * 0xc);
    do {
      iVar4 = (iVar6 - iVar5) / 2 + iVar5;
      piVar1 = param_2 + (longlong)iVar4 * 3;
      if (*param_3 < (uint)param_2[(longlong)iVar4 * 3]) {
        iVar6 = iVar4 + -1;
      }
      else {
        if (*param_3 <= (uint)param_2[(longlong)iVar4 * 3]) {
          if (piVar1 != (int *)0x0) {
            if (param_4 == 1) {
              if ((param_7 == (code *)0x0) || (cVar3 = (*param_7)(param_6,piVar1[1]), cVar3 != '\0')
                 ) {
                FUN_1450afce0(param_1,piVar1);
              }
            }
            else {
              FUN_1450aff30(param_1,piVar1,param_3 + 1,param_4 + -1,param_5,param_6,param_7,param_8)
              ;
            }
          }
          break;
        }
        iVar5 = iVar4 + 1;
      }
    } while (iVar5 <= iVar6);
    if (*param_2 != 0) {
      return;
    }
    if (*param_3 == 0) {
      return;
    }
    if (param_4 == 1) {
      if ((param_7 != (code *)0x0) &&
         (cVar3 = (*param_7)(param_6,param_2[1],param_8), cVar3 == '\0')) {
        return;
      }
      FUN_1450afce0(param_1,param_2,param_5);
      return;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    param_4 = param_4 + -1;
    param_3 = param_3 + 1;
  } while( true );
}



// FUNCTION 1450b00b0 FUN_1450b00b0 body=404 status=ok
// SIG undefined FUN_1450b00b0(void)

int * FUN_1450b00b0(longlong param_1,longlong param_2,uint *param_3,int param_4,undefined4 param_5,
                   code *param_6,undefined8 param_7)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (*(ushort *)(param_2 + 6) != 0)) {
    iVar6 = *(ushort *)(param_2 + 6) - 1;
    piVar4 = (int *)(*(longlong *)(param_1 + 8) + (ulonglong)*(ushort *)(param_2 + 4) * 0xc);
    iVar5 = 0;
    do {
      iVar1 = iVar5 + (iVar6 - iVar5) / 2;
      piVar3 = piVar4 + (longlong)iVar1 * 3;
      if (*param_3 < (uint)piVar4[(longlong)iVar1 * 3]) {
        iVar6 = iVar1 + -1;
      }
      else {
        if (*param_3 <= (uint)piVar4[(longlong)iVar1 * 3]) {
          if (piVar3 != (int *)0x0) {
            if (param_4 == 1) {
              if (param_6 == (code *)0x0) {
                return piVar3;
              }
              cVar2 = (*param_6)(param_5,piVar3[1],param_7);
              piVar4 = piVar3;
              goto joined_r0x0001450b01c6;
            }
            piVar3 = (int *)FUN_1450b00b0(param_1,piVar3,param_3 + 1,param_4 + -1,param_5,param_6,
                                          param_7);
            if (piVar3 != (int *)0x0) {
              return piVar3;
            }
          }
          break;
        }
        iVar5 = iVar1 + 1;
      }
    } while (iVar5 <= iVar6);
    if ((*piVar4 == 0) && (*param_3 != 0)) {
      if (param_4 != 1) {
        piVar4 = (int *)FUN_1450b00b0(param_1,piVar4,param_3 + 1,param_4 + -1,param_5,param_6,
                                      param_7);
        return piVar4;
      }
      if (param_6 == (code *)0x0) {
        return piVar4;
      }
      cVar2 = (*param_6)(param_5,piVar4[1],param_7);
joined_r0x0001450b01c6:
      if (cVar2 != '\0') {
        return piVar4;
      }
    }
  }
  return (int *)0x0;
}



// FUNCTION 1450b0250 FUN_1450b0250 body=186 status=ok
// SIG undefined FUN_1450b0250(void)

undefined8 FUN_1450b0250(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 1);
  iVar3 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  _Var6 = (ulonglong)(iVar3 + uVar1) << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450b02ed;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_1450b02ed:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450b0320 FUN_1450b0320 body=85 status=ok
// SIG undefined FUN_1450b0320(void)

undefined8 * FUN_1450b0320(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x40);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1453734e0(puVar1);
    *puVar1 = &PTR_FUN_149c269d0;
    FUN_1450af8e0(puVar1 + 3);
    puVar1[6] = 0;
    puVar1[7] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1450b0380 FUN_1450b0380 body=366 status=ok
// SIG undefined FUN_1450b0380(void)

undefined8 FUN_1450b0380(longlong param_1,longlong param_2)

{
  byte bVar1;
  void *pvVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte *pbVar7;
  uint uVar8;
  
  lVar6 = (ulonglong)(uint)(*(int *)(param_2 + 5) * 5) + param_2 + 5;
  uVar8 = *(uint *)(lVar6 + 4);
  *(ushort *)(param_1 + 0x28) = (ushort)*(byte *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(lVar6 + 8);
  uVar3 = FUN_1450af920(param_1 + 0x18,lVar6 + 9,uVar8);
  if ((int)uVar3 == 1) {
    pvVar2 = *(void **)(param_1 + 0x30);
    pbVar7 = (byte *)(lVar6 + 9 + (ulonglong)uVar8);
    bVar1 = *pbVar7;
    uVar5 = (ulonglong)bVar1;
    pbVar7 = pbVar7 + 1;
    if (bVar1 == 0) {
      if (pvVar2 != (void *)0x0) {
        AK::MemoryMgr::Free(1,pvVar2);
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
    }
    else {
      uVar8 = bVar1 + 4 & 0xfffffffc;
      pbVar4 = AK::MemoryMgr::Realloc(1,pvVar2,(ulonglong)(uVar8 + (uint)bVar1 * 4));
      if (pbVar4 == (byte *)0x0) {
        return 0x34;
      }
      *pbVar4 = bVar1;
      memcpy(pbVar4 + 1,pbVar7,uVar5);
      memcpy(pbVar4 + uVar8,pbVar7 + uVar5,uVar5 * 4);
      pbVar7 = pbVar7 + uVar5 + uVar5 * 4;
      *(byte **)(param_1 + 0x30) = pbVar4;
    }
    bVar1 = *pbVar7;
    uVar5 = (ulonglong)bVar1;
    pvVar2 = *(void **)(param_1 + 0x38);
    if (bVar1 == 0) {
      if (pvVar2 != (void *)0x0) {
        AK::MemoryMgr::Free(1,pvVar2);
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
    }
    else {
      uVar8 = bVar1 + 4 & 0xfffffffc;
      pbVar4 = AK::MemoryMgr::Realloc(1,pvVar2,(ulonglong)(uVar8 + (uint)bVar1 * 8));
      if (pbVar4 == (byte *)0x0) {
        return 0x34;
      }
      *pbVar4 = bVar1;
      memcpy(pbVar4 + 1,pbVar7 + 1,uVar5);
      memcpy(pbVar4 + uVar8,pbVar7 + 1 + uVar5,uVar5 * 8);
      *(byte **)(param_1 + 0x38) = pbVar4;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1450b04f0 FUN_1450b04f0 body=520 status=ok
// SIG undefined FUN_1450b04f0(void)

undefined8 FUN_1450b04f0(longlong param_1,undefined8 *param_2,uint *param_3,uint param_4)

{
  LPCWSTR lpWideCharStr;
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  CHAR local_128 [272];
  
  lVar4 = DAT_14c791060;
  uVar5 = (ulonglong)param_4;
  do {
    while (iVar2 = *(int *)(lVar4 + 0x318), iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 800));
      if (*(int *)(lVar4 + 0x318) < 0) goto LAB_1450b0539;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 800));
    }
    LOCK();
    bVar6 = iVar2 == *(int *)(lVar4 + 0x318);
    if (bVar6) {
      *(int *)(lVar4 + 0x318) = iVar2 + 1;
    }
    UNLOCK();
  } while (!bVar6);
LAB_1450b0539:
  iVar2 = *(int *)(lVar4 + 0x318);
  if (param_4 == *(uint *)(param_1 + 0x18)) {
    while (-1 < iVar2) {
      LOCK();
      bVar6 = iVar2 == *(int *)(lVar4 + 0x318);
      if (bVar6) {
        *(int *)(lVar4 + 0x318) = iVar2 + -1;
      }
      UNLOCK();
      if (bVar6) {
        if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar4 + 0x348))) {
          SetEvent(*(HANDLE *)(lVar4 + 0x350));
        }
        goto LAB_1450b0604;
      }
      iVar2 = *(int *)(lVar4 + 0x318);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 800));
LAB_1450b0604:
    if (param_4 != 0) {
      do {
        uVar1 = 0;
        if ((*(wchar_t *)*param_2 != L'\0') &&
           (uVar1 = AK::SoundEngine::GetIDFromString((wchar_t *)*param_2), uVar1 == 0)) {
          lpWideCharStr = (LPCWSTR)*param_2;
          lVar4 = -1;
          do {
            lVar4 = lVar4 + 1;
          } while (lpWideCharStr[lVar4] != L'\0');
          if ((uint)lVar4 < 0x102) {
            lVar4 = -1;
            do {
              lVar4 = lVar4 + 1;
            } while (lpWideCharStr[lVar4] != L'\0');
          }
          else {
            lVar4 = 0x102;
          }
          iVar2 = WideCharToMultiByte(0xfde9,0,lpWideCharStr,(int)lVar4,local_128,0x103,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
          local_128[iVar2] = '\0';
          uVar1 = 0;
        }
        *param_3 = uVar1;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    uVar3 = 1;
  }
  else {
    while (-1 < iVar2) {
      LOCK();
      bVar6 = iVar2 == *(int *)(lVar4 + 0x318);
      if (bVar6) {
        *(int *)(lVar4 + 0x318) = iVar2 + -1;
      }
      UNLOCK();
      if (bVar6) {
        if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar4 + 0x348))) {
          SetEvent(*(HANDLE *)(lVar4 + 0x350));
          return 2;
        }
        goto LAB_1450b0584;
      }
      iVar2 = *(int *)(lVar4 + 0x318);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 800));
LAB_1450b0584:
    uVar3 = 2;
  }
  return uVar3;
}



// FUNCTION 1450b0700 FUN_1450b0700 body=366 status=ok
// SIG undefined FUN_1450b0700(void)

undefined8 FUN_1450b0700(longlong param_1,undefined8 *param_2,uint *param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  lVar2 = DAT_14c791060;
  uVar4 = (ulonglong)param_4;
  do {
    while (iVar1 = *(int *)(lVar2 + 0x318), iVar1 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 800));
      if (*(int *)(lVar2 + 0x318) < 0) goto LAB_1450b0749;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 800));
    }
    LOCK();
    bVar5 = iVar1 == *(int *)(lVar2 + 0x318);
    if (bVar5) {
      *(int *)(lVar2 + 0x318) = iVar1 + 1;
    }
    UNLOCK();
  } while (!bVar5);
LAB_1450b0749:
  iVar1 = *(int *)(lVar2 + 0x318);
  if (param_4 != *(uint *)(param_1 + 0x18)) {
    while( true ) {
      if (iVar1 < 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 800));
        return 2;
      }
      LOCK();
      bVar5 = iVar1 == *(int *)(lVar2 + 0x318);
      if (bVar5) {
        *(int *)(lVar2 + 0x318) = iVar1 + -1;
      }
      UNLOCK();
      if (bVar5) break;
      iVar1 = *(int *)(lVar2 + 0x318);
    }
    if (iVar1 + -1 != 0) {
      return 2;
    }
    if (*(int *)(lVar2 + 0x348) < 1) {
      return 2;
    }
    SetEvent(*(HANDLE *)(lVar2 + 0x350));
    return 2;
  }
  do {
    if (iVar1 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 800));
LAB_1450b0815:
      if (param_4 != 0) {
        do {
          uVar3 = 0;
          if (*(char *)*param_2 != '\0') {
            uVar3 = AK::SoundEngine::GetIDFromString((char *)*param_2);
          }
          *param_3 = uVar3;
          param_2 = param_2 + 1;
          param_3 = param_3 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      return 1;
    }
    LOCK();
    bVar5 = iVar1 == *(int *)(lVar2 + 0x318);
    if (bVar5) {
      *(int *)(lVar2 + 0x318) = iVar1 + -1;
    }
    UNLOCK();
    if (bVar5) {
      if ((iVar1 + -1 == 0) && (0 < *(int *)(lVar2 + 0x348))) {
        SetEvent(*(HANDLE *)(lVar2 + 0x350));
      }
      goto LAB_1450b0815;
    }
    iVar1 = *(int *)(lVar2 + 0x318);
  } while( true );
}



// FUNCTION 1450b0870 FUN_1450b0870 body=61 status=ok
// SIG undefined FUN_1450b0870(void)

byte * FUN_1450b0870(longlong param_1,char param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  uint uVar3;
  
  pbVar1 = *(byte **)(param_1 + 0x30);
  if (pbVar1 != (byte *)0x0) {
    uVar2 = 0;
    do {
      uVar3 = (int)uVar2 + 1;
      if (pbVar1[uVar3] == (byte)(param_2 + 0x4aU)) {
        return pbVar1 + uVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
      }
      uVar2 = (ulonglong)uVar3;
    } while (uVar3 < *pbVar1);
  }
  return (byte *)0x0;
}



// FUNCTION 1450b08b0 FUN_1450b08b0 body=39 status=ok
// SIG undefined FUN_1450b08b0(void)

void FUN_1450b08b0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(1,param_1);
  }
  return;
}



// FUNCTION 1450b08e0 FUN_1450b08e0 body=119 status=ok
// SIG undefined FUN_1450b08e0(void)

longlong FUN_1450b08e0(longlong param_1,uint param_2)

{
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    AK::MemoryMgr::Free(1,*(void **)(param_1 + 0x38));
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    AK::MemoryMgr::Free(1,*(void **)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1450af900(param_1 + 0x18);
  FUN_145373500(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1450b0960 FUN_1450b0960 body=186 status=ok
// SIG undefined FUN_1450b0960(void)

undefined8 FUN_1450b0960(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 1);
  iVar3 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  _Var6 = (ulonglong)(iVar3 + uVar1) << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450b09fd;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_1450b09fd:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450b0a20 FUN_1450b0a20 body=34 status=ok
// SIG undefined FUN_1450b0a20(void)

void FUN_1450b0a20(longlong param_1)

{
  FUN_1450b1170(param_1,param_1);
  FUN_1450b1170(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 1450b0a50 FUN_1450b0a50 body=212 status=ok
// SIG undefined FUN_1450b0a50(void)

void * FUN_1450b0a50(longlong *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong *plVar6;
  
  plVar6 = param_1 + 2;
  if (param_3 != 1) {
    plVar6 = param_1;
  }
  pvVar5 = AK::MemoryMgr::Malloc(0,0x50);
  if (pvVar5 != (void *)0x0) {
    pvVar5 = (void *)FUN_14538f3e0(pvVar5);
    if (pvVar5 == (void *)0x0) {
      return (void *)0x0;
    }
    iVar4 = FUN_14538f650(pvVar5,param_2,*(undefined4 *)(DAT_14c790fd8 + 0x88));
    if ((iVar4 != 2) &&
       ((uVar2 = *(uint *)(plVar6 + 1), uVar2 < *(uint *)((longlong)plVar6 + 0xc) ||
        ((cVar3 = FUN_1450b1200(plVar6), cVar3 != '\0' &&
         (uVar2 < *(uint *)((longlong)plVar6 + 0xc))))))) {
      uVar2 = *(uint *)(plVar6 + 1);
      *(uint *)(plVar6 + 1) = uVar2 + 1;
      puVar1 = (undefined8 *)(*plVar6 + (ulonglong)uVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = pvVar5;
        return pvVar5;
      }
    }
    FUN_14538f410();
    AK::MemoryMgr::Free(0,pvVar5);
    return (void *)0x0;
  }
  return (void *)0x0;
}



// FUNCTION 1450b0b30 FUN_1450b0b30 body=160 status=ok
// SIG undefined FUN_1450b0b30(void)

undefined8 FUN_1450b0b30(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  plVar4 = *(longlong **)(param_2 + 0x28);
  uVar6 = (ulonglong)*(uint *)(param_2 + 0x30);
  plVar1 = plVar4 + uVar6;
  for (; (plVar4 != plVar1 && (*plVar4 != param_3)); plVar4 = plVar4 + 1) {
  }
  plVar5 = (longlong *)0x0;
  if (plVar4 != plVar1) {
    plVar5 = plVar4;
  }
  if ((plVar5 == (longlong *)0x0) &&
     (((uVar6 < *(uint *)(param_2 + 0x34) ||
       (cVar3 = FUN_1450b0960((longlong *)(param_2 + 0x28)), cVar3 != '\0')) &&
      (uVar6 < *(uint *)(param_2 + 0x34))))) {
    uVar2 = *(uint *)(param_2 + 0x30);
    *(uint *)(param_2 + 0x30) = uVar2 + 1;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x28) + (ulonglong)uVar2 * 8);
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = param_3;
      return 1;
    }
  }
  return 2;
}



// FUNCTION 1450b0bd0 FUN_1450b0bd0 body=64 status=ok
// SIG undefined FUN_1450b0bd0(void)

undefined8 FUN_1450b0bd0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_2 + 0x28);
  plVar1 = plVar2 + *(uint *)(param_2 + 0x30);
  while( true ) {
    if (plVar2 == plVar1) {
      return 2;
    }
    if (*plVar2 == param_3) break;
    plVar2 = plVar2 + 1;
  }
  if (plVar2 < plVar1 + -1) {
    *plVar2 = plVar1[-1];
  }
  *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + -1;
  return 1;
}



// FUNCTION 1450b0c10 FUN_1450b0c10 body=47 status=ok
// SIG undefined FUN_1450b0c10(void)

void FUN_1450b0c10(longlong param_1,ulonglong param_2)

{
  FUN_1450b1040(param_1,param_2,param_1);
  FUN_1450b1040(param_1,param_2 & 0xffffffff,param_1 + 0x10);
  return;
}



// FUNCTION 1450b0c40 FUN_1450b0c40 body=28 status=ok
// SIG undefined FUN_1450b0c40(void)

void FUN_1450b0c40(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x3c) == 0) {
    *(undefined4 *)(param_2 + 0x3c) = 1;
    return;
  }
  if (*(int *)(param_2 + 0x3c) == 3) {
    *(undefined4 *)(param_2 + 0x3c) = 2;
  }
  return;
}



// FUNCTION 1450b0c60 FUN_1450b0c60 body=29 status=ok
// SIG undefined FUN_1450b0c60(void)

void FUN_1450b0c60(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x3c) == 2) {
    *(undefined4 *)(param_2 + 0x3c) = 3;
    return;
  }
  if (*(int *)(param_2 + 0x3c) == 1) {
    *(undefined4 *)(param_2 + 0x3c) = 0;
  }
  return;
}



// FUNCTION 1450b0c80 FUN_1450b0c80 body=758 status=ok
// SIG undefined FUN_1450b0c80(void)

void FUN_1450b0c80(undefined8 param_1,ulonglong *param_2,ulonglong param_3,float param_4,int param_5
                  ,int param_6,int param_7)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = *param_2;
  *param_2 = param_3;
  FUN_14538f5d0(param_2,param_5);
  fVar7 = *(float *)(param_2 + 2);
  if ((param_2[8] & 1) == 0) {
    *(float *)(param_2 + 1) = fVar7;
    if (param_7 == 2) {
      param_4 = param_4 + *(float *)((longlong)param_2 + 0xc);
      *(float *)((longlong)param_2 + 0xc) = param_4;
      *(float *)((longlong)param_2 + 0x14) = param_4;
    }
    else {
      *(float *)((longlong)param_2 + 0xc) = param_4;
      *(float *)((longlong)param_2 + 0x14) = param_4;
    }
  }
  else {
    fVar6 = 0.0;
    fVar7 = fVar7 * 0.05;
    if ((fVar7 < -37.0) || (37.0 < fVar7)) {
      fVar7 = 0.0;
    }
    else {
      uVar4 = (uint)(longlong)(fVar7 * 27866352.0 + 1.0653532e+09);
      fVar7 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
      fVar7 = ((fVar7 * 0.32518977 + 0.020805772) * fVar7 + 0.65304345) *
              (float)(uVar4 & 0xff800000);
    }
    fVar5 = param_4 * 0.05;
    *(float *)(param_2 + 1) = fVar7;
    if (param_7 == 2) {
      if ((-37.0 <= fVar5) && (fVar5 <= 37.0)) {
        uVar4 = (uint)(longlong)(fVar5 * 27866352.0 + 1.0653532e+09);
        fVar6 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
        fVar6 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                (float)(uVar4 & 0xff800000);
      }
      param_4 = fVar6 * *(float *)((longlong)param_2 + 0xc);
      *(float *)((longlong)param_2 + 0xc) = param_4;
      fVar6 = (float)(((uint)param_4 & 0x7fffff) + 0x3f800000);
      fVar5 = fVar6 + 1.0;
      *(float *)((longlong)param_2 + 0x14) =
           (((fVar6 * fVar6 * fVar6 - 1.0) * 1.1581186) / (fVar5 * fVar5 * fVar5)) * 20.0 +
           ((float)((uint)param_4 >> 0x17 & 0xff) - 127.0) * 6.0206003;
    }
    else {
      *(float *)((longlong)param_2 + 0x14) = param_4;
      if ((-37.0 <= fVar5) && (fVar5 <= 37.0)) {
        uVar4 = (uint)(longlong)(fVar5 * 27866352.0 + 1.0653532e+09);
        fVar6 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
        fVar6 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                (float)(uVar4 & 0xff800000);
      }
      *(float *)((longlong)param_2 + 0xc) = fVar6;
      param_4 = fVar6;
    }
  }
  if ((param_4 <= fVar7) && ((param_6 - 3U & 0xfffffffd) != 0)) {
    param_6 = 8 - param_6;
  }
  *(int *)(param_2 + 7) = param_6;
  iVar1 = *(int *)(DAT_14c790fd8 + 0x88);
  uVar3 = (DAT_14c72f428 + -1 + param_5) / DAT_14c72f428;
  uVar4 = uVar3;
  if (((uVar2 == *param_2) && ((param_3 & 0xf000000) != 0)) &&
     (uVar4 = ((int)param_2[3] - iVar1) + *(int *)((longlong)param_2 + 0x1c), uVar3 < uVar4)) {
    uVar4 = uVar3;
  }
  *(uint *)((longlong)param_2 + 0x1c) = uVar4;
  *(int *)(param_2 + 3) = iVar1;
  *(int *)((longlong)param_2 + 0x24) = iVar1;
  return;
}



// FUNCTION 1450b0f80 FUN_1450b0f80 body=85 status=ok
// SIG undefined FUN_1450b0f80(void)

void FUN_1450b0f80(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(uint *)(param_1 + 0x18) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x10), plVar2 != plVar2 + *(uint *)(param_1 + 0x18))) {
    do {
      lVar1 = *plVar2;
      if (*(int *)(lVar1 + 0x3c) == 0) {
        *(undefined4 *)(lVar1 + 0x3c) = 1;
      }
      else if (*(int *)(lVar1 + 0x3c) == 3) {
        *(undefined4 *)(lVar1 + 0x3c) = 2;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x18) * 8));
  }
  return;
}



// FUNCTION 1450b0fe0 FUN_1450b0fe0 body=83 status=ok
// SIG undefined FUN_1450b0fe0(void)

void FUN_1450b0fe0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(uint *)(param_1 + 0x18) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x10), plVar2 != plVar2 + *(uint *)(param_1 + 0x18))) {
    do {
      lVar1 = *plVar2;
      if (*(int *)(lVar1 + 0x3c) == 2) {
        *(undefined4 *)(lVar1 + 0x3c) = 3;
      }
      else if (*(int *)(lVar1 + 0x3c) == 1) {
        *(undefined4 *)(lVar1 + 0x3c) = 0;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x18) * 8));
  }
  return;
}



// FUNCTION 1450b1040 FUN_1450b1040 body=299 status=ok
// SIG undefined FUN_1450b1040(void)

void FUN_1450b1040(undefined8 param_1,int param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  undefined8 *_Dst;
  void *_Dst_00;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_3 + 1);
  uVar6 = 0;
  if (uVar1 != 0) {
    uVar5 = 1;
    do {
      _Dst = (undefined8 *)(*param_3 + (ulonglong)uVar6 * 8);
      pvVar3 = (void *)*_Dst;
      if (*(int *)((longlong)pvVar3 + 0x30) == 0) {
        if (uVar5 < uVar1) {
          memmove(_Dst,_Dst + 1,(ulonglong)((uVar1 - uVar6) * 8 - 8));
        }
        *(int *)(param_3 + 1) = (int)param_3[1] + -1;
        FUN_14538f410();
        AK::MemoryMgr::Free(0,pvVar3);
      }
      else {
        iVar2 = *(int *)((longlong)pvVar3 + 0x3c);
        if (iVar2 == 1) {
          *(int *)((longlong)pvVar3 + 0x24) = param_2;
          *(undefined4 *)((longlong)pvVar3 + 0x3c) = 2;
        }
        else {
          if (iVar2 == 3) {
            *(undefined4 *)((longlong)pvVar3 + 0x3c) = 0;
            *(int *)((longlong)pvVar3 + 0x18) =
                 *(int *)((longlong)pvVar3 + 0x18) + (param_2 - *(int *)((longlong)pvVar3 + 0x24));
          }
          else if (iVar2 != 0) goto LAB_1450b113c;
          cVar4 = FUN_14538f450(pvVar3,param_2);
          if (cVar4 != '\0') {
            _Dst_00 = (void *)(*param_3 + (ulonglong)uVar6 * 8);
            if (uVar5 < *(uint *)(param_3 + 1)) {
              memmove(_Dst_00,(void *)((longlong)_Dst_00 + 8),
                      (ulonglong)((*(uint *)(param_3 + 1) - uVar6) * 8 - 8));
            }
            *(int *)(param_3 + 1) = (int)param_3[1] + -1;
            FUN_14538f410();
            AK::MemoryMgr::Free(0,pvVar3);
            goto LAB_1450b1140;
          }
        }
LAB_1450b113c:
        uVar6 = uVar6 + 1;
        uVar5 = uVar5 + 1;
      }
LAB_1450b1140:
      uVar1 = *(uint *)(param_3 + 1);
    } while (uVar6 < uVar1);
  }
  return;
}



// FUNCTION 1450b1170 FUN_1450b1170 body=144 status=ok
// SIG undefined FUN_1450b1170(void)

void FUN_1450b1170(undefined8 param_1,longlong *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if ((*(uint *)(param_2 + 1) != 0) &&
     (puVar2 = (undefined8 *)*param_2, puVar2 != puVar2 + *(uint *)(param_2 + 1))) {
    do {
      pvVar1 = (void *)*puVar2;
      FUN_14538f450(pvVar1,*(int *)((longlong)pvVar1 + 0x1c) + *(int *)((longlong)pvVar1 + 0x18));
      FUN_14538f410();
      AK::MemoryMgr::Free(0,pvVar1);
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined8 *)(*param_2 + (ulonglong)*(uint *)(param_2 + 1) * 8));
  }
  if ((void *)*param_2 != (void *)0x0) {
    *(undefined4 *)(param_2 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_2);
    *param_2 = 0;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1450b1200 FUN_1450b1200 body=186 status=ok
// SIG undefined FUN_1450b1200(void)

undefined8 FUN_1450b1200(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 1);
  iVar3 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  _Var6 = (ulonglong)(iVar3 + uVar1) << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450b129d;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_1450b129d:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450b12c0 FUN_1450b12c0 body=53 status=ok
// SIG undefined FUN_1450b12c0(void)

undefined8 * FUN_1450b12c0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return param_1;
}



// FUNCTION 1450b1300 FUN_1450b1300 body=112 status=ok
// SIG undefined FUN_1450b1300(void)

void FUN_1450b1300(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[2]);
    param_1[2] = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    *(undefined4 *)(param_1 + 5) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[4]);
    param_1[4] = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001450b1369. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return;
}



// FUNCTION 1450b1370 FUN_1450b1370 body=644 status=ok
// SIG undefined FUN_1450b1370(void)

undefined4 FUN_1450b1370(longlong *param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  undefined1 local_28 [16];
  
  lVar3 = DAT_14c791060;
  do {
    while (iVar2 = *(int *)(lVar3 + 0x58), iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x60));
      if (*(int *)(lVar3 + 0x58) < 0) goto LAB_1450b13b3;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x60));
    }
    LOCK();
    bVar8 = iVar2 == *(int *)(lVar3 + 0x58);
    if (bVar8) {
      *(int *)(lVar3 + 0x58) = iVar2 + 1;
    }
    UNLOCK();
  } while (!bVar8);
LAB_1450b13b3:
  puVar7 = (uint *)0x0;
  puVar5 = puVar7;
  if (*(uint *)(lVar3 + 0xa0) != 0) {
    for (puVar6 = *(uint **)(*(longlong *)(lVar3 + 0x98) +
                            ((ulonglong)param_2 % (ulonglong)*(uint *)(lVar3 + 0xa0)) * 8);
        (puVar5 = puVar7, puVar6 != (uint *)0x0 && (puVar5 = puVar6, puVar6[4] != param_2));
        puVar6 = *(uint **)(puVar6 + 2)) {
    }
    if (puVar5 != (uint *)0x0) {
      LOCK();
      puVar5[5] = puVar5[5] + 1;
      UNLOCK();
    }
  }
  iVar2 = *(int *)(lVar3 + 0x58);
  while (-1 < iVar2) {
    LOCK();
    bVar8 = iVar2 == *(int *)(lVar3 + 0x58);
    if (bVar8) {
      *(int *)(lVar3 + 0x58) = iVar2 + -1;
    }
    UNLOCK();
    if (bVar8) {
      if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar3 + 0x88))) {
        SetEvent(*(HANDLE *)(lVar3 + 0x90));
      }
      goto LAB_1450b143b;
    }
    iVar2 = *(int *)(lVar3 + 0x58);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x60));
LAB_1450b143b:
  puVar6 = puVar5 + -4;
  if (puVar5 == (uint *)0x0) {
    puVar6 = puVar7;
  }
  if (puVar6 == (uint *)0x0) {
    return 0xf;
  }
  LOCK();
  puVar5 = puVar6 + 9;
  uVar1 = *puVar5;
  *puVar5 = *puVar5 - 1;
  UNLOCK();
  if (uVar1 == 1) {
    (**(code **)(*(longlong *)(puVar6 + 4) + 0x18))();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  puVar6 = (uint *)*param_1;
  puVar5 = puVar6 + (ulonglong)*(uint *)(param_1 + 1) * 6;
  if (param_3 == 0) {
    for (; (puVar6 != puVar5 && (*puVar6 != param_2)); puVar6 = puVar6 + 6) {
    }
    if (puVar6 != (uint *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x18)) {
      puVar5 = (uint *)(*param_1 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 0x18);
      if (puVar6 < puVar5) {
        memmove(puVar6,puVar6 + 6,
                (ulonglong)(uint)((int)(((longlong)puVar5 - (longlong)puVar6) / 0x18) * 0x18));
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    }
  }
  else {
    for (; (puVar6 != puVar5 && (*puVar6 != param_2)); puVar6 = puVar6 + 6) {
    }
    uVar1 = *(uint *)(param_1 + 1);
    puVar5 = puVar6 + 2;
    if (puVar6 == (uint *)(*param_1 + (ulonglong)uVar1 * 0x18)) {
      puVar5 = puVar7;
    }
    if (puVar5 == (uint *)0x0) {
      if ((*(uint *)((longlong)param_1 + 0xc) <= uVar1) &&
         ((cVar4 = FUN_1450b1ca0(param_1), cVar4 == '\0' ||
          (*(uint *)((longlong)param_1 + 0xc) <= uVar1)))) {
LAB_1450b151a:
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
        return 0x34;
      }
      uVar1 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar1 + 1;
      puVar5 = (uint *)(*param_1 + (ulonglong)uVar1 * 0x18);
      if (puVar5 == (uint *)0x0) goto LAB_1450b151a;
      *puVar5 = param_2;
      puVar5 = puVar5 + 2;
      if (puVar5 == (uint *)0x0) goto LAB_1450b151a;
    }
    *(longlong *)puVar5 = param_3;
    *(undefined8 *)(puVar5 + 2) = param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  FUN_1450719c0(local_28);
  FUN_1450a5fb0(param_2,param_3 != 0);
  FUN_1450719f0(local_28);
  return 1;
}



// FUNCTION 1450b1600 FUN_1450b1600 body=633 status=ok
// SIG undefined FUN_1450b1600(void)

undefined4
FUN_1450b1600(longlong param_1,uint param_2,longlong param_3,byte param_4,undefined8 param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  undefined1 local_28 [16];
  
  lVar4 = DAT_14c791060;
  do {
    while (iVar3 = *(int *)(lVar4 + 0x58), iVar3 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x60));
      if (*(int *)(lVar4 + 0x58) < 0) goto LAB_1450b1644;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x60));
    }
    LOCK();
    bVar9 = iVar3 == *(int *)(lVar4 + 0x58);
    if (bVar9) {
      *(int *)(lVar4 + 0x58) = iVar3 + 1;
    }
    UNLOCK();
  } while (!bVar9);
LAB_1450b1644:
  puVar8 = (uint *)0x0;
  puVar7 = puVar8;
  if (*(uint *)(lVar4 + 0xa0) != 0) {
    for (puVar6 = *(uint **)(*(longlong *)(lVar4 + 0x98) +
                            ((ulonglong)param_2 % (ulonglong)*(uint *)(lVar4 + 0xa0)) * 8);
        (puVar7 = puVar8, puVar6 != (uint *)0x0 && (puVar7 = puVar6, puVar6[4] != param_2));
        puVar6 = *(uint **)(puVar6 + 2)) {
    }
    if (puVar7 != (uint *)0x0) {
      LOCK();
      puVar7[5] = puVar7[5] + 1;
      UNLOCK();
    }
  }
  iVar3 = *(int *)(lVar4 + 0x58);
  while (-1 < iVar3) {
    LOCK();
    bVar9 = iVar3 == *(int *)(lVar4 + 0x58);
    if (bVar9) {
      *(int *)(lVar4 + 0x58) = iVar3 + -1;
    }
    UNLOCK();
    if (bVar9) {
      if ((iVar3 + -1 == 0) && (0 < *(int *)(lVar4 + 0x88))) {
        SetEvent(*(HANDLE *)(lVar4 + 0x90));
      }
      goto LAB_1450b16cb;
    }
    iVar3 = *(int *)(lVar4 + 0x58);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x60));
LAB_1450b16cb:
  puVar6 = puVar7 + -4;
  if (puVar7 == (uint *)0x0) {
    puVar6 = puVar8;
  }
  if (puVar6 == (uint *)0x0) {
    return 0xf;
  }
  LOCK();
  puVar7 = puVar6 + 9;
  uVar2 = *puVar7;
  *puVar7 = *puVar7 - 1;
  UNLOCK();
  if (uVar2 == 1) {
    (**(code **)(*(longlong *)(puVar6 + 4) + 0x18))();
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x30);
  EnterCriticalSection(lpCriticalSection);
  if ((param_3 == 0) && (param_4 != 0)) {
    puVar7 = *(uint **)(param_1 + 0x10);
    puVar6 = puVar7 + (ulonglong)*(uint *)(param_1 + 0x18) * 8;
    for (; (puVar7 != puVar6 && (*puVar7 != param_2)); puVar7 = puVar7 + 8) {
    }
    if (puVar7 != (uint *)((ulonglong)*(uint *)(param_1 + 0x18) * 0x20 +
                          *(longlong *)(param_1 + 0x10))) {
      puVar6 = (uint *)((ulonglong)(*(uint *)(param_1 + 0x18) - 1) * 0x20 +
                       *(longlong *)(param_1 + 0x10));
      if (puVar7 < puVar6) {
        memmove(puVar7,puVar7 + 8,(ulonglong)((int)puVar6 - (int)puVar7 & 0xffffffe0));
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    }
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x10);
    plVar1 = (longlong *)(param_1 + 0x10);
    puVar6 = puVar7 + (ulonglong)*(uint *)(param_1 + 0x18) * 8;
    for (; (puVar7 != puVar6 && (*puVar7 != param_2)); puVar7 = puVar7 + 8) {
    }
    uVar2 = *(uint *)(param_1 + 0x18);
    puVar6 = puVar7 + 2;
    if (puVar7 == (uint *)((ulonglong)uVar2 * 0x20 + *plVar1)) {
      puVar6 = puVar8;
    }
    if (puVar6 == (uint *)0x0) {
      if ((*(uint *)(param_1 + 0x1c) <= uVar2) &&
         ((cVar5 = FUN_1450b1d70(plVar1), cVar5 == '\0' || (*(uint *)(param_1 + 0x1c) <= uVar2)))) {
LAB_1450b1806:
        LeaveCriticalSection(lpCriticalSection);
        return 0x34;
      }
      uVar2 = *(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = uVar2 + 1;
      puVar6 = (uint *)((ulonglong)uVar2 * 0x20 + *plVar1);
      if (puVar6 == (uint *)0x0) goto LAB_1450b1806;
      *puVar6 = param_2;
      puVar6 = puVar6 + 2;
      if (puVar6 == (uint *)0x0) goto LAB_1450b1806;
    }
    *(undefined8 *)(puVar6 + 4) = param_5;
    *(longlong *)puVar6 = param_3;
    *(byte *)(puVar6 + 2) = param_4;
  }
  LeaveCriticalSection(lpCriticalSection);
  FUN_1450719c0(local_28);
  if (param_3 != 0) {
    puVar8 = (uint *)(ulonglong)param_4;
  }
  FUN_1450a6040(param_2,puVar8);
  FUN_1450719f0(local_28);
  return 1;
}



// FUNCTION 1450b1880 FUN_1450b1880 body=440 status=ok
// SIG undefined FUN_1450b1880(void)

undefined8
FUN_1450b1880(longlong param_1,longlong param_2,longlong param_3,byte param_4,longlong param_5)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 local_28;
  undefined1 local_27 [15];
  
  FUN_1450719c0(&local_28);
  lVar3 = FUN_1450a19c0(param_2);
  if (lVar3 == 0) {
    FUN_1450719f0(&local_28);
    return 0x5d;
  }
  FUN_1450719f0(&local_28);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if ((param_3 == 0) && (param_4 != 0)) {
    plVar7 = *(longlong **)(param_1 + 0x20);
    for (plVar4 = plVar7; plVar4 != plVar7 + (ulonglong)*(uint *)(param_1 + 0x28) * 4;
        plVar4 = plVar4 + 4) {
      if (*plVar4 == param_2) {
        if (plVar4 < plVar7 + (ulonglong)(*(uint *)(param_1 + 0x28) - 1) * 4) {
          memmove(plVar4,plVar4 + 4,
                  (ulonglong)
                  ((int)(plVar7 + (ulonglong)(*(uint *)(param_1 + 0x28) - 1) * 4) - (int)plVar4 &
                  0xffffffe0));
        }
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
        break;
      }
    }
  }
  else {
    plVar7 = *(longlong **)(param_1 + 0x20);
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x28);
    plVar4 = plVar7 + uVar6 * 4;
    for (; (plVar7 != plVar4 && (*plVar7 != param_2)); plVar7 = plVar7 + 4) {
    }
    plVar5 = plVar7 + 1;
    if (plVar7 == plVar4) {
      plVar5 = (longlong *)0x0;
    }
    if (plVar5 == (longlong *)0x0) {
      if (((*(uint *)(param_1 + 0x2c) <= uVar6) &&
          (cVar2 = FUN_1450b1e40(param_1 + 0x20), cVar2 == '\0')) ||
         (*(uint *)(param_1 + 0x2c) <= uVar6)) {
LAB_1450b19c3:
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
        return 0x34;
      }
      uVar1 = *(uint *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = uVar1 + 1;
      plVar5 = (longlong *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x20));
      if (plVar5 == (longlong *)0x0) goto LAB_1450b19c3;
      *plVar5 = param_2;
      plVar5 = plVar5 + 1;
      if (plVar5 == (longlong *)0x0) goto LAB_1450b19c3;
    }
    plVar5[2] = param_5;
    *plVar5 = param_3;
    *(byte *)(plVar5 + 1) = param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  FUN_1450719c0(local_27);
  plVar7 = (longlong *)0x0;
  if (param_3 != 0) {
    plVar7 = (longlong *)(ulonglong)param_4;
  }
  thunk_FUN_1450a19c0(param_2,plVar7);
  FUN_1450719f0(local_27);
  return 1;
}



// FUNCTION 1450b1a40 FUN_1450b1a40 body=151 status=ok
// SIG undefined FUN_1450b1a40(void)

bool FUN_1450b1a40(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  piVar2 = (int *)*param_1;
  piVar1 = piVar2 + (ulonglong)*(uint *)(param_1 + 1) * 6;
  for (; (piVar2 != piVar1 && (*piVar2 != param_2)); piVar2 = piVar2 + 6) {
  }
  piVar3 = piVar2 + 2;
  if (piVar2 == piVar1) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    *param_3 = *(undefined8 *)(piVar3 + 2);
    (**(code **)piVar3)(param_3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return piVar3 != (int *)0x0;
}



// FUNCTION 1450b1ae0 FUN_1450b1ae0 body=191 status=ok
// SIG undefined FUN_1450b1ae0(void)

bool FUN_1450b1ae0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  piVar1 = *(int **)(param_1 + 0x10);
  piVar2 = piVar1 + (ulonglong)*(uint *)(param_1 + 0x18) * 8;
  for (; (piVar1 != piVar2 && (*piVar1 != param_2)); piVar1 = piVar1 + 8) {
  }
  piVar3 = piVar1 + 2;
  if (piVar1 == piVar2) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    local_28 = *(undefined8 *)(piVar3 + 4);
    local_10 = param_5;
    local_c = (undefined1)piVar3[2];
    local_20 = param_3;
    local_18 = param_4;
    (**(code **)piVar3)(&local_28);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return piVar3 != (int *)0x0;
}



// FUNCTION 1450b1ba0 FUN_1450b1ba0 body=126 status=ok
// SIG undefined FUN_1450b1ba0(void)

undefined8 FUN_1450b1ba0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  piVar3 = (int *)*param_1;
  piVar1 = piVar3 + (ulonglong)*(uint *)(param_1 + 1) * 6;
  for (; (piVar3 != piVar1 && (*piVar3 != param_2)); piVar3 = piVar3 + 6) {
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  piVar2 = piVar3 + 2;
  if (piVar3 == piVar1) {
    piVar2 = (int *)0x0;
  }
  return CONCAT71((int7)((ulonglong)piVar2 >> 8),piVar2 != (int *)0x0);
}



// FUNCTION 1450b1c20 FUN_1450b1c20 body=122 status=ok
// SIG undefined FUN_1450b1c20(void)

undefined1 FUN_1450b1c20(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  piVar1 = *(int **)(param_1 + 0x10);
  piVar2 = piVar1 + (ulonglong)*(uint *)(param_1 + 0x18) * 8;
  for (; (piVar1 != piVar2 && (*piVar1 != param_2)); piVar1 = piVar1 + 8) {
  }
  piVar3 = piVar1 + 2;
  if (piVar1 == piVar2) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (undefined1)piVar3[2];
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return uVar4;
}



// FUNCTION 1450b1ca0 FUN_1450b1ca0 body=202 status=ok
// SIG undefined FUN_1450b1ca0(void)

undefined8 FUN_1450b1ca0(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  void *pvVar6;
  longlong lVar7;
  __uint64 _Var8;
  ulonglong uVar9;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  iVar4 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar4 = 1;
  }
  _Var8 = (ulonglong)(iVar4 + uVar2) * 0x18;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar6 = AK::MemoryMgr::Malloc(0,_Var8);
    if (pvVar6 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar6)) {
        if (uVar9 != 0) {
          lVar7 = 0;
          do {
            lVar3 = *param_1;
            puVar1 = (undefined8 *)(lVar7 + lVar3);
            uVar5 = puVar1[1];
            *(undefined8 *)(lVar7 + (longlong)pvVar6) = *puVar1;
            ((undefined8 *)(lVar7 + (longlong)pvVar6))[1] = uVar5;
            *(undefined8 *)(lVar7 + 0x10 + (longlong)pvVar6) = *(undefined8 *)(lVar7 + 0x10 + lVar3)
            ;
            uVar9 = uVar9 - 1;
            lVar7 = lVar7 + 0x18;
          } while (uVar9 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450b1d4d;
    }
  }
  else {
    pvVar6 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var8);
    if (pvVar6 != (void *)0x0) {
LAB_1450b1d4d:
      *param_1 = (longlong)pvVar6;
      *(uint *)((longlong)param_1 + 0xc) = iVar4 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450b1d70 FUN_1450b1d70 body=200 status=ok
// SIG undefined FUN_1450b1d70(void)

undefined8 FUN_1450b1d70(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  longlong lVar8;
  __uint64 _Var9;
  ulonglong uVar10;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  iVar5 = (uVar3 >> 1) + uVar3;
  if (uVar3 == 0) {
    iVar5 = 1;
  }
  _Var9 = (ulonglong)(iVar5 + uVar3) << 5;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar7 = AK::MemoryMgr::Malloc(0,_Var9);
    if (pvVar7 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar7)) {
        if (uVar10 != 0) {
          lVar8 = 0;
          do {
            lVar4 = *param_1;
            puVar1 = (undefined8 *)(lVar8 + lVar4);
            uVar6 = puVar1[1];
            *(undefined8 *)(lVar8 + (longlong)pvVar7) = *puVar1;
            ((undefined8 *)(lVar8 + (longlong)pvVar7))[1] = uVar6;
            puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar4);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)(lVar8 + 0x10 + (longlong)pvVar7);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            uVar10 = uVar10 - 1;
            lVar8 = lVar8 + 0x20;
          } while (uVar10 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450b1e1b;
    }
  }
  else {
    pvVar7 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var9);
    if (pvVar7 != (void *)0x0) {
LAB_1450b1e1b:
      *param_1 = (longlong)pvVar7;
      *(uint *)((longlong)param_1 + 0xc) = iVar5 + uVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450b1e40 FUN_1450b1e40 body=200 status=ok
// SIG undefined FUN_1450b1e40(void)

undefined8 FUN_1450b1e40(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  longlong lVar8;
  __uint64 _Var9;
  ulonglong uVar10;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  iVar5 = (uVar3 >> 1) + uVar3;
  if (uVar3 == 0) {
    iVar5 = 1;
  }
  _Var9 = (ulonglong)(iVar5 + uVar3) << 5;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar7 = AK::MemoryMgr::Malloc(0,_Var9);
    if (pvVar7 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar7)) {
        if (uVar10 != 0) {
          lVar8 = 0;
          do {
            lVar4 = *param_1;
            puVar1 = (undefined8 *)(lVar8 + lVar4);
            uVar6 = puVar1[1];
            *(undefined8 *)(lVar8 + (longlong)pvVar7) = *puVar1;
            ((undefined8 *)(lVar8 + (longlong)pvVar7))[1] = uVar6;
            puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar4);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)(lVar8 + 0x10 + (longlong)pvVar7);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            uVar10 = uVar10 - 1;
            lVar8 = lVar8 + 0x20;
          } while (uVar10 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450b1eeb;
    }
  }
  else {
    pvVar7 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var9);
    if (pvVar7 != (void *)0x0) {
LAB_1450b1eeb:
      *param_1 = (longlong)pvVar7;
      *(uint *)((longlong)param_1 + 0xc) = iVar5 + uVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450b1f10 FUN_1450b1f10 body=189 status=ok
// SIG undefined FUN_1450b1f10(void)

undefined8 FUN_1450b1f10(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  HANDLE hEvent;
  ulonglong uVar3;
  
  hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  param_1[8] = (longlong)hEvent;
  if (hEvent == (HANDLE)0x0) {
    return 2;
  }
  SetEvent(hEvent);
  DAT_14c790fc8 = param_1 + 10;
  *(undefined4 *)(param_1 + 2) = 0;
  if (((*(uint *)(param_1 + 1) < 0xc) && (*(uint *)((longlong)param_1 + 0xc) < 0xb)) &&
     (cVar1 = FUN_1450b3d80(param_1,0xb - *(uint *)((longlong)param_1 + 0xc)), cVar1 == '\0')) {
    return 2;
  }
  *(undefined4 *)(param_1 + 1) = 0xb;
  uVar3 = 0;
  do {
    uVar2 = (int)uVar3 + 1;
    *(undefined8 *)(*param_1 + uVar3 * 8) = 0;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 < *(uint *)(param_1 + 1));
  return 1;
}



// FUNCTION 1450b1fd0 FUN_1450b1fd0 body=206 status=ok
// SIG undefined FUN_1450b1fd0(void)

void FUN_1450b1fd0(longlong *param_1)

{
  uint uVar1;
  longlong lVar3;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(uint *)(param_1 + 1) != 0) {
    lVar3 = *(longlong *)*param_1;
    while (lVar3 == 0) {
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      if (*(uint *)(param_1 + 1) <= uVar1) goto LAB_1450b206d;
      lVar3 = ((longlong *)*param_1)[uVar2];
    }
    do {
      while( true ) {
        if (*(void **)(lVar3 + 0x10) != (void *)0x0) {
          *(undefined4 *)(lVar3 + 0x18) = 0;
          AK::MemoryMgr::Free(0,*(void **)(lVar3 + 0x10));
          *(undefined8 *)(lVar3 + 0x10) = 0;
          *(undefined4 *)(lVar3 + 0x1c) = 0;
        }
        lVar3 = *(longlong *)(lVar3 + 0x68);
        if (lVar3 != 0) break;
        do {
          uVar1 = (int)uVar2 + 1;
          uVar2 = (ulonglong)uVar1;
          if (*(uint *)(param_1 + 1) <= uVar1) goto LAB_1450b2064;
          lVar3 = *(longlong *)(*param_1 + uVar2 * 8);
        } while (lVar3 == 0);
      }
LAB_1450b2064:
    } while (lVar3 != 0);
  }
LAB_1450b206d:
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1450b20a0 FUN_1450b20a0 body=53 status=ok
// SIG undefined FUN_1450b20a0(void)

void FUN_1450b20a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  FUN_1450b2130(param_1,*(undefined4 *)(param_2 + 1),*param_2,param_2 + 2,param_3,param_4,param_5,
                param_6);
  return;
}



// FUNCTION 1450b20e0 FUN_1450b20e0 body=76 status=ok
// SIG undefined FUN_1450b20e0(void)

void FUN_1450b20e0(void)

{
  FUN_1450b2130();
  return;
}



// FUNCTION 1450b2130 FUN_1450b2130 body=372 status=ok
// SIG undefined FUN_1450b2130(void)

undefined8
FUN_1450b2130(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
             longlong param_5,undefined8 param_6,uint param_7,undefined4 param_8)

{
  uint *puVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  puVar5 = AK::MemoryMgr::Malloc(0,0x70);
  if (puVar5 == (undefined8 *)0x0) {
    uVar6 = 0x34;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    uVar6 = 1;
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
    puVar5[3] = 0;
    puVar5[8] = 0;
    *(undefined4 *)(puVar5 + 9) = 0;
    puVar5[7] = 0;
    *(undefined4 *)(puVar5 + 4) = 1;
    *(undefined4 *)((longlong)puVar5 + 0x24) = param_8;
    puVar5[5] = param_3;
    puVar5[6] = 0;
    *(undefined4 *)((longlong)puVar5 + 0x4c) = param_2;
    puVar5[8] = param_4[1];
    *(undefined4 *)(puVar5 + 9) = *(undefined4 *)(param_4 + 2);
    piVar2 = (int *)*param_4;
    if (puVar5[7] != 0) {
      FUN_144d4a460();
    }
    if (piVar2 != (int *)0x0) {
      *piVar2 = *piVar2 + 1;
    }
    puVar5[7] = piVar2;
    puVar1 = (uint *)(param_1 + 2);
    puVar5[0xb] = param_6;
    puVar5[10] = param_5;
    uVar4 = param_7 & 0xfff02004;
    if (param_5 != 0) {
      uVar4 = param_7;
    }
    *(uint *)(puVar5 + 0xc) = uVar4;
    if ((*(uint *)(param_1 + 1) == 0) || (0.9 < (float)*puVar1 / (float)*(uint *)(param_1 + 1))) {
      FUN_1450b3c00(param_1);
    }
    if (*(uint *)(param_1 + 1) != 0) {
      uVar3 = (ulonglong)*(uint *)((longlong)puVar5 + 0x4c) % (ulonglong)*(uint *)(param_1 + 1);
      puVar5[0xd] = *(undefined8 *)(*param_1 + uVar3 * 8);
      *(undefined8 **)(*param_1 + uVar3 * 8) = puVar5;
      *puVar1 = *puVar1 + 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return uVar6;
}



// FUNCTION 1450b22b0 FUN_1450b22b0 body=168 status=ok
// SIG undefined FUN_1450b22b0(void)

undefined8 FUN_1450b22b0(longlong *param_1,uint param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    if (*(uint *)(param_1 + 1) != 0) {
      for (lVar1 = *(longlong *)
                    (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
          lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
        if (*(uint *)(lVar1 + 0x4c) == param_2) goto LAB_1450b2310;
      }
      lVar1 = 0;
LAB_1450b2310:
      if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x28) == param_3)) &&
         (*(int *)(lVar1 + 0x24) == param_4)) {
        *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
        return 1;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return 0;
}



// FUNCTION 1450b2360 FUN_1450b2360 body=231 status=ok
// SIG undefined FUN_1450b2360(void)

void FUN_1450b2360(longlong *param_1,longlong param_2)

{
  DWORD DVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    uVar4 = 0;
    lVar2 = *(longlong *)*param_1;
    while (lVar2 == 0) {
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      if (*(uint *)(param_1 + 1) <= uVar3) goto joined_r0x0001450b23b6;
      lVar2 = ((longlong *)*param_1)[uVar4];
    }
    do {
      while( true ) {
        if (*(longlong *)(lVar2 + 0x58) == param_2) {
          *(uint *)(lVar2 + 0x60) = *(uint *)(lVar2 + 0x60) & 0xfff00000;
          *(undefined8 *)(lVar2 + 0x50) = 0;
        }
        lVar2 = *(longlong *)(lVar2 + 0x68);
        if (lVar2 != 0) break;
        do {
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
          if (*(uint *)(param_1 + 1) <= uVar3) goto joined_r0x0001450b23b6;
          lVar2 = *(longlong *)(*param_1 + uVar4 * 8);
        } while (lVar2 == 0);
      }
joined_r0x0001450b23b6:
    } while (lVar2 != 0);
  }
  if (((int)param_1[9] != 0) && (DVar1 = GetCurrentThreadId(), DVar1 != *(DWORD *)(param_1 + 9))) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
                    /* WARNING: Could not recover jumptable at 0x0001450b2426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    WaitForSingleObject((HANDLE)param_1[8],0xffffffff);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001450b2440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1450b2450 FUN_1450b2450 body=231 status=ok
// SIG undefined FUN_1450b2450(void)

void FUN_1450b2450(longlong *param_1,longlong param_2)

{
  DWORD DVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    uVar4 = 0;
    lVar2 = *(longlong *)*param_1;
    while (lVar2 == 0) {
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      if (*(uint *)(param_1 + 1) <= uVar3) goto joined_r0x0001450b24a6;
      lVar2 = ((longlong *)*param_1)[uVar4];
    }
    do {
      while( true ) {
        if (*(longlong *)(lVar2 + 0x28) == param_2) {
          *(uint *)(lVar2 + 0x60) = *(uint *)(lVar2 + 0x60) & 0xfff00000;
          *(undefined8 *)(lVar2 + 0x50) = 0;
        }
        lVar2 = *(longlong *)(lVar2 + 0x68);
        if (lVar2 != 0) break;
        do {
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
          if (*(uint *)(param_1 + 1) <= uVar3) goto joined_r0x0001450b24a6;
          lVar2 = *(longlong *)(*param_1 + uVar4 * 8);
        } while (lVar2 == 0);
      }
joined_r0x0001450b24a6:
    } while (lVar2 != 0);
  }
  if (((int)param_1[9] != 0) && (DVar1 = GetCurrentThreadId(), DVar1 != *(DWORD *)(param_1 + 9))) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
                    /* WARNING: Could not recover jumptable at 0x0001450b2516. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    WaitForSingleObject((HANDLE)param_1[8],0xffffffff);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001450b2530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1450b2540 FUN_1450b2540 body=175 status=ok
// SIG undefined FUN_1450b2540(void)

void FUN_1450b2540(longlong *param_1,uint param_2)

{
  DWORD DVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar2 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x68)) {
      if (*(uint *)(lVar2 + 0x4c) == param_2) goto LAB_1450b2587;
    }
    lVar2 = 0;
LAB_1450b2587:
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x60) = *(uint *)(lVar2 + 0x60) & 0xfff00000;
      *(undefined8 *)(lVar2 + 0x50) = 0;
    }
  }
  if (((int)param_1[9] != 0) && (DVar1 = GetCurrentThreadId(), DVar1 != *(DWORD *)(param_1 + 9))) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
                    /* WARNING: Could not recover jumptable at 0x0001450b25ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    WaitForSingleObject((HANDLE)param_1[8],0xffffffff);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001450b25e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1450b25f0 FUN_1450b25f0 body=326 status=ok
// SIG undefined FUN_1450b25f0(void)

undefined8
FUN_1450b25f0(longlong *param_1,uint param_2,longlong param_3,longlong param_4,undefined4 *param_5)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (param_3 == 0) {
    return 2;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  uVar5 = 1;
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar4 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x68)) {
      if (*(uint *)(lVar4 + 0x4c) == param_2) goto LAB_1450b2660;
    }
    lVar4 = 0;
LAB_1450b2660:
    if (lVar4 != 0) {
      uVar2 = *(uint *)(lVar4 + 0x18);
      if ((uVar2 < *(uint *)(lVar4 + 0x1c)) ||
         ((cVar3 = FUN_1450b3910(lVar4 + 0x10), cVar3 != '\0' && (uVar2 < *(uint *)(lVar4 + 0x1c))))
         ) {
        uVar2 = *(uint *)(lVar4 + 0x18);
        *(uint *)(lVar4 + 0x18) = uVar2 + 1;
        plVar1 = (longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)uVar2 * 8);
        if (plVar1 != (longlong *)0x0) {
          *plVar1 = param_3;
          if ((*(longlong *)(lVar4 + 0x30) == 0) && (param_4 != 0)) {
            *(longlong *)(lVar4 + 0x30) = param_4;
            uVar2 = *(uint *)(param_4 + 0x60);
            if ((uVar2 < 2) && (*(char *)(param_4 + 100) != '\0')) {
              *(uint *)(param_4 + 0x60) = uVar2 + 1;
              if ((1 < uVar2 + 1) || (*(char *)(param_4 + 100) == '\0')) {
                FUN_145355090(param_4);
                *param_5 = *(undefined4 *)(lVar4 + 0x60);
                goto LAB_1450b26ff;
              }
            }
            else {
              *(uint *)(param_4 + 0x60) = uVar2 + 1;
            }
          }
          *param_5 = *(undefined4 *)(lVar4 + 0x60);
          goto LAB_1450b26ff;
        }
      }
      uVar5 = 2;
    }
  }
LAB_1450b26ff:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return uVar5;
}



// FUNCTION 1450b2740 FUN_1450b2740 body=234 status=ok
// SIG undefined FUN_1450b2740(void)

void FUN_1450b2740(longlong *param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *_Dst;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar2 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x68)) {
      if (*(uint *)(lVar2 + 0x4c) == param_2) goto LAB_1450b27a0;
    }
    lVar2 = 0;
LAB_1450b27a0:
    if (lVar2 != 0) {
      plVar1 = *(longlong **)(lVar2 + 0x10);
      _Dst = plVar1;
      if (plVar1 != plVar1 + *(uint *)(lVar2 + 0x18)) {
        while (*_Dst != param_3) {
          _Dst = _Dst + 1;
          if (_Dst == plVar1 + *(uint *)(lVar2 + 0x18)) {
            FUN_1450b39d0(param_1,param_2,lVar2);
            return;
          }
        }
        if (_Dst < plVar1 + (*(uint *)(lVar2 + 0x18) - 1)) {
          memmove(_Dst,_Dst + 1,
                  (ulonglong)
                  ((int)(plVar1 + (*(uint *)(lVar2 + 0x18) - 1)) - (int)_Dst & 0xfffffff8));
        }
        *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
      }
      FUN_1450b39d0(param_1,param_2,lVar2);
      return;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1450b2830 FUN_1450b2830 body=114 status=ok
// SIG undefined FUN_1450b2830(void)

void FUN_1450b2830(longlong *param_1,uint param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    if (*(uint *)(param_1 + 1) != 0) {
      for (lVar1 = *(longlong *)
                    (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
          lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
        if (*(uint *)(lVar1 + 0x4c) == param_2) goto LAB_1450b2880;
      }
      lVar1 = 0;
LAB_1450b2880:
      if (lVar1 != 0) {
        *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return;
}



// FUNCTION 1450b28b0 FUN_1450b28b0 body=133 status=ok
// SIG undefined FUN_1450b28b0(void)

void FUN_1450b28b0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) goto LAB_1450b28f9;
    }
    lVar1 = 0;
LAB_1450b28f9:
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + -1;
      FUN_1450b39d0(param_1,(ulonglong)param_2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001450b292e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1450b2940 FUN_1450b2940 body=123 status=ok
// SIG undefined FUN_1450b2940(void)

ulonglong FUN_1450b2940(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  uVar3 = 0;
  if (*(uint *)(param_1 + 1) != 0) {
    for (uVar1 = *(ulonglong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        (uVar2 = uVar3, uVar1 != 0 && (uVar2 = uVar1, *(uint *)(uVar1 + 0x4c) != param_2));
        uVar1 = *(ulonglong *)(uVar1 + 0x68)) {
    }
    if (uVar2 != 0) {
      uVar3 = (ulonglong)*(uint *)(uVar2 + 0x24);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return uVar3;
}



// FUNCTION 1450b29c0 FUN_1450b29c0 body=118 status=ok
// SIG undefined FUN_1450b29c0(void)

undefined8 FUN_1450b29c0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) goto LAB_1450b2a07;
    }
    lVar1 = 0;
LAB_1450b2a07:
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
      goto LAB_1450b2a19;
    }
  }
  uVar2 = 0xffffffffffffffff;
LAB_1450b2a19:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return uVar2;
}



// FUNCTION 1450b2a40 FUN_1450b2a40 body=256 status=ok
// SIG undefined FUN_1450b2a40(void)

undefined4 FUN_1450b2a40(longlong *param_1,longlong param_2,uint *param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = *param_3;
  uVar4 = 0;
  if (uVar3 == 0) {
    uVar3 = 0xffffffff;
    param_4 = uVar4;
  }
  else if (param_4 == 0) {
    return 0x1f;
  }
  *param_3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    lVar2 = *(longlong *)*param_1;
    while (lVar2 == 0) {
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
      if (*(uint *)(param_1 + 1) <= uVar1) goto joined_r0x0001450b2ac3;
      lVar2 = ((longlong *)*param_1)[uVar1];
    }
    do {
      while( true ) {
        if (*(longlong *)(lVar2 + 0x28) == param_2) {
          uVar3 = uVar3 - 1;
          if (param_4 != 0) {
            *(undefined4 *)(param_4 + (ulonglong)*param_3 * 4) = *(undefined4 *)(lVar2 + 0x4c);
          }
          *param_3 = *param_3 + 1;
        }
        if (uVar3 == 0) goto LAB_1450b2b12;
        lVar2 = *(longlong *)(lVar2 + 0x68);
        if (lVar2 != 0) break;
        do {
          uVar1 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar1;
          if (*(uint *)(param_1 + 1) <= uVar1) goto joined_r0x0001450b2ac3;
          lVar2 = *(longlong *)(*param_1 + (ulonglong)uVar1 * 8);
        } while (lVar2 == 0);
      }
joined_r0x0001450b2ac3:
    } while (lVar2 != 0);
  }
LAB_1450b2b12:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return 1;
}



// FUNCTION 1450b2b40 FUN_1450b2b40 body=125 status=ok
// SIG undefined FUN_1450b2b40(void)

longlong FUN_1450b2b40(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  lVar3 = 0;
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        (lVar2 = lVar3, lVar1 != 0 && (lVar2 = lVar1, *(uint *)(lVar1 + 0x4c) != param_2));
        lVar1 = *(longlong *)(lVar1 + 0x68)) {
    }
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x58);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return lVar3;
}



// FUNCTION 1450b2bc0 FUN_1450b2bc0 body=260 status=ok
// SIG undefined FUN_1450b2bc0(void)

void FUN_1450b2bc0(longlong *param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar3 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x68)) {
      if (*(uint *)(lVar3 + 0x4c) == param_2) goto LAB_1450b2c20;
    }
    lVar3 = 0;
LAB_1450b2c20:
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x60) & 2) != 0)) {
      local_28 = *(undefined8 *)(lVar3 + 0x58);
      local_20 = *(undefined8 *)(lVar3 + 0x28);
      pcVar1 = *(code **)(lVar3 + 0x50);
      local_18 = param_2;
      local_14 = param_3;
      local_10 = param_4;
      DVar2 = GetCurrentThreadId();
      *(DWORD *)(param_1 + 9) = DVar2;
      ResetEvent((HANDLE)param_1[8]);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      (*pcVar1)(2,&local_28);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      *(undefined4 *)(param_1 + 9) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      SetEvent((HANDLE)param_1[8]);
      return;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1450b2cd0 FUN_1450b2cd0 body=278 status=ok
// SIG undefined FUN_1450b2cd0(void)

void FUN_1450b2cd0(longlong *param_1,uint param_2,undefined4 *param_3)

{
  code *pcVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar3 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x68)) {
      if (*(uint *)(lVar3 + 0x4c) == param_2) goto LAB_1450b2d20;
    }
  }
  lVar3 = 0;
LAB_1450b2d20:
  if (((*(byte *)(lVar3 + 0x60) & 4) == 0) ||
     (pcVar1 = *(code **)(lVar3 + 0x50), pcVar1 == (code *)0x0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else {
    local_38 = *(undefined8 *)(lVar3 + 0x58);
    local_30 = *(undefined8 *)(lVar3 + 0x28);
    local_24 = *(undefined4 *)(lVar3 + 0x24);
    local_20 = *param_3;
    local_1c = param_3[1];
    local_18 = *(undefined8 *)(param_3 + 2);
    local_28 = param_2;
    DVar2 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 9) = DVar2;
    ResetEvent((HANDLE)param_1[8]);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    (*pcVar1)(4,&local_38);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    *(undefined4 *)(param_1 + 9) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    SetEvent((HANDLE)param_1[8]);
  }
  return;
}



// FUNCTION 1450b2df0 FUN_1450b2df0 body=316 status=ok
// SIG undefined FUN_1450b2df0(void)

void FUN_1450b2df0(longlong *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  code *pcVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar3 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x68)) {
      if (*(uint *)(lVar3 + 0x4c) == param_2) goto LAB_1450b2e50;
    }
    lVar3 = 0;
LAB_1450b2e50:
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x60) & 8) != 0)) {
      local_58 = *(undefined8 *)(lVar3 + 0x58);
      local_50 = *(undefined8 *)(lVar3 + 0x28);
      local_44 = *(undefined4 *)(lVar3 + 0x24);
      pcVar1 = *(code **)(lVar3 + 0x50);
      local_38 = param_5;
      local_34 = param_6;
      local_30 = param_7;
      local_48 = param_2;
      local_40 = param_3;
      local_3c = param_4;
      DVar2 = GetCurrentThreadId();
      *(DWORD *)(param_1 + 9) = DVar2;
      ResetEvent((HANDLE)param_1[8]);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      (*pcVar1)(8,&local_58);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      *(undefined4 *)(param_1 + 9) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      SetEvent((HANDLE)param_1[8]);
      return;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1450b2f30 FUN_1450b2f30 body=244 status=ok
// SIG undefined FUN_1450b2f30(void)

void FUN_1450b2f30(longlong *param_1,uint param_2)

{
  code *pcVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined4 local_14;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar3 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x68)) {
      if (*(uint *)(lVar3 + 0x4c) == param_2) goto LAB_1450b2f80;
    }
    lVar3 = 0;
LAB_1450b2f80:
    if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0x60) & 0x80) != 0)) &&
       (pcVar1 = *(code **)(lVar3 + 0x50), pcVar1 != (code *)0x0)) {
      local_28 = *(undefined8 *)(lVar3 + 0x58);
      local_20 = *(undefined8 *)(lVar3 + 0x28);
      local_14 = *(undefined4 *)(lVar3 + 0x24);
      local_18 = param_2;
      DVar2 = GetCurrentThreadId();
      *(DWORD *)(param_1 + 9) = DVar2;
      ResetEvent((HANDLE)param_1[8]);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      (*pcVar1)(0x80,&local_28);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      *(undefined4 *)(param_1 + 9) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      SetEvent((HANDLE)param_1[8]);
      return;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1450b3030 FUN_1450b3030 body=325 status=ok
// SIG undefined FUN_1450b3030(void)

void FUN_1450b3030(longlong *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  code *pcVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar3 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x68)) {
      if (*(uint *)(lVar3 + 0x4c) == param_2) goto LAB_1450b3090;
    }
    lVar3 = 0;
LAB_1450b3090:
    if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0x60) & 0x40) != 0)) &&
       (pcVar1 = *(code **)(lVar3 + 0x50), pcVar1 != (code *)0x0)) {
      local_48 = *(undefined8 *)(lVar3 + 0x58);
      local_40 = *(undefined8 *)(lVar3 + 0x28);
      local_34 = *(undefined4 *)(lVar3 + 0x24);
      local_28 = *param_5;
      local_24 = *param_6;
      local_38 = param_2;
      local_30 = param_3;
      local_2c = param_4;
      DVar2 = GetCurrentThreadId();
      *(DWORD *)(param_1 + 9) = DVar2;
      ResetEvent((HANDLE)param_1[8]);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      (*pcVar1)(0x40,&local_48);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      *(undefined4 *)(param_1 + 9) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      SetEvent((HANDLE)param_1[8]);
      *param_5 = local_28;
      *param_6 = local_24;
      return;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1450b3180 FUN_1450b3180 body=171 status=ok
// SIG undefined FUN_1450b3180(void)

void FUN_1450b3180(longlong *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) goto LAB_1450b31d2;
    }
    lVar1 = 0;
LAB_1450b31d2:
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x60) & 0x10) != 0)) {
      *param_3 = *(undefined8 *)(lVar1 + 0x58);
      param_3[1] = *(undefined8 *)(lVar1 + 0x28);
      *(uint *)(param_3 + 2) = param_2;
      *(undefined4 *)((longlong)param_3 + 0x14) = *(undefined4 *)(lVar1 + 0x24);
      FUN_1450b3880(param_1,*(undefined8 *)(lVar1 + 0x50),0x10,param_3);
      return;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1450b3230 FUN_1450b3230 body=336 status=ok
// SIG undefined FUN_1450b3230(void)

void FUN_1450b3230(longlong *param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  DWORD DVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_3 != 0) {
    param_2 = param_2 + 8;
    uVar6 = (ulonglong)param_3;
    do {
      uVar1 = *(uint *)(param_2 + 0xc);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      lVar5 = 0;
      if (*(uint *)(param_1 + 1) != 0) {
        for (lVar2 = *(longlong *)
                      (*param_1 + ((ulonglong)uVar1 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
            (lVar5 = 0, lVar2 != 0 && (lVar5 = lVar2, *(uint *)(lVar2 + 0x4c) != uVar1));
            lVar2 = *(longlong *)(lVar2 + 0x68)) {
        }
      }
      if (((*(byte *)(lVar5 + 0x60) & 4) == 0) ||
         (pcVar3 = *(code **)(lVar5 + 0x50), pcVar3 == (code *)0x0)) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      }
      else {
        DVar4 = GetCurrentThreadId();
        *(DWORD *)(param_1 + 9) = DVar4;
        ResetEvent((HANDLE)param_1[8]);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
        (*pcVar3)(4);
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
        *(undefined4 *)(param_1 + 9) = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
        SetEvent((HANDLE)param_1[8]);
      }
      param_2 = param_2 + 0x20;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1450b3380 FUN_1450b3380 body=286 status=ok
// SIG undefined FUN_1450b3380(void)

void FUN_1450b3380(longlong *param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  code *pcVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  uint local_30;
  undefined8 local_28;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar3 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x68)) {
      if (*(uint *)(lVar3 + 0x4c) == param_2) goto LAB_1450b33d6;
    }
  }
  lVar3 = 0;
LAB_1450b33d6:
  pcVar1 = *(code **)(lVar3 + 0x50);
  if ((pcVar1 == (code *)0x0) || ((*(uint *)(lVar3 + 0x60) & param_3) == 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else {
    local_68 = *(undefined8 *)(lVar3 + 0x58);
    local_54 = *param_4;
    uStack_50 = param_4[1];
    uStack_4c = param_4[2];
    uStack_48 = param_4[3];
    local_60 = *(undefined8 *)(lVar3 + 0x28);
    local_44 = param_4[4];
    uStack_40 = param_4[5];
    uStack_3c = param_4[6];
    uStack_38 = param_4[7];
    local_34 = param_4[8];
    local_28 = 0;
    local_58 = param_2;
    local_30 = param_3;
    DVar2 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 9) = DVar2;
    ResetEvent((HANDLE)param_1[8]);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    (*pcVar1)(param_3,&local_68);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    *(undefined4 *)(param_1 + 9) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    SetEvent((HANDLE)param_1[8]);
  }
  return;
}



// FUNCTION 1450b34a0 FUN_1450b34a0 body=290 status=ok
// SIG undefined FUN_1450b34a0(void)

void FUN_1450b34a0(longlong *param_1,uint param_2,undefined4 *param_3,undefined8 param_4)

{
  code *pcVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar3 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x68)) {
      if (*(uint *)(lVar3 + 0x4c) == param_2) goto LAB_1450b34f6;
    }
  }
  lVar3 = 0;
LAB_1450b34f6:
  pcVar1 = *(code **)(lVar3 + 0x50);
  if ((pcVar1 == (code *)0x0) || ((*(uint *)(lVar3 + 0x60) & 0x2000) == 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else {
    local_68 = *(undefined8 *)(lVar3 + 0x58);
    local_54 = *param_3;
    uStack_50 = param_3[1];
    uStack_4c = param_3[2];
    uStack_48 = param_3[3];
    local_60 = *(undefined8 *)(lVar3 + 0x28);
    local_44 = param_3[4];
    uStack_40 = param_3[5];
    uStack_3c = param_3[6];
    uStack_38 = param_3[7];
    local_34 = param_3[8];
    local_30 = 0x2000;
    local_58 = param_2;
    local_28 = param_4;
    DVar2 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 9) = DVar2;
    ResetEvent((HANDLE)param_1[8]);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    (*pcVar1)(0x2000,&local_68);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    *(undefined4 *)(param_1 + 9) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    SetEvent((HANDLE)param_1[8]);
  }
  return;
}



// FUNCTION 1450b35d0 FUN_1450b35d0 body=244 status=ok
// SIG undefined FUN_1450b35d0(void)

void FUN_1450b35d0(longlong *param_1,uint param_2)

{
  code *pcVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined4 local_14;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar3 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x68)) {
      if (*(uint *)(lVar3 + 0x4c) == param_2) goto LAB_1450b3620;
    }
    lVar3 = 0;
LAB_1450b3620:
    if (((lVar3 != 0) && (pcVar1 = *(code **)(lVar3 + 0x50), pcVar1 != (code *)0x0)) &&
       ((*(byte *)(lVar3 + 0x60) & 0x20) != 0)) {
      local_28 = *(undefined8 *)(lVar3 + 0x58);
      local_20 = *(undefined8 *)(lVar3 + 0x28);
      local_14 = *(undefined4 *)(lVar3 + 0x24);
      local_18 = param_2;
      DVar2 = GetCurrentThreadId();
      *(DWORD *)(param_1 + 9) = DVar2;
      ResetEvent((HANDLE)param_1[8]);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      (*pcVar1)(0x20,&local_28);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      *(undefined4 *)(param_1 + 9) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      SetEvent((HANDLE)param_1[8]);
      return;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1450b36d0 FUN_1450b36d0 body=296 status=ok
// SIG undefined FUN_1450b36d0(void)

void FUN_1450b36d0(longlong *param_1,uint param_2,undefined8 *param_3)

{
  code *pcVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar3 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x68)) {
      if (*(uint *)(lVar3 + 0x4c) == param_2) goto LAB_1450b3730;
    }
    lVar3 = 0;
LAB_1450b3730:
    if (((lVar3 != 0) && (pcVar1 = *(code **)(lVar3 + 0x50), pcVar1 != (code *)0x0)) &&
       ((*(uint *)(lVar3 + 0x60) & 0x10000) != 0)) {
      local_38 = *(undefined8 *)(lVar3 + 0x58);
      local_20 = *param_3;
      local_30 = *(undefined8 *)(lVar3 + 0x28);
      local_24 = *(undefined4 *)(lVar3 + 0x24);
      local_18 = *(undefined4 *)(param_3 + 1);
      local_28 = param_2;
      DVar2 = GetCurrentThreadId();
      *(DWORD *)(param_1 + 9) = DVar2;
      ResetEvent((HANDLE)param_1[8]);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      (*pcVar1)(0x10000,&local_38);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      *(undefined4 *)(param_1 + 9) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      SetEvent((HANDLE)param_1[8]);
      return;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1450b3800 FUN_1450b3800 body=123 status=ok
// SIG undefined FUN_1450b3800(void)

longlong FUN_1450b3800(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) == 0) {
    lVar1 = 0;
  }
  else {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        (lVar1 != 0 && (*(uint *)(lVar1 + 0x4c) != param_2)); lVar1 = *(longlong *)(lVar1 + 0x68)) {
    }
  }
  lVar2 = lVar1 + 0x10;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return lVar2;
}



// FUNCTION 1450b3880 FUN_1450b3880 body=140 status=ok
// SIG undefined FUN_1450b3880(void)

void FUN_1450b3880(longlong param_1,code *param_2,undefined4 param_3,undefined8 param_4)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(param_1 + 0x48) = DVar1;
  ResetEvent(*(HANDLE *)(param_1 + 0x40));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  (*param_2)(param_3,param_4);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x48) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001450b3905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetEvent(*(HANDLE *)(param_1 + 0x40));
  return;
}



// FUNCTION 1450b3910 FUN_1450b3910 body=186 status=ok
// SIG undefined FUN_1450b3910(void)

undefined8 FUN_1450b3910(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 1);
  iVar3 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  _Var6 = (ulonglong)(iVar3 + uVar1) << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450b39ad;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_1450b39ad:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450b39d0 FUN_1450b39d0 body=548 status=ok
// SIG undefined FUN_1450b39d0(void)

void FUN_1450b39d0(longlong *param_1,uint param_2,undefined8 *param_3)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  DWORD DVar9;
  uint uVar10;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  if ((*(int *)(param_3 + 3) != 0) || (*(int *)(param_3 + 4) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001450b3bed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    return;
  }
  if ((void *)param_3[2] != (void *)0x0) {
    *(undefined4 *)(param_3 + 3) = 0;
    AK::MemoryMgr::Free(0,(void *)param_3[2]);
    param_3[2] = 0;
    *(undefined4 *)((longlong)param_3 + 0x1c) = 0;
  }
  if ((*(uint *)(param_3 + 0xc) & 0x400000) != 0) {
    FUN_1450c9330(DAT_14c791050);
  }
  local_68 = param_3[0xb];
  pcVar3 = (code *)param_3[10];
  uVar2 = *(uint *)(param_3 + 0xc);
  local_60 = param_3[5];
  local_54 = *(undefined4 *)((longlong)param_3 + 0x24);
  if (*(uint *)(param_1 + 1) != 0) {
    plVar1 = (longlong *)(*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
    lVar8 = *plVar1;
    lVar7 = 0;
    while (lVar6 = lVar8, lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x4c) == param_2) {
        if (lVar7 == 0) {
          *plVar1 = *(longlong *)(lVar6 + 0x68);
        }
        else {
          *(longlong *)(lVar7 + 0x68) = *(longlong *)(lVar6 + 0x68);
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + -1;
        break;
      }
      lVar7 = lVar6;
      lVar8 = *(longlong *)(lVar6 + 0x68);
    }
  }
  local_48 = *(undefined4 *)((longlong)param_3 + 0x4c);
  local_50 = param_3[6];
  local_40 = 0;
  local_38 = 0xff;
  local_30 = 0xff;
  local_28 = 0;
  local_58 = param_2;
  FUN_145362f30(param_3);
  puVar4 = (undefined8 *)param_3[6];
  if (puVar4 != (undefined8 *)0x0) {
    if ((*(uint *)(puVar4 + 0xc) < 2) && (*(char *)((longlong)puVar4 + 100) != '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    uVar10 = *(uint *)(puVar4 + 0xc) - 1;
    *(uint *)(puVar4 + 0xc) = uVar10;
    if ((uVar10 == 0) || (((bVar5 && (uVar10 < 2)) && (*(char *)((longlong)puVar4 + 100) != '\0'))))
    {
      FUN_1453550a0(puVar4);
    }
    if (*(int *)(puVar4 + 0xc) == 0) {
      (**(code **)*puVar4)(puVar4,0);
      AK::MemoryMgr::Free(4,puVar4);
    }
  }
  if (param_3[7] != 0) {
    FUN_144d4a460();
  }
  if ((void *)*param_3 != (void *)0x0) {
    *(undefined4 *)(param_3 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_3);
    *param_3 = 0;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  }
  AK::MemoryMgr::Free(0,param_3);
  if ((uVar2 & 1) == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else {
    DVar9 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 9) = DVar9;
    ResetEvent((HANDLE)param_1[8]);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    (*pcVar3)(1,&local_68);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    *(undefined4 *)(param_1 + 9) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    SetEvent((HANDLE)param_1[8]);
  }
  return;
}



// FUNCTION 1450b3c00 FUN_1450b3c00 body=379 status=ok
// SIG undefined FUN_1450b3c00(void)

undefined8 FUN_1450b3c00(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  void *pvVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  
  uVar11 = 0;
  puVar14 = &DAT_149c269f0;
  do {
    uVar2 = *puVar14;
    uVar12 = (ulonglong)uVar2;
    if (param_2 < uVar2) {
      if (uVar2 == 0) {
        return 2;
      }
      uVar11 = *(uint *)(param_1 + 1);
      uVar16 = (ulonglong)uVar11;
      plVar5 = (longlong *)*param_1;
      uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
      param_1[1] = 0;
      *param_1 = 0;
      pvVar9 = AK::MemoryMgr::Malloc(0,uVar12 * 8);
      pvVar6 = (void *)*param_1;
      if (pvVar9 == (void *)0x0) {
        if (pvVar6 != (void *)0x0) {
          *(undefined4 *)(param_1 + 1) = 0;
          AK::MemoryMgr::Free(0,pvVar6);
        }
        *param_1 = (longlong)plVar5;
        uVar10 = 2;
        *(uint *)(param_1 + 1) = uVar11;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
      }
      else {
        if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar9)) {
          AK::MemoryMgr::Free(0,pvVar6);
        }
        *param_1 = (longlong)pvVar9;
        *(uint *)((longlong)param_1 + 0xc) = uVar2;
        uVar13 = uVar12;
        do {
          uVar4 = *(uint *)(param_1 + 1);
          if (uVar4 < (uint)uVar12) {
            *(uint *)(param_1 + 1) = uVar4 + 1;
            puVar1 = (undefined8 *)(*param_1 + (ulonglong)uVar4 * 8);
            if (puVar1 != (undefined8 *)0x0) {
              *puVar1 = 0;
              uVar12 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
            }
          }
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        plVar15 = plVar5;
        if (uVar11 != 0) {
          do {
            lVar8 = *plVar15;
            while (lVar8 != 0) {
              lVar7 = *(longlong *)(lVar8 + 0x68);
              uVar12 = (ulonglong)*(uint *)(lVar8 + 0x4c) % (ulonglong)uVar2;
              *(undefined8 *)(lVar8 + 0x68) = *(undefined8 *)(*param_1 + uVar12 * 8);
              *(longlong *)(*param_1 + uVar12 * 8) = lVar8;
              lVar8 = lVar7;
            }
            uVar16 = uVar16 - 1;
            plVar15 = plVar15 + 1;
          } while (uVar16 != 0);
        }
        if (plVar5 != (longlong *)0x0) {
          AK::MemoryMgr::Free(0,plVar5);
        }
        uVar10 = 1;
      }
      return uVar10;
    }
    uVar11 = uVar11 + 1;
    puVar14 = puVar14 + 1;
  } while (uVar11 < 0x1b);
  return 2;
}



// FUNCTION 1450b3d80 FUN_1450b3d80 body=170 status=ok
// SIG undefined FUN_1450b3d80(void)

undefined8 FUN_1450b3d80(longlong *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  __uint64 _Var3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar1 = *(uint *)(param_1 + 1);
  _Var3 = (ulonglong)uVar5 << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(0,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
      uVar4 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar2 + uVar4 * 8) = *(undefined8 *)(*param_1 + uVar4 * 8);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar2 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 1450b3e30 FUN_1450b3e30 body=16 status=ok
// SIG undefined FUN_1450b3e30(void)

undefined8 * FUN_1450b3e30(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 1450b3e40 FUN_1450b3e40 body=3 status=ok
// SIG undefined FUN_1450b3e40(void)

void FUN_1450b3e40(void)

{
  return;
}



// FUNCTION 1450b3e50 FUN_1450b3e50 body=79 status=ok
// SIG undefined FUN_1450b3e50(void)

undefined8 FUN_1450b3e50(longlong param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = 0xff;
  if (param_2 != 0) {
    uVar2 = param_2;
  }
  *(uint *)(param_1 + 0x10) = uVar2;
  if (uVar2 <= *(uint *)(param_1 + 0xc)) {
    return 1;
  }
  if (*(uint *)(param_1 + 0xc) != 0) {
    return 0x1f;
  }
  cVar1 = FUN_1450b4570(param_1,uVar2);
  uVar3 = 0x34;
  if (cVar1 != '\0') {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1450b3ea0 FUN_1450b3ea0 body=131 status=ok
// SIG undefined FUN_1450b3ea0(void)

void FUN_1450b3ea0(longlong *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  puVar2 = puVar3;
  if (puVar3 != puVar3 + *(uint *)(param_1 + 1)) {
    do {
      pvVar1 = (void *)*puVar2;
      FUN_14538fcd0(pvVar1);
      if (pvVar1 != (void *)0x0) {
        FUN_14538fc70();
        AK::MemoryMgr::Free(0,pvVar1);
      }
      puVar3 = (undefined8 *)*param_1;
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar3 + *(uint *)(param_1 + 1));
  }
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,puVar3);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1450b3f30 FUN_1450b3f30 body=137 status=ok
// SIG undefined FUN_1450b3f30(void)

void * FUN_1450b3f30(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  
  if ((*(uint *)(param_1 + 1) < *(uint *)(param_1 + 2)) &&
     (pvVar3 = AK::MemoryMgr::Malloc(0,0x98), pvVar3 != (void *)0x0)) {
    pvVar3 = (void *)FUN_14538fc20(pvVar3);
    if (pvVar3 == (void *)0x0) {
      return (void *)0x0;
    }
    uVar2 = *(uint *)(param_1 + 1);
    if (uVar2 < *(uint *)((longlong)param_1 + 0xc)) {
      *(uint *)(param_1 + 1) = uVar2 + 1;
      puVar1 = (undefined8 *)(*param_1 + (ulonglong)uVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = pvVar3;
        return pvVar3;
      }
    }
    FUN_14538fc70();
    AK::MemoryMgr::Free(0,pvVar3);
    return (void *)0x0;
  }
  return (void *)0x0;
}



// FUNCTION 1450b3fc0 FUN_1450b3fc0 body=115 status=ok
// SIG undefined FUN_1450b3fc0(void)

undefined8 FUN_1450b3fc0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  plVar1 = plVar3 + *(uint *)(param_1 + 1);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0x24;
    }
    if (*plVar3 == param_2) break;
    plVar3 = plVar3 + 1;
  }
  pvVar2 = (void *)*plVar3;
  if (plVar3 < plVar1 + -1) {
    *plVar3 = plVar1[-1];
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  FUN_14538fcd0(pvVar2);
  if (pvVar2 != (void *)0x0) {
    FUN_14538fc70();
    AK::MemoryMgr::Free(0,pvVar2);
  }
  return 1;
}



// FUNCTION 1450b4040 FUN_1450b4040 body=352 status=ok
// SIG undefined FUN_1450b4040(void)

undefined4 FUN_1450b4040(longlong *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  bool bVar11;
  
  plVar6 = (longlong *)*param_1;
  plVar9 = plVar6 + *(uint *)(param_1 + 1);
  for (; (plVar6 != plVar9 && (*plVar6 != param_2)); plVar6 = plVar6 + 1) {
  }
  plVar7 = (longlong *)0x0;
  if (plVar6 != plVar9) {
    plVar7 = plVar6;
  }
  if (plVar7 == (longlong *)0x0) {
    return 2;
  }
  plVar6 = *(longlong **)(param_2 + 0x30);
  uVar8 = 0x28;
  uVar10 = (ulonglong)*(uint *)(param_2 + 0x38);
  plVar9 = plVar6 + uVar10;
  bVar11 = plVar6 == plVar9;
  if (!bVar11) {
    do {
      if (*plVar6 == param_3) break;
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar9);
    bVar11 = plVar6 == plVar9;
  }
  plVar9 = (longlong *)0x0;
  if (!bVar11) {
    plVar9 = plVar6;
  }
  if (plVar9 == (longlong *)0x0) {
    if ((*(short *)(param_2 + 0x42) != -1) &&
       (((uVar10 < *(uint *)(param_2 + 0x3c) ||
         (cVar5 = FUN_1450b46a0(param_2 + 0x30), cVar5 != '\0')) &&
        (uVar10 < *(uint *)(param_2 + 0x3c))))) {
      uVar3 = *(uint *)(param_2 + 0x38);
      *(uint *)(param_2 + 0x38) = uVar3 + 1;
      plVar9 = (longlong *)(*(longlong *)(param_2 + 0x30) + (ulonglong)uVar3 * 8);
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = param_3;
        *(short *)(param_2 + 0x42) = *(short *)(param_2 + 0x42) + 1;
        if (*(char *)(param_2 + 0x2c) == '\0') {
          return 1;
        }
        lVar4 = *(longlong *)(param_3 + 0x1c8);
        fVar1 = *(float *)(param_2 + 0x74);
        fVar2 = *(float *)(param_2 + 0x78);
        *(float *)(lVar4 + 4) = *(float *)(lVar4 + 4) + *(float *)(param_2 + 0x70);
        *(float *)(lVar4 + 8) = *(float *)(lVar4 + 8) + fVar1;
        *(float *)(lVar4 + 0xc) = fVar2 + *(float *)(lVar4 + 0xc);
        FUN_14538fd90(param_2,*(int *)(DAT_14c790fd8 + 0x88) + 1);
        return 1;
      }
    }
    uVar8 = 2;
  }
  return uVar8;
}



// FUNCTION 1450b41a0 FUN_1450b41a0 body=157 status=ok
// SIG undefined FUN_1450b41a0(void)

undefined8 FUN_1450b41a0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  short sVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  plVar3 = (longlong *)*param_1;
  plVar1 = plVar3 + *(uint *)(param_1 + 1);
  for (; (plVar3 != plVar1 && (*plVar3 != param_2)); plVar3 = plVar3 + 1) {
  }
  plVar4 = (longlong *)0x0;
  if (plVar3 != plVar1) {
    plVar4 = plVar3;
  }
  if (plVar4 == (longlong *)0x0) {
    return 1;
  }
  plVar3 = *(longlong **)(param_2 + 0x30);
  uVar5 = 0x29;
  plVar1 = plVar3 + *(uint *)(param_2 + 0x38);
  if (plVar3 != plVar1) {
    while (*plVar3 != param_3) {
      plVar3 = plVar3 + 1;
      if (plVar3 == plVar1) {
        return 0x29;
      }
    }
    if (plVar3 < plVar1 + -1) {
      *plVar3 = plVar1[-1];
    }
    *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + -1;
    sVar2 = *(short *)(param_2 + 0x42) + -1;
    *(short *)(param_2 + 0x42) = sVar2;
    if ((*(short *)(param_2 + 0x40) == 0) && (sVar2 == 0)) {
      uVar5 = FUN_1450b3fc0(param_1);
      return uVar5;
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1450b4240 FUN_1450b4240 body=81 status=ok
// SIG undefined FUN_1450b4240(void)

undefined8 FUN_1450b4240(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)*param_1;
  plVar1 = plVar2 + *(uint *)(param_1 + 1);
  for (; (plVar2 != plVar1 && (*plVar2 != param_2)); plVar2 = plVar2 + 1) {
  }
  plVar3 = (longlong *)0x0;
  if (plVar2 != plVar1) {
    plVar3 = plVar2;
  }
  if ((plVar3 != (longlong *)0x0) && (*(short *)(param_2 + 0x40) != -1)) {
    *(short *)(param_2 + 0x40) = *(short *)(param_2 + 0x40) + 1;
    return 1;
  }
  return 2;
}



// FUNCTION 1450b42a0 FUN_1450b42a0 body=221 status=ok
// SIG undefined FUN_1450b42a0(void)

undefined8 FUN_1450b42a0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  void *pvVar2;
  short sVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  plVar4 = (longlong *)*param_1;
  plVar1 = plVar4 + *(uint *)(param_1 + 1);
  for (; (plVar4 != plVar1 && (*plVar4 != param_2)); plVar4 = plVar4 + 1) {
  }
  plVar5 = (longlong *)0x0;
  if (plVar4 != plVar1) {
    plVar5 = plVar4;
  }
  if ((plVar5 != (longlong *)0x0) &&
     (((*(short *)(param_2 + 0x40) == 0 ||
       (sVar3 = *(short *)(param_2 + 0x40) + -1, *(short *)(param_2 + 0x40) = sVar3, sVar3 == 0)) &&
      (*(short *)(param_2 + 0x42) == 0)))) {
    plVar4 = (longlong *)*param_1;
    uVar6 = 0x24;
    plVar1 = plVar4 + *(uint *)(param_1 + 1);
    if (plVar4 != plVar1) {
      while (*plVar4 != param_2) {
        plVar4 = plVar4 + 1;
        if (plVar4 == plVar1) {
          return 0x24;
        }
      }
      pvVar2 = (void *)*plVar4;
      if (plVar4 < plVar1 + -1) {
        *plVar4 = plVar1[-1];
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + -1;
      FUN_14538fcd0(pvVar2);
      if (pvVar2 != (void *)0x0) {
        FUN_14538fc70();
        AK::MemoryMgr::Free(0,pvVar2);
      }
      uVar6 = 1;
    }
    return uVar6;
  }
  return 1;
}



// FUNCTION 1450b4380 FUN_1450b4380 body=56 status=ok
// SIG undefined FUN_1450b4380(void)

void FUN_1450b4380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,undefined8 param_7)

{
  FUN_14538fea0(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 1450b43c0 FUN_1450b43c0 body=85 status=ok
// SIG undefined FUN_1450b43c0(void)

void FUN_1450b43c0(longlong *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != puVar1 + *(uint *)(param_1 + 1)) {
    do {
      if (*(int *)*puVar1 == 1) {
        FUN_14538fd90((int *)*puVar1,param_2);
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 8));
  }
  return;
}



// FUNCTION 1450b4420 FUN_1450b4420 body=201 status=ok
// SIG undefined FUN_1450b4420(void)

ulonglong FUN_1450b4420(undefined8 param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*param_2 == 0) {
    if ((char)param_2[0xb] == '\0') {
      if (*(longlong *)(param_3 + 2) != 0) {
        FUN_1450b4620(param_2 + 4,param_3 + 2);
        uVar1 = *param_3;
        *(ushort *)(param_2 + 8) = (ushort)uVar1;
        *(ulonglong *)(param_2 + 6) = *(longlong *)(param_2 + 2) + (ulonglong)(ushort)uVar1 * 0x18;
      }
      uVar2 = FUN_145390460(param_2,*(undefined4 *)(DAT_14c790fd8 + 0x88));
      if ((*(byte *)(param_2 + 10) & 2) == 0) {
        FUN_145390900(param_2);
        *param_3 = (uint)*(ushort *)(param_2 + 8);
        FUN_1450b4620(param_3 + 2,param_2 + 4);
        uVar2 = uVar2 & 0xffffffff;
      }
      return uVar2;
    }
    FUN_1453900c0(param_2);
  }
  return 2;
}



// FUNCTION 1450b44f0 FUN_1450b44f0 body=53 status=ok
// SIG undefined FUN_1450b44f0(void)

undefined8 FUN_1450b44f0(undefined8 param_1,int *param_2)

{
  if (*param_2 == 1) {
    FUN_145390680(param_2,*(undefined4 *)(DAT_14c790fd8 + 0x88));
    return 1;
  }
  return 0x26;
}



// FUNCTION 1450b4530 FUN_1450b4530 body=53 status=ok
// SIG undefined FUN_1450b4530(void)

undefined8 FUN_1450b4530(undefined8 param_1,int *param_2)

{
  if (*param_2 == 2) {
    FUN_145390690(param_2,*(undefined4 *)(DAT_14c790fd8 + 0x88));
    return 1;
  }
  return 0x27;
}



// FUNCTION 1450b4570 FUN_1450b4570 body=170 status=ok
// SIG undefined FUN_1450b4570(void)

undefined8 FUN_1450b4570(longlong *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  __uint64 _Var3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar1 = *(uint *)(param_1 + 1);
  _Var3 = (ulonglong)uVar5 << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(0,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
      uVar4 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar2 + uVar4 * 8) = *(undefined8 *)(*param_1 + uVar4 * 8);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar2 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 1450b4620 FUN_1450b4620 body=125 status=ok
// SIG undefined FUN_1450b4620(void)

longlong * FUN_1450b4620(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)*param_1;
  lVar2 = *param_2;
  if (puVar1 != (undefined8 *)0x0) {
    if (*(short *)(puVar1 + 2) == 1) {
      if ((void *)*puVar1 != (void *)0x0) {
        *(undefined4 *)(puVar1 + 1) = 0;
        AK::MemoryMgr::Free(0,(void *)*puVar1);
        *puVar1 = 0;
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      AK::MemoryMgr::Free(0,puVar1);
    }
    else {
      *(short *)(puVar1 + 2) = *(short *)(puVar1 + 2) + -1;
    }
  }
  *param_1 = lVar2;
  if (lVar2 != 0) {
    *(short *)(lVar2 + 0x10) = *(short *)(lVar2 + 0x10) + 1;
  }
  return param_1;
}



// FUNCTION 1450b46a0 FUN_1450b46a0 body=186 status=ok
// SIG undefined FUN_1450b46a0(void)

undefined8 FUN_1450b46a0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 1);
  iVar3 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  _Var6 = (ulonglong)(iVar3 + uVar1) << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450b473d;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_1450b473d:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450b4760 FUN_1450b4760 body=199 status=ok
// SIG undefined FUN_1450b4760(void)

undefined4 FUN_1450b4760(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if (*(longlong *)((longlong)param_1 + 0x60) == 0) {
    return 1;
  }
  uVar3 = 0;
  iVar1 = 0;
  if (*(int *)((longlong)param_1 + 0x50) != 0) {
    iVar1 = FUN_1450b4b40();
  }
  *(int *)((longlong)param_1 + 0x40) = *(int *)((longlong)param_1 + 0x5c);
  *(int *)((longlong)param_1 + 4) = iVar1 + 0x3c + *(int *)((longlong)param_1 + 0x5c);
  uVar2 = (**(code **)(**(longlong **)((longlong)param_1 + 0x60) + 8))
                    (*(longlong **)((longlong)param_1 + 0x60),param_1,0x44);
  (**(code **)(**(longlong **)((longlong)param_1 + 0x60) + 0x20))();
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  if (*(int *)((longlong)param_1 + 0x50) != 0) {
    do {
      AK::MemoryMgr::Free(0,*(void **)(*(longlong *)((longlong)param_1 + 0x48) + 8 + uVar3 * 0x10));
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x50) = 0;
    AK::MemoryMgr::Free(0,*(void **)((longlong)param_1 + 0x48));
    *(undefined8 *)((longlong)param_1 + 0x48) = 0;
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  AK::MemoryMgr::Free(0,param_1);
  return uVar2;
}



// FUNCTION 1450b4830 FUN_1450b4830 body=71 status=ok
// SIG undefined FUN_1450b4830(void)

undefined8 FUN_1450b4830(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  if ((*(longlong **)(param_1 + 0x60) == (longlong *)0x0) || (param_2 == 0)) {
    uVar1 = 2;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
    if ((int)uVar1 == 1) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_3;
      return uVar1;
    }
  }
  return uVar1;
}



// FUNCTION 1450b4880 FUN_1450b4880 body=505 status=ok
// SIG undefined FUN_1450b4880(void)

undefined8 FUN_1450b4880(longlong param_1,char *param_2)

{
  char *_Src;
  char cVar1;
  uint uVar2;
  longlong lVar3;
  char *_Dst;
  longlong lVar4;
  void *_Dst_00;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong _MaxCount;
  ulonglong _SizeInBytes;
  int iVar8;
  longlong lVar9;
  
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return 2;
  }
  uVar2 = *(uint *)(param_1 + 0x5c) / (uint)*(ushort *)(param_1 + 0x20);
  if ((*(int *)(param_1 + 0x50) == 0) ||
     (lVar9 = (ulonglong)*(uint *)(param_1 + 0x50) * 0x10 + *(longlong *)(param_1 + 0x48),
     uVar2 != *(uint *)(lVar9 + -0xc))) {
    lVar9 = -1;
    iVar8 = *(int *)(param_1 + 0x58) + 1;
    *(int *)(param_1 + 0x58) = iVar8;
    do {
      lVar9 = lVar9 + 1;
    } while (param_2[lVar9] != '\0');
    uVar6 = (int)lVar9 + 1;
    _Dst_00 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar6);
    if (_Dst_00 != (void *)0x0) {
      memcpy(_Dst_00,param_2,(ulonglong)uVar6);
      uVar6 = *(uint *)(param_1 + 0x50);
      if ((uVar6 < *(uint *)(param_1 + 0x54)) ||
         ((cVar1 = FUN_1450b4a80(), cVar1 != '\0' && (uVar6 < *(uint *)(param_1 + 0x54))))) {
        uVar6 = *(uint *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x50) = uVar6 + 1;
        piVar5 = (int *)((ulonglong)uVar6 * 0x10 + *(longlong *)(param_1 + 0x48));
        if (piVar5 != (int *)0x0) {
          *piVar5 = iVar8;
          piVar5[1] = uVar2;
          *(void **)(piVar5 + 2) = _Dst_00;
          return 1;
        }
      }
      AK::MemoryMgr::Free(0,_Dst_00);
    }
  }
  else {
    uVar7 = 0xffffffffffffffff;
    lVar3 = -1;
    do {
      lVar4 = lVar3;
      lVar3 = lVar4 + 1;
    } while (*(char *)(*(longlong *)(lVar9 + -8) + lVar3) != '\0');
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != '\0');
    uVar2 = (int)lVar4 + 2 + (int)lVar3;
    _SizeInBytes = (ulonglong)uVar2;
    _Dst = AK::MemoryMgr::Malloc(0,(ulonglong)uVar2);
    if (_Dst != (char *)0x0) {
      _Src = *(char **)(lVar9 + -8);
      _MaxCount = _SizeInBytes - 1;
      lVar3 = -1;
      do {
        lVar4 = lVar3;
        lVar3 = lVar4 + 1;
      } while (_Src[lVar3] != '\0');
      if (lVar4 + 2U <= _MaxCount) {
        lVar3 = -1;
        do {
          lVar4 = lVar3;
          lVar3 = lVar4 + 1;
        } while (_Src[lVar3] != '\0');
        _MaxCount = lVar4 + 2;
      }
      strncpy_s(_Dst,_SizeInBytes,_Src,_MaxCount);
      _Dst[_MaxCount] = '\0';
      AK::MemoryMgr::Free(0,*(void **)(lVar9 + -8));
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (_Dst[lVar3] != '\0');
      lVar4 = -1;
      uVar2 = (uVar2 - (int)lVar3) - 1;
      do {
        lVar4 = lVar4 + 1;
      } while (param_2[lVar4] != '\0');
      if ((int)uVar2 < (int)lVar4) {
        uVar7 = (ulonglong)uVar2;
      }
      else {
        do {
          uVar7 = uVar7 + 1;
        } while (param_2[uVar7] != '\0');
      }
      strncat_s(_Dst,_SizeInBytes,param_2,(longlong)(int)uVar7);
      *(char **)(lVar9 + -8) = _Dst;
      return 1;
    }
  }
  return 0x34;
}



// FUNCTION 1450b4a80 FUN_1450b4a80 body=190 status=ok
// SIG undefined FUN_1450b4a80(void)

undefined8 FUN_1450b4a80(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong lVar5;
  __uint64 _Var6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  iVar2 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar2 = 1;
  }
  _Var6 = (ulonglong)(iVar2 + uVar1) << 4;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        if (uVar7 != 0) {
          lVar5 = 0;
          do {
            uVar3 = ((undefined8 *)(lVar5 + *param_1))[1];
            *(undefined8 *)(lVar5 + (longlong)pvVar4) = *(undefined8 *)(lVar5 + *param_1);
            ((undefined8 *)(lVar5 + (longlong)pvVar4))[1] = uVar3;
            uVar7 = uVar7 - 1;
            lVar5 = lVar5 + 0x10;
          } while (uVar7 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450b4b21;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_1450b4b21:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar2 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450b4b40 FUN_1450b4b40 body=592 status=ok
// SIG undefined FUN_1450b4b40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1450b4b40(longlong param_1)

{
  char *pcVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *puVar16;
  uint local_res8 [2];
  int local_res10;
  int local_res14;
  undefined4 local_res18;
  int local_res1c;
  undefined8 auStack_80 [5];
  uint local_58 [8];
  
  local_res8[0] = *(uint *)(param_1 + 0x50);
  uVar11 = (ulonglong)local_res8[0] * 4 + 0xf;
  if (uVar11 <= (ulonglong)local_res8[0] * 4) {
    uVar11 = 0xffffffffffffff0;
  }
  auStack_80[0] = 0x1450b4b84;
  lVar6 = -(uVar11 & 0xfffffffffffffff0);
  local_res10 = 0x20657563;
  plVar3 = *(longlong **)(param_1 + 0x60);
  local_res14 = local_res8[0] * 0x18 + 4;
  puVar16 = (uint *)((longlong)local_58 + lVar6);
  pcVar4 = *(code **)(*plVar3 + 0x18);
  *(undefined8 *)((longlong)auStack_80 + lVar6) = 0x1450b4bb7;
  (*pcVar4)(plVar3,&local_res10,8);
  plVar3 = *(longlong **)(param_1 + 0x60);
  pcVar4 = *(code **)(*plVar3 + 0x18);
  *(undefined8 *)((longlong)auStack_80 + lVar6) = 0x1450b4bcb;
  (*pcVar4)(plVar3,local_res8,4);
  uVar2 = *(uint *)(param_1 + 0x50);
  uVar11 = 0;
  local_res10 = 0;
  uVar10 = 0;
  if (uVar2 != 0) {
    uVar15 = (ulonglong)uVar2;
    local_res10 = uVar2 * 0x18;
    uVar12 = uVar11;
    do {
      lVar9 = *(longlong *)(param_1 + 0x48);
      local_58[0] = *(uint *)(lVar9 + uVar12);
      local_58[1] = *(undefined4 *)(lVar9 + 4 + uVar12);
      local_58[2] = 0x61746164;
      local_58[3] = 0;
      local_58[4] = 0;
      local_58[5] = *(undefined4 *)(lVar9 + 4 + uVar12);
      plVar3 = *(longlong **)(param_1 + 0x60);
      pcVar4 = *(code **)(*plVar3 + 0x18);
      *(undefined8 *)((longlong)auStack_80 + lVar6) = 0x1450b4c27;
      (*pcVar4)(plVar3,local_58,0x18);
      uVar12 = uVar12 + 0x10;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  iVar8 = local_res10;
  if (*(uint *)(param_1 + 0x50) != 0) {
    uVar14 = (ulonglong)*(uint *)(param_1 + 0x50);
    uVar12 = uVar11;
    uVar15 = uVar11;
    puVar13 = puVar16;
    do {
      lVar9 = -1;
      do {
        pcVar1 = (char *)(*(longlong *)(uVar15 + 8 + *(longlong *)(param_1 + 0x48)) + 1 + lVar9);
        lVar9 = lVar9 + 1;
      } while (*pcVar1 != '\0');
      uVar10 = (int)lVar9 + 1;
      *puVar13 = uVar10;
      iVar7 = (int)uVar12 + 1;
      if ((uVar10 & 1) == 0) {
        iVar7 = (int)uVar12;
      }
      uVar15 = uVar15 + 0x10;
      puVar13 = puVar13 + 1;
      uVar10 = uVar10 + iVar7;
      uVar12 = (ulonglong)uVar10;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  local_res18 = 0x5453494c;
  local_res1c = uVar10 + *(uint *)(param_1 + 0x50) * 0xc + 4;
  plVar3 = *(longlong **)(param_1 + 0x60);
  pcVar4 = *(code **)(*plVar3 + 0x18);
  *(undefined8 *)((longlong)auStack_80 + lVar6) = 0x1450b4cbe;
  (*pcVar4)(plVar3,&local_res18,8);
  plVar3 = *(longlong **)(param_1 + 0x60);
  local_res8[0] = 0x6c746461;
  pcVar4 = *(code **)(*plVar3 + 0x18);
  *(undefined8 *)((longlong)auStack_80 + lVar6) = 0x1450b4cd9;
  (*pcVar4)(plVar3,local_res8,4);
  uVar10 = *(uint *)(param_1 + 0x50);
  if (uVar10 == 0) {
    iVar8 = iVar8 + 0x18;
  }
  else {
    uVar15 = (ulonglong)uVar10;
    uVar12 = uVar11;
    do {
      local_58[1] = *puVar16 + 4;
      local_58[0] = 0x6c62616c;
      local_58[2] = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + uVar12);
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8 + uVar12);
      plVar3 = *(longlong **)(param_1 + 0x60);
      local_58[3] = (uint)uVar5;
      local_58[4] = (uint)((ulonglong)uVar5 >> 0x20);
      pcVar4 = *(code **)(*plVar3 + 0x18);
      *(undefined8 *)((longlong)auStack_80 + lVar6) = 0x1450b4d27;
      (*pcVar4)(plVar3,local_58,0xc);
      plVar3 = *(longlong **)(param_1 + 0x60);
      uVar10 = *puVar16;
      uVar5 = CONCAT44(local_58[4],local_58[3]);
      pcVar4 = *(code **)(*plVar3 + 0x18);
      *(undefined8 *)((longlong)auStack_80 + lVar6) = 0x1450b4d38;
      (*pcVar4)(plVar3,uVar5,uVar10);
      uVar10 = (int)uVar11 + 0xc + *puVar16;
      if ((*puVar16 & 1) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x60);
        local_res8[0] = local_res8[0] & 0xffffff00;
        pcVar4 = *(code **)(*plVar3 + 0x18);
        *(undefined8 *)((longlong)auStack_80 + lVar6) = 0x1450b4d5c;
        (*pcVar4)(plVar3,local_res8,1);
        uVar10 = uVar10 + 1;
      }
      uVar11 = (ulonglong)uVar10;
      puVar16 = puVar16 + 1;
      uVar12 = uVar12 + 0x10;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    iVar8 = local_res10 + 0x18 + uVar10;
  }
  return iVar8;
}



// FUNCTION 1450b4d90 FUN_1450b4d90 body=98 status=ok
// SIG undefined FUN_1450b4d90(void)

undefined ** FUN_1450b4d90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c79c338) {
    FUN_144b3d300(&DAT_14c79c338);
    if (DAT_14c79c338 == -1) {
      atexit((_func_5014 *)&LAB_149928f40);
      _Init_thread_footer(&DAT_14c79c338);
    }
  }
  return &PTR_PTR_14c72f2d8;
}



// FUNCTION 1450b4e00 FUN_1450b4e00 body=584 status=ok
// SIG undefined FUN_1450b4e00(void)

undefined4 *
FUN_1450b4e00(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
             uint param_6)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  bool bVar12;
  ulonglong uVar11;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_145390c50();
    *(undefined8 **)(param_1 + 8) = puVar2;
  }
  plVar3 = (longlong *)(**(code **)*puVar2)();
  if (plVar3 != (longlong *)0x0) {
    puVar4 = AK::MemoryMgr::Malloc(0,0x68);
    if (puVar4 != (undefined4 *)0x0) {
      *(longlong **)(puVar4 + 0x18) = plVar3;
      uVar11 = 0;
      *(undefined8 *)(puVar4 + 0x12) = 0;
      *(undefined8 *)(puVar4 + 0x14) = 0;
      iVar1 = 4;
      if (param_5 == 1) {
        iVar1 = 2;
      }
      *(undefined8 *)(puVar4 + 0x16) = 0;
      *(undefined8 *)(puVar4 + 0xc) = 0;
      puVar4[0xe] = 0;
      *puVar4 = 0x46464952;
      puVar4[1] = 0xffffffff;
      puVar4[2] = 0x45564157;
      puVar4[3] = 0x20746d66;
      puVar4[4] = 0x28;
      *(undefined2 *)(puVar4 + 5) = 0xfffe;
      puVar4[6] = param_3;
      puVar4[9] = 0x16;
      *(short *)((longlong)puVar4 + 0x16) = (short)(param_6 & 0xff);
      iVar9 = iVar1 * (param_6 & 0xff);
      *(short *)((longlong)puVar4 + 0x22) = (short)iVar1 << 3;
      *(short *)(puVar4 + 8) = (short)iVar9;
      puVar4[7] = iVar9 * param_3;
      puVar4[10] = param_6 >> 0xc;
      uVar8 = 3;
      if (param_5 == 1) {
        uVar8 = 1;
      }
      puVar4[0xb] = uVar8;
      bVar12 = (param_6 & 0xf00) != 0x200;
      uVar7 = 0x721;
      if (bVar12) {
        uVar7 = 0;
      }
      *(undefined2 *)(puVar4 + 0xc) = uVar7;
      uVar7 = 0x11d3;
      if (bVar12) {
        uVar7 = 0x10;
      }
      *(undefined2 *)((longlong)puVar4 + 0x32) = uVar7;
      uVar5 = 0x86;
      if (bVar12) {
        uVar5 = 0x80;
      }
      *(undefined1 *)(puVar4 + 0xd) = uVar5;
      uVar6 = 0;
      uVar5 = 0x44;
      if (bVar12) {
        uVar5 = uVar6;
      }
      *(undefined1 *)((longlong)puVar4 + 0x35) = uVar5;
      uVar5 = 200;
      if (bVar12) {
        uVar5 = uVar6;
      }
      *(undefined1 *)((longlong)puVar4 + 0x36) = uVar5;
      uVar5 = 0xc1;
      if (bVar12) {
        uVar5 = 0xaa;
      }
      *(undefined1 *)((longlong)puVar4 + 0x37) = uVar5;
      uVar5 = 0xca;
      if (bVar12) {
        uVar5 = uVar6;
      }
      *(undefined1 *)(puVar4 + 0xe) = uVar5;
      uVar5 = uVar6;
      if (bVar12) {
        uVar5 = 0x38;
      }
      *(undefined1 *)((longlong)puVar4 + 0x39) = uVar5;
      uVar5 = uVar6;
      if (bVar12) {
        uVar5 = 0x9b;
      }
      *(undefined1 *)((longlong)puVar4 + 0x3a) = uVar5;
      if (bVar12) {
        uVar6 = 0x71;
      }
      *(undefined1 *)((longlong)puVar4 + 0x3b) = uVar6;
      *(undefined8 *)(puVar4 + 0xf) = 0x61746164;
      iVar1 = (**(code **)**(undefined8 **)(puVar4 + 0x18))
                        (*(undefined8 **)(puVar4 + 0x18),param_2,puVar4,0x44);
      if (iVar1 == 1) {
        return puVar4;
      }
      if (puVar4[0x14] != 0) {
        do {
          AK::MemoryMgr::Free(0,*(void **)(*(longlong *)(puVar4 + 0x12) + 8 + uVar11 * 0x10));
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
        } while (uVar10 < (uint)puVar4[0x14]);
      }
      if (*(void **)(puVar4 + 0x12) != (void *)0x0) {
        puVar4[0x14] = 0;
        AK::MemoryMgr::Free(0,*(void **)(puVar4 + 0x12));
        *(undefined8 *)(puVar4 + 0x12) = 0;
        puVar4[0x15] = 0;
      }
      AK::MemoryMgr::Free(0,puVar4);
      (**(code **)(*plVar3 + 0x20))(plVar3);
      return (undefined4 *)0x0;
    }
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  return (undefined4 *)0x0;
}



// FUNCTION 1450b5050 FUN_1450b5050 body=47 status=ok
// SIG undefined FUN_1450b5050(void)

undefined8 * FUN_1450b5050(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1450b5080 FUN_1450b5080 body=98 status=ok
// SIG undefined FUN_1450b5080(void)

void FUN_1450b5080(undefined8 *param_1)

{
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x50))();
    (**(code **)(*(longlong *)param_1[8] + 8))();
    param_1[8] = 0;
  }
  param_1[10] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(0,(void *)param_1[5]);
    param_1[5] = 0;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}



// FUNCTION 1450b50f0 FUN_1450b50f0 body=53 status=ok
// SIG undefined FUN_1450b50f0(void)

undefined8 FUN_1450b50f0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0xb) != '\0') {
    return 3;
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined4 *)(param_1 + 9) = 0x4483126f;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0x32;
  return 1;
}



// FUNCTION 1450b5130 FUN_1450b5130 body=88 status=ok
// SIG undefined FUN_1450b5130(void)

undefined8 FUN_1450b5130(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(0,(void *)param_1[5]);
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    return 1;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  return 1;
}



// FUNCTION 1450b5190 FUN_1450b5190 body=18 status=ok
// SIG undefined FUN_1450b5190(void)

void FUN_1450b5190(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 1450b51b0 FUN_1450b51b0 body=35 status=ok
// SIG undefined FUN_1450b51b0(void)

undefined8 FUN_1450b51b0(longlong param_1,float param_2,byte param_3)

{
  if ((0.0 <= param_2) && (param_3 < 0x65)) {
    *(float *)(param_1 + 0x48) = param_2;
    *(byte *)(param_1 + 0x4c) = param_3;
    return 1;
  }
  return 0x1f;
}



// FUNCTION 1450b51e0 FUN_1450b51e0 body=303 status=ok
// SIG undefined FUN_1450b51e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1450b51e0(longlong param_1,LPCSTR param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 auStack_70 [5];
  longlong local_48;
  int aiStack_40 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  
  local_34 = param_5;
  local_28 = param_6;
  lVar4 = -1;
  local_38 = 0;
  local_30 = 0;
  local_1c = 0xffffffff;
  local_20 = 1;
  local_14 = param_3;
  do {
    lVar2 = lVar4 + 1;
    lVar4 = lVar4 + 1;
  } while (param_2[lVar2] != '\0');
  uVar6 = lVar4 * 2 + 0x11;
  if (uVar6 <= lVar4 * 2 + 2U) {
    uVar6 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x1450b5261;
  lVar2 = -(uVar6 & 0xfffffffffffffff0);
  lVar5 = -1;
  lVar4 = (longlong)&local_38 + lVar2;
  do {
    lVar5 = lVar5 + 1;
  } while (param_2[lVar5] != '\0');
  *(int *)((longlong)aiStack_40 + lVar2) = (int)lVar5 + 1;
  *(longlong *)((longlong)&local_48 + lVar2) = lVar4;
  *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x1450b529a;
  MultiByteToWideChar(0xfde9,0,param_2,-1,*(LPWSTR *)((longlong)&local_48 + lVar2),
                      *(int *)((longlong)aiStack_40 + lVar2));
  *(undefined1 *)((longlong)aiStack_40 + lVar2) = 1;
  *(longlong *)((longlong)&local_48 + lVar2) = param_1 + 0x40;
  pcVar1 = *(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x20);
  *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x1450b52bf;
  iVar3 = (*pcVar1)(AK::IAkStreamMgr::m_pStreamMgr,lVar4,&local_38,0);
  if (iVar3 != 1) {
    local_20 = 0;
    *(undefined1 *)((longlong)aiStack_40 + lVar2) = 1;
    *(longlong *)((longlong)&local_48 + lVar2) = param_1 + 0x40;
    pcVar1 = *(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x20);
    *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x1450b52e9;
    iVar3 = (*pcVar1)(AK::IAkStreamMgr::m_pStreamMgr,lVar4,&local_38,0);
    if (iVar3 != 1) {
      return;
    }
  }
  *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x1450b52f9;
  FUN_1450b59d0(param_1,param_4);
  return;
}



// FUNCTION 1450b5310 FUN_1450b5310 body=21 status=ok
// SIG undefined FUN_1450b5310(void)

undefined8 FUN_1450b5310(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return 1;
}



// FUNCTION 1450b5330 FUN_1450b5330 body=205 status=ok
// SIG undefined FUN_1450b5330(void)

void FUN_1450b5330(longlong param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,char param_6)

{
  int iVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  char local_20;
  undefined4 local_1c;
  undefined4 local_14;
  
  local_38 = 0;
  local_1c = 0xffffffff;
  local_20 = param_6;
  local_30 = 0;
  local_14 = (undefined4)param_2;
  local_28 = param_5;
  local_34 = param_4;
  iVar1 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x18))
                    (AK::IAkStreamMgr::m_pStreamMgr,param_2,&local_38,0,param_1 + 0x40,1);
  if (iVar1 != 1) {
    if (param_6 == '\0') {
      return;
    }
    local_20 = '\0';
    iVar1 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x18))
                      (AK::IAkStreamMgr::m_pStreamMgr,param_2 & 0xffffffff,&local_38,0,
                       param_1 + 0x40,1);
    if (iVar1 != 1) {
      return;
    }
  }
  FUN_1450b59d0(param_1,param_3);
  return;
}



// FUNCTION 1450b5400 FUN_1450b5400 body=79 status=ok
// SIG undefined FUN_1450b5400(void)

undefined8 FUN_1450b5400(undefined8 *param_1)

{
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x50))();
    (**(code **)(*(longlong *)param_1[8] + 8))();
    param_1[8] = 0;
  }
  param_1[10] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 1;
}



// FUNCTION 1450b5450 FUN_1450b5450 body=651 status=ok
// SIG undefined FUN_1450b5450(void)

undefined4
FUN_1450b5450(undefined8 *param_1,longlong param_2,uint param_3,uint *param_4,int param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  
  iVar3 = param_5;
  uVar8 = 0;
  uVar11 = 1;
  uVar7 = 0;
  uVar6 = (ulonglong)param_3;
  if (param_5 != -1) {
    (**(code **)(*(longlong *)param_1[8] + 0x68))();
    *param_1 = 0;
    param_1[3] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1450b59d0(param_1,iVar3);
  }
  if (param_3 != 0) {
    do {
      uVar11 = 1;
      uVar10 = *(uint *)(param_1 + 4);
      uVar9 = *(uint *)((longlong)param_1 + (ulonglong)uVar10 * 4 + 0x18);
      uVar7 = (uint)uVar8;
      uVar5 = (uint)uVar6;
      if (uVar9 == 0) {
        if ((longlong *)param_1[8] == (longlong *)0x0) break;
        uVar12 = (ulonglong)(uVar10 == 0);
        uVar9 = (uint)(uVar10 == 0);
        if (*(int *)((longlong)param_1 + uVar12 * 4 + 0x18) != 0) {
          iVar3 = (**(code **)(*(longlong *)param_1[8] + 0x68))();
          if (iVar3 != 4) {
            *(uint *)(param_1 + 4) = uVar9;
            param_1[2] = param_1[uVar12];
            uVar10 = uVar9;
            goto LAB_1450b5578;
          }
LAB_1450b56b1:
          uVar11 = 0x38;
          break;
        }
LAB_1450b5578:
        uVar9 = *(uint *)((longlong)param_1 + 0x24);
        lVar4 = 0;
        param_5 = 0;
        if (uVar5 < uVar9) {
          uVar9 = uVar9 - uVar9 % *(uint *)(param_1 + 6);
          if (uVar10 == 0) {
            lVar4 = 8;
          }
          iVar3 = (**(code **)(*(longlong *)param_1[8] + 0x30))
                            ((longlong *)param_1[8],*(undefined8 *)(lVar4 + (longlong)param_1),uVar9
                             ,0,*(undefined1 *)((longlong)param_1 + 0x4c),
                             (float)uVar9 / *(float *)(param_1 + 9),&param_5);
          if (iVar3 != 1) goto LAB_1450b56b1;
          if (param_5 != 0) {
            lVar4 = 0x18;
            if (uVar10 == 0) {
              lVar4 = 0x1c;
            }
            *(int *)(lVar4 + (longlong)param_1) = param_5;
LAB_1450b568d:
            if (param_5 != 0) goto LAB_1450b569b;
          }
        }
        else if (*(int *)((longlong)param_1 + (ulonglong)uVar10 * 4 + 0x18) == 0) {
          plVar2 = (longlong *)param_1[8];
          uVar10 = uVar5 - (int)(uVar6 % (ulonglong)*(uint *)(param_1 + 6));
          iVar3 = (**(code **)(*plVar2 + 0x30))
                            (plVar2,uVar8 + param_2,uVar10,1,
                             *(undefined1 *)((longlong)param_1 + 0x4c),
                             (float)uVar10 / *(float *)(param_1 + 9),&param_5);
          if ((iVar3 == 1) && (iVar3 = (**(code **)(*(longlong *)param_1[8] + 0x60))(), iVar3 == 1))
          {
            uVar8 = (ulonglong)(uVar7 + param_5);
            uVar6 = (ulonglong)(uVar5 - param_5);
            goto LAB_1450b568d;
          }
          goto LAB_1450b56b1;
        }
        uVar11 = 1;
        uVar7 = (uint)uVar8;
        if (*(int *)((longlong)param_1 + (ulonglong)*(uint *)(param_1 + 4) * 4 + 0x18) == 0) break;
      }
      else {
        _Src = (void *)param_1[10];
        if (_Src == (void *)0x0) {
          _Src = (void *)param_1[2];
        }
        uVar10 = uVar5;
        if (uVar9 < uVar5) {
          uVar10 = uVar9;
        }
        memcpy((void *)(uVar8 + param_2),_Src,(ulonglong)uVar10);
        if (param_1[10] == 0) {
          uVar8 = (ulonglong)(uVar7 + uVar10);
          param_1[2] = param_1[2] + (ulonglong)uVar10;
          uVar6 = (ulonglong)(uVar5 - uVar10);
          piVar1 = (int *)((longlong)param_1 + (ulonglong)*(uint *)(param_1 + 4) * 4 + 0x18);
          *piVar1 = *piVar1 - uVar10;
        }
        else {
          uVar8 = (ulonglong)(uVar7 + uVar10);
          param_1[10] = param_1[10] + (ulonglong)uVar10;
          uVar6 = (ulonglong)(uVar5 - uVar10);
          piVar1 = (int *)((longlong)param_1 + (ulonglong)*(uint *)(param_1 + 4) * 4 + 0x18);
          *piVar1 = *piVar1 - uVar10;
        }
      }
LAB_1450b569b:
      uVar11 = 1;
      uVar7 = (uint)uVar8;
    } while (uVar7 < param_3);
  }
  *param_4 = uVar7;
  return uVar11;
}



// FUNCTION 1450b56e0 FUN_1450b56e0 body=58 status=ok
// SIG undefined FUN_1450b56e0(void)

ulonglong FUN_1450b56e0(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1450b5450();
  if (((int)uVar1 == 1) && (uVar1 = uVar1 & 0xffffffff, param_3 != 0)) {
    uVar1 = 0x38;
  }
  return uVar1;
}



// FUNCTION 1450b5720 FUN_1450b5720 body=398 status=ok
// SIG undefined FUN_1450b5720(void)

undefined4 FUN_1450b5720(longlong param_1,uint param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  int local_res10 [2];
  longlong local_res18 [2];
  
  uVar7 = 1;
  uVar4 = 0;
  uVar5 = param_2;
  if (param_2 != 0) {
    do {
      uVar7 = 1;
      uVar3 = (ulonglong)*(uint *)(param_1 + 0x20);
      uVar6 = *(uint *)(param_1 + 0x18 + uVar3 * 4);
      if (uVar6 == 0) {
        if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) break;
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x68))();
        if (iVar2 == 4) {
LAB_1450b5889:
          uVar7 = 0x38;
          break;
        }
        bVar8 = *(int *)(param_1 + 0x20) == 0;
        uVar3 = (ulonglong)bVar8;
        if (*(int *)(param_1 + 0x18 + uVar3 * 4) == 0) {
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x48))
                            (*(longlong **)(param_1 + 0x40),uVar5,1,local_res18);
          if (iVar2 != 1) goto LAB_1450b5889;
          if (local_res18[0] == 0) {
            local_res10[0] = 0;
            uVar6 = *(uint *)(param_1 + 0x24) -
                    *(uint *)(param_1 + 0x24) % *(uint *)(param_1 + 0x30);
            iVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))
                              (*(longlong **)(param_1 + 0x40),*(undefined8 *)(param_1 + uVar3 * 8),
                               uVar6,0,*(undefined1 *)(param_1 + 0x4c),
                               (float)uVar6 / *(float *)(param_1 + 0x48),local_res10);
            if (iVar2 != 1) goto LAB_1450b5889;
            if (local_res10[0] != 0) {
              *(int *)(param_1 + 0x18 + uVar3 * 4) = local_res10[0];
            }
          }
          else {
            uVar4 = uVar4 + (int)local_res18[0];
            uVar5 = uVar5 - (int)local_res18[0];
          }
        }
        else {
          *(uint *)(param_1 + 0x20) = (uint)bVar8;
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + uVar3 * 8);
        }
      }
      else {
        if (uVar5 <= uVar6) {
          uVar6 = uVar5;
        }
        uVar4 = uVar4 + uVar6;
        uVar5 = uVar5 - uVar6;
        if (*(longlong *)(param_1 + 0x50) == 0) {
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (ulonglong)uVar6;
          piVar1 = (int *)(param_1 + 0x18 + uVar3 * 4);
          *piVar1 = *piVar1 - uVar6;
        }
        else {
          *(ulonglong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + (ulonglong)uVar6;
          piVar1 = (int *)(param_1 + 0x18 + uVar3 * 4);
          *piVar1 = *piVar1 - uVar6;
        }
      }
      uVar7 = 1;
    } while (uVar4 < param_2);
  }
  *param_3 = uVar4;
  return uVar7;
}



// FUNCTION 1450b58b0 FUN_1450b58b0 body=233 status=ok
// SIG undefined FUN_1450b58b0(void)

longlong FUN_1450b58b0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint local_res10 [2];
  
  uVar7 = (ulonglong)param_2;
  lVar1 = param_1 + (ulonglong)*(uint *)(param_1 + 0x20) * 4;
  uVar2 = *(uint *)(lVar1 + 0x18);
  if (param_2 <= uVar2) {
    *(uint *)(lVar1 + 0x18) = uVar2 - param_2;
    lVar1 = *(longlong *)(param_1 + 0x50);
    if (lVar1 != 0) {
      *(ulonglong *)(param_1 + 0x50) = uVar7 + lVar1;
      return lVar1;
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar7;
    return lVar1;
  }
  uVar6 = 0;
  uVar5 = param_2;
  if ((uVar2 & 0x1f) != 0) {
    uVar5 = param_2 + 0x1f;
    uVar6 = (ulonglong)(0x20 - (uVar2 & 0x1f));
  }
  pvVar4 = AK::MemoryMgr::Malign(0,(ulonglong)uVar5,0x20);
  *(void **)(param_1 + 0x38) = pvVar4;
  if (pvVar4 != (void *)0x0) {
    iVar3 = FUN_1450b5450(param_1,uVar6 + (longlong)pvVar4,uVar7,local_res10,0xffffffff);
    if ((iVar3 == 1) && (local_res10[0] == param_2)) {
      return uVar6 + (longlong)pvVar4;
    }
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return 0;
}



// FUNCTION 1450b59a0 FUN_1450b59a0 body=39 status=ok
// SIG undefined FUN_1450b59a0(void)

void FUN_1450b59a0(longlong param_1)

{
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1450b59d0 FUN_1450b59d0 body=242 status=ok
// SIG undefined FUN_1450b59d0(void)

ulonglong FUN_1450b59d0(longlong *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  ulonglong uVar3;
  int local_res8 [2];
  undefined8 local_res18;
  
  uVar1 = (**(code **)(*(longlong *)param_1[8] + 0x28))();
  *(uint *)(param_1 + 6) = uVar1;
  if (uVar1 == 0) {
    return 2;
  }
  if (*(uint *)((longlong)param_1 + 0x24) < uVar1) {
    if ((void *)param_1[5] != (void *)0x0) {
      AK::MemoryMgr::Free(0,(void *)param_1[5]);
    }
    uVar1 = DAT_14c791108;
    if (DAT_14c791108 < *(uint *)(param_1 + 6)) {
      uVar1 = *(uint *)(param_1 + 6);
    }
    *(uint *)((longlong)param_1 + 0x24) = uVar1;
    pvVar2 = AK::MemoryMgr::Malign(0,(ulonglong)(uVar1 * 2),0x20);
    param_1[5] = (longlong)pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 0x34;
    }
  }
  *param_1 = param_1[5];
  param_1[1] = (ulonglong)*(uint *)((longlong)param_1 + 0x24) + param_1[5];
  uVar3 = 1;
  if (param_2 != 0) {
    local_res18 = 0;
    uVar3 = (**(code **)(*(longlong *)param_1[8] + 0x48))
                      ((longlong *)param_1[8],param_2,0,&local_res18);
    if ((int)uVar3 == 1) {
      param_2 = param_2 - (int)local_res18;
      uVar3 = FUN_1450b5720(param_1,param_2,local_res8);
      uVar3 = uVar3 & 0xffffffff;
      if (local_res8[0] != param_2) {
        uVar3 = 2;
      }
    }
  }
  return uVar3;
}



// FUNCTION 1450b5ad0 FUN_1450b5ad0 body=163 status=ok
// SIG undefined FUN_1450b5ad0(void)

void FUN_1450b5ad0(LPCWSTR param_1,int param_2,LPSTR param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0xffffffffffffffff;
  if (param_3 != (LPSTR)0x0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_1[lVar2] != L'\0');
    if ((uint)lVar2 < param_2 - 1U) {
      do {
        uVar3 = uVar3 + 1;
      } while (param_1[uVar3] != L'\0');
    }
    else {
      uVar3 = (ulonglong)(param_2 - 1U);
    }
    iVar1 = WideCharToMultiByte(0xfde9,0,param_1,(int)uVar3,param_3,param_2,(LPCSTR)0x0,(LPBOOL)0x0)
    ;
    param_3[iVar1] = '\0';
    return;
  }
  WideCharToMultiByte(0xfde9,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  return;
}



// FUNCTION 1450b5b80 FUN_1450b5b80 body=59 status=ok
// SIG undefined FUN_1450b5b80(void)

void FUN_1450b5b80(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1450b5bc0 FUN_1450b5bc0 body=415 status=ok
// SIG undefined FUN_1450b5bc0(void)

undefined8 FUN_1450b5bc0(undefined8 *param_1,LPCWSTR param_2,longlong param_3)

{
  int cbMultiByte;
  bool bVar1;
  int iVar2;
  LPSTR lpMultiByteStr;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  LPCWSTR pWVar7;
  ulonglong uVar8;
  __uint64 _Var9;
  ulonglong uVar10;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar11;
  
  if (*(char *)(param_1 + 1) != '\0') {
    AK::MemoryMgr::Free(0,(void *)*param_1);
  }
  uVar13 = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_2 == (LPCWSTR)0x0) {
    return 1;
  }
  uVar8 = 0xffffffffffffffff;
  uVar10 = 0xffffffffffffffff;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (param_2[uVar10] != L'\0');
  uVar6 = uVar13;
  if (param_3 != 0) {
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
    } while (*(short *)(param_3 + uVar6 * 2) != 0);
  }
  uVar4 = (uint)uVar6;
  uVar6 = uVar6 & 0xffffffff;
  bVar1 = true;
  uVar5 = uVar4;
  if (uVar6 < (uVar10 & 0xffffffff)) {
    bVar1 = false;
    pWVar7 = param_2 + ((uVar10 & 0xffffffff) - uVar6);
    uVar5 = 0;
    if (uVar4 != 0) {
      lVar12 = param_3 - (longlong)pWVar7;
      uVar10 = uVar13;
      do {
        if (*pWVar7 != *(WCHAR *)(lVar12 + (longlong)pWVar7)) {
          bVar1 = true;
          uVar5 = uVar4;
          break;
        }
        uVar10 = (ulonglong)((int)uVar10 + 1);
        pWVar7 = pWVar7 + 1;
      } while (uVar10 < uVar6);
    }
  }
  uVar10 = (ulonglong)uVar5;
  if (!bVar1) {
    uVar10 = uVar13;
  }
  _Var9 = uVar10 + ((int)uVar11 + 2);
  lpMultiByteStr = AK::MemoryMgr::Malloc(0,_Var9);
  if (lpMultiByteStr == (LPSTR)0x0) {
    uVar3 = 0x34;
  }
  else {
    cbMultiByte = (int)_Var9;
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (param_2[lVar12] != L'\0');
    if ((uint)lVar12 < cbMultiByte - 1U) {
      do {
        uVar8 = uVar8 + 1;
      } while (param_2[uVar8] != L'\0');
    }
    else {
      uVar8 = (ulonglong)(cbMultiByte - 1U);
    }
    iVar2 = WideCharToMultiByte(0xfde9,0,param_2,(int)uVar8,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,
                                (LPBOOL)0x0);
    lpMultiByteStr[iVar2] = '\0';
    if (bVar1) {
      FUN_1450b5ad0(param_3,cbMultiByte - iVar2,lpMultiByteStr + iVar2);
    }
    lpMultiByteStr[_Var9 - 1] = '\0';
    uVar3 = 1;
    *param_1 = lpMultiByteStr;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return uVar3;
}



// FUNCTION 1450b5d60 FUN_1450b5d60 body=329 status=ok
// SIG undefined FUN_1450b5d60(void)

undefined8 FUN_1450b5d60(undefined8 *param_1,void *param_2,void *param_3)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *_Dst;
  undefined8 uVar4;
  char *pcVar5;
  ulonglong uVar6;
  longlong lVar8;
  ulonglong uVar9;
  __uint64 _Var10;
  ulonglong uVar7;
  
  if (*(char *)(param_1 + 1) != '\0') {
    AK::MemoryMgr::Free(0,(void *)*param_1);
  }
  uVar9 = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_2 == (void *)0x0) {
    return 1;
  }
  uVar2 = 0xffffffffffffffff;
  uVar6 = 0xffffffffffffffff;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (*(char *)((longlong)param_2 + uVar6) != '\0');
  uVar3 = uVar9;
  if (param_3 != (void *)0x0) {
    do {
      uVar2 = uVar2 + 1;
      uVar3 = uVar2;
    } while (*(char *)((longlong)param_3 + uVar2) != '\0');
  }
  uVar2 = uVar3 & 0xffffffff;
  uVar6 = uVar6 & 0xffffffff;
  if (uVar2 < uVar6) {
    bVar1 = false;
    pcVar5 = (char *)((uVar6 - uVar2) + (longlong)param_2);
    if ((int)uVar3 != 0) {
      lVar8 = (longlong)param_3 - (longlong)pcVar5;
      uVar3 = uVar9;
      do {
        if (*pcVar5 != pcVar5[lVar8]) goto LAB_1450b5e20;
        uVar3 = (ulonglong)((int)uVar3 + 1);
        pcVar5 = pcVar5 + 1;
      } while (uVar3 < uVar2);
    }
  }
  else {
LAB_1450b5e20:
    bVar1 = true;
    uVar9 = uVar2;
  }
  _Var10 = ((int)uVar7 + 2) + uVar9;
  _Dst = AK::MemoryMgr::Malloc(0,_Var10);
  if (_Dst == (void *)0x0) {
    uVar4 = 0x34;
  }
  else {
    memcpy(_Dst,param_2,uVar6);
    if (bVar1) {
      memcpy((void *)((longlong)_Dst + uVar6),param_3,uVar2);
    }
    *(undefined1 *)((longlong)_Dst + (_Var10 - 1)) = 0;
    uVar4 = 1;
    *param_1 = _Dst;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return uVar4;
}



// FUNCTION 1450b5eb0 FUN_1450b5eb0 body=419 status=ok
// SIG undefined FUN_1450b5eb0(void)

undefined8 FUN_1450b5eb0(undefined8 *param_1,void *param_2,void *param_3)

{
  bool bVar1;
  ulonglong uVar2;
  void *_Dst;
  ulonglong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  __uint64 _Var10;
  
  uVar5 = 1;
  if (*(char *)(param_1 + 1) != '\0') {
    AK::MemoryMgr::Free(0,(void *)*param_1);
  }
  uVar9 = 0;
  uVar7 = 0xffffffffffffffff;
  *param_1 = 0;
  uVar3 = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  do {
    uVar3 = uVar3 + 1;
  } while (*(char *)((longlong)param_3 + uVar3) != '\0');
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)((longlong)param_2 + uVar2) != '\0');
  if (uVar3 < uVar2) {
    pcVar4 = (char *)((uVar2 - uVar3) + (longlong)param_2);
    if (uVar3 != 0) {
      lVar8 = (longlong)param_3 - (longlong)pcVar4;
      uVar2 = uVar9;
      do {
        if (*pcVar4 != pcVar4[lVar8]) goto LAB_1450b5f4d;
        uVar2 = (ulonglong)((int)uVar2 + 1);
        pcVar4 = pcVar4 + 1;
      } while (uVar2 < uVar3);
    }
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    return 1;
  }
LAB_1450b5f4d:
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_2 != (void *)0x0) {
    uVar3 = 0xffffffffffffffff;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (*(char *)((longlong)param_2 + uVar3) != '\0');
    uVar6 = uVar9;
    if (param_3 != (void *)0x0) {
      do {
        uVar7 = uVar7 + 1;
        uVar6 = uVar7;
      } while (*(char *)((longlong)param_3 + uVar7) != '\0');
    }
    uVar6 = uVar6 & 0xffffffff;
    uVar3 = uVar3 & 0xffffffff;
    if (uVar6 < uVar3) {
      bVar1 = false;
      pcVar4 = (char *)((uVar3 - uVar6) + (longlong)param_2);
      if (uVar6 != 0) {
        lVar8 = (longlong)param_3 - (longlong)pcVar4;
        uVar7 = uVar9;
        do {
          if (*pcVar4 != pcVar4[lVar8]) goto LAB_1450b5fdc;
          uVar7 = (ulonglong)((int)uVar7 + 1);
          pcVar4 = pcVar4 + 1;
        } while (uVar7 < uVar6);
      }
    }
    else {
LAB_1450b5fdc:
      bVar1 = true;
      uVar9 = uVar6;
    }
    _Var10 = ((int)uVar2 + 2) + uVar9;
    _Dst = AK::MemoryMgr::Malloc(0,_Var10);
    if (_Dst == (void *)0x0) {
      uVar5 = 0x34;
    }
    else {
      memcpy(_Dst,param_2,uVar3);
      if (bVar1) {
        memcpy((void *)((longlong)_Dst + uVar3),param_3,uVar6);
      }
      *(undefined1 *)((longlong)_Dst + (_Var10 - 1)) = 0;
      *param_1 = _Dst;
      uVar5 = 1;
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return uVar5;
}



// FUNCTION 1450b6060 FUN_1450b6060 body=186 status=ok
// SIG undefined FUN_1450b6060(void)

void FUN_1450b6060(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 1);
  puVar2 = (undefined8 *)*param_1;
  _Dst = puVar2;
  if (puVar2 != puVar2 + uVar1 * 3) {
    do {
      if (*(char *)((longlong)_Dst + 0xc) == '\x01') {
        AK::MemoryMgr::Free(*(int *)(_Dst + 2),(void *)*_Dst);
        puVar2 = (undefined8 *)*param_1;
        if (_Dst < puVar2 + (ulonglong)((int)param_1[1] - 1) * 3) {
          memmove(_Dst,_Dst + 3,
                  (ulonglong)
                  (uint)((int)(((longlong)(puVar2 + (ulonglong)((int)param_1[1] - 1) * 3) -
                               (longlong)_Dst) / 0x18) * 0x18));
          puVar2 = (undefined8 *)*param_1;
        }
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        uVar1 = (ulonglong)*(uint *)(param_1 + 1);
      }
      else {
        _Dst = _Dst + 3;
      }
    } while (_Dst != puVar2 + uVar1 * 3);
  }
  return;
}



// FUNCTION 1450b6120 FUN_1450b6120 body=176 status=ok
// SIG undefined FUN_1450b6120(void)

undefined8 FUN_1450b6120(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *_Dst;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != plVar1 + (ulonglong)*(uint *)(param_1 + 1) * 3) {
    _Dst = plVar1;
    while (*_Dst != *(longlong *)(param_2 + 8)) {
      _Dst = _Dst + 3;
      if (_Dst == plVar1 + (ulonglong)*(uint *)(param_1 + 1) * 3) {
        return 0;
      }
    }
    if (*(short *)((longlong)_Dst + 0xe) != 0) {
      if (*(char *)((longlong)_Dst + 0xd) != '\0') {
        return 1;
      }
      *(undefined1 *)((longlong)_Dst + 0xd) = 1;
      return 2;
    }
    if (_Dst < plVar1 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 3) {
      memmove(_Dst,_Dst + 3,
              (ulonglong)
              (uint)((int)(((longlong)(plVar1 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 3) -
                           (longlong)_Dst) / 0x18) * 0x18));
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  }
  return 0;
}



// FUNCTION 1450b61d0 FUN_1450b61d0 body=91 status=ok
// SIG undefined FUN_1450b61d0(void)

undefined8
FUN_1450b61d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1450b6230(param_1,0);
  if (puVar1 == (undefined8 *)0x0) {
    return 0x34;
  }
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 2) = param_4;
  *(undefined4 *)(puVar1 + 1) = param_3;
  *(undefined1 *)((longlong)puVar1 + 0xc) = 1;
  return 1;
}



// FUNCTION 1450b6230 FUN_1450b6230 body=366 status=ok
// SIG undefined FUN_1450b6230(void)

longlong FUN_1450b6230(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar9 = (ulonglong)uVar3;
  uVar10 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar3 < uVar10) {
LAB_1450b632f:
    puVar8 = (undefined8 *)(*param_1 + (ulonglong)param_2 * 0x18);
    if (param_2 < *(uint *)(param_1 + 1)) {
      memmove(puVar8 + 3,puVar8,(ulonglong)((*(uint *)(param_1 + 1) - param_2) * 0x18));
    }
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    lVar7 = *param_1 + (ulonglong)param_2 * 0x18;
  }
  else {
    iVar11 = (uVar10 >> 1) + uVar10;
    if (uVar10 == 0) {
      iVar11 = 1;
    }
    uVar10 = iVar11 + uVar10;
    if ((void *)*param_1 == (void *)0x0) {
      pvVar6 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar10 * 0x18);
      if (pvVar6 != (void *)0x0) {
        if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar6)) {
          if (uVar3 != 0) {
            lVar7 = (longlong)pvVar6 + 0xc;
            do {
              puVar8 = (undefined8 *)(lVar7 + -0xc);
              if (puVar8 != (undefined8 *)0x0) {
                *puVar8 = 0;
                *(undefined8 *)(lVar7 + -4) = 0;
                *(undefined8 *)(lVar7 + 4) = 0;
              }
              lVar4 = *param_1;
              lVar1 = (-0xc - (longlong)pvVar6) + lVar7;
              puVar2 = (undefined8 *)(lVar1 + lVar4);
              uVar5 = puVar2[1];
              *puVar8 = *puVar2;
              *(undefined8 *)(lVar7 + -4) = uVar5;
              *(undefined8 *)(lVar7 + 4) = *(undefined8 *)(lVar1 + 0x10 + lVar4);
              uVar9 = uVar9 - 1;
              lVar7 = lVar7 + 0x18;
            } while (uVar9 != 0);
          }
          AK::MemoryMgr::Free(0,(void *)*param_1);
        }
        goto LAB_1450b6317;
      }
    }
    else {
      pvVar6 = AK::MemoryMgr::Realloc(0,(void *)*param_1,(ulonglong)uVar10 * 0x18);
      if (pvVar6 == (void *)0x0) {
        return 0;
      }
LAB_1450b6317:
      *param_1 = (longlong)pvVar6;
      *(uint *)((longlong)param_1 + 0xc) = uVar10;
      if (uVar3 < uVar10) goto LAB_1450b632f;
    }
    lVar7 = 0;
  }
  return lVar7;
}



// FUNCTION 1450b63a0 FUN_1450b63a0 body=252 status=ok
// SIG undefined FUN_1450b63a0(void)

void FUN_1450b63a0(void *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x60);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (1 < iVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001450b6495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
    return;
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    AK::MemoryMgr::Free((*(byte *)((longlong)param_1 + 0x68) & 8) << 0x1b | 0x20000003,
                        *(void **)((longlong)param_1 + 0x18));
    *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  }
  FUN_1450b74c0(DAT_14c790fe0,param_1);
  if (*(int *)((longlong)param_1 + 100) < 1) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
    if (param_2 == '\0') {
      FUN_1450b6680();
    }
    if ((*(byte *)((longlong)param_1 + 0x68) & 2) != 0) {
      AK::MemoryMgr::Free(0,*(void **)((longlong)param_1 + 0x20));
      *(byte *)((longlong)param_1 + 0x68) = *(byte *)((longlong)param_1 + 0x68) & 0xfd;
    }
    *(undefined8 *)((longlong)param_1 + 0x20) = 0;
    AK::MemoryMgr::Free(0,param_1);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
    if (param_2 == '\0') {
      FUN_1450b6680(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1450b64a0 FUN_1450b64a0 body=266 status=ok
// SIG undefined FUN_1450b64a0(void)

void FUN_1450b64a0(undefined4 *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
  if (param_2 == '\0') {
    LOCK();
    piVar1 = param_1 + 0x19;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (1 < iVar2) goto LAB_1450b658d;
  }
  else {
    param_1[0x19] = 0;
  }
  FUN_1450b76f0(DAT_14c790fe0,param_1);
  if ((int)param_1[0x18] < 1) {
    local_18 = *param_1;
    local_14 = param_1[1];
    local_10 = 0;
    FUN_145391220(DAT_14c790fe0 + 0xa8,&local_18);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
    FUN_1450b65b0();
    if (*(void **)(param_1 + 6) != (void *)0x0) {
      AK::MemoryMgr::Free((*(byte *)(param_1 + 0x1a) & 8) << 0x1b | 0x20000003,
                          *(void **)(param_1 + 6));
      *(undefined8 *)(param_1 + 6) = 0;
    }
    if ((*(byte *)(param_1 + 0x1a) & 2) != 0) {
      AK::MemoryMgr::Free(0,*(void **)(param_1 + 8));
      *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xfd;
    }
    *(undefined8 *)(param_1 + 8) = 0;
    AK::MemoryMgr::Free(0,param_1);
    return;
  }
LAB_1450b658d:
                    /* WARNING: Could not recover jumptable at 0x0001450b65a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
  return;
}



// FUNCTION 1450b65b0 FUN_1450b65b0 body=208 status=ok
// SIG undefined FUN_1450b65b0(void)

void FUN_1450b65b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 local_res8 [8];
  
  plVar4 = *(longlong **)(param_1 + 0x50);
  plVar3 = plVar4;
  if (plVar4 != plVar4 + *(uint *)(param_1 + 0x58)) {
    do {
      cVar5 = '\x01';
      FUN_1450719c0(local_res8);
      if (plVar3 != (longlong *)
                    (*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x58) * 8)) {
        do {
          if (cVar5 == '\0') break;
          plVar4 = (longlong *)*plVar3;
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0x14);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 0x18))();
          }
          plVar3 = plVar3 + 1;
          cVar5 = cVar5 + '\x01';
        } while (plVar3 != (longlong *)
                           (*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x58) * 8
                           ));
      }
      FUN_1450719f0(local_res8);
      plVar4 = *(longlong **)(param_1 + 0x50);
    } while (plVar3 != plVar4 + *(uint *)(param_1 + 0x58));
  }
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    AK::MemoryMgr::Free(0,plVar4);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return;
}



// FUNCTION 1450b6680 FUN_1450b6680 body=85 status=ok
// SIG undefined FUN_1450b6680(void)

void FUN_1450b6680(undefined4 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = DAT_14c790fe0;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x12);
    uVar4 = *(undefined8 *)(param_1 + 2);
    uVar1 = *param_1;
    *(undefined4 *)(DAT_14c790fe0 + 0xec) = 1;
    FUN_145390f30(lVar5 + 0xf0,lVar2,uVar1,uVar4,1,uVar3);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1450b66e0 FUN_1450b66e0 body=151 status=ok
// SIG undefined FUN_1450b66e0(void)

undefined8 * FUN_1450b66e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c26ae0;
  FUN_1450b5050(param_1 + 1);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  *(undefined4 *)((longlong)param_1 + 0xec) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_145390ee0(param_1 + 0x1e);
  return param_1;
}



// FUNCTION 1450b6780 FUN_1450b6780 body=142 status=ok
// SIG undefined FUN_1450b6780(void)

void FUN_1450b6780(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c26ae0;
  FUN_145390f00();
  if ((void *)param_1[0x18] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x19) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x18]);
    param_1[0x18] = 0;
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  }
  if ((void *)param_1[0x12] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x12]);
    param_1[0x12] = 0;
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  FUN_1450b5080(param_1 + 1);
  return;
}



// FUNCTION 1450b6810 FUN_1450b6810 body=50 status=ok
// SIG undefined FUN_1450b6810(void)

undefined8 FUN_1450b6810(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_145390fa0(param_1 + 0xa8);
  if (cVar1 == '\0') {
    return 0x34;
  }
  uVar2 = FUN_1450b50f0(param_1 + 8);
  return uVar2;
}



// FUNCTION 1450b6850 FUN_1450b6850 body=524 status=ok
// SIG undefined FUN_1450b6850(void)

void FUN_1450b6850(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  FUN_1450ba060();
  FUN_145391020();
  uVar7 = 0;
  uVar4 = uVar7;
  if (*(int *)(param_1 + 0x98) != 0) {
    do {
      lVar1 = uVar4 * 8;
      puVar3 = *(undefined8 **)(lVar1 + *(longlong *)(param_1 + 0x90));
      while (puVar3 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*puVar3;
        FUN_1450b6060();
        if ((void *)puVar3[2] != (void *)0x0) {
          *(undefined4 *)(puVar3 + 3) = 0;
          AK::MemoryMgr::Free(0,(void *)puVar3[2]);
          puVar3[2] = 0;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
        }
        AK::MemoryMgr::Free(0,puVar3);
        puVar3 = puVar2;
      }
      uVar5 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
      *(undefined8 *)(lVar1 + *(longlong *)(param_1 + 0x90)) = 0;
    } while (uVar5 < *(uint *)(param_1 + 0x98));
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(void **)(param_1 + 0x90) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  if (*(uint *)(param_1 + 200) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0xc0);
    plVar6 = (longlong *)*puVar3;
    uVar4 = uVar7;
    while (plVar6 == (longlong *)0x0) {
      uVar5 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
      if (*(uint *)(param_1 + 200) <= uVar5) goto LAB_1450b69b0;
      plVar6 = (longlong *)puVar3[uVar4];
    }
    do {
      while( true ) {
        AK::MemoryMgr::Free(0,(void *)plVar6[2]);
        plVar6 = (longlong *)*plVar6;
        if (plVar6 != (longlong *)0x0) break;
        do {
          uVar5 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar5;
          if (*(uint *)(param_1 + 200) <= uVar5) goto LAB_1450b69a4;
          plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + uVar4 * 8);
        } while (plVar6 == (longlong *)0x0);
      }
LAB_1450b69a4:
    } while (plVar6 != (longlong *)0x0);
  }
LAB_1450b69b0:
  plVar6 = (longlong *)(param_1 + 0xc0);
  if (*(int *)(param_1 + 200) != 0) {
    do {
      puVar3 = *(undefined8 **)(*plVar6 + uVar7 * 8);
      while (puVar3 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*puVar3;
        AK::MemoryMgr::Free(0,puVar3);
        puVar3 = puVar2;
      }
      uVar5 = (int)uVar7 + 1;
      *(undefined8 *)(*plVar6 + uVar7 * 8) = 0;
      uVar7 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 200));
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if ((void *)*plVar6 != (void *)0x0) {
    *(undefined4 *)(param_1 + 200) = 0;
    AK::MemoryMgr::Free(0,(void *)*plVar6);
    *plVar6 = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  FUN_1450b5130();
  if (*(void **)(param_1 + 0xd8) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  return;
}



// FUNCTION 1450b6a60 FUN_1450b6a60 body=88 status=ok
// SIG undefined FUN_1450b6a60(void)

undefined8 FUN_1450b6a60(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_2 + 0x20) != 0) &&
     (uVar1 = FUN_145390f10(param_1 + 0xf0,*(undefined8 *)(param_2 + 0x28)), (int)uVar1 != 1)) {
    return uVar1;
  }
  FUN_1450bbcb0(param_1,param_2);
  if (*(char *)(param_2 + 0x18) != '\0') {
    AK::MemoryMgr::Free(0,*(void **)(param_2 + 0x10));
  }
  return 1;
}



// FUNCTION 1450b6b00 FUN_1450b6b00 body=360 status=ok
// SIG undefined FUN_1450b6b00(void)

void FUN_1450b6b00(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int *piVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res10 [24];
  ulonglong uVar5;
  
  lVar3 = DAT_14c791060;
  piVar6 = (int *)(DAT_14c791060 + 0x108);
  FUN_1450719c0(local_res10);
  FUN_145074e40(piVar6);
  uVar5 = 0;
  if (*(uint *)(lVar3 + 0x150) != 0) {
    plVar7 = (longlong *)**(undefined8 **)(lVar3 + 0x148);
    while (plVar7 == (longlong *)0x0) {
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      if (*(uint *)(lVar3 + 0x150) <= uVar4) goto LAB_1450b6c14;
      plVar7 = (longlong *)(*(undefined8 **)(lVar3 + 0x148))[uVar5];
    }
LAB_1450b6b80:
    do {
      if ((int)plVar7[5] == 0) {
        plVar8 = (longlong *)plVar7[1];
        if ((longlong *)plVar7[1] == (longlong *)0x0) {
          do {
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
            if (*(uint *)(lVar3 + 0x150) <= uVar4) goto LAB_1450b6c14;
            plVar7 = *(longlong **)(*(longlong *)(lVar3 + 0x148) + uVar5 * 8);
          } while (plVar7 == (longlong *)0x0);
          goto LAB_1450b6b80;
        }
      }
      else {
        LOCK();
        *(int *)((longlong)plVar7 + 0x14) = *(int *)((longlong)plVar7 + 0x14) + 1;
        UNLOCK();
        if ((int)plVar7[5] != 0) {
          *(undefined4 *)(plVar7 + 5) = 0;
          FUN_1450b9b00(param_1,plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0x14);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar7 + 0x18))(plVar7);
          }
        }
        plVar8 = (longlong *)plVar7[1];
        if (plVar8 == (longlong *)0x0) {
          do {
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
            if (*(uint *)(lVar3 + 0x150) <= uVar4) break;
            plVar8 = *(longlong **)(*(longlong *)(lVar3 + 0x148) + uVar5 * 8);
          } while (plVar8 == (longlong *)0x0);
        }
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      plVar7 = plVar8;
    } while (plVar7 != (longlong *)0x0);
  }
LAB_1450b6c14:
  LOCK();
  *piVar6 = *piVar6 + 1;
  UNLOCK();
  if (*piVar6 == 0) {
    *(undefined4 *)(lVar3 + 0x10c) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x110));
  FUN_1450719f0(local_res10);
  return;
}



// FUNCTION 1450b6c70 FUN_1450b6c70 body=304 status=ok
// SIG undefined FUN_1450b6c70(void)

undefined8 FUN_1450b6c70(longlong *param_1,int *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  byte bVar7;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  uVar2 = *(undefined4 *)*param_1;
  *param_1 = (longlong)((undefined4 *)*param_1 + 1);
  *(undefined4 *)((longlong)param_3 + 4) = uVar2;
  pcVar3 = (char *)*param_1;
  cVar1 = *pcVar3;
  *param_1 = (longlong)(pcVar3 + 1);
  uVar2 = *(undefined4 *)(pcVar3 + 1);
  *param_1 = (longlong)(pcVar3 + 5);
  *(undefined4 *)(param_3 + 1) = uVar2;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar2;
  uVar2 = *(undefined4 *)*param_1;
  *param_1 = (longlong)((undefined4 *)*param_1 + 1);
  *(undefined4 *)(param_3 + 2) = uVar2;
  bVar7 = *(byte *)*param_1;
  *param_1 = (longlong)((byte *)*param_1 + 1);
  uVar4 = 0;
  uVar6 = (uint)bVar7;
  uVar6 = (uVar6 & 8) << 7 ^
          ((*(uint *)((longlong)param_3 + 0x14) ^ uVar6) & 1 ^ *(uint *)((longlong)param_3 + 0x14))
          & 0xfffffbff;
  if (cVar1 == '\x01') {
    uVar4 = 2;
  }
  bVar7 = *(byte *)((longlong)param_3 + 4) & 0xf;
  *(uint *)((longlong)param_3 + 0x14) = uVar6 & 0xfffffffd | uVar4;
  if (bVar7 != 1) {
    if (bVar7 == 2) {
      uVar4 = *(uint *)*param_1;
      *param_1 = (longlong)((uint *)*param_1 + 1);
      *(uint *)(param_3 + 4) = uVar4;
      param_3[3] = *param_1;
      *param_1 = *param_1 + (ulonglong)uVar4;
      *param_2 = *param_2 - *(int *)(param_3 + 4);
      return 1;
    }
    uVar5 = 1;
    if (bVar7 != 0) {
      uVar5 = 0x38;
    }
    return uVar5;
  }
  if (cVar1 == '\0') {
    *(uint *)((longlong)param_3 + 0x14) = uVar6 & 0xffffff8d | uVar4 | 0xc;
    return 1;
  }
  if ((cVar1 != '\x02') && (cVar1 != '\x01')) {
    return 0x38;
  }
  *(uint *)((longlong)param_3 + 0x14) = uVar6 & 0xffffff85 | uVar4 | 4;
  return 1;
}



// FUNCTION 1450b6da0 FUN_1450b6da0 body=687 status=ok
// SIG undefined FUN_1450b6da0(void)

int FUN_1450b6da0(longlong param_1,longlong param_2,longlong param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar11;
  int local_res18;
  ulonglong uVar10;
  
  if ((*(int *)(param_3 + 0x34) != 0) || (*(int *)(param_3 + 0x38) == 0)) {
    return 1;
  }
  iVar11 = 0x34;
  local_res18 = 0x34;
  if (*(longlong *)(param_3 + 0x20) != 0) {
    uVar10 = 0;
    iVar8 = 0;
    if (*(int *)(param_3 + 0x38) != 0) {
      do {
        lVar2 = *(longlong *)(param_3 + 0x20);
        if (*(int *)(lVar2 + uVar10 * 0xc) != 0) {
          lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x68);
          EnterCriticalSection(lpCriticalSection);
          uVar9 = *(uint *)(lVar2 + uVar10 * 0xc);
          plVar6 = (longlong *)(param_1 + 0x90);
          if ((*(uint *)(param_1 + 0x98) == 0) ||
             (0.9 < (float)*(uint *)(param_1 + 0xa0) / (float)*(uint *)(param_1 + 0x98))) {
            FUN_1450bc7e0(plVar6);
          }
          if (*(uint *)(param_1 + 0x98) != 0) {
            uVar3 = (ulonglong)uVar9 % (ulonglong)*(uint *)(param_1 + 0x98);
            for (puVar7 = *(undefined8 **)(*plVar6 + uVar3 * 8); puVar7 != (undefined8 *)0x0;
                puVar7 = (undefined8 *)*puVar7) {
              if (*(uint *)(puVar7 + 1) == uVar9) {
                puVar7 = puVar7 + 2;
                if (puVar7 != (undefined8 *)0x0) {
                  bVar4 = true;
                  goto LAB_1450b6f2d;
                }
                break;
              }
            }
            puVar5 = AK::MemoryMgr::Malloc(0,0x28);
            if (puVar5 == (undefined8 *)0x0) {
              puVar7 = (undefined8 *)0x0;
            }
            else {
              puVar7 = puVar5 + 2;
              *puVar5 = *(undefined8 *)(*plVar6 + uVar3 * 8);
              *(uint *)(puVar5 + 1) = uVar9;
              if (puVar7 != (undefined8 *)0x0) {
                *(undefined4 *)(puVar5 + 4) = 1;
                *puVar7 = 0;
                puVar5[3] = 0;
                *(undefined4 *)((longlong)puVar5 + 0x24) = 0xffffffff;
              }
              *(undefined8 **)(*plVar6 + uVar3 * 8) = puVar5;
              *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
            }
            bVar4 = false;
            if (puVar7 != (undefined8 *)0x0) {
LAB_1450b6f2d:
              *(undefined4 *)((longlong)puVar7 + 0x14) = *(undefined4 *)(lVar2 + uVar10 * 0xc);
              uVar1 = *(undefined4 *)(lVar2 + 8 + uVar10 * 0xc);
              uVar9 = *(uint *)(lVar2 + 4 + uVar10 * 0xc);
              plVar6 = (longlong *)FUN_1450b6230(puVar7,0);
              if (plVar6 != (longlong *)0x0) {
                plVar6[2] = param_3;
                *plVar6 = (ulonglong)uVar9 + param_2;
                *(undefined4 *)(plVar6 + 1) = uVar1;
                iVar11 = 1;
                local_res18 = 1;
                *(undefined1 *)((longlong)plVar6 + 0xc) = 2;
                if (bVar4) {
                  *(int *)(puVar7 + 2) = *(int *)(puVar7 + 2) + 1;
                }
                LeaveCriticalSection(lpCriticalSection);
                goto LAB_1450b6f91;
              }
              FUN_1450bc720(param_1 + 0x90,*(undefined4 *)(lVar2 + uVar10 * 0xc));
              LeaveCriticalSection(lpCriticalSection);
              iVar11 = 0x34;
              break;
            }
          }
          LeaveCriticalSection(lpCriticalSection);
          iVar11 = local_res18;
          break;
        }
LAB_1450b6f91:
        *(int *)(param_3 + 0x34) = *(int *)(param_3 + 0x34) + 1;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(param_3 + 0x38));
      iVar8 = (int)uVar10;
    }
    if (*(int *)(param_3 + 0x38) == iVar8) {
      return 1;
    }
    if (iVar11 == 1) {
      return 1;
    }
  }
  FUN_1450b74c0(param_1,param_3);
  return iVar11;
}



// FUNCTION 1450b7050 FUN_1450b7050 body=1121 status=ok
// SIG undefined FUN_1450b7050(void)

int FUN_1450b7050(longlong param_1,longlong param_2,int param_3,char param_4)

{
  longlong *plVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  void *_Dst;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int local_res18 [2];
  char local_res20;
  uint local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  uint local_58 [2];
  void *local_50;
  longlong local_48;
  longlong *local_40;
  
  if (param_3 != 0) {
    uVar12 = *(uint *)(param_2 + 0x34);
    local_60 = 0;
    local_64 = 0;
    local_68 = 0;
    iVar8 = 0;
    local_res20 = param_4;
    if (uVar12 < *(uint *)(param_2 + 0x38)) {
      local_48 = 0;
      local_68 = 0;
      local_res18[0] = param_3;
      uVar11 = local_60;
      do {
        puVar10 = (uint *)(*(longlong *)(param_2 + 0x20) + local_48);
        local_60 = puVar10[1];
        uVar2 = *puVar10;
        local_68 = local_68 + (local_60 - uVar11);
        if (uVar2 != 0) {
          uVar12 = puVar10[2];
          lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x68);
          local_58[0] = uVar12;
          EnterCriticalSection(lpCriticalSection);
          local_40 = (longlong *)(param_1 + 0x90);
          if (*(uint *)(param_1 + 0x98) == 0) {
LAB_1450b7191:
            plVar4 = (longlong *)FUN_1450bc620(local_40,uVar2);
            if (plVar4 == (longlong *)0x0) {
              iVar6 = 0x34;
              LeaveCriticalSection(lpCriticalSection);
              goto LAB_1450b7447;
            }
            *(uint *)((longlong)plVar4 + 0x14) = uVar2;
            puVar5 = (undefined8 *)*plVar4;
          }
          else {
            for (puVar5 = *(undefined8 **)
                           (*local_40 +
                           ((ulonglong)uVar2 % (ulonglong)*(uint *)(param_1 + 0x98)) * 8);
                puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
              if (*(uint *)(puVar5 + 1) == uVar2) {
                plVar4 = puVar5 + 2;
                goto LAB_1450b7143;
              }
            }
            plVar4 = (longlong *)0x0;
LAB_1450b7143:
            if (plVar4 == (longlong *)0x0) goto LAB_1450b7191;
            puVar5 = (undefined8 *)*plVar4;
            *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
            for (puVar3 = puVar5; puVar3 != puVar5 + (ulonglong)*(uint *)(plVar4 + 1) * 3;
                puVar3 = puVar3 + 3) {
              if (*(char *)((longlong)puVar3 + 0xc) == '\x01') {
                *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
                LeaveCriticalSection(lpCriticalSection);
                goto LAB_1450b734e;
              }
            }
          }
          uVar11 = (*(byte *)(param_2 + 0x68) & 8) << 0x1b | 0x20000003;
          puVar3 = puVar5 + (ulonglong)*(uint *)(plVar4 + 1) * 3;
          for (; puVar5 != puVar3; puVar5 = puVar5 + 3) {
            if (*(char *)((longlong)puVar5 + 0xc) == '\x02') {
              if (puVar5 != (undefined8 *)0x0) {
                uVar12 = *(uint *)(puVar5 + 1);
                _Dst = AK::MemoryMgr::Malign(uVar11,(ulonglong)uVar12,0x10);
                if (_Dst == (void *)0x0) goto LAB_1450b73d6;
                memcpy(_Dst,(void *)*puVar5,(ulonglong)uVar12);
                goto LAB_1450b730d;
              }
              break;
            }
          }
          _Dst = AK::MemoryMgr::Malign(uVar11,(ulonglong)uVar12,0x10);
          local_50 = _Dst;
          if (_Dst == (void *)0x0) {
LAB_1450b73d6:
            iVar6 = 0x34;
          }
          else {
            LeaveCriticalSection(lpCriticalSection);
            if (local_68 == 0) {
LAB_1450b7296:
              local_5c = 0;
              iVar6 = FUN_1450b5450(param_1 + 8,_Dst,uVar12,&local_5c,0xffffffff);
              if ((iVar6 != 1) || (uVar12 == local_5c)) {
                local_60 = local_60 + local_5c;
                if (local_res20 != '\0') {
                  FUN_1450bfda0(uVar11,&local_50,local_58);
                  _Dst = local_50;
                  uVar12 = local_58[0];
                }
                goto LAB_1450b72f7;
              }
LAB_1450b73c6:
              iVar6 = 0x38;
              EnterCriticalSection(lpCriticalSection);
            }
            else {
              local_5c = 0;
              iVar6 = FUN_1450b5720(param_1 + 8,local_68,&local_5c);
              if (local_68 != local_5c) goto LAB_1450b73c6;
              local_68 = 0;
              if (iVar6 == 1) goto LAB_1450b7296;
LAB_1450b72f7:
              EnterCriticalSection(lpCriticalSection);
              if (iVar6 == 1) {
LAB_1450b730d:
                puVar5 = (undefined8 *)FUN_1450b6230(plVar4,0);
                if (puVar5 != (undefined8 *)0x0) {
                  *puVar5 = _Dst;
                  *(uint *)(puVar5 + 1) = uVar12;
                  *(uint *)(puVar5 + 2) = uVar11;
                  *(undefined1 *)((longlong)puVar5 + 0xc) = 1;
                  *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
                  LeaveCriticalSection(lpCriticalSection);
                  goto LAB_1450b734e;
                }
                goto LAB_1450b73d6;
              }
            }
          }
          if (_Dst != (void *)0x0) {
            AK::MemoryMgr::Free(uVar11,_Dst);
          }
          plVar1 = plVar4 + 2;
          *(int *)plVar1 = (int)*plVar1 + -1;
          if ((int)*plVar1 == 0) {
            FUN_1450b6060(plVar4);
          }
          if ((int)plVar4[2] == 0) {
            FUN_1450bc720(local_40,*(undefined4 *)((longlong)plVar4 + 0x14));
          }
          LeaveCriticalSection(lpCriticalSection);
          iVar8 = local_64;
          param_3 = local_res18[0];
          if (iVar6 != 1) goto LAB_1450b7447;
          break;
        }
        *(uint *)(param_2 + 0x34) = uVar12 + 1;
LAB_1450b734e:
        iVar8 = local_64 + 1;
        local_48 = local_48 + 0xc;
        uVar12 = *(uint *)(param_2 + 0x34);
        param_3 = local_res18[0];
        local_64 = iVar8;
        uVar11 = local_60;
      } while (uVar12 < *(uint *)(param_2 + 0x38));
    }
    iVar6 = local_68 + (param_3 - local_60);
    if (iVar6 != 0) {
      local_res18[0] = 0;
      FUN_1450b5720(param_1 + 8,iVar6,local_res18);
      if (iVar6 != local_res18[0]) {
        iVar6 = 0x38;
        local_64 = iVar8;
LAB_1450b7447:
        lVar7 = (longlong)local_64;
        if (local_64 < 1) {
          return iVar6;
        }
        lVar9 = lVar7 * 0xc;
        do {
          lVar9 = lVar9 + -0xc;
          lVar7 = lVar7 + -1;
          if (*(int *)(lVar9 + *(longlong *)(param_2 + 0x20)) != 0) {
            FUN_1450b80e0(param_1);
          }
        } while (0 < lVar7);
        return iVar6;
      }
    }
    *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) | 4;
  }
  return 1;
}



// FUNCTION 1450b74c0 FUN_1450b74c0 body=548 status=ok
// SIG undefined FUN_1450b74c0(void)

void FUN_1450b74c0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *_Dst;
  uint uVar7;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar8;
  
  if (*(longlong *)(param_2 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
    iVar3 = *(int *)(param_2 + 0x34);
    while (iVar3 != 0) {
      *(uint *)(param_2 + 0x34) = iVar3 - 1U;
      uVar7 = *(uint *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(iVar3 - 1U) * 0xc);
      if (uVar7 != 0) {
        plVar2 = (longlong *)(param_1 + 0x90);
        if (*(uint *)(param_1 + 0x98) != 0) {
          plVar9 = (longlong *)0x0;
          uVar6 = (ulonglong)uVar7 % (ulonglong)*(uint *)(param_1 + 0x98);
          plVar10 = *(longlong **)(*plVar2 + uVar6 * 8);
          if (plVar10 != (longlong *)0x0) {
            do {
              plVar11 = plVar10;
              if (*(uint *)(plVar10 + 1) == uVar7) break;
              plVar11 = (longlong *)*plVar10;
              plVar9 = plVar10;
              plVar10 = plVar11;
            } while (plVar11 != (longlong *)0x0);
            if (plVar11 != (longlong *)0x0) {
              pvVar4 = (void *)plVar11[2];
              puVar1 = (uint *)(plVar11 + 3);
              for (_Dst = pvVar4; _Dst != (void *)((longlong)pvVar4 + (ulonglong)*puVar1 * 0x18);
                  _Dst = (void *)((longlong)_Dst + 0x18)) {
                if ((*(char *)((longlong)_Dst + 0xc) == '\x02') &&
                   (*(longlong *)((longlong)_Dst + 0x10) == param_2)) {
                  pvVar4 = (void *)((longlong)pvVar4 + (ulonglong)(*puVar1 - 1) * 0x18);
                  if (_Dst < pvVar4) {
                    memmove(_Dst,(void *)((longlong)_Dst + 0x18),
                            (ulonglong)
                            (uint)((int)(((longlong)pvVar4 - (longlong)_Dst) / 0x18) * 0x18));
                  }
                  *puVar1 = *puVar1 - 1;
                  break;
                }
              }
              plVar10 = plVar11 + 4;
              *(int *)plVar10 = (int)*plVar10 + -1;
              if ((int)*plVar10 == 0) {
                FUN_1450b6060(plVar11 + 2);
              }
              if ((int)plVar11[4] == 0) {
                lVar5 = *plVar11;
                if (lVar5 == 0) {
                  uVar8 = uVar6;
                  do {
                    uVar7 = (int)uVar8 + 1;
                    uVar8 = (ulonglong)uVar7;
                    if (*(uint *)(param_1 + 0x98) <= uVar7) break;
                  } while (*(longlong *)(*plVar2 + uVar8 * 8) == 0);
                }
                if (plVar9 == (longlong *)0x0) {
                  *(longlong *)(*plVar2 + uVar6 * 8) = lVar5;
                }
                else {
                  *plVar9 = lVar5;
                }
                FUN_1450b6060();
                if ((void *)plVar11[2] != (void *)0x0) {
                  *(undefined4 *)(plVar11 + 3) = 0;
                  AK::MemoryMgr::Free(0,(void *)plVar11[2]);
                  plVar11[2] = 0;
                  *(undefined4 *)((longlong)plVar11 + 0x1c) = 0;
                }
                AK::MemoryMgr::Free(0,plVar11);
                *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
              }
            }
          }
        }
      }
      iVar3 = *(int *)(param_2 + 0x34);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  }
  return;
}



// FUNCTION 1450b76f0 FUN_1450b76f0 body=420 status=ok
// SIG undefined FUN_1450b76f0(void)

void FUN_1450b76f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if (((*(byte *)(param_2 + 0x68) & 4) != 0) && (*(longlong *)(param_2 + 0x20) != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
    uVar6 = 0;
    if (*(int *)(param_2 + 0x34) != 0) {
      do {
        uVar3 = *(uint *)(*(longlong *)(param_2 + 0x20) + uVar6 * 0xc);
        if ((uVar3 != 0) && (*(uint *)(param_1 + 0x98) != 0)) {
          uVar2 = (ulonglong)uVar3 % (ulonglong)*(uint *)(param_1 + 0x98);
          plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x90) + uVar2 * 8);
          plVar7 = (longlong *)0x0;
          if (plVar5 != (longlong *)0x0) {
            do {
              plVar4 = plVar5;
              plVar5 = plVar4;
              if (*(uint *)(plVar4 + 1) == uVar3) break;
              plVar5 = (longlong *)*plVar4;
              plVar7 = plVar4;
            } while (plVar5 != (longlong *)0x0);
            if (plVar5 != (longlong *)0x0) {
              plVar4 = plVar5 + 4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              if ((int)*plVar4 == 0) {
                FUN_1450b6060(plVar5 + 2);
              }
              if ((int)plVar5[4] == 0) {
                lVar1 = *plVar5;
                if (lVar1 == 0) {
                  uVar8 = uVar2;
                  do {
                    uVar3 = (int)uVar8 + 1;
                    uVar8 = (ulonglong)uVar3;
                    if (*(uint *)(param_1 + 0x98) <= uVar3) break;
                  } while (*(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)uVar3 * 8) == 0)
                  ;
                }
                if (plVar7 == (longlong *)0x0) {
                  *(longlong *)(*(longlong *)(param_1 + 0x90) + uVar2 * 8) = lVar1;
                }
                else {
                  *plVar7 = lVar1;
                }
                FUN_1450b6060();
                if ((void *)plVar5[2] != (void *)0x0) {
                  *(undefined4 *)(plVar5 + 3) = 0;
                  AK::MemoryMgr::Free(0,(void *)plVar5[2]);
                  plVar5[2] = 0;
                  *(undefined4 *)((longlong)plVar5 + 0x1c) = 0;
                }
                AK::MemoryMgr::Free(0,plVar5);
                *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
              }
            }
          }
        }
        uVar3 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(param_2 + 0x34));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
    *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) & 0xfb;
  }
  return;
}



// FUNCTION 1450b78a0 FUN_1450b78a0 body=69 status=ok
// SIG undefined FUN_1450b78a0(void)

int FUN_1450b78a0(longlong param_1,undefined8 param_2,uint param_3)

{
  ushort *puVar1;
  
  if ((param_3 & 3) != 0) {
    param_3 = param_3 + (0xc - (param_3 & 3));
  }
  puVar1 = *(ushort **)(param_1 + 8);
  if ((0x303f < *puVar1) && (0xcfbc < (ushort)(*puVar1 + 0xcfbe))) {
    return param_3 + (uint)puVar1[1] * *(int *)(puVar1 + 0xc) * 2;
  }
  return 0;
}



// FUNCTION 1450b78f0 FUN_1450b78f0 body=376 status=ok
// SIG undefined FUN_1450b78f0(void)

undefined4
FUN_1450b78f0(void *param_1,int param_2,void *param_3,undefined4 param_4,uint param_5,uint param_6,
             undefined2 param_7,longlong param_8)

{
  short sVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  
  sVar1 = **(short **)(param_8 + 8);
  if (sVar1 == -1) {
    uVar6 = 0x40001;
  }
  else if (sVar1 == 0x3040) {
    uVar6 = 0x130001;
  }
  else {
    uVar6 = 1;
    if (sVar1 == 0x3041) {
      uVar6 = 0x140001;
    }
  }
  plVar4 = (longlong *)FUN_145089170(uVar6);
  if (plVar4 == (longlong *)0x0) {
    return 0x34;
  }
  memcpy(param_1,param_3,(ulonglong)param_6);
  uVar5 = (ulonglong)param_5;
  puVar8 = (undefined8 *)((longlong)param_1 + ((ulonglong)param_6 - 8));
  *(undefined2 *)(uVar5 + (longlong)param_1) = 0xfffe;
  *(undefined2 *)(uVar5 + 0xe + (longlong)param_1) = 0x10;
  *(undefined2 *)(uVar5 + 0xc + (longlong)param_1) = param_7;
  if ((param_6 & 3) != 0) {
    uVar2 = *puVar8;
    uVar7 = 4 - (param_6 & 3);
    *(undefined4 *)puVar8 = 0x4b4e554a;
    *(uint *)((longlong)param_1 + ((ulonglong)param_6 - 4)) = uVar7;
    memset((void *)((longlong)param_1 + (ulonglong)param_6 + 8),0,(ulonglong)uVar7);
    param_6 = param_6 + 8 + *(int *)((longlong)param_1 + ((ulonglong)param_6 - 4));
    puVar8 = (undefined8 *)(((ulonglong)param_6 - 8) + (longlong)param_1);
    *puVar8 = uVar2;
  }
  FUN_1450719c0(&param_8);
  uVar3 = (**(code **)(*plVar4 + 8))
                    (plVar4,(ulonglong)param_6 + (longlong)param_1,param_2 - param_6,param_3,param_4
                     ,(undefined4 *)((longlong)puVar8 + 4));
  FUN_1450891d0(uVar6,plVar4);
  FUN_1450719f0(&param_8);
  return uVar3;
}



// FUNCTION 1450b7a70 FUN_1450b7a70 body=75 status=ok
// SIG undefined FUN_1450b7a70(void)

int FUN_1450b7a70(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_2 + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_1450b6060(param_2);
  }
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 == 0) {
    FUN_1450bc720(param_1 + 0x90,*(undefined4 *)(param_2 + 0x14));
  }
  return iVar2;
}



// FUNCTION 1450b7ac0 FUN_1450b7ac0 body=329 status=ok
// SIG undefined FUN_1450b7ac0(void)

void FUN_1450b7ac0(longlong param_1,uint param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  plVar6 = (longlong *)0x0;
  if (*(uint *)(param_1 + 0x98) != 0) {
    for (puVar2 = *(undefined8 **)
                   (*(longlong *)(param_1 + 0x90) +
                   ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 0x98)) * 8); plVar5 = plVar6
        , puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
      if (*(uint *)(puVar2 + 1) == param_2) {
        plVar5 = puVar2 + 2;
        break;
      }
    }
    if (plVar5 != (longlong *)0x0) {
      *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
      iVar7 = -1;
      plVar3 = (longlong *)*plVar5;
      if (plVar3 == plVar3 + (ulonglong)*(uint *)(plVar5 + 1) * 3) {
LAB_1450b7bb7:
        *param_3 = 0;
        param_3[1] = 0;
        *(undefined4 *)(param_3 + 2) = 0;
        plVar6 = plVar5 + 2;
        *(int *)plVar6 = (int)*plVar6 + -1;
        if ((int)*plVar6 == 0) {
          FUN_1450b6060(plVar5);
        }
      }
      else {
        do {
          if (*(char *)((longlong)plVar3 + 0xc) == '\x02') {
            lVar4 = plVar3[2];
            if ((lVar4 == 0) || (*(char *)(lVar4 + 0x30) == '\0')) goto LAB_1450b7b70;
          }
          else {
            lVar4 = 0;
LAB_1450b7b70:
            if ((*(char *)((longlong)plVar3 + 0xd) == '\0') && (iVar7 < (int)plVar3[1])) {
              *param_3 = lVar4;
              param_3[1] = *plVar3;
              *(int *)(param_3 + 2) = (int)plVar3[1];
              iVar7 = (int)plVar3[1];
              plVar6 = plVar3;
            }
          }
          plVar3 = plVar3 + 3;
        } while (plVar3 != (longlong *)(*plVar5 + (ulonglong)*(uint *)(plVar5 + 1) * 0x18));
        if (plVar6 == (longlong *)0x0) goto LAB_1450b7bb7;
        *(short *)((longlong)plVar6 + 0xe) = *(short *)((longlong)plVar6 + 0xe) + 1;
      }
      if (*param_3 != 0) {
        LOCK();
        piVar1 = (int *)(*param_3 + 0x60);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      goto LAB_1450b7bea;
    }
  }
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(param_3 + 2) = 0;
LAB_1450b7bea:
                    /* WARNING: Could not recover jumptable at 0x0001450b7c02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return;
}



// FUNCTION 1450b7c10 FUN_1450b7c10 body=537 status=ok
// SIG undefined FUN_1450b7c10(void)

void FUN_1450b7c10(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  short sVar5;
  uint uVar6;
  undefined8 *_Dst;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar7;
  
  plVar1 = (longlong *)(param_1 + 0x90);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if (*(uint *)(param_1 + 0x98) != 0) {
    uVar4 = (ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 0x98);
    plVar9 = *(longlong **)(*plVar1 + uVar4 * 8);
    plVar10 = (longlong *)0x0;
    if (plVar9 != (longlong *)0x0) {
      do {
        plVar8 = plVar9;
        plVar9 = plVar8;
        if (*(uint *)(plVar8 + 1) == param_2) break;
        plVar9 = (longlong *)*plVar8;
        plVar10 = plVar8;
      } while (plVar9 != (longlong *)0x0);
      if (plVar9 != (longlong *)0x0) {
        _Dst = (undefined8 *)plVar9[2];
        puVar2 = _Dst + (ulonglong)*(uint *)(plVar9 + 3) * 3;
        for (; _Dst != puVar2; _Dst = _Dst + 3) {
          if (((void *)*_Dst == (void *)param_3[1]) && (*(short *)((longlong)_Dst + 0xe) != 0)) {
            sVar5 = *(short *)((longlong)_Dst + 0xe) + -1;
            *(short *)((longlong)_Dst + 0xe) = sVar5;
            if ((sVar5 == 0) && (*(char *)((longlong)_Dst + 0xd) != '\0')) {
              if (*(char *)((longlong)_Dst + 0xc) == '\x01') {
                AK::MemoryMgr::Free(*(int *)(_Dst + 2),(void *)*_Dst);
              }
              puVar2 = (undefined8 *)(plVar9[2] + (ulonglong)((int)plVar9[3] - 1) * 0x18);
              if (_Dst < puVar2) {
                memmove(_Dst,_Dst + 3,
                        (ulonglong)(uint)((int)(((longlong)puVar2 - (longlong)_Dst) / 0x18) * 0x18))
                ;
              }
              *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
            }
            break;
          }
        }
        plVar8 = plVar9 + 4;
        *(int *)plVar8 = (int)*plVar8 + -1;
        if ((int)*plVar8 == 0) {
          FUN_1450b6060(plVar9 + 2);
        }
        if ((int)plVar9[4] == 0) {
          lVar3 = *plVar9;
          if (lVar3 == 0) {
            uVar7 = uVar4;
            do {
              uVar6 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar6;
              if (*(uint *)(param_1 + 0x98) <= uVar6) break;
            } while (*(longlong *)(*plVar1 + uVar7 * 8) == 0);
          }
          if (plVar10 == (longlong *)0x0) {
            *(longlong *)(*plVar1 + uVar4 * 8) = lVar3;
          }
          else {
            *plVar10 = lVar3;
          }
          FUN_1450b6060();
          if ((void *)plVar9[2] != (void *)0x0) {
            *(undefined4 *)(plVar9 + 3) = 0;
            AK::MemoryMgr::Free(0,(void *)plVar9[2]);
            plVar9[2] = 0;
            *(undefined4 *)((longlong)plVar9 + 0x1c) = 0;
          }
          AK::MemoryMgr::Free(0,plVar9);
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if (*param_3 != 0) {
    FUN_1450b63a0(*param_3,0);
    return;
  }
  return;
}



// FUNCTION 1450b7e30 FUN_1450b7e30 body=688 status=ok
// SIG undefined FUN_1450b7e30(void)

int FUN_1450b7e30(longlong param_1,uint *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  void *_Dst;
  byte bVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint local_res10 [2];
  undefined4 uVar11;
  
  uVar9 = (ulonglong)param_2[2];
  if ((param_2[2] == 0) || ((((byte)param_2[3] & 0x7c) == 4 && ((param_2[3] & 2) == 0)))) {
    return 1;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x68);
  EnterCriticalSection(lpCriticalSection);
  uVar2 = *param_2;
  if (*(uint *)(param_1 + 0x98) == 0) {
LAB_1450b7f01:
    plVar5 = (longlong *)FUN_1450bc620(param_1 + 0x90,uVar2);
    if (plVar5 == (longlong *)0x0) {
      iVar3 = 2;
      goto LAB_1450b80ab;
    }
    *(uint *)((longlong)plVar5 + 0x14) = uVar2;
    puVar7 = (undefined8 *)*plVar5;
  }
  else {
    for (puVar7 = *(undefined8 **)
                   (*(longlong *)(param_1 + 0x90) +
                   ((ulonglong)uVar2 % (ulonglong)*(uint *)(param_1 + 0x98)) * 8);
        puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
      if (*(uint *)(puVar7 + 1) == uVar2) {
        plVar5 = puVar7 + 2;
        goto LAB_1450b7ebf;
      }
    }
    plVar5 = (longlong *)0x0;
LAB_1450b7ebf:
    if (plVar5 == (longlong *)0x0) goto LAB_1450b7f01;
    puVar7 = (undefined8 *)*plVar5;
    *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
    for (puVar4 = puVar7; puVar4 != puVar7 + (ulonglong)*(uint *)(plVar5 + 1) * 3;
        puVar4 = puVar4 + 3) {
      if (*(char *)((longlong)puVar4 + 0xc) == '\x01') {
        iVar3 = 1;
        goto LAB_1450b80ab;
      }
    }
  }
  iVar10 = 0x20000003;
  if (*(short *)((longlong)param_2 + 0x1a) == 3) {
    iVar10 = 0x60000003;
  }
  puVar4 = puVar7 + (ulonglong)*(uint *)(plVar5 + 1) * 3;
  for (; puVar7 != puVar4; puVar7 = puVar7 + 3) {
    if (*(char *)((longlong)puVar7 + 0xc) == '\x02') {
      if (puVar7 != (undefined8 *)0x0) {
        uVar2 = *(uint *)(puVar7 + 1);
        uVar9 = (ulonglong)uVar2;
        _Dst = AK::MemoryMgr::Malign(iVar10,uVar9,0x10);
        if (_Dst == (void *)0x0) goto LAB_1450b8091;
        memcpy(_Dst,(void *)*puVar7,(ulonglong)uVar2);
        goto LAB_1450b8031;
      }
      break;
    }
  }
  _Dst = AK::MemoryMgr::Malign(iVar10,uVar9,0x10);
  if (_Dst == (void *)0x0) {
LAB_1450b8091:
    iVar3 = 0x34;
  }
  else {
    LeaveCriticalSection(lpCriticalSection);
    lVar8 = param_1 + 8;
    FUN_1450b5190(lVar8);
    uVar1 = *(ushort *)((longlong)param_2 + 0x1a);
    bVar6 = (byte)param_2[3] & 1;
    if ((0x1c < (ushort)(uVar1 - 1)) && (uVar1 < 0x20)) {
      bVar6 = 1;
    }
    uVar11 = 0;
    iVar3 = FUN_1450b5330(lVar8,param_2[1],0,uVar1,0,bVar6);
    if (iVar3 == 1) {
      local_res10[0] = 0;
      iVar3 = FUN_1450b5450(lVar8,_Dst,param_2[2],local_res10,CONCAT44(uVar11,0xffffffff));
      if ((iVar3 == 1) && (param_2[2] != local_res10[0])) {
        iVar3 = 2;
      }
    }
    FUN_1450b5400(lVar8);
    EnterCriticalSection(lpCriticalSection);
    if (iVar3 == 1) {
LAB_1450b8031:
      iVar3 = FUN_1450b61d0(plVar5,_Dst,uVar9,iVar10);
      if (iVar3 == 1) goto LAB_1450b80ab;
    }
    AK::MemoryMgr::Free(iVar10,_Dst);
  }
  FUN_1450b7a70(param_1,plVar5);
LAB_1450b80ab:
  LeaveCriticalSection(lpCriticalSection);
  return iVar3;
}



// FUNCTION 1450b80e0 FUN_1450b80e0 body=307 status=ok
// SIG undefined FUN_1450b80e0(void)

void FUN_1450b80e0(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if (*(uint *)(param_1 + 0x98) != 0) {
    uVar2 = (ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 0x98);
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x90) + uVar2 * 8);
    plVar6 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      do {
        plVar4 = plVar5;
        plVar5 = plVar4;
        if (*(uint *)(plVar4 + 1) == param_2) break;
        plVar5 = (longlong *)*plVar4;
        plVar6 = plVar4;
      } while (plVar5 != (longlong *)0x0);
      if (plVar5 != (longlong *)0x0) {
        plVar4 = plVar5 + 4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        if ((int)*plVar4 == 0) {
          FUN_1450b6060(plVar5 + 2);
        }
        if ((int)plVar5[4] == 0) {
          lVar1 = *plVar5;
          if (lVar1 == 0) {
            uVar7 = uVar2;
            do {
              uVar3 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar3;
              if (*(uint *)(param_1 + 0x98) <= uVar3) break;
            } while (*(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)uVar3 * 8) == 0);
          }
          if (plVar6 == (longlong *)0x0) {
            *(longlong *)(*(longlong *)(param_1 + 0x90) + uVar2 * 8) = lVar1;
          }
          else {
            *plVar6 = lVar1;
          }
          FUN_1450b6060();
          if ((void *)plVar5[2] != (void *)0x0) {
            *(undefined4 *)(plVar5 + 3) = 0;
            AK::MemoryMgr::Free(0,(void *)plVar5[2]);
            plVar5[2] = 0;
            *(undefined4 *)((longlong)plVar5 + 0x1c) = 0;
          }
          AK::MemoryMgr::Free(0,plVar5);
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001450b820c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return;
}



// FUNCTION 1450b8220 FUN_1450b8220 body=485 status=ok
// SIG undefined FUN_1450b8220(void)

undefined4 FUN_1450b8220(longlong param_1,uint *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  
  uVar7 = 1;
  if (param_2 == (uint *)0x0) {
    return 0x1f;
  }
  if (param_3 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
    uVar8 = 0;
    puVar6 = param_2;
    if (param_3 != 0) {
      do {
        if ((*(longlong *)(puVar6 + 2) == 0) || (puVar6[4] == 0)) {
          uVar7 = 0x1f;
LAB_1450b835e:
          uVar5 = (ulonglong)(uVar8 + 1);
          do {
            if (*(uint *)(param_1 + 0x98) != 0) {
              for (puVar4 = *(undefined8 **)
                             (*(longlong *)(param_1 + 0x90) +
                             ((ulonglong)*param_2 % (ulonglong)*(uint *)(param_1 + 0x98)) * 8);
                  puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
                if (*(uint *)(puVar4 + 1) == *param_2) {
                  puVar4 = puVar4 + 2;
                  goto LAB_1450b8396;
                }
              }
              puVar4 = (undefined8 *)0x0;
LAB_1450b8396:
              if (puVar4 != (undefined8 *)0x0) {
                FUN_1450b6120(puVar4);
                piVar1 = (int *)(puVar4 + 2);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_1450b6060(puVar4);
                }
                if (*(int *)(puVar4 + 2) == 0) {
                  FUN_1450bc720(param_1 + 0x90);
                }
              }
            }
            param_2 = param_2 + 6;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
          break;
        }
        if (*(uint *)(param_1 + 0x98) == 0) {
LAB_1450b82f0:
          puVar4 = (undefined8 *)FUN_1450bc620(param_1 + 0x90);
          if (puVar4 == (undefined8 *)0x0) {
            uVar7 = 0x34;
            goto LAB_1450b835e;
          }
          *(uint *)((longlong)puVar4 + 0x14) = *puVar6;
        }
        else {
          for (puVar4 = *(undefined8 **)
                         (*(longlong *)(param_1 + 0x90) +
                         ((ulonglong)*puVar6 % (ulonglong)*(uint *)(param_1 + 0x98)) * 8);
              puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
            if (*(uint *)(puVar4 + 1) == *puVar6) {
              puVar4 = puVar4 + 2;
              goto LAB_1450b82e0;
            }
          }
          puVar4 = (undefined8 *)0x0;
LAB_1450b82e0:
          if (puVar4 == (undefined8 *)0x0) goto LAB_1450b82f0;
          *(int *)(puVar4 + 2) = *(int *)(puVar4 + 2) + 1;
        }
        uVar2 = puVar6[4];
        uVar3 = *(undefined8 *)(puVar6 + 2);
        puVar4 = (undefined8 *)FUN_1450b6230(puVar4);
        if (puVar4 == (undefined8 *)0x0) {
          uVar7 = 0x34;
          goto LAB_1450b835e;
        }
        uVar8 = uVar8 + 1;
        *(uint *)(puVar4 + 1) = uVar2;
        *puVar4 = uVar3;
        *(undefined1 *)((longlong)puVar4 + 0xc) = 3;
        puVar6 = puVar6 + 6;
      } while (uVar8 < param_3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  }
  return uVar7;
}



// FUNCTION 1450b8410 FUN_1450b8410 body=360 status=ok
// SIG undefined FUN_1450b8410(void)

undefined4 FUN_1450b8410(longlong param_1,uint *param_2,uint param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 local_res10 [8];
  
  uVar5 = (ulonglong)param_3;
  if (param_2 == (uint *)0x0) {
    return 0x1f;
  }
  if (param_3 == 0) {
    return 1;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x68);
  bVar2 = false;
  EnterCriticalSection(lpCriticalSection);
  if (param_3 == 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    puVar6 = param_2;
    uVar8 = uVar5;
    do {
      if (*(uint *)(param_1 + 0x98) != 0) {
        for (puVar7 = *(undefined8 **)
                       (*(longlong *)(param_1 + 0x90) +
                       ((ulonglong)*puVar6 % (ulonglong)*(uint *)(param_1 + 0x98)) * 8);
            puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
          if (*(uint *)(puVar7 + 1) == *puVar6) {
            puVar7 = puVar7 + 2;
            goto LAB_1450b84b8;
          }
        }
        puVar7 = (undefined8 *)0x0;
LAB_1450b84b8:
        if (puVar7 != (undefined8 *)0x0) {
          iVar3 = FUN_1450b6120(puVar7);
          bVar2 = (bool)(bVar2 | iVar3 != 0);
          piVar1 = (int *)(puVar7 + 2);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_1450b6060(puVar7);
          }
          if (*(int *)(puVar7 + 2) == 0) {
            FUN_1450bc720((longlong *)(param_1 + 0x90));
          }
        }
      }
      puVar6 = puVar6 + 6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    LeaveCriticalSection(lpCriticalSection);
    if (bVar2) {
      FUN_1450719c0(local_res10);
      param_2 = param_2 + 2;
      do {
        FUN_145084930(*(undefined8 *)param_2);
        param_2 = param_2 + 6;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      FUN_1450719f0(local_res10);
    }
  }
  uVar4 = 1;
  if (bVar2) {
    uVar4 = 99;
  }
  return uVar4;
}



// FUNCTION 1450b8580 FUN_1450b8580 body=470 status=ok
// SIG undefined FUN_1450b8580(void)

undefined4 FUN_1450b8580(longlong param_1,uint *param_2,uint param_3,undefined4 *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  ulonglong local_res10;
  
  local_res10 = (ulonglong)param_3;
  if (param_2 == (uint *)0x0) {
    if ((param_4 != (undefined4 *)0x0) && (0 < (int)param_3)) {
      for (lVar6 = (longlong)(int)param_3; lVar6 != 0; lVar6 = lVar6 + -1) {
        *param_4 = 0x1f;
        param_4 = param_4 + 1;
      }
    }
    return 0x1f;
  }
  if (param_3 == 0) {
    return 1;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x68);
  iVar8 = 0;
  EnterCriticalSection(lpCriticalSection);
  if (param_3 != 0) {
    puVar9 = param_4;
    do {
      if (*(uint *)(param_1 + 0x98) != 0) {
        for (puVar7 = *(undefined8 **)
                       (*(longlong *)(param_1 + 0x90) +
                       ((ulonglong)*param_2 % (ulonglong)*(uint *)(param_1 + 0x98)) * 8);
            puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
          if (*(uint *)(puVar7 + 1) == *param_2) {
            puVar7 = puVar7 + 2;
            goto LAB_1450b8652;
          }
        }
        puVar7 = (undefined8 *)0x0;
LAB_1450b8652:
        if (puVar7 != (undefined8 *)0x0) {
          iVar4 = FUN_1450b6120(puVar7);
          iVar2 = iVar4;
          if (iVar4 < iVar8) {
            iVar2 = iVar8;
          }
          iVar8 = iVar2;
          if (iVar4 == 0) {
            piVar1 = (int *)(puVar7 + 2);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_1450b6060(puVar7);
            }
            if (*(int *)(puVar7 + 2) == 0) {
              FUN_1450bc720((longlong *)(param_1 + 0x90));
            }
          }
          else if (iVar4 == 2) {
            LeaveCriticalSection(lpCriticalSection);
            uVar3 = FUN_145087fc0();
            lVar6 = FUN_145080f50(DAT_14c790fd8,0x1b,uVar3);
            *(undefined8 *)(lVar6 + 4) = *(undefined8 *)(param_2 + 2);
            LOCK();
            *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
            UNLOCK();
            EnterCriticalSection(lpCriticalSection);
          }
          if (param_4 != (undefined4 *)0x0) {
            uVar5 = 99;
            if (iVar4 == 0) {
              uVar5 = 1;
            }
            *puVar9 = uVar5;
          }
        }
      }
      param_2 = param_2 + 6;
      puVar9 = puVar9 + 1;
      local_res10 = local_res10 - 1;
    } while (local_res10 != 0);
  }
  LeaveCriticalSection(lpCriticalSection);
  if (iVar8 == 2) {
    FUN_145081150(DAT_14c790fd8,0,0);
  }
  uVar5 = 99;
  if (iVar8 == 0) {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1450b8760 FUN_1450b8760 body=99 status=ok
// SIG undefined FUN_1450b8760(void)

undefined8 FUN_1450b8760(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(char *)(param_1 + 0xe8) == '\0') {
    uVar2 = FUN_1450b7e30();
    return uVar2;
  }
  local_18 = *(undefined4 *)param_2;
  uStack_14 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_10 = *(undefined4 *)(param_2 + 1);
  uStack_c = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar1 = (undefined8 *)FUN_1450bcdf0(param_1 + 0xd8,&local_18,local_res8);
  if (puVar1 == (undefined8 *)0x0) {
    return 0x34;
  }
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  uVar2 = param_2[3];
  puVar1[2] = param_2[2];
  puVar1[3] = uVar2;
  return 1;
}



// FUNCTION 1450b87d0 FUN_1450b87d0 body=14 status=ok
// SIG undefined FUN_1450b87d0(void)

void FUN_1450b87d0(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if (*(char *)(param_1 + 0xe8) != '\0') {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if (*(uint *)(param_1 + 0x98) != 0) {
    uVar2 = (ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 0x98);
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x90) + uVar2 * 8);
    plVar6 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      do {
        plVar4 = plVar5;
        plVar5 = plVar4;
        if (*(uint *)(plVar4 + 1) == param_2) break;
        plVar5 = (longlong *)*plVar4;
        plVar6 = plVar4;
      } while (plVar5 != (longlong *)0x0);
      if (plVar5 != (longlong *)0x0) {
        plVar4 = plVar5 + 4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        if ((int)*plVar4 == 0) {
          FUN_1450b6060(plVar5 + 2);
        }
        if ((int)plVar5[4] == 0) {
          lVar1 = *plVar5;
          if (lVar1 == 0) {
            uVar7 = uVar2;
            do {
              uVar3 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar3;
              if (*(uint *)(param_1 + 0x98) <= uVar3) break;
            } while (*(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)uVar3 * 8) == 0);
          }
          if (plVar6 == (longlong *)0x0) {
            *(longlong *)(*(longlong *)(param_1 + 0x90) + uVar2 * 8) = lVar1;
          }
          else {
            *plVar6 = lVar1;
          }
          FUN_1450b6060();
          if ((void *)plVar5[2] != (void *)0x0) {
            *(undefined4 *)(plVar5 + 3) = 0;
            AK::MemoryMgr::Free(0,(void *)plVar5[2]);
            plVar5[2] = 0;
            *(undefined4 *)((longlong)plVar5 + 0x1c) = 0;
          }
          AK::MemoryMgr::Free(0,plVar5);
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001450b820c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return;
}



// FUNCTION 1450b87e0 FUN_1450b87e0 body=43 status=ok
// SIG undefined FUN_1450b87e0(void)

void FUN_1450b87e0(void)

{
  undefined1 local_res8 [32];
  
  FUN_1450719c0(local_res8);
  FUN_1450764c0(DAT_14c790ff8,1);
  FUN_1450719f0(local_res8);
  return;
}



// FUNCTION 1450b8810 FUN_1450b8810 body=238 status=ok
// SIG undefined FUN_1450b8810(void)

undefined8
FUN_1450b8810(ulonglong param_1,uint param_2,char param_3,uint *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  uint local_38;
  uint uStack_34;
  
  *param_4 = 0;
  *param_5 = 0;
  if (param_2 < 0x30) {
    return 0x1f;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  local_38 = (uint)*(undefined8 *)(param_1 + 8);
  uStack_34 = (uint)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar2 = (ushort)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  if (DAT_14c79c340 != 0) {
    uStack_34 = uStack_34 ^ DAT_14c79c344;
    local_38 = local_38 ^ DAT_14c79c340;
    uVar2 = uVar2 ^ DAT_14c79c34c;
  }
  if ((param_3 != '\0') &&
     (((uVar3 = 0x10, 0x86 < local_38 && (uVar3 = (ulonglong)uVar2, uVar2 == 0)) ||
      (param_1 % uVar3 != 0)))) {
    return 0x59;
  }
  *param_4 = uStack_34;
  uVar4 = 0;
  if (0x8e < local_38) {
    uVar4 = uVar1;
  }
  *param_5 = uVar4;
  return 1;
}



// FUNCTION 1450b8920 FUN_1450b8920 body=3 status=ok
// SIG undefined FUN_1450b8920(void)

void FUN_1450b8920(void)

{
  return;
}



// FUNCTION 1450b8930 FUN_1450b8930 body=1858 status=ok
// SIG undefined FUN_1450b8930(void)

int FUN_1450b8930(longlong param_1,longlong param_2,longlong *param_3,int param_4,char param_5,
                 undefined1 param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  void *pvVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte bVar15;
  undefined4 uVar16;
  uint uVar17;
  char local_res10 [8];
  longlong *local_res18;
  int local_res20;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar19;
  ushort local_a8 [2];
  uint local_a4;
  char local_a0;
  char local_9f;
  byte local_9e [2];
  uint local_9c;
  uint local_98;
  uint uStack_94;
  undefined8 local_90;
  uint local_88;
  int local_84;
  undefined1 local_80 [8];
  ulonglong local_78;
  ushort uStack_6c;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uVar18;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  uVar17 = *(uint *)(param_2 + 8);
  local_res18 = param_3;
  local_res20 = param_4;
  local_9c = uVar17;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
  local_84 = *(int *)(param_2 + 0x30);
  if (local_84 == 2) {
    local_90 = *(undefined8 *)(param_2 + 0x38);
  }
  else {
    local_90 = 0;
  }
  uVar12 = *(uint *)(param_2 + 4);
  local_98 = uVar17;
  uStack_94 = uVar12;
  lVar4 = FUN_145391180(param_1 + 0xa8,&local_98);
  if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x68) & 1) != 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
    return 0x45;
  }
  uVar9 = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
  if (lVar4 == 0) {
    uVar11 = 0;
    if (local_res20 == 0) {
      uVar9 = 0;
      bVar15 = 1;
      uVar11 = 0;
      uVar16 = 1;
    }
    else {
      bVar15 = 0;
      uVar16 = 0;
      if (param_5 != '\0') {
        uVar11 = 1;
        uVar16 = 0;
      }
    }
    puVar5 = AK::MemoryMgr::Malloc(0,0x78);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      if (*(int *)(param_2 + 0x30) == 2) {
        uVar6 = *(undefined8 *)(param_2 + 0x38);
      }
      else {
        uVar6 = 0;
      }
      uVar1 = *(undefined4 *)(param_2 + 8);
      *(undefined8 *)(puVar5 + 2) = uVar6;
      *(undefined8 *)(puVar5 + 6) = 0;
      *(undefined8 *)(puVar5 + 8) = 0;
      *(undefined8 *)(puVar5 + 10) = 0;
      *(undefined1 *)(puVar5 + 0xc) = 0;
      *(undefined8 *)(puVar5 + 0xd) = 0;
      *(undefined8 *)(puVar5 + 0x10) = 0;
      *(undefined8 *)(puVar5 + 0x12) = 0;
      *(undefined8 *)(puVar5 + 0x14) = 0;
      *(undefined8 *)(puVar5 + 0x16) = 0;
      *puVar5 = uVar1;
      puVar5[1] = uVar12;
      puVar5[0x18] = uVar16;
      *(byte *)(puVar5 + 0x1a) = *(byte *)(puVar5 + 0x1a) & 0xf0 | bVar15;
      puVar5[0x19] = uVar9;
      puVar5[0x1b] = 0x10;
      puVar5[0x1c] = uVar11;
    }
    *param_3 = (longlong)puVar5;
    iVar3 = 0x34;
    param_4 = local_res20;
    if (puVar5 != (undefined4 *)0x0) {
      iVar3 = 1;
    }
  }
  else {
    *param_3 = lVar4;
    iVar3 = 1;
    if (param_5 != '\0') {
      *(int *)(lVar4 + 0x70) = *(int *)(lVar4 + 0x70) + 1;
    }
  }
  lVar4 = param_1 + 8;
  FUN_1450b5190(lVar4);
  local_a0 = *(int *)(param_2 + 0x30) - 2U < 2;
  uVar17 = local_9c;
  if ((uVar12 - 1 < 0x1d) || (0x1f < uVar12)) {
    iVar3 = 100;
    goto LAB_1450b8b86;
  }
  if (iVar3 != 1) goto LAB_1450b8b86;
  if (param_4 == 0) {
    if (*(int *)(param_2 + 0x30) != 1) {
      if ((bool)local_a0) {
        iVar3 = FUN_1450b5310(lVar4,*(undefined8 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x40))
        ;
        uVar17 = local_9c;
        goto LAB_1450b8b86;
      }
      goto LAB_1450b8b35;
    }
    uVar6 = *(undefined8 *)(param_2 + 0x28);
  }
  else {
LAB_1450b8b35:
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    if (((0x1c < uVar12 - 1) && (uVar12 < 0x20)) && (*(longlong *)(param_2 + 0x10) != 0)) {
      uVar17 = *(uint *)(param_2 + 8);
      iVar3 = FUN_1450b51e0(lVar4,*(longlong *)(param_2 + 0x10),uVar17,0,CONCAT44(uVar19,uVar12),
                            uVar6);
      goto LAB_1450b8b86;
    }
  }
  uVar17 = *(uint *)(param_2 + 8);
  iVar3 = FUN_1450b5330(lVar4,uVar17,0,uVar12,uVar6,1);
LAB_1450b8b86:
  local_58 = 0;
  local_res10[0] = '\0';
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  param_4 = param_4;
  if (iVar3 == 1) {
    iVar3 = FUN_1450ba410(param_1,&local_78,local_res10);
  }
LAB_1450b8bb3:
  do {
    uVar10 = 0;
    if (iVar3 != 1) goto LAB_1450b9054;
    local_a4 = 0;
    iVar3 = FUN_1450b5450(lVar4,&local_98,8,&local_a4,0xffffffff);
    uVar12 = uStack_94;
    if (iVar3 != 1) goto LAB_1450b9054;
    if (local_a4 != 8) {
      if (local_a4 != 0) {
        iVar3 = 7;
      }
      goto LAB_1450b9054;
    }
    if (((local_res10[0] != '\0') && (local_98 != 0x41544144)) && (local_98 != 0x58444944)) {
      FUN_1450bd030(local_78 & 0xffffffff);
      iVar3 = 0x40;
      goto LAB_1450b9054;
    }
    if (local_98 < 0x53564e46) {
      if (local_98 != 0x53564e45) {
        if (local_98 != 0x41544144) {
          if (local_98 == 0x43524948) {
            iVar3 = FUN_1450ba580(param_1,*param_3,uVar17);
          }
          else if (local_98 == 0x44495453) {
            iVar3 = FUN_1450ba960(param_1,uStack_94,*param_3);
          }
          else {
            if (local_98 != 0x474d5453) goto LAB_1450b8ccd;
            iVar3 = FUN_1450bac30(param_1,uStack_94);
          }
          goto LAB_1450b8bb3;
        }
        uVar8 = 0x10;
        if (0x86 < (uint)local_78) {
          uVar8 = (uint)uStack_6c;
        }
        *(uint *)(*param_3 + 0x6c) = uVar8;
        if (param_4 != 0) {
          if (param_4 != 1) {
            if (param_4 == 2) goto LAB_1450b8ccd;
            if (param_4 != 3) goto LAB_1450b8bb3;
          }
          iVar3 = FUN_1450b7050(param_1,*param_3,uStack_94,param_6);
          goto LAB_1450b8bb3;
        }
        if ((local_a0 != '\0') && (local_84 == 2)) {
          uVar6 = FUN_1450b58b0(lVar4,uStack_94);
          *(uint *)(*param_3 + 0x28) = uStack_94;
          FUN_1450b59a0(lVar4);
          iVar3 = FUN_1450b6da0(param_1,uVar6,*param_3);
          goto LAB_1450b8bb3;
        }
        iVar3 = 1;
        if (uStack_94 != 0) {
          lVar2 = *param_3;
          pvVar7 = AK::MemoryMgr::Malign
                             ((*(byte *)(lVar2 + 0x68) & 8) << 0x1b | 0x20000003,
                              (ulonglong)uStack_94,*(uint *)(lVar2 + 0x6c));
          *(void **)(lVar2 + 0x18) = pvVar7;
          if (pvVar7 == (void *)0x0) {
            iVar3 = 0x34;
            goto LAB_1450b8bb3;
          }
          *(uint *)(lVar2 + 0x28) = uVar12;
          local_88 = 0;
          iVar3 = FUN_1450b5450(lVar4,pvVar7,uVar12,&local_88,0xffffffff);
          if ((iVar3 == 1) && (local_88 != uVar12)) {
            iVar3 = 7;
            goto LAB_1450b8bb3;
          }
        }
        if (iVar3 == 1) {
          iVar3 = FUN_1450b6da0(param_1,*(undefined8 *)(*param_3 + 0x18),*param_3);
        }
        goto LAB_1450b8bb3;
      }
      uVar13 = uVar10;
      if (uStack_94 == 0) {
        iVar3 = 0x38;
        uVar17 = local_9c;
        param_4 = local_res20;
      }
      else {
        do {
          uVar14 = 0;
          uVar18 = uVar14;
          do {
            iVar3 = FUN_1450b56e0(lVar4,&local_9f,1);
            param_3 = local_res18;
            uVar17 = local_9c;
            param_4 = local_res20;
            if (iVar3 != 1) goto LAB_1450b8bb3;
            *(bool *)(uVar14 + uVar13 + DAT_14c791038) = local_9f != '\0';
            iVar3 = FUN_1450b56e0(lVar4,local_9e,1);
            local_a8[0] = 0;
            param_3 = local_res18;
            uVar17 = local_9c;
            param_4 = local_res20;
            if ((iVar3 != 1) ||
               (iVar3 = FUN_1450b56e0(lVar4,local_a8,2), param_3 = local_res18, uVar17 = local_9c,
               param_4 = local_res20, iVar3 != 1)) goto LAB_1450b8bb3;
            pvVar7 = AK::MemoryMgr::Malloc(0,(ulonglong)local_a8[0] * 0xc);
            if (pvVar7 == (void *)0x0) {
              iVar3 = 0x34;
              param_3 = local_res18;
              uVar17 = local_9c;
              param_4 = local_res20;
              goto LAB_1450b8bb3;
            }
            iVar3 = FUN_1450b56e0(lVar4,pvVar7,((uint)local_a8[0] + (uint)local_a8[0] * 2) * 4);
            if (iVar3 != 1) {
              AK::MemoryMgr::Free(0,pvVar7);
              param_3 = local_res18;
              uVar17 = local_9c;
              param_4 = local_res20;
              goto LAB_1450b8bb3;
            }
            FUN_1450c8bb0(DAT_14c791038,uVar10,uVar18,local_a8[0],pvVar7,local_9e[0]);
            AK::MemoryMgr::Free(0,pvVar7);
            uVar17 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar17;
            uVar14 = uVar14 + 1;
          } while ((int)uVar17 < 3);
          uVar12 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar12;
          uVar13 = uVar13 + 3;
          param_3 = local_res18;
          uVar17 = local_9c;
          param_4 = local_res20;
        } while ((int)uVar12 < 2);
      }
      goto LAB_1450b8bb3;
    }
    if (local_98 == 0x54414c50) {
      iVar3 = FUN_1450bb300(param_1,uStack_94);
      goto LAB_1450b8bb3;
    }
    if (local_98 == 0x54494e49) {
      iVar3 = FUN_1450bbb10(param_1,uStack_94);
      goto LAB_1450b8bb3;
    }
    if (local_98 == 0x58444944) {
      if ((param_4 != 0) && (param_4 != 1)) {
        if (param_4 == 2) goto LAB_1450b8ccd;
        if (param_4 != 3) goto LAB_1450b8bb3;
      }
      lVar2 = *param_3;
      iVar3 = 1;
      if (*(int *)(lVar2 + 0x34) == 0) {
        uVar12 = uStack_94 / 0xc;
        uVar17 = uVar12 * 0xc;
        if (local_84 == 2) {
          uVar6 = FUN_1450b58b0(lVar4,uVar17);
          if (*(longlong *)(lVar2 + 0x20) == 0) {
            *(undefined8 *)(lVar2 + 0x20) = uVar6;
          }
          FUN_1450b59a0(lVar4);
        }
        else {
          pvVar7 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar17);
          *(void **)(lVar2 + 0x20) = pvVar7;
          if (pvVar7 == (void *)0x0) {
            iVar3 = 0x34;
          }
          else {
            *(byte *)(lVar2 + 0x68) = *(byte *)(lVar2 + 0x68) | 2;
            FUN_1450b56e0(lVar4,pvVar7,uVar17);
          }
        }
        uVar17 = local_9c;
        if (*(longlong *)(lVar2 + 0x20) != 0) {
          *(uint *)(lVar2 + 0x38) = uVar12;
        }
      }
      else {
        FUN_1450b5720(lVar4,uStack_94,local_80);
        uVar17 = local_9c;
      }
      goto LAB_1450b8bb3;
    }
LAB_1450b8ccd:
    FUN_1450b5720(lVar4,uStack_94,&local_a4);
    if (local_a4 != uStack_94) {
      iVar3 = 7;
LAB_1450b9054:
      FUN_1450b5400(lVar4);
      return iVar3;
    }
  } while( true );
}



// FUNCTION 1450b9080 FUN_1450b9080 body=495 status=ok
// SIG undefined FUN_1450b9080(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1450b9080(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  longlong *local_58;
  uint uStack_50;
  longlong local_48;
  longlong lStack_40;
  
  iVar8 = 0;
  plVar12 = (longlong *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
  plVar1 = (longlong *)(param_1 + 0xa8);
  puVar7 = auStack_78;
  iVar9 = iVar8;
  if (*(uint *)(param_1 + 0xb8) != 0) {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0xb8) * 8;
    uVar3 = uVar2 + 0xf;
    if (uVar3 <= uVar2) {
      uVar3 = 0xffffffffffffff0;
    }
    lVar5 = -(uVar3 & 0xfffffffffffffff0);
    plVar12 = (longlong *)((longlong)&local_58 + lVar5);
    puVar7 = auStack_78 + lVar5;
    iVar9 = 0;
    if (*(uint *)(param_1 + 0xb0) != 0) {
      uVar3 = 0;
      lVar11 = *(longlong *)*plVar1;
      while (lVar4 = 0, plVar13 = plVar12, lVar11 == 0) {
        uVar10 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar10;
        puVar7 = auStack_78 + lVar5;
        if (*(uint *)(param_1 + 0xb0) <= uVar10) goto LAB_1450b91e0;
        lVar11 = ((longlong *)*plVar1)[uVar3];
      }
LAB_1450b9131:
      do {
        lVar6 = lVar11;
        if ((*(byte *)(lVar6 + 0x68) & 1) == 0) {
          lVar11 = *(longlong *)(lVar6 + 0x10);
          if (lVar11 == 0) {
            do {
              uVar10 = (int)uVar3 + 1;
              uVar3 = (ulonglong)uVar10;
              if (*(uint *)(param_1 + 0xb0) <= uVar10) goto LAB_1450b91d3;
              lVar6 = 0;
              lVar11 = *(longlong *)(*plVar1 + uVar3 * 8);
              lVar4 = lVar6;
            } while (lVar11 == 0);
            goto LAB_1450b9131;
          }
        }
        else {
          *plVar13 = lVar6;
          iVar8 = iVar8 + 1;
          lVar11 = *(longlong *)(lVar6 + 0x10);
          plVar13 = plVar13 + 1;
          uStack_50 = (uint)uVar3;
          local_48 = lVar11;
          lStack_40 = lVar4;
          if (lVar11 == 0) {
            uVar2 = uVar3;
            do {
              uStack_50 = (int)uVar2 + 1;
              uVar2 = (ulonglong)uStack_50;
              if (*(uint *)(param_1 + 0xb0) <= uStack_50) break;
              lStack_40 = 0;
              local_48 = *(longlong *)(*plVar1 + uVar2 * 8);
            } while (local_48 == 0);
          }
          if (lVar4 == 0) {
            *(longlong *)(*plVar1 + uVar3 * 8) = lVar11;
          }
          else {
            *(longlong *)(lVar4 + 0x10) = lVar11;
          }
          *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
          uVar3 = (ulonglong)uStack_50;
          lVar6 = lStack_40;
          lVar11 = local_48;
          local_58 = plVar1;
        }
LAB_1450b91d3:
        lVar4 = lVar6;
        puVar7 = auStack_78 + lVar5;
        iVar9 = iVar8;
      } while (lVar11 != 0);
    }
  }
LAB_1450b91e0:
  *(undefined8 *)(puVar7 + -8) = 0x1450b91ed;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
  lVar5 = (longlong)(iVar9 + -1);
  if (-1 < iVar9 + -1) {
    do {
      lVar11 = plVar12[lVar5];
      *(undefined8 *)(puVar7 + -8) = 0x1450b920c;
      FUN_1450bc970(param_1,lVar11);
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined8 *)(puVar7 + -8) = 0x1450b9223;
  FUN_1450bc560(param_1,param_2,1);
  return 1;
}



// FUNCTION 1450b9270 FUN_1450b9270 body=354 status=ok
// SIG undefined FUN_1450b9270(void)

int FUN_1450b9270(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  
  lVar3 = DAT_14c791060;
  iVar4 = 1;
  do {
    while (iVar2 = *(int *)(lVar3 + 0x108), iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x110));
      if (*(int *)(lVar3 + 0x108) < 0) goto LAB_1450b92b9;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x110));
    }
    LOCK();
    bVar6 = iVar2 == *(int *)(lVar3 + 0x108);
    if (bVar6) {
      *(int *)(lVar3 + 0x108) = iVar2 + 1;
    }
    UNLOCK();
  } while (!bVar6);
LAB_1450b92b9:
  if (*(uint *)(lVar3 + 0x150) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    for (plVar5 = *(longlong **)
                   (*(longlong *)(lVar3 + 0x148) +
                   ((ulonglong)param_3 % (ulonglong)*(uint *)(lVar3 + 0x150)) * 8);
        plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1]) {
      if (*(uint *)(plVar5 + 2) == param_3) goto LAB_1450b92f0;
    }
    plVar5 = (longlong *)0x0;
LAB_1450b92f0:
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0x14) = *(int *)((longlong)plVar5 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar2 = *(int *)(lVar3 + 0x108);
  while (-1 < iVar2) {
    LOCK();
    bVar6 = iVar2 == *(int *)(lVar3 + 0x108);
    if (bVar6) {
      *(int *)(lVar3 + 0x108) = iVar2 + -1;
    }
    UNLOCK();
    if (bVar6) {
      if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar3 + 0x138))) {
        SetEvent(*(HANDLE *)(lVar3 + 0x140));
      }
      goto LAB_1450b9354;
    }
    iVar2 = *(int *)(lVar3 + 0x108);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x110));
LAB_1450b9354:
  if (plVar5 == (longlong *)0x0) {
    return 0xf;
  }
  if ((int)plVar5[5] == 0) {
    iVar4 = FUN_1450b9540(param_1,param_2,plVar5);
    if (iVar4 != 1) goto LAB_1450b937b;
    LOCK();
    *(int *)((longlong)plVar5 + 0x14) = *(int *)((longlong)plVar5 + 0x14) + 1;
    UNLOCK();
  }
  *(int *)(plVar5 + 5) = (int)plVar5[5] + 1;
LAB_1450b937b:
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0x14);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  return iVar4;
}



// FUNCTION 1450b93e0 FUN_1450b93e0 body=350 status=ok
// SIG undefined FUN_1450b93e0(void)

undefined8 FUN_1450b93e0(undefined8 param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  
  lVar2 = DAT_14c791060;
  do {
    while (iVar3 = *(int *)(lVar2 + 0x108), iVar3 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x110));
      if (*(int *)(lVar2 + 0x108) < 0) goto LAB_1450b9419;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x110));
    }
    LOCK();
    bVar6 = iVar3 == *(int *)(lVar2 + 0x108);
    if (bVar6) {
      *(int *)(lVar2 + 0x108) = iVar3 + 1;
    }
    UNLOCK();
  } while (!bVar6);
LAB_1450b9419:
  if (*(uint *)(lVar2 + 0x150) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    for (plVar5 = *(longlong **)
                   (*(longlong *)(lVar2 + 0x148) +
                   ((ulonglong)param_2 % (ulonglong)*(uint *)(lVar2 + 0x150)) * 8);
        plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1]) {
      if (*(uint *)(plVar5 + 2) == param_2) goto LAB_1450b9450;
    }
    plVar5 = (longlong *)0x0;
LAB_1450b9450:
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0x14) = *(int *)((longlong)plVar5 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar3 = *(int *)(lVar2 + 0x108);
  do {
    if (iVar3 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x110));
LAB_1450b94b4:
      if (plVar5 == (longlong *)0x0) {
        uVar4 = 0xf;
      }
      else {
        if (((int)plVar5[5] != 0) &&
           (iVar3 = (int)plVar5[5] + -1, *(int *)(plVar5 + 5) = iVar3, iVar3 == 0)) {
          FUN_1450b9b00(param_1,plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0x14);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
        }
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0x14);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
        uVar4 = 1;
      }
      return uVar4;
    }
    LOCK();
    bVar6 = iVar3 == *(int *)(lVar2 + 0x108);
    if (bVar6) {
      *(int *)(lVar2 + 0x108) = iVar3 + -1;
    }
    UNLOCK();
    if (bVar6) {
      if ((iVar3 + -1 == 0) && (0 < *(int *)(lVar2 + 0x138))) {
        SetEvent(*(HANDLE *)(lVar2 + 0x140));
      }
      goto LAB_1450b94b4;
    }
    iVar3 = *(int *)(lVar2 + 0x108);
  } while( true );
}



// FUNCTION 1450b9540 FUN_1450b9540 body=1465 status=ok
// SIG undefined FUN_1450b9540(void)

int FUN_1450b9540(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  __uint64 _Var2;
  int iVar3;
  void *_Src;
  int iVar4;
  ulonglong uVar5;
  void *_Dst;
  longlong lVar7;
  char *pcVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong uVar6;
  
  lVar12 = *(longlong *)(param_3 + 0x20);
  iVar4 = 1;
  if (lVar12 == 0) {
    return 1;
  }
  do {
    lVar13 = DAT_14c791060;
    if (*(short *)(lVar12 + 0x34) == 0x403) {
      uVar9 = *(uint *)(lVar12 + 0x38);
      *(uint *)(param_2 + 1) = uVar9;
      *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(lVar12 + 0x3c);
      if (*(uint *)(param_1 + 200) != 0) {
        for (puVar10 = *(undefined8 **)
                        (*(longlong *)(param_1 + 0xc0) +
                        ((ulonglong)uVar9 % (ulonglong)*(uint *)(param_1 + 200)) * 8);
            puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
          if (*(uint *)(puVar10 + 1) == uVar9) {
            puVar10 = puVar10 + 2;
            goto LAB_1450b95e0;
          }
        }
        puVar10 = (undefined8 *)0x0;
LAB_1450b95e0:
        if (puVar10 != (undefined8 *)0x0) {
          _Src = (void *)*puVar10;
          if (*(char *)(param_2 + 3) != '\0') {
            AK::MemoryMgr::Free(0,(void *)param_2[2]);
          }
          param_2[2] = 0;
          *(undefined1 *)(param_2 + 3) = 0;
          uVar5 = 0xffffffffffffffff;
          do {
            uVar6 = uVar5;
            uVar5 = uVar6 + 1;
          } while (*(char *)((longlong)_Src + uVar5) != '\0');
          if (uVar5 < 5) {
LAB_1450b965b:
            param_2[2] = 0;
            *(undefined1 *)(param_2 + 3) = 0;
            if (_Src != (void *)0x0) {
              uVar5 = 0xffffffffffffffff;
              do {
                uVar6 = uVar5;
                uVar5 = uVar6 + 1;
              } while (*(char *)((longlong)_Src + uVar5) != '\0');
              uVar5 = uVar5 & 0xffffffff;
              lVar13 = 1;
              if (4 < uVar5) {
                uVar9 = 0;
                pcVar8 = (char *)((uVar5 - 4) + (longlong)_Src);
                lVar7 = (longlong)&DAT_1499d13e4 - (longlong)pcVar8;
                do {
                  if (*pcVar8 != pcVar8[lVar7]) goto LAB_1450b96c8;
                  pcVar8 = pcVar8 + 1;
                  uVar9 = uVar9 + 1;
                } while (uVar9 < 4);
                lVar13 = 0;
              }
LAB_1450b96c8:
              _Var2 = (ulonglong)((int)uVar6 + 2) + lVar13 * 4;
              _Dst = AK::MemoryMgr::Malloc(0,_Var2);
              if (_Dst != (void *)0x0) {
                memcpy(_Dst,_Src,uVar5);
                if ((char)lVar13 != '\0') {
                  *(undefined4 *)(uVar5 + (longlong)_Dst) = 0x6b6e622e;
                }
                *(undefined1 *)((longlong)_Dst + (_Var2 - 1)) = 0;
                param_2[2] = _Dst;
                *(undefined1 *)(param_2 + 3) = 1;
              }
            }
          }
          else {
            uVar9 = 0;
            pcVar8 = (char *)((uVar6 - 3) + (longlong)_Src);
            lVar13 = (longlong)&DAT_1499d13e4 - (longlong)pcVar8;
            do {
              if (*pcVar8 != pcVar8[lVar13]) goto LAB_1450b965b;
              pcVar8 = pcVar8 + 1;
              uVar9 = uVar9 + 1;
            } while (uVar9 < 4);
            param_2[2] = _Src;
            *(undefined1 *)(param_2 + 3) = 0;
          }
        }
      }
      local_88 = *param_2;
      uStack_80 = param_2[1];
      local_78 = param_2[2];
      uStack_70 = param_2[3];
      local_68 = param_2[4];
      uStack_60 = param_2[5];
      local_58 = *(undefined4 *)(param_2 + 6);
      uStack_54 = *(undefined4 *)((longlong)param_2 + 0x34);
      uStack_50 = *(undefined4 *)(param_2 + 7);
      uStack_4c = *(undefined4 *)((longlong)param_2 + 0x3c);
      local_48 = *(undefined4 *)(param_2 + 8);
      uStack_44 = *(undefined4 *)((longlong)param_2 + 0x44);
      uStack_40 = *(undefined4 *)(param_2 + 9);
      uStack_3c = *(undefined4 *)((longlong)param_2 + 0x4c);
      iVar4 = FUN_1450b9ed0(param_1,&local_88,2,0,0);
      if (iVar4 != 1) {
LAB_1450b98fd:
        lVar13 = *(longlong *)(param_3 + 0x20);
        lVar7 = DAT_14c791060;
        do {
          if (lVar13 == lVar12) {
            DAT_14c791060 = lVar7;
            return iVar4;
          }
          DAT_14c791060 = lVar7;
          if (*(short *)(lVar13 + 0x34) == 0x403) {
            FUN_1450d5550(*(undefined4 *)(lVar13 + 0x30));
            lVar7 = FUN_145391180(param_1 + 0xa8);
            if (lVar7 != 0) {
              FUN_1450b64a0(lVar7);
            }
          }
          else if (*(short *)(lVar13 + 0x34) == 0x2103) {
            uVar9 = *(uint *)(lVar13 + 0x30);
            do {
              while (iVar3 = *(int *)(lVar7 + 0x108), iVar3 < 0) {
                EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x110));
                if (*(int *)(lVar7 + 0x108) < 0) goto LAB_1450b99a7;
                LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x110));
              }
              LOCK();
              bVar14 = iVar3 == *(int *)(lVar7 + 0x108);
              if (bVar14) {
                *(int *)(lVar7 + 0x108) = iVar3 + 1;
              }
              UNLOCK();
            } while (!bVar14);
LAB_1450b99a7:
            if (*(uint *)(lVar7 + 0x150) == 0) {
              plVar11 = (longlong *)0x0;
            }
            else {
              for (plVar11 = *(longlong **)
                              (*(longlong *)(lVar7 + 0x148) +
                              ((ulonglong)uVar9 % (ulonglong)*(uint *)(lVar7 + 0x150)) * 8);
                  plVar11 != (longlong *)0x0; plVar11 = (longlong *)plVar11[1]) {
                if (*(uint *)(plVar11 + 2) == uVar9) goto LAB_1450b99da;
              }
              plVar11 = (longlong *)0x0;
LAB_1450b99da:
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar11 + 0x14) = *(int *)((longlong)plVar11 + 0x14) + 1;
                UNLOCK();
              }
            }
            iVar3 = *(int *)(lVar7 + 0x108);
            while (-1 < iVar3) {
              LOCK();
              bVar14 = iVar3 == *(int *)(lVar7 + 0x108);
              if (bVar14) {
                *(int *)(lVar7 + 0x108) = iVar3 + -1;
              }
              UNLOCK();
              if (bVar14) {
                if ((iVar3 + -1 == 0) && (0 < *(int *)(lVar7 + 0x138))) {
                  SetEvent(*(HANDLE *)(lVar7 + 0x140));
                }
                goto LAB_1450b9a48;
              }
              iVar3 = *(int *)(lVar7 + 0x108);
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x110));
LAB_1450b9a48:
            if (plVar11 != (longlong *)0x0) {
              FUN_1450b9b00(param_1);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0x14);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar11 + 0x18))(plVar11);
              }
            }
          }
          lVar13 = *(longlong *)(lVar13 + 0x18);
          lVar7 = DAT_14c791060;
        } while( true );
      }
      iVar4 = FUN_1450d5430(*(undefined4 *)(lVar12 + 0x30));
      if (iVar4 != 1) {
        lVar13 = FUN_145391180(param_1 + 0xa8);
        if (lVar13 != 0) {
          FUN_1450b64a0(lVar13);
        }
        goto LAB_1450b98fd;
      }
    }
    else {
      if (*(short *)(lVar12 + 0x34) == 0x2103) {
        uVar9 = *(uint *)(lVar12 + 0x30);
        do {
          while (iVar4 = *(int *)(lVar13 + 0x108), iVar4 < 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar13 + 0x110));
            if (*(int *)(lVar13 + 0x108) < 0) goto LAB_1450b97f8;
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar13 + 0x110));
          }
          LOCK();
          bVar14 = iVar4 == *(int *)(lVar13 + 0x108);
          if (bVar14) {
            *(int *)(lVar13 + 0x108) = iVar4 + 1;
          }
          UNLOCK();
        } while (!bVar14);
LAB_1450b97f8:
        if (*(uint *)(lVar13 + 0x150) == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          for (plVar11 = *(longlong **)
                          (*(longlong *)(lVar13 + 0x148) +
                          ((ulonglong)uVar9 % (ulonglong)*(uint *)(lVar13 + 0x150)) * 8);
              plVar11 != (longlong *)0x0; plVar11 = (longlong *)plVar11[1]) {
            if (*(uint *)(plVar11 + 2) == uVar9) goto LAB_1450b9828;
          }
          plVar11 = (longlong *)0x0;
LAB_1450b9828:
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar11 + 0x14) = *(int *)((longlong)plVar11 + 0x14) + 1;
            UNLOCK();
          }
        }
        iVar4 = *(int *)(lVar13 + 0x108);
        while (-1 < iVar4) {
          LOCK();
          bVar14 = iVar4 == *(int *)(lVar13 + 0x108);
          if (bVar14) {
            *(int *)(lVar13 + 0x108) = iVar4 + -1;
          }
          UNLOCK();
          if (bVar14) {
            if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar13 + 0x138))) {
              SetEvent(*(HANDLE *)(lVar13 + 0x140));
            }
            goto LAB_1450b9894;
          }
          iVar4 = *(int *)(lVar13 + 0x108);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar13 + 0x110));
LAB_1450b9894:
        if (plVar11 == (longlong *)0x0) {
          iVar4 = 2;
          goto LAB_1450b98fd;
        }
        iVar4 = FUN_1450b9540(param_1,param_2,plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0x14);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
      }
      if (iVar4 != 1) goto LAB_1450b98fd;
    }
    lVar12 = *(longlong *)(lVar12 + 0x18);
    if (lVar12 == 0) {
      return iVar4;
    }
  } while( true );
}



// FUNCTION 1450b9b00 FUN_1450b9b00 body=488 status=ok
// SIG undefined FUN_1450b9b00(void)

void FUN_1450b9b00(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  
  if (*(longlong *)(param_2 + 0x20) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x20);
    do {
      lVar6 = DAT_14c791060;
      lVar4 = *(longlong *)(lVar7 + 0x18);
      if (*(short *)(lVar7 + 0x34) == 0x403) {
        FUN_1450d5550(*(undefined4 *)(lVar7 + 0x30));
        lVar7 = FUN_145391180(param_1 + 0xa8);
        if (lVar7 != 0) {
          FUN_1450b64a0(lVar7);
        }
      }
      else if (*(short *)(lVar7 + 0x34) == 0x2103) {
        uVar2 = *(uint *)(lVar7 + 0x30);
        do {
          while (iVar3 = *(int *)(lVar6 + 0x108), iVar3 < 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x110));
            if (*(int *)(lVar6 + 0x108) < 0) goto LAB_1450b9bd7;
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x110));
          }
          LOCK();
          bVar9 = iVar3 == *(int *)(lVar6 + 0x108);
          if (bVar9) {
            *(int *)(lVar6 + 0x108) = iVar3 + 1;
          }
          UNLOCK();
        } while (!bVar9);
LAB_1450b9bd7:
        plVar8 = (longlong *)0x0;
        if (*(uint *)(lVar6 + 0x150) != 0) {
          for (plVar5 = *(longlong **)
                         (*(longlong *)(lVar6 + 0x148) +
                         ((ulonglong)uVar2 % (ulonglong)*(uint *)(lVar6 + 0x150)) * 8);
              (plVar8 = (longlong *)0x0, plVar5 != (longlong *)0x0 &&
              (plVar8 = plVar5, *(uint *)(plVar5 + 2) != uVar2)); plVar5 = (longlong *)plVar5[1]) {
          }
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
            UNLOCK();
          }
        }
        iVar3 = *(int *)(lVar6 + 0x108);
        while (-1 < iVar3) {
          LOCK();
          bVar9 = iVar3 == *(int *)(lVar6 + 0x108);
          if (bVar9) {
            *(int *)(lVar6 + 0x108) = iVar3 + -1;
          }
          UNLOCK();
          if (bVar9) {
            if ((iVar3 + -1 == 0) && (0 < *(int *)(lVar6 + 0x138))) {
              SetEvent(*(HANDLE *)(lVar6 + 0x140));
            }
            goto LAB_1450b9c74;
          }
          iVar3 = *(int *)(lVar6 + 0x108);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x110));
LAB_1450b9c74:
        if (plVar8 != (longlong *)0x0) {
          FUN_1450b9b00(param_1);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0x14);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 0x18))(plVar8);
          }
        }
      }
      lVar7 = lVar4;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1450b9cf0 FUN_1450b9cf0 body=467 status=ok
// SIG undefined FUN_1450b9cf0(void)

int FUN_1450b9cf0(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  cVar1 = *(char *)(param_2 + 0x40);
  iVar7 = 1;
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0xe8) = 1;
  }
  uVar2 = *(uint *)(param_2 + 0x44);
  uVar11 = (ulonglong)uVar2;
  if (uVar2 == 1) {
    uVar3 = *(undefined4 *)(param_2 + 0x48);
    uVar4 = *(undefined4 *)(param_2 + 0x3c);
    uVar5 = *(undefined4 *)(param_2 + 0x38);
    iVar7 = FUN_145076f50(DAT_14c790ff8,uVar5,uVar4,uVar3,cVar1);
    if (cVar1 == '\0') goto LAB_1450b9e9d;
    if ((iVar7 == 1) && (iVar7 = FUN_1450bcc60(param_1), iVar7 != 1)) {
      FUN_145076f50(DAT_14c790ff8,uVar5,uVar4,uVar3,0);
    }
  }
  else {
    uVar10 = 0;
    if (uVar2 != 0) {
      uVar6 = *(undefined1 *)(param_2 + 0x40);
      puVar9 = *(undefined4 **)(param_2 + 0x48);
      uVar3 = *(undefined4 *)(param_2 + 0x3c);
      do {
        iVar7 = FUN_145076f50(DAT_14c790ff8,*(undefined4 *)(param_2 + 0x38),uVar3,puVar9[uVar10],
                              uVar6);
        if (iVar7 != 1) {
          if ((int)uVar10 != 0) {
            uVar4 = *(undefined4 *)(param_2 + 0x38);
            do {
              FUN_145076f50(DAT_14c790ff8,uVar4,uVar3,*puVar9,0);
              puVar9 = puVar9 + 1;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          break;
        }
        uVar6 = *(undefined1 *)(param_2 + 0x40);
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
      } while (uVar8 < uVar2);
    }
    if ((((*(char *)(param_2 + 0x40) != '\0') && (iVar7 == 1)) &&
        (iVar7 = FUN_1450bcc60(), iVar7 != 1)) && (uVar2 != 0)) {
      uVar3 = *(undefined4 *)(param_2 + 0x3c);
      uVar4 = *(undefined4 *)(param_2 + 0x38);
      puVar9 = *(undefined4 **)(param_2 + 0x48);
      do {
        FUN_145076f50(DAT_14c790ff8,uVar4,uVar3,*puVar9,0);
        puVar9 = puVar9 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    AK::MemoryMgr::Free(0,*(void **)(param_2 + 0x48));
    if (*(char *)(param_2 + 0x40) == '\0') goto LAB_1450b9e9d;
  }
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
LAB_1450b9e9d:
  FUN_1450bc560(param_1,param_2,iVar7);
  return iVar7;
}



// FUNCTION 1450b9ed0 FUN_1450b9ed0 body=400 status=ok
// SIG undefined FUN_1450b9ed0(void)

int FUN_1450b9ed0(longlong param_1,undefined8 *param_2,int param_3,undefined1 param_4,
                 undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong local_res8;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
  local_80 = 0;
  local_88 = uVar1;
  local_84 = uVar2;
  lVar4 = FUN_145391180(param_1 + 0xa8,&local_88);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 100) = *(int *)(lVar4 + 100) + 1;
    UNLOCK();
    *(int *)(lVar4 + 0x70) = *(int *)(lVar4 + 0x70) + 1;
    if ((param_3 == 2) || ((*(byte *)(lVar4 + 0x68) & 4) != 0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
      return 1;
    }
    param_3 = 3;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_68 = param_2[2];
  uStack_60 = param_2[3];
  local_58 = param_2[4];
  uStack_50 = param_2[5];
  local_res8 = 0;
  local_48 = *(undefined4 *)(param_2 + 6);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_40 = *(undefined4 *)(param_2 + 7);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x3c);
  local_38 = *(undefined4 *)(param_2 + 8);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x44);
  uStack_30 = *(undefined4 *)(param_2 + 9);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x4c);
  iVar3 = FUN_1450b8930(param_1,&local_78,&local_res8,param_3,param_4,param_5);
  lVar4 = local_res8;
  if (iVar3 == 1) {
    local_80 = 0;
    local_88 = uVar1;
    local_84 = uVar2;
    FUN_145391060(param_1 + 0xa8,&local_88,local_res8);
  }
  else if ((iVar3 != 0x45) && (local_res8 != 0)) {
    local_80 = 0;
    local_88 = uVar1;
    local_84 = uVar2;
    FUN_145391220(param_1 + 0xa8,&local_88);
    FUN_1450b64a0(lVar4,0);
  }
  return iVar3;
}



// FUNCTION 1450ba060 FUN_1450ba060 body=437 status=ok
// SIG undefined FUN_1450ba060(void)

/* WARNING: Removing unreachable block (ram,0x0001450ba11d) */

void FUN_1450ba060(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulonglong uVar6;
  void *pvVar7;
  uint uVar8;
  uint uStack_40;
  
  FUN_1450b6b00();
  FUN_1450ba220(param_1);
  plVar2 = (longlong *)(param_1 + 0xa8);
  if (*(uint *)(param_1 + 0xb0) == 0) {
    return;
  }
  uVar6 = 0;
  pvVar5 = *(void **)*plVar2;
  while (pvVar5 == (void *)0x0) {
    uVar8 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar8;
    if (*(uint *)(param_1 + 0xb0) <= uVar8) {
      return;
    }
    pvVar5 = (void *)((longlong *)*plVar2)[uVar6];
  }
  do {
    pvVar7 = *(void **)((longlong)pvVar5 + 0x10);
    uStack_40 = (uint)uVar6;
    if (pvVar7 == (void *)0x0) {
      uVar4 = uVar6;
      do {
        uStack_40 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uStack_40;
        if (*(uint *)(param_1 + 0xb0) <= uStack_40) break;
        pvVar7 = *(void **)(*plVar2 + uVar4 * 8);
      } while (pvVar7 == (void *)0x0);
    }
    *(undefined8 *)(*plVar2 + uVar6 * 8) = *(undefined8 *)((longlong)pvVar5 + 0x10);
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
    FUN_1450b65b0(pvVar5);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
    LOCK();
    piVar1 = (int *)((longlong)pvVar5 + 0x60);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 < 2) {
      if (*(void **)((longlong)pvVar5 + 0x18) != (void *)0x0) {
        AK::MemoryMgr::Free((*(byte *)((longlong)pvVar5 + 0x68) & 8) << 0x1b | 0x20000003,
                            *(void **)((longlong)pvVar5 + 0x18));
        *(undefined8 *)((longlong)pvVar5 + 0x18) = 0;
      }
      FUN_1450b74c0(DAT_14c790fe0,pvVar5);
      if (0 < *(int *)((longlong)pvVar5 + 100)) goto LAB_1450ba1d9;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
      if ((*(byte *)((longlong)pvVar5 + 0x68) & 2) != 0) {
        AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar5 + 0x20));
        *(byte *)((longlong)pvVar5 + 0x68) = *(byte *)((longlong)pvVar5 + 0x68) & 0xfd;
      }
      *(undefined8 *)((longlong)pvVar5 + 0x20) = 0;
      AK::MemoryMgr::Free(0,pvVar5);
    }
    else {
LAB_1450ba1d9:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
    }
    if (pvVar7 == (void *)0x0) {
      return;
    }
    uVar6 = (ulonglong)uStack_40;
    pvVar5 = pvVar7;
  } while( true );
}



// FUNCTION 1450ba220 FUN_1450ba220 body=461 status=ok
// SIG undefined FUN_1450ba220(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1450ba220(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puVar11;
  
  puVar13 = (undefined4 *)0x0;
  iVar12 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
  puVar15 = auStack_68;
  puVar16 = puVar13;
  if (*(uint *)(param_1 + 0xb8) != 0) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 0xb8) * 0x10;
    uVar8 = uVar6 + 0xf;
    if (uVar8 <= uVar6) {
      uVar8 = 0xffffffffffffff0;
    }
    lVar14 = -(uVar8 & 0xfffffffffffffff0);
    puVar16 = (undefined4 *)((longlong)local_48 + lVar14);
    puVar15 = auStack_68 + lVar14;
    if (*(uint *)(param_1 + 0xb0) != 0) {
      puVar1 = *(undefined8 **)(param_1 + 0xa8);
      puVar9 = (undefined4 *)*puVar1;
      puVar11 = puVar13;
      while (puVar17 = puVar16, puVar9 == (undefined4 *)0x0) {
        uVar10 = (int)puVar11 + 1;
        puVar11 = (undefined4 *)(ulonglong)uVar10;
        puVar15 = auStack_68 + lVar14;
        if (*(uint *)(param_1 + 0xb0) <= uVar10) goto LAB_1450ba315;
        puVar9 = (undefined4 *)puVar1[(longlong)puVar11];
      }
      do {
        while( true ) {
          if (puVar9[0x1c] != 0) {
            uVar2 = puVar9[1];
            uVar3 = puVar9[2];
            uVar4 = puVar9[3];
            puVar13 = (undefined4 *)(ulonglong)((int)puVar13 + 1);
            *puVar17 = *puVar9;
            puVar17[1] = uVar2;
            puVar17[2] = uVar3;
            puVar17[3] = uVar4;
            puVar17 = puVar17 + 4;
          }
          iVar12 = (int)puVar13;
          puVar9 = *(undefined4 **)(puVar9 + 4);
          if (puVar9 != (undefined4 *)0x0) break;
          do {
            uVar10 = (int)puVar11 + 1;
            puVar11 = (undefined4 *)(ulonglong)uVar10;
            if (*(uint *)(param_1 + 0xb0) <= uVar10) goto LAB_1450ba309;
            puVar9 = *(undefined4 **)(*(longlong *)(param_1 + 0xa8) + (longlong)puVar11 * 8);
          } while (puVar9 == (undefined4 *)0x0);
        }
LAB_1450ba309:
        puVar15 = auStack_68 + lVar14;
      } while (puVar9 != (undefined4 *)0x0);
    }
  }
LAB_1450ba315:
  *(undefined8 *)(puVar15 + -8) = 0x1450ba322;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
  lVar14 = (longlong)iVar12;
  if (0 < lVar14) {
    puVar16 = puVar16 + lVar14 * 4;
    do {
      uVar2 = puVar16[-4];
      uVar3 = puVar16[-3];
      uVar4 = puVar16[-2];
      uVar5 = puVar16[-1];
      puVar16 = puVar16 + -4;
      lVar14 = lVar14 + -1;
      *(undefined8 *)(puVar15 + -8) = 0x1450ba358;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
      local_38 = uVar2;
      uStack_34 = uVar3;
      uStack_30 = uVar4;
      uStack_2c = uVar5;
      *(undefined8 *)(puVar15 + -8) = 0x1450ba369;
      lVar7 = FUN_145391180(param_1 + 0xa8,&local_38);
      if ((lVar7 == 0) || (*(int *)(lVar7 + 0x70) == 0)) {
        *(undefined8 *)(puVar15 + -8) = 0x1450ba3ca;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
      }
      else {
        *(undefined8 *)(puVar15 + -8) = 0x1450ba381;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
        local_40 = 0;
        local_48[0] = uVar2;
        local_48[1] = uVar3;
        *(undefined8 *)(puVar15 + -8) = 0x1450ba3a0;
        lVar7 = FUN_145391180(param_1 + 0xa8,local_48);
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x70) != 0) {
            *(int *)(lVar7 + 0x70) = *(int *)(lVar7 + 0x70) + -1;
          }
          *(undefined8 *)(puVar15 + -8) = 0x1450ba3bb;
          FUN_1450b64a0(lVar7,1);
        }
      }
    } while (0 < lVar14);
  }
  return;
}



// FUNCTION 1450ba3f0 FUN_1450ba3f0 body=31 status=ok
// SIG undefined FUN_1450ba3f0(void)

void FUN_1450ba3f0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 0x58);
  if (uVar2 < *(uint *)(param_2 + 0x5c)) {
    *(uint *)(param_2 + 0x58) = uVar2 + 1;
    puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x50) + (ulonglong)uVar2 * 8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_3;
    }
  }
  return;
}



// FUNCTION 1450ba410 FUN_1450ba410 body=363 status=ok
// SIG undefined FUN_1450ba410(void)

int FUN_1450ba410(longlong param_1,uint *param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_res8 [2];
  int local_res18;
  int local_res1c;
  
  param_1 = param_1 + 8;
  *param_3 = 0;
  iVar2 = FUN_1450b56e0(param_1,&local_res18,8);
  if ((iVar2 != 1) || (local_res18 != 0x44484b42)) {
    return 7;
  }
  iVar3 = 0x14;
  iVar2 = FUN_1450b56e0(param_1,param_2,0x14);
  if (iVar2 == 1) {
    *param_2 = *param_2 ^ DAT_14c79c340;
    param_2[1] = param_2[1] ^ DAT_14c79c344;
    param_2[2] = param_2[2] ^ DAT_14c79c348;
    *(ushort *)(param_2 + 3) = (ushort)param_2[3] ^ DAT_14c79c34c;
    *(ushort *)((longlong)param_2 + 0xe) = *(ushort *)((longlong)param_2 + 0xe) ^ DAT_14c79c34e;
    if (*param_2 < 0x8f) {
      param_2[5] = 0;
      iVar3 = local_res1c + -0x14;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      goto LAB_1450ba4f3;
    }
    iVar3 = 0x28;
    iVar2 = FUN_1450b56e0(param_1,param_2 + 5,4);
    if (iVar2 == 1) {
      if ((param_2[5] - 1 < 0x1d) || (0x1f < param_2[5])) {
        return 100;
      }
      iVar2 = FUN_1450b56e0(param_1,param_2 + 6,0x10);
    }
  }
  iVar3 = local_res1c - iVar3;
  if (iVar2 != 1) {
    return iVar2;
  }
LAB_1450ba4f3:
  if (iVar3 != 0) {
    local_res8[0] = 0;
    iVar2 = FUN_1450b5720(param_1,iVar3,local_res8);
    if (iVar2 != 1) {
      return iVar2;
    }
    if (local_res8[0] != iVar3) {
      return 0x38;
    }
  }
  uVar1 = *param_2;
  if (uVar1 < 0x91) {
    if (0x75 < uVar1) {
      *param_3 = 1;
      return 1;
    }
  }
  else if (uVar1 < 0x92) {
    return 1;
  }
  FUN_1450bd030();
  return 0x40;
}



// FUNCTION 1450ba580 FUN_1450ba580 body=897 status=ok
// SIG undefined FUN_1450ba580(void)

int FUN_1450ba580(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char local_res8 [8];
  uint local_res20 [2];
  int local_48;
  undefined1 local_44;
  int local_43;
  
  local_res20[0] = 0;
  iVar2 = FUN_1450b56e0(param_1 + 8,local_res20,4);
  if ((iVar2 == 1) && (local_res20[0] != 0)) {
    cVar1 = FUN_145074f30(param_2 + 0x50,local_res20[0]);
    iVar2 = 0x34;
    if (cVar1 != '\0') {
      iVar2 = 1;
    }
  }
  uVar3 = 0;
  local_res8[0] = '\0';
  if (local_res20[0] != 0) {
    do {
      if (iVar2 != 1) break;
      iVar2 = FUN_1450b56e0(param_1 + 8,&local_44,5);
      if (iVar2 == 1) {
        switch(local_44) {
        case 1:
          iVar2 = FUN_1450be200(param_1,&local_44,param_2,DAT_14c791060 + 0xb0);
          break;
        case 2:
          iVar2 = FUN_1450bd370(param_1,&local_44,param_2,param_3);
          break;
        case 3:
          iVar2 = FUN_1450bb7f0(param_1,&local_44,param_2);
          break;
        case 4:
          iVar2 = FUN_1450bd0b0(param_1,&local_44,param_2,DAT_14c791060 + 0x108);
          break;
        case 5:
          iVar2 = FUN_1450bd680(param_1,&local_44,param_2,DAT_14c791060);
          break;
        case 6:
          iVar2 = FUN_1450bd960(param_1,&local_44,param_2,DAT_14c791060);
          break;
        case 7:
          iVar2 = FUN_1450bdf20(param_1,&local_44,param_2,DAT_14c791060);
          break;
        case 8:
          iVar2 = FUN_1450bb3b0(param_1,&local_44,param_2,local_res8);
          break;
        case 9:
          iVar2 = FUN_1450bdc40(param_1,&local_44,param_2,DAT_14c791060);
          break;
        default:
          if ((DAT_14c791008 == (code *)0x0) ||
             (iVar2 = (*DAT_14c791008)(&local_44,param_2,param_3), iVar2 == 3)) {
            local_48 = 0;
            FUN_1450b5720(param_1 + 8,local_43,&local_48);
            if (local_48 != local_43) {
              iVar2 = 7;
            }
          }
          break;
        case 0xe:
          iVar2 = FUN_1450be7a0(param_1,&local_44,param_2,DAT_14c791060 + 0x210);
          break;
        case 0xf:
          iVar2 = FUN_1450bf2a0(param_1,&local_44,param_2,DAT_14c791060 + 0x318);
          break;
        case 0x10:
          iVar2 = FUN_1450bf560(param_1,&local_44,param_2,DAT_14c791060 + 0x3c8);
          break;
        case 0x11:
          iVar2 = FUN_1450bfae0(param_1,&local_44,param_2,DAT_14c791060 + 0x370);
          break;
        case 0x12:
          iVar2 = FUN_1450be4c0(param_1,&local_44,param_2,DAT_14c791060 + 0x58);
          break;
        case 0x13:
          iVar2 = FUN_1450bea60(param_1,&local_44,param_2,DAT_14c791060 + 0x268);
          break;
        case 0x14:
          iVar2 = FUN_1450bed20(param_1,&local_44,param_2,DAT_14c791060 + 0x268);
          break;
        case 0x15:
          iVar2 = FUN_1450bf820(param_1,&local_44,param_2,DAT_14c791060 + 0x420);
          break;
        case 0x16:
          iVar2 = FUN_1450befe0(param_1,&local_44,param_2,DAT_14c791060 + 0x268);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_res20[0]);
    if (local_res8[0] != '\0') {
      FUN_145083d70(DAT_14c790fd8,&DAT_14c7910a4);
    }
  }
  return iVar2;
}



// FUNCTION 1450ba960 FUN_1450ba960 body=718 status=ok
// SIG undefined FUN_1450ba960(void)

ulonglong FUN_1450ba960(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  byte local_res10 [8];
  uint local_res20 [2];
  undefined1 local_58 [8];
  undefined1 local_50 [4];
  uint local_4c;
  
  uVar4 = 1;
  if (param_2 == 0) {
    return 1;
  }
  do {
    if (uVar4 != 1) break;
    lVar1 = param_1 + 8;
    uVar5 = FUN_1450b56e0(lVar1,local_50,8);
    if ((int)uVar5 != 1) {
      return uVar5;
    }
    param_2 = param_2 + -8;
    uVar10 = 0;
    uVar4 = 1;
    iVar9 = param_2;
    if (local_4c != 0) {
      while (uVar4 = FUN_1450b56e0(lVar1,local_res20,4), param_2 = iVar9, uVar4 == 1) {
        param_2 = iVar9 + -4;
        uVar4 = FUN_1450b56e0(lVar1,local_res10,1);
        if (uVar4 != 1) break;
        plVar2 = (longlong *)(param_1 + 0xc0);
        param_2 = iVar9 + -5;
        if (*(uint *)(param_1 + 200) == 0) {
LAB_1450baa8f:
          pvVar6 = AK::MemoryMgr::Malloc(0,(ulonglong)(local_res10[0] + 5));
          if (pvVar6 == (void *)0x0) {
            uVar4 = 0x34;
          }
          else {
            *(undefined1 *)((ulonglong)local_res10[0] + (longlong)pvVar6) = 0x2e;
            *(undefined1 *)((ulonglong)local_res10[0] + 1 + (longlong)pvVar6) = 0x62;
            *(undefined1 *)((ulonglong)local_res10[0] + 2 + (longlong)pvVar6) = 0x6e;
            *(undefined1 *)((ulonglong)local_res10[0] + 3 + (longlong)pvVar6) = 0x6b;
            *(undefined1 *)((ulonglong)local_res10[0] + 4 + (longlong)pvVar6) = 0;
            uVar4 = FUN_1450b56e0(lVar1,pvVar6,local_res10[0]);
            uVar3 = local_res20[0];
            if (uVar4 == 1) {
              param_2 = param_2 - (uint)local_res10[0];
              if ((*(uint *)(param_1 + 200) == 0) ||
                 (0.9 < (float)*(uint *)(param_1 + 0xd0) / (float)*(uint *)(param_1 + 200))) {
                FUN_1450bcae0(plVar2);
              }
              if (*(uint *)(param_1 + 200) != 0) {
                uVar5 = (ulonglong)uVar3 % (ulonglong)*(uint *)(param_1 + 200);
                for (puVar8 = *(undefined8 **)(*plVar2 + uVar5 * 8); puVar8 != (undefined8 *)0x0;
                    puVar8 = (undefined8 *)*puVar8) {
                  if (*(uint *)(puVar8 + 1) == uVar3) {
                    puVar8 = puVar8 + 2;
                    if (puVar8 != (undefined8 *)0x0) goto LAB_1450babb2;
                    break;
                  }
                }
                puVar7 = AK::MemoryMgr::Malloc(0,0x18);
                if (puVar7 == (undefined8 *)0x0) {
                  puVar8 = (undefined8 *)0x0;
                }
                else {
                  *puVar7 = *(undefined8 *)(*plVar2 + uVar5 * 8);
                  puVar8 = puVar7 + 2;
                  *(uint *)(puVar7 + 1) = uVar3;
                  *(undefined8 **)(*plVar2 + uVar5 * 8) = puVar7;
                  *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
                }
                if (puVar8 != (undefined8 *)0x0) {
LAB_1450babb2:
                  *puVar8 = pvVar6;
                  goto LAB_1450babbd;
                }
              }
              uVar4 = 0x34;
            }
            AK::MemoryMgr::Free(0,pvVar6);
          }
          break;
        }
        for (puVar8 = *(undefined8 **)
                       (*plVar2 +
                       ((ulonglong)local_res20[0] % (ulonglong)*(uint *)(param_1 + 200)) * 8);
            puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8) {
          if (*(uint *)(puVar8 + 1) == local_res20[0]) {
            puVar8 = puVar8 + 2;
            goto LAB_1450baa60;
          }
        }
        puVar8 = (undefined8 *)0x0;
LAB_1450baa60:
        if (puVar8 == (undefined8 *)0x0) goto LAB_1450baa8f;
        FUN_1450b5720(lVar1,local_res10[0],local_58);
        param_2 = param_2 - (uint)local_res10[0];
LAB_1450babbd:
        uVar10 = uVar10 + 1;
        iVar9 = param_2;
        if (local_4c <= uVar10) break;
      }
    }
  } while (param_2 != 0);
  return (ulonglong)uVar4;
}



// FUNCTION 1450bac30 FUN_1450bac30 body=1734 status=ok
// SIG undefined FUN_1450bac30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1450bac30(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  int local_res20 [2];
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 local_b0;
  uint local_a8;
  undefined4 local_a4;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  int local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint uStack_80;
  uint local_7c;
  uint uStack_78;
  uint local_74;
  uint uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  
  puVar6 = auStack_d8;
  if (param_2 == 0) {
    return 1;
  }
  FUN_1450719c0(local_res18);
  param_1 = param_1 + 8;
  iVar4 = FUN_1450b56e0(param_1,local_res10,2);
  FUN_144d41d00((undefined2)local_res10[0]);
  if (iVar4 == 1) {
    iVar4 = FUN_1450b56e0(param_1,local_res10,4);
    if (iVar4 == 1) {
      iVar4 = FUN_144d41880(local_res10[0],2);
    }
    if (iVar4 == 1) {
      iVar4 = FUN_1450b56e0(param_1,local_res10,2);
      if (iVar4 == 1) {
        iVar4 = FUN_144d419a0((undefined2)local_res10[0],2);
      }
      if (iVar4 == 1) {
        iVar4 = FUN_1450b56e0(param_1,local_res10,2);
        if (iVar4 == 1) {
          iVar4 = FUN_144d419d0((undefined2)local_res10[0],2);
        }
      }
    }
  }
  local_8c = 0;
  puVar7 = auStack_d8;
  if ((iVar4 == 1) && (iVar4 = FUN_1450b56e0(param_1,&local_8c,4), puVar7 = auStack_d8, iVar4 == 1))
  {
    uVar9 = 0;
    if (local_8c != 0) {
      while( true ) {
        local_res10[0] = 0;
        local_9c = 0;
        local_a8 = 0;
        iVar4 = FUN_1450b56e0(param_1,local_res10,4);
        if (iVar4 == 1) {
          iVar4 = FUN_1450b56e0(param_1,&local_9c,4);
        }
        if ((iVar4 != 1) || (iVar4 = FUN_145076080(DAT_14c790ff8,local_res10[0]), iVar4 != 1))
        break;
        iVar4 = FUN_1450763d0(DAT_14c790ff8,local_res10[0],local_9c);
        if ((iVar4 != 1) || (iVar4 = FUN_1450b56e0(param_1,&local_a8,4), iVar4 != 1)) break;
        uVar8 = 0;
        if (local_a8 != 0) {
          do {
            local_a0 = 0;
            local_a4 = 0;
            local_98 = 0;
            iVar4 = FUN_1450b56e0(param_1,&local_a0,4);
            if (iVar4 != 1) goto LAB_1450bae98;
            iVar4 = FUN_1450b56e0(param_1,&local_a4,4);
            if ((iVar4 != 1) || (iVar4 = FUN_1450b56e0(param_1,&local_98,4), iVar4 != 1))
            goto LAB_1450bae98;
            local_b0 = 0;
            local_b8 = local_98;
            iVar4 = FUN_1450762d0(DAT_14c790ff8,local_res10[0],local_a0,local_a4);
            if (iVar4 != 1) goto LAB_1450bae98;
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_a8);
        }
        uVar9 = uVar9 + 1;
        if (local_8c <= uVar9) break;
      }
    }
LAB_1450bae98:
    local_88 = 0;
    puVar7 = auStack_d8;
    if (((iVar4 == 1) &&
        (iVar4 = FUN_1450b56e0(param_1,&local_88,4), puVar7 = auStack_d8, iVar4 == 1)) &&
       (uVar9 = 0, puVar7 = auStack_d8, local_88 != 0)) {
      do {
        local_a0 = 0;
        local_a4 = 0;
        local_res10[0] = local_res10[0] & 0xffffff00;
        local_a8 = 0;
        *(undefined8 *)(puVar6 + -8) = 0x1450baf05;
        iVar4 = FUN_1450b56e0(param_1,&local_a0,4);
        if (iVar4 == 1) {
          *(undefined8 *)(puVar6 + -8) = 0x1450baf1c;
          iVar4 = FUN_1450b56e0(param_1,&local_a4,4);
        }
        puVar7 = puVar6;
        if (iVar4 != 1) break;
        *(undefined8 *)(puVar6 + -8) = 0x1450baf39;
        iVar4 = FUN_1450b56e0(param_1,local_res10,1);
        if (iVar4 != 1) break;
        *(undefined8 *)(puVar6 + -8) = 0x1450baf54;
        iVar4 = FUN_1450b56e0(param_1,&local_a8,4);
        if (iVar4 != 1) break;
        if (local_a8 != 0) {
          uVar5 = (ulonglong)(local_a8 * 0xc) + 0xf;
          if (uVar5 <= local_a8 * 0xc) {
            uVar5 = 0xffffffffffffff0;
          }
          *(undefined8 *)(puVar6 + -8) = 0x1450baf89;
          lVar1 = -(uVar5 & 0xfffffffffffffff0);
          *(undefined8 *)(puVar6 + lVar1 + -8) = 0x1450baf9c;
          iVar4 = FUN_1450b56e0(param_1,puVar6 + lVar1 + 0x30);
          puVar7 = puVar6 + lVar1;
          if (iVar4 != 1) break;
          local_84 = local_a0;
          local_98 = local_a4;
          uStack_94 = CONCAT31(uStack_94._1_3_,(char)local_res10[0]);
          uVar2 = CONCAT44(uStack_94,local_a4);
          uStack_80 = CONCAT31(uStack_80._1_3_,2);
          uVar3 = CONCAT44(uStack_80,local_a0);
          *(uint *)(puVar6 + lVar1 + 0x20) = local_a8;
          *(undefined8 *)(puVar6 + lVar1 + -8) = 0x1450bafdb;
          iVar4 = FUN_14507f750(g_pGameSyncMgr,uVar2,uVar3,puVar6 + lVar1 + 0x30);
          puVar7 = puVar6 + lVar1;
          puVar6 = puVar6 + lVar1;
          if (iVar4 != 1) break;
        }
        puVar7 = puVar6;
        uVar9 = uVar9 + 1;
        puVar6 = puVar7;
      } while (uVar9 < local_88);
    }
    local_90 = 0;
    if (iVar4 == 1) {
      *(undefined8 *)(puVar7 + -8) = 0x1450bb00a;
      iVar4 = FUN_1450b56e0(param_1,&local_90,4);
      if (iVar4 == 1) {
        for (; local_90 != 0; local_90 = local_90 + -1) {
          local_a0 = 0;
          local_a8 = 0;
          local_a4 = 0;
          local_98 = 0;
          local_9c = 0;
          *(undefined8 *)(puVar7 + -8) = 0x1450bb046;
          iVar4 = FUN_1450b56e0(param_1,&local_a8,4);
          if (iVar4 == 1) {
            *(undefined8 *)(puVar7 + -8) = 0x1450bb05d;
            iVar4 = FUN_1450b56e0(param_1,&local_a0,4);
          }
          uVar8 = uStack_80;
          uVar9 = local_a0;
          if (iVar4 != 1) goto LAB_1450bb2c5;
          local_84 = local_a8;
          uStack_80 = uStack_80 & 0xffffff00;
          uVar5 = CONCAT44(uVar8,local_a8);
          *(undefined8 *)(puVar7 + -8) = 0x1450bb087;
          FUN_14507fd50(g_pGameSyncMgr,uVar5 & 0xffffff00ffffffff,uVar9);
          *(undefined8 *)(puVar7 + -8) = 0x1450bb097;
          iVar4 = FUN_1450b56e0(param_1,&local_a4,4);
          if (iVar4 == 1) {
            *(undefined8 *)(puVar7 + -8) = 0x1450bb0ae;
            iVar4 = FUN_1450b56e0(param_1,&local_98,4);
          }
          if (iVar4 != 1) break;
          *(undefined8 *)(puVar7 + -8) = 0x1450bb0c9;
          iVar4 = FUN_1450b56e0(param_1,&local_9c,4);
          uVar9 = uStack_78;
          if (iVar4 != 1) break;
          local_68 = local_a4;
          local_7c = local_a8;
          uStack_78 = uStack_78 & 0xffffff00;
          uVar5 = CONCAT44(uVar9,local_a8);
          local_64 = local_98;
          local_60 = local_9c;
          *(undefined8 *)(puVar7 + -8) = 0x1450bb10c;
          FUN_14507fea0(g_pGameSyncMgr,uVar5 & 0xffffff00ffffffff,&local_68);
          *(undefined8 *)(puVar7 + -8) = 0x1450bb11e;
          iVar4 = FUN_1450b56e0(param_1,local_res10,1);
          uVar9 = uStack_70;
          if (iVar4 != 1) break;
          if ((char)local_res10[0] != '\0') {
            local_74 = local_a8;
            uStack_70 = uStack_70 & 0xffffff00;
            uVar5 = CONCAT44(uVar9,local_a8);
            *(undefined8 *)(puVar7 + -8) = 0x1450bb14d;
            FUN_14507f560(g_pGameSyncMgr,uVar5 & 0xffffff00ffffffff,(char)local_res10[0]);
          }
        }
      }
      local_res20[0] = 0;
      if (iVar4 == 1) {
        *(undefined8 *)(puVar7 + -8) = 0x1450bb17a;
        iVar4 = FUN_1450b56e0(param_1,local_res20,4);
        if ((iVar4 == 1) && (local_res20[0] != 0)) {
          while( true ) {
            *(undefined8 *)(puVar7 + -8) = 0x1450bb1b5;
            iVar4 = FUN_1450b56e0(param_1,local_res10,4);
            if (iVar4 == 1) {
              *(undefined8 *)(puVar7 + -8) = 0x1450bb1cf;
              iVar4 = FUN_1450b56e0(param_1,&local_a0,4);
            }
            if (iVar4 == 1) {
              *(undefined8 *)(puVar7 + -8) = 0x1450bb1ec;
              iVar4 = FUN_1450b56e0(param_1,&local_a4,4);
              if (iVar4 == 1) {
                *(undefined8 *)(puVar7 + -8) = 0x1450bb206;
                iVar4 = FUN_1450b56e0(param_1,&local_98,4);
              }
            }
            if (iVar4 == 1) {
              *(undefined8 *)(puVar7 + -8) = 0x1450bb220;
              iVar4 = FUN_1450b56e0(param_1,&local_9c,4);
            }
            if (iVar4 == 1) {
              *(undefined8 *)(puVar7 + -8) = 0x1450bb23d;
              iVar4 = FUN_1450b56e0(param_1,&local_a8,4);
              if (iVar4 == 1) {
                *(undefined8 *)(puVar7 + -8) = 0x1450bb257;
                iVar4 = FUN_1450b56e0(param_1,&local_84,4);
              }
            }
            if (iVar4 != 1) break;
            local_54 = local_a0;
            local_50 = local_a4;
            local_4c = local_98;
            local_48 = local_9c;
            local_44 = local_a8;
            local_40 = local_84;
            local_58 = local_res10[0];
            *(undefined8 *)(puVar7 + -8) = 0x1450bb2b1;
            iVar4 = FUN_1450c5790(local_res10[0],&local_58);
            if ((iVar4 != 1) || (local_res20[0] = local_res20[0] + -1, local_res20[0] == 0)) break;
          }
        }
      }
    }
  }
LAB_1450bb2c5:
  *(undefined8 *)(puVar7 + -8) = 0x1450bb2d1;
  FUN_1450719f0(local_res18);
  return iVar4;
}



// FUNCTION 1450bb300 FUN_1450bb300 body=176 status=ok
// SIG undefined FUN_1450bb300(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1450bb300(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char *_Source;
  char *pcVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  uint uVar6;
  ulonglong _Count;
  undefined8 uStack_30;
  undefined1 auStack_28 [32];
  int iVar7;
  
  uVar2 = 1;
  if (param_2 != 0) {
    uStack_30 = 0x1450bb32c;
    _Source = (char *)FUN_1450b58b0(param_1 + 8);
    _Count = 0;
    pcVar3 = _Source;
    puVar5 = auStack_28;
    if (*_Source != '\0') {
      do {
        pcVar3 = pcVar3 + 1;
        iVar7 = (int)_Count;
        uVar6 = iVar7 + 1;
        _Count = (ulonglong)uVar6;
      } while (*pcVar3 != '\0');
      puVar5 = auStack_28;
      if (uVar6 != 0) {
        uVar6 = iVar7 + 2;
        uVar4 = (ulonglong)uVar6 + 0xf;
        if (uVar4 <= uVar6) {
          uVar4 = 0xffffffffffffff0;
        }
        uStack_30 = 0x1450bb373;
        lVar1 = -(uVar4 & 0xfffffffffffffff0);
        puVar5 = auStack_28 + lVar1;
        pcVar3 = &stack0xfffffffffffffff8 + lVar1;
        *(undefined8 *)(auStack_28 + lVar1 + -8) = 0x1450bb387;
        strncpy(pcVar3,_Source,_Count);
        pcVar3[_Count] = '\0';
        *(undefined8 *)(auStack_28 + lVar1 + -8) = 0x1450bb393;
        uVar2 = FUN_144d41560(pcVar3);
      }
    }
    *(undefined8 *)(puVar5 + -8) = 0x1450bb39d;
    FUN_1450b59a0(param_1 + 8);
  }
  return uVar2;
}



// FUNCTION 1450bb3b0 FUN_1450bb3b0 body=1074 status=ok
// SIG undefined FUN_1450bb3b0(void)

int FUN_1450bb3b0(longlong param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  bool bVar15;
  longlong local_res10;
  longlong local_res18;
  undefined1 *local_res20;
  char local_58;
  undefined1 local_57 [7];
  longlong *local_50;
  
  lVar7 = DAT_14c791060;
  plVar14 = (longlong *)0x0;
  if (DAT_14c79be88 == 0) {
    local_50 = (longlong *)0x0;
  }
  else {
    local_50 = (longlong *)*DAT_14c79be80;
  }
  iVar11 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar5 = (uint *)FUN_1450b58b0(param_1 + 8);
  if (puVar5 == (uint *)0x0) {
    return 0x38;
  }
  uVar2 = *puVar5;
  do {
    while (iVar4 = *(int *)(lVar7 + 0x58), iVar4 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x60));
      if (*(int *)(lVar7 + 0x58) < 0) goto LAB_1450bb445;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x60));
    }
    LOCK();
    bVar15 = iVar4 == *(int *)(lVar7 + 0x58);
    if (bVar15) {
      *(int *)(lVar7 + 0x58) = iVar4 + 1;
    }
    UNLOCK();
  } while (!bVar15);
LAB_1450bb445:
  plVar10 = plVar14;
  if (*(uint *)(lVar7 + 0xa0) != 0) {
    for (plVar6 = *(longlong **)
                   (*(longlong *)(lVar7 + 0x98) +
                   ((ulonglong)uVar2 % (ulonglong)*(uint *)(lVar7 + 0xa0)) * 8);
        (plVar10 = plVar14, plVar6 != (longlong *)0x0 &&
        (plVar10 = plVar6, *(uint *)(plVar6 + 2) != uVar2)); plVar6 = (longlong *)plVar6[1]) {
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar10 + 0x14) = *(int *)((longlong)plVar10 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar4 = *(int *)(lVar7 + 0x58);
  while (-1 < iVar4) {
    LOCK();
    bVar15 = iVar4 == *(int *)(lVar7 + 0x58);
    if (bVar15) {
      *(int *)(lVar7 + 0x58) = iVar4 + -1;
    }
    UNLOCK();
    if (bVar15) {
      if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar7 + 0x88))) {
        SetEvent(*(HANDLE *)(lVar7 + 0x90));
      }
      goto LAB_1450bb4cf;
    }
    iVar4 = *(int *)(lVar7 + 0x58);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x60));
LAB_1450bb4cf:
  plVar6 = plVar10 + -2;
  if (plVar10 == (longlong *)0x0) {
    plVar6 = plVar14;
  }
  if (plVar6 == (longlong *)0x0) {
    FUN_1450719c0(local_57);
    FUN_145074e40(lVar7 + 0x58);
    local_58 = '\0';
    plVar6 = (longlong *)FUN_14508b6d0();
    plVar10 = plVar6;
    cVar3 = '\0';
    if (plVar6 == (longlong *)0x0) {
LAB_1450bb554:
      plVar6 = plVar10;
      if ((cVar3 != '\0') && (plVar6 = plVar14, *(uint *)(lVar7 + 0xa0) != 0)) {
        for (plVar10 = *(longlong **)
                        (*(longlong *)(lVar7 + 0x98) +
                        ((ulonglong)uVar2 % (ulonglong)*(uint *)(lVar7 + 0xa0)) * 8);
            (plVar8 = plVar14, plVar10 != (longlong *)0x0 &&
            (plVar8 = plVar10, *(uint *)(plVar10 + 2) != uVar2)); plVar10 = (longlong *)plVar10[1])
        {
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
          UNLOCK();
          plVar6 = plVar8 + -2;
        }
      }
    }
    else {
      *(uint *)(plVar6 + 4) = uVar2;
      cVar3 = FUN_144d41e40(lVar7 + 0x98,plVar6 + 2,&local_58);
      if (cVar3 == '\0') {
        *(undefined4 *)(plVar6 + 4) = 0;
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0x24);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar10 = plVar14;
        cVar3 = local_58;
        if (iVar11 == 1) {
          (**(code **)(plVar6[2] + 0x18))(plVar6 + 2);
          cVar3 = local_58;
        }
        goto LAB_1450bb554;
      }
    }
    LOCK();
    piVar1 = (int *)(lVar7 + 0x58);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (*piVar1 == 0) {
      *(undefined4 *)(lVar7 + 0x5c) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x60));
    if (plVar6 == (longlong *)0x0) {
      iVar11 = 0x34;
      FUN_1450719f0(local_57);
      param_3 = local_res18;
    }
    else {
      iVar11 = (**(code **)(*plVar6 + 0x260))(plVar6,puVar5,*(undefined4 *)(local_res10 + 1));
      if (iVar11 != 1) {
        plVar10 = plVar6 + 2;
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0x24);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar6 = plVar14;
        if (iVar4 == 1) {
          (**(code **)(*plVar10 + 0x18))();
        }
      }
      FUN_1450719f0(local_57);
      param_3 = local_res18;
    }
LAB_1450bb726:
    if (iVar11 != 1) goto LAB_1450bb7b7;
  }
  else if (plVar6[0x10] == 0) {
    FUN_1450719c0(&local_res10);
    uVar12 = (ulonglong)DAT_14c79be88;
    for (plVar10 = DAT_14c79be80;
        (plVar10 != DAT_14c79be80 + uVar12 && ((longlong *)*plVar10 != plVar6));
        plVar10 = plVar10 + 1) {
    }
    plVar8 = plVar14;
    if (plVar10 != DAT_14c79be80 + uVar12) {
      plVar8 = plVar10;
    }
    if (plVar8 == (longlong *)0x0) {
      uVar9 = (ulonglong)DAT_14c79be8c;
      uVar13 = uVar12;
      if (uVar12 < uVar9) {
LAB_1450bb6d6:
        if (uVar12 < uVar9) {
          DAT_14c79be88 = (int)uVar13 + 1;
          if (DAT_14c79be80 + uVar13 != (longlong *)0x0) {
            DAT_14c79be80[uVar13] = (longlong)plVar6;
            goto LAB_1450bb719;
          }
        }
      }
      else {
        cVar3 = FUN_14508ffd0(&DAT_14c79be80);
        if (cVar3 != '\0') {
          uVar9 = (ulonglong)DAT_14c79be8c;
          uVar13 = (ulonglong)DAT_14c79be88;
          goto LAB_1450bb6d6;
        }
      }
      iVar11 = 0x34;
      plVar10 = plVar6 + 2;
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0x24);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar6 = plVar14;
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 0x18))();
      }
    }
LAB_1450bb719:
    FUN_1450719f0(&local_res10);
    goto LAB_1450bb726;
  }
  lVar7 = FUN_1450a1b90();
  if ((local_50 == (longlong *)0x0) ||
     (((lVar7 != 0 && (*(int *)(lVar7 + 100) == 0)) && (plVar6 == local_50)))) {
    if ((DAT_14c7910a4 == 0) && (iVar4 = FUN_1450bd000(plVar6), iVar4 != 0)) {
      DAT_14c7910a4 = FUN_1450bd000(plVar6);
    }
    else {
      FUN_14508e680(plVar6,DAT_14c7910a4);
    }
    *local_res20 = 1;
  }
  if (plVar6 != (longlong *)0x0) {
    plVar14 = plVar6 + 2;
  }
  uVar2 = *(uint *)(param_3 + 0x58);
  if (uVar2 < *(uint *)(param_3 + 0x5c)) {
    *(uint *)(param_3 + 0x58) = uVar2 + 1;
    plVar10 = (longlong *)(*(longlong *)(param_3 + 0x50) + (ulonglong)uVar2 * 8);
    if (plVar10 != (longlong *)0x0) {
      *plVar10 = (longlong)plVar14;
    }
  }
LAB_1450bb7b7:
  FUN_1450b59a0(param_1 + 8);
  return iVar11;
}



// FUNCTION 1450bb7f0 FUN_1450bb7f0 body=791 status=ok
// SIG undefined FUN_1450bb7f0(void)

int FUN_1450bb7f0(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  uint *puVar9;
  longlong *plVar10;
  int iVar11;
  int *piVar12;
  longlong local_res10;
  longlong local_res18;
  undefined1 local_res20 [8];
  char local_58 [4];
  uint local_54;
  
  iVar11 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  puVar9 = (uint *)FUN_1450b58b0(param_1 + 8);
  lVar7 = DAT_14c791060;
  if (puVar9 == (uint *)0x0) {
    return 0x38;
  }
  piVar12 = (int *)(DAT_14c791060 + 0x160);
  uVar4 = *puVar9;
  local_54 = (uint)(ushort)puVar9[1];
  do {
    while (iVar5 = *piVar12, iVar5 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x168));
      if (*piVar12 < 0) goto LAB_1450bb86f;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x168));
    }
    LOCK();
    iVar3 = *piVar12;
    if (iVar5 == iVar3) {
      *piVar12 = iVar5 + 1;
    }
    UNLOCK();
  } while (iVar5 != iVar3);
LAB_1450bb86f:
  if (*(uint *)(lVar7 + 0x1a8) == 0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    for (plVar10 = *(longlong **)
                    (*(longlong *)(lVar7 + 0x1a0) +
                    ((ulonglong)uVar4 % (ulonglong)*(uint *)(lVar7 + 0x1a8)) * 8);
        plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[1]) {
      if (*(uint *)(plVar10 + 2) == uVar4) goto LAB_1450bb8a1;
    }
    plVar10 = (longlong *)0x0;
LAB_1450bb8a1:
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar10 + 0x14) = *(int *)((longlong)plVar10 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar5 = *piVar12;
  while (-1 < iVar5) {
    LOCK();
    iVar3 = *piVar12;
    if (iVar5 == iVar3) {
      *piVar12 = iVar5 + -1;
    }
    UNLOCK();
    if (iVar5 == iVar3) {
      if ((iVar5 + -1 == 0) && (0 < *(int *)(lVar7 + 400))) {
        SetEvent(*(HANDLE *)(lVar7 + 0x198));
      }
      goto LAB_1450bb8e9;
    }
    iVar5 = *piVar12;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x168));
LAB_1450bb8e9:
  if (plVar10 == (longlong *)0x0) {
    FUN_1450719c0(local_res20);
    FUN_145074e40(piVar12);
    local_58[0] = '\0';
    bVar6 = false;
    plVar10 = (longlong *)FUN_145369520(local_54);
    cVar8 = '\0';
    if (plVar10 == (longlong *)0x0) {
LAB_1450bb986:
      if (cVar8 != '\0') {
        if (*(uint *)(lVar7 + 0x1a8) == 0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          for (plVar10 = *(longlong **)
                          (*(longlong *)(lVar7 + 0x1a0) +
                          ((ulonglong)uVar4 % (ulonglong)*(uint *)(lVar7 + 0x1a8)) * 8);
              plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[1]) {
            if (*(uint *)(plVar10 + 2) == uVar4) goto LAB_1450bb9b7;
          }
          plVar10 = (longlong *)0x0;
LAB_1450bb9b7:
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar10 + 0x14) = *(int *)((longlong)plVar10 + 0x14) + 1;
            UNLOCK();
          }
        }
      }
    }
    else {
      *(uint *)(plVar10 + 2) = uVar4;
      cVar8 = FUN_144d41e40(lVar7 + 0x1a0,plVar10,local_58);
      if (cVar8 == '\0') {
        *(undefined4 *)(plVar10 + 2) = 0;
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0x14);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
        plVar10 = (longlong *)0x0;
        cVar8 = local_58[0];
        goto LAB_1450bb986;
      }
      bVar6 = true;
    }
    LOCK();
    *piVar12 = *piVar12 + 1;
    UNLOCK();
    if (*piVar12 == 0) {
      *(undefined4 *)(lVar7 + 0x164) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x168));
    param_2 = local_res10;
    if (plVar10 == (longlong *)0x0) {
      iVar11 = 0x34;
      FUN_1450719f0(local_res20);
      goto LAB_1450bbad1;
    }
    if ((bVar6) &&
       (iVar11 = FUN_145369b00(plVar10,puVar9,*(undefined4 *)(local_res10 + 1)), iVar11 != 1)) {
      LOCK();
      piVar12 = (int *)((longlong)plVar10 + 0x14);
      iVar5 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      FUN_1450719f0(local_res20);
      goto LAB_1450bbad1;
    }
    FUN_1450719f0(local_res20);
    if (!bVar6) goto LAB_1450bba4e;
  }
  else {
LAB_1450bba4e:
    if ((local_54 == 0x403) && ((*(byte *)((longlong)plVar10 + 0x36) & 0x20) == 0)) {
      FUN_1450719c0(&local_res10);
      iVar11 = FUN_145369b00(plVar10,puVar9,*(undefined4 *)(param_2 + 1));
      if (iVar11 != 1) {
        LOCK();
        piVar12 = (int *)((longlong)plVar10 + 0x14);
        iVar5 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
        plVar10 = (longlong *)0x0;
      }
      FUN_1450719f0(&local_res10);
    }
  }
  if (iVar11 == 1) {
    uVar4 = *(uint *)(local_res18 + 0x58);
    if (uVar4 < *(uint *)(local_res18 + 0x5c)) {
      *(uint *)(local_res18 + 0x58) = uVar4 + 1;
      puVar2 = (undefined8 *)(*(longlong *)(local_res18 + 0x50) + (ulonglong)uVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = plVar10;
      }
    }
  }
LAB_1450bbad1:
  FUN_1450b59a0(param_1 + 8);
  return iVar11;
}



// FUNCTION 1450bbb10 FUN_1450bbb10 body=412 status=ok
// SIG undefined FUN_1450bbb10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1450bbb10(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  int *lpMultiByteStr;
  int *piVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined1 auStack_48 [48];
  
  piVar3 = (int *)FUN_1450b58b0(param_1 + 8);
  if (piVar3 == (int *)0x0) {
    uVar2 = 0x38;
  }
  else {
    iVar12 = *piVar3;
    if (iVar12 != 0) {
      piVar3 = piVar3 + 1;
      puVar10 = auStack_48;
      do {
        lpMultiByteStr = piVar3 + 1;
        cVar1 = (char)*lpMultiByteStr;
        piVar9 = lpMultiByteStr;
        while (cVar1 != '\0') {
          piVar9 = (int *)((longlong)piVar9 + 1);
          cVar1 = *(char *)piVar9;
        }
        for (piVar4 = DAT_14c79be48;
            (piVar4 != DAT_14c79be48 + (ulonglong)DAT_14c79be50 * 8 && (*piVar4 != *piVar3));
            piVar4 = piVar4 + 8) {
        }
        piVar7 = piVar4 + 2;
        if (piVar4 == DAT_14c79be48 + (ulonglong)DAT_14c79be50 * 8) {
          piVar7 = (int *)0x0;
        }
        puVar11 = puVar10;
        if (piVar7 == (int *)0x0) {
          for (piVar4 = DAT_14c79be58;
              (piVar4 != DAT_14c79be58 + (ulonglong)DAT_14c79be60 * 10 && (*piVar4 != *piVar3));
              piVar4 = piVar4 + 10) {
          }
          piVar7 = piVar4 + 2;
          if (piVar4 == DAT_14c79be58 + (ulonglong)DAT_14c79be60 * 10) {
            piVar7 = (int *)0x0;
          }
          if (piVar7 == (int *)0x0) {
            lVar5 = -1;
            do {
              lVar6 = lVar5 + 5;
              lVar5 = lVar5 + 1;
            } while (*(char *)((longlong)piVar3 + lVar6) != '\0');
            uVar8 = lVar5 * 2 + 0x11;
            if (uVar8 <= lVar5 * 2 + 2U) {
              uVar8 = 0xffffffffffffff0;
            }
            *(undefined8 *)(puVar10 + -8) = 0x1450bbc3b;
            lVar5 = -(uVar8 & 0xfffffffffffffff0);
            puVar11 = puVar10 + lVar5;
            lVar6 = -1;
            do {
              lVar6 = lVar6 + 1;
            } while (*(char *)((longlong)lpMultiByteStr + lVar6) != '\0');
            *(int *)(puVar10 + lVar5 + 0x28) = (int)lVar6 + 1;
            *(undefined1 **)(puVar10 + lVar5 + 0x20) = puVar10 + lVar5 + 0x30;
            *(undefined8 *)(puVar10 + lVar5 + -8) = 0x1450bbc7a;
            MultiByteToWideChar(0xfde9,0,(LPCSTR)lpMultiByteStr,-1,
                                *(LPWSTR *)(puVar10 + lVar5 + 0x20),*(int *)(puVar10 + lVar5 + 0x28)
                               );
            *(undefined8 *)(puVar10 + lVar5 + -8) = 0x1450bbc84;
            AK::SoundEngine::RegisterPluginDLL((wchar_t *)(puVar10 + lVar5 + 0x30),(wchar_t *)0x0);
          }
        }
        iVar12 = iVar12 + -1;
        piVar3 = (int *)((longlong)piVar9 + 1);
        puVar10 = puVar11;
      } while (iVar12 != 0);
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1450bbcb0 FUN_1450bbcb0 body=2064 status=ok
// SIG undefined FUN_1450bbcb0(void)

int FUN_1450bbcb0(longlong *param_1,undefined1 (*param_2) [16])

{
  undefined1 (*pauVar1) [16];
  undefined4 *puVar2;
  int *piVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  longlong local_res10;
  undefined4 in_stack_fffffffffffffed8;
  uint3 uVar30;
  ulonglong in_stack_fffffffffffffee0;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined4 *local_c8;
  ulonglong uStack_c0;
  undefined4 *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  void *local_38;
  undefined8 uStack_30;
  
  iVar9 = 1;
  uVar30 = (uint3)((uint)in_stack_fffffffffffffed8 >> 8);
  switch(*(undefined4 *)*param_2) {
  case 0:
    local_108 = *(undefined8 *)*param_2;
    uStack_100 = *(ulonglong *)(*param_2 + 8);
    uVar22 = 0;
    local_f8 = *(longlong *)param_2[1];
    uStack_f0 = *(undefined8 *)(param_2[1] + 8);
    local_e8 = *(undefined8 *)param_2[2];
    uStack_e0 = *(undefined8 *)(param_2[2] + 8);
    local_res10 = 0;
    local_d8 = param_2[3];
    local_c8 = *(undefined4 **)param_2[4];
    uStack_c0 = *(ulonglong *)(param_2[4] + 8);
    iVar9 = FUN_1450b8930(param_1,&local_108,&local_res10,0,(uint)uVar30 << 8,
                          in_stack_fffffffffffffee0 & 0xffffffffffffff00);
    lVar10 = local_res10;
    iVar15 = iVar9;
    if (iVar9 == 0x45) {
      iVar9 = 1;
    }
    else if (iVar9 == 1) {
      *(byte *)(local_res10 + 0x68) = *(byte *)(local_res10 + 0x68) | 1;
      if (*(int *)param_2[3] == 2) {
        uVar22 = *(ulonglong *)(param_2[3] + 8);
      }
      local_118 = CONCAT44(*(undefined4 *)(*param_2 + 4),*(undefined4 *)(*param_2 + 8));
      uStack_110 = uVar22;
      FUN_145391060(param_1 + 0x15,&local_118);
      iVar15 = 1;
    }
    else if (local_res10 != 0) {
      FUN_1450b65b0(local_res10);
      FUN_1450b63a0(lVar10,1);
    }
    FUN_1450bc560(param_1,param_2,iVar15);
    break;
  case 1:
    local_108 = *(undefined8 *)*param_2;
    uStack_100 = *(ulonglong *)(*param_2 + 8);
    local_88 = *param_2;
    local_f8 = *(longlong *)param_2[1];
    uStack_f0 = *(undefined8 *)(param_2[1] + 8);
    local_e8 = *(undefined8 *)param_2[2];
    uStack_e0 = *(undefined8 *)(param_2[2] + 8);
    local_a8 = *(undefined8 *)param_2[3];
    uStack_a0 = *(undefined8 *)(param_2[3] + 8);
    local_d8 = param_2[3];
    local_c8 = *(undefined4 **)param_2[4];
    uStack_c0 = *(ulonglong *)(param_2[4] + 8);
    local_b8 = (undefined4 *)local_f8;
    uStack_b0 = uStack_f0;
    local_98 = local_e8;
    uStack_90 = uStack_e0;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
    uVar23 = local_88._4_4_;
    uVar24 = 0;
    uVar25 = 0;
    if ((int)local_a8 == 2) {
      uVar24 = (undefined4)uStack_a0;
      uVar25 = uStack_a0._4_4_;
    }
    uVar20 = local_88._8_4_;
    uStack_110 = CONCAT44(uVar25,uVar24);
    local_118 = CONCAT44(uVar23,uVar20);
    lVar10 = FUN_145391180(param_1 + 0x15,&local_118);
    if (lVar10 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
      iVar9 = 0x36;
      if (local_b8 == (undefined4 *)0x0) {
        snprintf(&local_118,0xc,&DAT_149982378,uVar20);
      }
      FUN_1450bc560(param_1,&local_108,0x36);
    }
    else if ((*(byte *)(lVar10 + 0x68) & 1) == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
      iVar9 = 2;
      FUN_1450bc560(param_1,&local_108,2);
    }
    else {
      local_118 = CONCAT44(uVar23,uVar20);
      uStack_110 = CONCAT44(uVar25,uVar24);
      FUN_145391220(param_1 + 0x15,&local_118);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
      iVar9 = (**(code **)(*param_1 + 0x48))(param_1,lVar10,local_98,uStack_90);
    }
    break;
  case 2:
    local_88 = param_2[3];
    uVar12 = local_88._8_4_;
    puVar18 = (undefined4 *)0x0;
    local_118 = *(undefined8 *)*param_2;
    uStack_110 = *(ulonglong *)(*param_2 + 8);
    pauVar1 = param_2 + 1;
    uVar23 = *(undefined4 *)*pauVar1;
    uVar24 = *(undefined4 *)(param_2[1] + 4);
    uVar5 = *(undefined8 *)*pauVar1;
    local_98 = *(undefined8 *)*pauVar1;
    puVar19 = (undefined8 *)(param_2[1] + 8);
    uVar25 = *(undefined4 *)puVar19;
    uVar20 = *(undefined4 *)(param_2[1] + 0xc);
    uVar6 = *puVar19;
    uStack_90 = *puVar19;
    pauVar1 = param_2 + 2;
    uVar26 = *(undefined4 *)*pauVar1;
    uVar27 = *(undefined4 *)(param_2[2] + 4);
    uVar7 = *(undefined8 *)*pauVar1;
    local_a8 = *(undefined8 *)*pauVar1;
    puVar19 = (undefined8 *)(param_2[2] + 8);
    uVar28 = *(undefined4 *)puVar19;
    uVar29 = *(undefined4 *)(param_2[2] + 0xc);
    uVar8 = *puVar19;
    uStack_a0 = *puVar19;
    puVar14 = *(undefined4 **)param_2[4];
    uStack_b0 = *(ulonglong *)(param_2[4] + 8);
    *(undefined1 *)(param_1 + 0x1d) = 1;
    puVar17 = local_88._8_8_;
    local_b8 = puVar14;
    if (uVar12 != 1) {
      puVar16 = puVar18;
      local_88._8_4_ = uVar12;
      if (uVar12 != 0) {
        do {
          uVar11 = (uint)puVar16;
          local_f8 = CONCAT44(uVar24,uVar23);
          uStack_f0 = CONCAT44(uVar20,uVar25);
          local_e8 = CONCAT44(uVar27,uVar26);
          uStack_e0 = CONCAT44(uVar29,uVar28);
          local_d8._4_4_ = local_88._4_4_;
          local_d8._0_4_ = local_88._0_4_;
          local_d8._8_4_ = local_88._8_4_;
          local_d8._12_4_ = local_88._12_4_;
          puVar21 = puVar14 + (longlong)puVar16;
          local_108 = local_118;
          uStack_100 = uStack_110;
          local_c8 = local_b8;
          uStack_c0 = uStack_b0;
          iVar9 = FUN_1450b9270(param_1,&local_108,*puVar21);
          if (iVar9 != 1) goto joined_r0x0001450bc0be;
          puVar16 = (undefined4 *)(ulonglong)(uVar11 + 1);
          uVar23 = (int)local_98;
          uVar24 = local_98._4_4_;
          uVar25 = (undefined4)uStack_90;
          uVar20 = uStack_90._4_4_;
          uVar26 = (int)local_a8;
          uVar27 = local_a8._4_4_;
          uVar28 = (undefined4)uStack_a0;
          uVar29 = uStack_a0._4_4_;
        } while (uVar11 + 1 < uVar12);
      }
      iVar9 = FUN_1450bcc60();
      if ((iVar9 != 1) && (uVar12 != 0)) {
        uVar22 = (ulonglong)uVar12;
        puVar16 = puVar14;
        do {
          FUN_1450b93e0(param_1,*puVar16);
          puVar16 = puVar16 + 1;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      goto LAB_1450bc07a;
    }
    local_108 = local_118;
    uStack_100 = uStack_110;
    local_f8 = uVar5;
    uStack_f0 = uVar6;
    local_e8 = uVar7;
    uStack_e0 = uVar8;
    local_d8 = local_88;
    local_c8 = puVar14;
    uStack_c0 = uStack_b0;
    iVar9 = FUN_1450b9270(puVar17,&local_108,(ulonglong)puVar14 & 0xffffffff);
    if ((iVar9 == 1) && (iVar9 = FUN_1450bcc60(param_1), iVar9 != 1)) {
      FUN_1450b93e0(param_1,(ulonglong)puVar14 & 0xffffffff);
    }
    goto LAB_1450bc08e;
  case 3:
    local_b8 = *(undefined4 **)*param_2;
    uStack_b0 = *(ulonglong *)(*param_2 + 8);
    puVar14 = *(undefined4 **)(param_2[3] + 8);
    puVar18 = (undefined4 *)0x0;
    uVar12 = 0;
    pvVar4 = *(void **)param_2[4];
    uStack_30 = *(undefined8 *)(param_2[4] + 8);
    local_a8 = *(undefined8 *)param_2[2];
    uStack_a0 = *(undefined8 *)(param_2[2] + 8);
    local_98 = *(undefined8 *)param_2[3];
    uStack_90 = *(undefined8 *)(param_2[3] + 8);
    uVar11 = (uint)puVar14;
    local_38 = pvVar4;
    if (uVar11 == 1) {
      uVar12 = (uint)pvVar4;
      iVar9 = FUN_1450b93e0(param_1,(ulonglong)pvVar4 & 0xffffffff);
    }
    else {
      puVar16 = puVar18;
      if (uVar11 != 0) {
        do {
          iVar9 = FUN_1450b93e0(param_1,*(undefined4 *)((longlong)pvVar4 + (longlong)puVar16 * 4));
          if (iVar9 != 1) break;
          uVar13 = (int)puVar16 + 1;
          puVar16 = (undefined4 *)(ulonglong)uVar13;
        } while (uVar13 < uVar11);
      }
      AK::MemoryMgr::Free(0,pvVar4);
    }
    puVar16 = (undefined4 *)0x0;
    switch(local_b8._0_4_) {
    case 0:
    case 1:
    case 6:
    case 7:
      puVar16 = (undefined4 *)(uStack_b0 & 0xffffffff);
      break;
    case 2:
    case 3:
      puVar16 = puVar18;
      if (uVar11 == 1) {
        puVar16 = (undefined4 *)(ulonglong)uVar12;
      }
      break;
    case 9:
    case 10:
      puVar16 = (undefined4 *)((ulonglong)puVar14 & 0xffffffff);
    }
    if ((int)local_98 == 2) {
      puVar18 = puVar14;
    }
    goto LAB_1450bc1c9;
  case 4:
    local_108 = *(undefined8 *)*param_2;
    uStack_100 = *(ulonglong *)(*param_2 + 8);
    local_f8 = *(longlong *)param_2[1];
    uStack_f0 = *(undefined8 *)(param_2[1] + 8);
    local_e8 = *(undefined8 *)param_2[2];
    uStack_e0 = *(undefined8 *)(param_2[2] + 8);
    local_d8 = param_2[3];
    local_c8 = *(undefined4 **)param_2[4];
    uStack_c0 = *(ulonglong *)(param_2[4] + 8);
    iVar9 = FUN_1450b9cf0(param_1,&local_108);
    break;
  case 5:
    local_108 = *(undefined8 *)*param_2;
    uStack_100 = *(ulonglong *)(*param_2 + 8);
    local_f8 = *(longlong *)param_2[1];
    uStack_f0 = *(undefined8 *)(param_2[1] + 8);
    local_e8 = *(undefined8 *)param_2[2];
    uStack_e0 = *(undefined8 *)(param_2[2] + 8);
    local_d8 = param_2[3];
    local_c8 = *(undefined4 **)param_2[4];
    uStack_c0 = *(ulonglong *)(param_2[4] + 8);
    FUN_1450b6b00();
    FUN_1450bc560(param_1,&local_108,1);
    break;
  case 6:
    local_48 = *(undefined8 *)param_2[3];
    local_d8 = param_2[3];
    uStack_40 = *(ulonglong *)(param_2[3] + 8);
    local_78 = *(undefined8 *)*param_2;
    uStack_70 = *(undefined8 *)(*param_2 + 8);
    local_f8 = *(longlong *)param_2[1];
    uStack_f0 = *(undefined8 *)(param_2[1] + 8);
    local_58 = *(undefined8 *)param_2[2];
    uStack_50 = *(undefined8 *)(param_2[2] + 8);
    local_38 = *(void **)param_2[4];
    uStack_30 = *(undefined8 *)(param_2[4] + 8);
    local_108 = *(undefined8 *)*param_2;
    uStack_100 = *(ulonglong *)(*param_2 + 8);
    local_e8 = *(undefined8 *)param_2[2];
    uStack_e0 = *(undefined8 *)(param_2[2] + 8);
    local_c8 = *(undefined4 **)param_2[4];
    uStack_c0 = *(ulonglong *)(param_2[4] + 8);
    local_68 = local_f8;
    uStack_60 = uStack_f0;
    iVar9 = FUN_1450b9ed0(param_1,&local_108,(*(int *)(param_2[3] + 8) != 1) + '\x01',1,
                          CONCAT31(uVar30,(char)*(undefined4 *)(param_2[3] + 0xc)));
    FUN_1450bc560(param_1,&local_78,iVar9);
    break;
  case 7:
    local_68 = *(undefined8 *)param_2[1];
    uStack_60 = *(undefined8 *)(param_2[1] + 8);
    local_58 = *(undefined8 *)param_2[2];
    uStack_50 = *(undefined8 *)(param_2[2] + 8);
    uStack_110 = 0;
    local_78 = *(undefined8 *)*param_2;
    uStack_70 = *(undefined8 *)(*param_2 + 8);
    local_48 = *(undefined8 *)param_2[3];
    uStack_40 = *(ulonglong *)(param_2[3] + 8);
    local_38 = *(void **)param_2[4];
    uStack_30 = *(undefined8 *)(param_2[4] + 8);
    local_118 = CONCAT44(*(undefined4 *)(*param_2 + 4),(int)*(undefined8 *)(*param_2 + 8));
    lVar10 = FUN_145391180(param_1 + 0x15,&local_118);
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x70) != 0) {
        *(int *)(lVar10 + 0x70) = *(int *)(lVar10 + 0x70) + -1;
      }
      FUN_1450b64a0(lVar10,0);
    }
    FUN_1450bc560(param_1,&local_78,1);
    break;
  case 8:
    local_108 = *(undefined8 *)*param_2;
    uStack_100 = *(ulonglong *)(*param_2 + 8);
    local_f8 = *(longlong *)param_2[1];
    uStack_f0 = *(undefined8 *)(param_2[1] + 8);
    local_e8 = *(undefined8 *)param_2[2];
    uStack_e0 = *(undefined8 *)(param_2[2] + 8);
    local_d8 = param_2[3];
    local_c8 = *(undefined4 **)param_2[4];
    uStack_c0 = *(ulonglong *)(param_2[4] + 8);
    iVar9 = FUN_1450b9080(param_1,&local_108);
    break;
  case 9:
  case 0xb:
    break;
  case 10:
    local_78 = *(undefined8 *)*param_2;
    uStack_70 = *(undefined8 *)(*param_2 + 8);
    local_68 = *(undefined8 *)param_2[1];
    uStack_60 = *(undefined8 *)(param_2[1] + 8);
    local_58 = *(undefined8 *)param_2[2];
    uStack_50 = *(undefined8 *)(param_2[2] + 8);
    local_b8 = *(undefined4 **)param_2[3];
    uStack_b0 = *(ulonglong *)(param_2[3] + 8);
    local_38 = *(void **)param_2[4];
    uStack_30 = *(undefined8 *)(param_2[4] + 8);
    local_48 = local_b8;
    uStack_40 = uStack_b0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
    if (*(uint *)(param_1 + 0x13) != 0) {
      for (puVar19 = *(undefined8 **)
                      (param_1[0x12] +
                      ((uStack_b0 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x13)) * 8);
          puVar19 != (undefined8 *)0x0; puVar19 = (undefined8 *)*puVar19) {
        if (*(int *)(puVar19 + 1) == (int)uStack_b0) {
          puVar19 = puVar19 + 2;
          goto LAB_1450bc442;
        }
      }
      puVar19 = (undefined8 *)0x0;
LAB_1450bc442:
      if (puVar19 != (undefined8 *)0x0) {
        piVar3 = (int *)(puVar19 + 2);
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          FUN_1450b6060(puVar19);
        }
        if (*(int *)(puVar19 + 2) == 0) {
          FUN_1450bc720(param_1 + 0x12,*(undefined4 *)((longlong)puVar19 + 0x14));
        }
        else {
          iVar9 = 2;
        }
      }
    }
    FUN_1450bc560(param_1,&local_78,iVar9);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
    break;
  default:
    goto switchD_1450bbcfb_default;
  }
  goto switchD_1450bbcfb_caseD_9;
joined_r0x0001450bc0be:
  while (uVar11 != 0) {
    puVar2 = puVar21 + -1;
    puVar21 = puVar21 + -1;
    FUN_1450b93e0(param_1,*puVar2);
    uVar11 = (int)puVar16 - 1;
    puVar16 = (undefined4 *)(ulonglong)uVar11;
  }
LAB_1450bc07a:
  AK::MemoryMgr::Free(0,puVar14);
  puVar14 = puVar18;
LAB_1450bc08e:
  puVar16 = (undefined4 *)0x0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  switch((undefined4)local_118) {
  case 0:
  case 1:
  case 6:
  case 7:
    if (local_88._0_4_ == 2) {
      puVar18 = puVar17;
    }
    puVar16 = (undefined4 *)(uStack_110 & 0xffffffff);
    break;
  case 2:
  case 3:
    puVar16 = puVar18;
    if (uVar12 == 1) {
      puVar16 = (undefined4 *)((ulonglong)puVar14 & 0xffffffff);
    }
    if (local_88._0_4_ == 2) {
      puVar18 = puVar17;
    }
    break;
  case 9:
  case 10:
    puVar16 = (undefined4 *)(ulonglong)uVar12;
  default:
    if (local_88._0_4_ == 2) {
      puVar18 = puVar17;
    }
  }
LAB_1450bc1c9:
  *(int *)((longlong)param_1 + 0xec) = iVar9;
  FUN_145390f30(param_1 + 0x1e,local_a8,puVar16,puVar18,iVar9,uStack_a0);
switchD_1450bbcfb_caseD_9:
switchD_1450bbcfb_default:
  return iVar9;
}



// FUNCTION 1450bc550 FUN_1450bc550 body=3 status=ok
// SIG undefined FUN_1450bc550(void)

void FUN_1450bc550(void)

{
  return;
}



// FUNCTION 1450bc560 FUN_1450bc560 body=129 status=ok
// SIG undefined FUN_1450bc560(void)

void FUN_1450bc560(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  switch(*param_2) {
  case 0:
  case 1:
  case 6:
  case 7:
    uVar3 = param_2[2];
    break;
  case 2:
  case 3:
    if (param_2[0xe] == 1) {
      uVar3 = param_2[0x10];
    }
    break;
  case 9:
  case 10:
    uVar3 = param_2[0xe];
  }
  if (param_2[0xc] == 2) {
    uVar4 = *(undefined8 *)(param_2 + 0xe);
  }
  uVar1 = *(undefined8 *)(param_2 + 10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xec) = param_3;
  FUN_145390f30(param_1 + 0xf0,uVar2,uVar3,uVar4,param_3,uVar1);
  return;
}



// FUNCTION 1450bc620 FUN_1450bc620 body=243 status=ok
// SIG undefined FUN_1450bc620(void)

undefined8 * FUN_1450bc620(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  if ((*(uint *)(param_1 + 1) == 0) ||
     (0.9 < (float)*(uint *)(param_1 + 2) / (float)*(uint *)(param_1 + 1))) {
    FUN_1450bc7e0();
  }
  if (*(uint *)(param_1 + 1) == 0) {
    return (undefined8 *)0x0;
  }
  uVar2 = (ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1);
  puVar3 = *(undefined8 **)(*param_1 + uVar2 * 8);
  do {
    if (puVar3 == (undefined8 *)0x0) {
LAB_1450bc698:
      puVar3 = AK::MemoryMgr::Malloc(0,0x28);
      if (puVar3 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *puVar3 = *(undefined8 *)(*param_1 + uVar2 * 8);
      puVar1 = puVar3 + 2;
      *(uint *)(puVar3 + 1) = param_2;
      if (puVar1 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar3 + 4) = 1;
        *puVar1 = 0;
        puVar3[3] = 0;
        *(undefined4 *)((longlong)puVar3 + 0x24) = 0xffffffff;
      }
      *(undefined8 **)(*param_1 + uVar2 * 8) = puVar3;
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      return puVar1;
    }
    if (*(uint *)(puVar3 + 1) == param_2) {
      if (puVar3 + 2 != (undefined8 *)0x0) {
        return puVar3 + 2;
      }
      goto LAB_1450bc698;
    }
    puVar3 = (undefined8 *)*puVar3;
  } while( true );
}



// FUNCTION 1450bc720 FUN_1450bc720 body=178 status=ok
// SIG undefined FUN_1450bc720(void)

void FUN_1450bc720(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(uint *)(param_1 + 1) != 0) {
    uVar2 = (ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1);
    plVar4 = *(longlong **)(*param_1 + uVar2 * 8);
    plVar3 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      while (*(uint *)(plVar4 + 1) != param_2) {
        plVar1 = (longlong *)*plVar4;
        plVar3 = plVar4;
        plVar4 = plVar1;
        if (plVar1 == (longlong *)0x0) {
          return;
        }
      }
      if (plVar3 == (longlong *)0x0) {
        *(longlong *)(*param_1 + uVar2 * 8) = *plVar4;
      }
      else {
        *plVar3 = *plVar4;
      }
      FUN_1450b6060();
      if ((void *)plVar4[2] != (void *)0x0) {
        *(undefined4 *)(plVar4 + 3) = 0;
        AK::MemoryMgr::Free(0,(void *)plVar4[2]);
        plVar4[2] = 0;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = 0;
      }
      AK::MemoryMgr::Free(0,plVar4);
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    }
  }
  return;
}



// FUNCTION 1450bc7e0 FUN_1450bc7e0 body=378 status=ok
// SIG undefined FUN_1450bc7e0(void)

undefined8 FUN_1450bc7e0(longlong *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  
  uVar9 = 0;
  puVar12 = &DAT_149c26a70;
  do {
    uVar1 = *puVar12;
    uVar10 = (ulonglong)uVar1;
    if (param_2 < uVar1) {
      if (uVar1 == 0) {
        return 2;
      }
      uVar9 = *(uint *)(param_1 + 1);
      uVar14 = (ulonglong)uVar9;
      puVar3 = (undefined8 *)*param_1;
      uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
      param_1[1] = 0;
      *param_1 = 0;
      pvVar7 = AK::MemoryMgr::Malloc(0,uVar10 * 8);
      pvVar4 = (void *)*param_1;
      if (pvVar7 == (void *)0x0) {
        if (pvVar4 != (void *)0x0) {
          *(undefined4 *)(param_1 + 1) = 0;
          AK::MemoryMgr::Free(0,pvVar4);
        }
        *param_1 = (longlong)puVar3;
        uVar8 = 2;
        *(uint *)(param_1 + 1) = uVar9;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
      }
      else {
        if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar7)) {
          AK::MemoryMgr::Free(0,pvVar4);
        }
        *param_1 = (longlong)pvVar7;
        *(uint *)((longlong)param_1 + 0xc) = uVar1;
        uVar11 = uVar10;
        do {
          uVar1 = *(uint *)(param_1 + 1);
          if (uVar1 < uVar11) {
            *(uint *)(param_1 + 1) = uVar1 + 1;
            puVar13 = (undefined8 *)(*param_1 + (ulonglong)uVar1 * 8);
            if (puVar13 != (undefined8 *)0x0) {
              *puVar13 = 0;
              uVar11 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
            }
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        puVar13 = puVar3;
        if (uVar9 != 0) {
          do {
            puVar6 = (undefined8 *)*puVar13;
            while (puVar6 != (undefined8 *)0x0) {
              uVar9 = *(uint *)(param_1 + 1);
              puVar5 = (undefined8 *)*puVar6;
              *puVar6 = *(undefined8 *)
                         (*param_1 + ((ulonglong)*(uint *)(puVar6 + 1) % (ulonglong)uVar9) * 8);
              *(undefined8 **)(*param_1 + ((ulonglong)*(uint *)(puVar6 + 1) % (ulonglong)uVar9) * 8)
                   = puVar6;
              puVar6 = puVar5;
            }
            uVar14 = uVar14 - 1;
            puVar13 = puVar13 + 1;
          } while (uVar14 != 0);
        }
        if (puVar3 != (undefined8 *)0x0) {
          AK::MemoryMgr::Free(0,puVar3);
        }
        uVar8 = 1;
      }
      return uVar8;
    }
    uVar9 = uVar9 + 1;
    puVar12 = puVar12 + 1;
  } while (uVar9 < 0x1b);
  return 2;
}



// FUNCTION 1450bc970 FUN_1450bc970 body=225 status=ok
// SIG undefined FUN_1450bc970(void)

int FUN_1450bc970(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  int local_18 [2];
  HANDLE local_10;
  
  local_10 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  FUN_145390f10(param_1 + 0xf0,local_18);
  FUN_1450b65b0(param_2);
  *(undefined1 *)(param_2 + 0x30) = 1;
  *(undefined1 **)(param_2 + 0x40) = &LAB_144d41550;
  *(int **)(param_2 + 0x48) = local_18;
  uVar1 = FUN_145087fb0();
  lVar3 = FUN_145080f50(DAT_14c790fd8,0x1a,uVar1);
  *(longlong *)(lVar3 + 4) = param_2;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  iVar2 = FUN_145081150(DAT_14c790fd8,0,0);
  if (iVar2 != 1) {
    if (local_10 != (HANDLE)0x0) {
      CloseHandle(local_10);
    }
    return iVar2;
  }
  WaitForSingleObject(local_10,0xffffffff);
  if (local_10 != (HANDLE)0x0) {
    CloseHandle(local_10);
  }
  return local_18[0];
}



// FUNCTION 1450bca60 FUN_1450bca60 body=120 status=ok
// SIG undefined FUN_1450bca60(void)

void FUN_1450bca60(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  longlong lVar2;
  
  FUN_1450b65b0(param_2);
  *(undefined8 *)(param_2 + 0x40) = param_3;
  *(undefined8 *)(param_2 + 0x48) = param_4;
  *(undefined1 *)(param_2 + 0x30) = 1;
  uVar1 = FUN_145087fb0();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0x1a,uVar1);
  *(longlong *)(lVar2 + 4) = param_2;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  FUN_145081150(DAT_14c790fd8,0,0);
  return;
}



// FUNCTION 1450bcae0 FUN_1450bcae0 body=378 status=ok
// SIG undefined FUN_1450bcae0(void)

undefined8 FUN_1450bcae0(longlong *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  
  uVar9 = 0;
  puVar12 = &DAT_149c26a70;
  do {
    uVar1 = *puVar12;
    uVar10 = (ulonglong)uVar1;
    if (param_2 < uVar1) {
      if (uVar1 == 0) {
        return 2;
      }
      uVar9 = *(uint *)(param_1 + 1);
      uVar14 = (ulonglong)uVar9;
      puVar3 = (undefined8 *)*param_1;
      uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
      param_1[1] = 0;
      *param_1 = 0;
      pvVar7 = AK::MemoryMgr::Malloc(0,uVar10 * 8);
      pvVar4 = (void *)*param_1;
      if (pvVar7 == (void *)0x0) {
        if (pvVar4 != (void *)0x0) {
          *(undefined4 *)(param_1 + 1) = 0;
          AK::MemoryMgr::Free(0,pvVar4);
        }
        *param_1 = (longlong)puVar3;
        uVar8 = 2;
        *(uint *)(param_1 + 1) = uVar9;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
      }
      else {
        if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar7)) {
          AK::MemoryMgr::Free(0,pvVar4);
        }
        *param_1 = (longlong)pvVar7;
        *(uint *)((longlong)param_1 + 0xc) = uVar1;
        uVar11 = uVar10;
        do {
          uVar1 = *(uint *)(param_1 + 1);
          if (uVar1 < uVar11) {
            *(uint *)(param_1 + 1) = uVar1 + 1;
            puVar13 = (undefined8 *)(*param_1 + (ulonglong)uVar1 * 8);
            if (puVar13 != (undefined8 *)0x0) {
              *puVar13 = 0;
              uVar11 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
            }
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        puVar13 = puVar3;
        if (uVar9 != 0) {
          do {
            puVar6 = (undefined8 *)*puVar13;
            while (puVar6 != (undefined8 *)0x0) {
              uVar9 = *(uint *)(param_1 + 1);
              puVar5 = (undefined8 *)*puVar6;
              *puVar6 = *(undefined8 *)
                         (*param_1 + ((ulonglong)*(uint *)(puVar6 + 1) % (ulonglong)uVar9) * 8);
              *(undefined8 **)(*param_1 + ((ulonglong)*(uint *)(puVar6 + 1) % (ulonglong)uVar9) * 8)
                   = puVar6;
              puVar6 = puVar5;
            }
            uVar14 = uVar14 - 1;
            puVar13 = puVar13 + 1;
          } while (uVar14 != 0);
        }
        if (puVar3 != (undefined8 *)0x0) {
          AK::MemoryMgr::Free(0,puVar3);
        }
        uVar8 = 1;
      }
      return uVar8;
    }
    uVar9 = uVar9 + 1;
    puVar12 = puVar12 + 1;
  } while (uVar9 < 0x1b);
  return 2;
}



// FUNCTION 1450bcc60 FUN_1450bcc60 body=186 status=ok
// SIG undefined FUN_1450bcc60(void)

ulonglong FUN_1450bcc60(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 0xd8);
  if (puVar3 == puVar3 + (ulonglong)*(uint *)(param_1 + 0xe0) * 8) {
    return 1;
  }
  do {
    uVar2 = FUN_1450b7e30(param_1,puVar3);
    if ((int)uVar2 != 1) {
      uVar1 = uVar2;
      for (puVar4 = *(undefined4 **)(param_1 + 0xd8); puVar4 != puVar3; puVar4 = puVar4 + 8) {
        FUN_1450b80e0(param_1,*puVar4);
        uVar1 = uVar2 & 0xffffffff;
      }
      return uVar1;
    }
    puVar3 = puVar3 + 8;
  } while (puVar3 != (undefined4 *)
                     ((ulonglong)*(uint *)(param_1 + 0xe0) * 0x20 + *(longlong *)(param_1 + 0xd8)));
  return uVar2 & 0xffffffff;
}



// FUNCTION 1450bcd20 FUN_1450bcd20 body=200 status=ok
// SIG undefined FUN_1450bcd20(void)

undefined8 FUN_1450bcd20(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  longlong lVar8;
  __uint64 _Var9;
  ulonglong uVar10;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  iVar5 = (uVar3 >> 1) + uVar3;
  if (uVar3 == 0) {
    iVar5 = 1;
  }
  _Var9 = (ulonglong)(iVar5 + uVar3) << 5;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar7 = AK::MemoryMgr::Malloc(0,_Var9);
    if (pvVar7 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar7)) {
        if (uVar10 != 0) {
          lVar8 = 0;
          do {
            lVar4 = *param_1;
            puVar1 = (undefined8 *)(lVar8 + lVar4);
            uVar6 = puVar1[1];
            *(undefined8 *)(lVar8 + (longlong)pvVar7) = *puVar1;
            ((undefined8 *)(lVar8 + (longlong)pvVar7))[1] = uVar6;
            puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar4);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)(lVar8 + 0x10 + (longlong)pvVar7);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            uVar10 = uVar10 - 1;
            lVar8 = lVar8 + 0x20;
          } while (uVar10 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450bcdcb;
    }
  }
  else {
    pvVar7 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var9);
    if (pvVar7 != (void *)0x0) {
LAB_1450bcdcb:
      *param_1 = (longlong)pvVar7;
      *(uint *)((longlong)param_1 + 0xc) = iVar5 + uVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450bcdf0 FUN_1450bcdf0 body=330 status=ok
// SIG undefined FUN_1450bcdf0(void)

longlong FUN_1450bcdf0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  void *_Src;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  uVar3 = *(uint *)(param_1 + 1);
  iVar9 = 0;
  if (uVar3 != 0) {
    do {
      iVar5 = (uVar3 >> 1) + iVar9;
      lVar8 = (longlong)iVar5 * 0x20;
      uVar6 = (uint)((ulonglong)*(undefined8 *)(lVar8 + *param_1) >> 0x20);
      if (uVar6 == *(uint *)(param_2 + 4)) {
        *param_3 = 1;
        lVar4 = *param_1;
        lVar8 = lVar8 + lVar4;
        goto LAB_1450bce5f;
      }
      if (uVar6 < *(uint *)(param_2 + 4)) {
        iVar9 = iVar5 + 1;
        uVar3 = uVar3 - 1;
      }
      uVar3 = uVar3 >> 1;
    } while (uVar3 != 0);
  }
  *param_3 = 0;
  lVar4 = *param_1;
  lVar8 = (longlong)iVar9 * 0x20 + lVar4;
LAB_1450bce5f:
  puVar1 = (uint *)(param_1 + 1);
  uVar3 = *puVar1;
  if (lVar8 != 0) {
    uVar7 = lVar8 - lVar4 >> 5;
    if (((uVar3 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar2 = FUN_1450bcd20(param_1), cVar2 != '\0')) &&
       (uVar3 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar3 = (uint)uVar7;
      lVar8 = (uVar7 & 0xffffffff) * 0x20;
      _Src = (void *)(*param_1 + lVar8);
      if (uVar3 < *(uint *)(param_1 + 1)) {
        memmove((void *)((longlong)_Src + 0x20),_Src,
                (ulonglong)((*(uint *)(param_1 + 1) - uVar3) * 0x20));
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      lVar8 = *param_1 + lVar8;
    }
    else {
      lVar8 = 0;
    }
    return lVar8;
  }
  if (((uVar3 < *(uint *)((longlong)param_1 + 0xc)) ||
      (cVar2 = FUN_1450bcd20(param_1), cVar2 != '\0')) &&
     (uVar3 < *(uint *)((longlong)param_1 + 0xc))) {
    uVar3 = *puVar1;
    *puVar1 = uVar3 + 1;
    return (ulonglong)uVar3 * 0x20 + *param_1;
  }
  return 0;
}



// FUNCTION 1450bcf40 FUN_1450bcf40 body=177 status=ok
// SIG undefined FUN_1450bcf40(void)

undefined8 * FUN_1450bcf40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c26ae0;
  FUN_145390f00();
  if ((void *)param_1[0x18] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x19) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x18]);
    param_1[0x18] = 0;
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  }
  if ((void *)param_1[0x12] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x12]);
    param_1[0x12] = 0;
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  FUN_1450b5080(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 1450bd000 FUN_1450bd000 body=44 status=ok
// SIG undefined FUN_1450bd000(void)

int FUN_1450bd000(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x198);
  if (*piVar1 == -1) {
    do {
      param_1 = *(longlong *)(param_1 + 0x80);
      if (param_1 == 0) goto LAB_1450bd029;
    } while (*(int *)(param_1 + 0x198) == -1);
    *piVar1 = *(int *)(param_1 + 0x198);
  }
LAB_1450bd029:
  return *piVar1;
}



// FUNCTION 1450bd030 FUN_1450bd030 body=115 status=ok
// SIG undefined FUN_1450bd030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450bd030(uint param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c79c358) {
    FUN_144b3d300(&DAT_14c79c358);
    if (DAT_14c79c358 == -1) {
      _DAT_14c79c350 = "a newer";
      if (param_1 < 0x91) {
        _DAT_14c79c350 = "an older";
      }
      _Init_thread_footer(&DAT_14c79c358);
    }
  }
  return;
}



// FUNCTION 1450bd0b0 FUN_1450bd0b0 body=701 status=ok
// SIG undefined FUN_1450bd0b0(void)

int FUN_1450bd0b0(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  char local_58 [4];
  undefined4 local_54;
  uint *local_48;
  
  local_54 = *(undefined4 *)(param_2 + 1);
  iVar8 = 1;
  local_48 = (uint *)FUN_1450b58b0(param_1 + 8);
  if (local_48 == (uint *)0x0) {
    return 0x38;
  }
  uVar4 = *local_48;
  do {
    while (iVar5 = *param_4, iVar5 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
      if (*param_4 < 0) goto LAB_1450bd111;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    }
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + 1;
    }
    UNLOCK();
  } while (iVar5 != iVar3);
LAB_1450bd111:
  if (param_4[0x12] == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    for (plVar9 = *(longlong **)
                   (*(longlong *)(param_4 + 0x10) +
                   ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
        plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
      if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450bd140;
    }
    plVar9 = (longlong *)0x0;
LAB_1450bd140:
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar5 = *param_4;
  while (-1 < iVar5) {
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + -1;
    }
    UNLOCK();
    if (iVar5 == iVar3) {
      if ((iVar5 + -1 == 0) && (0 < param_4[0xc])) {
        SetEvent(*(HANDLE *)(param_4 + 0xe));
      }
      goto LAB_1450bd189;
    }
    iVar5 = *param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
LAB_1450bd189:
  if (plVar9 == (longlong *)0x0) {
    FUN_1450719c0(local_res10);
    FUN_145074e40(param_4);
    bVar6 = false;
    local_58[0] = '\0';
    plVar9 = (longlong *)FUN_1450db5d0();
    cVar7 = '\0';
    if (plVar9 == (longlong *)0x0) {
LAB_1450bd22d:
      if (cVar7 != '\0') {
        if (param_4[0x12] == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          for (plVar9 = *(longlong **)
                         (*(longlong *)(param_4 + 0x10) +
                         ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
              plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
            if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450bd260;
          }
          plVar9 = (longlong *)0x0;
LAB_1450bd260:
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
            UNLOCK();
          }
        }
      }
    }
    else {
      *(uint *)(plVar9 + 2) = uVar4;
      cVar7 = FUN_144d41e40(param_4 + 0x10,plVar9,local_58);
      if (cVar7 == '\0') {
        *(undefined4 *)(plVar9 + 2) = 0;
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0x14);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        plVar9 = (longlong *)0x0;
        cVar7 = local_58[0];
        goto LAB_1450bd22d;
      }
      bVar6 = true;
    }
    LOCK();
    *param_4 = *param_4 + 1;
    UNLOCK();
    if (*param_4 == 0) {
      param_4[1] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    if (plVar9 == (longlong *)0x0) {
      FUN_1450719f0(local_res10);
      FUN_1450b59a0(param_1 + 8);
      return 0x34;
    }
    if ((bVar6) && (iVar8 = FUN_1450db620(plVar9,local_48,local_54), iVar8 != 1)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0x14);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        FUN_1450719f0(local_res10);
        goto LAB_1450bd32d;
      }
    }
    FUN_1450719f0(local_res10);
    if (iVar8 != 1) goto LAB_1450bd32d;
  }
  uVar4 = *(uint *)(param_3 + 0x58);
  if (uVar4 < *(uint *)(param_3 + 0x5c)) {
    *(uint *)(param_3 + 0x58) = uVar4 + 1;
    puVar2 = (undefined8 *)(*(longlong *)(param_3 + 0x50) + (ulonglong)uVar4 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = plVar9;
    }
  }
LAB_1450bd32d:
  FUN_1450b59a0(param_1 + 8);
  if (iVar8 != 0x5b) {
    return iVar8;
  }
  return 1;
}



// FUNCTION 1450bd370 FUN_1450bd370 body=772 status=ok
// SIG undefined FUN_1450bd370(void)

int FUN_1450bd370(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  char local_res10 [8];
  ulonglong in_stack_ffffffffffffff98;
  undefined1 local_58 [4];
  undefined4 local_54;
  uint *local_48;
  
  local_54 = *(undefined4 *)(param_2 + 1);
  puVar9 = (uint *)FUN_1450b58b0(param_1 + 8);
  piVar2 = DAT_14c791060;
  if (puVar9 == (uint *)0x0) {
    return 0x38;
  }
  uVar5 = *puVar9;
  local_48 = puVar9;
  do {
    while (iVar8 = *piVar2, iVar8 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar2 + 2));
      if (*piVar2 < 0) goto LAB_1450bd3e4;
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar2 + 2));
    }
    LOCK();
    iVar4 = *piVar2;
    if (iVar8 == iVar4) {
      *piVar2 = iVar8 + 1;
    }
    UNLOCK();
  } while (iVar8 != iVar4);
LAB_1450bd3e4:
  lVar12 = 0;
  lVar11 = lVar12;
  if (piVar2[0x12] != 0) {
    for (lVar10 = *(longlong *)
                   (*(longlong *)(piVar2 + 0x10) +
                   ((ulonglong)uVar5 % (ulonglong)(uint)piVar2[0x12]) * 8);
        (lVar11 = lVar12, lVar10 != 0 && (lVar11 = lVar10, *(uint *)(lVar10 + 0x10) != uVar5));
        lVar10 = *(longlong *)(lVar10 + 8)) {
    }
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar8 = *piVar2;
  while (-1 < iVar8) {
    LOCK();
    iVar4 = *piVar2;
    if (iVar8 == iVar4) {
      *piVar2 = iVar8 + -1;
    }
    UNLOCK();
    if (iVar8 == iVar4) {
      if ((iVar8 + -1 == 0) && (0 < piVar2[0xc])) {
        SetEvent(*(HANDLE *)(piVar2 + 0xe));
      }
      goto LAB_1450bd45b;
    }
    iVar8 = *piVar2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar2 + 2));
LAB_1450bd45b:
  lVar10 = lVar11 + -0x10;
  if (lVar11 == 0) {
    lVar10 = lVar12;
  }
  if (lVar10 != 0) {
    iVar8 = FUN_1450c0060(param_1,lVar10,puVar9,local_54,param_3);
    goto LAB_1450bd5eb;
  }
  FUN_1450719c0(local_58);
  FUN_145074e40(piVar2);
  bVar6 = false;
  local_res10[0] = '\0';
  lVar10 = FUN_1453703d0();
  lVar11 = lVar10;
  cVar7 = '\0';
  if (lVar10 == 0) {
LAB_1450bd528:
    lVar10 = lVar11;
    if (cVar7 != '\0') {
      if (piVar2[0x12] != 0) {
        for (lVar11 = *(longlong *)
                       (*(longlong *)(piVar2 + 0x10) +
                       ((ulonglong)uVar5 % (ulonglong)(uint)piVar2[0x12]) * 8);
            (lVar10 = lVar12, lVar11 != 0 && (lVar10 = lVar11, *(uint *)(lVar11 + 0x10) != uVar5));
            lVar11 = *(longlong *)(lVar11 + 8)) {
        }
        if (lVar10 != 0) {
          LOCK();
          *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
          UNLOCK();
          lVar10 = lVar10 + -0x10;
          goto LAB_1450bd56a;
        }
      }
      lVar10 = 0;
    }
  }
  else {
    *(uint *)(lVar10 + 0x20) = uVar5;
    cVar7 = FUN_144d41e40(piVar2 + 0x10,lVar10 + 0x10,local_res10);
    if (cVar7 == '\0') {
      *(undefined4 *)(lVar10 + 0x20) = 0;
      LOCK();
      piVar1 = (int *)(lVar10 + 0x24);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar11 = lVar12;
      cVar7 = local_res10[0];
      if (iVar8 == 1) {
        (**(code **)(*(longlong *)(lVar10 + 0x10) + 0x18))(lVar10 + 0x10);
        cVar7 = local_res10[0];
      }
      goto LAB_1450bd528;
    }
    bVar6 = true;
  }
LAB_1450bd56a:
  LOCK();
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (*piVar2 == 0) {
    piVar2[1] = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar2 + 2));
  if (lVar10 == 0) {
    iVar8 = 0x34;
  }
  else if (bVar6) {
    iVar8 = FUN_145370810(lVar10,local_48,local_54,param_3,
                          in_stack_ffffffffffffff98 & 0xffffffffffffff00);
  }
  else {
    iVar8 = FUN_1450c0060(param_1,lVar10,local_48,local_54,param_3);
  }
  FUN_1450719f0(local_58);
LAB_1450bd5eb:
  if (iVar8 == 1) {
    uVar5 = *(uint *)(param_3 + 0x58);
    lVar11 = lVar10 + 0x10;
    if (lVar10 == 0) {
      lVar11 = lVar12;
    }
    if (uVar5 < *(uint *)(param_3 + 0x5c)) {
      *(uint *)(param_3 + 0x58) = uVar5 + 1;
      plVar3 = (longlong *)(*(longlong *)(param_3 + 0x50) + (ulonglong)uVar5 * 8);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = lVar11;
      }
    }
  }
  else {
    if (iVar8 == 0x5b) {
      iVar8 = 1;
    }
    if (lVar10 != 0) {
      LOCK();
      piVar2 = (int *)(lVar10 + 0x24);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*(longlong *)(lVar10 + 0x10) + 0x18))();
      }
    }
  }
  FUN_1450b59a0(param_1 + 8);
  return iVar8;
}



// FUNCTION 1450bd680 FUN_1450bd680 body=735 status=ok
// SIG undefined FUN_1450bd680(void)

int FUN_1450bd680(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  char local_res10 [8];
  longlong local_res18;
  undefined1 local_58 [4];
  undefined4 local_54;
  uint *local_48;
  
  local_54 = *(undefined4 *)(param_2 + 1);
  iVar10 = 1;
  local_res18 = param_3;
  local_48 = (uint *)FUN_1450b58b0(param_1 + 8);
  if (local_48 == (uint *)0x0) {
    return 0x38;
  }
  uVar4 = *local_48;
  do {
    while (iVar5 = *param_4, iVar5 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
      if (*param_4 < 0) goto LAB_1450bd6ff;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    }
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + 1;
    }
    UNLOCK();
  } while (iVar5 != iVar3);
LAB_1450bd6ff:
  lVar11 = 0;
  lVar9 = lVar11;
  if (param_4[0x12] != 0) {
    for (lVar8 = *(longlong *)
                  (*(longlong *)(param_4 + 0x10) +
                  ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
        (lVar9 = lVar11, lVar8 != 0 && (lVar9 = lVar8, *(uint *)(lVar8 + 0x10) != uVar4));
        lVar8 = *(longlong *)(lVar8 + 8)) {
    }
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar5 = *param_4;
  while (-1 < iVar5) {
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + -1;
    }
    UNLOCK();
    if (iVar5 == iVar3) {
      if ((iVar5 + -1 == 0) && (0 < param_4[0xc])) {
        SetEvent(*(HANDLE *)(param_4 + 0xe));
      }
      goto LAB_1450bd77a;
    }
    iVar5 = *param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
LAB_1450bd77a:
  lVar8 = lVar9 + -0x10;
  if (lVar9 == 0) {
    lVar8 = lVar11;
  }
  if (lVar8 == 0) {
    FUN_1450719c0(local_58);
    FUN_145074e40(param_4);
    local_res10[0] = '\0';
    bVar6 = false;
    lVar8 = FUN_1450c27f0(1);
    lVar9 = lVar8;
    cVar7 = '\0';
    if (lVar8 == 0) {
LAB_1450bd82a:
      lVar8 = lVar9;
      if (cVar7 != '\0') {
        if (param_4[0x12] != 0) {
          for (lVar9 = *(longlong *)
                        (*(longlong *)(param_4 + 0x10) +
                        ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
              (lVar8 = lVar11, lVar9 != 0 && (lVar8 = lVar9, *(uint *)(lVar9 + 0x10) != uVar4));
              lVar9 = *(longlong *)(lVar9 + 8)) {
          }
          if (lVar8 != 0) {
            LOCK();
            *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
            UNLOCK();
            lVar8 = lVar8 + -0x10;
            goto LAB_1450bd873;
          }
        }
        lVar8 = 0;
      }
    }
    else {
      *(uint *)(lVar8 + 0x20) = uVar4;
      cVar7 = FUN_144d41e40(param_4 + 0x10,lVar8 + 0x10,local_res10);
      if (cVar7 == '\0') {
        *(undefined4 *)(lVar8 + 0x20) = 0;
        LOCK();
        piVar1 = (int *)(lVar8 + 0x24);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        lVar9 = lVar11;
        cVar7 = local_res10[0];
        if (iVar5 == 1) {
          (**(code **)(*(longlong *)(lVar8 + 0x10) + 0x18))(lVar8 + 0x10);
          cVar7 = local_res10[0];
        }
        goto LAB_1450bd82a;
      }
      bVar6 = true;
    }
LAB_1450bd873:
    LOCK();
    *param_4 = *param_4 + 1;
    UNLOCK();
    if (*param_4 == 0) {
      param_4[1] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    if (lVar8 == 0) {
      iVar10 = 0x34;
    }
    else if ((bVar6) && (iVar10 = FUN_1450c3480(lVar8,local_48,local_54), iVar10 != 1)) {
      LOCK();
      piVar1 = (int *)(lVar8 + 0x24);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*(longlong *)(lVar8 + 0x10) + 0x18))();
      }
    }
    FUN_1450719f0(local_58);
    param_3 = local_res18;
    if (iVar10 == 1) goto LAB_1450bd8e6;
LAB_1450bd941:
    FUN_1450b59a0(param_1 + 8);
    if (iVar10 == 0x5b) {
      iVar10 = 1;
    }
  }
  else {
LAB_1450bd8e6:
    uVar4 = *(uint *)(param_3 + 0x58);
    lVar9 = lVar8 + 0x10;
    if (lVar8 == 0) {
      lVar9 = lVar11;
    }
    if (uVar4 < *(uint *)(param_3 + 0x5c)) {
      *(uint *)(param_3 + 0x58) = uVar4 + 1;
      plVar2 = (longlong *)(*(longlong *)(param_3 + 0x50) + (ulonglong)uVar4 * 8);
      if (plVar2 == (longlong *)0x0) goto LAB_1450bd941;
      *plVar2 = lVar9;
    }
    FUN_1450b59a0(param_1 + 8);
  }
  return iVar10;
}



// FUNCTION 1450bd960 FUN_1450bd960 body=725 status=ok
// SIG undefined FUN_1450bd960(void)

int FUN_1450bd960(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  char local_res10 [8];
  longlong local_res18;
  undefined1 local_58 [4];
  undefined4 local_54;
  uint *local_48;
  
  local_54 = *(undefined4 *)(param_2 + 1);
  iVar10 = 1;
  local_res18 = param_3;
  local_48 = (uint *)FUN_1450b58b0(param_1 + 8);
  if (local_48 == (uint *)0x0) {
    return 0x38;
  }
  uVar4 = *local_48;
  do {
    while (iVar5 = *param_4, iVar5 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
      if (*param_4 < 0) goto LAB_1450bd9df;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    }
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + 1;
    }
    UNLOCK();
  } while (iVar5 != iVar3);
LAB_1450bd9df:
  lVar11 = 0;
  lVar9 = lVar11;
  if (param_4[0x12] != 0) {
    for (lVar8 = *(longlong *)
                  (*(longlong *)(param_4 + 0x10) +
                  ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
        (lVar9 = lVar11, lVar8 != 0 && (lVar9 = lVar8, *(uint *)(lVar8 + 0x10) != uVar4));
        lVar8 = *(longlong *)(lVar8 + 8)) {
    }
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar5 = *param_4;
  while (-1 < iVar5) {
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + -1;
    }
    UNLOCK();
    if (iVar5 == iVar3) {
      if ((iVar5 + -1 == 0) && (0 < param_4[0xc])) {
        SetEvent(*(HANDLE *)(param_4 + 0xe));
      }
      goto LAB_1450bda5a;
    }
    iVar5 = *param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
LAB_1450bda5a:
  lVar8 = lVar9 + -0x10;
  if (lVar9 == 0) {
    lVar8 = lVar11;
  }
  if (lVar8 == 0) {
    FUN_1450719c0(local_58);
    FUN_145074e40(param_4);
    bVar6 = false;
    local_res10[0] = '\0';
    lVar8 = FUN_145392700();
    lVar9 = lVar8;
    cVar7 = '\0';
    if (lVar8 == 0) {
LAB_1450bdb07:
      lVar8 = lVar9;
      if (cVar7 != '\0') {
        if (param_4[0x12] != 0) {
          for (lVar9 = *(longlong *)
                        (*(longlong *)(param_4 + 0x10) +
                        ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
              (lVar8 = lVar11, lVar9 != 0 && (lVar8 = lVar9, *(uint *)(lVar9 + 0x10) != uVar4));
              lVar9 = *(longlong *)(lVar9 + 8)) {
          }
          if (lVar8 != 0) {
            LOCK();
            *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
            UNLOCK();
            lVar8 = lVar8 + -0x10;
            goto LAB_1450bdb49;
          }
        }
        lVar8 = 0;
      }
    }
    else {
      *(uint *)(lVar8 + 0x20) = uVar4;
      cVar7 = FUN_144d41e40(param_4 + 0x10,lVar8 + 0x10,local_res10);
      if (cVar7 == '\0') {
        *(undefined4 *)(lVar8 + 0x20) = 0;
        LOCK();
        piVar1 = (int *)(lVar8 + 0x24);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        lVar9 = lVar11;
        cVar7 = local_res10[0];
        if (iVar5 == 1) {
          (**(code **)(*(longlong *)(lVar8 + 0x10) + 0x18))(lVar8 + 0x10);
          cVar7 = local_res10[0];
        }
        goto LAB_1450bdb07;
      }
      bVar6 = true;
    }
LAB_1450bdb49:
    LOCK();
    *param_4 = *param_4 + 1;
    UNLOCK();
    if (*param_4 == 0) {
      param_4[1] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    if (lVar8 == 0) {
      iVar10 = 0x34;
    }
    else if ((bVar6) && (iVar10 = FUN_145393e80(lVar8,local_48,local_54), iVar10 != 1)) {
      LOCK();
      piVar1 = (int *)(lVar8 + 0x24);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*(longlong *)(lVar8 + 0x10) + 0x18))();
      }
    }
    FUN_1450719f0(local_58);
    param_3 = local_res18;
    if (iVar10 == 1) goto LAB_1450bdbbc;
LAB_1450bdc17:
    FUN_1450b59a0(param_1 + 8);
    if (iVar10 == 0x5b) {
      iVar10 = 1;
    }
  }
  else {
LAB_1450bdbbc:
    uVar4 = *(uint *)(param_3 + 0x58);
    lVar9 = lVar8 + 0x10;
    if (lVar8 == 0) {
      lVar9 = lVar11;
    }
    if (uVar4 < *(uint *)(param_3 + 0x5c)) {
      *(uint *)(param_3 + 0x58) = uVar4 + 1;
      plVar2 = (longlong *)(*(longlong *)(param_3 + 0x50) + (ulonglong)uVar4 * 8);
      if (plVar2 == (longlong *)0x0) goto LAB_1450bdc17;
      *plVar2 = lVar9;
    }
    FUN_1450b59a0(param_1 + 8);
  }
  return iVar10;
}



// FUNCTION 1450bdc40 FUN_1450bdc40 body=725 status=ok
// SIG undefined FUN_1450bdc40(void)

int FUN_1450bdc40(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  char local_res10 [8];
  longlong local_res18;
  undefined1 local_58 [4];
  undefined4 local_54;
  uint *local_48;
  
  local_54 = *(undefined4 *)(param_2 + 1);
  iVar10 = 1;
  local_res18 = param_3;
  local_48 = (uint *)FUN_1450b58b0(param_1 + 8);
  if (local_48 == (uint *)0x0) {
    return 0x38;
  }
  uVar4 = *local_48;
  do {
    while (iVar5 = *param_4, iVar5 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
      if (*param_4 < 0) goto LAB_1450bdcbf;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    }
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + 1;
    }
    UNLOCK();
  } while (iVar5 != iVar3);
LAB_1450bdcbf:
  lVar11 = 0;
  lVar9 = lVar11;
  if (param_4[0x12] != 0) {
    for (lVar8 = *(longlong *)
                  (*(longlong *)(param_4 + 0x10) +
                  ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
        (lVar9 = lVar11, lVar8 != 0 && (lVar9 = lVar8, *(uint *)(lVar8 + 0x10) != uVar4));
        lVar8 = *(longlong *)(lVar8 + 8)) {
    }
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar5 = *param_4;
  while (-1 < iVar5) {
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + -1;
    }
    UNLOCK();
    if (iVar5 == iVar3) {
      if ((iVar5 + -1 == 0) && (0 < param_4[0xc])) {
        SetEvent(*(HANDLE *)(param_4 + 0xe));
      }
      goto LAB_1450bdd3a;
    }
    iVar5 = *param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
LAB_1450bdd3a:
  lVar8 = lVar9 + -0x10;
  if (lVar9 == 0) {
    lVar8 = lVar11;
  }
  if (lVar8 == 0) {
    FUN_1450719c0(local_58);
    FUN_145074e40(param_4);
    bVar6 = false;
    local_res10[0] = '\0';
    lVar8 = FUN_145396070();
    lVar9 = lVar8;
    cVar7 = '\0';
    if (lVar8 == 0) {
LAB_1450bdde7:
      lVar8 = lVar9;
      if (cVar7 != '\0') {
        if (param_4[0x12] != 0) {
          for (lVar9 = *(longlong *)
                        (*(longlong *)(param_4 + 0x10) +
                        ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
              (lVar8 = lVar11, lVar9 != 0 && (lVar8 = lVar9, *(uint *)(lVar9 + 0x10) != uVar4));
              lVar9 = *(longlong *)(lVar9 + 8)) {
          }
          if (lVar8 != 0) {
            LOCK();
            *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
            UNLOCK();
            lVar8 = lVar8 + -0x10;
            goto LAB_1450bde29;
          }
        }
        lVar8 = 0;
      }
    }
    else {
      *(uint *)(lVar8 + 0x20) = uVar4;
      cVar7 = FUN_144d41e40(param_4 + 0x10,lVar8 + 0x10,local_res10);
      if (cVar7 == '\0') {
        *(undefined4 *)(lVar8 + 0x20) = 0;
        LOCK();
        piVar1 = (int *)(lVar8 + 0x24);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        lVar9 = lVar11;
        cVar7 = local_res10[0];
        if (iVar5 == 1) {
          (**(code **)(*(longlong *)(lVar8 + 0x10) + 0x18))(lVar8 + 0x10);
          cVar7 = local_res10[0];
        }
        goto LAB_1450bdde7;
      }
      bVar6 = true;
    }
LAB_1450bde29:
    LOCK();
    *param_4 = *param_4 + 1;
    UNLOCK();
    if (*param_4 == 0) {
      param_4[1] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    if (lVar8 == 0) {
      iVar10 = 0x34;
    }
    else if ((bVar6) && (iVar10 = FUN_145396ef0(lVar8,local_48,local_54), iVar10 != 1)) {
      LOCK();
      piVar1 = (int *)(lVar8 + 0x24);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*(longlong *)(lVar8 + 0x10) + 0x18))();
      }
    }
    FUN_1450719f0(local_58);
    param_3 = local_res18;
    if (iVar10 == 1) goto LAB_1450bde9c;
LAB_1450bdef7:
    FUN_1450b59a0(param_1 + 8);
    if (iVar10 == 0x5b) {
      iVar10 = 1;
    }
  }
  else {
LAB_1450bde9c:
    uVar4 = *(uint *)(param_3 + 0x58);
    lVar9 = lVar8 + 0x10;
    if (lVar8 == 0) {
      lVar9 = lVar11;
    }
    if (uVar4 < *(uint *)(param_3 + 0x5c)) {
      *(uint *)(param_3 + 0x58) = uVar4 + 1;
      plVar2 = (longlong *)(*(longlong *)(param_3 + 0x50) + (ulonglong)uVar4 * 8);
      if (plVar2 == (longlong *)0x0) goto LAB_1450bdef7;
      *plVar2 = lVar9;
    }
    FUN_1450b59a0(param_1 + 8);
  }
  return iVar10;
}



// FUNCTION 1450bdf20 FUN_1450bdf20 body=725 status=ok
// SIG undefined FUN_1450bdf20(void)

int FUN_1450bdf20(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  char local_res10 [8];
  longlong local_res18;
  undefined1 local_58 [4];
  undefined4 local_54;
  uint *local_48;
  
  local_54 = *(undefined4 *)(param_2 + 1);
  iVar10 = 1;
  local_res18 = param_3;
  local_48 = (uint *)FUN_1450b58b0(param_1 + 8);
  if (local_48 == (uint *)0x0) {
    return 0x38;
  }
  uVar4 = *local_48;
  do {
    while (iVar5 = *param_4, iVar5 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
      if (*param_4 < 0) goto LAB_1450bdf9f;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    }
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + 1;
    }
    UNLOCK();
  } while (iVar5 != iVar3);
LAB_1450bdf9f:
  lVar11 = 0;
  lVar9 = lVar11;
  if (param_4[0x12] != 0) {
    for (lVar8 = *(longlong *)
                  (*(longlong *)(param_4 + 0x10) +
                  ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
        (lVar9 = lVar11, lVar8 != 0 && (lVar9 = lVar8, *(uint *)(lVar8 + 0x10) != uVar4));
        lVar8 = *(longlong *)(lVar8 + 8)) {
    }
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar5 = *param_4;
  while (-1 < iVar5) {
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + -1;
    }
    UNLOCK();
    if (iVar5 == iVar3) {
      if ((iVar5 + -1 == 0) && (0 < param_4[0xc])) {
        SetEvent(*(HANDLE *)(param_4 + 0xe));
      }
      goto LAB_1450be01a;
    }
    iVar5 = *param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
LAB_1450be01a:
  lVar8 = lVar9 + -0x10;
  if (lVar9 == 0) {
    lVar8 = lVar11;
  }
  if (lVar8 == 0) {
    FUN_1450719c0(local_58);
    FUN_145074e40(param_4);
    bVar6 = false;
    local_res10[0] = '\0';
    lVar8 = FUN_145391f90();
    lVar9 = lVar8;
    cVar7 = '\0';
    if (lVar8 == 0) {
LAB_1450be0c7:
      lVar8 = lVar9;
      if (cVar7 != '\0') {
        if (param_4[0x12] != 0) {
          for (lVar9 = *(longlong *)
                        (*(longlong *)(param_4 + 0x10) +
                        ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
              (lVar8 = lVar11, lVar9 != 0 && (lVar8 = lVar9, *(uint *)(lVar9 + 0x10) != uVar4));
              lVar9 = *(longlong *)(lVar9 + 8)) {
          }
          if (lVar8 != 0) {
            LOCK();
            *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
            UNLOCK();
            lVar8 = lVar8 + -0x10;
            goto LAB_1450be109;
          }
        }
        lVar8 = 0;
      }
    }
    else {
      *(uint *)(lVar8 + 0x20) = uVar4;
      cVar7 = FUN_144d41e40(param_4 + 0x10,lVar8 + 0x10,local_res10);
      if (cVar7 == '\0') {
        *(undefined4 *)(lVar8 + 0x20) = 0;
        LOCK();
        piVar1 = (int *)(lVar8 + 0x24);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        lVar9 = lVar11;
        cVar7 = local_res10[0];
        if (iVar5 == 1) {
          (**(code **)(*(longlong *)(lVar8 + 0x10) + 0x18))(lVar8 + 0x10);
          cVar7 = local_res10[0];
        }
        goto LAB_1450be0c7;
      }
      bVar6 = true;
    }
LAB_1450be109:
    LOCK();
    *param_4 = *param_4 + 1;
    UNLOCK();
    if (*param_4 == 0) {
      param_4[1] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    if (lVar8 == 0) {
      iVar10 = 0x34;
    }
    else if ((bVar6) && (iVar10 = FUN_1453920e0(lVar8,local_48,local_54), iVar10 != 1)) {
      LOCK();
      piVar1 = (int *)(lVar8 + 0x24);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*(longlong *)(lVar8 + 0x10) + 0x18))();
      }
    }
    FUN_1450719f0(local_58);
    param_3 = local_res18;
    if (iVar10 == 1) goto LAB_1450be17c;
LAB_1450be1d7:
    FUN_1450b59a0(param_1 + 8);
    if (iVar10 == 0x5b) {
      iVar10 = 1;
    }
  }
  else {
LAB_1450be17c:
    uVar4 = *(uint *)(param_3 + 0x58);
    lVar9 = lVar8 + 0x10;
    if (lVar8 == 0) {
      lVar9 = lVar11;
    }
    if (uVar4 < *(uint *)(param_3 + 0x5c)) {
      *(uint *)(param_3 + 0x58) = uVar4 + 1;
      plVar2 = (longlong *)(*(longlong *)(param_3 + 0x50) + (ulonglong)uVar4 * 8);
      if (plVar2 == (longlong *)0x0) goto LAB_1450be1d7;
      *plVar2 = lVar9;
    }
    FUN_1450b59a0(param_1 + 8);
  }
  return iVar10;
}



// FUNCTION 1450be200 FUN_1450be200 body=701 status=ok
// SIG undefined FUN_1450be200(void)

int FUN_1450be200(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  char local_58 [4];
  undefined4 local_54;
  uint *local_48;
  
  local_54 = *(undefined4 *)(param_2 + 1);
  iVar8 = 1;
  local_48 = (uint *)FUN_1450b58b0(param_1 + 8);
  if (local_48 == (uint *)0x0) {
    return 0x38;
  }
  uVar4 = *local_48;
  do {
    while (iVar5 = *param_4, iVar5 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
      if (*param_4 < 0) goto LAB_1450be261;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    }
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + 1;
    }
    UNLOCK();
  } while (iVar5 != iVar3);
LAB_1450be261:
  if (param_4[0x12] == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    for (plVar9 = *(longlong **)
                   (*(longlong *)(param_4 + 0x10) +
                   ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
        plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
      if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450be290;
    }
    plVar9 = (longlong *)0x0;
LAB_1450be290:
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar5 = *param_4;
  while (-1 < iVar5) {
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + -1;
    }
    UNLOCK();
    if (iVar5 == iVar3) {
      if ((iVar5 + -1 == 0) && (0 < param_4[0xc])) {
        SetEvent(*(HANDLE *)(param_4 + 0xe));
      }
      goto LAB_1450be2d9;
    }
    iVar5 = *param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
LAB_1450be2d9:
  if (plVar9 == (longlong *)0x0) {
    FUN_1450719c0(local_res10);
    FUN_145074e40(param_4);
    bVar6 = false;
    local_58[0] = '\0';
    plVar9 = (longlong *)FUN_145391cb0();
    cVar7 = '\0';
    if (plVar9 == (longlong *)0x0) {
LAB_1450be37d:
      if (cVar7 != '\0') {
        if (param_4[0x12] == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          for (plVar9 = *(longlong **)
                         (*(longlong *)(param_4 + 0x10) +
                         ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
              plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
            if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450be3b0;
          }
          plVar9 = (longlong *)0x0;
LAB_1450be3b0:
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
            UNLOCK();
          }
        }
      }
    }
    else {
      *(uint *)(plVar9 + 2) = uVar4;
      cVar7 = FUN_144d41e40(param_4 + 0x10,plVar9,local_58);
      if (cVar7 == '\0') {
        *(undefined4 *)(plVar9 + 2) = 0;
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0x14);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        plVar9 = (longlong *)0x0;
        cVar7 = local_58[0];
        goto LAB_1450be37d;
      }
      bVar6 = true;
    }
    LOCK();
    *param_4 = *param_4 + 1;
    UNLOCK();
    if (*param_4 == 0) {
      param_4[1] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    if (plVar9 == (longlong *)0x0) {
      FUN_1450719f0(local_res10);
      FUN_1450b59a0(param_1 + 8);
      return 0x34;
    }
    if ((bVar6) && (iVar8 = FUN_145391d20(plVar9,local_48,local_54), iVar8 != 1)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0x14);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        FUN_1450719f0(local_res10);
        goto LAB_1450be47d;
      }
    }
    FUN_1450719f0(local_res10);
    if (iVar8 != 1) goto LAB_1450be47d;
  }
  uVar4 = *(uint *)(param_3 + 0x58);
  if (uVar4 < *(uint *)(param_3 + 0x5c)) {
    *(uint *)(param_3 + 0x58) = uVar4 + 1;
    puVar2 = (undefined8 *)(*(longlong *)(param_3 + 0x50) + (ulonglong)uVar4 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = plVar9;
    }
  }
LAB_1450be47d:
  FUN_1450b59a0(param_1 + 8);
  if (iVar8 != 0x5b) {
    return iVar8;
  }
  return 1;
}



// FUNCTION 1450be4c0 FUN_1450be4c0 body=729 status=ok
// SIG undefined FUN_1450be4c0(void)

int FUN_1450be4c0(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  char local_res10 [8];
  longlong local_res18;
  undefined1 local_58 [4];
  undefined4 local_54;
  uint *local_48;
  
  local_54 = *(undefined4 *)(param_2 + 1);
  iVar9 = 1;
  local_res18 = param_3;
  local_48 = (uint *)FUN_1450b58b0(param_1 + 8);
  if (local_48 == (uint *)0x0) {
    return 0x38;
  }
  uVar3 = *local_48;
  do {
    while (iVar4 = *param_4, iVar4 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
      if (*param_4 < 0) goto LAB_1450be53f;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    }
    LOCK();
    iVar2 = *param_4;
    if (iVar4 == iVar2) {
      *param_4 = iVar4 + 1;
    }
    UNLOCK();
  } while (iVar4 != iVar2);
LAB_1450be53f:
  plVar10 = (longlong *)0x0;
  plVar8 = plVar10;
  if (param_4[0x12] != 0) {
    for (plVar7 = *(longlong **)
                   (*(longlong *)(param_4 + 0x10) +
                   ((ulonglong)uVar3 % (ulonglong)(uint)param_4[0x12]) * 8);
        (plVar8 = plVar10, plVar7 != (longlong *)0x0 &&
        (plVar8 = plVar7, *(uint *)(plVar7 + 2) != uVar3)); plVar7 = (longlong *)plVar7[1]) {
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar4 = *param_4;
  while (-1 < iVar4) {
    LOCK();
    iVar2 = *param_4;
    if (iVar4 == iVar2) {
      *param_4 = iVar4 + -1;
    }
    UNLOCK();
    if (iVar4 == iVar2) {
      if ((iVar4 + -1 == 0) && (0 < param_4[0xc])) {
        SetEvent(*(HANDLE *)(param_4 + 0xe));
      }
      goto LAB_1450be5ba;
    }
    iVar4 = *param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
LAB_1450be5ba:
  plVar7 = plVar8 + -2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar10;
  }
  if (plVar7 == (longlong *)0x0) {
    FUN_1450719c0(local_58);
    FUN_145074e40(param_4);
    bVar5 = false;
    local_res10[0] = '\0';
    plVar7 = (longlong *)FUN_1453922a0();
    plVar8 = plVar7;
    cVar6 = '\0';
    if (plVar7 == (longlong *)0x0) {
LAB_1450be667:
      plVar7 = plVar8;
      if (cVar6 != '\0') {
        if (param_4[0x12] != 0) {
          for (plVar8 = *(longlong **)
                         (*(longlong *)(param_4 + 0x10) +
                         ((ulonglong)uVar3 % (ulonglong)(uint)param_4[0x12]) * 8);
              (plVar7 = plVar10, plVar8 != (longlong *)0x0 &&
              (plVar7 = plVar8, *(uint *)(plVar8 + 2) != uVar3)); plVar8 = (longlong *)plVar8[1]) {
          }
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar7 + 0x14) = *(int *)((longlong)plVar7 + 0x14) + 1;
            UNLOCK();
            plVar7 = plVar7 + -2;
            goto LAB_1450be6a9;
          }
        }
        plVar7 = (longlong *)0x0;
      }
    }
    else {
      *(uint *)(plVar7 + 4) = uVar3;
      cVar6 = FUN_144d41e40(param_4 + 0x10,plVar7 + 2,local_res10);
      if (cVar6 == '\0') {
        *(undefined4 *)(plVar7 + 4) = 0;
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0x24);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar8 = plVar10;
        cVar6 = local_res10[0];
        if (iVar4 == 1) {
          (**(code **)(plVar7[2] + 0x18))(plVar7 + 2);
          cVar6 = local_res10[0];
        }
        goto LAB_1450be667;
      }
      bVar5 = true;
    }
LAB_1450be6a9:
    LOCK();
    *param_4 = *param_4 + 1;
    UNLOCK();
    if (*param_4 == 0) {
      param_4[1] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    if (plVar7 == (longlong *)0x0) {
      iVar9 = 0x34;
    }
    else if ((bVar5) &&
            (iVar9 = (**(code **)(*plVar7 + 0x260))(plVar7,local_48,local_54), iVar9 != 1)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0x24);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(plVar7[2] + 0x18))();
      }
    }
    FUN_1450719f0(local_58);
    param_3 = local_res18;
    if (iVar9 == 1) goto LAB_1450be720;
LAB_1450be77b:
    FUN_1450b59a0(param_1 + 8);
    if (iVar9 == 0x5b) {
      iVar9 = 1;
    }
  }
  else {
LAB_1450be720:
    uVar3 = *(uint *)(param_3 + 0x58);
    plVar8 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar8 = plVar10;
    }
    if (uVar3 < *(uint *)(param_3 + 0x5c)) {
      *(uint *)(param_3 + 0x58) = uVar3 + 1;
      plVar10 = (longlong *)(*(longlong *)(param_3 + 0x50) + (ulonglong)uVar3 * 8);
      if (plVar10 == (longlong *)0x0) goto LAB_1450be77b;
      *plVar10 = (longlong)plVar8;
    }
    FUN_1450b59a0(param_1 + 8);
  }
  return iVar9;
}



// FUNCTION 1450be7a0 FUN_1450be7a0 body=701 status=ok
// SIG undefined FUN_1450be7a0(void)

int FUN_1450be7a0(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  char local_58 [4];
  undefined4 local_54;
  uint *local_48;
  
  local_54 = *(undefined4 *)(param_2 + 1);
  iVar8 = 1;
  local_48 = (uint *)FUN_1450b58b0(param_1 + 8);
  if (local_48 == (uint *)0x0) {
    return 0x38;
  }
  uVar4 = *local_48;
  do {
    while (iVar5 = *param_4, iVar5 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
      if (*param_4 < 0) goto LAB_1450be801;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    }
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + 1;
    }
    UNLOCK();
  } while (iVar5 != iVar3);
LAB_1450be801:
  if (param_4[0x12] == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    for (plVar9 = *(longlong **)
                   (*(longlong *)(param_4 + 0x10) +
                   ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
        plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
      if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450be830;
    }
    plVar9 = (longlong *)0x0;
LAB_1450be830:
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar5 = *param_4;
  while (-1 < iVar5) {
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + -1;
    }
    UNLOCK();
    if (iVar5 == iVar3) {
      if ((iVar5 + -1 == 0) && (0 < param_4[0xc])) {
        SetEvent(*(HANDLE *)(param_4 + 0xe));
      }
      goto LAB_1450be879;
    }
    iVar5 = *param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
LAB_1450be879:
  if (plVar9 == (longlong *)0x0) {
    FUN_1450719c0(local_res10);
    FUN_145074e40(param_4);
    bVar6 = false;
    local_58[0] = '\0';
    plVar9 = (longlong *)FUN_145391520();
    cVar7 = '\0';
    if (plVar9 == (longlong *)0x0) {
LAB_1450be91d:
      if (cVar7 != '\0') {
        if (param_4[0x12] == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          for (plVar9 = *(longlong **)
                         (*(longlong *)(param_4 + 0x10) +
                         ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
              plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
            if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450be950;
          }
          plVar9 = (longlong *)0x0;
LAB_1450be950:
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
            UNLOCK();
          }
        }
      }
    }
    else {
      *(uint *)(plVar9 + 2) = uVar4;
      cVar7 = FUN_144d41e40(param_4 + 0x10,plVar9,local_58);
      if (cVar7 == '\0') {
        *(undefined4 *)(plVar9 + 2) = 0;
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0x14);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        plVar9 = (longlong *)0x0;
        cVar7 = local_58[0];
        goto LAB_1450be91d;
      }
      bVar6 = true;
    }
    LOCK();
    *param_4 = *param_4 + 1;
    UNLOCK();
    if (*param_4 == 0) {
      param_4[1] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    if (plVar9 == (longlong *)0x0) {
      FUN_1450719f0(local_res10);
      FUN_1450b59a0(param_1 + 8);
      return 0x34;
    }
    if ((bVar6) && (iVar8 = FUN_1453915d0(plVar9,local_48,local_54), iVar8 != 1)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0x14);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        FUN_1450719f0(local_res10);
        goto LAB_1450bea1d;
      }
    }
    FUN_1450719f0(local_res10);
    if (iVar8 != 1) goto LAB_1450bea1d;
  }
  uVar4 = *(uint *)(param_3 + 0x58);
  if (uVar4 < *(uint *)(param_3 + 0x5c)) {
    *(uint *)(param_3 + 0x58) = uVar4 + 1;
    puVar2 = (undefined8 *)(*(longlong *)(param_3 + 0x50) + (ulonglong)uVar4 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = plVar9;
    }
  }
LAB_1450bea1d:
  FUN_1450b59a0(param_1 + 8);
  if (iVar8 != 0x5b) {
    return iVar8;
  }
  return 1;
}



// FUNCTION 1450bea60 FUN_1450bea60 body=702 status=ok
// SIG undefined FUN_1450bea60(void)

int FUN_1450bea60(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  char local_58 [4];
  undefined4 local_54;
  uint *local_48;
  
  local_54 = *(undefined4 *)(param_2 + 1);
  iVar8 = 1;
  local_48 = (uint *)FUN_1450b58b0(param_1 + 8);
  if (local_48 == (uint *)0x0) {
    return 0x38;
  }
  uVar4 = *local_48;
  do {
    while (iVar5 = *param_4, iVar5 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
      if (*param_4 < 0) goto LAB_1450beac1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    }
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + 1;
    }
    UNLOCK();
  } while (iVar5 != iVar3);
LAB_1450beac1:
  if (param_4[0x12] == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    for (plVar9 = *(longlong **)
                   (*(longlong *)(param_4 + 0x10) +
                   ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
        plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
      if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450beaf0;
    }
    plVar9 = (longlong *)0x0;
LAB_1450beaf0:
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar5 = *param_4;
  while (-1 < iVar5) {
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + -1;
    }
    UNLOCK();
    if (iVar5 == iVar3) {
      if ((iVar5 + -1 == 0) && (0 < param_4[0xc])) {
        SetEvent(*(HANDLE *)(param_4 + 0xe));
      }
      goto LAB_1450beb39;
    }
    iVar5 = *param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
LAB_1450beb39:
  if (plVar9 == (longlong *)0x0) {
    FUN_1450719c0(local_res10);
    FUN_145074e40(param_4);
    local_58[0] = '\0';
    bVar6 = false;
    plVar9 = (longlong *)FUN_145356a90(0);
    cVar7 = '\0';
    if (plVar9 == (longlong *)0x0) {
LAB_1450bebe2:
      if (cVar7 != '\0') {
        if (param_4[0x12] == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          for (plVar9 = *(longlong **)
                         (*(longlong *)(param_4 + 0x10) +
                         ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
              plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
            if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450bec11;
          }
          plVar9 = (longlong *)0x0;
LAB_1450bec11:
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
            UNLOCK();
          }
        }
      }
    }
    else {
      *(uint *)(plVar9 + 2) = uVar4;
      cVar7 = FUN_144d41e40(param_4 + 0x10,plVar9,local_58);
      if (cVar7 == '\0') {
        *(undefined4 *)(plVar9 + 2) = 0;
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0x14);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        plVar9 = (longlong *)0x0;
        cVar7 = local_58[0];
        goto LAB_1450bebe2;
      }
      bVar6 = true;
    }
    LOCK();
    *param_4 = *param_4 + 1;
    UNLOCK();
    if (*param_4 == 0) {
      param_4[1] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    if (plVar9 == (longlong *)0x0) {
      FUN_1450719f0(local_res10);
      FUN_1450b59a0(param_1 + 8);
      return 0x34;
    }
    if ((bVar6) && (iVar8 = FUN_145356d40(plVar9,local_48,local_54), iVar8 != 1)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0x14);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        FUN_1450719f0(local_res10);
        goto LAB_1450becde;
      }
    }
    FUN_1450719f0(local_res10);
    if (iVar8 != 1) goto LAB_1450becde;
  }
  uVar4 = *(uint *)(param_3 + 0x58);
  if (uVar4 < *(uint *)(param_3 + 0x5c)) {
    *(uint *)(param_3 + 0x58) = uVar4 + 1;
    puVar2 = (undefined8 *)(*(longlong *)(param_3 + 0x50) + (ulonglong)uVar4 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = plVar9;
    }
  }
LAB_1450becde:
  FUN_1450b59a0(param_1 + 8);
  if (iVar8 != 0x5b) {
    return iVar8;
  }
  return 1;
}



// FUNCTION 1450bed20 FUN_1450bed20 body=703 status=ok
// SIG undefined FUN_1450bed20(void)

int FUN_1450bed20(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  char local_58 [4];
  undefined4 local_54;
  uint *local_48;
  
  local_54 = *(undefined4 *)(param_2 + 1);
  iVar8 = 1;
  local_48 = (uint *)FUN_1450b58b0(param_1 + 8);
  if (local_48 == (uint *)0x0) {
    return 0x38;
  }
  uVar4 = *local_48;
  do {
    while (iVar5 = *param_4, iVar5 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
      if (*param_4 < 0) goto LAB_1450bed81;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    }
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + 1;
    }
    UNLOCK();
  } while (iVar5 != iVar3);
LAB_1450bed81:
  if (param_4[0x12] == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    for (plVar9 = *(longlong **)
                   (*(longlong *)(param_4 + 0x10) +
                   ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
        plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
      if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450bedb0;
    }
    plVar9 = (longlong *)0x0;
LAB_1450bedb0:
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar5 = *param_4;
  while (-1 < iVar5) {
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + -1;
    }
    UNLOCK();
    if (iVar5 == iVar3) {
      if ((iVar5 + -1 == 0) && (0 < param_4[0xc])) {
        SetEvent(*(HANDLE *)(param_4 + 0xe));
      }
      goto LAB_1450bedf9;
    }
    iVar5 = *param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
LAB_1450bedf9:
  if (plVar9 == (longlong *)0x0) {
    FUN_1450719c0(local_res10);
    FUN_145074e40(param_4);
    local_58[0] = '\0';
    bVar6 = false;
    plVar9 = (longlong *)FUN_145356a90(1);
    cVar7 = '\0';
    if (plVar9 == (longlong *)0x0) {
LAB_1450beea3:
      if (cVar7 != '\0') {
        if (param_4[0x12] == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          for (plVar9 = *(longlong **)
                         (*(longlong *)(param_4 + 0x10) +
                         ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
              plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
            if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450beed2;
          }
          plVar9 = (longlong *)0x0;
LAB_1450beed2:
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
            UNLOCK();
          }
        }
      }
    }
    else {
      *(uint *)(plVar9 + 2) = uVar4;
      cVar7 = FUN_144d41e40(param_4 + 0x10,plVar9,local_58);
      if (cVar7 == '\0') {
        *(undefined4 *)(plVar9 + 2) = 0;
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0x14);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        plVar9 = (longlong *)0x0;
        cVar7 = local_58[0];
        goto LAB_1450beea3;
      }
      bVar6 = true;
    }
    LOCK();
    *param_4 = *param_4 + 1;
    UNLOCK();
    if (*param_4 == 0) {
      param_4[1] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    if (plVar9 == (longlong *)0x0) {
      FUN_1450719f0(local_res10);
      FUN_1450b59a0(param_1 + 8);
      return 0x34;
    }
    if ((bVar6) && (iVar8 = FUN_145356d40(plVar9,local_48,local_54), iVar8 != 1)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0x14);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        FUN_1450719f0(local_res10);
        goto LAB_1450bef9f;
      }
    }
    FUN_1450719f0(local_res10);
    if (iVar8 != 1) goto LAB_1450bef9f;
  }
  uVar4 = *(uint *)(param_3 + 0x58);
  if (uVar4 < *(uint *)(param_3 + 0x5c)) {
    *(uint *)(param_3 + 0x58) = uVar4 + 1;
    puVar2 = (undefined8 *)(*(longlong *)(param_3 + 0x50) + (ulonglong)uVar4 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = plVar9;
    }
  }
LAB_1450bef9f:
  FUN_1450b59a0(param_1 + 8);
  if (iVar8 != 0x5b) {
    return iVar8;
  }
  return 1;
}



// FUNCTION 1450befe0 FUN_1450befe0 body=703 status=ok
// SIG undefined FUN_1450befe0(void)

int FUN_1450befe0(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  char local_58 [4];
  undefined4 local_54;
  uint *local_48;
  
  local_54 = *(undefined4 *)(param_2 + 1);
  iVar8 = 1;
  local_48 = (uint *)FUN_1450b58b0(param_1 + 8);
  if (local_48 == (uint *)0x0) {
    return 0x38;
  }
  uVar4 = *local_48;
  do {
    while (iVar5 = *param_4, iVar5 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
      if (*param_4 < 0) goto LAB_1450bf041;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    }
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + 1;
    }
    UNLOCK();
  } while (iVar5 != iVar3);
LAB_1450bf041:
  if (param_4[0x12] == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    for (plVar9 = *(longlong **)
                   (*(longlong *)(param_4 + 0x10) +
                   ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
        plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
      if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450bf070;
    }
    plVar9 = (longlong *)0x0;
LAB_1450bf070:
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar5 = *param_4;
  while (-1 < iVar5) {
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + -1;
    }
    UNLOCK();
    if (iVar5 == iVar3) {
      if ((iVar5 + -1 == 0) && (0 < param_4[0xc])) {
        SetEvent(*(HANDLE *)(param_4 + 0xe));
      }
      goto LAB_1450bf0b9;
    }
    iVar5 = *param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
LAB_1450bf0b9:
  if (plVar9 == (longlong *)0x0) {
    FUN_1450719c0(local_res10);
    FUN_145074e40(param_4);
    local_58[0] = '\0';
    bVar6 = false;
    plVar9 = (longlong *)FUN_145356a90(2);
    cVar7 = '\0';
    if (plVar9 == (longlong *)0x0) {
LAB_1450bf163:
      if (cVar7 != '\0') {
        if (param_4[0x12] == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          for (plVar9 = *(longlong **)
                         (*(longlong *)(param_4 + 0x10) +
                         ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
              plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
            if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450bf192;
          }
          plVar9 = (longlong *)0x0;
LAB_1450bf192:
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
            UNLOCK();
          }
        }
      }
    }
    else {
      *(uint *)(plVar9 + 2) = uVar4;
      cVar7 = FUN_144d41e40(param_4 + 0x10,plVar9,local_58);
      if (cVar7 == '\0') {
        *(undefined4 *)(plVar9 + 2) = 0;
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0x14);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        plVar9 = (longlong *)0x0;
        cVar7 = local_58[0];
        goto LAB_1450bf163;
      }
      bVar6 = true;
    }
    LOCK();
    *param_4 = *param_4 + 1;
    UNLOCK();
    if (*param_4 == 0) {
      param_4[1] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    if (plVar9 == (longlong *)0x0) {
      FUN_1450719f0(local_res10);
      FUN_1450b59a0(param_1 + 8);
      return 0x34;
    }
    if ((bVar6) && (iVar8 = FUN_145356d40(plVar9,local_48,local_54), iVar8 != 1)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0x14);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        FUN_1450719f0(local_res10);
        goto LAB_1450bf25f;
      }
    }
    FUN_1450719f0(local_res10);
    if (iVar8 != 1) goto LAB_1450bf25f;
  }
  uVar4 = *(uint *)(param_3 + 0x58);
  if (uVar4 < *(uint *)(param_3 + 0x5c)) {
    *(uint *)(param_3 + 0x58) = uVar4 + 1;
    puVar2 = (undefined8 *)(*(longlong *)(param_3 + 0x50) + (ulonglong)uVar4 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = plVar9;
    }
  }
LAB_1450bf25f:
  FUN_1450b59a0(param_1 + 8);
  if (iVar8 != 0x5b) {
    return iVar8;
  }
  return 1;
}



// FUNCTION 1450bf2a0 FUN_1450bf2a0 body=701 status=ok
// SIG undefined FUN_1450bf2a0(void)

int FUN_1450bf2a0(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  char local_58 [4];
  undefined4 local_54;
  uint *local_48;
  
  local_54 = *(undefined4 *)(param_2 + 1);
  iVar8 = 1;
  local_48 = (uint *)FUN_1450b58b0(param_1 + 8);
  if (local_48 == (uint *)0x0) {
    return 0x38;
  }
  uVar4 = *local_48;
  do {
    while (iVar5 = *param_4, iVar5 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
      if (*param_4 < 0) goto LAB_1450bf301;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    }
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + 1;
    }
    UNLOCK();
  } while (iVar5 != iVar3);
LAB_1450bf301:
  if (param_4[0x12] == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    for (plVar9 = *(longlong **)
                   (*(longlong *)(param_4 + 0x10) +
                   ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
        plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
      if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450bf330;
    }
    plVar9 = (longlong *)0x0;
LAB_1450bf330:
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar5 = *param_4;
  while (-1 < iVar5) {
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + -1;
    }
    UNLOCK();
    if (iVar5 == iVar3) {
      if ((iVar5 + -1 == 0) && (0 < param_4[0xc])) {
        SetEvent(*(HANDLE *)(param_4 + 0xe));
      }
      goto LAB_1450bf379;
    }
    iVar5 = *param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
LAB_1450bf379:
  if (plVar9 == (longlong *)0x0) {
    FUN_1450719c0(local_res10);
    FUN_145074e40(param_4);
    bVar6 = false;
    local_58[0] = '\0';
    plVar9 = (longlong *)FUN_1450b0320();
    cVar7 = '\0';
    if (plVar9 == (longlong *)0x0) {
LAB_1450bf41d:
      if (cVar7 != '\0') {
        if (param_4[0x12] == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          for (plVar9 = *(longlong **)
                         (*(longlong *)(param_4 + 0x10) +
                         ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
              plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
            if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450bf450;
          }
          plVar9 = (longlong *)0x0;
LAB_1450bf450:
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
            UNLOCK();
          }
        }
      }
    }
    else {
      *(uint *)(plVar9 + 2) = uVar4;
      cVar7 = FUN_144d41e40(param_4 + 0x10,plVar9,local_58);
      if (cVar7 == '\0') {
        *(undefined4 *)(plVar9 + 2) = 0;
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0x14);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        plVar9 = (longlong *)0x0;
        cVar7 = local_58[0];
        goto LAB_1450bf41d;
      }
      bVar6 = true;
    }
    LOCK();
    *param_4 = *param_4 + 1;
    UNLOCK();
    if (*param_4 == 0) {
      param_4[1] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    if (plVar9 == (longlong *)0x0) {
      FUN_1450719f0(local_res10);
      FUN_1450b59a0(param_1 + 8);
      return 0x34;
    }
    if ((bVar6) && (iVar8 = FUN_1450b0380(plVar9,local_48,local_54), iVar8 != 1)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0x14);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        FUN_1450719f0(local_res10);
        goto LAB_1450bf51d;
      }
    }
    FUN_1450719f0(local_res10);
    if (iVar8 != 1) goto LAB_1450bf51d;
  }
  uVar4 = *(uint *)(param_3 + 0x58);
  if (uVar4 < *(uint *)(param_3 + 0x5c)) {
    *(uint *)(param_3 + 0x58) = uVar4 + 1;
    puVar2 = (undefined8 *)(*(longlong *)(param_3 + 0x50) + (ulonglong)uVar4 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = plVar9;
    }
  }
LAB_1450bf51d:
  FUN_1450b59a0(param_1 + 8);
  if (iVar8 != 0x5b) {
    return iVar8;
  }
  return 1;
}



// FUNCTION 1450bf560 FUN_1450bf560 body=702 status=ok
// SIG undefined FUN_1450bf560(void)

int FUN_1450bf560(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  char local_58 [4];
  undefined4 local_54 [3];
  uint *local_48 [2];
  
  local_54[0] = *(undefined4 *)(param_2 + 1);
  iVar8 = 1;
  local_48[0] = (uint *)FUN_1450b58b0(param_1 + 8);
  if (local_48[0] == (uint *)0x0) {
    return 0x38;
  }
  uVar4 = *local_48[0];
  do {
    while (iVar5 = *param_4, iVar5 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
      if (*param_4 < 0) goto LAB_1450bf5c1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    }
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + 1;
    }
    UNLOCK();
  } while (iVar5 != iVar3);
LAB_1450bf5c1:
  if (param_4[0x12] == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    for (plVar9 = *(longlong **)
                   (*(longlong *)(param_4 + 0x10) +
                   ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
        plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
      if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450bf5f0;
    }
    plVar9 = (longlong *)0x0;
LAB_1450bf5f0:
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar5 = *param_4;
  while (-1 < iVar5) {
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + -1;
    }
    UNLOCK();
    if (iVar5 == iVar3) {
      if ((iVar5 + -1 == 0) && (0 < param_4[0xc])) {
        SetEvent(*(HANDLE *)(param_4 + 0xe));
      }
      goto LAB_1450bf639;
    }
    iVar5 = *param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
LAB_1450bf639:
  if (plVar9 == (longlong *)0x0) {
    FUN_1450719c0(local_res10);
    FUN_145074e40(param_4);
    bVar6 = false;
    local_58[0] = '\0';
    plVar9 = (longlong *)FUN_14536ae30();
    cVar7 = '\0';
    if (plVar9 == (longlong *)0x0) {
LAB_1450bf6dd:
      if (cVar7 != '\0') {
        if (param_4[0x12] == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          for (plVar9 = *(longlong **)
                         (*(longlong *)(param_4 + 0x10) +
                         ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
              plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
            if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450bf710;
          }
          plVar9 = (longlong *)0x0;
LAB_1450bf710:
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
            UNLOCK();
          }
        }
      }
    }
    else {
      *(uint *)(plVar9 + 2) = uVar4;
      cVar7 = FUN_144d41e40(param_4 + 0x10,plVar9,local_58);
      if (cVar7 == '\0') {
        *(undefined4 *)(plVar9 + 2) = 0;
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0x14);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        plVar9 = (longlong *)0x0;
        cVar7 = local_58[0];
        goto LAB_1450bf6dd;
      }
      bVar6 = true;
    }
    LOCK();
    *param_4 = *param_4 + 1;
    UNLOCK();
    if (*param_4 == 0) {
      param_4[1] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    if (plVar9 == (longlong *)0x0) {
      FUN_1450719f0(local_res10);
      FUN_1450b59a0(param_1 + 8);
      return 0x34;
    }
    if ((bVar6) && (iVar8 = (**(code **)(*plVar9 + 0x28))(plVar9,local_48,local_54), iVar8 != 1)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0x14);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        FUN_1450719f0(local_res10);
        goto LAB_1450bf7de;
      }
    }
    FUN_1450719f0(local_res10);
    if (iVar8 != 1) goto LAB_1450bf7de;
  }
  uVar4 = *(uint *)(param_3 + 0x58);
  if (uVar4 < *(uint *)(param_3 + 0x5c)) {
    *(uint *)(param_3 + 0x58) = uVar4 + 1;
    puVar2 = (undefined8 *)(*(longlong *)(param_3 + 0x50) + (ulonglong)uVar4 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = plVar9;
    }
  }
LAB_1450bf7de:
  FUN_1450b59a0(param_1 + 8);
  if (iVar8 != 0x5b) {
    return iVar8;
  }
  return 1;
}



// FUNCTION 1450bf820 FUN_1450bf820 body=702 status=ok
// SIG undefined FUN_1450bf820(void)

int FUN_1450bf820(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  char local_58 [4];
  undefined4 local_54 [3];
  uint *local_48 [2];
  
  local_54[0] = *(undefined4 *)(param_2 + 1);
  iVar8 = 1;
  local_48[0] = (uint *)FUN_1450b58b0(param_1 + 8);
  if (local_48[0] == (uint *)0x0) {
    return 0x38;
  }
  uVar4 = *local_48[0];
  do {
    while (iVar5 = *param_4, iVar5 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
      if (*param_4 < 0) goto LAB_1450bf881;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    }
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + 1;
    }
    UNLOCK();
  } while (iVar5 != iVar3);
LAB_1450bf881:
  if (param_4[0x12] == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    for (plVar9 = *(longlong **)
                   (*(longlong *)(param_4 + 0x10) +
                   ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
        plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
      if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450bf8b0;
    }
    plVar9 = (longlong *)0x0;
LAB_1450bf8b0:
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar5 = *param_4;
  while (-1 < iVar5) {
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + -1;
    }
    UNLOCK();
    if (iVar5 == iVar3) {
      if ((iVar5 + -1 == 0) && (0 < param_4[0xc])) {
        SetEvent(*(HANDLE *)(param_4 + 0xe));
      }
      goto LAB_1450bf8f9;
    }
    iVar5 = *param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
LAB_1450bf8f9:
  if (plVar9 == (longlong *)0x0) {
    FUN_1450719c0(local_res10);
    FUN_145074e40(param_4);
    bVar6 = false;
    local_58[0] = '\0';
    plVar9 = (longlong *)FUN_14536afa0();
    cVar7 = '\0';
    if (plVar9 == (longlong *)0x0) {
LAB_1450bf99d:
      if (cVar7 != '\0') {
        if (param_4[0x12] == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          for (plVar9 = *(longlong **)
                         (*(longlong *)(param_4 + 0x10) +
                         ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
              plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
            if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450bf9d0;
          }
          plVar9 = (longlong *)0x0;
LAB_1450bf9d0:
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
            UNLOCK();
          }
        }
      }
    }
    else {
      *(uint *)(plVar9 + 2) = uVar4;
      cVar7 = FUN_144d41e40(param_4 + 0x10,plVar9,local_58);
      if (cVar7 == '\0') {
        *(undefined4 *)(plVar9 + 2) = 0;
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0x14);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        plVar9 = (longlong *)0x0;
        cVar7 = local_58[0];
        goto LAB_1450bf99d;
      }
      bVar6 = true;
    }
    LOCK();
    *param_4 = *param_4 + 1;
    UNLOCK();
    if (*param_4 == 0) {
      param_4[1] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    if (plVar9 == (longlong *)0x0) {
      FUN_1450719f0(local_res10);
      FUN_1450b59a0(param_1 + 8);
      return 0x34;
    }
    if ((bVar6) && (iVar8 = (**(code **)(*plVar9 + 0x28))(plVar9,local_48,local_54), iVar8 != 1)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0x14);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        FUN_1450719f0(local_res10);
        goto LAB_1450bfa9e;
      }
    }
    FUN_1450719f0(local_res10);
    if (iVar8 != 1) goto LAB_1450bfa9e;
  }
  uVar4 = *(uint *)(param_3 + 0x58);
  if (uVar4 < *(uint *)(param_3 + 0x5c)) {
    *(uint *)(param_3 + 0x58) = uVar4 + 1;
    puVar2 = (undefined8 *)(*(longlong *)(param_3 + 0x50) + (ulonglong)uVar4 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = plVar9;
    }
  }
LAB_1450bfa9e:
  FUN_1450b59a0(param_1 + 8);
  if (iVar8 != 0x5b) {
    return iVar8;
  }
  return 1;
}



// FUNCTION 1450bfae0 FUN_1450bfae0 body=702 status=ok
// SIG undefined FUN_1450bfae0(void)

int FUN_1450bfae0(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  char local_58 [4];
  undefined4 local_54 [3];
  uint *local_48 [2];
  
  local_54[0] = *(undefined4 *)(param_2 + 1);
  iVar8 = 1;
  local_48[0] = (uint *)FUN_1450b58b0(param_1 + 8);
  if (local_48[0] == (uint *)0x0) {
    return 0x38;
  }
  uVar4 = *local_48[0];
  do {
    while (iVar5 = *param_4, iVar5 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
      if (*param_4 < 0) goto LAB_1450bfb41;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    }
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + 1;
    }
    UNLOCK();
  } while (iVar5 != iVar3);
LAB_1450bfb41:
  if (param_4[0x12] == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    for (plVar9 = *(longlong **)
                   (*(longlong *)(param_4 + 0x10) +
                   ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
        plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
      if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450bfb70;
    }
    plVar9 = (longlong *)0x0;
LAB_1450bfb70:
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar5 = *param_4;
  while (-1 < iVar5) {
    LOCK();
    iVar3 = *param_4;
    if (iVar5 == iVar3) {
      *param_4 = iVar5 + -1;
    }
    UNLOCK();
    if (iVar5 == iVar3) {
      if ((iVar5 + -1 == 0) && (0 < param_4[0xc])) {
        SetEvent(*(HANDLE *)(param_4 + 0xe));
      }
      goto LAB_1450bfbb9;
    }
    iVar5 = *param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
LAB_1450bfbb9:
  if (plVar9 == (longlong *)0x0) {
    FUN_1450719c0(local_res10);
    FUN_145074e40(param_4);
    bVar6 = false;
    local_58[0] = '\0';
    plVar9 = (longlong *)FUN_14536aee0();
    cVar7 = '\0';
    if (plVar9 == (longlong *)0x0) {
LAB_1450bfc5d:
      if (cVar7 != '\0') {
        if (param_4[0x12] == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          for (plVar9 = *(longlong **)
                         (*(longlong *)(param_4 + 0x10) +
                         ((ulonglong)uVar4 % (ulonglong)(uint)param_4[0x12]) * 8);
              plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
            if (*(uint *)(plVar9 + 2) == uVar4) goto LAB_1450bfc90;
          }
          plVar9 = (longlong *)0x0;
LAB_1450bfc90:
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
            UNLOCK();
          }
        }
      }
    }
    else {
      *(uint *)(plVar9 + 2) = uVar4;
      cVar7 = FUN_144d41e40(param_4 + 0x10,plVar9,local_58);
      if (cVar7 == '\0') {
        *(undefined4 *)(plVar9 + 2) = 0;
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0x14);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        plVar9 = (longlong *)0x0;
        cVar7 = local_58[0];
        goto LAB_1450bfc5d;
      }
      bVar6 = true;
    }
    LOCK();
    *param_4 = *param_4 + 1;
    UNLOCK();
    if (*param_4 == 0) {
      param_4[1] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    if (plVar9 == (longlong *)0x0) {
      FUN_1450719f0(local_res10);
      FUN_1450b59a0(param_1 + 8);
      return 0x34;
    }
    if ((bVar6) && (iVar8 = (**(code **)(*plVar9 + 0x28))(plVar9,local_48,local_54), iVar8 != 1)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0x14);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        FUN_1450719f0(local_res10);
        goto LAB_1450bfd5e;
      }
    }
    FUN_1450719f0(local_res10);
    if (iVar8 != 1) goto LAB_1450bfd5e;
  }
  uVar4 = *(uint *)(param_3 + 0x58);
  if (uVar4 < *(uint *)(param_3 + 0x5c)) {
    *(uint *)(param_3 + 0x58) = uVar4 + 1;
    puVar2 = (undefined8 *)(*(longlong *)(param_3 + 0x50) + (ulonglong)uVar4 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = plVar9;
    }
  }
LAB_1450bfd5e:
  FUN_1450b59a0(param_1 + 8);
  if (iVar8 != 0x5b) {
    return iVar8;
  }
  return 1;
}



// FUNCTION 1450bfda0 FUN_1450bfda0 body=691 status=ok
// SIG undefined FUN_1450bfda0(void)

void FUN_1450bfda0(int param_1,int *param_2,uint *param_3)

{
  short sVar1;
  short sVar2;
  undefined8 uVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  ulonglong _Size;
  undefined4 uVar6;
  __uint64 _Var7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 local_res20 [8];
  undefined1 *puVar10;
  undefined4 uVar11;
  uint local_60;
  int local_5c;
  uint local_58;
  void *local_50;
  longlong *local_48;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [8];
  short *local_30;
  
  _Var7 = 0;
  puVar10 = local_3c;
  iVar4 = FUN_1450731d0(*(undefined8 *)param_2,*param_3,local_38,0,puVar10,local_40,&local_5c,
                        &local_60,0,0,1);
  uVar11 = (undefined4)((ulonglong)puVar10 >> 0x20);
  if (((iVar4 == 1) && (local_5c + local_60 <= *param_3)) &&
     ((sVar1 = *local_30, sVar1 == 0x3040 || ((sVar1 == 0x3041 || (sVar1 == -1)))))) {
    uVar5 = local_60;
    if ((local_60 & 3) != 0) {
      uVar5 = (local_60 - (local_60 & 3)) + 0xc;
    }
    if ((sVar1 == -1) || ((ushort)(sVar1 + 0xcfc0U) < 2)) {
      _Var7 = (__uint64)(uVar5 + (uint)(ushort)local_30[1] * *(int *)(local_30 + 0xc) * 2);
    }
    _Dst = AK::MemoryMgr::Malign(param_1,_Var7,4);
    if (_Dst != (void *)0x0) {
      _Size = (ulonglong)local_60;
      sVar1 = local_30[1];
      uVar8 = (ulonglong)(uint)((int)local_30 - *param_2);
      local_58 = *param_3;
      local_50 = *(void **)param_2;
      sVar2 = *local_30;
      if (sVar2 == -1) {
        uVar6 = 0x40001;
      }
      else if (sVar2 == 0x3040) {
        uVar6 = 0x130001;
      }
      else {
        uVar6 = 1;
        if (sVar2 == 0x3041) {
          uVar6 = 0x140001;
        }
      }
      local_48 = (longlong *)FUN_145089170(uVar6);
      if (local_48 != (longlong *)0x0) {
        memcpy(_Dst,local_50,_Size);
        *(undefined2 *)(uVar8 + (longlong)_Dst) = 0xfffe;
        *(short *)(uVar8 + 0xc + (longlong)_Dst) = sVar1 * 2;
        *(undefined2 *)(uVar8 + 0xe + (longlong)_Dst) = 0x10;
        puVar9 = (undefined8 *)((longlong)_Dst + (_Size - 8));
        uVar5 = local_60;
        if ((local_60 & 3) != 0) {
          uVar3 = *puVar9;
          uVar5 = 4 - (local_60 & 3);
          *(undefined4 *)puVar9 = 0x4b4e554a;
          *(uint *)((longlong)_Dst + (_Size - 4)) = uVar5;
          memset((void *)((longlong)_Dst + _Size + 8),0,(ulonglong)uVar5);
          uVar5 = local_60 + 8 + *(int *)((longlong)_Dst + (_Size - 4));
          puVar9 = (undefined8 *)(((ulonglong)uVar5 - 8) + (longlong)_Dst);
          *puVar9 = uVar3;
        }
        FUN_1450719c0(local_res20);
        iVar4 = (**(code **)(*local_48 + 8))
                          (local_48,(ulonglong)uVar5 + (longlong)_Dst,(uint)_Var7 - uVar5,local_50,
                           CONCAT44(uVar11,local_58),(undefined4 *)((longlong)puVar9 + 4));
        FUN_1450891d0(uVar6,local_48);
        FUN_1450719f0(local_res20);
        if (iVar4 == 1) {
          AK::MemoryMgr::Free(param_1,*(void **)param_2);
          *(void **)param_2 = _Dst;
          *param_3 = (uint)_Var7;
          return;
        }
      }
      AK::MemoryMgr::Free(param_1,_Dst);
    }
  }
  return;
}



// FUNCTION 1450c0060 FUN_1450c0060 body=128 status=ok
// SIG undefined FUN_1450c0060(void)

undefined4
FUN_1450c0060(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 local_res10 [8];
  
  if (((*(uint *)(param_2 + 0xfc) & 0x7c) != 0) && ((*(uint *)(param_2 + 0xfc) >> 7 & 1) != 0)) {
    return 1;
  }
  FUN_1450719c0(local_res10);
  uVar1 = FUN_145370810(param_2,param_3,param_4,param_5,1);
  FUN_1450719f0(local_res10);
  return uVar1;
}



// FUNCTION 1450c00e0 FUN_1450c00e0 body=104 status=ok
// SIG undefined FUN_1450c00e0(void)

undefined8 * FUN_1450c00e0(undefined8 *param_1)

{
  FUN_1450b66e0();
  *(undefined1 *)(param_1 + 0x20) = 0;
  *param_1 = &PTR_FUN_149c26b48;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x21));
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x1f] = 0;
  DAT_14c79c360 = 0;
  return param_1;
}



// FUNCTION 1450c0150 FUN_1450c0150 body=480 status=ok
// SIG undefined FUN_1450c0150(void)

undefined8 FUN_1450c0150(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  HANDLE pvVar5;
  DWORD_PTR DVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  DWORD local_res10 [2];
  uint local_res18 [2];
  ULONG_PTR local_res20;
  
  uVar3 = FUN_1450b6810();
  if ((int)uVar3 != 1) {
    return uVar3;
  }
  puVar4 = AK::MemoryMgr::Malloc(0,0x370);
  *(undefined8 **)((longlong)param_1 + 0x148) = puVar4;
  if (puVar4 == (undefined8 *)0x0) {
    return 0x34;
  }
  puVar7 = puVar4 + 6;
  uVar9 = 0;
  *(undefined4 *)((longlong)param_1 + 0x150) = 10;
  *(undefined8 **)((longlong)param_1 + 0x140) = puVar4;
  do {
    puVar8 = puVar4;
    if (puVar7 + -5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar7 + -5) = 0xffffffff;
      *(undefined8 *)((longlong)puVar7 + -0x24) = 0;
      puVar7[-3] = 0;
      *(undefined1 *)(puVar7 + -2) = 0;
      puVar7[-1] = 0;
      *puVar7 = 0;
    }
    uVar9 = uVar9 + 1;
    *puVar8 = puVar7 + 5;
    puVar7 = puVar7 + 0xb;
    puVar4 = puVar8 + 0xb;
  } while (uVar9 < *(uint *)((longlong)param_1 + 0x150));
  *puVar8 = 0;
  if (DAT_14c79c360 != (HANDLE)0x0) {
    return 2;
  }
  *(undefined1 *)((longlong)param_1 + 0x100) = 0;
  pvVar5 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  *(HANDLE *)((longlong)param_1 + 0xf8) = pvVar5;
  if (pvVar5 == (HANDLE)0x0) {
    return 2;
  }
  DAT_14c79c360 =
       CreateThread((LPSECURITY_ATTRIBUTES)0x0,(ulonglong)DAT_14c79c008,FUN_1450c0950,param_1,4,
                    local_res10);
  if (DAT_14c79c360 == (HANDLE)0x0) {
    DAT_14c79c360 = (HANDLE)0x0;
    return 2;
  }
  FUN_145073560(DAT_14c79c360,local_res10[0],"AK::BankManager");
  BVar1 = SetThreadPriority(DAT_14c79c360,DAT_14c79c000);
  uVar9 = DAT_14c79c004;
  if ((BVar1 != 0) || (DAT_14c79c000 == 0x10000)) {
    if (DAT_14c79c004 != 0) {
      pvVar5 = GetCurrentProcess();
      BVar1 = GetProcessAffinityMask(pvVar5,(PDWORD_PTR)local_res18,&local_res20);
      if (BVar1 != 0) {
        uVar9 = uVar9 & local_res18[0];
      }
      DVar6 = SetThreadAffinityMask(DAT_14c79c360,(ulonglong)uVar9);
      if (DVar6 == 0) goto LAB_1450c0293;
    }
    DVar2 = ResumeThread(DAT_14c79c360);
    if (DVar2 != 0) {
      if (DAT_14c79c360 != (HANDLE)0x0) {
        return 1;
      }
      return 2;
    }
  }
LAB_1450c0293:
  CloseHandle(DAT_14c79c360);
  DAT_14c79c360 = (HANDLE)0x0;
  return 2;
}



// FUNCTION 1450c0330 FUN_1450c0330 body=397 status=ok
// SIG undefined FUN_1450c0330(void)

void FUN_1450c0330(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)(param_1 + 0x130);
  iVar2 = *(int *)(param_1 + 0x154);
  while (iVar2 != 0) {
    puVar3 = (undefined8 *)*puVar1;
    if (puVar3 != (undefined8 *)0x0) {
      *puVar1 = *puVar3;
      if (puVar3 == *(undefined8 **)(param_1 + 0x138)) {
        *(undefined8 *)(param_1 + 0x138) = 0;
      }
      if ((puVar3 < *(undefined8 **)(param_1 + 0x148)) ||
         (*(undefined8 **)(param_1 + 0x148) + (ulonglong)*(uint *)(param_1 + 0x150) * 0xb <= puVar3)
         ) {
        AK::MemoryMgr::Free(0,puVar3);
      }
      else {
        *puVar3 = *(undefined8 *)(param_1 + 0x140);
        *(undefined8 **)(param_1 + 0x140) = puVar3;
      }
      *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + -1;
    }
    FUN_1450b5b80();
    iVar2 = *(int *)(param_1 + 0x154);
  }
  while (puVar3 = (undefined8 *)*puVar1, puVar3 != (undefined8 *)0x0) {
    *puVar1 = *puVar3;
    if (puVar3 == *(undefined8 **)(param_1 + 0x138)) {
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    if ((puVar3 < *(undefined8 **)(param_1 + 0x148)) ||
       (*(undefined8 **)(param_1 + 0x148) + (ulonglong)*(uint *)(param_1 + 0x150) * 0xb <= puVar3))
    {
      AK::MemoryMgr::Free(0,puVar3);
      *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + -1;
    }
    else {
      *puVar3 = *(undefined8 *)(param_1 + 0x140);
      *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + -1;
      *(undefined8 **)(param_1 + 0x140) = puVar3;
    }
  }
  puVar3 = *(undefined8 **)(param_1 + 0x140);
  while (puVar4 = puVar3, puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    if ((puVar4 < *(undefined8 **)(param_1 + 0x148)) ||
       (*(undefined8 **)(param_1 + 0x148) + (ulonglong)*(uint *)(param_1 + 0x150) * 0xb <= puVar4))
    {
      AK::MemoryMgr::Free(0,puVar4);
    }
  }
  if (*(void **)(param_1 + 0x148) != (void *)0x0) {
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x148));
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  *(undefined4 *)(param_1 + 0x150) = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN_1450b6850(param_1);
  return;
}



// FUNCTION 1450c04c0 FUN_1450c04c0 body=540 status=ok
// SIG undefined FUN_1450c04c0(void)

int FUN_1450c04c0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  puVar9 = *(undefined8 **)(param_1 + 0x140);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = AK::MemoryMgr::Malloc(0,0x58);
    if (puVar9 != (undefined8 *)0x0) {
      if (puVar9 + 1 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar9 + 1) = 0xffffffff;
        *(undefined8 *)((longlong)puVar9 + 0xc) = 0;
        puVar9[3] = 0;
        *(undefined1 *)(puVar9 + 4) = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
      }
      *puVar9 = *(undefined8 *)(param_1 + 0x140);
      *(undefined8 **)(param_1 + 0x140) = puVar9;
      goto LAB_1450c0545;
    }
    iVar8 = 0x34;
  }
  else {
LAB_1450c0545:
    if (*(longlong **)(param_1 + 0x138) == (longlong *)0x0) {
      *(undefined8 **)(param_1 + 0x130) = puVar9;
    }
    else {
      **(longlong **)(param_1 + 0x138) = (longlong)puVar9;
    }
    puVar9 = *(undefined8 **)(param_1 + 0x140);
    *(undefined8 **)(param_1 + 0x138) = puVar9;
    *(undefined8 *)(param_1 + 0x140) = *puVar9;
    *puVar9 = 0;
    *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 1;
    lVar1 = *(longlong *)(param_1 + 0x138);
    uVar5 = param_2[1];
    puVar9 = (undefined8 *)(lVar1 + 8);
    iVar8 = 0x34;
    if (puVar9 != (undefined8 *)0x0) {
      iVar8 = 1;
    }
    *puVar9 = *param_2;
    *(undefined8 *)(lVar1 + 0x10) = uVar5;
    uVar5 = param_2[3];
    *(undefined8 *)(lVar1 + 0x18) = param_2[2];
    *(undefined8 *)(lVar1 + 0x20) = uVar5;
    uVar5 = param_2[5];
    *(undefined8 *)(lVar1 + 0x28) = param_2[4];
    *(undefined8 *)(lVar1 + 0x30) = uVar5;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(undefined4 *)(param_2 + 7);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)(lVar1 + 0x3c) = uVar2;
    *(undefined4 *)(lVar1 + 0x40) = uVar3;
    *(undefined4 *)(lVar1 + 0x44) = uVar4;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x44);
    uVar3 = *(undefined4 *)(param_2 + 9);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x4c);
    *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(lVar1 + 0x4c) = uVar2;
    *(undefined4 *)(lVar1 + 0x50) = uVar3;
    *(undefined4 *)(lVar1 + 0x54) = uVar4;
    if ((puVar9 == (undefined8 *)0x0) || (param_2[4] == 0)) {
      if (iVar8 == 1) goto LAB_1450c068a;
    }
    else {
      iVar8 = FUN_145390f10(param_1 + 0xf0,param_2[5]);
      if (iVar8 == 1) {
LAB_1450c068a:
        FUN_1450bc550(param_1,param_2);
        SetEvent(*(HANDLE *)(param_1 + 0xf8));
        goto LAB_1450c06b2;
      }
      uVar10 = *(int *)(param_1 + 0x154) - 1;
      if (uVar10 < *(uint *)(param_1 + 0x154)) {
        puVar7 = *(undefined8 **)(param_1 + 0x130);
        puVar9 = (undefined8 *)0x0;
        for (; puVar6 = puVar7, uVar10 != 0; uVar10 = uVar10 - 1) {
          puVar7 = (undefined8 *)*puVar6;
          puVar9 = puVar6;
        }
        if (puVar6 == *(undefined8 **)(param_1 + 0x130)) {
          *(undefined8 *)(param_1 + 0x130) = *puVar6;
        }
        else {
          *puVar9 = *puVar6;
        }
        if (puVar6 == *(undefined8 **)(param_1 + 0x138)) {
          *(undefined8 **)(param_1 + 0x138) = puVar9;
        }
        if ((puVar6 < *(undefined8 **)(param_1 + 0x148)) ||
           (*(undefined8 **)(param_1 + 0x148) + (ulonglong)*(uint *)(param_1 + 0x150) * 0xb <=
            puVar6)) {
          AK::MemoryMgr::Free(0,puVar6);
          *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + -1;
        }
        else {
          *puVar6 = *(undefined8 *)(param_1 + 0x140);
          *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + -1;
          *(undefined8 **)(param_1 + 0x140) = puVar6;
        }
      }
    }
  }
  FUN_1450b5b80(param_2 + 2);
LAB_1450c06b2:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  return iVar8;
}



// FUNCTION 1450c06e0 FUN_1450c06e0 body=43 status=ok
// SIG undefined FUN_1450c06e0(void)

int FUN_1450c06e0(undefined8 param_1,longlong param_2)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  *(HANDLE *)(param_2 + 8) = pvVar1;
  return 2 - (uint)(pvVar1 != (HANDLE)0x0);
}



// FUNCTION 1450c0710 FUN_1450c0710 body=109 status=ok
// SIG undefined FUN_1450c0710(void)

int FUN_1450c0710(undefined8 param_1,int *param_2,int param_3)

{
  if (param_3 != 1) {
    if (*(HANDLE *)(param_2 + 2) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_2 + 2));
    }
    param_2[2] = 0;
    param_2[3] = 0;
    return param_3;
  }
  WaitForSingleObject(*(HANDLE *)(param_2 + 2),0xffffffff);
  if (*(HANDLE *)(param_2 + 2) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_2 + 2));
  }
  param_2[2] = 0;
  param_2[3] = 0;
  return *param_2;
}



// FUNCTION 1450c0780 FUN_1450c0780 body=108 status=ok
// SIG undefined FUN_1450c0780(void)

void FUN_1450c0780(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 0x100) = 1;
  puVar1 = (undefined8 *)(param_1 + 0xf8);
  if (DAT_14c79c360 != (HANDLE)0x0) {
    SetEvent((HANDLE)*puVar1);
    WaitForSingleObject(DAT_14c79c360,0xffffffff);
    CloseHandle(DAT_14c79c360);
    DAT_14c79c360 = (HANDLE)0x0;
  }
  if ((HANDLE)*puVar1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*puVar1);
  }
  *puVar1 = 0;
  return;
}



// FUNCTION 1450c0810 FUN_1450c0810 body=310 status=ok
// SIG undefined FUN_1450c0810(void)

undefined8 FUN_1450c0810(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  iVar1 = *(int *)(param_1 + 0x154);
  while (iVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x130);
    local_58 = puVar2[1];
    uStack_50 = puVar2[2];
    local_48 = puVar2[3];
    uStack_40 = puVar2[4];
    local_38 = puVar2[5];
    uStack_30 = puVar2[6];
    local_28 = puVar2[7];
    uStack_20 = puVar2[8];
    local_18 = *(undefined4 *)(puVar2 + 9);
    uStack_14 = *(undefined4 *)((longlong)puVar2 + 0x4c);
    uStack_10 = *(undefined4 *)(puVar2 + 10);
    uStack_c = *(undefined4 *)((longlong)puVar2 + 0x54);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x130) = *puVar2;
      if (puVar2 == *(undefined8 **)(param_1 + 0x138)) {
        *(undefined8 *)(param_1 + 0x138) = 0;
      }
      if ((puVar2 < *(undefined8 **)(param_1 + 0x148)) ||
         (*(undefined8 **)(param_1 + 0x148) + (ulonglong)*(uint *)(param_1 + 0x150) * 0xb <= puVar2)
         ) {
        AK::MemoryMgr::Free(0,puVar2);
      }
      else {
        *puVar2 = *(undefined8 *)(param_1 + 0x140);
        *(undefined8 **)(param_1 + 0x140) = puVar2;
      }
      *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + -1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
    FUN_1450bbcb0(param_1,&local_58);
    FUN_1450b5b80(&local_48);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
    iVar1 = *(int *)(param_1 + 0x154);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  return 1;
}



// FUNCTION 1450c0950 FUN_1450c0950 body=107 status=ok
// SIG undefined FUN_1450c0950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1450c0950(longlong *param_1)

{
  char cVar1;
  
  AK::MemoryMgr::InitForThread();
  _DAT_14c79c368 = GetCurrentThreadId();
  WaitForSingleObject((HANDLE)param_1[0x1f],0xffffffff);
  cVar1 = (char)param_1[0x20];
  while (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x30))(param_1);
    AK::MemoryMgr::TrimForThread();
    WaitForSingleObject((HANDLE)param_1[0x1f],0xffffffff);
    cVar1 = (char)param_1[0x20];
  }
  AK::MemoryMgr::TermForThread();
  return 0;
}



// FUNCTION 1450c09c0 FUN_1450c09c0 body=78 status=ok
// SIG undefined FUN_1450c09c0(void)

undefined8 * FUN_1450c09c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c26b48;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x21));
  FUN_1450b6780(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 1450c0a10 FUN_1450c0a10 body=247 status=ok
// SIG undefined FUN_1450c0a10(void)

undefined8 FUN_1450c0a10(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  __uint64 _Var5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  iVar2 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar2 = 1;
  }
  _Var5 = (ulonglong)(iVar2 + uVar1) * 0x28;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var5);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && (pvVar3 = pvVar4, (void *)*param_1 != pvVar4)) {
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          if (pvVar3 != (void *)0x0) {
            FUN_14538eae0(pvVar3);
          }
          FUN_14538eb80(pvVar3,(longlong)pvVar3 + (*param_1 - (longlong)pvVar4));
          FUN_14538eb00();
          pvVar3 = (void *)((longlong)pvVar3 + 0x28);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450c0aef;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var5);
    if (pvVar4 != (void *)0x0) {
LAB_1450c0aef:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar2 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450c0b10 FUN_1450c0b10 body=889 status=ok
// SIG undefined FUN_1450c0b10(void)

undefined8 * FUN_1450c0b10(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *pvVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *local_res10;
  uint local_res18;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  plVar1 = param_1 + 0xd;
  local_res10 = param_2;
  if ((void *)*plVar1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xe) = 0;
    AK::MemoryMgr::Free(0,(void *)*plVar1);
    *plVar1 = 0;
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar6 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  uVar6 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  uVar6 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar6;
  uVar6 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar6;
  uVar6 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar6;
  uVar6 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar6;
  uVar6 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar6;
  uVar6 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar6;
  uVar6 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar6;
  uVar6 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar6;
  uVar6 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar6;
  param_1[0x18] = param_2[0x18];
  *plVar1 = 0;
  param_1[0xe] = 0;
  local_res18 = *(uint *)(param_2 + 0xe);
  if (local_res18 != 0) {
    puVar8 = (uint *)(param_2 + 0xe);
    if (*(uint *)((longlong)param_1 + 0x74) < local_res18) {
      uVar14 = (ulonglong)*(uint *)(param_1 + 0xe);
      pvVar7 = AK::MemoryMgr::Malloc(0,(ulonglong)local_res18 << 4);
      puVar8 = (uint *)(param_2 + 0xe);
      if (pvVar7 != (void *)0x0) {
        puVar8 = (uint *)(param_2 + 0xe);
        if (((void *)*plVar1 != (void *)0x0) &&
           (puVar8 = (uint *)(param_2 + 0xe), (void *)*plVar1 != pvVar7)) {
          uVar13 = 0;
          if (3 < uVar14) {
            puVar10 = (undefined4 *)((longlong)pvVar7 + 0x18);
            lVar15 = -(longlong)pvVar7;
            lVar11 = lVar15 + -0x18;
            lVar12 = (uVar14 - 4 >> 2) + 1;
            uVar13 = lVar12 * 4;
            do {
              puVar2 = puVar10 + -6;
              if (puVar2 != (undefined4 *)0x0) {
                *puVar2 = 0;
                *(undefined8 *)(puVar10 + -5) = 0;
              }
              lVar3 = *plVar1;
              puVar9 = puVar10 + -2;
              *puVar2 = *(undefined4 *)((longlong)puVar10 + lVar3 + lVar11);
              puVar10[-5] = *(undefined4 *)((longlong)puVar10 + lVar3 + lVar15 + -0x14);
              puVar10[-4] = *(undefined4 *)((longlong)puVar10 + lVar3 + lVar15 + -0x10);
              puVar10[-3] = *(undefined4 *)((longlong)puVar10 + lVar3 + lVar15 + -0xc);
              if (puVar9 != (undefined4 *)0x0) {
                *puVar9 = 0;
                *(undefined8 *)(puVar10 + -1) = 0;
              }
              lVar4 = *plVar1;
              *puVar9 = *(undefined4 *)((longlong)puVar10 + lVar4 + 0x10 + lVar11);
              lVar3 = (longlong)puVar10 + (8 - (longlong)pvVar7);
              puVar10[-1] = *(undefined4 *)((longlong)puVar10 + lVar4 + 0x14 + lVar11);
              *puVar10 = *(undefined4 *)((longlong)puVar10 + lVar4 + 0x18 + lVar11);
              puVar10[1] = *(undefined4 *)((longlong)puVar10 + lVar4 + 0x1c + lVar11);
              if (lVar3 + (longlong)pvVar7 != 0) {
                *(undefined8 *)(puVar10 + 2) = 0;
                puVar10[4] = 0;
              }
              lVar5 = *plVar1;
              puVar10[2] = *(undefined4 *)(lVar3 + lVar5);
              puVar10[3] = *(undefined4 *)(lVar3 + 4 + lVar5);
              puVar10[4] = *(undefined4 *)(lVar3 + 8 + lVar5);
              lVar4 = (0x18 - (longlong)pvVar7) + (longlong)puVar10;
              puVar10[5] = *(undefined4 *)(lVar3 + 0xc + lVar5);
              if (lVar4 + (longlong)pvVar7 != 0) {
                *(undefined8 *)(puVar10 + 6) = 0;
                puVar10[8] = 0;
              }
              lVar3 = *plVar1;
              puVar10[6] = *(undefined4 *)(lVar4 + lVar3);
              puVar10[7] = *(undefined4 *)(lVar4 + 4 + lVar3);
              puVar10[8] = *(undefined4 *)(lVar4 + 8 + lVar3);
              puVar10[9] = *(undefined4 *)(lVar4 + 0xc + lVar3);
              puVar10 = puVar10 + 0x10;
              lVar12 = lVar12 + -1;
              param_2 = local_res10;
            } while (lVar12 != 0);
          }
          if (uVar13 < uVar14) {
            puVar10 = (undefined4 *)(uVar13 * 0x10 + 8 + (longlong)pvVar7);
            lVar15 = uVar14 - uVar13;
            do {
              puVar2 = puVar10 + -2;
              if (puVar2 != (undefined4 *)0x0) {
                *puVar2 = 0;
                *(undefined8 *)(puVar10 + -1) = 0;
              }
              puVar9 = (undefined4 *)((longlong)puVar10 + *plVar1 + (-8 - (longlong)pvVar7));
              *puVar2 = *puVar9;
              puVar10[-1] = puVar9[1];
              *puVar10 = puVar9[2];
              puVar10[1] = puVar9[3];
              puVar10 = puVar10 + 4;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
          AK::MemoryMgr::Free(0,(void *)*plVar1);
          puVar8 = (uint *)(param_2 + 0xe);
        }
        *(uint *)((longlong)param_1 + 0x74) = local_res18;
        *plVar1 = (longlong)pvVar7;
      }
    }
    puVar10 = (undefined4 *)param_2[0xd];
    if (puVar10 != puVar10 + (ulonglong)*puVar8 * 4) {
      do {
        local_54 = puVar10[1];
        local_50 = puVar10[2];
        local_58 = *puVar10;
        lVar15 = FUN_1450899e0(param_1 + 0xd,&local_58,&local_res10);
        if (lVar15 != 0) {
          *(undefined4 *)(lVar15 + 0xc) = puVar10[3];
        }
        puVar10 = puVar10 + 4;
      } while (puVar10 != (undefined4 *)((ulonglong)*(uint *)(param_2 + 0xe) * 0x10 + param_2[0xd]))
      ;
    }
  }
  return param_1;
}



// FUNCTION 1450c0e90 FUN_1450c0e90 body=194 status=ok
// SIG undefined FUN_1450c0e90(void)

float FUN_1450c0e90(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  float *pfVar6;
  float fVar7;
  
  fVar7 = 0.0;
  if (((((char)param_1[1] == '\0') || (cVar2 = (**(code **)(*param_1 + 0x20))(), cVar2 == '\0')) ||
      (lVar3 = (**(code **)(*param_1 + 0x78))(param_1), lVar3 == 0)) ||
     (lVar3 = *(longlong *)(lVar3 + 8), lVar3 == 0)) {
    return 0.0;
  }
  do {
    puVar1 = *(ushort **)(lVar3 + 0x20);
    if (puVar1 != (ushort *)0x0) {
      uVar4 = 0;
      do {
        uVar5 = (int)uVar4 + 1;
        if (puVar1[uVar5] == param_2) {
          pfVar6 = (float *)(((ulonglong)((uint)*puVar1 * 2 + 9) & 0xfffffff8) + uVar4 * 0x10 +
                            (longlong)puVar1);
          if (pfVar6 != (float *)0x0) {
            fVar7 = fVar7 + *pfVar6;
          }
          break;
        }
        uVar4 = (ulonglong)uVar5;
      } while (uVar5 < *puVar1);
    }
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return fVar7;
    }
  } while( true );
}



// FUNCTION 1450c0f60 FUN_1450c0f60 body=509 status=ok
// SIG undefined FUN_1450c0f60(void)

undefined8 FUN_1450c0f60(void *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  __uint64 _Var6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x148);
  uVar9 = (ulonglong)uVar3;
  if (param_2 < uVar3) {
    lVar12 = (ulonglong)param_2 * 0x28;
    uVar9 = (ulonglong)(uVar3 - param_2);
    do {
      lVar10 = *(longlong *)((longlong)param_1 + 0x140) + lVar12;
      plVar8 = *(longlong **)(lVar10 + 0x18);
      plVar7 = plVar8;
      if (plVar8 != plVar8 + *(uint *)(lVar10 + 0x20)) {
        do {
          plVar8 = (longlong *)*plVar7;
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0x14);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar8 + 0x18))();
          }
          plVar8 = *(longlong **)(lVar10 + 0x18);
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar8 + *(uint *)(lVar10 + 0x20));
      }
      if (plVar8 != (longlong *)0x0) {
        *(undefined4 *)(lVar10 + 0x20) = 0;
        AK::MemoryMgr::Free(0,plVar8);
        *(undefined8 *)(lVar10 + 0x18) = 0;
        *(undefined4 *)(lVar10 + 0x24) = 0;
      }
      lVar12 = lVar12 + 0x28;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  else {
    if (*(uint *)((longlong)param_1 + 0x14c) < param_2) {
      _Var6 = (ulonglong)param_2 * 0x28;
      pvVar4 = param_1;
      if (0x140 < _Var6) {
        pvVar4 = AK::MemoryMgr::Malign(0,_Var6,1);
      }
      if (pvVar4 == (void *)0x0) {
        return 0;
      }
      plVar8 = (longlong *)((longlong)param_1 + 0x140);
      if (((void *)*plVar8 != (void *)0x0) && ((void *)*plVar8 != pvVar4)) {
        if (uVar9 != 0) {
          lVar12 = (longlong)pvVar4 + 0x24;
          uVar11 = uVar9;
          do {
            puVar5 = (undefined8 *)(lVar12 + -0x24);
            if (puVar5 != (undefined8 *)0x0) {
              *puVar5 = 0;
              *(undefined8 *)(lVar12 + -0x1c) = 0;
              *(undefined4 *)(lVar12 + -0x14) = 0;
              *(undefined8 *)(lVar12 + -0xc) = 0;
              *(undefined8 *)(lVar12 + -4) = 0;
            }
            lVar10 = (-0x24 - (longlong)pvVar4) + lVar12;
            FUN_145089e70(puVar5,*plVar8 + lVar10);
            FUN_145089f00(*plVar8 + lVar10,0);
            lVar12 = lVar12 + 0x28;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if (param_1 != *(void **)((longlong)param_1 + 0x140)) {
          AK::MemoryMgr::Free(0,*(void **)((longlong)param_1 + 0x140));
        }
      }
      *(void **)((longlong)param_1 + 0x140) = pvVar4;
      *(uint *)((longlong)param_1 + 0x14c) = param_2;
    }
    if (uVar9 < param_2) {
      lVar12 = uVar9 * 0x28;
      lVar10 = param_2 - uVar9;
      do {
        puVar5 = (undefined8 *)(*(longlong *)((longlong)param_1 + 0x140) + lVar12);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0;
          puVar5[1] = 0;
          *(undefined4 *)(puVar5 + 2) = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
        }
        lVar12 = lVar12 + 0x28;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  *(uint *)((longlong)param_1 + 0x148) = param_2;
  return 1;
}



// FUNCTION 1450c1160 FUN_1450c1160 body=484 status=ok
// SIG undefined FUN_1450c1160(void)

void FUN_1450c1160(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x240);
  uVar3 = *(undefined4 *)(param_2 + 0x24c);
  uVar4 = *(undefined4 *)(param_2 + 0x250);
  uVar5 = *(undefined4 *)(param_2 + 0x254);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x24c) = uVar3;
  *(undefined4 *)(param_1 + 0x250) = uVar4;
  *(undefined4 *)(param_1 + 0x254) = uVar5;
  FUN_1450c0b10();
  uVar3 = *(undefined4 *)(param_2 + 0xdc);
  uVar4 = *(undefined4 *)(param_2 + 0xe0);
  uVar5 = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = uVar3;
  *(undefined4 *)(param_1 + 0xe0) = uVar4;
  *(undefined4 *)(param_1 + 0xe4) = uVar5;
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  uVar7 = *(uint *)(param_2 + 0xd0);
  uVar12 = (ulonglong)uVar7;
  if ((uVar7 != 0) &&
     (((uVar7 < *(uint *)(param_1 + 0xd0) || (uVar7 <= *(uint *)(param_1 + 0xd4))) ||
      (cVar6 = FUN_145089db0(param_1 + 200), cVar6 != '\0')))) {
    *(uint *)(param_1 + 0xd0) = uVar7;
    lVar13 = 0;
    do {
      lVar1 = *(longlong *)(param_2 + 200);
      lVar2 = *(longlong *)(param_1 + 200);
      puVar10 = (undefined4 *)(lVar13 + lVar1);
      uVar3 = puVar10[1];
      uVar4 = puVar10[2];
      uVar5 = puVar10[3];
      puVar11 = (undefined4 *)(lVar13 + lVar2);
      *puVar11 = *puVar10;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      *(undefined8 *)(lVar13 + 0x10 + lVar2) = *(undefined8 *)(lVar13 + 0x10 + lVar1);
      uVar12 = uVar12 - 1;
      lVar13 = lVar13 + 0x18;
    } while (uVar12 != 0);
  }
  uVar7 = *(uint *)(param_2 + 0x238);
  if ((uVar7 != 0) && (cVar6 = FUN_1450c0f60(param_1 + 0xf0,uVar7), cVar6 != '\0')) {
    lVar13 = 0;
    uVar12 = (ulonglong)uVar7;
    do {
      puVar11 = (undefined4 *)(*(longlong *)(param_2 + 0x230) + lVar13);
      puVar10 = (undefined4 *)(*(longlong *)(param_1 + 0x230) + lVar13);
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      uVar5 = puVar11[3];
      *puVar10 = *puVar11;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar11 + 4);
      puVar10[8] = 0;
      uVar7 = puVar11[8];
      if ((uVar7 <= (uint)puVar10[9]) ||
         (cVar6 = FUN_14507d5a0(puVar10 + 6,uVar7 - puVar10[9]), cVar6 != '\0')) {
        uVar8 = 0;
        puVar10[8] = uVar7;
        if (puVar11[8] != 0) {
          do {
            lVar1 = uVar8 * 8;
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
            *(undefined8 *)(lVar1 + *(longlong *)(puVar10 + 6)) =
                 *(undefined8 *)(lVar1 + *(longlong *)(puVar11 + 6));
          } while (uVar7 < (uint)puVar11[8]);
        }
        plVar9 = *(longlong **)(puVar10 + 6);
        if (plVar9 != plVar9 + (uint)puVar10[8]) {
          do {
            LOCK();
            *(int *)(*plVar9 + 0x14) = *(int *)(*plVar9 + 0x14) + 1;
            UNLOCK();
            plVar9 = plVar9 + 1;
          } while (plVar9 != (longlong *)
                             (*(longlong *)(puVar10 + 6) + (ulonglong)(uint)puVar10[8] * 8));
        }
      }
      lVar13 = lVar13 + 0x28;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}



// FUNCTION 1450c1350 FUN_1450c1350 body=197 status=ok
// SIG undefined FUN_1450c1350(void)

undefined8 FUN_1450c1350(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  byte local_res10 [8];
  
  if ((*(char *)(param_2 + 0x98) == -0x70) && (*(char *)(param_2 + 0x9d) != '\0')) {
    local_res10[0] = *(byte *)(param_2 + 0x310) & 1;
    uVar1 = FUN_1450e98e0(param_2);
    uVar2 = FUN_14536f6c0(param_1,param_2 + 0x98,uVar1,local_res10,*(undefined8 *)(param_2 + 0x10),
                          *(undefined4 *)(param_2 + 0x34));
    if ((int)uVar2 != 1) {
      return uVar2;
    }
    *(byte *)(param_2 + 0x310) = *(byte *)(param_2 + 0x310) & 0xfe;
    *(byte *)(param_2 + 0x310) = *(byte *)(param_2 + 0x310) | local_res10[0] & 1;
  }
  uVar2 = FUN_14536f160(param_1,param_2);
  if ((int)uVar2 != 3) {
    if ((int)uVar2 == 1) {
      uVar2 = (**(code **)(*param_1 + 0x250))(param_1,param_2);
    }
    return uVar2;
  }
  return 1;
}



// FUNCTION 1450c15a0 FUN_1450c15a0 body=258 status=ok
// SIG undefined FUN_1450c15a0(void)

undefined8 FUN_1450c15a0(void *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  __uint64 _Var4;
  ulonglong uVar5;
  uint uVar6;
  
  pvVar2 = *(void **)((longlong)param_1 + 8);
  uVar6 = *(int *)((longlong)param_1 + 0x14) + param_2;
  uVar1 = *(uint *)((longlong)param_1 + 0x10);
  _Var4 = (ulonglong)uVar6 << 3;
  pvVar3 = param_1;
  if (pvVar2 == (void *)0x0) {
    if (8 < _Var4) {
      pvVar3 = AK::MemoryMgr::Malign(0,_Var4,1);
    }
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    if ((*(void **)((longlong)param_1 + 8) != (void *)0x0) &&
       (*(void **)((longlong)param_1 + 8) != pvVar3)) {
      uVar5 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar3 + uVar5 * 8) =
               *(undefined8 *)(*(longlong *)((longlong)param_1 + 8) + uVar5 * 8);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
      }
      if (param_1 != *(void **)((longlong)param_1 + 8)) {
        AK::MemoryMgr::Free(0,*(void **)((longlong)param_1 + 8));
      }
    }
  }
  else {
    if (8 < _Var4) {
      if (param_1 == pvVar2) {
        pvVar3 = AK::MemoryMgr::Malign(0,_Var4,1);
        if (pvVar3 == (void *)0x0) {
          return 0;
        }
        memcpy(pvVar3,param_1,(ulonglong)(uVar1 * 8));
        goto LAB_1450c1684;
      }
      pvVar3 = AK::MemoryMgr::ReallocAligned(0,pvVar2,_Var4,1);
    }
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
  }
LAB_1450c1684:
  *(void **)((longlong)param_1 + 8) = pvVar3;
  *(uint *)((longlong)param_1 + 0x14) = uVar6;
  return 1;
}



// FUNCTION 1450c16b0 FUN_1450c16b0 body=270 status=ok
// SIG undefined FUN_1450c16b0(void)

longlong FUN_1450c16b0(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  void *_Src;
  
  lVar4 = FUN_1450c17c0();
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x14);
  if (lVar4 == 0) {
    if (uVar1 <= uVar5) {
      if (uVar1 == 0) {
        iVar3 = 1;
      }
      else {
        iVar3 = (uVar1 >> 1) + uVar1;
      }
      cVar2 = FUN_1450c15a0(param_1,iVar3);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    if (uVar5 < *(uint *)(param_1 + 0x14)) {
      uVar5 = *(uint *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x10) = uVar5 + 1;
      return *(longlong *)(param_1 + 8) + (ulonglong)uVar5 * 8;
    }
    return 0;
  }
  uVar6 = lVar4 - *(longlong *)(param_1 + 8) >> 3;
  if (uVar1 <= uVar5) {
    iVar3 = (uVar1 >> 1) + uVar1;
    if (uVar1 == 0) {
      iVar3 = 1;
    }
    cVar2 = FUN_1450c15a0(param_1,iVar3);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  if (*(uint *)(param_1 + 0x14) <= uVar5) {
    return 0;
  }
  uVar5 = (uint)uVar6;
  lVar4 = (uVar6 & 0xffffffff) * 8;
  _Src = (void *)(*(longlong *)(param_1 + 8) + lVar4);
  if (uVar5 < *(uint *)(param_1 + 0x10)) {
    memmove((void *)((longlong)_Src + 8),_Src,(ulonglong)((*(uint *)(param_1 + 0x10) - uVar5) * 8));
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return *(longlong *)(param_1 + 8) + lVar4;
}



// FUNCTION 1450c17c0 FUN_1450c17c0 body=159 status=ok
// SIG undefined FUN_1450c17c0(void)

longlong FUN_1450c17c0(longlong param_1,uint param_2,undefined1 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 8);
  iVar7 = 0;
  if (uVar6 != 0) {
    do {
      iVar4 = (uVar6 >> 1) + iVar7;
      lVar2 = (longlong)iVar4 * 8;
      uVar3 = *(uint *)(*(longlong *)(lVar2 + *plVar1) + 0x20);
      if (uVar3 == param_2) {
        *param_3 = 1;
        return *plVar1 + lVar2;
      }
      uVar5 = uVar6 - 1;
      iVar4 = iVar4 + 1;
      if (param_2 <= uVar3) {
        uVar5 = uVar6;
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      uVar6 = uVar5 >> 1;
    } while (uVar6 != 0);
  }
  *param_3 = 0;
  return *plVar1 + (longlong)iVar7 * 8;
}



// FUNCTION 1450c1870 FUN_1450c1870 body=118 status=ok
// SIG undefined FUN_1450c1870(void)

ulonglong FUN_1450c1870(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  uVar1 = (**(code **)(*param_1 + 0x270))();
  if ((int)uVar1 == 1) {
    puVar2 = (undefined8 *)FUN_1450c16b0(param_1 + 0x1e,(int)param_2[4],local_res8);
    if (puVar2 == (undefined8 *)0x0) {
      return 2;
    }
    *puVar2 = param_2;
    (**(code **)(*param_2 + 0x20))(param_2,param_1);
    LOCK();
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    UNLOCK();
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 1450c18f0 FUN_1450c18f0 body=138 status=ok
// SIG undefined FUN_1450c18f0(void)

void FUN_1450c18f0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  void *_Dst;
  
  if (param_2[0xf] == param_1) {
    (**(code **)(*param_2 + 0x20))(param_2,0);
    _Dst = (void *)FUN_14508a500(param_1 + 0xf0,(int)param_2[4]);
    if (_Dst != (void *)0x0) {
      pvVar2 = (void *)(*(longlong *)(param_1 + 0xf8) +
                       (ulonglong)(*(int *)(param_1 + 0x100) - 1) * 8);
      if (_Dst < pvVar2) {
        memmove(_Dst,(void *)((longlong)_Dst + 8),(ulonglong)((int)pvVar2 - (int)_Dst & 0xfffffff8))
        ;
      }
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + -1;
    }
    LOCK();
    piVar1 = (int *)(param_1 + 0x24);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))();
    }
  }
  return;
}



// FUNCTION 1450c1980 FUN_1450c1980 body=50 status=ok
// SIG undefined FUN_1450c1980(void)

void FUN_1450c1980(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14508a500(param_1 + 0x1e);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001450c19a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x50))(param_1,*puVar1);
    return;
  }
  return;
}



// FUNCTION 1450c19c0 FUN_1450c19c0 body=209 status=ok
// SIG undefined FUN_1450c19c0(void)

void FUN_1450c19c0(longlong param_1,uint *param_2,longlong param_3,uint *param_4,int param_5)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xf8);
  if (plVar1 != plVar1 + *(uint *)(param_1 + 0x100)) {
    do {
      if (*param_4 < *param_2) {
        *(undefined4 *)(param_3 + (ulonglong)*param_4 * 0xc) = *(undefined4 *)(*plVar1 + 0x20);
        *(undefined4 *)(param_3 + 4 + (ulonglong)*param_4 * 0xc) =
             *(undefined4 *)(*(longlong *)(*plVar1 + 0x78) + 0x20);
        *(int *)(param_3 + 8 + (ulonglong)*param_4 * 0xc) = param_5;
      }
      *param_4 = *param_4 + 1;
    } while (((*param_4 != *param_2) &&
             ((**(code **)(*(longlong *)*plVar1 + 0x60))
                        ((longlong *)*plVar1,param_2,param_3,param_4,param_5 + 1),
             *param_4 != *param_2)) &&
            (plVar1 = plVar1 + 1,
            plVar1 != (longlong *)
                      (*(longlong *)(param_1 + 0xf8) + (ulonglong)*(uint *)(param_1 + 0x100) * 8)));
  }
  return;
}


