// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148f9b2a6 FUN_148f9b2a6 body=1019 status=ok
// SIG undefined FUN_148f9b2a6(void)

undefined8 *
FUN_148f9b2a6(longlong param_1,undefined8 *param_2,wchar_t *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_88 [36];
  char local_64;
  undefined2 local_63;
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == (wchar_t *)0x0) {
LAB_148f9b46e:
    lVar6 = *(longlong *)(param_1 + 0xa0);
    FUN_140056680(param_2,param_3);
    FUN_140056680(param_2 + 2,param_4);
    param_2[4] = 0;
    param_2[5] = 0;
    *(undefined4 *)(param_2 + 6) = 0x33;
    param_2[7] = 0;
    param_2[8] = 0;
    if (lVar6 == 0) {
      plVar5 = (longlong *)FUN_14001cc68(0x20,0x10);
      plVar5[1] = (longlong)&DAT_100000001;
      *plVar5 = (longlong)&PTR_FUN_14ba3c350;
      plVar5[2] = (longlong)&PTR_FUN_14ba3c280;
      *(undefined4 *)(plVar5 + 3) = 0xfffffffe;
      *(undefined2 *)((longlong)plVar5 + 0x1c) = 0;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar7 = plVar5 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
        LOCK();
        plVar7 = plVar5 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      plVar7 = plVar5 + 2;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0xa0);
      plVar5 = *(longlong **)(param_1 + 0xa8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
    iVar4 = *(int *)(param_2 + 8);
    lVar6 = (longlong)iVar4;
    *(uint *)(param_2 + 8) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0x44) < iVar4 + 1U) {
      FUN_1417236ea(param_2 + 7,iVar4);
    }
    lVar3 = param_2[7];
    *(undefined1 *)(lVar3 + lVar6 * 0x28) = 0;
    *(undefined2 *)(lVar3 + 1 + lVar6 * 0x28) = local_63;
    *(undefined1 *)(lVar3 + 3 + lVar6 * 0x28) = local_61;
    *(undefined8 *)(lVar3 + 4 + lVar6 * 0x28) = param_6;
    *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x28) = param_7;
    *(undefined8 *)(lVar3 + 0x10 + lVar6 * 0x28) = 0;
    *(longlong **)(lVar3 + 0x18 + lVar6 * 0x28) = plVar7;
    *(longlong **)(lVar3 + 0x20 + lVar6 * 0x28) = plVar5;
    if (plVar5 == (longlong *)0x0) {
      *(undefined4 *)(param_2 + 6) = 0;
      goto LAB_148f9b628;
    }
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(undefined4 *)(param_2 + 6) = 0;
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_148f9b628;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_148f9b628;
    lVar6 = *plVar5;
  }
  else {
    iVar4 = wcscmp(param_3,L"127.0.0.1");
    if (iVar4 == 0) goto LAB_148f9b46e;
    local_64 = '\0';
    plVar5 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14ba3c350;
    plVar5[2] = (longlong)&PTR_FUN_14ba3c280;
    *(undefined4 *)(plVar5 + 3) = 0;
    *(undefined2 *)((longlong)plVar5 + 0x1c) = 0;
    FUN_141698816(plVar5 + 2,param_3,&local_64);
    if (local_64 == '\0') {
      *param_2 = 0;
      param_2[1] = 0;
      FUN_140056680(param_2 + 2,param_4);
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      *(undefined4 *)(param_2 + 6) = 0x30;
    }
    else {
      FUN_140056680(param_2,param_3);
      FUN_140056680(param_2 + 2,param_4);
      param_2[4] = 0;
      param_2[5] = 0;
      *(undefined4 *)(param_2 + 6) = 0x33;
      param_2[7] = 0;
      param_2[8] = 0;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar7 = plVar5 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      iVar4 = *(int *)(param_2 + 8);
      lVar6 = (longlong)iVar4;
      *(uint *)(param_2 + 8) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0x44) < iVar4 + 1U) {
        FUN_1417236ea(param_2 + 7,iVar4);
      }
      lVar3 = param_2[7];
      *(undefined1 *)(lVar3 + lVar6 * 0x28) = 0;
      *(undefined2 *)(lVar3 + 1 + lVar6 * 0x28) = local_63;
      *(undefined1 *)(lVar3 + 3 + lVar6 * 0x28) = local_61;
      *(undefined8 *)(lVar3 + 4 + lVar6 * 0x28) = param_6;
      *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x28) = param_7;
      *(undefined8 *)(lVar3 + 0x10 + lVar6 * 0x28) = 0;
      *(longlong **)(lVar3 + 0x18 + lVar6 * 0x28) = plVar5 + 2;
      *(longlong **)(lVar3 + 0x20 + lVar6 * 0x28) = plVar5;
      if (plVar5 == (longlong *)0x0) {
        *(undefined4 *)(param_2 + 6) = 0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *(undefined4 *)(param_2 + 6) = 0;
        LOCK();
        plVar7 = plVar5 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
    }
    if (plVar5 == (longlong *)0x0) goto LAB_148f9b628;
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_148f9b628;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_148f9b628;
    lVar6 = *plVar5;
  }
  (**(code **)(lVar6 + 0x10))(plVar5);
LAB_148f9b628:
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9b6a2 FUN_148f9b6a2 body=51 status=ok
// SIG undefined FUN_148f9b6a2(void)

undefined8 FUN_148f9b6a2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
  return 0;
}



// FUNCTION 148f9b6d6 FUN_148f9b6d6 body=91 status=ok
// SIG undefined FUN_148f9b6d6(void)

void FUN_148f9b6d6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  (**(code **)(*param_2 + 0x10))();
  if (0 < (int)*(uint *)(param_1 + 0x88)) {
    plVar3 = (longlong *)(param_1 + 0x80);
    lVar1 = 0;
    uVar2 = 0;
    do {
      if (*(longlong **)(*plVar3 + lVar1) == param_2) {
        FUN_148f9b94c(plVar3);
        FUN_148f9b9c2(plVar3);
        return;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (*(uint *)(param_1 + 0x88) != uVar2);
  }
  return;
}



// FUNCTION 148f9b760 FUN_148f9b760 body=45 status=ok
// SIG undefined FUN_148f9b760(void)

longlong FUN_148f9b760(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a25e5e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9b794 FUN_148f9b794 body=45 status=ok
// SIG undefined FUN_148f9b794(void)

longlong FUN_148f9b794(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145918d2a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9b7c2 FUN_148f9b7c2 body=45 status=ok
// SIG undefined FUN_148f9b7c2(void)

longlong FUN_148f9b7c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a25e5e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9b7f0 FUN_148f9b7f0 body=45 status=ok
// SIG undefined FUN_148f9b7f0(void)

longlong FUN_148f9b7f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145918d2a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9b81e FUN_148f9b81e body=38 status=ok
// SIG undefined FUN_148f9b81e(void)

undefined8 FUN_148f9b81e(undefined8 param_1,int param_2)

{
  FUN_145a06132();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9b844 FUN_148f9b844 body=29 status=ok
// SIG undefined FUN_148f9b844(void)

undefined8 FUN_148f9b844(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9b86a FUN_148f9b86a body=44 status=ok
// SIG undefined FUN_148f9b86a(void)

longlong * FUN_148f9b86a(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 1) = (int)param_2[1];
  uVar1 = (**(code **)(*param_2 + 0x38))(param_2);
  (**(code **)(*param_1 + 0x28))(param_1,uVar1);
  return param_1;
}



// FUNCTION 148f9b896 FUN_148f9b896 body=48 status=ok
// SIG undefined FUN_148f9b896(void)

void FUN_148f9b896(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148f9b8c6 FUN_148f9b8c6 body=132 status=ok
// SIG undefined FUN_148f9b8c6(void)

void FUN_148f9b8c6(longlong param_1,int param_2)

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



// FUNCTION 148f9b94c FUN_148f9b94c body=118 status=ok
// SIG undefined FUN_148f9b94c(void)

void FUN_148f9b94c(longlong *param_1,uint param_2)

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



// FUNCTION 148f9b9c2 FUN_148f9b9c2 body=62 status=ok
// SIG undefined FUN_148f9b9c2(void)

void FUN_148f9b9c2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148f9ba00(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148f9ba00 FUN_148f9ba00 body=93 status=ok
// SIG undefined FUN_148f9ba00(void)

ulonglong FUN_148f9ba00(uint param_1,uint param_2)

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



// FUNCTION 148f9ba5e FUN_148f9ba5e body=31 status=ok
// SIG undefined FUN_148f9ba5e(void)

undefined8 FUN_148f9ba5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9ba8e FUN_148f9ba8e body=93 status=ok
// SIG undefined FUN_148f9ba8e(void)

void FUN_148f9ba8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6ba10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3c390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f9baec FUN_148f9baec body=93 status=ok
// SIG undefined FUN_148f9baec(void)

void FUN_148f9baec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6ba10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3c390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f9bb4a FUN_148f9bb4a body=126 status=ok
// SIG undefined FUN_148f9bb4a(void)

void FUN_148f9bb4a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6ba10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3c390;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f9bbb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f9bbd6 FUN_148f9bbd6 body=31 status=ok
// SIG undefined FUN_148f9bbd6(void)

undefined8 FUN_148f9bbd6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f9bbf6 FUN_148f9bbf6 body=31 status=ok
// SIG undefined FUN_148f9bbf6(void)

undefined8 FUN_148f9bbf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9bc32 FUN_148f9bc32 body=93 status=ok
// SIG undefined FUN_148f9bc32(void)

void FUN_148f9bc32(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3c400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f9bc90 FUN_148f9bc90 body=126 status=ok
// SIG undefined FUN_148f9bc90(void)

void FUN_148f9bc90(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3c400;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f9bcff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f9bd0e FUN_148f9bd0e body=21 status=ok
// SIG undefined FUN_148f9bd0e(void)

undefined8 FUN_148f9bd0e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f9bd2b FUN_148f9bd2b body=77 status=ok
// SIG undefined FUN_148f9bd2b(void)

void FUN_148f9bd2b(longlong param_1,int param_2)

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



// FUNCTION 148f9bd78 FUN_148f9bd78 body=300 status=ok
// SIG undefined FUN_148f9bd78(void)

undefined8 * FUN_148f9bd78(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb8))(*(longlong **)(param_1 + 0x18),&local_40);
  plVar4 = local_38;
  plVar3 = local_40;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb8))(*(longlong **)(param_1 + 0x18),&local_50);
    (**(code **)(*local_50 + 0x38))(local_50,&local_40,0,*(undefined8 *)(param_1 + 8));
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_48 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x18))(local_40,param_2,param_3);
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (local_40 != (longlong *)0x0) goto LAB_148f9be7f;
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_148f9be7f:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9bea6 FUN_148f9bea6 body=300 status=ok
// SIG undefined FUN_148f9bea6(void)

undefined8 * FUN_148f9bea6(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb8))(*(longlong **)(param_1 + 0x18),&local_40);
  plVar4 = local_38;
  plVar3 = local_40;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb8))(*(longlong **)(param_1 + 0x18),&local_50);
    (**(code **)(*local_50 + 0x38))(local_50,&local_40,0,*(undefined8 *)(param_1 + 8));
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_48 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x18))(local_40,param_2,param_3);
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (local_40 != (longlong *)0x0) goto LAB_148f9bfad;
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_148f9bfad:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9bfd4 FUN_148f9bfd4 body=102 status=ok
// SIG undefined FUN_148f9bfd4(void)

undefined8 * FUN_148f9bfd4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ba3d370;
  param_1[1] = *param_2;
  lVar3 = param_2[1];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 148f9c03a FUN_148f9c03a body=404 status=ok
// SIG undefined FUN_148f9c03a(void)

longlong FUN_148f9c03a(undefined8 param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  longlong **pplVar1;
  int *piVar2;
  longlong **pplVar3;
  longlong *plVar4;
  longlong **pplVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong **local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (longlong *)*param_2;
  pplVar5 = (longlong **)param_2[1];
  if (pplVar5 == (longlong **)0x0) {
    local_50 = (longlong **)0x0;
  }
  else {
    LOCK();
    *(int *)(pplVar5 + 1) = *(int *)(pplVar5 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(pplVar5 + 1) = *(int *)(pplVar5 + 1) + 1;
    UNLOCK();
    local_50 = pplVar5;
  }
  uVar7 = (**(code **)(*local_58 + 0x40))();
  iVar8 = FUN_1412f0ef2(param_3,uVar7,&local_58);
  pplVar3 = local_50;
  lVar9 = 0;
  if (iVar8 != -1) {
    lVar9 = (longlong)iVar8 * 0x28 + *param_3;
  }
  if (local_50 != (longlong **)0x0) {
    LOCK();
    pplVar1 = local_50 + 1;
    *(int *)pplVar1 = *(int *)pplVar1 + -1;
    UNLOCK();
    if (*(int *)pplVar1 == 0) {
      (*(code *)**local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)pplVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*pplVar3)[2])(pplVar3);
      }
    }
  }
  if (pplVar5 != (longlong **)0x0) {
    LOCK();
    pplVar3 = pplVar5 + 1;
    *(int *)pplVar3 = *(int *)pplVar3 + -1;
    UNLOCK();
    if (*(int *)pplVar3 == 0) {
      (*(code *)**pplVar5)(pplVar5);
      LOCK();
      piVar2 = (int *)((longlong)pplVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*pplVar5)[2])(pplVar5);
      }
    }
  }
  if (lVar9 == 0) {
    local_60 = (longlong *)FUN_148fa0a7d(param_2,param_1);
    local_68 = local_60 + 2;
    local_50 = &local_68;
    *(undefined4 *)(local_60 + 6) = param_4;
    local_58 = param_2;
    FUN_148fa0b14(param_3,&local_44);
    plVar6 = local_60;
    lVar9 = *param_3;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_60 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    lVar9 = lVar9 + (longlong)local_44 * 0x28;
  }
  else {
    *(undefined4 *)(*(longlong *)(lVar9 + 0x10) + 0x20) = param_4;
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar9 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9c1d0 FUN_148f9c1d0 body=254 status=ok
// SIG undefined FUN_148f9c1d0(void)

void FUN_148f9c1d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba3da90;
  FUN_148fa149e(plVar5 + 2,param_2,param_3,param_4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f9c2ce FUN_148f9c2ce body=254 status=ok
// SIG undefined FUN_148f9c2ce(void)

void FUN_148f9c2ce(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba3dc20;
  FUN_148fa1a80(plVar5 + 2,param_2,param_3,param_4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f9c3cc FUN_148f9c3cc body=254 status=ok
// SIG undefined FUN_148f9c3cc(void)

void FUN_148f9c3cc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba3dd70;
  FUN_148fa1dc4(plVar5 + 2,param_2,param_3,param_4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f9c4ca FUN_148f9c4ca body=633 status=ok
// SIG undefined FUN_148f9c4ca(void)

void FUN_148f9c4ca(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 uStack_8c;
  longlong *local_88;
  longlong *local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1408f45ee(&local_90,param_3);
  plVar6 = local_88;
  uVar5 = CONCAT44(uStack_8c,local_90);
  if (local_88 == (longlong *)0x0) {
    uVar9 = *(undefined8 *)(param_1 + 0x380);
    local_80 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_88 + 1) = (int)local_88[1] + 1;
    UNLOCK();
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_88 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar3 = (int *)((longlong)local_88 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_88 + 0x10))(local_88);
        }
      }
    }
    uVar9 = *(undefined8 *)(param_1 + 0x380);
    local_80 = local_88;
    LOCK();
    *(int *)(local_88 + 1) = (int)local_88[1] + 1;
    UNLOCK();
  }
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_4 + 1);
  lVar10 = (longlong)local_70;
  pvVar4 = (void *)*param_4;
  local_90 = param_2;
  local_88 = (longlong *)uVar5;
  if (lVar10 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar4,lVar10 * 2);
  }
  local_68 = 0;
  local_60 = 0;
  FUN_148fa2108(&local_68,param_6);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,5,0x10);
  puVar7 = local_58;
  pvVar4 = local_78;
  local_50 = 5;
  *local_58 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_58[2] = lVar8;
  *local_58 = &PTR_FUN_14ba3dec0;
  *(undefined4 *)(local_58 + 3) = local_90;
  local_58[4] = local_88;
  local_58[5] = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_58[6] = 0;
  lVar10 = (longlong)local_70;
  *(int *)(local_58 + 7) = local_70;
  if (lVar10 == 0) {
    *(undefined4 *)((longlong)local_58 + 0x3c) = 0;
  }
  else {
    puVar2 = local_58 + 6;
    FUN_1446dd670(puVar2,local_70,0);
    memcpy((void *)*puVar2,pvVar4,lVar10 * 2);
  }
  puVar7[8] = 0;
  *(undefined4 *)(puVar7 + 9) = 0;
  FUN_148fa2108(puVar7 + 8,&local_68);
  FUN_145c398c4(uVar9,&local_58);
  FUN_1449db362(&local_58);
  FUN_144382534(&local_90);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9c744 FUN_148f9c744 body=633 status=ok
// SIG undefined FUN_148f9c744(void)

void FUN_148f9c744(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 uStack_8c;
  longlong *local_88;
  longlong *local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1408f45ee(&local_90,param_3);
  plVar6 = local_88;
  uVar5 = CONCAT44(uStack_8c,local_90);
  if (local_88 == (longlong *)0x0) {
    uVar9 = *(undefined8 *)(param_1 + 0x380);
    local_80 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_88 + 1) = (int)local_88[1] + 1;
    UNLOCK();
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_88 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar3 = (int *)((longlong)local_88 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_88 + 0x10))(local_88);
        }
      }
    }
    uVar9 = *(undefined8 *)(param_1 + 0x380);
    local_80 = local_88;
    LOCK();
    *(int *)(local_88 + 1) = (int)local_88[1] + 1;
    UNLOCK();
  }
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_4 + 1);
  lVar10 = (longlong)local_70;
  pvVar4 = (void *)*param_4;
  local_90 = param_2;
  local_88 = (longlong *)uVar5;
  if (lVar10 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar4,lVar10 * 2);
  }
  local_68 = 0;
  local_60 = 0;
  FUN_148fa2108(&local_68,param_5);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,5,0x10);
  puVar7 = local_58;
  pvVar4 = local_78;
  local_50 = 5;
  *local_58 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_58[2] = lVar8;
  *local_58 = &PTR_FUN_14ba3df30;
  *(undefined4 *)(local_58 + 3) = local_90;
  local_58[4] = local_88;
  local_58[5] = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_58[6] = 0;
  lVar10 = (longlong)local_70;
  *(int *)(local_58 + 7) = local_70;
  if (lVar10 == 0) {
    *(undefined4 *)((longlong)local_58 + 0x3c) = 0;
  }
  else {
    puVar2 = local_58 + 6;
    FUN_1446dd670(puVar2,local_70,0);
    memcpy((void *)*puVar2,pvVar4,lVar10 * 2);
  }
  puVar7[8] = 0;
  *(undefined4 *)(puVar7 + 9) = 0;
  FUN_148fa2108(puVar7 + 8,&local_68);
  FUN_145c398c4(uVar9,&local_58);
  FUN_1449db362(&local_58);
  FUN_1443825c2(&local_90);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9c9be FUN_148f9c9be body=496 status=ok
// SIG undefined FUN_148f9c9be(void)

undefined8 FUN_148f9c9be(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1408f45ee(&local_50);
  uVar4 = *(undefined8 *)(param_1 + 0x380);
  local_78 = local_50;
  local_70 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  local_68 = (void *)0x0;
  local_60 = *(int *)(param_3 + 1);
  lVar8 = (longlong)local_60;
  pvVar5 = (void *)*param_3;
  if (lVar8 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,pvVar5,lVar8 * 2);
  }
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  local_58 = param_1;
  FUN_1446efa72(&local_40,0,4,0x10);
  puVar6 = local_40;
  pvVar5 = local_68;
  local_38 = 4;
  *local_40 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_40[2] = lVar7;
  *local_40 = &PTR_FUN_14ba3dfa0;
  local_40[3] = local_78;
  local_40[4] = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  local_40[5] = 0;
  lVar8 = (longlong)local_60;
  *(int *)(local_40 + 6) = local_60;
  if (lVar8 == 0) {
    *(undefined4 *)((longlong)local_40 + 0x34) = 0;
  }
  else {
    puVar1 = local_40 + 5;
    FUN_1446dd670(puVar1,local_60,0);
    memcpy((void *)*puVar1,pvVar5,lVar8 * 2);
  }
  puVar6[7] = local_58;
  FUN_145c398c4(uVar4,&local_40);
  FUN_1449db362(&local_40);
  FUN_144382650(&local_78);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)local_48 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9cbb0 FUN_148f9cbb0 body=254 status=ok
// SIG undefined FUN_148f9cbb0(void)

void FUN_148f9cbb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba3e130;
  FUN_148fa2204(plVar5 + 2,param_2,param_3,param_4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f9ccae FUN_148f9ccae body=254 status=ok
// SIG undefined FUN_148f9ccae(void)

void FUN_148f9ccae(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba3e280;
  FUN_148fa2548(plVar5 + 2,param_2,param_3,param_4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f9cdba FUN_148f9cdba body=106 status=ok
// SIG undefined FUN_148f9cdba(void)

undefined8 * FUN_148f9cdba(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    iVar1 = *(int *)(lVar2 + 600);
    _Src = *(void **)(lVar2 + 0x250);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  return param_2;
}



// FUNCTION 148f9ce24 FUN_148f9ce24 body=26 status=ok
// SIG undefined FUN_148f9ce24(void)

undefined8 FUN_148f9ce24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14020fad6(param_3,&DAT_149dfb77a);
  return 0;
}



// FUNCTION 148f9ce56 FUN_148f9ce56 body=217 status=ok
// SIG undefined FUN_148f9ce56(void)

undefined8 * FUN_148f9ce56(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x110))(param_1,&local_30);
  if (local_30 == 0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    (**(code **)(*param_1 + 0x100))(param_1,&local_48);
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x30))(local_48,param_2);
      goto LAB_148f9cec0;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_148f9cec0:
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9cf30 FUN_148f9cf30 body=156 status=ok
// SIG undefined FUN_148f9cf30(void)

void FUN_148f9cf30(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140056680(local_70,L"RevokeAuthToken not implemented");
  FUN_1489b73bc(local_60,local_70);
  plVar1 = (longlong *)*param_3;
  if (plVar1 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,local_60);
  }
  FUN_145c8db80(local_60);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9cfce FUN_148f9cfce body=32 status=ok
// SIG undefined FUN_148f9cfce(void)

undefined8 FUN_148f9cfce(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"shift");
  return param_2;
}



// FUNCTION 148f9cfee FUN_148f9cfee body=254 status=ok
// SIG undefined FUN_148f9cfee(void)

void FUN_148f9cfee(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba3eec0;
  FUN_148fa2fc0(plVar5 + 2,param_2,*param_3,param_4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f9d0ec FUN_148f9d0ec body=555 status=ok
// SIG undefined FUN_148f9d0ec(void)

undefined8
FUN_148f9d0ec(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar5 = *(int *)(param_4 + 1);
  if (iVar5 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_4;
  }
  iVar2 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar2 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar2,puVar6);
  iVar5 = FUN_1408f471e((longlong *)(param_1 + 0x40),uVar4,param_4);
  uVar10 = 1;
  if ((iVar5 == -1) ||
     (lVar7 = (longlong)iVar5 * 0x68 + *(longlong *)(param_1 + 0x40),
     plVar8 = (longlong *)(lVar7 + 0x10), plVar8 == (longlong *)0x0 || lVar7 == 0))
  goto LAB_148f9d160;
  FUN_1408f45ee(&local_48,param_2);
  plVar11 = local_40;
  if (local_40 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    local_30 = local_40;
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  uVar4 = (**(code **)(*local_48 + 0x40))();
  iVar5 = FUN_1408f4668(plVar8,uVar4,local_38);
  plVar3 = local_30;
  if (iVar5 == -1) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)iVar5 * 0x28 + *plVar8;
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_30 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar11 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  puVar9 = (undefined8 *)(lVar7 + 0x10);
  if (lVar7 == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_40 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if (puVar9 == (undefined8 *)0x0) goto LAB_148f9d160;
  uVar10 = *puVar9;
  plVar8 = (longlong *)puVar9[1];
  if (plVar8 == (longlong *)0x0) {
    *param_5 = uVar10;
    plVar11 = (longlong *)param_5[1];
    if (plVar11 != (longlong *)0x0) {
      param_5[1] = 0;
LAB_148f9d296:
      uVar10 = 0;
      LOCK();
      plVar8 = plVar11 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 != 0) goto LAB_148f9d160;
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar5 = *piVar1;
      UNLOCK();
      goto joined_r0x000148f9d310;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *param_5 = uVar10;
    plVar11 = (longlong *)param_5[1];
    if (plVar8 == plVar11) {
      uVar10 = 0;
      LOCK();
      plVar11 = plVar8 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 != 0) goto LAB_148f9d160;
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar5 = *piVar1;
      UNLOCK();
      plVar11 = plVar8;
joined_r0x000148f9d310:
      uVar10 = 0;
      if (iVar5 != 0) goto LAB_148f9d160;
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    else {
      param_5[1] = plVar8;
      if (plVar11 != (longlong *)0x0) goto LAB_148f9d296;
    }
  }
  uVar10 = 0;
LAB_148f9d160:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9d39e FUN_148f9d39e body=329 status=ok
// SIG undefined FUN_148f9d39e(void)

void FUN_148f9d39e(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_3;
  if ((lVar3 == 0) || (plVar6 = (longlong *)param_3[1], plVar6 == (longlong *)0x0)) {
    plVar6 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,4,0x10);
  local_40 = 4;
  *local_48 = &PTR_LAB_14ba3f940;
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
  *local_48 = &PTR_FUN_14ba3f8d0;
  local_48[3] = param_1;
  local_48[4] = param_2;
  if (lVar3 == 0) {
    local_48[5] = 0;
    local_48[6] = 0;
  }
  else {
    local_48[5] = lVar3;
    local_48[6] = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      thunk_FUN_1449db362(&local_48);
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
      goto LAB_148f9d464;
    }
  }
  thunk_FUN_1449db362(&local_48);
LAB_148f9d464:
  FUN_148fa3ea2(param_3);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9d4e8 FUN_148f9d4e8 body=378 status=ok
// SIG undefined FUN_148f9d4e8(void)

undefined8 FUN_148f9d4e8(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < (longlong)*(int *)(param_1 + 0x298)) {
    lVar1 = *(longlong *)(param_1 + 0x290);
    lVar3 = 0;
    do {
      if ((((*(char *)(lVar1 + 0x3a + lVar3) == '\x01') &&
           (*(char *)(lVar1 + 0x124 + lVar3) == '\x01')) &&
          (*(int *)(lVar1 + 0x148 + lVar3) != 4 || (*(byte *)(lVar1 + 0x39 + lVar3) & 1) != 0)) &&
         (0 < *(int *)(lVar1 + 0x114 + lVar3))) {
        uVar4 = 0;
        if (*(int *)(*(longlong *)(param_1 + 0x2a0) + 0x28) == 0) {
          local_30 = (undefined8 *)0x0;
          local_28 = 0;
          uVar4 = 0;
          FUN_1446efa72(&local_30,0,3,0x10);
          local_28 = 3;
          *local_30 = &PTR_LAB_14ba3a100;
          LOCK();
          UNLOCK();
          lVar3 = DAT_14c758608 + 1;
          lVar1 = DAT_14c758608 + 1;
          if (lVar3 == 0) {
            LOCK();
            UNLOCK();
            lVar3 = DAT_14c758608 + 2;
            lVar1 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar1;
          local_30[2] = lVar3;
          *local_30 = &PTR_FUN_14ba3f690;
          local_30[3] = param_1;
          local_30[4] = FUN_144386d12;
          *(undefined4 *)(local_30 + 5) = 0;
          cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x18))
                            (*(longlong **)(param_1 + 0x2a0),&local_30);
          if (cVar2 == '\0') {
            (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x38))();
            uVar4 = 0xffffffff;
          }
          FUN_1449db362(&local_30);
        }
        goto LAB_148f9d570;
      }
      lVar3 = lVar3 + 0x150;
    } while ((longlong)*(int *)(param_1 + 0x298) * 0x150 - lVar3 != 0);
  }
  uVar4 = 0;
  if ((int)(*(longlong **)(param_1 + 0x2a0))[5] != 2) {
    (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x38))();
  }
LAB_148f9d570:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9d664 FUN_148f9d664 body=276 status=ok
// SIG undefined FUN_148f9d664(void)

void FUN_148f9d664(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba3f5c0;
  FUN_148fa4c42(plVar5 + 2,param_2,*param_3,param_4,param_5);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f9d778 FUN_148f9d778 body=183 status=ok
// SIG undefined FUN_148f9d778(void)

void FUN_148f9d778(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined7 uVar9;
  
  if ((char)param_3 != '\0') {
    lVar7 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
    if (lVar7 != 0) {
      if (*(char *)(lVar7 + 0x3e) == '\x01') {
        lVar4 = param_1[0x51];
        uVar5 = *(undefined8 *)(lVar4 + 0xf8);
        plVar6 = *(longlong **)(lVar4 + 0x100);
        bVar3 = 1;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          bVar3 = *(byte *)(lVar7 + 0x3e);
        }
        uVar9 = (undefined7)((ulonglong)lVar4 >> 8);
        uVar8 = CONCAT71(uVar9,1);
        if ((bVar3 & 1) != 0) {
          if (*(char *)(lVar7 + 0x3d) == '\x01') {
            uVar8 = CONCAT71(uVar9,*(undefined1 *)(lVar7 + 0x3f));
          }
          else {
            uVar8 = 0;
          }
        }
        FUN_14582bb32(uVar5,uVar8);
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
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148f9d7c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))(param_1,param_2,param_3);
  return;
}



// FUNCTION 148f9d836 FUN_148f9d836 body=254 status=ok
// SIG undefined FUN_148f9d836(void)

void FUN_148f9d836(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba3fcc0;
  FUN_148fa5adc(plVar5 + 2,param_2,param_3,param_4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f9d934 FUN_148f9d934 body=60 status=ok
// SIG undefined FUN_148f9d934(void)

void FUN_148f9d934(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_148fa093c(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148f9d970 FUN_148f9d970 body=254 status=ok
// SIG undefined FUN_148f9d970(void)

void FUN_148f9d970(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba3ff80;
  FUN_1459aeb66(plVar5 + 2,param_2,*param_3,param_4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f9da6e FUN_148f9da6e body=96 status=ok
// SIG undefined FUN_148f9da6e(void)

void FUN_148f9da6e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  param_1[0x58] = 0;
  plVar3 = (longlong *)param_1[0x59];
  if (plVar3 != (longlong *)0x0) {
    param_1[0x59] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000148f9dacb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a0))(param_1,0);
  return;
}



// FUNCTION 148f9dace FUN_148f9dace body=22 status=ok
// SIG undefined FUN_148f9dace(void)

undefined8 FUN_148f9dace(longlong *param_1)

{
  (**(code **)(*param_1 + 0x200))(param_1,0);
  return 0;
}



// FUNCTION 148f9dae4 FUN_148f9dae4 body=102 status=ok
// SIG undefined FUN_148f9dae4(void)

undefined8 FUN_148f9dae4(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(*param_1 + 0x308))(0,0,0,&local_28);
  FUN_145fee2f2(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9db4c FUN_148f9db4c body=318 status=ok
// SIG undefined FUN_148f9db4c(void)

undefined4 FUN_148f9db4c(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1459a3e4e(&local_58,param_4);
  plVar3 = local_50;
  if (local_50 == (longlong *)0x0) {
    uVar4 = 0;
    iVar6 = 0;
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    iVar6 = (int)uStack_40;
    uVar4 = uStack_40._4_4_;
  }
  uStack_40 = CONCAT44(uStack_40._4_4_,iVar6 + 1U);
  if (uVar4 < iVar6 + 1U) {
    FUN_1413eac7e(&local_48,iVar6);
  }
  *(undefined8 *)(local_48 + (longlong)iVar6 * 0x10) = local_58;
  *(longlong **)(local_48 + 8 + (longlong)iVar6 * 0x10) = plVar3;
  if (plVar3 != (longlong *)0x0) {
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
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x328))(param_1,param_2,param_3,&local_48);
  FUN_14127b1cd(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9dc8c FUN_148f9dc8c body=320 status=ok
// SIG undefined FUN_148f9dc8c(void)

undefined4 FUN_148f9dc8c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1459a3e4e(&local_58,param_4);
  plVar3 = local_50;
  if (local_50 == (longlong *)0x0) {
    uVar4 = 0;
    iVar6 = 0;
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    iVar6 = (int)uStack_40;
    uVar4 = uStack_40._4_4_;
  }
  uStack_40 = CONCAT44(uStack_40._4_4_,iVar6 + 1U);
  if (uVar4 < iVar6 + 1U) {
    FUN_1413eac7e(&local_48,iVar6);
  }
  *(undefined8 *)(local_48 + (longlong)iVar6 * 0x10) = local_58;
  *(longlong **)(local_48 + 8 + (longlong)iVar6 * 0x10) = plVar3;
  if (plVar3 != (longlong *)0x0) {
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
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  uVar5 = (**(code **)(*param_1 + 800))(param_1,param_2,param_3,&local_48);
  FUN_14127b1cd(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9ddce FUN_148f9ddce body=276 status=ok
// SIG undefined FUN_148f9ddce(void)

void FUN_148f9ddce(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba404b0;
  FUN_148fa6e8e(plVar5 + 2,param_2,*param_3,param_4,param_5);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f9dee2 FUN_148f9dee2 body=254 status=ok
// SIG undefined FUN_148f9dee2(void)

void FUN_148f9dee2(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba3f790;
  FUN_145c449e2(plVar5 + 2,param_2,*param_3,param_4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f9dfe8 FUN_148f9dfe8 body=405 status=ok
// SIG undefined FUN_148f9dfe8(void)

void FUN_148f9dfe8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong *local_48;
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(**(longlong **)(param_1 + 0x288) + 0x18))(*(longlong **)(param_1 + 0x288),&local_38);
  uVar4 = FUN_148a3eb84(local_38);
  lVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((lVar2 != 0) && (1 < *(int *)(lVar2 + 0xc0))) {
    FUN_1446f470e(&local_48,L"WINDOWS",1);
    plVar5 = (longlong *)FUN_140272950(&local_48);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x58))(plVar5,&local_48,(longlong *)(lVar2 + 0xb8));
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x28))(local_48,uVar4);
        (**(code **)(*local_48 + 0x80))(local_48,&local_58,1);
        if ((longlong *)(lVar2 + 0xb8) == &local_58) {
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(lVar2 + 0xb8) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(lVar2 + 0xb8) = local_58;
          local_58 = 0;
          *(undefined4 *)(lVar2 + 0xc0) = local_50;
          *(undefined4 *)(lVar2 + 0xc4) = local_4c;
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_40 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
          }
        }
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9e17e FUN_148f9e17e body=428 status=ok
// SIG undefined FUN_148f9e17e(void)

void FUN_148f9e17e(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined **local_68;
  undefined8 local_60;
  longlong local_58;
  byte local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = *(undefined8 *)(param_3 + 8);
  local_58 = *(longlong *)(param_3 + 0x10);
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  local_50 = 0;
  local_68 = &PTR_FUN_14a5af930;
  local_48 = 0;
  uStack_40 = 0;
  FUN_147be6e44(&local_68,&local_88);
  FUN_14047e026(local_88,local_78);
  uVar4 = FUN_1489bb5d7(param_2,local_78);
  uVar4 = FUN_1489bb5d7(uVar4,param_3 + 0x18);
  uVar4 = FUN_1489b6c87(uVar4,param_3 + 0x110);
  FUN_1489b6c87(uVar4,param_3 + 0x114);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_80 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
  FUN_148f9dfe8(param_1,param_3 + 0x100);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  plVar3 = *(longlong **)(param_3 + 0x108);
  if (plVar3 == (longlong *)0x0) {
    FUN_148f9e32b(param_2,uVar4);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_148f9e32b(param_2,uVar4);
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
  FUN_14438a91a(param_2,param_3 + 0x28);
  local_68 = &PTR_FUN_14a5af930;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_68 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9e32b FUN_148f9e32b body=160 status=ok
// SIG undefined FUN_148f9e32b(void)

undefined8 FUN_148f9e32b(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(**(code **)(*param_2 + 0x38))(param_2);
  (**(code **)(*plVar1 + 0x30))(plVar1,local_30);
  FUN_1489bb5d7(param_1,local_30);
  FUN_1489bb5d7(param_1,param_2 + 0x15);
  FUN_1489bb5d7(param_1,param_2 + 0x17);
  FUN_1489bb5d7(param_1,param_2 + 0x19);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9e3cc FUN_148f9e3cc body=603 status=ok
// SIG undefined FUN_148f9e3cc(void)

void FUN_148f9e3cc(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  void *_Dst;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  undefined **local_70;
  undefined8 local_68;
  longlong *plStack_60;
  byte local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  uVar3 = FUN_1489bb965(param_1,&local_88);
  uVar3 = FUN_1489bb965(uVar3,param_2 + 0x18);
  uVar3 = FUN_1489b6cee(uVar3,param_2 + 0x110);
  FUN_1489b6cee(uVar3,param_2 + 0x114);
  if (1 < (int)uStack_80) {
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    local_58 = 0;
    local_70 = &PTR_FUN_14a5af930;
    local_50 = 0;
    uStack_48 = 0;
    FUN_147be7060(&local_70,&local_88);
    if ((&DAT_149fc1b6e)[local_58] == '\x01') {
      uVar3 = local_68;
      if (plStack_60 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
        UNLOCK();
        plVar5 = plStack_60;
      }
    }
    else {
      plVar5 = (longlong *)0x0;
      uVar3 = 0;
    }
    *(undefined8 *)(param_2 + 8) = uVar3;
    plVar4 = *(longlong **)(param_2 + 0x10);
    if (plVar5 == plVar4) {
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
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x000148f9e4d7:
          if (iVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
    else {
      *(longlong **)(param_2 + 0x10) = plVar5;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar4 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar5 = plVar4;
          goto joined_r0x000148f9e4d7;
        }
      }
    }
    local_70 = &PTR_FUN_14a5af930;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    local_70 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_58])(&local_68);
  }
  _Dst = (void *)FUN_14001cc68(0x110);
  memset(_Dst,0,0x110);
  FUN_145b20dba(_Dst);
  FUN_148f9e628(param_1,_Dst);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ba400f0;
  plVar4[2] = (longlong)_Dst;
  *(void **)(param_2 + 0x100) = _Dst;
  plVar5 = *(longlong **)(param_2 + 0x108);
  if (plVar4 == plVar5) {
    if (plVar4 == (longlong *)0x0) goto LAB_148f9e5d6;
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_148f9e5d6;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar4;
  }
  else {
    *(longlong **)(param_2 + 0x108) = plVar4;
    if (plVar5 == (longlong *)0x0) goto LAB_148f9e5d6;
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148f9e5d6;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_148f9e5d6:
  FUN_14438adea(param_1,param_2 + 0x28);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9e628 FUN_148f9e628 body=152 status=ok
// SIG undefined FUN_148f9e628(void)

undefined8 FUN_148f9e628(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_1489bb965(0,local_38);
  FUN_145b206ee(param_2,local_38);
  FUN_1489bb965(param_1,param_2 + 0xa8);
  FUN_1489bb965(param_1,param_2 + 0xb8);
  FUN_1489bb965(param_1,param_2 + 200);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9e6c2 FUN_148f9e6c2 body=650 status=ok
// SIG undefined FUN_148f9e6c2(void)

undefined8 FUN_148f9e6c2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined2 *local_d0;
  undefined2 *local_c8;
  longlong local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined8 uStack_a0;
  longlong *local_90;
  int local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)(param_1 + 8);
  local_a8 = (undefined2 *)0x0;
  uStack_a0 = 0;
  lVar2 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x30);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (int)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (int)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (puVar11 = &DAT_149dfb77a, uStack_60 != lVar2)) {
    bVar5 = true;
    local_b8 = param_1;
    local_b0 = param_2;
    do {
      lVar6 = (longlong)iStack_74;
      lVar3 = *local_90;
      if (!bVar5) {
        FUN_1400020e8(&local_a8,&DAT_149e06196,1);
      }
      plVar4 = *(longlong **)(lVar6 * 0x18 + lVar3);
      (**(code **)(*plVar4 + 0x38))(plVar4,&local_68);
      iVar9 = (int)uStack_60 + -1;
      if ((int)uStack_60 == 0) {
        iVar9 = 0;
      }
      FUN_1400020e8(&local_a8,local_68,iVar9);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
      bVar5 = false;
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
    param_2 = local_b0;
    param_1 = local_b8;
    puVar11 = local_a8;
    if ((int)uStack_a0 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
  }
  puVar10 = &DAT_149dfb77a;
  puVar8 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 0xf8) != 0) {
    puVar8 = *(undefined2 **)(param_1 + 0xf0);
  }
  (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))(*(longlong **)(param_1 + 0xe0),&local_90);
  local_d8 = (longlong *)&DAT_149dfb77a;
  if (local_88 != 0) {
    local_d8 = local_90;
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    puVar10 = *(undefined2 **)(param_1 + 0xa8);
  }
  local_d0 = puVar8;
  local_c8 = puVar11;
  FUN_140002266(param_2,
                L"HostAddress:%s, RoomId:%u, SessionId:%s, FriendPasscode:%s, LocalUserIds:\'%s\'",
                puVar10,*(undefined4 *)(param_1 + 0xd8));
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148f9ea18 FUN_148f9ea18 body=269 status=ok
// SIG undefined FUN_148f9ea18(void)

undefined8 * FUN_148f9ea18(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf4b60) {
    FUN_144b3d300(&DAT_14cbf4b60);
    if (DAT_14cbf4b60 == -1) {
      local_30 = L"OnlineServiceName";
      local_28 = 0x11;
      FUN_1446e940c(local_34,&local_30);
      local_30 = L"OnlineSubsystemShift";
      local_28 = 0x14;
      FUN_1446e940c(local_38,&local_30);
      FUN_140208bae(&DAT_14cbf4b50,local_38,local_34,L"SHiFT Network");
      atexit((_func_5014 *)&LAB_14438b101);
      _Init_thread_footer(&DAT_14cbf4b60);
    }
  }
  plVar1 = DAT_14cbf4b50;
  *param_2 = DAT_14cbf4b50;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = DAT_14cbf4b58;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9eb28 FUN_148f9eb28 body=32 status=ok
// SIG undefined FUN_148f9eb28(void)

undefined8 FUN_148f9eb28(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 148f9eb48 FUN_148f9eb48 body=940 status=ok
// SIG undefined FUN_148f9eb48(void)

undefined8 FUN_148f9eb48(longlong *param_1,longlong *param_2,longlong **param_3)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(&local_40,L"realName");
  iVar6 = (int)param_2[1];
  if (iVar6 == (int)local_38) {
    bVar11 = true;
    if (1 < iVar6) {
      lVar9 = 0;
      while( true ) {
        uVar3 = *(ushort *)(*param_2 + lVar9);
        uVar5 = (uint)uVar3;
        uVar4 = *(ushort *)((longlong)local_40 + lVar9);
        uVar10 = (uint)uVar4;
        if (uVar3 != uVar4) {
          if ((uVar4 | uVar3) < 0x80) {
            uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_148f9ebbb;
          }
          iVar6 = uVar5 - uVar10;
          goto LAB_148f9ede5;
        }
        if (uVar3 == 0) break;
LAB_148f9ebbb:
        lVar9 = lVar9 + 2;
      }
      iVar6 = 0;
LAB_148f9ede5:
      bVar11 = iVar6 == 0;
    }
  }
  else {
    bVar11 = (int)local_38 + iVar6 == 1;
  }
  if (local_40 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (bVar11) {
    (**(code **)(*param_1 + 0x10))(param_1,&local_40);
    plVar8 = local_40;
    if (&local_40 == param_3) {
LAB_148f9ed53:
      if (plVar8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_3 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      *param_3 = local_40;
      *(int *)(param_3 + 1) = (int)local_38;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_38._4_4_;
    }
  }
  else {
    FUN_140056680(&local_40,L"displayName");
    iVar6 = (int)param_2[1];
    if (iVar6 == (int)local_38) {
      bVar11 = true;
      if (1 < iVar6) {
        lVar9 = 0;
        while( true ) {
          uVar3 = *(ushort *)(*param_2 + lVar9);
          uVar5 = (uint)uVar3;
          uVar4 = *(ushort *)((longlong)local_40 + lVar9);
          uVar10 = (uint)uVar4;
          if (uVar3 != uVar4) {
            if ((uVar4 | uVar3) < 0x80) {
              uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
              if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_148f9ecaf;
            }
            iVar6 = uVar5 - uVar10;
            goto LAB_148f9eeb1;
          }
          if (uVar3 == 0) break;
LAB_148f9ecaf:
          lVar9 = lVar9 + 2;
        }
        iVar6 = 0;
LAB_148f9eeb1:
        bVar11 = iVar6 == 0;
      }
    }
    else {
      bVar11 = (int)local_38 + iVar6 == 1;
    }
    if (local_40 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (bVar11) {
      local_58 = (longlong *)0x0;
      plStack_50 = (longlong *)0x0;
      (**(code **)(*param_1 + 0x18))(param_1,&local_40);
      if (&local_40 == param_3) {
        plVar8 = local_58;
        if (local_40 != (longlong *)0x0) {
          FUN_1400020a8();
          plVar8 = local_58;
        }
      }
      else {
        if (*param_3 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        *param_3 = local_40;
        local_40 = (longlong *)0x0;
        *(int *)(param_3 + 1) = (int)local_38;
        *(undefined4 *)((longlong)param_3 + 0xc) = local_38._4_4_;
        local_38 = 0;
        plVar8 = local_58;
      }
      goto LAB_148f9ed53;
    }
    FUN_140056680(&local_40,&DAT_149f0f4f8);
    iVar6 = (int)param_2[1];
    if (iVar6 == (int)local_38) {
      bVar11 = true;
      if (1 < iVar6) {
        lVar9 = 0;
        while( true ) {
          uVar3 = *(ushort *)(*param_2 + lVar9);
          uVar5 = (uint)uVar3;
          uVar4 = *(ushort *)((longlong)local_40 + lVar9);
          uVar10 = (uint)uVar4;
          if (uVar3 != uVar4) {
            if ((uVar4 | uVar3) < 0x80) {
              uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
              if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_148f9edb7;
            }
            iVar6 = uVar5 - uVar10;
            goto LAB_148f9eed6;
          }
          if (uVar3 == 0) break;
LAB_148f9edb7:
          lVar9 = lVar9 + 2;
        }
        iVar6 = 0;
LAB_148f9eed6:
        bVar11 = iVar6 == 0;
      }
    }
    else {
      bVar11 = (int)local_38 + iVar6 == 1;
    }
    if (local_40 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar11) {
      uVar7 = 0;
      goto LAB_148f9ec3e;
    }
    (**(code **)(*param_1 + 8))(param_1,&local_58);
    (**(code **)(*local_58 + 0x30))(local_58,&local_40);
    if (&local_40 == param_3) {
      if (local_40 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_3 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      *param_3 = local_40;
      local_40 = (longlong *)0x0;
      *(int *)(param_3 + 1) = (int)local_38;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_38._4_4_;
      local_38 = 0;
    }
    plVar8 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  uVar7 = 1;
LAB_148f9ec3e:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 148f9eef6 FUN_148f9eef6 body=426 status=ok
// SIG undefined FUN_148f9eef6(void)

undefined8 FUN_148f9eef6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1489be05c(*param_3,(int)param_3[1]);
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    FUN_148fa8df4(param_3,0);
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  lVar4 = param_1 + 0x80;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar4;
  if (*(int *)(param_1 + 0x98) == 0) {
    uVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar10 = *(uint *)(param_1 + 0x98);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  uStack_74 = uStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  uVar9 = (ulonglong)uStack_54;
  local_90 = plVar1;
  if ((uStack_54 != uVar10) || (uStack_60 != lVar4)) {
    do {
      uVar6 = *(undefined8 *)(*local_90 + 0x10 + (longlong)(int)uVar9 * 0x28);
      plVar7 = *(longlong **)(*local_90 + 0x18 + (longlong)(int)uVar9 * 0x28);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      iVar5 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
        FUN_148d9b578(param_3,iVar5);
      }
      lVar8 = *param_3;
      *(undefined8 *)(lVar8 + (longlong)iVar5 * 0x10) = uVar6;
      *(longlong **)(lVar8 + 8 + (longlong)iVar5 * 0x10) = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar7 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
      uVar9 = (ulonglong)uStack_74;
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar4 || uStack_74 != uVar10));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar9 >> 8),1);
}



// FUNCTION 148f9f0a2 FUN_148f9f0a2 body=96 status=ok
// SIG undefined FUN_148f9f0a2(void)

void FUN_148f9f0a2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf4b90) {
    FUN_144b3d300(&DAT_14cbf4b90);
    if (DAT_14cbf4b90 == -1) {
      FUN_148fa09ac();
      atexit(FUN_14438bf70);
      _Init_thread_footer(&DAT_14cbf4b90);
      return;
    }
  }
  return;
}



// FUNCTION 148f9f102 FUN_148f9f102 body=254 status=ok
// SIG undefined FUN_148f9f102(void)

void FUN_148f9f102(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba40f90;
  FUN_148fa8ed8(plVar5 + 2,param_2,param_3,param_4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f9f200 FUN_148f9f200 body=345 status=ok
// SIG undefined FUN_148f9f200(void)

void FUN_148f9f200(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  
  FUN_145b221f5(*param_4,(int)param_4[1]);
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    FUN_148fa976c(param_4,0);
  }
  plVar10 = (longlong *)(param_1 + 0xc0);
  if (*(char *)(param_2 + 0x10) == '\0') {
    plVar10 = (longlong *)(param_1 + 0x110);
  }
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    puVar9 = (undefined8 *)*param_3;
    lVar11 = (longlong)*(int *)(param_3 + 1) << 4;
    do {
      iVar6 = *(int *)(puVar9 + 1);
      puVar8 = &DAT_149dfb77a;
      if (iVar6 != 0) {
        puVar8 = (undefined2 *)*puVar9;
      }
      iVar3 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar3 = 0;
      }
      uVar5 = FUN_144a49b4a(iVar3,puVar8);
      iVar6 = FUN_140e7d91e(plVar10,uVar5,puVar9);
      bVar4 = true;
      if (iVar6 == -1) {
LAB_148f9f2b4:
        uVar12 = 0;
LAB_148f9f2b7:
        plVar13 = (longlong *)0x0;
      }
      else {
        if ((*plVar10 + (longlong)iVar6 * 0x38 + 0x10U & 0xffffffffffffffef) == 0)
        goto LAB_148f9f2b4;
        lVar7 = *plVar10 + (longlong)iVar6 * 0x38;
        uVar12 = *(undefined8 *)(lVar7 + 0x20);
        plVar13 = *(longlong **)(lVar7 + 0x28);
        if (plVar13 == (longlong *)0x0) goto LAB_148f9f2b7;
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        bVar4 = false;
      }
      iVar6 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar6 + 1U) {
        FUN_148a4ec58(param_4,iVar6);
      }
      lVar7 = *param_4;
      *(undefined8 *)(lVar7 + (longlong)iVar6 * 0x10) = uVar12;
      *(longlong **)(lVar7 + 8 + (longlong)iVar6 * 0x10) = plVar13;
      if (!bVar4) {
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
      }
      puVar9 = puVar9 + 2;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 148f9f35a FUN_148f9f35a body=292 status=ok
// SIG undefined FUN_148f9f35a(void)

longlong FUN_148f9f35a(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  void **local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar6 = (longlong *)(param_1 + 0xc0);
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar4);
  iVar3 = FUN_140e7d91e(plVar6,uVar2,param_2);
  if (iVar3 != -1) {
    if (*plVar6 + (longlong)iVar3 * 0x38 != 0) {
      lVar5 = *plVar6 + (longlong)iVar3 * 0x38;
      goto LAB_148f9f3cc;
    }
  }
  local_68 = (void *)0x0;
  local_60 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_60;
  _Src = (void *)*param_2;
  if (lVar5 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,_Src,lVar5 * 2);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = param_2;
  local_40 = &local_68;
  FUN_145a1b35e(plVar6,&local_34);
  lVar5 = *plVar6 + (longlong)local_34 * 0x38;
  FUN_145a1b312(&local_68);
LAB_148f9f3cc:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar5 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9f480 FUN_148f9f480 body=38 status=ok
// SIG undefined FUN_148f9f480(void)

undefined8 FUN_148f9f480(undefined8 param_1,int param_2)

{
  FUN_145c156e0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9f4ae FUN_148f9f4ae body=38 status=ok
// SIG undefined FUN_148f9f4ae(void)

undefined8 FUN_148f9f4ae(undefined8 param_1,int param_2)

{
  FUN_145857fc2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9f4d4 FUN_148f9f4d4 body=165 status=ok
// SIG undefined FUN_148f9f4d4(void)

undefined8 * FUN_148f9f4d4(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_140146ccc(&local_38,param_3);
  FUN_140feff30(param_1 + 8,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9f57a FUN_148f9f57a body=38 status=ok
// SIG undefined FUN_148f9f57a(void)

void FUN_148f9f57a(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 8);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148f9f5d0 FUN_148f9f5d0 body=165 status=ok
// SIG undefined FUN_148f9f5d0(void)

undefined8 * FUN_148f9f5d0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_140146ccc(&local_38,param_3);
  FUN_140feff30(param_1 + 0x80,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9f676 FUN_148f9f676 body=38 status=ok
// SIG undefined FUN_148f9f676(void)

void FUN_148f9f676(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x80);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148f9f6b0 FUN_148f9f6b0 body=168 status=ok
// SIG undefined FUN_148f9f6b0(void)

undefined8 * FUN_148f9f6b0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_148fa999a(&local_38,param_3);
  FUN_148fa98b2(param_1 + 0x98,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9f75a FUN_148f9f75a body=41 status=ok
// SIG undefined FUN_148f9f75a(void)

void FUN_148f9f75a(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x98);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148f9f790 FUN_148f9f790 body=84 status=ok
// SIG undefined FUN_148f9f790(void)

void FUN_148f9f790(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_4;
  uStack_10 = param_4[1];
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_148fa9a1e(param_1 + 0x98);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9f806 FUN_148f9f806 body=158 status=ok
// SIG undefined FUN_148f9f806(void)

undefined8 * FUN_148f9f806(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  if (param_3 < 4) {
    local_38 = 0;
    local_30 = 0;
    FUN_1460d697c(&local_38,param_4);
    FUN_145ce3550(param_1 + (ulonglong)param_3 * 0x18 + 0x110,&local_40,&local_38);
    FUN_1449db362(&local_38);
    *param_2 = local_40;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9f8a6 FUN_148f9f8a6 body=58 status=ok
// SIG undefined FUN_148f9f8a6(void)

void FUN_148f9f8a6(longlong param_1,uint param_2,longlong *param_3)

{
  if (param_2 < 4) {
    if (*param_3 != 0) {
      FUN_14480f766(param_1 + (ulonglong)param_2 * 0x18 + 0x110);
    }
    *param_3 = 0;
  }
  return;
}



// FUNCTION 148f9f91c FUN_148f9f91c body=168 status=ok
// SIG undefined FUN_148f9f91c(void)

undefined8 * FUN_148f9f91c(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_141502386(&local_38,param_3);
  FUN_145cb5b92(param_1 + 0x170,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9f9c6 FUN_148f9f9c6 body=41 status=ok
// SIG undefined FUN_148f9f9c6(void)

void FUN_148f9f9c6(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x170);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148f9fa0a FUN_148f9fa0a body=130 status=ok
// SIG undefined FUN_148f9fa0a(void)

void FUN_148f9fa0a(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [5];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  plVar1 = (longlong *)*param_4;
  if (plVar1 != (longlong *)0x0 && (int)param_4[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,0,local_38);
    if (local_38[2] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9fa92 FUN_148f9fa92 body=38 status=ok
// SIG undefined FUN_148f9fa92(void)

undefined8 FUN_148f9fa92(undefined8 param_1,int param_2)

{
  FUN_145857d74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9fac4 FUN_148f9fac4 body=165 status=ok
// SIG undefined FUN_148f9fac4(void)

undefined8 * FUN_148f9fac4(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_148fa9c02(&local_38,param_3);
  FUN_148fa9b1a(param_1 + 0x20,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9fb6a FUN_148f9fb6a body=38 status=ok
// SIG undefined FUN_148f9fb6a(void)

void FUN_148f9fb6a(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x20);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148f9fb9a FUN_148f9fb9a body=38 status=ok
// SIG undefined FUN_148f9fb9a(void)

undefined8 FUN_148f9fb9a(undefined8 param_1,int param_2)

{
  FUN_14585837c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9fbf2 FUN_148f9fbf2 body=165 status=ok
// SIG undefined FUN_148f9fbf2(void)

undefined8 * FUN_148f9fbf2(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_1413d6220(&local_38,param_3);
  FUN_145941952(param_1 + 0x80,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9fc98 FUN_148f9fc98 body=38 status=ok
// SIG undefined FUN_148f9fc98(void)

void FUN_148f9fc98(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x80);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148f9fcd2 FUN_148f9fcd2 body=168 status=ok
// SIG undefined FUN_148f9fcd2(void)

undefined8 * FUN_148f9fcd2(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_1413d6220(&local_38,param_3);
  FUN_145941952(param_1 + 0x98,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9fd7c FUN_148f9fd7c body=41 status=ok
// SIG undefined FUN_148f9fd7c(void)

void FUN_148f9fd7c(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x98);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148f9fdbe FUN_148f9fdbe body=168 status=ok
// SIG undefined FUN_148f9fdbe(void)

undefined8 * FUN_148f9fdbe(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_14114e6dc(&local_38,param_3);
  FUN_140c6314c(param_1 + 0xb0,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9fe68 FUN_148f9fe68 body=41 status=ok
// SIG undefined FUN_148f9fe68(void)

void FUN_148f9fe68(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0xb0);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148f9fe9e FUN_148f9fe9e body=30 status=ok
// SIG undefined FUN_148f9fe9e(void)

void FUN_148f9fe9e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x1b0))();
  return;
}



// FUNCTION 148f9febc FUN_148f9febc body=168 status=ok
// SIG undefined FUN_148f9febc(void)

undefined8 * FUN_148f9febc(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_14114e6dc(&local_38,param_3);
  FUN_140c6314c(param_1 + 200,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9ff66 FUN_148f9ff66 body=41 status=ok
// SIG undefined FUN_148f9ff66(void)

void FUN_148f9ff66(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 200);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148f9ffa8 FUN_148f9ffa8 body=168 status=ok
// SIG undefined FUN_148f9ffa8(void)

undefined8 * FUN_148f9ffa8(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_14114e6dc(&local_38,param_3);
  FUN_140c6314c(param_1 + 0xe0,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa0052 FUN_148fa0052 body=41 status=ok
// SIG undefined FUN_148fa0052(void)

void FUN_148fa0052(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0xe0);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fa00a0 FUN_148fa00a0 body=168 status=ok
// SIG undefined FUN_148fa00a0(void)

undefined8 * FUN_148fa00a0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_148fa9d6e(&local_38,param_3);
  FUN_148fa9c86(param_1 + 0x110,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa014a FUN_148fa014a body=41 status=ok
// SIG undefined FUN_148fa014a(void)

void FUN_148fa014a(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x110);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fa018c FUN_148fa018c body=168 status=ok
// SIG undefined FUN_148fa018c(void)

undefined8 * FUN_148fa018c(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_148fa9f8a(&local_38,param_3);
  FUN_148fa9ea2(param_1 + 0x128,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa0236 FUN_148fa0236 body=41 status=ok
// SIG undefined FUN_148fa0236(void)

void FUN_148fa0236(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x128);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fa0278 FUN_148fa0278 body=168 status=ok
// SIG undefined FUN_148fa0278(void)

undefined8 * FUN_148fa0278(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_14772a9f8(&local_38,param_3);
  FUN_140fee05c(param_1 + 0x140,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa0322 FUN_148fa0322 body=41 status=ok
// SIG undefined FUN_148fa0322(void)

void FUN_148fa0322(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x140);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fa0364 FUN_148fa0364 body=168 status=ok
// SIG undefined FUN_148fa0364(void)

undefined8 * FUN_148fa0364(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_148faa1b8(&local_38,param_3);
  FUN_148faa0d0(param_1 + 0x158,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa040e FUN_148fa040e body=41 status=ok
// SIG undefined FUN_148fa040e(void)

void FUN_148fa040e(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x158);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fa0450 FUN_148fa0450 body=168 status=ok
// SIG undefined FUN_148fa0450(void)

undefined8 * FUN_148fa0450(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_148faa3d4(&local_38,param_3);
  FUN_148faa2ec(param_1 + 0x170,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa04fa FUN_148fa04fa body=41 status=ok
// SIG undefined FUN_148fa04fa(void)

void FUN_148fa04fa(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x170);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fa0574 FUN_148fa0574 body=168 status=ok
// SIG undefined FUN_148fa0574(void)

undefined8 * FUN_148fa0574(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_148faa602(&local_38,param_3);
  FUN_148faa51a(param_1 + 0x218,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa061e FUN_148fa061e body=41 status=ok
// SIG undefined FUN_148fa061e(void)

void FUN_148fa061e(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x218);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fa0654 FUN_148fa0654 body=168 status=ok
// SIG undefined FUN_148fa0654(void)

undefined8 * FUN_148fa0654(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_148faa602(&local_38,param_3);
  FUN_148faa51a(param_1 + 0x230,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa06fe FUN_148fa06fe body=41 status=ok
// SIG undefined FUN_148fa06fe(void)

void FUN_148fa06fe(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x230);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fa0764 FUN_148fa0764 body=38 status=ok
// SIG undefined FUN_148fa0764(void)

undefined8 FUN_148fa0764(undefined8 param_1,int param_2)

{
  FUN_145bfbc8a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa078a FUN_148fa078a body=45 status=ok
// SIG undefined FUN_148fa078a(void)

longlong FUN_148fa078a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x70;
  FUN_145bfbc8a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa07ba FUN_148fa07ba body=38 status=ok
// SIG undefined FUN_148fa07ba(void)

undefined8 FUN_148fa07ba(undefined8 param_1,int param_2)

{
  FUN_14124fd1c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa07e0 FUN_148fa07e0 body=38 status=ok
// SIG undefined FUN_148fa07e0(void)

undefined8 FUN_148fa07e0(undefined8 param_1,int param_2)

{
  FUN_145857e72();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa0822 FUN_148fa0822 body=83 status=ok
// SIG undefined FUN_148fa0822(void)

undefined8 * FUN_148fa0822(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3d370;
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



// FUNCTION 148fa0884 FUN_148fa0884 body=83 status=ok
// SIG undefined FUN_148fa0884(void)

undefined8 * FUN_148fa0884(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3d3b0;
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



// FUNCTION 148fa0916 FUN_148fa0916 body=38 status=ok
// SIG undefined FUN_148fa0916(void)

undefined8 FUN_148fa0916(undefined8 param_1,int param_2)

{
  FUN_14592e5d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa093c FUN_148fa093c body=47 status=ok
// SIG undefined FUN_148fa093c(void)

void FUN_148fa093c(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148fa098c FUN_148fa098c body=30 status=ok
// SIG undefined FUN_148fa098c(void)

undefined8 FUN_148fa098c(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))();
  return param_2;
}



// FUNCTION 148fa09ac FUN_148fa09ac body=209 status=ok
// SIG undefined FUN_148fa09ac(void)

void FUN_148fa09ac(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_14ba3d920;
  puVar3[3] = 0;
  DAT_14cbf4b80 = puVar3;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ba3d970;
  plVar4[2] = (longlong)puVar3;
  DAT_14cbf4b88 = plVar4;
  if (puVar3 != (undefined8 *)0x0) {
    if (plVar4 == (longlong *)0x0) {
      puVar3[1] = puVar3;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      if ((longlong *)puVar3[2] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar2 = (longlong *)puVar3[2];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        puVar3[2] = plVar4;
      }
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148fa0a7d FUN_148fa0a7d body=149 status=ok
// SIG undefined FUN_148fa0a7d(void)

undefined8 * FUN_148fa0a7d(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14ba3d990;
  local_30 = *param_1;
  local_28 = param_1[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_148f9bfd4(puVar1 + 2,&local_30,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa0b14 FUN_148fa0b14 body=380 status=ok
// SIG undefined FUN_148fa0b14(void)

undefined4 * FUN_148fa0b14(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1412f0faa(param_1,local_40);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  *local_38 = *puVar2;
  lVar12 = puVar2[1];
  local_38[1] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  local_38[2] = *puVar3;
  lVar12 = puVar3[1];
  local_38[3] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  plVar4 = (longlong *)*local_38;
  plVar5 = (longlong *)local_38[1];
  if (plVar5 == (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar4 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    uVar8 = (**(code **)(*plVar4 + 0x40))();
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
  cVar7 = FUN_1412f0dfe(param_1,uVar8,local_38,&local_44);
  uVar6 = local_44;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x24) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_1412f1190(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa0c92 FUN_148fa0c92 body=114 status=ok
// SIG undefined FUN_148fa0c92(void)

void FUN_148fa0c92(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 148fa0d04 FUN_148fa0d04 body=100 status=ok
// SIG undefined FUN_148fa0d04(void)

void FUN_148fa0d04(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000148fa0d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fa0d68 FUN_148fa0d68 body=188 status=ok
// SIG undefined FUN_148fa0d68(void)

int FUN_148fa0d68(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar7 = *param_1;
      do {
        lVar8 = (longlong)iVar3 * 0x38;
        puVar4 = *(undefined8 **)(lVar7 + lVar8);
        plVar6 = *(longlong **)(lVar7 + 8 + lVar8);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        if (puVar4 == (undefined8 *)*param_3) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = (**(code **)*puVar4)();
        }
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
        if (cVar5 != '\0') {
          return iVar3;
        }
        lVar7 = *param_1;
        iVar3 = *(int *)(lVar7 + 0x30 + lVar8);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 148fa0e24 FUN_148fa0e24 body=116 status=ok
// SIG undefined FUN_148fa0e24(void)

void FUN_148fa0e24(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 148fa0e98 FUN_148fa0e98 body=273 status=ok
// SIG undefined FUN_148fa0e98(void)

undefined8 FUN_148fa0e98(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  
  uVar9 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = (**(code **)(*(longlong *)*param_2 + 0x40))();
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar10 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
      do {
        lVar3 = *param_1;
        lVar11 = (longlong)iVar6 * 0x38;
        puVar4 = *(undefined8 **)(lVar3 + lVar11);
        plVar7 = *(longlong **)(lVar3 + 8 + lVar11);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        if (puVar4 == (undefined8 *)*param_2) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = (**(code **)*puVar4)();
        }
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
            if (*piVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        if (cVar5 != '\0') {
          FUN_148fa0faa(param_1,*puVar10);
          uVar9 = 1;
          break;
        }
        iVar6 = *(int *)(lVar3 + lVar11 + 0x30);
        puVar10 = (undefined4 *)(lVar3 + lVar11 + 0x30);
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)param_2[1];
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
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return uVar9;
}



// FUNCTION 148fa0faa FUN_148fa0faa body=113 status=ok
// SIG undefined FUN_148fa0faa(void)

void FUN_148fa0faa(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar3 = (longlong)param_2 * 0x38;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x34 + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x30 + lVar6 * 0x38);
    } while (iVar4 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar6 * 0x38 + 0x30);
  }
  *puVar2 = *(undefined4 *)(lVar1 + lVar3 + 0x30);
  FUN_145d23884(lVar3 + *param_1);
  FUN_148fa0e24(param_1,param_2);
  return;
}



// FUNCTION 148fa101c FUN_148fa101c body=270 status=ok
// SIG undefined FUN_148fa101c(void)

void FUN_148fa101c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = (**(code **)(*(longlong *)*param_2 + 0x40))();
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    uVar9 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar8 + uVar9 * 4);
    if (iVar6 != -1) {
      puVar10 = (undefined4 *)((longlong)plVar8 + uVar9 * 4);
      do {
        lVar3 = *param_1;
        lVar7 = (longlong)iVar6;
        puVar4 = *(undefined8 **)(lVar3 + lVar7 * 0x28);
        plVar8 = *(longlong **)(lVar3 + 8 + lVar7 * 0x28);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        if (puVar4 == (undefined8 *)*param_2) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = (**(code **)*puVar4)();
        }
        if (plVar8 != (longlong *)0x0) {
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
        if (cVar5 != '\0') {
          FUN_148fa112a(param_1,*puVar10);
          break;
        }
        lVar3 = lVar3 + lVar7 * 0x28;
        iVar6 = *(int *)(lVar3 + 0x20);
        puVar10 = (undefined4 *)(lVar3 + 0x20);
      } while (iVar6 != -1);
    }
  }
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000148fa1066. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x10))(plVar8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fa112a FUN_148fa112a body=117 status=ok
// SIG undefined FUN_148fa112a(void)

void FUN_148fa112a(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_148fa0d04((longlong)param_2 * 0x28 + *param_1);
  FUN_148fa0c92(param_1,param_2);
  return;
}



// FUNCTION 148fa119f FUN_148fa119f body=149 status=ok
// SIG undefined FUN_148fa119f(void)

undefined8 * FUN_148fa119f(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14ba3d990;
  local_30 = *param_1;
  local_28 = param_1[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_148f9bfd4(puVar1 + 2,&local_30,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa1236 FUN_148fa1236 body=116 status=ok
// SIG undefined FUN_148fa1236(void)

void FUN_148fa1236(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
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



// FUNCTION 148fa12aa FUN_148fa12aa body=253 status=ok
// SIG undefined FUN_148fa12aa(void)

void FUN_148fa12aa(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_148fa1320:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x68);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x68);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_148fa138f;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_148fa138f;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_148fa1395;
      }
      if (iVar2 + iVar1 == 1) goto LAB_148fa1395;
      goto LAB_148fa1381;
    }
  }
  return;
LAB_148fa138f:
  if (uVar7 == uVar6) {
LAB_148fa1395:
    FUN_148fa13a8(param_1);
    return;
  }
LAB_148fa1381:
  iVar2 = (int)plVar3[0xc];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_148fa1320;
}



// FUNCTION 148fa13a8 FUN_148fa13a8 body=113 status=ok
// SIG undefined FUN_148fa13a8(void)

void FUN_148fa13a8(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar3 = (longlong)param_2 * 0x68;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 100 + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x60 + lVar6 * 0x68);
    } while (iVar4 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar6 * 0x68 + 0x60);
  }
  *puVar2 = *(undefined4 *)(lVar1 + lVar3 + 0x60);
  FUN_1459b0b4e(lVar3 + *param_1);
  FUN_148fa1236(param_1,param_2);
  return;
}



// FUNCTION 148fa141a FUN_148fa141a body=130 status=ok
// SIG undefined FUN_148fa141a(void)

void FUN_148fa141a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa149e FUN_148fa149e body=283 status=ok
// SIG undefined FUN_148fa149e(void)

undefined8 *
FUN_148fa149e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_40,L"ShiftSDK::Social::RequestFriendship");
  FUN_148fa1608(param_1,local_40,param_2,param_4);
  *param_1 = &PTR_FUN_14ba3db00;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ba3daf0;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_14b4e4e30;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14ba3db40;
  local_50[3] = param_1;
  FUN_148a5ff36(param_2,param_3,&local_50);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa15ba FUN_148fa15ba body=9 status=ok
// SIG undefined FUN_148fa15ba(void)

void FUN_148fa15ba(longlong param_1)

{
  FUN_148fa288c(param_1 + 0x10);
  return;
}



// FUNCTION 148fa15c4 FUN_148fa15c4 body=29 status=ok
// SIG undefined FUN_148fa15c4(void)

undefined8 FUN_148fa15c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa15e2 FUN_148fa15e2 body=38 status=ok
// SIG undefined FUN_148fa15e2(void)

undefined8 FUN_148fa15e2(undefined8 param_1,int param_2)

{
  FUN_148fa288c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa1608 FUN_148fa1608 body=456 status=ok
// SIG undefined FUN_148fa1608(void)

undefined8 *
FUN_148fa1608(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined2 uStack_7b;
  undefined1 uStack_79;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = &PTR_LAB_14ba3d1c8;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 0x38);
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_14ba3db10;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_14657e154(param_1 + 4,param_4);
  param_1[6] = 0;
  param_1[8] = 0;
  local_b8 = param_1[6];
  uStack_70 = param_1[7];
  local_a8 = (longlong *)param_1[8];
  uStack_60 = param_1[9];
  local_58 = param_1[10];
  uStack_50 = param_1[0xb];
  local_48 = param_1[0xc];
  uStack_40 = param_1[0xd];
  uVar4 = uStack_40;
  local_68 = local_a8;
  uVar3 = uStack_60;
  local_78 = local_b8;
  uVar2 = uStack_70;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(uint *)((longlong)param_1 + 0x69) = CONCAT13(uStack_7c,(int3)((uint)uStack_80 >> 8));
  *(undefined2 *)((longlong)param_1 + 0x6d) = uStack_7b;
  *(undefined1 *)((longlong)param_1 + 0x6f) = uStack_79;
  param_1[10] = &PTR_LAB_14ba3db20;
  param_1[0xb] = param_1;
  param_1[8] = 0;
  param_1[9] = CONCAT44(uStack_9c,uStack_a0);
  param_1[6] = FUN_148fa181e;
  param_1[7] = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_88 = local_48;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = (undefined1)((ulonglong)uStack_40 >> 0x20);
  uStack_7b = (undefined2)((ulonglong)uStack_40 >> 0x28);
  uStack_79 = (undefined1)((ulonglong)uStack_40 >> 0x38);
  local_98 = local_58;
  uStack_90 = uStack_50;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_70 = uVar2;
  uStack_60 = uVar3;
  uStack_40 = uVar4;
  if (local_b8 != 0) {
    plVar5 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar5 = &local_98;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa17d2 FUN_148fa17d2 body=38 status=ok
// SIG undefined FUN_148fa17d2(void)

undefined8 FUN_148fa17d2(undefined8 param_1,int param_2)

{
  FUN_148fa288c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa17f8 FUN_148fa17f8 body=38 status=ok
// SIG undefined FUN_148fa17f8(void)

undefined8 FUN_148fa17f8(undefined8 param_1,int param_2)

{
  FUN_148fa288c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa181e FUN_148fa181e body=55 status=ok
// SIG undefined FUN_148fa181e(void)

void FUN_148fa181e(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,0,(char)param_1[2]);
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa1888 FUN_148fa1888 body=29 status=ok
// SIG undefined FUN_148fa1888(void)

undefined8 FUN_148fa1888(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa18a6 FUN_148fa18a6 body=29 status=ok
// SIG undefined FUN_148fa18a6(void)

undefined8 FUN_148fa18a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa18d8 FUN_148fa18d8 body=93 status=ok
// SIG undefined FUN_148fa18d8(void)

void FUN_148fa18d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3db40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa1936 FUN_148fa1936 body=93 status=ok
// SIG undefined FUN_148fa1936(void)

void FUN_148fa1936(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3db40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa1994 FUN_148fa1994 body=126 status=ok
// SIG undefined FUN_148fa1994(void)

void FUN_148fa1994(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4e30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3db40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa1a03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa1a12 FUN_148fa1a12 body=53 status=ok
// SIG undefined FUN_148fa1a12(void)

void FUN_148fa1a12(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3 == 0);
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa1a48 FUN_148fa1a48 body=55 status=ok
// SIG undefined FUN_148fa1a48(void)

undefined8 FUN_148fa1a48(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3 == 0);
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return 1;
}



// FUNCTION 148fa1a80 FUN_148fa1a80 body=283 status=ok
// SIG undefined FUN_148fa1a80(void)

undefined8 *
FUN_148fa1a80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_40,L"ShiftSDK::Social::AcceptFriendship");
  FUN_148fa1608(param_1,local_40,param_2,param_4);
  *param_1 = &PTR_FUN_14ba3db00;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ba3dc80;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_14b4e4e30;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14ba3dc90;
  local_50[3] = param_1;
  FUN_148a60128(param_2,param_3,&local_50);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa1b9c FUN_148fa1b9c body=9 status=ok
// SIG undefined FUN_148fa1b9c(void)

void FUN_148fa1b9c(longlong param_1)

{
  FUN_148fa288c(param_1 + 0x10);
  return;
}



// FUNCTION 148fa1ba6 FUN_148fa1ba6 body=29 status=ok
// SIG undefined FUN_148fa1ba6(void)

undefined8 FUN_148fa1ba6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa1bc4 FUN_148fa1bc4 body=38 status=ok
// SIG undefined FUN_148fa1bc4(void)

undefined8 FUN_148fa1bc4(undefined8 param_1,int param_2)

{
  FUN_148fa288c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa1bea FUN_148fa1bea body=29 status=ok
// SIG undefined FUN_148fa1bea(void)

undefined8 FUN_148fa1bea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa1c1c FUN_148fa1c1c body=93 status=ok
// SIG undefined FUN_148fa1c1c(void)

void FUN_148fa1c1c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3dc90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa1c7a FUN_148fa1c7a body=93 status=ok
// SIG undefined FUN_148fa1c7a(void)

void FUN_148fa1c7a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3dc90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa1cd8 FUN_148fa1cd8 body=126 status=ok
// SIG undefined FUN_148fa1cd8(void)

void FUN_148fa1cd8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4e30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3dc90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa1d47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa1d56 FUN_148fa1d56 body=53 status=ok
// SIG undefined FUN_148fa1d56(void)

void FUN_148fa1d56(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3 == 0);
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa1d8c FUN_148fa1d8c body=55 status=ok
// SIG undefined FUN_148fa1d8c(void)

undefined8 FUN_148fa1d8c(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3 == 0);
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return 1;
}



// FUNCTION 148fa1dc4 FUN_148fa1dc4 body=283 status=ok
// SIG undefined FUN_148fa1dc4(void)

undefined8 *
FUN_148fa1dc4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_40,L"ShiftSDK::Social::RemoveFriendship");
  FUN_148fa1608(param_1,local_40,param_2,param_4);
  *param_1 = &PTR_FUN_14ba3db00;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ba3ddd0;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_14b4e4e30;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14ba3dde0;
  local_50[3] = param_1;
  FUN_148a6031a(param_2,param_3,&local_50);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa1ee0 FUN_148fa1ee0 body=9 status=ok
// SIG undefined FUN_148fa1ee0(void)

void FUN_148fa1ee0(longlong param_1)

{
  FUN_148fa288c(param_1 + 0x10);
  return;
}



// FUNCTION 148fa1eea FUN_148fa1eea body=29 status=ok
// SIG undefined FUN_148fa1eea(void)

undefined8 FUN_148fa1eea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa1f08 FUN_148fa1f08 body=38 status=ok
// SIG undefined FUN_148fa1f08(void)

undefined8 FUN_148fa1f08(undefined8 param_1,int param_2)

{
  FUN_148fa288c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa1f2e FUN_148fa1f2e body=29 status=ok
// SIG undefined FUN_148fa1f2e(void)

undefined8 FUN_148fa1f2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa1f60 FUN_148fa1f60 body=93 status=ok
// SIG undefined FUN_148fa1f60(void)

void FUN_148fa1f60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3dde0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa1fbe FUN_148fa1fbe body=93 status=ok
// SIG undefined FUN_148fa1fbe(void)

void FUN_148fa1fbe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3dde0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa201c FUN_148fa201c body=126 status=ok
// SIG undefined FUN_148fa201c(void)

void FUN_148fa201c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4e30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3dde0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa208b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa209a FUN_148fa209a body=53 status=ok
// SIG undefined FUN_148fa209a(void)

void FUN_148fa209a(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3 == 0);
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa20d0 FUN_148fa20d0 body=55 status=ok
// SIG undefined FUN_148fa20d0(void)

undefined8 FUN_148fa20d0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3 == 0);
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return 1;
}



// FUNCTION 148fa2108 FUN_148fa2108 body=130 status=ok
// SIG undefined FUN_148fa2108(void)

void FUN_148fa2108(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa218b FUN_148fa218b body=73 status=ok
// SIG undefined FUN_148fa218b(void)

void FUN_148fa218b(longlong param_1,int param_2)

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



// FUNCTION 148fa21d4 FUN_148fa21d4 body=48 status=ok
// SIG undefined FUN_148fa21d4(void)

void FUN_148fa21d4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148fa2204 FUN_148fa2204 body=283 status=ok
// SIG undefined FUN_148fa2204(void)

undefined8 *
FUN_148fa2204(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_40,L"ShiftSDK::Social::BlockFriendship");
  FUN_148fa1608(param_1,local_40,param_2,param_4);
  *param_1 = &PTR_FUN_14ba3db00;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ba3e190;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_14b4e4e30;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14ba3e1a0;
  local_50[3] = param_1;
  FUN_148a6050c(param_2,param_3,&local_50);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa2320 FUN_148fa2320 body=9 status=ok
// SIG undefined FUN_148fa2320(void)

void FUN_148fa2320(longlong param_1)

{
  FUN_148fa288c(param_1 + 0x10);
  return;
}



// FUNCTION 148fa232a FUN_148fa232a body=29 status=ok
// SIG undefined FUN_148fa232a(void)

undefined8 FUN_148fa232a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa2348 FUN_148fa2348 body=38 status=ok
// SIG undefined FUN_148fa2348(void)

undefined8 FUN_148fa2348(undefined8 param_1,int param_2)

{
  FUN_148fa288c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa236e FUN_148fa236e body=29 status=ok
// SIG undefined FUN_148fa236e(void)

undefined8 FUN_148fa236e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa23a0 FUN_148fa23a0 body=93 status=ok
// SIG undefined FUN_148fa23a0(void)

void FUN_148fa23a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3e1a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa23fe FUN_148fa23fe body=93 status=ok
// SIG undefined FUN_148fa23fe(void)

void FUN_148fa23fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3e1a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa245c FUN_148fa245c body=126 status=ok
// SIG undefined FUN_148fa245c(void)

void FUN_148fa245c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4e30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3e1a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa24cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa24da FUN_148fa24da body=53 status=ok
// SIG undefined FUN_148fa24da(void)

void FUN_148fa24da(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3 == 0);
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa2510 FUN_148fa2510 body=55 status=ok
// SIG undefined FUN_148fa2510(void)

undefined8 FUN_148fa2510(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3 == 0);
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return 1;
}



// FUNCTION 148fa2548 FUN_148fa2548 body=283 status=ok
// SIG undefined FUN_148fa2548(void)

undefined8 *
FUN_148fa2548(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_40,L"ShiftSDK::Social::UnblockFriendship");
  FUN_148fa1608(param_1,local_40,param_2,param_4);
  *param_1 = &PTR_FUN_14ba3db00;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ba3e2e0;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_14b4e4e30;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14ba3e2f0;
  local_50[3] = param_1;
  FUN_148a606fe(param_2,param_3,&local_50);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa2664 FUN_148fa2664 body=9 status=ok
// SIG undefined FUN_148fa2664(void)

void FUN_148fa2664(longlong param_1)

{
  FUN_148fa288c(param_1 + 0x10);
  return;
}



// FUNCTION 148fa266e FUN_148fa266e body=29 status=ok
// SIG undefined FUN_148fa266e(void)

undefined8 FUN_148fa266e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa268c FUN_148fa268c body=38 status=ok
// SIG undefined FUN_148fa268c(void)

undefined8 FUN_148fa268c(undefined8 param_1,int param_2)

{
  FUN_148fa288c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa26b2 FUN_148fa26b2 body=29 status=ok
// SIG undefined FUN_148fa26b2(void)

undefined8 FUN_148fa26b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa26e4 FUN_148fa26e4 body=93 status=ok
// SIG undefined FUN_148fa26e4(void)

void FUN_148fa26e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3e2f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa2742 FUN_148fa2742 body=93 status=ok
// SIG undefined FUN_148fa2742(void)

void FUN_148fa2742(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3e2f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa27a0 FUN_148fa27a0 body=126 status=ok
// SIG undefined FUN_148fa27a0(void)

void FUN_148fa27a0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4e30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3e2f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa280f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa281e FUN_148fa281e body=53 status=ok
// SIG undefined FUN_148fa281e(void)

void FUN_148fa281e(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3 == 0);
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa2854 FUN_148fa2854 body=55 status=ok
// SIG undefined FUN_148fa2854(void)

undefined8 FUN_148fa2854(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3 == 0);
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return 1;
}



// FUNCTION 148fa288c FUN_148fa288c body=81 status=ok
// SIG undefined FUN_148fa288c(void)

void FUN_148fa288c(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba3db10;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1449db362(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fa28de FUN_148fa28de body=96 status=ok
// SIG undefined FUN_148fa28de(void)

void FUN_148fa28de(longlong param_1,int param_2)

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



// FUNCTION 148fa293e FUN_148fa293e body=66 status=ok
// SIG undefined FUN_148fa293e(void)

void FUN_148fa293e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ba3d3b0;
  plVar3 = *(longlong **)(param_1 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000148fa297c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fa298e FUN_148fa298e body=63 status=ok
// SIG undefined FUN_148fa298e(void)

void FUN_148fa298e(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1458585d6(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14619a862(param_1);
    return;
  }
  FUN_148fa29ce(param_1);
  FUN_1458585d6(param_1);
  return;
}



// FUNCTION 148fa29ce FUN_148fa29ce body=322 status=ok
// SIG undefined FUN_148fa29ce(void)

void FUN_148fa29ce(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 148fa2b12 FUN_148fa2b12 body=63 status=ok
// SIG undefined FUN_148fa2b12(void)

void FUN_148fa2b12(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145858cae(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146148124(param_1);
    return;
  }
  FUN_148fa2b52(param_1);
  FUN_145858cae(param_1);
  return;
}



// FUNCTION 148fa2b52 FUN_148fa2b52 body=322 status=ok
// SIG undefined FUN_148fa2b52(void)

void FUN_148fa2b52(longlong *param_1)

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



// FUNCTION 148fa2c96 FUN_148fa2c96 body=116 status=ok
// SIG undefined FUN_148fa2c96(void)

void FUN_148fa2c96(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
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



// FUNCTION 148fa2d0a FUN_148fa2d0a body=38 status=ok
// SIG undefined FUN_148fa2d0a(void)

undefined8 FUN_148fa2d0a(undefined8 param_1,int param_2)

{
  FUN_148fa2f24();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa2d30 FUN_148fa2d30 body=38 status=ok
// SIG undefined FUN_148fa2d30(void)

undefined8 FUN_148fa2d30(undefined8 param_1,int param_2)

{
  FUN_148fa2f24();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa2d56 FUN_148fa2d56 body=52 status=ok
// SIG undefined FUN_148fa2d56(void)

void FUN_148fa2d56(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,(int)param_1[1]);
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa2dbc FUN_148fa2dbc body=93 status=ok
// SIG undefined FUN_148fa2dbc(void)

void FUN_148fa2dbc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b507400;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3ed50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa2e1a FUN_148fa2e1a body=93 status=ok
// SIG undefined FUN_148fa2e1a(void)

void FUN_148fa2e1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b507400;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3ed50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa2e78 FUN_148fa2e78 body=126 status=ok
// SIG undefined FUN_148fa2e78(void)

void FUN_148fa2e78(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b507400;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3ed50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa2ee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa2ef6 FUN_148fa2ef6 body=46 status=ok
// SIG undefined FUN_148fa2ef6(void)

void FUN_148fa2ef6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa2f24 FUN_148fa2f24 body=142 status=ok
// SIG undefined FUN_148fa2f24(void)

void FUN_148fa2f24(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ba3ed18;
  if (param_1[6] != 0) {
    plVar2 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar1 = (undefined8 *)*plVar2;
    if (puVar1 == (undefined8 *)0x0) goto LAB_148fa2f65;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
LAB_148fa2f65:
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fa2fc0 FUN_148fa2fc0 body=300 status=ok
// SIG undefined FUN_148fa2fc0(void)

undefined8 *
FUN_148fa2fc0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 *local_78;
  undefined4 local_70;
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140056680(local_68,L"ShiftSDK::Rooms::GetPresence");
  local_88 = &local_58;
  FUN_148fa3116(param_1,local_68,param_2,param_4);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ba3ef18;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  local_70 = 2;
  *local_78 = &PTR_LAB_14ba3ee30;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_78[2] = lVar2;
  *local_78 = &PTR_FUN_14ba3ef60;
  local_78[3] = param_1;
  FUN_143ef0af1(param_2,param_3,&local_78);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa30ee FUN_148fa30ee body=9 status=ok
// SIG undefined FUN_148fa30ee(void)

void FUN_148fa30ee(longlong param_1)

{
  FUN_148fa3966(param_1 + 0x10);
  return;
}



// FUNCTION 148fa30f8 FUN_148fa30f8 body=29 status=ok
// SIG undefined FUN_148fa30f8(void)

undefined8 FUN_148fa30f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa3116 FUN_148fa3116 body=669 status=ok
// SIG undefined FUN_148fa3116(void)

undefined8 *
FUN_148fa3116(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined5 local_e8;
  undefined3 uStack_e3;
  undefined5 uStack_e0;
  void *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = &PTR_LAB_14ba3d1c8;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 0x38);
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_14ba3ef28;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_148a676fa(param_1 + 4,param_4);
  param_1[6] = 0;
  param_1[8] = 0;
  local_f0 = 4;
  local_e8 = (undefined5)*param_5;
  uStack_e3 = (undefined3)*(undefined8 *)((longlong)param_5 + 5);
  uStack_e0 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 5) >> 0x18);
  local_d8 = (void *)0x0;
  local_d0._0_4_ = *(int *)(param_5 + 3);
  lVar12 = (longlong)(int)local_d0;
  pvVar2 = (void *)param_5[2];
  local_f8 = param_1;
  if (lVar12 == 0) {
    local_d0._4_4_ = 0;
  }
  else {
    FUN_1446dd670(&local_d8,(int)local_d0,0);
    memcpy(local_d8,pvVar2,lVar12 * 2);
  }
  local_c8 = (undefined1 *)0x0;
  puVar10 = (undefined8 *)FUN_14001cc68(0x38,8);
  uVar3 = local_d0._4_4_;
  iVar1 = (int)local_d0;
  pvVar2 = local_d8;
  *puVar10 = &PTR_FUN_14ba3ef40;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  puVar10[1] = local_f8;
  *(undefined4 *)(puVar10 + 2) = local_f0;
  puVar10[3] = CONCAT35(uStack_e3,local_e8);
  *(ulonglong *)((longlong)puVar10 + 0x1d) = CONCAT53(uStack_e0,uStack_e3);
  puVar10[5] = pvVar2;
  *(int *)(puVar10 + 6) = iVar1;
  *(undefined4 *)((longlong)puVar10 + 0x34) = uVar3;
  if (puVar10 + 1 != (undefined8 *)0x0) {
    local_c8 = &LAB_148fa3400;
  }
  local_88 = param_1[6];
  uStack_80 = param_1[7];
  local_b8 = (longlong *)param_1[8];
  uStack_70 = param_1[9];
  local_68 = param_1[10];
  uStack_60 = param_1[0xb];
  local_58 = param_1[0xc];
  uStack_50 = param_1[0xd];
  uVar8 = local_58;
  uVar9 = uStack_50;
  uVar6 = local_68;
  uVar7 = uStack_60;
  local_78 = local_b8;
  uVar5 = uStack_70;
  uVar4 = uStack_80;
  param_1[0xc] = CONCAT44(uStack_94,local_98);
  param_1[0xd] = CONCAT44(uStack_8c,uStack_90);
  param_1[10] = CONCAT44(uStack_a4,local_a8);
  param_1[0xb] = CONCAT44(uStack_9c,uStack_a0);
  param_1[8] = puVar10;
  param_1[9] = CONCAT44(uStack_ac,uStack_b0);
  param_1[6] = local_c8;
  param_1[7] = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  local_c8 = (undefined1 *)local_88;
  uStack_80 = uVar4;
  uStack_70 = uVar5;
  local_68 = uVar6;
  uStack_60 = uVar7;
  local_58 = uVar8;
  uStack_50 = uVar9;
  if (local_88 != 0) {
    plVar11 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar11 = (longlong *)&local_a8;
    }
    (**(code **)(*plVar11 + 0x10))();
    if (local_d8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (param_5[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa33b4 FUN_148fa33b4 body=38 status=ok
// SIG undefined FUN_148fa33b4(void)

undefined8 FUN_148fa33b4(undefined8 param_1,int param_2)

{
  FUN_148fa3966();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa33da FUN_148fa33da body=38 status=ok
// SIG undefined FUN_148fa33da(void)

undefined8 FUN_148fa33da(undefined8 param_1,int param_2)

{
  FUN_148fa3966();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa3414 FUN_148fa3414 body=161 status=ok
// SIG undefined FUN_148fa3414(void)

undefined8 * FUN_148fa3414(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14ba3ef40;
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_1 + 0x10);
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x1d);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)((longlong)puVar3 + 0x1d) = uVar2;
  puVar3[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar3 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 5,iVar1,0);
    memcpy((void *)puVar3[5],_Src,(longlong)iVar1 * 2);
  }
  return puVar3 + 1;
}



// FUNCTION 148fa34bc FUN_148fa34bc body=29 status=ok
// SIG undefined FUN_148fa34bc(void)

void FUN_148fa34bc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148fa34da FUN_148fa34da body=57 status=ok
// SIG undefined FUN_148fa34da(void)

undefined8 * FUN_148fa34da(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba3ef40;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa3514 FUN_148fa3514 body=195 status=ok
// SIG undefined FUN_148fa3514(void)

void FUN_148fa3514(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined5 local_58;
  undefined3 local_53;
  undefined5 uStack_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0xc) == '\0') {
    uStack_50 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_3 + 5) >> 0x18);
    local_58 = (undefined5)*param_3;
    local_53 = (undefined3)((ulonglong)*param_3 >> 0x28);
    local_48 = (void *)0x0;
    local_40 = *(int *)(param_3 + 3);
    lVar1 = (longlong)local_40;
    _Src = (void *)param_3[2];
    if (lVar1 == 0) {
      local_3c = 0;
    }
    else {
      FUN_1446dd670(&local_48,local_40,0);
      memcpy(local_48,_Src,lVar1 * 2);
    }
    FUN_148a61a28(param_1 + 0x20,*param_2,&local_58);
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa35d8 FUN_148fa35d8 body=29 status=ok
// SIG undefined FUN_148fa35d8(void)

undefined8 FUN_148fa35d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa360a FUN_148fa360a body=93 status=ok
// SIG undefined FUN_148fa360a(void)

void FUN_148fa360a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3ee30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3ef60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa3668 FUN_148fa3668 body=93 status=ok
// SIG undefined FUN_148fa3668(void)

void FUN_148fa3668(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3ee30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3ef60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa36c6 FUN_148fa36c6 body=126 status=ok
// SIG undefined FUN_148fa36c6(void)

void FUN_148fa36c6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba3ee30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3ef60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa3735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa3744 FUN_148fa3744 body=92 status=ok
// SIG undefined FUN_148fa3744(void)

void FUN_148fa3744(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = param_2;
  FUN_148fa3806(param_1 + 0x18,&local_14);
  if (*(longlong *)(param_3 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa37ae FUN_148fa37ae body=86 status=ok
// SIG undefined FUN_148fa37ae(void)

undefined8 FUN_148fa37ae(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = param_2;
  FUN_148fa3806(param_1 + 0x18,&local_14);
  if (*(longlong *)(param_3 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa3806 FUN_148fa3806 body=142 status=ok
// SIG undefined FUN_148fa3806(void)

void FUN_148fa3806(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined5 local_38;
  undefined3 uStack_33;
  undefined5 uStack_30;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_30 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_3 + 5) >> 0x18);
  local_38 = (undefined5)*param_3;
  uStack_33 = (undefined3)((ulonglong)*param_3 >> 0x28);
  lVar1 = param_3[2];
  param_3[2] = 0;
  local_20 = *(undefined4 *)(param_3 + 3);
  local_1c = *(undefined4 *)((longlong)param_3 + 0x1c);
  param_3[3] = 0;
  local_14 = *param_2;
  local_28 = lVar1;
  FUN_148fa38a2(*param_1,&local_14,&local_38);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa38a2 FUN_148fa38a2 body=195 status=ok
// SIG undefined FUN_148fa38a2(void)

void FUN_148fa38a2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined5 local_58;
  undefined3 local_53;
  undefined5 uStack_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0xc) == '\0') {
    uStack_50 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_3 + 5) >> 0x18);
    local_58 = (undefined5)*param_3;
    local_53 = (undefined3)((ulonglong)*param_3 >> 0x28);
    local_48 = (void *)0x0;
    local_40 = *(int *)(param_3 + 3);
    lVar1 = (longlong)local_40;
    _Src = (void *)param_3[2];
    if (lVar1 == 0) {
      local_3c = 0;
    }
    else {
      FUN_1446dd670(&local_48,local_40,0);
      memcpy(local_48,_Src,lVar1 * 2);
    }
    FUN_148a61a28(param_1 + 0x20,*param_2,&local_58);
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa3966 FUN_148fa3966 body=81 status=ok
// SIG undefined FUN_148fa3966(void)

void FUN_148fa3966(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba3ef28;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1449db362(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fa39b8 FUN_148fa39b8 body=291 status=ok
// SIG undefined FUN_148fa39b8(void)

undefined4 * FUN_148fa39b8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148fa3adc(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(uint *)*param_3;
  FUN_145936eee(local_40 + 2,uVar1);
  local_40[0x16] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_148fa3bca(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[0x17] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0x16] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148fa3cfa(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa3adc FUN_148fa3adc body=238 status=ok
// SIG undefined FUN_148fa3adc(void)

int * FUN_148fa3adc(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 148fa3bca FUN_148fa3bca body=182 status=ok
// SIG undefined FUN_148fa3bca(void)

undefined8 FUN_148fa3bca(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_1407a3a68((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_148fa3c80(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 148fa3c80 FUN_148fa3c80 body=122 status=ok
// SIG undefined FUN_148fa3c80(void)

void FUN_148fa3c80(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 148fa3cfa FUN_148fa3cfa body=423 status=ok
// SIG undefined FUN_148fa3cfa(void)

void FUN_148fa3cfa(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 148fa3ea2 FUN_148fa3ea2 body=66 status=ok
// SIG undefined FUN_148fa3ea2(void)

void FUN_148fa3ea2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    plVar3 = (longlong *)param_1[1];
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
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 148fa3ef2 FUN_148fa3ef2 body=276 status=ok
// SIG undefined FUN_148fa3ef2(void)

void FUN_148fa3ef2(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba3f0d0;
  FUN_148fa405a(plVar5 + 2,param_2,*param_3,param_4,param_5);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fa4006 FUN_148fa4006 body=83 status=ok
// SIG undefined FUN_148fa4006(void)

void FUN_148fa4006(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1);
  return;
}



// FUNCTION 148fa405a FUN_148fa405a body=298 status=ok
// SIG undefined FUN_148fa405a(void)

undefined8 *
FUN_148fa405a(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_48,L"ShiftSDK::Rooms::CreateLobbyAdvertisement");
  FUN_145c44afe(param_1,local_48,param_2,param_5);
  *param_1 = &PTR_FUN_14ba3f150;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ba3f140;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *local_58 = &PTR_LAB_14b4f3a00;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar2;
  *local_58 = &PTR_FUN_14ba3f190;
  local_58[3] = param_1;
  FUN_143ef00bc(param_2,param_3,param_4,&local_58);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa4186 FUN_148fa4186 body=9 status=ok
// SIG undefined FUN_148fa4186(void)

void FUN_148fa4186(longlong param_1)

{
  FUN_145702696(param_1 + 0x10);
  return;
}



// FUNCTION 148fa4190 FUN_148fa4190 body=29 status=ok
// SIG undefined FUN_148fa4190(void)

undefined8 FUN_148fa4190(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa41ae FUN_148fa41ae body=38 status=ok
// SIG undefined FUN_148fa41ae(void)

undefined8 FUN_148fa41ae(undefined8 param_1,int param_2)

{
  FUN_145702696();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa41d4 FUN_148fa41d4 body=38 status=ok
// SIG undefined FUN_148fa41d4(void)

undefined8 FUN_148fa41d4(undefined8 param_1,int param_2)

{
  FUN_145702696();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa41fa FUN_148fa41fa body=38 status=ok
// SIG undefined FUN_148fa41fa(void)

undefined8 FUN_148fa41fa(undefined8 param_1,int param_2)

{
  FUN_145702696();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa4220 FUN_148fa4220 body=56 status=ok
// SIG undefined FUN_148fa4220(void)

void FUN_148fa4220(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,(int)param_1[1],*(undefined4 *)((longlong)param_1 + 0xc))
      ;
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa4276 FUN_148fa4276 body=29 status=ok
// SIG undefined FUN_148fa4276(void)

undefined8 FUN_148fa4276(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa42a8 FUN_148fa42a8 body=93 status=ok
// SIG undefined FUN_148fa42a8(void)

void FUN_148fa42a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f190;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}


