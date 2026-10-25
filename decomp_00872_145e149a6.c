// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145e149a6 FUN_145e149a6 body=26 status=ok
// SIG undefined FUN_145e149a6(void)

undefined8 FUN_145e149a6(longlong param_1,undefined8 param_2)

{
  FUN_145e149c0(param_1 + 0x18);
  return param_2;
}



// FUNCTION 145e149c0 FUN_145e149c0 body=422 status=ok
// SIG undefined FUN_145e149c0(void)

longlong * FUN_145e149c0(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb23f10 != (longlong *)0x0 && DAT_14cb23f18 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb23f10 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb23f10;
    if (DAT_14cb23f18 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    goto LAB_145e14a91;
  }
  lVar3 = FUN_14001cc68(0x188,0x10);
  FUN_141569568(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ac8b4a0;
  plVar4[2] = lVar3;
  local_30 = plVar4;
  if (lVar3 == 0) {
    local_38 = 0;
    goto LAB_145e14a91;
  }
  local_38 = lVar3;
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_145e14a91;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_145e14b0c:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_145e14a87;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(lVar3 + 0x10) = lVar3;
    if (*(longlong **)(lVar3 + 0x18) != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(lVar3 + 0x18);
      if (plVar5 != (longlong *)0x0) goto LAB_145e14b0c;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_145e14a87:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_145e14a91:
  *param_2 = local_38;
  param_2[1] = (longlong)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145e14b68 FUN_145e14b68 body=118 status=ok
// SIG undefined FUN_145e14b68(void)

void FUN_145e14b68(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e14be0();
  local_18 = 0;
  local_28 = 1;
  local_20 = 1;
  local_38 = L"RandomNameIdx";
  local_30 = 0x100000013;
  FUN_140c2c993(&local_38,param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e14be0 FUN_145e14be0 body=161 status=ok
// SIG undefined FUN_145e14be0(void)

void FUN_145e14be0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c2c5be();
  local_28 = 0;
  local_38 = 0;
  local_30 = 1;
  local_48 = L"ReplicatedGestaltPartsList";
  local_40 = 0x100000011;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"AnimState";
  local_40 = 0x100000012;
  FUN_140c2c993(&local_48,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e14c82 FUN_145e14c82 body=696 status=ok
// SIG undefined FUN_145e14c82(void)

void FUN_145e14c82(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined1 local_c0;
  undefined1 local_b0 [8];
  longlong local_a8 [11];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar3 = FUN_1412e481c();
  if ((-1 < (int)uVar3) && ((int)uVar3 < (int)param_1[0x57])) {
    iVar2 = (int)param_1[100];
    if ((iVar2 != -1) && (iVar2 != (int)param_1[0x5f])) {
      plVar1 = param_1 + 0x5c;
      if (param_1[0x5c] == 0) {
        pcVar7 = "MenuSwitchRight";
        if (iVar2 < (int)param_1[0x5f]) {
          pcVar7 = "MenuSwitchLeft";
        }
        FUN_1446ddc76(local_a8,pcVar7,1);
        *plVar1 = local_a8[0];
      }
      uVar5 = FUN_14001cc68(0xa0,0x10);
      local_a8[4] = 0;
      local_a8[7] = 0;
      local_a8[8] = 0;
      local_a8[9] = 0;
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_a8[5] = 0x8000000000;
      local_a8[6] = 0xffffffff;
      lVar6 = FUN_14479d2ce(param_1 + 6);
      local_c0 = 0;
      local_c8 = local_a8;
      FUN_145e14f3c(uVar5,param_1[6],lVar6 + 0x3a0,plVar1);
      FUN_140391314(param_1,uVar5);
      local_a8[9] = local_a8[9] & 0xffffffff00000000;
      if (local_a8[8] != 0) {
        FUN_1400020a8();
      }
      FUN_14064e7da(local_a8);
      uVar5 = FUN_14001cc68(0xa0,0x10);
      local_a8[4] = 0;
      local_a8[7] = 0;
      local_a8[8] = 0;
      local_a8[9] = 0;
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_a8[5] = 0x8000000000;
      local_a8[6] = 0xffffffff;
      FUN_1446ddc76(local_b0,"overlay_menu",1);
      local_c0 = 0;
      local_c8 = local_a8;
      FUN_145e14f3c(uVar5,param_1[6],local_b0,plVar1);
      FUN_140391314(param_1,uVar5);
      local_a8[9] = local_a8[9] & 0xffffffff00000000;
      if (local_a8[8] != 0) {
        FUN_1400020a8();
      }
      FUN_14064e7da(local_a8);
    }
    FUN_14615dab0(param_1);
    (**(code **)(*param_1 + 0x1a0))(param_1,(int)param_1[100],1);
    if ((-1 < (int)param_1[100]) &&
       ((int)param_1[100] < *(int *)(param_1[0x56] + 0x18 + (ulonglong)uVar3 * 0x30))) {
      uVar4 = FUN_1412e481c(param_1);
      local_a8[0] = CONCAT44(local_a8[0]._4_4_,uVar4);
      FUN_145e1502a(param_1,local_a8,param_1 + 100);
    }
    if ((-1 < *(int *)((longlong)param_1 + 0x324)) &&
       (*(int *)((longlong)param_1 + 0x324) < (int)param_1[0x62])) {
      FUN_14573e566(param_1,(longlong)param_1 + 0x324);
    }
    *(undefined4 *)((longlong)param_1 + 0x324) = 0xffffffff;
    *(undefined8 *)((longlong)param_1 + 0x31c) = 0xffffffff00000000;
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e14f3c FUN_145e14f3c body=237 status=ok
// SIG undefined FUN_145e14f3c(void)

undefined8 *
FUN_145e14f3c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14b47ada0;
  FUN_1446ddc76(&local_50,"PlayAnimationOnView",1);
  FUN_14039176c(param_1,param_2,local_50,1);
  *param_1 = &PTR_FUN_14b47ada0;
  param_1[7] = *param_3;
  param_1[8] = *param_4;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  FUN_140d188f2(param_1 + 9,param_5);
  *(undefined1 *)(param_1 + 0x13) = param_6;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e1502a FUN_145e1502a body=236 status=ok
// SIG undefined FUN_145e1502a(void)

void FUN_145e1502a(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *param_2;
  if ((-1 < (longlong)iVar1) && (iVar1 < (int)param_1[0x57])) {
    lVar4 = (longlong)*param_3;
    if ((-1 < lVar4) &&
       (lVar3 = (longlong)iVar1 * 0x30 + param_1[0x56], *param_3 < *(int *)(lVar3 + 0x18))) {
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(char *)(lVar3 + 8 + lVar4 * 0xb0) == '\0') &&
         (lVar3 = lVar3 + lVar4 * 0xb0, *(char *)(lVar3 + 0x80) == '\0')) {
        cVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,lVar4,0);
        if (cVar2 != '\0') {
          (**(code **)(*param_1 + 0x1b0))(param_1,*param_2,*param_3,0);
          cVar2 = (**(code **)(*param_1 + 0x1e8))(param_1);
          if ((cVar2 != '\0') && ((longlong)*(int *)(lVar3 + 0x90) != 0)) {
            lVar5 = *(longlong *)(lVar3 + 0x88);
            lVar4 = lVar5 + (longlong)*(int *)(lVar3 + 0x90) * 0x18;
            do {
              (**(code **)(*param_1 + 0x100))(param_1,lVar5,lVar5 + 8);
              lVar5 = lVar5 + 0x18;
            } while (lVar5 != lVar4);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 145e15116 FUN_145e15116 body=40 status=ok
// SIG undefined FUN_145e15116(void)

undefined8 FUN_145e15116(undefined8 param_1,int param_2)

{
  FUN_145e1513e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e1513e FUN_145e1513e body=430 status=ok
// SIG undefined FUN_145e1513e(void)

void FUN_145e1513e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14bddd190;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 100);
  while (puVar1 = (undefined8 *)param_1[0x61], puVar1 != (undefined8 *)0x0) {
    param_1[0x61] = *puVar1;
    FUN_145e15580(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_145e152ec(param_1 + 0x37);
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1534c(param_1 + 0x2b);
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_145e153ee(param_1 + 0x21);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_145e15382(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_145e153b8(param_1 + 0xd);
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145e15321(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e152ec FUN_145e152ec body=53 status=ok
// SIG undefined FUN_145e152ec(void)

void FUN_145e152ec(longlong *param_1)

{
  FUN_145e15426();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e15321 FUN_145e15321 body=43 status=ok
// SIG undefined FUN_145e15321(void)

void FUN_145e15321(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1496eb696(param_1);
    param_1 = param_1 + 0x98;
  }
  return;
}



// FUNCTION 145e1534c FUN_145e1534c body=53 status=ok
// SIG undefined FUN_145e1534c(void)

void FUN_145e1534c(longlong *param_1)

{
  FUN_145e156b8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e15382 FUN_145e15382 body=53 status=ok
// SIG undefined FUN_145e15382(void)

void FUN_145e15382(longlong *param_1)

{
  FUN_145e1582a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e153b8 FUN_145e153b8 body=53 status=ok
// SIG undefined FUN_145e153b8(void)

void FUN_145e153b8(longlong *param_1)

{
  FUN_145e1599e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e153ee FUN_145e153ee body=55 status=ok
// SIG undefined FUN_145e153ee(void)

void FUN_145e153ee(longlong *param_1)

{
  FUN_145e15c94(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e15426 FUN_145e15426 body=344 status=ok
// SIG undefined FUN_145e15426(void)

void FUN_145e15426(longlong *param_1)

{
  longlong *plVar1;
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
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
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
      FUN_1496e5474(*local_68 + (longlong)iStack_4c * 0x48 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403af08a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e15580 FUN_145e15580 body=203 status=ok
// SIG undefined FUN_145e15580(void)

void FUN_145e15580(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  FUN_14090bbce(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_145e15680(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_145e152ec(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_145e1564b(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e1564b FUN_145e1564b body=52 status=ok
// SIG undefined FUN_145e1564b(void)

void FUN_145e1564b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x78);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145e15680 FUN_145e15680 body=55 status=ok
// SIG undefined FUN_145e15680(void)

void FUN_145e15680(longlong *param_1)

{
  FUN_145e15b12(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e156b8 FUN_145e156b8 body=369 status=ok
// SIG undefined FUN_145e156b8(void)

void FUN_145e156b8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c;
      if (*(longlong *)(lVar2 + 0x40 + lVar3 * 0x58) != 0) {
        FUN_1400020a8();
      }
      FUN_1478571f4(lVar2 + lVar3 * 0x58 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e91948(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e1582a FUN_145e1582a body=370 status=ok
// SIG undefined FUN_145e1582a(void)

void FUN_145e1582a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_1496ebcfe(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e1599e FUN_145e1599e body=370 status=ok
// SIG undefined FUN_145e1599e(void)

void FUN_145e1599e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_1493c129c(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e15b12 FUN_145e15b12 body=384 status=ok
// SIG undefined FUN_145e15b12(void)

void FUN_145e15b12(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e15c94 FUN_145e15c94 body=440 status=ok
// SIG undefined FUN_145e15c94(void)

void FUN_145e15c94(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_88 = local_68;
  local_80 = local_60;
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_90 = param_1;
  if (iStack_54 < (int)local_60[3]) {
    do {
      lVar2 = *local_90;
      lVar4 = (longlong)iStack_74 * 0x90;
      *(undefined **)(lVar2 + 8 + lVar4) = &DAT_14a176f00;
      if (*(longlong *)(lVar2 + 0x78 + lVar4) != 0) {
        FUN_1400020a8();
      }
      *(undefined ***)(lVar2 + lVar4 + 8) = &PTR_FUN_14a177080;
      FUN_144a78a1a(lVar2 + lVar4 + 0x10);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < (int)local_80[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140d97c6c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar5 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar3 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e15e4e FUN_145e15e4e body=40 status=ok
// SIG undefined FUN_145e15e4e(void)

undefined8 FUN_145e15e4e(undefined8 param_1,int param_2)

{
  FUN_145e15e76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e15e76 FUN_145e15e76 body=385 status=ok
// SIG undefined FUN_145e15e76(void)

void FUN_145e15e76(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14adfe6c0;
  puVar1 = (undefined8 *)param_1[0x437];
  while (puVar1 != (undefined8 *)0x0) {
    param_1[0x437] = *puVar1;
    FUN_1400020a8();
    puVar1 = (undefined8 *)param_1[0x437];
  }
  *(undefined4 *)(param_1 + 0x432) = 0;
  if (param_1[0x431] != 0) {
    FUN_1400020a8();
  }
  FUN_145e15ff8(param_1 + 0x429);
  *(undefined4 *)(param_1 + 0x428) = 0;
  if (param_1[0x427] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1602e(param_1 + 0x41f);
  *(undefined4 *)(param_1 + 0x41e) = 0;
  if (param_1[0x41d] != 0) {
    FUN_1400020a8();
  }
  FUN_1409da246(param_1 + 0x415);
  if (param_1[0x413] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x411] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x409] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x407] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x405] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x403] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1);
  return;
}



// FUNCTION 145e15ff8 FUN_145e15ff8 body=53 status=ok
// SIG undefined FUN_145e15ff8(void)

void FUN_145e15ff8(longlong *param_1)

{
  FUN_145e160be();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e1602e FUN_145e1602e body=53 status=ok
// SIG undefined FUN_145e1602e(void)

void FUN_145e1602e(longlong *param_1)

{
  FUN_145e16064();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e16064 FUN_145e16064 body=90 status=ok
// SIG undefined FUN_145e16064(void)

void FUN_145e16064(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145e160be FUN_145e160be body=315 status=ok
// SIG undefined FUN_145e160be(void)

void FUN_145e160be(longlong *param_1)

{
  longlong *plVar1;
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
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
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
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e16202 FUN_145e16202 body=143 status=ok
// SIG undefined FUN_145e16202(void)

undefined8 * FUN_145e16202(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Dst;
  
  uVar1 = FUN_14007ca06();
  FUN_145c2210c(param_1,uVar1);
  *param_1 = &PTR_FUN_14bcbb170;
  param_1[7] = &PTR_FUN_14bcbb460;
  param_1[8] = &PTR_FUN_14bcbb480;
  param_1[9] = &PTR_FUN_14bcbb4c0;
  param_1[10] = &PTR_FUN_14bcbb4e0;
  _Dst = (void *)FUN_14001cc68(0x158);
  memset(_Dst,0,0x158);
  FUN_145e16292(_Dst);
  param_1[0xb] = _Dst;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 145e16292 FUN_145e16292 body=224 status=ok
// SIG undefined FUN_145e16292(void)

longlong FUN_145e16292(longlong param_1)

{
  FUN_1458b0bbe();
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  return param_1;
}



// FUNCTION 145e16372 FUN_145e16372 body=118 status=ok
// SIG undefined FUN_145e16372(void)

void FUN_145e16372(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1405f1eac();
  lVar1 = FUN_141283ace(DAT_14cb0d2b0);
  if (lVar1 != 0) {
    FUN_145e163ea(lVar1 + 0x210,&local_20,param_1);
    *(undefined8 *)(param_1 + 0x488) = local_20;
  }
  FUN_145e164e0(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e163ea FUN_145e163ea body=244 status=ok
// SIG undefined FUN_145e163ea(void)

undefined8 FUN_145e163ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b9c0710;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_145e164e0;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e164e0 FUN_145e164e0 body=432 status=ok
// SIG undefined FUN_145e164e0(void)

void FUN_145e164e0(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)(param_1 + 0x168);
  if (plVar1 == (longlong *)0x0) goto LAB_145e1664c;
  lVar3 = FUN_144a5dd5e();
  if ((*(int *)(plVar1[2] + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_145e1664c;
  if ((*(byte *)(param_1 + 0x398) & 2) == 0) {
LAB_145e1666f:
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_141283ace(DAT_14cb0d2b0);
    if (lVar3 == 0) goto LAB_145e1666f;
    uVar2 = FUN_145806332(lVar3);
  }
  FUN_140002266(local_50,L"GbxCoreStat.ShowStats %hhu",uVar2);
  (**(code **)(*plVar1 + 0xd40))(plVar1,local_40,local_50,1);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(local_50,L"GbxCoreStat.ShowStatsEditor %hhu",uVar2);
  (**(code **)(*plVar1 + 0xd40))(plVar1,local_60,local_50,1);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(local_50,L"gbx.ui.setvisibility %hhu",*(uint *)(param_1 + 0x398) >> 1 & 1);
  (**(code **)(*plVar1 + 0xd40))(plVar1,local_70,local_50,1);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
LAB_145e1664c:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e16692 FUN_145e16692 body=287 status=ok
// SIG undefined FUN_145e16692(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e16692(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9acb70) {
    FUN_144b3d300(&DAT_14c9acb70);
    if (DAT_14c9acb70 == -1) {
      FUN_145e167b2();
      FUN_140db5666(&DAT_14c9acac8,2,&DAT_14c9aca60,L"TBasePassVSFSelfShadowedTranslucencyPolicy",
                    L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,FUN_14712adcc,
                    FUN_14712ad78,FUN_14174649a,&LAB_14712ad74,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9acac8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c23b);
      _Init_thread_footer(&DAT_14c9acb70);
    }
  }
  return &DAT_14c9acac8;
}



// FUNCTION 145e167b2 FUN_145e167b2 body=205 status=ok
// SIG undefined FUN_145e167b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e167b2(void)

{
  if ((DAT_14c9acac7 & 2) == 0) {
    DAT_14c9acac7 = DAT_14c9acac7 | 2;
    _DAT_14c9aca68 = L"TBasePassVSFSelfShadowedTranslucencyPolicy";
    _DAT_14c9aca80 = FUN_146826540;
    _DAT_14c9aca88 = FUN_146825d77;
    _DAT_14c9aca90 = FUN_146825fd6;
    _DAT_14c9aca98 = FUN_1407e02ea;
    _DAT_14c9acaa0 = FUN_146826273;
    _DAT_14c9aca78 = FUN_14712ad3a;
    _DAT_14c9acab8 = 0xffffffff00000110;
    _DAT_14c9acac0 = 8;
    DAT_14c9acac4 = 0;
    _DAT_14c9acaa8 = &LAB_14712ad70;
    FUN_145e16880();
    FUN_1407e00cc(&DAT_14c9aca60);
    return;
  }
  return;
}



// FUNCTION 145e16880 FUN_145e16880 body=133 status=ok
// SIG undefined FUN_145e16880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e16880(void)

{
  _DAT_14c9b8bb8 = L"BASE";
  DAT_14c9b8be2 = 4;
  FUN_145e16906();
  _DAT_14c9b8bc8 = DAT_14c9aca70;
  _DAT_14c9b8bc0 = &DAT_14c9b8be8;
  _DAT_14c9b8bd0 = &LAB_14682652b;
  DAT_14c9aca70 = &DAT_14c9b8bb8;
  DAT_14c9acac5 = DAT_14c9acac5 + '\x01';
  _DAT_14c9b8bd8 = 0x100000000;
  if (DAT_14c9b8c4c != '\0') {
    DAT_14c9acac6 = DAT_14c9acac6 + '\x01';
  }
  return;
}



// FUNCTION 145e16906 FUN_145e16906 body=205 status=ok
// SIG undefined FUN_145e16906(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e16906(void)

{
  if ((DAT_14c9b8c4f & 2) == 0) {
    DAT_14c9b8c4f = DAT_14c9b8c4f | 2;
    _DAT_14c9b8bf0 = L"TBasePassVertexShaderBaseType";
    _DAT_14c9b8c08 = FUN_146826540;
    _DAT_14c9b8c10 = FUN_146825d77;
    _DAT_14c9b8c18 = FUN_146825fd6;
    _DAT_14c9b8c20 = FUN_1407e02ea;
    _DAT_14c9b8c28 = FUN_146826273;
    _DAT_14c9b8c00 = FUN_14713be2e;
    _DAT_14c9b8c40 = 0xffffffff00000110;
    _DAT_14c9b8c48 = 8;
    DAT_14c9b8c4c = 0;
    _DAT_14c9b8c30 = &LAB_14713be64;
    FUN_145e169d4();
    FUN_1407e00cc(&DAT_14c9b8be8);
    return;
  }
  return;
}



// FUNCTION 145e169d4 FUN_145e169d4 body=133 status=ok
// SIG undefined FUN_145e169d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e169d4(void)

{
  _DAT_14c9b8c50 = L"BASE";
  DAT_14c9b8c7a = 4;
  FUN_145e16a5a();
  _DAT_14c9b8c60 = DAT_14c9b8bf8;
  _DAT_14c9b8c58 = &DAT_14c9b8c80;
  _DAT_14c9b8c68 = &LAB_14682652b;
  DAT_14c9b8bf8 = &DAT_14c9b8c50;
  DAT_14c9b8c4d = DAT_14c9b8c4d + '\x01';
  _DAT_14c9b8c70 = 0x100000000;
  if (DAT_14c9b8ce4 != '\0') {
    DAT_14c9b8c4e = DAT_14c9b8c4e + '\x01';
  }
  return;
}



// FUNCTION 145e16a5a FUN_145e16a5a body=313 status=ok
// SIG undefined FUN_145e16a5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e16a5a(void)

{
  if ((DAT_14c9b8ce7 & 2) == 0) {
    DAT_14c9b8ce7 = DAT_14c9b8ce7 | 2;
    _DAT_14c9b8c88 = L"TBasePassVertexShaderPolicyParamType";
    _DAT_14c9b8ca0 = FUN_146826540;
    _DAT_14c9b8ca8 = FUN_146825d77;
    _DAT_14c9b8cb0 = FUN_146825fd6;
    _DAT_14c9b8cb8 = FUN_1407e02ea;
    _DAT_14c9b8cc0 = FUN_146826273;
    _DAT_14c9b8c98 = FUN_14713be68;
    _DAT_14c9b8cd8 = 0xffffffff00000110;
    _DAT_14c9b8ce0 = 8;
    DAT_14c9b8ce4 = 0;
    _DAT_14c9b8cc8 = &LAB_14713be9e;
    _DAT_14c9b8ce8 = L"ReflectionCaptureBuffer";
    DAT_14c9b8d12 = FUN_140850cc5();
    _DAT_14c9b8cf0 = FUN_14106a12a();
    _DAT_14c9b8d00 = &LAB_14682652b;
    _DAT_14c9b8d08 = &DAT_100000108;
    _DAT_14c9b8d10 = 0;
    _DAT_14c9b8cf8 = DAT_14c9b8c90;
    DAT_14c9b8c90 = &DAT_14c9b8ce8;
    FUN_145e16b94();
    FUN_1407e00cc(&DAT_14c9b8c80);
    return;
  }
  return;
}



// FUNCTION 145e16b94 FUN_145e16b94 body=235 status=ok
// SIG undefined FUN_145e16b94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e16b94(void)

{
  _DAT_14c9b8d18 = L"BASE";
  DAT_14c9b8d42 = 4;
  FUN_145e16c80();
  _DAT_14c9b8d28 = DAT_14c9b8c90;
  _DAT_14c9b8d20 = &DAT_14c9b8d48;
  _DAT_14c9b8d30 = &LAB_14682652b;
  DAT_14c9b8c90 = &DAT_14c9b8d18;
  DAT_14c9b8ce5 = DAT_14c9b8ce5 + '\x01';
  _DAT_14c9b8d38 = &DAT_100000108;
  if (DAT_14c9b8dac != '\0') {
    DAT_14c9b8ce6 = DAT_14c9b8ce6 + '\x01';
  }
  _DAT_14c9b8db0 = L"BASE";
  DAT_14c9b8dda = 4;
  _DAT_14c9b8db8 = FUN_141092e92();
  _DAT_14c9b8dc0 = DAT_14c9b8c90;
  _DAT_14c9b8dc8 = &LAB_14682652b;
  DAT_14c9b8c90 = &DAT_14c9b8db0;
  DAT_14c9b8ce5 = DAT_14c9b8ce5 + '\x01';
  _DAT_14c9b8dd0 = 0x100000000;
  if (*(char *)(_DAT_14c9b8db8 + 100) != '\0') {
    DAT_14c9b8ce6 = DAT_14c9b8ce6 + '\x01';
  }
  return;
}



// FUNCTION 145e16c80 FUN_145e16c80 body=177 status=ok
// SIG undefined FUN_145e16c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e16c80(void)

{
  if ((DAT_14c9b8daf & 2) != 0) {
    return;
  }
  DAT_14c9b8daf = DAT_14c9b8daf | 2;
  _DAT_14c9b8d50 = L"VertexParametersType";
  _DAT_14c9b8d68 = FUN_146826540;
  _DAT_14c9b8d70 = FUN_146825d77;
  _DAT_14c9b8d78 = FUN_146825fd6;
  _DAT_14c9b8d80 = FUN_1407e02ea;
  _DAT_14c9b8d88 = FUN_146826273;
  _DAT_14c9b8d60 = &LAB_14713bea2;
  _DAT_14c9b8da0 = 0xffffffff00000001;
  _DAT_14c9b8da8 = 1;
  DAT_14c9b8dac = 0;
  _DAT_14c9b8d90 = &LAB_14713bea6;
  FUN_1407e00cc(&DAT_14c9b8d48);
  return;
}



// FUNCTION 145e16d32 FUN_145e16d32 body=353 status=ok
// SIG undefined FUN_145e16d32(void)

undefined8 FUN_145e16d32(undefined8 *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_14156969a();
  if (lVar2 != 0) {
    local_60 = *param_1;
    local_68 = &local_58;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_70 = &local_60;
    FUN_14581cf4c(&local_58,&local_70,0);
    plVar3 = (longlong *)thunk_FUN_144837462(lVar2,&local_58);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (plVar3 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar3 + 8))(plVar3);
      lVar4 = FUN_145e16e94();
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        plVar1 = (longlong *)plVar3[3];
        plVar6 = (longlong *)*param_2;
        if (plVar6 != plVar1) {
          *param_2 = (longlong)plVar1;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        lVar2 = plVar3[4];
        *(int *)(param_2 + 1) = (int)lVar2;
        *param_3 = (int)plVar3[5];
        uVar5 = CONCAT71((uint7)(uint3)((uint)(int)lVar2 >> 8),1);
        goto LAB_145e16e30;
      }
    }
  }
  plVar6 = (longlong *)FUN_140e82300();
  plVar3 = (longlong *)*plVar6;
  plVar1 = (longlong *)*param_2;
  if (plVar1 != plVar3) {
    *param_2 = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(int *)(param_2 + 1) = (int)plVar6[1];
  uVar5 = 0;
LAB_145e16e30:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e16e94 FUN_145e16e94 body=55 status=ok
// SIG undefined FUN_145e16e94(void)

void FUN_145e16e94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5e08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5e08 = FUN_140002ddd(FUN_146600e69,uVar1,L"OakUIDisplayDataDef_ErrorMessage");
  }
  return;
}



// FUNCTION 145e16ee2 FUN_145e16ee2 body=168 status=ok
// SIG undefined FUN_145e16ee2(void)

void FUN_145e16ee2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_145e16f8c(0,&local_38,0);
  lVar2 = local_38;
  lVar3 = (longlong)(int)uStack_30;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + lVar4);
      if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x9c) & 1) != 0)) &&
         ((*(byte *)(lVar1 + 0x9f) & 0x20) != 0)) {
        FUN_141032122(lVar1,param_1 + 0x1150);
      }
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 != lVar4);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e16f8c FUN_145e16f8c body=139 status=ok
// SIG undefined FUN_145e16f8c(void)

void FUN_145e16f8c(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_1487c1044(param_2,0);
  }
  local_28 = FUN_144a78c84();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  FUN_145e17018(param_1,&local_28,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e17018 FUN_145e17018 body=340 status=ok
// SIG undefined FUN_145e17018(void)

void FUN_145e17018(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar3 = *param_2;
      goto LAB_145e1706f;
    }
  }
  lVar3 = 0;
LAB_145e1706f:
  lVar2 = FUN_144a78d6a();
  lVar1 = *param_2;
  if (lVar3 == lVar2) {
    if (param_3 == '\0') {
      local_40 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_1487c1314(param_1,&local_40,param_4);
    }
    else {
      local_38 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_1487c10a4(param_1,&local_38,param_4);
    }
  }
  else if (param_3 == '\0') {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_145e1716e(param_1,&local_50,param_4);
  }
  else {
    local_48 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1487c144e(param_1,&local_48,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e1716e FUN_145e1716e body=454 status=ok
// SIG undefined FUN_145e1716e(void)

void FUN_145e1716e(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
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
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_145e17248:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_145e1731a;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_145e17248;
LAB_145e1731a:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_145c55abc(param_3,iVar3);
          }
          *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e17336 FUN_145e17336 body=300 status=ok
// SIG undefined FUN_145e17336(void)

void FUN_145e17336(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4f12d0;
  plVar1 = plVar3 + 2;
  local_40 = (longlong *)*param_2;
  *param_2 = 0;
  local_38 = (longlong *)CONCAT44(local_38._4_4_,*(undefined4 *)(param_2 + 1));
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_145e17464(plVar1,&local_40);
  local_50 = plVar1;
  local_48 = plVar3;
  FUN_145e174c8(&local_50,plVar1);
  local_40 = plVar1;
  local_38 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_1411d7792(param_1,&local_40);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_1411d7792(param_1);
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
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e17464 FUN_145e17464 body=100 status=ok
// SIG undefined FUN_145e17464(void)

undefined8 * FUN_145e17464(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b4f12f0;
  param_1[4] = &PTR_LAB_14b4f1318;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_14009d848(param_1 + 6);
  FUN_1449db362(param_2);
  return param_1;
}



// FUNCTION 145e174c8 FUN_145e174c8 body=162 status=ok
// SIG undefined FUN_145e174c8(void)

void FUN_145e174c8(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145e17507;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145e17507;
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
LAB_145e17507:
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
                    /* WARNING: Could not recover jumptable at 0x000145e17566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145e1756a FUN_145e1756a body=210 status=ok
// SIG undefined FUN_145e1756a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1756a(void)

{
  if ((DAT_14cae1ff7 & 2) == 0) {
    DAT_14cae1ff7 = DAT_14cae1ff7 | 2;
    _DAT_14cae1f98 = L"FRadixSortDownsweepCS";
    _DAT_14cae1fb0 = FUN_146826540;
    _DAT_14cae1fb8 = FUN_146825d77;
    _DAT_14cae1fc0 = FUN_146825fd6;
    _DAT_14cae1fc8 = FUN_1407e02ea;
    _DAT_14cae1fd0 = FUN_146826273;
    _DAT_14cae1fa8 = FUN_147addba4;
    _DAT_14cae1fe8 = 0xffffffff000000f8;
    _DAT_14cae1ff0 = 8;
    DAT_14cae1ff4 = 0;
    _DAT_14cae1fd8 = &LAB_147addbce;
    FUN_145e1763c();
    FUN_145e17824();
    FUN_1407e00cc(&DAT_14cae1f90);
    return;
  }
  return;
}



// FUNCTION 145e1763c FUN_145e1763c body=121 status=ok
// SIG undefined FUN_145e1763c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1763c(void)

{
  FUN_145e176b6();
  _DAT_14cae2430 = L"RadixSortParameterBuffer";
  DAT_14cae245a = FUN_140850cc5();
  _DAT_14cae2438 = FUN_140fb78d0();
  _DAT_14cae2448 = &LAB_14682652b;
  _DAT_14cae2450 = 0x1000000e0;
  _DAT_14cae2458 = 0;
  _DAT_14cae2440 = DAT_14cae1fa0;
  DAT_14cae1fa0 = &DAT_14cae2430;
  return;
}



// FUNCTION 145e176b6 FUN_145e176b6 body=121 status=ok
// SIG undefined FUN_145e176b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e176b6(void)

{
  FUN_145e17730();
  _DAT_14cae2460 = L"InKeys";
  DAT_14cae248a = FUN_140850cc5();
  _DAT_14cae2468 = FUN_140fb78d0();
  _DAT_14cae2478 = &LAB_14682652b;
  _DAT_14cae2480 = 0x1000000e4;
  _DAT_14cae2488 = 0;
  _DAT_14cae2470 = DAT_14cae1fa0;
  DAT_14cae1fa0 = &DAT_14cae2460;
  return;
}



// FUNCTION 145e17730 FUN_145e17730 body=121 status=ok
// SIG undefined FUN_145e17730(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e17730(void)

{
  FUN_145e177aa();
  _DAT_14cae2490 = L"InValues";
  DAT_14cae24ba = FUN_140850cc5();
  _DAT_14cae2498 = FUN_140fb78d0();
  _DAT_14cae24a8 = &LAB_14682652b;
  _DAT_14cae24b0 = 0x1000000e8;
  _DAT_14cae24b8 = 0;
  _DAT_14cae24a0 = DAT_14cae1fa0;
  DAT_14cae1fa0 = &DAT_14cae2490;
  return;
}



// FUNCTION 145e177aa FUN_145e177aa body=121 status=ok
// SIG undefined FUN_145e177aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e177aa(void)

{
  FUN_145e178a0();
  _DAT_14cae24c0 = L"InOffsets";
  DAT_14cae24ea = FUN_140850cc5();
  _DAT_14cae24c8 = FUN_140fb78d0();
  _DAT_14cae24d8 = &LAB_14682652b;
  _DAT_14cae24e0 = 0x1000000ec;
  _DAT_14cae24e8 = 0;
  _DAT_14cae24d0 = DAT_14cae1fa0;
  DAT_14cae1fa0 = &DAT_14cae24c0;
  return;
}



// FUNCTION 145e17824 FUN_145e17824 body=123 status=ok
// SIG undefined FUN_145e17824(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e17824(void)

{
  _DAT_14cae39c0 = L"BASE";
  DAT_14cae39ea = 4;
  _DAT_14cae39c8 = FUN_140b35ae4();
  _DAT_14cae39d0 = DAT_14cae1fa0;
  _DAT_14cae39d8 = &LAB_14682652b;
  DAT_14cae1fa0 = &DAT_14cae39c0;
  DAT_14cae1ff5 = DAT_14cae1ff5 + '\x01';
  _DAT_14cae39e0 = 0x100000000;
  if (*(char *)(_DAT_14cae39c8 + 100) != '\0') {
    DAT_14cae1ff6 = DAT_14cae1ff6 + '\x01';
  }
  return;
}



// FUNCTION 145e178a0 FUN_145e178a0 body=216 status=ok
// SIG undefined FUN_145e178a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e178a0(void)

{
  _DAT_14cae2520 = L"OutValues";
  DAT_14cae254a = FUN_140850cc5();
  _DAT_14cae2528 = FUN_140fb78d0();
  _DAT_14cae2538 = &LAB_14682652b;
  _DAT_14cae2540 = 0x1000000f4;
  _DAT_14cae2548 = 0;
  _DAT_14cae2530 = DAT_14cae1fa0;
  DAT_14cae1fa0 = &DAT_14cae2520;
  _DAT_14cae24f0 = L"OutKeys";
  DAT_14cae251a = FUN_140850cc5();
  _DAT_14cae24f8 = FUN_140fb78d0();
  _DAT_14cae2508 = &LAB_14682652b;
  _DAT_14cae2510 = 0x1000000f0;
  _DAT_14cae2518 = 0;
  _DAT_14cae2500 = DAT_14cae1fa0;
  DAT_14cae1fa0 = &DAT_14cae24f0;
  return;
}



// FUNCTION 145e17978 FUN_145e17978 body=40 status=ok
// SIG undefined FUN_145e17978(void)

undefined8 FUN_145e17978(undefined8 param_1,int param_2)

{
  FUN_145e179a0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e179a0 FUN_145e179a0 body=370 status=ok
// SIG undefined FUN_145e179a0(void)

void FUN_145e179a0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ba682f0;
  FUN_140457ffc(&DAT_14c867518,param_1);
  FUN_140457ffc(&DAT_14c872bf8,param_1);
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_145e17b3a(param_1 + 0x34);
  FUN_145e17b12(param_1[0x32],*(undefined4 *)(param_1 + 0x33));
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_145e17b70(param_1 + 0x25);
  plVar2 = (longlong *)param_1[0x22];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[0x20];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e21(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e17b12 FUN_145e17b12 body=40 status=ok
// SIG undefined FUN_145e17b12(void)

void FUN_145e17b12(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145e17b70(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 145e17b3a FUN_145e17b3a body=53 status=ok
// SIG undefined FUN_145e17b3a(void)

void FUN_145e17b3a(longlong *param_1)

{
  FUN_145e17bb6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e17b70 FUN_145e17b70 body=70 status=ok
// SIG undefined FUN_145e17b70(void)

void FUN_145e17b70(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 3);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e17bb6 FUN_145e17bb6 body=365 status=ok
// SIG undefined FUN_145e17bb6(void)

void FUN_145e17bb6(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0x80);
      FUN_145e17b70(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14095c99c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e17d24 FUN_145e17d24 body=117 status=ok
// SIG undefined FUN_145e17d24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e17d24(void)

{
  _DAT_14ca115c8 = 0xffffffff;
  _DAT_14ca115cc = 0x105;
  DAT_14ca115ce = 0;
  DAT_14ca115c0 = &PTR_FUN_14a28c370;
  _DAT_14ca115d0 = 0;
  _DAT_14ca115d8 = 0;
  uRam000000014ca115e0 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca115e8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca115e8,4000);
  DAT_14ca115c0 = &PTR_FUN_14a290840;
  FUN_145e17d9a();
  return;
}



// FUNCTION 145e17d9a FUN_145e17d9a body=71 status=ok
// SIG undefined FUN_145e17d9a(void)

void FUN_145e17d9a(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca115cd = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x000145e17dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca115c0 + 0x18))(&DAT_14ca115c0,uVar1,*(code **)(DAT_14ca115c0 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca115c0,0);
  return;
}



// FUNCTION 145e17dec FUN_145e17dec body=200 status=ok
// SIG undefined FUN_145e17dec(void)

undefined8 * FUN_145e17dec(undefined8 *param_1)

{
  FUN_144a0768c();
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
  memset(param_1 + 0x18,0,0xf0);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_FUN_14a676850;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb2b8) {
    FUN_144b3d300(&DAT_14caeb2b8);
    if (DAT_14caeb2b8 == -1) {
      FUN_1415697bc();
      atexit((_func_5014 *)&LAB_14356df28);
      _Init_thread_footer(&DAT_14caeb2b8);
    }
  }
  *(byte *)(param_1 + 0x37) = *(byte *)(param_1 + 0x37) | 1;
  return param_1;
}



// FUNCTION 145e17ec0 FUN_145e17ec0 body=176 status=ok
// SIG undefined FUN_145e17ec0(void)

undefined8 * FUN_145e17ec0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a9c32d0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  FUN_1446f470e(&local_20,L"SceneComp",1);
  uVar1 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x39] = lVar2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e17f72 FUN_145e17f72 body=125 status=ok
// SIG undefined FUN_145e17f72(void)

undefined8 * FUN_145e17f72(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aadef90;
  FUN_145e17ff0();
  param_1[1] = &DAT_14cb0c050;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000001;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0x78))
            (DAT_14c8407a8,L"dumpticks",
             L"Dumps all tick functions registered with FTickTaskManager to log.",0);
  return param_1;
}



// FUNCTION 145e17ff0 FUN_145e17ff0 body=96 status=ok
// SIG undefined FUN_145e17ff0(void)

void FUN_145e17ff0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0ca28) {
    FUN_144b3d300(&DAT_14cb0ca28);
    if (DAT_14cb0ca28 == -1) {
      FUN_145c49192();
      atexit((_func_5014 *)&LAB_14374ee9e);
      _Init_thread_footer(&DAT_14cb0ca28);
      return;
    }
  }
  return;
}



// FUNCTION 145e18050 FUN_145e18050 body=40 status=ok
// SIG undefined FUN_145e18050(void)

undefined8 FUN_145e18050(undefined8 param_1,int param_2)

{
  FUN_145e18078();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e18078 FUN_145e18078 body=148 status=ok
// SIG undefined FUN_145e18078(void)

void FUN_145e18078(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abed7e0;
  param_1[5] = &PTR_FUN_14abedb10;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14abe9730;
  param_1[5] = &PTR_LAB_14abe9a20;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e18118 FUN_145e18118 body=316 status=ok
// SIG undefined FUN_145e18118(void)

undefined8 * FUN_145e18118(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14ae5e200;
  param_1[5] = &PTR_FUN_14ae5e510;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  FUN_140ca8f8e(param_1 + 0x34);
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 2;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x52] = 2;
  *(undefined1 *)(param_1 + 0x53) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb45e68) {
    FUN_144b3d300(&DAT_14cb45e68);
    if (DAT_14cb45e68 == -1) {
      FUN_145e18254();
      atexit(FUN_143aea640);
      _Init_thread_footer(&DAT_14cb45e68);
    }
  }
  lVar1 = DAT_14cb45e60;
  if (DAT_14c950c29 == '\x01') {
    if (DAT_14cb45e60 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = DAT_14cb45e60;
    }
  }
  param_1[0x31] = lVar1;
  return param_1;
}



// FUNCTION 145e18254 FUN_145e18254 body=236 status=ok
// SIG undefined FUN_145e18254(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e18254(void)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _DAT_14cb45e50 = &PTR_LAB_149e668b0;
  _DAT_14cb45e58 = 0;
  FUN_1405bceb4(&DAT_14cb45e50);
  _DAT_14cb45e50 = &PTR_FUN_14ae6a600;
  DAT_14cb45e60 = 0;
  FUN_141247186(L"/CommonUI/VideoPlayerMaterial");
  FUN_140056680(local_28,L"/CommonUI/VideoPlayerMaterial");
  FUN_14124722a(local_28,1);
  lVar1 = FUN_1403254ba(local_28,0);
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    DAT_14cb45e60 = lVar1;
    if (lVar1 == 0) {
      FUN_14283f6fe(L"/CommonUI/VideoPlayerMaterial");
    }
  }
  else {
    FUN_1456cec3c(lVar1);
    DAT_14cb45e60 = lVar1;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e1834c FUN_145e1834c body=229 status=ok
// SIG undefined FUN_145e1834c(void)

undefined8 * FUN_145e1834c(undefined8 *param_1)

{
  FUN_144805d84();
  *param_1 = &PTR_FUN_14ae78eb0;
  param_1[5] = &PTR_FUN_14ae79380;
  param_1[6] = &PTR_LAB_14ae793c0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  FUN_145e18432(param_1 + 0x28);
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(byte *)((longlong)param_1 + 0x274) = *(byte *)((longlong)param_1 + 0x274) & 0xf0 | 10;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xf9 | 2;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  return param_1;
}



// FUNCTION 145e18432 FUN_145e18432 body=136 status=ok
// SIG undefined FUN_145e18432(void)

void FUN_145e18432(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x447a00003dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x41a000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x3f80000042480000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x4a989680;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3c23d70a41a00000;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x417000003f800000;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x439600003e99999a;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x3c23d70a43960000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x461c4000;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x62) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xd] = DAT_14c8464e0;
  param_1[0xe] = uVar1;
  param_1[0xf] = DAT_14c8464f0;
  param_1[0x10] = 0x41a000003d4ccccd;
  param_1[0x11] = 0x4120000040a00000;
  return;
}



// FUNCTION 145e184c2 FUN_145e184c2 body=39 status=ok
// SIG undefined FUN_145e184c2(void)

undefined8 * FUN_145e184c2(undefined8 *param_1)

{
  FUN_14601a14c();
  *param_1 = &PTR_FUN_14b40c3b0;
  *(undefined1 *)(param_1 + 0x27) = 1;
  return param_1;
}



// FUNCTION 145e184ea FUN_145e184ea body=82 status=ok
// SIG undefined FUN_145e184ea(void)

void FUN_145e184ea(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar2 = (longlong *)FUN_145e1853e();
  cVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  if (cVar1 != '\0') {
    FUN_145e18574(local_18,param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e1853e FUN_145e1853e body=53 status=ok
// SIG undefined FUN_145e1853e(void)

void FUN_145e1853e(void)

{
  if (DAT_14cb80170 == (undefined8 *)0x0) {
    DAT_14cb80170 = (undefined8 *)FUN_14001cc68(8,0x10);
    *DAT_14cb80170 = &PTR_FUN_14b40cc40;
  }
  return;
}



// FUNCTION 145e18574 FUN_145e18574 body=239 status=ok
// SIG undefined FUN_145e18574(void)

undefined8 FUN_145e18574(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_149e020b0;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b40b3d0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &DAT_14888297c;
  FUN_1448b6402(&DAT_14c872c10,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e18664 FUN_145e18664 body=40 status=ok
// SIG undefined FUN_145e18664(void)

undefined8 FUN_145e18664(undefined8 param_1,int param_2)

{
  FUN_145e1868c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e1868c FUN_145e1868c body=148 status=ok
// SIG undefined FUN_145e1868c(void)

void FUN_145e1868c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b461180;
  plVar3 = (longlong *)param_1[0x10];
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
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e18720 FUN_145e18720 body=40 status=ok
// SIG undefined FUN_145e18720(void)

undefined8 FUN_145e18720(undefined8 param_1,int param_2)

{
  FUN_145e18748();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e18748 FUN_145e18748 body=148 status=ok
// SIG undefined FUN_145e18748(void)

void FUN_145e18748(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba06810;
  param_1[6] = &PTR_FUN_14ba06b18;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  FUN_1456c3cc8(param_1 + 0x28);
  if (*(char *)(param_1 + 0x19) == '\x01') {
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e187e4 FUN_145e187e4 body=180 status=ok
// SIG undefined FUN_145e187e4(void)

undefined8 * FUN_145e187e4(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bebb7e0;
  *(undefined2 *)(param_1 + 5) = 1;
  FUN_144757f48(param_1,8);
  *param_1 = &PTR_FUN_14bebcd40;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 1;
  *(undefined1 *)((longlong)param_1 + 0x42) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3ff00000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x3ff0000000000000;
  param_1[0x13] = 0x3ff0000000000000;
  param_1[0x14] = 0x3ff0000000000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3ff00000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x3ff0000000000000;
  param_1[0x1f] = 0x3ff0000000000000;
  param_1[0x20] = 0x3ff0000000000000;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 145e188a4 FUN_145e188a4 body=176 status=ok
// SIG undefined FUN_145e188a4(void)

undefined8 * FUN_145e188a4(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14bedf490;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  FUN_1446f470e(&local_20,L"SceneComp",1);
  uVar1 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[0x39] = lVar2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e18956 FUN_145e18956 body=1256 status=ok
// SIG undefined FUN_145e18956(void)

void FUN_145e18956(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145e18e44();
  FUN_1446f470e(&local_58,L"ClientCanUseObjectsLock",1);
  uVar1 = FUN_144a5dd5e();
  FUN_144a5dd5e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ServerCameraModeState",1);
  uVar1 = FUN_144a5dd5e();
  FUN_144a5dd5e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"RecentlyCausedDamageInstances",1);
  uVar1 = FUN_144a5dd5e();
  FUN_144a5dd5e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"PendingTriggeredPresentationRepCount",1);
  uVar1 = FUN_144a5dd5e();
  FUN_144a5dd5e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"PendingTriggeredPresentation",1);
  uVar1 = FUN_144a5dd5e();
  FUN_144a5dd5e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"PersonalVehicleState",1);
  uVar1 = FUN_144a5dd5e();
  FUN_144a5dd5e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"InfiniteAmmoLock",1);
  uVar1 = FUN_144a5dd5e();
  FUN_144a5dd5e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"InfiniteClipLock",1);
  uVar1 = FUN_144a5dd5e();
  FUN_144a5dd5e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ReplicatedAmmo",1);
  uVar1 = FUN_144a5dd5e();
  FUN_144a5dd5e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bIsCurrentlyTargeted",1);
  uVar1 = FUN_144a5dd5e();
  FUN_144a5dd5e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ResurrectStation",1);
  uVar1 = FUN_144a5dd5e();
  FUN_144a5dd5e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"CheckpointStation",1);
  uVar1 = FUN_144a5dd5e();
  FUN_144a5dd5e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"TravelStatus",1);
  uVar1 = FUN_144a5dd5e();
  FUN_144a5dd5e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"BossState",1);
  uVar1 = FUN_144a5dd5e();
  FUN_144a5dd5e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"HUDIconList",1);
  uVar1 = FUN_144a5dd5e();
  FUN_144a5dd5e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = FUN_145e18e40();
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"HUDIconTotalCount",1);
  uVar1 = FUN_144a5dd5e();
  FUN_144a5dd5e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e18e40 FUN_145e18e40 body=3 status=ok
// SIG undefined FUN_145e18e40(void)

undefined8 FUN_145e18e40(void)

{
  return 0;
}



// FUNCTION 145e18e44 FUN_145e18e44 body=226 status=ok
// SIG undefined FUN_145e18e44(void)

void FUN_145e18e44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145e18f28();
  FUN_1446f470e(&local_58,L"ActiveCinematicModeIdent",1);
  uVar1 = FUN_1449f3324();
  FUN_1449f3324();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"InitialCameraFades",1);
  uVar1 = FUN_1449f3324();
  FUN_1449f3324();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e18f28 FUN_145e18f28 body=172 status=ok
// SIG undefined FUN_145e18f28(void)

void FUN_145e18f28(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145e18fd6();
  local_28 = 0;
  local_38 = 2;
  local_30 = DAT_14caf9d28;
  local_48 = L"TargetViewRotation";
  local_40 = 0x10000000d;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"SpawnLocation";
  local_40 = 0x10000000e;
  FUN_140c2c993(&local_48,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e18fd6 FUN_145e18fd6 body=173 status=ok
// SIG undefined FUN_145e18fd6(void)

void FUN_145e18fd6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c2c6fa();
  local_28 = 0;
  local_38 = 0;
  local_30 = DAT_14cad3b30;
  local_48 = L"PlayerState";
  local_40 = &DAT_10000000b;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_38 = CONCAT44(1,(undefined4)local_38);
  local_48 = L"Pawn";
  local_40 = &DAT_10000000c;
  FUN_140c2c993(&local_48,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e19084 FUN_145e19084 body=284 status=ok
// SIG undefined FUN_145e19084(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e19084(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa35e0) {
    FUN_144b3d300(&DAT_14caa35e0);
    if (DAT_14caa35e0 == -1) {
      FUN_145e191a0();
      FUN_140db5666(&DAT_14caa3538,0,&DAT_14caa34d0,L"FLandscapeLayerWeightmapPackMaterialLayersCS",
                    L"/Engine/Private/LandscapeLayersCS.usf",L"PackPaintLayerToWeightmap",5,1,
                    FUN_14745eb54,FUN_14745eb32,&LAB_14632493c,&LAB_14745eb2e,&LAB_14712ac0c,
                    &LAB_14712ac08,0x100,0);
      _DAT_14caa3538 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e0a0);
      _Init_thread_footer(&DAT_14caa35e0);
    }
  }
  return &DAT_14caa3538;
}



// FUNCTION 145e191a0 FUN_145e191a0 body=210 status=ok
// SIG undefined FUN_145e191a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e191a0(void)

{
  if ((DAT_14caa3537 & 2) == 0) {
    DAT_14caa3537 = DAT_14caa3537 | 2;
    _DAT_14caa34d8 = L"FLandscapeLayerWeightmapPackMaterialLayersCS";
    _DAT_14caa34f0 = FUN_146826540;
    _DAT_14caa34f8 = FUN_146825d77;
    _DAT_14caa3500 = FUN_146825fd6;
    _DAT_14caa3508 = FUN_1407e02ea;
    _DAT_14caa3510 = FUN_146826273;
    _DAT_14caa34e8 = FUN_14745eb00;
    _DAT_14caa3528 = 0xffffffff00000100;
    _DAT_14caa3530 = 8;
    DAT_14caa3534 = 0;
    _DAT_14caa3518 = &LAB_14745eb2a;
    FUN_145e19272();
    FUN_145e1945a();
    FUN_1407e00cc(&DAT_14caa34d0);
    return;
  }
  return;
}



// FUNCTION 145e19272 FUN_145e19272 body=121 status=ok
// SIG undefined FUN_145e19272(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e19272(void)

{
  FUN_145e192ec();
  _DAT_14caa4ef0 = L"ComponentWeightmapParam";
  DAT_14caa4f1a = FUN_140850cc5();
  _DAT_14caa4ef8 = FUN_140fb78d0();
  _DAT_14caa4f08 = &LAB_14682652b;
  _DAT_14caa4f10 = 0x1000000e0;
  _DAT_14caa4f18 = 0;
  _DAT_14caa4f00 = DAT_14caa34e0;
  DAT_14caa34e0 = &DAT_14caa4ef0;
  return;
}



// FUNCTION 145e192ec FUN_145e192ec body=121 status=ok
// SIG undefined FUN_145e192ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e192ec(void)

{
  FUN_145e19366();
  _DAT_14caa4f20 = L"AtlasPaintListsParam";
  DAT_14caa4f4a = FUN_140850cc5();
  _DAT_14caa4f28 = FUN_140fb78d0();
  _DAT_14caa4f38 = &LAB_14682652b;
  _DAT_14caa4f40 = 0x1000000e4;
  _DAT_14caa4f48 = 0;
  _DAT_14caa4f30 = DAT_14caa34e0;
  DAT_14caa34e0 = &DAT_14caa4f20;
  return;
}



// FUNCTION 145e19366 FUN_145e19366 body=121 status=ok
// SIG undefined FUN_145e19366(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e19366(void)

{
  FUN_145e193e0();
  _DAT_14caa4f50 = L"ComponentsDataParam";
  DAT_14caa4f7a = FUN_140850cc5();
  _DAT_14caa4f58 = FUN_140fb78d0();
  _DAT_14caa4f68 = &LAB_14682652b;
  _DAT_14caa4f70 = 0x1000000e8;
  _DAT_14caa4f78 = 0;
  _DAT_14caa4f60 = DAT_14caa34e0;
  DAT_14caa34e0 = &DAT_14caa4f50;
  return;
}



// FUNCTION 145e193e0 FUN_145e193e0 body=121 status=ok
// SIG undefined FUN_145e193e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e193e0(void)

{
  FUN_145e194d6();
  _DAT_14caa4f80 = L"ComponentSizeParam";
  DAT_14caa4faa = FUN_140850cc5();
  _DAT_14caa4f88 = FUN_140ec6960();
  _DAT_14caa4f98 = &LAB_14682652b;
  _DAT_14caa4fa0 = 0x1000000ec;
  _DAT_14caa4fa8 = 0;
  _DAT_14caa4f90 = DAT_14caa34e0;
  DAT_14caa34e0 = &DAT_14caa4f80;
  return;
}



// FUNCTION 145e1945a FUN_145e1945a body=123 status=ok
// SIG undefined FUN_145e1945a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1945a(void)

{
  _DAT_14caa59e8 = L"BASE";
  DAT_14caa5a12 = 4;
  _DAT_14caa59f0 = FUN_140b35ae4();
  _DAT_14caa59f8 = DAT_14caa34e0;
  _DAT_14caa5a00 = &LAB_14682652b;
  DAT_14caa34e0 = &DAT_14caa59e8;
  DAT_14caa3535 = DAT_14caa3535 + '\x01';
  _DAT_14caa5a08 = 0x100000000;
  if (*(char *)(_DAT_14caa59f0 + 100) != '\0') {
    DAT_14caa3536 = DAT_14caa3536 + '\x01';
  }
  return;
}



// FUNCTION 145e194d6 FUN_145e194d6 body=216 status=ok
// SIG undefined FUN_145e194d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e194d6(void)

{
  _DAT_14caa4fe0 = L"WeightmapTextureOutputOffsetParam";
  DAT_14caa500a = FUN_140850cc5();
  _DAT_14caa4fe8 = FUN_140fb78d0();
  _DAT_14caa4ff8 = &LAB_14682652b;
  _DAT_14caa5000 = 0x1000000f6;
  _DAT_14caa5008 = 0;
  _DAT_14caa4ff0 = DAT_14caa34e0;
  DAT_14caa34e0 = &DAT_14caa4fe0;
  _DAT_14caa4fb0 = L"WeightmapWeightBlendModeParam";
  DAT_14caa4fda = FUN_140850cc5();
  _DAT_14caa4fb8 = FUN_140fb78d0();
  _DAT_14caa4fc8 = &LAB_14682652b;
  _DAT_14caa4fd0 = 0x1000000f2;
  _DAT_14caa4fd8 = 0;
  _DAT_14caa4fc0 = DAT_14caa34e0;
  DAT_14caa34e0 = &DAT_14caa4fb0;
  return;
}



// FUNCTION 145e195ae FUN_145e195ae body=284 status=ok
// SIG undefined FUN_145e195ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e195ae(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0d580) {
    FUN_144b3d300(&DAT_14cb0d580);
    if (DAT_14cb0d580 == -1) {
      FUN_145e196ca();
      FUN_140db5666(&DAT_14cb0d4d8,0,&DAT_14cb0d470,L"FUpdateTexture3DSubresourceCS",
                    L"/Engine/Private/UpdateTextureShaders.usf",L"UpdateTexture3DSubresourceCS",5,1,
                    FUN_147d8a242,FUN_147d8a21a,&LAB_147d8a202,&LAB_147d8a1fe,&LAB_14712ac0c,
                    &LAB_14712ac08,0x100,0);
      _DAT_14cb0d4d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14376c994);
      _Init_thread_footer(&DAT_14cb0d580);
    }
  }
  return &DAT_14cb0d4d8;
}



// FUNCTION 145e196ca FUN_145e196ca body=210 status=ok
// SIG undefined FUN_145e196ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e196ca(void)

{
  if ((DAT_14cb0d4d7 & 2) == 0) {
    DAT_14cb0d4d7 = DAT_14cb0d4d7 | 2;
    _DAT_14cb0d478 = L"FUpdateTexture3DSubresourceCS";
    _DAT_14cb0d490 = FUN_146826540;
    _DAT_14cb0d498 = FUN_146825d77;
    _DAT_14cb0d4a0 = FUN_146825fd6;
    _DAT_14cb0d4a8 = FUN_1407e02ea;
    _DAT_14cb0d4b0 = FUN_146826273;
    _DAT_14cb0d488 = FUN_147d8a1d0;
    _DAT_14cb0d4c8 = 0xffffffff00000100;
    _DAT_14cb0d4d0 = 8;
    DAT_14cb0d4d4 = 0;
    _DAT_14cb0d4b8 = &LAB_147d8a1fa;
    FUN_145e1979c();
    FUN_145e19984();
    FUN_1407e00cc(&DAT_14cb0d470);
    return;
  }
  return;
}



// FUNCTION 145e1979c FUN_145e1979c body=121 status=ok
// SIG undefined FUN_145e1979c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1979c(void)

{
  FUN_145e19816();
  _DAT_14cb0ebb0 = L"SrcPitchParameter";
  DAT_14cb0ebda = FUN_140850cc5();
  _DAT_14cb0ebb8 = FUN_140ec6960();
  _DAT_14cb0ebc8 = &LAB_14682652b;
  _DAT_14cb0ebd0 = 0x1000000e0;
  _DAT_14cb0ebd8 = 0;
  _DAT_14cb0ebc0 = DAT_14cb0d480;
  DAT_14cb0d480 = &DAT_14cb0ebb0;
  return;
}



// FUNCTION 145e19816 FUN_145e19816 body=121 status=ok
// SIG undefined FUN_145e19816(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e19816(void)

{
  FUN_145e19890();
  _DAT_14cb0ebe0 = L"SrcDepthPitchParameter";
  DAT_14cb0ec0a = FUN_140850cc5();
  _DAT_14cb0ebe8 = FUN_140ec6960();
  _DAT_14cb0ebf8 = &LAB_14682652b;
  _DAT_14cb0ec00 = 0x1000000e6;
  _DAT_14cb0ec08 = 0;
  _DAT_14cb0ebf0 = DAT_14cb0d480;
  DAT_14cb0d480 = &DAT_14cb0ebe0;
  return;
}



// FUNCTION 145e19890 FUN_145e19890 body=121 status=ok
// SIG undefined FUN_145e19890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e19890(void)

{
  FUN_145e1990a();
  _DAT_14cb0ec10 = L"SrcBuffer";
  DAT_14cb0ec3a = FUN_140850cc5();
  _DAT_14cb0ec18 = FUN_140fb78d0();
  _DAT_14cb0ec28 = &LAB_14682652b;
  _DAT_14cb0ec30 = 0x1000000ec;
  _DAT_14cb0ec38 = 0;
  _DAT_14cb0ec20 = DAT_14cb0d480;
  DAT_14cb0d480 = &DAT_14cb0ec10;
  return;
}



// FUNCTION 145e1990a FUN_145e1990a body=121 status=ok
// SIG undefined FUN_145e1990a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1990a(void)

{
  FUN_145e19a00();
  _DAT_14cb0ec40 = L"DestPosParameter";
  DAT_14cb0ec6a = FUN_140850cc5();
  _DAT_14cb0ec48 = FUN_140ec6960();
  _DAT_14cb0ec58 = &LAB_14682652b;
  _DAT_14cb0ec60 = 0x1000000f0;
  _DAT_14cb0ec68 = 0;
  _DAT_14cb0ec50 = DAT_14cb0d480;
  DAT_14cb0d480 = &DAT_14cb0ec40;
  return;
}



// FUNCTION 145e19984 FUN_145e19984 body=123 status=ok
// SIG undefined FUN_145e19984(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e19984(void)

{
  _DAT_14cb0ee88 = L"BASE";
  DAT_14cb0eeb2 = 4;
  _DAT_14cb0ee90 = FUN_140b35ae4();
  _DAT_14cb0ee98 = DAT_14cb0d480;
  _DAT_14cb0eea0 = &LAB_14682652b;
  DAT_14cb0d480 = &DAT_14cb0ee88;
  DAT_14cb0d4d5 = DAT_14cb0d4d5 + '\x01';
  _DAT_14cb0eea8 = 0x100000000;
  if (*(char *)(_DAT_14cb0ee90 + 100) != '\0') {
    DAT_14cb0d4d6 = DAT_14cb0d4d6 + '\x01';
  }
  return;
}



// FUNCTION 145e19a00 FUN_145e19a00 body=216 status=ok
// SIG undefined FUN_145e19a00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e19a00(void)

{
  _DAT_14cb0eca0 = L"DestTexture3D";
  DAT_14cb0ecca = FUN_140850cc5();
  _DAT_14cb0eca8 = FUN_140fb78d0();
  _DAT_14cb0ecb8 = &LAB_14682652b;
  _DAT_14cb0ecc0 = 0x1000000fc;
  _DAT_14cb0ecc8 = 0;
  _DAT_14cb0ecb0 = DAT_14cb0d480;
  DAT_14cb0d480 = &DAT_14cb0eca0;
  _DAT_14cb0ec70 = L"DestSizeParameter";
  DAT_14cb0ec9a = FUN_140850cc5();
  _DAT_14cb0ec78 = FUN_140ec6960();
  _DAT_14cb0ec88 = &LAB_14682652b;
  _DAT_14cb0ec90 = 0x1000000f6;
  _DAT_14cb0ec98 = 0;
  _DAT_14cb0ec80 = DAT_14cb0d480;
  DAT_14cb0d480 = &DAT_14cb0ec70;
  return;
}



// FUNCTION 145e19ad8 FUN_145e19ad8 body=284 status=ok
// SIG undefined FUN_145e19ad8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e19ad8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0e788) {
    FUN_144b3d300(&DAT_14cb0e788);
    if (DAT_14cb0e788 == -1) {
      FUN_145e19bf4();
      FUN_140db5666(&DAT_14cb0e6e0,0,&DAT_14cb0e678,L"FCompositeAnimatedVectorFieldCS",
                    L"/Engine/Private/VectorFieldCompositeShaders.usf",
                    L"CompositeAnimatedVectorField",5,1,FUN_147d96aba,FUN_147d96a92,&LAB_147d96a7a,
                    &LAB_147d96a76,&LAB_14712ac0c,&LAB_14712ac08,0xf8,0);
      _DAT_14cb0e6e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1437799af);
      _Init_thread_footer(&DAT_14cb0e788);
    }
  }
  return &DAT_14cb0e6e0;
}



// FUNCTION 145e19bf4 FUN_145e19bf4 body=210 status=ok
// SIG undefined FUN_145e19bf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e19bf4(void)

{
  if ((DAT_14cb0e6df & 2) == 0) {
    DAT_14cb0e6df = DAT_14cb0e6df | 2;
    _DAT_14cb0e680 = L"FCompositeAnimatedVectorFieldCS";
    _DAT_14cb0e698 = FUN_146826540;
    _DAT_14cb0e6a0 = FUN_146825d77;
    _DAT_14cb0e6a8 = FUN_146825fd6;
    _DAT_14cb0e6b0 = FUN_1407e02ea;
    _DAT_14cb0e6b8 = FUN_146826273;
    _DAT_14cb0e690 = FUN_147d96a48;
    _DAT_14cb0e6d0 = 0xffffffff000000f8;
    _DAT_14cb0e6d8 = 8;
    DAT_14cb0e6dc = 0;
    _DAT_14cb0e6c0 = &LAB_147d96a72;
    FUN_145e19cc6();
    FUN_145e19eae();
    FUN_1407e00cc(&DAT_14cb0e678);
    return;
  }
  return;
}



// FUNCTION 145e19cc6 FUN_145e19cc6 body=121 status=ok
// SIG undefined FUN_145e19cc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e19cc6(void)

{
  FUN_145e19d40();
  _DAT_14cb0ecd8 = L"AtlasTexture";
  DAT_14cb0ed02 = FUN_140850cc5();
  _DAT_14cb0ece0 = FUN_140fb78d0();
  _DAT_14cb0ecf0 = &LAB_14682652b;
  _DAT_14cb0ecf8 = 0x1000000e0;
  _DAT_14cb0ed00 = 0;
  _DAT_14cb0ece8 = DAT_14cb0e688;
  DAT_14cb0e688 = &DAT_14cb0ecd8;
  return;
}



// FUNCTION 145e19d40 FUN_145e19d40 body=121 status=ok
// SIG undefined FUN_145e19d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e19d40(void)

{
  FUN_145e19dba();
  _DAT_14cb0ed08 = L"AtlasTextureSampler";
  DAT_14cb0ed32 = FUN_140850cc5();
  _DAT_14cb0ed10 = FUN_140fb78d0();
  _DAT_14cb0ed20 = &LAB_14682652b;
  _DAT_14cb0ed28 = 0x1000000e4;
  _DAT_14cb0ed30 = 0;
  _DAT_14cb0ed18 = DAT_14cb0e688;
  DAT_14cb0e688 = &DAT_14cb0ed08;
  return;
}



// FUNCTION 145e19dba FUN_145e19dba body=121 status=ok
// SIG undefined FUN_145e19dba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e19dba(void)

{
  FUN_145e19e34();
  _DAT_14cb0ed38 = L"NoiseVolumeTexture";
  DAT_14cb0ed62 = FUN_140850cc5();
  _DAT_14cb0ed40 = FUN_140fb78d0();
  _DAT_14cb0ed50 = &LAB_14682652b;
  _DAT_14cb0ed58 = 0x1000000e8;
  _DAT_14cb0ed60 = 0;
  _DAT_14cb0ed48 = DAT_14cb0e688;
  DAT_14cb0e688 = &DAT_14cb0ed38;
  return;
}



// FUNCTION 145e19e34 FUN_145e19e34 body=121 status=ok
// SIG undefined FUN_145e19e34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e19e34(void)

{
  FUN_145e19f2a();
  _DAT_14cb0ed68 = L"NoiseVolumeTextureSampler";
  DAT_14cb0ed92 = FUN_140850cc5();
  _DAT_14cb0ed70 = FUN_140fb78d0();
  _DAT_14cb0ed80 = &LAB_14682652b;
  _DAT_14cb0ed88 = 0x1000000ec;
  _DAT_14cb0ed90 = 0;
  _DAT_14cb0ed78 = DAT_14cb0e688;
  DAT_14cb0e688 = &DAT_14cb0ed68;
  return;
}



// FUNCTION 145e19eae FUN_145e19eae body=123 status=ok
// SIG undefined FUN_145e19eae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e19eae(void)

{
  _DAT_14cb0f088 = L"BASE";
  DAT_14cb0f0b2 = 4;
  _DAT_14cb0f090 = FUN_140b35ae4();
  _DAT_14cb0f098 = DAT_14cb0e688;
  _DAT_14cb0f0a0 = &LAB_14682652b;
  DAT_14cb0e688 = &DAT_14cb0f088;
  DAT_14cb0e6dd = DAT_14cb0e6dd + '\x01';
  _DAT_14cb0f0a8 = 0x100000000;
  if (*(char *)(_DAT_14cb0f090 + 100) != '\0') {
    DAT_14cb0e6de = DAT_14cb0e6de + '\x01';
  }
  return;
}



// FUNCTION 145e19f2a FUN_145e19f2a body=216 status=ok
// SIG undefined FUN_145e19f2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e19f2a(void)

{
  _DAT_14cb0edc8 = L"OutVolumeTextureSampler";
  DAT_14cb0edf2 = FUN_140850cc5();
  _DAT_14cb0edd0 = FUN_140fb78d0();
  _DAT_14cb0ede0 = &LAB_14682652b;
  _DAT_14cb0ede8 = 0x1000000f4;
  _DAT_14cb0edf0 = 0;
  _DAT_14cb0edd8 = DAT_14cb0e688;
  DAT_14cb0e688 = &DAT_14cb0edc8;
  _DAT_14cb0ed98 = L"OutVolumeTexture";
  DAT_14cb0edc2 = FUN_140850cc5();
  _DAT_14cb0eda0 = FUN_140fb78d0();
  _DAT_14cb0edb0 = &LAB_14682652b;
  _DAT_14cb0edb8 = 0x1000000f0;
  _DAT_14cb0edc0 = 0;
  _DAT_14cb0eda8 = DAT_14cb0e688;
  DAT_14cb0e688 = &DAT_14cb0ed98;
  return;
}



// FUNCTION 145e1a002 FUN_145e1a002 body=284 status=ok
// SIG undefined FUN_145e1a002(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e1a002(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2af88) {
    FUN_144b3d300(&DAT_14cc2af88);
    if (DAT_14cc2af88 == -1) {
      FUN_145e1a11e();
      FUN_140db5666(&DAT_14cc2aee0,0,&DAT_14cc2ae78,L"FFXFIAdditionalUICS",
                    L"/Plugin/FSR3/Private/PostProcessFFX_FIAdditionalUI.usf",L"MainCS",5,1,
                    FUN_14982802e,FUN_149828006,&LAB_149827fee,&LAB_149827fea,&LAB_14712ac0c,
                    &LAB_14712ac08,0x100,0);
      _DAT_14cc2aee0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465c81d);
      _Init_thread_footer(&DAT_14cc2af88);
    }
  }
  return &DAT_14cc2aee0;
}



// FUNCTION 145e1a11e FUN_145e1a11e body=210 status=ok
// SIG undefined FUN_145e1a11e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1a11e(void)

{
  if ((DAT_14cc2aedf & 2) == 0) {
    DAT_14cc2aedf = DAT_14cc2aedf | 2;
    _DAT_14cc2ae80 = L"FFXFIAdditionalUICS";
    _DAT_14cc2ae98 = FUN_146826540;
    _DAT_14cc2aea0 = FUN_146825d77;
    _DAT_14cc2aea8 = FUN_146825fd6;
    _DAT_14cc2aeb0 = FUN_1407e02ea;
    _DAT_14cc2aeb8 = FUN_146826273;
    _DAT_14cc2ae90 = FUN_149827fbc;
    _DAT_14cc2aed0 = 0xffffffff00000100;
    _DAT_14cc2aed8 = 8;
    DAT_14cc2aedc = 0;
    _DAT_14cc2aec0 = &LAB_149827fe6;
    FUN_145e1a1f0();
    FUN_145e1a3d8();
    FUN_1407e00cc(&DAT_14cc2ae78);
    return;
  }
  return;
}



// FUNCTION 145e1a1f0 FUN_145e1a1f0 body=121 status=ok
// SIG undefined FUN_145e1a1f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1a1f0(void)

{
  FUN_145e1a26a();
  _DAT_14cc2c830 = L"FirstFrame";
  DAT_14cc2c85a = FUN_140850cc5();
  _DAT_14cc2c838 = FUN_140fb78d0();
  _DAT_14cc2c848 = &LAB_14682652b;
  _DAT_14cc2c850 = 0x1000000e0;
  _DAT_14cc2c858 = 0;
  _DAT_14cc2c840 = DAT_14cc2ae88;
  DAT_14cc2ae88 = &DAT_14cc2c830;
  return;
}



// FUNCTION 145e1a26a FUN_145e1a26a body=121 status=ok
// SIG undefined FUN_145e1a26a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1a26a(void)

{
  FUN_145e1a2e4();
  _DAT_14cc2c860 = L"FirstFrameWithUI";
  DAT_14cc2c88a = FUN_140850cc5();
  _DAT_14cc2c868 = FUN_140fb78d0();
  _DAT_14cc2c878 = &LAB_14682652b;
  _DAT_14cc2c880 = 0x1000000e4;
  _DAT_14cc2c888 = 0;
  _DAT_14cc2c870 = DAT_14cc2ae88;
  DAT_14cc2ae88 = &DAT_14cc2c860;
  return;
}



// FUNCTION 145e1a2e4 FUN_145e1a2e4 body=121 status=ok
// SIG undefined FUN_145e1a2e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1a2e4(void)

{
  FUN_145e1a35e();
  _DAT_14cc2c890 = L"SecondFrame";
  DAT_14cc2c8ba = FUN_140850cc5();
  _DAT_14cc2c898 = FUN_140fb78d0();
  _DAT_14cc2c8a8 = &LAB_14682652b;
  _DAT_14cc2c8b0 = 0x1000000e8;
  _DAT_14cc2c8b8 = 0;
  _DAT_14cc2c8a0 = DAT_14cc2ae88;
  DAT_14cc2ae88 = &DAT_14cc2c890;
  return;
}



// FUNCTION 145e1a35e FUN_145e1a35e body=121 status=ok
// SIG undefined FUN_145e1a35e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1a35e(void)

{
  FUN_145e1a454();
  _DAT_14cc2c8c0 = L"SecondFrameWithUI";
  DAT_14cc2c8ea = FUN_140850cc5();
  _DAT_14cc2c8c8 = FUN_140fb78d0();
  _DAT_14cc2c8d8 = &LAB_14682652b;
  _DAT_14cc2c8e0 = 0x1000000ec;
  _DAT_14cc2c8e8 = 0;
  _DAT_14cc2c8d0 = DAT_14cc2ae88;
  DAT_14cc2ae88 = &DAT_14cc2c8c0;
  return;
}



// FUNCTION 145e1a3d8 FUN_145e1a3d8 body=123 status=ok
// SIG undefined FUN_145e1a3d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1a3d8(void)

{
  _DAT_14cc2cb60 = L"BASE";
  DAT_14cc2cb8a = 4;
  _DAT_14cc2cb68 = FUN_140b35ae4();
  _DAT_14cc2cb70 = DAT_14cc2ae88;
  _DAT_14cc2cb78 = &LAB_14682652b;
  DAT_14cc2ae88 = &DAT_14cc2cb60;
  DAT_14cc2aedd = DAT_14cc2aedd + '\x01';
  _DAT_14cc2cb80 = 0x100000000;
  if (*(char *)(_DAT_14cc2cb68 + 100) != '\0') {
    DAT_14cc2aede = DAT_14cc2aede + '\x01';
  }
  return;
}



// FUNCTION 145e1a454 FUN_145e1a454 body=216 status=ok
// SIG undefined FUN_145e1a454(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1a454(void)

{
  _DAT_14cc2c920 = L"ViewMin";
  DAT_14cc2c94a = FUN_140850cc5();
  _DAT_14cc2c928 = FUN_140ec6960();
  _DAT_14cc2c938 = &LAB_14682652b;
  _DAT_14cc2c940 = 0x1000000f6;
  _DAT_14cc2c948 = 0;
  _DAT_14cc2c930 = DAT_14cc2ae88;
  DAT_14cc2ae88 = &DAT_14cc2c920;
  _DAT_14cc2c8f0 = L"ViewSize";
  DAT_14cc2c91a = FUN_140850cc5();
  _DAT_14cc2c8f8 = FUN_140ec6960();
  _DAT_14cc2c908 = &LAB_14682652b;
  _DAT_14cc2c910 = 0x1000000f0;
  _DAT_14cc2c918 = 0;
  _DAT_14cc2c900 = DAT_14cc2ae88;
  DAT_14cc2ae88 = &DAT_14cc2c8f0;
  return;
}



// FUNCTION 145e1a52c FUN_145e1a52c body=284 status=ok
// SIG undefined FUN_145e1a52c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e1a52c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca35410) {
    FUN_144b3d300(&DAT_14ca35410);
    if (DAT_14ca35410 == -1) {
      FUN_145e1a648();
      FUN_140db5666(&DAT_14ca35368,0,&DAT_14ca35300,L"FUpscaleVS",
                    L"/Engine/Private/PostProcessUpscale.usf",L"MainVS",0,1,FUN_1472a960c,
                    FUN_1472a95ac,&LAB_1472a95a8,&LAB_1472a95a4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca35368 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f2640a);
      _Init_thread_footer(&DAT_14ca35410);
    }
  }
  return &DAT_14ca35368;
}



// FUNCTION 145e1a648 FUN_145e1a648 body=205 status=ok
// SIG undefined FUN_145e1a648(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1a648(void)

{
  if ((DAT_14ca35367 & 2) == 0) {
    DAT_14ca35367 = DAT_14ca35367 | 2;
    _DAT_14ca35308 = L"FUpscaleVS";
    _DAT_14ca35320 = FUN_146826540;
    _DAT_14ca35328 = FUN_146825d77;
    _DAT_14ca35330 = FUN_146825fd6;
    _DAT_14ca35338 = FUN_1407e02ea;
    _DAT_14ca35340 = FUN_146826273;
    _DAT_14ca35318 = FUN_1472a9574;
    _DAT_14ca35358 = 0xffffffff000000e0;
    _DAT_14ca35360 = 8;
    DAT_14ca35364 = 0;
    _DAT_14ca35348 = &LAB_1472a95a0;
    FUN_145e1a716();
    FUN_1407e00cc(&DAT_14ca35300);
    return;
  }
  return;
}



// FUNCTION 145e1a716 FUN_145e1a716 body=123 status=ok
// SIG undefined FUN_145e1a716(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1a716(void)

{
  _DAT_14ca382a0 = L"BASE";
  DAT_14ca382ca = 4;
  _DAT_14ca382a8 = FUN_145e1a792();
  _DAT_14ca382b0 = DAT_14ca35310;
  _DAT_14ca382b8 = &LAB_14682652b;
  DAT_14ca35310 = &DAT_14ca382a0;
  DAT_14ca35365 = DAT_14ca35365 + '\x01';
  _DAT_14ca382c0 = 0x100000000;
  if (*(char *)(_DAT_14ca382a8 + 100) != '\0') {
    DAT_14ca35366 = DAT_14ca35366 + '\x01';
  }
  return;
}



// FUNCTION 145e1a792 FUN_145e1a792 body=206 status=ok
// SIG undefined FUN_145e1a792(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e1a792(void)

{
  if ((DAT_14ca4b6d7 & 2) == 0) {
    DAT_14ca4b6d7 = DAT_14ca4b6d7 | 2;
    _DAT_14ca4b678 = L"FScreenPassVS";
    _DAT_14ca4b690 = FUN_146826540;
    _DAT_14ca4b698 = FUN_146825d77;
    _DAT_14ca4b6a0 = FUN_146825fd6;
    _DAT_14ca4b6a8 = FUN_1407e02ea;
    _DAT_14ca4b6b0 = FUN_146826273;
    _DAT_14ca4b688 = FUN_1472e38e2;
    _DAT_14ca4b6c8 = 0xffffffff000000e0;
    _DAT_14ca4b6d0 = 8;
    DAT_14ca4b6d4 = 0;
    _DAT_14ca4b6b8 = &LAB_1472e390e;
    FUN_145e1a860();
    FUN_1407e00cc(&DAT_14ca4b670);
  }
  return &DAT_14ca4b670;
}



// FUNCTION 145e1a860 FUN_145e1a860 body=123 status=ok
// SIG undefined FUN_145e1a860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1a860(void)

{
  _DAT_14ca4c8e8 = L"BASE";
  DAT_14ca4c912 = 4;
  _DAT_14ca4c8f0 = FUN_140b35ae4();
  _DAT_14ca4c8f8 = DAT_14ca4b680;
  _DAT_14ca4c900 = &LAB_14682652b;
  DAT_14ca4b680 = &DAT_14ca4c8e8;
  DAT_14ca4b6d5 = DAT_14ca4b6d5 + '\x01';
  _DAT_14ca4c908 = 0x100000000;
  if (*(char *)(_DAT_14ca4c8f0 + 100) != '\0') {
    DAT_14ca4b6d6 = DAT_14ca4b6d6 + '\x01';
  }
  return;
}



// FUNCTION 145e1a8dc FUN_145e1a8dc body=401 status=ok
// SIG undefined FUN_145e1a8dc(void)

longlong * FUN_145e1a8dc(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_145e1a9e1;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    lVar5 = *(longlong *)(param_1 + 0x18);
    if (lVar5 != 0) {
      uVar8 = FUN_145bd65c8();
      lVar9 = FUN_14127aa70(uVar8,param_3);
      FUN_145e1aa6e(lVar5,&local_38);
      if ((lVar9 != 0) && (local_38 != (undefined8 *)0x0)) {
        local_58 = *local_38;
        local_50 = (longlong *)local_38[1];
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        FUN_145e1aad6(lVar9,&local_48,&local_58);
        if (&local_48 == param_2) {
          if (local_48 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_2 != 0) {
            FUN_1400020a8();
          }
          *param_2 = local_48;
          local_48 = 0;
          *(undefined4 *)(param_2 + 1) = (undefined4)local_40;
          *(undefined4 *)((longlong)param_2 + 0xc) = local_40._4_4_;
          local_40 = 0;
        }
        plVar2 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_30 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar3 = (int *)((longlong)local_30 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
        }
      }
    }
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
LAB_145e1a9e1:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145e1aa6e FUN_145e1aa6e body=103 status=ok
// SIG undefined FUN_145e1aa6e(void)

void FUN_145e1aa6e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar4 = 0;
    uVar3 = 0;
    do {
      if (*(char *)(*(longlong *)(lVar2 + lVar4) + 0x18) != '\0') {
        if ((-1 < (int)uVar3) && ((int)uVar3 < iVar1)) {
          lVar4 = (ulonglong)(uVar3 & 0x7fffffff) * 0x10;
          *param_2 = *(undefined8 *)(lVar2 + lVar4);
          lVar2 = *(longlong *)(lVar2 + 8 + lVar4);
          param_2[1] = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          return;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 << 4 != lVar4);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 145e1aad6 FUN_145e1aad6 body=341 status=ok
// SIG undefined FUN_145e1aad6(void)

undefined8 * FUN_145e1aad6(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  local_38 = (longlong *)*param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_30 = plVar4;
  }
  uVar5 = (**(code **)(*local_38 + 0x40))();
  iVar6 = FUN_140b6c796((longlong *)(param_1 + 0xe0),uVar5,&local_38);
  plVar2 = local_30;
  if (iVar6 == -1) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)iVar6 * 0x28 + *(longlong *)(param_1 + 0xe0);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
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
  if (lVar7 != 0) {
    FUN_144a787a6(param_2,lVar7 + 0x10);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e1ac2c FUN_145e1ac2c body=38 status=ok
// SIG undefined FUN_145e1ac2c(void)

undefined8 FUN_145e1ac2c(undefined8 param_1,int param_2)

{
  FUN_145e1ac52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e1ac52 FUN_145e1ac52 body=863 status=ok
// SIG undefined FUN_145e1ac52(void)

void FUN_145e1ac52(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14a5898a0;
  param_1[1] = &PTR_FUN_14a5898c8;
  param_1[2] = &PTR_FUN_14a5898d8;
  local_20 = FUN_14479d2ce(param_1 + 0x78);
  FUN_145e1b092(param_1,1);
  if (param_1[0x4c] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e));
    (*(code *)**(undefined8 **)param_1[0x4c])();
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e));
    FUN_1477fe4c4(param_1);
    FUN_1477fe54e(param_1);
  }
  lVar3 = param_1[0x3d];
  if (lVar3 != 0) {
    FUN_145e1b1e0(lVar3);
    FUN_1400020a8(lVar3);
  }
  param_1[0x3d] = 0;
  plVar4 = (longlong *)param_1[0x7a];
  if (plVar4 != (longlong *)0x0) {
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
      }
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x01') {
    *(undefined1 *)(param_1 + 0x73) = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x56));
  while ((undefined8 *)param_1[0x55] != (undefined8 *)0x0) {
    param_1[0x55] = *(undefined8 *)param_1[0x55];
    FUN_1400020a8();
  }
  while ((undefined8 *)param_1[0x53] != (undefined8 *)0x0) {
    param_1[0x53] = *(undefined8 *)param_1[0x53];
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x4d];
  if (plVar4 != (longlong *)0x0) {
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
      }
    }
  }
  FUN_144760e21(param_1[0x48],*(undefined4 *)(param_1 + 0x49));
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e));
  FUN_145e1afea(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1afb2(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1b022(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1afb2(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1b05a(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x20];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if (*(char *)(param_1 + 0x17) == '\x01') {
    *(undefined4 *)(param_1 + 0x16) = 0;
    if (param_1[0x15] != 0) {
      FUN_1400020a8();
    }
    FUN_145a369d8(param_1 + 0xd);
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  plVar4 = (longlong *)param_1[4];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e1afb2 FUN_145e1afb2 body=56 status=ok
// SIG undefined FUN_145e1afb2(void)

void FUN_145e1afb2(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145e1afea FUN_145e1afea body=56 status=ok
// SIG undefined FUN_145e1afea(void)

void FUN_145e1afea(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145e1b022 FUN_145e1b022 body=56 status=ok
// SIG undefined FUN_145e1b022(void)

void FUN_145e1b022(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145e1b05a FUN_145e1b05a body=56 status=ok
// SIG undefined FUN_145e1b05a(void)

void FUN_145e1b05a(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145e1b092 FUN_145e1b092 body=139 status=ok
// SIG undefined FUN_145e1b092(void)

void FUN_145e1b092(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  FUN_145e1b374(param_1 + 0x108,param_2,param_3);
  FUN_145e1b436(param_1 + 0x128,param_2,param_3);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  FUN_145e1b11e(param_1 + 0x118,param_2,param_3);
  FUN_145e1b11e(param_1 + 0x138,param_2,param_3);
  FUN_145e1b4f8(param_1 + 0x148,param_2,param_3);
  return;
}



// FUNCTION 145e1b11e FUN_145e1b11e body=193 status=ok
// SIG undefined FUN_145e1b11e(void)

void FUN_145e1b11e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  
  uVar7 = (longlong)(int)param_1[1];
  if (0 < (longlong)(int)param_1[1]) {
    do {
      uVar8 = uVar7 - 1;
      lVar3 = *param_1;
      plVar9 = *(longlong **)(lVar3 + 8 + uVar8 * 0x10);
      bVar4 = true;
      if (plVar9 == (longlong *)0x0) {
LAB_145e1b169:
        plVar9 = (longlong *)0x0;
LAB_145e1b16c:
        FUN_14780950c(param_1,uVar8 & 0xffffffff);
        FUN_14780956c(param_1);
        if (!bVar4) goto LAB_145e1b184;
      }
      else {
        iVar6 = (int)plVar9[1];
        do {
          if (iVar6 == 0) goto LAB_145e1b169;
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar10 = iVar6 == iVar5;
          if (bVar10) {
            *(int *)(plVar9 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar10);
        lVar3 = *(longlong *)(lVar3 + uVar8 * 0x10);
        if (lVar3 == 0) {
          bVar4 = false;
          goto LAB_145e1b16c;
        }
        FUN_147808db2(lVar3 + 8,param_2,param_3);
LAB_145e1b184:
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      bVar4 = 1 < (longlong)uVar7;
      uVar7 = uVar8;
    } while (bVar4);
  }
  return;
}



// FUNCTION 145e1b1e0 FUN_145e1b1e0 body=188 status=ok
// SIG undefined FUN_145e1b1e0(void)

void FUN_145e1b1e0(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x150));
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_145e1b29c(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_145e1b2d2(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_145e1b308(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145e1b33e(param_1);
  return;
}



// FUNCTION 145e1b29c FUN_145e1b29c body=53 status=ok
// SIG undefined FUN_145e1b29c(void)

void FUN_145e1b29c(longlong *param_1)

{
  FUN_145e1b5ba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e1b2d2 FUN_145e1b2d2 body=53 status=ok
// SIG undefined FUN_145e1b2d2(void)

void FUN_145e1b2d2(longlong *param_1)

{
  FUN_145e1b736();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e1b308 FUN_145e1b308 body=53 status=ok
// SIG undefined FUN_145e1b308(void)

void FUN_145e1b308(longlong *param_1)

{
  FUN_145e1b8b2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e1b33e FUN_145e1b33e body=53 status=ok
// SIG undefined FUN_145e1b33e(void)

void FUN_145e1b33e(longlong *param_1)

{
  FUN_145e1ba2e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e1b374 FUN_145e1b374 body=193 status=ok
// SIG undefined FUN_145e1b374(void)

void FUN_145e1b374(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  
  uVar7 = (longlong)(int)param_1[1];
  if (0 < (longlong)(int)param_1[1]) {
    do {
      uVar8 = uVar7 - 1;
      lVar3 = *param_1;
      plVar9 = *(longlong **)(lVar3 + 8 + uVar8 * 0x10);
      bVar4 = true;
      if (plVar9 == (longlong *)0x0) {
LAB_145e1b3bf:
        plVar9 = (longlong *)0x0;
LAB_145e1b3c2:
        FUN_1478080f2(param_1,uVar8 & 0xffffffff);
        FUN_147808152(param_1);
        if (!bVar4) goto LAB_145e1b3da;
      }
      else {
        iVar6 = (int)plVar9[1];
        do {
          if (iVar6 == 0) goto LAB_145e1b3bf;
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar10 = iVar6 == iVar5;
          if (bVar10) {
            *(int *)(plVar9 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar10);
        lVar3 = *(longlong *)(lVar3 + uVar8 * 0x10);
        if (lVar3 == 0) {
          bVar4 = false;
          goto LAB_145e1b3c2;
        }
        FUN_147808db2(lVar3 + 8,param_2,param_3);
LAB_145e1b3da:
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      bVar4 = 1 < (longlong)uVar7;
      uVar7 = uVar8;
    } while (bVar4);
  }
  return;
}



// FUNCTION 145e1b436 FUN_145e1b436 body=193 status=ok
// SIG undefined FUN_145e1b436(void)

void FUN_145e1b436(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  
  uVar7 = (longlong)(int)param_1[1];
  if (0 < (longlong)(int)param_1[1]) {
    do {
      uVar8 = uVar7 - 1;
      lVar3 = *param_1;
      plVar9 = *(longlong **)(lVar3 + 8 + uVar8 * 0x10);
      bVar4 = true;
      if (plVar9 == (longlong *)0x0) {
LAB_145e1b481:
        plVar9 = (longlong *)0x0;
LAB_145e1b484:
        FUN_147809608(param_1,uVar8 & 0xffffffff);
        FUN_147809668(param_1);
        if (!bVar4) goto LAB_145e1b49c;
      }
      else {
        iVar6 = (int)plVar9[1];
        do {
          if (iVar6 == 0) goto LAB_145e1b481;
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar10 = iVar6 == iVar5;
          if (bVar10) {
            *(int *)(plVar9 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar10);
        lVar3 = *(longlong *)(lVar3 + uVar8 * 0x10);
        if (lVar3 == 0) {
          bVar4 = false;
          goto LAB_145e1b484;
        }
        FUN_147808db2(lVar3 + 8,param_2,param_3);
LAB_145e1b49c:
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      bVar4 = 1 < (longlong)uVar7;
      uVar7 = uVar8;
    } while (bVar4);
  }
  return;
}



// FUNCTION 145e1b4f8 FUN_145e1b4f8 body=193 status=ok
// SIG undefined FUN_145e1b4f8(void)

void FUN_145e1b4f8(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  
  uVar7 = (longlong)(int)param_1[1];
  if (0 < (longlong)(int)param_1[1]) {
    do {
      uVar8 = uVar7 - 1;
      lVar3 = *param_1;
      plVar9 = *(longlong **)(lVar3 + 8 + uVar8 * 0x10);
      bVar4 = true;
      if (plVar9 == (longlong *)0x0) {
LAB_145e1b543:
        plVar9 = (longlong *)0x0;
LAB_145e1b546:
        FUN_147809704(param_1,uVar8 & 0xffffffff);
        FUN_147809764(param_1);
        if (!bVar4) goto LAB_145e1b55e;
      }
      else {
        iVar6 = (int)plVar9[1];
        do {
          if (iVar6 == 0) goto LAB_145e1b543;
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar10 = iVar6 == iVar5;
          if (bVar10) {
            *(int *)(plVar9 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar10);
        lVar3 = *(longlong *)(lVar3 + uVar8 * 0x10);
        if (lVar3 == 0) {
          bVar4 = false;
          goto LAB_145e1b546;
        }
        FUN_147808db2(lVar3 + 8,param_2,param_3);
LAB_145e1b55e:
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      bVar4 = 1 < (longlong)uVar7;
      uVar7 = uVar8;
    } while (bVar4);
  }
  return;
}



// FUNCTION 145e1b5ba FUN_145e1b5ba body=378 status=ok
// SIG undefined FUN_145e1b5ba(void)

void FUN_145e1b5ba(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
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
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e1b736 FUN_145e1b736 body=378 status=ok
// SIG undefined FUN_145e1b736(void)

void FUN_145e1b736(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
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
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e1b8b2 FUN_145e1b8b2 body=378 status=ok
// SIG undefined FUN_145e1b8b2(void)

void FUN_145e1b8b2(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
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
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e1ba2e FUN_145e1ba2e body=378 status=ok
// SIG undefined FUN_145e1ba2e(void)

void FUN_145e1ba2e(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
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
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e1bbaa FUN_145e1bbaa body=48 status=ok
// SIG undefined FUN_145e1bbaa(void)

void FUN_145e1bbaa(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_145e1bbda(param_1 + 0x10);
  return;
}



// FUNCTION 145e1bbda FUN_145e1bbda body=53 status=ok
// SIG undefined FUN_145e1bbda(void)

void FUN_145e1bbda(longlong *param_1)

{
  FUN_145e1bc10();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e1bc10 FUN_145e1bc10 body=369 status=ok
// SIG undefined FUN_145e1bc10(void)

void FUN_145e1bc10(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0x50);
      FUN_148e21e70(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e1bd8e FUN_145e1bd8e body=201 status=ok
// SIG undefined FUN_145e1bd8e(void)

undefined8 * FUN_145e1bd8e(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a683ea0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeaec8) {
    FUN_144b3d300(&DAT_14caeaec8);
    if (DAT_14caeaec8 == -1) {
      FUN_141569862();
      atexit((_func_5014 *)&LAB_14356da36);
      _Init_thread_footer(&DAT_14caeaec8);
    }
  }
  param_1[0x20] = 0x3f0000003f000000;
  param_1[0x21] = 0x3e800000;
  return param_1;
}



// FUNCTION 145e1be58 FUN_145e1be58 body=287 status=ok
// SIG undefined FUN_145e1be58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e1be58(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d7678) {
    FUN_144b3d300(&DAT_14c9d7678);
    if (DAT_14c9d7678 == -1) {
      FUN_145e1bf78();
      FUN_140db5666(&DAT_14c9d75d0,2,&DAT_14c9d7568,L"FHairMaterialPS",
                    L"/Engine/Private/HairStrands/HairStrandsMaterialPS.usf",L"Main",3,1,
                    FUN_147181472,FUN_14718144a,FUN_141764304,&LAB_147181446,&LAB_14712ac0c,
                    &LAB_14712ac08,0x130,0);
      _DAT_14c9d75d0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142c647cc);
      _Init_thread_footer(&DAT_14c9d7678);
    }
  }
  return &DAT_14c9d75d0;
}



// FUNCTION 145e1bf78 FUN_145e1bf78 body=210 status=ok
// SIG undefined FUN_145e1bf78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1bf78(void)

{
  if ((DAT_14c9d75cf & 2) == 0) {
    DAT_14c9d75cf = DAT_14c9d75cf | 2;
    _DAT_14c9d7570 = L"FHairMaterialPS";
    _DAT_14c9d7588 = FUN_146826540;
    _DAT_14c9d7590 = FUN_146825d77;
    _DAT_14c9d7598 = FUN_146825fd6;
    _DAT_14c9d75a0 = FUN_1407e02ea;
    _DAT_14c9d75a8 = FUN_146826273;
    _DAT_14c9d7580 = FUN_14718140c;
    _DAT_14c9d75c0 = 0xffffffff00000130;
    _DAT_14c9d75c8 = 8;
    DAT_14c9d75cc = 0;
    _DAT_14c9d75b0 = &LAB_147181442;
    FUN_145e1c04a();
    FUN_145e1c232();
    FUN_1407e00cc(&DAT_14c9d7568);
    return;
  }
  return;
}



// FUNCTION 145e1c04a FUN_145e1c04a body=121 status=ok
// SIG undefined FUN_145e1c04a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1c04a(void)

{
  FUN_145e1c0c4();
  _DAT_14c9da5f8 = L"MaterialPass_MacroGroupId";
  DAT_14c9da622 = FUN_140850cc5();
  _DAT_14c9da600 = FUN_140ec6960();
  _DAT_14c9da610 = &LAB_14682652b;
  _DAT_14c9da618 = &DAT_100000108;
  _DAT_14c9da620 = 0;
  _DAT_14c9da608 = DAT_14c9d7578;
  DAT_14c9d7578 = &DAT_14c9da5f8;
  return;
}



// FUNCTION 145e1c0c4 FUN_145e1c0c4 body=121 status=ok
// SIG undefined FUN_145e1c0c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1c0c4(void)

{
  FUN_145e1c13e();
  _DAT_14c9da628 = L"MaterialPass_MaterialId";
  DAT_14c9da652 = FUN_140850cc5();
  _DAT_14c9da630 = FUN_140ec6960();
  _DAT_14c9da640 = &LAB_14682652b;
  _DAT_14c9da648 = 0x10000010e;
  _DAT_14c9da650 = 0;
  _DAT_14c9da638 = DAT_14c9d7578;
  DAT_14c9d7578 = &DAT_14c9da628;
  return;
}



// FUNCTION 145e1c13e FUN_145e1c13e body=121 status=ok
// SIG undefined FUN_145e1c13e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1c13e(void)

{
  FUN_145e1c1b8();
  _DAT_14c9da658 = L"MaterialPass_PrimitiveId";
  DAT_14c9da682 = FUN_140850cc5();
  _DAT_14c9da660 = FUN_140ec6960();
  _DAT_14c9da670 = &LAB_14682652b;
  _DAT_14c9da678 = 0x100000114;
  _DAT_14c9da680 = 0;
  _DAT_14c9da668 = DAT_14c9d7578;
  DAT_14c9d7578 = &DAT_14c9da658;
  return;
}



// FUNCTION 145e1c1b8 FUN_145e1c1b8 body=121 status=ok
// SIG undefined FUN_145e1c1b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1c1b8(void)

{
  FUN_145e1c2ae();
  _DAT_14c9da688 = L"MaterialPass_LightChannelMask";
  DAT_14c9da6b2 = FUN_140850cc5();
  _DAT_14c9da690 = FUN_140ec6960();
  _DAT_14c9da6a0 = &LAB_14682652b;
  _DAT_14c9da6a8 = 0x10000011a;
  _DAT_14c9da6b0 = 0;
  _DAT_14c9da698 = DAT_14c9d7578;
  DAT_14c9d7578 = &DAT_14c9da688;
  return;
}



// FUNCTION 145e1c232 FUN_145e1c232 body=123 status=ok
// SIG undefined FUN_145e1c232(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1c232(void)

{
  _DAT_14c9dbaf8 = L"BASE";
  DAT_14c9dbb22 = 4;
  _DAT_14c9dbb00 = FUN_141092e92();
  _DAT_14c9dbb08 = DAT_14c9d7578;
  _DAT_14c9dbb10 = &LAB_14682652b;
  DAT_14c9d7578 = &DAT_14c9dbaf8;
  DAT_14c9d75cd = DAT_14c9d75cd + '\x01';
  _DAT_14c9dbb18 = 0x100000000;
  if (*(char *)(_DAT_14c9dbb00 + 100) != '\0') {
    DAT_14c9d75ce = DAT_14c9d75ce + '\x01';
  }
  return;
}



// FUNCTION 145e1c2ae FUN_145e1c2ae body=216 status=ok
// SIG undefined FUN_145e1c2ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1c2ae(void)

{
  _DAT_14c9da6e8 = L"MaterialPass_HairCoverageScale";
  DAT_14c9da712 = FUN_140850cc5();
  _DAT_14c9da6f0 = FUN_140ec6960();
  _DAT_14c9da700 = &LAB_14682652b;
  _DAT_14c9da708 = 0x100000126;
  _DAT_14c9da710 = 0;
  _DAT_14c9da6f8 = DAT_14c9d7578;
  DAT_14c9d7578 = &DAT_14c9da6e8;
  _DAT_14c9da6b8 = L"MaterialPass_Flags";
  DAT_14c9da6e2 = FUN_140850cc5();
  _DAT_14c9da6c0 = FUN_140ec6960();
  _DAT_14c9da6d0 = &LAB_14682652b;
  _DAT_14c9da6d8 = 0x100000120;
  _DAT_14c9da6e0 = 0;
  _DAT_14c9da6c8 = DAT_14c9d7578;
  DAT_14c9d7578 = &DAT_14c9da6b8;
  return;
}



// FUNCTION 145e1c386 FUN_145e1c386 body=316 status=ok
// SIG undefined FUN_145e1c386(void)

undefined4 * FUN_145e1c386(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145e1c5e6(param_1,local_48);
  FUN_145e1c4c4(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_145e1c578(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x24) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145e1c6ce(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e1c4c4 FUN_145e1c4c4 body=101 status=ok
// SIG undefined FUN_145e1c4c4(void)

undefined8 * FUN_145e1c4c4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_145e1c52a(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 145e1c52a FUN_145e1c52a body=77 status=ok
// SIG undefined FUN_145e1c52a(void)

undefined8 * FUN_145e1c52a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14584240a(param_1,iVar1,0);
    FUN_1458423d5(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 145e1c578 FUN_145e1c578 body=109 status=ok
// SIG undefined FUN_145e1c578(void)

undefined8 FUN_145e1c578(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_145842592(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
    FUN_145cc0e18(puVar1);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    puVar1[4] = param_3[4];
    puVar1[5] = uVar6;
    puVar1[6] = uVar7;
    puVar1[7] = uVar8;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_1461a946c(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 145e1c5e6 FUN_145e1c5e6 body=231 status=ok
// SIG undefined FUN_145e1c5e6(void)

int * FUN_145e1c5e6(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 145e1c6ce FUN_145e1c6ce body=485 status=ok
// SIG undefined FUN_145e1c6ce(void)

void FUN_145e1c6ce(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e1c8b4 FUN_145e1c8b4 body=265 status=ok
// SIG undefined FUN_145e1c8b4(void)

void FUN_145e1c8b4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  FUN_145e1c9be(&local_40,local_20,local_28);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e1c9be FUN_145e1c9be body=252 status=ok
// SIG undefined FUN_145e1c9be(void)

undefined8 FUN_145e1c9be(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [56];
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_141001a28(local_88);
  local_b8[0] = 0;
  local_90 = 0;
  FUN_1456bb102(local_b8,param_2);
  FUN_1447c3578(local_88,local_50,local_b8);
  FUN_144a7b7fe(local_50,param_1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_50;
    if (0x18 < local_38) {
      pppuVar2 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_b8);
  FUN_144a2da94(local_88);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e1cabc FUN_145e1cabc body=218 status=ok
// SIG undefined FUN_145e1cabc(void)

void FUN_145e1cabc(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_14479d2ce(param_1 + 0x70);
  if (lVar4 != 0) {
    FUN_141085fe4(param_1,&local_40);
    local_30 = local_40;
    local_28 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FUN_145e1cb98(lVar4 + 0x6c48,&local_30);
    plVar2 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)local_38 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e1cb98 FUN_145e1cb98 body=180 status=ok
// SIG undefined FUN_145e1cb98(void)

void FUN_145e1cb98(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x318) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  cVar2 = FUN_145d4ada4(param_1 + 0x2f8,param_2);
  if (cVar2 != '\0') {
    local_38 = *param_2;
    local_30 = (longlong *)param_2[1];
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
      UNLOCK();
    }
    local_28 = &local_38;
    FUN_145e1cc60(param_1 + 0x2f8);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
    FUN_145d4b532(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e1cc60 FUN_145e1cc60 body=287 status=ok
// SIG undefined FUN_145e1cc60(void)

void FUN_145e1cc60(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int local_64;
  
  iVar1 = (int)param_1[1];
  lVar9 = (longlong)iVar1;
  if (lVar9 != 0) {
    lVar2 = *param_1;
    bVar3 = FUN_145e1cd80(param_2,lVar2);
    local_64 = 0;
    iVar6 = 0;
    do {
      lVar5 = (longlong)iVar6;
      iVar11 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar11 = iVar1;
      }
      lVar10 = lVar5 * 0x10;
      lVar12 = lVar2 + 0x10 + lVar10;
      iVar8 = iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar7 = iVar11;
        if (lVar9 <= lVar5) break;
        bVar4 = FUN_145e1cd80(param_2,lVar12);
        iVar8 = iVar8 + 1;
        lVar12 = lVar12 + 0x10;
        iVar7 = iVar8;
      } while ((bVar3 & 1) == bVar4);
      iVar11 = iVar7 - iVar6;
      if ((bVar3 & 1) == 0) {
        if (local_64 != iVar6) {
          memmove((void *)((longlong)local_64 * 0x10 + lVar2),(void *)(lVar10 + lVar2),
                  (longlong)iVar11 << 4);
        }
        local_64 = local_64 + iVar11;
      }
      else {
        FUN_140c22032(lVar10 + lVar2,iVar11);
      }
      iVar6 = iVar7;
      bVar3 = bVar3 ^ 1;
    } while (lVar5 < lVar9);
    *(int *)(param_1 + 1) = local_64;
  }
  return;
}



// FUNCTION 145e1cd80 FUN_145e1cd80 body=171 status=ok
// SIG undefined FUN_145e1cd80(void)

bool FUN_145e1cd80(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  param_1 = (longlong *)*param_1;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
LAB_145e1cdec:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) goto LAB_145e1cdec;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
  }
  lVar6 = *param_2;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar8 = 0;
    do {
      if (iVar5 == 0) goto LAB_145e1cdd1;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *param_1;
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
LAB_145e1cdd1:
  if (plVar7 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  return lVar6 == lVar8;
}



// FUNCTION 145e1ce2c FUN_145e1ce2c body=350 status=ok
// SIG undefined FUN_145e1ce2c(void)

void FUN_145e1ce2c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = *(longlong **)(param_1 + 0x2c8);
  if (plVar2 == (longlong *)0x0) {
LAB_145e1cf40:
    lVar6 = *param_2;
    lVar7 = 0;
  }
  else {
    iVar4 = (int)plVar2[1];
    do {
      if (iVar4 == 0) goto LAB_145e1cf40;
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    lVar7 = *(longlong *)(param_1 + 0x2c0);
    lVar6 = *param_2;
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (lVar7 == lVar6) {
    plVar2 = *(longlong **)(param_1 + 0x2c8);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(longlong *)(param_1 + 0x2d0) = *param_2;
    plVar2 = (longlong *)param_2[1];
    plVar5 = *(longlong **)(param_1 + 0x2d8);
    if (plVar5 != plVar2) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar5 = *(longlong **)(param_1 + 0x2d8);
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x2d8) = plVar2;
    }
    FUN_145d4b1cc(param_1);
    if ((*(char *)(param_1 + 0x318) == '\x01') && (*(longlong *)(param_1 + 0x2b8) != 0)) {
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_145d4b146();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e1cf94 FUN_145e1cf94 body=181 status=ok
// SIG undefined FUN_145e1cf94(void)

undefined8 * FUN_145e1cf94(undefined8 *param_1)

{
  FUN_140dbffdc();
  *param_1 = &PTR_FUN_14a567a60;
  param_1[6] = &PTR_FUN_14a567d20;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x24] = 2;
  return param_1;
}



// FUNCTION 145e1d04a FUN_145e1d04a body=40 status=ok
// SIG undefined FUN_145e1d04a(void)

undefined8 FUN_145e1d04a(undefined8 param_1,int param_2)

{
  FUN_145e1d072();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e1d072 FUN_145e1d072 body=149 status=ok
// SIG undefined FUN_145e1d072(void)

void FUN_145e1d072(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a57f770;
  plVar3 = (longlong *)param_1[0x18];
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
  plVar3 = (longlong *)param_1[0x16];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1411a8230(param_1);
  return;
}



// FUNCTION 145e1d112 FUN_145e1d112 body=178 status=ok
// SIG undefined FUN_145e1d112(void)

undefined8 * FUN_145e1d112(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x80;
  *param_1 = &PTR_FUN_14a6f1a80;
  param_1[0xd] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x55) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464e0;
  param_1[0xf] = uVar1;
  param_1[0x10] = DAT_14c8464f0;
  param_1[0x13] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x11] = DAT_14c8464e0;
  param_1[0x12] = uVar1;
  param_1[0x14] = 0;
  *(undefined1 *)((longlong)param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined2 *)((longlong)param_1 + 0xaa) = 0;
  *(byte *)((longlong)param_1 + 0xac) = *(byte *)((longlong)param_1 + 0xac) | 4;
  *(byte *)((longlong)param_1 + 0x44) = (*(byte *)((longlong)param_1 + 0x44) & 0xf8) + 1;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  return param_1;
}



// FUNCTION 145e1d1d0 FUN_145e1d1d0 body=177 status=ok
// SIG undefined FUN_145e1d1d0(void)

undefined8 * FUN_145e1d1d0(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145a319be();
  *param_1 = &PTR_FUN_14abeaf80;
  param_1[5] = &PTR_FUN_14abeb2c0;
  FUN_1400b22c2(&local_28,"Simple Parallel");
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) & 0xffffff80 | 0x2b;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e1d28e FUN_145e1d28e body=178 status=ok
// SIG undefined FUN_145e1d28e(void)

undefined8 * FUN_145e1d28e(undefined8 *param_1)

{
  FUN_144a0768c();
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14b15b2a0;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 2;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 2;
  return param_1;
}



// FUNCTION 145e1d340 FUN_145e1d340 body=96 status=ok
// SIG undefined FUN_145e1d340(void)

ulonglong FUN_145e1d340(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145e1d383:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_145e1d383;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 145e1d3a0 FUN_145e1d3a0 body=93 status=ok
// SIG undefined FUN_145e1d3a0(void)

void FUN_145e1d3a0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x30) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x360);
    }
    lVar1 = FUN_14111b7b0(param_1);
    if ((lVar2 == lVar1) && (*(longlong *)(param_1 + 0x90) != *param_4)) {
      *(longlong *)(param_1 + 0x90) = *param_4;
      FUN_14111b6ca(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145e1d3fe FUN_145e1d3fe body=177 status=ok
// SIG undefined FUN_145e1d3fe(void)

void FUN_145e1d3fe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14baa2670;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x22));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_1404417c4(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1d4b0(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1d4e6(param_1 + 2);
  return;
}



// FUNCTION 145e1d4b0 FUN_145e1d4b0 body=53 status=ok
// SIG undefined FUN_145e1d4b0(void)

void FUN_145e1d4b0(longlong *param_1)

{
  FUN_145e1d576();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e1d4e6 FUN_145e1d4e6 body=53 status=ok
// SIG undefined FUN_145e1d4e6(void)

void FUN_145e1d4e6(longlong *param_1)

{
  FUN_145e1d51c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e1d51c FUN_145e1d51c body=90 status=ok
// SIG undefined FUN_145e1d51c(void)

void FUN_145e1d51c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145e1d576 FUN_145e1d576 body=382 status=ok
// SIG undefined FUN_145e1d576(void)

void FUN_145e1d576(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_14908b7a6(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e1d700 FUN_145e1d700 body=178 status=ok
// SIG undefined FUN_145e1d700(void)

undefined8 * FUN_145e1d700(undefined8 *param_1)

{
  FUN_140198756();
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_14bab9d20;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  return param_1;
}



// FUNCTION 145e1d7b2 FUN_145e1d7b2 body=40 status=ok
// SIG undefined FUN_145e1d7b2(void)

undefined8 FUN_145e1d7b2(undefined8 param_1,int param_2)

{
  FUN_145e1d7da();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e1d7da FUN_145e1d7da body=549 status=ok
// SIG undefined FUN_145e1d7da(void)

void FUN_145e1d7da(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb87df0;
  param_1[0x1f] = &PTR_FUN_14bb88160;
  param_1[0x2c] = &PTR_FUN_14bb88190;
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x82) = 0;
  if (param_1[0x81] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x79);
  FUN_145a00245(param_1[0x76],*(undefined4 *)(param_1 + 0x77));
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1d9ff(param_1[0x74],*(undefined4 *)(param_1 + 0x75));
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1da2e(param_1[0x72],*(undefined4 *)(param_1 + 0x73));
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1da5d(param_1[0x70],*(undefined4 *)(param_1 + 0x71));
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x6f) = 0;
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1da8c(param_1 + 0x66);
  FUN_1404dbc70(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x42) = 0;
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x39);
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x32],*(undefined4 *)(param_1 + 0x33));
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2c] = &PTR_LAB_14a4b6560;
  FUN_144760e21(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c56ac(param_1);
  return;
}



// FUNCTION 145e1d9ff FUN_145e1d9ff body=47 status=ok
// SIG undefined FUN_145e1d9ff(void)

void FUN_145e1d9ff(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_14920a250(param_1);
      param_1 = param_1 + 0x118;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145e1da2e FUN_145e1da2e body=47 status=ok
// SIG undefined FUN_145e1da2e(void)

void FUN_145e1da2e(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_14581ef76(param_1);
      param_1 = param_1 + 0x110;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145e1da5d FUN_145e1da5d body=47 status=ok
// SIG undefined FUN_145e1da5d(void)

void FUN_145e1da5d(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_140e127fe(param_1);
      param_1 = param_1 + 0x118;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145e1da8c FUN_145e1da8c body=53 status=ok
// SIG undefined FUN_145e1da8c(void)

void FUN_145e1da8c(longlong *param_1)

{
  FUN_145e1dac2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e1dac2 FUN_145e1dac2 body=350 status=ok
// SIG undefined FUN_145e1dac2(void)

void FUN_145e1dac2(longlong *param_1)

{
  longlong *plVar1;
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
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
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
      if (*(longlong *)(*local_68 + 0x38 + (longlong)iStack_4c * 0x50) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e1dc22 FUN_145e1dc22 body=70 status=ok
// SIG undefined FUN_145e1dc22(void)

undefined8 * FUN_145e1dc22(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x920,0x10);
  FUN_140e14124(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bccc340;
  FUN_145e1dc68(puVar1 + 0x115);
  return puVar1;
}



// FUNCTION 145e1dc68 FUN_145e1dc68 body=119 status=ok
// SIG undefined FUN_145e1dc68(void)

undefined8 * FUN_145e1dc68(undefined8 *param_1)

{
  longlong lVar1;
  
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_14bccac40;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  lVar1 = FUN_1459f6c22();
  param_1[7] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 145e1dcea FUN_145e1dcea body=178 status=ok
// SIG undefined FUN_145e1dcea(void)

undefined8 * FUN_145e1dcea(undefined8 *param_1)

{
  FUN_140d2f8ee();
  *param_1 = &PTR_FUN_14bd7d0c0;
  param_1[0x15] = 0x3dcccccd00000000;
  *(undefined1 *)(param_1 + 0x16) = 1;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 100;
  *(undefined2 *)(param_1 + 0x17) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x19) = 1;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 2;
  *(undefined2 *)((longlong)param_1 + 0xd4) = 1;
  FUN_1446ddc76(param_1 + 0x1b,"Default",1);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_140056680(param_1 + 0x1f,L"polygroups");
  return param_1;
}



// FUNCTION 145e1dda4 FUN_145e1dda4 body=181 status=ok
// SIG undefined FUN_145e1dda4(void)

undefined8 * FUN_145e1dda4(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bec7ab0;
  *(undefined1 *)(param_1 + 5) = 1;
  FUN_144757f48(param_1,8);
  *param_1 = &PTR_FUN_14beca860;
  param_1[6] = 0;
  param_1[7] = 0x14;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0x3f80000000000000;
  param_1[10] = &DAT_3f8000003f800000;
  param_1[0xb] = &DAT_3f8000003f800000;
  param_1[0xc] = &DAT_3f8000003f800000;
  param_1[0xd] = 0x41f000003f800000;
  *(undefined4 *)(param_1 + 0xe) = 0x3fa66666;
  *(undefined1 *)((longlong)param_1 + 0x74) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xda) = 0;
  return param_1;
}



// FUNCTION 145e1de64 FUN_145e1de64 body=178 status=ok
// SIG undefined FUN_145e1de64(void)

undefined8 * FUN_145e1de64(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14bee8810;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_1414dc74c(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0x13) = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14beea070;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 145e1df16 FUN_145e1df16 body=226 status=ok
// SIG undefined FUN_145e1df16(void)

longlong * FUN_145e1df16(longlong *param_1)

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
  pcVar13 = FUN_1462f1d6a;
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



// FUNCTION 145e1dffe FUN_145e1dffe body=130 status=ok
// SIG undefined FUN_145e1dffe(void)

undefined1 * FUN_145e1dffe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutRangeAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x52c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e1dffa;
}



// FUNCTION 145e1e080 FUN_145e1e080 body=138 status=ok
// SIG undefined FUN_145e1e080(void)

code * FUN_145e1e080(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RasterBinCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000530;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472599fe;
}



// FUNCTION 145e1e10a FUN_145e1e10a body=205 status=ok
// SIG undefined FUN_145e1e10a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1e10a(void)

{
  if ((DAT_14c9cac1f & 2) == 0) {
    DAT_14c9cac1f = DAT_14c9cac1f | 2;
    _DAT_14c9cabc0 = L"FExponentialHeightFogPS";
    _DAT_14c9cabd8 = FUN_146826540;
    _DAT_14c9cabe0 = FUN_146825d77;
    _DAT_14c9cabe8 = FUN_146825fd6;
    _DAT_14c9cabf0 = FUN_1407e02ea;
    _DAT_14c9cabf8 = FUN_146826273;
    _DAT_14c9cabd0 = FUN_147159490;
    _DAT_14c9cac10 = 0xffffffff000000e0;
    _DAT_14c9cac18 = 8;
    DAT_14c9cac1c = 0;
    _DAT_14c9cac00 = &LAB_1471594ba;
    FUN_145e1e1d8();
    FUN_1407e00cc(&DAT_14c9cabb8);
    return;
  }
  return;
}



// FUNCTION 145e1e1d8 FUN_145e1e1d8 body=123 status=ok
// SIG undefined FUN_145e1e1d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1e1d8(void)

{
  _DAT_14c9cf110 = L"BASE";
  DAT_14c9cf13a = 4;
  _DAT_14c9cf118 = FUN_140b35ae4();
  _DAT_14c9cf120 = DAT_14c9cabc8;
  _DAT_14c9cf128 = &LAB_14682652b;
  DAT_14c9cabc8 = &DAT_14c9cf110;
  DAT_14c9cac1d = DAT_14c9cac1d + '\x01';
  _DAT_14c9cf130 = 0x100000000;
  if (*(char *)(_DAT_14c9cf118 + 100) != '\0') {
    DAT_14c9cac1e = DAT_14c9cac1e + '\x01';
  }
  return;
}



// FUNCTION 145e1e254 FUN_145e1e254 body=136 status=ok
// SIG undefined FUN_145e1e254(void)

code * FUN_145e1e254(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OcclusionTextureMinMaxUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd0000000a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715eae2;
}



// FUNCTION 145e1e2dc FUN_145e1e2dc body=138 status=ok
// SIG undefined FUN_145e1e2dc(void)

code * FUN_145e1e2dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UpsampleJitterMultiplier";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xbc000000a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715eb6c;
}



// FUNCTION 145e1e366 FUN_145e1e366 body=138 status=ok
// SIG undefined FUN_145e1e366(void)

code * FUN_145e1e366(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bOnlyOnRenderedOpaque";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb0000000a2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715ec80;
}



// FUNCTION 145e1e3f0 FUN_145e1e3f0 body=205 status=ok
// SIG undefined FUN_145e1e3f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1e3f0(void)

{
  if ((DAT_14ca139d7 & 2) == 0) {
    DAT_14ca139d7 = DAT_14ca139d7 | 2;
    _DAT_14ca13978 = L"FEmitSceneDepthPS";
    _DAT_14ca13990 = FUN_146826540;
    _DAT_14ca13998 = FUN_146825d77;
    _DAT_14ca139a0 = FUN_146825fd6;
    _DAT_14ca139a8 = FUN_1407e02ea;
    _DAT_14ca139b0 = FUN_146826273;
    _DAT_14ca13988 = FUN_1472510b4;
    _DAT_14ca139c8 = 0xffffffff000000e0;
    _DAT_14ca139d0 = 8;
    DAT_14ca139d4 = 0;
    _DAT_14ca139b8 = &LAB_1472510e0;
    FUN_145e1e4be();
    FUN_1407e00cc(&DAT_14ca13970);
    return;
  }
  return;
}



// FUNCTION 145e1e4be FUN_145e1e4be body=123 status=ok
// SIG undefined FUN_145e1e4be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1e4be(void)

{
  _DAT_14ca18cc8 = L"BASE";
  DAT_14ca18cf2 = 4;
  _DAT_14ca18cd0 = FUN_140b35ae4();
  _DAT_14ca18cd8 = DAT_14ca13980;
  _DAT_14ca18ce0 = &LAB_14682652b;
  DAT_14ca13980 = &DAT_14ca18cc8;
  DAT_14ca139d5 = DAT_14ca139d5 + '\x01';
  _DAT_14ca18ce8 = 0x100000000;
  if (*(char *)(_DAT_14ca18cd0 + 100) != '\0') {
    DAT_14ca139d6 = DAT_14ca139d6 + '\x01';
  }
  return;
}



// FUNCTION 145e1e53a FUN_145e1e53a body=226 status=ok
// SIG undefined FUN_145e1e53a(void)

longlong * FUN_145e1e53a(longlong *param_1)

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
  pcVar13 = FUN_1462efc88;
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



// FUNCTION 145e1e61e FUN_145e1e61e body=136 status=ok
// SIG undefined FUN_145e1e61e(void)

code * FUN_145e1e61e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClusterPageData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000069;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472556a6;
}



// FUNCTION 145e1e6a6 FUN_145e1e6a6 body=138 status=ok
// SIG undefined FUN_145e1e6a6(void)

undefined1 * FUN_145e1e6a6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x62;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1472558ce;
}



// FUNCTION 145e1e730 FUN_145e1e730 body=138 status=ok
// SIG undefined FUN_145e1e730(void)

code * FUN_145e1e730(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InViews";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FPackedView>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000064;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462efd10;
}



// FUNCTION 145e1e7c2 FUN_145e1e7c2 body=257 status=ok
// SIG undefined FUN_145e1e7c2(void)

void FUN_145e1e7c2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a63f30();
  FUN_145e1e8c4();
  _Src = DAT_14cc10440;
  local_38 = (void *)0x0;
  lVar4 = (longlong)DAT_14cc10448;
  local_30 = DAT_14cc10448;
  if (lVar4 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,DAT_14cc10448,0);
    memcpy(local_38,_Src,lVar4 * 2);
  }
  local_48 = *(undefined8 *)(param_1 + 0x28);
  local_40 = *(longlong **)(param_1 + 0x30);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  FUN_14153c93e(param_1 + 0x410,&local_48,&local_38);
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
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
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e1e8c4 FUN_145e1e8c4 body=121 status=ok
// SIG undefined FUN_145e1e8c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1e8c4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc10450) {
    FUN_144b3d300(&DAT_14cc10450);
    if (DAT_14cc10450 == -1) {
      DAT_14cc10440 = 0;
      _DAT_14cc10448 = 0;
      FUN_14020fad6(&DAT_14cc10440,L"SourceBlocks");
      atexit((_func_5014 *)&LAB_1444ddc08);
      _Init_thread_footer(&DAT_14cc10450);
      return;
    }
  }
  return;
}



// FUNCTION 145e1e93e FUN_145e1e93e body=284 status=ok
// SIG undefined FUN_145e1e93e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e1e93e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca85cc0) {
    FUN_144b3d300(&DAT_14ca85cc0);
    if (DAT_14ca85cc0 == -1) {
      FUN_145e1ea5a();
      FUN_140db5666(&DAT_14ca85c18,0,&DAT_14ca85bb0,L"FRayTracingDispatchDescCS",
                    L"/Engine/Private/RayTracing/RayTracingDispatchDesc.usf",
                    L"RayTracingDispatchDescCS",5,1,FUN_147415582,FUN_14741555a,&LAB_14631bb30,
                    &LAB_147415556,&LAB_14712ac0c,&LAB_14712ac08,0x100,0);
      _DAT_14ca85c18 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f0b8a);
      _Init_thread_footer(&DAT_14ca85cc0);
    }
  }
  return &DAT_14ca85c18;
}



// FUNCTION 145e1ea5a FUN_145e1ea5a body=210 status=ok
// SIG undefined FUN_145e1ea5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1ea5a(void)

{
  if ((DAT_14ca85c17 & 2) == 0) {
    DAT_14ca85c17 = DAT_14ca85c17 | 2;
    _DAT_14ca85bb8 = L"FRayTracingDispatchDescCS";
    _DAT_14ca85bd0 = FUN_146826540;
    _DAT_14ca85bd8 = FUN_146825d77;
    _DAT_14ca85be0 = FUN_146825fd6;
    _DAT_14ca85be8 = FUN_1407e02ea;
    _DAT_14ca85bf0 = FUN_146826273;
    _DAT_14ca85bc8 = FUN_147415526;
    _DAT_14ca85c08 = 0xffffffff00000100;
    _DAT_14ca85c10 = 8;
    DAT_14ca85c14 = 0;
    _DAT_14ca85bf8 = &LAB_147415552;
    FUN_145e1eb2c();
    FUN_145e1ed14();
    FUN_1407e00cc(&DAT_14ca85bb0);
    return;
  }
  return;
}



// FUNCTION 145e1eb2c FUN_145e1eb2c body=121 status=ok
// SIG undefined FUN_145e1eb2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1eb2c(void)

{
  FUN_145e1eba6();
  _DAT_14ca910c0 = L"DispatchDescInputParam";
  DAT_14ca910ea = FUN_140850cc5();
  _DAT_14ca910c8 = FUN_140ec6960();
  _DAT_14ca910d8 = &LAB_14682652b;
  _DAT_14ca910e0 = 0x1000000e0;
  _DAT_14ca910e8 = 0;
  _DAT_14ca910d0 = DAT_14ca85bc0;
  DAT_14ca85bc0 = &DAT_14ca910c0;
  return;
}



// FUNCTION 145e1eba6 FUN_145e1eba6 body=121 status=ok
// SIG undefined FUN_145e1eba6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1eba6(void)

{
  FUN_145e1ec20();
  _DAT_14ca910f0 = L"DispatchDescSizeDwordsParam";
  DAT_14ca9111a = FUN_140850cc5();
  _DAT_14ca910f8 = FUN_140ec6960();
  _DAT_14ca91108 = &LAB_14682652b;
  _DAT_14ca91110 = 0x1000000e6;
  _DAT_14ca91118 = 0;
  _DAT_14ca91100 = DAT_14ca85bc0;
  DAT_14ca85bc0 = &DAT_14ca910f0;
  return;
}



// FUNCTION 145e1ec20 FUN_145e1ec20 body=121 status=ok
// SIG undefined FUN_145e1ec20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1ec20(void)

{
  FUN_145e1ec9a();
  _DAT_14ca91120 = L"DispatchDescDimensionsOffsetDwordsParam";
  DAT_14ca9114a = FUN_140850cc5();
  _DAT_14ca91128 = FUN_140ec6960();
  _DAT_14ca91138 = &LAB_14682652b;
  _DAT_14ca91140 = 0x1000000ec;
  _DAT_14ca91148 = 0;
  _DAT_14ca91130 = DAT_14ca85bc0;
  DAT_14ca85bc0 = &DAT_14ca91120;
  return;
}



// FUNCTION 145e1ec9a FUN_145e1ec9a body=121 status=ok
// SIG undefined FUN_145e1ec9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1ec9a(void)

{
  FUN_145e1ed9a();
  _DAT_14ca91150 = L"DimensionsBufferOffsetDwordsParam";
  DAT_14ca9117a = FUN_140850cc5();
  _DAT_14ca91158 = FUN_140ec6960();
  _DAT_14ca91168 = &LAB_14682652b;
  _DAT_14ca91170 = 0x1000000f2;
  _DAT_14ca91178 = 0;
  _DAT_14ca91160 = DAT_14ca85bc0;
  DAT_14ca85bc0 = &DAT_14ca91150;
  return;
}



// FUNCTION 145e1ed14 FUN_145e1ed14 body=133 status=ok
// SIG undefined FUN_145e1ed14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1ed14(void)

{
  _DAT_14ca91eb8 = L"BASE";
  DAT_14ca91ee2 = 4;
  FUN_140b35ae4();
  _DAT_14ca91ec8 = DAT_14ca85bc0;
  _DAT_14ca91ec0 = &DAT_14ca8c6c8;
  _DAT_14ca91ed0 = &LAB_14682652b;
  DAT_14ca85bc0 = &DAT_14ca91eb8;
  DAT_14ca85c15 = DAT_14ca85c15 + '\x01';
  _DAT_14ca91ed8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca85c16 = DAT_14ca85c16 + '\x01';
  }
  return;
}



// FUNCTION 145e1ed9a FUN_145e1ed9a body=216 status=ok
// SIG undefined FUN_145e1ed9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1ed9a(void)

{
  _DAT_14ca911b0 = L"DispatchDescOutputParam";
  DAT_14ca911da = FUN_140850cc5();
  _DAT_14ca911b8 = FUN_140fb78d0();
  _DAT_14ca911c8 = &LAB_14682652b;
  _DAT_14ca911d0 = 0x1000000fc;
  _DAT_14ca911d8 = 0;
  _DAT_14ca911c0 = DAT_14ca85bc0;
  DAT_14ca85bc0 = &DAT_14ca911b0;
  _DAT_14ca91180 = L"DispatchDimensionsParam";
  DAT_14ca911aa = FUN_140850cc5();
  _DAT_14ca91188 = FUN_140fb78d0();
  _DAT_14ca91198 = &LAB_14682652b;
  _DAT_14ca911a0 = 0x1000000f8;
  _DAT_14ca911a8 = 0;
  _DAT_14ca91190 = DAT_14ca85bc0;
  DAT_14ca85bc0 = &DAT_14ca91180;
  return;
}



// FUNCTION 145e1ee72 FUN_145e1ee72 body=205 status=ok
// SIG undefined FUN_145e1ee72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1ee72(void)

{
  if ((DAT_14c9e48bf & 2) == 0) {
    DAT_14c9e48bf = DAT_14c9e48bf | 2;
    _DAT_14c9e4860 = L"FReflectionEnvironmentSkyLightingPS";
    _DAT_14c9e4878 = FUN_146826540;
    _DAT_14c9e4880 = FUN_146825d77;
    _DAT_14c9e4888 = FUN_146825fd6;
    _DAT_14c9e4890 = FUN_1407e02ea;
    _DAT_14c9e4898 = FUN_146826273;
    _DAT_14c9e4870 = FUN_1471be05c;
    _DAT_14c9e48b0 = 0xffffffff000000e0;
    _DAT_14c9e48b8 = 8;
    DAT_14c9e48bc = 0;
    _DAT_14c9e48a0 = &LAB_1471be086;
    FUN_145e1ef40();
    FUN_1407e00cc(&DAT_14c9e4858);
    return;
  }
  return;
}



// FUNCTION 145e1ef40 FUN_145e1ef40 body=123 status=ok
// SIG undefined FUN_145e1ef40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1ef40(void)

{
  _DAT_14c9e70e8 = L"BASE";
  DAT_14c9e7112 = 4;
  _DAT_14c9e70f0 = FUN_140b35ae4();
  _DAT_14c9e70f8 = DAT_14c9e4868;
  _DAT_14c9e7100 = &LAB_14682652b;
  DAT_14c9e4868 = &DAT_14c9e70e8;
  DAT_14c9e48bd = DAT_14c9e48bd + '\x01';
  _DAT_14c9e7108 = 0x100000000;
  if (*(char *)(_DAT_14c9e70f0 + 100) != '\0') {
    DAT_14c9e48be = DAT_14c9e48be + '\x01';
  }
  return;
}



// FUNCTION 145e1efbc FUN_145e1efbc body=138 status=ok
// SIG undefined FUN_145e1efbc(void)

code * FUN_145e1efbc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LumenReflectionTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000001ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c6a00;
}



// FUNCTION 145e1f046 FUN_145e1f046 body=138 status=ok
// SIG undefined FUN_145e1f046(void)

code * FUN_145e1f046(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SSRTiledViewRes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb8000001b9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c65b0;
}



// FUNCTION 145e1f0d0 FUN_145e1f0d0 body=138 status=ok
// SIG undefined FUN_145e1f0d0(void)

code * FUN_145e1f0d0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AmbientOcclusionSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000001a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c6b14;
}



// FUNCTION 145e1f15a FUN_145e1f15a body=226 status=ok
// SIG undefined FUN_145e1f15a(void)

longlong * FUN_145e1f15a(longlong *param_1)

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
  pcVar13 = FUN_1462f18a0;
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



// FUNCTION 145e1f242 FUN_145e1f242 body=132 status=ok
// SIG undefined FUN_145e1f242(void)

undefined1 * FUN_145e1f242(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutQueueState";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer< FQueueState >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x487;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e1f23e;
}



// FUNCTION 145e1f2c6 FUN_145e1f2c6 body=138 status=ok
// SIG undefined FUN_145e1f2c6(void)

code * FUN_145e1f2c6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxCandidateClusters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000489;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147258e16;
}



// FUNCTION 145e1f350 FUN_145e1f350 body=112 status=ok
// SIG undefined FUN_145e1f350(void)

void FUN_145e1f350(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b96bd70;
  param_1[1] = &PTR_FUN_14b96be50;
  *(undefined4 *)(param_1 + 0x39) = 0;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_141276e92(param_1 + 0x30);
  plVar2 = (longlong *)param_1[0x2f];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_145e1f3c0(param_1);
  return;
}



// FUNCTION 145e1f3c0 FUN_145e1f3c0 body=410 status=ok
// SIG undefined FUN_145e1f3c0(void)

void FUN_145e1f3c0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b400db0;
  param_1[1] = &PTR_FUN_14b400e90;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1f55a(param_1 + 0x24);
  FUN_140be4274(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1457ec251(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1f5c5(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1f590(param_1 + 4);
  FUN_140af926c(param_1 + 1);
  return;
}



// FUNCTION 145e1f55a FUN_145e1f55a body=53 status=ok
// SIG undefined FUN_145e1f55a(void)

void FUN_145e1f55a(longlong *param_1)

{
  FUN_145e1f618();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e1f590 FUN_145e1f590 body=53 status=ok
// SIG undefined FUN_145e1f590(void)

void FUN_145e1f590(longlong *param_1)

{
  FUN_141080254();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e1f5c5 FUN_145e1f5c5 body=73 status=ok
// SIG undefined FUN_145e1f5c5(void)

void FUN_145e1f5c5(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145e1f60e FUN_145e1f60e body=9 status=ok
// SIG undefined FUN_145e1f60e(void)

void FUN_145e1f60e(longlong param_1)

{
  FUN_14156a562(param_1 + 0x10);
  return;
}



// FUNCTION 145e1f618 FUN_145e1f618 body=331 status=ok
// SIG undefined FUN_145e1f618(void)

void FUN_145e1f618(longlong *param_1)

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
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
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
      plVar3 = *(longlong **)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e1f764 FUN_145e1f764 body=33 status=ok
// SIG undefined FUN_145e1f764(void)

void FUN_145e1f764(void)

{
  if (DAT_14c9493e0 == 0) {
    DAT_14c9493e0 = FUN_145e1f786();
  }
  return;
}



// FUNCTION 145e1f786 FUN_145e1f786 body=156 status=ok
// SIG undefined FUN_145e1f786(void)

longlong * FUN_145e1f786(void)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  undefined **local_a8 [18];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14c9493c8 == 0) {
    DAT_14c9493c8 = FUN_145ccf9fc();
  }
  plVar1 = (longlong *)FUN_1400181a8();
  FUN_140aa7318(plVar1,1);
  FUN_144869430(local_a8);
  local_a8[0] = &PTR_FUN_149e69f40;
  (**(code **)(*plVar1 + 0x2b8))(plVar1,local_a8,0);
  FUN_144a7fc42(local_a8);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e1f823 FUN_145e1f823 body=33 status=ok
// SIG undefined FUN_145e1f823(void)

void FUN_145e1f823(void)

{
  if (DAT_14c9493f8 == 0) {
    DAT_14c9493f8 = FUN_145e1f844();
  }
  return;
}



// FUNCTION 145e1f844 FUN_145e1f844 body=156 status=ok
// SIG undefined FUN_145e1f844(void)

longlong * FUN_145e1f844(void)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  undefined **local_a8 [18];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14c9493e0 == 0) {
    DAT_14c9493e0 = FUN_145e1f786();
  }
  plVar1 = (longlong *)FUN_140019b7c();
  FUN_140aa7318(plVar1,1);
  FUN_144869430(local_a8);
  local_a8[0] = &PTR_FUN_149e69f40;
  (**(code **)(*plVar1 + 0x2b8))(plVar1,local_a8,0);
  FUN_144a7fc42(local_a8);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e1f8e2 FUN_145e1f8e2 body=284 status=ok
// SIG undefined FUN_145e1f8e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e1f8e2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6c160) {
    FUN_144b3d300(&DAT_14ca6c160);
    if (DAT_14ca6c160 == -1) {
      FUN_145e1f9fe();
      FUN_140db5666(&DAT_14ca6c0b8,2,&DAT_14ca6c050,L"TVoxelizeVolumePS<VMode_Primitive_Sphere>",
                    L"/Engine/Private/VolumetricFogVoxelization.usf",L"VoxelizePS",3,1,FUN_147335506
                    ,FUN_1473354de,FUN_14310b422,&LAB_1473354da,&LAB_14712ac0c,&LAB_14712ac08,0x108,
                    0);
      _DAT_14ca6c0b8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_14310b4c5);
      _Init_thread_footer(&DAT_14ca6c160);
    }
  }
  return &DAT_14ca6c0b8;
}



// FUNCTION 145e1f9fe FUN_145e1f9fe body=205 status=ok
// SIG undefined FUN_145e1f9fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1f9fe(void)

{
  if ((DAT_14ca6c0b7 & 2) == 0) {
    DAT_14ca6c0b7 = DAT_14ca6c0b7 | 2;
    _DAT_14ca6c058 = L"TVoxelizeVolumePS<VMode_Primitive_Sphere>";
    _DAT_14ca6c070 = FUN_146826540;
    _DAT_14ca6c078 = FUN_146825d77;
    _DAT_14ca6c080 = FUN_146825fd6;
    _DAT_14ca6c088 = FUN_1407e02ea;
    _DAT_14ca6c090 = FUN_146826273;
    _DAT_14ca6c068 = FUN_1473354a0;
    _DAT_14ca6c0a8 = 0xffffffff00000108;
    _DAT_14ca6c0b0 = 8;
    DAT_14ca6c0b4 = 0;
    _DAT_14ca6c098 = &LAB_1473354d6;
    FUN_145e1facc();
    FUN_1407e00cc(&DAT_14ca6c050);
    return;
  }
  return;
}



// FUNCTION 145e1facc FUN_145e1facc body=133 status=ok
// SIG undefined FUN_145e1facc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1facc(void)

{
  _DAT_14ca6d948 = L"BASE";
  DAT_14ca6d972 = 4;
  FUN_145e1fb52();
  _DAT_14ca6d958 = DAT_14ca6c060;
  _DAT_14ca6d950 = &DAT_14ca6d978;
  _DAT_14ca6d960 = &LAB_14682652b;
  DAT_14ca6c060 = &DAT_14ca6d948;
  DAT_14ca6c0b5 = DAT_14ca6c0b5 + '\x01';
  _DAT_14ca6d968 = 0x100000000;
  if (DAT_14ca6d9dc != '\0') {
    DAT_14ca6c0b6 = DAT_14ca6c0b6 + '\x01';
  }
  return;
}



// FUNCTION 145e1fb52 FUN_145e1fb52 body=205 status=ok
// SIG undefined FUN_145e1fb52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1fb52(void)

{
  if ((DAT_14ca6d9df & 2) == 0) {
    DAT_14ca6d9df = DAT_14ca6d9df | 2;
    _DAT_14ca6d980 = L"FVoxelizeVolumePS";
    _DAT_14ca6d998 = FUN_146826540;
    _DAT_14ca6d9a0 = FUN_146825d77;
    _DAT_14ca6d9a8 = FUN_146825fd6;
    _DAT_14ca6d9b0 = FUN_1407e02ea;
    _DAT_14ca6d9b8 = FUN_146826273;
    _DAT_14ca6d990 = FUN_14733f5a2;
    _DAT_14ca6d9d0 = 0xffffffff00000108;
    _DAT_14ca6d9d8 = 8;
    DAT_14ca6d9dc = 0;
    _DAT_14ca6d9c0 = &LAB_14733f5d8;
    FUN_145e1fc20();
    FUN_1407e00cc(&DAT_14ca6d978);
    return;
  }
  return;
}


