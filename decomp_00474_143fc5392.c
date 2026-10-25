// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143fc5392 FUN_143fc5392 body=29 status=ok
// SIG undefined FUN_143fc5392(void)

undefined8 FUN_143fc5392(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fc5416 FUN_143fc5416 body=154 status=ok
// SIG undefined FUN_143fc5416(void)

undefined8 FUN_143fc5416(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    puVar6 = (undefined8 *)(param_2 + 0x20);
    do {
      puVar6[-3] = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar4 = *(undefined4 *)(param_3 + 3);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
      *(undefined4 *)(puVar6 + -2) = *(undefined4 *)(param_3 + 2);
      *(undefined4 *)((longlong)puVar6 + -0xc) = uVar3;
      *(undefined4 *)(puVar6 + -1) = uVar4;
      *(undefined4 *)((longlong)puVar6 + -4) = uVar5;
      if (puVar6 + -4 != param_3) {
        iVar2 = *(int *)(param_3 + 5);
        _Src = (void *)param_3[4];
        *(int *)(puVar6 + 1) = iVar2;
        if (iVar2 == 0 && *(int *)((longlong)puVar6 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar6,iVar2);
          if (iVar2 != 0) {
            memcpy((void *)*puVar6,_Src,(longlong)iVar2 * 2);
          }
        }
      }
      puVar1 = param_3 + 6;
      param_3 = param_3 + 7;
      puVar6[2] = *puVar1;
      puVar6 = puVar6 + 7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143fc54d8 FUN_143fc54d8 body=59 status=ok
// SIG undefined FUN_143fc54d8(void)

undefined8 FUN_143fc54d8(longlong *param_1)

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



// FUNCTION 143fc551e FUN_143fc551e body=48 status=ok
// SIG undefined FUN_143fc551e(void)

void FUN_143fc551e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14b59f730;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 143fc559c FUN_143fc559c body=57 status=ok
// SIG undefined FUN_143fc559c(void)

undefined8 * FUN_143fc559c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b59f730;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fc55d6 FUN_143fc55d6 body=55 status=ok
// SIG undefined FUN_143fc55d6(void)

void FUN_143fc55d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9d568 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9d568 = FUN_140002ddd(FUN_143fb75d9,uVar1,L"GbxUIUMGWidgetTypeExtensionPoint");
  }
  return;
}



// FUNCTION 143fc560e FUN_143fc560e body=29 status=ok
// SIG undefined FUN_143fc560e(void)

undefined8 FUN_143fc560e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fc56aa FUN_143fc56aa body=206 status=ok
// SIG undefined FUN_143fc56aa(void)

undefined8 FUN_143fc56aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  if (param_4 != 0) {
    lVar9 = 0;
    do {
      *(undefined8 *)(param_2 + 8 + lVar9) = *(undefined8 *)(param_3 + 8 + lVar9);
      puVar1 = (undefined4 *)(param_3 + 0x10 + lVar9);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x10 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      if (param_2 != param_3) {
        iVar4 = *(int *)(param_3 + 0x28 + lVar9);
        _Src = *(void **)(param_3 + 0x20 + lVar9);
        *(int *)(param_2 + 0x28 + lVar9) = iVar4;
        if (iVar4 == 0 && *(int *)(param_2 + 0x2c + lVar9) == 0) {
          *(undefined4 *)(param_2 + 0x2c + lVar9) = 0;
        }
        else {
          puVar8 = (undefined8 *)(param_2 + lVar9 + 0x20);
          FUN_1446dd670(puVar8,iVar4);
          if (iVar4 != 0) {
            memcpy((void *)*puVar8,_Src,(longlong)iVar4 * 2);
          }
        }
      }
      lVar3 = param_2 + 0x40 + lVar9;
      *(undefined1 *)(lVar3 + -8) = *(undefined1 *)(param_3 + lVar9 + 0x38);
      *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(param_3 + lVar9 + 0x30);
      FUN_143fc590a();
      lVar9 = lVar9 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143fc57a0 FUN_143fc57a0 body=59 status=ok
// SIG undefined FUN_143fc57a0(void)

undefined8 FUN_143fc57a0(longlong *param_1)

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



// FUNCTION 143fc57e6 FUN_143fc57e6 body=74 status=ok
// SIG undefined FUN_143fc57e6(void)

void FUN_143fc57e6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14b59f750;
    FUN_143fb3f62(param_2[8],*(undefined4 *)(param_2 + 9));
    if (param_2[8] != 0) {
      FUN_1400020a8();
    }
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 143fc587e FUN_143fc587e body=83 status=ok
// SIG undefined FUN_143fc587e(void)

undefined8 * FUN_143fc587e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b59f750;
  FUN_143fb3f62(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fc58d2 FUN_143fc58d2 body=55 status=ok
// SIG undefined FUN_143fc58d2(void)

void FUN_143fc58d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9d580 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9d580 = FUN_140002ddd(FUN_143fb766f,uVar1,L"GbxUIUMGWidgetTypeMenu");
  }
  return;
}



// FUNCTION 143fc590a FUN_143fc590a body=93 status=ok
// SIG undefined FUN_143fc590a(void)

undefined8 * FUN_143fc590a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_143fb3f62(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_143fc5968(param_1,iVar1);
      FUN_143fc5aaf(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 143fc5968 FUN_143fc5968 body=327 status=ok
// SIG undefined FUN_143fc5968(void)

void FUN_143fc5968(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x28;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143fc59d6;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_143fc59d6:
    iVar5 = (int)(uVar4 / 0x28);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x28,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 143fc5aaf FUN_143fc5aaf body=132 status=ok
// SIG undefined FUN_143fc5aaf(void)

void FUN_143fc5aaf(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143fc5b5e FUN_143fc5b5e body=128 status=ok
// SIG undefined FUN_143fc5b5e(void)

void FUN_143fc5b5e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)(param_2 + 0x30);
  if (*(int *)(param_2 + 0x38) != 0) {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143fc5ba2;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x38) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143fc5ba2:
  plVar1 = *(longlong **)(param_2 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143fc5bcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143fc5bde FUN_143fc5bde body=130 status=ok
// SIG undefined FUN_143fc5bde(void)

void FUN_143fc5bde(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_2 + 0x48) != '\x01') {
    return;
  }
  plVar1 = (longlong *)(param_2 + 0x30);
  if (*(int *)(param_2 + 0x38) != 0) {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143fc5c28;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x38) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143fc5c28:
  plVar1 = *(longlong **)(param_2 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  *(undefined1 *)(param_2 + 0x48) = 0;
  return;
}



// FUNCTION 143fc5c60 FUN_143fc5c60 body=294 status=ok
// SIG undefined FUN_143fc5c60(void)

void FUN_143fc5c60(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_143fc5d29;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_143fc5cd8:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_143fc5cd8;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_143fc5d29;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143fc5d29:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fc5d88 FUN_143fc5d88 body=29 status=ok
// SIG undefined FUN_143fc5d88(void)

undefined8 FUN_143fc5d88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fc5f24 FUN_143fc5f24 body=93 status=ok
// SIG undefined FUN_143fc5f24(void)

void FUN_143fc5f24(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b59cab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fc5f82 FUN_143fc5f82 body=93 status=ok
// SIG undefined FUN_143fc5f82(void)

void FUN_143fc5f82(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b59cab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fc5fe0 FUN_143fc5fe0 body=126 status=ok
// SIG undefined FUN_143fc5fe0(void)

void FUN_143fc5fe0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b59cab0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fc604f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fc6068 FUN_143fc6068 body=269 status=ok
// SIG undefined FUN_143fc6068(void)

undefined8 FUN_143fc6068(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143fc616f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143fc616f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143fc616f:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143fc6123;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143fc6176(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143fc6123;
    }
  }
  uVar6 = 0;
LAB_143fc6123:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fc6176 FUN_143fc6176 body=402 status=ok
// SIG undefined FUN_143fc6176(void)

void FUN_143fc6176(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
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
  undefined1 *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (*(int *)(lVar2 + 0x4c) != 0) {
    uVar1 = *(uint *)(lVar2 + 0x48);
    lVar6 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143fc622d;
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) &&
        ((((int)plVar5[2] == *(int *)(lVar2 + 0x4c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
         && (lVar2 = *plVar5, lVar2 != 0)))) && (lVar4 = *(longlong *)(lVar2 + 0x430), lVar4 != 0))
    {
      if (DAT_14cae9568 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1417de738;
        local_30 = &LAB_145893408;
        local_38 = &LAB_1458cbbd2;
        local_48 = &LAB_147ba21f1;
        local_50 = &LAB_1463e9233;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x1000000c;
        local_70 = 8;
        local_78 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar4 = *(longlong *)(lVar2 + 0x430);
        if (lVar4 == 0) goto LAB_143fc61e5;
      }
      lVar6 = 0;
      if ((DAT_14cae9568 == 0) || (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 == 0))
      goto LAB_143fc622d;
      if (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
            DAT_14cae9568 + 0x30) {
          lVar6 = lVar4;
        }
        goto LAB_143fc622d;
      }
    }
  }
LAB_143fc61e5:
  lVar6 = 0;
LAB_143fc622d:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  FUN_148b55e90(lVar6,uVar3);
  return;
}



// FUNCTION 143fc630a FUN_143fc630a body=203 status=ok
// SIG undefined FUN_143fc630a(void)

void FUN_143fc630a(longlong *param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar3 = (longlong *)*param_1;
  if ((((*(int *)((longlong)param_1 + 0xc) != 0) &&
       (uVar2 = *(uint *)(param_1 + 1), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) &&
     ((lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar4 != 0 &&
      (*(int *)(lVar4 + 0x10) == *(int *)((longlong)param_1 + 0xc))))) {
    cVar1 = *param_2;
    if ((*(uint *)(lVar4 + 8) & 0x10200000) == 0) {
      if (cVar1 != '\0') {
        if (cVar1 != '\x02') {
          if (cVar1 == '\x01') {
            local_18 = *param_3;
            FUN_1447cd2ec(plVar3 + 6);
          }
          goto LAB_143fc63ad;
        }
        local_18 = *param_3;
        FUN_1447cd2ec(plVar3 + 8);
      }
      (**(code **)(*plVar3 + 0x2b8))(plVar3);
    }
  }
LAB_143fc63ad:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000143fc63c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x2b8))(plVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fc6400 FUN_143fc6400 body=29 status=ok
// SIG undefined FUN_143fc6400(void)

undefined8 FUN_143fc6400(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fc641e FUN_143fc641e body=24 status=ok
// SIG undefined FUN_143fc641e(void)

void FUN_143fc641e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fc6432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 143fc6436 FUN_143fc6436 body=29 status=ok
// SIG undefined FUN_143fc6436(void)

undefined8 FUN_143fc6436(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fc6454 FUN_143fc6454 body=29 status=ok
// SIG undefined FUN_143fc6454(void)

undefined8 FUN_143fc6454(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fc65fa FUN_143fc65fa body=101 status=ok
// SIG undefined FUN_143fc65fa(void)

void FUN_143fc65fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b59cb80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143fc6660 FUN_143fc6660 body=101 status=ok
// SIG undefined FUN_143fc6660(void)

void FUN_143fc6660(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b59cb80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143fc66c6 FUN_143fc66c6 body=134 status=ok
// SIG undefined FUN_143fc66c6(void)

void FUN_143fc66c6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b412660;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b59cb80;
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
                    /* WARNING: Could not recover jumptable at 0x000143fc673d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fc67ae FUN_143fc67ae body=284 status=ok
// SIG undefined FUN_143fc67ae(void)

undefined8 FUN_143fc67ae(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143fc68c4;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143fc68c4;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143fc68c4:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143fc6877;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_143fc6877;
    }
  }
  uVar6 = 0;
LAB_143fc6877:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fc68cc FUN_143fc68cc body=29 status=ok
// SIG undefined FUN_143fc68cc(void)

undefined8 FUN_143fc68cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fc6a72 FUN_143fc6a72 body=101 status=ok
// SIG undefined FUN_143fc6a72(void)

void FUN_143fc6a72(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b59cbf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143fc6ad8 FUN_143fc6ad8 body=101 status=ok
// SIG undefined FUN_143fc6ad8(void)

void FUN_143fc6ad8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b59cbf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143fc6b3e FUN_143fc6b3e body=134 status=ok
// SIG undefined FUN_143fc6b3e(void)

void FUN_143fc6b3e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b59cbf0;
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
                    /* WARNING: Could not recover jumptable at 0x000143fc6bb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fc6c20 FUN_143fc6c20 body=275 status=ok
// SIG undefined FUN_143fc6c20(void)

undefined8 FUN_143fc6c20(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143fc6d2d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143fc6d2d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143fc6d2d:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143fc6ce1;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_143fc6ce1;
    }
  }
  uVar6 = 0;
LAB_143fc6ce1:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fc6d34 FUN_143fc6d34 body=241 status=ok
// SIG undefined FUN_143fc6d34(void)

longlong FUN_143fc6d34(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  
  lVar1 = param_1[5];
  if ((((lVar1 != 0) && (lVar3 = FUN_14659a66c(), lVar3 != 0)) &&
      (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     ((param_2 != 0 &&
       *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
       lVar3 + 0x30 &&
      (plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c0))(param_1),
      (int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34))))) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    plVar5 = plVar4 + 7;
    if ((longlong *)plVar4[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar4[8];
    }
    iVar7 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)plVar4[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      while (plVar5 = (longlong *)(*plVar4 + (longlong)iVar7 * 0x18), *plVar5 != param_2) {
        iVar7 = (int)plVar5[2];
        if (iVar7 == -1) {
          return 0;
        }
      }
      if (plVar5 + 1 != (longlong *)0x0 && plVar5 != (longlong *)0x0) {
        return plVar5[1];
      }
    }
  }
  return 0;
}



// FUNCTION 143fc6e26 FUN_143fc6e26 body=9 status=ok
// SIG undefined FUN_143fc6e26(void)

void FUN_143fc6e26(longlong param_1)

{
  FUN_143fc6e74(param_1 + 0x10);
  return;
}



// FUNCTION 143fc6e30 FUN_143fc6e30 body=29 status=ok
// SIG undefined FUN_143fc6e30(void)

undefined8 FUN_143fc6e30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fc6e4e FUN_143fc6e4e body=38 status=ok
// SIG undefined FUN_143fc6e4e(void)

undefined8 FUN_143fc6e4e(undefined8 param_1,int param_2)

{
  FUN_143fc6e74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fc6e74 FUN_143fc6e74 body=279 status=ok
// SIG undefined FUN_143fc6e74(void)

void FUN_143fc6e74(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b59d100;
  param_1[0x6a] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x7e];
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
  param_1[0x54] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x68];
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
  if (param_1[0x52] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[0x52] = 0;
  }
  plVar3 = (longlong *)param_1[0x50];
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
  plVar3 = (longlong *)param_1[0x4e];
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
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 143fc6fa4 FUN_143fc6fa4 body=29 status=ok
// SIG undefined FUN_143fc6fa4(void)

undefined8 FUN_143fc6fa4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fc6fc2 FUN_143fc6fc2 body=180 status=ok
// SIG undefined FUN_143fc6fc2(void)

int FUN_143fc6fc2(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x10);
        cVar1 = FUN_1460108d2(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_143fc7050;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_143fc7050:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fc7078 FUN_143fc7078 body=114 status=ok
// SIG undefined FUN_143fc7078(void)

void FUN_143fc7078(longlong *param_1,int param_2)

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



// FUNCTION 143fc70ea FUN_143fc70ea body=159 status=ok
// SIG undefined FUN_143fc70ea(void)

bool FUN_143fc70ea(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  if ((uVar1 != uVar3) || (uVar2 != param_2[1])) {
    if ((uVar2 != 0) &&
       ((((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)) &&
        ((*(uint *)(lVar4 + 0x10) == uVar2 && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))))) {
      return false;
    }
    if (((param_2[1] != 0) && (-1 < (int)uVar3)) &&
       (((int)uVar3 < DAT_14c9647dc &&
        ((lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar4 != 0 &&
         (*(uint *)(lVar4 + 0x10) == param_2[1])))))) {
      return (*(uint *)(lVar4 + 8) & 0x10200000) != 0;
    }
  }
  return true;
}



// FUNCTION 143fc718a FUN_143fc718a body=29 status=ok
// SIG undefined FUN_143fc718a(void)

undefined8 FUN_143fc718a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fc7330 FUN_143fc7330 body=93 status=ok
// SIG undefined FUN_143fc7330(void)

void FUN_143fc7330(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b59d360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fc738e FUN_143fc738e body=93 status=ok
// SIG undefined FUN_143fc738e(void)

void FUN_143fc738e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b59d360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fc73ec FUN_143fc73ec body=126 status=ok
// SIG undefined FUN_143fc73ec(void)

void FUN_143fc73ec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6bc70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b59d360;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fc745b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fc74c8 FUN_143fc74c8 body=275 status=ok
// SIG undefined FUN_143fc74c8(void)

undefined8 FUN_143fc74c8(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143fc75d5;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143fc75d5;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143fc75d5:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143fc7588;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_143fc7588;
    }
  }
  uVar6 = 0;
LAB_143fc7588:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fc75dc FUN_143fc75dc body=346 status=ok
// SIG undefined FUN_143fc75dc(void)

void FUN_143fc75dc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143fc766e;
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
LAB_143fc766e:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 143fc7736 FUN_143fc7736 body=45 status=ok
// SIG undefined FUN_143fc7736(void)

void FUN_143fc7736(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x208);
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 143fc7764 FUN_143fc7764 body=29 status=ok
// SIG undefined FUN_143fc7764(void)

undefined8 FUN_143fc7764(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fc7782 FUN_143fc7782 body=63 status=ok
// SIG undefined FUN_143fc7782(void)

undefined8 * FUN_143fc7782(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fc77da FUN_143fc77da body=29 status=ok
// SIG undefined FUN_143fc77da(void)

undefined8 FUN_143fc77da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fc7810 FUN_143fc7810 body=29 status=ok
// SIG undefined FUN_143fc7810(void)

undefined8 FUN_143fc7810(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fc782e FUN_143fc782e body=313 status=ok
// SIG undefined FUN_143fc782e(void)

void FUN_143fc782e(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_143fc7893;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_143fc7893:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 143fc7968 FUN_143fc7968 body=346 status=ok
// SIG undefined FUN_143fc7968(void)

void FUN_143fc7968(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143fc79fa;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_143fc79fa:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 143fc7ac2 FUN_143fc7ac2 body=1156 status=ok
// SIG undefined FUN_143fc7ac2(void)

undefined8 FUN_143fc7ac2(longlong *param_1,undefined8 *param_2,char param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  
  cVar5 = (**(code **)(*param_1 + 0x300))();
  if (cVar5 == '\0') {
    iVar2 = (int)param_1[0x54];
    if (iVar2 == 0) {
      uVar13 = 1;
      uVar17 = 0;
      iVar14 = 0;
      iVar6 = 0;
    }
    else {
      puVar7 = (uint *)param_1[0x53];
      if ((uint *)param_1[0x53] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x51);
      }
      uVar16 = *puVar7;
      if (uVar16 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        uVar17 = 0;
        uVar13 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar13 = uVar17;
        }
        iVar14 = 0;
        do {
          if (uVar13 == uVar17) {
            return 0;
          }
          iVar14 = iVar14 + 0x20;
          uVar16 = puVar7[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar17 = 0;
        iVar14 = 0;
      }
      uVar13 = (ulonglong)(-uVar16 & uVar16);
      uVar1 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 != iVar2) {
      uVar16 = 0xffffffff;
      do {
        lVar8 = param_1[0x4f];
        lVar15 = *(longlong *)(lVar8 + 0x10 + (longlong)iVar6 * 0x20);
        if (lVar15 != 0) {
          if (param_3 != '\0') {
            FUN_144837e54(lVar15,0);
            lVar15 = *(longlong *)(lVar8 + (longlong)iVar6 * 0x20 + 0x10);
          }
          if (((*(byte **)(lVar15 + 0x48) != (byte *)0x0) &&
              ((**(byte **)(lVar15 + 0x48) & 0x6b) == 3)) &&
             (plVar4 = *(longlong **)(lVar15 + 0x30), plVar4 != (longlong *)0x0)) {
            lVar8 = (**(code **)(*plVar4 + 8))(plVar4);
            if (DAT_14cb9d520 == 0) {
              uVar9 = FUN_140f9f06f();
              DAT_14cb9d520 = FUN_140002ddd(FUN_143fb74ad,uVar9,L"GbxUIUMGWidgetDef");
              if (DAT_14cb9d520 == 0) goto LAB_143fc7e73;
            }
            if (((*(int *)(DAT_14cb9d520 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cb9d520 + 0x38) * 8) ==
                 DAT_14cb9d520 + 0x30)) &&
               (cVar5 = (*(code *)*param_2)(param_2[1],plVar4), cVar5 != '\0')) {
              return 1;
            }
          }
        }
LAB_143fc7e73:
        uVar16 = uVar16 & ~(uint)uVar13;
        puVar7 = (uint *)param_1[0x53];
        if ((uint *)param_1[0x53] == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x51);
        }
        iVar3 = (int)param_1[0x54];
        iVar6 = (int)uVar17;
        lVar8 = (longlong)iVar6;
        uVar12 = puVar7[lVar8] & uVar16;
        if (uVar12 == 0) {
          iVar10 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar10 = iVar3 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar6) {
            iVar11 = iVar6;
          }
          if (iVar6 < iVar10) {
            lVar15 = 0;
            do {
              uVar12 = puVar7[lVar8 + lVar15 + 1];
              if (uVar12 != 0) {
                uVar17 = (ulonglong)(iVar6 + (int)lVar15 + 1);
                uVar16 = 0xffffffff;
                goto LAB_143fc7eeb;
              }
              iVar14 = iVar14 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar11 - lVar8 != lVar15);
            uVar16 = 0xffffffff;
            iVar6 = iVar11;
          }
          uVar17 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar3;
        }
        else {
LAB_143fc7eeb:
          uVar13 = (ulonglong)(-uVar12 & uVar12);
          uVar1 = uVar13 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
        }
      } while (iVar6 != iVar2);
    }
  }
  else {
    iVar2 = (int)param_1[0x3e];
    if (iVar2 == 0) {
      uVar17 = 1;
      uVar13 = 0;
      iVar14 = 0;
      iVar6 = 0;
    }
    else {
      puVar7 = (uint *)param_1[0x3d];
      if ((uint *)param_1[0x3d] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x3b);
      }
      uVar16 = *puVar7;
      if (uVar16 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        uVar13 = 0;
        uVar17 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar17 = uVar13;
        }
        iVar14 = 0;
        do {
          if (uVar17 == uVar13) {
            return 0;
          }
          iVar14 = iVar14 + 0x20;
          uVar16 = puVar7[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar13 = 0;
        iVar14 = 0;
      }
      uVar17 = (ulonglong)(-uVar16 & uVar16);
      uVar1 = uVar17 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 != iVar2) {
      uVar16 = 0xffffffff;
      do {
        plVar4 = *(longlong **)(param_1[0x39] + 0x10 + (longlong)iVar6 * 0x20);
        if (plVar4 != (longlong *)0x0) {
          lVar8 = (**(code **)(*plVar4 + 8))(plVar4);
          if (DAT_14cb9d520 == 0) {
            uVar9 = FUN_140f9f06f();
            DAT_14cb9d520 = FUN_140002ddd(FUN_143fb74ad,uVar9,L"GbxUIUMGWidgetDef");
            if (DAT_14cb9d520 == 0) goto LAB_143fc7cb2;
          }
          if (((*(int *)(DAT_14cb9d520 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cb9d520 + 0x38) * 8) ==
               DAT_14cb9d520 + 0x30)) &&
             (cVar5 = (*(code *)*param_2)(param_2[1],plVar4), cVar5 != '\0')) {
            return 1;
          }
        }
LAB_143fc7cb2:
        uVar16 = uVar16 & ~(uint)uVar17;
        puVar7 = (uint *)param_1[0x3d];
        if ((uint *)param_1[0x3d] == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x3b);
        }
        iVar3 = (int)param_1[0x3e];
        iVar6 = (int)uVar13;
        lVar8 = (longlong)iVar6;
        uVar12 = puVar7[lVar8] & uVar16;
        if (uVar12 == 0) {
          iVar10 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar10 = iVar3 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar6) {
            iVar11 = iVar6;
          }
          if (iVar6 < iVar10) {
            lVar15 = 0;
            do {
              uVar12 = puVar7[lVar8 + lVar15 + 1];
              if (uVar12 != 0) {
                uVar13 = (ulonglong)(iVar6 + (int)lVar15 + 1);
                uVar16 = 0xffffffff;
                goto LAB_143fc7d2d;
              }
              iVar14 = iVar14 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar11 - lVar8 != lVar15);
            uVar16 = 0xffffffff;
            iVar6 = iVar11;
          }
          uVar13 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar3;
        }
        else {
LAB_143fc7d2d:
          uVar17 = (ulonglong)(-uVar12 & uVar12);
          uVar1 = uVar17 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
        }
      } while (iVar6 != iVar2);
    }
  }
  return 0;
}



// FUNCTION 143fc7f46 FUN_143fc7f46 body=67 status=ok
// SIG undefined FUN_143fc7f46(void)

void FUN_143fc7f46(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fc7f8a FUN_143fc7f8a body=445 status=ok
// SIG undefined FUN_143fc7f8a(void)

undefined8 FUN_143fc7f8a(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    piVar6 = &DAT_14c9485f0;
    if (*(int **)(lVar1 + 8) != (int *)0x0) {
      piVar6 = *(int **)(lVar1 + 8);
    }
    if (*piVar6 == *(int *)*param_1) {
      plVar2 = (longlong *)param_1[1];
      if (plVar2[1] == 0) {
        if (DAT_14cb9d520 == 0) {
          uVar3 = FUN_140f9f06f();
          DAT_14cb9d520 = FUN_140002ddd(FUN_143fb74ad,uVar3,L"GbxUIUMGWidgetDef");
        }
        lVar4 = FUN_14477b664(DAT_14cb9d520);
        plVar2[1] = lVar4;
      }
      lVar4 = DAT_14cb9d520;
      if (DAT_14cb9d520 == 0) {
        uVar3 = FUN_140f9f06f();
        lVar4 = FUN_140002ddd(FUN_143fb74ad,uVar3,L"GbxUIUMGWidgetDef");
        DAT_14cb9d520 = lVar4;
        if (lVar4 == 0) {
          uVar3 = FUN_140f9f06f();
          DAT_14cb9d520 = FUN_140002ddd(FUN_143fb74ad,uVar3,L"GbxUIUMGWidgetDef");
          lVar4 = 0;
        }
      }
      FUN_1402d1bfa(&local_30,DAT_14cb9d520,lVar1);
      if (*plVar2 != local_30) {
        plVar2[2] = 0;
      }
      *plVar2 = local_30;
      if (DAT_14cb9d520 == 0) {
        uVar3 = FUN_140f9f06f();
        DAT_14cb9d520 = FUN_140002ddd(FUN_143fb74ad,uVar3,L"GbxUIUMGWidgetDef");
      }
      if (lVar4 == 0) {
LAB_143fc80ec:
        lVar5 = lVar4;
      }
      else if (DAT_14cb9d520 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = DAT_14cb9d520;
        if ((*(int *)(DAT_14cb9d520 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cb9d520 + 0x38) * 8) ==
            DAT_14cb9d520 + 0x30)) goto LAB_143fc80ec;
      }
      if (plVar2[1] != lVar5) {
        plVar2[2] = 0;
      }
      uVar3 = FUN_14477b664();
      lVar4 = FUN_14477b664(uVar3);
      plVar2[1] = lVar4;
      if ((lVar4 != 0) && (*plVar2 != 0)) {
        plVar2[2] = lVar1;
      }
      uVar3 = 1;
      goto LAB_143fc8123;
    }
  }
  uVar3 = 0;
LAB_143fc8123:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fc8148 FUN_143fc8148 body=57 status=ok
// SIG undefined FUN_143fc8148(void)

undefined8 * FUN_143fc8148(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b59d760;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fc8300 FUN_143fc8300 body=191 status=ok
// SIG undefined FUN_143fc8300(void)

void FUN_143fc8300(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b59d760;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((longlong)puVar2 + 0x34) = uVar3;
  *(undefined4 *)(puVar2 + 7) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uVar5;
  puVar2[8] = 0;
  iVar1 = *(int *)(param_1 + 0x48);
  _Src = *(void **)(param_1 + 0x40);
  *(int *)(puVar2 + 9) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 8,iVar1,0);
    memcpy((void *)puVar2[8],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
  return;
}



// FUNCTION 143fc83c0 FUN_143fc83c0 body=191 status=ok
// SIG undefined FUN_143fc83c0(void)

void FUN_143fc83c0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b59d760;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((longlong)puVar2 + 0x34) = uVar3;
  *(undefined4 *)(puVar2 + 7) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uVar5;
  puVar2[8] = 0;
  iVar1 = *(int *)(param_1 + 0x48);
  _Src = *(void **)(param_1 + 0x40);
  *(int *)(puVar2 + 9) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 8,iVar1,0);
    memcpy((void *)puVar2[8],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
  return;
}



// FUNCTION 143fc8480 FUN_143fc8480 body=230 status=ok
// SIG undefined FUN_143fc8480(void)

void FUN_143fc8480(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b59d760;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var2->Flags = (int)uVar3;
  p_Var2->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var2->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  uVar7 = *(undefined4 *)(param_1 + 0x3c);
  p_Var2[1].Type = (short)uVar4;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var2[1].field_0x4 = uVar5;
  *(undefined4 *)&p_Var2[1].CriticalSection = uVar6;
  *(undefined4 *)((longlong)&p_Var2[1].CriticalSection + 4) = uVar7;
  p_Var2[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  iVar1 = *(int *)(param_1 + 0x48);
  _Src = *(void **)(param_1 + 0x40);
  *(int *)&p_Var2[1].ProcessLocksList.Blink = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Blink + 4) = 0;
  }
  else {
    FUN_1446dd670(&p_Var2[1].ProcessLocksList,iVar1,0);
    memcpy(p_Var2[1].ProcessLocksList.Flink,_Src,(longlong)iVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fc8554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fc8570 FUN_143fc8570 body=269 status=ok
// SIG undefined FUN_143fc8570(void)

undefined8 FUN_143fc8570(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143fc8677;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143fc8677;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143fc8677:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143fc862b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143fc867e(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143fc862b;
    }
  }
  uVar6 = 0;
LAB_143fc862b:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fc867e FUN_143fc867e body=117 status=ok
// SIG undefined FUN_143fc867e(void)

void FUN_143fc867e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = FUN_148b5fc4a(param_1 + 1);
  if (lVar3 != 0) {
    lVar3 = FUN_148b5fc4a(param_1 + 1);
    if (lVar3 != 0) {
      FUN_1401924dc(lVar3);
    }
    iVar1 = *(int *)(lVar2 + 0x80);
    *(uint *)(lVar2 + 0x80) = iVar1 + 1U;
    if (*(uint *)(lVar2 + 0x84) < iVar1 + 1U) {
      FUN_148b5fd10((longlong *)(lVar2 + 0x78),iVar1);
    }
    *(longlong *)(*(longlong *)(lVar2 + 0x78) + (longlong)iVar1 * 8) = lVar3;
  }
  return;
}



// FUNCTION 143fc86f4 FUN_143fc86f4 body=29 status=ok
// SIG undefined FUN_143fc86f4(void)

undefined8 FUN_143fc86f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fc8890 FUN_143fc8890 body=93 status=ok
// SIG undefined FUN_143fc8890(void)

void FUN_143fc8890(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b59d840;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b59d7d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fc88ee FUN_143fc88ee body=93 status=ok
// SIG undefined FUN_143fc88ee(void)

void FUN_143fc88ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b59d840;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b59d7d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fc894c FUN_143fc894c body=126 status=ok
// SIG undefined FUN_143fc894c(void)

void FUN_143fc894c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b59d840;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b59d7d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fc89bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fc89ca FUN_143fc89ca body=66 status=ok
// SIG undefined FUN_143fc89ca(void)

void FUN_143fc89ca(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143fc8b26(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fc8a0e FUN_143fc8a0e body=279 status=ok
// SIG undefined FUN_143fc8a0e(void)

undefined8 FUN_143fc8a0e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143fc8b1f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143fc8b1f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143fc8b1f:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143fc8ad3;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143fc8b26(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_143fc8ad3;
    }
  }
  uVar6 = 0;
LAB_143fc8ad3:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fc8b26 FUN_143fc8b26 body=124 status=ok
// SIG undefined FUN_143fc8b26(void)

void FUN_143fc8b26(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  FUN_148b5c21c(param_1,lVar1);
  if ((longlong)(int)param_1[8] != 0) {
    plVar3 = (longlong *)param_1[7];
    lVar2 = (longlong)(int)param_1[8] * 0x18;
    do {
      if (*plVar3 == lVar1) {
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*param_1 + 0x2a0))(param_1,lVar1,plVar3[1]);
          *(undefined1 *)(plVar3 + 2) = 1;
          return;
        }
        break;
      }
      plVar3 = plVar3 + 3;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x000143fc8b9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c0))(param_1,lVar1);
  return;
}



// FUNCTION 143fc8ba2 FUN_143fc8ba2 body=2819 status=ok
// SIG undefined FUN_143fc8ba2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fc8ba2(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined1 local_7c [4];
  wchar_t *local_78;
  int local_70;
  undefined1 local_6c;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  _DAT_14cb9d3e0 = 0xffffffff;
  _DAT_14cb9d3e4 = 0;
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b5971c0,1,&PTR_FUN_14b597190);
  local_78 = L"AssetRegistry";
  local_70 = 0xd;
  local_6c = 0;
  uVar3 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb9d418 = (ulonglong)uVar3;
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b597310,1,&PTR_FUN_14b5972e0);
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b597510,1,&PTR_FUN_14b5974e0);
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  local_98 = 2;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b597c40,1,&PTR_FUN_14b597bf0);
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  local_98 = 2;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b598360,1,&PTR_FUN_14b598310);
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  local_98 = 5;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b598b80,1,&PTR_FUN_14b598ab0);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b598e30,1,0);
  uStack_88 = 2;
  ppuStack_90 = &PTR_FUN_14b59ac40;
  local_98 = 3;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b59ad00,3,&PTR_FUN_14b59ac80);
  FUN_1446f470e(&DAT_14cb9d6e8,L"CreatingWidgetAsync",1);
  local_78 = L"WidgetPaletteCategory_Core";
  local_70 = 0x1a;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"GbxUIUMG";
  local_70 = 8;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"GBX CORE";
  local_70 = 8;
  FUN_140208c1e(&DAT_14cb9d6f8,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143fb7c09);
  local_78 = L"WidgetPaletteCategory_Text";
  local_70 = 0x1a;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"GbxUIUMG";
  local_70 = 8;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"GBX TEXT";
  local_70 = 8;
  FUN_140208c1e(&DAT_14cb9d708,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143fb7c1d);
  local_78 = L"WidgetPaletteCategory_List";
  local_70 = 0x1a;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"GbxUIUMG";
  local_70 = 8;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"GBX LIST";
  local_70 = 8;
  FUN_140208c1e(&DAT_14cb9d718,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143fb7c31);
  local_78 = L"WidgetPaletteCategory_Switcher";
  local_70 = 0x1e;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"GbxUIUMG";
  local_70 = 8;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"GBX SWITCHER";
  local_70 = 0xc;
  FUN_140208c1e(&DAT_14cb9d728,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143fb7c45);
  local_78 = L"WidgetPaletteCategory_Extra";
  local_70 = 0x1b;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"GbxUIUMG";
  local_70 = 8;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"GBX EXTRA";
  local_70 = 9;
  FUN_140208c1e(&DAT_14cb9d738,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143fb7c59);
  local_78 = L"WidgetPaletteCategory_Widget";
  local_70 = 0x1c;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"GbxUIUMG";
  local_70 = 8;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"GBX WIDGET";
  local_70 = 10;
  FUN_140208c1e(&DAT_14cb9d748,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143fb7c6d);
  local_78 = L"WidgetPaletteCategory_Panel";
  local_70 = 0x1b;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"GbxUIUMG";
  local_70 = 8;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"GBX PANEL";
  local_70 = 9;
  FUN_140208c1e(&DAT_14cb9d758,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143fb7c81);
  local_78 = L"WidgetPaletteCategory_Input";
  local_70 = 0x1b;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"GbxUIUMG";
  local_70 = 8;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"GBX INPUT";
  local_70 = 9;
  FUN_140208c1e(&DAT_14cb9d768,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143fb7c95);
  local_78 = L"WidgetPaletteCategory_UserCreated";
  local_70 = 0x21;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"GbxUIUMG";
  local_70 = 8;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"USER CREATED";
  local_70 = 0xc;
  FUN_140208c1e(&DAT_14cb9d778,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143fb7ca9);
  FUN_140056680(&DAT_14cb9d788,L"[NewLine]");
  atexit((_func_5014 *)&LAB_143fb8848);
  _DAT_14cb9d7ac = 0;
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_78,&DAT_14cb9d7b4);
  if (cVar2 == '\0') {
    _DAT_14cb9d7b4 = 0;
    uRam000000014cb9d7bc = 0;
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&DAT_14cb9d7c8,L"gbx-widget");
  atexit((_func_5014 *)&LAB_143fbba45);
  FUN_140056680(&DAT_14cb9d7d8,L"widget");
  atexit((_func_5014 *)&LAB_143fbba56);
  FUN_140056680(&DAT_14cb9d7e8,&DAT_149f0f4f8);
  atexit((_func_5014 *)&LAB_143fbba67);
  FUN_140056680(&DAT_14cb9d7f8,L"width");
  atexit((_func_5014 *)&LAB_143fbba78);
  FUN_140056680(&DAT_14cb9d808,L"height");
  atexit((_func_5014 *)&LAB_143fbba89);
  FUN_140056680(&DAT_14cb9d818,L"padding_top");
  atexit((_func_5014 *)&LAB_143fbba9a);
  FUN_140056680(&DAT_14cb9d828,L"padding_bottom");
  atexit((_func_5014 *)&LAB_143fbbaab);
  FUN_140056680(&DAT_14cb9d838,L"padding_left");
  atexit((_func_5014 *)&LAB_143fbbabc);
  FUN_140056680(&DAT_14cb9d848,L"padding_right");
  atexit((_func_5014 *)&LAB_143fbbacd);
  FUN_140056680(&DAT_14cb9d858,L"glyph");
  atexit((_func_5014 *)&LAB_143fbcdea);
  FUN_140056680(&DAT_14cb9d868,L"height");
  atexit((_func_5014 *)&LAB_143fbcdfb);
  FUN_140056680(&DAT_14cb9d878,L"desired");
  atexit((_func_5014 *)&LAB_143fbce0c);
  FUN_140056680(&DAT_14cb9d888,L"width");
  atexit((_func_5014 *)&LAB_143fc0808);
  FUN_140056680(&DAT_14cb9d898,L"height");
  atexit((_func_5014 *)&LAB_143fc0819);
  FUN_140056680(&DAT_14cb9d8a8,L"stretch");
  atexit((_func_5014 *)&LAB_143fc082a);
  FUN_140056680(&DAT_14cb9d8b8,L"desired");
  atexit((_func_5014 *)&LAB_143fc083b);
  local_78 = (wchar_t *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  local_70 = 2;
  *(undefined ***)local_78 = &PTR_LAB_14acb7d20;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_78 + 8) = lVar4;
  *(undefined ***)local_78 = &PTR_FUN_14acb7cb0;
  *(code **)(local_78 + 0xc) = FUN_148b5b906;
  local_98 = local_98 & 0xffffffff00000000;
  FUN_141819a96(&DAT_14cb9d8c8,L"gbx.ui.umg.togglevisibility",
                L"Toggles rendering of the given ui view.",&local_78);
  if (local_70 == 0) {
LAB_143fc94cc:
    if (local_78 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    local_70 = 0;
    goto LAB_143fc94cc;
  }
  atexit(FUN_143fc1e6b);
  local_78 = (wchar_t *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  local_70 = 2;
  *(undefined ***)local_78 = &PTR_LAB_14acb7d20;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_78 + 8) = lVar4;
  *(undefined ***)local_78 = &PTR_FUN_14acb7cb0;
  *(code **)(local_78 + 0xc) = FUN_143fc1eb0;
  local_98 = local_98 & 0xffffffff00000000;
  FUN_141819a96(&DAT_14cb9d8d8,L"gbx.ui.umg.setvisibility",L"Sets rendering of the ui on or off",
                &local_78);
  if (local_70 != 0) {
    if (local_78 == (wchar_t *)0x0) goto LAB_143fc95b8;
    (*(code *)**(undefined8 **)local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    local_70 = 0;
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_143fc95b8:
  atexit(FUN_143fc1f10);
  DAT_14cb9d8e8 = 0;
  DAT_14cb9d8f0 = 0;
  atexit(FUN_143fc1f55);
  DAT_14cb9d8f8 = 0;
  _DAT_14cb9d900 = 0;
  _DAT_14cb9d908 = 2;
  atexit(FUN_143fc1fb0);
  local_78 = (wchar_t *)0x800000014b59d8f0;
  local_64 = 8;
  local_70 = FUN_14577453c(L"GbxUIUMG");
  local_6c = 1;
  FUN_14659e862(&local_78);
  _DAT_14cb9d928 = 0;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fc96a8 FUN_143fc96a8 body=166 status=ok
// SIG undefined FUN_143fc96a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fc96a8(void)

{
  DAT_14cb9d9a0 = 0;
  if (DAT_14cb9d998 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb9d960 = 0;
  if (DAT_14cb9d964 != 0) {
    FUN_144727cd0(&DAT_14cb9d958,0);
  }
  _DAT_14cb9d988 = 0xffffffff;
  _DAT_14cb9d980 = 0;
  if (0x80 < DAT_14cb9d984) {
    DAT_14cb9d984 = 0x80;
    FUN_1446efbd8(&DAT_14cb9d968,0);
  }
  if (DAT_14cb9d978 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb9d958 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143fc975c FUN_143fc975c body=437 status=ok
// SIG undefined FUN_143fc975c(void)

void FUN_143fc975c(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar15 = 0;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x38);
    }
    uVar14 = *puVar5;
    if (uVar14 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar13 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar13 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar13 == uVar15) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar14 = puVar5[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar14 = 0xffffffff;
    iVar4 = iVar2;
    do {
      lVar11 = *(longlong *)(param_1 + 0x28);
      plVar3 = *(longlong **)(lVar11 + 8 + (longlong)iVar6 * 0x18);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2d0))(plVar3,param_2);
        (**(code **)(**(longlong **)(lVar11 + (longlong)iVar6 * 0x18 + 8) + 0x2b0))();
        iVar4 = *(int *)(param_1 + 0x50);
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar5 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x38);
      }
      iVar6 = (int)uVar15;
      lVar11 = (longlong)iVar6;
      uVar7 = puVar5[lVar11] & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar6 < iVar8) {
          lVar12 = 0;
          do {
            uVar7 = puVar5[lVar11 + lVar12 + 1];
            if (uVar7 != 0) {
              uVar15 = (ulonglong)(iVar6 + (int)lVar12 + 1);
              uVar14 = 0xffffffff;
              goto LAB_143fc98c8;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar9 - lVar11 != lVar12);
          uVar14 = 0xffffffff;
          iVar6 = iVar9;
        }
        uVar15 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar4;
      }
      else {
LAB_143fc98c8:
        uVar13 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar6) {
          iVar6 = iVar4;
        }
      }
    } while (iVar6 != iVar2);
  }
  return;
}



// FUNCTION 143fc9912 FUN_143fc9912 body=859 status=ok
// SIG undefined FUN_143fc9912(void)

undefined8 FUN_143fc9912(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_108 [44];
  uint local_dc;
  undefined8 local_d8;
  int local_cc;
  uint *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined2 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong lStack_88;
  longlong *local_78;
  longlong local_68 [4];
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((param_3 != (longlong *)0x0) && (uVar4 = (**(code **)(*param_3 + 0x2d0))(param_3), uVar4 != 0)
     ) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb9d9a8);
    uVar10 = DAT_14c951640;
    uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar3 >> 0x10 ^ uVar3;
    if (DAT_14cb9d960 != DAT_14cb9d98c) {
      puVar5 = &DAT_14cb9d990;
      if (DAT_14cb9d998 != (undefined *)0x0) {
        puVar5 = DAT_14cb9d998;
      }
      uVar9 = *(uint *)(puVar5 + (ulonglong)(DAT_14cb9d9a0 - 1U & uVar3) * 4);
      while (uVar9 != 0xffffffff) {
        puVar1 = (uint *)(DAT_14cb9d958 + (longlong)(int)uVar9 * 0x18);
        if (*puVar1 == uVar3) {
          if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
            lVar11 = *(longlong *)(puVar1 + 2);
            goto LAB_143fc9abe;
          }
          break;
        }
        uVar9 = puVar1[4];
      }
    }
    FUN_14058b40c(DAT_14c951640,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
    local_c8 = (uint *)FUN_143fb2cca();
    local_78 = (longlong *)0x0;
    local_48 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    lStack_88 = 0;
    local_c0 = (undefined8 *)uVar10;
    local_d8 = FUN_1402710dd(&local_c8);
    if (lStack_88 != 0) {
      plVar6 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar6 = local_68;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    local_c0 = &local_d8;
    local_c8 = &local_dc;
    local_dc = uVar3;
    FUN_143fdc894(&DAT_14cb9d958,&local_cc,&local_c8,0);
    lVar11 = *(longlong *)(DAT_14cb9d958 + 8 + (longlong)local_cc * 0x18);
    FUN_143fc975c(lVar11,uVar4);
LAB_143fc9abe:
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb9d9a8);
    if ((lVar11 != 0) && (*(int *)(lVar11 + 0x30) != *(int *)(lVar11 + 0x5c))) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar9 = (uint)lVar2 & 0xffff;
      lVar7 = lVar11 + 0x60;
      if (*(longlong *)(lVar11 + 0x68) != 0) {
        lVar7 = *(longlong *)(lVar11 + 0x68);
      }
      iVar13 = *(int *)(lVar7 + (ulonglong)
                                (*(int *)(lVar11 + 0x70) - 1U &
                                (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                                (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar13 != -1) {
        uVar10 = 0;
        do {
          plVar6 = (longlong *)(*(longlong *)(lVar11 + 0x28) + (longlong)iVar13 * 0x18);
          if (*plVar6 == lVar2) {
            if ((plVar6 + 1 == (longlong *)0x0 || plVar6 == (longlong *)0x0) ||
               (lVar11 = plVar6[1], lVar11 == 0)) goto LAB_143fc9b64;
            uVar3 = *(uint *)(lVar11 + 0xc);
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar11 = 0;
            }
            iVar13 = *(int *)(lVar11 + 0x10);
            if (iVar13 == 0) {
              LOCK();
              iVar13 = DAT_14c964868 + 1;
              UNLOCK();
              iVar12 = DAT_14c964868 + 1;
              bVar14 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar13;
              if (bVar14) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar12);
              }
              uVar10 = 0;
              LOCK();
              iVar13 = *(int *)(lVar11 + 0x10);
              bVar14 = iVar13 == 0;
              if (bVar14) {
                *(int *)(lVar11 + 0x10) = iVar12;
                iVar13 = 0;
              }
              UNLOCK();
              if (bVar14) {
                iVar13 = iVar12;
              }
              if (iVar13 == 0) break;
            }
            uVar10 = 0;
            if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
              puVar8 = (undefined8 *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
              if ((puVar8 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar8 + 2) != iVar13 || ((*(uint *)(puVar8 + 1) & 0x10200000) != 0))))
              goto LAB_143fc9b64;
              uVar10 = *puVar8;
            }
            break;
          }
          iVar13 = (int)plVar6[2];
        } while (iVar13 != -1);
        goto LAB_143fc9b66;
      }
    }
  }
LAB_143fc9b64:
  uVar10 = 0;
LAB_143fc9b66:
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fc9c6e FUN_143fc9c6e body=41 status=ok
// SIG undefined FUN_143fc9c6e(void)

void FUN_143fc9c6e(void)

{
  DAT_14cb9da20 = 0;
  if (DAT_14cb9da18 != 0) {
    FUN_1400020a8();
  }
  FUN_14619a320();
  return;
}



// FUNCTION 143fc9c98 FUN_143fc9c98 body=365 status=ok
// SIG undefined FUN_143fc9c98(void)

void FUN_143fc9c98(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  ulonglong uStack_60;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = FUN_14050fd64();
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_148b60562(lVar4 + 0x1e8,&local_50,param_2);
  puVar5 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 0;
  FUN_14009d848(puVar5,param_3);
  *(undefined1 *)(puVar5 + 2) = 0;
  puVar5[3] = local_50;
  puVar5[4] = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  puVar5[5] = 0;
  puVar5[6] = 0;
  iVar3 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar3 + 1U) {
    FUN_148b69518((longlong *)(param_1 + 0x28),iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 8) = puVar5;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((int)uStack_60 != 0) {
    if (local_68 == (undefined8 *)0x0) goto LAB_143fc9dc1;
    (**(code **)*local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    uStack_60 = uStack_60 & 0xffffffff00000000;
  }
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143fc9dc1:
  FUN_148b60714(param_1);
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fc9e06 FUN_143fc9e06 body=46 status=ok
// SIG undefined FUN_143fc9e06(void)

void FUN_143fc9e06(longlong param_1)

{
  FUN_148b603b8();
  if (*(char *)(param_1 + 0x21) == '\0') {
    *(undefined1 *)(param_1 + 0x21) = 1;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
  }
  FUN_143fc9fd4(param_1);
  return;
}



// FUNCTION 143fc9e34 FUN_143fc9e34 body=244 status=ok
// SIG undefined FUN_143fc9e34(void)

void FUN_143fc9e34(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14b59f898;
  FUN_148b603b8();
  iVar2 = *(int *)(param_1 + 6);
  if ((longlong)iVar2 != 0) {
    lVar3 = param_1[5];
    lVar5 = 0;
    do {
      FUN_148b60464(*(undefined8 *)(lVar3 + lVar5));
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar2 * 8 != lVar5);
  }
  FUN_148b60512(param_1 + 7,param_1 + 5);
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  FUN_143fc9f28(param_1);
  plVar4 = (longlong *)param_1[0xc];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (longlong *)param_1[10];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_148b694d3(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_148b694d3(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143fc9f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143fc9f28 FUN_143fc9f28 body=155 status=ok
// SIG undefined FUN_143fc9f28(void)

void FUN_143fc9f28(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x58) != 0) && (*(longlong *)(param_1 + 0x60) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x60) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x58);
    local_20 = *(longlong *)(param_1 + 0x60);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar2 = *(longlong *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fc9fd4 FUN_143fc9fd4 body=720 status=ok
// SIG undefined FUN_143fc9fd4(void)

void FUN_143fc9fd4(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  code *local_40;
  int local_38;
  undefined8 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x21) == '\x01') {
    while( true ) {
      iVar6 = *(int *)(param_1 + 0x30);
      if (iVar6 <= *(int *)(param_1 + 0x24)) break;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x24) * 8);
      cVar5 = FUN_148b60b2e(lVar3);
      if (cVar5 == '\0') {
        if (*(char *)(lVar3 + 0x10) == '\0') {
          local_40 = FUN_143fc9fd4;
          local_38 = 0;
          FUN_148b608f6(&local_30,param_1);
          FUN_148b60864(lVar3,&local_30);
          if ((int)local_28 != 0) {
            if (local_30 == (undefined8 *)0x0) goto LAB_143fca02f;
            (**(code **)*local_30)(local_30,0);
            FUN_1446efa72(&local_30,0,0,0x10);
            local_28 = (longlong *)((ulonglong)local_28._4_4_ << 0x20);
          }
          if (local_30 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
LAB_143fca02f:
        iVar6 = *(int *)(param_1 + 0x30);
        break;
      }
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      FUN_148b60a78(lVar3);
    }
    if (0 < iVar6) {
      uVar2 = *(uint *)(param_1 + 0x24);
      if (((int)uVar2 < iVar6) &&
         ((uVar2 != iVar6 - 1U ||
          (cVar5 = FUN_148b60b2e(*(undefined8 *)
                                  (*(longlong *)(param_1 + 0x28) + (ulonglong)uVar2 * 8)),
          cVar5 == '\0')))) goto LAB_143fca097;
    }
    if (*(char *)(param_1 + 0x21) == '\x01') {
      *(undefined1 *)(param_1 + 0x21) = 0;
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
      iVar6 = *(int *)(param_1 + 0x30);
      if (0 < iVar6) {
        uVar2 = *(uint *)(param_1 + 0x24);
        if (((int)uVar2 < iVar6) &&
           ((uVar2 != iVar6 - 1U ||
            (cVar5 = FUN_148b60b2e(*(undefined8 *)
                                    (*(longlong *)(param_1 + 0x28) + (ulonglong)uVar2 * 8)),
            cVar5 == '\0')))) goto LAB_143fca097;
      }
      if ((*(char *)(param_1 + 0x20) == '\0') &&
         ((cVar5 = FUN_148b6026a(param_1), cVar5 == '\0' &&
          (((*(longlong *)(param_1 + 0x58) == 0 || (*(longlong *)(param_1 + 0x60) == 0)) ||
           (*(int *)(*(longlong *)(param_1 + 0x60) + 8) < 1)))))) {
        uVar7 = FUN_1401cb356();
        local_40 = (code *)0x0;
        local_38 = 0;
        FUN_1446efa72(&local_40,0,2,0x10);
        local_38 = 2;
        *(undefined ***)local_40 = &PTR_LAB_149e02020;
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 1;
        lVar3 = DAT_14c758608 + 1;
        if (lVar8 == 0) {
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 2;
          lVar3 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar3;
        *(longlong *)(local_40 + 0x10) = lVar8;
        *(undefined ***)local_40 = &PTR_FUN_14b5a32f0;
        *(longlong *)(local_40 + 0x18) = param_1;
        local_48 = 0;
        FUN_1405f67fc(uVar7,&local_30,&local_40,L"FGbxUIUMGAsyncMixin_RequestDestroyThisMemory");
        *(undefined8 **)(param_1 + 0x58) = local_30;
        local_30 = (undefined8 *)0x0;
        plVar4 = *(longlong **)(param_1 + 0x60);
        *(longlong **)(param_1 + 0x60) = local_28;
        local_28 = (longlong *)0x0;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
          if (local_28 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_28 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_28 + 0x10))();
            }
          }
        }
        if (local_38 != 0) {
          if (local_40 == (code *)0x0) goto LAB_143fca097;
          (*(code *)**(undefined8 **)local_40)(local_40,0);
          FUN_1446efa72(&local_40,0,0,0x10);
          local_38 = 0;
        }
        if (local_40 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_143fca097:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fca2a6 FUN_143fca2a6 body=247 status=ok
// SIG undefined FUN_143fca2a6(void)

undefined8 FUN_143fca2a6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    if (((longlong *)*plVar1 != (longlong *)0x0) &&
       (cVar4 = (**(code **)(*(longlong *)*plVar1 + 0x30))(), cVar4 != '\0')) {
      if (*(int *)(param_1 + 0x30) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)*plVar1;
      }
      cVar4 = (**(code **)(*plVar5 + 0x58))();
      if (cVar4 == '\0') {
        return 1;
      }
      if (cVar4 == '\x01') {
        plVar5 = *(longlong **)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
        if ((*(int *)(param_1 + 0x30) != 0) &&
           (puVar3 = (undefined8 *)*plVar1, puVar3 != (undefined8 *)0x0)) {
          (**(code **)*puVar3)(puVar3,0);
          FUN_1446efa72(plVar1,0,0,0x10);
          *(undefined4 *)(param_1 + 0x30) = 0;
        }
        if (*(int *)(param_1 + 0x40) != 0) {
          plVar1 = (longlong *)(param_1 + 0x38);
          if ((((longlong *)*plVar1 != (longlong *)0x0) &&
              ((**(code **)(*(longlong *)*plVar1 + 0x60))(), *(int *)(param_1 + 0x40) != 0)) &&
             (puVar3 = (undefined8 *)*plVar1, puVar3 != (undefined8 *)0x0)) {
            (**(code **)*puVar3)(puVar3,0);
            FUN_1446efa72(plVar1,0,0,0x10);
            *(undefined4 *)(param_1 + 0x40) = 0;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143fca39d FUN_143fca39d body=55 status=ok
// SIG undefined FUN_143fca39d(void)

void FUN_143fca39d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9da30 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9da30 = FUN_14171c317(FUN_14659ea8d,uVar1,L"EIndicatorCanvasProjectionMode");
  }
  return;
}



// FUNCTION 143fca3d4 FUN_143fca3d4 body=735 status=ok
// SIG undefined FUN_143fca3d4(void)

void FUN_143fca3d4(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_30);
            goto LAB_143fca5a6;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_30,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
LAB_143fca5a6:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,local_30);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fca6b4 FUN_143fca6b4 body=451 status=ok
// SIG undefined FUN_143fca6b4(void)

void FUN_143fca6b4(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
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
  puVar1 = (uint *)(param_1 + 0xe8);
  if (param_2 == 0) {
    puVar1[0] = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    if (*(int *)(param_1 + 0x10c) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x100),0);
    }
    puVar3 = *(undefined2 **)(param_1 + 0x100);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48);
    *(undefined4 *)(param_1 + 0xf0) = local_48;
    *(undefined4 *)(param_1 + 0xf4) = uStack_44;
    *(undefined4 *)(param_1 + 0xf8) = uStack_40;
    *(undefined4 *)(param_1 + 0xfc) = uStack_3c;
    if ((undefined4 *)(param_1 + 0xf0) == &local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x100) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x100) = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x108) = local_30;
      *(undefined4 *)(param_1 + 0x10c) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    iVar5 = DAT_14c9647dc;
    uVar2 = *(uint *)(param_2 + 0xc);
    if (cVar4 != '\0') {
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        *(undefined8 *)(param_1 + 0xe8) = 0;
        goto LAB_143fca813;
      }
    }
    *puVar1 = uVar2;
    if ((int)uVar2 < iVar5) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar7;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar7;
      }
    }
    *(int *)(param_1 + 0xec) = iVar5;
  }
LAB_143fca813:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fca92c FUN_143fca92c body=97 status=ok
// SIG undefined FUN_143fca92c(void)

bool FUN_143fca92c(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140aa7b7e(*(undefined8 *)(param_1 + 0x10),&local_28,0);
  iVar1 = (int)uStack_20;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fca99c FUN_143fca99c body=422 status=ok
// SIG undefined FUN_143fca99c(void)

void FUN_143fca99c(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x68));
  iVar1 = *(int *)(param_1 + 0x50);
  if (0 < (longlong)iVar1) {
    local_60 = param_1 + 0x48;
    local_68 = *(longlong *)(param_1 + 0x48);
    lVar4 = 0;
    do {
      lVar5 = *(longlong *)(local_68 + lVar4);
      if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar5);
      }
      iVar2 = *(int *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x44) < iVar2 + 1U) {
        FUN_148b6a84e((longlong *)(param_1 + 0x38),iVar2);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 8) = lVar5;
      if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar5);
      }
      FUN_148b6a77a(param_1 + 8,lVar5);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      FUN_148b6a81e(local_60);
    }
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if (0 < (longlong)iVar1) {
    local_68 = param_1 + 0x58;
    lVar4 = *(longlong *)(param_1 + 0x58);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar4 + lVar5);
      local_58 = lVar3;
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      local_50 = &local_58;
      FUN_148b6a8d4(param_1 + 0x38,&local_50);
      FUN_148b6a77a(param_1 + 0x20,lVar3);
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*(int *)(param_1 + 100) != 0) {
      FUN_148b6a81e(local_68);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x68));
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fcab44 FUN_143fcab44 body=2151 status=ok
// SIG undefined FUN_143fcab44(void)

ulonglong FUN_143fcab44(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  void *_Src;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  byte bVar8;
  longlong *plVar9;
  longlong *plVar10;
  double *pdVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 unaff_RBX;
  ulonglong uVar15;
  int iVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  byte bVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_3d8 [32];
  code *local_3b8;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined8 *local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_338 [16];
  undefined8 local_2b8 [16];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_210;
  undefined1 local_188;
  undefined1 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  uVar15 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(char *)(param_1 + 0x37c) != '\x01') goto LAB_143fcb047;
  plVar9 = (longlong *)FUN_140059518(param_1 + 0x218);
  if (*(int *)(param_1 + 0x22c) == 0) {
LAB_143fcb2e5:
    lVar13 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x228);
    lVar13 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar10 == (longlong *)0x0) ||
         (((int)plVar10[2] != *(int *)(param_1 + 0x22c) ||
          ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_143fcb2e5;
      lVar13 = *plVar10;
    }
  }
  if ((plVar9 != (longlong *)0x0) && (lVar13 == 0)) {
    lVar13 = FUN_148b63536(plVar9);
    if (lVar13 == 0) goto LAB_143fcb047;
    lVar12 = FUN_140e658aa(param_1 + 0x218);
    if (lVar12 == 0) {
      *(undefined4 *)(param_1 + 0x2d0) = 0;
      iVar16 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar12 + 0xc);
      *(uint *)(param_1 + 0x2d0) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar16 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar16 = DAT_14c964868 + 1;
        UNLOCK();
        iVar18 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar16;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar18);
        }
        LOCK();
        iVar16 = *(int *)(lVar12 + 0x10);
        bVar21 = iVar16 == 0;
        if (bVar21) {
          *(int *)(lVar12 + 0x10) = iVar18;
          iVar16 = 0;
        }
        UNLOCK();
        if (bVar21) {
          iVar16 = iVar18;
        }
      }
    }
    *(int *)(param_1 + 0x2d4) = iVar16;
    uVar2 = *(uint *)(lVar13 + 0xc);
    *(uint *)(param_1 + 0x228) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar16 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar16 = DAT_14c964868 + 1;
      UNLOCK();
      iVar18 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar16;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar18);
      }
      LOCK();
      iVar16 = *(int *)(lVar12 + 0x10);
      bVar21 = iVar16 == 0;
      if (bVar21) {
        *(int *)(lVar12 + 0x10) = iVar18;
        iVar16 = 0;
      }
      UNLOCK();
      if (bVar21) {
        iVar16 = iVar18;
      }
    }
    *(int *)(param_1 + 0x22c) = iVar16;
    local_3b8 = FUN_148b6359e;
    local_3b0 = 0;
    FUN_148b6b1e6(&local_358,param_1);
    FUN_148b6b0fe(lVar13 + 0x38,&local_3b8,&local_358);
    if ((int)uStack_350 == 0) {
LAB_143fcb1b3:
      if (local_358 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_358 != (undefined8 *)0x0) {
      (**(code **)*local_358)(local_358,0);
      FUN_1446efa72(&local_358,0,0,0x10);
      uStack_350 = (ulonglong)uStack_350._4_4_ << 0x20;
      goto LAB_143fcb1b3;
    }
    local_3b8 = FUN_148b63656;
    local_3b0 = 0;
    FUN_148b6b1e6(&local_358,param_1);
    FUN_148b6b0fe(lVar13 + 0x50,&local_3b8,&local_358);
    if ((int)uStack_350 == 0) {
LAB_143fcb243:
      if (local_358 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_358 != (undefined8 *)0x0) {
      (**(code **)*local_358)(local_358,0);
      FUN_1446efa72(&local_358,0,0,0x10);
      uStack_350 = uStack_350 & 0xffffffff00000000;
      goto LAB_143fcb243;
    }
    local_358 = (undefined8 *)0x0;
    iVar16 = *(int *)(lVar13 + 0x70);
    _Src = *(void **)(lVar13 + 0x68);
    uStack_350 = CONCAT44(uStack_350._4_4_,iVar16);
    if ((longlong)iVar16 != 0) {
      FUN_148b68cb0(&local_358,iVar16);
      memcpy(local_358,_Src,(longlong)iVar16 << 3);
      puVar17 = local_358;
      lVar13 = (longlong)(int)uStack_350;
      if (lVar13 != 0) {
        lVar12 = 0;
        do {
          FUN_148b6359e(param_1,*(undefined8 *)((longlong)puVar17 + lVar12));
          lVar12 = lVar12 + 8;
        } while (lVar13 * 8 != lVar12);
      }
      if (local_358 != (undefined8 *)0x0) {
        FUN_1400020a8(local_358);
      }
    }
  }
  if (plVar9 == (longlong *)0x0) {
LAB_143fcaff4:
    FUN_148b636ec(param_1);
  }
  else {
    local_88 = *(undefined8 *)(param_1 + 0x374);
    local_b8 = *(undefined8 *)(param_1 + 0x344);
    uStack_b0 = *(undefined8 *)(param_1 + 0x34c);
    local_a8 = *(undefined8 *)(param_1 + 0x354);
    uStack_a0 = *(undefined8 *)(param_1 + 0x35c);
    local_98 = *(undefined4 *)(param_1 + 0x364);
    uStack_94 = *(undefined4 *)(param_1 + 0x368);
    uStack_90 = *(undefined4 *)(param_1 + 0x36c);
    uStack_8c = *(undefined4 *)(param_1 + 0x370);
    local_348 = DAT_14c8464f0;
    local_358 = (undefined8 *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_350 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    puVar17 = &DAT_14c846400;
    puVar19 = local_338;
    for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
      *puVar19 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar19 = puVar19 + 1;
    }
    puVar17 = &DAT_14c846400;
    puVar19 = local_2b8;
    for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
      *puVar19 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar19 = puVar19 + 1;
    }
    local_210 = 0;
    local_188 = 0;
    local_f8 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_e8 = (undefined4)DAT_14c8464e0;
    uStack_e4 = DAT_14c8464e0._4_4_;
    uStack_e0 = (undefined4)DAT_14c8464e8;
    uStack_dc = DAT_14c8464e8._4_4_;
    local_d8 = DAT_14c8464f0;
    local_d0 = 0;
    uStack_c8 = 0;
    plVar10 = *(longlong **)(plVar9[0xf] + 0xf8);
    cVar7 = (**(code **)(*plVar9 + 0x358))(plVar9,plVar10,&local_358,0xffffffff);
    if (cVar7 == '\0') goto LAB_143fcaff4;
    if (*(char *)(param_1 + 0x341) == '\0') {
      *(undefined1 *)(param_1 + 0x341) = 1;
    }
    if (plVar9[6] == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = *(longlong *)(plVar9[6] + 0x3d0);
    }
    if (0 < *(int *)(param_1 + 0x250)) {
      bVar20 = 0;
      iVar16 = 0;
      do {
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x248) + (longlong)iVar16 * 8);
        plVar9 = *(longlong **)(lVar12 + 0x20);
        if ((*(char *)((longlong)plVar9 + 0x33) == '\x01') &&
           ((plVar9[0x16] == 0 || ((*(uint *)(plVar9[0x16] + 8) >> 0x1e & 1) != 0)))) {
          FUN_148b63814(param_1,plVar9);
          iVar16 = iVar16 + -1;
          bVar20 = 1;
        }
        else {
          uVar14 = CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
          if ((lVar13 != 0) && (0.0 < *(float *)(plVar9 + 0x14))) {
            lVar3 = *(longlong *)(lVar13 + 0x1c8);
            if (lVar3 == 0) {
              uVar28 = (undefined4)DAT_14c8464f0;
              uVar29 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
              pdVar11 = (double *)&DAT_14c8464e0;
            }
            else {
              uVar28 = (undefined4)*(undefined8 *)(lVar3 + 0x270);
              uVar29 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x270) >> 0x20);
              pdVar11 = (double *)(lVar3 + 0x260);
            }
            dVar4 = *pdVar11;
            dVar5 = pdVar11[1];
            plVar10 = (longlong *)plVar9[0x16];
            if (plVar10 == (longlong *)0x0) {
              uVar26 = (undefined4)plVar9[0x12];
              uVar27 = (undefined4)((ulonglong)plVar9[0x12] >> 0x20);
              uVar22 = (int)plVar9[0x10];
              uVar23 = *(undefined4 *)((longlong)plVar9 + 0x84);
              uVar24 = (int)plVar9[0x11];
              uVar25 = *(undefined4 *)((longlong)plVar9 + 0x8c);
            }
            else if (plVar9[0x17] == 0) {
              uVar26 = (undefined4)plVar10[0x4e];
              uVar27 = (undefined4)((ulonglong)plVar10[0x4e] >> 0x20);
              uVar22 = (int)plVar10[0x4c];
              uVar23 = *(undefined4 *)((longlong)plVar10 + 0x264);
              uVar24 = (int)plVar10[0x4d];
              uVar25 = *(undefined4 *)((longlong)plVar10 + 0x26c);
            }
            else {
              (**(code **)(*plVar10 + 0x4a8))(plVar10,&local_3b8,plVar9[0x17],0);
              uVar26 = (undefined4)local_388;
              uVar27 = (undefined4)((ulonglong)local_388 >> 0x20);
              uVar22 = local_398;
              uVar23 = uStack_394;
              uVar24 = uStack_390;
              uVar25 = uStack_38c;
            }
            dVar6 = (double)CONCAT44(uVar27,uVar26) - (double)CONCAT44(uVar29,uVar28);
            dVar4 = (double)CONCAT44(uVar23,uVar22) - dVar4;
            dVar5 = (double)CONCAT44(uVar25,uVar24) - dVar5;
            (**(code **)(*plVar9 + 0x2a8))
                      (plVar9,(float)(SQRT(dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5) /
                                     (double)*(float *)((longlong)plVar9 + 0xa4)));
            uVar14 = (ulonglong)
                     -(uint)(*(float *)(plVar9 + 0x13) < *(float *)(plVar9 + 0x14) &&
                            *(float *)((longlong)plVar9 + 0x9c) <= *(float *)(plVar9 + 0x13));
          }
          *(byte *)((longlong)plVar9 + 0x34) = (byte)uVar14 & 1;
          plVar10 = (longlong *)CONCAT71((int7)(uVar14 >> 8),(byte)uVar14 & *(byte *)(plVar9 + 6));
          FUN_148b63980(lVar12,plVar10);
          bVar8 = *(byte *)(lVar12 + 0x44);
          if ((bVar8 & 1) == 0) {
            bVar20 = bVar20 | bVar8 >> 3;
            bVar8 = bVar8 & 0xf6;
          }
          else {
            if ((bVar8 & 0x20) != 0) {
              *(byte *)(lVar12 + 0x44) = bVar8 & 0xdf;
              bVar20 = 1;
            }
            cVar7 = FUN_148b61fda(plVar9,&local_358,&local_b8);
            if (cVar7 == '\0') {
              FUN_148b639fe(lVar12,0);
              plVar10 = (longlong *)0x0;
              FUN_148b63a82(lVar12,0);
              bVar8 = *(byte *)(lVar12 + 0x44);
            }
            else {
              uVar14 = 0x14c846401;
              FUN_148b63a82(lVar12,1);
              if ((*(byte *)(lVar12 + 0x44) & 2) == 0) {
                uVar14 = CONCAT71(0x14c8464,*(undefined1 *)((longlong)plVar9 + 0x31));
              }
              plVar10 = (longlong *)(uVar14 & 0xffffffff);
              FUN_148b639fe(lVar12,plVar10);
              bVar8 = *(byte *)(lVar12 + 0x44);
              if ((bVar8 & 4) != 0) {
                dVar4 = (double)CONCAT44(uStack_3ac,local_3b0);
                if ((*(double *)(lVar12 + 0x28) != (double)local_3b8) ||
                   (NAN(*(double *)(lVar12 + 0x28)) || NAN((double)local_3b8))) {
LAB_143fcaf8f:
                  *(code **)(lVar12 + 0x28) = local_3b8;
                  *(double *)(lVar12 + 0x30) = dVar4;
                  bVar8 = bVar8 | 8;
                  *(byte *)(lVar12 + 0x44) = bVar8;
                }
                else if ((*(double *)(lVar12 + 0x30) != dVar4) ||
                        (NAN(*(double *)(lVar12 + 0x30)) || NAN(dVar4))) goto LAB_143fcaf8f;
                if ((*(double *)(lVar12 + 0x38) != (double)local_3b8) ||
                   (NAN(*(double *)(lVar12 + 0x38)) || NAN((double)local_3b8))) {
                  *(code **)(lVar12 + 0x38) = local_3b8;
                  bVar8 = bVar8 | 8;
                  *(byte *)(lVar12 + 0x44) = bVar8;
                }
              }
              if (*(int *)(lVar12 + 0x40) != (int)plVar9[7]) {
                *(int *)(lVar12 + 0x40) = (int)plVar9[7];
                bVar8 = bVar8 | 8;
              }
            }
            bVar20 = bVar20 | bVar8 >> 3;
            bVar8 = bVar8 & 0xf7;
          }
          *(byte *)(lVar12 + 0x44) = bVar8;
          plVar9 = plVar10;
        }
        iVar16 = iVar16 + 1;
        plVar10 = plVar9;
      } while (iVar16 < *(int *)(param_1 + 0x250));
      if ((bVar20 & 1) != 0) {
        FUN_140163244(param_1,2);
      }
    }
  }
  if (*(int *)(param_1 + 0x200) == 0) {
    *(undefined8 *)(param_1 + 0x380) = 0;
    plVar9 = *(longlong **)(param_1 + 0x388);
    if (plVar9 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x388) = 0;
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
    uVar15 = 0;
  }
LAB_143fcb047:
  if ((local_80 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffff;
}



// FUNCTION 143fcb3ac FUN_143fcb3ac body=5246 status=ok
// SIG undefined FUN_143fcb3ac(void)

void FUN_143fcb3ac(longlong param_1,float *param_2,byte *param_3)

{
  double *pdVar1;
  float *pfVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  char cVar21;
  byte bVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  byte bVar26;
  float *pfVar27;
  longlong lVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  float *pfVar32;
  uint uVar33;
  int iVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  byte *pbVar38;
  int iVar39;
  float *pfVar40;
  double dVar41;
  undefined8 *puVar42;
  longlong *plVar43;
  longlong lVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auStack_358 [32];
  double *local_338;
  float *local_330;
  float *local_328;
  uint local_31c;
  float *local_318;
  byte *local_310;
  longlong local_308;
  double local_300;
  float *local_2f8;
  float local_2ec;
  float local_2e8;
  uint local_2e4;
  double local_2e0;
  double local_2d8;
  longlong local_2d0;
  double local_2c8;
  ulonglong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  undefined1 local_2a8;
  undefined1 local_2a7;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 local_290;
  undefined1 local_28f;
  undefined8 local_288;
  undefined8 uStack_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  longlong local_238;
  undefined8 uStack_230;
  double local_220;
  double local_218;
  undefined8 local_210;
  float local_208;
  float fStack_204;
  undefined4 local_1fc;
  undefined8 local_1f8;
  double local_1f0;
  float local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  float local_1c8;
  float fStack_1c4;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  double local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  double local_160;
  undefined2 local_150;
  undefined1 uStack_14e;
  undefined1 uStack_14d;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  ulonglong local_120;
  double local_118;
  double dStack_110;
  ulonglong local_108;
  char local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  *(undefined4 *)(param_1 + 0x338) = 0;
  iVar24 = 0;
  if (*(char *)(param_1 + 0x341) != '\x01') goto LAB_143fcc6d9;
  local_2e8 = *(float *)(*(longlong *)(param_1 + 0x330) + 0x20);
  local_2ec = *(float *)(*(longlong *)(param_1 + 0x330) + 0x24);
  local_218 = (double)(param_2[1] * 0.5);
  local_220 = (double)(*param_2 * 0.5);
  local_210 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_318 = param_2;
  local_310 = param_3;
  local_308 = param_1;
  if (*(int *)(param_1 + 0x250) < 1) {
LAB_143fcb800:
    param_1 = local_308;
    if (0 < (int)uStack_230) {
      local_300 = (double)local_2ec;
      local_2d8 = (double)local_2e8;
      iVar30 = (int)local_2e8;
      local_31c = (int)local_2ec + 10;
      local_2e0 = local_300 * 0.5;
      dVar41 = local_2d8 * 0.5;
      local_2f8 = local_318 + 7;
      lVar35 = 0;
      pbVar38 = local_310;
      iVar24 = (int)uStack_230;
      do {
        lVar44 = *(longlong *)(local_238 + lVar35 * 8);
        if ((*(byte *)(*(longlong *)(lVar44 + 0x10) + 0x39) & *pbVar38) == 0) {
          if ((*(byte *)(lVar44 + 0x44) & 0x10) != 0) {
            *(byte *)(lVar44 + 0x44) = *(byte *)(lVar44 + 0x44) & 0xcf | 0x20;
          }
        }
        else {
          lVar14 = *(longlong *)(lVar44 + 0x20);
          dVar8 = *(double *)(lVar44 + 0x28);
          dVar9 = *(double *)(lVar44 + 0x30);
          bVar22 = *(byte *)(lVar44 + 0x44);
          cVar21 = *(char *)(lVar14 + 0x31);
          local_338 = &local_278;
          FUN_148b63bd2(lVar14,&local_248,&local_258,&local_268);
          if (cVar21 == '\x01') {
            iVar31 = (int)local_268 + iVar30 + 10;
            iVar34 = (int)local_260 + local_31c;
            iVar39 = (int)((double)*local_318 - local_278) - (iVar30 + 10);
            iVar24 = (int)((double)local_318[1] - local_270) - local_31c;
            if (((((int)dVar8 < iVar31) || (iVar39 <= (int)dVar8)) || ((int)dVar9 < iVar34)) ||
               (iVar24 <= (int)dVar9)) {
              uStack_1c0 = (double)iVar31;
              local_1d8 = 0x3ff0000000000000;
              uStack_1d0 = 0;
              local_1c8 = 0.0;
              fStack_1c4 = 0.0;
              local_1a0 = (longlong *)(double)iVar34;
              local_1b8 = 0;
              uStack_1b0 = 0x3ff0000000000000;
              local_1a8 = 0;
              local_180 = (double)-iVar39;
              local_198 = (longlong *)0xbff0000000000000;
              local_190 = 0;
              uStack_188 = 0;
              local_160 = (double)-iVar24;
              local_178 = 0;
              local_170 = 0xbff0000000000000;
              local_168 = 0;
              uVar37 = 4;
              puVar42 = &local_1d8;
              uVar36 = 0;
              do {
                local_108 = 0;
                local_118 = dVar8;
                dStack_110 = dVar9;
                cVar21 = FUN_1467f7ca0(&local_220,&local_118,puVar42,&local_150);
                if (cVar21 != '\0') {
                  dVar8 = (double)CONCAT44(uStack_14c,
                                           CONCAT13(uStack_14d,CONCAT12(uStack_14e,local_150)));
                  dVar9 = (double)CONCAT44(uStack_144,uStack_148);
                  uVar37 = uVar36 & 0xffffffff;
                }
                iVar24 = (int)uVar37;
                uVar36 = uVar36 + 1;
                puVar42 = puVar42 + 4;
              } while (uVar36 != 4);
            }
            else {
              if ((bVar22 & 2) != 0) goto LAB_143fcb9f3;
              fVar45 = (float)(dVar8 / (double)(iVar39 - iVar31));
              fVar50 = (float)(dVar9 / (double)(iVar24 - iVar34));
              fVar47 = 1.0 - fVar50;
              if (fVar50 <= fVar45) {
                if (fVar47 <= fVar45) {
                  dVar8 = (double)iVar39;
                  iVar24 = 2;
                }
                else {
                  dVar9 = (double)iVar34;
                  iVar24 = 1;
                  uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
                }
              }
              else if (fVar47 <= fVar45) {
                dVar9 = (double)iVar24;
                iVar24 = 3;
                uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
              }
              else {
                dVar8 = (double)iVar31;
                iVar24 = 0;
                uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
              }
            }
            if ((iVar24 == 4) || (*(char *)(lVar14 + 0x32) == '\0')) {
              bVar22 = *(byte *)(lVar44 + 0x44);
              pbVar38 = local_310;
              dVar10 = uStack_1c0;
              if (((bVar22 & 0x10) == 0) == (iVar24 != 4)) {
                bVar26 = (iVar24 != 4) << 4;
                goto LAB_143fcc0c1;
              }
            }
            else {
              iVar34 = *(int *)(local_308 + 0x338);
              if ((-1 < (longlong)iVar34) && (iVar34 < *(int *)(local_308 + 0x278))) {
                lVar28 = (longlong)iVar24;
                uVar46 = (&DAT_14b5a2cd0)[lVar28];
                dVar10 = (double)(&DAT_14cb9dc60)[lVar28 * 2];
                dVar11 = (double)(&DAT_14cb9dc68)[lVar28 * 2];
                lVar28 = *(longlong *)(*(longlong *)(local_308 + 0x270) + (longlong)iVar34 * 8);
                plVar43 = *(longlong **)(lVar28 + 0x10);
                plVar15 = *(longlong **)(lVar28 + 0x18);
                if (plVar15 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                  UNLOCK();
                  LOCK();
                  *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar3 = plVar15 + 1;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)*plVar3 == 0) {
                    (**(code **)*plVar15)(plVar15);
                    LOCK();
                    piVar4 = (int *)((longlong)plVar15 + 0xc);
                    *piVar4 = *piVar4 + -1;
                    UNLOCK();
                    if (*piVar4 == 0) {
                      (**(code **)(*plVar15 + 0x10))(plVar15);
                    }
                  }
                }
                *(int *)(local_308 + 0x338) = *(int *)(local_308 + 0x338) + 1;
                uVar46 = FUN_1447c7e44(uVar46,0x43b40000);
                dVar20 = local_240;
                dVar19 = local_248;
                pbVar38 = local_310;
                pfVar6 = local_318;
                *(undefined4 *)(plVar43 + 0x3c) = uVar46;
                if (*(char *)(lVar14 + 0x37) == '\x03') {
                  dVar17 = local_240 * -0.5;
                  dVar18 = local_248 * 0.0;
                }
                else {
                  dVar17 = DAT_14c8463f8;
                  dVar18 = DAT_14c8463f0;
                  if (*(char *)(lVar14 + 0x37) == '\x01') {
                    dVar17 = local_240 * 0.5;
                    dVar18 = local_248 * 0.0;
                  }
                }
                local_290 = DAT_14c96b23a;
                local_28f = 1;
                local_288 = 0;
                uStack_280 = 0;
                (**(code **)(*plVar43 + 0x1c0))(plVar43,&local_290);
                if (plVar15 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                  UNLOCK();
                }
                fVar45 = (float)(((dVar11 * (dVar20 + local_300) * 0.5 + dVar17) - local_2e0) +
                                dVar9);
                fVar47 = (float)(((dVar10 * (dVar19 + local_2d8) * 0.5 + dVar18) - dVar41) + dVar8);
                local_1fc = 0x3f800000;
                local_1f8 = CONCAT44(fVar45,fVar47);
                local_208 = local_2e8;
                fStack_204 = local_2ec;
                local_100 = (char)plVar43[0x33];
                if (DAT_14c96b1e0 == '\0') {
                  if (local_100 == '\0') goto LAB_143fcbe47;
                  local_108 = plVar43[0x32];
                  local_118 = (double)plVar43[0x30];
                  dStack_110 = (double)plVar43[0x31];
LAB_143fcc581:
                  fVar45 = (float)(double)plVar43[0x2e];
                  if (DAT_14c96b1e0 != '\0') {
                    fVar45 = (0.5 - fVar45) + 0.5;
                  }
                  local_1f0 = (double)CONCAT44((float)(double)plVar43[0x2f],fVar45);
                  local_1e0 = *(undefined8 *)(pfVar6 + 3);
                  local_1e4 = pfVar6[2];
                  local_328 = local_2f8;
                  local_330 = &local_1e4;
                  local_338 = &local_1f0;
                  FUN_146978c22(&local_150,&local_208,&local_1fc,&local_118);
                  if (plVar15 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                    UNLOCK();
                    local_1a8 = local_120;
                    local_1c8 = local_140;
                    uStack_1c0._4_4_ = fStack_134;
                    local_1b8 = CONCAT44(uStack_12c,local_130);
                    uStack_1b0 = CONCAT44(uStack_124,uStack_128);
                    local_1d8 = CONCAT44(uStack_14c,
                                         CONCAT13(uStack_14d,CONCAT12(uStack_14e,local_150)));
                    uStack_1d0 = CONCAT44(uStack_144,uStack_148);
                    fStack_1c4 = fStack_13c;
                    uStack_1c0._0_4_ = fStack_138;
                    goto LAB_143fcbf78;
                  }
                  local_1a8 = local_120;
                  local_1b8 = CONCAT44(uStack_12c,local_130);
                  uStack_1b0 = CONCAT44(uStack_124,uStack_128);
                  local_1c8 = local_140;
                  fStack_1c4 = fStack_13c;
                  uStack_1c0._0_4_ = fStack_138;
                  uStack_1c0._4_4_ = fStack_134;
                  local_1d8 = CONCAT44(uStack_14c,
                                       CONCAT13(uStack_14d,CONCAT12(uStack_14e,local_150)));
                  uStack_1d0 = CONCAT44(uStack_144,uStack_148);
LAB_143fcc01d:
                  local_198 = (longlong *)0x0;
                  local_1a0 = plVar43;
                }
                else {
                  if (local_100 != '\0') {
                    local_118 = (double)plVar43[0x30];
                    dStack_110 = (double)plVar43[0x31];
                    local_108 = plVar43[0x32] ^ 0x80000000;
                    goto LAB_143fcc581;
                  }
LAB_143fcbe47:
                  uVar12 = *(undefined1 *)(pfVar6 + 0xd);
                  fVar50 = pfVar6[2];
                  uStack_1c0._4_4_ = pfVar6[7];
                  local_1d8 = CONCAT44(local_2ec,local_2e8);
                  fVar49 = pfVar6[8];
                  fVar48 = pfVar6[10];
                  fVar51 = pfVar6[9];
                  fVar52 = fVar47 * fVar49 + fVar48 * fVar45 + pfVar6[0xc];
                  fVar53 = fVar47 * uStack_1c0._4_4_ + fVar51 * fVar45 + pfVar6[0xb];
                  fVar55 = fVar49 * 0.0 + fVar48;
                  fVar54 = uStack_1c0._4_4_ * 0.0 + fVar51;
                  fVar49 = fVar48 * 0.0 + fVar49;
                  uStack_1c0._4_4_ = fVar51 * 0.0 + uStack_1c0._4_4_;
                  local_1c8 = fVar45 * fVar50 + pfVar6[4];
                  fVar48 = fVar47 * fVar50 + pfVar6[3];
                  fStack_1c4 = fVar47;
                  uStack_1c0._0_4_ = fVar45;
                  if (plVar15 == (longlong *)0x0) {
                    uStack_1d0 = CONCAT44(fVar48,fVar50);
                    local_1b8 = CONCAT44(fVar54,fVar49);
                    uStack_1b0 = CONCAT44(fVar53,fVar55);
                    local_1a8 = CONCAT35(local_1a8._5_3_,CONCAT14(uVar12,fVar52)) &
                                0xffffff01ffffffff;
                    goto LAB_143fcc01d;
                  }
                  LOCK();
                  *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                  UNLOCK();
                  uStack_1d0 = CONCAT44(fVar48,fVar50);
                  local_1b8 = CONCAT44(fVar54,fVar49);
                  uStack_1b0 = CONCAT44(fVar53,fVar55);
                  local_1a8 = CONCAT17(uStack_14e,CONCAT25(local_150,CONCAT14(uVar12,fVar52))) &
                              0xffffff01ffffffff;
LAB_143fcbf78:
                  LOCK();
                  *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar3 = plVar15 + 1;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  local_1a0 = plVar43;
                  local_198 = plVar15;
                  if ((int)*plVar3 == 0) {
                    (**(code **)*plVar15)(plVar15);
                    LOCK();
                    piVar4 = (int *)((longlong)plVar15 + 0xc);
                    *piVar4 = *piVar4 + -1;
                    UNLOCK();
                    if (*piVar4 == 0) {
                      (**(code **)(*plVar15 + 0x10))(plVar15);
                    }
                  }
                }
                FUN_1402018be(pbVar38,&local_1d8);
                plVar43 = local_198;
                if (local_198 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = local_198 + 1;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)*plVar3 == 0) {
                    (**(code **)*local_198)(local_198);
                    LOCK();
                    piVar4 = (int *)((longlong)plVar43 + 0xc);
                    *piVar4 = *piVar4 + -1;
                    UNLOCK();
                    if (*piVar4 == 0) {
                      (**(code **)(*plVar43 + 0x10))(plVar43);
                    }
                  }
                }
                if (plVar15 != (longlong *)0x0) {
                  LOCK();
                  plVar43 = plVar15 + 1;
                  *(int *)plVar43 = (int)*plVar43 + -1;
                  UNLOCK();
                  if ((int)*plVar43 == 0) {
                    (**(code **)*plVar15)(plVar15);
                    LOCK();
                    piVar4 = (int *)((longlong)plVar15 + 0xc);
                    *piVar4 = *piVar4 + -1;
                    UNLOCK();
                    if (*piVar4 == 0) {
                      (**(code **)(*plVar15 + 0x10))(plVar15);
                    }
                  }
                  LOCK();
                  plVar43 = plVar15 + 1;
                  *(int *)plVar43 = (int)*plVar43 + -1;
                  UNLOCK();
                  if ((int)*plVar43 == 0) {
                    (**(code **)*plVar15)(plVar15);
                    LOCK();
                    piVar4 = (int *)((longlong)plVar15 + 0xc);
                    *piVar4 = *piVar4 + -1;
                    UNLOCK();
                    if (*piVar4 == 0) {
                      (**(code **)(*plVar15 + 0x10))(plVar15);
                    }
                  }
                }
              }
              bVar22 = *(byte *)(lVar44 + 0x44);
              bVar26 = 0x10;
              pbVar38 = local_310;
              dVar10 = uStack_1c0;
              if ((bVar22 & 0x10) == 0) goto LAB_143fcc0c1;
            }
          }
          else {
LAB_143fcb9f3:
            bVar22 = *(byte *)(lVar44 + 0x44);
            dVar10 = uStack_1c0;
            if ((bVar22 & 0x10) == 0) goto LAB_143fcc0cc;
            bVar26 = 0;
LAB_143fcc0c1:
            *(byte *)(lVar44 + 0x44) = bVar22 & 0xcf | bVar26 | 0x20;
            dVar10 = uStack_1c0;
          }
LAB_143fcc0cc:
          fStack_204 = (float)local_240;
          local_208 = (float)local_248;
          uStack_1c0._0_4_ = (float)(dVar9 + local_250);
          fVar45 = (float)(dVar8 + local_258);
          local_1fc = 0x3f800000;
          local_1f8 = CONCAT44((float)uStack_1c0,fVar45);
          lVar14 = *(longlong *)(lVar44 + 0x10);
          local_100 = *(char *)(lVar14 + 0x198);
          if (DAT_14c96b1e0 == '\0') {
            if (local_100 == '\0') goto LAB_143fcc1a4;
            local_108 = *(ulonglong *)(lVar14 + 400);
            local_118 = *(double *)(lVar14 + 0x180);
            dStack_110 = *(double *)(lVar14 + 0x188);
LAB_143fcc40a:
            fVar45 = (float)*(double *)(*(longlong *)(lVar44 + 0x10) + 0x170);
            if (DAT_14c96b1e0 != '\0') {
              fVar45 = (0.5 - fVar45) + 0.5;
            }
            local_1f0 = (double)CONCAT44((float)*(double *)(*(longlong *)(lVar44 + 0x10) + 0x178),
                                         fVar45);
            local_1e0 = *(undefined8 *)(local_318 + 3);
            local_1e4 = local_318[2];
            local_328 = local_2f8;
            local_330 = &local_1e4;
            local_338 = &local_1f0;
            uStack_1c0 = dVar10;
            FUN_146978c22(&local_150,&local_208,&local_1fc,&local_118);
            local_1a0 = *(longlong **)(lVar44 + 0x10);
            plVar43 = *(longlong **)(lVar44 + 0x18);
            uStack_1c0._0_4_ = fStack_138;
            if (plVar43 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar43 + 1) = (int)plVar43[1] + 1;
              UNLOCK();
              local_1a8 = local_120;
              local_1c8 = local_140;
              uStack_1c0._4_4_ = fStack_134;
              local_1b8 = CONCAT44(uStack_12c,local_130);
              uStack_1b0 = CONCAT44(uStack_124,uStack_128);
              local_1d8 = CONCAT44(uStack_14c,CONCAT13(uStack_14d,CONCAT12(uStack_14e,local_150)));
              uStack_1d0 = CONCAT44(uStack_144,uStack_148);
              fStack_1c4 = fStack_13c;
              goto LAB_143fcc2f0;
            }
            local_1a8 = local_120;
            local_1c8 = local_140;
            uStack_1c0._4_4_ = fStack_134;
            local_1b8 = CONCAT44(uStack_12c,local_130);
            uStack_1b0 = CONCAT44(uStack_124,uStack_128);
            local_1d8 = CONCAT44(uStack_14c,CONCAT13(uStack_14d,CONCAT12(uStack_14e,local_150)));
            uStack_1d0 = CONCAT44(uStack_144,uStack_148);
            fStack_1c4 = fStack_13c;
LAB_143fcc398:
            local_198 = (longlong *)0x0;
          }
          else {
            if (local_100 != '\0') {
              local_118 = *(double *)(lVar14 + 0x180);
              dStack_110 = *(double *)(lVar14 + 0x188);
              local_108 = *(ulonglong *)(lVar14 + 400) ^ 0x80000000;
              goto LAB_143fcc40a;
            }
LAB_143fcc1a4:
            uVar12 = *(undefined1 *)(local_318 + 0xd);
            fVar47 = local_318[2];
            uStack_1c0._4_4_ = local_318[7];
            fVar50 = local_318[8];
            fVar49 = local_318[10];
            fVar48 = local_318[9];
            fVar51 = fVar45 * fVar50 + fVar49 * (float)uStack_1c0 + local_318[0xc];
            fVar52 = fVar45 * uStack_1c0._4_4_ + fVar48 * (float)uStack_1c0 + local_318[0xb];
            local_1d8 = CONCAT44(fStack_204,local_208);
            fVar53 = fVar50 * 0.0 + fVar49;
            fVar55 = uStack_1c0._4_4_ * 0.0 + fVar48;
            fVar50 = fVar49 * 0.0 + fVar50;
            local_1c8 = (float)uStack_1c0 * fVar47 + local_318[4];
            fVar49 = fVar45 * fVar47 + local_318[3];
            uStack_1c0._4_4_ = fVar48 * 0.0 + uStack_1c0._4_4_;
            local_1a0 = *(longlong **)(lVar44 + 0x10);
            plVar43 = *(longlong **)(lVar44 + 0x18);
            fStack_1c4 = fVar45;
            if (plVar43 == (longlong *)0x0) {
              uStack_1d0 = CONCAT44(fVar49,fVar47);
              local_1b8 = CONCAT44(fVar55,fVar50);
              uStack_1b0 = CONCAT44(fVar52,fVar53);
              local_1a8 = CONCAT35(local_1a8._5_3_,CONCAT14(uVar12,fVar51)) & 0xffffff01ffffffff;
              goto LAB_143fcc398;
            }
            LOCK();
            *(int *)(plVar43 + 1) = (int)plVar43[1] + 1;
            UNLOCK();
            uStack_1d0 = CONCAT44(fVar49,fVar47);
            local_1b8 = CONCAT44(fVar55,fVar50);
            uStack_1b0 = CONCAT44(fVar52,fVar53);
            local_1a8 = CONCAT17(uStack_14e,CONCAT25(local_150,CONCAT14(uVar12,fVar51))) &
                        0xffffff01ffffffff;
LAB_143fcc2f0:
            LOCK();
            *(int *)(plVar43 + 1) = (int)plVar43[1] + 1;
            UNLOCK();
            LOCK();
            plVar15 = plVar43 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            local_198 = plVar43;
            if ((int)*plVar15 == 0) {
              (**(code **)*plVar43)(plVar43);
              LOCK();
              piVar4 = (int *)((longlong)plVar43 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar43 + 0x10))(plVar43);
              }
            }
          }
          FUN_1402018be(pbVar38,&local_1d8);
          plVar43 = local_198;
          if (local_198 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_198 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*local_198)(local_198);
              LOCK();
              piVar4 = (int *)((longlong)plVar43 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar43 + 0x10))(plVar43);
              }
            }
          }
          iVar24 = (int)uStack_230;
        }
        lVar35 = lVar35 + 1;
        param_1 = local_308;
      } while (lVar35 < iVar24);
    }
  }
  else {
    lVar35 = 0;
    do {
      uVar36 = uStack_230;
      uVar13 = *(undefined8 *)(*(longlong *)(param_1 + 0x248) + lVar35 * 8);
      lVar44 = (longlong)(int)uStack_230;
      uVar23 = (int)uStack_230 + 1;
      uStack_230 = CONCAT44(uStack_230._4_4_,uVar23);
      if (uStack_230._4_4_ < uVar23) {
        FUN_148b6b6de(&local_238,uVar36 & 0xffffffff);
      }
      *(undefined8 *)(local_238 + lVar44 * 8) = uVar13;
      lVar35 = lVar35 + 1;
    } while (lVar35 < *(int *)(param_1 + 0x250));
    uVar36 = (ulonglong)(int)uStack_230;
    if (0 < (longlong)uVar36) {
      uVar37 = 1;
      do {
        if (uVar37 < uVar36) {
          lVar35 = *(longlong *)(local_238 + -8 + uVar37 * 8);
          lVar44 = *(longlong *)(local_238 + uVar37 * 8);
          bVar16 = *(int *)(lVar44 + 0x40) < *(int *)(lVar35 + 0x40);
          if (*(int *)(lVar44 + 0x40) == *(int *)(lVar35 + 0x40)) {
            bVar16 = *(double *)(lVar35 + 0x38) <= *(double *)(lVar44 + 0x38) &&
                     *(double *)(lVar44 + 0x38) != *(double *)(lVar35 + 0x38);
          }
          if (bVar16) {
            *(longlong *)(local_238 + -8 + uVar37 * 8) = lVar44;
            *(longlong *)(local_238 + uVar37 * 8) = lVar35;
          }
        }
        uVar25 = uVar37 + 1;
        uVar37 = uVar37 + 2;
      } while (uVar25 < uVar36);
      local_2d0 = local_238;
      if (2 < (int)uStack_230) {
        local_2c8 = (double)(local_238 + 8);
        dVar41 = 9.88131291682493e-324;
        do {
          local_2e0 = dVar41;
          iVar24 = SUB84(local_2e0,0);
          local_2e4 = iVar24 * 2;
          local_2b0 = (longlong)(int)local_2e4;
          local_2b8 = local_2b0 * 8;
          dVar41 = 0.0;
          local_300 = local_2c8;
          do {
            local_2d8 = dVar41;
            uVar23 = (int)uStack_230 - SUB84(local_2d8,0);
            if ((int)local_2e4 <= (int)uVar23) {
              uVar23 = local_2e4;
            }
            if (iVar24 < (int)uVar23 && 0 < iVar24) {
              local_2f8 = (float *)(local_238 + (longlong)local_2d8 * 8);
              iVar30 = 0;
              dVar41 = local_2e0;
              while( true ) {
                iVar31 = SUB84(dVar41,0);
                iVar34 = 0;
                if (iVar31 - iVar30 != 0 && iVar30 <= iVar31) {
                  lVar35 = *(longlong *)(local_2f8 + (longlong)iVar31 * 2);
                  iVar39 = *(int *)(lVar35 + 0x40);
                  dVar8 = *(double *)(lVar35 + 0x38);
                  iVar34 = 0;
                  uVar33 = iVar31 - iVar30;
                  do {
                    iVar5 = (uVar33 >> 1) + iVar34;
                    pdVar1 = (double *)
                             (*(longlong *)(local_2f8 + (longlong)iVar30 * 2 + (longlong)iVar5 * 2)
                             + 0x38);
                    iVar7 = *(int *)(*(longlong *)
                                      (local_2f8 + (longlong)iVar30 * 2 + (longlong)iVar5 * 2) +
                                    0x40);
                    bVar16 = iVar39 < iVar7;
                    if (iVar39 == iVar7) {
                      bVar16 = *pdVar1 <= dVar8 && dVar8 != *pdVar1;
                    }
                    if (!bVar16) {
                      iVar34 = iVar5 + (uVar33 & 1);
                    }
                    bVar16 = 1 < uVar33;
                    uVar33 = uVar33 >> 1;
                  } while (bVar16);
                }
                iVar34 = iVar34 + iVar30;
                local_31c = uVar23;
                if (iVar31 - iVar34 == 0 || iVar31 < iVar34) break;
                uVar33 = uVar23 - iVar31;
                if (uVar33 == 0 || (int)uVar23 < iVar31) {
                  iVar30 = 0;
                }
                else {
                  pfVar6 = local_2f8 + (longlong)iVar34 * 2;
                  lVar35 = *(longlong *)pfVar6;
                  iVar30 = 0;
                  uVar37 = (ulonglong)uVar33;
                  do {
                    uVar37 = uVar37 >> 1;
                    uVar29 = (uint)uVar37 + iVar30;
                    lVar44 = *(longlong *)(local_2f8 + (longlong)iVar31 * 2 + (ulonglong)uVar29 * 2)
                    ;
                    iVar39 = *(int *)(lVar44 + 0x40);
                    bVar16 = iVar39 < *(int *)(lVar35 + 0x40);
                    if (iVar39 == *(int *)(lVar35 + 0x40)) {
                      bVar16 = *(double *)(lVar35 + 0x38) < *(double *)(lVar44 + 0x38);
                    }
                    if (bVar16) {
                      iVar30 = uVar29 + (uVar33 & 1);
                    }
                    bVar16 = 1 < uVar33;
                    uVar33 = (uint)uVar37;
                  } while (bVar16);
                  dVar41 = (double)(ulonglong)(uint)(iVar31 + iVar30);
                  if (0 < iVar30) {
                    pfVar32 = pfVar6 + (longlong)(iVar31 - iVar34) * 2;
                    pfVar27 = (float *)((longlong)local_300 + (longlong)iVar34 * 8);
                    pfVar40 = pfVar32;
                    do {
                      pfVar2 = pfVar32 + 2;
                      *(undefined8 *)(pfVar27 + -2) = *(undefined8 *)pfVar32;
                      *(longlong *)pfVar32 = lVar35;
                      if (pfVar2 == pfVar6 + (longlong)((iVar31 + iVar30) - iVar34) * 2) {
                        pfVar32 = pfVar40;
                        if (pfVar27 == pfVar40) break;
                      }
                      else {
                        pfVar32 = pfVar2;
                        if (pfVar27 == pfVar40) {
                          pfVar40 = pfVar2;
                        }
                      }
                      lVar35 = *(longlong *)pfVar27;
                      pfVar27 = pfVar27 + 2;
                    } while( true );
                  }
                }
                if (((int)uVar23 <= SUB84(dVar41,0)) ||
                   (iVar30 = iVar34 + iVar30 + 1, SUB84(dVar41,0) <= iVar30)) break;
              }
            }
            local_300 = (double)((longlong)local_300 + local_2b8);
            dVar41 = (double)((longlong)local_2d8 + local_2b0);
          } while ((longlong)local_2d8 + local_2b0 < (longlong)uVar36);
          dVar41 = (double)(ulonglong)local_2e4;
          local_2c0 = uVar36;
        } while ((int)local_2e4 < (int)uStack_230);
      }
      goto LAB_143fcb800;
    }
  }
  if (local_238 != 0) {
    FUN_1400020a8();
  }
  iVar24 = *(int *)(param_1 + 0x338);
LAB_143fcc6d9:
  if (iVar24 < *(int *)(param_1 + 0x33c)) {
    lVar35 = (longlong)iVar24;
    do {
      lVar44 = *(longlong *)(*(longlong *)(param_1 + 0x270) + lVar35 * 8);
      plVar43 = *(longlong **)(lVar44 + 0x10);
      plVar15 = *(longlong **)(lVar44 + 0x18);
      if (plVar15 == (longlong *)0x0) {
        local_2a8 = DAT_14c96b1e1;
        local_2a7 = 1;
        local_2a0 = 0;
        uStack_298 = 0;
        (**(code **)(*plVar43 + 0x1c0))(plVar43,&local_2a8);
      }
      else {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        local_2a8 = DAT_14c96b1e1;
        local_2a7 = 1;
        local_2a0 = 0;
        uStack_298 = 0;
        (**(code **)(*plVar43 + 0x1c0))(plVar43,&local_2a8);
        LOCK();
        plVar43 = plVar15 + 1;
        *(int *)plVar43 = (int)*plVar43 + -1;
        UNLOCK();
        if ((int)*plVar43 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar4 = (int *)((longlong)plVar15 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
      lVar35 = lVar35 + 1;
    } while (lVar35 < *(int *)(param_1 + 0x33c));
    iVar24 = *(int *)(param_1 + 0x338);
  }
  *(int *)(param_1 + 0x33c) = iVar24;
  if ((local_f0 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fcc82c FUN_143fcc82c body=478 status=ok
// SIG undefined FUN_143fcc82c(void)

int FUN_143fcc82c(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,undefined8 param_7,char param_8)

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
  char cVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 uVar16;
  longlong lVar17;
  undefined1 *puVar18;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  int local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  undefined1 local_180 [288];
  undefined1 *local_60;
  ulonglong local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if ((undefined4 *)((longlong)param_1 + 0x344) != param_3) {
    *(undefined8 *)((longlong)param_1 + 0x374) = *(undefined8 *)(param_3 + 0xc);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    uVar5 = param_3[4];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    uVar9 = param_3[9];
    uVar10 = param_3[10];
    uVar11 = param_3[0xb];
    *(undefined4 *)((longlong)param_1 + 0x364) = param_3[8];
    *(undefined4 *)(param_1 + 0x6d) = uVar9;
    *(undefined4 *)((longlong)param_1 + 0x36c) = uVar10;
    *(undefined4 *)(param_1 + 0x6e) = uVar11;
    *(undefined4 *)((longlong)param_1 + 0x354) = uVar5;
    *(undefined4 *)(param_1 + 0x6b) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x35c) = uVar7;
    *(undefined4 *)(param_1 + 0x6c) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x344) = uVar1;
    *(undefined4 *)(param_1 + 0x69) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x34c) = uVar3;
    *(undefined4 *)(param_1 + 0x6a) = uVar4;
    *(undefined1 *)((longlong)param_1 + 0x37c) = 1;
  }
  local_188 = DAT_14c96b238;
  local_60 = (undefined1 *)0x0;
  local_58 = 0x400000000;
  local_50 = 0;
  (**(code **)(*param_1 + 0x238))(param_1,param_3);
  local_1b8 = *param_2;
  uStack_1b4 = param_2[1];
  uStack_1b0 = param_2[2];
  uStack_1ac = param_2[3];
  local_1a8 = *(undefined8 *)(param_2 + 4);
  local_198 = *(undefined8 *)(param_2 + 8);
  uStack_190 = *(undefined8 *)(param_2 + 10);
  uVar14 = 0;
  uVar16 = 0;
  if (param_8 != '\0') {
    uVar16 = *(undefined1 *)((longlong)param_1 + 0x3a);
  }
  puVar18 = local_60;
  if (local_60 == (undefined1 *)0x0) {
    puVar18 = local_180;
  }
  iVar15 = param_6;
  plStack_1a0 = param_1;
  if ((longlong)(int)local_58 != 0) {
    lVar17 = (longlong)(int)local_58 * 0x48;
    do {
      cVar12 = FUN_14022ea56(param_1,param_4,puVar18);
      if (cVar12 == '\0') {
        local_1d0 = param_6;
        if ((char)param_1[0x68] != '\0') {
          local_1d0 = iVar15;
        }
        local_1c8 = param_7;
        local_1d8 = param_5;
        local_1c0 = uVar16;
        iVar13 = FUN_14016eaf2(*(undefined8 *)(puVar18 + 0x38),&local_1b8,puVar18,param_4);
        if (iVar15 < iVar13) {
          iVar15 = iVar13;
        }
      }
      puVar18 = puVar18 + 0x48;
      lVar17 = lVar17 + -0x48;
    } while (lVar17 != 0);
    uVar14 = local_58 & 0xffffffff;
  }
  puVar18 = local_180;
  if (local_60 != (undefined1 *)0x0) {
    puVar18 = local_60;
  }
  FUN_1447157bd(puVar18,uVar14);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return iVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fcca0c FUN_143fcca0c body=3416 status=ok
// SIG undefined FUN_143fcca0c(void)

void FUN_143fcca0c(longlong *param_1,float param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  float *pfVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined **ppuVar17;
  longlong *plVar18;
  longlong lVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_248 [32];
  longlong *local_228;
  longlong *local_218;
  longlong local_210;
  uint local_204;
  longlong local_200;
  undefined **local_1f8;
  longlong *local_1f0;
  undefined **local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  int local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8;
  longlong *plStack_1b0;
  undefined **local_1a8;
  longlong *plStack_1a0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  longlong local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  undefined ***local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined4 local_f0;
  float local_ec;
  undefined2 local_e8;
  undefined1 local_e6;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  (**(code **)(*param_1 + 0xd8))();
  if ((*(char *)((longlong)param_1 + 0x7b) != '\0') ||
     (cVar7 = FUN_14823dff6(param_1), cVar7 == '\0')) goto LAB_143fcd15f;
  uVar10 = (**(code **)(*param_1 + 0x60))(param_1);
  if (((int)uVar10 < 0) || (*(int *)(param_3 + 0x318) <= (int)uVar10)) {
    if (*(char *)((longlong)param_1 + 0x79) != '\x01') {
      plVar18 = (longlong *)0x0;
      lVar13 = 0;
      goto LAB_143fccb23;
    }
    local_1b8 = 0;
    lVar13 = local_1b8;
LAB_143fcd05e:
    local_1b8 = lVar13;
    plStack_1b0 = (longlong *)0x0;
LAB_143fcd061:
    plVar18 = plStack_1b0;
    lVar13 = local_1b8;
    local_228 = &local_1b8;
    (**(code **)(*param_1 + 0x98))(param_1,&local_158,param_2,param_3);
    uVar11 = FUN_140e94dc2(*(undefined8 *)(param_1[0x20] + 0x20));
    local_1c8 = (float)local_158;
    uStack_1c4 = local_158._4_4_;
    uStack_1c0 = (undefined4)uStack_150;
    uStack_1bc = uStack_150._4_4_;
    FUN_148217bd4(uVar11);
  }
  else {
    uVar10 = (uVar10 & 0xffffffff) * 0x10;
    lVar13 = *(longlong *)(*(longlong *)(param_3 + 0x310) + uVar10);
    plVar18 = *(longlong **)(*(longlong *)(param_3 + 0x310) + 8 + uVar10);
    if (plVar18 == (longlong *)0x0) {
      if (*(char *)((longlong)param_1 + 0x79) != '\0') goto LAB_143fcd05e;
      plVar18 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      if (*(char *)((longlong)param_1 + 0x79) != '\0') {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
        local_1b8 = lVar13;
        plStack_1b0 = plVar18;
        goto LAB_143fcd061;
      }
    }
LAB_143fccb23:
    plVar12 = (longlong *)param_1[0x22];
    if (plVar12 == (longlong *)0x0) {
      local_218 = (longlong *)CONCAT44(local_218._4_4_,(int)CONCAT71((int7)(uVar10 >> 8),1));
      plVar12 = (longlong *)0x0;
      ppuVar17 = (undefined **)0x0;
    }
    else {
      uVar10 = (ulonglong)*(uint *)(plVar12 + 1);
      ppuVar17 = (undefined **)0x0;
      do {
        uVar8 = (uint)uVar10;
        if (uVar8 == 0) {
          local_218 = (longlong *)CONCAT44(local_218._4_4_,(int)CONCAT71((int7)(uVar10 >> 8),1));
          plVar12 = (longlong *)0x0;
          goto LAB_143fccb6d;
        }
        LOCK();
        uVar2 = *(uint *)(plVar12 + 1);
        if (uVar8 == uVar2) {
          *(uint *)(plVar12 + 1) = uVar8 + 1;
        }
        else {
          uVar10 = (ulonglong)uVar2;
        }
        UNLOCK();
      } while (uVar8 != uVar2);
      ppuVar17 = (undefined **)param_1[0x21];
      local_218 = (longlong *)((ulonglong)local_218 & 0xffffffff00000000);
    }
LAB_143fccb6d:
    FUN_1400c3152(lVar13,&local_1a8);
    if (local_1a8 == (undefined **)0x0) {
      local_158 = (undefined **)0x0;
      uStack_150 = (longlong *)0x0;
    }
    else {
      FUN_14823e168(local_1a8,&local_158);
      if (local_158 != (undefined **)0x0) {
        (**(code **)(*local_158 + 0x10))(local_158,&local_1d8);
        if ((0 < local_1d0) && (plVar16 = (longlong *)*local_1d8, plVar16 != (longlong *)0x0)) {
          (**(code **)(*plVar16 + 0x58))(plVar16,&local_1e8);
          plVar16 = plStack_1a0;
          if (local_1e0 == (longlong *)0x0) {
            local_1a8 = local_1e8;
            if (plStack_1a0 != (longlong *)0x0) {
              plStack_1a0 = (longlong *)0x0;
LAB_143fcd6f5:
              local_1a8 = local_1e8;
              LOCK();
              plVar3 = plVar16 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                puVar15 = (undefined8 *)*plVar16;
LAB_143fcd701:
                local_1a8 = local_1e8;
                (*(code *)*puVar15)(plVar16);
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
          else {
            LOCK();
            *(int *)(local_1e0 + 1) = (int)local_1e0[1] + 1;
            UNLOCK();
            local_1a8 = local_1e8;
            if (local_1e0 == plStack_1a0) {
              LOCK();
              plVar16 = local_1e0 + 1;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)*plVar16 == 0) {
                puVar15 = (undefined8 *)*local_1e0;
                plVar16 = local_1e0;
                goto LAB_143fcd701;
              }
            }
            else {
              plStack_1a0 = local_1e0;
              if (plVar16 != (longlong *)0x0) goto LAB_143fcd6f5;
            }
          }
          plVar16 = local_1e0;
          if (local_1e0 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_1e0 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_1e0)(local_1e0);
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
        FUN_148258e95(local_1d8,local_1d0);
        if (local_1d8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    plVar16 = uStack_150;
    if (uStack_150 != (longlong *)0x0) {
      LOCK();
      plVar3 = uStack_150 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*uStack_150)(uStack_150);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    ppuVar5 = local_1a8;
    if (local_1a8 == ppuVar17) {
      if (ppuVar17 != (undefined **)0x0) {
        cVar7 = FUN_146983284((longlong)local_1a8 + 0xec,param_1 + 0x23);
        if (cVar7 != '\0') {
          if ((*(float *)((longlong)ppuVar5 + 0xfc) == *(float *)(param_1 + 0x25)) &&
             (!NAN(*(float *)((longlong)ppuVar5 + 0xfc)) && !NAN(*(float *)(param_1 + 0x25)))) {
            if ((*(float *)(ppuVar5 + 0x20) == *(float *)((longlong)param_1 + 300)) &&
               (!NAN(*(float *)(ppuVar5 + 0x20)) && !NAN(*(float *)((longlong)param_1 + 300))))
            goto LAB_143fcceeb;
          }
        }
        goto LAB_143fccc21;
      }
    }
    else {
      cVar7 = FUN_1408025c4(lVar13,10);
      if (cVar7 != '\0') {
        local_1f8 = ppuVar5;
        local_1f0 = plStack_1a0;
        if (plStack_1a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_1a0 + 1) = (int)plStack_1a0[1] + 1;
          UNLOCK();
        }
        cVar7 = FUN_1401b6302(lVar13,&local_1f8);
        if (cVar7 == '\0') {
          FUN_140d95e8c(lVar13,10);
        }
      }
LAB_143fccc21:
      plVar3 = plStack_1a0;
      param_1[0x21] = (longlong)local_1a8;
      plVar16 = (longlong *)param_1[0x22];
      if (plVar16 != plStack_1a0) {
        if (plStack_1a0 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plStack_1a0 + 0xc) = *(int *)((longlong)plStack_1a0 + 0xc) + 1;
          UNLOCK();
          plVar16 = (longlong *)param_1[0x22];
        }
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar16 + 0x10))();
          }
        }
        param_1[0x22] = (longlong)plVar3;
      }
      ppuVar17 = local_1a8;
      if (local_1a8 != (undefined **)0x0) {
        local_210 = param_4;
        FUN_140761b7a(*(undefined8 *)(*(longlong *)(param_1[0xe] + 0x20) + 0x78),&local_158);
        plVar16 = uStack_150;
        ppuVar5 = local_158;
        if (uStack_150 != (longlong *)0x0) {
          LOCK();
          plVar3 = uStack_150 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*uStack_150)(uStack_150);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
        param_4 = local_210;
        if (ppuVar17 == ppuVar5) {
          lVar19 = *(longlong *)(*(longlong *)(param_1[0xe] + 0x20) + 0x78);
          plVar16 = *(longlong **)(lVar19 + 0x138);
          if (plVar16 == (longlong *)0x0) goto LAB_143fccedc;
          iVar9 = (int)plVar16[1];
          do {
            if (iVar9 == 0) goto LAB_143fccedc;
            LOCK();
            iVar6 = (int)plVar16[1];
            bVar20 = iVar9 == iVar6;
            if (bVar20) {
              *(int *)(plVar16 + 1) = iVar9 + 1;
              iVar6 = iVar9;
            }
            iVar9 = iVar6;
            UNLOCK();
          } while (!bVar20);
          plVar3 = *(longlong **)(lVar19 + 0x130);
          if (plVar3 == (longlong *)0x0) {
            fVar27 = 1.0;
            fVar21 = 0.0;
            fVar26 = 0.0;
            fVar25 = 0.0;
            fVar24 = 0.0;
            fVar28 = 0.0;
            fVar23 = 0.0;
            fVar22 = 1.0;
          }
          else {
            (**(code **)(*plVar3 + 0x18))(plVar3,&local_158);
            fVar21 = local_158._4_4_;
            fVar23 = local_138;
            fVar24 = local_12c;
            fVar22 = local_140._4_4_;
            fVar25 = local_128;
            fVar27 = local_130;
            fVar28 = local_134;
            fVar26 = (float)local_158;
          }
          LOCK();
          plVar3 = plVar16 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        else {
          fVar26 = *(float *)(local_1a8 + 0x1a);
          fVar21 = *(float *)((longlong)local_1a8 + 0xd4);
          fVar22 = *(float *)((longlong)local_1a8 + 0xec);
          fVar23 = *(float *)(local_1a8 + 0x1e);
          fVar28 = *(float *)((longlong)local_1a8 + 0xf4);
          fVar27 = *(float *)(local_1a8 + 0x1f);
          fVar24 = *(float *)((longlong)local_1a8 + 0xfc);
          fVar25 = *(float *)(local_1a8 + 0x20);
        }
        if ((1e-08 < fVar26) && (1e-08 < fVar21)) {
          *(float *)(param_1 + 0x23) = fVar22;
          *(float *)((longlong)param_1 + 0x11c) = fVar23;
          *(float *)(param_1 + 0x24) = fVar28;
          *(float *)((longlong)param_1 + 0x124) = fVar27;
          *(float *)(param_1 + 0x25) = fVar24;
          *(float *)((longlong)param_1 + 300) = fVar25;
          FUN_141653418(lVar13,10,(int)(fVar26 * 0.5 * fVar22 + fVar21 * 0.5 * fVar28 + fVar24),
                        (int)(fVar23 * fVar26 * 0.5 + fVar27 * fVar21 * 0.5 + fVar25));
          goto LAB_143fcceeb;
        }
      }
LAB_143fccedc:
      FUN_14823e212(param_1,&DAT_14c8463f0);
    }
LAB_143fcceeb:
    plVar16 = plStack_1a0;
    if (plStack_1a0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_1a0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_1a0)(plStack_1a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    if ((char)local_218 == '\0') {
      LOCK();
      plVar16 = plVar12 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  if (((*(char *)((longlong)param_1 + 0x7a) == '\x01') &&
      (fVar26 = *(float *)(param_1 + 0x26), *(float *)(param_1 + 0x26) = fVar26 - param_2,
      fVar26 - param_2 <= 0.0)) &&
     ((double)(*(float *)((longlong)param_1 + 0x134) * *(float *)((longlong)param_1 + 0x134)) <
      (double)param_1[0xc] * (double)param_1[0xc] + (double)param_1[0xd] * (double)param_1[0xd])) {
    local_200 = lVar13;
    FUN_14823e3cc(param_1[0x20],&local_1d8);
    if (0 < local_1d0) {
      plVar12 = (longlong *)FUN_145b1117c();
      lVar13 = plVar12[0x22];
      if (lVar13 == 0) {
        (**(code **)(*plVar12 + 1000))(plVar12);
        lVar13 = plVar12[0x22];
      }
      fVar21 = (float)(double)param_1[0xd];
      fVar26 = *(float *)(lVar13 + 0x70);
      fVar22 = 0.0;
      fVar23 = 0.0;
      if (0.0 < ABS(fVar21) - fVar26) {
        fVar23 = (float)(-(uint)(0.0 < fVar21) & 0xbf800000 |
                        ~-(uint)(0.0 < fVar21) &
                        *(uint *)(&DAT_14ae3e1c8 + (ulonglong)(fVar21 < 0.0) * 4)) *
                 ((ABS(fVar21) - fVar26) / (1.0 - fVar26)) * *(float *)(lVar13 + 0x78);
      }
      fVar21 = (float)(double)param_1[0xc];
      if (0.0 < ABS(fVar21) - fVar26) {
        fVar22 = (float)(-(uint)(0.0 < fVar21) & 0xbf800000 |
                        ~-(uint)(0.0 < fVar21) &
                        *(uint *)(&DAT_14ae3e1c8 + (ulonglong)(fVar21 < 0.0) * 4)) *
                 ((ABS(fVar21) - fVar26) / (1.0 - fVar26)) * *(float *)(lVar13 + 0x78);
      }
      if ((longlong)local_1d0 != 0) {
        local_210 = (longlong)local_1d0 << 3;
        lVar19 = 0;
        local_204 = (uint)lVar13;
        local_218 = local_1d8;
        plVar12 = local_1d8;
        do {
          uVar11 = *(undefined8 *)((longlong)plVar12 + lVar19);
          FUN_140760c2c(uVar11,&local_158);
          plVar12 = uStack_150;
          ppuVar17 = local_158;
          if (uStack_150 != (longlong *)0x0) {
            LOCK();
            plVar16 = uStack_150 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)*uStack_150)(uStack_150);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
          lVar13 = local_210;
          plVar12 = local_218;
          if (ppuVar17 != (undefined **)0x0) {
            iVar9 = (**(code **)(*param_1 + 200))(param_1,uVar11);
            fVar26 = fVar23;
            if (iVar9 != 1) {
              fVar26 = fVar22;
            }
            lVar13 = local_210;
            plVar12 = local_218;
            if (1e-08 < ABS(fVar26)) {
              pfVar14 = (float *)FUN_14775b4e6(uVar11);
              local_1e0 = (longlong *)
                          (double)(pfVar14[8] * *pfVar14 * 0.5 + pfVar14[10] * pfVar14[1] * 0.5 +
                                  pfVar14[0xc]);
              local_1e8 = (undefined **)
                          (double)(*pfVar14 * 0.5 * pfVar14[7] + pfVar14[1] * 0.5 * pfVar14[9] +
                                  pfVar14[0xb]);
              cVar7 = FUN_14823e59c(param_1,&local_1e8);
              plVar16 = DAT_14c964d38;
              uVar4 = DAT_14c964d30;
              uVar11 = DAT_14c964d28;
              lVar13 = local_210;
              plVar12 = local_218;
              if (cVar7 != '\0') {
                if (DAT_14c964d38 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(DAT_14c964d38 + 1) = (int)DAT_14c964d38[1] + 1;
                  UNLOCK();
                }
                local_204 = local_204 & 0xfe00;
                local_188 = 0;
                local_180 = 0;
                local_1a8 = (undefined **)0x0;
                plStack_1a0 = (longlong *)0x0;
                local_17c = 0xffffffff00000080;
                local_174 = 0;
                local_168 = 0;
                local_134 = (float)(double)local_1e0;
                local_160 = 0;
                local_138 = (float)(double)local_1e8;
                local_148 = *(undefined4 *)(local_200 + 0x18);
                uStack_150._0_3_ = (uint3)(ushort)local_204;
                uStack_150 = (longlong *)CONCAT44(local_148,(undefined4)uStack_150);
                local_140 = 0;
                local_158 = &PTR_FUN_149eda650;
                local_124 = local_134 - local_134;
                local_128 = local_138 - local_138;
                local_120 = &local_1a8;
                local_118 = uVar11;
                local_110 = uVar4;
                local_108 = plVar16;
                local_130 = local_138;
                local_12c = local_134;
                local_ec = fVar26;
                if (plVar16 == (longlong *)0x0) {
                  local_100 = 10;
                  local_f8 = 0x3f800000;
                  local_f4 = 0;
                  local_f0 = 0;
                  local_e8 = 0;
                  local_e6 = 0;
                }
                else {
                  LOCK();
                  *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                  UNLOCK();
                  local_100 = 10;
                  local_f8 = 0x3f800000;
                  local_f4 = 0;
                  local_f0 = 0;
                  local_e8 = 0;
                  local_e6 = 0;
                  LOCK();
                  plVar12 = plVar16 + 1;
                  *(int *)plVar12 = (int)*plVar12 + -1;
                  UNLOCK();
                  if ((int)*plVar12 == 0) {
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
                local_160 = 0;
                if (local_168 != 0) {
                  FUN_1400020a8();
                }
                FUN_1405535a6(&local_1a8);
                FUN_141519358(param_3,&local_158);
                plVar16 = local_108;
                lVar13 = local_210;
                plVar12 = local_218;
                local_158 = &PTR_FUN_149eda650;
                if (local_108 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = local_108 + 1;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)*plVar3 == 0) {
                    (**(code **)*local_108)(local_108);
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
            }
          }
          lVar19 = lVar19 + 8;
        } while (lVar13 != lVar19);
      }
    }
    if (local_1d8 != (longlong *)0x0) {
      FUN_1400020a8(local_1d8);
    }
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar18 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
LAB_143fcd15f:
  plVar18 = *(longlong **)(param_4 + 8);
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar18 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  if ((local_e0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fcd766 FUN_143fcd766 body=777 status=ok
// SIG undefined FUN_143fcd766(void)

undefined8 * FUN_143fcd766(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  void *_Src;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c6b9f8();
  puVar1 = (uint *)(param_1 + 0x5a);
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
  *param_1 = &PTR_FUN_14b59db80;
  *(undefined4 *)(param_1 + 0x16) = 0x1010a1;
  param_1[0x17] = "uidatadef";
  lVar6 = FUN_143fb66e4();
  if (lVar6 == 0) {
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
    FUN_1400bbfc4(&local_60,lVar6);
    *(undefined4 *)(param_1 + 0x5b) = local_60;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_5c;
    *(undefined4 *)(param_1 + 0x5c) = uStack_58;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_54;
    if (param_1 + 0x5b == (undefined8 *)&local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_44;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    iVar5 = DAT_14c9647dc;
    uVar2 = *(uint *)(lVar6 + 0xc);
    if (cVar4 != '\0') {
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_143fcd96c;
      }
    }
    *puVar1 = uVar2;
    if ((int)uVar2 < iVar5) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar7;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar7;
      }
    }
    *(int *)((longlong)param_1 + 0x2d4) = iVar5;
  }
LAB_143fcd96c:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar5 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar5;
  if (iVar5 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar5);
    if (iVar5 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar5 * 2);
    }
  }
  FUN_1400b22c2(local_70,"GbxUI.DataDefinition");
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143fcdad4 FUN_143fcdad4 body=152 status=ok
// SIG undefined FUN_143fcdad4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fcdad4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb9dd20) {
    FUN_144b3d300(&DAT_14cb9dd20);
    if (DAT_14cb9dd20 == -1) {
      DAT_14cb9dcf0 = 0;
      DAT_14cb9dcf8 = 0;
      DAT_14cb9dcd0 = 0;
      _DAT_14cb9dcd8 = 0;
      _DAT_14cb9dcfc = 0xffffffff00000080;
      DAT_14cb9dd04 = 0;
      DAT_14cb9dd10 = 0;
      DAT_14cb9dd18 = 0;
      atexit(FUN_143fcdb6c);
      _Init_thread_footer(&DAT_14cb9dd20);
      return;
    }
  }
  return;
}



// FUNCTION 143fcdb6c FUN_143fcdb6c body=166 status=ok
// SIG undefined FUN_143fcdb6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fcdb6c(void)

{
  DAT_14cb9dd18 = 0;
  if (DAT_14cb9dd10 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb9dcd8 = 0;
  if (DAT_14cb9dcdc != 0) {
    FUN_144727cd0(&DAT_14cb9dcd0,0);
  }
  _DAT_14cb9dd00 = 0xffffffff;
  DAT_14cb9dcf8 = 0;
  if (0x80 < DAT_14cb9dcfc) {
    DAT_14cb9dcfc = 0x80;
    FUN_1446efbd8(&DAT_14cb9dce0,0);
  }
  if (DAT_14cb9dcf0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb9dcd0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143fcdc12 FUN_143fcdc12 body=38 status=ok
// SIG undefined FUN_143fcdc12(void)

void FUN_143fcdc12(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14892d7d2(&DAT_14cb9dd28);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b59f610;
  return;
}



// FUNCTION 143fcdc38 FUN_143fcdc38 body=44 status=ok
// SIG undefined FUN_143fcdc38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fcdc38(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb9dd34 = _DAT_14cb9dd34 + -1;
  *param_1 = DAT_14cb9dd28;
  DAT_14cb9dd28 = param_1;
  return;
}



// FUNCTION 143fcdc64 FUN_143fcdc64 body=38 status=ok
// SIG undefined FUN_143fcdc64(void)

void FUN_143fcdc64(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b59f610;
  return;
}



// FUNCTION 143fcdc8a FUN_143fcdc8a body=306 status=ok
// SIG undefined FUN_143fcdc8a(void)

void FUN_143fcdc8a(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined *puVar7;
  uint uVar8;
  longlong lVar4;
  
  FUN_143fcdad4();
  if (DAT_14cb9dcd8 != DAT_14cb9dd04) {
    uVar2 = (uint)((ulonglong)DAT_14cb9dd44 >> 0x10);
    uVar8 = (uint)DAT_14cb9dd44 & 0xffff;
    puVar7 = &DAT_14cb9dd08;
    if (DAT_14cb9dd10 != (undefined *)0x0) {
      puVar7 = DAT_14cb9dd10;
    }
    iVar1 = *(int *)(puVar7 + ((longlong)
                               (int)(((uint)DAT_14cb9dd44 << 0x10 | uVar8) +
                                     (int)((ulonglong)DAT_14cb9dd44 >> 0x20) +
                                     (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                              (longlong)DAT_14cb9dd18 - 1U) * 4);
    while (iVar1 != -1) {
      plVar6 = (longlong *)(DAT_14cb9dcd0 + (longlong)iVar1 * 0x18);
      if (*plVar6 == DAT_14cb9dd44) {
        iVar3 = *(int *)(puVar7 + (longlong)*(int *)((longlong)plVar6 + 0x14) * 4);
        if (iVar3 == iVar1) {
          puVar5 = (undefined4 *)(puVar7 + (longlong)*(int *)((longlong)plVar6 + 0x14) * 4);
        }
        else {
          do {
            lVar4 = (longlong)iVar3;
            iVar3 = *(int *)(DAT_14cb9dcd0 + 0x10 + lVar4 * 0x18);
          } while (iVar3 != iVar1);
          puVar5 = (undefined4 *)(DAT_14cb9dcd0 + lVar4 * 0x18 + 0x10);
        }
        *puVar5 = (int)plVar6[2];
        FUN_143fdbf58();
        break;
      }
      iVar1 = (int)plVar6[2];
    }
  }
  if (DAT_14cb9dcc8 == &DAT_14cb9dd40) {
    DAT_14cb9dcc8 = (undefined4 *)0x0;
  }
  if (DAT_14cb9dd80 != 0) {
    plVar6 = &DAT_14cb9dda0;
    if (DAT_14cb9dd90 != (longlong *)0x0) {
      plVar6 = DAT_14cb9dd90;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (DAT_14cb9dd68 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143fcddbc FUN_143fcddbc body=777 status=ok
// SIG undefined FUN_143fcddbc(void)

undefined8 * FUN_143fcddbc(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  void *_Src;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c6b9f8();
  puVar1 = (uint *)(param_1 + 0x5a);
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
  *param_1 = &PTR_FUN_14b59dfc0;
  *(undefined4 *)(param_1 + 0x16) = 0xa000001;
  param_1[0x17] = "uimarkupimage";
  lVar6 = FUN_143fb68a2();
  if (lVar6 == 0) {
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
    FUN_1400bbfc4(&local_60,lVar6);
    *(undefined4 *)(param_1 + 0x5b) = local_60;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_5c;
    *(undefined4 *)(param_1 + 0x5c) = uStack_58;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_54;
    if (param_1 + 0x5b == (undefined8 *)&local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_44;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    iVar5 = DAT_14c9647dc;
    uVar2 = *(uint *)(lVar6 + 0xc);
    if (cVar4 != '\0') {
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_143fcdfc2;
      }
    }
    *puVar1 = uVar2;
    if ((int)uVar2 < iVar5) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar7;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar7;
      }
    }
    *(int *)((longlong)param_1 + 0x2d4) = iVar5;
  }
LAB_143fcdfc2:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar5 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar5;
  if (iVar5 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar5);
    if (iVar5 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar5 * 2);
    }
  }
  FUN_1400b22c2(local_70,"GbxUI.MarkupImage");
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143fce12a FUN_143fce12a body=152 status=ok
// SIG undefined FUN_143fce12a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fce12a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb9de38) {
    FUN_144b3d300(&DAT_14cb9de38);
    if (DAT_14cb9de38 == -1) {
      DAT_14cb9de08 = 0;
      DAT_14cb9de10 = 0;
      DAT_14cb9dde8 = 0;
      _DAT_14cb9ddf0 = 0;
      _DAT_14cb9de14 = 0xffffffff00000080;
      DAT_14cb9de1c = 0;
      DAT_14cb9de28 = 0;
      DAT_14cb9de30 = 0;
      atexit(FUN_143fce1c2);
      _Init_thread_footer(&DAT_14cb9de38);
      return;
    }
  }
  return;
}



// FUNCTION 143fce1c2 FUN_143fce1c2 body=166 status=ok
// SIG undefined FUN_143fce1c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fce1c2(void)

{
  DAT_14cb9de30 = 0;
  if (DAT_14cb9de28 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb9ddf0 = 0;
  if (DAT_14cb9ddf4 != 0) {
    FUN_144727cd0(&DAT_14cb9dde8,0);
  }
  _DAT_14cb9de18 = 0xffffffff;
  DAT_14cb9de10 = 0;
  if (0x80 < DAT_14cb9de14) {
    DAT_14cb9de14 = 0x80;
    FUN_1446efbd8(&DAT_14cb9ddf8,0);
  }
  if (DAT_14cb9de08 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb9dde8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143fce268 FUN_143fce268 body=201 status=ok
// SIG undefined FUN_143fce268(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143fce268(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar1 = DAT_14cb9de40;
  if (DAT_14cb9de40 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_140595974(0x1200);
    lVar4 = 0xf;
    puVar3 = puVar1;
    do {
      puVar2 = puVar3 + 0x24;
      *puVar3 = puVar2;
      lVar4 = lVar4 + -1;
      puVar3 = puVar2;
    } while (lVar4 != 0);
    *puVar2 = DAT_14cb9de40;
    _DAT_14cb9de48 = _DAT_14cb9de48 + 0x10;
  }
  DAT_14cb9de40 = (undefined8 *)*puVar1;
  _DAT_14cb9de4c = _DAT_14cb9de4c + 1;
  memset(puVar1 + 2,0,0x110);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b59e400;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0x3f800000;
  *(undefined4 *)(puVar1 + 9) = 0x3f800000;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x3f800000;
  FUN_140ca8f8e(puVar1 + 0xc);
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  return puVar1;
}



// FUNCTION 143fce332 FUN_143fce332 body=44 status=ok
// SIG undefined FUN_143fce332(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fce332(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb9de4c = _DAT_14cb9de4c + -1;
  *param_1 = DAT_14cb9de40;
  DAT_14cb9de40 = param_1;
  return;
}



// FUNCTION 143fce35e FUN_143fce35e body=108 status=ok
// SIG undefined FUN_143fce35e(void)

void FUN_143fce35e(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1 + 2,0,0x110);
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b59e400;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  FUN_140ca8f8e(param_1 + 0xc);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return;
}



// FUNCTION 143fce3ca FUN_143fce3ca body=306 status=ok
// SIG undefined FUN_143fce3ca(void)

void FUN_143fce3ca(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined *puVar7;
  uint uVar8;
  longlong lVar4;
  
  FUN_143fce12a();
  if (DAT_14cb9ddf0 != DAT_14cb9de1c) {
    uVar2 = (uint)((ulonglong)DAT_14cb9de54 >> 0x10);
    uVar8 = (uint)DAT_14cb9de54 & 0xffff;
    puVar7 = &DAT_14cb9de20;
    if (DAT_14cb9de28 != (undefined *)0x0) {
      puVar7 = DAT_14cb9de28;
    }
    iVar1 = *(int *)(puVar7 + ((longlong)
                               (int)(((uint)DAT_14cb9de54 << 0x10 | uVar8) +
                                     (int)((ulonglong)DAT_14cb9de54 >> 0x20) +
                                     (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                              (longlong)DAT_14cb9de30 - 1U) * 4);
    while (iVar1 != -1) {
      plVar6 = (longlong *)(DAT_14cb9dde8 + (longlong)iVar1 * 0x18);
      if (*plVar6 == DAT_14cb9de54) {
        iVar3 = *(int *)(puVar7 + (longlong)*(int *)((longlong)plVar6 + 0x14) * 4);
        if (iVar3 == iVar1) {
          puVar5 = (undefined4 *)(puVar7 + (longlong)*(int *)((longlong)plVar6 + 0x14) * 4);
        }
        else {
          do {
            lVar4 = (longlong)iVar3;
            iVar3 = *(int *)(DAT_14cb9dde8 + 0x10 + lVar4 * 0x18);
          } while (iVar3 != iVar1);
          puVar5 = (undefined4 *)(DAT_14cb9dde8 + lVar4 * 0x18 + 0x10);
        }
        *puVar5 = (int)plVar6[2];
        FUN_143fdbfd8();
        break;
      }
      iVar1 = (int)plVar6[2];
    }
  }
  if (DAT_14cb9dde0 == &DAT_14cb9de50) {
    DAT_14cb9dde0 = (undefined4 *)0x0;
  }
  if (DAT_14cb9de90 != 0) {
    plVar6 = &DAT_14cb9deb0;
    if (DAT_14cb9dea0 != (longlong *)0x0) {
      plVar6 = DAT_14cb9dea0;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (DAT_14cb9de78 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143fce4fc FUN_143fce4fc body=234 status=ok
// SIG undefined FUN_143fce4fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fce4fc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b59e400;
  FUN_143fce5e6();
  plVar3 = (longlong *)param_1[0x23];
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
  param_1[0xc] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x20];
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
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar4 = (undefined8 *)param_1[1], puVar4 != (undefined8 *)0x0)) {
    if (puVar4[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar4 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x000143fce5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 143fce5e6 FUN_143fce5e6 body=104 status=ok
// SIG undefined FUN_143fce5e6(void)

void FUN_143fce5e6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_140886972();
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  plVar3 = *(longlong **)(param_1 + 0x118);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x118) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000143fce642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143fce64e FUN_143fce64e body=546 status=ok
// SIG undefined FUN_143fce64e(void)

void FUN_143fce64e(undefined8 param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  int local_40;
  undefined1 local_31;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != (longlong *)0x0) {
    lVar4 = (**(code **)(*param_2 + 8))(param_2);
    lVar5 = FUN_143fb68a2();
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
       (param_3 == '\x01' &&
        *(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      FUN_143fce5e6(param_2);
      lVar5 = FUN_14050fd64();
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,2,0x10);
      local_40 = 2;
      *local_48 = &PTR_LAB_149e020b0;
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
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b5a3ce0;
      local_48[3] = param_2;
      local_50 = &local_31;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      FUN_140a1e0be(lVar5 + 0x1e8,&local_30,param_2 + 4,&local_48);
      plVar1 = local_28;
      if (param_2 + 0x22 != &local_30) {
        param_2[0x22] = local_30;
        local_30 = 0;
        plVar3 = (longlong *)param_2[0x23];
        if (local_28 != plVar3) {
          local_28 = (longlong *)0x0;
          param_2[0x23] = (longlong)plVar1;
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
        }
      }
      plVar1 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_28 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if (local_40 != 0) {
        if (local_48 == (undefined8 *)0x0) goto LAB_143fce837;
        (**(code **)*local_48)(local_48,0);
        FUN_1446efa72(&local_48,0,0,0x10);
        local_40 = 0;
      }
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143fce837:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fce872 FUN_143fce872 body=777 status=ok
// SIG undefined FUN_143fce872(void)

undefined8 * FUN_143fce872(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  void *_Src;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c6b9f8();
  puVar1 = (uint *)(param_1 + 0x5a);
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
  *param_1 = &PTR_FUN_14b59e430;
  *(undefined4 *)(param_1 + 0x16) = 0xa000000;
  param_1[0x17] = "uimarkuptextstyle";
  lVar6 = FUN_143fb6af6();
  if (lVar6 == 0) {
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
    FUN_1400bbfc4(&local_60,lVar6);
    *(undefined4 *)(param_1 + 0x5b) = local_60;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_5c;
    *(undefined4 *)(param_1 + 0x5c) = uStack_58;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_54;
    if (param_1 + 0x5b == (undefined8 *)&local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_44;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    iVar5 = DAT_14c9647dc;
    uVar2 = *(uint *)(lVar6 + 0xc);
    if (cVar4 != '\0') {
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_143fcea78;
      }
    }
    *puVar1 = uVar2;
    if ((int)uVar2 < iVar5) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar7;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar7;
      }
    }
    *(int *)((longlong)param_1 + 0x2d4) = iVar5;
  }
LAB_143fcea78:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar5 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar5;
  if (iVar5 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar5);
    if (iVar5 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar5 * 2);
    }
  }
  FUN_1400b22c2(local_70,"GbxUI.MarkupStyle");
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143fcebe0 FUN_143fcebe0 body=152 status=ok
// SIG undefined FUN_143fcebe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fcebe0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb9df48) {
    FUN_144b3d300(&DAT_14cb9df48);
    if (DAT_14cb9df48 == -1) {
      DAT_14cb9df18 = 0;
      DAT_14cb9df20 = 0;
      DAT_14cb9def8 = 0;
      _DAT_14cb9df00 = 0;
      _DAT_14cb9df24 = 0xffffffff00000080;
      DAT_14cb9df2c = 0;
      DAT_14cb9df38 = 0;
      DAT_14cb9df40 = 0;
      atexit(FUN_143fcec78);
      _Init_thread_footer(&DAT_14cb9df48);
      return;
    }
  }
  return;
}



// FUNCTION 143fcec78 FUN_143fcec78 body=166 status=ok
// SIG undefined FUN_143fcec78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fcec78(void)

{
  DAT_14cb9df40 = 0;
  if (DAT_14cb9df38 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb9df00 = 0;
  if (DAT_14cb9df04 != 0) {
    FUN_144727cd0(&DAT_14cb9def8,0);
  }
  _DAT_14cb9df28 = 0xffffffff;
  DAT_14cb9df20 = 0;
  if (0x80 < DAT_14cb9df24) {
    DAT_14cb9df24 = 0x80;
    FUN_1446efbd8(&DAT_14cb9df08,0);
  }
  if (DAT_14cb9df18 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb9def8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143fced1e FUN_143fced1e body=186 status=ok
// SIG undefined FUN_143fced1e(void)

undefined8 * FUN_143fced1e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1489295a8(&DAT_14cb9df50);
  memset(puVar1 + 2,0,0xd8);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b59f640;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x24) = 0;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x33) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0x3f80000000000000;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x5c) = 0;
  puVar1[0xc] = &DAT_3f8000003f800000;
  puVar1[0xd] = &DAT_3f8000003f800000;
  *(undefined1 *)((longlong)puVar1 + 0x74) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xcc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x91) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x99) = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x1a] = &DAT_3f8000003f800000;
  puVar1[0x1b] = &DAT_3f8000003f800000;
  return puVar1;
}



// FUNCTION 143fcedd8 FUN_143fcedd8 body=149 status=ok
// SIG undefined FUN_143fcedd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fcedd8(undefined8 *param_1)

{
  longlong *plVar1;
  
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  _DAT_14cb9df5c = _DAT_14cb9df5c + -1;
  *param_1 = DAT_14cb9df50;
  DAT_14cb9df50 = param_1;
  return;
}



// FUNCTION 143fcee6e FUN_143fcee6e body=292 status=ok
// SIG undefined FUN_143fcee6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fcee6e(undefined8 *param_1)

{
  longlong *plVar1;
  
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  memset(param_1 + 2,0,0xd8);
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b59f640;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x33) = 0;
  param_1[8] = 0;
  param_1[9] = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = &DAT_3f8000003f800000;
  param_1[0xd] = &DAT_3f8000003f800000;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x91) = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x1a] = &DAT_3f8000003f800000;
  param_1[0x1b] = &DAT_3f8000003f800000;
  return;
}



// FUNCTION 143fcef92 FUN_143fcef92 body=306 status=ok
// SIG undefined FUN_143fcef92(void)

void FUN_143fcef92(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined *puVar7;
  uint uVar8;
  longlong lVar4;
  
  FUN_143fcebe0();
  if (DAT_14cb9df00 != DAT_14cb9df2c) {
    uVar2 = (uint)((ulonglong)DAT_14cb9df64 >> 0x10);
    uVar8 = (uint)DAT_14cb9df64 & 0xffff;
    puVar7 = &DAT_14cb9df30;
    if (DAT_14cb9df38 != (undefined *)0x0) {
      puVar7 = DAT_14cb9df38;
    }
    iVar1 = *(int *)(puVar7 + ((longlong)
                               (int)(((uint)DAT_14cb9df64 << 0x10 | uVar8) +
                                     (int)((ulonglong)DAT_14cb9df64 >> 0x20) +
                                     (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                              (longlong)DAT_14cb9df40 - 1U) * 4);
    while (iVar1 != -1) {
      plVar6 = (longlong *)(DAT_14cb9def8 + (longlong)iVar1 * 0x18);
      if (*plVar6 == DAT_14cb9df64) {
        iVar3 = *(int *)(puVar7 + (longlong)*(int *)((longlong)plVar6 + 0x14) * 4);
        if (iVar3 == iVar1) {
          puVar5 = (undefined4 *)(puVar7 + (longlong)*(int *)((longlong)plVar6 + 0x14) * 4);
        }
        else {
          do {
            lVar4 = (longlong)iVar3;
            iVar3 = *(int *)(DAT_14cb9def8 + 0x10 + lVar4 * 0x18);
          } while (iVar3 != iVar1);
          puVar5 = (undefined4 *)(DAT_14cb9def8 + lVar4 * 0x18 + 0x10);
        }
        *puVar5 = (int)plVar6[2];
        FUN_143fdc058();
        break;
      }
      iVar1 = (int)plVar6[2];
    }
  }
  if (DAT_14cb9def0 == &DAT_14cb9df60) {
    DAT_14cb9def0 = (undefined4 *)0x0;
  }
  if (DAT_14cb9dfa0 != 0) {
    plVar6 = &DAT_14cb9dfc0;
    if (DAT_14cb9dfb0 != (longlong *)0x0) {
      plVar6 = DAT_14cb9dfb0;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (DAT_14cb9df88 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143fcf0c4 FUN_143fcf0c4 body=777 status=ok
// SIG undefined FUN_143fcf0c4(void)

undefined8 * FUN_143fcf0c4(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  void *_Src;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c6b9f8();
  puVar1 = (uint *)(param_1 + 0x5a);
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
  *param_1 = &PTR_FUN_14b59e870;
  *(undefined4 *)(param_1 + 0x16) = 0x1010b1;
  param_1[0x17] = "uitextstyle";
  lVar6 = FUN_143fb6d80();
  if (lVar6 == 0) {
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
    FUN_1400bbfc4(&local_60,lVar6);
    *(undefined4 *)(param_1 + 0x5b) = local_60;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_5c;
    *(undefined4 *)(param_1 + 0x5c) = uStack_58;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_54;
    if (param_1 + 0x5b == (undefined8 *)&local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_44;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    iVar5 = DAT_14c9647dc;
    uVar2 = *(uint *)(lVar6 + 0xc);
    if (cVar4 != '\0') {
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_143fcf2ca;
      }
    }
    *puVar1 = uVar2;
    if ((int)uVar2 < iVar5) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar7;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar7;
      }
    }
    *(int *)((longlong)param_1 + 0x2d4) = iVar5;
  }
LAB_143fcf2ca:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar5 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar5;
  if (iVar5 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar5);
    if (iVar5 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar5 * 2);
    }
  }
  FUN_1400b22c2(local_70,"GbxUI.TextStyle");
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143fcf432 FUN_143fcf432 body=152 status=ok
// SIG undefined FUN_143fcf432(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fcf432(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb9e058) {
    FUN_144b3d300(&DAT_14cb9e058);
    if (DAT_14cb9e058 == -1) {
      DAT_14cb9e028 = 0;
      DAT_14cb9e030 = 0;
      DAT_14cb9e008 = 0;
      _DAT_14cb9e010 = 0;
      _DAT_14cb9e034 = 0xffffffff00000080;
      DAT_14cb9e03c = 0;
      DAT_14cb9e048 = 0;
      DAT_14cb9e050 = 0;
      atexit(FUN_143fcf4ca);
      _Init_thread_footer(&DAT_14cb9e058);
      return;
    }
  }
  return;
}



// FUNCTION 143fcf4ca FUN_143fcf4ca body=166 status=ok
// SIG undefined FUN_143fcf4ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fcf4ca(void)

{
  DAT_14cb9e050 = 0;
  if (DAT_14cb9e048 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb9e010 = 0;
  if (DAT_14cb9e014 != 0) {
    FUN_144727cd0(&DAT_14cb9e008,0);
  }
  _DAT_14cb9e038 = 0xffffffff;
  DAT_14cb9e030 = 0;
  if (0x80 < DAT_14cb9e034) {
    DAT_14cb9e034 = 0x80;
    FUN_1446efbd8(&DAT_14cb9e018,0);
  }
  if (DAT_14cb9e028 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb9e008 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143fcf570 FUN_143fcf570 body=294 status=ok
// SIG undefined FUN_143fcf570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143fcf570(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar1 = DAT_14cb9e060;
  if (DAT_14cb9e060 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_140595974(0x1300);
    lVar4 = 0xf;
    puVar3 = puVar1;
    do {
      puVar2 = puVar3 + 0x26;
      *puVar3 = puVar2;
      lVar4 = lVar4 + -1;
      puVar3 = puVar2;
    } while (lVar4 != 0);
    *puVar2 = DAT_14cb9e060;
    _DAT_14cb9e068 = _DAT_14cb9e068 + 0x10;
  }
  DAT_14cb9e060 = (undefined8 *)*puVar1;
  _DAT_14cb9e06c = _DAT_14cb9e06c + 1;
  memset(puVar1 + 2,0,0x120);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b59f670;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4d) = 0;
  puVar1[0xb] = &DAT_3f8000003f800000;
  puVar1[0xc] = &DAT_3f8000003f800000;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0x3f80000000000000;
  *(undefined8 *)((longlong)puVar1 + 0xac) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xb1) = 0;
  *(undefined1 **)((longlong)puVar1 + 0xbc) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)puVar1 + 0xc4) = &DAT_3f8000003f800000;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  *(undefined1 *)(puVar1 + 0x22) = 0;
  *(undefined1 **)((longlong)puVar1 + 0x114) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)puVar1 + 0x11c) = &DAT_3f8000003f800000;
  *(undefined1 *)(puVar1 + 0x25) = 0;
  *(undefined4 *)((longlong)puVar1 + 300) = 0x3f800000;
  return puVar1;
}



// FUNCTION 143fcf696 FUN_143fcf696 body=180 status=ok
// SIG undefined FUN_143fcf696(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fcf696(undefined8 *param_1)

{
  longlong *plVar1;
  
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  _DAT_14cb9e06c = _DAT_14cb9e06c + -1;
  *param_1 = DAT_14cb9e060;
  DAT_14cb9e060 = param_1;
  return;
}



// FUNCTION 143fcf74a FUN_143fcf74a body=346 status=ok
// SIG undefined FUN_143fcf74a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fcf74a(undefined8 *param_1)

{
  longlong *plVar1;
  
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  memset(param_1 + 2,0,0x120);
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b59f670;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  param_1[0xb] = &DAT_3f8000003f800000;
  param_1[0xc] = &DAT_3f8000003f800000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb1) = 0;
  *(undefined1 **)((longlong)param_1 + 0xbc) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0xc4) = &DAT_3f8000003f800000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 **)((longlong)param_1 + 0x114) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x11c) = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x3f800000;
  return;
}



// FUNCTION 143fcf8a4 FUN_143fcf8a4 body=306 status=ok
// SIG undefined FUN_143fcf8a4(void)

void FUN_143fcf8a4(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined *puVar7;
  uint uVar8;
  longlong lVar4;
  
  FUN_143fcf432();
  if (DAT_14cb9e010 != DAT_14cb9e03c) {
    uVar2 = (uint)((ulonglong)DAT_14cb9e074 >> 0x10);
    uVar8 = (uint)DAT_14cb9e074 & 0xffff;
    puVar7 = &DAT_14cb9e040;
    if (DAT_14cb9e048 != (undefined *)0x0) {
      puVar7 = DAT_14cb9e048;
    }
    iVar1 = *(int *)(puVar7 + ((longlong)
                               (int)(((uint)DAT_14cb9e074 << 0x10 | uVar8) +
                                     (int)((ulonglong)DAT_14cb9e074 >> 0x20) +
                                     (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                              (longlong)DAT_14cb9e050 - 1U) * 4);
    while (iVar1 != -1) {
      plVar6 = (longlong *)(DAT_14cb9e008 + (longlong)iVar1 * 0x18);
      if (*plVar6 == DAT_14cb9e074) {
        iVar3 = *(int *)(puVar7 + (longlong)*(int *)((longlong)plVar6 + 0x14) * 4);
        if (iVar3 == iVar1) {
          puVar5 = (undefined4 *)(puVar7 + (longlong)*(int *)((longlong)plVar6 + 0x14) * 4);
        }
        else {
          do {
            lVar4 = (longlong)iVar3;
            iVar3 = *(int *)(DAT_14cb9e008 + 0x10 + lVar4 * 0x18);
          } while (iVar3 != iVar1);
          puVar5 = (undefined4 *)(DAT_14cb9e008 + lVar4 * 0x18 + 0x10);
        }
        *puVar5 = (int)plVar6[2];
        FUN_143fdc0d8();
        break;
      }
      iVar1 = (int)plVar6[2];
    }
  }
  if (DAT_14cb9e000 == &DAT_14cb9e070) {
    DAT_14cb9e000 = (undefined4 *)0x0;
  }
  if (DAT_14cb9e0b0 != 0) {
    plVar6 = &DAT_14cb9e0d0;
    if (DAT_14cb9e0c0 != (longlong *)0x0) {
      plVar6 = DAT_14cb9e0c0;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (DAT_14cb9e098 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143fcf9d6 FUN_143fcf9d6 body=110 status=ok
// SIG undefined FUN_143fcf9d6(void)

undefined8 FUN_143fcf9d6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcdd4(local_38,param_1);
  if (DAT_14cb9dff8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb9dff8,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fcfa46 FUN_143fcfa46 body=113 status=ok
// SIG undefined FUN_143fcfa46(void)

void FUN_143fcfa46(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_145905bd0();
  uVar1 = *(uint *)(lVar3 + 0x2b8);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
      FUN_1446f84a2(param_2,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 8 + *param_2),*(void **)(lVar3 + 0x2b0),
           (longlong)(int)uVar1 << 3);
    return;
  }
  return;
}



// FUNCTION 143fcfab8 FUN_143fcfab8 body=777 status=ok
// SIG undefined FUN_143fcfab8(void)

undefined8 * FUN_143fcfab8(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  void *_Src;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c6b9f8();
  puVar1 = (uint *)(param_1 + 0x5a);
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
  *param_1 = &PTR_FUN_14b59ecb0;
  *(undefined4 *)(param_1 + 0x16) = 0x1010b0;
  param_1[0x17] = "uiumgwidgetdef";
  lVar6 = FUN_143fb7476();
  if (lVar6 == 0) {
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
    FUN_1400bbfc4(&local_60,lVar6);
    *(undefined4 *)(param_1 + 0x5b) = local_60;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_5c;
    *(undefined4 *)(param_1 + 0x5c) = uStack_58;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_54;
    if (param_1 + 0x5b == (undefined8 *)&local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_44;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    iVar5 = DAT_14c9647dc;
    uVar2 = *(uint *)(lVar6 + 0xc);
    if (cVar4 != '\0') {
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_143fcfcbe;
      }
    }
    *puVar1 = uVar2;
    if ((int)uVar2 < iVar5) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar7;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar7;
      }
    }
    *(int *)((longlong)param_1 + 0x2d4) = iVar5;
  }
LAB_143fcfcbe:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar5 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar5;
  if (iVar5 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar5);
    if (iVar5 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar5 * 2);
    }
  }
  FUN_1400b22c2(local_70,"GbxUI.WidgetDefinition");
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143fcfe26 FUN_143fcfe26 body=152 status=ok
// SIG undefined FUN_143fcfe26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fcfe26(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb9e168) {
    FUN_144b3d300(&DAT_14cb9e168);
    if (DAT_14cb9e168 == -1) {
      DAT_14cb9e138 = 0;
      DAT_14cb9e140 = 0;
      DAT_14cb9e118 = 0;
      _DAT_14cb9e120 = 0;
      _DAT_14cb9e144 = 0xffffffff00000080;
      DAT_14cb9e14c = 0;
      DAT_14cb9e158 = 0;
      DAT_14cb9e160 = 0;
      atexit(FUN_143fcfebe);
      _Init_thread_footer(&DAT_14cb9e168);
      return;
    }
  }
  return;
}



// FUNCTION 143fcfebe FUN_143fcfebe body=166 status=ok
// SIG undefined FUN_143fcfebe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fcfebe(void)

{
  DAT_14cb9e160 = 0;
  if (DAT_14cb9e158 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb9e120 = 0;
  if (DAT_14cb9e124 != 0) {
    FUN_144727cd0(&DAT_14cb9e118,0);
  }
  _DAT_14cb9e148 = 0xffffffff;
  DAT_14cb9e140 = 0;
  if (0x80 < DAT_14cb9e144) {
    DAT_14cb9e144 = 0x80;
    FUN_1446efbd8(&DAT_14cb9e128,0);
  }
  if (DAT_14cb9e138 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb9e118 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143fcff64 FUN_143fcff64 body=129 status=ok
// SIG undefined FUN_143fcff64(void)

undefined8 * FUN_143fcff64(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143fcffe6();
  memset(puVar1 + 2,0,200);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b59f6a0;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xb4) = 0xffffffff00000080;
  puVar1[0x19] = 0;
  return puVar1;
}



// FUNCTION 143fcffe6 FUN_143fcffe6 body=111 status=ok
// SIG undefined FUN_143fcffe6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fcffe6(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb9e170;
  if (DAT_14cb9e170 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0xd80,0);
    lVar4 = 0xf;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x1b;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb9e170;
    _DAT_14cb9e178 = _DAT_14cb9e178 + 0x10;
  }
  DAT_14cb9e170 = (undefined8 *)*puVar2;
  _DAT_14cb9e17c = _DAT_14cb9e17c + 1;
  return;
}



// FUNCTION 143fd0056 FUN_143fd0056 body=44 status=ok
// SIG undefined FUN_143fd0056(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fd0056(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb9e17c = _DAT_14cb9e17c + -1;
  *param_1 = DAT_14cb9e170;
  DAT_14cb9e170 = param_1;
  return;
}



// FUNCTION 143fd0082 FUN_143fd0082 body=128 status=ok
// SIG undefined FUN_143fd0082(void)

void FUN_143fd0082(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1 + 2,0,200);
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b59f6a0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
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
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  param_1[0x19] = 0;
  return;
}



// FUNCTION 143fd0102 FUN_143fd0102 body=306 status=ok
// SIG undefined FUN_143fd0102(void)

void FUN_143fd0102(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined *puVar7;
  uint uVar8;
  longlong lVar4;
  
  FUN_143fcfe26();
  if (DAT_14cb9e120 != DAT_14cb9e14c) {
    uVar2 = (uint)((ulonglong)DAT_14cb9e184 >> 0x10);
    uVar8 = (uint)DAT_14cb9e184 & 0xffff;
    puVar7 = &DAT_14cb9e150;
    if (DAT_14cb9e158 != (undefined *)0x0) {
      puVar7 = DAT_14cb9e158;
    }
    iVar1 = *(int *)(puVar7 + ((longlong)
                               (int)(((uint)DAT_14cb9e184 << 0x10 | uVar8) +
                                     (int)((ulonglong)DAT_14cb9e184 >> 0x20) +
                                     (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                              (longlong)DAT_14cb9e160 - 1U) * 4);
    while (iVar1 != -1) {
      plVar6 = (longlong *)(DAT_14cb9e118 + (longlong)iVar1 * 0x18);
      if (*plVar6 == DAT_14cb9e184) {
        iVar3 = *(int *)(puVar7 + (longlong)*(int *)((longlong)plVar6 + 0x14) * 4);
        if (iVar3 == iVar1) {
          puVar5 = (undefined4 *)(puVar7 + (longlong)*(int *)((longlong)plVar6 + 0x14) * 4);
        }
        else {
          do {
            lVar4 = (longlong)iVar3;
            iVar3 = *(int *)(DAT_14cb9e118 + 0x10 + lVar4 * 0x18);
          } while (iVar3 != iVar1);
          puVar5 = (undefined4 *)(DAT_14cb9e118 + lVar4 * 0x18 + 0x10);
        }
        *puVar5 = (int)plVar6[2];
        FUN_143fdc158();
        break;
      }
      iVar1 = (int)plVar6[2];
    }
  }
  if (DAT_14cb9e110 == &DAT_14cb9e180) {
    DAT_14cb9e110 = (undefined4 *)0x0;
  }
  if (DAT_14cb9e1c0 != 0) {
    plVar6 = &DAT_14cb9e1e0;
    if (DAT_14cb9e1d0 != (longlong *)0x0) {
      plVar6 = DAT_14cb9e1d0;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (DAT_14cb9e1a8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143fd0234 FUN_143fd0234 body=655 status=ok
// SIG undefined FUN_143fd0234(void)

void FUN_143fd0234(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != 0 && param_3 != 0) {
    plVar4 = (longlong *)FUN_143fd04c4(param_3);
    if ((plVar4 != (longlong *)0x0) && (*(longlong *)(param_2 + 0x18) != 0)) {
      plVar1 = (longlong *)(param_2 + 0x18);
      FUN_143fde770(plVar1,&local_e8);
      if ((local_e8 != 0) && (*(longlong *)(local_e8 + 0x30) != 0)) {
        plVar5 = (longlong *)FUN_143fd1ffc(plVar4,param_2);
        if (plVar5 == (longlong *)0x0) {
          FUN_14058b40c(plVar4,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                       );
          local_d8 = FUN_143fb12f4();
          local_88 = (longlong *)0x0;
          local_58 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_b8 = 0;
          local_b0 = 0;
          uStack_a8 = 0;
          local_a0 = 0;
          lStack_98 = 0;
          local_d0 = plVar4;
          plVar5 = (longlong *)FUN_1402710dd(&local_d8);
          if (lStack_98 != 0) {
            plVar6 = local_88;
            if (local_88 == (longlong *)0x0) {
              plVar6 = local_78;
            }
            (**(code **)(*plVar6 + 0x10))();
          }
          AcquireSRWLockExclusive((PSRWLOCK)(plVar4 + 0x12));
          if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(plVar5);
          }
          iVar3 = (int)plVar4[0x11];
          *(uint *)(plVar4 + 0x11) = iVar3 + 1U;
          if (*(uint *)((longlong)plVar4 + 0x8c) < iVar3 + 1U) {
            FUN_143fdf5a4(plVar4 + 0x10,iVar3);
          }
          *(longlong **)(plVar4[0x10] + (longlong)iVar3 * 8) = plVar5;
          if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(plVar5);
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(plVar4 + 0x12));
          if (*plVar1 != 0) {
            FUN_143fde770(plVar1,&local_d8);
            if (local_d8 != 0) {
              plVar5[8] = param_2;
              if (local_d0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
                UNLOCK();
              }
              plVar4 = (longlong *)plVar5[10];
              plVar5[9] = local_d8;
              plVar5[10] = (longlong)local_d0;
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
            }
            plVar4 = local_d0;
            if (local_d0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_d0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_d0)(local_d0);
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
          (**(code **)(*plVar5 + 0x2a0))(plVar5);
        }
        else {
          (**(code **)(*plVar5 + 0x2a0))(plVar5);
        }
      }
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_e0 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar2 = (int *)((longlong)local_e0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_e0 + 0x10))(local_e0);
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fd04c4 FUN_143fd04c4 body=115 status=ok
// SIG undefined FUN_143fd04c4(void)

void FUN_143fd04c4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_143fb149a();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 != 0) goto LAB_143fd04ef;
  }
  else {
    FUN_1456cec3c(lVar1);
LAB_143fd04ef:
    lVar2 = FUN_143fb149a();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      lVar3 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        lVar3 = lVar1;
      }
      goto LAB_143fd0518;
    }
  }
  lVar3 = 0;
LAB_143fd0518:
  FUN_1448a6f9c(param_1 + 0x138,lVar3);
  return;
}



// FUNCTION 143fd0538 FUN_143fd0538 body=547 status=ok
// SIG undefined FUN_143fd0538(void)

void FUN_143fd0538(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  PSRWLOCK SRWLock;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_a8 [47];
  byte local_79;
  int local_78;
  int local_74;
  longlong local_70;
  PSRWLOCK local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_2 != 0 && param_3 != 0) && (lVar5 = FUN_143fd04c4(param_3), lVar5 != 0)) &&
     (*(longlong *)(param_2 + 0x18) != 0)) {
    FUN_143fde770(param_2 + 0x18,&local_58);
    if ((local_58 != 0) &&
       (plVar6 = (longlong *)FUN_143fd1ffc(lVar5,param_2), plVar6 != (longlong *)0x0)) {
      if ((char)plVar6[0xb] == '\0') {
        (**(code **)(*plVar6 + 0x2a8))(plVar6);
      }
      SRWLock = (PSRWLOCK)(lVar5 + 0x90);
      AcquireSRWLockExclusive(SRWLock);
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(plVar6);
      }
      iVar2 = *(int *)(lVar5 + 0x88);
      lVar10 = (longlong)iVar2;
      if (lVar10 != 0) {
        puVar3 = *(undefined8 **)(lVar5 + 0x80);
        local_70 = lVar5;
        local_68 = SRWLock;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(plVar6);
        }
        iVar8 = 0;
        iVar9 = 0;
        bVar4 = (longlong *)*puVar3 == plVar6;
        do {
          local_79 = bVar4 ^ 1;
          lVar5 = (longlong)iVar9;
          iVar7 = iVar9 + 1;
          if (iVar9 + 1 < iVar2) {
            iVar7 = iVar2;
          }
          local_78 = iVar8;
          local_74 = iVar9;
          local_60 = lVar5;
          do {
            lVar5 = lVar5 + 1;
            iVar8 = iVar7;
            if (lVar10 <= lVar5) break;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(plVar6);
            }
            iVar9 = iVar9 + 1;
            iVar8 = iVar9;
          } while ((bool)(bVar4 & 1) == ((longlong *)puVar3[lVar5] == plVar6));
          iVar9 = iVar8;
          iVar8 = local_78;
          if ((bVar4 & 1) == 0) {
            iVar7 = iVar9 - local_74;
            if (local_78 != local_74) {
              memmove(puVar3 + local_78,puVar3 + local_60,(longlong)iVar7 << 3);
            }
            iVar8 = iVar8 + iVar7;
          }
          bVar4 = local_79;
        } while (lVar5 < lVar10);
        *(int *)(local_70 + 0x88) = iVar8;
        SRWLock = local_68;
      }
      ReleaseSRWLockExclusive(SRWLock);
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fd075c FUN_143fd075c body=67 status=ok
// SIG undefined FUN_143fd075c(void)

void FUN_143fd075c(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  
  if (param_2 != 0 && param_3 != 0) {
    plVar1 = (longlong *)FUN_148b64e90(param_3);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fd079c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,*(code **)(*plVar1 + 0x2c0));
      return;
    }
  }
  return;
}



// FUNCTION 143fd07a0 FUN_143fd07a0 body=67 status=ok
// SIG undefined FUN_143fd07a0(void)

void FUN_143fd07a0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  
  if (param_2 != 0 && param_3 != 0) {
    plVar1 = (longlong *)FUN_148b64e90(param_3);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fd07e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x2c8))(plVar1,param_2,*(code **)(*plVar1 + 0x2c8));
      return;
    }
  }
  return;
}



// FUNCTION 143fd07e4 FUN_143fd07e4 body=535 status=ok
// SIG undefined FUN_143fd07e4(void)

longlong FUN_143fd07e4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar8 = (uint)lVar2 & 0xffff;
    lVar6 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar6 = *(longlong *)(param_1 + 200);
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0xd0) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar8) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar7 != -1) {
      lVar6 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar7 * 0x28);
        if (*plVar1 == lVar2) {
          if (((ulonglong)(plVar1 + 1) & 0xfffffffffffffff7) == 0) goto LAB_143fd0898;
          lVar2 = plVar1[1];
          local_38 = lVar2;
          uVar5 = FUN_14477b664(plVar1[2]);
          local_30 = FUN_14477b664(uVar5);
          lVar6 = plVar1[3];
          local_28 = lVar6;
          if (local_30 == 0) {
            uVar5 = FUN_140067708();
            local_30 = FUN_14477b664(uVar5);
          }
          if (lVar6 == 0) {
            local_28 = 0;
            lVar6 = 0;
            if ((lVar2 == 0) || (local_30 == 0)) break;
            plVar1 = *(longlong **)(local_30 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar4 == '\0')) goto LAB_143fd0898;
            uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar6 = FUN_144aff482(uVar5,&local_38);
            local_28 = lVar6;
            if (lVar6 == 0) goto LAB_143fd0898;
          }
          if (local_30 == 0) {
            uVar5 = FUN_140067708();
            local_30 = FUN_14477b664(uVar5);
            lVar6 = local_28;
            if (local_28 == 0) {
              lVar6 = 0;
              if ((local_30 != 0) && (lVar6 = 0, local_38 != 0)) {
                plVar1 = *(longlong **)(local_30 + 0xb8);
                if ((plVar1 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar4 == '\0'))
                goto LAB_143fd0898;
                uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
                lVar6 = FUN_144aff482(uVar5,&local_38);
              }
            }
          }
          break;
        }
        iVar7 = (int)plVar1[4];
      } while (iVar7 != -1);
      goto LAB_143fd089a;
    }
  }
LAB_143fd0898:
  lVar6 = 0;
LAB_143fd089a:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 143fd09fc FUN_143fd09fc body=140 status=ok
// SIG undefined FUN_143fd09fc(void)

void FUN_143fd09fc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,param_1,param_2);
  }
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
                    /* WARNING: Could not recover jumptable at 0x000143fd0a79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143fd0a88 FUN_143fd0a88 body=140 status=ok
// SIG undefined FUN_143fd0a88(void)

void FUN_143fd0a88(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1,param_2);
  }
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
                    /* WARNING: Could not recover jumptable at 0x000143fd0b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143fd0b14 FUN_143fd0b14 body=646 status=ok
// SIG undefined FUN_143fd0b14(void)

undefined8 * FUN_143fd0b14(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = FUN_14007ca06();
  FUN_1406ed334(param_1,uVar4);
  *param_1 = &PTR_FUN_14b595770;
  FUN_1406ed278(param_1 + 0x1f);
  FUN_1406ed278(param_1 + 0x41);
  FUN_1406ed278(param_1 + 99);
  FUN_1406ed278(param_1 + 0x85);
  if (((*(uint *)(param_1 + 1) >> 9 & 1) != 0) || ((*(byte *)(param_1 + 0x18) & 2) == 0)) {
    param_1[0x13] = 2;
    param_1[0x14] = 2;
  }
  local_50 = 0;
  local_48 = 0x100000000;
  FUN_140f937a0(&local_68,param_1 + 0x1f);
  FUN_140f937a0(&local_68,param_1 + 0x41);
  FUN_140f937a0(&local_68,param_1 + 99);
  FUN_140f937a0(&local_68,param_1 + 0x85);
  *(undefined1 *)((longlong)param_1 + 0x174) = 1;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x284) = 1;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x394) = 1;
  *(undefined4 *)(param_1 + 0x72) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x4a4) = 1;
  *(undefined4 *)(param_1 + 0x94) = 0x3f800000;
  local_70 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_70[1] = (longlong)&DAT_100000001;
  *local_70 = (longlong)&PTR_FUN_14a492060;
  local_78 = local_70 + 2;
  local_70[2] = 0;
  local_70[3] = 0;
  local_70[4] = 0;
  local_70[5] = 0;
  local_70[6] = 2;
  if (local_50 == 0) {
    local_70[9] = local_58;
    *(undefined4 *)(local_70 + 7) = local_68;
    *(undefined4 *)((longlong)local_70 + 0x3c) = uStack_64;
    *(undefined4 *)(local_70 + 8) = uStack_60;
    *(undefined4 *)((longlong)local_70 + 0x44) = uStack_5c;
  }
  local_70[10] = local_50;
  local_50 = 0;
  *(undefined4 *)(local_70 + 0xb) = (undefined4)local_48;
  *(undefined4 *)((longlong)local_70 + 0x5c) = local_48._4_4_;
  local_48 = 0x100000000;
  FUN_140aec6f8(&local_78);
  plVar1 = local_70;
  if (local_70 == (longlong *)0x0) {
    param_1[0x1c] = local_78;
    plVar5 = (longlong *)param_1[0x1d];
    if (plVar5 == (longlong *)0x0) goto LAB_143fd0d40;
    param_1[0x1d] = 0;
LAB_143fd0d0a:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_143fd0d40;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
    param_1[0x1c] = local_78;
    plVar5 = (longlong *)param_1[0x1d];
    if (local_70 != plVar5) {
      param_1[0x1d] = local_70;
      if (plVar5 == (longlong *)0x0) goto LAB_143fd0d40;
      goto LAB_143fd0d0a;
    }
    LOCK();
    plVar5 = local_70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_143fd0d40;
    (**(code **)*local_70)(local_70);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_143fd0d40:
  plVar1 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1404dbc0c(&local_68);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fd0d9c FUN_143fd0d9c body=75 status=ok
// SIG undefined FUN_143fd0d9c(void)

bool FUN_143fd0d9c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_143fd0dd0;
    }
  }
  lVar2 = 0;
LAB_143fd0dd0:
  lVar1 = FUN_143fb5a3c();
  return lVar2 == lVar1;
}



// FUNCTION 143fd0de8 FUN_143fd0de8 body=181 status=ok
// SIG undefined FUN_143fd0de8(void)

undefined8 FUN_143fd0de8(undefined8 param_1)

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
  uVar1 = FUN_143fb5a3c();
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = uVar1;
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



// FUNCTION 143fd0e9e FUN_143fd0e9e body=1181 status=ok
// SIG undefined FUN_143fd0e9e(void)

undefined8 * FUN_143fd0e9e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_518 [40];
  undefined ***local_4f0;
  undefined ***local_4e8;
  undefined8 *local_4e0;
  undefined8 local_4d8;
  longlong local_4d0 [2];
  undefined **local_4c0 [5];
  longlong local_498;
  undefined **local_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined4 local_470;
  undefined8 local_46c;
  undefined8 uStack_464;
  undefined8 local_45c;
  undefined8 local_454;
  undefined8 uStack_44c;
  undefined4 local_444;
  undefined8 local_440;
  undefined2 local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined5 uStack_418;
  undefined3 uStack_413;
  undefined5 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined8 local_3dc;
  undefined8 local_3d4;
  undefined8 uStack_3cc;
  undefined4 local_3c4;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a4;
  undefined4 local_39c;
  undefined8 local_390;
  undefined4 local_388;
  undefined8 local_380;
  undefined **local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined4 local_360;
  undefined8 local_35c;
  undefined8 uStack_354;
  undefined8 local_34c;
  undefined8 local_344;
  undefined8 uStack_33c;
  undefined4 local_334;
  undefined8 local_330;
  undefined2 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined5 uStack_308;
  undefined3 uStack_303;
  undefined5 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2cc;
  undefined8 local_2c4;
  undefined8 uStack_2bc;
  undefined4 local_2b4;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined **local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined8 local_24c;
  undefined8 uStack_244;
  undefined4 local_23c;
  undefined4 local_238;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined4 local_224;
  undefined8 local_220;
  undefined2 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined5 uStack_1f8;
  undefined3 uStack_1f3;
  undefined5 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined8 uStack_1ac;
  undefined4 local_1a4;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined **local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined4 local_12c;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined4 local_114;
  undefined8 local_110;
  undefined2 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined5 uStack_e8;
  undefined3 uStack_e3;
  undefined5 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_518;
  local_4d8 = *(undefined8 *)(param_1 + -0x20);
  local_4e0 = param_2;
  FUN_1400021e4(&local_4d8,local_4d0);
  FUN_1475579bc(local_4c0,*(undefined8 *)(param_1 + -0x28),local_4d0);
  if (local_4d0[0] != 0) {
    FUN_1400020a8();
  }
  local_4c0[0] = &PTR_FUN_14b59f6e0;
  local_480 = 0;
  uStack_478 = 0;
  local_470 = 2;
  local_46c = 0;
  uStack_464 = 0;
  local_45c = 0x200000000;
  local_454 = 0;
  uStack_44c = 0;
  local_444 = 0;
  local_440 = 2;
  local_488 = &PTR_FUN_14a46ea60;
  local_438 = 0x404;
  local_3e8 = 0;
  local_3e0 = 0;
  local_430 = 0;
  uStack_428 = 0;
  local_420 = 0;
  uStack_418 = 0;
  uStack_413 = 0;
  uStack_410 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_3dc = 0xffffffff00000080;
  local_3b0 = 0;
  local_3a8 = 0;
  local_3c4 = 0;
  local_3d4 = 0;
  uStack_3cc = 0;
  local_3a4 = 0xffffffff00000080;
  local_39c = 0;
  local_390 = 0;
  local_388 = 0;
  local_380 = 0x10000ea60;
  local_370 = 0;
  uStack_368 = 0;
  local_360 = 2;
  local_34c = 0x200000000;
  local_35c = 0;
  uStack_354 = 0;
  local_344 = 0;
  uStack_33c = 0;
  local_334 = 0;
  local_330 = 2;
  local_378 = &PTR_FUN_14a46ea60;
  local_328 = 0x404;
  local_2d8 = 0;
  local_2d0 = 0;
  uStack_300 = 0;
  local_310 = 0;
  uStack_308 = 0;
  uStack_303 = 0;
  local_320 = 0;
  uStack_318 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2cc = 0xffffffff00000080;
  local_2a0 = 0;
  local_298 = 0;
  local_2b4 = 0;
  local_2c4 = 0;
  uStack_2bc = 0;
  local_294 = 0xffffffff00000080;
  local_28c = 0;
  local_280 = 0;
  local_278 = 0;
  local_270 = 0x10000ea60;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 2;
  local_24c = 0;
  uStack_244 = 0;
  local_23c = 0;
  local_238 = 2;
  local_224 = 0;
  local_234 = 0;
  uStack_22c = 0;
  local_220 = 2;
  local_268 = &PTR_FUN_14a46ea60;
  local_218 = 0x404;
  local_1c8 = 0;
  local_1c0 = 0;
  uStack_1f0 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  uStack_1f3 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1bc = 0xffffffff00000080;
  local_190 = 0;
  local_188 = 0;
  local_1a4 = 0;
  local_1b4 = 0;
  uStack_1ac = 0;
  local_184 = 0xffffffff00000080;
  local_17c = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0x10000ea60;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 2;
  local_12c = 0;
  local_13c = 0;
  uStack_134 = 0;
  local_128 = 2;
  local_114 = 0;
  local_124 = 0;
  uStack_11c = 0;
  local_110 = 2;
  local_158 = &PTR_FUN_14a46ea60;
  local_108 = 0x404;
  local_b8 = 0;
  local_b0 = 0;
  uStack_e0 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_e3 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_80 = 0;
  local_78 = 0;
  local_94 = 0;
  local_a4 = 0;
  uStack_9c = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0x10000ea60;
  local_4f0 = &local_378;
  local_4e8 = &local_268;
  FUN_14753be88(&local_488,param_3 + 0xf8);
  FUN_14753be88(&local_378,param_3 + 0x208);
  FUN_14753be88(&local_268,param_3 + 0x318);
  FUN_14753be88(&local_158,param_3 + 0x428);
  puVar4 = local_4e0;
  bVar1 = *(byte *)(local_4e0 + 0x10);
  puVar5 = (undefined8 *)FUN_14001cc68(0x478,8);
  *puVar4 = puVar5;
  *(byte *)(puVar4 + 0x10) = (bVar1 & 0xfc) + 1;
  FUN_147557926(puVar5,local_4c0);
  *puVar5 = &PTR_FUN_14b59f6e0;
  FUN_147613664(puVar5 + 7,&local_488);
  pppuVar2 = local_4f0;
  FUN_147613664(puVar5 + 0x29,local_4f0);
  pppuVar3 = local_4e8;
  FUN_147613664(puVar5 + 0x4b,local_4e8);
  FUN_147613664(puVar5 + 0x6d,&local_158);
  local_4c0[0] = &PTR_FUN_14b59f6e0;
  FUN_1404dbc70(&local_158);
  FUN_1404dbc70(pppuVar3);
  FUN_1404dbc70(pppuVar2);
  FUN_1404dbc70(&local_488);
  local_4c0[0] = &PTR_FUN_14a47b390;
  if (local_498 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_518) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fd133c FUN_143fd133c body=1345 status=ok
// SIG undefined FUN_143fd133c(void)

void FUN_143fd133c(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  undefined **ppuVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_178 [44];
  undefined1 local_14c [4];
  undefined1 auStack_148 [4];
  undefined1 auStack_144 [4];
  undefined1 auStack_140 [5];
  undefined4 uStack_13b;
  undefined4 uStack_137;
  undefined3 uStack_133;
  undefined1 uStack_130;
  undefined4 uStack_12f;
  undefined3 uStack_12b;
  longlong local_128;
  longlong lStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 local_8b;
  undefined5 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar8 = *(uint *)(param_3 + 0x24);
  if (SBORROW4(0,uVar8)) {
    puVar10 = (uint *)(param_3 + 4);
    if (*(int *)(param_3 + 0x20) == 0) {
      puVar10 = (uint *)(param_3 + 0x10);
    }
    uVar8 = *puVar10;
    uVar12 = (ulonglong)puVar10[1] << 0x20;
  }
  else {
    uVar12 = 0;
  }
  uVar12 = uVar8 | uVar12;
  FUN_1400f0204(param_1 + 0x38,0,uVar12,local_14c);
  FUN_1400f0204(param_1 + 0x148,0,uVar12,auStack_148);
  FUN_1400f0204(param_1 + 600,0,uVar12,auStack_144);
  FUN_1400f0204(param_1 + 0x368,0,uVar12,auStack_140);
  uVar7 = DAT_14cb9e200;
  uStack_13b._3_1_ = (undefined1)_local_14c;
  uStack_137 = (undefined4)((ulonglong)_local_14c >> 8);
  uStack_133 = (undefined3)((ulonglong)_local_14c >> 0x28);
  uStack_130 = (undefined1)_auStack_144;
  uStack_12f = (undefined4)((ulonglong)_auStack_144 >> 8);
  uStack_12b = (undefined3)((ulonglong)_auStack_144 >> 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  local_118 = (undefined4)param_5[0x24];
  local_128 = param_5[0x22];
  lStack_120 = param_5[0x23];
  uStack_114 = (undefined4)*(undefined8 *)((longlong)param_5 + 0x124);
  uStack_110 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x124) >> 0x20);
  uStack_10c = (undefined4)*(undefined8 *)((longlong)param_5 + 300);
  uStack_108 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 300) >> 0x20);
  local_100 = (undefined4)param_5[0x27];
  uStack_fc = *(undefined4 *)((longlong)param_5 + 0x13c);
  uStack_f8 = (undefined4)param_5[0x28];
  uStack_f4 = *(undefined4 *)((longlong)param_5 + 0x144);
  local_f0 = (undefined4)param_5[0x29];
  uStack_ec = *(undefined4 *)((longlong)param_5 + 0x14c);
  uStack_e8 = (undefined4)param_5[0x2a];
  uStack_e4 = *(undefined4 *)((longlong)param_5 + 0x154);
  local_e0 = param_5[0x2b];
  local_d0 = (undefined4)param_5[0x2d];
  local_d8 = param_5[0x2c];
  local_c8 = 0;
  iVar4 = (int)param_5[0x2f];
  lVar9 = param_5[0x2e];
  local_c0 = CONCAT44(local_c0._4_4_,iVar4);
  if (iVar4 == 0) {
    local_c0 = 0;
  }
  else {
    FUN_14753cf4a(&local_c8,iVar4,0);
    FUN_14753cfbd(local_c8,lVar9,iVar4);
  }
  local_b8 = (void *)0x0;
  uVar8 = *(uint *)(param_5 + 0x31);
  pvVar6 = (void *)param_5[0x30];
  local_b0 = CONCAT44(local_b0._4_4_,uVar8);
  if ((longlong)(int)uVar8 == 0) {
    local_b0 = (ulonglong)uVar8;
  }
  else {
    FUN_1456c5740(&local_b8,uVar8,0);
    memcpy(local_b8,pvVar6,(longlong)(int)uVar8 << 3);
  }
  local_a8 = (undefined1)param_5[0x32];
  local_a0 = (void *)0x0;
  uVar8 = *(uint *)(param_5 + 0x34);
  pvVar6 = (void *)param_5[0x33];
  local_98 = CONCAT44(local_98._4_4_,uVar8);
  if ((longlong)(int)uVar8 == 0) {
    local_98 = (ulonglong)uVar8;
  }
  else {
    FUN_1447bda9e(&local_a0,uVar8,0);
    memcpy(local_a0,pvVar6,(longlong)(int)uVar8 << 2);
  }
  uStack_88 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x1ad) >> 0x18);
  uStack_90 = (undefined5)param_5[0x35];
  local_8b = (undefined3)((ulonglong)param_5[0x35] >> 0x28);
  local_40 = local_40 | 3;
  local_80 = &PTR_FUN_14b5a3288;
  uStack_78 = uVar7;
  local_70 = uStack_13b << 8;
  uStack_6c._1_3_ = (undefined3)uStack_137;
  uStack_6c = CONCAT31(uStack_6c._1_3_,(char)((uint)uStack_13b >> 0x18));
  uStack_68._1_3_ = (undefined3)_uStack_133;
  uStack_68 = CONCAT31(uStack_68._1_3_,(char)((uint)uStack_137 >> 0x18));
  uStack_64._1_3_ = (undefined3)uStack_12f;
  uStack_64 = CONCAT31(uStack_64._1_3_,(char)((uint)_uStack_133 >> 0x18));
  uStack_60 = CONCAT31(uStack_12b,uStack_12f._3_1_);
  uStack_5c = CONCAT31(uStack_5c._1_3_,1);
  uStack_58 = uVar5;
  iVar4 = (int)param_5[1];
  *(uint *)(param_5 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar4 + 1U) {
    FUN_140ac5684(param_5,iVar4);
  }
  lVar9 = *param_5;
  lVar13 = (longlong)iVar4 * 0xf0;
  *(undefined4 *)(lVar9 + 0x20 + lVar13) = uStack_108;
  puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar13);
  *puVar1 = CONCAT44(uStack_114,local_118);
  puVar1[1] = CONCAT44(uStack_10c,uStack_110);
  *(longlong *)(lVar9 + lVar13) = local_128;
  ((longlong *)(lVar9 + lVar13))[1] = lStack_120;
  *(longlong *)(lVar9 + 0x48 + lVar13) = local_e0;
  puVar2 = (undefined4 *)(lVar9 + 0x38 + lVar13);
  *puVar2 = local_f0;
  puVar2[1] = uStack_ec;
  puVar2[2] = uStack_e8;
  puVar2[3] = uStack_e4;
  puVar2 = (undefined4 *)(lVar9 + 0x28 + lVar13);
  *puVar2 = local_100;
  puVar2[1] = uStack_fc;
  puVar2[2] = uStack_f8;
  puVar2[3] = uStack_f4;
  *(longlong *)(lVar9 + 0x50 + lVar13) = local_d8;
  *(undefined4 *)(lVar9 + 0x58 + lVar13) = local_d0;
  *(undefined8 *)(lVar9 + 0x60 + lVar13) = 0;
  *(longlong *)(lVar9 + 0x60 + lVar13) = local_c8;
  local_c8 = 0;
  *(undefined4 *)(lVar9 + 0x68 + lVar13) = (undefined4)local_c0;
  *(undefined4 *)(lVar9 + 0x6c + lVar13) = local_c0._4_4_;
  local_c0 = 0;
  *(undefined8 *)(lVar9 + 0x70 + lVar13) = 0;
  *(void **)(lVar9 + 0x70 + lVar13) = local_b8;
  local_b8 = (void *)0x0;
  *(undefined4 *)(lVar9 + 0x78 + lVar13) = (undefined4)local_b0;
  *(undefined4 *)(lVar9 + 0x7c + lVar13) = local_b0._4_4_;
  local_b0 = 0;
  *(undefined1 *)(lVar9 + 0x80 + lVar13) = local_a8;
  *(undefined8 *)(lVar9 + 0x88 + lVar13) = 0;
  *(void **)(lVar9 + 0x88 + lVar13) = local_a0;
  local_a0 = (void *)0x0;
  *(undefined4 *)(lVar9 + 0x90 + lVar13) = (undefined4)local_98;
  *(undefined4 *)(lVar9 + 0x94 + lVar13) = local_98._4_4_;
  local_98 = 0;
  *(ulonglong *)(lVar9 + 0x9d + lVar13) = CONCAT53(uStack_88,local_8b);
  *(ulonglong *)(lVar9 + 0x98 + lVar13) = CONCAT35(local_8b,uStack_90);
  bVar3 = *(byte *)(lVar9 + 0xe8 + lVar13);
  *(byte *)(lVar9 + 0xe8 + lVar13) = bVar3 & 0xfc | 2;
  if ((local_40 & 1) != 0) {
    lVar9 = lVar9 + lVar13;
    *(byte *)(lVar9 + 0xe8) = bVar3 | 3;
    *(byte *)(lVar9 + 0xe8) = *(byte *)(lVar9 + 0xe8) & 0xfd | local_40 & 2;
    *(undefined8 *)(lVar9 + 0xd8) = local_50;
    *(undefined8 *)(lVar9 + 0xe0) = uStack_48;
    *(ulonglong *)(lVar9 + 200) = CONCAT44(uStack_5c,uStack_60);
    *(undefined8 *)(lVar9 + 0xd0) = uStack_58;
    *(int *)(lVar9 + 0xb8) = local_70;
    *(undefined4 *)(lVar9 + 0xbc) = uStack_6c;
    *(undefined4 *)(lVar9 + 0xc0) = uStack_68;
    *(undefined4 *)(lVar9 + 0xc4) = uStack_64;
    *(undefined4 *)(lVar9 + 0xa8) = (undefined4)local_80;
    *(undefined4 *)(lVar9 + 0xac) = local_80._4_4_;
    *(undefined4 *)(lVar9 + 0xb0) = (undefined4)uStack_78;
    *(undefined4 *)(lVar9 + 0xb4) = uStack_78._4_4_;
    local_40 = local_40 & 0xfe;
  }
  if ((local_40 & 1) != 0) {
    ppuVar11 = (undefined **)&local_80;
    if ((local_40 & 2) == 0) {
      ppuVar11 = local_80;
    }
    local_40 = local_40 & 0xfe;
    (**(code **)*ppuVar11)(ppuVar11,0);
    if ((local_40 & 2) == 0) {
      FUN_1400020a8(local_80);
    }
  }
  if (local_a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447bda9c(local_c8,local_c0 & 0xffffffff);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fd187e FUN_143fd187e body=647 status=ok
// SIG undefined FUN_143fd187e(void)

void FUN_143fd187e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 *local_70;
  undefined8 *local_60;
  int local_58;
  undefined1 local_49;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong *)(param_1 + 0x48) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) != 0)) {
    FUN_14050fd64();
    lVar6 = FUN_14050fd64();
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar5 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_60[2] = lVar7;
    *local_60 = &PTR_FUN_14b5a3d50;
    local_60[3] = 0;
    iVar8 = 0;
    if (param_1 != 0) {
      uVar3 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_60 + 3) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar8 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar8 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar8 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar9;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar8 = iVar9;
        }
      }
    }
    *(int *)((longlong)puVar5 + 0x1c) = iVar8;
    puVar5[4] = param_1;
    local_70 = &local_49;
    local_78 = 0;
    local_80 = 0;
    local_88 = 1000;
    FUN_140a1e0be(lVar6 + 0x1e8,&local_48,*(longlong *)(param_1 + 0x48) + 0x10,&local_60);
    plVar1 = local_40;
    if ((undefined8 *)(param_1 + 0x30) != &local_48) {
      *(undefined8 *)(param_1 + 0x30) = local_48;
      local_48 = 0;
      plVar4 = *(longlong **)(param_1 + 0x38);
      if (local_40 != plVar4) {
        local_40 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x38) = plVar1;
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
      }
    }
    plVar1 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_40 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_143fd1a79;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143fd1a79:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fd1b64 FUN_143fd1b64 body=110 status=ok
// SIG undefined FUN_143fd1b64(void)

void FUN_143fd1b64(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    uVar2 = FUN_143fb2b4c();
    plVar3 = (longlong *)FUN_144718840(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x40) + 8);
      puVar4 = &DAT_14c9485f0;
      if (puVar1 != (undefined4 *)0x0) {
        puVar4 = puVar1;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,puVar4);
                    /* WARNING: Could not recover jumptable at 0x000143fd1bc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined8 *)(param_1 + 0x40));
      return;
    }
  }
  return;
}



// FUNCTION 143fd1bd2 FUN_143fd1bd2 body=967 status=ok
// SIG undefined FUN_143fd1bd2(void)

uint * FUN_143fd1bd2(longlong param_1,uint *param_2,longlong *param_3,longlong param_4,
                    longlong param_5,undefined4 param_6,longlong *param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar10 = *param_3;
  if ((lVar10 == 0) || (param_5 == 0)) {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
  }
  else {
    uVar7 = (uint)((ulonglong)lVar10 >> 0x10);
    uVar6 = (uint)lVar10 & 0xffff;
    local_68 = (longlong *)
               FUN_148b6dbe4(param_1 + 0x80,
                             ((uint)lVar10 << 0x10 | uVar6) + (int)((ulonglong)lVar10 >> 0x20) +
                             (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4),param_3);
    plVar5 = (longlong *)FUN_14001cc68(0x50,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14b5a4460;
    local_60 = plVar5 + 2;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    plVar5[2] = 0;
    plVar5[3] = 0;
    *(undefined4 *)(plVar5 + 5) = 0xffffffff;
    plVar5[7] = 0;
    plVar5[8] = 0;
    *(undefined4 *)(plVar5 + 9) = 0;
    local_58 = local_60;
    local_50 = plVar5;
    FUN_148b6e010();
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    iVar4 = (int)local_68[1];
    *(uint *)(local_68 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)local_68 + 0xc) < iVar4 + 1U) {
      FUN_148b6e0b4(local_68,iVar4);
    }
    plVar3 = local_50;
    lVar10 = *local_68;
    lVar9 = (longlong)iVar4 * 0x10;
    local_68 = (longlong *)(lVar10 + lVar9);
    *(longlong **)(lVar10 + lVar9) = local_60;
    *(longlong **)(lVar10 + 8 + lVar9) = plVar5;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_50 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar5 = local_68;
    *(longlong *)(*local_68 + 0x10) = *param_3;
    lVar10 = *local_68;
    if (param_4 == 0) {
      *(undefined4 *)(lVar10 + 0x1c) = 0;
      iVar4 = 0;
    }
    else {
      uVar7 = *(uint *)(param_4 + 0xc);
      *(uint *)(lVar10 + 0x1c) = uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar4 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar4 = *(int *)(lVar9 + 0x10);
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar4 = iVar8;
        }
      }
    }
    *(int *)(lVar10 + 0x20) = iVar4;
    lVar10 = *plVar5;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_5);
    }
    *(longlong *)(lVar10 + 0x28) = param_5;
    *(undefined4 *)(*plVar5 + 0x18) = param_6;
    if ((char)param_7[2] == '\x01') {
      FUN_143fc5c60(*plVar5 + 0x30,param_7);
    }
    FUN_143fd731a(param_1,0,plVar5);
    param_2[1] = 0;
    if (param_1 == 0) {
      *param_2 = 0;
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0xc);
      *param_2 = uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      uVar7 = *(uint *)(lVar10 + 0x10);
      if (*(uint *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar7 = *(uint *)(lVar10 + 0x10);
        bVar11 = uVar7 == 0;
        if (bVar11) {
          *(uint *)(lVar10 + 0x10) = uVar6;
          uVar7 = 0;
        }
        UNLOCK();
        if (bVar11) {
          uVar7 = uVar6;
        }
      }
    }
    param_2[1] = uVar7;
    *(longlong *)(param_2 + 2) = *plVar5;
    lVar10 = plVar5[1];
    *(longlong *)(param_2 + 4) = lVar10;
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
    }
  }
  if ((char)param_7[2] != '\x01') goto LAB_143fd1c64;
  if ((int)param_7[1] == 0) {
LAB_143fd1c54:
    if (*param_7 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_7;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_7,0,0,0x10);
      *(undefined4 *)(param_7 + 1) = 0;
      goto LAB_143fd1c54;
    }
  }
  *(undefined1 *)(param_7 + 2) = 0;
LAB_143fd1c64:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143fd1f9a FUN_143fd1f9a body=97 status=ok
// SIG undefined FUN_143fd1f9a(void)

bool FUN_143fd1f9a(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140aa7b7e(*(undefined8 *)(param_1 + 0x10),&local_28,0);
  iVar1 = (int)uStack_20;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fd1ffc FUN_143fd1ffc body=159 status=ok
// SIG undefined FUN_143fd1ffc(void)

longlong FUN_143fd1ffc(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x90));
  iVar1 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar5 = 0;
    bVar3 = DAT_14c950c29;
    do {
      lVar4 = *(longlong *)(lVar2 + lVar5);
      if ((lVar4 != 0 & bVar3) == 1) {
        FUN_1456cec3c(lVar4);
        bVar3 = DAT_14c950c29;
LAB_143fd2055:
        if (((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) && (*(longlong *)(lVar4 + 0x40) == param_2))
        goto LAB_143fd2081;
      }
      else if (lVar4 != 0) goto LAB_143fd2055;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  lVar4 = 0;
LAB_143fd2081:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x90));
  return lVar4;
}



// FUNCTION 143fd209c FUN_143fd209c body=859 status=ok
// SIG undefined FUN_143fd209c(void)

void FUN_143fd209c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = param_1[4];
  if (lVar2 == 0) {
LAB_143fd20f1:
    lVar2 = 0;
  }
  else {
    if (DAT_14cae9568 == 0) {
      local_70 = &local_50;
      local_50 = FUN_1417de738;
      local_60 = &LAB_145893408;
      local_68 = &LAB_1458cbbd2;
      local_78 = &LAB_147ba21f1;
      local_80 = &LAB_1463e9233;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x1000000c;
      local_a0 = CONCAT44(local_a0._4_4_,8);
      local_a8 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    }
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) != DAT_14cae9568 + 0x30)) goto LAB_143fd20f1;
  }
  lVar1 = FUN_14659f416(param_1);
  if (lVar2 != 0 && lVar1 != 0) {
    FUN_14571086a(lVar1,&local_50,lVar2);
    if (local_50._4_4_ == 0) {
LAB_143fd234b:
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      if ((-1 < (int)(uint)local_50) && ((int)(uint)local_50 < DAT_14c9647dc)) {
        plVar3 = (longlong *)
                 ((ulonglong)(((uint)local_50 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_50 >> 0x10) * 8));
        if ((plVar3 == (longlong *)0x0) ||
           (((int)plVar3[2] != local_50._4_4_ || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0))))
        goto LAB_143fd234b;
        lVar4 = *plVar3;
        if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar4);
        }
      }
    }
    param_1[0x10] = lVar4;
    FUN_145aa30f6(lVar1,&local_50,lVar2);
    if (local_50._4_4_ == 0) {
LAB_143fd2353:
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      if ((-1 < (int)(uint)local_50) && ((int)(uint)local_50 < DAT_14c9647dc)) {
        plVar3 = (longlong *)
                 ((ulonglong)(((uint)local_50 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_50 >> 0x10) * 8));
        if ((plVar3 == (longlong *)0x0) ||
           (((int)plVar3[2] != local_50._4_4_ || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0))))
        goto LAB_143fd2353;
        lVar2 = *plVar3;
        if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar2);
        }
      }
    }
    param_1[0x11] = lVar2;
  }
  if (param_1[0x10] == 0) {
    FUN_1446f470e(&local_30,L"GbxUIEventDispatcher",1);
    local_a0 = 0;
    local_a8 = local_a8 & 0xffffff00;
    lVar2 = FUN_145e3ee61(param_1,local_30,0,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x10] = lVar2;
  }
  lVar2 = param_1[0x11];
  if (lVar2 == 0) {
    FUN_1446f470e(&local_38,L"GbxUITagStateManager",1);
    lVar2 = FUN_148b64f60(param_1,local_38);
    if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
      param_1[0x11] = lVar2;
      if (lVar2 == 0) goto LAB_143fd2318;
    }
    else {
      FUN_1456cec3c(lVar2);
      param_1[0x11] = lVar2;
    }
  }
  local_50 = FUN_140e0dcac;
  local_48 = 0;
  FUN_14659f46c(lVar2 + 0x110,local_40,param_1);
LAB_143fd2318:
  (**(code **)(*param_1 + 0x2c0))(param_1);
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fd23f8 FUN_143fd23f8 body=248 status=ok
// SIG undefined FUN_143fd23f8(void)

void FUN_143fd23f8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0x88) + 0x110,param_1);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x68);
  if ((lVar2 != 0) && (iVar1 = *(int *)(lVar2 + 0x40), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(lVar2 + 0x38);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  lVar2 = *(longlong *)(param_1 + 0x70);
  if ((lVar2 != 0) && (iVar1 = *(int *)(lVar2 + 0x40), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(lVar2 + 0x38);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_143fde740(param_1 + 0x90);
  }
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
  FUN_145a362fc();
  return;
}



// FUNCTION 143fd24fe FUN_143fd24fe body=256 status=ok
// SIG undefined FUN_143fd24fe(void)

void FUN_143fd24fe(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x90);
    plVar1 = plVar7 + *(int *)(param_1 + 0x98);
    do {
      lVar4 = *plVar7;
      if (lVar4 != 0) {
        if ((longlong)*(int *)(lVar4 + 0x50) != 0) {
          if ((longlong)(int)param_2[1] == 0) goto LAB_143fd25e3;
          plVar5 = *(longlong **)(lVar4 + 0x48);
          plVar2 = plVar5 + *(int *)(lVar4 + 0x50);
          do {
            lVar6 = 0;
            while (*(longlong *)(*param_2 + lVar6) != *plVar5) {
              lVar6 = lVar6 + 8;
              if ((longlong)(int)param_2[1] * 8 == lVar6) goto LAB_143fd25e3;
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar2);
        }
        if ((longlong)*(int *)(lVar4 + 0x70) != 0) {
          plVar5 = *(longlong **)(lVar4 + 0x68);
          plVar2 = plVar5 + *(int *)(lVar4 + 0x70);
          do {
            if ((int)param_2[1] != 0) {
              lVar6 = 0;
              do {
                if (*(longlong *)(*param_2 + lVar6) == *plVar5) goto LAB_143fd25e3;
                lVar6 = lVar6 + 8;
              } while ((longlong)(int)param_2[1] << 3 != lVar6);
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar2);
        }
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_143fdd0ca(param_3,iVar3);
        }
        *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar4;
      }
LAB_143fd25e3:
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  return;
}



// FUNCTION 143fd25fe FUN_143fd25fe body=86 status=ok
// SIG undefined FUN_143fd25fe(void)

void FUN_143fd25fe(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *(undefined1 *)(puVar2 + 1) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_FUN_14b466578;
    puVar2[2] = param_2;
    FUN_1409ee7a4(lVar1,puVar2);
    return;
  }
  return;
}



// FUNCTION 143fd2654 FUN_143fd2654 body=86 status=ok
// SIG undefined FUN_143fd2654(void)

void FUN_143fd2654(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *(undefined1 *)(puVar2 + 1) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 2;
    *puVar2 = &PTR_FUN_14b466580;
    puVar2[2] = param_2;
    FUN_1409ee7a4(lVar1,puVar2);
    return;
  }
  return;
}



// FUNCTION 143fd26aa FUN_143fd26aa body=58 status=ok
// SIG undefined FUN_143fd26aa(void)

void FUN_143fd26aa(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_145aa363e();
    FUN_140e0dcac(param_1,&DAT_14caa8558,0);
  }
  *(undefined1 *)(param_1 + 0xa8) = 0;
  return;
}



// FUNCTION 143fd26e4 FUN_143fd26e4 body=39 status=ok
// SIG undefined FUN_143fd26e4(void)

void FUN_143fd26e4(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if ((param_3 == 0) && (param_3 = FUN_148b6506e(), param_3 == 0)) {
    return;
  }
  FUN_148b5bece(param_3);
  return;
}



// FUNCTION 143fd270c FUN_143fd270c body=39 status=ok
// SIG undefined FUN_143fd270c(void)

void FUN_143fd270c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if ((param_3 == 0) && (param_3 = FUN_148b6506e(), param_3 == 0)) {
    return;
  }
  FUN_148b5bece(param_3);
  return;
}



// FUNCTION 143fd2734 FUN_143fd2734 body=5740 status=ok
// SIG undefined FUN_143fd2734(void)

void FUN_143fd2734(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  undefined8 uVar25;
  uint uVar26;
  ulonglong uVar27;
  int iVar28;
  int iVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  undefined8 *puVar33;
  longlong lVar34;
  bool bVar35;
  undefined1 auStack_158 [32];
  uint local_138;
  ulonglong local_130;
  undefined1 local_128;
  longlong *local_120;
  uint *local_118;
  longlong local_110;
  longlong local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  ulonglong uStack_e0;
  undefined1 local_c9;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b0;
  undefined8 local_a8;
  uint uStack_a0;
  uint uStack_9c;
  void *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined8 *local_88;
  undefined8 uStack_80;
  longlong local_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  void *local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((((*(longlong *)(param_1 + 0xa0) == 0) &&
        (lVar16 = *(longlong *)(param_1 + 0xa8), lVar16 != 0)) &&
       (lVar15 = FUN_14595d8a2(), lVar15 != 0)) &&
      ((*(int *)(lVar15 + 0x38) <= *(int *)(lVar16 + 0x38) &&
       (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
        lVar15 + 0x30)))) && (lVar16 = *(longlong *)(param_1 + 0xa8), lVar16 != 0)) {
    lVar15 = FUN_14595d8a2();
    if (((lVar15 == 0) || (*(int *)(lVar16 + 0x38) < *(int *)(lVar15 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) !=
        lVar15 + 0x30)) {
      uVar25 = 0;
    }
    else {
      uVar25 = *(undefined8 *)(param_1 + 0xa8);
    }
    lVar16 = FUN_148b653d6(param_1,uVar25);
    if (*(longlong *)(param_1 + 0xa0) != lVar16) {
      if ((lVar16 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar16);
      }
      *(longlong *)(param_1 + 0xa0) = lVar16;
    }
  }
  puVar17 = (uint *)FUN_145905bd0();
  if (puVar17 == (uint *)0x0) goto LAB_143fd2812;
  local_108 = FUN_14050fd64();
  local_108 = local_108 + 0x1e8;
  puVar19 = puVar17;
  local_110 = param_1;
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    local_70 = *(longlong *)(puVar17 + 0x70);
    local_68 = puVar17[0x72];
    uStack_64 = puVar17[0x73];
    lVar16 = *(longlong *)(puVar17 + 0x72);
    uStack_60 = puVar17[0x74];
    uStack_5c = puVar17[0x75];
    local_58 = (void *)0x0;
    local_50 = puVar17[0x78];
    lVar15 = (longlong)(int)local_50;
    pvVar4 = *(void **)(puVar17 + 0x76);
    local_118 = puVar17;
    if (lVar15 != 0) {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,pvVar4,lVar15 * 2);
      lVar16 = CONCAT44(uStack_64,local_68);
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    puVar19 = local_118;
    if (lVar16 != 0) {
      local_88 = (undefined8 *)0x0;
      uStack_80._0_4_ = 0;
      FUN_1446efa72(&local_88,0,3,0x10);
      puVar33 = local_88;
      uStack_80 = CONCAT44(uStack_80._4_4_,3);
      *local_88 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar15 = DAT_14c758608 + 1;
      lVar16 = DAT_14c758608 + 1;
      if (lVar15 == 0) {
        LOCK();
        UNLOCK();
        lVar15 = DAT_14c758608 + 2;
        lVar16 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar16;
      local_88[2] = lVar15;
      *local_88 = &PTR_FUN_14b5a3ff0;
      local_88[3] = 0;
      iVar28 = 0;
      if (local_110 != 0) {
        uVar13 = *(uint *)(local_110 + 0xc);
        *(uint *)(local_88 + 3) = uVar13;
        if ((int)uVar13 < DAT_14c9647dc) {
          lVar16 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
        }
        else {
          lVar16 = 0;
        }
        iVar28 = *(int *)(lVar16 + 0x10);
        if (*(int *)(lVar16 + 0x10) == 0) {
          LOCK();
          iVar28 = DAT_14c964868 + 1;
          UNLOCK();
          iVar29 = DAT_14c964868 + 1;
          bVar35 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar28;
          if (bVar35) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar29);
          }
          LOCK();
          iVar28 = *(int *)(lVar16 + 0x10);
          bVar35 = iVar28 == 0;
          if (bVar35) {
            *(int *)(lVar16 + 0x10) = iVar29;
            iVar28 = 0;
          }
          UNLOCK();
          if (bVar35) {
            iVar28 = iVar29;
          }
        }
      }
      lVar16 = local_110;
      *(int *)((longlong)puVar33 + 0x1c) = iVar28;
      puVar33[4] = local_110;
      local_70 = *(longlong *)(puVar17 + 0x70);
      local_68 = puVar19[0x72];
      uStack_64 = puVar19[0x73];
      uStack_60 = puVar19[0x74];
      uStack_5c = puVar19[0x75];
      local_58 = (void *)0x0;
      local_50 = puVar17[0x78];
      lVar15 = (longlong)(int)local_50;
      pvVar4 = *(void **)(puVar17 + 0x76);
      if (lVar15 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,pvVar4,lVar15 * 2);
      }
      local_120 = &local_c8;
      local_128 = 0;
      local_130 = local_130 & 0xffffffffffffff00;
      local_138 = 0;
      FUN_140a1e0be(local_108,&local_b0,&local_68,&local_88);
      plVar1 = local_a8;
      if ((longlong *)(lVar16 + 0x58) != &local_b0) {
        *(longlong *)(lVar16 + 0x58) = local_b0;
        local_b0 = 0;
        plVar5 = *(longlong **)(lVar16 + 0x60);
        if (local_a8 != plVar5) {
          local_a8 = (longlong *)0x0;
          *(longlong **)(lVar16 + 0x60) = plVar1;
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
        }
      }
      plVar1 = local_a8;
      puVar19 = local_118;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_a8 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((int)uStack_80 != 0) {
        if (local_88 == (undefined8 *)0x0) goto LAB_143fd2b7c;
        (**(code **)*local_88)(local_88,0);
        FUN_1446efa72(&local_88,0,0,0x10);
        uStack_80 = uStack_80 & 0xffffffff00000000;
      }
      if (local_88 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143fd2b7c:
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  uVar13 = puVar17[0x1a];
  if (uVar13 == 0) {
    uVar30 = 1;
    uVar27 = 0;
    iVar28 = 0;
    uVar12 = 0;
  }
  else {
    puVar18 = *(uint **)(puVar17 + 0x18);
    if (*(uint **)(puVar17 + 0x18) == (uint *)0x0) {
      puVar18 = puVar19 + 0x14;
    }
    uVar12 = *puVar18;
    if (uVar12 == 0) {
      iVar28 = uVar13 + 0x1e;
      if (-1 < (int)(uVar13 - 1)) {
        iVar28 = uVar13 - 1;
      }
      uVar27 = 0;
      uVar23 = (ulonglong)(uint)(iVar28 >> 5);
      if (iVar28 >> 5 < 1) {
        uVar23 = uVar27;
      }
      iVar28 = 0;
      do {
        if (uVar23 == uVar27) goto LAB_143fd2c12;
        iVar28 = iVar28 + 0x20;
        uVar12 = puVar18[uVar27 + 1];
        uVar27 = uVar27 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar27 = 0;
      iVar28 = 0;
    }
    uVar30 = (ulonglong)(-uVar12 & uVar12);
    uVar23 = uVar30 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar12 = (iVar28 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if ((int)uVar13 <= (int)uVar12) {
      uVar12 = uVar13;
    }
  }
  if (uVar12 != uVar13) {
    uVar26 = 0xffffffff;
    do {
      uVar23 = uStack_80;
      lVar16 = *(longlong *)(puVar17 + 0x10);
      if (*(longlong *)(lVar16 + 0x10 + (longlong)(int)uVar12 * 0x38) != 0) {
        local_118 = (uint *)CONCAT44(local_118._4_4_,iVar28);
        lVar15 = (longlong)(int)uStack_80;
        uVar14 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar14);
        local_100 = uVar27;
        if (uStack_80._4_4_ < uVar14) {
          FUN_1406f071e(&local_88,uVar23 & 0xffffffff);
        }
        lVar16 = lVar16 + (longlong)(int)uVar12 * 0x38;
        uVar7 = *(undefined4 *)(lVar16 + 0x14);
        uVar8 = *(undefined4 *)(lVar16 + 0x18);
        uVar9 = *(undefined4 *)(lVar16 + 0x1c);
        puVar33 = local_88 + lVar15 * 4;
        *(undefined4 *)puVar33 = *(undefined4 *)(lVar16 + 0x10);
        *(undefined4 *)((longlong)puVar33 + 4) = uVar7;
        *(undefined4 *)(puVar33 + 1) = uVar8;
        *(undefined4 *)((longlong)puVar33 + 0xc) = uVar9;
        local_88[lVar15 * 4 + 2] = 0;
        iVar28 = *(int *)(lVar16 + 0x28);
        pvVar4 = *(void **)(lVar16 + 0x20);
        *(int *)(local_88 + lVar15 * 4 + 3) = iVar28;
        if ((longlong)iVar28 == 0) {
          *(undefined4 *)((longlong)local_88 + lVar15 * 0x20 + 0x1c) = 0;
        }
        else {
          puVar33 = local_88 + lVar15 * 4 + 2;
          FUN_1446dd670(puVar33,iVar28,0);
          memcpy((void *)*puVar33,pvVar4,(longlong)iVar28 * 2);
        }
        uVar27 = local_100;
        iVar28 = (int)local_118;
      }
      uVar26 = uVar26 & ~(uint)uVar30;
      puVar18 = *(uint **)(puVar17 + 0x18);
      if (*(uint **)(puVar17 + 0x18) == (uint *)0x0) {
        puVar18 = puVar19 + 0x14;
      }
      uVar14 = puVar17[0x1a];
      iVar29 = (int)uVar27;
      lVar16 = (longlong)iVar29;
      uVar12 = puVar18[lVar16] & uVar26;
      if (uVar12 == 0) {
        iVar24 = uVar14 + 0x1e;
        if (-1 < (int)(uVar14 - 1)) {
          iVar24 = uVar14 - 1;
        }
        iVar24 = iVar24 >> 5;
        iVar28 = iVar28 + 0x20;
        iVar20 = iVar24;
        if (iVar24 < iVar29) {
          iVar20 = iVar29;
        }
        if (iVar29 < iVar24) {
          lVar15 = 0;
          do {
            uVar12 = puVar18[lVar16 + lVar15 + 1];
            if (uVar12 != 0) {
              uVar27 = (ulonglong)(iVar29 + (int)lVar15 + 1);
              uVar26 = 0xffffffff;
              goto LAB_143fd2f29;
            }
            iVar28 = iVar28 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar20 - lVar16 != lVar15);
          uVar26 = 0xffffffff;
          iVar29 = iVar20;
        }
        uVar27 = (ulonglong)(iVar29 + 1);
        uVar12 = uVar14;
      }
      else {
LAB_143fd2f29:
        uVar30 = (ulonglong)(-uVar12 & uVar12);
        uVar23 = uVar30 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar12 = (iVar28 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if ((int)uVar14 <= (int)uVar12) {
          uVar12 = uVar14;
        }
      }
    } while (uVar12 != uVar13);
  }
LAB_143fd2c12:
  uVar13 = puVar17[0x4e];
  if ((longlong)(int)uVar13 != 0) {
    lVar16 = *(longlong *)(puVar17 + 0x4c);
    lVar15 = 0;
    do {
      uVar27 = uStack_80;
      lVar32 = (longlong)(int)uStack_80;
      uVar12 = (int)uStack_80 + 1;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar12);
      if (uStack_80._4_4_ < uVar12) {
        FUN_1406f071e(&local_88,uVar27 & 0xffffffff);
      }
      piVar2 = (int *)(lVar16 + 0x20 + lVar15);
      iVar28 = piVar2[-5];
      iVar29 = piVar2[-4];
      iVar24 = piVar2[-3];
      piVar3 = (int *)(local_88 + lVar32 * 4);
      *piVar3 = piVar2[-6];
      piVar3[1] = iVar28;
      piVar3[2] = iVar29;
      piVar3[3] = iVar24;
      local_88[lVar32 * 4 + 2] = 0;
      iVar28 = *piVar2;
      pvVar4 = *(void **)(piVar2 + -2);
      *(int *)(local_88 + lVar32 * 4 + 3) = iVar28;
      if ((longlong)iVar28 == 0) {
        *(undefined4 *)((longlong)local_88 + lVar32 * 0x20 + 0x1c) = 0;
      }
      else {
        puVar33 = local_88 + lVar32 * 4 + 2;
        FUN_1446dd670(puVar33,iVar28,0);
        memcpy((void *)*puVar33,pvVar4,(longlong)iVar28 * 2);
      }
      lVar15 = lVar15 + 0x28;
    } while ((longlong)(int)uVar13 * 0x28 != lVar15);
  }
  local_70 = *(longlong *)(puVar17 + 0x98);
  local_68 = puVar17[0x9a];
  uStack_64 = puVar17[0x9b];
  uStack_60 = puVar17[0x9c];
  uStack_5c = puVar17[0x9d];
  local_58 = (void *)0x0;
  local_50 = puVar17[0xa0];
  lVar16 = (longlong)(int)local_50;
  pvVar4 = *(void **)(puVar17 + 0x9e);
  if (lVar16 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar4,lVar16 * 2);
  }
  uVar27 = uStack_80;
  lVar16 = local_110;
  if (CONCAT44(uStack_64,local_68) != 0) {
    lVar15 = (longlong)(int)uStack_80;
    uVar13 = (int)uStack_80 + 1;
    uStack_80 = CONCAT44(uStack_80._4_4_,uVar13);
    if (uStack_80._4_4_ < uVar13) {
      FUN_1406f071e(&local_88,uVar27 & 0xffffffff);
    }
    pvVar4 = local_58;
    puVar19 = (uint *)(local_88 + lVar15 * 4);
    *puVar19 = local_68;
    puVar19[1] = uStack_64;
    puVar19[2] = uStack_60;
    puVar19[3] = uStack_5c;
    local_88[lVar15 * 4 + 2] = 0;
    lVar32 = (longlong)(int)local_50;
    *(uint *)(local_88 + lVar15 * 4 + 3) = local_50;
    if (lVar32 == 0) {
      *(undefined4 *)((longlong)local_88 + lVar15 * 0x20 + 0x1c) = 0;
    }
    else {
      puVar33 = local_88 + lVar15 * 4 + 2;
      FUN_1446dd670(puVar33,local_50,0);
      memcpy((void *)*puVar33,pvVar4,lVar32 * 2);
    }
  }
  local_b0 = *(longlong *)(puVar17 + 0xa2);
  local_a8 = *(longlong **)(puVar17 + 0xa4);
  uStack_a0 = puVar17[0xa6];
  uStack_9c = puVar17[0xa7];
  local_98 = (void *)0x0;
  local_90 = puVar17[0xaa];
  lVar15 = (longlong)(int)local_90;
  pvVar4 = *(void **)(puVar17 + 0xa8);
  if (lVar15 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,pvVar4,lVar15 * 2);
  }
  uVar27 = uStack_80;
  if (local_a8 != (longlong *)0x0) {
    lVar15 = (longlong)(int)uStack_80;
    uVar13 = (int)uStack_80 + 1;
    uStack_80 = CONCAT44(uStack_80._4_4_,uVar13);
    if (uStack_80._4_4_ < uVar13) {
      FUN_1406f071e(&local_88,uVar27 & 0xffffffff);
    }
    pvVar4 = local_98;
    puVar33 = local_88 + lVar15 * 4;
    *(undefined4 *)puVar33 = (undefined4)local_a8;
    *(undefined4 *)((longlong)puVar33 + 4) = local_a8._4_4_;
    *(uint *)(puVar33 + 1) = uStack_a0;
    *(uint *)((longlong)puVar33 + 0xc) = uStack_9c;
    local_88[lVar15 * 4 + 2] = 0;
    lVar32 = (longlong)(int)local_90;
    *(uint *)(local_88 + lVar15 * 4 + 3) = local_90;
    if (lVar32 == 0) {
      *(undefined4 *)((longlong)local_88 + lVar15 * 0x20 + 0x1c) = 0;
    }
    else {
      puVar33 = local_88 + lVar15 * 4 + 2;
      FUN_1446dd670(puVar33,local_90,0);
      memcpy((void *)*puVar33,pvVar4,lVar32 * 2);
    }
  }
  plVar1 = DAT_14cb9dee8;
  if (DAT_14cb9dee8 != (longlong *)0x0) {
    local_c8 = 0;
    uStack_c0 = (longlong *)0x0;
    cVar11 = (**(code **)(*DAT_14cb9dee8 + 0x300))(DAT_14cb9dee8);
    if (cVar11 == '\0') {
      puVar17 = (uint *)(plVar1 + 0x51);
      iVar28 = (int)plVar1[0x54];
      if (iVar28 == 0) {
        uVar30 = 1;
        uVar27 = 0;
        iVar29 = 0;
        iVar24 = 0;
      }
      else {
        puVar19 = (uint *)plVar1[0x53];
        if ((uint *)plVar1[0x53] == (uint *)0x0) {
          puVar19 = puVar17;
        }
        uVar13 = *puVar19;
        if (uVar13 == 0) {
          iVar29 = iVar28 + 0x1e;
          if (-1 < iVar28 + -1) {
            iVar29 = iVar28 + -1;
          }
          uVar27 = 0;
          uVar23 = (ulonglong)(uint)(iVar29 >> 5);
          if (iVar29 >> 5 < 1) {
            uVar23 = uVar27;
          }
          iVar29 = 0;
          do {
            if (uVar23 == uVar27) goto LAB_143fd335a;
            iVar29 = iVar29 + 0x20;
            uVar13 = puVar19[uVar27 + 1];
            uVar27 = uVar27 + 1;
          } while (uVar13 == 0);
        }
        else {
          uVar27 = 0;
          iVar29 = 0;
        }
        uVar30 = (ulonglong)(-uVar13 & uVar13);
        uVar23 = uVar30 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar24 = (iVar29 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar28 <= iVar24) {
          iVar24 = iVar28;
        }
      }
      if (iVar24 != iVar28) {
        uVar13 = 0xffffffff;
        local_118 = puVar17;
        do {
          lVar16 = *(longlong *)(plVar1[0x4f] + 0x10 + (longlong)iVar24 * 0x20);
          if ((((lVar16 != 0) && (*(byte **)(lVar16 + 0x48) != (byte *)0x0)) &&
              ((**(byte **)(lVar16 + 0x48) & 0x6b) == 3)) &&
             (plVar5 = *(longlong **)(lVar16 + 0x30), plVar5 != (longlong *)0x0)) {
            lVar16 = (**(code **)(*plVar5 + 8))(plVar5);
            lVar15 = FUN_143fb6af6();
            plVar10 = uStack_c0;
            puVar17 = local_118;
            if (((lVar15 != 0) && (*(int *)(lVar15 + 0x38) <= *(int *)(lVar16 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8)
                == lVar15 + 0x30)) {
              lVar16 = (longlong)(int)uStack_c0;
              uVar12 = (int)uStack_c0 + 1;
              uStack_c0 = (longlong *)CONCAT44(uStack_c0._4_4_,uVar12);
              if (uStack_c0._4_4_ < uVar12) {
                FUN_143fde480(&local_c8,(ulonglong)plVar10 & 0xffffffff);
              }
              *(longlong **)(local_c8 + lVar16 * 8) = plVar5;
              puVar17 = local_118;
            }
          }
          uVar13 = uVar13 & ~(uint)uVar30;
          puVar19 = (uint *)plVar1[0x53];
          if ((uint *)plVar1[0x53] == (uint *)0x0) {
            puVar19 = puVar17;
          }
          iVar20 = (int)plVar1[0x54];
          iVar24 = (int)uVar27;
          lVar16 = (longlong)iVar24;
          uVar12 = puVar19[lVar16] & uVar13;
          if (uVar12 == 0) {
            iVar21 = iVar20 + 0x1e;
            if (-1 < iVar20 + -1) {
              iVar21 = iVar20 + -1;
            }
            iVar21 = iVar21 >> 5;
            iVar29 = iVar29 + 0x20;
            iVar22 = iVar21;
            if (iVar21 < iVar24) {
              iVar22 = iVar24;
            }
            if (iVar24 < iVar21) {
              lVar15 = 0;
              do {
                uVar12 = puVar19[lVar16 + lVar15 + 1];
                if (uVar12 != 0) {
                  uVar27 = (ulonglong)(iVar24 + (int)lVar15 + 1);
                  uVar13 = 0xffffffff;
                  goto LAB_143fd3b41;
                }
                iVar29 = iVar29 + 0x20;
                lVar15 = lVar15 + 1;
              } while (iVar22 - lVar16 != lVar15);
              uVar13 = 0xffffffff;
              iVar24 = iVar22;
            }
            uVar27 = (ulonglong)(iVar24 + 1);
            puVar17 = local_118;
            iVar24 = iVar20;
          }
          else {
LAB_143fd3b41:
            uVar30 = (ulonglong)(-uVar12 & uVar12);
            uVar23 = uVar30 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar24 = (iVar29 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if (iVar20 <= iVar24) {
              iVar24 = iVar20;
            }
          }
        } while (iVar24 != iVar28);
      }
    }
    else {
      puVar17 = (uint *)(plVar1 + 0x3b);
      iVar28 = (int)plVar1[0x3e];
      if (iVar28 == 0) {
        uVar30 = 1;
        uVar27 = 0;
        iVar29 = 0;
        iVar24 = 0;
      }
      else {
        puVar19 = (uint *)plVar1[0x3d];
        if ((uint *)plVar1[0x3d] == (uint *)0x0) {
          puVar19 = puVar17;
        }
        uVar13 = *puVar19;
        if (uVar13 == 0) {
          iVar29 = iVar28 + 0x1e;
          if (-1 < iVar28 + -1) {
            iVar29 = iVar28 + -1;
          }
          uVar27 = 0;
          uVar23 = (ulonglong)(uint)(iVar29 >> 5);
          if (iVar29 >> 5 < 1) {
            uVar23 = uVar27;
          }
          iVar29 = 0;
          do {
            if (uVar23 == uVar27) goto LAB_143fd335a;
            iVar29 = iVar29 + 0x20;
            uVar13 = puVar19[uVar27 + 1];
            uVar27 = uVar27 + 1;
          } while (uVar13 == 0);
        }
        else {
          uVar27 = 0;
          iVar29 = 0;
        }
        uVar30 = (ulonglong)(-uVar13 & uVar13);
        uVar23 = uVar30 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar24 = (iVar29 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar28 <= iVar24) {
          iVar24 = iVar28;
        }
      }
      if (iVar24 != iVar28) {
        uVar13 = 0xffffffff;
        local_118 = puVar17;
        do {
          plVar5 = *(longlong **)(plVar1[0x39] + 0x10 + (longlong)iVar24 * 0x20);
          if (plVar5 != (longlong *)0x0) {
            lVar16 = (**(code **)(*plVar5 + 8))(plVar5);
            lVar15 = FUN_143fb6af6();
            plVar10 = uStack_c0;
            puVar17 = local_118;
            if (((lVar15 != 0) && (*(int *)(lVar15 + 0x38) <= *(int *)(lVar16 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8)
                == lVar15 + 0x30)) {
              lVar16 = (longlong)(int)uStack_c0;
              uVar12 = (int)uStack_c0 + 1;
              uStack_c0 = (longlong *)CONCAT44(uStack_c0._4_4_,uVar12);
              if (uStack_c0._4_4_ < uVar12) {
                FUN_143fde480(&local_c8,(ulonglong)plVar10 & 0xffffffff);
              }
              *(longlong **)(local_c8 + lVar16 * 8) = plVar5;
              puVar17 = local_118;
            }
          }
          uVar13 = uVar13 & ~(uint)uVar30;
          puVar19 = (uint *)plVar1[0x3d];
          if ((uint *)plVar1[0x3d] == (uint *)0x0) {
            puVar19 = puVar17;
          }
          iVar20 = (int)plVar1[0x3e];
          iVar24 = (int)uVar27;
          lVar16 = (longlong)iVar24;
          uVar12 = puVar19[lVar16] & uVar13;
          if (uVar12 == 0) {
            iVar21 = iVar20 + 0x1e;
            if (-1 < iVar20 + -1) {
              iVar21 = iVar20 + -1;
            }
            iVar21 = iVar21 >> 5;
            iVar29 = iVar29 + 0x20;
            iVar22 = iVar21;
            if (iVar21 < iVar24) {
              iVar22 = iVar24;
            }
            if (iVar24 < iVar21) {
              lVar15 = 0;
              do {
                uVar12 = puVar19[lVar16 + lVar15 + 1];
                if (uVar12 != 0) {
                  uVar27 = (ulonglong)(iVar24 + (int)lVar15 + 1);
                  uVar13 = 0xffffffff;
                  goto LAB_143fd32a4;
                }
                iVar29 = iVar29 + 0x20;
                lVar15 = lVar15 + 1;
              } while (iVar22 - lVar16 != lVar15);
              uVar13 = 0xffffffff;
              iVar24 = iVar22;
            }
            uVar27 = (ulonglong)(iVar24 + 1);
            puVar17 = local_118;
            iVar24 = iVar20;
          }
          else {
LAB_143fd32a4:
            uVar30 = (ulonglong)(-uVar12 & uVar12);
            uVar23 = uVar30 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar24 = (iVar29 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if (iVar20 <= iVar24) {
              iVar24 = iVar20;
            }
          }
        } while (iVar24 != iVar28);
      }
    }
LAB_143fd335a:
    lVar15 = local_c8;
    lVar16 = local_110;
    lVar32 = (longlong)(int)uStack_c0;
    if (lVar32 != 0) {
      lVar31 = 0;
      do {
        uVar27 = uStack_80;
        lVar6 = *(longlong *)(lVar15 + lVar31);
        if (*(longlong *)(lVar6 + 0x80) != 0) {
          lVar34 = (longlong)(int)uStack_80;
          uVar13 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar13);
          if (uStack_80._4_4_ < uVar13) {
            FUN_1406f071e(&local_88,uVar27 & 0xffffffff);
          }
          uVar7 = *(undefined4 *)(lVar6 + 0x84);
          uVar8 = *(undefined4 *)(lVar6 + 0x88);
          uVar9 = *(undefined4 *)(lVar6 + 0x8c);
          puVar33 = local_88 + lVar34 * 4;
          *(undefined4 *)puVar33 = *(undefined4 *)(lVar6 + 0x80);
          *(undefined4 *)((longlong)puVar33 + 4) = uVar7;
          *(undefined4 *)(puVar33 + 1) = uVar8;
          *(undefined4 *)((longlong)puVar33 + 0xc) = uVar9;
          local_88[lVar34 * 4 + 2] = 0;
          iVar28 = *(int *)(lVar6 + 0x98);
          pvVar4 = *(void **)(lVar6 + 0x90);
          *(int *)(local_88 + lVar34 * 4 + 3) = iVar28;
          if ((longlong)iVar28 == 0) {
            *(undefined4 *)((longlong)local_88 + lVar34 * 0x20 + 0x1c) = 0;
          }
          else {
            puVar33 = local_88 + lVar34 * 4 + 2;
            FUN_1446dd670(puVar33,iVar28,0);
            memcpy((void *)*puVar33,pvVar4,(longlong)iVar28 * 2);
          }
        }
        lVar31 = lVar31 + 8;
      } while (lVar32 * 8 != lVar31);
    }
    if (local_c8 != 0) {
      FUN_1400020a8(local_c8);
    }
  }
  plVar1 = DAT_14cb9dff8;
  if (DAT_14cb9dff8 != (longlong *)0x0) {
    local_c8 = 0;
    uStack_c0 = (longlong *)0x0;
    cVar11 = (**(code **)(*DAT_14cb9dff8 + 0x300))(DAT_14cb9dff8);
    if (cVar11 == '\0') {
      puVar17 = (uint *)(plVar1 + 0x51);
      iVar28 = (int)plVar1[0x54];
      if (iVar28 == 0) {
        uVar30 = 1;
        uVar27 = 0;
        iVar29 = 0;
        iVar24 = 0;
      }
      else {
        puVar19 = (uint *)plVar1[0x53];
        if ((uint *)plVar1[0x53] == (uint *)0x0) {
          puVar19 = puVar17;
        }
        uVar13 = *puVar19;
        if (uVar13 == 0) {
          iVar29 = iVar28 + 0x1e;
          if (-1 < iVar28 + -1) {
            iVar29 = iVar28 + -1;
          }
          uVar27 = 0;
          uVar23 = (ulonglong)(uint)(iVar29 >> 5);
          if (iVar29 >> 5 < 1) {
            uVar23 = uVar27;
          }
          iVar29 = 0;
          do {
            if (uVar23 == uVar27) goto LAB_143fd3704;
            iVar29 = iVar29 + 0x20;
            uVar13 = puVar19[uVar27 + 1];
            uVar27 = uVar27 + 1;
          } while (uVar13 == 0);
        }
        else {
          uVar27 = 0;
          iVar29 = 0;
        }
        uVar30 = (ulonglong)(-uVar13 & uVar13);
        uVar23 = uVar30 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar24 = (iVar29 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar28 <= iVar24) {
          iVar24 = iVar28;
        }
      }
      if (iVar24 != iVar28) {
        uVar13 = 0xffffffff;
        local_118 = puVar17;
        do {
          lVar16 = *(longlong *)(plVar1[0x4f] + 0x10 + (longlong)iVar24 * 0x20);
          if ((((lVar16 != 0) && (*(byte **)(lVar16 + 0x48) != (byte *)0x0)) &&
              ((**(byte **)(lVar16 + 0x48) & 0x6b) == 3)) &&
             (plVar5 = *(longlong **)(lVar16 + 0x30), plVar5 != (longlong *)0x0)) {
            lVar16 = (**(code **)(*plVar5 + 8))(plVar5);
            lVar15 = FUN_143fb6d80();
            plVar10 = uStack_c0;
            puVar17 = local_118;
            if (((lVar15 != 0) && (*(int *)(lVar15 + 0x38) <= *(int *)(lVar16 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8)
                == lVar15 + 0x30)) {
              lVar16 = (longlong)(int)uStack_c0;
              uVar12 = (int)uStack_c0 + 1;
              uStack_c0 = (longlong *)CONCAT44(uStack_c0._4_4_,uVar12);
              if (uStack_c0._4_4_ < uVar12) {
                FUN_143fde5e0(&local_c8,(ulonglong)plVar10 & 0xffffffff);
              }
              *(longlong **)(local_c8 + lVar16 * 8) = plVar5;
              puVar17 = local_118;
            }
          }
          uVar13 = uVar13 & ~(uint)uVar30;
          puVar19 = (uint *)plVar1[0x53];
          if ((uint *)plVar1[0x53] == (uint *)0x0) {
            puVar19 = puVar17;
          }
          iVar20 = (int)plVar1[0x54];
          iVar24 = (int)uVar27;
          lVar16 = (longlong)iVar24;
          uVar12 = puVar19[lVar16] & uVar13;
          if (uVar12 == 0) {
            iVar21 = iVar20 + 0x1e;
            if (-1 < iVar20 + -1) {
              iVar21 = iVar20 + -1;
            }
            iVar21 = iVar21 >> 5;
            iVar29 = iVar29 + 0x20;
            iVar22 = iVar21;
            if (iVar21 < iVar24) {
              iVar22 = iVar24;
            }
            if (iVar24 < iVar21) {
              lVar15 = 0;
              do {
                uVar12 = puVar19[lVar16 + lVar15 + 1];
                if (uVar12 != 0) {
                  uVar27 = (ulonglong)(iVar24 + (int)lVar15 + 1);
                  uVar13 = 0xffffffff;
                  goto LAB_143fd3cb3;
                }
                iVar29 = iVar29 + 0x20;
                lVar15 = lVar15 + 1;
              } while (iVar22 - lVar16 != lVar15);
              uVar13 = 0xffffffff;
              iVar24 = iVar22;
            }
            uVar27 = (ulonglong)(iVar24 + 1);
            puVar17 = local_118;
            iVar24 = iVar20;
          }
          else {
LAB_143fd3cb3:
            uVar30 = (ulonglong)(-uVar12 & uVar12);
            uVar23 = uVar30 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar24 = (iVar29 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if (iVar20 <= iVar24) {
              iVar24 = iVar20;
            }
          }
        } while (iVar24 != iVar28);
      }
    }
    else {
      puVar17 = (uint *)(plVar1 + 0x3b);
      iVar28 = (int)plVar1[0x3e];
      if (iVar28 == 0) {
        uVar30 = 1;
        uVar27 = 0;
        iVar29 = 0;
        iVar24 = 0;
      }
      else {
        puVar19 = (uint *)plVar1[0x3d];
        if ((uint *)plVar1[0x3d] == (uint *)0x0) {
          puVar19 = puVar17;
        }
        uVar13 = *puVar19;
        if (uVar13 == 0) {
          iVar29 = iVar28 + 0x1e;
          if (-1 < iVar28 + -1) {
            iVar29 = iVar28 + -1;
          }
          uVar27 = 0;
          uVar23 = (ulonglong)(uint)(iVar29 >> 5);
          if (iVar29 >> 5 < 1) {
            uVar23 = uVar27;
          }
          iVar29 = 0;
          do {
            if (uVar23 == uVar27) goto LAB_143fd3704;
            iVar29 = iVar29 + 0x20;
            uVar13 = puVar19[uVar27 + 1];
            uVar27 = uVar27 + 1;
          } while (uVar13 == 0);
        }
        else {
          uVar27 = 0;
          iVar29 = 0;
        }
        uVar30 = (ulonglong)(-uVar13 & uVar13);
        uVar23 = uVar30 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar24 = (iVar29 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar28 <= iVar24) {
          iVar24 = iVar28;
        }
      }
      if (iVar24 != iVar28) {
        uVar13 = 0xffffffff;
        local_118 = puVar17;
        do {
          plVar5 = *(longlong **)(plVar1[0x39] + 0x10 + (longlong)iVar24 * 0x20);
          if (plVar5 != (longlong *)0x0) {
            lVar16 = (**(code **)(*plVar5 + 8))(plVar5);
            lVar15 = FUN_143fb6d80();
            plVar10 = uStack_c0;
            puVar17 = local_118;
            if (((lVar15 != 0) && (*(int *)(lVar15 + 0x38) <= *(int *)(lVar16 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8)
                == lVar15 + 0x30)) {
              lVar16 = (longlong)(int)uStack_c0;
              uVar12 = (int)uStack_c0 + 1;
              uStack_c0 = (longlong *)CONCAT44(uStack_c0._4_4_,uVar12);
              if (uStack_c0._4_4_ < uVar12) {
                FUN_143fde5e0(&local_c8,(ulonglong)plVar10 & 0xffffffff);
              }
              *(longlong **)(local_c8 + lVar16 * 8) = plVar5;
              puVar17 = local_118;
            }
          }
          uVar13 = uVar13 & ~(uint)uVar30;
          puVar19 = (uint *)plVar1[0x3d];
          if ((uint *)plVar1[0x3d] == (uint *)0x0) {
            puVar19 = puVar17;
          }
          iVar20 = (int)plVar1[0x3e];
          iVar24 = (int)uVar27;
          lVar16 = (longlong)iVar24;
          uVar12 = puVar19[lVar16] & uVar13;
          if (uVar12 == 0) {
            iVar21 = iVar20 + 0x1e;
            if (-1 < iVar20 + -1) {
              iVar21 = iVar20 + -1;
            }
            iVar21 = iVar21 >> 5;
            iVar29 = iVar29 + 0x20;
            iVar22 = iVar21;
            if (iVar21 < iVar24) {
              iVar22 = iVar24;
            }
            if (iVar24 < iVar21) {
              lVar15 = 0;
              do {
                uVar12 = puVar19[lVar16 + lVar15 + 1];
                if (uVar12 != 0) {
                  uVar27 = (ulonglong)(iVar24 + (int)lVar15 + 1);
                  uVar13 = 0xffffffff;
                  goto LAB_143fd364e;
                }
                iVar29 = iVar29 + 0x20;
                lVar15 = lVar15 + 1;
              } while (iVar22 - lVar16 != lVar15);
              uVar13 = 0xffffffff;
              iVar24 = iVar22;
            }
            uVar27 = (ulonglong)(iVar24 + 1);
            puVar17 = local_118;
            iVar24 = iVar20;
          }
          else {
LAB_143fd364e:
            uVar30 = (ulonglong)(-uVar12 & uVar12);
            uVar23 = uVar30 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar24 = (iVar29 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if (iVar20 <= iVar24) {
              iVar24 = iVar20;
            }
          }
        } while (iVar24 != iVar28);
      }
    }
LAB_143fd3704:
    lVar15 = local_c8;
    lVar16 = local_110;
    lVar32 = (longlong)(int)uStack_c0;
    if (lVar32 != 0) {
      lVar31 = 0;
      do {
        uVar27 = uStack_80;
        lVar6 = *(longlong *)(lVar15 + lVar31);
        if (*(longlong *)(lVar6 + 0xd8) != 0) {
          lVar34 = (longlong)(int)uStack_80;
          uVar13 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar13);
          if (uStack_80._4_4_ < uVar13) {
            FUN_1406f071e(&local_88,uVar27 & 0xffffffff);
          }
          uVar7 = *(undefined4 *)(lVar6 + 0xdc);
          uVar8 = *(undefined4 *)(lVar6 + 0xe0);
          uVar9 = *(undefined4 *)(lVar6 + 0xe4);
          puVar33 = local_88 + lVar34 * 4;
          *(undefined4 *)puVar33 = *(undefined4 *)(lVar6 + 0xd8);
          *(undefined4 *)((longlong)puVar33 + 4) = uVar7;
          *(undefined4 *)(puVar33 + 1) = uVar8;
          *(undefined4 *)((longlong)puVar33 + 0xc) = uVar9;
          local_88[lVar34 * 4 + 2] = 0;
          iVar28 = *(int *)(lVar6 + 0xf0);
          pvVar4 = *(void **)(lVar6 + 0xe8);
          *(int *)(local_88 + lVar34 * 4 + 3) = iVar28;
          if ((longlong)iVar28 == 0) {
            *(undefined4 *)((longlong)local_88 + lVar34 * 0x20 + 0x1c) = 0;
          }
          else {
            puVar33 = local_88 + lVar34 * 4 + 2;
            FUN_1446dd670(puVar33,iVar28,0);
            memcpy((void *)*puVar33,pvVar4,(longlong)iVar28 * 2);
          }
        }
        lVar31 = lVar31 + 8;
      } while (lVar32 * 8 != lVar31);
    }
    if (local_c8 != 0) {
      FUN_1400020a8(local_c8);
    }
  }
  local_e8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  local_120 = (longlong *)&local_c9;
  local_128 = 0;
  local_130 = local_130 & 0xffffffffffffff00;
  local_138 = 0;
  FUN_1457028c8(local_108,&local_c8,&local_88);
  plVar1 = uStack_c0;
  if ((longlong *)(lVar16 + 0x40) != &local_c8) {
    *(longlong *)(lVar16 + 0x40) = local_c8;
    local_c8 = 0;
    plVar5 = *(longlong **)(lVar16 + 0x48);
    if (uStack_c0 != plVar5) {
      uStack_c0 = (longlong *)0x0;
      *(longlong **)(lVar16 + 0x48) = plVar1;
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
    }
  }
  plVar1 = uStack_c0;
  if (uStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar5 = uStack_c0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*uStack_c0)(uStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((int)uStack_e0 == 0) {
LAB_143fd390c:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    uStack_e0 = uStack_e0 & 0xffffffff00000000;
    goto LAB_143fd390c;
  }
  FUN_1446f470e(&local_f0,L"GbxUIUMGDataAssetRepo",1);
  lVar15 = FUN_148b65490(lVar16,local_f0);
  if ((lVar15 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar15);
  }
  *(longlong *)(lVar16 + 0x50) = lVar15;
  FUN_1446f470e(&local_f8,L"GbxUIEventDispatcher",1);
  local_130 = 0;
  local_138 = local_138 & 0xffffff00;
  lVar15 = FUN_145e3ee61(lVar16,local_f8,0,0);
  if ((lVar15 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar15);
  }
  *(longlong *)(lVar16 + 0x98) = lVar15;
  FUN_148b65558(lVar16);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_140861e20(local_88,uStack_80 & 0xffffffff);
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143fd2812:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fd3da8 FUN_143fd3da8 body=790 status=ok
// SIG undefined FUN_143fd3da8(void)

undefined8 * FUN_143fd3da8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  uint local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar7 = (undefined8 *)FUN_143fcffe6();
  memset(puVar7 + 2,0,200);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14b59f6a0;
  *(undefined4 *)(puVar7 + 0x16) = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = 0;
  puVar7[0x12] = 0;
  *(undefined8 *)((longlong)puVar7 + 0xb4) = 0xffffffff00000080;
  puVar7[0x19] = 0;
  if (puVar7 == (undefined8 *)0x0) goto LAB_143fd4067;
  plVar8 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b5a4140;
  local_78 = plVar8 + 2;
  plVar8[2] = (longlong)&PTR_FUN_14b59f730;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  if (plVar8 == (longlong *)0x0) {
    local_70 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_70 = plVar8;
  }
  if (local_78 == (longlong *)0x0) {
LAB_143fd3f40:
    local_68 = 0;
    iVar6 = 0;
  }
  else {
    lVar9 = (**(code **)(*local_78 + 8))();
    local_64 = 0;
    if (lVar9 == 0) goto LAB_143fd3f40;
    local_68 = *(uint *)(lVar9 + 0xc);
    if ((int)local_68 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((local_68 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_68 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar6 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar6 = *(int *)(lVar9 + 0x10);
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(lVar9 + 0x10) = iVar10;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar6 = iVar10;
      }
    }
  }
  local_64 = iVar6;
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
  plVar1 = local_78;
  local_78[1] = *(longlong *)(param_1 + 0x90);
  uVar3 = *(undefined4 *)(param_1 + 0x9c);
  uVar4 = *(undefined4 *)(param_1 + 0xa0);
  uVar5 = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(local_78 + 2) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((longlong)local_78 + 0x14) = uVar3;
  *(undefined4 *)(local_78 + 3) = uVar4;
  *(undefined4 *)((longlong)local_78 + 0x1c) = uVar5;
  plVar8 = local_78 + 4;
  if (plVar8 != (longlong *)(param_1 + 0xa8)) {
    iVar6 = *(int *)(param_1 + 0xb0);
    _Src = *(void **)(param_1 + 0xa8);
    *(int *)(local_78 + 5) = iVar6;
    if (iVar6 == 0 && *(int *)((longlong)local_78 + 0x2c) == 0) {
      *(undefined4 *)((longlong)local_78 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(plVar8,iVar6);
      if (iVar6 != 0) {
        memcpy((void *)*plVar8,_Src,(longlong)iVar6 * 2);
      }
    }
  }
  plVar1[6] = *(longlong *)(param_1 + 0xb8);
  FUN_1401f3db8(puVar7 + 3,&local_78);
  FUN_1403de7ba(puVar7 + 9,param_1 + 0x28);
  FUN_1403de7ba(puVar7 + 0xd,param_1 + 0x48);
  plVar8 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_143fd4067:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar7;
}



// FUNCTION 143fd40c0 FUN_143fd40c0 body=97 status=ok
// SIG undefined FUN_143fd40c0(void)

bool FUN_143fd40c0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140aa7b7e(*(undefined8 *)(param_1 + 0x10),&local_28,0);
  iVar1 = (int)uStack_20;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fd4122 FUN_143fd4122 body=127 status=ok
// SIG undefined FUN_143fd4122(void)

void FUN_143fd4122(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x48);
  if (param_2 == '\0') goto LAB_143fd4137;
  while( true ) {
    iVar3 = iVar3 + 1;
    *(int *)(param_1 + 0x48) = iVar3;
LAB_143fd4137:
    if ((*(int *)(param_1 + 0x40) <= iVar3) ||
       (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + (longlong)iVar3 * 8),
       plVar1 == (longlong *)0x0)) break;
    cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,*(undefined8 *)(param_1 + 0x50));
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1);
      if (cVar2 != '\0') {
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x40);
      }
      (**(code **)(*plVar1 + 0x2a8))(plVar1,*(undefined8 *)(param_1 + 0x50));
      cVar2 = (**(code **)(*plVar1 + 0x2b0))(plVar1);
      if (cVar2 == '\0') {
        return;
      }
    }
    iVar3 = *(int *)(param_1 + 0x48);
  }
  return;
}



// FUNCTION 143fd41a2 FUN_143fd41a2 body=474 status=ok
// SIG undefined FUN_143fd41a2(void)

void FUN_143fd41a2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x18) != 0)) {
    plVar1 = (longlong *)(param_2 + 0x18);
    FUN_143fe17c8(plVar1,&local_60);
    if (local_60 != 0) {
      plVar5 = (longlong *)FUN_143fd437e(param_1,param_2);
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)FUN_148b661a6(param_1);
        AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x70));
        if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(plVar5);
        }
        iVar4 = *(int *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x38) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x3c) < iVar4 + 1U) {
          FUN_148b6d0d6((longlong *)(param_1 + 0x30),iVar4);
        }
        *(longlong **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 8) = plVar5;
        if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(plVar5);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x70));
        if (*plVar1 != 0) {
          FUN_143fe17c8(plVar1,&local_50);
          if (local_50 != 0) {
            plVar5[8] = param_2;
            if (local_48 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_48 + 1) = (int)local_48[1] + 1;
              UNLOCK();
            }
            plVar1 = (longlong *)plVar5[10];
            plVar5[9] = local_50;
            plVar5[10] = (longlong)local_48;
            if (plVar1 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar1 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plVar1)(plVar1);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
          }
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_48 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
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
        }
        (**(code **)(*plVar5 + 0x2a0))(plVar5);
      }
      else {
        (**(code **)(*plVar5 + 0x2a0))(plVar5);
      }
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fd437e FUN_143fd437e body=150 status=ok
// SIG undefined FUN_143fd437e(void)

longlong FUN_143fd437e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x70));
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar5 = 0;
    bVar3 = DAT_14c950c29;
    do {
      lVar4 = *(longlong *)(lVar2 + lVar5);
      if ((lVar4 != 0 & bVar3) == 1) {
        FUN_1456cec3c(lVar4);
        bVar3 = DAT_14c950c29;
LAB_143fd43ce:
        if (((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) && (*(longlong *)(lVar4 + 0x40) == param_2))
        goto LAB_143fd43fa;
      }
      else if (lVar4 != 0) goto LAB_143fd43ce;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  lVar4 = 0;
LAB_143fd43fa:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x70));
  return lVar4;
}



// FUNCTION 143fd4414 FUN_143fd4414 body=160 status=ok
// SIG undefined FUN_143fd4414(void)

void FUN_143fd4414(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x18) != 0)) {
    FUN_143fe17c8(param_2 + 0x18,&local_30);
    if (local_30 != 0) {
      plVar2 = (longlong *)FUN_143fd437e(param_1,param_2);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2a8))(plVar2);
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_28 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fd44b6 FUN_143fd44b6 body=363 status=ok
// SIG undefined FUN_143fd44b6(void)

void FUN_143fd44b6(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (param_2 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x4c);
  if (iVar3 == 0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x48);
  if ((int)uVar2 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar2) {
    return;
  }
  plVar4 = (longlong *)
           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  if ((int)plVar4[2] != iVar3) {
    return;
  }
  if ((*(uint *)(plVar4 + 1) & 0x10200000) != 0 || param_3 != '\0') {
    return;
  }
  if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
    lVar5 = *plVar4;
  }
  else {
    lVar5 = 0;
  }
  if ((((*(int *)(lVar5 + 0x48) < *(int *)(lVar5 + 0x40)) &&
       (plVar4 = *(longlong **)(*(longlong *)(lVar5 + 0x38) + (longlong)*(int *)(lVar5 + 0x48) * 8),
       plVar4 != (longlong *)0x0)) && ((char)plVar4[0x13] == '\x01')) &&
     ((longlong)(int)plVar4[7] != 0)) {
    if ((longlong)*(int *)(param_2 + 0x50) != 0) {
      plVar6 = *(longlong **)(param_2 + 0x48);
      plVar1 = plVar6 + *(int *)(param_2 + 0x50);
      do {
        lVar7 = 0;
        while (*(longlong *)(plVar4[6] + lVar7) != *plVar6) {
          lVar7 = lVar7 + 8;
          if ((longlong)(int)plVar4[7] * 8 == lVar7) goto LAB_143fd45bd;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
    (**(code **)(*plVar4 + 0x2c8))(plVar4,*(undefined8 *)(lVar5 + 0x50));
    FUN_143fd4122(lVar5,1);
    iVar3 = *(int *)(param_1 + 0x4c);
LAB_143fd45bd:
    if (iVar3 != 0) goto LAB_143fd45c1;
  }
  else {
LAB_143fd45c1:
    uVar2 = *(uint *)(param_1 + 0x48);
    lVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143fd45fe;
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       (((int)plVar4[2] == iVar3 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
      lVar5 = *plVar4;
      goto LAB_143fd45fe;
    }
  }
  lVar5 = 0;
LAB_143fd45fe:
  if (*(int *)(lVar5 + 0x40) <= *(int *)(lVar5 + 0x48)) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 143fd4682 FUN_143fd4682 body=405 status=ok
// SIG undefined FUN_143fd4682(void)

undefined8 FUN_143fd4682(longlong param_1,longlong *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((param_2 == (longlong *)0x0) || (lVar6 = FUN_148b65b82(param_2), lVar6 == 0)) ||
      (*(char *)(param_1 + 0x28) != *(char *)(param_3 + 8))) ||
     ((*(char *)(param_1 + 0x29) == '\x01' &&
      (iVar4 = (**(code **)(*param_2 + 0x328))(param_2), iVar4 != 0)))) {
LAB_143fd469f:
    uVar7 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x78) != 0) {
      local_40 = param_1 + 0x58;
      local_38 = 0;
      local_30 = 0;
      cVar3 = FUN_14008db60(&local_40,lVar6 + 0x48);
      uVar7 = 1;
      if (cVar3 != '\0') goto LAB_143fd46a1;
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      bVar9 = true;
      FUN_141090858();
      local_48 = *(longlong *)(param_1 + 0x40);
      if (local_48 == 0) {
        local_58 = 0;
        uStack_50 = 0;
        if ((int)local_38 != 0) {
          uStack_50._0_4_ = 0;
          goto LAB_143fd47e2;
        }
      }
      else {
        FUN_1400021e4(&local_48,&local_58);
        if ((int)local_38 == (int)uStack_50) {
          bVar9 = true;
          if (1 < (int)uStack_50) {
            lVar6 = 0;
            while( true ) {
              uVar1 = *(ushort *)(local_40 + lVar6);
              uVar5 = (uint)uVar1;
              uVar2 = *(ushort *)(local_58 + lVar6);
              uVar8 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_143fd47a5;
                }
                iVar4 = uVar5 - uVar8;
                goto LAB_143fd47eb;
              }
              if (uVar1 == 0) break;
LAB_143fd47a5:
              lVar6 = lVar6 + 2;
            }
            iVar4 = 0;
LAB_143fd47eb:
            bVar9 = iVar4 == 0;
          }
        }
        else {
LAB_143fd47e2:
          bVar9 = (int)local_38 + (int)uStack_50 == 1;
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (!bVar9) goto LAB_143fd469f;
    }
    uVar7 = 1;
  }
LAB_143fd46a1:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 143fd4818 FUN_143fd4818 body=65 status=ok
// SIG undefined FUN_143fd4818(void)

void FUN_143fd4818(longlong param_1,longlong param_2)

{
  FUN_148b65030(param_2,*(undefined8 *)(param_1 + 0x28),param_2);
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0xa0) = param_2;
  return;
}



// FUNCTION 143fd485a FUN_143fd485a body=121 status=ok
// SIG undefined FUN_143fd485a(void)

ulonglong FUN_143fd485a(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (param_2 != 0) {
    lVar2 = FUN_148b65b82(param_2);
    if ((lVar2 != 0) && (*(int *)(param_1 + 0x70) != 0)) {
      local_30[0] = param_1 + 0x50;
      local_30[1] = 0;
      local_20 = 0;
      uVar1 = FUN_14008db60(local_30,lVar2 + 0x48);
      uVar3 = (ulonglong)uVar1;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fd48d4 FUN_143fd48d4 body=342 status=ok
// SIG undefined FUN_143fd48d4(void)

void FUN_143fd48d4(longlong param_1,longlong param_2)

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
  undefined1 **local_40;
  undefined1 *local_38;
  code *local_30;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x78) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x78) + 0x80), lVar1 != 0)) {
    if (DAT_14cb5e538 == 0) {
      local_40 = &local_20;
      local_20 = &LAB_1417c5d06;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1417ad04a;
      local_48 = &LAB_1486a7af7;
      local_50 = &LAB_1464e1631;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
    }
    if (((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) == DAT_14cb5e538 + 0x30)) &&
       ((*(longlong *)(lVar1 + 0x208) != 0 && (*(char *)(lVar1 + 0x211) != '\0')))) {
      FUN_144a13f80(lVar1 + 0x218,&local_20,param_1 + 0xa8,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fd4a2c FUN_143fd4a2c body=318 status=ok
// SIG undefined FUN_143fd4a2c(void)

void FUN_143fd4a2c(undefined8 param_1,longlong param_2)

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
  undefined1 **local_40;
  undefined1 *local_38;
  code *local_30;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x78) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x78) + 0x80), lVar1 != 0)) {
    if (DAT_14cb5e538 == 0) {
      local_40 = &local_20;
      local_20 = &LAB_1417c5d06;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1417ad04a;
      local_48 = &LAB_1486a7af7;
      local_50 = &LAB_1464e1631;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
    }
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) ==
        DAT_14cb5e538 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fd4b8c FUN_143fd4b8c body=661 status=ok
// SIG undefined FUN_143fd4b8c(void)

void FUN_143fd4b8c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_2 != (longlong *)0x0) && (lVar4 = (**(code **)(*param_2 + 0x180))(param_2), lVar4 != 0)
     ) {
    lVar4 = (**(code **)(*param_2 + 0x180))(param_2);
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x458);
    }
    else {
      puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
    }
    uVar3 = *puVar5;
    uVar1 = *(undefined4 *)(param_1 + 0xd0);
    local_c0 = (undefined8 *)0x0;
    local_b8 = 0;
    FUN_1446efa72(&local_c0,0,3,0x10);
    puVar5 = local_c0;
    local_b8 = 3;
    *local_c0 = &PTR_LAB_14a1c8830;
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
    local_c0[2] = lVar6;
    *local_c0 = &PTR_FUN_14b5a4320;
    local_c0[3] = 0;
    iVar7 = 0;
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_c0 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      iVar7 = *(int *)(lVar4 + 0x10);
      if (*(int *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar4 + 0x10);
        bVar9 = iVar7 == 0;
        if (bVar9) {
          *(int *)(lVar4 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar5 + 0x1c) = iVar7;
    puVar5[4] = param_1;
    puVar5[5] = param_2;
    local_a8 = 0;
    local_a0 = 0;
    FUN_14487d8d8(&local_a8,&local_c0);
    local_68 = 1;
    local_c8 = local_b0;
    local_b0[0] = 0;
    local_ac = 0xbf800000;
    FUN_1406f4044(uVar3,param_1 + 0xd8,&local_a8,uVar1);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
    if (local_b8 != 0) {
      if (local_c0 == (undefined8 *)0x0) goto LAB_143fd4d71;
      (**(code **)*local_c0)(local_c0,0);
      FUN_1446efa72(&local_c0,0,0,0x10);
      local_b8 = 0;
    }
    if (local_c0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143fd4d71:
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fd4e22 FUN_143fd4e22 body=832 status=ok
// SIG undefined FUN_143fd4e22(void)

undefined8 * FUN_143fd4e22(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  uint local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar7 = (undefined8 *)FUN_143fcffe6();
  memset(puVar7 + 2,0,200);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14b59f6a0;
  *(undefined4 *)(puVar7 + 0x16) = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = 0;
  puVar7[0x12] = 0;
  *(undefined8 *)((longlong)puVar7 + 0xb4) = 0xffffffff00000080;
  puVar7[0x19] = 0;
  if (puVar7 == (undefined8 *)0x0) goto LAB_143fd510b;
  plVar8 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b5a4390;
  local_78 = plVar8 + 2;
  plVar8[9] = 0;
  plVar8[2] = (longlong)&PTR_FUN_14b59f750;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  *(undefined1 *)(plVar8 + 9) = 1;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  if (plVar8 == (longlong *)0x0) {
    local_70 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_70 = plVar8;
  }
  if (local_78 == (longlong *)0x0) {
LAB_143fd4fca:
    local_68 = 0;
    iVar6 = 0;
  }
  else {
    lVar9 = (**(code **)(*local_78 + 8))();
    local_64 = 0;
    if (lVar9 == 0) goto LAB_143fd4fca;
    local_68 = *(uint *)(lVar9 + 0xc);
    if ((int)local_68 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((local_68 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_68 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar6 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar6 = *(int *)(lVar9 + 0x10);
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(lVar9 + 0x10) = iVar10;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar6 = iVar10;
      }
    }
  }
  local_64 = iVar6;
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
  plVar1 = local_78;
  local_78[1] = *(longlong *)(param_1 + 0x90);
  uVar3 = *(undefined4 *)(param_1 + 0x9c);
  uVar4 = *(undefined4 *)(param_1 + 0xa0);
  uVar5 = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(local_78 + 2) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((longlong)local_78 + 0x14) = uVar3;
  *(undefined4 *)(local_78 + 3) = uVar4;
  *(undefined4 *)((longlong)local_78 + 0x1c) = uVar5;
  plVar8 = local_78 + 4;
  if (plVar8 != (longlong *)(param_1 + 0xa8)) {
    iVar6 = *(int *)(param_1 + 0xb0);
    _Src = *(void **)(param_1 + 0xa8);
    *(int *)(local_78 + 5) = iVar6;
    if (iVar6 == 0 && *(int *)((longlong)local_78 + 0x2c) == 0) {
      *(undefined4 *)((longlong)local_78 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(plVar8,iVar6);
      if (iVar6 != 0) {
        memcpy((void *)*plVar8,_Src,(longlong)iVar6 * 2);
      }
    }
  }
  plVar1[6] = *(longlong *)(param_1 + 0xb8);
  FUN_143fc590a(plVar1 + 8,param_1 + 200);
  *(undefined1 *)(plVar1 + 7) = *(undefined1 *)(param_1 + 0xc0);
  FUN_1401f3db8(puVar7 + 3,&local_78);
  FUN_1403de7ba(puVar7 + 9,param_1 + 0x28);
  FUN_1403de7ba(puVar7 + 0xd,param_1 + 0x48);
  plVar8 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_143fd510b:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar7;
}



// FUNCTION 143fd5164 FUN_143fd5164 body=2999 status=ok
// SIG undefined FUN_143fd5164(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fd5164(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 auStack_168 [32];
  wchar_t *local_148;
  code **local_140;
  undefined8 local_138;
  wchar_t *local_130;
  wchar_t *local_128;
  code *local_120;
  undefined1 *local_118;
  code **local_110;
  code *local_108;
  code *local_100;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  longlong *local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined1 local_98 [8];
  code *local_90;
  code *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (((*(longlong *)(param_1 + 0x48) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) != 0)) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      lVar7 = *(longlong *)(param_1 + 0x20);
    }
    else {
      lVar7 = 0;
    }
    lVar7 = *(longlong *)(lVar7 + 0x20);
    if (lVar7 != 0) {
      if (DAT_14cae9568 == 0) {
        local_110 = (code **)&local_c8;
        local_c8 = FUN_1417de738;
        local_100 = (code *)&LAB_145893408;
        local_108 = (code *)&LAB_1458cbbd2;
        local_118 = &LAB_147ba21f1;
        local_120 = (code *)&LAB_1463e9233;
        local_128 = L"Engine";
        local_130 = (wchar_t *)0x0;
        local_138 = CONCAT44(local_138._4_4_,0x1000000c);
        local_140 = (code **)CONCAT44(local_140._4_4_,8);
        local_148 = (wchar_t *)CONCAT44(local_148._4_4_,0x2b8);
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      }
      lVar7 = *(longlong *)(lVar7 + 0x10);
      if (((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
           == DAT_14cae9568 + 0x30)) && (lVar7 = FUN_145a1001a(), lVar7 != 0)) {
        *(undefined1 *)(param_1 + 0x58) = 0;
        local_78 = 0;
        local_68 = &PTR_LAB_14b5a43b0;
        local_88[0] = FUN_143fe1d58;
        lVar14 = *(longlong *)(param_1 + 0x48);
        local_f0 = *(undefined8 *)(lVar14 + 8);
        local_e8 = *(undefined4 *)(lVar14 + 0x10);
        uStack_e4 = *(undefined4 *)(lVar14 + 0x14);
        uStack_e0 = *(undefined4 *)(lVar14 + 0x18);
        uStack_dc = *(undefined4 *)(lVar14 + 0x1c);
        local_d8 = (void *)0x0;
        local_d0 = *(int *)(lVar14 + 0x28);
        lVar12 = (longlong)local_d0;
        pvVar4 = *(void **)(lVar14 + 0x20);
        local_60 = param_1;
        if (lVar12 == 0) {
          local_cc = 0;
        }
        else {
          FUN_1446dd670(&local_d8,local_d0,0);
          memcpy(local_d8,pvVar4,lVar12 * 2);
          lVar14 = *(longlong *)(param_1 + 0x48);
        }
        local_140 = local_88;
        local_148 = (wchar_t *)&local_f0;
        FUN_148b554d6(lVar7,&local_c8,*(undefined8 *)(lVar14 + 0x30),1);
        plVar10 = local_c0;
        if ((undefined8 *)(param_1 + 0x30) != &local_c8) {
          *(code **)(param_1 + 0x30) = local_c8;
          local_c8 = (code *)0x0;
          plVar9 = *(longlong **)(param_1 + 0x38);
          if (local_c0 != plVar9) {
            local_c0 = (longlong *)0x0;
            *(longlong **)(param_1 + 0x38) = plVar10;
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
          }
        }
        plVar10 = local_c0;
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_c0 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        lVar7 = *(longlong *)(param_1 + 0x48);
        if ((lVar7 != 0) && ((longlong)*(int *)(lVar7 + 0x48) != 0)) {
          puVar15 = *(undefined8 **)(lVar7 + 0x40);
          puVar2 = puVar15 + (longlong)*(int *)(lVar7 + 0x48) * 5;
          do {
            local_c8 = (code *)*puVar15;
            local_c0 = (longlong *)puVar15[1];
            uStack_b8 = *(undefined4 *)(puVar15 + 2);
            uStack_b4 = *(undefined4 *)((longlong)puVar15 + 0x14);
            local_b0 = (void *)0x0;
            local_a8 = *(int *)(puVar15 + 4);
            lVar7 = (longlong)local_a8;
            pvVar4 = (void *)puVar15[3];
            if (lVar7 == 0) {
              iVar13 = (int)((ulonglong)local_c8 >> 0x20);
              local_a4 = 0;
            }
            else {
              FUN_1446dd670(&local_b0,local_a8,0);
              memcpy(local_b0,pvVar4,lVar7 * 2);
              iVar13 = local_c8._4_4_;
            }
            if ((iVar13 == 0) || ((int)(uint)local_c8 < 0)) {
LAB_143fd5601:
              lVar7 = 0;
            }
            else {
              lVar7 = 0;
              if ((int)(uint)local_c8 < DAT_14c9647dc) {
                plVar10 = (longlong *)
                          ((ulonglong)(((uint)local_c8 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_c8 >> 0x10) * 8));
                if (((plVar10 == (longlong *)0x0) || ((int)plVar10[2] != iVar13)) ||
                   ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) goto LAB_143fd5601;
                lVar7 = *plVar10;
              }
            }
            if ((lVar7 == 0) && (local_c0 != (longlong *)0x0)) {
              lVar7 = FUN_140007850(&local_c0);
              cVar5 = (*(code *)PTR_FUN_14c758760)();
              if ((lVar7 == 0) || (cVar5 == '\0')) {
                if (lVar7 != 0) {
                  uVar3 = *(uint *)(lVar7 + 0xc);
                  local_c8 = (code *)CONCAT44(local_c8._4_4_,uVar3);
                  if (DAT_14c9647dc <= (int)uVar3) goto LAB_143fd55eb;
                  lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                  goto LAB_143fd5566;
                }
                local_c8 = (code *)0x0;
              }
              else {
                uVar3 = *(uint *)(lVar7 + 0xc);
                if ((int)uVar3 < DAT_14c9647dc) {
                  if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8) + 8 +
                                (ulonglong)(uVar3 & 0xffff) * 0x18) & 0x8400000) == 0) {
                    local_c8 = (code *)CONCAT44(local_c8._4_4_,uVar3);
                    lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
LAB_143fd5566:
                    iVar13 = *(int *)(lVar14 + 0x10);
                    if (*(int *)(lVar14 + 0x10) == 0) {
                      LOCK();
                      iVar6 = DAT_14c964868 + 1;
                      UNLOCK();
                      iVar13 = DAT_14c964868 + 1;
                      bVar16 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar6;
                      if (bVar16) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,iVar13);
                      }
                      LOCK();
                      iVar6 = *(int *)(lVar14 + 0x10);
                      bVar16 = iVar6 == 0;
                      if (bVar16) {
                        *(int *)(lVar14 + 0x10) = iVar13;
                        iVar6 = 0;
                      }
                      UNLOCK();
                      if (!bVar16) {
                        iVar13 = iVar6;
                      }
                    }
                    local_c8 = (code *)CONCAT44(iVar13,(uint)local_c8);
                  }
                }
                else if ((_DAT_00000008 & 0x8400000) == 0) {
                  local_c8 = (code *)CONCAT44(local_c8._4_4_,uVar3);
LAB_143fd55eb:
                  lVar14 = 0;
                  goto LAB_143fd5566;
                }
                if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) goto LAB_143fd5595;
              }
            }
            else if (lVar7 != 0) {
LAB_143fd5595:
              if (DAT_14c949118 == 0) {
                local_a0 = FUN_140631fbe;
                if (DAT_14c963f04 == '\0') {
                  uVar8 = FUN_140011aa6();
                  lVar14 = FUN_140011c0e(uVar8,0x250,8);
                }
                else {
                  lVar14 = FUN_14001cc68(0x250,8);
                }
                DAT_14c949118 = lVar14;
                FUN_1446f470e(local_98,L"Class",1);
                local_110 = &local_a0;
                local_118 = &LAB_146891e90;
                local_120 = (code *)&LAB_146273097;
                local_130 = L"Engine";
                local_128 = (wchar_t *)CONCAT44(local_128._4_4_,199);
                local_138 = 0x20;
                local_140 = (code **)CONCAT44(local_140._4_4_,0x10000000);
                local_148._0_4_ = 8;
                FUN_14574b4b2(lVar14);
                DAT_14c949118 = lVar14;
                if (DAT_14c951858 == 0) {
                  local_90 = FUN_1449e2820;
                  local_100 = FUN_14081d0ea;
                  local_108 = FUN_14081d0ea;
                  local_110 = &local_90;
                  local_118 = &LAB_1468c5283;
                  local_120 = FUN_142809da0;
                  local_128 = L"Engine";
                  local_130 = (wchar_t *)0x400000000;
                  local_138 = CONCAT44(local_138._4_4_,0x10000000);
                  local_140 = (code **)CONCAT44(local_140._4_4_,8);
                  local_148._0_4_ = 0x50;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                }
                lVar12 = DAT_14c951858;
                lVar14 = DAT_14c949118;
                uVar8 = FUN_1449e2fb2();
                local_148 = L"Class";
                FUN_14574b446(uVar8,lVar14,lVar12,L"/Script/CoreUObject");
              }
              if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38))
                   && (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
                  (lVar14 = FUN_1459d8532(), lVar14 != 0)) &&
                 ((*(int *)(lVar14 + 0x38) <= *(int *)(lVar7 + 0x38) &&
                  (*(longlong *)
                    (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
                   lVar14 + 0x30)))) {
                if ((local_c8._4_4_ == 0) || ((int)(uint)local_c8 < 0)) {
LAB_143fd5851:
                  plVar10 = (longlong *)0x0;
                }
                else {
                  plVar10 = (longlong *)0x0;
                  if ((int)(uint)local_c8 < DAT_14c9647dc) {
                    puVar11 = (undefined8 *)
                              ((ulonglong)(((uint)local_c8 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_c8 >> 0x10) * 8)
                              );
                    if (((puVar11 == (undefined8 *)0x0) || (*(int *)(puVar11 + 2) != local_c8._4_4_)
                        ) || ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) goto LAB_143fd5851;
                    plVar10 = (longlong *)*puVar11;
                  }
                }
                if ((plVar10 == (longlong *)0x0) && (local_c0 != (longlong *)0x0)) {
                  plVar10 = (longlong *)FUN_140007850(&local_c0);
                  cVar5 = (*(code *)PTR_FUN_14c758760)();
                  if ((plVar10 == (longlong *)0x0) || (cVar5 == '\0')) {
                    if (plVar10 != (longlong *)0x0) {
                      uVar3 = *(uint *)((longlong)plVar10 + 0xc);
                      local_c8 = (code *)CONCAT44(local_c8._4_4_,uVar3);
                      if (DAT_14c9647dc <= (int)uVar3) goto LAB_143fd583b;
                      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                      goto LAB_143fd5788;
                    }
                    local_c8 = (code *)0x0;
                  }
                  else {
                    uVar3 = *(uint *)((longlong)plVar10 + 0xc);
                    if ((int)uVar3 < DAT_14c9647dc) {
                      if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8) +
                                     8 + (ulonglong)(uVar3 & 0xffff) * 0x18) & 0x8400000) == 0) {
                        local_c8 = (code *)CONCAT44(local_c8._4_4_,uVar3);
                        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
LAB_143fd5788:
                        iVar13 = *(int *)(lVar7 + 0x10);
                        if (*(int *)(lVar7 + 0x10) == 0) {
                          LOCK();
                          iVar6 = DAT_14c964868 + 1;
                          UNLOCK();
                          iVar13 = DAT_14c964868 + 1;
                          bVar16 = DAT_14c964868 < 1000;
                          DAT_14c964868 = iVar6;
                          if (bVar16) {
                            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                          0x23d,
                                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                          ,iVar13);
                          }
                          LOCK();
                          iVar6 = *(int *)(lVar7 + 0x10);
                          bVar16 = iVar6 == 0;
                          if (bVar16) {
                            *(int *)(lVar7 + 0x10) = iVar13;
                            iVar6 = 0;
                          }
                          UNLOCK();
                          if (!bVar16) {
                            iVar13 = iVar6;
                          }
                        }
                        local_c8 = (code *)CONCAT44(iVar13,(uint)local_c8);
                      }
                    }
                    else if ((_DAT_00000008 & 0x8400000) == 0) {
                      local_c8 = (code *)CONCAT44(local_c8._4_4_,uVar3);
LAB_143fd583b:
                      lVar7 = 0;
                      goto LAB_143fd5788;
                    }
                    if ((*(uint *)(plVar10 + 1) >> 0x1e & 1) == 0) goto LAB_143fd57bb;
                  }
LAB_143fd57e6:
                  plVar10 = (longlong *)0x0;
                }
                else {
                  if (plVar10 == (longlong *)0x0) goto LAB_143fd57e6;
LAB_143fd57bb:
                  if (DAT_14c949118 == 0) {
                    local_a0 = FUN_140631fbe;
                    if (DAT_14c963f04 == '\0') {
                      uVar8 = FUN_140011aa6();
                      lVar7 = FUN_140011c0e(uVar8,0x250,8);
                    }
                    else {
                      lVar7 = FUN_14001cc68(0x250,8);
                    }
                    DAT_14c949118 = lVar7;
                    FUN_1446f470e(local_98,L"Class",1);
                    local_110 = &local_a0;
                    local_118 = &LAB_146891e90;
                    local_120 = (code *)&LAB_146273097;
                    local_130 = L"Engine";
                    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,199);
                    local_138 = 0x20;
                    local_140 = (code **)CONCAT44(local_140._4_4_,0x10000000);
                    local_148._0_4_ = 8;
                    FUN_14574b4b2(lVar7);
                    DAT_14c949118 = lVar7;
                    if (DAT_14c951858 == 0) {
                      local_90 = FUN_1449e2820;
                      local_100 = FUN_14081d0ea;
                      local_108 = FUN_14081d0ea;
                      local_110 = &local_90;
                      local_118 = &LAB_1468c5283;
                      local_120 = FUN_142809da0;
                      local_128 = L"Engine";
                      local_130 = (wchar_t *)0x400000000;
                      local_138 = CONCAT44(local_138._4_4_,0x10000000);
                      local_140 = (code **)CONCAT44(local_140._4_4_,8);
                      local_148._0_4_ = 0x50;
                      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288)
                      ;
                    }
                    lVar14 = DAT_14c951858;
                    lVar7 = DAT_14c949118;
                    uVar8 = FUN_1449e2fb2();
                    local_148 = L"Class";
                    FUN_14574b446(uVar8,lVar7,lVar14,L"/Script/CoreUObject");
                  }
                  if ((((*(int *)(plVar10[2] + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(plVar10[2] + 0x30) +
                         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
                      (lVar7 = FUN_1459d8532(), lVar7 == 0)) ||
                     (((int)plVar10[7] < *(int *)(lVar7 + 0x38) ||
                      (*(longlong *)(plVar10[6] + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
                       lVar7 + 0x30)))) goto LAB_143fd57e6;
                }
                plVar9 = (longlong *)plVar10[0x22];
                if (plVar9 == (longlong *)0x0) {
                  (**(code **)(*plVar10 + 1000))(plVar10);
                  plVar9 = (longlong *)plVar10[0x22];
                  if (plVar9 == (longlong *)0x0) goto LAB_143fd55c0;
                }
                (**(code **)(*plVar9 + 0x2a0))(plVar9,*(undefined8 *)(param_1 + 0x48));
              }
            }
LAB_143fd55c0:
            if (local_b0 != (void *)0x0) {
              FUN_1400020a8();
            }
            puVar15 = puVar15 + 5;
          } while (puVar15 != puVar2);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fd5d1c FUN_143fd5d1c body=184 status=ok
// SIG undefined FUN_143fd5d1c(void)

void FUN_143fd5d1c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_1458995bc();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      *(longlong **)(param_1 + 0x28) = param_2;
      if (*(longlong *)(param_1 + 0x40) != 0) {
        puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x40) + 8);
        puVar3 = &DAT_14c9485f0;
        if (puVar1 != (undefined4 *)0x0) {
          puVar3 = puVar1;
        }
        FUN_1447a97f4(local_40,puVar3);
        (**(code **)(*param_2 + 0x4e8))(param_2,local_40);
      }
      goto LAB_143fd5d41;
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
LAB_143fd5d41:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fd5dd6 FUN_143fd5dd6 body=2798 status=ok
// SIG undefined FUN_143fd5dd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fd5dd6(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *_Src;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  wchar_t *local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  void *local_70;
  int local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    if ((*(longlong *)(param_1 + 0x30) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x30) + 0x10) == '\0')) {
      *(undefined1 *)(param_1 + 0x58) = 1;
      FUN_140886972();
      *(undefined8 *)(param_1 + 0x30) = 0;
      plVar10 = *(longlong **)(param_1 + 0x38);
      if (plVar10 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x38) = 0;
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
    }
  }
  else {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      lVar7 = *(longlong *)(param_1 + 0x20);
    }
    else {
      lVar7 = 0;
    }
    lVar7 = *(longlong *)(lVar7 + 0x20);
    if (lVar7 == 0) goto LAB_143fd673a;
    if (DAT_14cae9568 == 0) {
      local_a0 = (code **)&local_88;
      local_88 = FUN_1417de738;
      local_90 = (code *)&LAB_145893408;
      local_98 = (code *)&LAB_1458cbbd2;
      local_a8 = &LAB_147ba21f1;
      local_b0 = (code *)&LAB_1463e9233;
      local_b8 = L"Engine";
      local_c0 = (wchar_t *)0x0;
      local_c8 = CONCAT44(local_c8._4_4_,0x1000000c);
      local_d0 = 8;
      local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,0x2b8);
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    }
    lVar7 = *(longlong *)(lVar7 + 0x10);
    iVar12 = *(int *)(DAT_14cae9568 + 0x38);
    if (((*(int *)(lVar7 + 0x38) < iVar12) ||
        (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar12 * 8) != DAT_14cae9568 + 0x30))
       || (*(longlong *)(param_1 + 0x48) == 0)) goto LAB_143fd673a;
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      lVar7 = *(longlong *)(param_1 + 0x20);
    }
    else {
      lVar7 = 0;
    }
    lVar7 = *(longlong *)(lVar7 + 0x20);
    if (((lVar7 == 0) || (*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar12)) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar12 * 8) !=
        DAT_14cae9568 + 0x30)) {
      lVar7 = 0;
    }
    lVar7 = FUN_145a1001a(lVar7);
    if (lVar7 != 0) {
      lVar13 = FUN_148b6643e(lVar7,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x30));
      if (lVar13 == 0) {
        lVar13 = *(longlong *)(param_1 + 0x28);
      }
      else {
        lVar8 = FUN_148260e94(lVar13);
        lVar13 = *(longlong *)(param_1 + 0x28);
        if ((lVar13 == lVar8) && (*(char *)(lVar13 + 0x358) != '\x01')) goto LAB_143fd67a1;
      }
      *(undefined1 *)(param_1 + 0x58) = 1;
      FUN_148b66510(lVar7,lVar13);
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        plVar10 = *(longlong **)(param_1 + 0x20);
      }
      else {
        plVar10 = (longlong *)0x0;
      }
      (**(code **)(*plVar10 + 0x2d8))(plVar10,*(undefined8 *)(param_1 + 0x40),0);
    }
LAB_143fd67a1:
    FUN_140457ffc(*(longlong *)(param_1 + 0x28) + 0x3a0,param_1);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  lVar7 = *(longlong *)(param_1 + 0x48);
  if ((lVar7 != 0) && ((longlong)*(int *)(lVar7 + 0x48) != 0)) {
    puVar14 = *(undefined8 **)(lVar7 + 0x40);
    puVar2 = puVar14 + (longlong)*(int *)(lVar7 + 0x48) * 5;
    do {
      local_88 = (code *)*puVar14;
      local_80 = *(undefined4 *)(puVar14 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar14 + 0xc);
      uStack_78 = *(undefined4 *)(puVar14 + 2);
      uStack_74 = *(undefined4 *)((longlong)puVar14 + 0x14);
      local_70 = (void *)0x0;
      local_68 = *(int *)(puVar14 + 4);
      lVar7 = (longlong)local_68;
      _Src = (void *)puVar14[3];
      if (lVar7 == 0) {
        iVar12 = (int)((ulonglong)local_88 >> 0x20);
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,local_68,0);
        memcpy(local_70,_Src,lVar7 * 2);
        iVar12 = local_88._4_4_;
      }
      if ((iVar12 == 0) || ((int)(uint)local_88 < 0)) {
LAB_143fd609b:
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        if ((int)(uint)local_88 < DAT_14c9647dc) {
          plVar10 = (longlong *)
                    ((ulonglong)(((uint)local_88 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_88 >> 0x10) * 8));
          if (((plVar10 == (longlong *)0x0) || ((int)plVar10[2] != iVar12)) ||
             ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) goto LAB_143fd609b;
          lVar7 = *plVar10;
        }
      }
      if ((lVar7 == 0) && (CONCAT44(uStack_7c,local_80) != 0)) {
        lVar7 = FUN_140007850(&local_80);
        cVar4 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar7 == 0) || (cVar4 == '\0')) {
          if (lVar7 != 0) {
            uVar3 = *(uint *)(lVar7 + 0xc);
            local_88 = (code *)CONCAT44(local_88._4_4_,uVar3);
            if (DAT_14c9647dc <= (int)uVar3) goto LAB_143fd6088;
            lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            goto LAB_143fd6009;
          }
          local_88 = (code *)0x0;
        }
        else {
          uVar3 = *(uint *)(lVar7 + 0xc);
          if ((int)uVar3 < DAT_14c9647dc) {
            if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8) + 8 +
                          (ulonglong)(uVar3 & 0xffff) * 0x18) & 0x8400000) == 0) {
              local_88 = (code *)CONCAT44(local_88._4_4_,uVar3);
              lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
LAB_143fd6009:
              iVar12 = *(int *)(lVar13 + 0x10);
              if (*(int *)(lVar13 + 0x10) == 0) {
                LOCK();
                iVar5 = DAT_14c964868 + 1;
                UNLOCK();
                iVar12 = DAT_14c964868 + 1;
                bVar15 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar5;
                if (bVar15) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar12);
                }
                LOCK();
                iVar5 = *(int *)(lVar13 + 0x10);
                bVar15 = iVar5 == 0;
                if (bVar15) {
                  *(int *)(lVar13 + 0x10) = iVar12;
                  iVar5 = 0;
                }
                UNLOCK();
                if (!bVar15) {
                  iVar12 = iVar5;
                }
              }
              local_88 = (code *)CONCAT44(iVar12,(uint)local_88);
            }
          }
          else if ((_DAT_00000008 & 0x8400000) == 0) {
            local_88 = (code *)CONCAT44(local_88._4_4_,uVar3);
LAB_143fd6088:
            lVar13 = 0;
            goto LAB_143fd6009;
          }
          if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) goto LAB_143fd6035;
        }
      }
      else if (lVar7 != 0) {
LAB_143fd6035:
        if (DAT_14c949118 == 0) {
          local_60 = FUN_140631fbe;
          if (DAT_14c963f04 == '\0') {
            uVar6 = FUN_140011aa6();
            lVar13 = FUN_140011c0e(uVar6,0x250,8);
          }
          else {
            lVar13 = FUN_14001cc68(0x250,8);
          }
          DAT_14c949118 = lVar13;
          FUN_1446f470e(local_58,L"Class",1);
          local_a0 = &local_60;
          local_a8 = &LAB_146891e90;
          local_b0 = (code *)&LAB_146273097;
          local_c0 = L"Engine";
          local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
          local_c8 = 0x20;
          local_d0 = 0x10000000;
          local_d8._0_4_ = 8;
          FUN_14574b4b2(lVar13);
          DAT_14c949118 = lVar13;
          if (DAT_14c951858 == 0) {
            local_50 = FUN_1449e2820;
            local_90 = FUN_14081d0ea;
            local_98 = FUN_14081d0ea;
            local_a0 = &local_50;
            local_a8 = &LAB_1468c5283;
            local_b0 = FUN_142809da0;
            local_b8 = L"Engine";
            local_c0 = (wchar_t *)0x400000000;
            local_c8 = CONCAT44(local_c8._4_4_,0x10000000);
            local_d0 = 8;
            local_d8._0_4_ = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          lVar8 = DAT_14c951858;
          lVar13 = DAT_14c949118;
          uVar6 = FUN_1449e2fb2();
          local_d8 = L"Class";
          FUN_14574b446(uVar6,lVar13,lVar8,L"/Script/CoreUObject");
        }
        if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
            (lVar13 = FUN_1459d8532(), lVar13 != 0)) &&
           ((*(int *)(lVar13 + 0x38) <= *(int *)(lVar7 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
             lVar13 + 0x30)))) {
          if ((local_88._4_4_ == 0) || ((int)(uint)local_88 < 0)) {
LAB_143fd62d3:
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = (longlong *)0x0;
            if ((int)(uint)local_88 < DAT_14c9647dc) {
              puVar11 = (undefined8 *)
                        ((ulonglong)(((uint)local_88 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_88 >> 0x10) * 8));
              if (((puVar11 == (undefined8 *)0x0) || (*(int *)(puVar11 + 2) != local_88._4_4_)) ||
                 ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) goto LAB_143fd62d3;
              plVar10 = (longlong *)*puVar11;
            }
          }
          if ((plVar10 == (longlong *)0x0) && (CONCAT44(uStack_7c,local_80) != 0)) {
            plVar10 = (longlong *)FUN_140007850(&local_80);
            cVar4 = (*(code *)PTR_FUN_14c758760)();
            if ((plVar10 == (longlong *)0x0) || (cVar4 == '\0')) {
              if (plVar10 != (longlong *)0x0) {
                uVar3 = *(uint *)((longlong)plVar10 + 0xc);
                local_88 = (code *)CONCAT44(local_88._4_4_,uVar3);
                if (DAT_14c9647dc <= (int)uVar3) goto LAB_143fd62c0;
                lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                goto LAB_143fd6213;
              }
              local_88 = (code *)0x0;
            }
            else {
              uVar3 = *(uint *)((longlong)plVar10 + 0xc);
              if ((int)uVar3 < DAT_14c9647dc) {
                if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8) + 8 +
                              (ulonglong)(uVar3 & 0xffff) * 0x18) & 0x8400000) == 0) {
                  local_88 = (code *)CONCAT44(local_88._4_4_,uVar3);
                  lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
LAB_143fd6213:
                  iVar12 = *(int *)(lVar7 + 0x10);
                  if (*(int *)(lVar7 + 0x10) == 0) {
                    LOCK();
                    iVar5 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar12 = DAT_14c964868 + 1;
                    bVar15 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar5;
                    if (bVar15) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar12);
                    }
                    LOCK();
                    iVar5 = *(int *)(lVar7 + 0x10);
                    bVar15 = iVar5 == 0;
                    if (bVar15) {
                      *(int *)(lVar7 + 0x10) = iVar12;
                      iVar5 = 0;
                    }
                    UNLOCK();
                    if (!bVar15) {
                      iVar12 = iVar5;
                    }
                  }
                  local_88 = (code *)CONCAT44(iVar12,(uint)local_88);
                }
              }
              else if ((_DAT_00000008 & 0x8400000) == 0) {
                local_88 = (code *)CONCAT44(local_88._4_4_,uVar3);
LAB_143fd62c0:
                lVar7 = 0;
                goto LAB_143fd6213;
              }
              if ((*(uint *)(plVar10 + 1) >> 0x1e & 1) == 0) goto LAB_143fd6243;
            }
LAB_143fd626e:
            plVar10 = (longlong *)0x0;
          }
          else {
            if (plVar10 == (longlong *)0x0) goto LAB_143fd626e;
LAB_143fd6243:
            if (DAT_14c949118 == 0) {
              local_60 = FUN_140631fbe;
              if (DAT_14c963f04 == '\0') {
                uVar6 = FUN_140011aa6();
                lVar7 = FUN_140011c0e(uVar6,0x250,8);
              }
              else {
                lVar7 = FUN_14001cc68(0x250,8);
              }
              DAT_14c949118 = lVar7;
              FUN_1446f470e(local_58,L"Class",1);
              local_a0 = &local_60;
              local_a8 = &LAB_146891e90;
              local_b0 = (code *)&LAB_146273097;
              local_c0 = L"Engine";
              local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
              local_c8 = 0x20;
              local_d0 = 0x10000000;
              local_d8._0_4_ = 8;
              FUN_14574b4b2(lVar7);
              DAT_14c949118 = lVar7;
              if (DAT_14c951858 == 0) {
                local_50 = FUN_1449e2820;
                local_90 = FUN_14081d0ea;
                local_98 = FUN_14081d0ea;
                local_a0 = &local_50;
                local_a8 = &LAB_1468c5283;
                local_b0 = FUN_142809da0;
                local_b8 = L"Engine";
                local_c0 = (wchar_t *)0x400000000;
                local_c8 = CONCAT44(local_c8._4_4_,0x10000000);
                local_d0 = 8;
                local_d8._0_4_ = 0x50;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              lVar13 = DAT_14c951858;
              lVar7 = DAT_14c949118;
              uVar6 = FUN_1449e2fb2();
              local_d8 = L"Class";
              FUN_14574b446(uVar6,lVar7,lVar13,L"/Script/CoreUObject");
            }
            if ((((*(int *)(plVar10[2] + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8)
                  != DAT_14c949118 + 0x30)) || (lVar7 = FUN_1459d8532(), lVar7 == 0)) ||
               (((int)plVar10[7] < *(int *)(lVar7 + 0x38) ||
                (*(longlong *)(plVar10[6] + (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)))
               ) goto LAB_143fd626e;
          }
          plVar9 = (longlong *)plVar10[0x22];
          if (plVar9 == (longlong *)0x0) {
            (**(code **)(*plVar10 + 1000))(plVar10);
            plVar9 = (longlong *)plVar10[0x22];
            if (plVar9 == (longlong *)0x0) goto LAB_143fd6060;
          }
          (**(code **)(*plVar9 + 0x2a8))(plVar9,*(undefined8 *)(param_1 + 0x48));
        }
      }
LAB_143fd6060:
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar14 = puVar14 + 5;
    } while (puVar14 != puVar2);
  }
LAB_143fd673a:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fd68c6 FUN_143fd68c6 body=313 status=ok
// SIG undefined FUN_143fd68c6(void)

void FUN_143fd68c6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_2 + 8);
  if (lVar4 != 0) {
    local_28 = *(longlong **)(param_2 + 0x10);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    local_30 = lVar4;
    if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
      lVar5 = *(longlong *)(lVar4 + 0x10);
      uVar6 = (uint)((ulonglong)lVar5 >> 0x10);
      uVar10 = (uint)lVar5 & 0xffff;
      lVar9 = param_1 + 0x68;
      if (*(longlong *)(param_1 + 0x70) != 0) {
        lVar9 = *(longlong *)(param_1 + 0x70);
      }
      iVar8 = *(int *)(lVar9 + (ulonglong)
                               (*(int *)(param_1 + 0x78) - 1U &
                               (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar10) +
                               (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar10 >> 4)) * 4);
      if (iVar8 != -1) {
        lVar9 = *(longlong *)(param_1 + 0x30);
        do {
          lVar3 = lVar9 + (longlong)iVar8 * 0x20;
          if (*(longlong *)(lVar9 + (longlong)iVar8 * 0x20) == lVar5) {
            if ((lVar3 + 8 != 0 && lVar3 != 0) &&
               (FUN_148b66888(lVar3 + 8,&local_30), *(int *)(lVar3 + 0x10) == 0)) {
              FUN_148b6e5ac((longlong *)(param_1 + 0x30),lVar4 + 0x10);
            }
            break;
          }
          iVar8 = *(int *)(lVar3 + 0x18);
        } while (iVar8 != -1);
      }
    }
    plVar7 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fd6a00 FUN_143fd6a00 body=362 status=ok
// SIG undefined FUN_143fd6a00(void)

void FUN_143fd6a00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_2 + 8);
  if (lVar4 != 0) {
    local_38 = *(longlong **)(param_2 + 0x10);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    local_40 = lVar4;
    if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
      lVar5 = *(longlong *)(lVar4 + 0x10);
      uVar6 = (uint)((ulonglong)lVar5 >> 0x10);
      uVar9 = (uint)lVar5 & 0xffff;
      lVar8 = param_1 + 0xb8;
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        lVar8 = *(longlong *)(param_1 + 0xc0);
      }
      iVar10 = *(int *)(lVar8 + (ulonglong)
                                (*(int *)(param_1 + 200) - 1U &
                                (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar9) +
                                (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar10 != -1) {
        lVar8 = *(longlong *)(param_1 + 0x80);
        do {
          lVar3 = lVar8 + (longlong)iVar10 * 0x20;
          if (*(longlong *)(lVar8 + (longlong)iVar10 * 0x20) == lVar5) {
            if (lVar3 + 8 != 0 && lVar3 != 0) {
              FUN_143fd731a(param_1,CONCAT71((int7)((ulonglong)lVar8 >> 8),1),&local_40);
              FUN_148b6681e(lVar3 + 8,&local_40);
              if (*(int *)(lVar3 + 0x10) == 0) {
                FUN_148b6e35e((longlong *)(param_1 + 0x80),lVar4 + 0x10);
              }
            }
            break;
          }
          iVar10 = *(int *)(lVar3 + 0x18);
        } while (iVar10 != -1);
      }
    }
    plVar7 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fd6b6c FUN_143fd6b6c body=1650 status=ok
// SIG undefined FUN_143fd6b6c(void)

uint * FUN_143fd6b6c(longlong param_1,uint *param_2,longlong *param_3,longlong param_4,
                    undefined1 param_5,longlong param_6,longlong *param_7)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 *local_78;
  int local_70;
  undefined8 *local_60;
  int local_58;
  undefined4 local_54;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((*param_3 == 0) || ((int)param_7[1] == 0)) || ((longlong *)*param_7 == (longlong *)0x0)) ||
     ((cVar5 = (**(code **)(*(longlong *)*param_7 + 0x30))(), cVar5 == '\0' ||
      (*(int *)(param_6 + 8) == 0)))) {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
  }
  else {
    lVar13 = *param_3;
    uVar7 = (uint)((ulonglong)lVar13 >> 0x10);
    uVar10 = (uint)lVar13 & 0xffff;
    local_b8 = (longlong *)
               FUN_148b6d624(param_1 + 0x30,
                             ((uint)lVar13 << 0x10 | uVar10) + (int)((ulonglong)lVar13 >> 0x20) +
                             (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar10 >> 4),param_3);
    plVar8 = (longlong *)FUN_14001cc68(0x58,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14b5a4440;
    local_b0 = plVar8 + 2;
    plVar8[2] = 0;
    plVar8[3] = 0;
    plVar8[4] = 0;
    plVar8[5] = 0;
    plVar8[6] = 0;
    plVar8[7] = 0;
    plVar8[8] = 0;
    plVar8[9] = 0;
    plVar8[10] = 0;
    local_a8 = local_b0;
    local_a0 = plVar8;
    FUN_148b6da68();
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    iVar6 = (int)local_b8[1];
    *(uint *)(local_b8 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)local_b8 + 0xc) < iVar6 + 1U) {
      FUN_148b6db0c(local_b8,iVar6);
    }
    plVar2 = local_a0;
    lVar13 = *local_b8;
    lVar12 = (longlong)iVar6 * 0x10;
    local_b8 = (longlong *)(lVar13 + lVar12);
    *(longlong **)(lVar13 + lVar12) = local_b0;
    *(longlong **)(lVar13 + 8 + lVar12) = plVar8;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_a0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    *(longlong *)(*local_b8 + 0x10) = *param_3;
    lVar13 = *local_b8;
    if (param_4 == 0) {
      *(undefined4 *)(lVar13 + 0x18) = 0;
      iVar6 = 0;
    }
    else {
      uVar7 = *(uint *)(param_4 + 0xc);
      *(uint *)(lVar13 + 0x18) = uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar6 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar6 = *(int *)(lVar12 + 0x10);
        bVar14 = iVar6 == 0;
        if (bVar14) {
          *(int *)(lVar12 + 0x10) = iVar11;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar6 = iVar11;
        }
      }
    }
    plVar8 = local_b8;
    *(int *)(lVar13 + 0x1c) = iVar6;
    *(undefined1 *)(*local_b8 + 0x20) = param_5;
    FUN_148b66724(*local_b8 + 0x28,param_6);
    lVar13 = *plVar8;
    plVar8 = (longlong *)(lVar13 + 0x38);
    lVar12 = *param_7;
    *param_7 = 0;
    lVar4 = param_7[1];
    *(undefined4 *)(param_7 + 1) = 0;
    if (*(int *)(lVar13 + 0x40) == 0) {
LAB_143fd6e0c:
      if (*plVar8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar9 = (undefined8 *)*plVar8;
      if (puVar9 != (undefined8 *)0x0) {
        (**(code **)*puVar9)(puVar9,0);
        FUN_1446efa72(plVar8,0,0,0x10);
        *(undefined4 *)(lVar13 + 0x40) = 0;
        goto LAB_143fd6e0c;
      }
    }
    *(longlong *)(lVar13 + 0x38) = lVar12;
    *(int *)(lVar13 + 0x40) = (int)lVar4;
    local_50 = *(longlong **)(*local_b8 + 0x10);
    plVar8 = local_b8;
    if (local_50 != (longlong *)0x0) {
LAB_143fd6e51:
      if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
        uVar7 = (uint)((ulonglong)local_50 >> 0x10);
        uVar10 = (uint)local_50 & 0xffff;
        lVar13 = *(longlong *)(param_1 + 0xc0);
        if (*(longlong *)(param_1 + 0xc0) == 0) {
          lVar13 = param_1 + 0xb8;
        }
        iVar6 = *(int *)(lVar13 + (ulonglong)
                                  (*(int *)(param_1 + 200) - 1U &
                                  (int)((ulonglong)local_50 >> 0x20) +
                                  ((uint)local_50 << 0x10 | uVar10) +
                                  (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar10 >> 4)) * 4);
        if (iVar6 != -1) {
          do {
            lVar13 = *(longlong *)(param_1 + 0x80) + (longlong)iVar6 * 0x20;
            if (*(longlong **)(*(longlong *)(param_1 + 0x80) + (longlong)iVar6 * 0x20) == local_50)
            {
              if ((lVar13 + 8U & 0xfffffffffffffff7) != 0) {
                local_60 = (undefined8 *)0x0;
                iVar6 = *(int *)(lVar13 + 0x10);
                uVar3 = *(undefined8 *)(lVar13 + 8);
                local_58 = iVar6;
                if (iVar6 == 0) {
                  local_54 = 0;
                  iVar6 = 0;
                  goto LAB_143fd704a;
                }
                FUN_148b6e13a(&local_60,iVar6);
                FUN_148b6e192(local_60,uVar3,iVar6);
                iVar6 = 0;
                if ((longlong)local_58 == 0) goto LAB_143fd704a;
                lVar13 = (longlong)local_58 << 4;
                puVar9 = local_60;
                goto LAB_143fd6f74;
              }
              break;
            }
            iVar6 = *(int *)(lVar13 + 0x18);
          } while (iVar6 != -1);
        }
      }
      goto LAB_143fd6eda;
    }
LAB_143fd7073:
    param_2[1] = 0;
    if (param_1 == 0) {
      *param_2 = 0;
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0xc);
      *param_2 = uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      uVar7 = *(uint *)(lVar13 + 0x10);
      if (*(uint *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        uVar10 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar10);
        }
        LOCK();
        uVar7 = *(uint *)(lVar13 + 0x10);
        bVar14 = uVar7 == 0;
        if (bVar14) {
          *(uint *)(lVar13 + 0x10) = uVar10;
          uVar7 = 0;
        }
        UNLOCK();
        plVar8 = local_b8;
        if (bVar14) {
          uVar7 = uVar10;
        }
      }
    }
    param_2[1] = uVar7;
    *(longlong *)(param_2 + 2) = *plVar8;
    lVar13 = plVar8[1];
    *(longlong *)(param_2 + 4) = lVar13;
    if (lVar13 != 0) {
      LOCK();
      *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
      UNLOCK();
    }
  }
  puVar9 = (undefined8 *)*param_7;
  if ((int)param_7[1] != 0) {
    if (puVar9 == (undefined8 *)0x0) goto LAB_143fd6c1b;
    (**(code **)*puVar9)(puVar9,0);
    FUN_1446efa72(param_7,0,0,0x10);
    *(undefined4 *)(param_7 + 1) = 0;
    puVar9 = (undefined8 *)*param_7;
  }
  if (puVar9 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143fd6c1b:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
LAB_143fd6f74:
  do {
    cVar5 = FUN_148b66622(*local_b8,*puVar9);
    if (cVar5 != '\0') {
      FUN_143fd75d4(param_1,&local_a8,puVar9);
      if ((*(int *)(*local_b8 + 0x40) != 0) &&
         (plVar8 = *(longlong **)(*local_b8 + 0x38), plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x60))(plVar8,0,&local_a8);
      }
      if (local_70 == 0) {
LAB_143fd6ff2:
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_78 != (undefined8 *)0x0) {
        (**(code **)*local_78)(local_78,0);
        FUN_1446efa72(&local_78,0,0,0x10);
        local_70 = 0;
        goto LAB_143fd6ff2;
      }
      plVar8 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_98 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_98)(local_98);
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
    puVar9 = puVar9 + 2;
    lVar13 = lVar13 + -0x10;
    iVar6 = local_58;
  } while (lVar13 != 0);
LAB_143fd704a:
  FUN_148b5cb63(local_60,iVar6);
  plVar8 = local_b8;
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
    plVar8 = local_b8;
  }
LAB_143fd6eda:
  if (*(char *)(*plVar8 + 0x20) == '\0') goto LAB_143fd7073;
  FUN_147479f48(&local_50,&local_a8);
  local_50 = local_a8;
  if (local_a8 == (longlong *)0x0) goto LAB_143fd7073;
  goto LAB_143fd6e51;
}



// FUNCTION 143fd71e0 FUN_143fd71e0 body=312 status=ok
// SIG undefined FUN_143fd71e0(void)

undefined8
FUN_143fd71e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5,undefined4 param_6,longlong *param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = (char)param_7[2];
  if (local_50 == '\x01') {
    local_60 = 0;
    local_58 = 0;
    FUN_143fc5c60(&local_60,param_7);
  }
  lVar1 = *param_5;
  if (lVar1 == 0) {
LAB_143fd7277:
    local_78 = 0;
  }
  else {
    lVar3 = FUN_1405e2bf2();
    if (((lVar3 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_143fd7277;
    local_78 = *param_5;
  }
  local_68 = &local_60;
  local_70 = param_6;
  FUN_143fd1bd2(param_1,param_2,param_3,param_4);
  if ((char)param_7[2] != '\x01') goto LAB_143fd72de;
  if ((int)param_7[1] == 0) {
LAB_143fd72d2:
    if (*param_7 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_7;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_7,0,0,0x10);
      *(undefined4 *)(param_7 + 1) = 0;
      goto LAB_143fd72d2;
    }
  }
  *(undefined1 *)(param_7 + 2) = 0;
LAB_143fd72de:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fd731a FUN_143fd731a body=697 status=ok
// SIG undefined FUN_143fd731a(void)

void FUN_143fd731a(longlong param_1,undefined1 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  char cVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_d8 [39];
  undefined1 local_b1;
  longlong local_b0;
  longlong local_a8 [2];
  longlong *local_98;
  undefined8 *local_78;
  int local_70;
  longlong local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_50 = *(longlong *)(*param_3 + 0x10);
  if (local_50 == 0) {
LAB_143fd75a6:
    if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar11 = param_1 + 0x68;
  bVar13 = true;
LAB_143fd7374:
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    uVar5 = (uint)((ulonglong)local_50 >> 0x10);
    uVar8 = (uint)local_50 & 0xffff;
    lVar7 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar7 = lVar11;
    }
    iVar9 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x78) - 1U &
                             (int)((ulonglong)local_50 >> 0x20) + ((uint)local_50 << 0x10 | uVar8) +
                             (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 0x20) == local_50) {
          if ((lVar7 + 8U & 0xfffffffffffffff7) != 0) {
            local_60 = 0;
            iVar9 = *(int *)(lVar7 + 0x10);
            uVar3 = *(undefined8 *)(lVar7 + 8);
            local_58 = iVar9;
            if (iVar9 == 0) {
              local_54 = 0;
              iVar9 = 0;
              goto LAB_143fd7563;
            }
            local_b0 = lVar11;
            FUN_148b6e1ba(&local_60,iVar9);
            FUN_148b6e212(local_60,uVar3,iVar9);
            lVar7 = local_60;
            lVar10 = (longlong)local_58;
            lVar11 = local_b0;
            iVar9 = 0;
            if (lVar10 == 0) goto LAB_143fd7563;
            lVar12 = 0;
            local_b1 = param_2;
            goto LAB_143fd7471;
          }
          break;
        }
        iVar9 = *(int *)(lVar7 + 0x18);
      } while (iVar9 != -1);
    }
  }
  goto LAB_143fd7582;
LAB_143fd7471:
  do {
    lVar11 = *(longlong *)(lVar7 + lVar12);
    if (((bVar13) || (*(char *)(lVar11 + 0x20) == '\x01')) &&
       (cVar6 = FUN_148b66622(lVar11,*param_3), cVar6 != '\0')) {
      FUN_143fd75d4(param_1,local_a8,param_3);
      lVar11 = *(longlong *)(lVar7 + lVar12);
      if ((*(int *)(lVar11 + 0x40) != 0) &&
         (plVar4 = *(longlong **)(lVar11 + 0x38), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x60))(plVar4,local_b1,local_a8);
      }
      if (local_70 == 0) {
LAB_143fd7500:
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_78 != (undefined8 *)0x0) {
        (**(code **)*local_78)(local_78,0);
        FUN_1446efa72(&local_78,0,0,0x10);
        local_70 = 0;
        goto LAB_143fd7500;
      }
      plVar4 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_98)(local_98);
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
    lVar12 = lVar12 + 0x10;
    lVar11 = local_b0;
    param_2 = local_b1;
    iVar9 = local_58;
  } while (lVar10 * 0x10 != lVar12);
LAB_143fd7563:
  FUN_148b5cbac(local_60,iVar9);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
LAB_143fd7582:
  FUN_147479f48(&local_50,local_a8);
  local_50 = local_a8[0];
  bVar13 = false;
  if (local_a8[0] == 0) goto LAB_143fd75a6;
  goto LAB_143fd7374;
}



// FUNCTION 143fd75d4 FUN_143fd75d4 body=542 status=ok
// SIG undefined FUN_143fd75d4(void)

undefined8 * FUN_143fd75d4(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  uint local_40;
  int local_3c;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  local_3c = 0;
  if (param_1 == 0) {
    local_40 = 0;
    iVar4 = 0;
  }
  else {
    local_40 = *(uint *)(param_1 + 0xc);
    if ((int)local_40 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((local_40 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar4 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar4 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar6;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar4 = iVar6;
      }
    }
  }
  local_38 = *param_3;
  local_30 = (longlong *)param_3[1];
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  local_3c = iVar4;
  FUN_148b53d4c(param_2,&local_40);
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar7 = *param_3;
  param_2[3] = *(undefined8 *)(lVar7 + 0x10);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar7 + 0x18);
  lVar8 = *(longlong *)(lVar7 + 0x28);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(lVar7 + 0x28);
      lVar7 = *param_3;
    }
  }
  param_2[5] = lVar8;
  if (*(int *)(lVar7 + 0x20) != 0) {
    uVar3 = *(uint *)(lVar7 + 0x1c);
    lVar8 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_143fd773c;
    plVar5 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       (((int)plVar5[2] == *(int *)(lVar7 + 0x20) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))))
    {
      lVar8 = *plVar5;
      if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar8);
        lVar7 = *param_3;
      }
      goto LAB_143fd773c;
    }
  }
  lVar8 = 0;
LAB_143fd773c:
  param_2[8] = lVar8;
  FUN_143fc5c60(param_2 + 6,lVar7 + 0x30);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143fd77f4 FUN_143fd77f4 body=1628 status=ok
// SIG undefined FUN_143fd77f4(void)

void FUN_143fd77f4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  wchar_t *local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  longlong local_b8;
  longlong local_b0;
  code *local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  int local_80;
  code *local_78;
  undefined1 local_70 [8];
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140ec5a00();
  local_90 = FUN_14120aa3a();
  if ((local_90 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_90);
  }
  FUN_1477937da(param_1,&local_88);
  if ((longlong)local_80 == 0) {
LAB_143fd7e0e:
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8(local_88);
    }
    if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  plVar1 = local_88 + local_80;
  plVar9 = local_88;
LAB_143fd7886:
  lVar2 = *plVar9;
  if ((((lVar2 != 0) && (lVar11 = *(longlong *)(lVar2 + 0x10), lVar11 != 0)) &&
      (lVar6 = FUN_143fb1818(), lVar6 != 0)) && ((*(byte *)(lVar6 + 0xd5) & 0x40) != 0)) {
    if (DAT_14c950d78 == 0) {
      local_a8 = FUN_1449e2820;
      local_c0 = FUN_14081d0ea;
      local_c8 = FUN_14081d0ea;
      local_d8 = &LAB_1468b50ee;
      local_e0 = FUN_1427f23a3;
      local_e8 = L"Engine";
      local_f0 = (wchar_t *)0x0;
      local_f8 = CONCAT44(local_f8._4_4_,0x10004001);
      local_100 = 8;
      local_108 = (wchar_t *)CONCAT44(local_108._4_4_,0x28);
      local_d0 = &local_a8;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
    }
    if (DAT_14c950d78 != lVar6) {
      do {
        if (0 < (longlong)*(int *)(lVar11 + 0x1e0)) {
          lVar10 = 0;
          do {
            lVar3 = *(longlong *)(*(longlong *)(lVar11 + 0x1d8) + lVar10);
            if (((lVar3 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                lVar6 + 0x30)) {
              local_a8 = (code *)0x0;
              lStack_a0 = 0;
              local_98 = 0;
              if ((longlong)*(int *)(param_1 + 0x2d8) == 0) goto LAB_143fd7d3e;
              plVar8 = *(longlong **)(param_1 + 0x2d0);
              lVar11 = (longlong)*(int *)(param_1 + 0x2d8) * 0x18;
              goto LAB_143fd795e;
            }
            lVar10 = lVar10 + 0x10;
          } while ((longlong)*(int *)(lVar11 + 0x1e0) * 0x10 != lVar10);
        }
        lVar11 = *(longlong *)(lVar11 + 0x40);
      } while (lVar11 != 0);
    }
  }
  goto LAB_143fd7d5d;
LAB_143fd795e:
  do {
    lVar6 = plVar8[1];
    if (lVar6 == 0) {
      uVar7 = FUN_143fb1162();
      lVar6 = FUN_14477b664(uVar7);
      plVar8[1] = lVar6;
    }
    lVar10 = plVar8[2];
    if (lVar10 == 0) {
      if ((lVar6 != 0) && (*plVar8 != 0)) {
        plVar4 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar4 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
          plVar8[2] = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar10 = FUN_144aff482(uVar7,plVar8);
          plVar8[2] = lVar10;
          if (lVar10 != 0) {
            lVar6 = plVar8[1];
            goto LAB_143fd7985;
          }
        }
      }
    }
    else {
LAB_143fd7985:
      if (lVar6 == 0) {
        uVar7 = FUN_143fb1162();
        lVar6 = FUN_14477b664(uVar7);
        plVar8[1] = lVar6;
        lVar10 = plVar8[2];
        if (lVar10 == 0) {
          if (lVar6 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = 0;
            if (*plVar8 != 0) {
              plVar4 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar4 == (longlong *)0x0) ||
                 (cVar5 = (**(code **)(*plVar4 + 0x108))(), cVar5 == '\0')) {
                lVar10 = 0;
              }
              else {
                uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
                lVar10 = FUN_144aff482(uVar7,plVar8);
              }
              plVar8[2] = lVar10;
            }
          }
        }
      }
      lVar6 = FUN_144a6654a(lVar10 + 0x18);
      if (lVar6 == 0) {
LAB_143fd7aa5:
        lVar6 = 0;
      }
      else {
        if (DAT_14c949118 == 0) {
          local_78 = FUN_140631fbe;
          if (DAT_14c963f04 == '\0') {
            uVar7 = FUN_140011aa6();
            DAT_14c949118 = FUN_140011c0e(uVar7,0x250,8);
          }
          else {
            DAT_14c949118 = FUN_14001cc68(0x250,8);
          }
          local_b8 = DAT_14c949118;
          FUN_1446f470e(local_70,L"Class",1);
          local_d0 = &local_78;
          local_d8 = &LAB_146891e90;
          local_e0 = (code *)&LAB_146273097;
          local_f0 = L"Engine";
          local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,199);
          local_f8 = 0x20;
          local_100 = 0x10000000;
          local_108._0_4_ = 8;
          FUN_14574b4b2(local_b8);
          DAT_14c949118 = local_b8;
          local_b0 = DAT_14c951858;
          if (DAT_14c951858 == 0) {
            local_68 = FUN_1449e2820;
            local_c0 = FUN_14081d0ea;
            local_c8 = FUN_14081d0ea;
            local_d0 = &local_68;
            local_d8 = &LAB_1468c5283;
            local_e0 = FUN_142809da0;
            local_e8 = L"Engine";
            local_f0 = (wchar_t *)0x400000000;
            local_f8 = CONCAT44(local_f8._4_4_,0x10000000);
            local_100 = 8;
            local_108._0_4_ = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            local_b8 = DAT_14c949118;
          }
          DAT_14c949118 = local_b8;
          local_b0 = DAT_14c951858;
          uVar7 = FUN_1449e2fb2();
          local_108 = L"Class";
          FUN_14574b446(uVar7,local_b8,local_b0,L"/Script/CoreUObject");
        }
        if ((((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
            (lVar10 = FUN_14120aa3a(), lVar10 == 0)) ||
           (*(int *)(lVar6 + 0x38) < *(int *)(lVar10 + 0x38))) goto LAB_143fd7aa5;
        if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
            lVar10 + 0x30) {
          lVar6 = 0;
        }
      }
      if (lVar6 == *(longlong *)(lVar2 + 0x10)) {
        if (local_a8 != (code *)*plVar8) {
          local_98 = 0;
        }
        if (lStack_a0 != plVar8[1]) {
          local_98 = 0;
        }
        local_a8 = (code *)*plVar8;
        uVar7 = FUN_14477b664();
        lStack_a0 = FUN_14477b664(uVar7);
        local_98 = plVar8[2];
        break;
      }
    }
    plVar8 = plVar8 + 3;
    lVar11 = lVar11 + -0x18;
  } while (lVar11 != 0);
LAB_143fd7d3e:
  uVar7 = FUN_143fb1818();
  plVar8 = (longlong *)FUN_144718840(lVar2,uVar7);
  (**(code **)(*plVar8 + 0x10))(plVar8,0);
LAB_143fd7d5d:
  plVar9 = plVar9 + 1;
  if (plVar9 == plVar1) goto LAB_143fd7e0e;
  goto LAB_143fd7886;
}



// FUNCTION 143fd7e52 FUN_143fd7e52 body=152 status=ok
// SIG undefined FUN_143fd7e52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fd7e52(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb9e298) {
    FUN_144b3d300(&DAT_14cb9e298);
    if (DAT_14cb9e298 == -1) {
      DAT_14cb9e268 = 0;
      DAT_14cb9e270 = 0;
      DAT_14cb9e248 = 0;
      _DAT_14cb9e250 = 0;
      _DAT_14cb9e274 = 0xffffffff00000080;
      DAT_14cb9e27c = 0;
      DAT_14cb9e288 = 0;
      DAT_14cb9e290 = 0;
      atexit(FUN_143fd7eea);
      _Init_thread_footer(&DAT_14cb9e298);
      return;
    }
  }
  return;
}



// FUNCTION 143fd7eea FUN_143fd7eea body=166 status=ok
// SIG undefined FUN_143fd7eea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fd7eea(void)

{
  DAT_14cb9e290 = 0;
  if (DAT_14cb9e288 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb9e250 = 0;
  if (DAT_14cb9e254 != 0) {
    FUN_144727cd0(&DAT_14cb9e248,0);
  }
  _DAT_14cb9e278 = 0xffffffff;
  DAT_14cb9e270 = 0;
  if (0x80 < DAT_14cb9e274) {
    DAT_14cb9e274 = 0x80;
    FUN_1446efbd8(&DAT_14cb9e258,0);
  }
  if (DAT_14cb9e268 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb9e248 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143fd7f90 FUN_143fd7f90 body=137 status=ok
// SIG undefined FUN_143fd7f90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fd7f90(void)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (DAT_14cb9e2a0 == (longlong *)0x0) {
    plVar1 = (longlong *)FUN_140595974(0x100,0);
    plVar2 = plVar1 + 8;
    *plVar1 = (longlong)plVar2;
    plVar1[8] = (longlong)(plVar1 + 0x10);
    plVar1[0x10] = (longlong)(plVar1 + 0x18);
    plVar1[0x18] = (longlong)DAT_14cb9e2a0;
    _DAT_14cb9e2a8 = _DAT_14cb9e2a8 + 4;
  }
  else {
    plVar2 = (longlong *)*DAT_14cb9e2a0;
    plVar1 = DAT_14cb9e2a0;
  }
  _DAT_14cb9e2ac = _DAT_14cb9e2ac + 1;
  DAT_14cb9e2a0 = plVar2;
  plVar1[1] = 0;
  plVar1[2] = 0;
  *plVar1 = (longlong)&PTR_FUN_14b57a3e0;
  plVar1[3] = 0;
  plVar1[4] = 0;
  plVar1[5] = 0;
  plVar1[6] = 0;
  plVar1[7] = 0;
  return;
}



// FUNCTION 143fd801a FUN_143fd801a body=44 status=ok
// SIG undefined FUN_143fd801a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fd801a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb9e2ac = _DAT_14cb9e2ac + -1;
  *param_1 = DAT_14cb9e2a0;
  DAT_14cb9e2a0 = param_1;
  return;
}



// FUNCTION 143fd8046 FUN_143fd8046 body=54 status=ok
// SIG undefined FUN_143fd8046(void)

void FUN_143fd8046(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b57a3e0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// FUNCTION 143fd807c FUN_143fd807c body=306 status=ok
// SIG undefined FUN_143fd807c(void)

void FUN_143fd807c(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined *puVar7;
  uint uVar8;
  longlong lVar4;
  
  FUN_143fd7e52();
  if (DAT_14cb9e250 != DAT_14cb9e27c) {
    uVar2 = (uint)((ulonglong)DAT_14cb9e2b4 >> 0x10);
    uVar8 = (uint)DAT_14cb9e2b4 & 0xffff;
    puVar7 = &DAT_14cb9e280;
    if (DAT_14cb9e288 != (undefined *)0x0) {
      puVar7 = DAT_14cb9e288;
    }
    iVar1 = *(int *)(puVar7 + ((longlong)
                               (int)(((uint)DAT_14cb9e2b4 << 0x10 | uVar8) +
                                     (int)((ulonglong)DAT_14cb9e2b4 >> 0x20) +
                                     (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                              (longlong)DAT_14cb9e290 - 1U) * 4);
    while (iVar1 != -1) {
      plVar6 = (longlong *)(DAT_14cb9e248 + (longlong)iVar1 * 0x18);
      if (*plVar6 == DAT_14cb9e2b4) {
        iVar3 = *(int *)(puVar7 + (longlong)*(int *)((longlong)plVar6 + 0x14) * 4);
        if (iVar3 == iVar1) {
          puVar5 = (undefined4 *)(puVar7 + (longlong)*(int *)((longlong)plVar6 + 0x14) * 4);
        }
        else {
          do {
            lVar4 = (longlong)iVar3;
            iVar3 = *(int *)(DAT_14cb9e248 + 0x10 + lVar4 * 0x18);
          } while (iVar3 != iVar1);
          puVar5 = (undefined4 *)(DAT_14cb9e248 + lVar4 * 0x18 + 0x10);
        }
        *puVar5 = (int)plVar6[2];
        FUN_143fdc78c();
        break;
      }
      iVar1 = (int)plVar6[2];
    }
  }
  if (DAT_14cb9e240 == &DAT_14cb9e2b0) {
    DAT_14cb9e240 = (undefined4 *)0x0;
  }
  if (DAT_14cb9e2f0 != 0) {
    plVar6 = &DAT_14cb9e310;
    if (DAT_14cb9e300 != (longlong *)0x0) {
      plVar6 = DAT_14cb9e300;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (DAT_14cb9e2d8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143fd8212 FUN_143fd8212 body=777 status=ok
// SIG undefined FUN_143fd8212(void)

undefined8 * FUN_143fd8212(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  void *_Src;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c6b9f8();
  puVar1 = (uint *)(param_1 + 0x5a);
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
  *param_1 = &PTR_FUN_14b579990;
  *(undefined4 *)(param_1 + 0x16) = 0x467119;
  param_1[0x17] = "uiextension";
  lVar6 = FUN_143fb1162();
  if (lVar6 == 0) {
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
    FUN_1400bbfc4(&local_60,lVar6);
    *(undefined4 *)(param_1 + 0x5b) = local_60;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_5c;
    *(undefined4 *)(param_1 + 0x5c) = uStack_58;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_54;
    if (param_1 + 0x5b == (undefined8 *)&local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_44;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    iVar5 = DAT_14c9647dc;
    uVar2 = *(uint *)(lVar6 + 0xc);
    if (cVar4 != '\0') {
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_143fd8418;
      }
    }
    *puVar1 = uVar2;
    if ((int)uVar2 < iVar5) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar7;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar7;
      }
    }
    *(int *)((longlong)param_1 + 0x2d4) = iVar5;
  }
LAB_143fd8418:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar5 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar5;
  if (iVar5 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar5);
    if (iVar5 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar5 * 2);
    }
  }
  FUN_1400b22c2(local_70,"GbxUIUMG.UIExtension");
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143fd851c FUN_143fd851c body=82 status=ok
// SIG undefined FUN_143fd851c(void)

void FUN_143fd851c(longlong *param_1)

{
  undefined8 uVar1;
  
  (**(code **)(param_1[0x8e] + 0x30))(param_1 + 0x8e);
  FUN_143ae656e(param_1);
  uVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_148b66d48(param_1 + 0x86,uVar1,param_1 + 0x98);
  return;
}



// FUNCTION 143fd856e FUN_143fd856e body=181 status=ok
// SIG undefined FUN_143fd856e(void)

void FUN_143fd856e(longlong param_1)

{
  if ((*(byte **)(param_1 + 0x458) != (byte *)0x0) && ((**(byte **)(param_1 + 0x458) & 1) != 0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb0c040) {
      FUN_144b3d300(&DAT_14cb0c040);
      if (DAT_14cb0c040 == -1) {
        FUN_145e17f72(&DAT_14cb0bff0);
        atexit(FUN_14374ca90);
        _Init_thread_footer(&DAT_14cb0c040);
      }
    }
    FUN_1402eb48e(*(undefined8 *)(*(longlong *)(param_1 + 0x458) + 0x28),param_1 + 0x438);
    **(byte **)(param_1 + 0x458) = **(byte **)(param_1 + 0x458) & 0xfe;
  }
  *(undefined8 *)(param_1 + 0x460) = 0;
  FUN_14821d340(param_1);
  return;
}



// FUNCTION 143fd8624 FUN_143fd8624 body=499 status=ok
// SIG undefined FUN_143fd8624(void)

void FUN_143fd8624(undefined1 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0x470);
  (**(code **)(*(longlong *)(param_1 + 0x470) + 0x40))(plVar1);
  if (param_1[0x4c3] == '\x01') {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  FUN_143ae7220(param_1);
  if (*(longlong *)(param_1 + 0x518) != 0) {
    lVar3 = FUN_14779c2fc(param_1);
    if (lVar3 != 0) {
      iVar2 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x38))(lVar3 + 0x28);
      if (*(longlong *)(param_1 + 0x528) != 0) {
        FUN_14480f766(lVar3 + 0x280);
      }
      FUN_14779b100(param_1,*(undefined8 *)(param_1 + 0x518));
      if (iVar2 == 1) {
        local_38 = param_1;
        FUN_1447cd2ec(param_1 + 0x4b0);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x510) != 0) {
    FUN_14779b100(param_1);
  }
  if (*(longlong *)(param_1 + 0x508) != 0) {
    local_48 = param_1[0x4d8];
    local_50 = *(undefined4 *)(param_1 + 0x4d4);
    local_58 = (uint)(byte)param_1[0x4d0];
    lVar3 = FUN_14333c8c0(param_1,*(longlong *)(param_1 + 0x508),*(undefined4 *)(param_1 + 0x4c8),
                          *(undefined4 *)(param_1 + 0x4cc));
    if (lVar3 != 0) {
      local_38 = &LAB_148b66f22;
      local_30 = 0;
      FUN_148b66e22(lVar3 + 0x280,&local_28,param_1);
      *(undefined8 *)(param_1 + 0x520) = local_28;
      goto LAB_143fd87fe;
    }
  }
  local_38 = param_1;
  FUN_1447cd2ec(param_1 + 0x480);
  if (*(longlong *)(param_1 + 0x510) != 0) {
    local_48 = param_1[0x4ec];
    local_50 = *(undefined4 *)(param_1 + 0x4e8);
    local_58 = (uint)(byte)param_1[0x4e4];
    FUN_14333c8c0(param_1,*(longlong *)(param_1 + 0x510),*(undefined4 *)(param_1 + 0x4dc),
                  *(undefined4 *)(param_1 + 0x4e0));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
LAB_143fd87fe:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fd881e FUN_143fd881e body=154 status=ok
// SIG undefined FUN_143fd881e(void)

void FUN_143fd881e(longlong param_1)

{
  undefined1 auStack_58 [32];
  uint local_38;
  undefined4 local_30;
  undefined1 local_28;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = param_1;
  FUN_1447cd2ec(param_1 + 0x480);
  if (*(longlong *)(param_1 + 0x510) != 0) {
    local_28 = *(undefined1 *)(param_1 + 0x4ec);
    local_30 = *(undefined4 *)(param_1 + 0x4e8);
    local_38 = (uint)*(byte *)(param_1 + 0x4e4);
    FUN_14333c8c0(param_1,*(longlong *)(param_1 + 0x510),*(undefined4 *)(param_1 + 0x4dc),
                  *(undefined4 *)(param_1 + 0x4e0));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fd88bc FUN_143fd88bc body=422 status=ok
// SIG undefined FUN_143fd88bc(void)

void FUN_143fd88bc(undefined1 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)(param_1 + 0x470) + 0x48))(param_1 + 0x470);
  if (*(longlong *)(param_1 + 0x508) != 0) {
    lVar2 = FUN_14779c2fc(param_1);
    if (lVar2 != 0) {
      iVar1 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x38))(lVar2 + 0x28);
      if (*(longlong *)(param_1 + 0x520) != 0) {
        FUN_14480f766(lVar2 + 0x280);
      }
      FUN_14779b100(param_1,*(undefined8 *)(param_1 + 0x508));
      if (iVar1 == 1) {
        local_38 = param_1;
        FUN_1447cd2ec(param_1 + 0x4a0);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x510) != 0) {
    FUN_14779b100(param_1);
  }
  if (*(longlong *)(param_1 + 0x518) != 0) {
    local_48 = param_1[0x500];
    local_50 = *(undefined4 *)(param_1 + 0x4fc);
    local_58 = (uint)(byte)param_1[0x4f8];
    lVar2 = FUN_14333c8c0(param_1,*(longlong *)(param_1 + 0x518),*(undefined4 *)(param_1 + 0x4f0),
                          *(undefined4 *)(param_1 + 0x4f4));
    if (lVar2 != 0) {
      local_38 = &LAB_148b66f30;
      local_30 = 0;
      FUN_148b66e22(lVar2 + 0x280,&local_28,param_1);
      *(undefined8 *)(param_1 + 0x528) = local_28;
      goto LAB_143fd8976;
    }
  }
  local_38 = param_1;
  FUN_1447cd2ec(param_1 + 0x490);
  if (param_1[0x4c5] == '\x01') {
    FUN_14779af90(param_1);
  }
LAB_143fd8976:
  FUN_143ae7316(param_1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fd8a64 FUN_143fd8a64 body=93 status=ok
// SIG undefined FUN_143fd8a64(void)

void FUN_143fd8a64(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_1;
  FUN_1447cd2ec(param_1 + 0x490);
  if (*(char *)(param_1 + 0x4c5) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fd8ad0 FUN_143fd8ad0 body=1189 status=ok
// SIG undefined FUN_143fd8ad0(void)

void FUN_143fd8ad0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 **local_b0;
  undefined8 **local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar4 = (**(code **)(*param_1 + 0x180))();
  lVar5 = FUN_148b64ef8(uVar4);
  if (lVar5 == 0) goto LAB_143fd8b0e;
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  uVar4 = FUN_1405e2bf2();
  uStack_60 = CONCAT44(uStack_60._4_4_,1);
  FUN_140a0062e(&local_68,0);
  *local_68 = uVar4;
  FUN_148b672ac(&local_68,param_1 + 0x4b);
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  FUN_1446efa72(&local_90,0,3,0x10);
  puVar3 = local_90;
  local_88 = 3;
  *local_90 = &PTR_LAB_14b5a44f0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_90[2] = lVar6;
  *local_90 = &PTR_FUN_14b5a46b0;
  local_90[3] = 0;
  iVar7 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_90 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar7 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar7 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar7 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar7 = iVar8;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar7;
  puVar3[4] = &LAB_148b6730a;
  *(undefined4 *)(puVar3 + 5) = 0;
  lVar9 = param_1[0x4a];
  local_58 = 0;
  local_50 = 0;
  FUN_148b6d5a0(&local_58,&local_90);
  local_b8 = (char)lVar9;
  local_b0 = &local_68;
  local_a8 = (undefined8 **)&local_58;
  FUN_143fd6b6c(lVar5,&local_80,param_1 + 0x49,0);
  if (local_88 == 0) {
LAB_143fd8ccd:
    if (local_90 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_90 != (undefined8 *)0x0) {
    (**(code **)*local_90)(local_90,0);
    FUN_1446efa72(&local_90,0,0,0x10);
    local_88 = 0;
    goto LAB_143fd8ccd;
  }
  plVar1 = param_1 + 0x51;
  iVar7 = (int)param_1[0x52];
  lVar9 = (longlong)iVar7;
  *(uint *)(param_1 + 0x52) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0x294) < iVar7 + 1U) {
    FUN_148b6f306(plVar1,iVar7);
  }
  lVar6 = *plVar1;
  *(undefined8 *)(lVar6 + lVar9 * 0x18) = local_80;
  *(undefined8 *)(lVar6 + 8 + lVar9 * 0x18) = local_78;
  *(undefined8 *)(lVar6 + 0x10 + lVar9 * 0x18) = local_70;
  local_a0 = (undefined8 *)0x0;
  local_98 = 0;
  FUN_1446efa72(&local_a0,0,3,0x10);
  puVar3 = local_a0;
  local_98 = 3;
  *local_a0 = &PTR_LAB_14b5a44f0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_a0[2] = lVar6;
  *local_a0 = &PTR_FUN_14b5a46b0;
  local_a0[3] = 0;
  iVar7 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_a0 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar7 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar7 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar7 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar7 = iVar8;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar7;
  puVar3[4] = &LAB_148b6730a;
  *(undefined4 *)(puVar3 + 5) = 0;
  lVar9 = param_1[0x4a];
  uVar4 = (**(code **)(*param_1 + 0x2d0))(param_1);
  local_b0 = &local_68;
  local_b8 = (char)lVar9;
  local_a8 = &local_a0;
  FUN_143fd6b6c(lVar5,&local_80,param_1 + 0x49,uVar4);
  iVar7 = (int)param_1[0x52];
  lVar5 = (longlong)iVar7;
  *(uint *)(param_1 + 0x52) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0x294) < iVar7 + 1U) {
    FUN_148b6f306(plVar1,iVar7);
  }
  lVar9 = *plVar1;
  *(undefined8 *)(lVar9 + lVar5 * 0x18) = local_80;
  *(undefined8 *)(lVar9 + 8 + lVar5 * 0x18) = local_78;
  *(undefined8 *)(lVar9 + 0x10 + lVar5 * 0x18) = local_70;
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143fd8b0e:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fd8f76 FUN_143fd8f76 body=613 status=ok
// SIG undefined FUN_143fd8f76(void)

void FUN_143fd8f76(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 **local_90;
  undefined8 **local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = (**(code **)(*param_1 + 0x180))();
  lVar4 = FUN_148b64ef8(uVar3);
  if (lVar4 != 0) {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    uVar3 = FUN_1405e2bf2();
    uStack_50 = CONCAT44(uStack_50._4_4_,1);
    FUN_140a0062e(&local_58,0);
    *local_58 = uVar3;
    FUN_148b672ac(&local_58,param_1 + 0x4b);
    local_80 = (undefined8 *)0x0;
    local_78 = 0;
    FUN_1446efa72(&local_80,0,3,0x10);
    puVar2 = local_80;
    local_78 = 3;
    *local_80 = &PTR_LAB_14b5a44f0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_80[2] = lVar5;
    *local_80 = &PTR_FUN_14b5a46b0;
    local_80[3] = 0;
    iVar6 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_80 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar6 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar6 = *(int *)(lVar8 + 0x10);
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(lVar8 + 0x10) = iVar7;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar6 = iVar7;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar6;
    puVar2[4] = &LAB_148b6730a;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_98 = (undefined1)param_1[0x4a];
    local_90 = &local_58;
    local_88 = &local_80;
    FUN_143fd6b6c(lVar4,&local_70,param_1 + 0x49,param_3);
    iVar6 = (int)param_1[0x52];
    lVar4 = (longlong)iVar6;
    *(uint *)(param_1 + 0x52) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0x294) < iVar6 + 1U) {
      FUN_148b6f306(param_1 + 0x51,iVar6);
    }
    lVar8 = param_1[0x51];
    *(undefined8 *)(lVar8 + lVar4 * 0x18) = local_70;
    *(undefined8 *)(lVar8 + 8 + lVar4 * 0x18) = local_68;
    *(undefined8 *)(lVar8 + 0x10 + lVar4 * 0x18) = local_60;
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fd91dc FUN_143fd91dc body=2525 status=ok
// SIG undefined FUN_143fd91dc(void)

void FUN_143fd91dc(longlong param_1,char param_2,longlong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  code *pcVar12;
  int iVar13;
  code *pcVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  code *local_60;
  int local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pcVar12 = *(code **)(param_3 + 0x28);
  if (pcVar12 == (code *)0x0) {
LAB_143fd9241:
    local_68 = (code *)0x0;
    pcVar14 = (code *)0x0;
  }
  else {
    if (DAT_14c949118 == 0) {
      local_68 = FUN_140631fbe;
      if (DAT_14c963f04 == '\0') {
        uVar8 = FUN_140011aa6();
        lVar7 = FUN_140011c0e(uVar8,0x250,8);
      }
      else {
        lVar7 = FUN_14001cc68(0x250,8);
      }
      DAT_14c949118 = lVar7;
      FUN_1446f470e(local_50,L"Class",1);
      local_80 = &local_68;
      local_88 = &LAB_146891e90;
      local_90 = (code *)&LAB_146273097;
      local_a0 = L"Engine";
      local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
      local_a8 = 0x20;
      local_b0 = 0x10000000;
      local_b8._0_4_ = 8;
      FUN_14574b4b2(lVar7);
      DAT_14c949118 = lVar7;
      if (DAT_14c951858 == 0) {
        local_80 = &local_60;
        local_60 = FUN_1449e2820;
        local_70 = FUN_14081d0ea;
        local_78 = FUN_14081d0ea;
        local_88 = &LAB_1468c5283;
        local_90 = FUN_142809da0;
        local_98 = L"Engine";
        local_a0 = (wchar_t *)0x400000000;
        local_a8 = CONCAT44(local_a8._4_4_,0x10000000);
        local_b0 = 8;
        local_b8._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar11 = DAT_14c951858;
      lVar7 = DAT_14c949118;
      uVar8 = FUN_1449e2fb2();
      local_b8 = L"Class";
      FUN_14574b446(uVar8,lVar7,lVar11,L"/Script/CoreUObject");
    }
    if ((*(int *)(*(longlong *)(pcVar12 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pcVar12 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) goto LAB_143fd9241;
    pcVar14 = pcVar12;
    local_68 = pcVar12;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(pcVar12);
    }
  }
  if (param_2 != '\x01') {
    if (param_2 != '\0') goto LAB_143fd96dd;
    if ((((pcVar14 == (code *)0x0) || (lVar7 = FUN_1405e2bf2(), lVar7 == 0)) ||
        (*(int *)(pcVar14 + 0x38) < *(int *)(lVar7 + 0x38))) ||
       (pcVar2 = local_68,
       *(longlong *)(*(longlong *)(pcVar14 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
       lVar7 + 0x30)) {
      if (((*(int *)(param_1 + 0x260) < 1) || (*(longlong *)(param_1 + 0x270) == 0)) ||
         (*(int *)(param_1 + 0x26c) == 0)) goto LAB_143fd96dd;
      uVar4 = *(uint *)(param_1 + 0x268);
      if ((((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) ||
         (((plVar15 = (longlong *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
           plVar15 == (longlong *)0x0 ||
           ((((int)plVar15[2] != *(int *)(param_1 + 0x26c) ||
             ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) || (*plVar15 == 0)))) ||
          (lVar7 = FUN_1400796d0(*(undefined8 *)(*plVar15 + 0x10),*(longlong *)(param_1 + 0x270),1),
          lVar7 == 0)))) goto LAB_143fd96dd;
      FUN_148b4fc06(&local_60,(uint *)(param_1 + 0x268),pcVar12);
      pcVar2 = local_60;
      if (DAT_14c950c29 == 1) {
        if (local_60 == (code *)0x0) {
          pcVar2 = (code *)0x0;
        }
        else {
          FUN_1456cec3c(local_60);
        }
      }
    }
    local_68 = pcVar2;
    FUN_143fd9bba(param_1,&local_68,param_3);
    goto LAB_143fd96dd;
  }
  if (((pcVar14 == (code *)0x0) || (lVar7 = FUN_1405e2bf2(), lVar7 == 0)) ||
     ((*(int *)(pcVar14 + 0x38) < *(int *)(lVar7 + 0x38) ||
      (*(longlong *)(*(longlong *)(pcVar14 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
       lVar7 + 0x30)))) {
    pcVar2 = local_68;
    if (((0 < *(int *)(param_1 + 0x260)) && (*(longlong *)(param_1 + 0x270) != 0)) &&
       (*(int *)(param_1 + 0x26c) != 0)) {
      uVar4 = *(uint *)(param_1 + 0x268);
      if (((((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) &&
           (plVar15 = (longlong *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
           plVar15 != (longlong *)0x0)) &&
          (((int)plVar15[2] == *(int *)(param_1 + 0x26c) &&
           ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)))) &&
         ((*plVar15 != 0 &&
          ((lVar7 = FUN_1400796d0(*(undefined8 *)(*plVar15 + 0x10),*(longlong *)(param_1 + 0x270),1)
           , pcVar2 = local_68, lVar7 != 0 &&
           (FUN_148b4fc06(&local_60,(uint *)(param_1 + 0x268),pcVar12), pcVar14 = local_60,
           pcVar2 = pcVar14, DAT_14c950c29 == 1)))))) {
        if (local_60 == (code *)0x0) {
          pcVar14 = (code *)0x0;
          pcVar2 = pcVar14;
        }
        else {
          FUN_1456cec3c(local_60);
        }
      }
    }
    local_68 = pcVar2;
    if (pcVar14 == (code *)0x0) goto LAB_143fd96dd;
  }
  lVar7 = FUN_1405e2bf2();
  if (((lVar7 == 0) || (*(int *)(pcVar14 + 0x38) < *(int *)(lVar7 + 0x38))) ||
     (*(longlong *)(*(longlong *)(pcVar14 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
      lVar7 + 0x30)) goto LAB_143fd96dd;
  plVar15 = (longlong *)(param_1 + 0x2e8);
  lVar7 = FUN_1405e2bf2();
  if ((lVar7 == 0) || (*(int *)(pcVar14 + 0x38) < *(int *)(lVar7 + 0x38))) {
    local_60 = (code *)0x0;
    pcVar12 = (code *)0x0;
  }
  else {
    lVar11 = lVar7 + 0x30;
    lVar7 = *(longlong *)(*(longlong *)(pcVar14 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8);
    pcVar12 = (code *)0x0;
    if (lVar7 == lVar11) {
      pcVar12 = pcVar14;
    }
    if ((lVar7 == lVar11 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(pcVar12);
      pcVar12 = pcVar14;
    }
    if ((~DAT_14c950c29 & 1) == 0 && lVar7 == lVar11) {
      FUN_1456cec3c(pcVar12);
    }
    local_60 = pcVar12;
    if ((~DAT_14c950c29 & 1) == 0 && lVar7 == lVar11) {
      FUN_1456cec3c(pcVar12);
    }
    if ((pcVar12 != (code *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(pcVar12);
    }
  }
  uVar4 = ((uint)((ulonglong)pcVar12 >> 0x14) & 0xffff ^ (uint)((ulonglong)pcVar12 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar5 = FUN_148b6f39a(plVar15,uVar4 >> 0x10 ^ uVar4,&local_60);
  if ((iVar5 == -1) || (lVar7 = (longlong)iVar5 * 0x18 + *plVar15, lVar7 == 0)) goto LAB_143fd96dd;
  plVar1 = *(longlong **)(lVar7 + 8);
  if ((DAT_14c950c29 == 1) && (plVar1 != (longlong *)0x0)) {
    FUN_1456cec3c(plVar1);
  }
  else if (plVar1 == (longlong *)0x0) goto LAB_143fd96dd;
  uVar8 = FUN_143fb16ce();
  plVar9 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar8);
  if (plVar9 != (longlong *)0x0) {
    uVar8 = FUN_143fb16ce();
    plVar10 = (longlong *)FUN_144718840(plVar9,uVar8);
    if (((plVar9 != plVar10) && (plVar10 != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(*plVar10 + 0x28))(plVar10), cVar3 != '\0')) {
      local_60 = (code *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      pcVar12 = local_60;
      local_58 = 3;
      *(undefined ***)local_60 = &PTR_LAB_14b5a3e30;
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar11 == 0) {
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      *(longlong *)(local_60 + 0x10) = lVar11;
      *(undefined ***)local_60 = &PTR_FUN_14b5a4720;
      *(longlong *)(local_60 + 0x18) = 0;
      iVar5 = 0;
      if (param_1 != 0) {
        uVar4 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_60 + 0x18) = uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
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
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar6);
          }
          LOCK();
          iVar5 = *(int *)(lVar7 + 0x10);
          bVar16 = iVar5 == 0;
          if (bVar16) {
            *(int *)(lVar7 + 0x10) = iVar6;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar16) {
            iVar5 = iVar6;
          }
        }
      }
      *(int *)(pcVar12 + 0x1c) = iVar5;
      *(undefined1 **)(pcVar12 + 0x20) = &LAB_143fd9edc;
      *(undefined4 *)(pcVar12 + 0x28) = 0;
      if ((local_60 == (code *)0x0 || local_58 == 0) ||
         (cVar3 = (**(code **)(*(longlong *)local_60 + 0x30))(), cVar3 == '\0')) {
        if (local_58 == 0) goto LAB_143fd9916;
        if (local_60 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_60)(local_60,0);
          FUN_1446efa72(&local_60,0,0,0x10);
          goto LAB_143fd9906;
        }
      }
      else {
        plVar15 = plVar10 + 1;
        if (*(int *)((longlong)plVar10 + 0x1c) < 1) {
          iVar5 = (int)plVar10[2];
          iVar6 = (int)plVar10[3] + -1;
          *(int *)(plVar10 + 3) = iVar6;
          if (iVar6 <= iVar5) {
            iVar6 = iVar5;
            if (0 < iVar5) {
              iVar13 = 0;
              do {
                if (((*(int *)(*plVar15 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                    (plVar1 = *(longlong **)(*plVar15 + (longlong)iVar13 * 0x10),
                    plVar1 == (longlong *)0x0)) ||
                   (cVar3 = (**(code **)(*plVar1 + 0x28))(), cVar3 != '\0')) {
                  FUN_14005b288(plVar15,iVar13);
                  FUN_14005b248(plVar15);
                }
                else {
                  iVar13 = iVar13 + 1;
                }
                iVar6 = (int)plVar10[2];
              } while (iVar13 < iVar6);
            }
            iVar13 = 2;
            if (2 < iVar6 * 2) {
              iVar13 = iVar6 * 2;
            }
            *(int *)(plVar10 + 3) = iVar13;
            if ((iVar13 < iVar5) && (*(int *)((longlong)plVar10 + 0x14) != iVar6)) {
              FUN_14045812c(plVar15);
            }
          }
        }
        if (local_60 != (code *)0x0 && local_58 != 0) {
          (**(code **)(*(longlong *)local_60 + 0x38))(local_60,local_50);
        }
        iVar5 = (int)plVar10[2];
        *(uint *)(plVar10 + 2) = iVar5 + 1U;
        if (*(uint *)((longlong)plVar10 + 0x14) < iVar5 + 1U) {
          FUN_1447a71f6(plVar15,iVar5);
        }
        lVar7 = *plVar15;
        lVar11 = (longlong)iVar5 * 0x10;
        *(undefined8 *)(lVar7 + lVar11) = 0;
        *(undefined4 *)(lVar7 + 8 + lVar11) = 0;
        *(code **)(lVar7 + lVar11) = local_60;
        local_60 = (code *)0x0;
        *(int *)(lVar7 + 8 + lVar11) = local_58;
LAB_143fd9906:
        local_58 = 0;
LAB_143fd9916:
        if (local_60 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      *(undefined1 *)(plVar10 + 4) = 0;
      (**(code **)(*plVar10 + 0x18))(plVar10);
      goto LAB_143fd96dd;
    }
  }
  FUN_14772c756(param_1,plVar1,0);
  lVar7 = FUN_1405e2bf2();
  if ((lVar7 == 0) || (*(int *)(pcVar14 + 0x38) < *(int *)(lVar7 + 0x38))) {
    local_60 = (code *)0x0;
  }
  else {
    lVar11 = lVar7 + 0x30;
    lVar7 = *(longlong *)(*(longlong *)(pcVar14 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8);
    pcVar12 = (code *)0x0;
    if (lVar7 == lVar11) {
      pcVar12 = pcVar14;
    }
    if ((lVar7 == lVar11 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
      pcVar12 = pcVar14;
    }
    local_60 = pcVar12;
    if ((lVar7 == lVar11) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(pcVar12);
    }
  }
  FUN_148b6f46a(plVar15,&local_60);
LAB_143fd96dd:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fd9bba FUN_143fd9bba body=801 status=ok
// SIG undefined FUN_143fd9bba(void)

void FUN_143fd9bba(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = *param_2;
  if (lVar7 != 0) {
    lVar6 = FUN_1405e2bf2();
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x38) <= *(int *)(lVar7 + 0x38)) {
        lVar1 = *param_2;
        if (lVar1 != 0 &&
            *(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30) {
          plVar9 = param_1 + 0x5d;
          lVar7 = FUN_1405e2bf2();
          if ((lVar7 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar7 + 0x38))) {
            local_58 = (longlong *)0x0;
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar8 = (longlong *)*param_2;
            plVar10 = (longlong *)0x0;
            if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30) {
              plVar10 = plVar8;
            }
            plVar11 = plVar10;
            if (plVar10 != (longlong *)0x0 && DAT_14c950c29 == 1) {
              FUN_1456cec3c(plVar10);
              plVar11 = plVar8;
            }
            local_58 = plVar11;
            if ((~DAT_14c950c29 & 1) == 0 && plVar10 != (longlong *)0x0) {
              FUN_1456cec3c(plVar11);
            }
            if (((DAT_14c950c29 & 1) != 0) && (plVar11 != (longlong *)0x0)) {
              FUN_1456cec3c(plVar11);
            }
          }
          uVar4 = ((uint)((ulonglong)plVar11 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar11 >> 4)) *
                  -0x7a143595;
          uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
          iVar5 = FUN_148b6f39a(plVar9,uVar4 >> 0x10 ^ uVar4,&local_58);
          if (((iVar5 == -1) ||
              (lVar7 = *plVar9 + (longlong)iVar5 * 0x18, plVar8 = (longlong *)(lVar7 + 8),
              plVar8 == (longlong *)0x0 || lVar7 == 0)) || (lVar7 = *plVar8, lVar7 == 0)) {
            local_60 = *param_2;
            if ((local_60 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c();
            }
            lVar7 = FUN_1433335f4(param_1,&local_60);
            if (lVar7 == 0) goto LAB_143fd9c18;
            local_68 = lVar7;
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(lVar7);
            }
            local_70 = *(longlong *)(lVar7 + 0x10);
            if ((local_70 != 0) && ((DAT_14c950c29 & 1) != 0)) {
              FUN_1456cec3c();
            }
            local_58 = &local_70;
            local_50 = &local_68;
            FUN_148b6f670(plVar9,local_44);
            if ((param_1[0x50] != 0) && (*(int *)((longlong)param_1 + 0x27c) != 0)) {
              uVar4 = *(uint *)(param_1 + 0x4f);
              if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
                plVar9 = (longlong *)
                         ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
                if ((((plVar9 != (longlong *)0x0) &&
                     ((int)plVar9[2] == *(int *)((longlong)param_1 + 0x27c))) &&
                    (uVar2 = *(undefined8 *)(param_3 + 0x28),
                    (*(uint *)(plVar9 + 1) & 0x10200000) == 0)) && (*plVar9 != 0)) {
                  lVar6 = FUN_1400796d0(*(undefined8 *)(*plVar9 + 0x10),param_1[0x50],1);
                  if (lVar6 != 0) {
                    FUN_148b4fca0(param_1 + 0x4f,lVar7,uVar2);
                  }
                }
              }
            }
            if (*(longlong **)(param_3 + 0x30) != (longlong *)0x0 && *(int *)(param_3 + 0x38) != 0)
            {
              cVar3 = (**(code **)(**(longlong **)(param_3 + 0x30) + 0x30))();
              if (cVar3 != '\0') {
                if (*(int *)(param_3 + 0x38) == 0) {
                  plVar9 = (longlong *)0x0;
                }
                else {
                  plVar9 = *(longlong **)(param_3 + 0x30);
                }
                (**(code **)(*plVar9 + 0x58))(plVar9,lVar7);
              }
            }
            (**(code **)(*param_1 + 0x318))(param_1,lVar7);
          }
          (**(code **)(*param_1 + 800))(param_1,lVar7);
        }
      }
    }
  }
LAB_143fd9c18:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fd9eea FUN_143fd9eea body=119 status=ok
// SIG undefined FUN_143fd9eea(void)

void FUN_143fd9eea(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_143fb16ce();
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_143fb16ce();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        (**(code **)(*plVar3 + 0x30))(plVar3,param_1);
                    /* WARNING: Could not recover jumptable at 0x000143fd9f5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x20))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143fd9f62 FUN_143fd9f62 body=126 status=ok
// SIG undefined FUN_143fd9f62(void)

void FUN_143fd9f62(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_143fb16ce();
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_143fb16ce();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        FUN_140457ffc(plVar3 + 1,param_1);
        *(undefined1 *)(plVar3 + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x000143fd9fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143fd9fe0 FUN_143fd9fe0 body=538 status=ok
// SIG undefined FUN_143fd9fe0(void)

void FUN_143fd9fe0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x310);
  if (iVar2 == 0) {
    uVar9 = 1;
    uVar3 = 0;
    iVar5 = 0;
    iVar11 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x308);
    if (*(uint **)(param_1 + 0x308) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x2f8);
    }
    uVar4 = *puVar6;
    if (uVar4 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar3 = 0;
      uVar9 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar9 = uVar3;
      }
      iVar5 = 0;
      do {
        if (uVar9 == uVar3) goto LAB_143fda170;
        iVar5 = iVar5 + 0x20;
        uVar4 = puVar6[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar3 = 0;
      iVar5 = 0;
    }
    uVar9 = (ulonglong)(-uVar4 & uVar4);
    uVar1 = uVar9 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar11 = (iVar5 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar11) {
      iVar11 = iVar2;
    }
  }
  if (iVar11 != iVar2) {
    iVar7 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar7 = iVar2 + -1;
    }
    iVar7 = iVar7 >> 5;
    uVar4 = 0xffffffff;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x2e8) + 8 + (longlong)iVar11 * 0x18) == param_2) {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x2e8) + (longlong)iVar11 * 0x18);
        if ((DAT_14c950c29 == 1) && (lVar10 != 0)) {
          FUN_1456cec3c(lVar10);
        }
        local_50 = lVar10;
        if (((DAT_14c950c29 & 1) != 0) && (lVar10 != 0)) {
          FUN_1456cec3c(lVar10);
        }
        FUN_148b6f46a(param_1 + 0x2e8,&local_50);
        break;
      }
      uVar4 = uVar4 & ~(uint)uVar9;
      puVar6 = *(uint **)(param_1 + 0x308);
      if (*(uint **)(param_1 + 0x308) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x2f8);
      }
      iVar11 = (int)uVar3;
      lVar10 = (longlong)iVar11;
      uVar12 = puVar6[lVar10] & uVar4;
      if (uVar12 == 0) {
        iVar8 = iVar7;
        if (iVar7 < iVar11) {
          iVar8 = iVar11;
        }
        if (iVar7 <= iVar11) break;
        lVar13 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar12 = puVar6[lVar10 + lVar13 + 1];
          if (uVar12 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar8 - lVar10 == lVar13) goto LAB_143fda170;
        }
        uVar3 = (ulonglong)(iVar11 + (int)lVar13 + 1);
        uVar4 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar9 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar11 = (iVar5 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar2);
  }
LAB_143fda170:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_14772c756(param_1,param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fda1fc FUN_143fda1fc body=2582 status=ok
// SIG undefined FUN_143fda1fc(void)

void FUN_143fda1fc(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  int local_c8;
  undefined1 local_c0 [132];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((*(longlong *)(param_1 + 0x358) != 0) || (*(longlong *)(param_1 + 0x360) != 0)) &&
     (cVar3 = FUN_143af6288(param_1 + 0x3ac), cVar3 == '\0')) {
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    puVar2 = local_d0;
    local_c8 = 3;
    *local_d0 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_d0[2] = lVar4;
    *local_d0 = &PTR_FUN_14b5a4790;
    local_d0[3] = 0;
    iVar5 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_d0 + 3) = uVar1;
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
    *(int *)((longlong)puVar2 + 0x1c) = iVar5;
    puVar2[4] = &LAB_148b67318;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_14822698c(local_c0,param_1 + 0x358,*(undefined1 *)(param_1 + 0x2d0),&local_d0);
    FUN_143ae6e18(param_1,&local_3c,local_c0);
    *(undefined4 *)(param_1 + 0x3ac) = local_3c;
    FUN_14821d266(local_c0);
    if (local_c8 != 0) {
      if (local_d0 == (undefined8 *)0x0) goto LAB_143fda248;
      (**(code **)*local_d0)(local_d0,0);
      FUN_1446efa72(&local_d0,0,0,0x10);
      local_c8 = 0;
    }
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143fda248:
  if (((*(longlong *)(param_1 + 0x368) != 0) || (*(longlong *)(param_1 + 0x370) != 0)) &&
     (cVar3 = FUN_143af6288(param_1 + 0x3b0), cVar3 == '\0')) {
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    puVar2 = local_d0;
    local_c8 = 3;
    *local_d0 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_d0[2] = lVar4;
    *local_d0 = &PTR_FUN_14b5a4790;
    local_d0[3] = 0;
    iVar5 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_d0 + 3) = uVar1;
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
    *(int *)((longlong)puVar2 + 0x1c) = iVar5;
    puVar2[4] = &LAB_148b67326;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_14822698c(local_c0,param_1 + 0x368,*(undefined1 *)(param_1 + 0x2d0),&local_d0);
    FUN_143ae6e18(param_1,&local_3c,local_c0);
    *(undefined4 *)(param_1 + 0x3b0) = local_3c;
    FUN_14821d266(local_c0);
    if (local_c8 != 0) {
      if (local_d0 == (undefined8 *)0x0) goto LAB_143fda270;
      (**(code **)*local_d0)(local_d0,0);
      FUN_1446efa72(&local_d0,0,0,0x10);
      local_c8 = 0;
    }
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143fda270:
  if (((*(longlong *)(param_1 + 0x378) != 0) || (*(longlong *)(param_1 + 0x380) != 0)) &&
     (cVar3 = FUN_143af6288(param_1 + 0x3b4), cVar3 == '\0')) {
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    puVar2 = local_d0;
    local_c8 = 3;
    *local_d0 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_d0[2] = lVar4;
    *local_d0 = &PTR_FUN_14b5a4790;
    local_d0[3] = 0;
    iVar5 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_d0 + 3) = uVar1;
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
    *(int *)((longlong)puVar2 + 0x1c) = iVar5;
    puVar2[4] = &LAB_148b67334;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_14822698c(local_c0,param_1 + 0x378,*(undefined1 *)(param_1 + 0x2d0),&local_d0);
    FUN_143ae6e18(param_1,&local_3c,local_c0);
    *(undefined4 *)(param_1 + 0x3b4) = local_3c;
    FUN_14821d266(local_c0);
    if (local_c8 != 0) {
      if (local_d0 == (undefined8 *)0x0) goto LAB_143fda298;
      (**(code **)*local_d0)(local_d0,0);
      FUN_1446efa72(&local_d0,0,0,0x10);
      local_c8 = 0;
    }
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143fda298:
  if (((*(longlong *)(param_1 + 0x388) != 0) || (*(longlong *)(param_1 + 0x390) != 0)) &&
     (cVar3 = FUN_143af6288(param_1 + 0x3b8), cVar3 == '\0')) {
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    puVar2 = local_d0;
    local_c8 = 3;
    *local_d0 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_d0[2] = lVar4;
    *local_d0 = &PTR_FUN_14b5a4790;
    local_d0[3] = 0;
    iVar5 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_d0 + 3) = uVar1;
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
    *(int *)((longlong)puVar2 + 0x1c) = iVar5;
    puVar2[4] = &LAB_143fdac14;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_14822698c(local_c0,param_1 + 0x388,*(undefined1 *)(param_1 + 0x2d0),&local_d0);
    FUN_143ae6e18(param_1,&local_3c,local_c0);
    *(undefined4 *)(param_1 + 0x3b8) = local_3c;
    FUN_14821d266(local_c0);
    if (local_c8 != 0) {
      if (local_d0 == (undefined8 *)0x0) goto LAB_143fda2c0;
      (**(code **)*local_d0)(local_d0,0);
      FUN_1446efa72(&local_d0,0,0,0x10);
      local_c8 = 0;
    }
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143fda2c0:
  if (((*(longlong *)(param_1 + 0x398) != 0) || (*(longlong *)(param_1 + 0x3a0) != 0)) &&
     (cVar3 = FUN_143af6288(param_1 + 0x3bc), cVar3 == '\0')) {
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    puVar2 = local_d0;
    local_c8 = 3;
    *local_d0 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_d0[2] = lVar4;
    *local_d0 = &PTR_FUN_14b5a4790;
    local_d0[3] = 0;
    iVar5 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_d0 + 3) = uVar1;
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
    *(int *)((longlong)puVar2 + 0x1c) = iVar5;
    puVar2[4] = &LAB_143fdac22;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_14822698c(local_c0,param_1 + 0x398,*(undefined1 *)(param_1 + 0x2d0),&local_d0);
    FUN_143ae6e18(param_1,&local_3c,local_c0);
    *(undefined4 *)(param_1 + 0x3bc) = local_3c;
    FUN_14821d266(local_c0);
    if (local_c8 != 0) {
      if (local_d0 == (undefined8 *)0x0) goto LAB_143fda2e8;
      (**(code **)*local_d0)(local_d0,0);
      FUN_1446efa72(&local_d0,0,0,0x10);
      local_c8 = 0;
    }
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143fda2e8:
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fdac30 FUN_143fdac30 body=170 status=ok
// SIG undefined FUN_143fdac30(void)

void FUN_143fdac30(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143af6288(param_1 + 0x3ac);
  if (cVar1 != '\0') {
    FUN_143aea544(param_1,*(undefined4 *)(param_1 + 0x3ac));
  }
  cVar1 = FUN_143af6288(param_1 + 0x3b0);
  if (cVar1 != '\0') {
    FUN_143aea544(param_1,*(undefined4 *)(param_1 + 0x3b0));
  }
  cVar1 = FUN_143af6288(param_1 + 0x3b4);
  if (cVar1 != '\0') {
    FUN_143aea544(param_1,*(undefined4 *)(param_1 + 0x3b4));
  }
  cVar1 = FUN_143af6288(param_1 + 0x3b8);
  if (cVar1 != '\0') {
    FUN_143aea544(param_1,*(undefined4 *)(param_1 + 0x3b8));
  }
  cVar1 = FUN_143af6288(param_1 + 0x3bc);
  if (cVar1 != '\0') {
    FUN_143aea544(param_1,*(undefined4 *)(param_1 + 0x3bc));
    return;
  }
  return;
}



// FUNCTION 143fdacda FUN_143fdacda body=158 status=ok
// SIG undefined FUN_143fdacda(void)

void FUN_143fdacda(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143af6288(param_1 + 0x3ac);
  if (cVar1 != '\0') {
    FUN_143af6302(param_1 + 0x3ac);
  }
  cVar1 = FUN_143af6288(param_1 + 0x3b0);
  if (cVar1 != '\0') {
    FUN_143af6302(param_1 + 0x3b0);
  }
  cVar1 = FUN_143af6288(param_1 + 0x3b4);
  if (cVar1 != '\0') {
    FUN_143af6302(param_1 + 0x3b4);
  }
  cVar1 = FUN_143af6288(param_1 + 0x3b8);
  if (cVar1 != '\0') {
    FUN_143af6302(param_1 + 0x3b8);
  }
  cVar1 = FUN_143af6288(param_1 + 0x3bc);
  if (cVar1 != '\0') {
    FUN_143af6302(param_1 + 0x3bc);
    return;
  }
  return;
}



// FUNCTION 143fdad78 FUN_143fdad78 body=47 status=ok
// SIG undefined FUN_143fdad78(void)

void FUN_143fdad78(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb9c8d8);
                    /* WARNING: Could not recover jumptable at 0x000143fdada4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 143fdada8 FUN_143fdada8 body=47 status=ok
// SIG undefined FUN_143fdada8(void)

void FUN_143fdada8(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb9c8c8);
                    /* WARNING: Could not recover jumptable at 0x000143fdadd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 143fdae14 FUN_143fdae14 body=150 status=ok
// SIG undefined FUN_143fdae14(void)

longlong FUN_143fdae14(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x20))();
  if (lVar3 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(lVar3 + 0x38);
  if (lVar5 == 0) {
    uVar4 = FUN_143fb66e4();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar3 + 0x38) = lVar5;
  }
  if (*(longlong *)(lVar3 + 0x40) != 0) {
    return *(longlong *)(lVar3 + 0x40);
  }
  if (lVar5 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar3 + 0x30) != 0) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar5 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x30));
    }
    *(longlong *)(lVar3 + 0x40) = lVar5;
    return lVar5;
  }
  return 0;
}



// FUNCTION 143fdaeaa FUN_143fdaeaa body=168 status=ok
// SIG undefined FUN_143fdaeaa(void)

void FUN_143fdaeaa(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 1) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  (**(code **)(*param_1 + 0x18))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000143fdaeff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}



// FUNCTION 143fdaf52 FUN_143fdaf52 body=77 status=ok
// SIG undefined FUN_143fdaf52(void)

void FUN_143fdaf52(longlong *param_1,char param_2)

{
  longlong *plVar1;
  
  if ((char)param_1[0x5f] == param_2) {
    return;
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2d0))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x328))(plVar1);
  }
  *(char *)(param_1 + 0x5f) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000143fdaf98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4a0))(param_1);
  return;
}



// FUNCTION 143fdafa0 FUN_143fdafa0 body=1432 status=ok
// SIG undefined FUN_143fdafa0(void)

void FUN_143fdafa0(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  int local_d0;
  undefined1 local_c8 [132];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_143fd8624();
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  FUN_1446efa72(&local_d8,0,3,0x10);
  puVar2 = local_d8;
  local_d0 = 3;
  *local_d8 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_d8[2] = lVar3;
  *local_d8 = &PTR_FUN_14b5a48e0;
  local_d8[3] = 0;
  iVar5 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_d8 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar5 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar4;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar5 = iVar4;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar5;
  puVar2[4] = FUN_148b67bfe;
  *(undefined4 *)(puVar2 + 5) = 0;
  FUN_14822698c(local_c8,param_1 + 0x550,1,&local_d8);
  FUN_143ae6e18(param_1,&local_44,local_c8);
  *(undefined4 *)(param_1 + 0x580) = local_44;
  FUN_14821d266(local_c8);
  if (local_d0 == 0) {
LAB_143fdb10d:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = 0;
    goto LAB_143fdb10d;
  }
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  FUN_1446efa72(&local_d8,0,3,0x10);
  puVar2 = local_d8;
  local_d0 = 3;
  *local_d8 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_d8[2] = lVar3;
  *local_d8 = &PTR_FUN_14b5a48e0;
  local_d8[3] = 0;
  iVar5 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_d8 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar5 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar4;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar5 = iVar4;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar5;
  puVar2[4] = FUN_148b67cf8;
  *(undefined4 *)(puVar2 + 5) = 0;
  FUN_14822698c(local_c8,param_1 + 0x570,1,&local_d8);
  FUN_143ae6e18(param_1,&local_44,local_c8);
  *(undefined4 *)(param_1 + 0x588) = local_44;
  FUN_14821d266(local_c8);
  if (local_d0 == 0) {
LAB_143fdb24e:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = 0;
    goto LAB_143fdb24e;
  }
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  FUN_1446efa72(&local_d8,0,3,0x10);
  puVar2 = local_d8;
  local_d0 = 3;
  *local_d8 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_d8[2] = lVar3;
  *local_d8 = &PTR_FUN_14b5a48e0;
  local_d8[3] = 0;
  iVar5 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_d8 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar5 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar4;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar5 = iVar4;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar5;
  puVar2[4] = FUN_148b67d8a;
  *(undefined4 *)(puVar2 + 5) = 0;
  FUN_14822698c(local_c8,param_1 + 0x560,1,&local_d8);
  FUN_143ae6e18(param_1,&local_44,local_c8);
  *(undefined4 *)(param_1 + 0x584) = local_44;
  FUN_14821d266(local_c8);
  if (local_d0 != 0) {
    if (local_d8 == (undefined8 *)0x0) goto LAB_143fdb39d;
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = 0;
  }
  if (local_d8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143fdb39d:
  FUN_143aea544(param_1,*(undefined4 *)(param_1 + 0x584));
  FUN_148b67e2a(param_1);
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fdb53a FUN_143fdb53a body=327 status=ok
// SIG undefined FUN_143fdb53a(void)

undefined8 FUN_143fdb53a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_143aea5c2(param_1 + -0x538,*(undefined4 *)(param_1 + 0x4c));
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0x2a8))(param_3,&local_30);
    plVar3 = local_30;
    if ((0 < local_28) && (*local_30 != 0)) {
      lVar5 = FUN_14598396a();
      lVar6 = *plVar3;
      if (((lVar6 == 0) ||
          (((lVar5 == 0 || (lVar2 = *(longlong *)(lVar6 + 0x10), lVar2 == 0)) ||
           (*(int *)(lVar2 + 0x38) < *(int *)(lVar5 + 0x38))))) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30)) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        iVar4 = 0;
      }
      else {
        uVar1 = *(uint *)(lVar6 + 0xc);
        *(uint *)(param_1 + 0x10) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        iVar4 = *(int *)(lVar6 + 0x10);
        if (*(int *)(lVar6 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar8 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar8) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar4 = *(int *)(lVar6 + 0x10);
          bVar8 = iVar4 == 0;
          if (bVar8) {
            *(int *)(lVar6 + 0x10) = iVar7;
            iVar4 = 0;
          }
          UNLOCK();
          if (bVar8) {
            iVar4 = iVar7;
          }
        }
      }
      *(int *)(param_1 + 0x14) = iVar4;
    }
    if (local_30 != (longlong *)0x0) {
      FUN_1400020a8(local_30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fdb682 FUN_143fdb682 body=1963 status=ok
// SIG undefined FUN_143fdb682(void)

void FUN_143fdb682(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  int local_c8;
  undefined1 local_c0 [132];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_141318288();
  if ((*(longlong *)(param_1 + 0x558) != 0) || (*(longlong *)(param_1 + 0x560) != 0)) {
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    puVar2 = local_d0;
    local_c8 = 3;
    *local_d0 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_d0[2] = lVar3;
    *local_d0 = &PTR_FUN_14b5a4950;
    local_d0[3] = 0;
    iVar4 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_d0 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar4 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar4 = *(int *)(lVar6 + 0x10);
        bVar7 = iVar4 == 0;
        if (bVar7) {
          *(int *)(lVar6 + 0x10) = iVar5;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar7) {
          iVar4 = iVar5;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar4;
    puVar2[4] = FUN_148b68116;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_14822698c(local_c0,param_1 + 0x558,1,&local_d0);
    FUN_143ae6e18(param_1,&local_3c,local_c0);
    *(undefined4 *)(param_1 + 0x58c) = local_3c;
    FUN_14821d266(local_c0);
    if (local_c8 != 0) {
      if (local_d0 == (undefined8 *)0x0) goto LAB_143fdb815;
      (**(code **)*local_d0)(local_d0,0);
      FUN_1446efa72(&local_d0,0,0,0x10);
      local_c8 = 0;
    }
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143fdb815:
  if ((*(longlong *)(param_1 + 0x568) != 0) || (*(longlong *)(param_1 + 0x570) != 0)) {
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    puVar2 = local_d0;
    local_c8 = 3;
    *local_d0 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_d0[2] = lVar3;
    *local_d0 = &PTR_FUN_14b5a4950;
    local_d0[3] = 0;
    iVar4 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_d0 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar4 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar4 = *(int *)(lVar6 + 0x10);
        bVar7 = iVar4 == 0;
        if (bVar7) {
          *(int *)(lVar6 + 0x10) = iVar5;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar7) {
          iVar4 = iVar5;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar4;
    puVar2[4] = FUN_148b6813c;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_14822698c(local_c0,param_1 + 0x568,1,&local_d0);
    FUN_143ae6e18(param_1,&local_3c,local_c0);
    *(undefined4 *)(param_1 + 0x590) = local_3c;
    FUN_14821d266(local_c0);
    if (local_c8 != 0) {
      if (local_d0 == (undefined8 *)0x0) goto LAB_143fdb97f;
      (**(code **)*local_d0)(local_d0,0);
      FUN_1446efa72(&local_d0,0,0,0x10);
      local_c8 = 0;
    }
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143fdb97f:
  if ((*(longlong *)(param_1 + 0x578) != 0) || (*(longlong *)(param_1 + 0x580) != 0)) {
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    puVar2 = local_d0;
    local_c8 = 3;
    *local_d0 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_d0[2] = lVar3;
    *local_d0 = &PTR_FUN_14b5a4950;
    local_d0[3] = 0;
    iVar4 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_d0 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar4 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar4 = *(int *)(lVar6 + 0x10);
        bVar7 = iVar4 == 0;
        if (bVar7) {
          *(int *)(lVar6 + 0x10) = iVar5;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar7) {
          iVar4 = iVar5;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar4;
    puVar2[4] = FUN_148b6815c;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_14822698c(local_c0,param_1 + 0x578,1,&local_d0);
    FUN_143ae6e18(param_1,&local_3c,local_c0);
    *(undefined4 *)(param_1 + 0x594) = local_3c;
    FUN_14821d266(local_c0);
    if (local_c8 != 0) {
      if (local_d0 == (undefined8 *)0x0) goto LAB_143fdbae9;
      (**(code **)*local_d0)(local_d0,0);
      FUN_1446efa72(&local_d0,0,0,0x10);
      local_c8 = 0;
    }
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143fdbae9:
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0;
  FUN_1446efa72(&local_d0,0,3,0x10);
  puVar2 = local_d0;
  local_c8 = 3;
  *local_d0 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_d0[2] = lVar3;
  *local_d0 = &PTR_FUN_14b5a4950;
  local_d0[3] = 0;
  iVar4 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_d0 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar4 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar4 = iVar5;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar4;
  puVar2[4] = FUN_148b681be;
  *(undefined4 *)(puVar2 + 5) = 0;
  FUN_14822698c(local_c0,param_1 + 0x548,1,&local_d0);
  FUN_143ae6e18(param_1,&local_3c,local_c0);
  *(undefined4 *)(param_1 + 0x588) = local_3c;
  FUN_14821d266(local_c0);
  if (local_c8 != 0) {
    if (local_d0 == (undefined8 *)0x0) goto LAB_143fdbc38;
    (**(code **)*local_d0)(local_d0,0);
    FUN_1446efa72(&local_d0,0,0,0x10);
    local_c8 = 0;
  }
  if (local_d0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143fdbc38:
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fdbe2e FUN_143fdbe2e body=115 status=ok
// SIG undefined FUN_143fdbe2e(void)

void FUN_143fdbe2e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_148b68852();
  if (lVar2 == 0) {
    return;
  }
  cVar1 = FUN_148b0acec(lVar2);
  if (cVar1 == '\0') {
    if ((longlong)*(int *)(param_1 + 0x2e0) != 0) {
      lVar2 = 0;
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x2d8) + lVar2) == *(int *)(param_1 + 0x594)) {
          return;
        }
        lVar2 = lVar2 + 4;
      } while ((longlong)*(int *)(param_1 + 0x2e0) * 4 != lVar2);
    }
    FUN_143aea5c2(param_1);
    return;
  }
  FUN_143aea544(param_1,*(undefined4 *)(param_1 + 0x594));
  return;
}



// FUNCTION 143fdbea2 FUN_143fdbea2 body=181 status=ok
// SIG undefined FUN_143fdbea2(void)

void FUN_143fdbea2(longlong param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 == '\0') {
    FUN_143aea544(param_1,*(undefined4 *)(param_1 + 0x58c));
    FUN_143aea544(param_1,*(undefined4 *)(param_1 + 0x590));
    return;
  }
  lVar4 = (longlong)*(int *)(param_1 + 0x2e0);
  if (lVar4 != 0) {
    piVar2 = *(int **)(param_1 + 0x2d8);
    piVar3 = piVar2 + lVar4;
    lVar5 = 0;
    do {
      if (*(int *)((longlong)piVar2 + lVar5) == *(int *)(param_1 + 0x58c)) goto LAB_143fdbf31;
      lVar5 = lVar5 + 4;
    } while (lVar4 * 4 != lVar5);
  }
  FUN_143aea5c2(param_1);
  if ((longlong)*(int *)(param_1 + 0x2e0) == 0) {
    iVar1 = *(int *)(param_1 + 0x590);
  }
  else {
    piVar2 = *(int **)(param_1 + 0x2d8);
    piVar3 = piVar2 + *(int *)(param_1 + 0x2e0);
LAB_143fdbf31:
    iVar1 = *(int *)(param_1 + 0x590);
    do {
      if (*piVar2 == iVar1) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar3);
  }
  FUN_143aea5c2(param_1,iVar1);
  return;
}



// FUNCTION 143fdbf58 FUN_143fdbf58 body=128 status=ok
// SIG undefined FUN_143fdbf58(void)

void FUN_143fdbf58(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb9dcd0;
  if (DAT_14cb9dd04 != 0) {
    *(int *)(DAT_14cb9dcd0 + (longlong)DAT_14cb9dd00 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb9dd04) {
    iVar4 = DAT_14cb9dd00;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cb9dd04 = DAT_14cb9dd04 + 1;
  puVar3 = &DAT_14cb9dce0;
  if (DAT_14cb9dcf0 != (undefined4 *)0x0) {
    puVar3 = DAT_14cb9dcf0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb9dd00 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 143fdbfd8 FUN_143fdbfd8 body=128 status=ok
// SIG undefined FUN_143fdbfd8(void)

void FUN_143fdbfd8(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb9dde8;
  if (DAT_14cb9de1c != 0) {
    *(int *)(DAT_14cb9dde8 + (longlong)DAT_14cb9de18 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb9de1c) {
    iVar4 = DAT_14cb9de18;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cb9de1c = DAT_14cb9de1c + 1;
  puVar3 = &DAT_14cb9ddf8;
  if (DAT_14cb9de08 != (undefined4 *)0x0) {
    puVar3 = DAT_14cb9de08;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb9de18 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 143fdc058 FUN_143fdc058 body=128 status=ok
// SIG undefined FUN_143fdc058(void)

void FUN_143fdc058(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb9def8;
  if (DAT_14cb9df2c != 0) {
    *(int *)(DAT_14cb9def8 + (longlong)DAT_14cb9df28 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb9df2c) {
    iVar4 = DAT_14cb9df28;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cb9df2c = DAT_14cb9df2c + 1;
  puVar3 = &DAT_14cb9df08;
  if (DAT_14cb9df18 != (undefined4 *)0x0) {
    puVar3 = DAT_14cb9df18;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb9df28 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 143fdc0d8 FUN_143fdc0d8 body=128 status=ok
// SIG undefined FUN_143fdc0d8(void)

void FUN_143fdc0d8(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb9e008;
  if (DAT_14cb9e03c != 0) {
    *(int *)(DAT_14cb9e008 + (longlong)DAT_14cb9e038 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb9e03c) {
    iVar4 = DAT_14cb9e038;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cb9e03c = DAT_14cb9e03c + 1;
  puVar3 = &DAT_14cb9e018;
  if (DAT_14cb9e028 != (undefined4 *)0x0) {
    puVar3 = DAT_14cb9e028;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb9e038 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 143fdc158 FUN_143fdc158 body=128 status=ok
// SIG undefined FUN_143fdc158(void)

void FUN_143fdc158(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb9e118;
  if (DAT_14cb9e14c != 0) {
    *(int *)(DAT_14cb9e118 + (longlong)DAT_14cb9e148 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb9e14c) {
    iVar4 = DAT_14cb9e148;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cb9e14c = DAT_14cb9e14c + 1;
  puVar3 = &DAT_14cb9e128;
  if (DAT_14cb9e138 != (undefined4 *)0x0) {
    puVar3 = DAT_14cb9e138;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb9e148 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 143fdc1d8 FUN_143fdc1d8 body=29 status=ok
// SIG undefined FUN_143fdc1d8(void)

undefined8 FUN_143fdc1d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fdc1f6 FUN_143fdc1f6 body=764 status=ok
// SIG undefined FUN_143fdc1f6(void)

void FUN_143fdc1f6(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_88 [32];
  undefined **local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb9e388) && (FUN_144b3d300(&DAT_14cb9e388), DAT_14cb9e388 == -1)) {
    lVar15 = DAT_14cb9e3a0;
    if (DAT_14cb9e3a0 == 0) {
      lVar15 = FUN_14570767c(&DAT_14cb9e3a0,0);
    }
    DAT_14cb9e380 = lVar15;
    _Init_thread_footer(&DAT_14cb9e388);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb9e398) && (FUN_144b3d300(&DAT_14cb9e398), DAT_14cb9e398 == -1)) {
    lVar15 = DAT_14cb9e3a0;
    if (DAT_14cb9e3a0 == 0) {
      lVar15 = FUN_14570767c(&DAT_14cb9e3a0,0);
    }
    DAT_14cb9e390 = lVar15;
    _Init_thread_footer(&DAT_14cb9e398);
  }
  FUN_1401abe9c(param_5,&local_58,param_3,param_3 + 0x10);
  if ((longlong)local_50 != 0) {
    puVar1 = (undefined4 *)(param_1 + 8);
    lVar15 = 0;
    do {
      uVar2 = *(ulonglong *)(local_58 + lVar15);
      if (((((uVar2 >> 0x20 != 0) && (uVar12 = (uint)uVar2, -1 < (int)uVar12)) &&
           ((int)uVar12 < DAT_14c9647dc)) &&
          ((plVar13 = (longlong *)
                      ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0xd & 0x3fff8))),
           plVar13 != (longlong *)0x0 && ((int)plVar13[2] == (int)(uVar2 >> 0x20))))) &&
         (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 &&
          (plVar13 = (longlong *)*plVar13, plVar13 != (longlong *)0x0)))) {
        lVar11 = FUN_145a6082c();
        if ((*(int *)(lVar11 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
            == lVar11 + 0x30)) {
          lVar11 = DAT_14cb9e3a0;
          if (DAT_14cb9e3a0 == 0) {
            lVar11 = FUN_14570767c(&DAT_14cb9e3a0,0);
          }
          local_60 = *(longlong *)(param_1 + 0x28);
          lVar14 = DAT_14cb9e380;
          if ((local_60 != DAT_14cb9e210) && (lVar14 = lVar11, local_60 == DAT_14cb9e218)) {
            lVar14 = DAT_14cb9e390;
          }
          local_68 = &PTR_FUN_14b5a32a0;
          lVar11 = FUN_14027385c(param_5 + 0x110);
          if (lVar11 != 0) {
            FUN_14027378e(lVar11,plVar13,lVar14,&local_68);
          }
          if (*(longlong *)(param_1 + 0x28) == DAT_14cb9e210) {
            cVar10 = FUN_143faf9d0((undefined4 *)((longlong)plVar13 + 0x394),puVar1);
            if (cVar10 == '\0') {
              uVar3 = *puVar1;
              uVar4 = *(undefined4 *)(param_1 + 0xc);
              uVar5 = *(undefined4 *)(param_1 + 0x10);
              uVar6 = *(undefined4 *)(param_1 + 0x14);
              uVar7 = *(undefined4 *)(param_1 + 0x1c);
              uVar8 = *(undefined4 *)(param_1 + 0x20);
              uVar9 = *(undefined4 *)(param_1 + 0x24);
              *(undefined4 *)((longlong)plVar13 + 0x3a4) = *(undefined4 *)(param_1 + 0x18);
              *(undefined4 *)(plVar13 + 0x75) = uVar7;
              *(undefined4 *)((longlong)plVar13 + 0x3ac) = uVar8;
              *(undefined4 *)(plVar13 + 0x76) = uVar9;
              *(undefined4 *)((longlong)plVar13 + 0x394) = uVar3;
              *(undefined4 *)(plVar13 + 0x73) = uVar4;
              *(undefined4 *)((longlong)plVar13 + 0x39c) = uVar5;
              *(undefined4 *)(plVar13 + 0x74) = uVar6;
              lVar11 = 0x378;
LAB_143fdc40c:
              (**(code **)(*plVar13 + lVar11))(plVar13);
            }
          }
          else if (*(longlong *)(param_1 + 0x28) == DAT_14cb9e218) {
            cVar10 = FUN_143faf9d0(plVar13 + 0x78,puVar1);
            if (cVar10 == '\0') {
              uVar3 = *puVar1;
              uVar4 = *(undefined4 *)(param_1 + 0xc);
              uVar5 = *(undefined4 *)(param_1 + 0x10);
              uVar6 = *(undefined4 *)(param_1 + 0x14);
              uVar7 = *(undefined4 *)(param_1 + 0x1c);
              uVar8 = *(undefined4 *)(param_1 + 0x20);
              uVar9 = *(undefined4 *)(param_1 + 0x24);
              *(undefined4 *)(plVar13 + 0x7a) = *(undefined4 *)(param_1 + 0x18);
              *(undefined4 *)((longlong)plVar13 + 0x3d4) = uVar7;
              *(undefined4 *)(plVar13 + 0x7b) = uVar8;
              *(undefined4 *)((longlong)plVar13 + 0x3dc) = uVar9;
              *(undefined4 *)(plVar13 + 0x78) = uVar3;
              *(undefined4 *)((longlong)plVar13 + 0x3c4) = uVar4;
              *(undefined4 *)(plVar13 + 0x79) = uVar5;
              *(undefined4 *)((longlong)plVar13 + 0x3cc) = uVar6;
              lVar11 = 0x380;
              goto LAB_143fdc40c;
            }
          }
        }
      }
      lVar15 = lVar15 + 8;
    } while ((longlong)local_50 * 8 != lVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fdc4f4 FUN_143fdc4f4 body=29 status=ok
// SIG undefined FUN_143fdc4f4(void)

undefined8 FUN_143fdc4f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fdc512 FUN_143fdc512 body=408 status=ok
// SIG undefined FUN_143fdc512(void)

undefined8 * FUN_143fdc512(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined1 auStack_88 [44];
  undefined2 local_5c;
  undefined1 local_5a;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined3 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != 0) {
    lVar2 = FUN_145a6082c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      uStack_58 = uStack_58 & 0xffffff;
      uStack_54 = 0x3f8000;
      uStack_50 = 0x3f8000;
      uStack_4c = 0x3f8000;
      uStack_48 = 0x3f8000;
      lVar2 = *(longlong *)(param_1 + 8);
      if (lVar2 == DAT_14cb9e210) {
        uVar8 = *(undefined4 *)(param_3 + 0x394);
        uVar6 = *(undefined4 *)(param_3 + 0x398);
        uVar9 = *(undefined1 *)(param_3 + 0x39c);
        uStack_48 = (undefined3)((uint)*(undefined4 *)(param_3 + 0x3ac) >> 8);
        uStack_58 = *(uint *)(param_3 + 0x39d);
        uStack_54 = *(undefined4 *)(param_3 + 0x3a1);
        uStack_50 = *(undefined4 *)(param_3 + 0x3a5);
        uStack_4c = *(undefined4 *)(param_3 + 0x3a9);
        puVar5 = (undefined1 *)(param_3 + 0x3b0);
        lVar3 = 0x3b1;
LAB_143fdc634:
        uVar7 = *puVar5;
        local_5a = *(undefined1 *)(param_3 + 2 + lVar3);
        local_5c = *(undefined2 *)(param_3 + lVar3);
      }
      else {
        uVar6 = 0;
        uVar8 = 0;
        uVar9 = 0;
        uVar7 = 0;
        if (lVar2 == DAT_14cb9e218) {
          uVar8 = *(undefined4 *)(param_3 + 0x3c0);
          uVar6 = *(undefined4 *)(param_3 + 0x3c4);
          uVar9 = *(undefined1 *)(param_3 + 0x3c8);
          uStack_48 = (undefined3)((uint)*(undefined4 *)(param_3 + 0x3d8) >> 8);
          uStack_58 = *(uint *)(param_3 + 0x3c9);
          uStack_54 = *(undefined4 *)(param_3 + 0x3cd);
          uStack_50 = *(undefined4 *)(param_3 + 0x3d1);
          uStack_4c = *(undefined4 *)(param_3 + 0x3d5);
          puVar5 = (undefined1 *)(param_3 + 0x3dc);
          lVar3 = 0x3dd;
          goto LAB_143fdc634;
        }
      }
      bVar1 = *(byte *)(param_2 + 4);
      puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
      *param_2 = puVar4;
      *(byte *)(param_2 + 4) = (bVar1 & 0xfc) + 1;
      *puVar4 = &PTR_FUN_14b5a32b8;
      *(undefined4 *)(puVar4 + 1) = uVar8;
      *(undefined4 *)((longlong)puVar4 + 0xc) = uVar6;
      *(undefined1 *)(puVar4 + 2) = uVar9;
      *(uint *)(puVar4 + 4) = CONCAT31(uStack_48,uStack_4c._3_1_);
      *(uint *)((longlong)puVar4 + 0x11) = uStack_58;
      *(undefined4 *)((longlong)puVar4 + 0x15) = uStack_54;
      *(undefined4 *)((longlong)puVar4 + 0x19) = uStack_50;
      *(undefined4 *)((longlong)puVar4 + 0x1d) = uStack_4c;
      *(undefined1 *)((longlong)puVar4 + 0x24) = uVar7;
      *(undefined1 *)((longlong)puVar4 + 0x27) = local_5a;
      *(undefined2 *)((longlong)puVar4 + 0x25) = local_5c;
      puVar4[5] = lVar2;
      goto LAB_143fdc541;
    }
  }
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc | 2;
LAB_143fdc541:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fdc6ac FUN_143fdc6ac body=29 status=ok
// SIG undefined FUN_143fdc6ac(void)

undefined8 FUN_143fdc6ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fdc6ca FUN_143fdc6ca body=193 status=ok
// SIG undefined FUN_143fdc6ca(void)

void FUN_143fdc6ca(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  
  if (param_2 != (longlong *)0x0) {
    lVar9 = FUN_145a6082c();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
        lVar9 + 0x30)) {
      if (*(longlong *)(param_1 + 0x28) == DAT_14cb9e210) {
        cVar8 = FUN_143faf9d0((undefined4 *)((longlong)param_2 + 0x394),(undefined4 *)(param_1 + 8))
        ;
        if (cVar8 == '\0') {
          uVar1 = *(undefined4 *)(param_1 + 8);
          uVar2 = *(undefined4 *)(param_1 + 0xc);
          uVar3 = *(undefined4 *)(param_1 + 0x10);
          uVar4 = *(undefined4 *)(param_1 + 0x14);
          uVar5 = *(undefined4 *)(param_1 + 0x1c);
          uVar6 = *(undefined4 *)(param_1 + 0x20);
          uVar7 = *(undefined4 *)(param_1 + 0x24);
          *(undefined4 *)((longlong)param_2 + 0x3a4) = *(undefined4 *)(param_1 + 0x18);
          *(undefined4 *)(param_2 + 0x75) = uVar5;
          *(undefined4 *)((longlong)param_2 + 0x3ac) = uVar6;
          *(undefined4 *)(param_2 + 0x76) = uVar7;
          *(undefined4 *)((longlong)param_2 + 0x394) = uVar1;
          *(undefined4 *)(param_2 + 0x73) = uVar2;
          *(undefined4 *)((longlong)param_2 + 0x39c) = uVar3;
          *(undefined4 *)(param_2 + 0x74) = uVar4;
          lVar9 = 0x378;
LAB_143fdc77a:
                    /* WARNING: Could not recover jumptable at 0x000143fdc787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_2 + lVar9))(param_2);
          return;
        }
      }
      else if (*(longlong *)(param_1 + 0x28) == DAT_14cb9e218) {
        cVar8 = FUN_143faf9d0(param_2 + 0x78,(undefined4 *)(param_1 + 8));
        if (cVar8 == '\0') {
          uVar1 = *(undefined4 *)(param_1 + 8);
          uVar2 = *(undefined4 *)(param_1 + 0xc);
          uVar3 = *(undefined4 *)(param_1 + 0x10);
          uVar4 = *(undefined4 *)(param_1 + 0x14);
          uVar5 = *(undefined4 *)(param_1 + 0x1c);
          uVar6 = *(undefined4 *)(param_1 + 0x20);
          uVar7 = *(undefined4 *)(param_1 + 0x24);
          *(undefined4 *)(param_2 + 0x7a) = *(undefined4 *)(param_1 + 0x18);
          *(undefined4 *)((longlong)param_2 + 0x3d4) = uVar5;
          *(undefined4 *)(param_2 + 0x7b) = uVar6;
          *(undefined4 *)((longlong)param_2 + 0x3dc) = uVar7;
          *(undefined4 *)(param_2 + 0x78) = uVar1;
          *(undefined4 *)((longlong)param_2 + 0x3c4) = uVar2;
          *(undefined4 *)(param_2 + 0x79) = uVar3;
          *(undefined4 *)((longlong)param_2 + 0x3cc) = uVar4;
          lVar9 = 0x380;
          goto LAB_143fdc77a;
        }
      }
    }
  }
  return;
}



// FUNCTION 143fdc78c FUN_143fdc78c body=128 status=ok
// SIG undefined FUN_143fdc78c(void)

void FUN_143fdc78c(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb9e248;
  if (DAT_14cb9e27c != 0) {
    *(int *)(DAT_14cb9e248 + (longlong)DAT_14cb9e278 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb9e27c) {
    iVar4 = DAT_14cb9e278;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cb9e27c = DAT_14cb9e27c + 1;
  puVar3 = &DAT_14cb9e258;
  if (DAT_14cb9e268 != (undefined4 *)0x0) {
    puVar3 = DAT_14cb9e268;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb9e278 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 143fdc80c FUN_143fdc80c body=136 status=ok
// SIG undefined FUN_143fdc80c(void)

void FUN_143fdc80c(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143fdc894 FUN_143fdc894 body=299 status=ok
// SIG undefined FUN_143fdc894(void)

undefined4 *
FUN_143fdc894(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_143fdc9c0(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  *(undefined8 *)(local_48 + 2) = *puVar1;
  local_48[4] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_143fdcc78(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[5] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[4] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_143fdcd0a(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fdc9c0 FUN_143fdc9c0 body=696 status=ok
// SIG undefined FUN_143fdc9c0(void)

int * FUN_143fdc9c0(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_14482b872(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar7 = iVar8 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar7) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar7 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar5 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar2 = (uint)(uVar5 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar2 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar2 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar6) {
                    uVar14 = (ulonglong)bVar6;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_143fdcba3;
                    lVar4 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar4 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar10 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar7 = (int)param_1[5];
            }
          }
LAB_143fdcba3:
          iVar3 = (int)(uVar5 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar3) {
            iVar9 = iVar3 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar7);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar7 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar7 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar6 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar7 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar4 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar4 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar4 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 143fdcc78 FUN_143fdcc78 body=145 status=ok
// SIG undefined FUN_143fdcc78(void)

void FUN_143fdcc78(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

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
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_143fdc80c(iVar2,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_143fdccdf;
        }
        iVar8 = piVar1[4];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_143fdccdf:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 143fdcd0a FUN_143fdcd0a body=614 status=ok
// SIG undefined FUN_143fdcd0a(void)

void FUN_143fdcd0a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_143fdcd84;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_143fdcd84:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar4 = 0;
    iVar13 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar12 * 0x18);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x14 + lVar12 * 0x18) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar12 * 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
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
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 143fdcf70 FUN_143fdcf70 body=346 status=ok
// SIG undefined FUN_143fdcf70(void)

void FUN_143fdcf70(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143fdd002;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_143fdd002:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 143fdd0ca FUN_143fdd0ca body=346 status=ok
// SIG undefined FUN_143fdd0ca(void)

void FUN_143fdd0ca(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143fdd15c;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_143fdd15c:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 143fdd224 FUN_143fdd224 body=346 status=ok
// SIG undefined FUN_143fdd224(void)

void FUN_143fdd224(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143fdd2b6;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_143fdd2b6:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 143fdd37e FUN_143fdd37e body=29 status=ok
// SIG undefined FUN_143fdd37e(void)

undefined8 FUN_143fdd37e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fdd3b0 FUN_143fdd3b0 body=93 status=ok
// SIG undefined FUN_143fdd3b0(void)

void FUN_143fdd3b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5a32f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143fdd40e FUN_143fdd40e body=93 status=ok
// SIG undefined FUN_143fdd40e(void)

void FUN_143fdd40e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5a32f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143fdd46c FUN_143fdd46c body=126 status=ok
// SIG undefined FUN_143fdd46c(void)

void FUN_143fdd46c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a32f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fdd4db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fdd4ea FUN_143fdd4ea body=24 status=ok
// SIG undefined FUN_143fdd4ea(void)

undefined8 FUN_143fdd4ea(longlong param_1)

{
  FUN_148b68d0a(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18));
  return 0;
}



// FUNCTION 143fdd502 FUN_143fdd502 body=24 status=ok
// SIG undefined FUN_143fdd502(void)

undefined8 FUN_143fdd502(longlong param_1)

{
  FUN_148b68d0a(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18));
  return 1;
}



// FUNCTION 143fdd51a FUN_143fdd51a body=29 status=ok
// SIG undefined FUN_143fdd51a(void)

undefined8 FUN_143fdd51a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fdd54c FUN_143fdd54c body=93 status=ok
// SIG undefined FUN_143fdd54c(void)

void FUN_143fdd54c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5a3360;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143fdd5aa FUN_143fdd5aa body=93 status=ok
// SIG undefined FUN_143fdd5aa(void)

void FUN_143fdd5aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5a3360;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}


