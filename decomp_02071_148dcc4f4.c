// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148dcc4f4 FUN_148dcc4f4 body=148 status=ok
// SIG undefined FUN_148dcc4f4(void)

void FUN_148dcc4f4(undefined8 param_1,char param_2)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1458e81c2(param_1,&local_30);
  if (*(char *)(local_30 + 0x180) != param_2) {
    *(char *)(local_30 + 0x180) = param_2;
    if (param_2 == '\0') {
      FUN_148dcc400();
    }
    else {
      FUN_148dcc354();
    }
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcc59a FUN_148dcc59a body=122 status=ok
// SIG undefined FUN_148dcc59a(void)

void FUN_148dcc59a(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1458e81c2(param_1,&local_28);
  FUN_148dcc230(local_28,param_2);
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
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



// FUNCTION 148dcc626 FUN_148dcc626 body=130 status=ok
// SIG undefined FUN_148dcc626(void)

bool FUN_148dcc626(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  lVar2 = DAT_14cbd2940;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (lVar1 == DAT_14cbd2940) {
    local_38 = *param_3;
    local_30 = param_3[1];
    FUN_140805e68(param_1 + 0x250,&local_38,1);
    FUN_144a7b126(param_1 + 0x250,&local_21,1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1 == lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcc6aa FUN_148dcc6aa body=53 status=ok
// SIG undefined FUN_148dcc6aa(void)

void FUN_148dcc6aa(longlong param_1)

{
  if (((*(byte *)(param_1 + 0x30) & 2) != 0) && ((*(byte *)(param_1 + 0x260) & 1) == 0)) {
    *(byte *)(param_1 + 0x260) = *(byte *)(param_1 + 0x260) | 1;
    FUN_148dcc82c(param_1);
  }
  FUN_145d4ac1a(param_1);
  return;
}



// FUNCTION 148dcc6e0 FUN_148dcc6e0 body=58 status=ok
// SIG undefined FUN_148dcc6e0(void)

void FUN_148dcc6e0(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x260) & 1) == 0) {
    return;
  }
  *(byte *)(param_1 + 0x260) = *(byte *)(param_1 + 0x260) & 0xfe;
  FUN_148dcc91e();
  FUN_148dcc964(param_1);
  FUN_148dcc9ac(param_1);
  return;
}



// FUNCTION 148dcc71a FUN_148dcc71a body=38 status=ok
// SIG undefined FUN_148dcc71a(void)

void FUN_148dcc71a(longlong param_1)

{
  FUN_145e1cabc();
  if ((*(byte *)(param_1 + 0x30) & 2) == 0) {
    return;
  }
  FUN_148dcc6e0(param_1);
  return;
}



// FUNCTION 148dcc740 FUN_148dcc740 body=235 status=ok
// SIG undefined FUN_148dcc740(void)

void FUN_148dcc740(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar4 = FUN_14479d2ce(param_1 + 0x80);
  if (lVar4 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x170);
  lVar6 = *(longlong *)(lVar1 + 0x9e8);
  if (lVar6 == 0) {
    uVar5 = FUN_14110242a();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar1 + 0x9e8) = lVar6;
  }
  lVar7 = *(longlong *)(lVar1 + 0x9f0);
  if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*(longlong *)(lVar1 + 0x9e0) != 0)) {
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar7 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar7 = FUN_144aff482(uVar5,(longlong *)(lVar1 + 0x9e0));
    }
    *(longlong *)(lVar1 + 0x9f0) = lVar7;
  }
  cVar3 = FUN_14109961a(lVar4 + 0x48,lVar7,param_2,0);
  if (cVar3 == '\0') {
    return;
  }
  FUN_1447f69b6(lVar4 + 0x1f0);
  return;
}



// FUNCTION 148dcc82c FUN_148dcc82c body=240 status=ok
// SIG undefined FUN_148dcc82c(void)

void FUN_148dcc82c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined1 local_a0 [16];
  undefined2 local_90 [2];
  undefined4 local_8c;
  code *local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = FUN_148dcd55e();
  if (lVar1 != 0) {
    local_88 = FUN_148dcd75c;
    local_80 = 0;
    FUN_148dcd590(local_a0,param_1,&local_88);
    local_88 = (code *)0x0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,local_a0);
    local_48 = 1;
    local_a8 = local_90;
    local_90[0] = 1;
    local_8c = 0x40000000;
    FUN_1406f4044(lVar1,param_1 + 0x180,&local_88,0x40000000);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    FUN_1449db362(local_a0);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcc91e FUN_148dcc91e body=70 status=ok
// SIG undefined FUN_148dcc91e(void)

void FUN_148dcc91e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_148dcd55e();
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x180);
    lVar2 = FUN_144a61814(lVar1,puVar3);
    if (lVar2 != 0) {
      FUN_1405a424c(lVar1,*puVar3);
    }
    *puVar3 = 0;
  }
  return;
}



// FUNCTION 148dcc964 FUN_148dcc964 body=71 status=ok
// SIG undefined FUN_148dcc964(void)

void FUN_148dcc964(longlong param_1)

{
  FUN_148bad06b(*(undefined8 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1e0));
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if (*(int *)(param_1 + 0x1e4) == 0) {
    return;
  }
  FUN_148dd5746(param_1 + 0x1d8);
  return;
}



// FUNCTION 148dcc9ac FUN_148dcc9ac body=109 status=ok
// SIG undefined FUN_148dcc9ac(void)

void FUN_148dcc9ac(longlong param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1f8);
  if (0 < iVar2) {
    uVar1 = iVar2 + 1;
    do {
      FUN_148dce39e(param_1,uVar1 - 2,1);
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
    iVar2 = *(int *)(param_1 + 0x1f8);
  }
  FUN_148bad2c9(*(undefined8 *)(param_1 + 0x1f0),iVar2);
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (*(int *)(param_1 + 0x1fc) == 0) {
    return;
  }
  FUN_148dd5716(param_1 + 0x1f0);
  return;
}



// FUNCTION 148dcca1a FUN_148dcca1a body=134 status=ok
// SIG undefined FUN_148dcca1a(void)

void FUN_148dcca1a(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((*(byte *)(param_1 + 0x260) & 2) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x260) = *(byte *)(param_1 + 0x260) & 0xfd | param_2 * '\x02';
    if ((longlong)*(int *)(param_1 + 0x1f8) != 0) {
      lVar3 = (longlong)*(int *)(param_1 + 0x1f8) * 0x38;
      lVar4 = *(longlong *)(param_1 + 0x1f0) + 8;
      do {
        cVar1 = FUN_144729dda(lVar4);
        if (cVar1 != '\0') {
          lVar2 = FUN_14479d2ce(lVar4);
          if (*(longlong *)(lVar2 + 0x9cd8) != 0) {
            FUN_148baa394(*(longlong *)(lVar2 + 0x9cd8),(*(byte *)(param_1 + 0x260) & 2) >> 1);
          }
        }
        lVar4 = lVar4 + 0x38;
        lVar3 = lVar3 + -0x38;
      } while (lVar3 != 0);
    }
  }
  return;
}



// FUNCTION 148dccaa0 FUN_148dccaa0 body=241 status=ok
// SIG undefined FUN_148dccaa0(void)

void FUN_148dccaa0(longlong param_1,int *param_2,longlong *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar5 = '\x01';
  if (*param_2 != DAT_14cbd2980) {
    cVar5 = (*param_2 == DAT_14cbd29a8) * '\x02';
  }
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0x90) * 0x38;
    lVar6 = *(longlong *)(param_1 + 0x88) + 8;
    do {
      cVar2 = FUN_144729dda(lVar6);
      if ((cVar2 != '\0') && (*(char *)(lVar6 + -8) == cVar5)) {
        local_48 = FUN_14479d2ce(lVar6);
        pcVar1 = (code *)*param_3;
        plVar4 = (longlong *)param_3[2];
        if ((longlong *)param_3[2] == (longlong *)0x0) {
          plVar4 = param_3 + 4;
        }
        uVar3 = (**(code **)(*plVar4 + 8))();
        (*pcVar1)(uVar3,&local_48);
      }
      lVar6 = lVar6 + 0x38;
      lVar7 = lVar7 + -0x38;
    } while (lVar7 != 0);
  }
  if (*param_3 != 0) {
    plVar4 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dccb92 FUN_148dccb92 body=79 status=ok
// SIG undefined FUN_148dccb92(void)

bool FUN_148dccb92(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((longlong)*(int *)(param_1 + 0x90) == 0) {
    bVar4 = false;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x88);
    lVar2 = (longlong)*(int *)(param_1 + 0x90) * 0x38;
    do {
      cVar1 = FUN_148dd3a4a(lVar3 + 8,param_3);
      if (cVar1 != '\0') goto LAB_148dccbcf;
      lVar3 = lVar3 + 0x38;
      lVar2 = lVar2 + -0x38;
    } while (lVar2 != 0);
    lVar3 = 0;
LAB_148dccbcf:
    bVar4 = lVar3 != 0;
  }
  return bVar4;
}



// FUNCTION 148dccbe2 FUN_148dccbe2 body=65 status=ok
// SIG undefined FUN_148dccbe2(void)

void FUN_148dccbe2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x1f8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1f0);
    lVar1 = (longlong)*(int *)(param_1 + 0x1f8) * 0x38;
    do {
      FUN_148dccc24(param_1,lVar2,1);
      lVar2 = lVar2 + 0x38;
      lVar1 = lVar1 + -0x38;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 148dccc24 FUN_148dccc24 body=614 status=ok
// SIG undefined FUN_148dccc24(void)

void FUN_148dccc24(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_54;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = FUN_14479d2ce(param_2 + 8);
  if (((lVar3 == 0) || ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0)) ||
     (lVar2 = *(longlong *)(lVar3 + 0x9cd8), lVar2 == 0)) goto LAB_148dccdc2;
  if (*(int *)(param_1 + 0xb8) < 1) {
LAB_148dcccd4:
    local_60 = *(undefined4 *)(lVar2 + 0xc0);
    local_68 = *(longlong *)(lVar2 + 0xb8);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x58);
    uVar1 = **(uint **)(param_1 + 0xb0);
    if ((((int)uVar1 < 0 || lVar5 == 0) || (*(int *)(lVar5 + 200) <= (int)uVar1)) ||
       (lVar5 = (ulonglong)uVar1 * 0x40 + *(longlong *)(lVar5 + 0xc0), lVar5 == 0))
    goto LAB_148dcccd4;
    local_68 = *(longlong *)(lVar5 + 4);
    local_60 = 0xffffffff;
  }
  if (*(int *)(param_1 + 200) < 1) {
LAB_148dccd40:
    local_70 = *(undefined4 *)(lVar2 + 0xcc);
    lVar5 = *(longlong *)(lVar2 + 0xc4);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x58);
    uVar1 = **(uint **)(param_1 + 0xc0);
    if ((((int)uVar1 < 0 || lVar5 == 0) || (*(int *)(lVar5 + 200) <= (int)uVar1)) ||
       (lVar5 = (ulonglong)uVar1 * 0x40 + *(longlong *)(lVar5 + 0xc0), lVar5 == 0))
    goto LAB_148dccd40;
    lVar5 = *(longlong *)(lVar5 + 4);
    local_70 = 0xffffffff;
  }
  plVar6 = (longlong *)(lVar3 + 0x10a8);
  local_78 = lVar5;
  uVar4 = (**(code **)(*(longlong *)(lVar3 + 0x10a8) + 0x18))(plVar6);
  FUN_140c823b2(uVar4,local_88,lVar2 + 0xa0);
  uVar4 = (**(code **)(*(longlong *)(lVar3 + 0x10a8) + 0x18))(plVar6);
  FUN_140c823b2(uVar4,local_98,lVar2 + 0xac);
  if ((local_68 != local_88[0]) || (lVar5 != local_98[0])) {
    if (param_3 == '\0') {
      if (local_68 != local_88[0]) {
        uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
        local_4c = 0;
        FUN_140f8b8f2(uVar4,lVar2 + 0xa0,&local_68);
      }
      if (lVar5 != local_98[0]) {
        uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
        local_54 = 0;
        FUN_140f8b8f2(uVar4,lVar2 + 0xac,&local_78);
      }
    }
    else {
      *(undefined4 *)(lVar2 + 0xd8) = local_60;
      *(longlong *)(lVar2 + 0xd0) = local_68;
      *(undefined1 *)(lVar2 + 0xdc) = 1;
      *(longlong *)(lVar2 + 0xe0) = local_78;
      *(undefined4 *)(lVar2 + 0xe8) = local_70;
      *(undefined1 *)(lVar2 + 0xec) = 1;
      FUN_148baa278(lVar2);
    }
  }
LAB_148dccdc2:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcce8c FUN_148dcce8c body=244 status=ok
// SIG undefined FUN_148dcce8c(void)

ulonglong FUN_148dcce8c(longlong param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  undefined7 uVar5;
  ulonglong uVar4;
  
  uVar5 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if (*param_2 == DAT_14cbd2980) {
    plVar3 = *(longlong **)(param_1 + 0xc0);
    if ((*(longlong *)(param_1 + 0xb8) != 0) && (plVar3 == (longlong *)0x0)) {
      plVar3 = (longlong *)0x0;
    }
    *(undefined8 *)(param_1 + 0xb8) = *param_3;
    plVar2 = (longlong *)param_3[1];
    uVar4 = CONCAT71(uVar5,1);
    if (plVar3 != plVar2) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar3 = *(longlong **)(param_1 + 0xc0);
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0xc0) = plVar2;
    }
  }
  else if (*param_2 == DAT_14cbd29a8) {
    plVar3 = *(longlong **)(param_1 + 0xd0);
    if ((*(longlong *)(param_1 + 200) != 0) && (plVar3 == (longlong *)0x0)) {
      plVar3 = (longlong *)0x0;
    }
    *(undefined8 *)(param_1 + 200) = *param_3;
    plVar2 = (longlong *)param_3[1];
    uVar4 = CONCAT71(uVar5,1);
    if (plVar3 != plVar2) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar3 = *(longlong **)(param_1 + 0xd0);
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0xd0) = plVar2;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 148dccf80 FUN_148dccf80 body=238 status=ok
// SIG undefined FUN_148dccf80(void)

ulonglong FUN_148dccf80(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined7 uVar8;
  ulonglong uVar7;
  bool bVar9;
  
  uVar8 = (undefined7)((ulonglong)param_1 >> 8);
  if (*param_2 == DAT_14cbd2980) {
    puVar6 = (undefined8 *)(param_1 + 0xb8);
    plVar5 = *(longlong **)(param_1 + 0xc0);
    if (plVar5 == (longlong *)0x0) {
LAB_148dcd01e:
      *puVar6 = 0;
      puVar6[1] = 0;
      uVar7 = CONCAT71(uVar8,1);
      goto LAB_148dcd014;
    }
    iVar4 = (int)plVar5[1];
    do {
      if (iVar4 == 0) goto LAB_148dccfbe;
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(plVar5 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar9);
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
LAB_148dccfbe:
    plVar5 = *(longlong **)(param_1 + 0xc0);
  }
  else {
    if (*param_2 != DAT_14cbd29a8) {
      uVar7 = 0;
      goto LAB_148dcd014;
    }
    puVar6 = (undefined8 *)(param_1 + 200);
    plVar5 = *(longlong **)(param_1 + 0xd0);
    if (plVar5 == (longlong *)0x0) goto LAB_148dcd01e;
    iVar4 = (int)plVar5[1];
    do {
      if (iVar4 == 0) goto LAB_148dccff9;
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(plVar5 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar9);
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
LAB_148dccff9:
    plVar5 = *(longlong **)(param_1 + 0xd0);
  }
  *puVar6 = 0;
  puVar6[1] = 0;
  uVar7 = CONCAT71(uVar8,1);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
LAB_148dcd014:
  return uVar7 & 0xffffffff;
}



// FUNCTION 148dcd06e FUN_148dcd06e body=294 status=ok
// SIG undefined FUN_148dcd06e(void)

undefined4
FUN_148dcd06e(longlong param_1,undefined1 param_2,undefined1 param_3,undefined4 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  
  cVar5 = FUN_1442166cc();
  if (cVar5 == '\0') {
    uVar7 = 0;
    goto LAB_148dcd09b;
  }
  puVar8 = (undefined1 *)FUN_148dcd920(param_1 + 0x1d8);
  *puVar8 = param_2;
  iVar2 = *(int *)(param_1 + 0x1e8);
  *(int *)(param_1 + 0x1e8) = iVar2 + 1;
  *(int *)(puVar8 + 4) = iVar2;
  puVar8[8] = param_3;
  FUN_148bad246(puVar8 + 0x60,param_6);
  puVar1 = (undefined4 *)(puVar8 + 0x18);
  if (puVar1 == param_4) {
    FUN_14485c47a(puVar8 + 0xc,param_5);
    puVar8[1] = 1;
    if (*(char *)(param_4 + 6) != '\0') {
LAB_148dcd173:
      puVar8[1] = 2;
    }
  }
  else {
    if (*(char *)(param_4 + 6) == '\x01') {
      *(undefined8 *)(puVar8 + 0x28) = *(undefined8 *)(param_4 + 4);
      uVar7 = param_4[1];
      uVar3 = param_4[2];
      uVar4 = param_4[3];
      *puVar1 = *param_4;
      *(undefined4 *)(puVar8 + 0x1c) = uVar7;
      *(undefined4 *)(puVar8 + 0x20) = uVar3;
      *(undefined4 *)(puVar8 + 0x24) = uVar4;
      uVar6 = 1;
LAB_148dcd13c:
      puVar8[0x30] = uVar6;
    }
    else if (puVar8[0x30] == '\x01') {
      uVar6 = 0;
      goto LAB_148dcd13c;
    }
    FUN_14485c47a(puVar8 + 0xc,param_5);
    puVar8[1] = 1;
    if (*(char *)(param_4 + 6) != '\0') {
      *(undefined8 *)(puVar8 + 0x28) = *(undefined8 *)(param_4 + 4);
      uVar7 = param_4[1];
      uVar3 = param_4[2];
      uVar4 = param_4[3];
      *puVar1 = *param_4;
      *(undefined4 *)(puVar8 + 0x1c) = uVar7;
      *(undefined4 *)(puVar8 + 0x20) = uVar3;
      *(undefined4 *)(puVar8 + 0x24) = uVar4;
      puVar8[0x30] = 1;
      goto LAB_148dcd173;
    }
  }
  uVar7 = FUN_148dcd95c(param_1,*(undefined4 *)(puVar8 + 4));
LAB_148dcd09b:
  if (*(char *)(param_4 + 6) == '\x01') {
    *(undefined1 *)(param_4 + 6) = 0;
  }
  FUN_1449db362(param_6);
  return uVar7;
}



// FUNCTION 148dcd194 FUN_148dcd194 body=181 status=ok
// SIG undefined FUN_148dcd194(void)

ulonglong FUN_148dcd194(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined7 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = 0;
  if ((longlong)*(int *)(param_1 + 0x1f8) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x1f8) * -0x38;
    lVar4 = 0;
    lVar7 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x1f0) + lVar4) == '\x01') {
        lVar7 = *(longlong *)(param_1 + 0x1f0) - lVar7;
        if (lVar7 != 0) {
          lVar7 = FUN_14479d2ce(lVar7 + 8);
          lVar3 = 0;
          if (lVar7 != 0) {
            local_28 = *(undefined8 *)(param_2 + 4);
            local_38 = *param_2;
            uStack_34 = param_2[1];
            uStack_30 = param_2[2];
            uStack_2c = param_2[3];
            cVar2 = FUN_148dcd24a(lVar7);
            uVar6 = (undefined7)((ulonglong)param_2 >> 8);
            bVar5 = 1;
            if (cVar2 == '\0') {
              bVar1 = 0;
            }
            else {
              FUN_148dcca1a(param_1,1);
              bVar1 = 1;
            }
            goto LAB_148dcd1e0;
          }
        }
        break;
      }
      lVar7 = lVar7 + -0x38;
      lVar4 = lVar4 + 0x38;
    } while (lVar3 - lVar7 != 0);
  }
  bVar1 = (byte)lVar3;
  bVar5 = 0;
  uVar6 = 0;
LAB_148dcd1e0:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71(uVar6,bVar5 & bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcd24a FUN_148dcd24a body=512 status=ok
// SIG undefined FUN_148dcd24a(void)

bool FUN_148dcd24a(longlong *param_1,double *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  double dVar10;
  double *pdVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  double local_50;
  longlong *plVar14;
  
  dVar10 = (double)(DAT_14c707940 ^ (ulonglong)auStack_b8);
  plVar1 = (longlong *)param_1[0x139b];
  local_50 = dVar10;
  if (plVar1 == (longlong *)0x0) goto LAB_148dcd3a5;
  plVar14 = param_1;
  if ((*param_2 != 0.0) || (NAN(*param_2))) {
LAB_148dcd2c1:
    uVar12 = SUB84(plVar14,0);
    lVar2 = param_1[0x39];
    if (lVar2 == 0) {
      local_58 = DAT_14c846508;
      local_68 = (undefined4)DAT_14c8464f8;
      uStack_64 = DAT_14c8464f8._4_4_;
      uStack_60 = (undefined4)DAT_14c846500;
      uStack_5c = DAT_14c846500._4_4_;
    }
    else {
      dVar5 = *(double *)(lVar2 + 0x240);
      dVar6 = *(double *)(lVar2 + 0x248);
      dVar7 = *(double *)(lVar2 + 0x250);
      dVar8 = *(double *)(lVar2 + 600);
      pdVar11 = *(double **)(lVar2 + 0x228);
      local_88 = dVar5;
      uStack_80 = dVar6;
      local_78 = dVar7;
      dStack_70 = dVar8;
      if (pdVar11 == (double *)0x0) {
        uVar12 = 0x40;
        pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
        dVar10 = DAT_14c8463d8;
        *pdVar11 = DAT_14c8463d0;
        pdVar11[1] = dVar10;
        dVar10 = DAT_14c8463e8;
        pdVar11[2] = DAT_14c8463e0;
        pdVar11[3] = dVar10;
        dVar10 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar11[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar11[5] = dVar10;
        dVar10 = DAT_14c846508;
        pdVar11[6] = DAT_14c846508;
        *(double **)(lVar2 + 0x228) = pdVar11;
      }
      auVar3._8_4_ = (int)-(ulonglong)(dVar6 != pdVar11[1]);
      auVar3._0_8_ = -(ulonglong)(dVar5 != *pdVar11);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar11[1]) >> 0x20);
      iVar9 = movmskpd(SUB84(dVar10,0),auVar3);
      auVar4._8_4_ = (int)-(ulonglong)(dVar8 != pdVar11[3]);
      auVar4._0_8_ = -(ulonglong)(dVar7 != pdVar11[2]);
      auVar4._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar11[3]) >> 0x20);
      uVar13 = movmskpd(uVar12,auVar4);
      if ((uVar13 & 0x3fffffff) != 0 || iVar9 != 0) {
        pdVar11[2] = local_78;
        pdVar11[3] = dStack_70;
        *(undefined4 *)pdVar11 = (undefined4)local_88;
        *(undefined4 *)((longlong)pdVar11 + 4) = local_88._4_4_;
        *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_80._4_4_;
        FUN_1448052ee(&local_88,&local_68);
        pdVar11[6] = local_58;
        pdVar11[4] = (double)CONCAT44(uStack_64,local_68);
        pdVar11[5] = (double)CONCAT44(uStack_5c,uStack_60);
      }
      local_58 = pdVar11[6];
      local_68 = *(undefined4 *)(pdVar11 + 4);
      uStack_64 = *(undefined4 *)((longlong)pdVar11 + 0x24);
      uStack_60 = *(undefined4 *)(pdVar11 + 5);
      uStack_5c = *(undefined4 *)((longlong)pdVar11 + 0x2c);
    }
    local_98 = 0;
    (**(code **)(*param_1 + 0x4d0))(param_1,param_2,&local_68,0);
    plVar14 = (longlong *)param_1[0x139b];
    if (plVar14 != (longlong *)0x0) goto LAB_148dcd3f7;
  }
  else {
    if ((param_2[1] != 0.0) || (NAN(param_2[1]))) goto LAB_148dcd2c1;
    plVar14 = plVar1;
    if ((param_2[2] != 0.0) || (NAN(param_2[2]))) goto LAB_148dcd2c1;
LAB_148dcd3f7:
    FUN_148baa394(plVar14,1);
  }
  if ((char)param_1[0x139a] == '\0') {
    *(undefined1 *)(param_1 + 0x139a) = 1;
    *(byte *)(param_1 + 0x139f) = *(byte *)(param_1 + 0xc) >> 7;
  }
LAB_148dcd3a5:
  if (((ulonglong)local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return plVar1 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcd44c FUN_148dcd44c body=193 status=ok
// SIG undefined FUN_148dcd44c(void)

void FUN_148dcd44c(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = (ulonglong)*(int *)(param_1 + 0x1e0);
  if (0 < (longlong)uVar4) {
    lVar5 = uVar4 * 0x70;
    do {
      lVar5 = lVar5 + -0x70;
      if (*(char *)(*(longlong *)(param_1 + 0x1d8) + lVar5) == '\x01') {
        FUN_148dcd50e((longlong *)(param_1 + 0x1d8));
      }
      bVar1 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar1);
  }
  if ((longlong)*(int *)(param_1 + 0x1f8) != 0) {
    lVar3 = 0;
    lVar5 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x1f0) + lVar3) == '\x01') {
        lVar5 = *(longlong *)(param_1 + 0x1f0) - lVar5;
        if (lVar5 == 0) {
          return;
        }
        plVar2 = (longlong *)FUN_14479d2ce(lVar5 + 8);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        if ((char)plVar2[0x139a] != '\0') {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000148dcd50a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x5c8))(plVar2,0,*(code **)(*plVar2 + 0x5c8));
        return;
      }
      lVar5 = lVar5 + -0x38;
      lVar3 = lVar3 + 0x38;
    } while ((longlong)*(int *)(param_1 + 0x1f8) * -0x38 - lVar5 != 0);
  }
  return;
}



// FUNCTION 148dcd50e FUN_148dcd50e body=79 status=ok
// SIG undefined FUN_148dcd50e(void)

void FUN_148dcd50e(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x70 + *param_1);
  FUN_148bad092(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x70),(longlong)(int)(~param_2 + iVar1) * 0x70);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_148dd3ac2(param_1);
  return;
}



// FUNCTION 148dcd55e FUN_148dcd55e body=50 status=ok
// SIG undefined FUN_148dcd55e(void)

undefined8 FUN_148dcd55e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x70);
  if (lVar1 != 0) {
    lVar1 = FUN_1447210f0(lVar1);
    if (lVar1 != 0) {
      uVar2 = FUN_144a88394(lVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 148dcd590 FUN_148dcd590 body=457 status=ok
// SIG undefined FUN_148dcd590(void)

longlong * FUN_148dcd590(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *(undefined4 *)(param_3 + 1);
  uVar5 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar6 = (undefined8 *)*param_1;
  FUN_141085fe4(param_2,&local_48);
  plVar3 = local_40;
  if (local_40 == (longlong *)0x0) {
    *puVar6 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar6[2] = lVar8;
    *puVar6 = &PTR_FUN_14b99a370;
    puVar6[3] = local_48;
    puVar6[4] = 0;
    puVar6[5] = uVar5;
    *(undefined4 *)(puVar6 + 6) = uVar4;
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    *puVar6 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar6[2] = lVar8;
    *puVar6 = &PTR_FUN_14b99a370;
    puVar6[3] = local_48;
    puVar6[4] = local_40;
    LOCK();
    *(int *)((longlong)local_40 + 0xc) = *(int *)((longlong)local_40 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar6 + 6) = uVar4;
    puVar6[5] = uVar5;
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
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
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcd75c FUN_148dcd75c body=139 status=ok
// SIG undefined FUN_148dcd75c(void)

void FUN_148dcd75c(longlong param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = *(byte *)(param_1 + 0x260);
  *(byte *)(param_1 + 0x260) = bVar1 | 4;
  local_19 = '\0';
  cVar2 = FUN_144216386();
  if (cVar2 == '\0') {
    uVar3 = 0;
    if (local_19 != '\0') {
      uVar3 = local_1a;
    }
    FUN_14619f31e(param_1,uVar3);
  }
  else {
    FUN_14421656c(param_1);
  }
  *(byte *)(param_1 + 0x260) = *(byte *)(param_1 + 0x260) & 0xfb | bVar1 & 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcd7e8 FUN_148dcd7e8 body=245 status=ok
// SIG undefined FUN_148dcd7e8(void)

int FUN_148dcd7e8(longlong param_1,char param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 ***pppuVar3;
  float fVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar2 = 1;
  if (param_2 != '\x01') {
    local_88[0] = 0;
    local_60 = 0;
    FUN_14575a19a(local_88,0);
    FUN_1448729ea(param_1 + 0x990,local_58,local_88);
    fVar4 = (float)FUN_144a7b41a(local_58,0x40000000);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar3 = local_58;
      if (0x18 < local_40) {
        pppuVar3 = (undefined8 ***)local_58[0];
      }
      (*pcVar1)(pppuVar3);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    iVar2 = (int)fVar4;
    FUN_144a5ac3a(local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcd8de FUN_148dcd8de body=65 status=ok
// SIG undefined FUN_148dcd8de(void)

ulonglong FUN_148dcd8de(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  cVar1 = FUN_14486ea84(param_1 + 400);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_140280ec4(param_1 + 400);
    uVar2 = FUN_144a87362(uVar2);
    uVar3 = FUN_141362ac2(uVar2,2);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// FUNCTION 148dcd920 FUN_148dcd920 body=59 status=ok
// SIG undefined FUN_148dcd920(void)

longlong FUN_148dcd920(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148dd3ef4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x70 + *param_1;
  FUN_148dd3eca(lVar2);
  return lVar2;
}



// FUNCTION 148dcd95c FUN_148dcd95c body=121 status=ok
// SIG undefined FUN_148dcd95c(void)

undefined8 FUN_148dcd95c(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x1e0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1d8);
    lVar2 = (longlong)*(int *)(param_1 + 0x1e0) * 0x70;
    do {
      if (*(int *)(lVar3 + 4) == param_2) {
        if (lVar3 == 0) {
          return 0;
        }
        if (*(char *)(lVar3 + 0x59) == '\0') {
          if (*(char *)(lVar3 + 1) == '\x01') {
            cVar1 = FUN_1442167b4(param_1);
          }
          else {
            if (*(char *)(lVar3 + 1) != '\x02') goto LAB_148dcd9c9;
            cVar1 = FUN_144216bb2(param_1);
          }
          if (cVar1 != '\0') {
            return 1;
          }
        }
LAB_148dcd9c9:
        FUN_148dcd9d6(param_1,param_2);
        return 0;
      }
      lVar3 = lVar3 + 0x70;
      lVar2 = lVar2 + -0x70;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 148dcd9d6 FUN_148dcd9d6 body=169 status=ok
// SIG undefined FUN_148dcd9d6(void)

void FUN_148dcd9d6(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar1 = *(int *)(param_1 + 0x1e0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1d8);
    lVar7 = 0;
    do {
      if (*(int *)(lVar2 + 4 + lVar7) == param_2) {
        uVar6 = (lVar7 >> 4) * 0x6db6db6db6db6db7;
        uVar5 = (uint)uVar6;
        if (iVar1 <= (int)uVar5 || (int)uVar5 < 0) {
          return;
        }
        lVar8 = (ulonglong)(uVar5 & 0x7fffffff) * 0x70;
        lVar7 = lVar2 + lVar8;
        bVar4 = true;
        if (*(char *)(lVar2 + 0x59 + lVar8) == '\x01') {
          bVar4 = *(char *)(lVar7 + 0x58) != '\0';
        }
        if ((*(int *)(lVar7 + 0x68) != 0) &&
           (plVar3 = *(longlong **)(lVar7 + 0x60), plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x60))(plVar3,bVar4);
        }
        FUN_148dcd50e(param_1 + 0x1d8,uVar6 & 0xffffffff);
        return;
      }
      lVar7 = lVar7 + 0x70;
    } while ((longlong)iVar1 * 0x70 - lVar7 != 0);
  }
  return;
}



// FUNCTION 148dcda80 FUN_148dcda80 body=203 status=ok
// SIG undefined FUN_148dcda80(void)

undefined8 * FUN_148dcda80(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = FUN_14479d2ce(param_1 + 0x70);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1447210f0(lVar5);
  }
  FUN_1409e0c66(&local_28,uVar6);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_20;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      *param_2 = local_28;
      param_2[1] = plVar7;
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
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_148dcdb2b;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_148dcdb2b:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148dcdb4c FUN_148dcdb4c body=294 status=ok
// SIG undefined FUN_148dcdb4c(void)

void FUN_148dcdb4c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x1e0);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x38 + lVar3) == *param_2) {
        uVar4 = (int)(lVar3 >> 4) * -0x49249249;
        if ((int)uVar4 < iVar1 && -1 < (int)uVar4) {
          lVar3 = FUN_14388064a();
          if (lVar3 == 0) {
            uVar5 = (ulonglong)(uVar4 & 0x7fffffff);
            lVar3 = uVar5 * 0x70;
            *(undefined1 *)(*(longlong *)(param_1 + 0x1d8) + 1 + lVar3) = 1;
            if (*(char *)(*(longlong *)(param_1 + 0x1d8) + lVar3) == '\x01') {
              *(undefined2 *)(*(longlong *)(param_1 + 0x1d8) + 0x58 + lVar3) = 0x101;
            }
          }
          else {
            FUN_144a7b7fe(lVar3,&local_38);
            lVar2 = *(longlong *)(param_1 + 0x1d8);
            uVar5 = (ulonglong)(uVar4 & 0x7fffffff);
            lVar3 = lVar2 + uVar5 * 0x70;
            if (&local_38 != (undefined4 *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x28) = local_28;
              *(undefined4 *)(lVar3 + 0x18) = local_38;
              *(undefined4 *)(lVar3 + 0x1c) = uStack_34;
              *(undefined4 *)(lVar3 + 0x20) = uStack_30;
              *(undefined4 *)(lVar3 + 0x24) = uStack_2c;
              *(undefined1 *)(lVar3 + 0x30) = 1;
              lVar2 = *(longlong *)(param_1 + 0x1d8);
            }
            *(undefined1 *)(lVar2 + 1 + uVar5 * 0x70) = 2;
          }
          FUN_148dcd95c(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x1d8) + 4 + uVar5 * 0x70));
        }
        break;
      }
      lVar3 = lVar3 + 0x70;
    } while ((longlong)iVar1 * 0x70 - lVar3 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dcdc74 FUN_148dcdc74 body=74 status=ok
// SIG undefined FUN_148dcdc74(void)

undefined8 * FUN_148dcdc74(longlong param_1,undefined8 *param_2,char *param_3)

{
  if (*param_3 == '\x02') {
    param_1 = param_1 + 0x1a8;
  }
  else {
    if (*param_3 != '\x01') {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      return param_2;
    }
    param_1 = param_1 + 400;
  }
  FUN_1460489b8(param_2,param_1);
  return param_2;
}



// FUNCTION 148dcdcbe FUN_148dcdcbe body=397 status=ok
// SIG undefined FUN_148dcdcbe(void)

longlong *
FUN_148dcdcbe(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = *(undefined4 *)(param_3 + 1);
  uVar5 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar6 = (undefined8 *)*param_1;
  FUN_141085fe4(param_2,&local_50);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  *puVar6 = &PTR_LAB_14b99a4c0;
  *(undefined4 *)(puVar6 + 1) = *param_4;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar6[2] = lVar8;
  *puVar6 = &PTR_FUN_14b99a450;
  puVar6[3] = local_50;
  puVar6[4] = local_48;
  if (local_48 == (longlong *)0x0) {
    puVar6[5] = uVar5;
    *(undefined4 *)(puVar6 + 6) = uVar4;
  }
  else {
    LOCK();
    *(int *)((longlong)local_48 + 0xc) = *(int *)((longlong)local_48 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar6 + 6) = uVar4;
    puVar6[5] = uVar5;
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcde4e FUN_148dcde4e body=105 status=ok
// SIG undefined FUN_148dcde4e(void)

undefined8 FUN_148dcde4e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == 0) || ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) {
    uVar1 = 0;
  }
  else {
    local_40 = &local_38;
    local_38 = 0;
    uStack_30 = 0;
    local_10 = 0;
    local_48 = param_2;
    uVar1 = FUN_148dcd06e(0,2,0);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcdeb8 FUN_148dcdeb8 body=59 status=ok
// SIG undefined FUN_148dcdeb8(void)

longlong FUN_148dcdeb8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148dd4856(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x38 + *param_1;
  FUN_148dd483a(lVar2);
  return lVar2;
}



// FUNCTION 148dcdf38 FUN_148dcdf38 body=240 status=ok
// SIG undefined FUN_148dcdf38(void)

void FUN_148dcdf38(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_37;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x1f8);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x1f0) + 4 + lVar4) == param_2) {
        uVar3 = (lVar4 >> 3) * 0x6db6db6db6db6db7;
        uVar2 = (uint)uVar3;
        if ((int)uVar2 < iVar1 && -1 < (int)uVar2) {
          local_38 = 2;
          local_37 = *(undefined1 *)
                      ((ulonglong)(uVar2 & 0x7fffffff) * 0x38 + *(longlong *)(param_1 + 0x1f0));
          local_30 = FUN_14479d2ce();
          if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(local_30);
          }
          local_28 = 0;
          FUN_148ba9f07(param_1 + 0x250);
          FUN_148dce39e(param_1,uVar3 & 0xffffffff,0);
        }
        break;
      }
      lVar4 = lVar4 + 0x38;
    } while ((longlong)iVar1 * 0x38 - lVar4 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dce02a FUN_148dce02a body=397 status=ok
// SIG undefined FUN_148dce02a(void)

longlong *
FUN_148dce02a(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = *(undefined4 *)(param_3 + 1);
  uVar5 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar6 = (undefined8 *)*param_1;
  FUN_141085fe4(param_2,&local_50);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  *puVar6 = &PTR_LAB_14a491750;
  *(undefined4 *)(puVar6 + 1) = *param_4;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar6[2] = lVar8;
  *puVar6 = &PTR_FUN_14b99a680;
  puVar6[3] = local_50;
  puVar6[4] = local_48;
  if (local_48 == (longlong *)0x0) {
    puVar6[5] = uVar5;
    *(undefined4 *)(puVar6 + 6) = uVar4;
  }
  else {
    LOCK();
    *(int *)((longlong)local_48 + 0xc) = *(int *)((longlong)local_48 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar6 + 6) = uVar4;
    puVar6[5] = uVar5;
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dce1ba FUN_148dce1ba body=220 status=ok
// SIG undefined FUN_148dce1ba(void)

void FUN_148dce1ba(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0x1f8);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x1f0) + 4 + lVar3) == param_2) {
        uVar2 = (int)(lVar3 >> 3) * -0x49249249;
        if ((int)uVar2 < iVar1 && -1 < (int)uVar2) {
          local_28 = 3;
          local_27 = *(undefined1 *)
                      ((ulonglong)(uVar2 & 0x7fffffff) * 0x38 + *(longlong *)(param_1 + 0x1f0));
          local_20 = FUN_14479d2ce();
          if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(local_20);
          }
          local_18 = 0;
          FUN_148ba9f07(param_1 + 0x250);
        }
        break;
      }
      lVar3 = lVar3 + 0x38;
    } while ((longlong)iVar1 * 0x38 - lVar3 != 0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dce298 FUN_148dce298 body=150 status=ok
// SIG undefined FUN_148dce298(void)

void FUN_148dce298(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148dce54c(param_1,&local_28,param_2);
  if (local_28 != (longlong *)0x0) {
    uVar2 = FUN_14479d2ce(param_2 + 8);
    (**(code **)(*local_28 + 0x20))(local_28,0,uVar2);
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
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



// FUNCTION 148dce340 FUN_148dce340 body=94 status=ok
// SIG undefined FUN_148dce340(void)

void FUN_148dce340(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if ((longlong)*(int *)(param_1 + 0x1f8) != 0) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x1f0) + lVar1) == '\x01') {
        lVar2 = *(longlong *)(param_1 + 0x1f0) - lVar2;
        if (lVar2 != 0) {
          lVar2 = FUN_14479d2ce(lVar2 + 8);
          bVar3 = lVar2 != 0;
          goto LAB_148dce356;
        }
        break;
      }
      lVar2 = lVar2 + -0x38;
      lVar1 = lVar1 + 0x38;
    } while ((longlong)*(int *)(param_1 + 0x1f8) * -0x38 - lVar2 != 0);
  }
  bVar3 = false;
LAB_148dce356:
  FUN_148dcc740(param_1,bVar3);
  return;
}



// FUNCTION 148dce39e FUN_148dce39e body=180 status=ok
// SIG undefined FUN_148dce39e(void)

void FUN_148dce39e(longlong param_1,uint param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x1f8))) {
    lVar2 = (ulonglong)param_2 * 0x38;
    plVar1 = (longlong *)FUN_14479d2ce(*(longlong *)(param_1 + 0x1f0) + lVar2 + 8);
    if (plVar1 != (longlong *)0x0) {
      FUN_148dce452(param_1,*(longlong *)(param_1 + 0x1f0) + lVar2);
      if (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x28 + lVar2) != 0) {
        FUN_14480f766(plVar1 + 0x5a);
      }
      if (param_3 != '\0') {
        (**(code **)(*plVar1 + 0x5c8))(plVar1,0);
      }
    }
    FUN_148dce4fa((longlong *)(param_1 + 0x1f0),param_2);
    FUN_148dce340(param_1);
    return;
  }
  return;
}



// FUNCTION 148dce452 FUN_148dce452 body=150 status=ok
// SIG undefined FUN_148dce452(void)

void FUN_148dce452(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148dce54c(param_1,&local_28,param_2);
  if (local_28 != (longlong *)0x0) {
    uVar2 = FUN_14479d2ce(param_2 + 8);
    (**(code **)(*local_28 + 0x20))(local_28,1,uVar2);
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
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



// FUNCTION 148dce4fa FUN_148dce4fa body=82 status=ok
// SIG undefined FUN_148dce4fa(void)

void FUN_148dce4fa(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)(*param_1 + (ulonglong)param_2 * 0x38);
  if (*(char *)(*param_1 + 0x18 + (ulonglong)param_2 * 0x38) == '\x01') {
    *(undefined1 *)((longlong)_Dst + 0x18) = 0;
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x38),(longlong)(int)(~param_2 + iVar1) * 0x38);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_148dd5670(param_1);
  return;
}



// FUNCTION 148dce54c FUN_148dce54c body=155 status=ok
// SIG undefined FUN_148dce54c(void)

undefined8 * FUN_148dce54c(longlong param_1,undefined8 *param_2,char *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  
  if (*param_3 == '\x02') {
    *param_2 = 0;
    lVar2 = *(longlong *)(param_1 + 0x238);
    param_2[1] = lVar2;
    if (lVar2 == 0) {
      return param_2;
    }
    iVar3 = *(int *)(lVar2 + 8);
    do {
      if (iVar3 == 0) goto LAB_148dce5dd;
      LOCK();
      iVar1 = *(int *)(lVar2 + 8);
      bVar5 = iVar3 == iVar1;
      if (bVar5) {
        *(int *)(lVar2 + 8) = iVar3 + 1;
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      UNLOCK();
    } while (!bVar5);
    if (param_2[1] == 0) {
      return param_2;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x230);
  }
  else {
    if (*param_3 != '\x01') {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    *param_2 = 0;
    lVar2 = *(longlong *)(param_1 + 0x228);
    param_2[1] = lVar2;
    if (lVar2 == 0) {
      return param_2;
    }
    iVar3 = *(int *)(lVar2 + 8);
    do {
      if (iVar3 == 0) {
LAB_148dce5dd:
        param_2[1] = 0;
        return param_2;
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 8);
      bVar5 = iVar3 == iVar1;
      if (bVar5) {
        *(int *)(lVar2 + 8) = iVar3 + 1;
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      UNLOCK();
    } while (!bVar5);
    if (param_2[1] == 0) {
      return param_2;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x220);
  }
  *param_2 = uVar4;
  return param_2;
}



// FUNCTION 148dce5e8 FUN_148dce5e8 body=86 status=ok
// SIG undefined FUN_148dce5e8(void)

void FUN_148dce5e8(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(int *)(param_1 + 0x1e0);
  if (0 < (longlong)uVar3) {
    lVar2 = uVar3 * 0x70;
    do {
      lVar2 = lVar2 + -0x70;
      if (*(char *)(*(longlong *)(param_1 + 0x1d8) + lVar2) == '\x01') {
        FUN_148dcd50e((longlong *)(param_1 + 0x1d8),(int)uVar3 + -1);
      }
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 148dce644 FUN_148dce644 body=26 status=ok
// SIG undefined FUN_148dce644(void)

void FUN_148dce644(undefined8 param_1)

{
  FUN_148dcc964();
  FUN_148dcc9ac(param_1);
  return;
}



// FUNCTION 148dce684 FUN_148dce684 body=226 status=ok
// SIG undefined FUN_148dce684(void)

void FUN_148dce684(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [44];
  undefined1 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x58);
    if ((cVar2 != '\0') && (plVar1 = *(longlong **)(param_1 + 0x60), plVar1 != (longlong *)0x0)) {
      if (*(char *)(param_1 + 0xdc) == '\x01') {
        uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1);
        local_24 = 0;
        FUN_140f8b8f2(uVar3,param_1 + 0xa0,param_1 + 0xd0);
      }
      if (*(char *)(param_1 + 0xec) == '\x01') {
        uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1);
        local_2c = 0;
        FUN_140f8b8f2(uVar3,param_1 + 0xac,param_1 + 0xe0);
      }
    }
  }
  if (*(char *)(param_1 + 0xdc) == '\x01') {
    *(undefined1 *)(param_1 + 0xdc) = 0;
  }
  if (*(char *)(param_1 + 0xec) == '\x01') {
    *(undefined1 *)(param_1 + 0xec) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dce768 FUN_148dce768 body=70 status=ok
// SIG undefined FUN_148dce768(void)

undefined8 FUN_148dce768(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar1 != 0) {
    lVar2 = FUN_1458f2fc6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),*(undefined1 *)(lVar1 + 0x9ce0));
    }
  }
  return 0;
}



// FUNCTION 148dce7ae FUN_148dce7ae body=184 status=ok
// SIG undefined FUN_148dce7ae(void)

void FUN_148dce7ae(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar1 != 0) {
    lVar2 = FUN_1458f2fc6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_38 = *param_3;
      uStack_34 = param_3[1];
      uStack_30 = param_3[2];
      uStack_2c = param_3[3];
      if ((longlong)*(int *)(lVar1 + 0x9cf0) != 0) {
        plVar3 = *(longlong **)(lVar1 + 0x9ce8);
        lVar1 = (longlong)*(int *)(lVar1 + 0x9cf0) * 0x18;
        do {
          if (*plVar3 == param_2) {
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*(longlong *)plVar3[1] + 0x18))((longlong *)plVar3[1],&local_38);
            }
            break;
          }
          plVar3 = plVar3 + 3;
          lVar1 = lVar1 + -0x18;
        } while (lVar1 != 0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dce868 FUN_148dce868 body=155 status=ok
// SIG undefined FUN_148dce868(void)

void FUN_148dce868(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar1 != 0) {
    lVar2 = FUN_1458f2fc6();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && ((longlong)*(int *)(lVar1 + 0x9cf0) != 0)) {
      plVar3 = *(longlong **)(lVar1 + 0x9ce8);
      lVar1 = (longlong)*(int *)(lVar1 + 0x9cf0) * 0x18;
      do {
        if (*plVar3 == param_2) {
          if (plVar3 == (longlong *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000148dce900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(longlong *)plVar3[1] + 0x20))((longlong *)plVar3[1],param_3);
          return;
        }
        plVar3 = plVar3 + 3;
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != 0);
    }
  }
  return;
}



// FUNCTION 148dce904 FUN_148dce904 body=233 status=ok
// SIG undefined FUN_148dce904(void)

void FUN_148dce904(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14587136a();
  local_38 = 0;
  uStack_40 = uStack_40 & 0xffffffffffffff00;
  local_48 = 3;
  FUN_1446f470e(&local_50,L"bRevealed",1);
  uVar1 = FUN_1458f2fc6();
  FUN_1458f2fc6();
  uVar1 = FUN_140f1fabf(uVar1,local_50);
  FUN_140f1fa23(uVar1,param_2,&local_48);
  FUN_1446f470e(&local_48,L"ElementalAttunement",1);
  uVar1 = FUN_1458f2fc6();
  FUN_1458f2fc6();
  uVar1 = FUN_140f1fabf(uVar1,local_48);
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dce9ee FUN_148dce9ee body=43 status=ok
// SIG undefined FUN_148dce9ee(void)

void FUN_148dce9ee(longlong param_1)

{
  FUN_1440a9e72();
  FUN_148ccc50e(param_1,0);
  FUN_1409b52ac(param_1 + 0x3a90);
  return;
}



// FUNCTION 148dcea2a FUN_148dcea2a body=57 status=ok
// SIG undefined FUN_148dcea2a(void)

void FUN_148dcea2a(longlong param_1,char param_2)

{
  FUN_140ba29e8();
  if ((param_2 == '\0') && (*(char *)(param_1 + 0x8c48) == '\x01')) {
    FUN_148dcea64(param_1 + -0x10b0);
    return;
  }
  return;
}



// FUNCTION 148dcea64 FUN_148dcea64 body=80 status=ok
// SIG undefined FUN_148dcea64(void)

void FUN_148dcea64(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x9cd8) != 0) && (*(char *)(param_1 + 0x9cf8) == '\x01')) {
    *(undefined1 *)(param_1 + 0x9cf8) = 0;
    FUN_148baa364();
  }
  FUN_148ccc50e(param_1,1);
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_148baa400(param_1);
    return;
  }
  return;
}



// FUNCTION 148dceab6 FUN_148dceab6 body=95 status=ok
// SIG undefined FUN_148dceab6(void)

void FUN_148dceab6(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x9cf0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x9ce8);
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + 8 + lVar3) + 8))();
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  FUN_1448e42e2(param_1,param_2);
  return;
}



// FUNCTION 148dceb16 FUN_148dceb16 body=710 status=ok
// SIG undefined FUN_148dceb16(void)

void FUN_148dceb16(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)*param_2;
  if (plVar4 != (longlong *)0x0) {
    lVar8 = (**(code **)(*plVar4 + 8))(plVar4);
    lVar9 = FUN_1465b3454();
    if ((((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
         lVar9 + 0x30)) && ((longlong)(int)plVar4[0x21a] != 0)) {
      lVar8 = param_1 + -0x10b0;
      local_68 = (longlong *)(param_1 + 0x8c38);
      lVar9 = (longlong)(int)plVar4[0x21a] * 0x38;
      lVar13 = plVar4[0x219] + 0x10;
      local_60 = lVar8;
      do {
        FUN_145c55346(&local_58,lVar8,*(undefined1 *)(lVar13 + -8),lVar13);
        lVar7 = local_58;
        if (local_58 != 0) {
          plVar4 = (longlong *)(local_58 + 8);
          if (*(int *)(local_58 + 0x10) != 3) {
            FUN_1446efa72(plVar4,0,3,0x10);
            *(undefined4 *)(lVar7 + 0x10) = 3;
          }
          puVar5 = (undefined8 *)*plVar4;
          *puVar5 = &PTR_LAB_149e020b0;
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 1;
          lVar7 = DAT_14c758608 + 1;
          if (lVar12 == 0) {
            LOCK();
            UNLOCK();
            lVar12 = DAT_14c758608 + 2;
            lVar7 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar7;
          puVar5[2] = lVar12;
          *puVar5 = &PTR_FUN_14b99a8d0;
          puVar5[3] = 0;
          FUN_14485c47a(puVar5 + 3,lVar8);
          plVar4 = local_50;
          lVar7 = local_58;
          puVar5[4] = &DAT_148dceab4;
          *(undefined4 *)(puVar5 + 5) = 0;
          if (local_50 == (longlong *)0x0) {
            uVar10 = *(undefined8 *)(lVar13 + -0x10);
          }
          else {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
            uVar10 = *(undefined8 *)(lVar13 + -0x10);
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
          }
          iVar3 = *(int *)(param_1 + 0x8c40);
          lVar12 = (longlong)iVar3;
          *(uint *)(param_1 + 0x8c40) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x8c44) < iVar3 + 1U) {
            FUN_148dd669e(local_68,iVar3);
          }
          lVar8 = local_60;
          lVar6 = *local_68;
          *(undefined8 *)(lVar6 + lVar12 * 0x18) = uVar10;
          *(longlong *)(lVar6 + 8 + lVar12 * 0x18) = lVar7;
          *(longlong **)(lVar6 + 0x10 + lVar12 * 0x18) = plVar4;
          if (plVar4 != (longlong *)0x0) {
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
        plVar4 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        lVar13 = lVar13 + 0x38;
        lVar9 = lVar9 + -0x38;
      } while (lVar9 != 0);
    }
  }
  FUN_14034db2c(param_1,param_2);
  uVar10 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x20))(param_1 + 0x28);
  uVar11 = FUN_145999394();
  lVar8 = FUN_140d4a0a6(uVar10,uVar11);
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  *(longlong *)(param_1 + 0x8c28) = lVar8;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dcee12 FUN_148dcee12 body=65 status=ok
// SIG undefined FUN_148dcee12(void)

void FUN_148dcee12(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x9ce0);
  if (*(char *)(param_1 + 0x9ce1) != cVar1) {
    if (*(longlong *)(param_1 + 0x9cd8) != 0) {
      FUN_148baa2a8();
      cVar1 = *(char *)(param_1 + 0x9ce0);
    }
    *(char *)(param_1 + 0x9ce1) = cVar1;
  }
  return;
}



// FUNCTION 148dcee54 FUN_148dcee54 body=181 status=ok
// SIG undefined FUN_148dcee54(void)

undefined8 FUN_148dcee54(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14622e934();
  if ((longlong)*(int *)(local_28 + 0x1f8) == 0) {
LAB_148dceec0:
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    lVar5 = 0;
    lVar4 = 0;
    do {
      if (*(char *)(*(longlong *)(local_28 + 0x1f0) + lVar5) == '\x01') {
        lVar4 = *(longlong *)(local_28 + 0x1f0) - lVar4;
        if (lVar4 == 0) goto LAB_148dceec0;
        uVar3 = FUN_14479d2ce(lVar4 + 8);
        break;
      }
      lVar4 = lVar4 + -0x38;
      lVar5 = lVar5 + 0x38;
    } while ((longlong)*(int *)(local_28 + 0x1f8) * -0x38 - lVar4 != 0);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 148dcef0a FUN_148dcef0a body=137 status=ok
// SIG undefined FUN_148dcef0a(void)

undefined4 FUN_148dcef0a(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14622e934(param_1,&local_30);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = *(undefined8 *)(param_2 + 4);
  uVar3 = FUN_148dcd194(local_30);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcef94 FUN_148dcef94 body=118 status=ok
// SIG undefined FUN_148dcef94(void)

void FUN_148dcef94(undefined8 param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14622e934(param_1,&local_28);
  FUN_148dcca1a(local_28,0);
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
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



// FUNCTION 148dcf01c FUN_148dcf01c body=116 status=ok
// SIG undefined FUN_148dcf01c(void)

void FUN_148dcf01c(undefined8 param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14622e934(param_1,&local_28);
  FUN_148dcd44c(local_28);
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
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



// FUNCTION 148dcf0a2 FUN_148dcf0a2 body=179 status=ok
// SIG undefined FUN_148dcf0a2(void)

undefined4 FUN_148dcf0a2(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14622e934(param_1,&local_68);
  local_38 = param_2[2];
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_70 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_30 = 1;
  local_78 = 0;
  uVar3 = FUN_148dcd06e(local_68,2,0);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcf156 FUN_148dcf156 body=121 status=ok
// SIG undefined FUN_148dcf156(void)

undefined4 FUN_148dcf156(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14622e934(param_1,&local_30);
  uVar3 = FUN_148dcde4e(local_30,param_2);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcf1d0 FUN_148dcf1d0 body=113 status=ok
// SIG undefined FUN_148dcf1d0(void)

undefined4 FUN_148dcf1d0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14622e934(param_1,&local_28);
  uVar3 = FUN_145c20224(local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcf242 FUN_148dcf242 body=99 status=ok
// SIG undefined FUN_148dcf242(void)

undefined4 *
FUN_148dcf242(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140fecfdc(param_4);
  uVar1 = 0;
  if ((lVar2 != 0) && (lVar2 = FUN_1458b3d24(lVar2), lVar2 != 0)) {
    if (*(char *)(param_1 + 8) == '\x01') {
      uVar1 = FUN_148de2a6e(lVar2);
    }
    else if (*(char *)(param_1 + 8) == '\0') {
      uVar1 = FUN_148de2ad0(lVar2);
    }
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = uVar1;
  *(undefined1 *)(param_2 + 8) = 2;
  return param_2;
}



// FUNCTION 148dcf2a6 FUN_148dcf2a6 body=96 status=ok
// SIG undefined FUN_148dcf2a6(void)

void FUN_148dcf2a6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14592c742();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_14485c47a(param_1 + 0x2d,param_2);
                    /* WARNING: Could not recover jumptable at 0x000148dcf303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa0))(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148dcf306 FUN_148dcf306 body=64 status=ok
// SIG undefined FUN_148dcf306(void)

void FUN_148dcf306(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x168);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x168);
    FUN_148de2a62(uVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148dcf346 FUN_148dcf346 body=55 status=ok
// SIG undefined FUN_148dcf346(void)

void FUN_148dcf346(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x168);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x168);
    FUN_148de2ad8(uVar1);
    return;
  }
  return;
}



// FUNCTION 148dcf37e FUN_148dcf37e body=56 status=ok
// SIG undefined FUN_148dcf37e(void)

undefined8 FUN_148dcf37e(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x168);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x168);
    uVar2 = FUN_148de2ad0(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148dcf3b6 FUN_148dcf3b6 body=158 status=ok
// SIG undefined FUN_148dcf3b6(void)

void FUN_148dcf3b6(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar2 = FUN_145b8b6e6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      cVar1 = FUN_14113f0c0(param_1 + 0x180);
      if (cVar1 != '\0') {
        FUN_148baac4a(&local_2c,param_1 + 0x180);
        *(undefined4 *)(param_2 + 0x1878) = local_24;
        *(undefined4 *)(param_2 + 0x1870) = local_2c;
        *(undefined4 *)(param_2 + 0x1874) = local_28;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcf456 FUN_148dcf456 body=122 status=ok
// SIG undefined FUN_148dcf456(void)

void FUN_148dcf456(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148dcf4e2(param_1,&local_28);
  FUN_148dcf306(local_28,param_2);
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
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



// FUNCTION 148dcf4e2 FUN_148dcf4e2 body=144 status=ok
// SIG undefined FUN_148dcf4e2(void)

undefined8 * FUN_148dcf4e2(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df5234(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcf576 FUN_148dcf576 body=116 status=ok
// SIG undefined FUN_148dcf576(void)

void FUN_148dcf576(undefined8 param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148dcf4e2(param_1,&local_28);
  FUN_148dcf346(local_28);
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
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



// FUNCTION 148dcf5fc FUN_148dcf5fc body=113 status=ok
// SIG undefined FUN_148dcf5fc(void)

undefined4 FUN_148dcf5fc(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148dcf4e2(param_1,&local_28);
  uVar3 = FUN_148dcf37e(local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcf66e FUN_148dcf66e body=216 status=ok
// SIG undefined FUN_148dcf66e(void)

bool FUN_148dcf66e(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  float extraout_XMM0_Da;
  
  cVar2 = FUN_144729dda(param_1 + 0x80);
  if (cVar2 != '\0') {
    uVar3 = FUN_14479d2ce(param_1 + 0x80);
    lVar4 = FUN_1403ca43f();
    lVar6 = *(longlong *)(lVar4 + 0x28);
    if (lVar6 == 0) {
      uVar5 = FUN_14110242a();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(lVar4 + 0x28) = lVar6;
    }
    if (((*(longlong *)(lVar4 + 0x30) == 0) && (lVar6 != 0)) && (*(longlong *)(lVar4 + 0x20) != 0))
    {
      plVar1 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        uVar5 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x20));
      }
      *(undefined8 *)(lVar4 + 0x30) = uVar5;
    }
    cVar2 = FUN_144a851c4(uVar3);
    if (cVar2 != '\0') {
      FUN_148dcf746(param_1);
      return 0.0 < extraout_XMM0_Da;
    }
  }
  return false;
}



// FUNCTION 148dcf746 FUN_148dcf746 body=65 status=ok
// SIG undefined FUN_148dcf746(void)

undefined8 FUN_148dcf746(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14486ea84(param_1 + 0x138);
  if (cVar1 != '\0') {
    uVar2 = FUN_140280ec4(param_1 + 0x138);
    uVar2 = FUN_144a87362(uVar2);
    uVar2 = FUN_143d46ea6(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148dcf788 FUN_148dcf788 body=65 status=ok
// SIG undefined FUN_148dcf788(void)

undefined8 FUN_148dcf788(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14486ea84(param_1 + 0x138);
  if (cVar1 != '\0') {
    uVar2 = FUN_140280ec4(param_1 + 0x138);
    uVar2 = FUN_144a87362(uVar2);
    uVar2 = FUN_143d46e5a(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148dcf7ca FUN_148dcf7ca body=137 status=ok
// SIG undefined FUN_148dcf7ca(void)

void FUN_148dcf7ca(longlong param_1,float param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  float fVar4;
  
  if (0.0 < param_2) {
    lVar1 = param_1 + 0x138;
    cVar3 = FUN_14486ea84(lVar1);
    if (cVar3 != '\0') {
      cVar3 = FUN_148dcf66e(param_1);
      if (cVar3 != '\0') {
        if (param_3 == '\x01') {
          uVar2 = FUN_14008e0ae(lVar1);
          fVar4 = (float)FUN_143d46e5a(uVar2);
          param_2 = param_2 * fVar4;
        }
        uVar2 = FUN_14008e0ae(lVar1);
        FUN_1414daa56(uVar2,param_2,0x3f800000);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148dcf854 FUN_148dcf854 body=78 status=ok
// SIG undefined FUN_148dcf854(void)

void FUN_148dcf854(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_14486ea84(param_1 + 0x138);
  if (cVar2 != '\0') {
    uVar1 = FUN_14008e0ae(param_1 + 0x138);
    FUN_140b55644(uVar1,param_2,1);
    return;
  }
  return;
}



// FUNCTION 148dcf8a2 FUN_148dcf8a2 body=191 status=ok
// SIG undefined FUN_148dcf8a2(void)

void FUN_148dcf8a2(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  
  if (0.0 < param_2) {
    if (*(char *)(param_1 + 0x162) == '\x01') {
      iVar1 = *(int *)(param_1 + 0xd8);
      *(uint *)(param_1 + 0xd8) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0xdc) < iVar1 + 1U) {
        FUN_148dd6d48((longlong *)(param_1 + 0xd0),iVar1);
      }
      lVar2 = *(longlong *)(param_1 + 0xd0);
      *(float *)(lVar2 + (longlong)iVar1 * 8) = param_2;
      *(undefined2 *)(lVar2 + 4 + (longlong)iVar1 * 8) = 0;
    }
    else {
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        FUN_1442214e8(*(longlong *)(param_1 + 0xe8),param_2);
        return;
      }
      cVar3 = FUN_14486ea84(param_1 + 0x118);
      if (cVar3 != '\0') {
        uVar4 = FUN_14008e0ae(param_1 + 0x118);
        FUN_140b55644(uVar4,param_2,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148dcf968 FUN_148dcf968 body=212 status=ok
// SIG undefined FUN_148dcf968(void)

void FUN_148dcf968(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  cVar3 = FUN_144729dda(param_1 + 0x80);
  if ((cVar3 == '\0') || (*(longlong *)(param_1 + 0x58) == 0)) {
    return;
  }
  uVar4 = FUN_14479d2ce(param_1 + 0x80);
  lVar1 = *(longlong *)(param_1 + 0x58);
  lVar6 = *(longlong *)(lVar1 + 0x180);
  if (lVar6 == 0) {
    uVar5 = FUN_140e391b0();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar1 + 0x180) = lVar6;
  }
  if (((*(longlong *)(lVar1 + 0x188) != 0) || (lVar6 == 0)) || (*(longlong *)(lVar1 + 0x178) == 0))
  goto LAB_148dcf9c9;
  plVar2 = *(longlong **)(lVar6 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_148dcfa38:
    uVar5 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_148dcfa38;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    uVar5 = FUN_144aff482(uVar5,(longlong *)(lVar1 + 0x178));
  }
  *(undefined8 *)(lVar1 + 0x188) = uVar5;
LAB_148dcf9c9:
  FUN_1410b135e(uVar4);
  return;
}



// FUNCTION 148dcfa62 FUN_148dcfa62 body=124 status=ok
// SIG undefined FUN_148dcfa62(void)

void FUN_148dcfa62(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    cVar2 = FUN_148ddd906();
    if (cVar2 != '\0') {
      FUN_148ddd718(*(undefined8 *)(param_1 + 0xe8),param_2);
      return;
    }
  }
  cVar2 = FUN_14486ea84(param_1 + 0x118);
  if (cVar2 != '\0') {
    uVar1 = FUN_14008e0ae(param_1 + 0x118);
    FUN_1409d461e(uVar1,param_2,1);
    return;
  }
  return;
}



// FUNCTION 148dcfade FUN_148dcfade body=103 status=ok
// SIG undefined FUN_148dcfade(void)

undefined8 FUN_148dcfade(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    cVar1 = FUN_148ddd906();
    if (cVar1 != '\0') {
      uVar2 = thunk_FUN_148ddd874(*(undefined8 *)(param_1 + 0xe8));
      return uVar2;
    }
  }
  cVar1 = FUN_14486ea84(param_1 + 0x118);
  if (cVar1 != '\0') {
    uVar2 = FUN_140280ec4(param_1 + 0x118);
    uVar2 = FUN_144a87362(uVar2);
    uVar2 = FUN_143d46ea6(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148dcfb46 FUN_148dcfb46 body=87 status=ok
// SIG undefined FUN_148dcfb46(void)

undefined8 FUN_148dcfb46(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    uVar2 = FUN_148ddd6e2();
    return uVar2;
  }
  cVar1 = FUN_14486ea84(param_1 + 0x118);
  if (cVar1 != '\0') {
    uVar2 = FUN_140280ec4(param_1 + 0x118);
    uVar2 = FUN_144a87362(uVar2);
    uVar2 = FUN_143d46e5a(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148dcfb9e FUN_148dcfb9e body=136 status=ok
// SIG undefined FUN_148dcfb9e(void)

undefined8 * FUN_148dcfb9e(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x178);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b99ab60;
  plVar1 = plVar3 + 2;
  memset(plVar1,0,0x168);
  FUN_145c42fa8(plVar1);
  *param_2 = plVar1;
  param_2[1] = plVar3;
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
  return param_2;
}



// FUNCTION 148dcfc26 FUN_148dcfc26 body=100 status=ok
// SIG undefined FUN_148dcfc26(void)

void FUN_148dcfc26(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if ((param_1 != 0) && (plVar3 = *(longlong **)(param_1 + 0x6f10), plVar3 != (longlong *)0x0)) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
      }
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
    if (*(longlong *)(param_1 + 0x6f08) != 0) {
      FUN_148dcf8a2();
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
                    /* WARNING: Could not recover jumptable at 0x000148dcfc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148dcfc8a FUN_148dcfc8a body=115 status=ok
// SIG undefined FUN_148dcfc8a(void)

undefined8 FUN_148dcfc8a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  
  uVar7 = 0;
  if ((param_1 != 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x6f10), uVar7 = 0, plVar3 != (longlong *)0x0)) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar7 = 0;
    if (*(longlong *)(param_1 + 0x6f08) != 0) {
      uVar7 = FUN_148dcfb46();
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
  return uVar7;
}



// FUNCTION 148dcfcfe FUN_148dcfcfe body=115 status=ok
// SIG undefined FUN_148dcfcfe(void)

undefined8 FUN_148dcfcfe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  
  uVar7 = 0;
  if ((param_1 != 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x6f10), uVar7 = 0, plVar3 != (longlong *)0x0)) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar7 = 0;
    if (*(longlong *)(param_1 + 0x6f08) != 0) {
      uVar7 = FUN_148dcfade();
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
  return uVar7;
}



// FUNCTION 148dcfd72 FUN_148dcfd72 body=100 status=ok
// SIG undefined FUN_148dcfd72(void)

void FUN_148dcfd72(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if ((param_1 != 0) && (plVar3 = *(longlong **)(param_1 + 0x6f10), plVar3 != (longlong *)0x0)) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
      }
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
    if (*(longlong *)(param_1 + 0x6f08) != 0) {
      FUN_148dcf854();
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
                    /* WARNING: Could not recover jumptable at 0x000148dcfdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148dcfdd6 FUN_148dcfdd6 body=100 status=ok
// SIG undefined FUN_148dcfdd6(void)

void FUN_148dcfdd6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if ((param_1 != 0) && (plVar3 = *(longlong **)(param_1 + 0x6f10), plVar3 != (longlong *)0x0)) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
      }
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
    if (*(longlong *)(param_1 + 0x6f08) != 0) {
      FUN_148dcf7ca();
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
                    /* WARNING: Could not recover jumptable at 0x000148dcfe28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148dcfe3a FUN_148dcfe3a body=115 status=ok
// SIG undefined FUN_148dcfe3a(void)

undefined8 FUN_148dcfe3a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  
  uVar7 = 0;
  if ((param_1 != 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x6f10), uVar7 = 0, plVar3 != (longlong *)0x0)) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar7 = 0;
    if (*(longlong *)(param_1 + 0x6f08) != 0) {
      uVar7 = FUN_148dcf746();
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
  return uVar7;
}



// FUNCTION 148dcfeae FUN_148dcfeae body=115 status=ok
// SIG undefined FUN_148dcfeae(void)

undefined8 FUN_148dcfeae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  
  uVar7 = 0;
  if ((param_1 != 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x6f10), uVar7 = 0, plVar3 != (longlong *)0x0)) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar7 = 0;
    if (*(longlong *)(param_1 + 0x6f08) != 0) {
      uVar7 = FUN_148dcf788();
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
  return uVar7;
}



// FUNCTION 148dcff22 FUN_148dcff22 body=140 status=ok
// SIG undefined FUN_148dcff22(void)

void FUN_148dcff22(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148dcffc6(param_1,&local_40);
  FUN_1458e9c68(local_40,param_2,param_3);
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_38 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcffc6 FUN_148dcffc6 body=144 status=ok
// SIG undefined FUN_148dcffc6(void)

undefined8 * FUN_148dcffc6(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df5234(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd005a FUN_148dd005a body=132 status=ok
// SIG undefined FUN_148dd005a(void)

void FUN_148dd005a(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148dcffc6(param_1,&local_40);
  FUN_148dcf8a2(local_40,param_2);
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_38 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd00f4 FUN_148dd00f4 body=123 status=ok
// SIG undefined FUN_148dd00f4(void)

undefined4 FUN_148dd00f4(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148dcffc6(param_1,&local_30);
  uVar3 = FUN_148dcfade(local_30);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd0170 FUN_148dd0170 body=123 status=ok
// SIG undefined FUN_148dd0170(void)

undefined4 FUN_148dd0170(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148dcffc6(param_1,&local_30);
  uVar3 = FUN_148dcfb46(local_30);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd01ec FUN_148dd01ec body=132 status=ok
// SIG undefined FUN_148dd01ec(void)

void FUN_148dd01ec(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148dcffc6(param_1,&local_40);
  FUN_148dcf854(local_40,param_2);
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_38 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd0286 FUN_148dd0286 body=140 status=ok
// SIG undefined FUN_148dd0286(void)

void FUN_148dd0286(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148dcffc6(param_1,&local_40);
  FUN_148dcf7ca(local_40,param_2,param_3);
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_38 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd032a FUN_148dd032a body=123 status=ok
// SIG undefined FUN_148dd032a(void)

undefined4 FUN_148dd032a(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148dcffc6(param_1,&local_30);
  uVar3 = FUN_148dcf746(local_30);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd03a6 FUN_148dd03a6 body=123 status=ok
// SIG undefined FUN_148dd03a6(void)

undefined4 FUN_148dd03a6(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148dcffc6(param_1,&local_30);
  uVar3 = FUN_148dcf788(local_30);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd0422 FUN_148dd0422 body=128 status=ok
// SIG undefined FUN_148dd0422(void)

void FUN_148dd0422(undefined8 param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148dcffc6(param_1,&local_28);
  if (*(char *)(local_28 + 0x161) == '\x01') {
    *(undefined1 *)(local_28 + 0x162) = 1;
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
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



// FUNCTION 148dd04c4 FUN_148dd04c4 body=48 status=ok
// SIG undefined FUN_148dd04c4(void)

longlong FUN_148dd04c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_1410bacb4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd04f4 FUN_148dd04f4 body=48 status=ok
// SIG undefined FUN_148dd04f4(void)

longlong FUN_148dd04f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_1410bacb4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd052c FUN_148dd052c body=48 status=ok
// SIG undefined FUN_148dd052c(void)

longlong FUN_148dd052c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_1410bacb4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd055c FUN_148dd055c body=48 status=ok
// SIG undefined FUN_148dd055c(void)

longlong FUN_148dd055c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_1410bacb4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd0594 FUN_148dd0594 body=38 status=ok
// SIG undefined FUN_148dd0594(void)

undefined8 FUN_148dd0594(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd05c0 FUN_148dd05c0 body=38 status=ok
// SIG undefined FUN_148dd05c0(void)

undefined8 FUN_148dd05c0(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd05ec FUN_148dd05ec body=38 status=ok
// SIG undefined FUN_148dd05ec(void)

undefined8 FUN_148dd05ec(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd0618 FUN_148dd0618 body=38 status=ok
// SIG undefined FUN_148dd0618(void)

undefined8 FUN_148dd0618(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd0644 FUN_148dd0644 body=38 status=ok
// SIG undefined FUN_148dd0644(void)

undefined8 FUN_148dd0644(undefined8 param_1,int param_2)

{
  FUN_1458888c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd0670 FUN_148dd0670 body=38 status=ok
// SIG undefined FUN_148dd0670(void)

undefined8 FUN_148dd0670(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd0696 FUN_148dd0696 body=122 status=ok
// SIG undefined FUN_148dd0696(void)

void FUN_148dd0696(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1d8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1d8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1d8 + 4) = uVar5;
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



// FUNCTION 148dd0710 FUN_148dd0710 body=114 status=ok
// SIG undefined FUN_148dd0710(void)

void FUN_148dd0710(longlong *param_1,int param_2)

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



// FUNCTION 148dd0782 FUN_148dd0782 body=146 status=ok
// SIG undefined FUN_148dd0782(void)

void FUN_148dd0782(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x198,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x198)) {
      uVar5 = uVar4 / 0x198 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x198,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148dd0816 FUN_148dd0816 body=9 status=ok
// SIG undefined FUN_148dd0816(void)

void FUN_148dd0816(longlong param_1)

{
  FUN_148dd08ee(param_1 + 0x10);
  return;
}



// FUNCTION 148dd0820 FUN_148dd0820 body=29 status=ok
// SIG undefined FUN_148dd0820(void)

undefined8 FUN_148dd0820(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd083e FUN_148dd083e body=38 status=ok
// SIG undefined FUN_148dd083e(void)

undefined8 FUN_148dd083e(undefined8 param_1,int param_2)

{
  FUN_148dd08ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd0870 FUN_148dd0870 body=79 status=ok
// SIG undefined FUN_148dd0870(void)

ulonglong FUN_148dd0870(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),*(undefined1 *)(lVar3 + 0x39));
  }
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
  return uVar5 & 0xffffffff;
}



// FUNCTION 148dd08c8 FUN_148dd08c8 body=38 status=ok
// SIG undefined FUN_148dd08c8(void)

undefined8 FUN_148dd08c8(undefined8 param_1,int param_2)

{
  FUN_148dd08ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd08ee FUN_148dd08ee body=93 status=ok
// SIG undefined FUN_148dd08ee(void)

void FUN_148dd08ee(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b999770;
  plVar3 = (longlong *)param_1[4];
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
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148dd093f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148dd094c FUN_148dd094c body=167 status=ok
// SIG undefined FUN_148dd094c(void)

void FUN_148dd094c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148dd09c7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148dd09c7;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_148dd09c7:
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
                    /* WARNING: Could not recover jumptable at 0x000148dd09e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148dd09f4 FUN_148dd09f4 body=23 status=ok
// SIG undefined FUN_148dd09f4(void)

void FUN_148dd09f4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148dd0a07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148dd0a0c FUN_148dd0a0c body=54 status=ok
// SIG undefined FUN_148dd0a0c(void)

longlong FUN_148dd0a0c(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 148dd0a42 FUN_148dd0a42 body=162 status=ok
// SIG undefined FUN_148dd0a42(void)

void FUN_148dd0a42(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148dd0a81;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148dd0a81;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_148dd0a81:
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
                    /* WARNING: Could not recover jumptable at 0x000148dd0ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148dd0ae8 FUN_148dd0ae8 body=81 status=ok
// SIG undefined FUN_148dd0ae8(void)

undefined8 FUN_148dd0ae8(longlong param_1)

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



// FUNCTION 148dd0b40 FUN_148dd0b40 body=118 status=ok
// SIG undefined FUN_148dd0b40(void)

void FUN_148dd0b40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9997c0;
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



// FUNCTION 148dd0bb6 FUN_148dd0bb6 body=118 status=ok
// SIG undefined FUN_148dd0bb6(void)

void FUN_148dd0bb6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9997c0;
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



// FUNCTION 148dd0c2c FUN_148dd0c2c body=156 status=ok
// SIG undefined FUN_148dd0c2c(void)

void FUN_148dd0c2c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b961ce0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9997c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd0cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd0cc8 FUN_148dd0cc8 body=111 status=ok
// SIG undefined FUN_148dd0cc8(void)

void FUN_148dd0cc8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148dd0d23:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148dd0d23;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd0d1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148dd0d37 FUN_148dd0d37 body=101 status=ok
// SIG undefined FUN_148dd0d37(void)

void FUN_148dd0d37(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b999980;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[2] = &PTR_FUN_14b999998;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
  return;
}



// FUNCTION 148dd0d9c FUN_148dd0d9c body=62 status=ok
// SIG undefined FUN_148dd0d9c(void)

void FUN_148dd0d9c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421658;
  FUN_1449db362(param_1 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148dd0dcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148dd0dda FUN_148dd0dda body=29 status=ok
// SIG undefined FUN_148dd0dda(void)

undefined8 FUN_148dd0dda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd0df8 FUN_148dd0df8 body=73 status=ok
// SIG undefined FUN_148dd0df8(void)

undefined8 * FUN_148dd0df8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b421658;
  FUN_1449db362(param_1 + 3);
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



// FUNCTION 148dd0e42 FUN_148dd0e42 body=167 status=ok
// SIG undefined FUN_148dd0e42(void)

void FUN_148dd0e42(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148dd0ebd;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148dd0ebd;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_148dd0ebd:
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
                    /* WARNING: Could not recover jumptable at 0x000148dd0edd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148dd0eea FUN_148dd0eea body=386 status=ok
// SIG undefined FUN_148dd0eea(void)

longlong * FUN_148dd0eea(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148dd0ffb:
    *puVar5 = &PTR_LAB_14b9648f0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9999b0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148dd0ffb;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b9648f0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9999b0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148dd106c FUN_148dd106c body=64 status=ok
// SIG undefined FUN_148dd106c(void)

undefined8 * FUN_148dd106c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9999b0;
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



// FUNCTION 148dd10b0 FUN_148dd10b0 body=81 status=ok
// SIG undefined FUN_148dd10b0(void)

undefined8 FUN_148dd10b0(longlong param_1)

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



// FUNCTION 148dd1108 FUN_148dd1108 body=89 status=ok
// SIG undefined FUN_148dd1108(void)

bool FUN_148dd1108(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dd1153;
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
LAB_148dd1153:
  return lVar6 == param_2;
}



// FUNCTION 148dd117e FUN_148dd117e body=118 status=ok
// SIG undefined FUN_148dd117e(void)

void FUN_148dd117e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9648f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9999b0;
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



// FUNCTION 148dd11f4 FUN_148dd11f4 body=118 status=ok
// SIG undefined FUN_148dd11f4(void)

void FUN_148dd11f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9648f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9999b0;
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



// FUNCTION 148dd126a FUN_148dd126a body=156 status=ok
// SIG undefined FUN_148dd126a(void)

void FUN_148dd126a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9648f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9999b0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd12f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd1306 FUN_148dd1306 body=104 status=ok
// SIG undefined FUN_148dd1306(void)

void FUN_148dd1306(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dd1353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dd1364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148dd136e FUN_148dd136e body=101 status=ok
// SIG undefined FUN_148dd136e(void)

ulonglong FUN_148dd136e(longlong param_1)

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
LAB_148dd13c8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148dd13c8;
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



// FUNCTION 148dd13d4 FUN_148dd13d4 body=230 status=ok
// SIG undefined FUN_148dd13d4(void)

undefined8 * FUN_148dd13d4(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd14bc FUN_148dd14bc body=386 status=ok
// SIG undefined FUN_148dd14bc(void)

longlong * FUN_148dd14bc(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148dd15cd:
    *puVar5 = &PTR_LAB_14b999a90;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b999a20;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148dd15cd;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b999a90;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b999a20;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148dd163e FUN_148dd163e body=64 status=ok
// SIG undefined FUN_148dd163e(void)

undefined8 * FUN_148dd163e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b999a20;
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



// FUNCTION 148dd1682 FUN_148dd1682 body=81 status=ok
// SIG undefined FUN_148dd1682(void)

undefined8 FUN_148dd1682(longlong param_1)

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



// FUNCTION 148dd16da FUN_148dd16da body=89 status=ok
// SIG undefined FUN_148dd16da(void)

bool FUN_148dd16da(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dd1725;
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
LAB_148dd1725:
  return lVar6 == param_2;
}



// FUNCTION 148dd175c FUN_148dd175c body=118 status=ok
// SIG undefined FUN_148dd175c(void)

void FUN_148dd175c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b999a90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b999a20;
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



// FUNCTION 148dd17d2 FUN_148dd17d2 body=118 status=ok
// SIG undefined FUN_148dd17d2(void)

void FUN_148dd17d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b999a90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b999a20;
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



// FUNCTION 148dd1848 FUN_148dd1848 body=156 status=ok
// SIG undefined FUN_148dd1848(void)

void FUN_148dd1848(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b999a90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b999a20;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd18d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd18e4 FUN_148dd18e4 body=104 status=ok
// SIG undefined FUN_148dd18e4(void)

void FUN_148dd18e4(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dd1931. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dd1942. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148dd194c FUN_148dd194c body=101 status=ok
// SIG undefined FUN_148dd194c(void)

ulonglong FUN_148dd194c(longlong param_1)

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
LAB_148dd19a6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148dd19a6;
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



// FUNCTION 148dd19b4 FUN_148dd19b4 body=62 status=ok
// SIG undefined FUN_148dd19b4(void)

void FUN_148dd19b4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421658;
  FUN_1449db362(param_1 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148dd19e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148dd19f2 FUN_148dd19f2 body=29 status=ok
// SIG undefined FUN_148dd19f2(void)

undefined8 FUN_148dd19f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd1a10 FUN_148dd1a10 body=73 status=ok
// SIG undefined FUN_148dd1a10(void)

undefined8 * FUN_148dd1a10(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b421658;
  FUN_1449db362(param_1 + 3);
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



// FUNCTION 148dd1a5a FUN_148dd1a5a body=167 status=ok
// SIG undefined FUN_148dd1a5a(void)

void FUN_148dd1a5a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148dd1ad5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148dd1ad5;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_148dd1ad5:
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
                    /* WARNING: Could not recover jumptable at 0x000148dd1af5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148dd1b02 FUN_148dd1b02 body=230 status=ok
// SIG undefined FUN_148dd1b02(void)

undefined8 * FUN_148dd1b02(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd1bea FUN_148dd1bea body=386 status=ok
// SIG undefined FUN_148dd1bea(void)

longlong * FUN_148dd1bea(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148dd1cfb:
    *puVar5 = &PTR_LAB_14b999ba0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b999b30;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148dd1cfb;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b999ba0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b999b30;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148dd1d6c FUN_148dd1d6c body=64 status=ok
// SIG undefined FUN_148dd1d6c(void)

undefined8 * FUN_148dd1d6c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b999b30;
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



// FUNCTION 148dd1db0 FUN_148dd1db0 body=81 status=ok
// SIG undefined FUN_148dd1db0(void)

undefined8 FUN_148dd1db0(longlong param_1)

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



// FUNCTION 148dd1e08 FUN_148dd1e08 body=89 status=ok
// SIG undefined FUN_148dd1e08(void)

bool FUN_148dd1e08(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dd1e53;
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
LAB_148dd1e53:
  return lVar6 == param_2;
}



// FUNCTION 148dd1e8a FUN_148dd1e8a body=118 status=ok
// SIG undefined FUN_148dd1e8a(void)

void FUN_148dd1e8a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b999ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b999b30;
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



// FUNCTION 148dd1f00 FUN_148dd1f00 body=118 status=ok
// SIG undefined FUN_148dd1f00(void)

void FUN_148dd1f00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b999ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b999b30;
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



// FUNCTION 148dd1f76 FUN_148dd1f76 body=156 status=ok
// SIG undefined FUN_148dd1f76(void)

void FUN_148dd1f76(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b999ba0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b999b30;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd2002. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd2012 FUN_148dd2012 body=104 status=ok
// SIG undefined FUN_148dd2012(void)

void FUN_148dd2012(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dd205f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dd2070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148dd207a FUN_148dd207a body=101 status=ok
// SIG undefined FUN_148dd207a(void)

ulonglong FUN_148dd207a(longlong param_1)

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
LAB_148dd20d4:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148dd20d4;
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



// FUNCTION 148dd20e2 FUN_148dd20e2 body=73 status=ok
// SIG undefined FUN_148dd20e2(void)

undefined8 * FUN_148dd20e2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b421658;
  FUN_1449db362(param_1 + 3);
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



// FUNCTION 148dd2130 FUN_148dd2130 body=81 status=ok
// SIG undefined FUN_148dd2130(void)

undefined8 FUN_148dd2130(longlong param_1)

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



// FUNCTION 148dd2188 FUN_148dd2188 body=118 status=ok
// SIG undefined FUN_148dd2188(void)

void FUN_148dd2188(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b999c40;
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



// FUNCTION 148dd21fe FUN_148dd21fe body=118 status=ok
// SIG undefined FUN_148dd21fe(void)

void FUN_148dd21fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b999c40;
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



// FUNCTION 148dd2274 FUN_148dd2274 body=156 status=ok
// SIG undefined FUN_148dd2274(void)

void FUN_148dd2274(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b961ce0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b999c40;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd2300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd2310 FUN_148dd2310 body=111 status=ok
// SIG undefined FUN_148dd2310(void)

void FUN_148dd2310(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148dd236b:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148dd236b;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd2367. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148dd23a8 FUN_148dd23a8 body=703 status=ok
// SIG undefined FUN_148dd23a8(void)

undefined8 FUN_148dd23a8(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar4 = (**(code **)(*param_1 + 0x300))();
  if (cVar4 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar2 = param_1 + 0x51;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    iStack_54 = 0;
    uStack_50 = 0;
    uStack_60 = plVar2;
    if ((int)param_1[0x54] == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar9 = (int)param_1[0x54];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    iStack_74 = iStack_54;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_90 = plVar1;
    if ((iStack_54 != iVar9) || (uStack_60 != plVar2)) {
      do {
        lVar5 = *local_90;
        lVar7 = (longlong)iStack_74;
        lVar6 = *(longlong *)(lVar5 + 0x10 + lVar7 * 0x20);
        if (lVar6 != 0) {
          if (param_3 != '\0') {
            FUN_144837e54(lVar6,0);
            lVar6 = *(longlong *)(lVar5 + lVar7 * 0x20 + 0x10);
          }
          if (((*(byte **)(lVar6 + 0x48) != (byte *)0x0) &&
              ((**(byte **)(lVar6 + 0x48) & 0x6b) == 3)) &&
             (plVar3 = *(longlong **)(lVar6 + 0x30), plVar3 != (longlong *)0x0)) {
            lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
            lVar6 = FUN_145ce1a14();
            if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
               ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                 == lVar6 + 0x30 && (cVar4 = (*(code *)*param_2)(param_2[1],plVar3), cVar4 != '\0'))
               )) goto LAB_148dd2664;
          }
        }
        local_78 = local_78 & ~uStack_84;
        FUN_1449c0562(&local_88);
      } while (((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar2 || iStack_74 != iVar9) ||
               local_90 != plVar1);
    }
  }
  else {
    plVar1 = param_1 + 0x39;
    plVar2 = param_1 + 0x3b;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    iStack_54 = 0;
    uStack_50 = 0;
    uStack_60 = plVar2;
    if ((int)param_1[0x3e] == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar9 = (int)param_1[0x3e];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    iStack_74 = iStack_54;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_90 = plVar1;
    if ((iStack_54 != iVar9) || (uStack_60 != plVar2)) {
      do {
        plVar3 = *(longlong **)(*local_90 + 0x10 + (longlong)iStack_74 * 0x20);
        if (plVar3 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar6 = FUN_145ce1a14();
          if ((((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
              (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
               lVar6 + 0x30)) && (cVar4 = (*(code *)*param_2)(param_2[1],plVar3), cVar4 != '\0'))
          goto LAB_148dd2664;
        }
        local_78 = local_78 & ~uStack_84;
        FUN_1449c0562(&local_88);
      } while (((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar2 || iStack_74 != iVar9) ||
               local_90 != plVar1);
    }
  }
  uVar8 = 0;
LAB_148dd262e:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
LAB_148dd2664:
  uVar8 = 1;
  goto LAB_148dd262e;
}



// FUNCTION 148dd2668 FUN_148dd2668 body=67 status=ok
// SIG undefined FUN_148dd2668(void)

void FUN_148dd2668(longlong *param_1,undefined8 param_2)

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



// FUNCTION 148dd26ac FUN_148dd26ac body=322 status=ok
// SIG undefined FUN_148dd26ac(void)

void FUN_148dd26ac(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x74 + (longlong)iVar4 * 0x78) * 4) =
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



// FUNCTION 148dd27f0 FUN_148dd27f0 body=275 status=ok
// SIG undefined FUN_148dd27f0(void)

void FUN_148dd27f0(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      FUN_1418f097c((longlong)iStack_44 * 0x78 + *local_60);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1410fd13e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd2904 FUN_148dd2904 body=116 status=ok
// SIG undefined FUN_148dd2904(void)

void FUN_148dd2904(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x78) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78 + 4) = uVar5;
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



// FUNCTION 148dd2978 FUN_148dd2978 body=116 status=ok
// SIG undefined FUN_148dd2978(void)

void FUN_148dd2978(longlong *param_1,int param_2)

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



// FUNCTION 148dd29ec FUN_148dd29ec body=179 status=ok
// SIG undefined FUN_148dd29ec(void)

char * FUN_148dd29ec(longlong *param_1,uint param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  char *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        pcVar1 = (char *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*pcVar1 == *param_3) {
          if (pcVar1 != (char *)0x0) goto LAB_148dd2a82;
          break;
        }
        iVar2 = *(int *)(pcVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_28 = param_3;
  FUN_148dd2aa0(param_1,&local_1c,param_2);
  pcVar1 = (char *)(*param_1 + (longlong)local_1c * 0x18);
LAB_148dd2a82:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pcVar1 + 8;
}



// FUNCTION 148dd2aa0 FUN_148dd2aa0 body=270 status=ok
// SIG undefined FUN_148dd2aa0(void)

undefined4 * FUN_148dd2aa0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148dd2bb0(param_1,local_48);
  *local_40 = *(undefined1 *)*param_4;
  *(undefined8 *)(local_40 + 8) = 0;
  *(undefined4 *)(local_40 + 0x10) = 0xffffffff;
  cVar1 = FUN_148dd2c96(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x14) = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x10) =
           *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_148dd2d88(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd2bb0 FUN_148dd2bb0 body=230 status=ok
// SIG undefined FUN_148dd2bb0(void)

int * FUN_148dd2bb0(longlong *param_1,int *param_2)

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



// FUNCTION 148dd2c96 FUN_148dd2c96 body=128 status=ok
// SIG undefined FUN_148dd2c96(void)

undefined8 FUN_148dd2c96(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
        pcVar1 = (char *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*pcVar1 == *param_3) {
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          *(undefined4 *)pcVar1 = uVar2;
          *(undefined4 *)(pcVar1 + 4) = uVar3;
          *(undefined4 *)(pcVar1 + 8) = uVar4;
          *(undefined4 *)(pcVar1 + 0xc) = uVar5;
          FUN_148dd2d16(uVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = *(int *)(pcVar1 + 0x10);
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 148dd2d16 FUN_148dd2d16 body=114 status=ok
// SIG undefined FUN_148dd2d16(void)

void FUN_148dd2d16(longlong *param_1,int param_2)

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



// FUNCTION 148dd2d88 FUN_148dd2d88 body=410 status=ok
// SIG undefined FUN_148dd2d88(void)

void FUN_148dd2d88(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar5 * 0x18);
        *(uint *)(lVar2 + 0x14 + lVar5 * 0x18) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 148dd2f24 FUN_148dd2f24 body=81 status=ok
// SIG undefined FUN_148dd2f24(void)

void FUN_148dd2f24(longlong *param_1,byte param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(byte *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_148dd2f76(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 148dd2f76 FUN_148dd2f76 body=87 status=ok
// SIG undefined FUN_148dd2f76(void)

void FUN_148dd2f76(longlong *param_1,int param_2)

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
  FUN_148dd2d16();
  return;
}



// FUNCTION 148dd2fce FUN_148dd2fce body=29 status=ok
// SIG undefined FUN_148dd2fce(void)

undefined8 FUN_148dd2fce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd3006 FUN_148dd3006 body=29 status=ok
// SIG undefined FUN_148dd3006(void)

bool FUN_148dd3006(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148dd3024 FUN_148dd3024 body=26 status=ok
// SIG undefined FUN_148dd3024(void)

bool FUN_148dd3024(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dd303e FUN_148dd303e body=24 status=ok
// SIG undefined FUN_148dd303e(void)

bool FUN_148dd303e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148dd3056 FUN_148dd3056 body=101 status=ok
// SIG undefined FUN_148dd3056(void)

void FUN_148dd3056(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b999f30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dd30bc FUN_148dd30bc body=101 status=ok
// SIG undefined FUN_148dd30bc(void)

void FUN_148dd30bc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b999f30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dd3122 FUN_148dd3122 body=134 status=ok
// SIG undefined FUN_148dd3122(void)

void FUN_148dd3122(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b999f30;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd3199. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd31a8 FUN_148dd31a8 body=39 status=ok
// SIG undefined FUN_148dd31a8(void)

void FUN_148dd31a8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dd31cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148dd31d0 FUN_148dd31d0 body=146 status=ok
// SIG undefined FUN_148dd31d0(void)

bool FUN_148dd31d0(longlong param_1)

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



// FUNCTION 148dd3264 FUN_148dd3264 body=29 status=ok
// SIG undefined FUN_148dd3264(void)

undefined8 FUN_148dd3264(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd329c FUN_148dd329c body=29 status=ok
// SIG undefined FUN_148dd329c(void)

bool FUN_148dd329c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 == param_2;
}



// FUNCTION 148dd32ba FUN_148dd32ba body=26 status=ok
// SIG undefined FUN_148dd32ba(void)

bool FUN_148dd32ba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x20,1);
  return lVar1 == 0;
}



// FUNCTION 148dd32d4 FUN_148dd32d4 body=24 status=ok
// SIG undefined FUN_148dd32d4(void)

bool FUN_148dd32d4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 != 0;
}



// FUNCTION 148dd32f8 FUN_148dd32f8 body=109 status=ok
// SIG undefined FUN_148dd32f8(void)

void FUN_148dd32f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99a010;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b999fa0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 148dd3366 FUN_148dd3366 body=109 status=ok
// SIG undefined FUN_148dd3366(void)

void FUN_148dd3366(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99a010;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b999fa0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 148dd33d4 FUN_148dd33d4 body=142 status=ok
// SIG undefined FUN_148dd33d4(void)

void FUN_148dd33d4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined4 uVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b99a010;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14b999fa0;
  DVar3 = *(DWORD *)(param_1 + 0x24);
  DVar4 = *(DWORD *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar3;
  p_Var1->Flags = DVar4;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar5;
  p_Var1->SpareWORD = (short)((uint)uVar5 >> 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148dd3453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd3462 FUN_148dd3462 body=44 status=ok
// SIG undefined FUN_148dd3462(void)

void FUN_148dd3462(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000148dd348b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))
            (*(int *)(param_1 + 0x30) + lVar1,*(undefined8 *)(param_1 + 8),
             *(undefined4 *)(param_1 + 0x10),*(code **)(param_1 + 0x28));
  return;
}



// FUNCTION 148dd348e FUN_148dd348e body=154 status=ok
// SIG undefined FUN_148dd348e(void)

bool FUN_148dd348e(longlong param_1)

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
    FUN_140192332(param_1 + 0x20,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x28))
              (*(int *)(param_1 + 0x30) + lVar2,*(undefined8 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0x10));
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



// FUNCTION 148dd352c FUN_148dd352c body=91 status=ok
// SIG undefined FUN_148dd352c(void)

void FUN_148dd352c(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_1 = param_1 + 0x70;
  do {
    *(undefined4 *)(param_1 + -0x70) = 0;
    puVar2 = &DAT_14c846480;
    puVar3 = (undefined8 *)(param_1 + -0x60);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_140785382(param_1,7);
    *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
    param_1 = param_1 + 0xb0;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 148dd3588 FUN_148dd3588 body=146 status=ok
// SIG undefined FUN_148dd3588(void)

void FUN_148dd3588(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148dd361c FUN_148dd361c body=86 status=ok
// SIG undefined FUN_148dd361c(void)

void FUN_148dd361c(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)(*param_1 + 0x160);
  FUN_1407778c7(_Dst);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + 2);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((ulonglong)param_2 * 0xb0 + (longlong)_Dst),(longlong)iVar2 * 0xb0);
    iVar1 = (int)param_1[1];
  }
  *(uint *)(param_1 + 1) = iVar1 - param_2;
  return;
}



// FUNCTION 148dd3672 FUN_148dd3672 body=62 status=ok
// SIG undefined FUN_148dd3672(void)

void FUN_148dd3672(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148dd36b0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xb0,0x10);
  }
  return;
}



// FUNCTION 148dd36b0 FUN_148dd36b0 body=110 status=ok
// SIG undefined FUN_148dd36b0(void)

ulonglong FUN_148dd36b0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xb0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148dd36e9;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xb0,0x10);
      param_2 = param_2 / 0xb0;
    }
  }
LAB_148dd36e9:
  return param_2 & 0xffffffff;
}



// FUNCTION 148dd372c FUN_148dd372c body=108 status=ok
// SIG undefined FUN_148dd372c(void)

undefined8 * FUN_148dd372c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x180);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b99a2a0;
  memset(puVar1 + 2,0,0x170);
  FUN_145c42fa8(puVar1 + 2);
  puVar1[2] = &PTR_FUN_14b627170;
  puVar1[0x2f] = 0;
  return puVar1;
}



// FUNCTION 148dd37a2 FUN_148dd37a2 body=29 status=ok
// SIG undefined FUN_148dd37a2(void)

undefined8 FUN_148dd37a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd37c0 FUN_148dd37c0 body=68 status=ok
// SIG undefined FUN_148dd37c0(void)

undefined8 * FUN_148dd37c0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99a300;
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



// FUNCTION 148dd3808 FUN_148dd3808 body=81 status=ok
// SIG undefined FUN_148dd3808(void)

undefined8 FUN_148dd3808(longlong param_1)

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



// FUNCTION 148dd3860 FUN_148dd3860 body=89 status=ok
// SIG undefined FUN_148dd3860(void)

bool FUN_148dd3860(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dd38ab;
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
LAB_148dd38ab:
  return lVar6 == param_2;
}



// FUNCTION 148dd38d6 FUN_148dd38d6 body=118 status=ok
// SIG undefined FUN_148dd38d6(void)

void FUN_148dd38d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a7c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a300;
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



// FUNCTION 148dd394c FUN_148dd394c body=156 status=ok
// SIG undefined FUN_148dd394c(void)

void FUN_148dd394c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42a7c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99a300;
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
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148dd39d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd39e8 FUN_148dd39e8 body=98 status=ok
// SIG undefined FUN_148dd39e8(void)

void FUN_148dd39e8(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148dd3a31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dd3a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148dd3a4a FUN_148dd3a4a body=118 status=ok
// SIG undefined FUN_148dd3a4a(void)

ulonglong FUN_148dd3a4a(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd3ac2 FUN_148dd3ac2 body=62 status=ok
// SIG undefined FUN_148dd3ac2(void)

void FUN_148dd3ac2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148dd3b00(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x70,8);
  }
  return;
}



// FUNCTION 148dd3b00 FUN_148dd3b00 body=104 status=ok
// SIG undefined FUN_148dd3b00(void)

ulonglong FUN_148dd3b00(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x70) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148dd3b36;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x70,8);
      param_2 = param_2 / 0x70;
    }
  }
LAB_148dd3b36:
  return param_2 & 0xffffffff;
}



// FUNCTION 148dd3b68 FUN_148dd3b68 body=64 status=ok
// SIG undefined FUN_148dd3b68(void)

undefined8 * FUN_148dd3b68(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99a370;
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



// FUNCTION 148dd3bac FUN_148dd3bac body=81 status=ok
// SIG undefined FUN_148dd3bac(void)

undefined8 FUN_148dd3bac(longlong param_1)

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



// FUNCTION 148dd3c04 FUN_148dd3c04 body=89 status=ok
// SIG undefined FUN_148dd3c04(void)

bool FUN_148dd3c04(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dd3c4f;
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
LAB_148dd3c4f:
  return lVar6 == param_2;
}



// FUNCTION 148dd3c7a FUN_148dd3c7a body=118 status=ok
// SIG undefined FUN_148dd3c7a(void)

void FUN_148dd3c7a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b99a370;
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



// FUNCTION 148dd3cf0 FUN_148dd3cf0 body=118 status=ok
// SIG undefined FUN_148dd3cf0(void)

void FUN_148dd3cf0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b99a370;
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



// FUNCTION 148dd3d66 FUN_148dd3d66 body=156 status=ok
// SIG undefined FUN_148dd3d66(void)

void FUN_148dd3d66(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b99a370;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd3df2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd3e02 FUN_148dd3e02 body=100 status=ok
// SIG undefined FUN_148dd3e02(void)

void FUN_148dd3e02(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dd3e4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dd3e5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148dd3e66 FUN_148dd3e66 body=100 status=ok
// SIG undefined FUN_148dd3e66(void)

ulonglong FUN_148dd3e66(longlong param_1)

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
LAB_148dd3ebf:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148dd3ebf;
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



// FUNCTION 148dd3eca FUN_148dd3eca body=42 status=ok
// SIG undefined FUN_148dd3eca(void)

void FUN_148dd3eca(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 148dd3ef4 FUN_148dd3ef4 body=143 status=ok
// SIG undefined FUN_148dd3ef4(void)

void FUN_148dd3ef4(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148dd3f84 FUN_148dd3f84 body=457 status=ok
// SIG undefined FUN_148dd3f84(void)

longlong * FUN_148dd3f84(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *(undefined4 *)(param_3 + 1);
  uVar5 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar6 = (undefined8 *)*param_1;
  FUN_141085fe4(param_2,&local_48);
  plVar3 = local_40;
  if (local_40 == (longlong *)0x0) {
    *puVar6 = &PTR_LAB_14ac8b4c0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar6[2] = lVar8;
    *puVar6 = &PTR_FUN_14b99a3e0;
    puVar6[3] = local_48;
    puVar6[4] = 0;
    puVar6[5] = uVar5;
    *(undefined4 *)(puVar6 + 6) = uVar4;
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    *puVar6 = &PTR_LAB_14ac8b4c0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar6[2] = lVar8;
    *puVar6 = &PTR_FUN_14b99a3e0;
    puVar6[3] = local_48;
    puVar6[4] = local_40;
    LOCK();
    *(int *)((longlong)local_40 + 0xc) = *(int *)((longlong)local_40 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar6 + 6) = uVar4;
    puVar6[5] = uVar5;
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
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
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd4150 FUN_148dd4150 body=64 status=ok
// SIG undefined FUN_148dd4150(void)

undefined8 * FUN_148dd4150(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99a3e0;
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



// FUNCTION 148dd4194 FUN_148dd4194 body=81 status=ok
// SIG undefined FUN_148dd4194(void)

undefined8 FUN_148dd4194(longlong param_1)

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



// FUNCTION 148dd41ec FUN_148dd41ec body=89 status=ok
// SIG undefined FUN_148dd41ec(void)

bool FUN_148dd41ec(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dd4237;
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
LAB_148dd4237:
  return lVar6 == param_2;
}



// FUNCTION 148dd4262 FUN_148dd4262 body=118 status=ok
// SIG undefined FUN_148dd4262(void)

void FUN_148dd4262(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a3e0;
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



// FUNCTION 148dd42d8 FUN_148dd42d8 body=118 status=ok
// SIG undefined FUN_148dd42d8(void)

void FUN_148dd42d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a3e0;
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



// FUNCTION 148dd434e FUN_148dd434e body=156 status=ok
// SIG undefined FUN_148dd434e(void)

void FUN_148dd434e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8b4c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99a3e0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd43da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd43ea FUN_148dd43ea body=104 status=ok
// SIG undefined FUN_148dd43ea(void)

void FUN_148dd43ea(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dd4437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dd4448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148dd4452 FUN_148dd4452 body=101 status=ok
// SIG undefined FUN_148dd4452(void)

ulonglong FUN_148dd4452(longlong param_1)

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
LAB_148dd44ac:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148dd44ac;
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



// FUNCTION 148dd44b8 FUN_148dd44b8 body=64 status=ok
// SIG undefined FUN_148dd44b8(void)

undefined8 * FUN_148dd44b8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99a450;
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



// FUNCTION 148dd44fc FUN_148dd44fc body=81 status=ok
// SIG undefined FUN_148dd44fc(void)

undefined8 FUN_148dd44fc(longlong param_1)

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



// FUNCTION 148dd4554 FUN_148dd4554 body=89 status=ok
// SIG undefined FUN_148dd4554(void)

bool FUN_148dd4554(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dd459f;
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
LAB_148dd459f:
  return lVar6 == param_2;
}



// FUNCTION 148dd45d6 FUN_148dd45d6 body=118 status=ok
// SIG undefined FUN_148dd45d6(void)

void FUN_148dd45d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99a4c0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b99a450;
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



// FUNCTION 148dd464c FUN_148dd464c body=118 status=ok
// SIG undefined FUN_148dd464c(void)

void FUN_148dd464c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99a4c0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b99a450;
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



// FUNCTION 148dd46c2 FUN_148dd46c2 body=156 status=ok
// SIG undefined FUN_148dd46c2(void)

void FUN_148dd46c2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b99a4c0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b99a450;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd474e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd475e FUN_148dd475e body=112 status=ok
// SIG undefined FUN_148dd475e(void)

void FUN_148dd475e(longlong param_1,undefined8 param_2)

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
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2,
                   *(undefined4 *)(param_1 + 8));
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
                    /* WARNING: Could not recover jumptable at 0x000148dd47af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dd47c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))
            ((longlong)*(int *)(param_1 + 0x30),param_2,*(undefined4 *)(param_1 + 8));
  return;
}


