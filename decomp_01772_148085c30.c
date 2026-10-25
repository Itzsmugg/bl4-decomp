// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148085c30 FUN_148085c30 body=38 status=ok
// SIG undefined FUN_148085c30(void)

void FUN_148085c30(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148085ca4 FUN_148085ca4 body=84 status=ok
// SIG undefined FUN_148085ca4(void)

longlong * FUN_148085ca4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  param_1[1] = param_2[1];
  *(int *)(param_1 + 2) = (int)param_2[2];
  FUN_1447a122a(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 148085d00 FUN_148085d00 body=794 status=ok
// SIG undefined FUN_148085d00(void)

void FUN_148085d00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined2 local_60;
  undefined1 local_5e;
  longlong local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_144b34998(param_2);
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    lVar7 = param_1 + 0x98;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xa0);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0xa8) - 1U &
                             (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar6 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x60) + (longlong)iVar6 * 0x130;
        if (*(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar6 * 0x130) == lVar3)
        goto LAB_148085d3b;
        iVar6 = *(int *)(lVar7 + 0x128);
      } while (iVar6 != -1);
    }
  }
  lVar7 = 0;
LAB_148085d3b:
  if ((*(ushort *)param_2[4] & 1) == 0) {
    if (((*(ushort *)param_2[4] & 2) != 0) && (*(char *)(lVar7 + 0x110) == '\x01')) {
      *(undefined1 *)(lVar7 + 0x112) = 1;
    }
  }
  else {
    lVar3 = *param_2;
    if (*(longlong *)(lVar7 + 0xe0) == 0) {
      local_58 = FUN_144735dd8(lVar3,lVar7 + 0x70,0);
      *(longlong *)(lVar7 + 0xe0) = local_58;
      local_60 = 0x1c;
      local_5e = 0;
      local_49 = 0;
      lVar2 = lVar3 + 0x198;
      lVar1 = lVar3 + 0x70;
      local_68 = &local_49;
      uVar4 = FUN_144a23c98(lVar2,lVar1,local_58 + 8,&local_60);
      *(undefined8 *)(lVar7 + 0xe8) = uVar4;
      local_58 = FUN_144735dd8(lVar3,lVar7 + 0x78,0);
      *(longlong *)(lVar7 + 0xf0) = local_58;
      local_60 = 0x1c;
      local_5e = 0;
      local_49 = 0;
      local_68 = &local_49;
      uVar4 = FUN_144a23c98(lVar2,lVar1,local_58 + 8,&local_60);
      *(undefined8 *)(lVar7 + 0xf8) = uVar4;
      local_58 = FUN_144735dd8(lVar3,lVar7 + 0x80,0);
      *(longlong *)(lVar7 + 0x100) = local_58;
      local_60 = 0x1c;
      local_5e = 0;
      local_49 = 0;
      local_68 = &local_49;
      uVar4 = FUN_144a23c98(lVar2,lVar1,local_58 + 8,&local_60);
      *(undefined8 *)(lVar7 + 0x108) = uVar4;
      plVar5 = (longlong *)FUN_1481192f8(param_2);
      lVar1 = *(longlong *)(lVar7 + 0xf0);
      if (lVar1 != 0) {
        iVar6 = (int)plVar5[1];
        *(uint *)(plVar5 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)plVar5 + 0xc) < iVar6 + 1U) {
          FUN_144904f42(plVar5,iVar6);
        }
        lVar2 = *plVar5;
        lVar8 = (longlong)iVar6 * 0x10;
        *(longlong *)(lVar2 + lVar8) = lVar1;
        *(undefined4 *)(lVar2 + 8 + lVar8) = 0x78;
        *(undefined1 *)(lVar2 + 0xc + lVar8) = 1;
      }
      plVar5 = (longlong *)FUN_1481192f8(param_2);
      lVar1 = *(longlong *)(lVar7 + 0x100);
      if (lVar1 != 0) {
        iVar6 = (int)plVar5[1];
        *(uint *)(plVar5 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)plVar5 + 0xc) < iVar6 + 1U) {
          FUN_144904f42(plVar5,iVar6);
        }
        lVar2 = *plVar5;
        lVar8 = (longlong)iVar6 * 0x10;
        *(longlong *)(lVar2 + lVar8) = lVar1;
        *(undefined4 *)(lVar2 + 8 + lVar8) = 0x78;
        *(undefined1 *)(lVar2 + 0xc + lVar8) = 1;
      }
    }
    if (*(char *)(lVar7 + 0x111) == '\x01') {
      *(undefined1 *)(lVar7 + 0x111) = 0;
      FUN_1405bfba3(*param_2,*(undefined8 *)(lVar7 + 0xf8),0,2);
    }
    if ((*(char *)(lVar7 + 0x112) == '\x01') && (*(int *)(lVar7 + 8) != 0)) {
      uVar4 = FUN_144735dd8(lVar3,lVar7 + 0x68,0);
      FUN_14742ba28(lVar3,*(undefined8 *)(lVar7 + 0xe0),uVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480860b8 FUN_1480860b8 body=355 status=ok
// SIG undefined FUN_1480860b8(void)

void FUN_1480860b8(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  FUN_14808621c();
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xd0) + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 200) + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xc0) + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xb8) + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a80d50(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x98) + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14003f39a(param_1 + 0x80);
  puVar4 = *(undefined8 **)(param_1 + 0x78);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x70);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x68);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148086211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4,1);
      return;
    }
  }
  return;
}



// FUNCTION 14808621c FUN_14808621c body=303 status=ok
// SIG undefined FUN_14808621c(void)

void FUN_14808621c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  FUN_144725486(param_1 + 0x80);
  lVar3 = *(longlong *)(param_1 + 0x98);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144725486(param_1 + 0xa0);
  lVar3 = *(longlong *)(param_1 + 0xb8);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0xc0);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 200);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 200) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0xd0);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  return;
}



// FUNCTION 14808634b FUN_14808634b body=47 status=ok
// SIG undefined FUN_14808634b(void)

void FUN_14808634b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14808637a FUN_14808637a body=88 status=ok
// SIG undefined FUN_14808637a(void)

undefined8 * FUN_14808637a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1480863d2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1480863d2 FUN_1480863d2 body=98 status=ok
// SIG undefined FUN_1480863d2(void)

void FUN_1480863d2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148086434 FUN_148086434 body=83 status=ok
// SIG undefined FUN_148086434(void)

void FUN_148086434(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(ulonglong *)(param_1 + 0x88) != 0 && (*(ulonglong *)(param_1 + 0x88) & 1) == 0) {
    FUN_1400020a8();
  }
  if (*(ulonglong *)(param_1 + 0x68) == 0 || (*(ulonglong *)(param_1 + 0x68) & 1) != 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148086488 FUN_148086488 body=164 status=ok
// SIG undefined FUN_148086488(void)

void FUN_148086488(longlong *param_1,undefined8 param_2)

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
        goto LAB_148086508;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148086508:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14808652c FUN_14808652c body=29 status=ok
// SIG undefined FUN_14808652c(void)

undefined8 FUN_14808652c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148086566 FUN_148086566 body=93 status=ok
// SIG undefined FUN_148086566(void)

void FUN_148086566(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad7fa70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1480865c4 FUN_1480865c4 body=93 status=ok
// SIG undefined FUN_1480865c4(void)

void FUN_1480865c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad7fa70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148086622 FUN_148086622 body=126 status=ok
// SIG undefined FUN_148086622(void)

void FUN_148086622(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad7fa70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148086691. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480866ae FUN_1480866ae body=21 status=ok
// SIG undefined FUN_1480866ae(void)

undefined8 FUN_1480866ae(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1480866d2 FUN_1480866d2 body=151 status=ok
// SIG undefined FUN_1480866d2(void)

void FUN_1480866d2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_14808676a();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb37af8;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x80;
  return;
}



// FUNCTION 14808676a FUN_14808676a body=258 status=ok
// SIG undefined FUN_14808676a(void)

void FUN_14808676a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb37b78) {
    FUN_144b3d300(&DAT_14cb37b78);
    if (DAT_14cb37b78 == -1) {
      FUN_14808686e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x27;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb37af8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14390a011);
      _Init_thread_footer(&DAT_14cb37b78);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14808686e FUN_14808686e body=226 status=ok
// SIG undefined FUN_14808686e(void)

longlong * FUN_14808686e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_148086952;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148086952 FUN_148086952 body=136 status=ok
// SIG undefined FUN_148086952(void)

code * FUN_148086952(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Velocity";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480869da;
}



// FUNCTION 1480869da FUN_1480869da body=136 status=ok
// SIG undefined FUN_1480869da(void)

code * FUN_1480869da(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Scale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148086a62;
}



// FUNCTION 148086a62 FUN_148086a62 body=136 status=ok
// SIG undefined FUN_148086a62(void)

code * FUN_148086a62(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Rotation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148086aea;
}



// FUNCTION 148086aea FUN_148086aea body=136 status=ok
// SIG undefined FUN_148086aea(void)

code * FUN_148086aea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Matrix";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148086b72;
}



// FUNCTION 148086b72 FUN_148086b72 body=130 status=ok
// SIG undefined FUN_148086b72(void)

undefined1 * FUN_148086b72(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Valid";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_148086bf4;
}



// FUNCTION 148086bf8 FUN_148086bf8 body=109 status=ok
// SIG undefined FUN_148086bf8(void)

void FUN_148086bf8(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0xa0) == param_2) {
          FUN_148086c66(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0xa0 + *param_1 + 0x90);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 148086c66 FUN_148086c66 body=106 status=ok
// SIG undefined FUN_148086c66(void)

void FUN_148086c66(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x94 + (longlong)param_2 * 0xa0);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x90 + lVar5 * 0xa0);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0xa0 + 0x90);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0xa0 + 0x90);
  FUN_148083d2e();
  return;
}



// FUNCTION 148086cd0 FUN_148086cd0 body=310 status=ok
// SIG undefined FUN_148086cd0(void)

undefined4 * FUN_148086cd0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  FUN_148086e08(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (int)((ulonglong)uVar1 >> 0x20) * 0x17 + (int)uVar1;
  cVar3 = FUN_148086eee(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_148086fea(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148086e08 FUN_148086e08 body=229 status=ok
// SIG undefined FUN_148086e08(void)

int * FUN_148086e08(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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



// FUNCTION 148086eee FUN_148086eee body=137 status=ok
// SIG undefined FUN_148086eee(void)

undefined8 FUN_148086eee(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_148086f78((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 148086f78 FUN_148086f78 body=114 status=ok
// SIG undefined FUN_148086f78(void)

void FUN_148086f78(longlong *param_1,int param_2)

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



// FUNCTION 148086fea FUN_148086fea body=450 status=ok
// SIG undefined FUN_148086fea(void)

void FUN_148086fea(longlong *param_1)

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
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1480871ae FUN_1480871ae body=102 status=ok
// SIG undefined FUN_1480871ae(void)

void FUN_1480871ae(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_148087214(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 148087214 FUN_148087214 body=90 status=ok
// SIG undefined FUN_148087214(void)

void FUN_148087214(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_148086f78();
  return;
}



// FUNCTION 14808726e FUN_14808726e body=138 status=ok
// SIG undefined FUN_14808726e(void)

code * FUN_14808726e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IntersectionResults";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FNiagaraAsyncGpuTraceResult>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14646a066;
}



// FUNCTION 1480872f8 FUN_1480872f8 body=138 status=ok
// SIG undefined FUN_1480872f8(void)

code * FUN_1480872f8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWRayRequests";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FNiagaraAsyncGpuTrace>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148087382;
}



// FUNCTION 148087382 FUN_148087382 body=138 status=ok
// SIG undefined FUN_148087382(void)

code * FUN_148087382(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxRayTraceCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808740c;
}



// FUNCTION 14808740c FUN_14808740c body=132 status=ok
// SIG undefined FUN_14808740c(void)

undefined1 * FUN_14808740c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SystemLWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145c674c2;
}



// FUNCTION 148087490 FUN_148087490 body=132 status=ok
// SIG undefined FUN_148087490(void)

void FUN_148087490(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148087516 FUN_148087516 body=102 status=ok
// SIG undefined FUN_148087516(void)

void FUN_148087516(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x28) == param_2) {
          FUN_14808757c(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14808757c FUN_14808757c body=121 status=ok
// SIG undefined FUN_14808757c(void)

void FUN_14808757c(longlong *param_1,int param_2)

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
  FUN_140038ae8(*param_1 + (longlong)param_2 * 0x28 + 8);
  FUN_14808458e(param_1,param_2);
  return;
}



// FUNCTION 1480875f5 FUN_1480875f5 body=221 status=ok
// SIG undefined FUN_1480875f5(void)

void FUN_1480875f5(char *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  int local_48;
  int *local_40;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1480876d4(local_30,param_1);
  FUN_140126e42(&local_40,param_1);
  FUN_144a76c20(&local_50,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    uVar2 = *(undefined4 *)(*(longlong *)(local_28 + 0x30) + (longlong)param_2 * 4);
    iVar4 = 0;
    do {
      piVar3 = local_40 + local_38;
      *local_40 = -(param_3 & 0xff);
      puVar1 = local_50 + local_48;
      *local_50 = uVar2;
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar5 = (int *)(param_1 + 0x3c);
      }
      local_50 = puVar1;
      local_40 = piVar3;
    } while (iVar4 < *piVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480876d4 FUN_1480876d4 body=148 status=ok
// SIG undefined FUN_1480876d4(void)

void FUN_1480876d4(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 148087768 FUN_148087768 body=219 status=ok
// SIG undefined FUN_148087768(void)

void FUN_148087768(char *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  int local_48;
  int *local_40;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1480876d4(local_30,param_1);
  FUN_140126e42(&local_40,param_1);
  FUN_144a76cd4(&local_50,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    uVar2 = *(undefined4 *)(*(longlong *)(local_28 + 0x30) + (longlong)param_2 * 4);
    iVar4 = 0;
    do {
      piVar3 = local_40 + local_38;
      *local_40 = -(param_3 & 0xff);
      puVar1 = local_50 + local_48;
      *local_50 = uVar2;
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar5 = (int *)(param_1 + 0x3c);
      }
      local_50 = puVar1;
      local_40 = piVar3;
    } while (iVar4 < *piVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148087844 FUN_148087844 body=222 status=ok
// SIG undefined FUN_148087844(void)

void FUN_148087844(char *param_1,int param_2,uint param_3)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_78 [40];
  int *local_50;
  int local_48;
  int *local_40;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1480876d4(local_30,param_1);
  FUN_140126e42(&local_40,param_1);
  FUN_140126e42(&local_50,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    bVar2 = *(byte *)(*(longlong *)(local_28 + 0x30) + (longlong)param_2 * 4);
    iVar4 = 0;
    do {
      piVar3 = local_40 + local_38;
      *local_40 = -(param_3 & 0xff);
      piVar1 = local_50 + local_48;
      *local_50 = -(uint)bVar2;
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar5 = (int *)(param_1 + 0x3c);
      }
      local_50 = piVar1;
      local_40 = piVar3;
    } while (iVar4 < *piVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148087924 FUN_148087924 body=151 status=ok
// SIG undefined FUN_148087924(void)

void FUN_148087924(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1480879bc();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb37c18;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x10;
  return;
}



// FUNCTION 1480879bc FUN_1480879bc body=258 status=ok
// SIG undefined FUN_1480879bc(void)

void FUN_1480879bc(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb37c98) {
    FUN_144b3d300(&DAT_14cb37c98);
    if (DAT_14cb37c98 == -1) {
      FUN_148087ac0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x11;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb37c18,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14390b11f);
      _Init_thread_footer(&DAT_14cb37c98);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148087ac0 FUN_148087ac0 body=226 status=ok
// SIG undefined FUN_148087ac0(void)

longlong * FUN_148087ac0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_148087ba4;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148087ba4 FUN_148087ba4 body=130 status=ok
// SIG undefined FUN_148087ba4(void)

undefined1 * FUN_148087ba4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ConsoleVariableData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_148087c26;
}



// FUNCTION 148087c2a FUN_148087c2a body=48 status=ok
// SIG undefined FUN_148087c2a(void)

void FUN_148087c2a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 148087c5a FUN_148087c5a body=132 status=ok
// SIG undefined FUN_148087c5a(void)

void FUN_148087c5a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148087ce0 FUN_148087ce0 body=52 status=ok
// SIG undefined FUN_148087ce0(void)

void FUN_148087ce0(longlong *param_1)

{
  FUN_148087d14();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148087d14 FUN_148087d14 body=343 status=ok
// SIG undefined FUN_148087d14(void)

void FUN_148087d14(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148087e6c FUN_148087e6c body=322 status=ok
// SIG undefined FUN_148087e6c(void)

void FUN_148087e6c(longlong *param_1)

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



// FUNCTION 148087fb0 FUN_148087fb0 body=311 status=ok
// SIG undefined FUN_148087fb0(void)

void FUN_148087fb0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      plVar3 = *(longlong **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20);
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
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480880e8 FUN_1480880e8 body=14 status=ok
// SIG undefined FUN_1480880e8(void)

void FUN_1480880e8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 1480880f6 FUN_1480880f6 body=29 status=ok
// SIG undefined FUN_1480880f6(void)

undefined8 FUN_1480880f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148088114 FUN_148088114 body=283 status=ok
// SIG undefined FUN_148088114(void)

undefined4 * FUN_148088114(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148088230(param_1,local_48);
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  cVar2 = FUN_148088316(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[7] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_148088446(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148088230 FUN_148088230 body=229 status=ok
// SIG undefined FUN_148088230(void)

int * FUN_148088230(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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



// FUNCTION 148088316 FUN_148088316 body=189 status=ok
// SIG undefined FUN_148088316(void)

undefined8 FUN_148088316(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(piVar3 + 4);
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
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_1480883d4(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 1480883d4 FUN_1480883d4 body=114 status=ok
// SIG undefined FUN_1480883d4(void)

void FUN_1480883d4(longlong *param_1,int param_2)

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



// FUNCTION 148088446 FUN_148088446 body=422 status=ok
// SIG undefined FUN_148088446(void)

void FUN_148088446(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 1480885ee FUN_1480885ee body=75 status=ok
// SIG undefined FUN_1480885ee(void)

undefined8 * FUN_1480885ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad800e0;
  FUN_144725486();
  *param_1 = &PTR_FUN_14ad80110;
  FUN_14476820c(param_1 + 3);
  FUN_144a4509c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14808863a FUN_14808863a body=60 status=ok
// SIG undefined FUN_14808863a(void)

undefined8 * FUN_14808863a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad80110;
  FUN_14476820c(param_1 + 3);
  FUN_144a4509c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148088676 FUN_148088676 body=345 status=ok
// SIG undefined FUN_148088676(void)

undefined4 *
FUN_148088676(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402ca3ce(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_14090688a(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x14) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140906920(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480887d0 FUN_1480887d0 body=112 status=ok
// SIG undefined FUN_1480887d0(void)

void FUN_1480887d0(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)((ulonglong)param_2 * 0x10 + lVar2);
  FUN_14808571a(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x88);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar3 << 4);
    iVar1 = *(int *)(param_1 + 0x88);
  }
  *(int *)(param_1 + 0x88) = iVar1 - param_3;
  return;
}



// FUNCTION 148088840 FUN_148088840 body=67 status=ok
// SIG undefined FUN_148088840(void)

void FUN_148088840(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148088884(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  FUN_14808581a(param_1,*(undefined4 *)(param_1 + 0x88),iVar1);
  return;
}



// FUNCTION 148088884 FUN_148088884 body=108 status=ok
// SIG undefined FUN_148088884(void)

ulonglong FUN_148088884(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1480888f0 FUN_1480888f0 body=108 status=ok
// SIG undefined FUN_1480888f0(void)

void FUN_1480888f0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0xd8) == param_2) {
          FUN_14808895c(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0xd8 + *param_1 + 0xd0);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14808895c FUN_14808895c body=138 status=ok
// SIG undefined FUN_14808895c(void)

void FUN_14808895c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0xd8;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0xd4 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0xd0 + lVar6 * 0xd8);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0xd8 + 0xd0);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0xd0);
  FUN_148084a1c(*param_1 + lVar2 + 8);
  FUN_1480889e6(param_1,param_2);
  return;
}



// FUNCTION 1480889e6 FUN_1480889e6 body=122 status=ok
// SIG undefined FUN_1480889e6(void)

void FUN_1480889e6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xd8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xd8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xd8 + 4) = uVar5;
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



// FUNCTION 148088a60 FUN_148088a60 body=1009 status=ok
// SIG undefined FUN_148088a60(void)

void FUN_148088a60(longlong param_1,char *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined1 auStack_198 [36];
  uint local_174;
  ulonglong local_170;
  uint *local_168;
  undefined8 uStack_160;
  int local_158;
  uint *local_148;
  undefined8 uStack_140;
  int local_138;
  float *local_128;
  undefined8 uStack_120;
  int local_118;
  float *local_108;
  undefined8 uStack_100;
  int local_f8;
  int *local_e8;
  undefined8 uStack_e0;
  int local_d8;
  int *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  undefined1 local_88 [8];
  longlong local_80;
  int local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_148078098(local_88);
  uVar12 = 0;
  local_98 = 0;
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  FUN_144a76d88(&local_a8,param_2);
  local_b8 = 0;
  local_c8 = (int *)0x0;
  uStack_c0 = 0;
  FUN_144a98d08(&local_c8,param_2);
  local_d8 = 0;
  local_e8 = (int *)0x0;
  uStack_e0 = 0;
  FUN_144a98d08(&local_e8,param_2);
  local_f8 = 0;
  local_108 = (float *)0x0;
  uStack_100 = 0;
  FUN_144a98dce(&local_108,param_2);
  local_118 = 0;
  local_128 = (float *)0x0;
  uStack_120 = 0;
  FUN_144a98dce(&local_128,param_2);
  local_138 = 0;
  local_148 = (uint *)0x0;
  uStack_140 = 0;
  FUN_144a98d08(&local_148,param_2);
  local_158 = 0;
  local_168 = (uint *)0x0;
  uStack_160 = 0;
  FUN_144a98d08(&local_168,param_2);
  piVar1 = local_c8 + local_b8;
  iVar4 = *local_c8;
  if (-1 < (longlong)iVar4) {
    if (iVar4 < *(int *)(*(longlong *)(local_80 + 0x118) + 0x110)) {
      uVar12 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(local_80 + 0x118) + 0x108) + (longlong)iVar4 * 0x10);
    }
    else {
      uVar12 = 0;
    }
  }
  lVar16 = *(longlong *)(local_80 + 0x10);
  local_170 = uVar12;
  local_c8 = piVar1;
  if (lVar16 != 0) {
    if ((*(char *)(param_1 + 0x40) == '\0') || ((DAT_14cb36ff0 & 1) != 0)) {
      lVar16 = *(longlong *)(lVar16 + 0x28);
    }
    else {
      lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x20) + 0x78);
    }
    if (lVar16 != 0) {
      LOCK();
      *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + -1;
      UNLOCK();
      if (DAT_14c76292d == '\x01') {
        uVar13 = *(uint *)(lVar16 + 0x120);
        uVar11 = (ulonglong)uVar13;
        if (((uVar12 != 0 && uVar11 != 0) && (*(int *)(uVar12 + 0xd4) == 0)) &&
           (piVar1 = local_a8 + local_98, iVar4 = *local_a8, local_a8 = piVar1, iVar4 != 0)) {
          iVar4 = *local_e8;
          fVar2 = *local_108;
          fVar3 = *local_128;
          uVar5 = *local_148;
          local_174 = *local_168;
          uVar9 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          local_168 = local_168 + local_158;
          local_148 = local_148 + local_138;
          local_128 = local_128 + local_118;
          local_108 = local_108 + local_f8;
          local_e8 = local_e8 + local_d8;
          lVar10 = FUN_14808b838(local_80 + 200,uVar9 >> 0x10 ^ uVar9,&local_170);
          plVar17 = (longlong *)(lVar10 + 0x50);
          FUN_148078c6e(plVar17,uVar11);
          local_74 = -1;
          FUN_140a6f82a(&local_74,*(undefined8 *)(*(longlong *)(lVar16 + 0x10) + 8));
          uVar9 = 0x7fffffff;
          if (local_174 < 0x7fffffff) {
            uVar9 = local_174;
          }
          if ((local_74 != -1) && (0 < (int)uVar13)) {
            iVar6 = *(int *)(lVar16 + 300);
            lVar10 = *(longlong *)(lVar16 + 0x28);
            iVar7 = *(int *)(lVar16 + 0x120);
            uVar12 = 0;
            do {
              iVar15 = 1;
              if ((longlong)uVar12 < (longlong)iVar7) {
                iVar15 = *(int *)((ulonglong)(uint)(local_74 * iVar6) + lVar10 + uVar12 * 4);
              }
              iVar8 = -iVar15;
              if (-iVar15 < 0) {
                iVar8 = iVar15;
              }
              if (*param_2 == '\0') {
                lVar16 = *(longlong *)(param_2 + 0x80) + 0x88;
              }
              else {
                lVar16 = *(longlong *)(param_2 + 0x58);
              }
              uVar13 = *(int *)(lVar16 + 4) * 0xbb38435 + 0x3619636b;
              *(uint *)(lVar16 + 4) = uVar13;
              uVar13 = (uint)((((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * (fVar3 - fVar2) + fVar2)
                             * (float)iVar8);
              if ((int)uVar9 <= (int)uVar13) {
                uVar13 = uVar9;
              }
              uVar14 = uVar5;
              if ((int)uVar5 <= (int)uVar13) {
                uVar14 = uVar13;
              }
              if ((int)uVar14 < 1) {
                uVar14 = 0;
              }
              if (iVar4 == 0) {
                *(uint *)(*plVar17 + uVar12 * 8) = uVar14;
              }
              else if (iVar4 == 1) {
                piVar1 = (int *)(*plVar17 + uVar12 * 8);
                *piVar1 = *piVar1 + uVar14;
              }
              uVar12 = uVar12 + 1;
            } while (uVar11 != uVar12);
          }
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148088e52 FUN_148088e52 body=1057 status=ok
// SIG undefined FUN_148088e52(void)

void FUN_148088e52(longlong param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_1b8 [40];
  ulonglong local_190;
  float *local_188;
  undefined8 uStack_180;
  int local_178;
  float *local_168;
  undefined8 uStack_160;
  int local_158;
  float *local_148;
  undefined8 uStack_140;
  int local_138;
  float *local_128;
  undefined8 uStack_120;
  int local_118;
  int *local_108;
  undefined8 uStack_100;
  int local_f8;
  int *local_e8;
  undefined8 uStack_e0;
  int local_d8;
  int *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined1 local_a8 [8];
  longlong local_a0;
  int local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_148078098(local_a8);
  uVar12 = 0;
  local_b8 = 0;
  local_c8 = (int *)0x0;
  uStack_c0 = 0;
  FUN_144a76d88(&local_c8,param_2);
  local_d8 = 0;
  local_e8 = (int *)0x0;
  uStack_e0 = 0;
  FUN_144a98d08(&local_e8,param_2);
  local_f8 = 0;
  local_108 = (int *)0x0;
  uStack_100 = 0;
  FUN_144a98d08(&local_108,param_2);
  local_118 = 0;
  local_128 = (float *)0x0;
  uStack_120 = 0;
  FUN_144a98dce(&local_128,param_2);
  local_138 = 0;
  local_148 = (float *)0x0;
  uStack_140 = 0;
  FUN_144a98dce(&local_148,param_2);
  local_158 = 0;
  local_168 = (float *)0x0;
  uStack_160 = 0;
  FUN_144a98dce(&local_168,param_2);
  local_178 = 0;
  local_188 = (float *)0x0;
  uStack_180 = 0;
  FUN_144a98dce(&local_188,param_2);
  piVar1 = local_e8 + local_d8;
  iVar5 = *local_e8;
  if (-1 < (longlong)iVar5) {
    if (iVar5 < *(int *)(*(longlong *)(local_a0 + 0x118) + 0x110)) {
      uVar12 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(local_a0 + 0x118) + 0x108) + (longlong)iVar5 * 0x10);
    }
    else {
      uVar12 = 0;
    }
  }
  lVar15 = *(longlong *)(local_a0 + 0x10);
  local_190 = uVar12;
  local_e8 = piVar1;
  if (lVar15 != 0) {
    if ((*(char *)(param_1 + 0x40) == '\0') || ((DAT_14cb36ff0 & 1) != 0)) {
      lVar15 = *(longlong *)(lVar15 + 0x28);
    }
    else {
      lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x20) + 0x78);
    }
    if (lVar15 != 0) {
      LOCK();
      *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + -1;
      UNLOCK();
      if (DAT_14c76292d == '\x01') {
        uVar16 = *(uint *)(lVar15 + 0x120);
        uVar13 = (ulonglong)uVar16;
        if (((uVar12 != 0 && uVar13 != 0) && (*(int *)(uVar12 + 0xd4) == 0)) &&
           (piVar1 = local_c8 + local_b8, iVar5 = *local_c8, local_c8 = piVar1, iVar5 != 0)) {
          iVar5 = *local_108;
          fVar2 = *local_128;
          fVar3 = *local_148;
          fVar18 = 0.0;
          if (0.0 <= *local_168) {
            fVar18 = *local_168;
          }
          fVar4 = *local_188;
          uVar10 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          local_188 = local_188 + local_178;
          local_168 = local_168 + local_158;
          local_148 = local_148 + local_138;
          local_128 = local_128 + local_118;
          local_108 = local_108 + local_f8;
          lVar11 = FUN_14808b838(local_a0 + 200,uVar10 >> 0x10 ^ uVar10,&local_190);
          FUN_148089274((longlong *)(lVar11 + 0x50),uVar13);
          local_94 = -1;
          FUN_140a6f82a(&local_94,*(undefined8 *)(*(longlong *)(lVar15 + 0x10) + 8),param_3);
          if ((local_94 != -1) && (0 < (int)uVar16)) {
            uVar16 = -(uint)(fVar4 < 0.0);
            iVar6 = *(int *)(lVar15 + 300);
            fVar4 = (float)(~uVar16 & (uint)fVar4 | uVar16 & 0x7f7fffff);
            lVar8 = *(longlong *)(lVar15 + 0x28);
            iVar7 = *(int *)(lVar15 + 0x120);
            uVar12 = 0;
            do {
              iVar14 = 1;
              if ((longlong)uVar12 < (longlong)iVar7) {
                iVar14 = *(int *)((ulonglong)(uint)(local_94 * iVar6) + lVar8 + uVar12 * 4);
              }
              iVar9 = -iVar14;
              if (-iVar14 < 0) {
                iVar9 = iVar14;
              }
              if (*param_2 == '\0') {
                lVar15 = *(longlong *)(param_2 + 0x80) + 0x88;
              }
              else {
                lVar15 = *(longlong *)(param_2 + 0x58);
              }
              uVar16 = *(int *)(lVar15 + 4) * 0xbb38435 + 0x3619636b;
              *(uint *)(lVar15 + 4) = uVar16;
              fVar17 = (((float)(uVar16 >> 9 | 0x3f800000) + -1.0) * (fVar3 - fVar2) + fVar2) *
                       (float)iVar9;
              if (fVar4 <= fVar17) {
                fVar17 = fVar4;
              }
              if (fVar17 <= fVar18) {
                fVar17 = fVar18;
              }
              lVar15 = *(longlong *)(lVar11 + 0x50);
              if (iVar5 != 0) {
                fVar17 = fVar17 * *(float *)(lVar15 + 4 + uVar12 * 8);
              }
              *(float *)(lVar15 + 4 + uVar12 * 8) = fVar17;
              uVar12 = uVar12 + 1;
            } while (uVar13 != uVar12);
          }
        }
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148089274 FUN_148089274 body=118 status=ok
// SIG undefined FUN_148089274(void)

void FUN_148089274(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1480892ec(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148089372(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1480892ec FUN_1480892ec body=132 status=ok
// SIG undefined FUN_1480892ec(void)

void FUN_1480892ec(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148089372 FUN_148089372 body=62 status=ok
// SIG undefined FUN_148089372(void)

void FUN_148089372(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1480893b0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 1480893b0 FUN_1480893b0 body=93 status=ok
// SIG undefined FUN_1480893b0(void)

ulonglong FUN_1480893b0(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14808940e FUN_14808940e body=1201 status=ok
// SIG undefined FUN_14808940e(void)

void FUN_14808940e(longlong param_1,char *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_1b8 [40];
  ulonglong local_190;
  float *local_188;
  undefined8 uStack_180;
  int local_178;
  float *local_168;
  undefined8 uStack_160;
  int local_158;
  float *local_148;
  undefined8 uStack_140;
  int local_138;
  float *local_128;
  undefined8 uStack_120;
  int local_118;
  int *local_108;
  undefined8 uStack_100;
  int local_f8;
  int *local_e8;
  undefined8 uStack_e0;
  int local_d8;
  int *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined1 local_a8 [8];
  longlong local_a0;
  byte local_98 [4];
  int local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_148078098(local_a8);
  uVar12 = 0;
  local_b8 = 0;
  local_c8 = (int *)0x0;
  uStack_c0 = 0;
  FUN_144a76d88(&local_c8,param_2);
  local_d8 = 0;
  local_e8 = (int *)0x0;
  uStack_e0 = 0;
  FUN_144a98d08(&local_e8,param_2);
  local_f8 = 0;
  local_108 = (int *)0x0;
  uStack_100 = 0;
  FUN_144a98d08(&local_108,param_2);
  local_118 = 0;
  local_128 = (float *)0x0;
  uStack_120 = 0;
  FUN_144a98dce(&local_128,param_2);
  local_138 = 0;
  local_148 = (float *)0x0;
  uStack_140 = 0;
  FUN_144a98dce(&local_148,param_2);
  local_158 = 0;
  local_168 = (float *)0x0;
  uStack_160 = 0;
  FUN_144a98dce(&local_168,param_2);
  local_178 = 0;
  local_188 = (float *)0x0;
  uStack_180 = 0;
  FUN_144a98dce(&local_188,param_2);
  piVar1 = local_e8 + local_d8;
  iVar6 = *local_e8;
  if (-1 < (longlong)iVar6) {
    if (iVar6 < *(int *)(*(longlong *)(local_a0 + 0x118) + 0x110)) {
      uVar12 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(local_a0 + 0x118) + 0x108) + (longlong)iVar6 * 0x10);
    }
    else {
      uVar12 = 0;
    }
  }
  lVar13 = *(longlong *)(local_a0 + 0x10);
  local_190 = uVar12;
  local_e8 = piVar1;
  if (lVar13 != 0) {
    if ((*(char *)(param_1 + 0x40) == '\0') || ((DAT_14cb36ff0 & 1) != 0)) {
      lVar13 = *(longlong *)(lVar13 + 0x28);
    }
    else {
      lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x20) + 0x78);
    }
    if (lVar13 != 0) {
      LOCK();
      *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + -1;
      UNLOCK();
      if (DAT_14c76292d == '\x01') {
        uVar14 = *(uint *)(lVar13 + 0x120);
        uVar11 = (ulonglong)uVar14;
        if (((uVar12 != 0 && uVar11 != 0) && (*(int *)(uVar12 + 0xd4) == 0)) &&
           (piVar1 = local_c8 + local_b8, iVar6 = *local_c8, local_c8 = piVar1, iVar6 != 0)) {
          iVar6 = *local_108;
          fVar2 = *local_128;
          fVar3 = *local_148;
          fVar15 = 0.0;
          if (0.0 <= *local_168) {
            fVar15 = *local_168;
          }
          fVar4 = *local_188;
          uVar8 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          local_188 = local_188 + local_178;
          local_168 = local_168 + local_158;
          local_148 = local_148 + local_138;
          local_128 = local_128 + local_118;
          local_108 = local_108 + local_f8;
          lVar9 = FUN_14808b838(local_a0 + 200,uVar8 >> 0x10 ^ uVar8,&local_190);
          FUN_148089274((longlong *)(lVar9 + 0x50),uVar11);
          local_98[0] = 1;
          local_94 = -1;
          FUN_140aa8fc4(local_98,*(undefined8 *)(*(longlong *)(lVar13 + 0x10) + 8));
          if ((local_94 != -1) && (0 < (int)uVar14)) {
            uVar14 = -(uint)(fVar4 < 0.0);
            fVar4 = (float)(~uVar14 & (uint)fVar4 | uVar14 & 0x7f7fffff);
            lVar10 = (ulonglong)
                     (uint)(local_94 * *(int *)(lVar13 + 0x128 + (ulonglong)(local_98[0] ^ 1) * 8))
                     + *(longlong *)(lVar13 + 0x18 + (ulonglong)((local_98[0] ^ 1) << 5));
            iVar7 = *(int *)(lVar13 + 0x120);
            uVar12 = 0;
            do {
              fVar16 = 1.0;
              if ((longlong)uVar12 < (longlong)iVar7) {
                if (local_98[0] == 0) {
                  uVar5 = *(ushort *)(lVar10 + uVar12 * 2);
                  uVar14 = (uint)uVar5 << 0xd;
                  if ((uVar14 & 0xf800000) == 0xf800000) {
                    fVar16 = (float)(uVar14 | 0x70000000);
                  }
                  else if ((uVar14 & 0xf800000) == 0) {
                    fVar16 = (float)(uVar14 | 0x38800000) + -6.1035156e-05;
                  }
                  else {
                    fVar16 = (float)((uVar14 & 0xfffe000) + 0x38000000);
                  }
                  fVar16 = (float)((int)(short)uVar5 & 0x80000000U | (uint)fVar16);
                }
                else {
                  fVar16 = *(float *)(lVar10 + uVar12 * 4);
                }
              }
              if (*param_2 == '\0') {
                lVar13 = *(longlong *)(param_2 + 0x80) + 0x88;
              }
              else {
                lVar13 = *(longlong *)(param_2 + 0x58);
              }
              uVar14 = *(int *)(lVar13 + 4) * 0xbb38435 + 0x3619636b;
              *(uint *)(lVar13 + 4) = uVar14;
              fVar16 = (((float)(uVar14 >> 9 | 0x3f800000) + -1.0) * (fVar3 - fVar2) + fVar2) *
                       ABS(fVar16);
              if (fVar4 <= fVar16) {
                fVar16 = fVar4;
              }
              if (fVar16 <= fVar15) {
                fVar16 = fVar15;
              }
              lVar13 = *(longlong *)(lVar9 + 0x50);
              if (iVar6 != 0) {
                fVar16 = fVar16 * *(float *)(lVar13 + 4 + uVar12 * 8);
              }
              *(float *)(lVar13 + 4 + uVar12 * 8) = fVar16;
              uVar12 = uVar12 + 1;
            } while (uVar11 != uVar12);
          }
        }
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480898c0 FUN_1480898c0 body=1340 status=ok
// SIG undefined FUN_1480898c0(void)

void FUN_1480898c0(longlong param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  float *pfVar15;
  longlong lVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1e8 [44];
  float local_1bc;
  longlong local_1b8;
  ulonglong local_1b0;
  float *local_1a8;
  undefined8 uStack_1a0;
  int local_198;
  float *local_188;
  undefined8 uStack_180;
  int local_178;
  float *local_168;
  undefined8 uStack_160;
  int local_158;
  float *local_148;
  undefined8 uStack_140;
  int local_138;
  int *local_128;
  undefined8 uStack_120;
  int local_118;
  int *local_108;
  undefined8 uStack_100;
  int local_f8;
  int *local_e8;
  undefined8 uStack_e0;
  int local_d8;
  undefined1 local_d0 [8];
  longlong local_c8;
  float local_c0;
  int local_bc;
  longlong local_b0 [14];
  
  local_b0[2] = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_148078098(local_d0);
  uVar13 = 0;
  local_d8 = 0;
  local_e8 = (int *)0x0;
  uStack_e0 = 0;
  FUN_144a76d88(&local_e8,param_2);
  local_f8 = 0;
  local_108 = (int *)0x0;
  uStack_100 = 0;
  FUN_144a98d08(&local_108,param_2);
  local_118 = 0;
  local_128 = (int *)0x0;
  uStack_120 = 0;
  FUN_144a98d08(&local_128,param_2);
  local_138 = 0;
  local_148 = (float *)0x0;
  uStack_140 = 0;
  FUN_144a98dce(&local_148,param_2);
  local_158 = 0;
  local_168 = (float *)0x0;
  uStack_160 = 0;
  FUN_144a98dce(&local_168,param_2);
  local_178 = 0;
  local_188 = (float *)0x0;
  uStack_180 = 0;
  FUN_144a98dce(&local_188,param_2);
  local_198 = 0;
  local_1a8 = (float *)0x0;
  uStack_1a0 = 0;
  FUN_144a98dce(&local_1a8,param_2);
  piVar1 = local_108 + local_f8;
  iVar6 = *local_108;
  if (-1 < (longlong)iVar6) {
    if (iVar6 < *(int *)(*(longlong *)(local_c8 + 0x118) + 0x110)) {
      uVar13 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(local_c8 + 0x118) + 0x108) + (longlong)iVar6 * 0x10);
    }
    else {
      uVar13 = 0;
    }
  }
  lVar16 = *(longlong *)(local_c8 + 0x10);
  local_1b0 = uVar13;
  local_108 = piVar1;
  if (lVar16 != 0) {
    if ((*(char *)(param_1 + 0x40) == '\0') || ((DAT_14cb36ff0 & 1) != 0)) {
      lVar16 = *(longlong *)(lVar16 + 0x28);
    }
    else {
      lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x20) + 0x78);
    }
    if (lVar16 != 0) {
      LOCK();
      *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + -1;
      UNLOCK();
      if (DAT_14c76292d == '\x01') {
        uVar17 = *(uint *)(lVar16 + 0x120);
        uVar12 = (ulonglong)uVar17;
        if (((uVar13 != 0 && uVar12 != 0) && (*(int *)(uVar13 + 0xd4) == 0)) &&
           (piVar1 = local_e8 + local_d8, iVar6 = *local_e8, local_e8 = piVar1, iVar6 != 0)) {
          iVar6 = *local_128;
          fVar2 = *local_148;
          fVar3 = *local_168;
          fVar20 = 0.0;
          if (0.0 <= *local_188) {
            fVar20 = *local_188;
          }
          fVar4 = *local_1a8;
          uVar10 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          local_1a8 = local_1a8 + local_198;
          local_188 = local_188 + local_178;
          local_168 = local_168 + local_158;
          local_148 = local_148 + local_138;
          local_128 = local_128 + local_118;
          lVar11 = FUN_14808b838(local_c8 + 200,uVar10 >> 0x10 ^ uVar10,&local_1b0);
          FUN_148089274((longlong *)(lVar11 + 0x50),uVar12);
          local_c0 = (float)CONCAT31(local_c0._1_3_,1);
          local_bc = -1;
          FUN_140da315a(&local_c0,*(undefined8 *)(*(longlong *)(lVar16 + 0x10) + 8),param_3);
          if (local_bc != -1) {
            bVar8 = local_c0._0_1_;
            iVar7 = *(int *)(lVar16 + 0x128 + (ulonglong)(local_c0._0_1_ ^ 1) * 8);
            local_b0[1] = *(longlong *)(lVar16 + 0x18 + (ulonglong)(local_c0._0_1_ ^ 1) * 0x20);
            local_1b8 = (ulonglong)(uint)(iVar7 * local_bc) + local_b0[1];
            local_b0[0] = local_1b8;
            local_b0[1] = (ulonglong)(uint)((local_bc + 1) * iVar7) + local_b0[1];
            if (0 < (int)uVar17) {
              uVar17 = -(uint)(fVar4 < 0.0);
              fVar4 = (float)(~uVar17 & (uint)fVar4 | uVar17 & 0x7f7fffff);
              iVar7 = *(int *)(lVar16 + 0x120);
              uVar13 = 0;
              do {
                fVar19 = 1.0;
                fVar18 = 1.0;
                if ((longlong)uVar13 < (longlong)iVar7) {
                  if (bVar8 == 0) {
                    lVar16 = 0;
                    pfVar15 = &local_c0;
                    bVar9 = true;
                    do {
                      bVar14 = bVar9;
                      uVar5 = *(ushort *)(local_b0[lVar16] + uVar13 * 2);
                      uVar17 = (uint)uVar5 << 0xd;
                      if ((uVar17 & 0xf800000) == 0xf800000) {
                        fVar19 = (float)(uVar17 | 0x70000000);
                      }
                      else if ((uVar17 & 0xf800000) == 0) {
                        fVar19 = (float)(uVar17 | 0x38800000) + -6.1035156e-05;
                      }
                      else {
                        fVar19 = (float)((uVar17 & 0xfffe000) + 0x38000000);
                      }
                      *pfVar15 = (float)((int)(short)uVar5 & 0x80000000U | (uint)fVar19);
                      lVar16 = 1;
                      pfVar15 = &local_1bc;
                      fVar19 = local_1bc;
                      bVar9 = false;
                      fVar18 = local_c0;
                    } while (bVar14);
                  }
                  else {
                    fVar19 = *(float *)(local_b0[1] + uVar13 * 4);
                    fVar18 = *(float *)(local_1b8 + uVar13 * 4);
                  }
                }
                if (*param_2 == '\0') {
                  lVar16 = *(longlong *)(param_2 + 0x80) + 0x88;
                }
                else {
                  lVar16 = *(longlong *)(param_2 + 0x58);
                }
                uVar17 = *(int *)(lVar16 + 4) * 0xbb38435 + 0x3619636b;
                *(uint *)(lVar16 + 4) = uVar17;
                fVar19 = (((float)(uVar17 >> 9 | 0x3f800000) + -1.0) * (fVar3 - fVar2) + fVar2) *
                         SQRT(fVar18 * fVar18 + fVar19 * fVar19);
                if (fVar4 <= fVar19) {
                  fVar19 = fVar4;
                }
                if (fVar19 <= fVar20) {
                  fVar19 = fVar20;
                }
                lVar16 = *(longlong *)(lVar11 + 0x50);
                if (iVar6 != 0) {
                  fVar19 = fVar19 * *(float *)(lVar16 + 4 + uVar13 * 8);
                }
                *(float *)(lVar16 + 4 + uVar13 * 8) = fVar19;
                uVar13 = uVar13 + 1;
              } while (uVar13 != uVar12);
            }
          }
        }
      }
    }
  }
  if ((local_b0[2] ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148089dfe FUN_148089dfe body=1298 status=ok
// SIG undefined FUN_148089dfe(void)

void FUN_148089dfe(longlong param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_1d8 [44];
  undefined8 local_1ac;
  float local_1a4;
  ulonglong local_1a0;
  float *local_198;
  undefined8 uStack_190;
  int local_188;
  float *local_178;
  undefined8 uStack_170;
  int local_168;
  float *local_158;
  undefined8 uStack_150;
  int local_148;
  float *local_138;
  undefined8 uStack_130;
  int local_128;
  int *local_118;
  undefined8 uStack_110;
  int local_108;
  int *local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  undefined1 local_c0 [8];
  longlong local_b8;
  char local_b0;
  char local_af;
  int local_ac;
  longlong alStack_a8 [14];
  
  alStack_a8[3] = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_148078098(local_c0);
  uVar9 = 0;
  local_c8 = 0;
  local_d8 = (int *)0x0;
  uStack_d0 = 0;
  FUN_144a76d88(&local_d8,param_2);
  local_e8 = 0;
  local_f8 = (int *)0x0;
  uStack_f0 = 0;
  FUN_144a98d08(&local_f8,param_2);
  local_108 = 0;
  local_118 = (int *)0x0;
  uStack_110 = 0;
  FUN_144a98d08(&local_118,param_2);
  local_128 = 0;
  local_138 = (float *)0x0;
  uStack_130 = 0;
  FUN_144a98dce(&local_138,param_2);
  local_148 = 0;
  local_158 = (float *)0x0;
  uStack_150 = 0;
  FUN_144a98dce(&local_158,param_2);
  local_168 = 0;
  local_178 = (float *)0x0;
  uStack_170 = 0;
  FUN_144a98dce(&local_178,param_2);
  local_188 = 0;
  local_198 = (float *)0x0;
  uStack_190 = 0;
  FUN_144a98dce(&local_198,param_2);
  piVar1 = local_f8 + local_e8;
  iVar6 = *local_f8;
  if (-1 < (longlong)iVar6) {
    if (iVar6 < *(int *)(*(longlong *)(local_b8 + 0x118) + 0x110)) {
      uVar9 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(local_b8 + 0x118) + 0x108) + (longlong)iVar6 * 0x10);
    }
    else {
      uVar9 = 0;
    }
  }
  lVar11 = *(longlong *)(local_b8 + 0x10);
  local_1a0 = uVar9;
  local_f8 = piVar1;
  if (lVar11 != 0) {
    if ((*(char *)(param_1 + 0x40) == '\0') || ((DAT_14cb36ff0 & 1) != 0)) {
      lVar11 = *(longlong *)(lVar11 + 0x28);
    }
    else {
      lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x20) + 0x78);
    }
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + -1;
      UNLOCK();
      if (DAT_14c76292d == '\x01') {
        uVar12 = *(uint *)(lVar11 + 0x120);
        uVar10 = (ulonglong)uVar12;
        if (((uVar9 != 0 && uVar10 != 0) && (*(int *)(uVar9 + 0xd4) == 0)) &&
           (piVar1 = local_d8 + local_c8, iVar6 = *local_d8, local_d8 = piVar1, iVar6 != 0)) {
          iVar6 = *local_118;
          fVar2 = *local_138;
          fVar3 = *local_158;
          fVar14 = 0.0;
          if (0.0 <= *local_178) {
            fVar14 = *local_178;
          }
          fVar4 = *local_198;
          uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          local_198 = local_198 + local_188;
          local_178 = local_178 + local_168;
          local_158 = local_158 + local_148;
          local_138 = local_138 + local_128;
          local_118 = local_118 + local_108;
          lVar8 = FUN_14808b838(local_b8 + 200,uVar7 >> 0x10 ^ uVar7,&local_1a0);
          FUN_148089274((longlong *)(lVar8 + 0x50),uVar10);
          local_1ac = (undefined1 *)CONCAT71(local_1ac._1_7_,1);
          local_1ac = (undefined1 *)CONCAT44(0xffffffff,(float)local_1ac);
          FUN_140aa948e(&local_1ac,*(undefined8 *)(*(longlong *)(lVar11 + 0x10) + 8),param_3);
          FUN_14060d608(&local_b0,lVar11,(ulonglong)local_1ac & 0xff,local_1ac._4_4_);
          if ((0 < (int)uVar12) && (local_b0 != '\0')) {
            uVar12 = -(uint)(fVar4 < 0.0);
            fVar4 = (float)(~uVar12 & (uint)fVar4 | uVar12 & 0x7f7fffff);
            uVar9 = 0;
            do {
              if ((local_b0 == '\x01') && ((longlong)uVar9 < (longlong)local_ac)) {
                if (local_af == '\0') {
                  lVar11 = 0;
                  do {
                    uVar5 = *(ushort *)(alStack_a8[lVar11] + uVar9 * 2);
                    uVar12 = (uint)uVar5 << 0xd;
                    if ((uVar12 & 0xf800000) == 0xf800000) {
                      fVar13 = (float)(uVar12 | 0x70000000);
                    }
                    else if ((uVar12 & 0xf800000) == 0) {
                      fVar13 = (float)(uVar12 | 0x38800000) + -6.1035156e-05;
                    }
                    else {
                      fVar13 = (float)((uVar12 & 0xfffe000) + 0x38000000);
                    }
                    *(uint *)((longlong)&local_1ac + lVar11 * 4) =
                         (int)(short)uVar5 & 0x80000000U | (uint)fVar13;
                    lVar11 = lVar11 + 1;
                  } while (lVar11 != 3);
                }
                else {
                  lVar11 = 0;
                  do {
                    *(undefined4 *)((longlong)&local_1ac + lVar11 * 4) =
                         *(undefined4 *)(alStack_a8[lVar11] + uVar9 * 4);
                    lVar11 = lVar11 + 1;
                  } while (lVar11 != 3);
                }
              }
              else {
                local_1ac = &DAT_3f8000003f800000;
                local_1a4 = 1.0;
              }
              if (*param_2 == '\0') {
                lVar11 = *(longlong *)(param_2 + 0x80) + 0x88;
              }
              else {
                lVar11 = *(longlong *)(param_2 + 0x58);
              }
              uVar12 = *(int *)(lVar11 + 4) * 0xbb38435 + 0x3619636b;
              *(uint *)(lVar11 + 4) = uVar12;
              fVar13 = (((float)(uVar12 >> 9 | 0x3f800000) + -1.0) * (fVar3 - fVar2) + fVar2) *
                       SQRT(local_1a4 * local_1a4 +
                            (float)local_1ac * (float)local_1ac + local_1ac._4_4_ * local_1ac._4_4_)
              ;
              if (fVar4 <= fVar13) {
                fVar13 = fVar4;
              }
              if (fVar13 <= fVar14) {
                fVar13 = fVar14;
              }
              lVar11 = *(longlong *)(lVar8 + 0x50);
              if (iVar6 != 0) {
                fVar13 = fVar13 * *(float *)(lVar11 + 4 + uVar9 * 8);
              }
              *(float *)(lVar11 + 4 + uVar9 * 8) = fVar13;
              uVar9 = uVar9 + 1;
            } while (uVar9 != uVar10);
          }
        }
      }
    }
  }
  if ((alStack_a8[3] ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14808a312 FUN_14808a312 body=1329 status=ok
// SIG undefined FUN_14808a312(void)

void FUN_14808a312(longlong param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  ulonglong local_1b0;
  float *local_1a8;
  undefined8 uStack_1a0;
  int local_198;
  float *local_188;
  undefined8 uStack_180;
  int local_178;
  float *local_168;
  undefined8 uStack_160;
  int local_158;
  float *local_148;
  undefined8 uStack_140;
  int local_138;
  int *local_128;
  undefined8 uStack_120;
  int local_118;
  int *local_108;
  undefined8 uStack_100;
  int local_f8;
  int *local_e8;
  undefined8 uStack_e0;
  int local_d8;
  undefined1 local_c8 [8];
  longlong local_c0;
  char local_b8;
  char local_b7;
  int local_b4;
  longlong alStack_b0 [4];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_148078098(local_c8);
  uVar9 = 0;
  local_d8 = 0;
  local_e8 = (int *)0x0;
  uStack_e0 = 0;
  FUN_144a76d88(&local_e8,param_2);
  local_f8 = 0;
  local_108 = (int *)0x0;
  uStack_100 = 0;
  FUN_144a98d08(&local_108,param_2);
  local_118 = 0;
  local_128 = (int *)0x0;
  uStack_120 = 0;
  FUN_144a98d08(&local_128,param_2);
  local_138 = 0;
  local_148 = (float *)0x0;
  uStack_140 = 0;
  FUN_144a98dce(&local_148,param_2);
  local_158 = 0;
  local_168 = (float *)0x0;
  uStack_160 = 0;
  FUN_144a98dce(&local_168,param_2);
  local_178 = 0;
  local_188 = (float *)0x0;
  uStack_180 = 0;
  FUN_144a98dce(&local_188,param_2);
  local_198 = 0;
  local_1a8 = (float *)0x0;
  uStack_1a0 = 0;
  FUN_144a98dce(&local_1a8,param_2);
  piVar1 = local_108 + local_f8;
  iVar6 = *local_108;
  if (-1 < (longlong)iVar6) {
    if (iVar6 < *(int *)(*(longlong *)(local_c0 + 0x118) + 0x110)) {
      uVar9 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(local_c0 + 0x118) + 0x108) + (longlong)iVar6 * 0x10);
    }
    else {
      uVar9 = 0;
    }
  }
  lVar11 = *(longlong *)(local_c0 + 0x10);
  local_1b0 = uVar9;
  local_108 = piVar1;
  if (lVar11 != 0) {
    if ((*(char *)(param_1 + 0x40) == '\0') || ((DAT_14cb36ff0 & 1) != 0)) {
      lVar11 = *(longlong *)(lVar11 + 0x28);
    }
    else {
      lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x20) + 0x78);
    }
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + -1;
      UNLOCK();
      if (DAT_14c76292d == '\x01') {
        uVar12 = *(uint *)(lVar11 + 0x120);
        uVar10 = (ulonglong)uVar12;
        if (((uVar9 != 0 && uVar10 != 0) && (*(int *)(uVar9 + 0xd4) == 0)) &&
           (piVar1 = local_e8 + local_d8, iVar6 = *local_e8, local_e8 = piVar1, iVar6 != 0)) {
          iVar6 = *local_128;
          fVar2 = *local_148;
          fVar3 = *local_168;
          fVar14 = 0.0;
          if (0.0 <= *local_188) {
            fVar14 = *local_188;
          }
          fVar4 = *local_1a8;
          uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          local_1a8 = local_1a8 + local_198;
          local_188 = local_188 + local_178;
          local_168 = local_168 + local_158;
          local_148 = local_148 + local_138;
          local_128 = local_128 + local_118;
          lVar8 = FUN_14808b838(local_c0 + 200,uVar7 >> 0x10 ^ uVar7,&local_1b0);
          FUN_148089274((longlong *)(lVar8 + 0x50),uVar10);
          local_1c8 = CONCAT71(local_1c8._1_7_,1);
          local_1c8 = CONCAT44(0xffffffff,(float)local_1c8);
          FUN_140aa910c(&local_1c8,*(undefined8 *)(*(longlong *)(lVar11 + 0x10) + 8),param_3);
          FUN_14808a844(&local_b8,lVar11,local_1c8 & 0xff,local_1c8._4_4_);
          if ((0 < (int)uVar12) && (local_b8 != '\0')) {
            uVar12 = -(uint)(fVar4 < 0.0);
            fVar4 = (float)(~uVar12 & (uint)fVar4 | uVar12 & 0x7f7fffff);
            uVar9 = 0;
            do {
              if ((local_b8 == '\x01') && ((longlong)uVar9 < (longlong)local_b4)) {
                local_1c8 = 0;
                uStack_1c0 = 0x3f80000000000000;
                if (local_b7 == '\0') {
                  lVar11 = 0;
                  do {
                    uVar5 = *(ushort *)(alStack_b0[lVar11] + uVar9 * 2);
                    uVar12 = (uint)uVar5 << 0xd;
                    if ((uVar12 & 0xf800000) == 0xf800000) {
                      fVar13 = (float)(uVar12 | 0x70000000);
                    }
                    else if ((uVar12 & 0xf800000) == 0) {
                      fVar13 = (float)(uVar12 | 0x38800000) + -6.1035156e-05;
                    }
                    else {
                      fVar13 = (float)((uVar12 & 0xfffe000) + 0x38000000);
                    }
                    *(uint *)((longlong)&local_1c8 + lVar11 * 4) =
                         (int)(short)uVar5 & 0x80000000U | (uint)fVar13;
                    lVar11 = lVar11 + 1;
                  } while (lVar11 != 4);
                }
                else {
                  lVar11 = 0;
                  do {
                    *(undefined4 *)((longlong)&local_1c8 + lVar11 * 4) =
                         *(undefined4 *)(alStack_b0[lVar11] + uVar9 * 4);
                    lVar11 = lVar11 + 1;
                  } while (lVar11 != 4);
                }
              }
              else {
                local_1c8 = 0x3f800000;
                uStack_1c0 = 0x3f80000000000000;
              }
              if (*param_2 == '\0') {
                lVar11 = *(longlong *)(param_2 + 0x80) + 0x88;
              }
              else {
                lVar11 = *(longlong *)(param_2 + 0x58);
              }
              uVar12 = *(int *)(lVar11 + 4) * 0xbb38435 + 0x3619636b;
              *(uint *)(lVar11 + 4) = uVar12;
              fVar13 = (((float)(uVar12 >> 9 | 0x3f800000) + -1.0) * (fVar3 - fVar2) + fVar2) *
                       SQRT(uStack_1c0._4_4_ * uStack_1c0._4_4_ +
                            (float)uStack_1c0 * (float)uStack_1c0 +
                            (float)local_1c8 * (float)local_1c8 + local_1c8._4_4_ * local_1c8._4_4_)
              ;
              if (fVar4 <= fVar13) {
                fVar13 = fVar4;
              }
              if (fVar13 <= fVar14) {
                fVar13 = fVar14;
              }
              lVar11 = *(longlong *)(lVar8 + 0x50);
              if (iVar6 != 0) {
                fVar13 = fVar13 * *(float *)(lVar11 + 4 + uVar9 * 8);
              }
              *(float *)(lVar11 + 4 + uVar9 * 8) = fVar13;
              uVar9 = uVar9 + 1;
            } while (uVar9 != uVar10);
          }
        }
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14808a844 FUN_14808a844 body=122 status=ok
// SIG undefined FUN_14808a844(void)

void FUN_14808a844(undefined1 *param_1,longlong param_2,byte param_3,int param_4)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_4 != -1 && param_2 != 0) {
    *param_1 = 1;
    lVar1 = 0;
    do {
      *(ulonglong *)(param_1 + lVar1 * 8 + 8) =
           (ulonglong)
           (uint)((param_4 + (int)lVar1) * *(int *)(param_2 + (ulonglong)(param_3 ^ 1) * 8 + 0x128))
           + *(longlong *)(param_2 + ((ulonglong)(param_3 ^ 1) << 5 | 0x18));
      lVar1 = lVar1 + 1;
    } while (lVar1 != 4);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x120);
  }
  return;
}



// FUNCTION 14808a8be FUN_14808a8be body=1298 status=ok
// SIG undefined FUN_14808a8be(void)

void FUN_14808a8be(longlong param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_1d8 [44];
  undefined8 local_1ac;
  float local_1a4;
  ulonglong local_1a0;
  float *local_198;
  undefined8 uStack_190;
  int local_188;
  float *local_178;
  undefined8 uStack_170;
  int local_168;
  float *local_158;
  undefined8 uStack_150;
  int local_148;
  float *local_138;
  undefined8 uStack_130;
  int local_128;
  int *local_118;
  undefined8 uStack_110;
  int local_108;
  int *local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  undefined1 local_c0 [8];
  longlong local_b8;
  char local_b0;
  char local_af;
  int local_ac;
  longlong alStack_a8 [14];
  
  alStack_a8[3] = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_148078098(local_c0);
  uVar9 = 0;
  local_c8 = 0;
  local_d8 = (int *)0x0;
  uStack_d0 = 0;
  FUN_144a76d88(&local_d8,param_2);
  local_e8 = 0;
  local_f8 = (int *)0x0;
  uStack_f0 = 0;
  FUN_144a98d08(&local_f8,param_2);
  local_108 = 0;
  local_118 = (int *)0x0;
  uStack_110 = 0;
  FUN_144a98d08(&local_118,param_2);
  local_128 = 0;
  local_138 = (float *)0x0;
  uStack_130 = 0;
  FUN_144a98dce(&local_138,param_2);
  local_148 = 0;
  local_158 = (float *)0x0;
  uStack_150 = 0;
  FUN_144a98dce(&local_158,param_2);
  local_168 = 0;
  local_178 = (float *)0x0;
  uStack_170 = 0;
  FUN_144a98dce(&local_178,param_2);
  local_188 = 0;
  local_198 = (float *)0x0;
  uStack_190 = 0;
  FUN_144a98dce(&local_198,param_2);
  piVar1 = local_f8 + local_e8;
  iVar6 = *local_f8;
  if (-1 < (longlong)iVar6) {
    if (iVar6 < *(int *)(*(longlong *)(local_b8 + 0x118) + 0x110)) {
      uVar9 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(local_b8 + 0x118) + 0x108) + (longlong)iVar6 * 0x10);
    }
    else {
      uVar9 = 0;
    }
  }
  lVar11 = *(longlong *)(local_b8 + 0x10);
  local_1a0 = uVar9;
  local_f8 = piVar1;
  if (lVar11 != 0) {
    if ((*(char *)(param_1 + 0x40) == '\0') || ((DAT_14cb36ff0 & 1) != 0)) {
      lVar11 = *(longlong *)(lVar11 + 0x28);
    }
    else {
      lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x20) + 0x78);
    }
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + -1;
      UNLOCK();
      if (DAT_14c76292d == '\x01') {
        uVar12 = *(uint *)(lVar11 + 0x120);
        uVar10 = (ulonglong)uVar12;
        if (((uVar9 != 0 && uVar10 != 0) && (*(int *)(uVar9 + 0xd4) == 0)) &&
           (piVar1 = local_d8 + local_c8, iVar6 = *local_d8, local_d8 = piVar1, iVar6 != 0)) {
          iVar6 = *local_118;
          fVar2 = *local_138;
          fVar3 = *local_158;
          fVar14 = 0.0;
          if (0.0 <= *local_178) {
            fVar14 = *local_178;
          }
          fVar4 = *local_198;
          uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          local_198 = local_198 + local_188;
          local_178 = local_178 + local_168;
          local_158 = local_158 + local_148;
          local_138 = local_138 + local_128;
          local_118 = local_118 + local_108;
          lVar8 = FUN_14808b838(local_b8 + 200,uVar7 >> 0x10 ^ uVar7,&local_1a0);
          FUN_148089274((longlong *)(lVar8 + 0x50),uVar10);
          local_1ac = (undefined1 *)CONCAT71(local_1ac._1_7_,1);
          local_1ac = (undefined1 *)CONCAT44(0xffffffff,(float)local_1ac);
          FUN_140aa948e(&local_1ac,*(undefined8 *)(*(longlong *)(lVar11 + 0x10) + 8),param_3);
          FUN_14060d608(&local_b0,lVar11,(ulonglong)local_1ac & 0xff,local_1ac._4_4_);
          if ((0 < (int)uVar12) && (local_b0 != '\0')) {
            uVar12 = -(uint)(fVar4 < 0.0);
            fVar4 = (float)(~uVar12 & (uint)fVar4 | uVar12 & 0x7f7fffff);
            uVar9 = 0;
            do {
              if ((local_b0 == '\x01') && ((longlong)uVar9 < (longlong)local_ac)) {
                if (local_af == '\0') {
                  lVar11 = 0;
                  do {
                    uVar5 = *(ushort *)(alStack_a8[lVar11] + uVar9 * 2);
                    uVar12 = (uint)uVar5 << 0xd;
                    if ((uVar12 & 0xf800000) == 0xf800000) {
                      fVar13 = (float)(uVar12 | 0x70000000);
                    }
                    else if ((uVar12 & 0xf800000) == 0) {
                      fVar13 = (float)(uVar12 | 0x38800000) + -6.1035156e-05;
                    }
                    else {
                      fVar13 = (float)((uVar12 & 0xfffe000) + 0x38000000);
                    }
                    *(uint *)((longlong)&local_1ac + lVar11 * 4) =
                         (int)(short)uVar5 & 0x80000000U | (uint)fVar13;
                    lVar11 = lVar11 + 1;
                  } while (lVar11 != 3);
                }
                else {
                  lVar11 = 0;
                  do {
                    *(undefined4 *)((longlong)&local_1ac + lVar11 * 4) =
                         *(undefined4 *)(alStack_a8[lVar11] + uVar9 * 4);
                    lVar11 = lVar11 + 1;
                  } while (lVar11 != 3);
                }
              }
              else {
                local_1ac = &DAT_3f8000003f800000;
                local_1a4 = 1.0;
              }
              if (*param_2 == '\0') {
                lVar11 = *(longlong *)(param_2 + 0x80) + 0x88;
              }
              else {
                lVar11 = *(longlong *)(param_2 + 0x58);
              }
              uVar12 = *(int *)(lVar11 + 4) * 0xbb38435 + 0x3619636b;
              *(uint *)(lVar11 + 4) = uVar12;
              fVar13 = (((float)(uVar12 >> 9 | 0x3f800000) + -1.0) * (fVar3 - fVar2) + fVar2) *
                       SQRT(local_1a4 * local_1a4 +
                            (float)local_1ac * (float)local_1ac + local_1ac._4_4_ * local_1ac._4_4_)
              ;
              if (fVar4 <= fVar13) {
                fVar13 = fVar4;
              }
              if (fVar13 <= fVar14) {
                fVar13 = fVar14;
              }
              lVar11 = *(longlong *)(lVar8 + 0x50);
              if (iVar6 != 0) {
                fVar13 = fVar13 * *(float *)(lVar11 + 4 + uVar9 * 8);
              }
              *(float *)(lVar11 + 4 + uVar9 * 8) = fVar13;
              uVar9 = uVar9 + 1;
            } while (uVar9 != uVar10);
          }
        }
      }
    }
  }
  if ((alStack_a8[3] ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14808add2 FUN_14808add2 body=83 status=ok
// SIG undefined FUN_14808add2(void)

void FUN_14808add2(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 << 4,0);
  iVar1 = (int)(uVar2 >> 4);
  iVar3 = 0x7fffffff;
  if ((int)param_2 <= iVar1) {
    iVar3 = iVar1;
  }
  if (iVar3 == *(int *)(param_1 + 0x10c)) {
    return;
  }
  *(int *)(param_1 + 0x10c) = iVar3;
  FUN_14808ae26(param_1,*(undefined4 *)(param_1 + 0x108));
  return;
}



// FUNCTION 14808ae26 FUN_14808ae26 body=141 status=ok
// SIG undefined FUN_14808ae26(void)

void FUN_14808ae26(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,0x10);
  return;
}



// FUNCTION 14808aeb4 FUN_14808aeb4 body=103 status=ok
// SIG undefined FUN_14808aeb4(void)

void FUN_14808aeb4(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x10;
    if (0x10 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x10c)) {
    *(int *)(param_1 + 0x10c) = iVar3;
    FUN_14808af1c(param_1,*(undefined4 *)(param_1 + 0x108));
    return;
  }
  return;
}



// FUNCTION 14808af1c FUN_14808af1c body=141 status=ok
// SIG undefined FUN_14808af1c(void)

void FUN_14808af1c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,0x10);
  return;
}



// FUNCTION 14808afaa FUN_14808afaa body=103 status=ok
// SIG undefined FUN_14808afaa(void)

void FUN_14808afaa(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x10;
    if (0x10 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x10c)) {
    *(int *)(param_1 + 0x10c) = iVar3;
    FUN_14808b012(param_1,*(undefined4 *)(param_1 + 0x108));
    return;
  }
  return;
}



// FUNCTION 14808b012 FUN_14808b012 body=141 status=ok
// SIG undefined FUN_14808b012(void)

void FUN_14808b012(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,0x10);
  return;
}



// FUNCTION 14808b0a0 FUN_14808b0a0 body=119 status=ok
// SIG undefined FUN_14808b0a0(void)

void FUN_14808b0a0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_14808ae26(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14808b118 FUN_14808b118 body=119 status=ok
// SIG undefined FUN_14808b118(void)

void FUN_14808b118(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_14808af1c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14808b24a FUN_14808b24a body=119 status=ok
// SIG undefined FUN_14808b24a(void)

void FUN_14808b24a(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_14808b012(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14808b2c2 FUN_14808b2c2 body=100 status=ok
// SIG undefined FUN_14808b2c2(void)

undefined8 FUN_14808b2c2(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  iVar4 = (int)(uVar2 / 0x18);
  iVar5 = 0x7fffffff;
  if ((int)param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 == *(int *)(param_1 + 0x18c)) {
    return SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  }
  *(int *)(param_1 + 0x18c) = iVar5;
  uVar3 = FUN_14808b326(param_1,*(undefined4 *)(param_1 + 0x188));
  return uVar3;
}



// FUNCTION 14808b326 FUN_14808b326 body=149 status=ok
// SIG undefined FUN_14808b326(void)

void FUN_14808b326(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 14808b3bc FUN_14808b3bc body=120 status=ok
// SIG undefined FUN_14808b3bc(void)

void FUN_14808b3bc(longlong param_1,uint param_2)

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
    FUN_14808b434(param_1,*(undefined4 *)(param_1 + 0x188));
    return;
  }
  return;
}



// FUNCTION 14808b434 FUN_14808b434 body=149 status=ok
// SIG undefined FUN_14808b434(void)

void FUN_14808b434(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 14808b4ca FUN_14808b4ca body=120 status=ok
// SIG undefined FUN_14808b4ca(void)

void FUN_14808b4ca(longlong param_1,uint param_2)

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
    FUN_14808b542(param_1,*(undefined4 *)(param_1 + 0x188));
    return;
  }
  return;
}



// FUNCTION 14808b542 FUN_14808b542 body=149 status=ok
// SIG undefined FUN_14808b542(void)

void FUN_14808b542(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 14808b5d8 FUN_14808b5d8 body=136 status=ok
// SIG undefined FUN_14808b5d8(void)

void FUN_14808b5d8(longlong param_1,int param_2)

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
    FUN_14808b326(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14808b662 FUN_14808b662 body=136 status=ok
// SIG undefined FUN_14808b662(void)

void FUN_14808b662(longlong param_1,int param_2)

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
    FUN_14808b434(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14808b6ec FUN_14808b6ec body=136 status=ok
// SIG undefined FUN_14808b6ec(void)

void FUN_14808b6ec(longlong param_1,int param_2)

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
    FUN_14808b542(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14808b776 FUN_14808b776 body=194 status=ok
// SIG undefined FUN_14808b776(void)

void FUN_14808b776(longlong *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (*param_2 == '\x01') {
    *(uint *)(param_1 + 2) =
         (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_2 + 0x30));
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = lVar4;
    iVar5 = (int)param_1[2] * *(int *)(param_2 + 0x44);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar3 = uVar1 & 0x7fff;
    *(uint *)(param_1 + 2) = (uint)(uVar1 >> 0xf);
    lVar4 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar1 < 0) {
      lVar4 = (ulonglong)(uVar3 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70);
    }
    else {
      iVar5 = **(int **)(lVar4 + 0x20);
      lVar6 = 0;
      if (iVar5 <= (int)uVar3) {
        do {
          uVar3 = uVar3 - iVar5;
          iVar5 = (*(int **)(lVar4 + 0x20))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (iVar5 <= (int)uVar3);
      }
      lVar4 = (longlong)(int)uVar3 + *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar6 * 8);
    }
    *param_1 = lVar4;
    iVar5 = (uint)(uVar1 >> 0xf) * *(int *)(*(longlong *)(param_2 + 0x80) + 0x4c);
  }
  lVar4 = lVar4 + (longlong)iVar5 * 2;
  *param_1 = lVar4;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 14808b838 FUN_14808b838 body=180 status=ok
// SIG undefined FUN_14808b838(void)

longlong FUN_14808b838(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x70;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x70) == *param_3) {
          if (lVar3 != 0) goto LAB_14808b8cf;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x68);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14808b8ee(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x70 + *param_1;
LAB_14808b8cf:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14808b8ee FUN_14808b8ee body=297 status=ok
// SIG undefined FUN_14808b8ee(void)

undefined4 * FUN_14808b8ee(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14808ba18(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0;
  local_40[0xb] = 0;
  local_40[0xc] = 0;
  *(undefined4 *)(local_40 + 0xd) = 0xffffffff;
  cVar1 = FUN_14808bafa(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x6c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xd) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14808bc20(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14808ba18 FUN_14808ba18 body=226 status=ok
// SIG undefined FUN_14808ba18(void)

int * FUN_14808ba18(longlong *param_1,int *param_2)

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
      FUN_140275bcc(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x70);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x70) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x70 + *param_1;
  return param_2;
}



// FUNCTION 14808bafa FUN_14808bafa body=177 status=ok
// SIG undefined FUN_14808bafa(void)

undefined8 FUN_14808bafa(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x70);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x70) == *param_3) {
          if (*(longlong *)((longlong)_Dst + 0x58) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)((longlong)_Dst + 8) != 0) {
            FUN_1400020a8();
          }
          memmove(_Dst,param_3,0x68);
          FUN_14808bbac(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x68);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14808bbac FUN_14808bbac body=116 status=ok
// SIG undefined FUN_14808bbac(void)

void FUN_14808bbac(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x70) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70 + 4) = uVar5;
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



// FUNCTION 14808bc20 FUN_14808bc20 body=474 status=ok
// SIG undefined FUN_14808bc20(void)

void FUN_14808bc20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x70;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x6c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x68 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 14808bdfb FUN_14808bdfb body=30 status=ok
// SIG undefined FUN_14808bdfb(void)

void FUN_14808bdfb(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1 * 8) = 0x3f80000000000000;
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 14808c314 FUN_14808c314 body=151 status=ok
// SIG undefined FUN_14808c314(void)

void FUN_14808c314(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_14808c3ac();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb37d08;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x40;
  return;
}



// FUNCTION 14808c3ac FUN_14808c3ac body=258 status=ok
// SIG undefined FUN_14808c3ac(void)

void FUN_14808c3ac(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb37d88) {
    FUN_144b3d300(&DAT_14cb37d88);
    if (DAT_14cb37d88 == -1) {
      FUN_14808c4b0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x115;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb37d08,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14390c795);
      _Init_thread_footer(&DAT_14cb37d88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14808c4b0 FUN_14808c4b0 body=226 status=ok
// SIG undefined FUN_14808c4b0(void)

longlong * FUN_14808c4b0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14808c594;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14808c594 FUN_14808c594 body=136 status=ok
// SIG undefined FUN_14808c594(void)

code * FUN_14808c594(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NDCSpawnDataBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000124;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808c61c;
}



// FUNCTION 14808c61c FUN_14808c61c body=136 status=ok
// SIG undefined FUN_14808c61c(void)

code * FUN_14808c61c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NDCElementCountAtSpawn";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3400000123;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808c6a4;
}



// FUNCTION 14808c6a4 FUN_14808c6a4 body=136 status=ok
// SIG undefined FUN_14808c6a4(void)

code * FUN_14808c6a4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BufferSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000121;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808c72c;
}



// FUNCTION 14808c72c FUN_14808c72c body=136 status=ok
// SIG undefined FUN_14808c72c(void)

code * FUN_14808c72c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ConsumeInstanceCountOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c00000120;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808c7b4;
}



// FUNCTION 14808c7b4 FUN_14808c7b4 body=136 status=ok
// SIG undefined FUN_14808c7b4(void)

code * FUN_14808c7b4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceCountOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000011f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808c83c;
}



// FUNCTION 14808c83c FUN_14808c83c body=136 status=ok
// SIG undefined FUN_14808c83c(void)

code * FUN_14808c83c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DataInt32";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000011d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808c8c4;
}



// FUNCTION 14808c8c4 FUN_14808c8c4 body=136 status=ok
// SIG undefined FUN_14808c8c4(void)

code * FUN_14808c8c4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DataFloat";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000011c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808c94c;
}



// FUNCTION 14808c94c FUN_14808c94c body=136 status=ok
// SIG undefined FUN_14808c94c(void)

code * FUN_14808c94c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Int32Stride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000119;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808c9d4;
}



// FUNCTION 14808c9d4 FUN_14808c9d4 body=136 status=ok
// SIG undefined FUN_14808c9d4(void)

code * FUN_14808c9d4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FloatStride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000118;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808ca5c;
}



// FUNCTION 14808ca5c FUN_14808ca5c body=136 status=ok
// SIG undefined FUN_14808ca5c(void)

code * FUN_14808ca5c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ParameterOffsetTableIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000117;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808cae4;
}



// FUNCTION 14808cae4 FUN_14808cae4 body=130 status=ok
// SIG undefined FUN_14808cae4(void)

undefined1 * FUN_14808cae4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ParamOffsetTable";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x116;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14808cb66;
}



// FUNCTION 14808cb6a FUN_14808cb6a body=189 status=ok
// SIG undefined FUN_14808cb6a(void)

longlong FUN_14808cb6a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0xd8;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0xd8) == *param_3) {
          if (lVar3 != 0) goto LAB_14808cc0a;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0xd0);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14808cc28(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0xd8 + *param_1;
LAB_14808cc0a:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14808cc28 FUN_14808cc28 body=281 status=ok
// SIG undefined FUN_14808cc28(void)

undefined4 * FUN_14808cc28(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14808cd42(param_1,local_48);
  FUN_14808ced4(param_4,local_40);
  *(undefined4 *)(local_40 + 0xd0) = 0xffffffff;
  cVar1 = FUN_14808ce30(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0xd4) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xd0) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14808d114(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14808cd42 FUN_14808cd42 body=237 status=ok
// SIG undefined FUN_14808cd42(void)

int * FUN_14808cd42(longlong *param_1,int *param_2)

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
      FUN_14607dd42(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xd8);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xd8) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xd8 + *param_1;
  return param_2;
}



// FUNCTION 14808ce30 FUN_14808ce30 body=164 status=ok
// SIG undefined FUN_14808ce30(void)

undefined8 FUN_14808ce30(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xd8);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0xd8) == *param_3) {
          FUN_148084a1c((longlong)_Dst + 8);
          memmove(_Dst,param_3,0xd0);
          FUN_1480889e6(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0xd0);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14808ced4 FUN_14808ced4 body=186 status=ok
// SIG undefined FUN_14808ced4(void)

undefined8 * FUN_14808ced4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8 [48];
  undefined **local_b8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_6c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  memset(local_e8,0,0xc0);
  local_b8 = &PTR_FUN_14a355380;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_48 = 0;
  uStack_40 = 0;
  local_30 = 0xffffffff;
  local_28 = 0;
  *param_2 = *(undefined8 *)*param_1;
  FUN_14808cf90(param_2 + 1,local_e8);
  FUN_148084a1c(local_e8);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14808cf90 FUN_14808cf90 body=264 status=ok
// SIG undefined FUN_14808cf90(void)

undefined8 * FUN_14808cf90(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_2[3] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  param_1[6] = &PTR_LAB_14a3d30d0;
  param_1[7] = 0;
  FUN_140702250(param_1 + 7,param_2 + 7);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  param_2[8] = 0;
  param_1[6] = &PTR_FUN_14a355380;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  FUN_14808d098(param_1 + 10,param_2 + 10);
  param_1[0x14] = 0;
  param_1[0x14] = param_2[0x14];
  param_2[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  param_2[0x15] = 0;
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  param_1[0x16] = param_2[0x16];
  param_1[0x18] = param_2[0x18];
  param_2[0x18] = 0;
  return param_1;
}



// FUNCTION 14808d098 FUN_14808d098 body=123 status=ok
// SIG undefined FUN_14808d098(void)

undefined8 * FUN_14808d098(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1480854fc();
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



// FUNCTION 14808d114 FUN_14808d114 body=456 status=ok
// SIG undefined FUN_14808d114(void)

void FUN_14808d114(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0xd8;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xd4 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xd0 + lVar7) =
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



// FUNCTION 14808d2de FUN_14808d2de body=108 status=ok
// SIG undefined FUN_14808d2de(void)

void FUN_14808d2de(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0xe0) == param_2) {
          FUN_14808d34a(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0xe0 + *param_1 + 0xd8);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14808d34a FUN_14808d34a body=138 status=ok
// SIG undefined FUN_14808d34a(void)

void FUN_14808d34a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0xe0;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0xdc + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0xd8 + lVar6 * 0xe0);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0xe0 + 0xd8);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0xd8);
  FUN_148085920(*param_1 + lVar2 + 8);
  FUN_14808d3d4(param_1,param_2);
  return;
}



// FUNCTION 14808d3d4 FUN_14808d3d4 body=122 status=ok
// SIG undefined FUN_14808d3d4(void)

void FUN_14808d3d4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xe0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xe0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xe0 + 4) = uVar5;
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



// FUNCTION 14808d44e FUN_14808d44e body=15 status=ok
// SIG undefined FUN_14808d44e(void)

void FUN_14808d44e(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17) = 0;
  return;
}



// FUNCTION 14808d45e FUN_14808d45e body=132 status=ok
// SIG undefined FUN_14808d45e(void)

void FUN_14808d45e(longlong param_1,int param_2)

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



// FUNCTION 14808d4e3 FUN_14808d4e3 body=73 status=ok
// SIG undefined FUN_14808d4e3(void)

void FUN_14808d4e3(longlong param_1,int param_2)

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



// FUNCTION 14808d52c FUN_14808d52c body=132 status=ok
// SIG undefined FUN_14808d52c(void)

void FUN_14808d52c(longlong param_1,int param_2)

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



// FUNCTION 14808d5b2 FUN_14808d5b2 body=9 status=ok
// SIG undefined FUN_14808d5b2(void)

void FUN_14808d5b2(longlong param_1)

{
  FUN_14808d5da(param_1 + 0x10);
  return;
}



// FUNCTION 14808d5bc FUN_14808d5bc body=29 status=ok
// SIG undefined FUN_14808d5bc(void)

undefined8 FUN_14808d5bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14808d5da FUN_14808d5da body=93 status=ok
// SIG undefined FUN_14808d5da(void)

void FUN_14808d5da(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x18);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014808d62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14808d638 FUN_14808d638 body=164 status=ok
// SIG undefined FUN_14808d638(void)

void FUN_14808d638(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_14808d6b0;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_14808d6b0;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14808d6b0:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014808d6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14808d6dc FUN_14808d6dc body=96 status=ok
// SIG undefined FUN_14808d6dc(void)

void FUN_14808d6dc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14808d73c FUN_14808d73c body=43 status=ok
// SIG undefined FUN_14808d73c(void)

void FUN_14808d73c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_144830b78((longlong)param_1 + 0x1c,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  return;
}



// FUNCTION 14808d768 FUN_14808d768 body=132 status=ok
// SIG undefined FUN_14808d768(void)

void FUN_14808d768(longlong param_1,int param_2)

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



// FUNCTION 14808d7ee FUN_14808d7ee body=9 status=ok
// SIG undefined FUN_14808d7ee(void)

void FUN_14808d7ee(longlong param_1)

{
  FUN_14807a6f6(param_1 + 0x10);
  return;
}



// FUNCTION 14808d7f8 FUN_14808d7f8 body=29 status=ok
// SIG undefined FUN_14808d7f8(void)

undefined8 FUN_14808d7f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14808d816 FUN_14808d816 body=164 status=ok
// SIG undefined FUN_14808d816(void)

void FUN_14808d816(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_14808d88e;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_14808d88e;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14808d88e:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014808d8ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14808d8ba FUN_14808d8ba body=151 status=ok
// SIG undefined FUN_14808d8ba(void)

void FUN_14808d8ba(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_14808d952();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb37da0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x50;
  return;
}



// FUNCTION 14808d952 FUN_14808d952 body=258 status=ok
// SIG undefined FUN_14808d952(void)

void FUN_14808d952(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb37e20) {
    FUN_144b3d300(&DAT_14cb37e20);
    if (DAT_14cb37e20 == -1) {
      FUN_14808da56(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0xb5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb37da0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14390d7cf);
      _Init_thread_footer(&DAT_14cb37e20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14808da56 FUN_14808da56 body=226 status=ok
// SIG undefined FUN_14808da56(void)

longlong * FUN_14808da56(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14808db3a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14808db3a FUN_14808db3a body=136 status=ok
// SIG undefined FUN_14808db3a(void)

code * FUN_14808db3a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CPUInt32Stride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4c000000c8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808dbc2;
}



// FUNCTION 14808dbc2 FUN_14808dbc2 body=136 status=ok
// SIG undefined FUN_14808dbc2(void)

code * FUN_14808dbc2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CPUFloatStride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000000c7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808dc4a;
}



// FUNCTION 14808dc4a FUN_14808dc4a body=136 status=ok
// SIG undefined FUN_14808dc4a(void)

code * FUN_14808dc4a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CPUBufferSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x44000000c6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808dcd2;
}



// FUNCTION 14808dcd2 FUN_14808dcd2 body=136 status=ok
// SIG undefined FUN_14808dcd2(void)

code * FUN_14808dcd2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CPUInstanceCountOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000c5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808dd5a;
}



// FUNCTION 14808dd5a FUN_14808dd5a body=136 status=ok
// SIG undefined FUN_14808dd5a(void)

code * FUN_14808dd5a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CPUBufferInt32";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000000c3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808dde2;
}



// FUNCTION 14808dde2 FUN_14808dde2 body=136 status=ok
// SIG undefined FUN_14808dde2(void)

code * FUN_14808dde2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CPUBufferFloat";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000c2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808de6a;
}



// FUNCTION 14808de6a FUN_14808de6a body=136 status=ok
// SIG undefined FUN_14808de6a(void)

code * FUN_14808de6a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GPUBufferSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c000000c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808def2;
}



// FUNCTION 14808def2 FUN_14808def2 body=136 status=ok
// SIG undefined FUN_14808def2(void)

code * FUN_14808def2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GPUInstanceCountOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808df7a;
}



// FUNCTION 14808df7a FUN_14808df7a body=136 status=ok
// SIG undefined FUN_14808df7a(void)

code * FUN_14808df7a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GPUBufferInt32";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000bd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808e002;
}



// FUNCTION 14808e002 FUN_14808e002 body=136 status=ok
// SIG undefined FUN_14808e002(void)

code * FUN_14808e002(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GPUBufferFloat";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808e08a;
}



// FUNCTION 14808e08a FUN_14808e08a body=136 status=ok
// SIG undefined FUN_14808e08a(void)

code * FUN_14808e08a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Int32Stride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000b9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808e112;
}



// FUNCTION 14808e112 FUN_14808e112 body=136 status=ok
// SIG undefined FUN_14808e112(void)

code * FUN_14808e112(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FloatStride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000b8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808e19a;
}



// FUNCTION 14808e19a FUN_14808e19a body=136 status=ok
// SIG undefined FUN_14808e19a(void)

code * FUN_14808e19a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ParameterOffsetTableIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000b7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808e222;
}



// FUNCTION 14808e222 FUN_14808e222 body=130 status=ok
// SIG undefined FUN_14808e222(void)

undefined1 * FUN_14808e222(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ParamOffsetTable";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14808e2a4;
}



// FUNCTION 14808e2a8 FUN_14808e2a8 body=189 status=ok
// SIG undefined FUN_14808e2a8(void)

longlong FUN_14808e2a8(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0xe0;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0xe0) == *param_3) {
          if (lVar3 != 0) goto LAB_14808e348;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0xd8);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14808e366(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0xe0 + *param_1;
LAB_14808e348:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14808e366 FUN_14808e366 body=281 status=ok
// SIG undefined FUN_14808e366(void)

undefined4 * FUN_14808e366(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14808e480(param_1,local_48);
  FUN_14808e610(param_4,local_40);
  *(undefined4 *)(local_40 + 0xd8) = 0xffffffff;
  cVar1 = FUN_14808e56c(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0xdc) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xd8) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14808e7e6(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14808e480 FUN_14808e480 body=235 status=ok
// SIG undefined FUN_14808e480(void)

int * FUN_14808e480(longlong *param_1,int *param_2)

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
      FUN_14041fbf2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xe0);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xe0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xe0 + *param_1;
  return param_2;
}



// FUNCTION 14808e56c FUN_14808e56c body=164 status=ok
// SIG undefined FUN_14808e56c(void)

undefined8 FUN_14808e56c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xe0);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0xe0) == *param_3) {
          FUN_148085920((longlong)_Dst + 8);
          memmove(_Dst,param_3,0xd8);
          FUN_14808d3d4(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0xd8);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14808e610 FUN_14808e610 body=188 status=ok
// SIG undefined FUN_14808e610(void)

undefined8 * FUN_14808e610(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_118 [32];
  undefined1 local_f8 [40];
  undefined **local_d0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_84;
  undefined8 local_60;
  undefined7 uStack_58;
  undefined4 uStack_51;
  undefined4 local_4c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  memset(local_f8,0,0xc0);
  local_d0 = &PTR_FUN_14a355380;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_4c = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_51 = 0;
  local_38 = 0;
  uStack_30 = 0;
  *param_2 = *(undefined8 *)*param_1;
  FUN_14808e6ce(param_2 + 1,local_f8);
  FUN_148085920(local_f8);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14808e6ce FUN_14808e6ce body=279 status=ok
// SIG undefined FUN_14808e6ce(void)

undefined8 * FUN_14808e6ce(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  param_1[3] = param_2[3];
  param_2[3] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = &PTR_LAB_14a3d30d0;
  param_1[6] = 0;
  FUN_140702250(param_1 + 6,param_2 + 6);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_2[7] = 0;
  param_1[5] = &PTR_FUN_14a355380;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  FUN_14808d098(param_1 + 9,param_2 + 9);
  param_1[0x13] = param_2[0x13];
  param_2[0x13] = 0;
  param_1[0x14] = param_2[0x14];
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb5) = *(undefined8 *)((longlong)param_2 + 0xb5);
  uVar1 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar1;
  param_1[0x18] = 0;
  param_1[0x18] = param_2[0x18];
  param_2[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
  param_2[0x19] = 0;
  return param_1;
}



// FUNCTION 14808e7e6 FUN_14808e7e6 body=456 status=ok
// SIG undefined FUN_14808e7e6(void)

void FUN_14808e7e6(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0xe0;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xdc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xd8 + lVar7) =
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



// FUNCTION 14808e9b0 FUN_14808e9b0 body=132 status=ok
// SIG undefined FUN_14808e9b0(void)

void FUN_14808e9b0(longlong param_1,int param_2)

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



// FUNCTION 14808ea36 FUN_14808ea36 body=258 status=ok
// SIG undefined FUN_14808ea36(void)

void FUN_14808ea36(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb37ea8) {
    FUN_144b3d300(&DAT_14cb37ea8);
    if (DAT_14cb37ea8 == -1) {
      FUN_14808eb3a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FNDIDebugDrawShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x23;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb37e28,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14390d7db);
      _Init_thread_footer(&DAT_14cb37ea8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14808eb3a FUN_14808eb3a body=226 status=ok
// SIG undefined FUN_14808eb3a(void)

longlong * FUN_14808eb3a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14808ec1e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14808ec1e FUN_14808ec1e body=136 status=ok
// SIG undefined FUN_14808ec1e(void)

code * FUN_14808ec1e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NDIDebugDrawLineMaxInstances";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808eca6;
}



// FUNCTION 14808eca6 FUN_14808eca6 body=136 status=ok
// SIG undefined FUN_14808eca6(void)

code * FUN_14808eca6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWNDIDebugDrawLineVertex";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808ed2e;
}



// FUNCTION 14808ed2e FUN_14808ed2e body=130 status=ok
// SIG undefined FUN_14808ed2e(void)

undefined1 * FUN_14808ed2e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWNDIDebugDrawArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14808edb0;
}



// FUNCTION 14808edc6 FUN_14808edc6 body=93 status=ok
// SIG undefined FUN_14808edc6(void)

void FUN_14808edc6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80f50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14808ee24 FUN_14808ee24 body=126 status=ok
// SIG undefined FUN_14808ee24(void)

void FUN_14808ee24(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad80f50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014808ee93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14808eea2 FUN_14808eea2 body=20 status=ok
// SIG undefined FUN_14808eea2(void)

undefined8 FUN_14808eea2(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 14808eeb6 FUN_14808eeb6 body=148 status=ok
// SIG undefined FUN_14808eeb6(void)

void FUN_14808eeb6(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 14808ef4a FUN_14808ef4a body=259 status=ok
// SIG undefined FUN_14808ef4a(void)

longlong FUN_14808ef4a(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_144a98dce(param_1 + 0x48,param_2);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_144a98dce(param_1 + 0x60,param_2);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_144a98dce(param_1 + 0x78,param_2);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_144a98dce(param_1 + 0x90,param_2);
  FUN_1448a432c(param_1 + 0xa8,param_2);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  FUN_144a98dce(param_1 + 0xf0,param_2);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_144a98dce(param_1 + 0x108,param_2);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_144a98dce(param_1 + 0x120,param_2);
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN_144a98dce(param_1 + 0x138,param_2);
  return param_1;
}



// FUNCTION 14808f04e FUN_14808f04e body=239 status=ok
// SIG undefined FUN_14808f04e(void)

longlong FUN_14808f04e(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  FUN_1448a432c(param_1 + 0x48,param_2);
  FUN_1448a432c(param_1 + 0x90,param_2);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  FUN_144a98dce(param_1 + 0xd8,param_2);
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_144a98d08(param_1 + 0xf0,param_2);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_144a98dce(param_1 + 0x108,param_2);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_144a98dce(param_1 + 0x120,param_2);
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN_144a98dce(param_1 + 0x138,param_2);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  FUN_144a98dce(param_1 + 0x150,param_2);
  return param_1;
}



// FUNCTION 14808f13e FUN_14808f13e body=323 status=ok
// SIG undefined FUN_14808f13e(void)

longlong FUN_14808f13e(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  FUN_1448a432c(param_1 + 0x48,param_2);
  FUN_1448a432c(param_1 + 0x90,param_2);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  FUN_144a98dce(param_1 + 0xd8,param_2);
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_144a98dce(param_1 + 0xf0,param_2);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_144a98d08(param_1 + 0x108,param_2);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_144a98d08(param_1 + 0x120,param_2);
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN_144a98dce(param_1 + 0x138,param_2);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  FUN_144a98dce(param_1 + 0x150,param_2);
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  FUN_144a98dce(param_1 + 0x168,param_2);
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  FUN_144a98dce(param_1 + 0x180,param_2);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  FUN_144a76d88(param_1 + 0x198,param_2);
  return param_1;
}



// FUNCTION 14808f282 FUN_14808f282 body=280 status=ok
// SIG undefined FUN_14808f282(void)

longlong FUN_14808f282(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  FUN_1448a432c(param_1 + 0x48,param_2);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  FUN_144a98dce(param_1 + 0x90,param_2);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_144a98dce(param_1 + 0xa8,param_2);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_144a98d08(param_1 + 0xc0,param_2);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_144a98d08(param_1 + 0xd8,param_2);
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_144a98dce(param_1 + 0xf0,param_2);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_144a98dce(param_1 + 0x108,param_2);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_144a98dce(param_1 + 0x120,param_2);
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN_144a98dce(param_1 + 0x138,param_2);
  return param_1;
}



// FUNCTION 14808f39a FUN_14808f39a body=308 status=ok
// SIG undefined FUN_14808f39a(void)

longlong FUN_14808f39a(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  FUN_1448a432c(param_1 + 0x48,param_2);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  FUN_144a98dce(param_1 + 0x90,param_2);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_144a98dce(param_1 + 0xa8,param_2);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_144a98dce(param_1 + 0xc0,param_2);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_144a98d08(param_1 + 0xd8,param_2);
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_144a98d08(param_1 + 0xf0,param_2);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_144a98dce(param_1 + 0x108,param_2);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_144a98dce(param_1 + 0x120,param_2);
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN_144a98dce(param_1 + 0x138,param_2);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  FUN_144a98dce(param_1 + 0x150,param_2);
  return param_1;
}



// FUNCTION 14808f4ce FUN_14808f4ce body=280 status=ok
// SIG undefined FUN_14808f4ce(void)

longlong FUN_14808f4ce(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  FUN_1448a432c(param_1 + 0x48,param_2);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  FUN_144a98dce(param_1 + 0x90,param_2);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_144a98dce(param_1 + 0xa8,param_2);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_144a98d08(param_1 + 0xc0,param_2);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_144a98d08(param_1 + 0xd8,param_2);
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_144a98dce(param_1 + 0xf0,param_2);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_144a98dce(param_1 + 0x108,param_2);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_144a98dce(param_1 + 0x120,param_2);
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN_144a98dce(param_1 + 0x138,param_2);
  return param_1;
}



// FUNCTION 14808f5e6 FUN_14808f5e6 body=160 status=ok
// SIG undefined FUN_14808f5e6(void)

longlong FUN_14808f5e6(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_144a98dce(param_1 + 0x48,param_2);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_144a98dce(param_1 + 0x60,param_2);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_144a98dce(param_1 + 0x78,param_2);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_144a98dce(param_1 + 0x90,param_2);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_144a98dce(param_1 + 0xa8,param_2);
  return param_1;
}



// FUNCTION 14808f686 FUN_14808f686 body=356 status=ok
// SIG undefined FUN_14808f686(void)

longlong FUN_14808f686(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_144a98dce(param_1 + 0x48,param_2);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_144a98dce(param_1 + 0x60,param_2);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_144a98dce(param_1 + 0x78,param_2);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_144a98dce(param_1 + 0x90,param_2);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_144a98dce(param_1 + 0xa8,param_2);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_144a98dce(param_1 + 0xc0,param_2);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_144a98d08(param_1 + 0xd8,param_2);
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_144a98d08(param_1 + 0xf0,param_2);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_144a98dce(param_1 + 0x108,param_2);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_144a98dce(param_1 + 0x120,param_2);
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN_144a98dce(param_1 + 0x138,param_2);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  FUN_144a98dce(param_1 + 0x150,param_2);
  return param_1;
}



// FUNCTION 14808f7ea FUN_14808f7ea body=343 status=ok
// SIG undefined FUN_14808f7ea(void)

longlong FUN_14808f7ea(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_144a98dce(param_1 + 0x48,param_2);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_144a98dce(param_1 + 0x60,param_2);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_144a98dce(param_1 + 0x78,param_2);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_144a98dce(param_1 + 0x90,param_2);
  FUN_1448a432c(param_1 + 0xa8,param_2);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  FUN_144a98d08(param_1 + 0xf0,param_2);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_144a98d08(param_1 + 0x108,param_2);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_144a98d08(param_1 + 0x120,param_2);
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN_144a98dce(param_1 + 0x138,param_2);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  FUN_144a98dce(param_1 + 0x150,param_2);
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  FUN_144a98dce(param_1 + 0x168,param_2);
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  FUN_144a98dce(param_1 + 0x180,param_2);
  return param_1;
}



// FUNCTION 14808f942 FUN_14808f942 body=168 status=ok
// SIG undefined FUN_14808f942(void)

longlong FUN_14808f942(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  FUN_1448a432c(param_1 + 0x48,param_2);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  FUN_144a98dce(param_1 + 0x90,param_2);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_144a98dce(param_1 + 0xa8,param_2);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_144a98dce(param_1 + 0xc0,param_2);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_144a98dce(param_1 + 0xd8,param_2);
  return param_1;
}



// FUNCTION 14808f9ea FUN_14808f9ea body=188 status=ok
// SIG undefined FUN_14808f9ea(void)

longlong FUN_14808f9ea(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_144a98dce(param_1 + 0x48,param_2);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_144a98d08(param_1 + 0x60,param_2);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_144a98dce(param_1 + 0x78,param_2);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_144a98dce(param_1 + 0x90,param_2);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_144a98dce(param_1 + 0xa8,param_2);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_144a98dce(param_1 + 0xc0,param_2);
  return param_1;
}



// FUNCTION 14808faa6 FUN_14808faa6 body=215 status=ok
// SIG undefined FUN_14808faa6(void)

longlong FUN_14808faa6(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_14808fb7e(param_1 + 0x48,param_2);
  FUN_1448a432c(param_1 + 0x60,param_2);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_14808fb7e(param_1 + 0xa8,param_2);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_144a98dce(param_1 + 0xc0,param_2);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_144a98dce(param_1 + 0xd8,param_2);
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_144a98dce(param_1 + 0xf0,param_2);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_144a98dce(param_1 + 0x108,param_2);
  return param_1;
}



// FUNCTION 14808fb7e FUN_14808fb7e body=194 status=ok
// SIG undefined FUN_14808fb7e(void)

void FUN_14808fb7e(longlong *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (*param_2 == '\x01') {
    *(uint *)(param_1 + 2) =
         (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_2 + 0x30));
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = lVar4;
    iVar5 = (int)param_1[2] * *(int *)(param_2 + 0x44);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar3 = uVar1 & 0x7fff;
    *(uint *)(param_1 + 2) = (uint)(uVar1 >> 0xf);
    lVar4 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar1 < 0) {
      lVar4 = (ulonglong)(uVar3 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70);
    }
    else {
      iVar5 = **(int **)(lVar4 + 0x20);
      lVar6 = 0;
      if (iVar5 <= (int)uVar3) {
        do {
          uVar3 = uVar3 - iVar5;
          iVar5 = (*(int **)(lVar4 + 0x20))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (iVar5 <= (int)uVar3);
      }
      lVar4 = (longlong)(int)uVar3 + *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar6 * 8);
    }
    *param_1 = lVar4;
    iVar5 = (uint)(uVar1 >> 0xf) * *(int *)(*(longlong *)(param_2 + 0x80) + 0x4c);
  }
  lVar4 = lVar4 + (longlong)iVar5 * 4;
  *param_1 = lVar4;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 14808fc40 FUN_14808fc40 body=441 status=ok
// SIG undefined FUN_14808fc40(void)

longlong FUN_14808fc40(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_14808fb7e(param_1 + 0x48,param_2);
  FUN_1448a432c(param_1 + 0x60,param_2);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_14808fb7e(param_1 + 0xa8,param_2);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_144a98dce(param_1 + 0xc0,param_2);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_144a98dce(param_1 + 0xd8,param_2);
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_144a76d88(param_1 + 0xf0,param_2);
  FUN_1448a432c(param_1 + 0x108,param_2);
  FUN_1448a432c(param_1 + 0x150,param_2);
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  FUN_14808fb7e(param_1 + 0x198,param_2);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  FUN_144a98d08(param_1 + 0x1b0,param_2);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  FUN_144a98d08(param_1 + 0x1c8,param_2);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  FUN_144a76d88(param_1 + 0x1e0,param_2);
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  FUN_144a98dce(param_1 + 0x1f8,param_2);
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  FUN_144a98dce(param_1 + 0x210,param_2);
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  FUN_144a98dce(param_1 + 0x228,param_2);
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  FUN_144a98dce(param_1 + 0x240,param_2);
  return param_1;
}



// FUNCTION 14808fdfa FUN_14808fdfa body=329 status=ok
// SIG undefined FUN_14808fdfa(void)

longlong FUN_14808fdfa(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_14808fb7e(param_1 + 0x48,param_2);
  FUN_1448a432c(param_1 + 0x60,param_2);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_14808fb7e(param_1 + 0xa8,param_2);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_144a98dce(param_1 + 0xc0,param_2);
  FUN_1448a432c(param_1 + 0xd8,param_2);
  FUN_1448a432c(param_1 + 0x120,param_2);
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  FUN_14808fb7e(param_1 + 0x168,param_2);
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  FUN_144a98d08(param_1 + 0x180,param_2);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  FUN_144a98dce(param_1 + 0x198,param_2);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  FUN_144a98dce(param_1 + 0x1b0,param_2);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  FUN_144a98dce(param_1 + 0x1c8,param_2);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  FUN_144a98dce(param_1 + 0x1e0,param_2);
  return param_1;
}



// FUNCTION 14808ff44 FUN_14808ff44 body=329 status=ok
// SIG undefined FUN_14808ff44(void)

longlong FUN_14808ff44(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_14808fb7e(param_1 + 0x48,param_2);
  FUN_1448a432c(param_1 + 0x60,param_2);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_14808fb7e(param_1 + 0xa8,param_2);
  FUN_1448a432c(param_1 + 0xc0,param_2);
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  FUN_144a76d88(param_1 + 0x108,param_2);
  FUN_1448a432c(param_1 + 0x120,param_2);
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  FUN_144a98dce(param_1 + 0x168,param_2);
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  FUN_14808fb7e(param_1 + 0x180,param_2);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  FUN_144a98dce(param_1 + 0x198,param_2);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  FUN_144a98dce(param_1 + 0x1b0,param_2);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  FUN_144a98dce(param_1 + 0x1c8,param_2);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  FUN_144a98dce(param_1 + 0x1e0,param_2);
  return param_1;
}



// FUNCTION 14809008e FUN_14809008e body=553 status=ok
// SIG undefined FUN_14809008e(void)

longlong FUN_14809008e(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_14808fb7e(param_1 + 0x48,param_2);
  FUN_1448a432c(param_1 + 0x60,param_2);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_14808fb7e(param_1 + 0xa8,param_2);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_144a98dce(param_1 + 0xc0,param_2);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_14808fb7e(param_1 + 0xd8,param_2);
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_144a76d88(param_1 + 0xf0,param_2);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_144a76d88(param_1 + 0x108,param_2);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_144a76d88(param_1 + 0x120,param_2);
  FUN_1448a432c(param_1 + 0x138,param_2);
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  FUN_14808fb7e(param_1 + 0x180,param_2);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  FUN_144a98dce(param_1 + 0x198,param_2);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  FUN_144a98dce(param_1 + 0x1b0,param_2);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  FUN_144a98dce(param_1 + 0x1c8,param_2);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  FUN_144a98dce(param_1 + 0x1e0,param_2);
  FUN_1448a432c(param_1 + 0x1f8,param_2);
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  FUN_144a98d08(param_1 + 0x240,param_2);
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  FUN_144a98dce(param_1 + 600,param_2);
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  FUN_144a98dce(param_1 + 0x270,param_2);
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  FUN_144a98dce(param_1 + 0x288,param_2);
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  FUN_144a98dce(param_1 + 0x2a0,param_2);
  return param_1;
}



// FUNCTION 1480902b8 FUN_1480902b8 body=482 status=ok
// SIG undefined FUN_1480902b8(void)

longlong FUN_1480902b8(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_14808fb7e(param_1 + 0x48,param_2);
  FUN_1448a432c(param_1 + 0x60,param_2);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_14808fb7e(param_1 + 0xa8,param_2);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_144a98dce(param_1 + 0xc0,param_2);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_144a98dce(param_1 + 0xd8,param_2);
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_144a76d88(param_1 + 0xf0,param_2);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_144a76d88(param_1 + 0x108,param_2);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_144a76d88(param_1 + 0x120,param_2);
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN_14809049a(param_1 + 0x138,param_2);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  FUN_14808fb7e(param_1 + 0x150,param_2);
  FUN_1448a432c(param_1 + 0x168,param_2);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  FUN_144a98d08(param_1 + 0x1b0,param_2);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  FUN_144a98d08(param_1 + 0x1c8,param_2);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  FUN_144a98dce(param_1 + 0x1e0,param_2);
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  FUN_144a98dce(param_1 + 0x1f8,param_2);
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  FUN_144a98dce(param_1 + 0x210,param_2);
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  FUN_144a98dce(param_1 + 0x228,param_2);
  return param_1;
}



// FUNCTION 14809049a FUN_14809049a body=194 status=ok
// SIG undefined FUN_14809049a(void)

void FUN_14809049a(longlong *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (*param_2 == '\x01') {
    *(uint *)(param_1 + 2) =
         (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_2 + 0x30));
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = lVar4;
    iVar5 = (int)param_1[2] * *(int *)(param_2 + 0x44);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar3 = uVar1 & 0x7fff;
    *(uint *)(param_1 + 2) = (uint)(uVar1 >> 0xf);
    lVar4 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar1 < 0) {
      lVar4 = (ulonglong)(uVar3 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70);
    }
    else {
      iVar5 = **(int **)(lVar4 + 0x20);
      lVar6 = 0;
      if (iVar5 <= (int)uVar3) {
        do {
          uVar3 = uVar3 - iVar5;
          iVar5 = (*(int **)(lVar4 + 0x20))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (iVar5 <= (int)uVar3);
      }
      lVar4 = (longlong)(int)uVar3 + *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar6 * 8);
    }
    *param_1 = lVar4;
    iVar5 = (uint)(uVar1 >> 0xf) * *(int *)(*(longlong *)(param_2 + 0x80) + 0x4c);
  }
  lVar4 = lVar4 + (longlong)iVar5 * 4;
  *param_1 = lVar4;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 14809055c FUN_14809055c body=385 status=ok
// SIG undefined FUN_14809055c(void)

longlong FUN_14809055c(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_14808fb7e(param_1 + 0x48,param_2);
  FUN_1448a432c(param_1 + 0x60,param_2);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_14808fb7e(param_1 + 0xa8,param_2);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_144a98dce(param_1 + 0xc0,param_2);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_144a98dce(param_1 + 0xd8,param_2);
  FUN_1448a432c(param_1 + 0xf0,param_2);
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  FUN_14808fb7e(param_1 + 0x138,param_2);
  FUN_1448a432c(param_1 + 0x150,param_2);
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  FUN_144a98d08(param_1 + 0x198,param_2);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  FUN_144a98d08(param_1 + 0x1b0,param_2);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  FUN_144a98dce(param_1 + 0x1c8,param_2);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  FUN_144a98dce(param_1 + 0x1e0,param_2);
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  FUN_144a98dce(param_1 + 0x1f8,param_2);
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  FUN_144a98dce(param_1 + 0x210,param_2);
  return param_1;
}



// FUNCTION 1480906de FUN_1480906de body=385 status=ok
// SIG undefined FUN_1480906de(void)

longlong FUN_1480906de(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_14808fb7e(param_1 + 0x48,param_2);
  FUN_1448a432c(param_1 + 0x60,param_2);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_14808fb7e(param_1 + 0xa8,param_2);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_144a98dce(param_1 + 0xc0,param_2);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_144a98dce(param_1 + 0xd8,param_2);
  FUN_1448a432c(param_1 + 0xf0,param_2);
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  FUN_14808fb7e(param_1 + 0x138,param_2);
  FUN_1448a432c(param_1 + 0x150,param_2);
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  FUN_144a98d08(param_1 + 0x198,param_2);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  FUN_144a98d08(param_1 + 0x1b0,param_2);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  FUN_144a98dce(param_1 + 0x1c8,param_2);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  FUN_144a98dce(param_1 + 0x1e0,param_2);
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  FUN_144a98dce(param_1 + 0x1f8,param_2);
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  FUN_144a98dce(param_1 + 0x210,param_2);
  return param_1;
}



// FUNCTION 148090860 FUN_148090860 body=271 status=ok
// SIG undefined FUN_148090860(void)

longlong FUN_148090860(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_14808fb7e(param_1 + 0x48,param_2);
  FUN_1448a432c(param_1 + 0x60,param_2);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_14808fb7e(param_1 + 0xa8,param_2);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_144a98dce(param_1 + 0xc0,param_2);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_144a98dce(param_1 + 0xd8,param_2);
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_144a98dce(param_1 + 0xf0,param_2);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_144a98dce(param_1 + 0x108,param_2);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_14808fb7e(param_1 + 0x120,param_2);
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN_144a98dce(param_1 + 0x138,param_2);
  return param_1;
}



// FUNCTION 148090970 FUN_148090970 body=467 status=ok
// SIG undefined FUN_148090970(void)

longlong FUN_148090970(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_14808fb7e(param_1 + 0x48,param_2);
  FUN_1448a432c(param_1 + 0x60,param_2);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_14808fb7e(param_1 + 0xa8,param_2);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_144a98dce(param_1 + 0xc0,param_2);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_144a98dce(param_1 + 0xd8,param_2);
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_144a98dce(param_1 + 0xf0,param_2);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_144a98dce(param_1 + 0x108,param_2);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_14808fb7e(param_1 + 0x120,param_2);
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN_144a98dce(param_1 + 0x138,param_2);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  FUN_144a98dce(param_1 + 0x150,param_2);
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  FUN_144a98d08(param_1 + 0x168,param_2);
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  FUN_144a98d08(param_1 + 0x180,param_2);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  FUN_144a98dce(param_1 + 0x198,param_2);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  FUN_144a98dce(param_1 + 0x1b0,param_2);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  FUN_144a98dce(param_1 + 0x1c8,param_2);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  FUN_144a98dce(param_1 + 0x1e0,param_2);
  return param_1;
}



// FUNCTION 148090b44 FUN_148090b44 body=454 status=ok
// SIG undefined FUN_148090b44(void)

longlong FUN_148090b44(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_14808fb7e(param_1 + 0x48,param_2);
  FUN_1448a432c(param_1 + 0x60,param_2);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_14808fb7e(param_1 + 0xa8,param_2);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_144a98dce(param_1 + 0xc0,param_2);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_144a98dce(param_1 + 0xd8,param_2);
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_144a98dce(param_1 + 0xf0,param_2);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_144a98dce(param_1 + 0x108,param_2);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_14808fb7e(param_1 + 0x120,param_2);
  FUN_1448a432c(param_1 + 0x138,param_2);
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  FUN_144a98d08(param_1 + 0x180,param_2);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  FUN_144a98d08(param_1 + 0x198,param_2);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  FUN_144a98d08(param_1 + 0x1b0,param_2);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  FUN_144a98dce(param_1 + 0x1c8,param_2);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  FUN_144a98dce(param_1 + 0x1e0,param_2);
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  FUN_144a98dce(param_1 + 0x1f8,param_2);
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  FUN_144a98dce(param_1 + 0x210,param_2);
  return param_1;
}



// FUNCTION 148090d0a FUN_148090d0a body=19 status=ok
// SIG undefined FUN_148090d0a(void)

void FUN_148090d0a(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 148090d1e FUN_148090d1e body=132 status=ok
// SIG undefined FUN_148090d1e(void)

void FUN_148090d1e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148090da4 FUN_148090da4 body=62 status=ok
// SIG undefined FUN_148090da4(void)

void FUN_148090da4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148090de2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 148090de2 FUN_148090de2 body=93 status=ok
// SIG undefined FUN_148090de2(void)

ulonglong FUN_148090de2(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 148090e3f FUN_148090e3f body=89 status=ok
// SIG undefined FUN_148090e3f(void)

void FUN_148090e3f(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar1 = FUN_144830b78(param_1 + 4,&DAT_14cb42160);
    *(undefined4 *)(param_1 + 4) = uVar1;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 148090e98 FUN_148090e98 body=132 status=ok
// SIG undefined FUN_148090e98(void)

void FUN_148090e98(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148090f1e FUN_148090f1e body=306 status=ok
// SIG undefined FUN_148090f1e(void)

undefined4 * FUN_148090f1e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_148091052(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_148091138(param_1,uVar9,local_40,&local_4c);
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
      FUN_14809122a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148091052 FUN_148091052 body=230 status=ok
// SIG undefined FUN_148091052(void)

int * FUN_148091052(longlong *param_1,int *param_2)

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



// FUNCTION 148091138 FUN_148091138 body=128 status=ok
// SIG undefined FUN_148091138(void)

undefined8 FUN_148091138(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1480911b8((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1480911b8 FUN_1480911b8 body=114 status=ok
// SIG undefined FUN_1480911b8(void)

void FUN_1480911b8(longlong *param_1,int param_2)

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



// FUNCTION 14809122a FUN_14809122a body=447 status=ok
// SIG undefined FUN_14809122a(void)

void FUN_14809122a(longlong *param_1)

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



// FUNCTION 1480913ea FUN_1480913ea body=102 status=ok
// SIG undefined FUN_1480913ea(void)

void FUN_1480913ea(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_148091450(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 148091450 FUN_148091450 body=87 status=ok
// SIG undefined FUN_148091450(void)

void FUN_148091450(longlong *param_1,int param_2)

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
  FUN_1480911b8();
  return;
}



// FUNCTION 1480914a8 FUN_1480914a8 body=108 status=ok
// SIG undefined FUN_1480914a8(void)

void FUN_1480914a8(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x130) == param_2) {
          FUN_148091514(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x130 + *param_1 + 0x128);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 148091514 FUN_148091514 body=138 status=ok
// SIG undefined FUN_148091514(void)

void FUN_148091514(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x130;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 300 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x128 + lVar6 * 0x130);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x130 + 0x128);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x128);
  FUN_1480860b8(*param_1 + lVar2 + 8);
  FUN_14809159e(param_1,param_2);
  return;
}



// FUNCTION 14809159e FUN_14809159e body=122 status=ok
// SIG undefined FUN_14809159e(void)

void FUN_14809159e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x130) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x130) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x130 + 4) = uVar5;
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



// FUNCTION 148091618 FUN_148091618 body=189 status=ok
// SIG undefined FUN_148091618(void)

longlong FUN_148091618(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x130;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x130) == *param_3) {
          if (lVar3 != 0) goto LAB_1480916b8;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x128);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1480916d6(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x130 + *param_1;
LAB_1480916b8:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1480916d6 FUN_1480916d6 body=344 status=ok
// SIG undefined FUN_1480916d6(void)

undefined4 * FUN_1480916d6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_198 [40];
  undefined4 local_170 [2];
  undefined8 *local_168;
  undefined1 local_160 [288];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_148091830();
  memset(local_160,0,0x120);
  FUN_1480919c2(local_160);
  *local_168 = *(undefined8 *)*param_4;
  FUN_148091a90(local_168 + 1,local_160);
  FUN_1480860b8(local_160);
  *(undefined4 *)(local_168 + 0x25) = 0xffffffff;
  cVar1 = FUN_14809191e(param_1,param_3,local_168,local_170);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_168 + 300) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_168 + 0x25) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_170[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_148091c90(param_1);
    }
  }
  *param_2 = local_170[0];
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148091830 FUN_148091830 body=237 status=ok
// SIG undefined FUN_148091830(void)

int * FUN_148091830(longlong *param_1,int *param_2)

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
      FUN_14754f458(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x130);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x130) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x130 + *param_1;
  return param_2;
}



// FUNCTION 14809191e FUN_14809191e body=164 status=ok
// SIG undefined FUN_14809191e(void)

undefined8 FUN_14809191e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x130);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x130) == *param_3) {
          FUN_1480860b8((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x128);
          FUN_14809159e(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x128);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1480919c2 FUN_1480919c2 body=205 status=ok
// SIG undefined FUN_1480919c2(void)

undefined8 * FUN_1480919c2(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xc059000000000000;
  param_1[3] = 0xc059000000000000;
  param_1[4] = 0xc059000000000000;
  param_1[5] = 0x4059000000000000;
  param_1[6] = 0x4059000000000000;
  param_1[7] = 0x4059000000000000;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_14322417a(param_1 + 0x10);
  param_1[0x13] = 0;
  FUN_144a34e6c(param_1 + 0x14);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x10a) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return param_1;
}



// FUNCTION 148091a90 FUN_148091a90 body=404 status=ok
// SIG undefined FUN_148091a90(void)

undefined8 * FUN_148091a90(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
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
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  puVar14 = param_2;
  puVar15 = param_1;
  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  lVar13 = param_2[0xc];
  param_1[0xc] = lVar13;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  lVar13 = param_2[0xd];
  param_1[0xd] = lVar13;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  lVar13 = param_2[0xe];
  param_1[0xe] = lVar13;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  lVar13 = param_2[0xf];
  param_1[0xf] = lVar13;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  FUN_14742fc66(param_1 + 0x10,param_2 + 0x10);
  lVar13 = param_2[0x13];
  param_1[0x13] = lVar13;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  FUN_14742fbe0(param_1 + 0x14,param_2 + 0x14);
  lVar13 = param_2[0x17];
  param_1[0x17] = lVar13;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  lVar13 = param_2[0x18];
  param_1[0x18] = lVar13;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  lVar13 = param_2[0x19];
  param_1[0x19] = lVar13;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  lVar13 = param_2[0x1a];
  param_1[0x1a] = lVar13;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)((longlong)param_1 + 0x107) = *(undefined4 *)((longlong)param_2 + 0x107);
  uVar2 = *(undefined4 *)(param_2 + 0x1b);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xdc);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xe4);
  uVar6 = *(undefined4 *)(param_2 + 0x1d);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xec);
  uVar8 = *(undefined4 *)(param_2 + 0x1e);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0xf4);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0xfc);
  uVar11 = *(undefined4 *)(param_2 + 0x20);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar10;
  *(undefined4 *)(param_1 + 0x20) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar12;
  *(undefined4 *)(param_1 + 0x1d) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar7;
  *(undefined4 *)(param_1 + 0x1e) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar9;
  *(undefined4 *)(param_1 + 0x1b) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar5;
  param_1[0x22] = 0;
  iVar1 = *(int *)(param_2 + 0x23);
  _Src = (void *)param_2[0x22];
  *(int *)(param_1 + 0x23) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  }
  else {
    FUN_148091c24(param_1 + 0x22,iVar1);
    memcpy((void *)param_1[0x22],_Src,(longlong)iVar1 * 0x1c);
  }
  return param_1;
}



// FUNCTION 148091c24 FUN_148091c24 body=108 status=ok
// SIG undefined FUN_148091c24(void)

undefined8 FUN_148091c24(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x1c,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2 >> 2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x4924924924924925),0);
  uVar2 = (uVar2 >> 2) / 7;
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)uVar2) {
    uVar5 = uVar2 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x1c,4);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 148091c90 FUN_148091c90 body=456 status=ok
// SIG undefined FUN_148091c90(void)

void FUN_148091c90(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x130;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 300 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x128 + lVar7) =
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



// FUNCTION 148091e5a FUN_148091e5a body=115 status=ok
// SIG undefined FUN_148091e5a(void)

void FUN_148091e5a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148091ece(param_1,iVar1);
    }
    FUN_14041d76c((longlong)iVar1 * 0x1c + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148091f6c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148091ece FUN_148091ece body=157 status=ok
// SIG undefined FUN_148091ece(void)

void FUN_148091ece(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1c)) {
      uVar5 = uVar4 / 0x1c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148091f6c FUN_148091f6c body=62 status=ok
// SIG undefined FUN_148091f6c(void)

void FUN_148091f6c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148091faa(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x1c,4);
  }
  return;
}



// FUNCTION 148091faa FUN_148091faa body=121 status=ok
// SIG undefined FUN_148091faa(void)

ulonglong FUN_148091faa(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x1c) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148091fe7;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x1c,4);
      param_2 = param_2 / 0x1c;
    }
  }
LAB_148091fe7:
  return param_2 & 0xffffffff;
}



// FUNCTION 148092024 FUN_148092024 body=257 status=ok
// SIG undefined FUN_148092024(void)

undefined8 * FUN_148092024(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_2;
  puVar3 = param_1;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0xc] = &PTR_LAB_14a3d30d0;
  param_1[0xd] = 0;
  FUN_140702250(param_1 + 0xd,param_2 + 0xd);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  param_2[0xe] = 0;
  param_1[0xc] = &PTR_FUN_14a3d4750;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  param_1[0x10] = &PTR_LAB_14a3d30d0;
  param_1[0x11] = 0;
  FUN_140702250(param_1 + 0x11,param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  param_2[0x12] = 0;
  param_1[0x10] = &PTR_FUN_14a3d4750;
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  param_1[0x14] = 0;
  param_1[0x14] = param_2[0x14];
  param_2[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  param_2[0x15] = 0;
  return param_1;
}



// FUNCTION 148092125 FUN_148092125 body=48 status=ok
// SIG undefined FUN_148092125(void)

undefined8 FUN_148092125(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(param_1 + lVar1 * 8) != *(int *)(param_2 + lVar1 * 8)) ||
         (*(int *)(param_1 + 4 + lVar1 * 8) != *(int *)(param_2 + 4 + lVar1 * 8))) {
        return 0;
      }
      lVar1 = lVar1 + 1;
    } while (param_3 != (int)lVar1);
  }
  return 1;
}



// FUNCTION 148092155 FUN_148092155 body=130 status=ok
// SIG undefined FUN_148092155(void)

ulonglong FUN_148092155(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_3 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar4);
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c(lVar1);
        bVar2 = DAT_14c950c29;
      }
      if (((*(longlong *)(param_1 + lVar4) != lVar1) ||
          (*(longlong *)(param_2 + 8 + lVar4) != *(longlong *)(param_1 + 8 + lVar4))) ||
         (*(int *)(param_2 + 0x10 + lVar4) != *(int *)(param_1 + 0x10 + lVar4))) {
        uVar3 = 0;
        break;
      }
      lVar4 = lVar4 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1480921d8 FUN_1480921d8 body=98 status=ok
// SIG undefined FUN_1480921d8(void)

void FUN_1480921d8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14809223a FUN_14809223a body=115 status=ok
// SIG undefined FUN_14809223a(void)

void FUN_14809223a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1480922ad FUN_1480922ad body=52 status=ok
// SIG undefined FUN_1480922ad(void)

void FUN_1480922ad(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1480922e2(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 1480922e2 FUN_1480922e2 body=135 status=ok
// SIG undefined FUN_1480922e2(void)

longlong * FUN_1480922e2(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  param_1[1] = param_2[1];
  param_1[3] = 0;
  iVar1 = (int)param_2[4];
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 14809236a FUN_14809236a body=151 status=ok
// SIG undefined FUN_14809236a(void)

void FUN_14809236a(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_148092402();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb37eb8;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x40;
  return;
}



// FUNCTION 148092402 FUN_148092402 body=258 status=ok
// SIG undefined FUN_148092402(void)

void FUN_148092402(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb37f38) {
    FUN_144b3d300(&DAT_14cb37f38);
    if (DAT_14cb37f38 == -1) {
      FUN_148092506(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x1a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb37eb8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14390ec76);
      _Init_thread_footer(&DAT_14cb37f38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148092506 FUN_148092506 body=226 status=ok
// SIG undefined FUN_148092506(void)

longlong * FUN_148092506(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1480925ea;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480925ea FUN_1480925ea body=136 status=ok
// SIG undefined FUN_1480925ea(void)

code * FUN_1480925ea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VertexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148092672;
}



// FUNCTION 148092672 FUN_148092672 body=136 status=ok
// SIG undefined FUN_148092672(void)

code * FUN_148092672(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IndexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480926fa;
}



// FUNCTION 1480926fa FUN_1480926fa body=136 status=ok
// SIG undefined FUN_1480926fa(void)

code * FUN_1480926fa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SectionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148092782;
}



// FUNCTION 148092782 FUN_148092782 body=136 status=ok
// SIG undefined FUN_148092782(void)

code * FUN_148092782(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14809280a;
}



// FUNCTION 14809280a FUN_14809280a body=136 status=ok
// SIG undefined FUN_14809280a(void)

code * FUN_14809280a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TexCoordOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148092892;
}



// FUNCTION 148092892 FUN_148092892 body=136 status=ok
// SIG undefined FUN_148092892(void)

code * FUN_148092892(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TangentBasisOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14809291a;
}



// FUNCTION 14809291a FUN_14809291a body=136 status=ok
// SIG undefined FUN_14809291a(void)

code * FUN_14809291a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PositionOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480929a2;
}



// FUNCTION 1480929a2 FUN_1480929a2 body=136 status=ok
// SIG undefined FUN_1480929a2(void)

code * FUN_1480929a2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumTexCoords";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148092a2a;
}


