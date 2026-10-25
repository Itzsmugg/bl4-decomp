// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14180a5c6 FUN_14180a5c6 body=667 status=ok
// SIG undefined FUN_14180a5c6(void)

ulonglong FUN_14180a5c6(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(char *)(param_1 + 0x830) != '\0') || (*(int *)(param_1 + 0x690) != 0)) goto LAB_14180a5f3;
  lVar7 = *(longlong *)(param_1 + 0xb0);
  if ((lVar7 == 0) && (lVar7 = FUN_1448abda6(param_1), lVar7 == 0)) {
LAB_14180a781:
    cVar4 = '\0';
    if (*(char *)(param_1 + 0xc29) != '\0') {
      cVar4 = (char)*(undefined4 *)(param_1 + 0xc28);
    }
    if (cVar4 == '\0') goto LAB_14180a5f3;
  }
  else {
    uVar2 = DAT_14cb1c840;
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_98,uVar2,lVar7);
    plVar10 = local_90;
    if ((local_98 == 0) || (local_90 == (longlong *)0x0)) {
      plVar10 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_90 + 1) = (int)local_90[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_90 + 0xc) = *(int *)((longlong)local_90 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar9 = local_90 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_90 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_90 + 0x10))(local_90);
        }
      }
    }
    if (plVar10 == (longlong *)0x0) goto LAB_14180a781;
    iVar5 = (int)plVar10[1];
    do {
      plVar9 = (longlong *)0x0;
      if (iVar5 == 0) break;
      LOCK();
      iVar3 = (int)plVar10[1];
      bVar11 = iVar5 == iVar3;
      if (bVar11) {
        *(int *)(plVar10 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
      plVar9 = plVar10;
    } while (!bVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    if (plVar9 == (longlong *)0x0) goto LAB_14180a781;
    if (local_98 != 0) {
      if (*(char *)(param_1 + 0xc29) == '\0') {
        pcVar6 = (char *)(local_98 + 0x5cd);
      }
      else {
        pcVar6 = (char *)(param_1 + 0xc28);
      }
      if (*pcVar6 == '\x01') {
        FUN_1405e53f8(param_1,&local_98);
        local_b8 = local_78;
        uStack_b0 = uStack_70;
        local_a8 = local_68;
        cVar4 = FUN_1405e5004(local_98);
        if (cVar4 != '\0') goto LAB_14180a83a;
      }
LAB_14180a739:
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
      goto LAB_14180a5f3;
    }
    if (*(char *)(param_1 + 0xc29) == '\0') {
      cVar4 = '\0';
    }
    else {
      cVar4 = (char)*(undefined4 *)(param_1 + 0xc28);
    }
    if (cVar4 == '\0') goto LAB_14180a739;
LAB_14180a83a:
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
  uVar8 = 0;
LAB_14180a5f3:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14180a862 FUN_14180a862 body=38 status=ok
// SIG undefined FUN_14180a862(void)

undefined8 FUN_14180a862(undefined8 param_1,int param_2)

{
  FUN_1410b361c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180a888 FUN_14180a888 body=1246 status=ok
// SIG undefined FUN_14180a888(void)

void FUN_14180a888(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 == 0) {
    return;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0xcc8);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  if (*(char *)(lVar3 + 0xca8) == '\x01') {
    *(undefined1 *)(lVar3 + 0xca8) = 0;
  }
  if (*(char *)(lVar3 + 0xc70) == '\x01') {
    *(undefined1 *)(lVar3 + 0xc70) = 0;
  }
  if (*(char *)(lVar3 + 0xc00) == '\x01') {
    *(undefined1 *)(lVar3 + 0xc00) = 0;
  }
  plVar5 = *(longlong **)(lVar3 + 0xbd0);
  if (plVar5 != (longlong *)0x0) {
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
  plVar5 = *(longlong **)(lVar3 + 0xa60);
  if (plVar5 != (longlong *)0x0) {
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
  if (*(char *)(lVar3 + 0xa20) == '\x01') {
    if (*(longlong *)(lVar3 + 0xa10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(lVar3 + 0xa20) = 0;
  }
  if (*(char *)(lVar3 + 0x948) == '\x01') {
    plVar5 = *(longlong **)(lVar3 + 0x938);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    plVar5 = *(longlong **)(lVar3 + 0x918);
    if (plVar5 != (longlong *)0x0) {
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
    if (*(char *)(lVar3 + 0x8d8) == '\x01') {
      if (*(longlong *)(lVar3 + 0x8c8) != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(lVar3 + 0x8d8) = 0;
    }
    *(undefined1 *)(lVar3 + 0x948) = 0;
  }
  if (*(char *)(lVar3 + 0x7f0) == '\x01') {
    *(undefined1 *)(lVar3 + 0x7f0) = 0;
  }
  if (*(char *)(lVar3 + 0x780) != '\x01') goto LAB_14180a967;
  switch(*(undefined1 *)(lVar3 + 0x778)) {
  case 0:
  case 3:
    *(undefined1 *)(lVar3 + 0x778) = 0xff;
    break;
  case 1:
    *(undefined1 *)(lVar3 + 0x778) = 0xff;
    plVar5 = *(longlong **)(lVar3 + 0x660);
    goto LAB_14180aab6;
  case 2:
    *(undefined1 *)(lVar3 + 0x778) = 0xff;
    plVar5 = *(longlong **)(lVar3 + 0x748);
    if (plVar5 != (longlong *)0x0) {
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
    plVar5 = *(longlong **)(lVar3 + 0x6d0);
LAB_14180aab6:
    if (plVar5 != (longlong *)0x0) {
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
  *(undefined1 *)(lVar3 + 0x780) = 0;
LAB_14180a967:
  if (*(char *)(lVar3 + 0x650) == '\x01') {
    *(undefined1 *)(lVar3 + 0x650) = 0;
  }
  if (*(char *)(lVar3 + 0x618) == '\x01') {
    *(undefined1 *)(lVar3 + 0x618) = 0;
  }
  if (*(char *)(lVar3 + 0x5f8) == '\x01') {
    *(undefined1 *)(lVar3 + 0x5f8) = 0;
  }
  plVar5 = *(longlong **)(lVar3 + 0x5c0);
  if (plVar5 != (longlong *)0x0) {
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
  if (*(char *)(lVar3 + 0x580) == '\x01') {
    if (*(longlong *)(lVar3 + 0x570) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(lVar3 + 0x580) = 0;
  }
  if (*(char *)(lVar3 + 0x494) == '\x01') {
    *(undefined1 *)(lVar3 + 0x494) = 0;
  }
  plVar5 = *(longlong **)(lVar3 + 0x488);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  if (*(char *)(lVar3 + 0x410) == '\x01') {
    *(undefined1 *)(lVar3 + 0x410) = 0;
  }
  if (*(char *)(lVar3 + 0x3d8) == '\x01') {
    *(undefined1 *)(lVar3 + 0x3d8) = 0;
  }
  plVar5 = *(longlong **)(lVar3 + 0x398);
  if (plVar5 != (longlong *)0x0) {
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
  if (*(char *)(lVar3 + 0x378) == '\x01') {
    *(undefined1 *)(lVar3 + 0x378) = 0;
  }
  if (*(char *)(lVar3 + 0x340) == '\x01') {
    *(undefined1 *)(lVar3 + 0x340) = 0;
  }
  if (*(char *)(lVar3 + 0x2d0) == '\x01') {
    *(undefined1 *)(lVar3 + 0x2d0) = 0;
  }
  plVar5 = *(longlong **)(lVar3 + 0x2a0);
  if (plVar5 != (longlong *)0x0) {
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
  plVar5 = *(longlong **)(lVar3 + 0x130);
  if (plVar5 != (longlong *)0x0) {
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
  if (*(char *)(lVar3 + 0xf0) == '\x01') {
    if (*(longlong *)(lVar3 + 0xe0) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(lVar3 + 0xf0) = 0;
  }
  plVar5 = *(longlong **)(lVar3 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  FUN_1400020a8(lVar3);
  return;
}



// FUNCTION 14180ad66 FUN_14180ad66 body=29 status=ok
// SIG undefined FUN_14180ad66(void)

undefined8 FUN_14180ad66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180ad84 FUN_14180ad84 body=93 status=ok
// SIG undefined FUN_14180ad84(void)

void FUN_14180ad84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aba5670;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14aba5600;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14180ade2 FUN_14180ade2 body=390 status=ok
// SIG undefined FUN_14180ade2(void)

void FUN_14180ade2(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if (((*(uint *)(param_1 + 8) & 0x10) != 0) &&
     ((DAT_14c8687b8 != '\0' || ((*(byte *)(param_1 + 0xe0) & 2) != 0)))) {
    local_20 = (undefined8 *)0x0;
    local_18 = 0;
    FUN_1446efa72(&local_20,0,2,0x10);
    local_18 = 2;
    *local_20 = &PTR_LAB_14a79d280;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_20[2] = lVar3;
    *local_20 = &PTR_FUN_14abb51a0;
    local_20[3] = &LAB_14383136f;
    FUN_144a450dc(&DAT_14cacb0f8,&local_20);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14180af69 FUN_14180af69 body=49 status=ok
// SIG undefined FUN_14180af69(void)

longlong FUN_14180af69(void)

{
  if (DAT_14cb1d748 == 0) {
    FUN_14073dd9a(&DAT_14cb1d748,&PTR_LAB_14abb2790);
  }
  return DAT_14cb1d748;
}



// FUNCTION 14180af9a FUN_14180af9a body=186 status=ok
// SIG undefined FUN_14180af9a(void)

undefined * FUN_14180af9a(void)

{
  longlong *plVar1;
  undefined *puVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb1d9c0) {
    FUN_144b3d300(&DAT_14cb1d9c0);
    if (DAT_14cb1d9c0 == -1) {
      FUN_145c12714(&DAT_14cb1d938,0x420c0000,0x43100000);
      atexit(FUN_143839da4);
      _Init_thread_footer(&DAT_14cb1d9c0);
    }
  }
  plVar1 = (longlong *)FUN_1409035a4();
  lVar3 = plVar1[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar3 = plVar1[0x22];
  }
  if (*(int *)(lVar3 + 0x98) < 1) {
    return &DAT_14cb1d938;
  }
  puVar2 = (undefined *)FUN_147e7d108();
  return puVar2;
}



// FUNCTION 14180b054 FUN_14180b054 body=49 status=ok
// SIG undefined FUN_14180b054(void)

longlong FUN_14180b054(void)

{
  if (DAT_14cb1e600 == 0) {
    FUN_14086a14e(&DAT_14cb1e600,&PTR_FUN_14abcfaf0);
  }
  return DAT_14cb1e600;
}



// FUNCTION 14180b085 FUN_14180b085 body=49 status=ok
// SIG undefined FUN_14180b085(void)

longlong FUN_14180b085(void)

{
  if (DAT_14cb1e648 == 0) {
    FUN_14086a14e(&DAT_14cb1e648,&PTR_FUN_14abcfe38);
  }
  return DAT_14cb1e648;
}



// FUNCTION 14180b0b6 FUN_14180b0b6 body=49 status=ok
// SIG undefined FUN_14180b0b6(void)

longlong FUN_14180b0b6(void)

{
  if (DAT_14cb1ea40 == 0) {
    FUN_14073dd9a(&DAT_14cb1ea40,&PTR_LAB_14abda3c0);
  }
  return DAT_14cb1ea40;
}



// FUNCTION 14180b0e7 FUN_14180b0e7 body=49 status=ok
// SIG undefined FUN_14180b0e7(void)

longlong FUN_14180b0e7(void)

{
  if (DAT_14cb1ec48 == 0) {
    FUN_14086a14e(&DAT_14cb1ec48,&PTR_FUN_14abde568);
  }
  return DAT_14cb1ec48;
}



// FUNCTION 14180b118 FUN_14180b118 body=49 status=ok
// SIG undefined FUN_14180b118(void)

longlong FUN_14180b118(void)

{
  if (DAT_14cb1ee10 == 0) {
    FUN_14073dd9a(&DAT_14cb1ee10,&PTR_LAB_14abe0830);
  }
  return DAT_14cb1ee10;
}



// FUNCTION 14180b14a FUN_14180b14a body=40 status=ok
// SIG undefined FUN_14180b14a(void)

undefined8 FUN_14180b14a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180b172 FUN_14180b172 body=49 status=ok
// SIG undefined FUN_14180b172(void)

longlong FUN_14180b172(void)

{
  if (DAT_14cb1f240 == 0) {
    FUN_14073dd9a(&DAT_14cb1f240,&PTR_LAB_14abe92b0);
  }
  return DAT_14cb1f240;
}



// FUNCTION 14180b1a3 FUN_14180b1a3 body=49 status=ok
// SIG undefined FUN_14180b1a3(void)

longlong FUN_14180b1a3(void)

{
  if (DAT_14cb1fa68 == 0) {
    FUN_14086a14e(&DAT_14cb1fa68,&PTR_FUN_14abfd8e0);
  }
  return DAT_14cb1fa68;
}



// FUNCTION 14180b1d4 FUN_14180b1d4 body=49 status=ok
// SIG undefined FUN_14180b1d4(void)

longlong FUN_14180b1d4(void)

{
  if (DAT_14cb1f9b8 == 0) {
    FUN_14073dd9a(&DAT_14cb1f9b8,&PTR_LAB_14abfc610);
  }
  return DAT_14cb1f9b8;
}



// FUNCTION 14180b205 FUN_14180b205 body=57 status=ok
// SIG undefined FUN_14180b205(void)

void FUN_14180b205(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ead26(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ac27920;
  puVar1[5] = &PTR_FUN_14ac27f00;
  puVar1[6] = &PTR_LAB_14ac27f40;
  return;
}



// FUNCTION 14180b23e FUN_14180b23e body=213 status=ok
// SIG undefined FUN_14180b23e(void)

void FUN_14180b23e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ac2a530;
  *(undefined1 *)(puVar1 + 6) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined2 *)(puVar1 + 0xf) = 4;
  *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x10) = 3;
  *(char *)(puVar1 + 0x11) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  puVar1[0x12] = 0;
  *(undefined2 *)(puVar1 + 0x16) = 4;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x17) = 3;
  *(char *)(puVar1 + 0x18) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(puVar1 + 0x19) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xca) = 0;
  puVar1[0x1a] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  *(undefined1 *)(puVar1 + 0x1f) = 0;
  *(undefined1 *)(puVar1 + 0x20) = 0;
  *(undefined4 *)(puVar1 + 0x21) = 0x101;
  *(undefined1 *)((longlong)puVar1 + 0x10c) = 1;
  return;
}



// FUNCTION 14180b313 FUN_14180b313 body=104 status=ok
// SIG undefined FUN_14180b313(void)

void FUN_14180b313(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ac2c820;
  *(undefined1 *)(puVar1 + 6) = 1;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0x4040000000000000;
  *(undefined1 *)(puVar1 + 10) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0x4234000042820000;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0x42a0000042a00000;
  *(undefined4 *)((longlong)puVar1 + 100) = 0x43800000;
  puVar1[0xd] = &DAT_4030000000000000;
  puVar1[0xe] = &DAT_4030000000000000;
  puVar1[0xf] = &DAT_4030000000000000;
  return;
}



// FUNCTION 14180b37c FUN_14180b37c body=40 status=ok
// SIG undefined FUN_14180b37c(void)

undefined8 FUN_14180b37c(undefined8 param_1,int param_2)

{
  FUN_14006e79a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180b3a4 FUN_14180b3a4 body=298 status=ok
// SIG undefined FUN_14180b3a4(void)

undefined8 * FUN_14180b3a4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac2a530;
  plVar1 = param_1 + 0x1b;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1f) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1e)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1e)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x13;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x17) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x16)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x16)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xc;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x10) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xf)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xf)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180b4ce FUN_14180b4ce body=40 status=ok
// SIG undefined FUN_14180b4ce(void)

undefined8 FUN_14180b4ce(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180b4f6 FUN_14180b4f6 body=37 status=ok
// SIG undefined FUN_14180b4f6(void)

void FUN_14180b4f6(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x4d8);
  FUN_140f24832(param_2);
  return;
}



// FUNCTION 14180b51b FUN_14180b51b body=49 status=ok
// SIG undefined FUN_14180b51b(void)

longlong FUN_14180b51b(void)

{
  if (DAT_14cb21088 == 0) {
    FUN_14086a14e(&DAT_14cb21088,&PTR_FUN_14ac327c0);
  }
  return DAT_14cb21088;
}



// FUNCTION 14180b54c FUN_14180b54c body=49 status=ok
// SIG undefined FUN_14180b54c(void)

longlong FUN_14180b54c(void)

{
  if (DAT_14cb21118 == 0) {
    FUN_14086a14e(&DAT_14cb21118,&PTR_FUN_14ac33c80);
  }
  return DAT_14cb21118;
}



// FUNCTION 14180b57d FUN_14180b57d body=49 status=ok
// SIG undefined FUN_14180b57d(void)

longlong FUN_14180b57d(void)

{
  if (DAT_14cb21130 == 0) {
    FUN_14086a14e(&DAT_14cb21130,&PTR_FUN_14ac33ce8);
  }
  return DAT_14cb21130;
}



// FUNCTION 14180b5ae FUN_14180b5ae body=203 status=ok
// SIG undefined FUN_14180b5ae(void)

undefined8 * FUN_14180b5ae(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3ced0;
  plVar1 = param_1 + 0xe;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x12) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x11)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x11)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 7;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xb) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 10)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 10)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180b696 FUN_14180b696 body=40 status=ok
// SIG undefined FUN_14180b696(void)

undefined8 FUN_14180b696(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180b6da FUN_14180b6da body=309 status=ok
// SIG undefined FUN_14180b6da(void)

void FUN_14180b6da(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = param_2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = (longlong)(int)param_2 + 0xf;
        if (param_2 < 0x7ff1) {
          uVar3 = (uint)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar7 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (uint)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14180b744;
              lVar1 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar1 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = DAT_14c841df8;
          }
          uVar3 = -uVar6 & ((int)(uVar4 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,(longlong)(int)param_2,1);
      }
    }
LAB_14180b744:
    uVar6 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar3) {
      uVar6 = uVar3;
    }
  }
  if ((int)param_3 < (int)uVar6) {
    FUN_1446f8d3c(param_1,0,uVar6,1,1);
    param_3 = uVar6;
  }
  *(uint *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14180b810 FUN_14180b810 body=40 status=ok
// SIG undefined FUN_14180b810(void)

undefined8 FUN_14180b810(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180b838 FUN_14180b838 body=40 status=ok
// SIG undefined FUN_14180b838(void)

undefined8 FUN_14180b838(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180b87c FUN_14180b87c body=40 status=ok
// SIG undefined FUN_14180b87c(void)

undefined8 FUN_14180b87c(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180b8c0 FUN_14180b8c0 body=216 status=ok
// SIG undefined FUN_14180b8c0(void)

undefined8 * FUN_14180b8c0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3c9d0;
  plVar1 = param_1 + 0x12;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x16) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x15)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x15)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180b9b4 FUN_14180b9b4 body=242 status=ok
// SIG undefined FUN_14180b9b4(void)

undefined8 * FUN_14180b9b4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3cb10;
  plVar1 = param_1 + 0x60;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 100) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 99)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 99)) {
    FUN_1400020a8(*plVar1);
  }
  param_1[0x10] = 0;
  FUN_14076ba36(param_1 + 0x11);
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180baa6 FUN_14180baa6 body=65 status=ok
// SIG undefined FUN_14180baa6(void)

undefined8 * FUN_14180baa6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac3afe0;
  FUN_140cabc42(param_1 + 0x1b);
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180bb04 FUN_14180bb04 body=96 status=ok
// SIG undefined FUN_14180bb04(void)

undefined8 * FUN_14180bb04(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3b3c0;
  plVar3 = (longlong *)param_1[0x1c];
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
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180bb64 FUN_14180bb64 body=40 status=ok
// SIG undefined FUN_14180bb64(void)

undefined8 FUN_14180bb64(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180bb9a FUN_14180bb9a body=113 status=ok
// SIG undefined FUN_14180bb9a(void)

void FUN_14180bb9a(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1e) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *param_2 = &PTR_FUN_14ac8a5e0;
  param_2[0x10] = 0;
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined4 *)(param_2 + 0xf) = 0;
  return;
}



// FUNCTION 14180bc0c FUN_14180bc0c body=40 status=ok
// SIG undefined FUN_14180bc0c(void)

undefined8 FUN_14180bc0c(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180bc5e FUN_14180bc5e body=216 status=ok
// SIG undefined FUN_14180bc5e(void)

undefined8 * FUN_14180bc5e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac47b90;
  plVar1 = param_1 + 0x11;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x15) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x14)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x14)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180bd36 FUN_14180bd36 body=40 status=ok
// SIG undefined FUN_14180bd36(void)

undefined8 FUN_14180bd36(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180bd5e FUN_14180bd5e body=474 status=ok
// SIG undefined FUN_14180bd5e(void)

void FUN_14180bd5e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  memset(param_2 + 1,0,0x218);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0x1010101;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 1;
  *param_2 = &PTR_FUN_14ac47f90;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 2;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0;
  *(undefined8 *)((longlong)param_2 + 0x99) = 0;
  *(undefined4 *)((longlong)param_2 + 0xa1) = 0x1010001;
  *(undefined1 *)((longlong)param_2 + 0xa5) = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0x15] = DAT_14c8464e0;
  param_2[0x16] = uVar1;
  param_2[0x17] = DAT_14c8464f0;
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined1 *)((longlong)param_2 + 0xc2) = 0;
  param_2[0x19] = 0;
  *(undefined2 *)(param_2 + 0x1d) = 0x18;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_2 + 0x1a) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_2 + 0xd4) = uVar2;
  *(undefined4 *)(param_2 + 0x1b) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xdc) = uVar4;
  param_2[0x1c] = DAT_14c846508;
  *(undefined1 *)(param_2 + 0x1e) = 5;
  *(char *)(param_2 + 0x1f) = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
  *(undefined2 *)(param_2 + 0x20) = 0x100;
  param_2[0x21] = 0;
  *(undefined4 *)(param_2 + 0x22) = 0;
  *(undefined1 *)(param_2 + 0x23) = 0;
  FUN_14044066a(param_2 + 0x24,3,0x14);
  *(undefined1 *)(param_2 + 0x2b) = 0;
  FUN_14044066a(param_2 + 0x2c,3,0x14);
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0x1000100000000;
  *(undefined1 *)((longlong)param_2 + 0x1a4) = 0;
  param_2[0x35] = 0;
  *(undefined2 *)(param_2 + 0x39) = 4;
  *(undefined4 *)(param_2 + 0x36) = 5;
  *(undefined1 *)(param_2 + 0x3a) = 2;
  *(byte *)(param_2 + 0x3b) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined2 *)(param_2 + 0x3c) = 1;
  *param_2 = &PTR_FUN_14ac43f80;
  FUN_140785382(param_2 + 0x3d,10);
  return;
}



// FUNCTION 14180bf54 FUN_14180bf54 body=150 status=ok
// SIG undefined FUN_14180bf54(void)

undefined8 * FUN_14180bf54(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac442c0;
  plVar3 = (longlong *)param_1[0x22];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x1e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x1c];
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
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180bfea FUN_14180bfea body=128 status=ok
// SIG undefined FUN_14180bfea(void)

void FUN_14180bfea(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac442c0;
  plVar3 = (longlong *)param_1[0x22];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x1e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x1c];
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
  FUN_14049e650(param_1);
  return;
}



// FUNCTION 14180c06a FUN_14180c06a body=800 status=ok
// SIG undefined FUN_14180c06a(void)

void FUN_14180c06a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  memset(param_2 + 1,0,0x460);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0x1010101;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 1;
  *param_2 = &PTR_FUN_14ac47f90;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 2;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0;
  *(undefined8 *)((longlong)param_2 + 0x99) = 0;
  *(undefined4 *)((longlong)param_2 + 0xa1) = 0x1010001;
  *(undefined1 *)((longlong)param_2 + 0xa5) = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0x15] = DAT_14c8464e0;
  param_2[0x16] = uVar1;
  param_2[0x17] = DAT_14c8464f0;
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined1 *)((longlong)param_2 + 0xc2) = 0;
  param_2[0x19] = 0;
  *(undefined2 *)(param_2 + 0x1d) = 0x18;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_2 + 0x1a) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_2 + 0xd4) = uVar2;
  *(undefined4 *)(param_2 + 0x1b) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xdc) = uVar4;
  param_2[0x1c] = DAT_14c846508;
  *(undefined1 *)(param_2 + 0x1e) = 5;
  *(char *)(param_2 + 0x1f) = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
  *(undefined2 *)(param_2 + 0x20) = 0x100;
  param_2[0x21] = 0;
  *(undefined4 *)(param_2 + 0x22) = 0;
  *(undefined1 *)(param_2 + 0x23) = 0;
  FUN_14044066a(param_2 + 0x24,3,0x14);
  *(undefined1 *)(param_2 + 0x2b) = 0;
  FUN_14044066a(param_2 + 0x2c,3,0x14);
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0x1000100000000;
  *(undefined1 *)((longlong)param_2 + 0x1a4) = 0;
  param_2[0x35] = 0;
  *(undefined2 *)(param_2 + 0x39) = 4;
  *(undefined4 *)(param_2 + 0x36) = 5;
  *(undefined1 *)(param_2 + 0x3a) = 2;
  *(byte *)(param_2 + 0x3b) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined2 *)(param_2 + 0x3c) = 1;
  *param_2 = &PTR_FUN_14ac44560;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  param_2[0x3f] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  *(undefined8 *)((longlong)param_2 + 0x21c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x224) = 0;
  param_2[0x46] = 0;
  *(undefined4 *)(param_2 + 0x47) = 0;
  param_2[0x4c] = 0;
  *(undefined4 *)(param_2 + 0x4d) = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x274) = 0;
  param_2[0x50] = 0;
  *(undefined4 *)(param_2 + 0x51) = 0;
  param_2[0x52] = 0;
  param_2[0x53] = 0xffffffff00000000;
  param_2[0x58] = 0;
  *(undefined4 *)(param_2 + 0x59) = 0;
  param_2[0x54] = 0;
  param_2[0x55] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x2d4) = 0;
  param_2[0x5c] = 0;
  *(undefined4 *)(param_2 + 0x5d) = 0;
  *(undefined1 *)(param_2 + 0x5e) = 0;
  *(undefined4 *)(param_2 + 99) = 0;
  param_2[0x68] = 0;
  param_2[0x69] = 0x200000000;
  param_2[0x6b] = 0;
  param_2[0x6c] = 0x2000000000;
  param_2[0x6d] = 0xffffffff;
  param_2[0x6f] = 0;
  *(undefined4 *)(param_2 + 0x70) = 0;
  param_2[0x75] = 0;
  param_2[0x76] = 0x200000000;
  param_2[0x78] = 0;
  param_2[0x79] = 0x2000000000;
  param_2[0x7a] = 0xffffffff;
  param_2[0x7c] = 0;
  *(undefined4 *)(param_2 + 0x7d) = 0;
  param_2[0x82] = 0;
  param_2[0x83] = 0x200000000;
  param_2[0x85] = 0;
  param_2[0x86] = 0x2000000000;
  param_2[0x87] = 0xffffffff;
  param_2[0x89] = 0;
  *(undefined4 *)(param_2 + 0x8a) = 0;
  *(undefined1 *)(param_2 + 0x8c) = 0;
  param_2[0x8b] = 0;
  return;
}



// FUNCTION 14180c3a6 FUN_14180c3a6 body=76 status=ok
// SIG undefined FUN_14180c3a6(void)

undefined8 * FUN_14180c3a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac44560;
  param_1[0x3d] = 0;
  FUN_14076ba36(param_1 + 0x3e);
  FUN_140d29fd0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180c3f2 FUN_14180c3f2 body=65 status=ok
// SIG undefined FUN_14180c3f2(void)

undefined8 * FUN_14180c3f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac47c30;
  FUN_140fb9bfe(param_1 + 0x3d);
  FUN_140d29fd0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180c434 FUN_14180c434 body=40 status=ok
// SIG undefined FUN_14180c434(void)

undefined8 FUN_14180c434(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180c45c FUN_14180c45c body=136 status=ok
// SIG undefined FUN_14180c45c(void)

undefined8 * FUN_14180c45c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac46220;
  plVar1 = param_1 + 0x1b;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1f) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1e)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1e)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180c500 FUN_14180c500 body=40 status=ok
// SIG undefined FUN_14180c500(void)

undefined8 FUN_14180c500(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180c528 FUN_14180c528 body=40 status=ok
// SIG undefined FUN_14180c528(void)

undefined8 FUN_14180c528(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180c550 FUN_14180c550 body=325 status=ok
// SIG undefined FUN_14180c550(void)

void FUN_14180c550(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x170);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0x1010101;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 1;
  *param_2 = &PTR_FUN_14ac46c60;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined2 *)(param_2 + 0x15) = 4;
  *(undefined4 *)(param_2 + 0x12) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x16) = 3;
  *(char *)(param_2 + 0x17) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_2[0x18] = 0;
  *(undefined2 *)(param_2 + 0x1c) = 4;
  *(undefined4 *)(param_2 + 0x19) = 0;
  *(undefined1 *)(param_2 + 0x1d) = 3;
  *(char *)(param_2 + 0x1e) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_2 + 0x1f) = 0;
  *(undefined1 *)((longlong)param_2 + 0xfa) = 0;
  param_2[0x20] = 0;
  *(undefined2 *)(param_2 + 0x24) = 0;
  *(undefined1 *)(param_2 + 0x25) = 0;
  *(undefined1 *)(param_2 + 0x26) = 0;
  *(undefined1 *)(param_2 + 0x27) = 0;
  param_2[0x28] = 0;
  *(undefined2 *)(param_2 + 0x2c) = 4;
  *(undefined4 *)(param_2 + 0x29) = 10;
  *(undefined1 *)(param_2 + 0x2d) = 2;
  *(byte *)(param_2 + 0x2e) = (byte)~DAT_14c9a8754 >> 4 & 2;
  return;
}



// FUNCTION 14180c6b2 FUN_14180c6b2 body=40 status=ok
// SIG undefined FUN_14180c6b2(void)

undefined8 FUN_14180c6b2(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180c6e8 FUN_14180c6e8 body=40 status=ok
// SIG undefined FUN_14180c6e8(void)

undefined8 FUN_14180c6e8(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180c710 FUN_14180c710 body=40 status=ok
// SIG undefined FUN_14180c710(void)

undefined8 FUN_14180c710(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180c73d FUN_14180c73d body=57 status=ok
// SIG undefined FUN_14180c73d(void)

void FUN_14180c73d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14086a0da(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ac48840;
  puVar1[5] = &PTR_FUN_14ac48af0;
  puVar1[10] = &PTR_FUN_14ac48b20;
  return;
}



// FUNCTION 14180c7ae FUN_14180c7ae body=40 status=ok
// SIG undefined FUN_14180c7ae(void)

undefined8 FUN_14180c7ae(undefined8 param_1,int param_2)

{
  FUN_14071fe68();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180c7d6 FUN_14180c7d6 body=485 status=ok
// SIG undefined FUN_14180c7d6(void)

longlong * FUN_14180c7d6(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)FUN_14001cc68(0x128);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ac52ba0;
  memset(plVar4 + 0xb,0,0xd0);
  plVar4[2] = (longlong)&PTR_FUN_14a1b6c40;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  *(undefined4 *)(plVar4 + 0xb) = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  local_48 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_48[1] = (longlong)&DAT_100000001;
  *local_48 = (longlong)&PTR_FUN_14a1b6cc0;
  local_50 = local_48 + 2;
  local_48[2] = (longlong)&PTR_FUN_14a18e458;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  local_48[0xe] = 0;
  local_48[0xf] = 0;
  local_48[0x10] = 0;
  local_48[0x11] = 0;
  local_48[0x12] = 0;
  FUN_1404e24cc(&local_50);
  FUN_1404e256a(plVar4 + 0xf,&local_50);
  plVar2 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  *(undefined8 *)((longlong)plVar4 + 0xdc) = 0;
  plVar4[0x1d] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x20] = 0;
  plVar4[0x21] = 0;
  plVar4[0x22] = 0;
  plVar4[0x23] = 0;
  plVar4[0x24] = 0;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  *(undefined8 *)((longlong)plVar4 + 0xc9) = 0;
  *(undefined8 *)((longlong)plVar4 + 0xd1) = 0;
  plVar4[2] = (longlong)&PTR_FUN_14ac4d5d0;
  *param_2 = (longlong)(plVar4 + 2);
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14180c9bc FUN_14180c9bc body=40 status=ok
// SIG undefined FUN_14180c9bc(void)

undefined8 FUN_14180c9bc(undefined8 param_1,int param_2)

{
  FUN_140bccac6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180c9e4 FUN_14180c9e4 body=40 status=ok
// SIG undefined FUN_14180c9e4(void)

undefined8 FUN_14180c9e4(undefined8 param_1,int param_2)

{
  FUN_14006e79a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180ca0c FUN_14180ca0c body=385 status=ok
// SIG undefined FUN_14180ca0c(void)

void FUN_14180ca0c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memset(param_2 + 9,0,0xd0);
  *param_2 = &PTR_FUN_14a1b6c40;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  local_38 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_14a1b6cc0;
  local_40 = local_38 + 2;
  local_38[2] = (longlong)&PTR_FUN_14a18e458;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_38[0x10] = 0;
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  FUN_1404e24cc(&local_40);
  FUN_1404e256a(param_2 + 0xd,&local_40);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined8 *)((longlong)param_2 + 0xb9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc1) = 0;
  *param_2 = &PTR_FUN_14ac4d5d0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14180cb8e FUN_14180cb8e body=116 status=ok
// SIG undefined FUN_14180cb8e(void)

void FUN_14180cb8e(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[0xf] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *param_2 = &PTR_FUN_14ac4dbf0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  return;
}



// FUNCTION 14180cc1e FUN_14180cc1e body=126 status=ok
// SIG undefined FUN_14180cc1e(void)

undefined8 * FUN_14180cc1e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180cc9c FUN_14180cc9c body=159 status=ok
// SIG undefined FUN_14180cc9c(void)

void FUN_14180cc9c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xe0);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0x800000000;
  param_2[0x1a] = 0x3f0000003f000000;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  *param_2 = &PTR_FUN_14ac4e910;
  return;
}



// FUNCTION 14180cd58 FUN_14180cd58 body=182 status=ok
// SIG undefined FUN_14180cd58(void)

undefined8 * FUN_14180cd58(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac4e9b0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac4eaf0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180ce0e FUN_14180ce0e body=182 status=ok
// SIG undefined FUN_14180ce0e(void)

undefined8 * FUN_14180ce0e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac4e9b0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac4eaf0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180cec4 FUN_14180cec4 body=155 status=ok
// SIG undefined FUN_14180cec4(void)

undefined8 * FUN_14180cec4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac4eaf0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180cf60 FUN_14180cf60 body=128 status=ok
// SIG undefined FUN_14180cf60(void)

undefined8 * FUN_14180cf60(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac4ee80;
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac4f1a0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac4dde0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180cfe0 FUN_14180cfe0 body=128 status=ok
// SIG undefined FUN_14180cfe0(void)

undefined8 * FUN_14180cfe0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac4ee80;
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac4f1a0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac4dde0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180d060 FUN_14180d060 body=101 status=ok
// SIG undefined FUN_14180d060(void)

undefined8 * FUN_14180d060(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac4f1a0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac4dde0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180d0c6 FUN_14180d0c6 body=133 status=ok
// SIG undefined FUN_14180d0c6(void)

undefined8 * FUN_14180d0c6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac4f5c0;
  param_1[0x26] = &PTR_FUN_14ac52c10;
  if (param_1[0x2e] != 0) {
    FUN_14387f5b2(param_1 + 0x26);
  }
  FUN_1403d7f26(param_1 + 0x26);
  *param_1 = &PTR_FUN_14ac4dde0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180d14c FUN_14180d14c body=125 status=ok
// SIG undefined FUN_14180d14c(void)

void FUN_14180d14c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x90);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  *param_2 = &PTR_FUN_14ac4fa50;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 14180d1e6 FUN_14180d1e6 body=173 status=ok
// SIG undefined FUN_14180d1e6(void)

undefined8 * FUN_14180d1e6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac4fa50;
  FUN_1403d8100(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180d294 FUN_14180d294 body=133 status=ok
// SIG undefined FUN_14180d294(void)

undefined8 * FUN_14180d294(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac4fd80;
  param_1[0x26] = &PTR_FUN_14ac52c10;
  if (param_1[0x2e] != 0) {
    FUN_14387f5b2(param_1 + 0x26);
  }
  FUN_1403d7f26(param_1 + 0x26);
  *param_1 = &PTR_FUN_14ac4dde0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180d31a FUN_14180d31a body=159 status=ok
// SIG undefined FUN_14180d31a(void)

void FUN_14180d31a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xe0);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0x800000000;
  *param_2 = &PTR_FUN_14ac506c0;
  *(undefined4 *)(param_2 + 0x1a) = 0;
  *(undefined1 *)((longlong)param_2 + 0xd4) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 14180d3c8 FUN_14180d3c8 body=182 status=ok
// SIG undefined FUN_14180d3c8(void)

undefined8 * FUN_14180d3c8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac506c0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac4eaf0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180d47e FUN_14180d47e body=101 status=ok
// SIG undefined FUN_14180d47e(void)

undefined8 * FUN_14180d47e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac4f1a0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac4dde0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180d4e4 FUN_14180d4e4 body=159 status=ok
// SIG undefined FUN_14180d4e4(void)

void FUN_14180d4e4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xe0);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0x800000000;
  *param_2 = &PTR_FUN_14ac4e9b0;
  param_2[0x1a] = 0x3f0000003f000000;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 14180d592 FUN_14180d592 body=159 status=ok
// SIG undefined FUN_14180d592(void)

void FUN_14180d592(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xe0);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0x800000000;
  *param_2 = &PTR_FUN_14ac51100;
  *(undefined1 *)(param_2 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_2 + 0xd4) = 0x3f400000;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 14180d64e FUN_14180d64e body=128 status=ok
// SIG undefined FUN_14180d64e(void)

undefined8 * FUN_14180d64e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac51460;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac4f1a0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac4dde0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180d6ce FUN_14180d6ce body=125 status=ok
// SIG undefined FUN_14180d6ce(void)

void FUN_14180d6ce(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0x800000000;
  *param_2 = &PTR_FUN_14ac4ea50;
  return;
}



// FUNCTION 14180d768 FUN_14180d768 body=141 status=ok
// SIG undefined FUN_14180d768(void)

void FUN_14180d768(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xd8);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0x800000000;
  *param_2 = &PTR_FUN_14ac51ac0;
  *(undefined2 *)(param_2 + 0x1a) = 0x100;
  *(undefined1 *)(param_2 + 0x1b) = 0;
  return;
}



// FUNCTION 14180d812 FUN_14180d812 body=180 status=ok
// SIG undefined FUN_14180d812(void)

undefined8 * FUN_14180d812(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    *(undefined1 *)(param_1 + 0x1b) = 0;
  }
  *param_1 = &PTR_FUN_14ac4eaf0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180d8c6 FUN_14180d8c6 body=101 status=ok
// SIG undefined FUN_14180d8c6(void)

undefined8 * FUN_14180d8c6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac4f1a0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac4dde0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180d92c FUN_14180d92c body=142 status=ok
// SIG undefined FUN_14180d92c(void)

void FUN_14180d92c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xd8);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0x800000000;
  *param_2 = &PTR_FUN_14ac52110;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  return;
}



// FUNCTION 14180d9d6 FUN_14180d9d6 body=182 status=ok
// SIG undefined FUN_14180d9d6(void)

undefined8 * FUN_14180d9d6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac52110;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac4eaf0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180da8c FUN_14180da8c body=123 status=ok
// SIG undefined FUN_14180da8c(void)

void FUN_14180da8c(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  *param_2 = &PTR_FUN_14ac52790;
  param_2[0x10] = 0;
  return;
}



// FUNCTION 14180db24 FUN_14180db24 body=126 status=ok
// SIG undefined FUN_14180db24(void)

undefined8 * FUN_14180db24(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180dba2 FUN_14180dba2 body=133 status=ok
// SIG undefined FUN_14180dba2(void)

undefined8 * FUN_14180dba2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac4fd80;
  param_1[0x26] = &PTR_FUN_14ac52c10;
  if (param_1[0x2e] != 0) {
    FUN_14387f5b2(param_1 + 0x26);
  }
  FUN_1403d7f26(param_1 + 0x26);
  *param_1 = &PTR_FUN_14ac4dde0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180dc28 FUN_14180dc28 body=150 status=ok
// SIG undefined FUN_14180dc28(void)

void FUN_14180dc28(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ac52cf0;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
  return;
}



// FUNCTION 14180dcbe FUN_14180dcbe body=29 status=ok
// SIG undefined FUN_14180dcbe(void)

undefined8 FUN_14180dcbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180dcdb FUN_14180dcdb body=49 status=ok
// SIG undefined FUN_14180dcdb(void)

longlong FUN_14180dcdb(void)

{
  if (DAT_14cb22040 == 0) {
    FUN_1409ce572(&DAT_14cb22040,&PTR_FUN_14ac54310);
  }
  return DAT_14cb22040;
}



// FUNCTION 14180dd0c FUN_14180dd0c body=49 status=ok
// SIG undefined FUN_14180dd0c(void)

longlong FUN_14180dd0c(void)

{
  if (DAT_14cb22318 == 0) {
    FUN_14073dd9a(&DAT_14cb22318,&PTR_LAB_14ac588d0);
  }
  return DAT_14cb22318;
}



// FUNCTION 14180dd42 FUN_14180dd42 body=40 status=ok
// SIG undefined FUN_14180dd42(void)

undefined8 FUN_14180dd42(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180dd6a FUN_14180dd6a body=274 status=ok
// SIG undefined FUN_14180dd6a(void)

void FUN_14180dd6a(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x2b0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x2b0)) {
      uVar5 = uVar4 / 0x2b0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x2b0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14180de7e FUN_14180de7e body=91 status=ok
// SIG undefined FUN_14180de7e(void)

void FUN_14180de7e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_2 + 8);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_2 + 0x28) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_2 + 0x20)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_2 + 0x20) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 14180deda FUN_14180deda body=117 status=ok
// SIG undefined FUN_14180deda(void)

undefined8 * FUN_14180deda(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 14180df4f FUN_14180df4f body=49 status=ok
// SIG undefined FUN_14180df4f(void)

longlong FUN_14180df4f(void)

{
  if (DAT_14cb22498 == 0) {
    FUN_14086a14e(&DAT_14cb22498,&PTR_FUN_14ac5de88);
  }
  return DAT_14cb22498;
}



// FUNCTION 14180df80 FUN_14180df80 body=1686 status=ok
// SIG undefined FUN_14180df80(void)

void FUN_14180df80(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_598 [32];
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  code *local_560;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 local_520;
  undefined4 local_518;
  undefined8 local_514;
  undefined4 local_50c;
  undefined8 local_500;
  undefined4 local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined8 local_4c4;
  undefined4 local_4bc;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_470;
  undefined4 local_468;
  undefined8 local_464;
  undefined4 local_45c;
  undefined8 local_450;
  undefined4 local_448;
  undefined1 local_440;
  undefined4 local_418;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined4 local_23c;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined4 local_198;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_598;
  local_2a0 = 0;
  local_298 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  local_294 = 0xffffffff00000080;
  local_28c = 0;
  local_280 = 0;
  local_278 = 0;
  local_250 = 0;
  local_248 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_244 = 0xffffffff00000080;
  local_23c = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0xffffffff00000000;
  local_1f0 = 0;
  local_1e8 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_1e4 = 0xffffffff00000080;
  local_1dc = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_198 = 0;
  local_170 = 0;
  local_168 = 0x200000000;
  local_158 = 0;
  local_150 = 0x2000000000;
  uStack_148 = 0xffffffff;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0;
  local_100 = 0x200000000;
  local_f0 = 0;
  local_e8 = 0x2000000000;
  uStack_e0 = 0xffffffff;
  local_d0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_98 = 0x200000000;
  local_88 = 0;
  local_80 = 0x2000000000;
  uStack_78 = 0xffffffff;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_2c8 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c8);
    }
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  local_520 = 0;
  local_518 = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_538 = 0;
  local_514 = 0xffffffff00000080;
  local_50c = 0;
  local_500 = 0;
  local_4f8 = 0;
  local_4d0 = 0;
  local_4c8 = 0;
  local_4f0 = 0;
  uStack_4e8 = 0;
  local_4c4 = 0xffffffff00000080;
  local_4bc = 0;
  local_4b0 = 0;
  local_4a8 = 0;
  local_4a0 = 0;
  local_498 = 0xffffffff00000000;
  local_470 = 0;
  local_468 = 0;
  local_490 = 0;
  uStack_488 = 0;
  local_464 = 0xffffffff00000080;
  local_45c = 0;
  local_450 = 0;
  local_448 = 0;
  local_440 = 0;
  local_418 = 0;
  local_3f0 = 0;
  local_3e8 = 0x200000000;
  local_3d8 = 0;
  local_3d0 = 0x2000000000;
  uStack_3c8 = 0xffffffff;
  local_3b8 = 0;
  local_3b0 = 0;
  local_388 = 0;
  local_380 = 0x200000000;
  local_370 = 0;
  local_368 = 0x2000000000;
  uStack_360 = 0xffffffff;
  local_350 = 0;
  local_348 = 0;
  local_320 = 0;
  local_318 = 0x200000000;
  local_308 = 0;
  local_300 = 0x2000000000;
  uStack_2f8 = 0xffffffff;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  *(longlong *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_548);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_548);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_548);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_548 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_548);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  local_550 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_568 = FUN_1446ddbd2();
      local_560 = FUN_1409e12a0;
      local_570 = 0;
      local_578 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_550);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_550);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_550);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_550 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_550);
    }
  }
  uVar2 = local_550;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = &local_548;
  }
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = &local_2c8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14054d68c(puVar4,puVar5);
  puVar4[0x4e] = uVar2;
  local_548 = 0;
  FUN_14076ba36(&uStack_540);
  local_2c8 = 0;
  FUN_14076ba36(&uStack_2c0);
  if ((local_50 ^ (ulonglong)auStack_598) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14180e617 FUN_14180e617 body=49 status=ok
// SIG undefined FUN_14180e617(void)

longlong FUN_14180e617(void)

{
  if (DAT_14cb22850 == 0) {
    FUN_14086a14e(&DAT_14cb22850,&PTR_FUN_14ac62740);
  }
  return DAT_14cb22850;
}



// FUNCTION 14180e648 FUN_14180e648 body=49 status=ok
// SIG undefined FUN_14180e648(void)

longlong FUN_14180e648(void)

{
  if (DAT_14cb22868 == 0) {
    FUN_14086a14e(&DAT_14cb22868,&PTR_FUN_14ac627a0);
  }
  return DAT_14cb22868;
}



// FUNCTION 14180e67a FUN_14180e67a body=40 status=ok
// SIG undefined FUN_14180e67a(void)

undefined8 FUN_14180e67a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180e6a2 FUN_14180e6a2 body=37 status=ok
// SIG undefined FUN_14180e6a2(void)

void FUN_14180e6a2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x378);
  FUN_140803772(param_2);
  return;
}



// FUNCTION 14180e6c8 FUN_14180e6c8 body=65 status=ok
// SIG undefined FUN_14180e6c8(void)

void FUN_14180e6c8(undefined8 param_1,longlong *param_2)

{
  FUN_14494dff0(param_2 + 0x4a);
  FUN_14494dff0(param_2 + 0x26);
  FUN_14494dff0(param_2 + 2);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14180e726 FUN_14180e726 body=126 status=ok
// SIG undefined FUN_14180e726(void)

undefined8 * FUN_14180e726(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac64e20;
  plVar1 = param_1 + 9;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xd) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xc)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xc)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180e7a4 FUN_14180e7a4 body=192 status=ok
// SIG undefined FUN_14180e7a4(void)

undefined8 * FUN_14180e7a4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac65020;
  plVar1 = param_1 + 0xb;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xf) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xe)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xe)) {
    FUN_1400020a8(*plVar1);
  }
  if (*(char *)((longlong)param_1 + 0x51) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180e880 FUN_14180e880 body=40 status=ok
// SIG undefined FUN_14180e880(void)

undefined8 FUN_14180e880(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180e8a8 FUN_14180e8a8 body=70 status=ok
// SIG undefined FUN_14180e8a8(void)

undefined8 * FUN_14180e8a8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac66330;
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  FUN_1405f0b44(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180e90a FUN_14180e90a body=40 status=ok
// SIG undefined FUN_14180e90a(void)

undefined8 FUN_14180e90a(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180e932 FUN_14180e932 body=70 status=ok
// SIG undefined FUN_14180e932(void)

undefined8 * FUN_14180e932(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac66330;
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  FUN_1405f0b44(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180e994 FUN_14180e994 body=40 status=ok
// SIG undefined FUN_14180e994(void)

undefined8 FUN_14180e994(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180e9d8 FUN_14180e9d8 body=40 status=ok
// SIG undefined FUN_14180e9d8(void)

undefined8 FUN_14180e9d8(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180ea00 FUN_14180ea00 body=70 status=ok
// SIG undefined FUN_14180ea00(void)

undefined8 * FUN_14180ea00(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac66330;
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  FUN_1405f0b44(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180ea46 FUN_14180ea46 body=40 status=ok
// SIG undefined FUN_14180ea46(void)

undefined8 FUN_14180ea46(undefined8 param_1,int param_2)

{
  FUN_1405f0b44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180ea8a FUN_14180ea8a body=40 status=ok
// SIG undefined FUN_14180ea8a(void)

undefined8 FUN_14180ea8a(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180eab2 FUN_14180eab2 body=40 status=ok
// SIG undefined FUN_14180eab2(void)

undefined8 FUN_14180eab2(undefined8 param_1,int param_2)

{
  FUN_1405f0b44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180eada FUN_14180eada body=70 status=ok
// SIG undefined FUN_14180eada(void)

undefined8 * FUN_14180eada(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac68af0;
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  FUN_1405f0b44(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180eb3c FUN_14180eb3c body=40 status=ok
// SIG undefined FUN_14180eb3c(void)

undefined8 FUN_14180eb3c(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180eb64 FUN_14180eb64 body=40 status=ok
// SIG undefined FUN_14180eb64(void)

undefined8 FUN_14180eb64(undefined8 param_1,int param_2)

{
  FUN_1405f0b44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180eb8c FUN_14180eb8c body=40 status=ok
// SIG undefined FUN_14180eb8c(void)

undefined8 FUN_14180eb8c(undefined8 param_1,int param_2)

{
  FUN_1405f0b44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180ebb4 FUN_14180ebb4 body=57 status=ok
// SIG undefined FUN_14180ebb4(void)

void FUN_14180ebb4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22cb0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22cb0 = FUN_140002ddd(FUN_14643b46a,uVar1,L"GpsModifier");
  }
  return;
}



// FUNCTION 14180ebee FUN_14180ebee body=57 status=ok
// SIG undefined FUN_14180ebee(void)

void FUN_14180ebee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22d28 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22d28 = FUN_140002ddd(FUN_14643b685,uVar1,L"GpsModifierSettings_Project");
  }
  return;
}



// FUNCTION 14180ec27 FUN_14180ec27 body=57 status=ok
// SIG undefined FUN_14180ec27(void)

void FUN_14180ec27(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14086a0da(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ac6cca0;
  puVar1[5] = &PTR_FUN_14ac6cf50;
  puVar1[10] = &PTR_FUN_14ac6cf80;
  return;
}



// FUNCTION 14180ec60 FUN_14180ec60 body=49 status=ok
// SIG undefined FUN_14180ec60(void)

longlong FUN_14180ec60(void)

{
  if (DAT_14cb22ee8 == 0) {
    FUN_14086a14e(&DAT_14cb22ee8,&PTR_FUN_14ac6d298);
  }
  return DAT_14cb22ee8;
}



// FUNCTION 14180ec91 FUN_14180ec91 body=49 status=ok
// SIG undefined FUN_14180ec91(void)

longlong FUN_14180ec91(void)

{
  if (DAT_14cb22f18 == 0) {
    FUN_14086a14e(&DAT_14cb22f18,&PTR_FUN_14ac6d488);
  }
  return DAT_14cb22f18;
}



// FUNCTION 14180ecc2 FUN_14180ecc2 body=57 status=ok
// SIG undefined FUN_14180ecc2(void)

void FUN_14180ecc2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22f38 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22f38 = FUN_140002ddd(FUN_14180ecfb,uVar1,L"GpsTest");
  }
  return;
}



// FUNCTION 14180ecfb FUN_14180ecfb body=49 status=ok
// SIG undefined FUN_14180ecfb(void)

longlong FUN_14180ecfb(void)

{
  if (DAT_14cb22f30 == 0) {
    FUN_14086a14e(&DAT_14cb22f30,&PTR_FUN_14ac6d4d8);
  }
  return DAT_14cb22f30;
}



// FUNCTION 14180ed2c FUN_14180ed2c body=40 status=ok
// SIG undefined FUN_14180ed2c(void)

undefined8 FUN_14180ed2c(undefined8 param_1,int param_2)

{
  FUN_14071fe68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180ed70 FUN_14180ed70 body=40 status=ok
// SIG undefined FUN_14180ed70(void)

undefined8 FUN_14180ed70(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180ed98 FUN_14180ed98 body=40 status=ok
// SIG undefined FUN_14180ed98(void)

undefined8 FUN_14180ed98(undefined8 param_1,int param_2)

{
  FUN_1405f0b44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180eddc FUN_14180eddc body=40 status=ok
// SIG undefined FUN_14180eddc(void)

undefined8 FUN_14180eddc(undefined8 param_1,int param_2)

{
  FUN_1405f0b44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180ee04 FUN_14180ee04 body=40 status=ok
// SIG undefined FUN_14180ee04(void)

undefined8 FUN_14180ee04(undefined8 param_1,int param_2)

{
  FUN_1405f0b44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180ee48 FUN_14180ee48 body=40 status=ok
// SIG undefined FUN_14180ee48(void)

undefined8 FUN_14180ee48(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180ee70 FUN_14180ee70 body=40 status=ok
// SIG undefined FUN_14180ee70(void)

undefined8 FUN_14180ee70(undefined8 param_1,int param_2)

{
  FUN_1405f0b44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180ee98 FUN_14180ee98 body=65 status=ok
// SIG undefined FUN_14180ee98(void)

undefined8 * FUN_14180ee98(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac70010;
  FUN_1405f0bde(param_1 + 0x84);
  FUN_1405f0b44(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180eeda FUN_14180eeda body=437 status=ok
// SIG undefined FUN_14180eeda(void)

void FUN_14180eeda(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memset(param_2 + 1,0,0x540);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  *(undefined4 *)((longlong)param_2 + 0x3dc) = 0x10;
  param_2[0x7d] = 0;
  param_2[0x7e] = 0;
  param_2[0x7f] = 0;
  param_2[0x80] = 0;
  param_2[0x81] = 0xffffffff00000000;
  *param_2 = &PTR_FUN_14ac70500;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[0x83] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[0x84] = uVar1;
  param_2[0x85] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_2 + 0x86) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 0x434) = uVar2;
  *(undefined4 *)(param_2 + 0x87) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x43c) = uVar4;
  param_2[0x88] = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 0x8b) = 0;
  param_2[0x89] = 0;
  param_2[0x8a] = 0;
  FUN_1446f470e(local_48,L"FGbxTerritoryAreaDataCache::AABBTree",1);
  param_2[0x8d] = 0;
  param_2[0x8c] = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_2 + 0x8e) = 0xffffffff;
  param_2[0x8f] = 0;
  param_2[0x90] = 0;
  param_2[0x91] = 0;
  param_2[0x92] = 0;
  FUN_1446f470e(local_48,L"FGbxTerritoryAreaDataCache::ExclusionAABBTree",1);
  param_2[0x94] = 0;
  param_2[0x93] = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_2 + 0x95) = 0xffffffff;
  param_2[0x96] = 0;
  param_2[0x97] = 0;
  param_2[0x98] = 0;
  param_2[0x99] = 0;
  *(undefined1 *)(param_2 + 0xa0) = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_2 + 0xa1) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 0x50c) = uVar2;
  *(undefined4 *)(param_2 + 0xa2) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x514) = uVar4;
  param_2[0xa3] = DAT_14c8464f0;
  param_2[0xa4] = 0x7f7fffff00000000;
  *(undefined4 *)(param_2 + 0xa5) = 0;
  param_2[0xa6] = 0;
  param_2[0xa7] = 0;
  param_2[0xa8] = 0;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14180f0ac FUN_14180f0ac body=70 status=ok
// SIG undefined FUN_14180f0ac(void)

undefined8 * FUN_14180f0ac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac719c0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f0f2 FUN_14180f0f2 body=169 status=ok
// SIG undefined FUN_14180f0f2(void)

undefined8 * FUN_14180f0f2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ac71bc0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x1b];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f19c FUN_14180f19c body=37 status=ok
// SIG undefined FUN_14180f19c(void)

void FUN_14180f19c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x390);
  FUN_140f005f4(param_2);
  return;
}



// FUNCTION 14180f1ee FUN_14180f1ee body=101 status=ok
// SIG undefined FUN_14180f1ee(void)

undefined8 * FUN_14180f1ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f270 FUN_14180f270 body=40 status=ok
// SIG undefined FUN_14180f270(void)

undefined8 FUN_14180f270(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f298 FUN_14180f298 body=101 status=ok
// SIG undefined FUN_14180f298(void)

undefined8 * FUN_14180f298(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f2fe FUN_14180f2fe body=29 status=ok
// SIG undefined FUN_14180f2fe(void)

undefined8 FUN_14180f2fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f31c FUN_14180f31c body=101 status=ok
// SIG undefined FUN_14180f31c(void)

undefined8 * FUN_14180f31c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f39e FUN_14180f39e body=101 status=ok
// SIG undefined FUN_14180f39e(void)

undefined8 * FUN_14180f39e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f420 FUN_14180f420 body=40 status=ok
// SIG undefined FUN_14180f420(void)

undefined8 FUN_14180f420(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f448 FUN_14180f448 body=101 status=ok
// SIG undefined FUN_14180f448(void)

undefined8 * FUN_14180f448(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f4ae FUN_14180f4ae body=127 status=ok
// SIG undefined FUN_14180f4ae(void)

undefined8 * FUN_14180f4ae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac7bca0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f54a FUN_14180f54a body=138 status=ok
// SIG undefined FUN_14180f54a(void)

undefined8 * FUN_14180f54a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac7bee0;
  plVar1 = param_1 + 0x1b;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1f) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1e)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1e)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f5d4 FUN_14180f5d4 body=153 status=ok
// SIG undefined FUN_14180f5d4(void)

undefined8 * FUN_14180f5d4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac7ceb0;
  plVar3 = (longlong *)param_1[0xd];
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
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f68a FUN_14180f68a body=40 status=ok
// SIG undefined FUN_14180f68a(void)

undefined8 FUN_14180f68a(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f6b2 FUN_14180f6b2 body=127 status=ok
// SIG undefined FUN_14180f6b2(void)

undefined8 * FUN_14180f6b2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac7b6c0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f74e FUN_14180f74e body=40 status=ok
// SIG undefined FUN_14180f74e(void)

undefined8 FUN_14180f74e(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f776 FUN_14180f776 body=127 status=ok
// SIG undefined FUN_14180f776(void)

undefined8 * FUN_14180f776(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac7b6c0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f7f6 FUN_14180f7f6 body=101 status=ok
// SIG undefined FUN_14180f7f6(void)

undefined8 * FUN_14180f7f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f878 FUN_14180f878 body=40 status=ok
// SIG undefined FUN_14180f878(void)

undefined8 FUN_14180f878(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f8a0 FUN_14180f8a0 body=153 status=ok
// SIG undefined FUN_14180f8a0(void)

undefined8 * FUN_14180f8a0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac80700;
  plVar3 = (longlong *)param_1[0xd];
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
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180f939 FUN_14180f939 body=50 status=ok
// SIG undefined FUN_14180f939(void)

void FUN_14180f939(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c7f224(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ac84660;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 14180f96c FUN_14180f96c body=33 status=ok
// SIG undefined FUN_14180f96c(void)

void FUN_14180f96c(longlong param_1)

{
  FUN_140115e24();
  FUN_14071060c(param_1 + 0x898,param_1);
  return;
}



// FUNCTION 14180f98e FUN_14180f98e body=33 status=ok
// SIG undefined FUN_14180f98e(void)

void FUN_14180f98e(undefined8 param_1)

{
  FUN_1405f1eac();
  FUN_140c1abcc(&DAT_14caf6fc8,param_1);
  return;
}



// FUNCTION 14180f9b0 FUN_14180f9b0 body=66 status=ok
// SIG undefined FUN_14180f9b0(void)

void FUN_14180f9b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_1447cd2ec(param_1 + 0x880);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14180f9f4 thunk_FUN_1401a0912 body=5 status=ok
// SIG undefined thunk_FUN_1401a0912(void)

void thunk_FUN_1401a0912(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_144a81344();
  FUN_144a016ac(param_1);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    lVar1 = FUN_1448abda6(param_1);
    if (lVar1 == 0) goto LAB_1401a095d;
  }
  lVar1 = FUN_14494250a(param_1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x2e8);
  }
  *(undefined8 *)(param_1 + 0x110) = uVar2;
LAB_1401a095d:
  FUN_144a3ee64(param_1);
  return;
}



// FUNCTION 14180fa14 FUN_14180fa14 body=53 status=ok
// SIG undefined FUN_14180fa14(void)

void FUN_14180fa14(longlong param_1)

{
  FUN_14058337a();
  if (*(longlong *)(param_1 + 0x2c8) == 0) {
    return;
  }
  FUN_1405bab3a(*(longlong *)(param_1 + 0x2c8),(*(byte *)(param_1 + 0x1f9) & 8) >> 3);
  return;
}



// FUNCTION 14180fa50 thunk_FUN_1402d084a body=5 status=ok
// SIG undefined thunk_FUN_1402d084a(void)

void thunk_FUN_1402d084a(undefined8 param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_1d8 [32];
  undefined **ppuStack_1b8;
  longlong *plStack_1b0;
  undefined ***pppuStack_1a8;
  undefined8 **ppuStack_1a0;
  ulonglong uStack_20;
  
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3ca68);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  ppuStack_1a0 = &pppuStack_1a8;
  ppuStack_1b8 = &PTR_FUN_149e37810;
  pppuStack_1a8 = &ppuStack_1b8;
  plStack_1b0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0) {
    iVar3 = FUN_1448332aa(param_2,&DAT_149e3ca68);
    if (3 < iVar3) {
      uVar4 = 0;
      if (param_2[0xd] != 0) {
        uVar4 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
      }
      puVar2 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar2 + 1;
      if ((uint *)puVar2[1] < puVar1) {
        ppuStack_1b8 = (undefined **)CONCAT44(ppuStack_1b8._4_4_,uVar4);
        (**(code **)(*param_2 + 0x170))(param_2,&ppuStack_1b8,4);
        uVar4 = (uint)ppuStack_1b8;
        if (1 < (uint)ppuStack_1b8) {
          FUN_14572541c(param_2);
          uVar4 = (uint)ppuStack_1b8;
        }
      }
      else {
        uVar4 = *(uint *)*puVar2;
        *puVar2 = (ulonglong)puVar1;
      }
      if (uVar4 != 0) {
        ppuStack_1b8 = (undefined **)0x0;
        plStack_1b0 = (longlong *)0x0;
        FUN_14021219d(param_2,&ppuStack_1b8);
        if (ppuStack_1b8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (((param_2[0xd] != 0) && (*(longlong *)(param_2[0xd] + 0x10) != 0)) ||
     ((*(byte *)(param_2 + 5) & 2) != 0)) {
    iVar3 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
    if (0x95 < iVar3) {
      FUN_1402ac13a(param_2,param_1);
    }
  }
  if ((uStack_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14180fa56 FUN_14180fa56 body=341 status=ok
// SIG undefined FUN_14180fa56(void)

void FUN_14180fa56(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
  }
  FUN_140a32e84(&local_30,lVar5);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_28;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_30 != 0) {
        if ((((((*(int *)(local_30 + 0xc) != 0) &&
               (uVar2 = *(uint *)(local_30 + 8), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
             && ((plVar7 = (longlong *)
                           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                 plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(local_30 + 0xc))))) &&
            (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
             ((*plVar7 != 0 && ((*(byte *)(*plVar7 + 0x155) & 0x20) == 0)))))) &&
           (*(int *)(param_1 + 0x6e0) != -1)) {
          FUN_147f43770(local_30 + 0x30,*(undefined8 *)(param_1 + 0x6e0));
        }
        *(undefined8 *)(param_1 + 0x6e0) = 0xffffffffffffffff;
      }
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
  FUN_1448c4a0e(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14180fbac FUN_14180fbac body=86 status=ok
// SIG undefined FUN_14180fbac(void)

void FUN_14180fbac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ac84b00);
  iVar1 = FUN_1448332aa(param_2,&DAT_14ac84b00);
  if (iVar1 < 0) {
    FUN_14057a3b2(param_1,1,1,1);
  }
  FUN_1448284b2(param_1,param_2);
  return;
}



// FUNCTION 14180fc08 FUN_14180fc08 body=67 status=ok
// SIG undefined FUN_14180fc08(void)

undefined8 * FUN_14180fc08(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac84660;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180fc4c FUN_14180fc4c body=125 status=ok
// SIG undefined FUN_14180fc4c(void)

undefined8 * FUN_14180fc4c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac7b6c0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180fcca FUN_14180fcca body=101 status=ok
// SIG undefined FUN_14180fcca(void)

undefined8 * FUN_14180fcca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180fd30 FUN_14180fd30 body=101 status=ok
// SIG undefined FUN_14180fd30(void)

undefined8 * FUN_14180fd30(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180fd96 FUN_14180fd96 body=101 status=ok
// SIG undefined FUN_14180fd96(void)

undefined8 * FUN_14180fd96(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180fe18 FUN_14180fe18 body=40 status=ok
// SIG undefined FUN_14180fe18(void)

undefined8 FUN_14180fe18(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180fe40 FUN_14180fe40 body=301 status=ok
// SIG undefined FUN_14180fe40(void)

void FUN_14180fe40(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memset(param_2 + 7,0,0xf8);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  *(undefined1 *)((longlong)param_2 + 0x54) = 1;
  *param_2 = &PTR_FUN_14ac86b50;
  FUN_1446f470e(local_48,L"FGbxTerritoryAreaDataCache::AABBTree",1);
  param_2[0xd] = 0;
  param_2[0xc] = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_2 + 0xe) = 0xffffffff;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  FUN_1446f470e(local_48,L"FGbxTerritoryAreaDataCache::ExclusionAABBTree",1);
  param_2[0x14] = 0;
  param_2[0x13] = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_2 + 0x15) = 0xffffffff;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_2 + 0x21) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 0x10c) = uVar1;
  *(undefined4 *)(param_2 + 0x22) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x114) = uVar3;
  param_2[0x23] = DAT_14c8464f0;
  param_2[0x24] = 0x7f7fffff00000000;
  *(undefined4 *)(param_2 + 0x25) = 0;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14180ff6e FUN_14180ff6e body=243 status=ok
// SIG undefined FUN_14180ff6e(void)

undefined8 * FUN_14180ff6e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac86b50;
  param_1[0x13] = &PTR_LAB_14a1e3c98;
  FUN_144724f11(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  param_1[0xc] = &PTR_LAB_14a1e3c98;
  FUN_144724f11(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181007e FUN_14181007e body=70 status=ok
// SIG undefined FUN_14181007e(void)

undefined8 * FUN_14181007e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac88ea0;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418100c4 FUN_1418100c4 body=128 status=ok
// SIG undefined FUN_1418100c4(void)

undefined8 * FUN_1418100c4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac87330;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141810144 FUN_141810144 body=142 status=ok
// SIG undefined FUN_141810144(void)

undefined8 * FUN_141810144(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac87cd0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418101d2 FUN_1418101d2 body=299 status=ok
// SIG undefined FUN_1418101d2(void)

undefined8 FUN_1418101d2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1418102f6;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1418102f6;
    }
    FUN_1400841de(param_1 + 0x18,&local_40);
  }
  else {
LAB_1418102f6:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1418102a8;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_1418102a8;
    }
  }
  uVar6 = 0;
LAB_1418102a8:
  if (local_40 != 0) {
    FUN_140113f3a(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418102fe FUN_1418102fe body=101 status=ok
// SIG undefined FUN_1418102fe(void)

void FUN_1418102fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac88bf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 141810364 FUN_141810364 body=274 status=ok
// SIG undefined FUN_141810364(void)

undefined8 FUN_141810364(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_141810470;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141810470;
    }
    FUN_1400841de(param_1 + 0x18,&local_30);
  }
  else {
LAB_141810470:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141810426;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_141810426;
    }
  }
  uVar6 = 0;
LAB_141810426:
  if (local_30 != 0) {
    FUN_140113f3a(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141810478 FUN_141810478 body=101 status=ok
// SIG undefined FUN_141810478(void)

void FUN_141810478(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ac88c60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418104de FUN_1418104de body=101 status=ok
// SIG undefined FUN_1418104de(void)

void FUN_1418104de(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ac88cd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 141810544 FUN_141810544 body=260 status=ok
// SIG undefined FUN_141810544(void)

longlong * FUN_141810544(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar2;
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
  }
  param_1[2] = lVar2;
  *(short *)(param_1 + 3) = (short)param_2[3];
  FUN_1403719a4(param_1 + 4,param_2 + 4);
  FUN_1403719a4(param_1 + 0xb,param_2 + 0xb);
  FUN_1403719a4(param_1 + 0x12,param_2 + 0x12);
  FUN_1403719a4(param_1 + 0x19,param_2 + 0x19);
  FUN_140cc1bde(param_1 + 0x20,param_2 + 0x20);
  *(char *)(param_1 + 0x24) = (char)param_2[0x24];
  return param_1;
}



// FUNCTION 141810648 FUN_141810648 body=122 status=ok
// SIG undefined FUN_141810648(void)

void FUN_141810648(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((*(int *)(param_1 + 0xdc) != 0) && (uVar1 = *(uint *)(param_1 + 0xd8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0xdc))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
      lVar3 = FUN_140343d7a();
      if ((lVar3 != 0) && (*(longlong *)(lVar2 + 0x660) == lVar3)) {
        *(undefined8 *)(lVar2 + 0x660) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1418106c2 FUN_1418106c2 body=224 status=ok
// SIG undefined FUN_1418106c2(void)

void FUN_1418106c2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  FUN_14066e964();
  lVar2 = FUN_140343d7a(param_1);
  if (lVar2 != 0) {
    uVar3 = FUN_1408a34bc();
    lVar4 = FUN_144718840(lVar2,uVar3);
    if (lVar4 != 0) {
      uVar6 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar2 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar2 = 0;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
      if (*(int *)(lVar2 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar1 = *(int *)(lVar2 + 0x10);
        bVar7 = iVar1 == 0;
        if (bVar7) {
          *(int *)(lVar2 + 0x10) = iVar5;
          iVar1 = 0;
        }
        UNLOCK();
        if (bVar7) {
          iVar1 = iVar5;
        }
      }
      goto LAB_141810733;
    }
  }
  lVar4 = 0;
  uVar6 = 0;
  iVar1 = 0;
LAB_141810733:
  *(uint *)(param_1 + 0xd8) = uVar6;
  *(int *)(param_1 + 0xdc) = iVar1;
  *(longlong *)(param_1 + 0xe0) = lVar4;
  return;
}



// FUNCTION 1418107a2 FUN_1418107a2 body=122 status=ok
// SIG undefined FUN_1418107a2(void)

void FUN_1418107a2(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((*(int *)(param_1 + 0xec) != 0) && (uVar1 = *(uint *)(param_1 + 0xe8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0xec))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
      lVar3 = FUN_140343d7a();
      if ((lVar3 != 0) && (*(longlong *)(lVar2 + 0x660) == lVar3)) {
        *(undefined8 *)(lVar2 + 0x660) = 0;
      }
    }
  }
  return;
}



// FUNCTION 14181081c FUN_14181081c body=661 status=ok
// SIG undefined FUN_14181081c(void)

void FUN_14181081c(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *_Dst;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_b8 [44];
  int local_8c;
  uint local_88;
  int iStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)(param_1 + 0x420);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x418);
    lVar13 = 0;
    do {
      iVar6 = DAT_14c9647dc;
      iVar2 = *(int *)(lVar4 + 4 + lVar13);
      if ((((iVar2 != 0) && (uVar3 = *(uint *)(lVar4 + lVar13), -1 < (int)uVar3)) &&
          ((int)uVar3 < DAT_14c9647dc)) &&
         (((plVar11 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           plVar11 != (longlong *)0x0 && ((int)plVar11[2] == iVar2)) &&
          (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (lVar10 = *plVar11, lVar10 != 0)))))) {
        iVar2 = *(int *)(param_2 + 0x388);
        *(uint *)(param_2 + 0x388) = iVar2 + 1U;
        if (*(uint *)(param_2 + 0x38c) < iVar2 + 1U) {
          FUN_14052e0a0(param_2,iVar2);
          iVar6 = DAT_14c9647dc;
        }
        lVar8 = *(longlong *)(param_2 + 0x380);
        if (*(longlong *)(param_2 + 0x380) == 0) {
          lVar8 = param_2;
        }
        local_70 = 8;
        iStack_84 = 0;
        local_88 = *(uint *)(lVar10 + 0xc);
        if ((int)local_88 < iVar6) {
          lVar10 = (ulonglong)((local_88 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_88 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar6 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar14) {
            local_8c = iVar12;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
            iVar12 = local_8c;
          }
          LOCK();
          iVar6 = *(int *)(lVar10 + 0x10);
          bVar14 = iVar6 == 0;
          if (bVar14) {
            *(int *)(lVar10 + 0x10) = iVar12;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar6 = iVar12;
          }
        }
        puVar9 = (undefined8 *)(lVar8 + (longlong)iVar2 * 0x38);
        local_68 = 0xe;
        *(ushort *)(puVar9 + 3) = local_70;
        _Dst = puVar9;
        puVar7 = &local_88;
        iStack_84 = iVar6;
        if (0x18 < local_70) {
          _Dst = (undefined8 *)FUN_14001cc68(local_70,0);
          *puVar9 = _Dst;
          puVar7 = (uint *)CONCAT44(iStack_84,local_88);
        }
        if (DAT_14c9a9570 == (code *)0x0) {
          memcpy(_Dst,puVar7,(longlong)DAT_14c9a94d0);
        }
        else {
          (*DAT_14c9a9570)();
        }
        *(byte *)(puVar9 + 4) = local_68;
        puVar9[5] = 0;
        puVar9[6] = 0;
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar5 != (code *)0x0) {
          if (local_70 < 0x19) {
            puVar7 = &local_88;
          }
          else {
            puVar7 = (uint *)CONCAT44(iStack_84,local_88);
          }
          (*pcVar5)(puVar7);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT44(iStack_84,local_88));
        }
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar1 * 8 != lVar13);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141810ab2 FUN_141810ab2 body=17 status=ok
// SIG undefined FUN_141810ab2(void)

char FUN_141810ab2(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  return cVar1 * '\x02';
}



// FUNCTION 141810ac4 FUN_141810ac4 body=135 status=ok
// SIG undefined FUN_141810ac4(void)

undefined8 FUN_141810ac4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x78) == '\0') {
    FUN_140592d2e(param_1 + 8,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_140592d2e(param_1 + 8,local_28);
  FUN_140ba7826(param_2,&DAT_149e06128,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141810b4c FUN_141810b4c body=1460 status=ok
// SIG undefined FUN_141810b4c(void)

void FUN_141810b4c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  bool bVar6;
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  longlong *local_78;
  char local_70 [8];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined1 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14066e964();
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar14 = *(longlong *)(param_1 + 0x40);
  if (lVar14 == 0) {
    lVar12 = 0;
    local_68 = 0;
LAB_141810f81:
    local_60 = (longlong *)0x0;
    bVar6 = true;
  }
  else {
    if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_141810e5a:
      lVar12 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar14 + 0x48);
      lVar12 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(lVar14 + 0x4c) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_141810e5a;
        lVar12 = *plVar13;
      }
    }
    plVar13 = *(longlong **)(lVar14 + 0x118);
    local_68 = param_1;
    if (plVar13 == (longlong *)0x0) goto LAB_141810f81;
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
    bVar6 = false;
    local_60 = plVar13;
  }
  plVar13 = local_60;
  local_48 = 0;
  local_70[0] = '\x03';
  local_58._0_4_ = 0;
  if (lVar12 == 0) {
    iVar9 = 0;
    uVar3 = (uint)local_58;
  }
  else {
    uVar3 = *(uint *)(lVar12 + 0xc);
    local_58 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar9 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar9 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar9 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar11;
        iVar9 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_58;
      if (bVar15) {
        iVar9 = iVar11;
      }
    }
  }
  local_58._0_4_ = uVar3;
  local_58 = CONCAT44(iVar9,(uint)local_58);
  local_50 = 2;
  if (local_48 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_48 + -1,1);
    local_48 = 0;
  }
  if (!bVar6) {
    LOCK();
    piVar2 = (int *)((longlong)plVar13 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  if ((*(char *)(lVar4 + 0x100) == '\x01') &&
     (*(code **)(&DAT_14c9a85f0 + (uint)*(byte *)(lVar4 + 0xa8) * 0x120) != (code *)0x0)) {
    cVar8 = (**(code **)(&DAT_14c9a85f0 + (uint)*(byte *)(lVar4 + 0xa8) * 0x120))
                      (lVar4 + 0x88,local_70);
    if (cVar8 != '\0') {
      local_90 = (undefined8 *)0x0;
      local_88 = 0;
      FUN_1446efa72(&local_90,0,3,0x10);
      puVar7 = local_90;
      local_88 = 3;
      FUN_14045cb56(param_1,&local_80);
      plVar13 = local_78;
      if (local_78 == (longlong *)0x0) {
        *puVar7 = &PTR_LAB_14a1c85c0;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar14 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar14 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar14;
        puVar7[2] = lVar12;
        *puVar7 = &PTR_FUN_14ac8abf0;
        puVar7[3] = local_80;
        puVar7[4] = 0;
        puVar7[5] = &LAB_141092e8a;
      }
      else {
        LOCK();
        *(int *)(local_78 + 1) = (int)local_78[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_78 + 1) = (int)local_78[1] + 1;
        UNLOCK();
        *puVar7 = &PTR_LAB_14a1c85c0;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar14 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar14 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar14;
        puVar7[2] = lVar12;
        *puVar7 = &PTR_FUN_14ac8abf0;
        puVar7[3] = local_80;
        puVar7[4] = local_78;
        LOCK();
        *(int *)((longlong)local_78 + 0xc) = *(int *)((longlong)local_78 + 0xc) + 1;
        UNLOCK();
        puVar7[5] = &LAB_141092e8a;
        LOCK();
        plVar1 = local_78 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
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
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_78 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar2 = (int *)((longlong)local_78 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_78 + 0x10))(local_78);
          }
        }
      }
      if (*(code **)(&DAT_14c9a85f8 + (uint)*(byte *)(lVar4 + 0xa8) * 0x120) == (code *)0x0) {
        local_80 = 0;
      }
      else {
        (**(code **)(&DAT_14c9a85f8 + (uint)*(byte *)(lVar4 + 0xa8) * 0x120))
                  (&local_80,lVar4 + 0x88,local_70,&local_90);
      }
      *(undefined8 *)(param_1 + 0xd8) = local_80;
      if (local_88 != 0) {
        if (local_90 == (undefined8 *)0x0) goto LAB_141810cb8;
        (**(code **)*local_90)(local_90,0);
        FUN_1446efa72(&local_90,0,0,0x10);
        local_88 = 0;
      }
      if (local_90 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_141810cb8:
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_48 != 0) {
    lVar14 = (longlong)local_48 + -1;
    lVar12 = lVar14 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar4 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar9 = (int)lVar14;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar4 + lVar12) = 0xffffffff;
    iVar11 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar11 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar12) = iVar11;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar10 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar10 = DAT_14c9a3dc0;
    }
    iVar11 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar11 = iVar9;
    }
    bVar5 = (byte)lVar14 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar10 + (longlong)(iVar11 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)(iVar11 >> 5) * 4) &
         (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    local_48 = 0;
  }
  if ((local_70[0] == '\x03') && (local_60 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_60 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141811102 FUN_141811102 body=893 status=ok
// SIG undefined FUN_141811102(void)

void FUN_141811102(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  char local_68 [8];
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined1 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar12 = *(longlong *)(param_1 + 0x40);
  if (lVar12 == 0) {
    lVar10 = 0;
    local_60 = 0;
  }
  else {
    if (*(int *)(lVar12 + 0x4c) == 0) {
LAB_1418112ee:
      lVar10 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar12 + 0x48);
      lVar10 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar11 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar11 == (longlong *)0x0) ||
           (((int)plVar11[2] != *(int *)(lVar12 + 0x4c) ||
            ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_1418112ee;
        lVar10 = *plVar11;
      }
    }
    plVar11 = *(longlong **)(lVar12 + 0x118);
    local_60 = param_1;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      bVar6 = false;
      local_58 = plVar11;
      goto LAB_1418111cb;
    }
  }
  local_58 = (longlong *)0x0;
  bVar6 = true;
LAB_1418111cb:
  plVar11 = local_58;
  local_40 = 0;
  local_68[0] = '\x03';
  local_50._0_4_ = 0;
  if (lVar10 == 0) {
    iVar7 = 0;
    uVar3 = (uint)local_50;
  }
  else {
    uVar3 = *(uint *)(lVar10 + 0xc);
    local_50 = (ulonglong)uVar3;
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
      iVar9 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar7 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar7 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar9;
        iVar7 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_50;
      if (bVar13) {
        iVar7 = iVar9;
      }
    }
  }
  local_50._0_4_ = uVar3;
  local_50 = CONCAT44(iVar7,(uint)local_50);
  local_48 = 2;
  if (local_40 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_40 + -1,1);
    local_40 = 0;
  }
  if (!bVar6) {
    LOCK();
    piVar2 = (int *)((longlong)plVar11 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    if (*(code **)(&DAT_14c9a8600 + (uint)*(byte *)(lVar4 + 0xa8) * 0x120) != (code *)0x0) {
      (**(code **)(&DAT_14c9a8600 + (uint)*(byte *)(lVar4 + 0xa8) * 0x120))
                (lVar4 + 0x88,local_68,(undefined8 *)(param_1 + 0xd8));
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  FUN_1409e0f3c(param_1);
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_40 != 0) {
    lVar12 = (longlong)local_40 + -1;
    lVar10 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar10),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar10));
    if (*(longlong *)(lVar4 + lVar10) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar7 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
    }
    *(undefined4 *)(lVar4 + lVar10) = 0xffffffff;
    iVar9 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar9 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar10) = iVar9;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar8 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar8 = DAT_14c9a3dc0;
    }
    iVar9 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar9 = iVar7;
    }
    bVar5 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar7;
    *(uint *)(puVar8 + (longlong)(iVar9 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar9 >> 5) * 4) &
         (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    local_40 = 0;
  }
  if ((local_68[0] == '\x03') && (local_58 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_58 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141811480 FUN_141811480 body=33 status=ok
// SIG undefined FUN_141811480(void)

void FUN_141811480(longlong param_1)

{
  FUN_1409e0a9a(param_1 + 0xd8);
  FUN_1409e0f3c(param_1);
  return;
}



// FUNCTION 1418114a2 FUN_1418114a2 body=140 status=ok
// SIG undefined FUN_1418114a2(void)

undefined8 * FUN_1418114a2(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  _Src = (undefined8 *)(param_1 + 0x1d0);
  bVar1 = *(byte *)(param_1 + 0x1f0);
  uVar2 = *(ushort *)(param_1 + 0x1e8);
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
    *param_2 = _Dst;
    _Src = (undefined8 *)*_Src;
  }
  uVar4 = (ulonglong)((uint)bVar1 * 0x120);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar4);
  if (pcVar3 == (code *)0x0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
  }
  else {
    (*pcVar3)(_Dst,_Src);
  }
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x1f0);
  return param_2;
}



// FUNCTION 14181152e FUN_14181152e body=52 status=ok
// SIG undefined FUN_14181152e(void)

char FUN_14181152e(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14021e918(param_1 + 0xd8);
  if (cVar1 == '\0' && *(char *)(*(longlong *)(param_1 + 0x48) + 0x331) == '\0') {
    cVar1 = *(char *)(param_1 + 0x1f0) != '\0';
  }
  return cVar1;
}



// FUNCTION 141811562 FUN_141811562 body=33 status=ok
// SIG undefined FUN_141811562(void)

void FUN_141811562(longlong param_1)

{
  FUN_140cad146();
  FUN_14064d55c(param_1 + 0xd8);
  return;
}



// FUNCTION 141811584 FUN_141811584 body=56 status=ok
// SIG undefined FUN_141811584(void)

void FUN_141811584(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140c3c314(param_1 + 0xd8,(char)param_3 == '\x01');
  FUN_1405b634c(param_1,param_2,param_3);
  return;
}



// FUNCTION 1418115bc FUN_1418115bc body=199 status=ok
// SIG undefined FUN_1418115bc(void)

ulonglong FUN_1418115bc(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 unaff_RBX;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined4 *puVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (*(char *)(param_1 + 8) == '\x04') {
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *param_2 = *param_1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    uVar5 = CONCAT71(uVar6,1);
  }
  else {
    puVar7 = &local_48;
    FUN_1400b56fe(puVar7,param_1,4);
    uVar5 = CONCAT71(uVar6,local_28 != 0);
    if (local_28 != 0) {
      *(undefined8 *)(param_2 + 4) = local_38;
      *param_2 = local_48;
      param_2[1] = uStack_44;
      param_2[2] = uStack_40;
      param_2[3] = uStack_3c;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_30) {
        puVar7 = (undefined4 *)CONCAT44(uStack_44,local_48);
      }
      (*pcVar1)(puVar7);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(CONCAT44(uStack_44,local_48));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141811684 FUN_141811684 body=174 status=ok
// SIG undefined FUN_141811684(void)

undefined8 * FUN_141811684(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_140002184(param_2,0x21);
    FUN_140002184(param_2,0x28);
  }
  FUN_140592d2e(param_1 + 8,&local_30);
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_30,iVar1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_140002184(param_2,0x29);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141811734 FUN_141811734 body=48 status=ok
// SIG undefined FUN_141811734(void)

void FUN_141811734(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ac8a528);
  FUN_1406f8a8a(param_1,param_2);
  return;
}



// FUNCTION 141811764 FUN_141811764 body=116 status=ok
// SIG undefined FUN_141811764(void)

undefined8 * FUN_141811764(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_14ac8a5e0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 1418117d8 FUN_1418117d8 body=59 status=ok
// SIG undefined FUN_1418117d8(void)

void FUN_1418117d8(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140343d7a();
  lVar2 = FUN_140519fd4(uVar1);
  if (lVar2 != 0) {
    FUN_140fd1e04(lVar2,param_1 + 0xd8,0);
    return;
  }
  return;
}



// FUNCTION 141811814 FUN_141811814 body=48 status=ok
// SIG undefined FUN_141811814(void)

void FUN_141811814(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ac8a7b0);
  FUN_1406f8a8a(param_1,param_2);
  return;
}



// FUNCTION 141811844 FUN_141811844 body=29 status=ok
// SIG undefined FUN_141811844(void)

void FUN_141811844(longlong param_1)

{
  FUN_14066e964();
  *(undefined4 *)(param_1 + 0xd8) = 0;
  return;
}



// FUNCTION 141811862 FUN_141811862 body=187 status=ok
// SIG undefined FUN_141811862(void)

undefined8 * FUN_141811862(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 *_Dst;
  ulonglong uVar4;
  undefined8 *_Src;
  
  if (((*(char *)(param_1 + 0xf8) == '\x01') &&
      (*(int *)(*(longlong *)(param_1 + 0x48) + 0x19c) == 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x48) + 0x1a2) == '\0')) {
    *(undefined2 *)(param_2 + 3) = 0;
    *(undefined1 *)(param_2 + 4) = 0;
  }
  else {
    _Src = (undefined8 *)(param_1 + 0x218);
    bVar1 = *(byte *)(param_1 + 0x238);
    uVar2 = *(ushort *)(param_1 + 0x230);
    *(ushort *)(param_2 + 3) = uVar2;
    _Dst = param_2;
    if (0x18 < uVar2) {
      _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
      *param_2 = _Dst;
      _Src = (undefined8 *)*_Src;
    }
    uVar4 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar4);
    if (pcVar3 == (code *)0x0) {
      memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else {
      (*pcVar3)(_Dst,_Src);
    }
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x238);
  }
  return param_2;
}



// FUNCTION 14181191e FUN_14181191e body=116 status=ok
// SIG undefined FUN_14181191e(void)

undefined8 FUN_14181191e(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  char local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x1a3) == '\x01') {
    local_14 = *(char *)(param_2 + 1);
    if (local_14 == '\x01') {
      local_18 = *param_2;
    }
    uVar1 = FUN_140577b9c(param_1 + 0x120,&local_18);
  }
  else {
    uVar1 = 0;
  }
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141811994 FUN_141811994 body=160 status=ok
// SIG undefined FUN_141811994(void)

void FUN_141811994(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a40ccc();
  *(undefined1 *)(param_1 + 0x13c) = 1;
  lVar1 = FUN_14058d91e(*(longlong *)(param_1 + 0x48) + 0x420);
  uVar2 = 0;
  if (lVar1 != 0) {
    FUN_140273082(param_1,&local_38);
    uVar2 = (ulonglong)(local_30 - 1);
    if (local_30 == 0) {
      uVar2 = 0;
    }
    FUN_1446f82e2(&local_28,uVar2,local_38,1);
    uVar2 = local_28;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  *(ulonglong *)(param_1 + 0x17c) = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141811a36 FUN_141811a36 body=52 status=ok
// SIG undefined FUN_141811a36(void)

void FUN_141811a36(longlong param_1)

{
  FUN_14064d852();
  if ((*(float *)(param_1 + 0x144) == 0.0) && (!NAN(*(float *)(param_1 + 0x144)))) {
    return;
  }
  FUN_140f00d84(param_1,1);
  return;
}



// FUNCTION 141811a6a FUN_141811a6a body=508 status=ok
// SIG undefined FUN_141811a6a(void)

void FUN_141811a6a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  code *local_38;
  code *local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14066e964();
  plVar1 = (longlong *)FUN_140343d7a(param_1);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cb1c498 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_147e36893;
      local_50 = FUN_146420564;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
    }
    lVar2 = (**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb1c498);
    if (lVar2 != 0) {
      if (DAT_14cb1c498 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_147e36893;
        local_50 = FUN_146420564;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
      }
      lVar3 = FUN_144718840(lVar2,DAT_14cb1c498);
      if (lVar2 != lVar3) goto LAB_141811ae6;
    }
  }
  lVar3 = 0;
LAB_141811ae6:
  FUN_14036fb34(&local_28,lVar3);
  *(undefined4 *)(param_1 + 0xd8) = (undefined4)local_28;
  *(undefined4 *)(param_1 + 0xdc) = local_28._4_4_;
  *(undefined4 *)(param_1 + 0xe0) = uStack_20;
  *(undefined4 *)(param_1 + 0xe4) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141811c68 FUN_141811c68 body=626 status=ok
// SIG undefined FUN_141811c68(void)

void FUN_141811c68(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140cad146();
  lVar7 = FUN_14058d91e(*(longlong *)(param_1 + 0x48) + 0x80);
  if ((((lVar7 != 0) && (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0)) &&
      (*(int *)(param_1 + 0xdc) != 0)) &&
     ((uVar4 = *(uint *)(param_1 + 0xd8), -1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)))) {
    lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    if ((lVar11 != 0) &&
       ((*(int *)(lVar11 + 0x10) == *(int *)(param_1 + 0xdc) &&
        ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)))) {
      lVar11 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
      FUN_140844312(&local_38,lVar11,lVar7);
      puVar3 = (undefined8 *)(lVar11 + 0x1a8);
      puVar9 = *(undefined8 **)(lVar11 + 0x228);
      puVar10 = puVar9;
      if (puVar9 == (undefined8 *)0x0) {
        puVar10 = puVar3;
      }
      iVar5 = *(int *)(lVar11 + 0x230);
      lVar7 = (longlong)iVar5;
      if (lVar7 != 0) {
        lVar12 = lVar7 << 5;
        do {
          if (puVar10[3] == DAT_14cb23e30) {
            if (puVar10 != (undefined8 *)0x0) goto LAB_141811d72;
            break;
          }
          puVar10 = puVar10 + 4;
          lVar12 = lVar12 + -0x20;
        } while (lVar12 != 0);
      }
      *(uint *)(lVar11 + 0x230) = iVar5 + 1U;
      if (*(uint *)(lVar11 + 0x234) < iVar5 + 1U) {
        FUN_147e437d0(puVar3,iVar5);
        puVar9 = *(undefined8 **)(lVar11 + 0x228);
      }
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = puVar3;
      }
      puVar9[lVar7 * 4 + 2] = 0;
      (puVar9 + lVar7 * 4 + 2)[1] = 0;
      puVar9[lVar7 * 4] = 0;
      (puVar9 + lVar7 * 4)[1] = 0;
      puVar9 = *(undefined8 **)(lVar11 + 0x228);
      if (*(undefined8 **)(lVar11 + 0x228) == (undefined8 *)0x0) {
        puVar9 = puVar3;
      }
      puVar10 = puVar9 + lVar7 * 4;
      puVar9[lVar7 * 4 + 3] = DAT_14cb23e30;
LAB_141811d72:
      *puVar10 = local_38;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)puVar10[2];
      puVar10[1] = local_30;
      puVar10[2] = local_28;
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
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_28 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      if (*(char *)(lVar11 + 0x118) == '\0') {
        uVar8 = FUN_144836af6(lVar11);
        FUN_1448367ba(lVar11,uVar8);
      }
      if (((*(char *)(lVar11 + 0x160) == '\x01') &&
          (4 < DAT_14c872be0 - *(longlong *)(lVar11 + 0x158))) &&
         ((*(longlong *)(lVar11 + 0x150) + 4U <= DAT_14c872be0 ||
          (*(char *)(lVar11 + 0x148) == '\0')))) {
        FUN_14012b994(lVar11);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141811edc FUN_141811edc body=295 status=ok
// SIG undefined FUN_141811edc(void)

void FUN_141811edc(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
    if (((*(int *)(param_1 + 0xdc) != 0) && (uVar1 = *(uint *)(param_1 + 0xd8), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0xdc))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
        if (0 < *(int *)(lVar3 + 0x230)) {
          local_18 = &DAT_14cb23e30;
          FUN_140b042ce(lVar3 + 0x1a8);
        }
        if (*(char *)(lVar3 + 0x118) == '\0') {
          uVar2 = FUN_144836af6(lVar3);
          FUN_1448367ba(lVar3,uVar2);
        }
        if (((*(char *)(lVar3 + 0x160) == '\x01') &&
            (4 < DAT_14c872be0 - *(longlong *)(lVar3 + 0x158))) &&
           ((*(longlong *)(lVar3 + 0x150) + 4U <= DAT_14c872be0 ||
            (*(char *)(lVar3 + 0x148) == '\0')))) {
          FUN_14012b994(lVar3);
        }
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141812004 FUN_141812004 body=931 status=ok
// SIG undefined FUN_141812004(void)

ulonglong FUN_141812004(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined8 unaff_RSI;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  bool bVar16;
  undefined1 auStack_c8 [40];
  char local_a0;
  undefined7 uStack_9f;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80;
  int local_78 [2];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar9 = FUN_140343d7a();
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (lVar9 == 0) goto LAB_141812211;
  lVar4 = param_1[9];
  lVar14 = param_1[8];
  if (lVar14 == 0) {
    lVar13 = 0;
    param_1 = (longlong *)0x0;
LAB_1418122c2:
    local_90 = (longlong *)0x0;
    bVar6 = true;
    local_98 = param_1;
  }
  else {
    if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_141812289:
      lVar13 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar14 + 0x48);
      lVar13 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar12 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar12 == (longlong *)0x0) ||
           (((int)plVar12[2] != *(int *)(lVar14 + 0x4c) ||
            ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_141812289;
        lVar13 = *plVar12;
      }
    }
    plVar12 = *(longlong **)(lVar14 + 0x118);
    if (plVar12 == (longlong *)0x0) goto LAB_1418122c2;
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
    bVar6 = false;
    local_98 = param_1;
    local_90 = plVar12;
  }
  plVar12 = local_90;
  local_78[0] = 0;
  local_a0 = '\x03';
  local_88._0_4_ = 0;
  if (lVar13 == 0) {
    iVar8 = 0;
    uVar3 = (uint)local_88;
  }
  else {
    uVar3 = *(uint *)(lVar13 + 0xc);
    local_88 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar8 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar8 = *(int *)(lVar14 + 0x10);
      bVar16 = iVar8 == 0;
      if (bVar16) {
        *(int *)(lVar14 + 0x10) = iVar10;
        iVar8 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_88;
      if (bVar16) {
        iVar8 = iVar10;
      }
    }
  }
  local_88._0_4_ = uVar3;
  local_88 = CONCAT44(iVar8,(uint)local_88);
  local_80 = 2;
  if (local_78[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
    local_78[0] = 0;
  }
  if (!bVar6) {
    LOCK();
    piVar2 = (int *)((longlong)plVar12 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  FUN_1447c3578(lVar4 + 0x80,local_70,&local_a0);
  cVar7 = FUN_140168b7a(local_70,0);
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar5 != (code *)0x0) {
    ppppuVar15 = local_70;
    if (0x18 < local_58) {
      ppppuVar15 = (undefined8 ****)local_70[0];
    }
    (*pcVar5)(ppppuVar15);
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
  if (cVar7 == '\0') {
    FUN_14070cbf4(&local_a0,lVar9);
    lVar9 = CONCAT71(uStack_9f,local_a0);
    uVar11 = CONCAT71((int7)((ulonglong)&local_a0 >> 8),1);
    if ((lVar9 != 0) &&
       ((1.0 < *(float *)(lVar9 + 0x500) ||
        ((*(longlong *)(lVar9 + 0x4b0) != 0 &&
         (cVar7 = FUN_1449c239e(*(longlong *)(lVar9 + 0x4b0),*(undefined8 *)(lVar9 + 0x520)),
         cVar7 != '\x01')))))) {
      uVar11 = 0;
    }
    plVar12 = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
LAB_141812211:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 1418123a8 FUN_1418123a8 body=931 status=ok
// SIG undefined FUN_1418123a8(void)

ulonglong FUN_1418123a8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined8 unaff_RSI;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  bool bVar16;
  undefined1 auStack_c8 [40];
  char local_a0;
  undefined7 uStack_9f;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80;
  int local_78 [2];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar9 = FUN_140343d7a();
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (lVar9 == 0) goto LAB_1418125b5;
  lVar4 = param_1[9];
  lVar14 = param_1[8];
  if (lVar14 == 0) {
    lVar13 = 0;
    param_1 = (longlong *)0x0;
LAB_141812666:
    local_90 = (longlong *)0x0;
    bVar6 = true;
    local_98 = param_1;
  }
  else {
    if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_14181262d:
      lVar13 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar14 + 0x48);
      lVar13 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar12 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar12 == (longlong *)0x0) ||
           (((int)plVar12[2] != *(int *)(lVar14 + 0x4c) ||
            ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_14181262d;
        lVar13 = *plVar12;
      }
    }
    plVar12 = *(longlong **)(lVar14 + 0x118);
    if (plVar12 == (longlong *)0x0) goto LAB_141812666;
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
    bVar6 = false;
    local_98 = param_1;
    local_90 = plVar12;
  }
  plVar12 = local_90;
  local_78[0] = 0;
  local_a0 = '\x03';
  local_88._0_4_ = 0;
  if (lVar13 == 0) {
    iVar8 = 0;
    uVar3 = (uint)local_88;
  }
  else {
    uVar3 = *(uint *)(lVar13 + 0xc);
    local_88 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar8 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar8 = *(int *)(lVar14 + 0x10);
      bVar16 = iVar8 == 0;
      if (bVar16) {
        *(int *)(lVar14 + 0x10) = iVar10;
        iVar8 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_88;
      if (bVar16) {
        iVar8 = iVar10;
      }
    }
  }
  local_88._0_4_ = uVar3;
  local_88 = CONCAT44(iVar8,(uint)local_88);
  local_80 = 2;
  if (local_78[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
    local_78[0] = 0;
  }
  if (!bVar6) {
    LOCK();
    piVar2 = (int *)((longlong)plVar12 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  FUN_1447c3578(lVar4 + 0x80,local_70,&local_a0);
  cVar7 = FUN_140168b7a(local_70,0);
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar5 != (code *)0x0) {
    ppppuVar15 = local_70;
    if (0x18 < local_58) {
      ppppuVar15 = (undefined8 ****)local_70[0];
    }
    (*pcVar5)(ppppuVar15);
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
  if (cVar7 == '\0') {
    FUN_14070cbf4(&local_a0,lVar9);
    lVar9 = CONCAT71(uStack_9f,local_a0);
    uVar11 = CONCAT71((int7)((ulonglong)&local_a0 >> 8),1);
    if ((lVar9 != 0) &&
       ((1.0 < *(float *)(lVar9 + 0x500) ||
        ((*(longlong *)(lVar9 + 0x4b0) != 0 &&
         (cVar7 = FUN_1449c239e(*(longlong *)(lVar9 + 0x4b0),*(undefined8 *)(lVar9 + 0x520)),
         cVar7 != '\x01')))))) {
      uVar11 = 0;
    }
    plVar12 = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
LAB_1418125b5:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 14181274c FUN_14181274c body=427 status=ok
// SIG undefined FUN_14181274c(void)

undefined8 FUN_14181274c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_71;
  undefined1 local_70;
  undefined7 uStack_6f;
  longlong *local_68;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0xf8) == '\x02') {
    uVar8 = FUN_1405f939e();
    FUN_140a702f6(&local_70,uVar8);
    if (local_68 != (longlong *)0x0) {
      iVar6 = (int)local_68[1];
      do {
        if (iVar6 == 0) {
          plVar9 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar5 = (int)local_68[1];
        bVar10 = iVar6 == iVar5;
        if (bVar10) {
          *(int *)(local_68 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
        plVar9 = local_68;
      } while (!bVar10);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
      if (plVar9 != (longlong *)0x0) {
        lVar4 = CONCAT71(uStack_6f,local_70);
        if (lVar4 != 0) {
          local_71 = 2;
          local_80 = FUN_144a7be76(param_1);
          FUN_144a7bec8(param_1,local_90);
          local_70 = 0;
          local_48 = 0;
          FUN_144a7bf34(&local_70,local_90,&local_80,&local_71);
          if (local_88 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_88 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_88 + 0x10))();
            }
          }
          uVar8 = FUN_140343d7a(param_1);
          uVar7 = FUN_140bbb356(lVar4,lVar3 + 0x80,uVar8,&local_70);
          FUN_144a5ac3a(&local_70);
          if ((char)uVar7 == '\0') {
            LOCK();
            plVar2 = plVar9 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            uVar8 = CONCAT71((uint7)(uint3)((uint)uVar7 >> 8),2);
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
            goto LAB_14181277c;
          }
        }
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
  uVar8 = 0;
LAB_14181277c:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1418128f8 FUN_1418128f8 body=48 status=ok
// SIG undefined FUN_1418128f8(void)

void FUN_1418128f8(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ac8a908);
  FUN_1406f8a8a(param_1,param_2);
  return;
}



// FUNCTION 141812928 FUN_141812928 body=112 status=ok
// SIG undefined FUN_141812928(void)

void FUN_141812928(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14024bdb0();
  if ((param_1[1] != 0) && (*(longlong *)(param_1[1] + 0x10) != 0)) {
    local_28 = 0x36051d0d;
    uStack_24 = 0xec014286;
    uStack_20 = 0xac370bf1;
    uStack_1c = 0x236fc0d6;
    iVar1 = FUN_1448a256a();
    if (iVar1 < 0) {
      (**(code **)(*param_1 + 0x90))(param_1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14181299a FUN_14181299a body=522 status=ok
// SIG undefined FUN_14181299a(void)

void FUN_14181299a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1409e0f3c();
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    plVar1 = (longlong *)FUN_140343d7a(param_1);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14cb22240 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1464376fa;
        local_48 = &LAB_147f28935;
        local_50 = FUN_146437c39;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
      }
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb22240);
      if (plVar1 != (longlong *)0x0) {
        if (DAT_14cb22240 == 0) {
          local_40 = &local_20;
          local_20 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = &LAB_1464376fa;
          local_48 = &LAB_147f28935;
          local_50 = FUN_146437c39;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10004001;
          local_70 = 8;
          local_78 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
        }
        plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb22240);
        if ((plVar1 != plVar2) && (plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x30))(plVar2);
          if (*(longlong *)(param_1 + 0xf8) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141812bba FUN_141812bba body=229 status=ok
// SIG undefined FUN_141812bba(void)

void FUN_141812bba(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14024bdb0();
  iVar2 = *(int *)(param_1 + 200);
  iVar1 = *(int *)(param_1 + 0xe0);
  if (iVar1 < iVar2) {
    *(int *)(param_1 + 0xe0) = iVar2;
    if ((uint)(*(int *)(param_1 + 0xe4) - iVar1) < (uint)(iVar2 - iVar1)) {
      FUN_147f55d9c((longlong *)(param_1 + 0xd8),iVar1);
    }
    FUN_147f55d88((longlong)iVar1 * 4 + *(longlong *)(param_1 + 0xd8),iVar2 - iVar1);
  }
  else {
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar2);
    }
    if (iVar2 < iVar1) {
      *(int *)(param_1 + 0xe0) = iVar2;
    }
  }
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) != 0))
  {
    local_38 = 0xe5ab52d1;
    uStack_34 = 0x51fc4810;
    uStack_30 = 0x9d1c0f65;
    uStack_2c = 0xf5a086b4;
    iVar2 = FUN_1448a256a();
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0xd0) = 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141812ca0 FUN_141812ca0 body=636 status=ok
// SIG undefined FUN_141812ca0(void)

ulonglong FUN_141812ca0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  longlong *plVar10;
  byte bVar11;
  undefined7 uVar13;
  ulonglong uVar12;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  cVar5 = FUN_14097e824();
  if ((cVar5 != '\0') && (uVar2 = *(uint *)(param_1 + 0x1b8), 0 < (int)uVar2)) {
    plVar1 = (longlong *)(param_1 + 0x130);
    lVar14 = *(longlong *)(param_1 + 0x48);
    if (*(int *)(lVar14 + 0xd0) == 0) {
      plVar10 = *(longlong **)(param_1 + 0x1b0);
      if (*(longlong **)(param_1 + 0x1b0) == (longlong *)0x0) {
        plVar10 = plVar1;
      }
      plVar10 = (longlong *)*plVar10;
      if ((plVar10 != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*plVar10 + 0x28))(plVar10), cVar5 != '\0')) {
        cVar5 = FUN_14097ea48(plVar10,param_2,param_1,0);
        uVar13 = (undefined7)((ulonglong)plVar10 >> 8);
        if (cVar5 != '\0') {
          iVar3 = *(int *)(param_1 + 0x1b8);
          uVar12 = CONCAT71(uVar13,1);
          if (1 < (longlong)iVar3) {
            uVar16 = 1;
            lVar14 = 0x10;
            do {
              plVar10 = *(longlong **)(param_1 + 0x1b0);
              if (*(longlong **)(param_1 + 0x1b0) == (longlong *)0x0) {
                plVar10 = plVar1;
              }
              plVar10 = *(longlong **)((longlong)plVar10 + lVar14);
              if ((((plVar10 != (longlong *)0x0) &&
                   (cVar5 = (**(code **)(*plVar10 + 0x28))(plVar10), cVar5 != '\0')) &&
                  (1 < (byte)(*(char *)((longlong)plVar10 + 0xb4) - 1U))) &&
                 (cVar5 = FUN_14097f910(plVar10,param_2,param_1,uVar16 & 0xffffffff),
                 cVar5 == '\x02')) {
                FUN_14097ea48(plVar10,param_2,param_1,uVar16 & 0xffffffff);
              }
              uVar16 = uVar16 + 1;
              lVar14 = lVar14 + 0x10;
            } while ((longlong)iVar3 != uVar16);
          }
          goto LAB_141812d9d;
        }
        if ((*(byte *)((longlong)plVar10 + 0xb5) != 2) ||
           (uVar12 = CONCAT71(uVar13,1), *(char *)(plVar10[9] + 0x73) == '\0')) {
          uVar12 = (ulonglong)*(byte *)((longlong)plVar10 + 0xb5);
        }
LAB_141812ee9:
        *(char *)(param_1 + 0xb5) = (char)uVar12;
      }
    }
    else if (*(int *)(lVar14 + 0xd0) == 1) {
      cVar5 = *(char *)(lVar14 + 0x72);
      bVar6 = 1;
      lVar15 = 0;
      uVar12 = 0;
      bVar9 = 0;
      do {
        plVar10 = *(longlong **)(param_1 + 0x1b0);
        if (*(longlong **)(param_1 + 0x1b0) == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        plVar10 = *(longlong **)((longlong)plVar10 + lVar15);
        if (((plVar10 != (longlong *)0x0) &&
            (cVar7 = (**(code **)(*plVar10 + 0x28))(plVar10), cVar7 != '\0')) &&
           (1 < (byte)(*(char *)((longlong)plVar10 + 0xb4) - 1U))) {
          cVar7 = FUN_14097f910(plVar10,param_2,param_1,uVar12 & 0xffffffff);
          if (cVar7 == '\x02') {
            bVar8 = FUN_14097ea48(plVar10,param_2,param_1,uVar12 & 0xffffffff);
          }
          else {
            bVar8 = 0;
          }
          lVar4 = *(longlong *)(lVar14 + 0xd8);
          cVar7 = *(char *)((longlong)plVar10 + 0xb5);
          if (cVar7 == '\x02') {
            bVar11 = *(byte *)(lVar4 + uVar12 * 4);
            if (*(char *)(plVar10[9] + 0x73) != '\0') {
              if (bVar11 != 0) {
LAB_141812e85:
                bVar9 = bVar9 | *(byte *)(lVar4 + 1 + uVar12 * 4);
              }
              goto LAB_141812e18;
            }
            bVar11 = bVar11 ^ 1;
            bVar8 = bVar8 | cVar5 != '\0';
LAB_141812ea4:
            if ((bVar8 == 0 && bVar11 == 0) && (*(char *)(lVar4 + 2 + uVar12 * 4) != '\0')) {
              uVar12 = 2;
              goto LAB_141812ee9;
            }
          }
          else {
            if (*(char *)(lVar4 + uVar12 * 4) != '\0') {
              if (cVar7 == '\x01') goto LAB_141812e85;
              bVar11 = cVar5 != '\0';
              goto LAB_141812ea4;
            }
            if (cVar7 == '\x01') goto LAB_141812e18;
          }
          bVar6 = 0;
        }
LAB_141812e18:
        uVar12 = uVar12 + 1;
        lVar15 = lVar15 + 0x10;
      } while (uVar2 != uVar12);
      if (*(char *)(lVar14 + 0xd4) != '\0') {
        bVar9 = bVar6;
      }
      uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
      if ((bVar9 & 1) == 0) goto LAB_141812d9d;
      goto LAB_141812ee9;
    }
  }
  uVar12 = 0;
LAB_141812d9d:
  return uVar12 & 0xffffffff;
}



// FUNCTION 141812f1c FUN_141812f1c body=841 status=ok
// SIG undefined FUN_141812f1c(void)

ulonglong FUN_141812f1c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong *plVar8;
  byte bVar9;
  byte bVar10;
  ulonglong uVar11;
  byte bVar12;
  byte bVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  lVar15 = param_1 + 0xd8;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar15 = *(longlong *)(param_1 + 0x118);
  }
  iVar1 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar1 == 0) {
    uVar11 = 1;
    uVar7 = 0;
LAB_141812fe8:
    lVar15 = *(longlong *)(param_1 + 0x48);
    uVar16 = 0;
    if (uVar7 != 0) {
      uVar16 = uVar11;
    }
    uVar11 = (ulonglong)uVar7;
    if (*(char *)(lVar15 + 0x78) != '\0') {
      uVar11 = uVar16;
    }
  }
  else {
    uVar11 = 1;
    lVar14 = 0;
    bVar10 = 0;
    uVar7 = 0;
    do {
      plVar2 = *(longlong **)(lVar15 + lVar14);
      uVar6 = FUN_1400cd33c(plVar2,param_2);
      if (*(code **)(*plVar2 + 0x28) == FUN_1400d388e) {
        cVar4 = FUN_1400d388e(plVar2);
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      if (cVar4 != '\0') {
        lVar3 = plVar2[9];
        if ((char)uVar6 == '\x01') {
          if (*(char *)(lVar3 + 0x79) != '\0') {
            uVar7 = 1;
          }
        }
        else {
          if (*(char *)(lVar3 + 0x7c) != '\0') {
            uVar11 = 0;
          }
          if ((char)uVar6 != '\0') {
            bVar10 = bVar10 | *(byte *)(lVar3 + 0x7b);
          }
        }
      }
      lVar14 = lVar14 + 8;
    } while ((longlong)iVar1 * 8 != lVar14);
    if ((bVar10 & 1) == 0) goto LAB_141812fe8;
    lVar15 = *(longlong *)(param_1 + 0x48);
    uVar11 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),2);
  }
  if (0 < *(int *)(param_1 + 0x120)) {
    if ((char)uVar11 == '\x01') {
      lVar14 = 0x71;
    }
    else {
      if (((uint)uVar11 & 0xff) != 2) goto LAB_141813019;
      lVar14 = 0x72;
    }
    if (*(char *)(lVar15 + lVar14) == '\0') {
      return uVar11;
    }
  }
LAB_141813019:
  uVar7 = *(uint *)(param_1 + 0x1b8);
  uVar11 = CONCAT71((int7)(uVar11 >> 8),2);
  if (0 < (int)uVar7) {
    plVar2 = (longlong *)(param_1 + 0x130);
    if (*(int *)(lVar15 + 0xd0) == 0) {
      plVar8 = *(longlong **)(param_1 + 0x1b0);
      if (*(longlong **)(param_1 + 0x1b0) == (longlong *)0x0) {
        plVar8 = plVar2;
      }
      plVar8 = (longlong *)*plVar8;
      if ((plVar8 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar8 + 0x28))(plVar8), cVar4 != '\0')) {
        uVar7 = FUN_1400cd33c(plVar8,param_2);
        if ((char)uVar7 == '\0') {
          iVar1 = *(int *)(param_1 + 0x1b8);
          if ((longlong)iVar1 < 2) {
            uVar11 = 0;
          }
          else {
            lVar15 = 0x10;
            do {
              plVar8 = *(longlong **)(param_1 + 0x1b0);
              if (*(longlong **)(param_1 + 0x1b0) == (longlong *)0x0) {
                plVar8 = plVar2;
              }
              plVar8 = *(longlong **)((longlong)plVar8 + lVar15);
              if ((plVar8 != (longlong *)0x0) &&
                 (cVar4 = (**(code **)(*plVar8 + 0x28))(plVar8), cVar4 != '\0')) {
                if (1 < (byte)(*(char *)((longlong)plVar8 + 0xb4) - 1U)) {
                  (**(code **)(*plVar8 + 0xd0))(plVar8);
                }
                FUN_1400cd33c(plVar8,param_2);
              }
              lVar15 = lVar15 + 0x10;
              uVar11 = 0;
            } while ((longlong)iVar1 * 0x10 != lVar15);
          }
        }
        else {
          uVar11 = (ulonglong)uVar7;
        }
      }
    }
    else if (*(int *)(lVar15 + 0xd0) == 1) {
      bVar10 = 1;
      lVar14 = 0;
      bVar9 = 0;
      bVar12 = 0;
      bVar13 = 0;
      do {
        plVar8 = *(longlong **)(param_1 + 0x1b0);
        if (*(longlong **)(param_1 + 0x1b0) == (longlong *)0x0) {
          plVar8 = plVar2;
        }
        plVar8 = *(longlong **)((longlong)plVar8 + lVar14 * 4);
        if (plVar8 != (longlong *)0x0) {
          cVar4 = FUN_1400cd33c(plVar8,param_2);
          cVar5 = (**(code **)(*plVar8 + 0x28))(plVar8);
          if (cVar5 != '\0') {
            lVar3 = *(longlong *)(lVar15 + 0xd8);
            if (cVar4 == '\x01') {
              bVar13 = bVar12;
              if (*(char *)(lVar3 + 1 + lVar14) != '\0') {
                bVar12 = 1;
                bVar13 = 1;
              }
            }
            else {
              if (*(char *)(lVar3 + 3 + lVar14) != '\0') {
                bVar10 = 0;
              }
              if (cVar4 != '\0') {
                bVar9 = bVar9 | *(byte *)(lVar3 + 2 + lVar14);
              }
            }
          }
        }
        lVar14 = lVar14 + 4;
      } while ((ulonglong)uVar7 << 2 != lVar14);
      if ((*(byte *)(lVar15 + 0xd4) & 1) != 0) {
        bVar13 = bVar10;
      }
      uVar11 = 2;
      if ((bVar9 & 1) == 0) {
        uVar11 = (ulonglong)bVar13;
      }
    }
  }
  return uVar11;
}



// FUNCTION 141813266 FUN_141813266 body=169 status=ok
// SIG undefined FUN_141813266(void)

undefined8 FUN_141813266(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = param_1 + 0x130;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x1b0);
  }
  iVar1 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    do {
      if (((char)param_3 != '\x04') &&
         (plVar2 = *(longlong **)(lVar6 + lVar5), plVar2 != (longlong *)0x0)) {
        cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
        if (cVar3 != '\0') {
          cVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,param_2,param_3);
          if (cVar3 == '\0') {
            return 0;
          }
        }
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
  }
  uVar4 = FUN_1401b15c6(param_1,param_2,param_3);
  return uVar4;
}



// FUNCTION 141813310 FUN_141813310 body=136 status=ok
// SIG undefined FUN_141813310(void)

ulonglong FUN_141813310(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar2 = FUN_14065d88c();
  uVar5 = (ulonglong)uVar2;
  iVar3 = *(int *)(param_1 + 0x1b8);
  if (0 < iVar3) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x1b0);
      if (*(longlong *)(param_1 + 0x1b0) == 0) {
        lVar4 = param_1 + 0x130;
      }
      if (*(longlong *)(lVar4 + lVar6) != 0) {
        bVar1 = FUN_14065d9ca(*(longlong *)(lVar4 + lVar6),param_2,param_3);
        uVar5 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 & bVar1);
        iVar3 = *(int *)(param_1 + 0x1b8);
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar3);
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 141813398 FUN_141813398 body=102 status=ok
// SIG undefined FUN_141813398(void)

void FUN_141813398(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1405b62ce();
  iVar1 = *(int *)(param_1 + 0x1b8);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x1b0);
      if (*(longlong *)(param_1 + 0x1b0) == 0) {
        lVar2 = param_1 + 0x130;
      }
      if (*(longlong **)(lVar2 + lVar3) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar2 + lVar3) + 0xd0))();
        iVar1 = *(int *)(param_1 + 0x1b8);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < iVar1);
  }
  return;
}



// FUNCTION 14181340e FUN_14181340e body=150 status=ok
// SIG undefined FUN_14181340e(void)

void FUN_14181340e(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  FUN_14024bdb0();
  plVar1 = (longlong *)(param_1 + 0xd8);
  iVar2 = *(int *)(param_1 + 200);
  iVar3 = *(int *)(param_1 + 0xe0);
  if (iVar3 < iVar2) {
    *(int *)(param_1 + 0xe0) = iVar2;
    if ((uint)(*(int *)(param_1 + 0xe4) - iVar3) < (uint)(iVar2 - iVar3)) {
      FUN_147f55f9c(plVar1,iVar3);
    }
    FUN_147f55f59((longlong)iVar3 * 0x40 + *plVar1,iVar2 - iVar3);
    return;
  }
  if (-1 < iVar2) {
    if (iVar3 <= iVar2) {
      return;
    }
    FUN_147f560be(plVar1,iVar2,iVar3 - iVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar2);
}



// FUNCTION 1418134a4 FUN_1418134a4 body=88 status=ok
// SIG undefined FUN_1418134a4(void)

void FUN_1418134a4(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  FUN_140794ec0();
  if ((*(int *)(param_1 + 0x1c0) != -1) && (0 < *(int *)(param_1 + 0x1b8))) {
    uVar1 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x1c8) + uVar1 * 4) + 1;
      if (uVar1 != *(uint *)(param_1 + 0x1c0)) {
        iVar2 = 0;
      }
      *(int *)(*(longlong *)(param_1 + 0x1c8) + uVar1 * 4) = iVar2;
      uVar1 = uVar1 + 1;
    } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x1b8));
  }
  return;
}



// FUNCTION 1418134fc FUN_1418134fc body=131 status=ok
// SIG undefined FUN_1418134fc(void)

void FUN_1418134fc(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_14024bdb0();
  iVar1 = *(int *)(param_1 + 200);
  iVar2 = *(int *)(param_1 + 0xd8);
  if (iVar2 < iVar1) {
    *(int *)(param_1 + 0xd8) = iVar1;
    if ((uint)(*(int *)(param_1 + 0xdc) - iVar2) < (uint)(iVar1 - iVar2)) {
      FUN_147f561c6((longlong *)(param_1 + 0xd0),iVar2);
    }
    FUN_147f561b3((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0xd0),iVar1 - iVar2);
    return;
  }
  if (-1 < iVar1) {
    if (iVar1 < iVar2) {
      *(int *)(param_1 + 0xd8) = iVar1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 141813580 FUN_141813580 body=126 status=ok
// SIG undefined FUN_141813580(void)

undefined8 * FUN_141813580(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418135fe FUN_1418135fe body=126 status=ok
// SIG undefined FUN_1418135fe(void)

undefined8 * FUN_1418135fe(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14181367c FUN_14181367c body=180 status=ok
// SIG undefined FUN_14181367c(void)

int FUN_14181367c(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x40);
        cVar1 = FUN_14472d054(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14181370a;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x38 + (longlong)iVar4 * 0x40);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14181370a:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141813732 FUN_141813732 body=274 status=ok
// SIG undefined FUN_141813732(void)

void FUN_141813732(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0x130;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x130)) {
      uVar5 = uVar4 / 0x130 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x130,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141813846 FUN_141813846 body=118 status=ok
// SIG undefined FUN_141813846(void)

void FUN_141813846(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c85c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8abf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418138bc FUN_1418138bc body=68 status=ok
// SIG undefined FUN_1418138bc(void)

undefined8 * FUN_1418138bc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ac8ad40;
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



// FUNCTION 141813900 FUN_141813900 body=68 status=ok
// SIG undefined FUN_141813900(void)

undefined8 * FUN_141813900(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ac8af70;
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



// FUNCTION 141813944 FUN_141813944 body=128 status=ok
// SIG undefined FUN_141813944(void)

void FUN_141813944(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ac8bde0);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  FUN_140a6acaa(param_1);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418139c6 FUN_1418139c6 body=79 status=ok
// SIG undefined FUN_1418139c6(void)

void FUN_1418139c6(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140a0f7b0();
  local_28 = 0x82ef6c3d;
  uStack_24 = 0x9765454f;
  uStack_20 = 0x863dda87;
  uStack_1c = 0x77f887b8;
  FUN_1448a256a(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141813a16 FUN_141813a16 body=236 status=ok
// SIG undefined FUN_141813a16(void)

void FUN_141813a16(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((0 < *(int *)(param_1 + 0x78)) &&
      (plVar1 = (longlong *)**(longlong **)(param_1 + 0x70), plVar1 != (longlong *)0x0)) &&
     ((byte)(*(char *)((longlong)plVar1 + 0xb4) - 1U) < 2)) {
    lVar2 = FUN_14479d2ce(param_1 + 0x48);
    if (lVar2 != 0) {
      uVar3 = FUN_140b040c0();
      plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
      if (plVar4 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
        if (lVar2 != 0) {
          local_30 = *(undefined4 *)(lVar2 + 0x14);
          local_2c = 0;
          local_28 = 0 < *(int *)(lVar2 + 0x508);
          local_27 = 0;
          local_38 = lVar2;
          plVar4 = (longlong *)FUN_14479d2ce(lVar2);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x180))(plVar4);
          }
          (**(code **)(*plVar1 + 0xb0))(plVar1,&local_38,4);
        }
      }
    }
  }
  FUN_1405682ba(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141813b0a FUN_141813b0a body=17 status=ok
// SIG undefined FUN_141813b0a(void)

char FUN_141813b0a(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  return cVar1 * '\x02';
}



// FUNCTION 141813b1c FUN_141813b1c body=55 status=ok
// SIG undefined FUN_141813b1c(void)

void FUN_141813b1c(longlong param_1)

{
  FUN_14024bfc4();
  if ((0 < *(int *)(param_1 + 0x180)) && (**(longlong **)(param_1 + 0x178) != 0)) {
    FUN_14024bea0(**(longlong **)(param_1 + 0x178),1);
    return;
  }
  return;
}



// FUNCTION 141813b54 FUN_141813b54 body=59 status=ok
// SIG undefined FUN_141813b54(void)

void FUN_141813b54(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x265) = 0;
  *(undefined1 *)(param_1 + 0x267) = 0;
  FUN_140872c8a(param_1 + 0x130);
  FUN_1409e0f3c(param_1);
  return;
}



// FUNCTION 141813b90 FUN_141813b90 body=77 status=ok
// SIG undefined FUN_141813b90(void)

undefined8 FUN_141813b90(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14097e824();
  if (((cVar1 != '\0') && (0 < *(int *)(param_1 + 0x1a8))) &&
     (**(longlong **)(param_1 + 0x1a0) != 0)) {
    uVar2 = FUN_14097ea48(**(longlong **)(param_1 + 0x1a0),param_2,param_1,0xffffffff);
    return uVar2;
  }
  return 0;
}



// FUNCTION 141813bde FUN_141813bde body=590 status=ok
// SIG undefined FUN_141813bde(void)

ulonglong FUN_141813bde(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  byte bVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  puVar9 = *(undefined8 **)(param_1 + 0x118);
  if (*(undefined8 **)(param_1 + 0x118) == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)(param_1 + 0xd8);
  }
  iVar2 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar2 == 0) {
    uVar11 = 1;
    uVar10 = 0;
LAB_141813cb3:
    uVar12 = 0;
    if (uVar10 != 0) {
      uVar12 = uVar11;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x78) != '\0') {
      uVar10 = uVar12;
    }
  }
  else {
    uVar11 = 1;
    lVar13 = 0;
    bVar8 = 0;
    uVar10 = 0;
    do {
      plVar3 = *(longlong **)((longlong)puVar9 + lVar13);
      uVar6 = FUN_1400cd33c(plVar3);
      if (*(code **)(*plVar3 + 0x28) == FUN_1400d388e) {
        cVar5 = FUN_1400d388e(plVar3);
      }
      else {
        cVar5 = (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      if (cVar5 != '\0') {
        lVar4 = plVar3[9];
        if ((char)uVar6 == '\x01') {
          if (*(char *)(lVar4 + 0x79) != '\0') {
            uVar10 = 1;
          }
        }
        else {
          if (*(char *)(lVar4 + 0x7c) != '\0') {
            uVar11 = 0;
          }
          if ((char)uVar6 != '\0') {
            bVar8 = bVar8 | *(byte *)(lVar4 + 0x7b);
          }
        }
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar2 * 8 != lVar13);
    if ((bVar8 & 1) == 0) goto LAB_141813cb3;
    uVar10 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),2);
  }
  *(char *)(param_1 + 0xb5) = (char)uVar10;
  if (0 < (longlong)*(int *)(param_1 + 0x120)) {
    if ((char)uVar10 == '\x02') {
      lVar13 = 0x72;
    }
    else {
      if (((uint)uVar10 & 0xff) != 1) goto LAB_141813ce4;
      lVar13 = 0x71;
    }
    cVar5 = *(char *)(*(longlong *)(param_1 + 0x48) + lVar13);
    if (cVar5 == '\0') {
      puVar9 = (undefined8 *)(param_1 + 0xd8);
      if (*(undefined8 **)(param_1 + 0x118) != (undefined8 *)0x0) {
        puVar9 = *(undefined8 **)(param_1 + 0x118);
      }
      puVar1 = puVar9 + *(int *)(param_1 + 0x120);
      do {
        while( true ) {
          plVar3 = (longlong *)*puVar9;
          cVar5 = (**(code **)(*plVar3 + 0x28))(plVar3);
          if (cVar5 != '\0') break;
          puVar9 = puVar9 + 1;
          if (puVar9 == puVar1) {
            return uVar10;
          }
        }
        cVar5 = *(char *)(param_1 + 0xb5);
        if ((cVar5 == '\x02') && (*(char *)(*(longlong *)(param_1 + 0x48) + 0x73) != '\0')) {
          cVar5 = '\x01';
        }
        cVar5 = (**(code **)(*plVar3 + 0x118))(plVar3,param_2,cVar5);
        puVar9 = puVar9 + 1;
      } while (puVar9 != puVar1 && cVar5 == '\0');
      return uVar10;
    }
    if (cVar5 != '\x01') {
      return uVar10;
    }
  }
LAB_141813ce4:
  uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
  if ((0 < *(int *)(param_1 + 0x1a8)) && (**(longlong **)(param_1 + 0x1a0) != 0)) {
    uVar7 = FUN_1400cd33c(**(longlong **)(param_1 + 0x1a0),param_2);
    uVar10 = (ulonglong)uVar7;
  }
  *(char *)(param_1 + 0xb5) = (char)uVar10;
  return uVar10;
}



// FUNCTION 141813e2c FUN_141813e2c body=59 status=ok
// SIG undefined FUN_141813e2c(void)

void FUN_141813e2c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x265) = 0;
  *(undefined1 *)(param_1 + 0x267) = 0;
  FUN_140872c8a(param_1 + 0x130);
  FUN_1409e0f3c(param_1);
  return;
}



// FUNCTION 141813e68 FUN_141813e68 body=77 status=ok
// SIG undefined FUN_141813e68(void)

undefined8 FUN_141813e68(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14097e824();
  if (((cVar1 != '\0') && (0 < *(int *)(param_1 + 0x1a8))) &&
     (**(longlong **)(param_1 + 0x1a0) != 0)) {
    uVar2 = FUN_14097ea48(**(longlong **)(param_1 + 0x1a0),param_2,param_1,0xffffffff);
    return uVar2;
  }
  return 0;
}



// FUNCTION 141813eb6 FUN_141813eb6 body=590 status=ok
// SIG undefined FUN_141813eb6(void)

ulonglong FUN_141813eb6(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  byte bVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  puVar9 = *(undefined8 **)(param_1 + 0x118);
  if (*(undefined8 **)(param_1 + 0x118) == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)(param_1 + 0xd8);
  }
  iVar2 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar2 == 0) {
    uVar11 = 1;
    uVar10 = 0;
LAB_141813f8b:
    uVar12 = 0;
    if (uVar10 != 0) {
      uVar12 = uVar11;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x78) != '\0') {
      uVar10 = uVar12;
    }
  }
  else {
    uVar11 = 1;
    lVar13 = 0;
    bVar8 = 0;
    uVar10 = 0;
    do {
      plVar3 = *(longlong **)((longlong)puVar9 + lVar13);
      uVar6 = FUN_1400cd33c(plVar3);
      if (*(code **)(*plVar3 + 0x28) == FUN_1400d388e) {
        cVar5 = FUN_1400d388e(plVar3);
      }
      else {
        cVar5 = (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      if (cVar5 != '\0') {
        lVar4 = plVar3[9];
        if ((char)uVar6 == '\x01') {
          if (*(char *)(lVar4 + 0x79) != '\0') {
            uVar10 = 1;
          }
        }
        else {
          if (*(char *)(lVar4 + 0x7c) != '\0') {
            uVar11 = 0;
          }
          if ((char)uVar6 != '\0') {
            bVar8 = bVar8 | *(byte *)(lVar4 + 0x7b);
          }
        }
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar2 * 8 != lVar13);
    if ((bVar8 & 1) == 0) goto LAB_141813f8b;
    uVar10 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),2);
  }
  *(char *)(param_1 + 0xb5) = (char)uVar10;
  if (0 < (longlong)*(int *)(param_1 + 0x120)) {
    if ((char)uVar10 == '\x02') {
      lVar13 = 0x72;
    }
    else {
      if (((uint)uVar10 & 0xff) != 1) goto LAB_141813fbc;
      lVar13 = 0x71;
    }
    cVar5 = *(char *)(*(longlong *)(param_1 + 0x48) + lVar13);
    if (cVar5 == '\0') {
      puVar9 = (undefined8 *)(param_1 + 0xd8);
      if (*(undefined8 **)(param_1 + 0x118) != (undefined8 *)0x0) {
        puVar9 = *(undefined8 **)(param_1 + 0x118);
      }
      puVar1 = puVar9 + *(int *)(param_1 + 0x120);
      do {
        while( true ) {
          plVar3 = (longlong *)*puVar9;
          cVar5 = (**(code **)(*plVar3 + 0x28))(plVar3);
          if (cVar5 != '\0') break;
          puVar9 = puVar9 + 1;
          if (puVar9 == puVar1) {
            return uVar10;
          }
        }
        cVar5 = *(char *)(param_1 + 0xb5);
        if ((cVar5 == '\x02') && (*(char *)(*(longlong *)(param_1 + 0x48) + 0x73) != '\0')) {
          cVar5 = '\x01';
        }
        cVar5 = (**(code **)(*plVar3 + 0x118))(plVar3,param_2,cVar5);
        puVar9 = puVar9 + 1;
      } while (puVar9 != puVar1 && cVar5 == '\0');
      return uVar10;
    }
    if (cVar5 != '\x01') {
      return uVar10;
    }
  }
LAB_141813fbc:
  uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
  if ((0 < *(int *)(param_1 + 0x1a8)) && (**(longlong **)(param_1 + 0x1a0) != 0)) {
    uVar7 = FUN_1400cd33c(**(longlong **)(param_1 + 0x1a0),param_2);
    uVar10 = (ulonglong)uVar7;
  }
  *(char *)(param_1 + 0xb5) = (char)uVar10;
  return uVar10;
}



// FUNCTION 141814104 FUN_141814104 body=115 status=ok
// SIG undefined FUN_141814104(void)

undefined8 FUN_141814104(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if ((0 < *(int *)(param_1 + 0x1a8)) && (lVar1 = **(longlong **)(param_1 + 0x1a0), lVar1 != 0)) {
    cVar2 = FUN_14065d9ca(lVar1,param_2);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = *(char *)(lVar1 + 0xb5);
    if ((cVar2 == '\x02') && (*(char *)(*(longlong *)(lVar1 + 0x48) + 0x73) != '\0')) {
      cVar2 = '\x01';
    }
    *(char *)(param_1 + 0xb5) = cVar2;
  }
  uVar3 = FUN_14065d88c(param_1,param_2);
  return uVar3;
}



// FUNCTION 141814178 FUN_141814178 body=138 status=ok
// SIG undefined FUN_141814178(void)

void FUN_141814178(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined2 *)(param_1 + 0xb4) = 0;
  lVar2 = param_1 + 0xd8;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x118);
  }
  iVar1 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 0xd0))();
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if ((0 < *(int *)(param_1 + 0x1a8)) &&
     ((longlong *)**(longlong **)(param_1 + 0x1a0) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001418141d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)**(longlong **)(param_1 + 0x1a0) + 0xd0))();
    return;
  }
  return;
}



// FUNCTION 141814202 FUN_141814202 body=48 status=ok
// SIG undefined FUN_141814202(void)

void FUN_141814202(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ac8c22c);
  FUN_1448284b2(param_1,param_2);
  return;
}



// FUNCTION 141814232 FUN_141814232 body=79 status=ok
// SIG undefined FUN_141814232(void)

void FUN_141814232(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144842962();
  local_28 = 0xf0c69bab;
  uStack_24 = 0x390c49d7;
  uStack_20 = 0xbda5736b;
  uStack_1c = 0xa0e16024;
  FUN_1448a256a(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141814294 FUN_141814294 body=54 status=ok
// SIG undefined FUN_141814294(void)

void FUN_141814294(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x80,param_2);
  return;
}



// FUNCTION 1418142ca FUN_1418142ca body=391 status=ok
// SIG undefined FUN_1418142ca(void)

void FUN_1418142ca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  code *pcVar8;
  undefined8 *_Dst;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  lVar9 = *(longlong *)(param_1 + 0x40);
  if (*(char *)(lVar9 + 0xc30) == '\x01') {
    plVar11 = (longlong *)(lVar9 + 0xc38);
  }
  else {
    plVar11 = (longlong *)(lVar9 + 0xc38);
    if (0.5 <= *(float *)(lVar9 + 0x160) - *(float *)(lVar9 + 0xc34)) {
      plVar11 = &DAT_14cb24160;
    }
  }
  if ((char)plVar11[4] != '\0') {
    if (((char)plVar11[4] == '\t') &&
       (lVar9 = *(longlong *)(param_1 + 0x48), *(char *)(lVar9 + 0x40) != '\0')) {
      iVar7 = *(int *)(*plVar11 + 8);
      plVar10 = *(longlong **)(*plVar11 + 0x48);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
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
      }
      cVar5 = *(char *)(lVar9 + 0x40);
      if (cVar5 == '\x01') {
        if (iVar7 != 1) {
          return;
        }
      }
      else if ((cVar5 == '\x02') && (iVar7 - 4U < 0xfffffffe)) {
        return;
      }
    }
    iVar7 = *(int *)(param_2 + 0x388);
    *(uint *)(param_2 + 0x388) = iVar7 + 1U;
    if (*(uint *)(param_2 + 0x38c) < iVar7 + 1U) {
      FUN_14052e0a0(param_2,iVar7);
    }
    lVar9 = *(longlong *)(param_2 + 0x380);
    if (*(longlong *)(param_2 + 0x380) == 0) {
      lVar9 = param_2;
    }
    puVar3 = (undefined8 *)(lVar9 + (longlong)iVar7 * 0x38);
    bVar4 = *(byte *)(plVar11 + 4);
    uVar6 = *(ushort *)(plVar11 + 3);
    *(ushort *)(lVar9 + 0x18 + (longlong)iVar7 * 0x38) = uVar6;
    _Dst = puVar3;
    plVar10 = plVar11;
    if (0x18 < uVar6) {
      _Dst = (undefined8 *)FUN_14001cc68(uVar6,0);
      *puVar3 = _Dst;
      plVar10 = (longlong *)*plVar11;
    }
    pcVar8 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar4 * 0x120));
    if (pcVar8 == (code *)0x0) {
      memcpy(_Dst,plVar10,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar4 * 0x120)));
    }
    else {
      (*pcVar8)();
    }
    *(char *)(puVar3 + 4) = (char)plVar11[4];
    puVar3[5] = 0;
    puVar3[6] = 0;
    return;
  }
  return;
}


