// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1484f6940 FUN_1484f6940 body=110 status=ok
// SIG undefined FUN_1484f6940(void)

void FUN_1484f6940(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459ef150();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_1484f6973;
  }
  param_2 = 0;
LAB_1484f6973:
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1484f6418(param_2,*(undefined4 *)(param_1 + 0xc));
  }
  else {
    FUN_1484f3e04(param_2,*(undefined4 *)(param_1 + 8),param_1 + 0x10);
  }
  FUN_1447f69b6(param_2 + 0x50);
  return;
}



// FUNCTION 1484f69ae FUN_1484f69ae body=32 status=ok
// SIG undefined FUN_1484f69ae(void)

undefined8 FUN_1484f69ae(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FCurveControlPointsMechanicSelectionChange");
  return param_2;
}



// FUNCTION 1484f69ce FUN_1484f69ce body=110 status=ok
// SIG undefined FUN_1484f69ce(void)

void FUN_1484f69ce(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459ef150();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_1484f6a01;
  }
  param_2 = 0;
LAB_1484f6a01:
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_1484f464e(param_2,0);
    uVar2 = *(undefined1 *)(param_1 + 9);
  }
  else {
    FUN_1484f464e(param_2,1);
    uVar2 = 0;
  }
  FUN_1484f43ce(param_2,uVar2);
  FUN_1447f69b6(param_2 + 0x68);
  return;
}



// FUNCTION 1484f6a3c FUN_1484f6a3c body=110 status=ok
// SIG undefined FUN_1484f6a3c(void)

void FUN_1484f6a3c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459ef150();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_1484f6a6f;
  }
  param_2 = 0;
LAB_1484f6a6f:
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_1484f464e(param_2,1);
    uVar2 = 0;
  }
  else {
    FUN_1484f464e(param_2,0);
    uVar2 = *(undefined1 *)(param_1 + 9);
  }
  FUN_1484f43ce(param_2,uVar2);
  FUN_1447f69b6(param_2 + 0x68);
  return;
}



// FUNCTION 1484f6aaa FUN_1484f6aaa body=32 status=ok
// SIG undefined FUN_1484f6aaa(void)

undefined8 FUN_1484f6aaa(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FCurveControlPointsMechanicModeChange");
  return param_2;
}



// FUNCTION 1484f6aca FUN_1484f6aca body=212 status=ok
// SIG undefined FUN_1484f6aca(void)

void FUN_1484f6aca(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    lVar2 = FUN_1459ef150();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) goto LAB_1484f6b0f;
  }
  param_2 = 0;
LAB_1484f6b0f:
  FUN_1484f4854(param_2,*(undefined4 *)(param_1 + 8),param_1 + 0x28);
  FUN_1484f4aac(param_2);
  local_38 = *(undefined8 *)(param_1 + 0x38);
  local_48 = *(undefined4 *)(param_1 + 0x28);
  uStack_44 = *(undefined4 *)(param_1 + 0x2c);
  uStack_40 = *(undefined4 *)(param_1 + 0x30);
  uStack_3c = *(undefined4 *)(param_1 + 0x34);
  uVar1 = FUN_1484f47fc(param_2 + 0x80,*(undefined4 *)(param_1 + 8));
  FUN_14855373c(param_2 + 0x130,uVar1);
  FUN_1485536aa(param_2 + 0x130,&local_48,uVar1);
  FUN_1484f3cf6(param_2);
  FUN_1447f69b6(param_2 + 0x50);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f6ba0 FUN_1484f6ba0 body=212 status=ok
// SIG undefined FUN_1484f6ba0(void)

void FUN_1484f6ba0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    lVar2 = FUN_1459ef150();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) goto LAB_1484f6be5;
  }
  param_2 = 0;
LAB_1484f6be5:
  FUN_1484f4854(param_2,*(undefined4 *)(param_1 + 8),param_1 + 0x10);
  FUN_1484f4aac(param_2);
  local_38 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(undefined4 *)(param_1 + 0x10);
  uStack_44 = *(undefined4 *)(param_1 + 0x14);
  uStack_40 = *(undefined4 *)(param_1 + 0x18);
  uStack_3c = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = FUN_1484f47fc(param_2 + 0x80,*(undefined4 *)(param_1 + 8));
  FUN_14855373c(param_2 + 0x130,uVar1);
  FUN_1485536aa(param_2 + 0x130,&local_48,uVar1);
  FUN_1484f3cf6(param_2);
  FUN_1447f69b6(param_2 + 0x50);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f6c76 FUN_1484f6c76 body=32 status=ok
// SIG undefined FUN_1484f6c76(void)

undefined8 FUN_1484f6c76(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FCurveControlPointsMechanicMovementChange");
  return param_2;
}



// FUNCTION 1484f6c9e FUN_1484f6c9e body=1507 status=ok
// SIG undefined FUN_1484f6c9e(void)

void FUN_1484f6c9e(undefined **param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined1 auStack_118 [32];
  undefined **local_f8;
  undefined **local_f0;
  undefined **local_e8;
  undefined **ppuStack_e0;
  undefined **local_d8;
  undefined **ppuStack_d0;
  undefined1 *local_c8 [2];
  undefined ***local_b8;
  undefined **local_a8;
  undefined **local_a0;
  code *local_88;
  undefined4 local_80;
  undefined ***local_78;
  undefined **local_68;
  undefined **local_60;
  undefined **local_58;
  undefined **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_2 == (longlong *)0x0) || (param_2[7] == 0)) goto LAB_1484f6cd2;
  if (param_3 == 0) {
    ppuVar9 = (undefined **)0x0;
LAB_1484f6d11:
    ppuVar3 = (undefined **)0x0;
  }
  else {
    ppuVar3 = (undefined **)FUN_14001cc68(0x20,0x10);
    FUN_14851772c(ppuVar3,param_3);
    ppuVar9 = ppuVar3 + 2;
    if (ppuVar3 == (undefined **)0x0) goto LAB_1484f6d11;
    LOCK();
    *(int *)(ppuVar3 + 1) = *(int *)(ppuVar3 + 1) + 1;
    UNLOCK();
    LOCK();
    ppuVar10 = ppuVar3 + 1;
    *(int *)ppuVar10 = *(int *)ppuVar10 + -1;
    UNLOCK();
    if (*(int *)ppuVar10 == 0) {
      (**(code **)*ppuVar3)(ppuVar3);
      LOCK();
      piVar1 = (int *)((longlong)ppuVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*ppuVar3 + 0x10))(ppuVar3);
      }
    }
  }
  if (param_4 == 0) {
    ppuVar10 = (undefined **)0x0;
LAB_1484f6d1f:
    ppuVar4 = (undefined **)0x0;
  }
  else {
    ppuVar4 = (undefined **)FUN_14001cc68(0x20,0x10);
    FUN_14851772c(ppuVar4,param_4);
    ppuVar10 = ppuVar4 + 2;
    if (ppuVar4 == (undefined **)0x0) goto LAB_1484f6d1f;
    LOCK();
    *(int *)(ppuVar4 + 1) = *(int *)(ppuVar4 + 1) + 1;
    UNLOCK();
    LOCK();
    ppuVar11 = ppuVar4 + 1;
    *(int *)ppuVar11 = *(int *)ppuVar11 + -1;
    UNLOCK();
    if (*(int *)ppuVar11 == 0) {
      (**(code **)*ppuVar4)(ppuVar4);
      LOCK();
      piVar1 = (int *)((longlong)ppuVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
      }
    }
  }
  if (ppuVar3 != (undefined **)0x0) {
    LOCK();
    *(int *)(ppuVar3 + 1) = *(int *)(ppuVar3 + 1) + 1;
    UNLOCK();
  }
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar11 = (undefined **)0x0;
  }
  else {
    LOCK();
    *(int *)(ppuVar4 + 1) = *(int *)(ppuVar4 + 1) + 1;
    UNLOCK();
    ppuVar11 = ppuVar4;
  }
  local_88 = (code *)0x0;
  local_f8 = ppuVar3;
  local_f0 = param_1;
  local_e8 = ppuVar9;
  ppuStack_e0 = ppuVar3;
  local_d8 = ppuVar10;
  ppuStack_d0 = ppuVar4;
  local_78 = (undefined ***)FUN_14001cc68(0x30,8);
  ppuVar3 = ppuStack_e0;
  ppuVar9 = local_e8;
  *local_78 = &PTR_LAB_14af11dc0;
  local_e8 = (undefined **)0x0;
  ppuStack_e0 = (undefined **)0x0;
  local_d8 = (undefined **)0x0;
  ppuStack_d0 = (undefined **)0x0;
  local_78[1] = local_f0;
  local_78[2] = ppuVar9;
  local_78[3] = ppuVar3;
  local_78[4] = ppuVar10;
  local_78[5] = ppuVar11;
  if (local_78 + 1 != (undefined ***)0x0) {
    local_88 = FUN_143b95b78;
  }
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_14af11da0;
  local_c8[0] = &LAB_143b95b3a;
  local_a0 = param_1;
  (**(code **)(*param_2 + 0x300))(param_2,local_c8,&local_88);
  if (local_c8[0] != (undefined1 *)0x0) {
    pppuVar8 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar8 = &local_a8;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  if (local_88 != (code *)0x0) {
    pppuVar8 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar8 = &local_68;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  FUN_143b83fd2(&local_f0);
  lVar5 = FUN_145b73f38();
  if ((*(int *)(lVar5 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
      lVar5 + 0x30)) {
    if (ppuVar4 != (undefined **)0x0) {
      LOCK();
      *(int *)(ppuVar4 + 1) = *(int *)(ppuVar4 + 1) + 1;
      UNLOCK();
    }
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14af11e00;
    local_88 = FUN_143b95c82;
    local_b8 = (undefined ***)0x0;
    local_a8 = &PTR_LAB_14af11de0;
    local_c8[0] = &LAB_143b95c44;
    local_a0 = param_1;
    local_60 = param_1;
    local_58 = ppuVar10;
    local_50 = ppuVar4;
    (**(code **)(*param_2 + 0x3c0))(param_2,local_c8);
    if (local_c8[0] != (undefined1 *)0x0) {
      pppuVar8 = &local_a8;
      if (local_b8 != (undefined ***)0x0) {
        pppuVar8 = local_b8;
      }
      (*(code *)(*pppuVar8)[2])(pppuVar8);
    }
    if (local_88 != (code *)0x0) {
      pppuVar8 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar8 = &local_68;
      }
      (*(code *)(*pppuVar8)[2])();
    }
  }
  lVar5 = param_2[7];
  uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
  local_88 = (code *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,3,0x10);
  pcVar2 = local_88;
  local_80 = 3;
  *(undefined ***)local_88 = &PTR_LAB_14aeff220;
  uVar7 = FUN_144a3f946();
  *(undefined8 *)(pcVar2 + 0x10) = uVar7;
  *(undefined ***)pcVar2 = &PTR_FUN_14af11e20;
  *(undefined8 *)(pcVar2 + 0x18) = 0;
  FUN_14485c47a(pcVar2 + 0x18,uVar6);
  *(undefined ***)(pcVar2 + 0x20) = param_1;
  FUN_1484d65de(lVar5 + 0x28,local_c8,&local_88);
  FUN_1449db362(&local_88);
  lVar5 = param_2[7];
  uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
  local_88 = (code *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,3,0x10);
  pcVar2 = local_88;
  local_80 = 3;
  *(undefined ***)local_88 = &PTR_LAB_14aeff220;
  uVar7 = FUN_144a3f946();
  *(undefined8 *)(pcVar2 + 0x10) = uVar7;
  *(undefined ***)pcVar2 = &PTR_FUN_14af11e90;
  *(undefined8 *)(pcVar2 + 0x18) = 0;
  FUN_14485c47a(pcVar2 + 0x18,uVar6);
  *(undefined ***)(pcVar2 + 0x20) = param_1;
  FUN_1484d65de(lVar5 + 0x88,local_c8,&local_88);
  FUN_1449db362(&local_88);
  lVar5 = param_2[7];
  uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
  local_88 = (code *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,3,0x10);
  pcVar2 = local_88;
  local_80 = 3;
  *(undefined ***)local_88 = &PTR_LAB_14af12c50;
  uVar7 = FUN_144a3f946();
  *(undefined8 *)(pcVar2 + 0x10) = uVar7;
  *(undefined ***)pcVar2 = &PTR_FUN_14af11f00;
  *(undefined8 *)(pcVar2 + 0x18) = 0;
  FUN_14485c47a(pcVar2 + 0x18,uVar6);
  *(undefined ***)(pcVar2 + 0x20) = param_1;
  FUN_148515308(lVar5 + 0x70,local_c8,&local_88);
  FUN_1449db362(&local_88);
  lVar5 = param_2[7];
  uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
  local_88 = (code *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,3,0x10);
  pcVar2 = local_88;
  local_80 = 3;
  *(undefined ***)local_88 = &PTR_LAB_14af12c50;
  uVar7 = FUN_144a3f946();
  *(undefined8 *)(pcVar2 + 0x10) = uVar7;
  *(undefined ***)pcVar2 = &PTR_FUN_14af11f70;
  *(undefined8 *)(pcVar2 + 0x18) = 0;
  FUN_14485c47a(pcVar2 + 0x18,uVar6);
  *(undefined ***)(pcVar2 + 0x20) = param_1;
  FUN_148515308(lVar5 + 0xb8,local_c8,&local_88);
  FUN_1449db362(&local_88);
  if (ppuVar4 != (undefined **)0x0) {
    LOCK();
    ppuVar9 = ppuVar4 + 1;
    *(int *)ppuVar9 = *(int *)ppuVar9 + -1;
    UNLOCK();
    if (*(int *)ppuVar9 == 0) {
      (**(code **)*ppuVar4)(ppuVar4);
      LOCK();
      piVar1 = (int *)((longlong)ppuVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
      }
    }
  }
  ppuVar9 = local_f8;
  if (local_f8 != (undefined **)0x0) {
    LOCK();
    ppuVar3 = local_f8 + 1;
    *(int *)ppuVar3 = *(int *)ppuVar3 + -1;
    UNLOCK();
    if (*(int *)ppuVar3 == 0) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar1 = (int *)((longlong)ppuVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*ppuVar9 + 0x10))(ppuVar9);
      }
    }
  }
LAB_1484f6cd2:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f7282 FUN_1484f7282 body=974 status=ok
// SIG undefined FUN_1484f7282(void)

void FUN_1484f7282(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  longlong *local_d8;
  longlong *plStack_d0;
  undefined1 *local_c8 [2];
  undefined ***local_b8;
  undefined **local_a8;
  longlong *local_a0;
  code *local_88;
  undefined4 local_80;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_3 == 0) {
    plVar9 = (longlong *)0x0;
LAB_1484f72b8:
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)FUN_14001cc68(0x20,0x10);
    FUN_14851772c(plVar4,param_3);
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) goto LAB_1484f72b8;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar4 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if (param_4 == 0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)FUN_14001cc68(0x20,0x10);
    FUN_14851772c(plVar5,param_4);
    plVar11 = plVar5 + 2;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar10 = plVar5 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      goto LAB_1484f72c9;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_1484f72c9:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (plVar5 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar10 = plVar5;
  }
  local_88 = (code *)0x0;
  local_f0 = param_1;
  local_e8 = plVar9;
  plStack_e0 = plVar4;
  local_d8 = plVar11;
  plStack_d0 = plVar5;
  local_78 = (longlong *)FUN_14001cc68(0x30,8);
  plVar2 = plStack_e0;
  plVar9 = local_e8;
  *local_78 = (longlong)&PTR_LAB_14af12000;
  local_e8 = (longlong *)0x0;
  plStack_e0 = (longlong *)0x0;
  local_d8 = (longlong *)0x0;
  plStack_d0 = (longlong *)0x0;
  local_78[1] = (longlong)local_f0;
  local_78[2] = (longlong)plVar9;
  local_78[3] = (longlong)plVar2;
  local_78[4] = (longlong)plVar11;
  local_78[5] = (longlong)plVar10;
  if (local_78 + 1 != (longlong *)0x0) {
    local_88 = FUN_143b96dc6;
  }
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_14af11fe0;
  local_c8[0] = &LAB_143b96d88;
  local_a0 = param_1;
  (**(code **)(*param_2 + 0x300))(param_2,local_c8,&local_88);
  if (local_c8[0] != (undefined1 *)0x0) {
    pppuVar8 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar8 = &local_a8;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  local_f8 = plVar4;
  if (local_88 != (code *)0x0) {
    plVar9 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar9 = local_68;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  FUN_143b84036(&local_f0);
  uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
  local_88 = (code *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,3,0x10);
  pcVar3 = local_88;
  local_80 = 3;
  *(undefined ***)local_88 = &PTR_LAB_14af12090;
  uVar7 = FUN_144a3f946();
  *(undefined8 *)(pcVar3 + 0x10) = uVar7;
  *(undefined ***)pcVar3 = &PTR_FUN_14af12020;
  *(undefined8 *)(pcVar3 + 0x18) = 0;
  FUN_14485c47a(pcVar3 + 0x18,uVar6);
  *(longlong **)(pcVar3 + 0x20) = param_1;
  FUN_14851782e(param_2 + 8,local_c8,&local_88);
  FUN_1449db362(&local_88);
  uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
  local_88 = (code *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,3,0x10);
  pcVar3 = local_88;
  local_80 = 3;
  *(undefined ***)local_88 = &PTR_LAB_14af12170;
  uVar7 = FUN_144a3f946();
  *(undefined8 *)(pcVar3 + 0x10) = uVar7;
  *(undefined ***)pcVar3 = &PTR_FUN_14af12100;
  *(undefined8 *)(pcVar3 + 0x18) = 0;
  FUN_14485c47a(pcVar3 + 0x18,uVar6);
  *(longlong **)(pcVar3 + 0x20) = param_1;
  FUN_148517924(param_2 + 0xe,local_c8,&local_88);
  FUN_1449db362(&local_88);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar5 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  plVar9 = local_f8;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_f8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f7652 FUN_1484f7652 body=878 status=ok
// SIG undefined FUN_1484f7652(void)

void FUN_1484f7652(longlong param_1,longlong *param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_188 [32];
  longlong local_168;
  undefined8 uStack_160;
  longlong *local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118 [12];
  code *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_4 + 8);
    local_168 = *(longlong *)(param_1 + 0x90);
    uStack_160 = *(undefined8 *)(param_1 + 0x98);
    local_158 = *(longlong **)(param_1 + 0xa0);
    uStack_150 = *(undefined8 *)(param_1 + 0xa8);
    local_148 = *(longlong **)(param_1 + 0xb0);
    uStack_140 = *(undefined8 *)(param_1 + 0xb8);
    local_138 = *(longlong *)(param_1 + 0xc0);
    uStack_130 = *(undefined8 *)(param_1 + 200);
    *(longlong *)(param_1 + 0xc0) = param_4;
    *(undefined8 *)(param_1 + 200) = uStack_40;
    *(undefined ***)(param_1 + 0xb0) = &PTR_LAB_14af121e0;
    *(undefined8 *)(param_1 + 0xb8) = uVar1;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = uStack_60;
    *(code **)(param_1 + 0x90) = FUN_143b977fa;
    *(undefined8 *)(param_1 + 0x98) = uStack_70;
    local_48 = local_138;
    uStack_40 = uStack_130;
    local_58 = local_148;
    uStack_50 = uStack_140;
    local_68 = local_158;
    uStack_60 = uStack_150;
    local_78 = local_168;
    uStack_70 = uStack_160;
    if (local_168 != 0) {
      plVar7 = local_68;
      if (local_158 == (longlong *)0x0) {
        plVar7 = &local_58;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  local_158 = (longlong *)*param_2;
  local_148 = (longlong *)0x0;
  local_168 = param_1;
  if (local_158 != (longlong *)0x0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_148);
  }
  puVar8 = local_118;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *param_3;
    param_3 = param_3 + 1;
    puVar8 = puVar8 + 1;
  }
  local_b8 = (code *)0x0;
  local_a8 = (longlong *)FUN_14001cc68(0xc0,0x10);
  *local_a8 = (longlong)&PTR_LAB_14af12200;
  local_a8[2] = local_168;
  local_a8[4] = (longlong)local_158;
  local_a8[6] = (longlong)local_148;
  local_148 = (longlong *)0x0;
  local_a8[10] = local_128;
  local_a8[0xb] = uStack_120;
  local_a8[8] = local_138;
  local_a8[9] = uStack_130;
  if (local_158 != (longlong *)0x0) {
    local_158 = (longlong *)0x0;
  }
  puVar8 = local_118;
  puVar9 = local_a8 + 0xc;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  if (local_a8 != (longlong *)&DAT_fffffffffffffff0) {
    local_b8 = FUN_143b97904;
  }
  local_78 = *(longlong *)(param_1 + 0x50);
  uStack_70 = *(undefined8 *)(param_1 + 0x58);
  local_68 = *(longlong **)(param_1 + 0x60);
  uStack_60 = *(undefined8 *)(param_1 + 0x68);
  local_58 = *(longlong **)(param_1 + 0x70);
  uStack_50 = *(undefined8 *)(param_1 + 0x78);
  local_48 = *(undefined8 *)(param_1 + 0x80);
  uStack_40 = *(undefined8 *)(param_1 + 0x88);
  uVar4 = local_48;
  uVar5 = uStack_40;
  lVar6 = (longlong)local_58;
  uVar3 = uStack_50;
  uVar2 = uStack_60;
  uVar1 = uStack_70;
  *(ulonglong *)(param_1 + 0x80) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(param_1 + 0x88) = CONCAT44(uStack_7c,uStack_80);
  *(ulonglong *)(param_1 + 0x70) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(param_1 + 0x78) = CONCAT44(uStack_8c,uStack_90);
  *(longlong **)(param_1 + 0x60) = local_a8;
  *(ulonglong *)(param_1 + 0x68) = CONCAT44(uStack_9c,uStack_a0);
  *(code **)(param_1 + 0x50) = local_b8;
  *(ulonglong *)(param_1 + 0x58) = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = (code *)local_78;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_70 = uVar1;
  uStack_60 = uVar2;
  local_58 = (longlong *)lVar6;
  uStack_50 = uVar3;
  local_48 = uVar4;
  uStack_40 = uVar5;
  if (local_78 != 0) {
    plVar7 = local_a8;
    if (local_68 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_98;
    }
    (**(code **)(*plVar7 + 0x10))();
    if (local_158 != (longlong *)0x0) {
      plVar7 = local_148;
      if (local_148 == (longlong *)0x0) {
        plVar7 = &local_138;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  if (*param_2 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f79c2 FUN_1484f79c2 body=484 status=ok
// SIG undefined FUN_1484f79c2(void)

char FUN_1484f79c2(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined1 local_258 [4];
  undefined4 local_254;
  float local_250;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined4 local_1b4;
  undefined4 local_188;
  undefined1 local_158 [4];
  undefined4 local_154;
  float local_150;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined4 local_b4;
  undefined4 local_88;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  cVar2 = '\0';
  memset(local_158,0,0x100);
  local_88 = 0xffffffff;
  local_154 = 0x3f800000;
  local_b4 = 0xffffffff;
  pcVar1 = *(code **)(param_1 + 0x50);
  if (pcVar1 != (code *)0x0) {
    local_258[0] = param_6;
    plVar5 = (longlong *)(param_1 + 0x70);
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x60);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,param_2,local_158,local_258);
    if (cVar2 == '\0') {
      cVar2 = '\0';
    }
    else {
      memcpy((void *)(param_1 + 0x128),local_158,0x100);
      *param_3 = local_130;
      param_3[1] = uStack_128;
      param_3[2] = local_120;
      cVar2 = '\x01';
    }
  }
  memset(local_258,0,0x100);
  local_188 = 0xffffffff;
  local_254 = 0x3f800000;
  local_1b4 = 0xffffffff;
  pcVar1 = *(code **)(param_1 + 0x10);
  if (pcVar1 != (code *)0x0) {
    local_50 = param_5;
    plVar5 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x20);
    }
    local_58 = param_4;
    uVar4 = (**(code **)(*plVar5 + 8))();
    local_268 = &local_50;
    cVar3 = (*pcVar1)(uVar4,param_2,local_258,&local_58);
    if ((cVar3 != '\0') && ((cVar2 == '\0' || (local_250 < local_150)))) {
      memcpy((void *)(param_1 + 0x128),local_258,0x100);
      *param_3 = local_230;
      param_3[1] = uStack_228;
      param_3[2] = local_220;
      cVar2 = '\x01';
    }
  }
  *(char *)(param_1 + 0x125) = cVar2;
  *(undefined1 *)(param_1 + 0x124) = 0;
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return cVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f7ba8 FUN_1484f7ba8 body=268 status=ok
// SIG undefined FUN_1484f7ba8(void)

void FUN_1484f7ba8(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = *(longlong *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  local_78 = *(longlong **)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  local_28 = *(longlong *)(param_1 + 0x30);
  uStack_20 = *(undefined8 *)(param_1 + 0x38);
  local_18 = *(undefined8 *)(param_1 + 0x40);
  uStack_10 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = local_18;
  uVar4 = uStack_10;
  local_38 = local_78;
  uVar2 = uStack_30;
  local_48 = local_88;
  uVar1 = uStack_40;
  *(ulonglong *)(param_1 + 0x40) = CONCAT44(uStack_54,local_58);
  *(ulonglong *)(param_1 + 0x48) = CONCAT44(uStack_4c,uStack_50);
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14af12240;
  *(longlong *)(param_1 + 0x38) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_6c,uStack_70);
  *(code **)(param_1 + 0x10) = FUN_143b986a2;
  *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_7c,uStack_80);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_18._4_4_ = (undefined4)((ulonglong)local_18 >> 0x20);
  uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
  local_58 = (undefined4)local_18;
  uStack_54 = local_18._4_4_;
  uStack_50 = (undefined4)uStack_10;
  uStack_4c = uStack_10._4_4_;
  local_68 = local_28;
  uStack_60 = uStack_20;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_40 = uVar1;
  uStack_30 = uVar2;
  local_18 = uVar3;
  uStack_10 = uVar4;
  if (local_88 != 0) {
    plVar5 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar5 = &local_68;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f7cb6 FUN_1484f7cb6 body=1651 status=ok
// SIG undefined FUN_1484f7cb6(void)

void FUN_1484f7cb6(longlong *param_1,longlong *param_2)

{
  double dVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  float fVar6;
  undefined4 unaff_XMM6_Db;
  float fVar7;
  undefined1 auStack_318 [32];
  float local_2f8;
  undefined8 *local_2f0;
  undefined4 local_2e8;
  undefined1 local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  double local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  double local_288;
  double local_280;
  double dStack_278;
  double local_270;
  double local_268;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  double local_228;
  longlong local_218 [36];
  undefined1 local_f8 [64];
  float local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  (**(code **)(*param_1 + 0x10))(param_1,local_218);
  plVar2 = local_218;
  plVar4 = param_1 + 0x1a;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar4 = *plVar2;
    plVar2 = plVar2 + 1;
    plVar4 = plVar4 + 1;
  }
  if (*(char *)((longlong)param_1 + 0x124) == '\x01') {
    (**(code **)(*param_2 + 0x18))(param_2,local_f8);
    plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
    fVar7 = local_b8 / 90.0;
    FUN_141300fc0(local_218);
    FUN_148453350(local_218,param_2,local_f8);
    if ((int)param_1[0x3a] == 1) {
      local_248 = (double)param_1[0x32];
      local_258 = (double)param_1[0x30];
      dStack_250 = (double)param_1[0x31];
      local_298 = (double)param_1[0x2a];
      uStack_290 = (double)param_1[0x2b];
      local_288 = (double)param_1[0x2c];
      local_280 = 0.0;
      dStack_278 = 0.0;
      local_270 = 0.0;
      local_268 = 1.0;
      local_228 = DAT_14c8463c8;
      local_238 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
      uStack_230 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
      FUN_146bfb7f2(&local_280,&local_238,&local_258);
      dVar5 = (double)FUN_148556b6a(local_f8,&local_298,0x3fe999999999999a);
      fVar6 = (float)dVar5;
      local_2a8 = DAT_14c75902c;
      local_2a4 = DAT_14c758ed0;
      local_2a0 = DAT_14c758ca8;
      local_29c = 0x3f800000;
      dVar5 = (double)fVar6;
      local_248 = 0.0;
      local_258 = dVar5;
      dStack_250 = dVar5;
      FUN_146bed047(&local_238,&local_280,&local_258);
      local_2b0 = local_228 + local_288;
      local_2b8 = uStack_230 + uStack_290;
      local_2c0 = local_238 + local_298;
      dVar1 = (double)-fVar6;
      local_248 = 0.0;
      local_258 = dVar1;
      dStack_250 = dVar1;
      FUN_146bed047(&local_238,&local_280,&local_258);
      local_2c8 = local_228 + local_288;
      local_2d0 = uStack_230 + uStack_290;
      local_2d8 = local_238 + local_298;
      local_2f0 = (undefined8 *)((ulonglong)local_2f0 & 0xffffffffffffff00);
      local_2f8 = fVar7 * 4.0;
      FUN_1484122ca(local_218,&local_2d8,&local_2c0,&local_2a8);
      local_2a8 = DAT_14c75902c;
      local_2a4 = DAT_14c758ed0;
      local_2a0 = DAT_14c758ca8;
      local_29c = 0x3f800000;
      local_248 = 0.0;
      local_258 = dVar5;
      dStack_250 = dVar1;
      FUN_146bed047(&local_238,&local_280,&local_258);
      local_2b0 = local_228 + local_288;
      local_2b8 = uStack_230 + uStack_290;
      local_2c0 = local_238 + local_298;
      local_248 = 0.0;
      local_258 = dVar1;
      dStack_250 = dVar5;
      FUN_146bed047(&local_238,&local_280,&local_258);
      local_2c8 = local_228 + local_288;
      local_2d0 = uStack_230 + uStack_290;
      local_2d8 = local_238 + local_298;
      local_2f0 = (undefined8 *)((ulonglong)local_2f0 & 0xffffffffffffff00);
      local_2f8 = fVar7 * 4.0;
      FUN_1484122ca(local_218,&local_2d8,&local_2c0,&local_2a8);
      local_2c0 = (double)CONCAT44(DAT_14c758ed0,DAT_14c75902c);
      local_2b8 = (double)CONCAT44(0x3f800000,DAT_14c758ca8);
      local_238 = local_280 * (local_270 + local_270) + local_268 * (dStack_278 + dStack_278);
      uStack_230 = (local_270 + local_270) * dStack_278 - (local_280 + local_280) * local_268;
      local_228 = 1.0 - ((dStack_278 + dStack_278) * dStack_278 +
                        local_280 * (local_280 + local_280));
      local_248 = local_288;
      local_258 = local_298;
      dStack_250 = uStack_290;
      local_2e0 = 0;
      local_2e8 = 0x3f800000;
      local_2f8 = 1.12104e-44;
      local_2f0 = &local_2c0;
      (**(code **)(local_218[0] + 0x18))
                (local_218,&local_258,&local_238,CONCAT44(unaff_XMM6_Db,fVar6 + fVar6));
    }
    else {
      local_298 = (double)CONCAT44(DAT_14c758ed0,DAT_14c75902c);
      uStack_290 = (double)CONCAT44(0x3f800000,DAT_14c758ca8);
      local_2f8 = (float)CONCAT31(local_2f8._1_3_,1);
      (**(code **)(*plVar2 + 0x40))(plVar2,param_1 + 0x2a,&local_298,fVar7 * 10.0);
    }
    local_288 = (double)param_1[0x2c];
    local_298 = (double)param_1[0x2a];
    uStack_290 = (double)param_1[0x2b];
    dVar5 = (double)FUN_148556aae(local_f8,&local_298,param_1 + 0x45);
    if (0.5 < dVar5) {
      local_238 = (double)CONCAT44(DAT_14c758ed0,DAT_14c75902c);
      uStack_230 = (double)CONCAT44(0x3f800000,DAT_14c758ca8);
      local_288 = (double)param_1[0x47];
      local_298 = (double)param_1[0x45];
      uStack_290 = (double)param_1[0x46];
      local_2e0 = 1;
      local_2f0 = (undefined8 *)CONCAT44(local_2f0._4_4_,fVar7 * 0.5);
      local_2f8 = (float)CONCAT31(local_2f8._1_3_,1);
      local_2e8 = 0;
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1 + 0x2a);
    }
    FUN_14845342a(local_218);
    FUN_14008cd94(local_218);
  }
  if ((local_a0 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f832a FUN_1484f832a body=183 status=ok
// SIG undefined FUN_1484f832a(void)

void FUN_1484f832a(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined1 *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1484445fc();
  uVar1 = FUN_1409ffe1d();
  uVar1 = FUN_1484f83e2(uVar1);
  local_48 = 0;
  local_38 = &PTR_LAB_14aedb970;
  local_30 = &LAB_148441f18;
  local_58 = &LAB_14844e6fa;
  FUN_14840def6(uVar1,param_1 + 0x270,*(undefined4 *)(param_1 + 0x27c));
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar2 + 0x2e8))(plVar2,uVar1,0);
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1 + 0x30);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f83e2 FUN_1484f83e2 body=148 status=ok
// SIG undefined FUN_1484f83e2(void)

undefined8 FUN_1484f83e2(undefined8 param_1)

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
  uVar1 = FUN_145b7210e();
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



// FUNCTION 1484f848a FUN_1484f848a body=37 status=ok
// SIG undefined FUN_1484f848a(void)

void FUN_1484f848a(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_148444614(param_1 + -0x30);
  uVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
  FUN_148452156(uVar2);
  return;
}



// FUNCTION 1484f84b0 FUN_1484f84b0 body=63 status=ok
// SIG undefined FUN_1484f84b0(void)

undefined8 FUN_1484f84b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_148444614(param_1 + -0x30);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x2c8))(plVar1);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x378))(plVar1);
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  return param_2;
}



// FUNCTION 1484f850e FUN_1484f850e body=40 status=ok
// SIG undefined FUN_1484f850e(void)

void FUN_1484f850e(longlong param_1)

{
  FUN_14485c47a(param_1 + 0x278);
                    /* WARNING: Could not recover jumptable at 0x0001484f8532. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1 + 0x30);
  return;
}



// FUNCTION 1484f8536 FUN_1484f8536 body=116 status=ok
// SIG undefined FUN_1484f8536(void)

void FUN_1484f8536(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined1 *local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_28 = &PTR_LAB_14aedb970;
  local_20 = &LAB_148441f18;
  local_48 = &LAB_14844e6fa;
  FUN_14840def6(param_2,param_1 + 0x270,*(undefined4 *)(param_1 + 0x2d4));
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f85ca FUN_1484f85ca body=111 status=ok
// SIG undefined FUN_1484f85ca(void)

void FUN_1484f85ca(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78 [10];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_2 + 0x18))(param_2,local_78);
  puVar2 = local_78;
  puVar3 = (undefined8 *)(param_1 + 0x280);
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x30))(param_1 + 0x30,param_2);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f863e FUN_1484f863e body=287 status=ok
// SIG undefined FUN_1484f863e(void)

void FUN_1484f863e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = (int)param_2[5];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = param_2;
  if ((iStack_4c != iVar5) || (uStack_58 != plVar1)) {
    do {
      lVar2 = *local_88;
      lVar4 = (longlong)iStack_6c;
      iVar3 = FUN_144a7cc9e(param_1,*(undefined4 *)(lVar2 + lVar4 * 0xc));
      if (iVar3 == 0) {
        FUN_1447cbafe(param_1,&local_60,lVar2 + lVar4 * 0xc,0);
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_2 ||
             ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f875e FUN_1484f875e body=1457 status=ok
// SIG undefined FUN_1484f875e(void)

void FUN_1484f875e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined ***pppuVar9;
  undefined1 auStack_e8 [32];
  code *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined ***local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88;
  undefined8 uStack_80;
  undefined ***local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1484445fc();
  lVar4 = FUN_1484e7b30(param_1);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar4);
  }
  *(longlong *)(param_1 + 0x348) = lVar4;
  *(undefined1 *)(lVar4 + 0x38) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x348) + 0x2a0))(*(longlong **)(param_1 + 0x348),param_2);
  local_88 = FUN_1484f8dec;
  uStack_80._0_4_ = 0;
  FUN_1484f8d10(*(longlong *)(param_1 + 0x348) + 0x88,&local_c8,param_1,&local_88);
  local_88 = FUN_1484f8f6c;
  uStack_80._0_4_ = 0;
  FUN_1484f8e90(*(longlong *)(param_1 + 0x348) + 0xa0,&local_c8,param_1,&local_88);
  local_88 = FUN_1484f92b8;
  uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
  FUN_1484f91dc(*(longlong *)(param_1 + 0x348) + 0xb8,&local_c8,param_1,&local_88);
  uVar5 = FUN_1409ffe1d();
  plVar6 = (longlong *)FUN_1484e866c(uVar5);
  lVar4 = *(longlong *)(param_1 + 0x348) + 0x30;
  if (*(longlong *)(param_1 + 0x348) == 0) {
    lVar4 = 0;
  }
  (**(code **)(*plVar6 + 0x358))(plVar6,param_1 + 0x30,lVar4);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  puStack_60 = &LAB_148441f14;
  local_88 = (code *)&LAB_14844e6fa;
  FUN_14840df3c(plVar6 + 0x10,1,&local_88);
  if (local_88 != (code *)0x0) {
    pppuVar9 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar9 = &local_68;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  puStack_60 = &LAB_148441f18;
  local_88 = (code *)&LAB_14844e6fa;
  FUN_14840df3c(plVar6 + 0x10,2,&local_88);
  if (local_88 != (code *)0x0) {
    pppuVar9 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar9 = local_78;
    }
    (*(code *)(*pppuVar9)[2])(pppuVar9);
  }
  plVar7 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar7 + 0x2e8))(plVar7,plVar6,0);
  uVar5 = FUN_1409ffe1d();
  plVar6 = (longlong *)FUN_1484101e0(uVar5);
  (**(code **)(*plVar6 + 0x300))(plVar6,param_1 + 0x38);
  plVar7 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar7 + 0x2e8))(plVar7,plVar6,0);
  uVar5 = FUN_1409ffe1d();
  lVar4 = FUN_1484e2f3b(uVar5);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar4);
  }
  *(longlong *)(param_1 + 0x228) = lVar4;
  plVar6 = (longlong *)FUN_148444614(param_1);
  uVar5 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
  lVar8 = FUN_148558365(uVar5,1);
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar8);
  }
  *(longlong *)(lVar4 + 0x650) = lVar8;
  FUN_1406552bc(lVar4,0,lVar8);
  uVar5 = FUN_1409ffe1d();
  lVar4 = FUN_1484e2e03(uVar5);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar4);
  }
  *(longlong *)(param_1 + 0x230) = lVar4;
  plVar6 = (longlong *)FUN_148444614(param_1);
  uVar5 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
  uVar5 = FUN_1485583eb(uVar5,1);
  FUN_1484d0608(lVar4,uVar5);
  *(undefined8 *)(param_1 + 0x238) = 0xffff0000ffff0000;
  *(undefined8 *)(param_1 + 0x248) = 0xffffff00ff00ff00;
  *(undefined8 *)(param_1 + 0x240) = 0x40c000003f800000;
  local_c8 = *(code **)(param_1 + 0x300);
  uStack_80 = *(undefined8 *)(param_1 + 0x308);
  local_b8 = *(undefined ****)(param_1 + 0x310);
  uStack_70 = *(undefined8 *)(param_1 + 0x318);
  local_68 = *(undefined ***)(param_1 + 800);
  puStack_60 = *(undefined1 **)(param_1 + 0x328);
  local_58 = *(undefined8 *)(param_1 + 0x330);
  uStack_50 = *(undefined8 *)(param_1 + 0x338);
  uVar2 = local_58;
  uVar3 = uStack_50;
  local_78 = local_b8;
  uVar1 = uStack_70;
  local_88 = local_c8;
  uVar5 = uStack_80;
  *(ulonglong *)(param_1 + 0x330) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(param_1 + 0x338) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(param_1 + 800) = &PTR_LAB_14af123f0;
  *(longlong *)(param_1 + 0x328) = param_1;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(ulonglong *)(param_1 + 0x318) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(param_1 + 0x300) = &LAB_143b9897c;
  *(ulonglong *)(param_1 + 0x308) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (uint)(uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = puStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_80 = uVar5;
  uStack_70 = uVar1;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if (local_c8 != (code *)0x0) {
    pppuVar9 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar9 = &local_a8;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  plVar6 = (longlong *)FUN_148444614(param_1);
  uVar5 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
  uVar5 = FUN_148451354(uVar5);
  lVar4 = FUN_1484c6256(param_1);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar4);
  }
  *(longlong *)(param_1 + 0x2e0) = lVar4;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  lVar4 = FUN_14843d06b(uVar5,0x1fffe,param_1);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar4);
  }
  *(longlong *)(param_1 + 0x2e8) = lVar4;
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_88 = FUN_1484f9636;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484f955a(*(longlong *)(param_1 + 0x2e0) + 0x28,&local_c8,param_1,&local_88);
  local_88 = FUN_1484f9d6c;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484f9c90(*(longlong *)(param_1 + 0x2e0) + 0x58,&local_c8,param_1,&local_88);
  local_88 = FUN_1484f9f90;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484f9c90(*(longlong *)(param_1 + 0x2e0) + 0x70,&local_c8,param_1,&local_88);
  (**(code **)(**(longlong **)(param_1 + 0x2e8) + 800))
            (*(longlong **)(param_1 + 0x2e8),*(undefined8 *)(param_1 + 0x2e0),0);
  (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x350))(*(longlong **)(param_1 + 0x2e8),0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x2e8) + 0x82) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x2e8) + 0x83) = 1;
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f8d10 FUN_1484f8d10 body=218 status=ok
// SIG undefined FUN_1484f8d10(void)

undefined8
FUN_1484f8d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14af122a0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f8dec FUN_1484f8dec body=162 status=ok
// SIG undefined FUN_1484f8dec(void)

void FUN_1484f8dec(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145c3f772(param_1 + 0x3a8,param_1 + 0x358);
  *(undefined1 *)(param_1 + 0x350) = 1;
  plVar1 = (longlong *)FUN_148444614(param_1);
  uVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
  local_28 = DAT_14cb4cd18;
  if (DAT_14cb4cd18 != (longlong *)0x0) {
    (**(code **)(*DAT_14cb4cd18 + 8))();
  }
  local_20 = DAT_14cb4cd20;
  FUN_148558a3c(param_1 + 0x500,&local_28,uVar2);
  FUN_1484fafd4(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f8e90 FUN_1484f8e90 body=218 status=ok
// SIG undefined FUN_1484f8e90(void)

undefined8
FUN_1484f8e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14af12a70;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14af12310;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1485148a8(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f8f6c FUN_1484f8f6c body=623 status=ok
// SIG undefined FUN_1484f8f6c(void)

void FUN_1484f8f6c(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [4];
  int local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_ec = 0;
  iVar7 = *(int *)(param_1 + 0x90);
  if (0 < iVar7) {
    do {
      iVar8 = local_ec;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x228) + 0x698);
      local_d8 = *(undefined8 *)(lVar2 + 0x10 + (longlong)local_ec * 0x28);
      puVar1 = (undefined4 *)(lVar2 + (longlong)local_ec * 0x28);
      local_e8 = *puVar1;
      uStack_e4 = puVar1[1];
      uStack_e0 = puVar1[2];
      uStack_dc = puVar1[3];
      cVar4 = FUN_1484fbce0(param_2,&local_e8);
      if (cVar4 != '\0') {
        FUN_1447cbafe(&local_98,local_f0,&local_ec,0);
        iVar7 = *(int *)(param_1 + 0x90);
        iVar8 = local_ec;
      }
      local_ec = iVar8 + 1;
    } while (local_ec < iVar7);
  }
  pcVar3 = *(code **)(param_1 + 0x260);
  plVar6 = (longlong *)(param_1 + 0x280);
  if (*(longlong **)(param_1 + 0x270) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_1 + 0x270);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  cVar4 = (*pcVar3)(uVar5);
  if (cVar4 == '\0') {
    pcVar3 = *(code **)(param_1 + 0x2a0);
    plVar6 = (longlong *)(param_1 + 0x2c0);
    if (*(longlong **)(param_1 + 0x2b0) != (longlong *)0x0) {
      plVar6 = *(longlong **)(param_1 + 0x2b0);
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar4 = (*pcVar3)(uVar5);
    if (cVar4 == '\0') {
      FUN_145c3f772(param_1 + 0x358,&local_98);
    }
    else {
      FUN_146286f4e(param_1 + 0x3a8,&local_e8,&local_98);
      FUN_145be27ca(param_1 + 0x358,&local_e8);
      local_a0 = 0;
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(&local_e8);
    }
  }
  else {
    FUN_145c3f772(param_1 + 0x358,param_1 + 0x3a8);
    pcVar3 = *(code **)(param_1 + 0x2a0);
    plVar6 = (longlong *)(param_1 + 0x2c0);
    if (*(longlong **)(param_1 + 0x2b0) != (longlong *)0x0) {
      plVar6 = *(longlong **)(param_1 + 0x2b0);
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar4 = (*pcVar3)(uVar5);
    if (cVar4 == '\0') {
      FUN_1468b3f6e(param_1 + 0x358,&local_98);
    }
    else {
      FUN_1484f863e();
    }
  }
  FUN_1484fac3e(param_1);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f91dc FUN_1484f91dc body=218 status=ok
// SIG undefined FUN_1484f91dc(void)

undefined8
FUN_1484f91dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14af12ae0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14af12380;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148514c42(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f92b8 FUN_1484f92b8 body=673 status=ok
// SIG undefined FUN_1484f92b8(void)

void FUN_1484f92b8(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_118 [40];
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8 [13];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined1 *)(param_1 + 0x350) = 0;
  if (*(int *)(param_1 + 0x3b0) - *(int *)(param_1 + 0x3dc) ==
      *(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x38c)) {
    cVar2 = FUN_1484e701c(param_1 + 0x3a8,param_1 + 0x358);
    if (cVar2 != '\0') goto LAB_1484f94ee;
  }
  (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x2b0))(*(longlong **)(param_1 + 0x2e0),local_c8);
  local_f0 = param_1 + 0x28;
  plVar3 = (longlong *)FUN_14479d2ce();
  lVar4 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
  local_e8 = lVar4 + 0x28;
  puVar5 = (undefined8 *)FUN_14001cc68(0x130,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x4a8);
  *puVar5 = &PTR_LAB_14af09a10;
  puVar5[5] = 0;
  *(undefined4 *)(puVar5 + 6) = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
  puVar5[9] = 0;
  *(undefined4 *)(puVar5 + 10) = 0;
  FUN_145c3f772(puVar5 + 1,param_1 + 0x3a8);
  *(undefined1 *)(puVar5 + 0xb) = 0;
  puVar8 = local_c8;
  puVar9 = puVar5 + 0xc;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar8 = local_c8;
  puVar9 = puVar5 + 0x18;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)(puVar5 + 0x24) = uVar1;
  local_e0 = param_1 + 0x358;
  local_d0 = puVar5;
  (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x20))(local_e8,param_1,&local_d0,&DAT_14cb4cd08);
  plVar3 = (longlong *)FUN_14479d2ce(local_f0);
  lVar4 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
  local_f0 = lVar4 + 0x28;
  puVar5 = (undefined8 *)FUN_14001cc68(0x130,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x4a8);
  *puVar5 = &PTR_LAB_14af09a10;
  puVar5[5] = 0;
  *(undefined4 *)(puVar5 + 6) = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
  puVar5[9] = 0;
  *(undefined4 *)(puVar5 + 10) = 0;
  FUN_145c3f772(puVar5 + 1,local_e0);
  *(undefined1 *)(puVar5 + 0xb) = 1;
  puVar8 = local_c8;
  puVar9 = puVar5 + 0xc;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar8 = local_c8;
  puVar9 = puVar5 + 0x18;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)(puVar5 + 0x24) = uVar1;
  local_d8 = puVar5;
  (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x20))(local_f0,param_1,&local_d8,&DAT_14cb4cd18);
  FUN_1447f69b6(param_1 + 0x58);
LAB_1484f94ee:
  FUN_1484fa212(param_1);
  plVar3 = (longlong *)FUN_148444614(param_1);
  uVar6 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
  FUN_148558a82(param_1 + 0x500,uVar6);
  FUN_1484fac3e(param_1);
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f955a FUN_1484f955a body=218 status=ok
// SIG undefined FUN_1484f955a(void)

undefined8
FUN_1484f955a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14aeff220;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14af12410;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1484d65de(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f9636 FUN_1484f9636 body=1624 status=ok
// SIG undefined FUN_1484f9636(void)

void FUN_1484f9636(longlong param_1,undefined8 param_2,double *param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar4;
  double dVar6;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  uint *puVar16;
  longlong lVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_1c8 [32];
  double local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  double local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined4 local_110;
  undefined4 local_10c;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  double dVar3;
  double dVar5;
  double dVar7;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (((*(int *)(param_1 + 0x360) != *(int *)(param_1 + 0x38c)) &&
      (*(char *)(param_1 + 0x2f0) == '\x01')) &&
     (*(char *)(*(longlong *)(param_1 + 0x2e0) + 0xd1) == '\0')) {
    plVar1 = (longlong *)(param_1 + 0x358);
    dVar9 = *(double *)(param_1 + 0x470);
    dVar10 = *(double *)(param_1 + 0x478);
    dVar19 = *(double *)(param_1 + 0x480) * -1.0;
    dVar21 = *(double *)(param_1 + 0x488) * 1.0;
    dVar2 = param_3[3];
    dVar3 = param_3[3];
    dVar4 = param_3[1];
    dVar5 = param_3[1];
    dVar6 = param_3[2];
    dVar7 = param_3[2];
    local_178 = (dVar19 * dVar4 + (*param_3 * dVar21 * 1.0 - dVar2 * dVar9)) - dVar10 * dVar6 * -1.0
    ;
    dStack_170 = (dVar21 * dVar5 + (*param_3 * dVar19 * -1.0 - dVar3 * dVar10)) -
                 dVar9 * dVar7 * 1.0;
    local_168 = dVar21 * dVar6 * 1.0 + dVar4 * dVar9 + (dVar2 * dVar19 - *param_3 * dVar10 * 1.0);
    dStack_160 = dVar19 * dVar7 * -1.0 + dVar5 * dVar10 + (dVar3 * dVar21 - *param_3 * dVar9 * -1.0)
    ;
    local_1a8 = param_3[10] / *(double *)(param_1 + 0x4a0);
    dVar3 = param_3[8];
    dVar4 = param_3[9];
    dVar5 = *(double *)(param_1 + 0x498);
    dVar6 = *(double *)(param_1 + 0x490);
    local_130 = DAT_14c846520;
    local_140 = DAT_14c846510;
    dStack_138 = DAT_14c846518;
    local_158 = param_3[4];
    dStack_150 = param_3[5];
    local_148 = param_3[6];
    dVar2 = (double)(param_1 + 0x368);
    local_128 = 2.12199579096527e-314;
    local_118 = 2.12199579047121e-314;
    local_110 = 0;
    iVar18 = 0;
    local_120 = dVar2;
    if (*(int *)(param_1 + 0x380) != 0) {
      FUN_1449c0562(&local_128);
      iVar18 = *(int *)(param_1 + 0x380);
    }
    local_188 = local_118;
    dVar7 = local_188;
    local_180 = local_110;
    local_17c = local_10c;
    local_198 = local_128;
    local_190 = local_120;
    local_188._4_4_ = (int)((ulonglong)local_118 >> 0x20);
    local_1a0 = plVar1;
    if ((local_188._4_4_ != iVar18) || (local_120 != dVar2)) {
      iVar13 = local_188._4_4_;
      local_188 = dVar7;
      do {
        uVar8 = *(uint *)(*local_1a0 + (longlong)iVar13 * 0xc);
        lVar17 = (longlong)(int)uVar8;
        if (*(int *)(param_1 + 0x410) != *(int *)(param_1 + 0x43c)) {
          lVar15 = *(longlong *)(param_1 + 0x448);
          if (*(longlong *)(param_1 + 0x448) == 0) {
            lVar15 = param_1 + 0x440;
          }
          uVar14 = *(uint *)(lVar15 + (ulonglong)(*(int *)(param_1 + 0x450) - 1U & uVar8) * 4);
          if (uVar14 != 0xffffffff) {
            do {
              puVar16 = (uint *)(*(longlong *)(param_1 + 0x408) + (longlong)(int)uVar14 * 0x28);
              if (*puVar16 == uVar8) goto LAB_1484f99aa;
              uVar14 = puVar16[8];
            } while (uVar14 != 0xffffffff);
          }
        }
        puVar16 = (uint *)0x0;
LAB_1484f99aa:
        dVar10 = *(double *)(puVar16 + 2) - *(double *)(param_1 + 0x458);
        dVar25 = *(double *)(puVar16 + 4) - *(double *)(param_1 + 0x460);
        dVar9 = *(double *)(puVar16 + 6) - *(double *)(param_1 + 0x468);
        dVar11 = *(double *)(param_1 + 0x470);
        dVar12 = *(double *)(param_1 + 0x480);
        dVar19 = -dVar11;
        dVar21 = -*(double *)(param_1 + 0x478);
        dVar23 = dVar12 * -1.0;
        dVar24 = *(double *)(param_1 + 0x488) * 1.0;
        dVar26 = dVar21 * dVar9 - dVar25 * dVar23;
        dVar26 = dVar26 + dVar26;
        dVar22 = dVar19 * dVar25 - dVar10 * dVar21;
        dVar22 = dVar22 + dVar22;
        dVar7 = dVar23 * dVar10 - dVar9 * dVar19;
        dVar7 = dVar7 + dVar7;
        dVar20 = ((dVar19 * dVar7 - dVar26 * dVar21) + dVar24 * dVar22 + dVar9) * local_1a8;
        dVar25 = ((dVar23 * dVar26 - dVar22 * dVar19) + dVar24 * dVar7 + dVar25) * (dVar4 / dVar5);
        dVar10 = ((dVar21 * dVar22 - dVar7 * dVar23) + dVar24 * dVar26 + dVar10) * (dVar3 / dVar6);
        dVar7 = *(double *)(param_1 + 0x478);
        dVar21 = dVar7 * dVar20 - dVar25 * dVar12;
        dVar21 = dVar21 + dVar21;
        dVar9 = *(double *)(param_1 + 0x488);
        dVar22 = dVar11 * dVar25 - dVar10 * dVar7;
        dVar22 = dVar22 + dVar22;
        dVar19 = dVar12 * dVar10 - dVar20 * dVar11;
        dVar19 = dVar19 + dVar19;
        local_108 = ((dVar7 * dVar22 - dVar19 * dVar12) + dVar9 * dVar21 + dVar10) * local_140;
        local_100 = ((dVar12 * dVar21 - dVar22 * dVar11) + dVar9 * dVar19 + dVar25) * dStack_138;
        local_f8 = ((dVar11 * dVar19 - dVar21 * dVar7) + dVar9 * dVar22 + dVar20) * local_130;
        FUN_146bed047(&local_128,&local_178,&local_108);
        lVar15 = *(longlong *)(param_1 + 0x88);
        *(double *)(lVar15 + lVar17 * 0x18) = local_128 + local_158;
        *(double *)(lVar15 + 8 + lVar17 * 0x18) = local_120 + dStack_150;
        *(double *)(lVar15 + 0x10 + lVar17 * 0x18) = local_118 + local_148;
        local_188 = (double)CONCAT44(local_188._4_4_,(uint)local_188 & ~local_198._4_4_);
        FUN_1449c0562(&local_198);
        iVar13 = local_188._4_4_;
        dVar7 = local_188;
      } while (local_1a0 != plVar1 || (local_190 != dVar2 || local_188._4_4_ != iVar18));
    }
    local_188 = dVar7;
    FUN_1484fac3e(param_1);
    FUN_1447f69b6(param_1 + 0x40);
  }
  if ((local_f0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484f9c90 FUN_1484f9c90 body=218 status=ok
// SIG undefined FUN_1484f9c90(void)

undefined8
FUN_1484f9c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14af12c50;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14af12480;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148515308(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f9d6c FUN_1484f9d6c body=547 status=ok
// SIG undefined FUN_1484f9d6c(void)

void FUN_1484f9d6c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_f8 [44];
  int local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  int iStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  lVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
  (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28,&DAT_14cb4cd28);
  (**(code **)(*param_2 + 0x2b0))(param_2,&local_c8);
  *(undefined4 *)(param_1 + 0x458) = (undefined4)local_a8;
  *(undefined4 *)(param_1 + 0x45c) = local_a8._4_4_;
  *(undefined4 *)(param_1 + 0x460) = uStack_a0;
  *(undefined4 *)(param_1 + 0x464) = uStack_9c;
  *(undefined8 *)(param_1 + 0x468) = local_98;
  (**(code **)(*param_2 + 0x2b0))(param_2,&local_c8);
  *(undefined4 *)(param_1 + 0x470) = (undefined4)local_c8;
  *(undefined4 *)(param_1 + 0x474) = local_c8._4_4_;
  *(undefined4 *)(param_1 + 0x478) = uStack_c0;
  *(uint *)(param_1 + 0x47c) = uStack_bc;
  *(undefined4 *)(param_1 + 0x480) = local_b8;
  *(undefined4 *)(param_1 + 0x484) = uStack_b4;
  *(uint *)(param_1 + 0x488) = uStack_b0;
  *(int *)(param_1 + 0x48c) = iStack_ac;
  (**(code **)(*param_2 + 0x2b0))(param_2,&local_c8);
  *(undefined4 *)(param_1 + 0x490) = local_88;
  *(undefined4 *)(param_1 + 0x494) = uStack_84;
  *(undefined4 *)(param_1 + 0x498) = uStack_80;
  *(undefined4 *)(param_1 + 0x49c) = uStack_7c;
  *(undefined8 *)(param_1 + 0x4a0) = local_78;
  FUN_14851887a(param_1 + 0x408);
  plVar1 = (longlong *)(param_1 + 0x358);
  lVar2 = param_1 + 0x368;
  local_60 = (int *)&DAT_100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x380) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar3 = *(int *)(param_1 + 0x380);
  }
  local_a8 = CONCAT44(uStack_44,uStack_48);
  uStack_b0 = local_50;
  iStack_ac = iStack_4c;
  uStack_c0 = (undefined4)local_60;
  uStack_bc = local_60._4_4_;
  local_b8 = (undefined4)uStack_58;
  uStack_b4 = uStack_58._4_4_;
  local_c8 = plVar1;
  if ((iStack_4c != iVar3) || (uStack_58 != lVar2)) {
    do {
      local_cc = *(int *)(*local_c8 + (longlong)iStack_ac * 0xc);
      local_60 = &local_cc;
      uStack_58 = (longlong)local_cc * 0x18 + *(longlong *)(param_1 + 0x88);
      FUN_1484a6baa(param_1 + 0x408,local_3c,&local_60,0);
      uStack_b0 = uStack_b0 & ~uStack_bc;
      FUN_1449c0562(&uStack_c0);
    } while (local_c8 != plVar1 || (CONCAT44(uStack_b4,local_b8) != lVar2 || iStack_ac != iVar3));
  }
  *(undefined1 *)(param_1 + 0x2f0) = 1;
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f9f90 FUN_1484f9f90 body=640 status=ok
// SIG undefined FUN_1484f9f90(void)

void FUN_1484f9f90(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_128 [32];
  byte local_108;
  undefined8 local_f8;
  int local_ec;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  uint local_d0;
  int iStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int *local_c0;
  longlong local_b8;
  uint local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_78 = 0;
  iVar5 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar2 = (longlong *)(param_1 + 0x358);
  lVar3 = param_1 + 0x368;
  local_c0 = (int *)&DAT_100000000;
  local_b0 = 0xffffffff;
  iStack_ac = 0;
  local_a8 = 0;
  local_b8 = lVar3;
  if (*(int *)(param_1 + 0x380) != 0) {
    FUN_1449c0562(&local_c0);
    iVar5 = *(int *)(param_1 + 0x380);
  }
  local_d0 = local_b0;
  iStack_cc = iStack_ac;
  local_c8 = local_a8;
  local_c4 = local_a4;
  local_e0 = local_c0;
  local_d8 = local_b8;
  local_e8 = plVar2;
  if ((iStack_ac != iVar5) || (local_b8 != lVar3)) {
    do {
      local_ec = *(int *)(*local_e8 + (longlong)iStack_cc * 0xc);
      local_c0 = &local_ec;
      local_b8 = (longlong)local_ec * 0x18 + *(longlong *)(param_1 + 0x88);
      FUN_1484a6baa(&local_98,local_9c,&local_c0,0);
      local_d0 = local_d0 & ~local_e0._4_4_;
      FUN_1449c0562(&local_e0);
    } while (local_e8 != plVar2 || (local_d8 != lVar3 || iStack_cc != iVar5));
  }
  bVar1 = *(byte *)(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x70) = 1;
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  lVar3 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_108 = bVar1 ^ 1;
  FUN_1484fc2f6(uVar4,param_1 + 0x408,&local_98,*(undefined4 *)(param_1 + 0x4a8));
  local_f8 = uVar4;
  (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x20))(lVar3 + 0x28,param_1,&local_f8,&DAT_14cb4cd28);
  FUN_148518a02(param_1 + 0x408);
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  lVar3 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
  (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x18))(lVar3 + 0x28);
  FUN_1447f69b6(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x2f0) = 0;
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140aee53c(&local_98);
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484fa212 FUN_1484fa212 body=747 status=ok
// SIG undefined FUN_1484fa212(void)

void FUN_1484fa212(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x2e8) == 0) goto LAB_1484fa266;
  if (*(int *)(param_1 + 0x360) == *(int *)(param_1 + 0x38c)) {
    local_f8 = (longlong *)0x0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0x3ff0000000000000;
    local_d8 = ZEXT816(0);
    local_c8 = 0.0;
    uStack_c0 = 0;
    local_b8 = 0x3ff0000000000000;
    uStack_b0 = 0x3ff0000000000000;
    local_a8 = 0x3ff0000000000000;
    uStack_a0 = 0;
    FUN_148415b4c(*(longlong *)(param_1 + 0x2e8),&local_f8,1);
    dVar4 = 0.0;
    dVar5 = 0.0;
    dVar7 = 0.0;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x358);
    lVar2 = param_1 + 0x368;
    local_90 = 0x100000000;
    local_80 = 0xffffffff;
    local_78 = 0;
    iVar11 = 0;
    local_88 = lVar2;
    if (*(int *)(param_1 + 0x380) != 0) {
      FUN_1449c0562(&local_90);
      iVar11 = *(int *)(param_1 + 0x380);
    }
    uStack_e0 = local_80;
    uVar8 = uStack_e0;
    local_d8._4_4_ = local_74;
    local_d8._0_4_ = local_78;
    uStack_f0 = local_90;
    local_e8 = local_88;
    uStack_e0._4_4_ = (int)((ulonglong)local_80 >> 0x20);
    local_f8 = plVar1;
    if (uStack_e0._4_4_ == iVar11) {
      dVar4 = 0.0;
      dVar5 = 0.0;
      dVar6 = 0.0;
      if (local_88 != lVar2) goto LAB_1484fa3ce;
    }
    else {
LAB_1484fa3ce:
      dVar6 = 0.0;
      dVar5 = 0.0;
      dVar4 = 0.0;
      iVar9 = uStack_e0._4_4_;
      uStack_e0 = uVar8;
      do {
        lVar10 = (longlong)*(int *)(*local_f8 + (longlong)iVar9 * 0xc);
        lVar3 = *(longlong *)(param_1 + 0x88);
        dVar4 = dVar4 + *(double *)(lVar3 + lVar10 * 0x18);
        dVar5 = dVar5 + *(double *)(lVar3 + 8 + lVar10 * 0x18);
        dVar6 = dVar6 + *(double *)(lVar3 + 0x10 + lVar10 * 0x18);
        uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 & ~uStack_f0._4_4_);
        FUN_1449c0562(&uStack_f0);
        iVar9 = uStack_e0._4_4_;
        uVar8 = uStack_e0;
      } while (local_f8 != plVar1 || (local_e8 != lVar2 || uStack_e0._4_4_ != iVar11));
    }
    uStack_e0 = uVar8;
    dVar7 = 1.0 / (double)(*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x38c));
    dVar4 = dVar4 * dVar7;
    dVar5 = dVar5 * dVar7;
    dVar7 = dVar7 * dVar6;
  }
  FUN_1484fafd4(param_1);
  local_f8 = *(longlong **)(param_1 + 0xb0);
  uStack_f0 = *(undefined8 *)(param_1 + 0xb8);
  local_e8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_e0 = *(undefined8 *)(param_1 + 200);
  local_d8._8_4_ = SUB84(dVar5,0);
  local_d8._0_8_ = dVar4;
  local_d8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  uStack_c0 = 0;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0x3ff0000000000000;
  local_a8 = 0x3ff0000000000000;
  uStack_a0 = 0;
  local_c8 = dVar7;
  FUN_148415b4c(*(undefined8 *)(param_1 + 0x2e8),&local_f8,1);
  local_90 = 0x3ff0000000000000;
  local_88 = 0x3ff0000000000000;
  local_80 = 0x3ff0000000000000;
  (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x348))();
LAB_1484fa266:
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484fa4fe FUN_1484fa4fe body=110 status=ok
// SIG undefined FUN_1484fa4fe(void)

void FUN_1484fa4fe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0xb0);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_1405b70a4(param_1 + 0x88);
  FUN_14068ded2(param_1 + 0x358,0);
  FUN_1484fa56c(param_1 + 0x98,param_3);
  FUN_1484fa212(param_1);
  FUN_1484fa5c4(param_1);
  *(int *)(param_1 + 0x4a8) = *(int *)(param_1 + 0x4a8) + 1;
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 1484fa56c FUN_1484fa56c body=88 status=ok
// SIG undefined FUN_1484fa56c(void)

undefined8 * FUN_1484fa56c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148518818(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1484fa5c4 FUN_1484fa5c4 body=1030 status=ok
// SIG undefined FUN_1484fa5c4(void)

void FUN_1484fa5c4(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  longlong local_d8;
  undefined8 local_c8;
  undefined4 *puStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  longlong local_98;
  undefined8 local_90;
  longlong lStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1484debd2(*(undefined8 *)(param_1 + 0x228));
  FUN_146c83e96(param_1 + 0x110,1,1);
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar12 = 0;
    uVar13 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x88);
      lVar9 = *(longlong *)(param_1 + 0x228);
      uVar3 = *(undefined4 *)(param_1 + 0x244);
      local_98 = *(undefined8 *)(lVar6 + 0x10 + lVar12);
      puVar2 = (undefined8 *)(lVar6 + lVar12);
      local_a8 = (longlong *)*puVar2;
      uStack_a0 = *(undefined4 *)(puVar2 + 1);
      uStack_9c = *(undefined4 *)((longlong)puVar2 + 0xc);
      uVar4 = *(undefined4 *)(param_1 + 0x23c);
      FUN_148511d92(lVar9 + 0x698,&local_c8,uVar13 & 0xffffffff);
      *(longlong *)(puStack_c0 + 4) = local_98;
      *puStack_c0 = (undefined4)local_a8;
      puStack_c0[1] = local_a8._4_4_;
      puStack_c0[2] = uStack_a0;
      puStack_c0[3] = uStack_9c;
      puStack_c0[6] = uVar4;
      puStack_c0[7] = uVar3;
      puStack_c0[8] = 0;
      FUN_1448215fa(lVar9);
      *(undefined1 *)(lVar9 + 0x690) = 1;
      FUN_146c83f12(param_1 + 0x110,uVar13 & 0xffffffff,lVar6 + lVar12);
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 0x18;
    } while ((longlong)uVar13 < (longlong)*(int *)(param_1 + 0x90));
  }
  plVar1 = (longlong *)(param_1 + 0x358);
  lVar12 = param_1 + 0x368;
  local_c8 = 0x100000000;
  local_b8._0_4_ = 0xffffffff;
  local_b8._4_4_ = 0;
  uStack_b0 = 0;
  puStack_c0 = (undefined4 *)lVar12;
  if (*(int *)(param_1 + 0x380) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_c8);
    iVar11 = *(int *)(param_1 + 0x380);
  }
  lStack_88 = CONCAT44(uStack_ac,uStack_b0);
  local_90._0_4_ = (uint)local_b8;
  local_90._4_4_ = local_b8._4_4_;
  uStack_a0 = (undefined4)local_c8;
  uStack_9c = local_c8._4_4_;
  local_98 = (longlong)puStack_c0;
  local_a8 = plVar1;
  if ((local_b8._4_4_ != iVar11) || (puStack_c0 != (undefined4 *)lVar12)) {
    do {
      uVar5 = *(uint *)(*local_a8 + (longlong)local_90._4_4_ * 0xc);
      if ((-1 < (int)uVar5) &&
         (lVar6 = *(longlong *)(param_1 + 0x228), (int)uVar5 < *(int *)(lVar6 + 0x6c0))) {
        lVar9 = lVar6 + 0x6a8;
        if (*(longlong *)(lVar6 + 0x6b8) != 0) {
          lVar9 = *(longlong *)(lVar6 + 0x6b8);
        }
        if ((*(uint *)(lVar9 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
          *(undefined4 *)(*(longlong *)(lVar6 + 0x698) + 0x18 + (ulonglong)uVar5 * 0x28) =
               *(undefined4 *)(param_1 + 0x24c);
          FUN_1448215fa();
        }
      }
      local_90._0_4_ = (uint)local_90 & ~uStack_9c;
      FUN_1449c0562(&uStack_a0);
    } while (local_a8 != plVar1 || (local_98 != lVar12 || local_90._4_4_ != iVar11));
  }
  plVar1 = (longlong *)(param_1 + 0x4b0);
  lVar12 = param_1 + 0x4c0;
  local_c8 = 0x100000000;
  local_b8 = 0xffffffff;
  uStack_b0 = 0;
  puStack_c0 = (undefined4 *)lVar12;
  if (*(int *)(param_1 + 0x4d8) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_c8);
    iVar11 = *(int *)(param_1 + 0x4d8);
  }
  lStack_88 = CONCAT44(uStack_ac,uStack_b0);
  local_90 = local_b8;
  uVar7 = local_90;
  uStack_a0 = (undefined4)local_c8;
  uStack_9c = local_c8._4_4_;
  local_98 = (longlong)puStack_c0;
  local_90._4_4_ = (int)((ulonglong)local_b8 >> 0x20);
  iVar8 = local_90._4_4_;
  local_a8 = plVar1;
  if ((local_90._4_4_ != iVar11) || (local_90 = uVar7, puStack_c0 != (undefined4 *)lVar12)) {
    do {
      local_90 = uVar7;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x228) + 0x698) + 0x18 +
       (longlong)*(int *)(*local_a8 + (longlong)iVar8 * 0x10) * 0x28) =
           *(undefined4 *)(*local_a8 + 4 + (longlong)iVar8 * 0x10);
      FUN_1448215fa();
      local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~uStack_9c);
      FUN_1449c0562(&uStack_a0);
      iVar8 = local_90._4_4_;
      uVar7 = local_90;
    } while (local_a8 != plVar1 || (local_98 != lVar12 || local_90._4_4_ != iVar11));
  }
  FUN_1484d04e2(*(undefined8 *)(param_1 + 0x230));
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar12 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x88);
      lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x98) + lVar12 * 8);
      lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x98) + 4 + lVar12 * 8);
      local_74 = *(undefined4 *)(param_1 + 0x240);
      local_b8 = *(undefined8 *)(lVar6 + 0x10 + lVar9 * 0x18);
      puVar2 = (undefined8 *)(lVar6 + lVar9 * 0x18);
      local_90 = *puVar2;
      local_c8 = *puVar2;
      lStack_88 = puVar2[1];
      puStack_c0 = (undefined4 *)puVar2[1];
      local_d8 = *(longlong *)(lVar6 + 0x10 + lVar10 * 0x18);
      plVar1 = (longlong *)(lVar6 + lVar10 * 0x18);
      local_e8 = (undefined4)*plVar1;
      uStack_e4 = *(undefined4 *)((longlong)plVar1 + 4);
      local_a8 = (longlong *)*plVar1;
      uStack_e0 = (undefined4)plVar1[1];
      uStack_dc = *(uint *)((longlong)plVar1 + 0xc);
      local_78 = *(undefined4 *)(param_1 + 0x238);
      local_70 = 0;
      uStack_a0 = uStack_e0;
      uStack_9c = uStack_dc;
      local_98 = local_d8;
      local_80 = local_b8;
      FUN_1484d0812(*(undefined8 *)(param_1 + 0x230),&local_a8);
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(param_1 + 0xa0));
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484fa9cc FUN_1484fa9cc body=387 status=ok
// SIG undefined FUN_1484fa9cc(void)

void FUN_1484fa9cc(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_a8 [64];
  longlong local_68;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_140aeefbc(*(longlong *)(param_1 + 0x220),0,1);
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  FUN_1411371f6(local_a8);
  uVar1 = FUN_14586a0bc();
  local_d8 = local_a8;
  lVar2 = FUN_141137228(param_2,uVar1,&DAT_14c8464e0,&local_c8);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  *(longlong *)(param_1 + 0x220) = lVar2;
  (**(code **)(**(longlong **)(param_1 + 0x228) + 0x170))(*(longlong **)(param_1 + 0x228),0,lVar2,0)
  ;
  FUN_14092e51e(*(undefined8 *)(param_1 + 0x220),*(undefined8 *)(param_1 + 0x228));
  if ((*(byte *)(*(longlong *)(param_1 + 0x228) + 0x9c) & 1) == 0) {
    FUN_140b506a4();
  }
  else {
    FUN_14072bb4a();
  }
  (**(code **)(**(longlong **)(param_1 + 0x230) + 0x170))
            (*(longlong **)(param_1 + 0x230),0,*(undefined8 *)(param_1 + 0x220),0);
  (**(code **)(**(longlong **)(param_1 + 0x230) + 0x490))
            (*(longlong **)(param_1 + 0x230),*(undefined8 *)(param_1 + 0x228),&DAT_14cadad90,0);
  if ((*(byte *)(*(longlong *)(param_1 + 0x230) + 0x9c) & 1) == 0) {
    FUN_140b506a4();
  }
  else {
    FUN_14072bb4a();
  }
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484fab50 FUN_1484fab50 body=130 status=ok
// SIG undefined FUN_1484fab50(void)

void FUN_1484fab50(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_148444614();
  uVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
  FUN_148558a96(param_1 + 0x500,uVar2);
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_140aeefbc(*(longlong *)(param_1 + 0x220),0,1);
    *(undefined8 *)(param_1 + 0x220) = 0;
  }
  plVar1 = (longlong *)FUN_148444614(param_1);
  uVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
  plVar1 = (longlong *)FUN_148451354(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001484fabcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2d8))(plVar1,param_1,*(code **)(*plVar1 + 0x2d8));
  return;
}



// FUNCTION 1484fabd2 FUN_1484fabd2 body=87 status=ok
// SIG undefined FUN_1484fabd2(void)

void FUN_1484fabd2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_148444614();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x2c8))(plVar1);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x378))(plVar1);
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 0x1d0);
                    /* WARNING: Could not recover jumptable at 0x0001484fac26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x348) + 0x2b0))(*(longlong **)(param_1 + 0x348),param_2);
  return;
}



// FUNCTION 1484fac3e FUN_1484fac3e body=916 status=ok
// SIG undefined FUN_1484fac3e(void)

void FUN_1484fac3e(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
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
  FUN_1484fafd4();
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar15 = 0;
    lVar16 = 0;
    uVar13 = 0;
    do {
      lVar12 = *(longlong *)(param_1 + 0x88);
      lVar4 = *(longlong *)(param_1 + 0x228);
      lVar5 = *(longlong *)(lVar4 + 0x698);
      puVar2 = (undefined4 *)(lVar12 + lVar15);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      *(undefined8 *)(lVar5 + 0x10 + lVar16) = *(undefined8 *)(lVar12 + 0x10 + lVar15);
      puVar2 = (undefined4 *)(lVar5 + lVar16);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      FUN_1448215fa(lVar4);
      *(undefined1 *)(lVar4 + 0x690) = 1;
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x228) + 0x698) + 0x18 + lVar16) =
           *(undefined4 *)(param_1 + 0x23c);
      FUN_1448215fa();
      FUN_146c84584(param_1 + 0x110,uVar13 & 0xffffffff,lVar12 + lVar15);
      uVar13 = uVar13 + 1;
      lVar16 = lVar16 + 0x28;
      lVar15 = lVar15 + 0x18;
    } while ((longlong)uVar13 < (longlong)*(int *)(param_1 + 0x90));
  }
  plVar1 = (longlong *)(param_1 + 0x358);
  lVar15 = param_1 + 0x368;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar15;
  if (*(int *)(param_1 + 0x380) == 0) {
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar14 = *(int *)(param_1 + 0x380);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar14) || (uStack_60 != lVar15)) {
    do {
      uVar3 = *(uint *)(*local_90 + (longlong)iStack_74 * 0xc);
      if ((-1 < (int)uVar3) &&
         (lVar16 = *(longlong *)(param_1 + 0x228), (int)uVar3 < *(int *)(lVar16 + 0x6c0))) {
        lVar12 = lVar16 + 0x6a8;
        if (*(longlong *)(lVar16 + 0x6b8) != 0) {
          lVar12 = *(longlong *)(lVar16 + 0x6b8);
        }
        if ((*(uint *)(lVar12 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) {
          *(undefined4 *)(*(longlong *)(lVar16 + 0x698) + 0x18 + (ulonglong)uVar3 * 0x28) =
               *(undefined4 *)(param_1 + 0x24c);
          FUN_1448215fa();
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar15 || iStack_74 != iVar14))
    ;
  }
  plVar1 = (longlong *)(param_1 + 0x4b0);
  lVar15 = param_1 + 0x4c0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar15;
  if (*(int *)(param_1 + 0x4d8) == 0) {
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar14 = *(int *)(param_1 + 0x4d8);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar14) || (uStack_60 != lVar15)) {
    do {
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x228) + 0x698) + 0x18 +
       (longlong)*(int *)(*local_90 + (longlong)iStack_74 * 0x10) * 0x28) =
           *(undefined4 *)(*local_90 + 4 + (longlong)iStack_74 * 0x10);
      FUN_1448215fa();
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar15 || iStack_74 != iVar14))
    ;
  }
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar15 = 0;
    lVar16 = 0;
    do {
      lVar12 = *(longlong *)(param_1 + 0x88);
      lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x98) + lVar16 * 8);
      lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x98) + 4 + lVar16 * 8);
      lVar4 = *(longlong *)(param_1 + 0x230);
      lVar5 = *(longlong *)(lVar4 + 0x698);
      puVar2 = (undefined4 *)(lVar12 + lVar11 * 0x18);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      *(undefined8 *)(lVar5 + 0x10 + lVar15) = *(undefined8 *)(lVar12 + 0x10 + lVar11 * 0x18);
      puVar2 = (undefined4 *)(lVar5 + lVar15);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      FUN_1448215fa(lVar4);
      *(undefined1 *)(lVar4 + 0x690) = 1;
      lVar4 = *(longlong *)(param_1 + 0x230);
      lVar5 = *(longlong *)(lVar4 + 0x698);
      puVar2 = (undefined4 *)(lVar12 + lVar10 * 0x18);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      *(undefined8 *)(lVar5 + 0x28 + lVar15) = *(undefined8 *)(lVar12 + 0x10 + lVar10 * 0x18);
      puVar2 = (undefined4 *)(lVar5 + 0x18 + lVar15);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      FUN_1448215fa(lVar4);
      *(undefined1 *)(lVar4 + 0x690) = 1;
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 0x40;
    } while (lVar16 < *(int *)(param_1 + 0xa0));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484fafd4 FUN_1484fafd4 body=158 status=ok
// SIG undefined FUN_1484fafd4(void)

void FUN_1484fafd4(longlong param_1)

{
  char cVar1;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x2e8);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  if ((*(int *)(param_1 + 0x360) == *(int *)(param_1 + 0x38c)) ||
     (*(char *)(param_1 + 0x350) == '\x01')) {
LAB_1484fafff:
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x350);
    uVar3 = 0;
  }
  else {
    if ((*(int *)(param_1 + 0x80) != 0) && (*(longlong **)(param_1 + 0x78) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))();
      if (cVar1 == '\0') {
        plVar2 = *(longlong **)(param_1 + 0x2e8);
      }
      else {
        if (*(int *)(param_1 + 0x80) == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = *(longlong **)(param_1 + 0x78);
        }
        cVar1 = (**(code **)(*plVar2 + 0x58))();
        plVar2 = *(longlong **)(param_1 + 0x2e8);
        if (cVar1 != '\0') goto LAB_1484fafff;
      }
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x350);
    uVar3 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001484fb010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,uVar3);
  return;
}



// FUNCTION 1484fb072 FUN_1484fb072 body=300 status=ok
// SIG undefined FUN_1484fb072(void)

void FUN_1484fb072(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
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
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar11 = 0;
  local_48 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_50);
    iVar11 = (int)param_2[5];
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_2;
  if ((iStack_3c != iVar11) || (local_48 != plVar1)) {
    do {
      lVar4 = *local_78;
      lVar9 = (longlong)iStack_5c;
      lVar10 = (longlong)*(int *)(lVar4 + lVar9 * 0x28);
      lVar5 = *(longlong *)(param_1 + 0x88);
      *(undefined8 *)(lVar5 + 0x10 + lVar10 * 0x18) = *(undefined8 *)(lVar4 + 0x18 + lVar9 * 0x28);
      puVar3 = (undefined4 *)(lVar4 + 8 + lVar9 * 0x28);
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      puVar2 = (undefined4 *)(lVar5 + lVar10 * 0x18);
      *puVar2 = *puVar3;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 || (local_68 != plVar1 || iStack_5c != iVar11));
  }
  FUN_1484fac3e(param_1);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484fb1a0 FUN_1484fb1a0 body=248 status=ok
// SIG undefined FUN_1484fb1a0(void)

void FUN_1484fb1a0(longlong param_1,undefined4 *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [56];
  undefined8 local_80;
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68[0] = *(longlong *)(param_1 + 0x300);
  local_58[0] = 0;
  if (local_68[0] != 0) {
    puVar2 = (undefined8 *)(param_1 + 800);
    if (*(undefined8 **)(param_1 + 0x310) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x310);
    }
    (**(code **)*puVar2)(puVar2,local_58);
  }
  local_e8 = *param_2;
  uStack_e4 = param_2[1];
  uStack_e0 = param_2[2];
  uStack_dc = param_2[3];
  local_d8 = param_2[4];
  uStack_d4 = param_2[5];
  uStack_d0 = param_2[6];
  uStack_cc = param_2[7];
  local_c8 = param_2[8];
  uStack_c4 = param_2[9];
  uStack_c0 = param_2[10];
  uStack_bc = param_2[0xb];
  cVar1 = FUN_146c84814(param_1 + 0x110,&local_e8,local_b8,local_68);
  if (cVar1 != '\0') {
    *param_3 = 1;
    *(undefined8 *)(param_3 + 8) = local_80;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined8 *)(param_3 + 0x20) = 0x3ff0000000000000;
    param_3[0x28] = 0;
    *(undefined8 *)(param_3 + 0x2c) = 0;
    *(undefined8 *)(param_3 + 0x34) = 0;
    *(undefined4 *)(param_3 + 0x3c) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484fb29a FUN_1484fb29a body=234 status=ok
// SIG undefined FUN_1484fb29a(void)

uint * FUN_1484fb29a(longlong param_1,uint *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_98 [40];
  uint local_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  uint uStack_48;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  uint uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = local_70 & 0xffffff00;
  uStack_68 = 0x47efffffe0000000;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x3ff0000000000000;
  uStack_48 = uStack_48 & 0xffffff00;
  uStack_44 = 0;
  uStack_3c = 0;
  uStack_34 = 0;
  cVar1 = FUN_1484fb1a0(param_1 + -0x30,param_3);
  if (cVar1 != '\0') {
    param_2[0xc] = uStack_44._4_4_;
    param_2[0xd] = (uint)uStack_3c;
    param_2[0xe] = uStack_3c._4_4_;
    param_2[0xf] = uStack_34;
    param_2[8] = (uint)local_50;
    param_2[9] = local_50._4_4_;
    param_2[10] = uStack_48;
    param_2[0xb] = (uint)uStack_44;
    param_2[4] = (uint)local_60;
    param_2[5] = local_60._4_4_;
    param_2[6] = (uint)uStack_58;
    param_2[7] = uStack_58._4_4_;
    *param_2 = local_70;
    param_2[1] = uStack_6c;
    param_2[2] = (uint)uStack_68;
    param_2[3] = uStack_68._4_4_;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  *(undefined1 *)param_2 = 1;
  param_2[2] = 0xe0000000;
  param_2[3] = 0x47efffff;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0x3ff00000;
  *(undefined1 *)(param_2 + 10) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1484fb386 FUN_1484fb386 body=1374 status=ok
// SIG undefined FUN_1484fb386(void)

void FUN_1484fb386(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 auStack_218 [40];
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined4 local_1c0 [20];
  undefined4 *local_170;
  undefined8 *local_168;
  undefined4 local_15c;
  undefined8 local_158 [2];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  longlong local_f8 [2];
  undefined8 local_e8 [6];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar11 = param_1 + -8;
  plVar5 = (longlong *)FUN_14479d2ce(lVar11);
  lVar6 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x10))(lVar6 + 0x28,&DAT_14cb4cd18);
  lVar6 = param_1 + 0x328;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_145c3f772(&local_b8,lVar6);
  local_f8[0] = *(longlong *)(param_1 + 0x2d0);
  local_e8[0] = 0;
  if (local_f8[0] != 0) {
    puVar10 = (undefined8 *)(param_1 + 0x2f0);
    if (*(undefined8 **)(param_1 + 0x2e0) != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x2e0);
    }
    (**(code **)*puVar10)(puVar10,local_e8);
  }
  local_158[0] = *param_2;
  local_158[1] = param_2[1];
  local_148 = *(undefined4 *)(param_2 + 2);
  uStack_144 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_140 = *(undefined4 *)(param_2 + 3);
  uStack_13c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_138 = param_2[4];
  uStack_130 = *(undefined4 *)(param_2 + 5);
  uStack_12c = CONCAT44(uStack_12c._4_4_,*(undefined4 *)((longlong)param_2 + 0x2c));
  cVar3 = FUN_146c84814(param_1 + 0xe0,local_158,local_1c0,local_f8);
  if (cVar3 == '\0') {
    FUN_14068ded2(lVar6,0);
  }
  else {
    pcVar2 = *(code **)(param_1 + 0x230);
    plVar5 = (longlong *)(param_1 + 0x250);
    if (*(longlong **)(param_1 + 0x240) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x240);
    }
    uVar7 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar7);
    pcVar2 = *(code **)(param_1 + 0x270);
    plVar5 = (longlong *)(param_1 + 0x290);
    if (*(longlong **)(param_1 + 0x280) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x280);
    }
    uVar7 = (**(code **)(*plVar5 + 8))();
    cVar4 = (*pcVar2)(uVar7);
    if (cVar3 == '\0') {
      if (cVar4 == '\0') {
        local_168 = local_158;
        local_15c = local_1c0[0];
        local_138 = 0;
        uStack_130 = 0;
        local_158[0] = 0;
        local_158[1] = 0;
        uStack_12c = 0xffffffff00000080;
        local_124 = 0;
        local_118 = 0;
        local_110 = 0;
        local_170 = &local_15c;
        FUN_1400bab40(local_158);
        FUN_145be27ca(lVar6,local_158);
        goto LAB_1484fb8c2;
      }
      FUN_144a7cc9e(lVar6,local_1c0[0]);
    }
    else if (cVar4 == '\0') {
      FUN_1447cbafe(lVar6,local_158,local_1c0,0);
    }
    else {
      local_168 = local_158;
      local_15c = local_1c0[0];
      local_138 = 0;
      uStack_130 = 0;
      local_158[0] = 0;
      local_158[1] = 0;
      uStack_12c = 0xffffffff00000080;
      local_124 = 0;
      local_118 = 0;
      local_110 = 0;
      local_170 = &local_15c;
      FUN_1400bab40(local_158);
      FUN_1484f863e(lVar6,local_158);
LAB_1484fb8c2:
      local_110 = 0;
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(local_158);
    }
  }
  lVar12 = param_1 + -0x30;
  if ((int)uStack_b0 - local_84 == *(int *)(param_1 + 0x330) - *(int *)(param_1 + 0x35c)) {
    cVar3 = FUN_1484e701c(&local_b8,lVar6);
    if (cVar3 != '\0') goto LAB_1484fb7a1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x2b0))(*(longlong **)(param_1 + 0x2b0),local_158)
  ;
  plVar5 = (longlong *)FUN_14479d2ce(lVar11);
  lVar8 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  local_1f0 = lVar8 + 0x28;
  local_1e0 = lVar11;
  puVar9 = (undefined8 *)FUN_14001cc68(0x130,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x478);
  *puVar9 = &PTR_LAB_14af09a10;
  puVar9[5] = 0;
  *(undefined4 *)(puVar9 + 6) = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *(undefined8 *)((longlong)puVar9 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar9 + 0x3c) = 0;
  puVar9[9] = 0;
  *(undefined4 *)(puVar9 + 10) = 0;
  local_1d8 = lVar6;
  FUN_145c3f772(puVar9 + 1,&local_b8);
  *(undefined1 *)(puVar9 + 0xb) = 0;
  puVar10 = local_158;
  puVar13 = puVar9 + 0xc;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  puVar10 = local_158;
  puVar13 = puVar9 + 0x18;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined4 *)(puVar9 + 0x24) = uVar1;
  local_1e8 = lVar12;
  local_1c8 = puVar9;
  (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x20))(local_1f0,lVar12,&local_1c8,&DAT_14cb4cd08);
  plVar5 = (longlong *)FUN_14479d2ce(local_1e0);
  lVar6 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  local_1f0 = lVar6 + 0x28;
  puVar9 = (undefined8 *)FUN_14001cc68(0x130,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x478);
  *puVar9 = &PTR_LAB_14af09a10;
  puVar9[5] = 0;
  *(undefined4 *)(puVar9 + 6) = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *(undefined8 *)((longlong)puVar9 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar9 + 0x3c) = 0;
  puVar9[9] = 0;
  *(undefined4 *)(puVar9 + 10) = 0;
  FUN_145c3f772(puVar9 + 1,local_1d8);
  lVar11 = local_1e0;
  lVar12 = local_1e8;
  *(undefined1 *)(puVar9 + 0xb) = 1;
  puVar10 = local_158;
  puVar13 = puVar9 + 0xc;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  puVar10 = local_158;
  puVar13 = puVar9 + 0x18;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined4 *)(puVar9 + 0x24) = uVar1;
  local_1d0 = puVar9;
  (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x20))(local_1f0,local_1e8,&local_1d0,&DAT_14cb4cd18);
  FUN_1484fa212(lVar12);
  FUN_1447f69b6(param_1 + 0x28);
LAB_1484fb7a1:
  plVar5 = (longlong *)FUN_14479d2ce(lVar11);
  lVar11 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  (**(code **)(*(longlong *)(lVar11 + 0x28) + 0x18))(lVar11 + 0x28);
  FUN_1484fac3e(lVar12);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484fb8e6 FUN_1484fb8e6 body=211 status=ok
// SIG undefined FUN_1484fb8e6(void)

void FUN_1484fb8e6(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  iVar1 = FUN_144a7cc9e(param_1 + 0x358);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x4b8) != *(int *)(param_1 + 0x4e4)) {
    lVar2 = param_1 + 0x4e8;
    if (*(longlong *)(param_1 + 0x4f0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x4f0);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x4f8) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x4b0);
      iVar3 = iVar1;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x10) == param_2) {
          lVar4 = *(longlong *)(param_1 + 0x228);
          goto LAB_1484fb996;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x10 + lVar2 + 8);
      } while (iVar3 != -1);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x228);
  puVar5 = (undefined4 *)(param_1 + 0x23c);
  goto LAB_1484fb91d;
  while (iVar1 = *(int *)(lVar6 + 8), iVar1 != -1) {
LAB_1484fb996:
    lVar6 = lVar2 + (longlong)iVar1 * 0x10;
    if (*(uint *)(lVar2 + (longlong)iVar1 * 0x10) == param_2) goto LAB_1484fb9b0;
  }
  lVar6 = 0;
LAB_1484fb9b0:
  puVar5 = (undefined4 *)(lVar6 + 4);
LAB_1484fb91d:
  *(undefined4 *)(*(longlong *)(lVar4 + 0x698) + 0x18 + (longlong)(int)param_2 * 0x28) = *puVar5;
  FUN_1448215fa();
  return;
}



// FUNCTION 1484fb9ba FUN_1484fb9ba body=262 status=ok
// SIG undefined FUN_1484fb9ba(void)

void FUN_1484fb9ba(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_48 [40];
  undefined1 local_20 [4];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  FUN_1447cbafe(param_1 + 0x358,local_20,&local_1c,0);
  if (*(int *)(param_1 + 0x4b8) != *(int *)(param_1 + 0x4e4)) {
    lVar3 = param_1 + 0x4e8;
    if (*(longlong *)(param_1 + 0x4f0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x4f0);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x4f8) - 1U & local_1c) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x4b0);
      iVar1 = iVar6;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar1 * 0x10) == local_1c) {
          lVar2 = *(longlong *)(param_1 + 0x228);
          goto LAB_1484fba9b;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + lVar3 + 8);
      } while (iVar1 != -1);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x228);
  puVar4 = (undefined4 *)(param_1 + 0x24c);
  goto LAB_1484fba0f;
  while (iVar6 = *(int *)(lVar5 + 8), iVar6 != -1) {
LAB_1484fba9b:
    lVar5 = lVar3 + (longlong)iVar6 * 0x10;
    if (*(uint *)(lVar3 + (longlong)iVar6 * 0x10) == local_1c) goto LAB_1484fbab8;
  }
  lVar5 = 0;
LAB_1484fbab8:
  puVar4 = (undefined4 *)(lVar5 + 4);
LAB_1484fba0f:
  *(undefined4 *)(*(longlong *)(lVar2 + 0x698) + 0x18 + (longlong)(int)local_1c * 0x28) = *puVar4;
  FUN_1448215fa();
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484fbac2 FUN_1484fbac2 body=85 status=ok
// SIG undefined FUN_1484fbac2(void)

undefined1 * FUN_1484fbac2(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_1484fb1a0(param_1 + -0x38,param_3,param_2);
  return param_2;
}



// FUNCTION 1484fbb22 FUN_1484fbb22 body=320 status=ok
// SIG undefined FUN_1484fbb22(void)

undefined4 FUN_1484fbb22(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8 [20];
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68[0] = *(longlong *)(param_1 + 0x2c8);
  local_58[0] = 0;
  if (local_68[0] != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x2e8);
    if (*(undefined8 **)(param_1 + 0x2d8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x2d8);
    }
    (**(code **)*puVar3)(puVar3,local_58);
  }
  local_e8 = *param_2;
  uStack_e4 = param_2[1];
  uStack_e0 = param_2[2];
  uStack_dc = param_2[3];
  local_d8 = param_2[4];
  uStack_d4 = param_2[5];
  uStack_d0 = param_2[6];
  uStack_cc = param_2[7];
  local_c8 = param_2[8];
  uStack_c4 = param_2[9];
  uStack_c0 = param_2[10];
  uStack_bc = param_2[0xb];
  uVar2 = FUN_146c84814(param_1 + 0xd8,&local_e8,local_b8,local_68);
  if ((char)uVar2 != '\0') {
    uVar1 = *(uint *)(param_1 + 0x308);
    if (local_b8[0] != uVar1) {
      if (-1 < (int)uVar1) {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x698) + 0x18 + (ulonglong)uVar1 * 0x28) =
             *(undefined4 *)(param_1 + 0x218);
        FUN_1448215fa();
      }
      *(uint *)(param_1 + 0x308) = local_b8[0];
      *(undefined4 *)(param_1 + 0x218) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x698) + 0x18 +
            (longlong)(int)local_b8[0] * 0x28);
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x698) + 0x18 +
       (longlong)(int)local_b8[0] * 0x28) = *(undefined4 *)(param_1 + 0x210);
      FUN_1448215fa();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484fbc64 FUN_1484fbc64 body=71 status=ok
// SIG undefined FUN_1484fbc64(void)

void FUN_1484fbc64(longlong param_1)

{
  if (-1 < (longlong)*(int *)(param_1 + 0x308)) {
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x698) + 0x18 +
     (longlong)*(int *)(param_1 + 0x308) * 0x28) = *(undefined4 *)(param_1 + 0x218);
    FUN_1448215fa();
    *(undefined4 *)(param_1 + 0x308) = 0xffffffff;
  }
  return;
}



// FUNCTION 1484fbce0 FUN_1484fbce0 body=630 status=ok
// SIG undefined FUN_1484fbce0(void)

bool FUN_1484fbce0(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)((longlong)param_1 + 0x4c) == '\x01') {
    dVar7 = (param_1[0x1e] * param_2[2] + param_1[0x1c] * *param_2 + param_1[0x1d] * param_2[1]) -
            param_1[0x1f];
    local_88 = param_2[2] - param_1[0x1e] * dVar7;
    local_90 = param_2[1] - param_1[0x1d] * dVar7;
    local_98 = *param_2 - dVar7 * param_1[0x1c];
LAB_1484fbe4a:
    FUN_1484ffaec(param_1,&local_a8,param_1 + 0x1c);
    if (((param_1[0x20] <= local_a8) && (param_1[0x21] <= local_a0)) && (local_a8 <= param_1[0x22]))
    {
      bVar4 = local_a0 <= param_1[0x23];
      goto LAB_1484fbd98;
    }
  }
  else {
    dVar7 = param_1[0x1c];
    dVar1 = param_1[0x1d];
    dVar2 = param_1[0x1e];
    dVar3 = param_1[0x1f];
    if (0.0 < (dVar2 * param_2[2] + dVar7 * *param_2 + dVar1 * param_2[1]) - dVar3) {
      local_88 = param_1[2];
      dVar6 = param_2[2] - local_88;
      local_98 = *param_1;
      local_90 = param_1[1];
      dVar5 = param_2[1] - local_90;
      dVar8 = *param_2 - local_98;
      dVar7 = ((dVar2 * dVar3 - local_88) * dVar2 +
              (dVar3 * dVar7 - local_98) * dVar7 + (dVar1 * dVar3 - local_90) * dVar1) /
              (dVar2 * dVar6 + dVar7 * dVar8 + dVar1 * dVar5);
      local_88 = dVar6 * dVar7 + local_88;
      local_90 = dVar5 * dVar7 + local_90;
      local_98 = dVar7 * dVar8 + local_98;
      goto LAB_1484fbe4a;
    }
  }
  bVar4 = false;
LAB_1484fbd98:
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484fbf58 FUN_1484fbf58 body=8 status=ok
// SIG undefined FUN_1484fbf58(void)

longlong FUN_1484fbf58(longlong param_1)

{
  return param_1 + 0x88;
}



// FUNCTION 1484fbf60 FUN_1484fbf60 body=50 status=ok
// SIG undefined FUN_1484fbf60(void)

void FUN_1484fbf60(longlong param_1,longlong param_2)

{
  if (*(int *)(param_2 + 8) != *(int *)(param_1 + 0x90)) {
    return;
  }
  FUN_1405b70a4(param_1 + 0x88);
  FUN_1484fac3e(param_1);
  return;
}



// FUNCTION 1484fbf92 FUN_1484fbf92 body=418 status=ok
// SIG undefined FUN_1484fbf92(void)

void FUN_1484fbf92(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    lVar2 = FUN_1459ef23c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) goto LAB_1484fbfda;
  }
  param_2 = 0;
LAB_1484fbfda:
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar3 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x30);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (local_50 != lVar2)) {
    do {
      if (*(char *)(param_1 + 0x58) == '\x01') {
        FUN_1484fb9ba(param_2);
      }
      else {
        FUN_1484fb8e6(param_2,*(undefined4 *)(*local_80 + (longlong)iStack_64 * 0xc));
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (local_70 != lVar2 || iStack_64 != iVar3));
  }
  FUN_148415b4c(*(undefined8 *)(param_2 + 0x2e8),param_1 + 0xc0,1);
  local_80 = (longlong *)0x3ff0000000000000;
  local_78 = 0x3ff0000000000000;
  local_70 = 0x3ff0000000000000;
  (**(code **)(**(longlong **)(param_2 + 0x2e8) + 0x348))();
  FUN_1484fafd4(param_2);
  FUN_1447f69b6(param_2 + 0x58);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484fc136 FUN_1484fc136 body=415 status=ok
// SIG undefined FUN_1484fc136(void)

void FUN_1484fc136(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    lVar2 = FUN_1459ef23c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) goto LAB_1484fc17e;
  }
  param_2 = 0;
LAB_1484fc17e:
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar3 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x30);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (local_50 != lVar2)) {
    do {
      if (*(char *)(param_1 + 0x58) == '\x01') {
        FUN_1484fb8e6(param_2);
      }
      else {
        FUN_1484fb9ba(param_2,*(undefined4 *)(*local_80 + (longlong)iStack_64 * 0xc));
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (local_70 != lVar2 || iStack_64 != iVar3));
  }
  FUN_148415b4c(*(undefined8 *)(param_2 + 0x2e8),param_1 + 0x60,1);
  local_80 = (longlong *)0x3ff0000000000000;
  local_78 = 0x3ff0000000000000;
  local_70 = 0x3ff0000000000000;
  (**(code **)(**(longlong **)(param_2 + 0x2e8) + 0x348))();
  FUN_1484fafd4(param_2);
  FUN_1447f69b6(param_2 + 0x58);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484fc2d6 FUN_1484fc2d6 body=32 status=ok
// SIG undefined FUN_1484fc2d6(void)

undefined8 FUN_1484fc2d6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FLatticeControlPointsMechanicSelectionChange");
  return param_2;
}



// FUNCTION 1484fc2f6 FUN_1484fc2f6 body=186 status=ok
// SIG undefined FUN_1484fc2f6(void)

undefined8 *
FUN_1484fc2f6(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5)

{
  *param_1 = &PTR_LAB_14af09ac0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_14850c1d2(param_1 + 1);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_14850c1d2(param_1 + 0xb,param_3);
  *(undefined4 *)(param_1 + 0x15) = param_4;
  *(undefined1 *)((longlong)param_1 + 0xac) = param_5;
  return param_1;
}



// FUNCTION 1484fc3b0 FUN_1484fc3b0 body=88 status=ok
// SIG undefined FUN_1484fc3b0(void)

void FUN_1484fc3b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459ef23c();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_1484fc3e3;
  }
  param_2 = 0;
LAB_1484fc3e3:
  FUN_1484fb072(param_2,param_1 + 0x58);
  *(undefined1 *)(param_2 + 0x70) = 1;
  FUN_1447f69b6(param_2 + 0x40);
  return;
}



// FUNCTION 1484fc408 FUN_1484fc408 body=94 status=ok
// SIG undefined FUN_1484fc408(void)

void FUN_1484fc408(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459ef23c();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_1484fc43b;
  }
  param_2 = 0;
LAB_1484fc43b:
  FUN_1484fb072(param_2,param_1 + 8);
  if (*(char *)(param_1 + 0xac) == '\x01') {
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  FUN_1447f69b6(param_2 + 0x40);
  return;
}



// FUNCTION 1484fc466 FUN_1484fc466 body=32 status=ok
// SIG undefined FUN_1484fc466(void)

undefined8 FUN_1484fc466(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FLatticeControlPointsMechanicMovementChange");
  return param_2;
}



// FUNCTION 1484fc490 FUN_1484fc490 body=159 status=ok
// SIG undefined FUN_1484fc490(void)

void FUN_1484fc490(longlong param_1,undefined8 param_2,undefined4 *param_3,char param_4)

{
  longlong lVar1;
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
  
  *(undefined8 *)(param_1 + 0x520) = *(undefined8 *)(param_3 + 0xc);
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  uVar10 = param_3[9];
  uVar11 = param_3[10];
  uVar12 = param_3[0xb];
  *(undefined4 *)(param_1 + 0x510) = param_3[8];
  *(undefined4 *)(param_1 + 0x514) = uVar10;
  *(undefined4 *)(param_1 + 0x518) = uVar11;
  *(undefined4 *)(param_1 + 0x51c) = uVar12;
  *(undefined4 *)(param_1 + 0x500) = uVar6;
  *(undefined4 *)(param_1 + 0x504) = uVar7;
  *(undefined4 *)(param_1 + 0x508) = uVar8;
  *(undefined4 *)(param_1 + 0x50c) = uVar9;
  *(undefined4 *)(param_1 + 0x4f0) = uVar2;
  *(undefined4 *)(param_1 + 0x4f4) = uVar3;
  *(undefined4 *)(param_1 + 0x4f8) = uVar4;
  *(undefined4 *)(param_1 + 0x4fc) = uVar5;
  lVar1 = param_1 + 0x1f8;
  FUN_146c00942(lVar1);
  if (param_4 != '\0') {
    FUN_146c3c8a0(lVar1,param_1 + 0x4f0);
  }
  *(longlong *)(param_1 + 0x428) = lVar1;
  *(undefined8 *)(param_1 + 0x430) = 0;
  FUN_146bee918(param_1 + 0x420,0);
  *(ulonglong *)(param_1 + 0x430) =
       (ulonglong)
       (uint)(*(int *)(*(longlong *)(param_1 + 0x428) + 0x214) +
             *(int *)(*(longlong *)(param_1 + 0x428) + 0x218));
  return;
}



// FUNCTION 1484fc530 FUN_1484fc530 body=249 status=ok
// SIG undefined FUN_1484fc530(void)

void FUN_1484fc530(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  longlong lVar1;
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
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_1 + 0x520) = *(undefined8 *)(param_3 + 0xc);
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  uVar10 = param_3[9];
  uVar11 = param_3[10];
  uVar12 = param_3[0xb];
  *(undefined4 *)(param_1 + 0x510) = param_3[8];
  *(undefined4 *)(param_1 + 0x514) = uVar10;
  *(undefined4 *)(param_1 + 0x518) = uVar11;
  *(undefined4 *)(param_1 + 0x51c) = uVar12;
  *(undefined4 *)(param_1 + 0x500) = uVar6;
  *(undefined4 *)(param_1 + 0x504) = uVar7;
  *(undefined4 *)(param_1 + 0x508) = uVar8;
  *(undefined4 *)(param_1 + 0x50c) = uVar9;
  *(undefined4 *)(param_1 + 0x4f0) = uVar2;
  *(undefined4 *)(param_1 + 0x4f4) = uVar3;
  *(undefined4 *)(param_1 + 0x4f8) = uVar4;
  *(undefined4 *)(param_1 + 0x4fc) = uVar5;
  lVar1 = param_1 + 0x1f8;
  FUN_146c00942(lVar1);
  local_70 = *param_4;
  uStack_68 = param_4[1];
  local_60 = param_4[2];
  uStack_58 = param_4[3];
  local_50 = param_4[4];
  uStack_48 = param_4[5];
  local_40 = param_4[6];
  local_38 = *(undefined4 *)(param_4 + 8);
  uStack_34 = *(undefined4 *)((longlong)param_4 + 0x44);
  uStack_30 = *(undefined4 *)(param_4 + 9);
  uStack_2c = *(undefined4 *)((longlong)param_4 + 0x4c);
  local_28 = param_4[10];
  FUN_146c3cd49(lVar1,&local_70,0);
  *(longlong *)(param_1 + 0x428) = lVar1;
  *(undefined8 *)(param_1 + 0x430) = 0;
  FUN_146bee918(param_1 + 0x420,0);
  *(ulonglong *)(param_1 + 0x430) =
       (ulonglong)
       (uint)(*(int *)(*(longlong *)(param_1 + 0x428) + 0x214) +
             *(int *)(*(longlong *)(param_1 + 0x428) + 0x218));
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484fc62a FUN_1484fc62a body=2268 status=ok
// SIG undefined FUN_1484fc62a(void)

void FUN_1484fc62a(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined4 uVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_2c8 [32];
  double *local_2a8;
  undefined8 *local_2a0;
  undefined1 local_290 [24];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined1 local_240 [24];
  double local_228;
  double dStack_220;
  double local_218;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  double local_188;
  undefined8 local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  longlong *local_158;
  double dStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f0;
  double dStack_e8;
  double local_e0;
  undefined4 local_d4;
  undefined4 local_a8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_1c8 = DAT_14c8464f0;
  local_1d8 = DAT_14c8464e0;
  dStack_1d0 = DAT_14c8464e8;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  local_178 = *param_2;
  dStack_170 = param_2[1];
  local_168 = param_2[2];
  dStack_160 = param_2[3];
  local_158 = (longlong *)param_2[4];
  dStack_150 = param_2[5];
  FUN_1484fcf08((double *)(param_1 + 0x4f0),&local_208,&local_178);
  local_178 = 1.79769313486232e+308;
  local_168 = 0.0;
  local_158 = (longlong *)0x0;
  local_128 = local_128 & 0xffffff00;
  local_2a8 = &local_278;
  local_2a0 = &local_178;
  (**(code **)(*(longlong *)(param_1 + 0x420) + 0x30))
            (param_1 + 0x420,&local_208,&local_198,&local_228);
  dVar1 = local_228;
  iVar4 = local_228._0_4_;
  if (local_168 != 0.0) {
    plVar7 = local_158;
    if (local_158 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_148;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  bVar8 = -1 < iVar4;
  if (bVar8) {
    FUN_1483b309a(&local_178,param_1 + 0x1f8,(ulonglong)dVar1 & 0xffffffff,&local_208);
    local_218 = local_1e0 * local_100 + local_1f8;
    dStack_220 = local_1e8 * local_100 + local_200;
    local_228 = local_100 * local_1f0 + local_208;
    FUN_146c13dec(param_1 + 0x1f8,local_240,(ulonglong)dVar1 & 0xffffffff);
    FUN_146bed047(local_290,param_1 + 0x508,local_240);
    FUN_146bed047(&local_278,param_1 + 0x508,&local_228);
    local_268 = local_268 + *(double *)(param_1 + 0x500);
    dStack_270 = dStack_270 + *(double *)(param_1 + 0x4f8);
    local_278 = local_278 + *(double *)(param_1 + 0x4f0);
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    local_248 = 0x3ff0000000000000;
    local_188 = DAT_14c8463c8;
    local_198 = (undefined4)DAT_14c8463b8;
    uStack_194 = DAT_14c8463b8._4_4_;
    uStack_190 = (undefined4)DAT_14c8463c0;
    uStack_18c = DAT_14c8463c0._4_4_;
    FUN_146bfb7f2(&uStack_260,&local_198,local_290);
    local_1d8 = local_278;
    dStack_1d0 = dStack_270;
    local_1c8 = local_268;
    uStack_1c0 = uStack_260;
    uStack_1b8 = uStack_258;
    uStack_1b0 = uStack_250;
    local_1a8 = local_248;
    fVar11 = (float)local_218;
    fVar12 = (float)((local_268 - param_2[2]) * param_2[5] +
                    (local_278 - *param_2) * param_2[3] + (dStack_270 - param_2[1]) * param_2[4]);
  }
  else {
    fVar12 = 3.4028235e+38;
    fVar11 = 1.0;
  }
  pcVar3 = *(code **)(param_1 + 0x30);
  if (pcVar3 != (code *)0x0) {
    memset(&local_178,0,0x100);
    local_a8 = 0xffffffff;
    local_178 = (double)CONCAT44(0x3f800000,(undefined4)local_178);
    local_d4 = 0xffffffff;
    plVar7 = (longlong *)(param_1 + 0x50);
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      plVar7 = *(longlong **)(param_1 + 0x40);
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    cVar5 = (*pcVar3)(uVar6,param_2,&local_178);
    if (cVar5 != '\0') {
      if ((float)(((double)CONCAT44(uStack_13c,uStack_140) - param_2[2]) * param_2[5] +
                 (dStack_150 - *param_2) * param_2[3] +
                 ((double)CONCAT44(uStack_144,local_148) - param_2[1]) * param_2[4]) < fVar12) {
        local_218 = local_110;
        local_228 = (double)CONCAT44(uStack_11c,uStack_120);
        dStack_220 = local_118;
        dStack_270 = (double)CONCAT44(uStack_144,local_148);
        local_278 = dStack_150;
        local_268 = (double)CONCAT44(uStack_13c,uStack_140);
        uStack_260 = 0;
        uStack_258 = 0;
        uStack_250 = 0;
        local_248 = 0x3ff0000000000000;
        local_188 = DAT_14c8463c8;
        local_198 = (undefined4)DAT_14c8463b8;
        uStack_194 = DAT_14c8463b8._4_4_;
        uStack_190 = (undefined4)DAT_14c8463c0;
        uStack_18c = DAT_14c8463c0._4_4_;
        FUN_146bfb7f2(&uStack_260);
        local_1d8 = local_278;
        dStack_1d0 = dStack_270;
        local_1c8 = local_268;
        uStack_1c0 = uStack_260;
        uStack_1b8 = uStack_258;
        uStack_1b0 = uStack_250;
        local_1a8 = local_248;
        local_268 = (double)CONCAT44(uStack_13c,uStack_140) - *(double *)(param_1 + 0x500);
        dStack_270 = (double)CONCAT44(uStack_144,local_148) - *(double *)(param_1 + 0x4f8);
        local_278 = dStack_150 - *(double *)(param_1 + 0x4f0);
        FUN_146bf2028(param_1 + 0x508,&local_198,&local_278);
        fVar11 = (float)local_188;
        memcpy((void *)(param_1 + 0xb8),&local_178,0x100);
        *(undefined1 *)(param_1 + 0xb4) = 1;
        bVar8 = true;
      }
    }
  }
  if (!bVar8) {
    if (*(char *)(param_1 + 0x1f0) != '\x01') goto LAB_1484fc8c1;
    dVar1 = *(double *)(param_1 + 0x508);
    dVar2 = *(double *)(param_1 + 0x510);
    dVar10 = *(double *)(param_1 + 0x518) + *(double *)(param_1 + 0x518);
    dStack_160 = dVar1 * dVar10 + *(double *)(param_1 + 0x520) * (dVar2 + dVar2);
    local_158 = (longlong *)(dVar10 * dVar2 - (dVar1 + dVar1) * *(double *)(param_1 + 0x520));
    dStack_150 = 1.0 - ((dVar2 + dVar2) * dVar2 + dVar1 * (dVar1 + dVar1));
    local_118 = -1.0;
    local_178 = *(double *)(param_1 + 0x4f0);
    dStack_170 = *(double *)(param_1 + 0x4f8);
    local_168 = *(double *)(param_1 + 0x500);
    local_148 = *(undefined4 *)param_2;
    uStack_144 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_140 = *(undefined4 *)(param_2 + 1);
    uStack_13c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_138 = *(undefined4 *)(param_2 + 2);
    uStack_134 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_130 = *(undefined4 *)(param_2 + 3);
    uStack_12c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_128 = *(uint *)(param_2 + 4);
    uStack_124 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_120 = *(undefined4 *)(param_2 + 5);
    uStack_11c = *(undefined4 *)((longlong)param_2 + 0x2c);
    FUN_1484fd030(&local_178);
    local_100 = local_e0 - local_100;
    local_108 = dStack_e8 - local_108;
    local_110 = local_f0 - local_110;
    dVar10 = SQRT(local_100 * local_100 + local_110 * local_110 + local_108 * local_108);
    uVar9 = 0;
    dVar1 = 0.0;
    dVar2 = 1.0 / dVar10;
    local_228 = (double)(-(ulonglong)(0.0 < dVar10) & (ulonglong)(local_110 * dVar2));
    if (0.0 < dVar10) {
      local_218 = local_100 * dVar2;
      dVar1 = local_108 * dVar2;
      uVar9 = SUB84(dVar1,0);
    }
    else {
      local_218 = 0.0;
    }
    dStack_220 = (double)CONCAT44((int)((ulonglong)dVar1 >> 0x20),uVar9);
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    local_248 = 0x3ff0000000000000;
    local_278 = local_f0;
    dStack_270 = dStack_e8;
    local_268 = local_e0;
    local_188 = DAT_14c8463c8;
    local_198 = (undefined4)DAT_14c8463b8;
    uStack_194 = DAT_14c8463b8._4_4_;
    uStack_190 = (undefined4)DAT_14c8463c0;
    uStack_18c = DAT_14c8463c0._4_4_;
    FUN_146bfb7f2(&uStack_260);
    local_1d8 = local_278;
    dStack_1d0 = dStack_270;
    local_1c8 = local_268;
    uStack_1c0 = uStack_260;
    uStack_1b8 = uStack_258;
    uStack_1b0 = uStack_250;
    local_1a8 = local_248;
    local_268 = local_e0 - *(double *)(param_1 + 0x500);
    dStack_270 = dStack_e8 - *(double *)(param_1 + 0x4f8);
    local_278 = local_f0 - *(double *)(param_1 + 0x4f0);
    FUN_146bf2028(param_1 + 0x508,&local_198,&local_278);
    fVar11 = (float)local_188;
    *(undefined1 *)(param_1 + 0xb4) = 0;
  }
  pcVar3 = *(code **)(param_1 + 0x70);
  if (pcVar3 != (code *)0x0) {
    plVar7 = (longlong *)(param_1 + 0x90);
    if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
      plVar7 = *(longlong **)(param_1 + 0x80);
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    cVar5 = (*pcVar3)(uVar6,&local_1d8,&local_278);
    if (cVar5 != '\0') {
      local_1c8 = local_268;
      local_1d8 = local_278;
      dStack_1d0 = dStack_270;
      local_168 = local_268 - *(double *)(param_1 + 0x500);
      dStack_170 = dStack_270 - *(double *)(param_1 + 0x4f8);
      local_178 = local_278 - *(double *)(param_1 + 0x4f0);
      FUN_146bf2028(param_1 + 0x508,&local_198);
      fVar11 = (float)local_188;
    }
  }
  *(undefined8 *)(param_1 + 0x1e8) = local_1a8;
  *(undefined8 *)(param_1 + 0x1d8) = uStack_1b8;
  *(undefined8 *)(param_1 + 0x1e0) = uStack_1b0;
  *(double *)(param_1 + 0x1c8) = local_1c8;
  *(undefined8 *)(param_1 + 0x1d0) = uStack_1c0;
  *(double *)(param_1 + 0x1b8) = local_1d8;
  *(double *)(param_1 + 0x1c0) = dStack_1d0;
  *(float *)(param_1 + 0xb0) = fVar11;
LAB_1484fc8c1:
  if ((local_70 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484fcf08 FUN_1484fcf08 body=294 status=ok
// SIG undefined FUN_1484fcf08(void)

undefined8 * FUN_1484fcf08(double *param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146bf2028(param_1 + 3,&local_60,param_3 + 3);
  local_38 = param_3[2] - param_1[2];
  local_40 = param_3[1] - param_1[1];
  local_48 = *param_3 - *param_1;
  FUN_146bf2028(param_1 + 3,&local_78);
  param_2[2] = local_68;
  *param_2 = local_78;
  param_2[1] = uStack_70;
  param_2[3] = local_60;
  param_2[4] = uStack_58;
  param_2[5] = local_50;
  dVar1 = (double)param_2[3];
  dVar2 = (double)param_2[4];
  dVar3 = (double)param_2[5];
  dVar4 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (9.99999993922529e-09 < dVar4) {
    dVar4 = 1.0 / SQRT(dVar4);
    param_2[3] = dVar1 * dVar4;
    param_2[4] = dVar2 * dVar4;
    param_2[5] = dVar3 * dVar4;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484fd030 FUN_1484fd030 body=815 status=ok
// SIG undefined FUN_1484fd030(void)

void FUN_1484fd030(double *param_1)

{
  double dVar1;
  double dVar2;
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
  
  if (param_1[0xc] < 0.0) {
    dVar13 = param_1[1] - param_1[7];
    dVar6 = *param_1 - param_1[6];
    dVar11 = param_1[3];
    dVar1 = param_1[9];
    dVar2 = param_1[4];
    dVar3 = param_1[10];
    dVar4 = param_1[5];
    dVar5 = param_1[0xb];
    dVar7 = dVar4 * dVar5 + dVar11 * dVar1 + dVar2 * dVar3;
    dVar14 = param_1[2] - param_1[8];
    dVar9 = dVar14 * dVar4 + dVar6 * dVar11 + dVar13 * dVar2;
    dVar10 = ABS(1.0 - dVar7 * dVar7);
    dVar8 = dVar14 * dVar14 + dVar6 * dVar6 + dVar13 * dVar13;
    if (1e-08 <= dVar10) {
      dVar12 = -dVar7;
      dVar13 = dVar14 * dVar5 + dVar6 * dVar1 + dVar13 * dVar3;
      dVar6 = dVar12 * dVar9 + dVar13;
      dVar14 = 0.0;
      if (0.0 <= dVar6) {
        dVar10 = 1.0 / dVar10;
        dVar7 = (dVar7 * dVar13 - dVar9) * dVar10;
        dVar14 = dVar6 * dVar10;
        dVar8 = dVar8 + (dVar9 + dVar9 + dVar12 * dVar14 + dVar7) * dVar7 +
                        ((dVar12 * dVar7 + dVar14) - (dVar13 + dVar13)) * dVar14;
      }
      else {
        dVar7 = -dVar9;
        dVar8 = dVar8 - dVar9 * dVar9;
      }
    }
    else {
      dVar7 = -dVar9;
      dVar8 = dVar8 - dVar9 * dVar9;
      dVar14 = 0.0;
    }
    param_1[0xd] = *param_1 + dVar11 * dVar7;
    param_1[0xe] = param_1[1] + dVar2 * dVar7;
    param_1[0xf] = param_1[2] + dVar4 * dVar7;
    param_1[0x11] = param_1[6] + dVar1 * dVar14;
    param_1[0x12] = param_1[7] + dVar3 * dVar14;
    param_1[0x13] = param_1[8] + dVar5 * dVar14;
    param_1[0x10] = dVar7;
    param_1[0x14] = dVar14;
    dVar11 = 0.0;
    if (0.0 <= dVar8) {
      dVar11 = dVar8;
    }
    param_1[0xc] = dVar11;
  }
  return;
}



// FUNCTION 1484fd360 FUN_1484fd360 body=1782 status=ok
// SIG undefined FUN_1484fd360(void)

void FUN_1484fd360(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_2e8 [32];
  float local_2c8;
  undefined8 *local_2c0;
  undefined4 local_2b8;
  undefined1 local_2b0;
  ulonglong local_2a8;
  undefined8 *local_2a0;
  double local_298;
  double local_290;
  double local_288;
  undefined8 local_280;
  undefined8 local_278;
  double local_270;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  longlong local_228 [36];
  undefined1 local_108 [64];
  float local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  (**(code **)(*param_2 + 0x18))(param_2,local_108);
  FUN_141300fc0(local_228);
  FUN_148453350(local_228,param_2,local_108);
  dVar5 = (double)FUN_148556b6a(local_108,(undefined8 *)(param_1 + 0x1b8),0x3fe999999999999a);
  fVar12 = (float)dVar5;
  bVar4 = *(byte *)(param_1 + 0xb4);
  if (bVar4 == 0) {
    fVar13 = 2.0;
  }
  else {
    fVar13 = (local_c8 / 90.0) * 4.0;
  }
  local_2a8 = (ulonglong)(byte)-bVar4;
  local_268 = (&DAT_14c758c60)[local_2a8];
  local_264 = DAT_14c758e60;
  uVar10 = (ulonglong)((bVar4 ^ 1) << 9);
  local_260 = *(undefined4 *)((longlong)&DAT_14c758c60 + uVar10);
  local_25c = 0x3f800000;
  dVar5 = (double)fVar12;
  local_248 = 0.0;
  lVar1 = param_1 + 0x1d0;
  local_2a0 = (undefined8 *)(param_1 + 0x1b8);
  local_258 = dVar5;
  uStack_250 = dVar5;
  FUN_146bed047(&local_240,lVar1,&local_258);
  local_270 = local_230 + *(double *)(param_1 + 0x1c8);
  local_278 = local_238 + *(double *)(param_1 + 0x1c0);
  local_280 = local_240 + *(double *)(param_1 + 0x1b8);
  dVar7 = (double)-fVar12;
  local_248 = 0.0;
  local_258 = dVar7;
  uStack_250 = dVar7;
  FUN_146bed047(&local_240,lVar1,&local_258);
  local_288 = local_230 + *(double *)(param_1 + 0x1c8);
  local_290 = local_238 + *(double *)(param_1 + 0x1c0);
  local_298 = local_240 + *(double *)(param_1 + 0x1b8);
  local_2c0 = (undefined8 *)((ulonglong)local_2c0 & 0xffffffffffffff00);
  local_2c8 = fVar13;
  FUN_1484122ca(local_228,&local_298,&local_280,&local_268);
  local_268 = (&DAT_14c758c60)[local_2a8];
  local_264 = DAT_14c758e60;
  local_260 = *(undefined4 *)((longlong)&DAT_14c758c60 + uVar10);
  local_25c = 0x3f800000;
  local_248 = 0.0;
  local_258 = dVar5;
  uStack_250 = dVar7;
  FUN_146bed047(&local_240,lVar1,&local_258);
  local_270 = local_230 + *(double *)(param_1 + 0x1c8);
  local_278 = local_238 + *(double *)(param_1 + 0x1c0);
  local_280 = local_240 + *(double *)(param_1 + 0x1b8);
  local_248 = 0.0;
  local_258 = dVar7;
  uStack_250 = dVar5;
  FUN_146bed047(&local_240,lVar1,&local_258);
  local_288 = local_230 + *(double *)(param_1 + 0x1c8);
  local_290 = local_238 + *(double *)(param_1 + 0x1c0);
  local_298 = local_240 + *(double *)(param_1 + 0x1b8);
  local_2c0 = (undefined8 *)((ulonglong)local_2c0 & 0xffffffffffffff00);
  local_2c8 = fVar13;
  FUN_1484122ca(local_228,&local_298,&local_280,&local_268);
  puVar9 = local_2a0;
  if (*(char *)(param_1 + 0xb4) == '\x01') {
    local_280 = (double)CONCAT44(DAT_14c758e60,(&DAT_14c758c60)[local_2a8]);
    local_278 = (double)CONCAT44(0x3f800000,(&DAT_14c758c60)[(bVar4 ^ 1) << 7]);
    dVar5 = *(double *)(param_1 + 0x1d0);
    dVar7 = *(double *)(param_1 + 0x1d8);
    dVar11 = *(double *)(param_1 + 0x1e0) + *(double *)(param_1 + 0x1e0);
    local_240 = dVar5 * dVar11 + *(double *)(param_1 + 0x1e8) * (dVar7 + dVar7);
    local_238 = dVar11 * dVar7 - (dVar5 + dVar5) * *(double *)(param_1 + 0x1e8);
    local_230 = 1.0 - ((dVar7 + dVar7) * dVar7 + dVar5 * (dVar5 + dVar5));
    local_248 = (double)local_2a0[2];
    local_258 = (double)*local_2a0;
    uStack_250 = (double)local_2a0[1];
    local_2b8 = 0x3f800000;
    local_2b0 = 0;
    local_2c8 = 1.12104e-44;
    local_2c0 = &local_280;
    (**(code **)(local_228[0] + 0x18))(local_228,&local_258,&local_240,fVar12 + fVar12);
  }
  dVar5 = *(double *)(param_1 + 0x4f0);
  dVar7 = *(double *)(param_1 + 0x4f8);
  dVar11 = *(double *)(param_1 + 0x500);
  dVar2 = *(double *)(param_1 + 0x508);
  dVar3 = *(double *)(param_1 + 0x510);
  dVar8 = *(double *)(param_1 + 0x518) + *(double *)(param_1 + 0x518);
  dVar6 = dVar2 * dVar8 + *(double *)(param_1 + 0x520) * (dVar3 + dVar3);
  dVar8 = dVar8 * dVar3 - (dVar2 + dVar2) * *(double *)(param_1 + 0x520);
  dVar3 = 1.0 - ((dVar3 + dVar3) * dVar3 + dVar2 * (dVar2 + dVar2));
  local_280 = (double)CONCAT44(DAT_14c758e60,DAT_14c758e60);
  local_278 = (double)CONCAT44(0x3f800000,DAT_14c758c60);
  local_248 = dVar3 * 1000.0;
  uStack_250 = dVar8 * 1000.0;
  local_258 = dVar6 * 1000.0;
  local_230 = dVar11 + local_248;
  local_238 = dVar7 + uStack_250;
  local_240 = dVar5 + local_258;
  local_248 = dVar11 - local_248;
  uStack_250 = dVar7 - uStack_250;
  local_258 = dVar5 - local_258;
  local_2c0 = (undefined8 *)((ulonglong)local_2c0 & 0xffffffffffffff00);
  local_2c8 = 1.0;
  FUN_1484122ca(local_228,&local_258,&local_240);
  local_258 = (double)CONCAT44(DAT_14c758c60,DAT_14c758e60);
  uStack_250 = (double)CONCAT44(0x3f800000,DAT_14c758e60);
  dVar2 = (double)*(float *)(param_1 + 0xb0);
  local_230 = dVar3 * dVar2 + dVar11;
  local_238 = dVar8 * dVar2 + dVar7;
  local_240 = dVar6 * dVar2 + dVar5;
  local_2c0 = (undefined8 *)((ulonglong)local_2c0 & 0xffffffffffffff00);
  local_2c8 = 1.0;
  FUN_1484122ca(local_228,&local_240,puVar9,&local_258);
  FUN_14845342a(local_228);
  FUN_14008cd94(local_228);
  if ((local_b0 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484fda6c FUN_1484fda6c body=765 status=ok
// SIG undefined FUN_1484fda6c(void)

void FUN_1484fda6c(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 0.0;
  dVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = dVar1;
  param_1[2] = param_2[2];
  dVar1 = param_2[6];
  dVar2 = param_2[4];
  dVar3 = param_2[5];
  dVar4 = dVar1 - dVar2 * 0.0;
  dVar5 = dVar2 * 0.0 - dVar3;
  dVar6 = dVar3 * 0.0 + dVar1 * -0.0;
  dVar5 = dVar5 + dVar5;
  dVar4 = dVar4 + dVar4;
  dVar6 = dVar6 + dVar6;
  dVar9 = param_2[7];
  dVar8 = (dVar2 * dVar4 - dVar6 * dVar3) + dVar9 * dVar5 + 0.0;
  dVar7 = (dVar1 * dVar6 - dVar5 * dVar2) + dVar9 * dVar4 + 0.0;
  dVar9 = (dVar3 * dVar5 - dVar4 * dVar1) + dVar6 * dVar9 + 1.0;
  dVar1 = param_2[2];
  dVar2 = param_2[1];
  dVar3 = *param_2;
  param_1[4] = dVar9;
  param_1[5] = dVar7;
  param_1[6] = dVar8;
  param_1[7] = (dVar1 + dVar8) * dVar8 + (dVar3 + dVar9) * dVar9 + (dVar2 + dVar7) * dVar7;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)((longlong)param_2 + 0x4c);
  dVar1 = param_2[6];
  dVar2 = param_2[4];
  dVar3 = param_2[5];
  dVar5 = dVar2 - dVar3 * 0.0;
  dVar4 = dVar1 * 0.0 + dVar2 * -0.0;
  dVar7 = dVar3 * 0.0 - dVar1;
  dVar5 = dVar5 + dVar5;
  dVar4 = dVar4 + dVar4;
  dVar7 = dVar7 + dVar7;
  dVar9 = param_2[7];
  param_1[8] = (dVar3 * dVar5 - dVar4 * dVar1) + dVar7 * dVar9 + 0.0;
  param_1[9] = (dVar1 * dVar7 - dVar5 * dVar2) + dVar9 * dVar4 + 1.0;
  param_1[10] = (dVar2 * dVar4 - dVar7 * dVar3) + dVar9 * dVar5 + 0.0;
  dVar1 = param_2[6];
  dVar2 = param_2[4];
  dVar3 = param_2[5];
  dVar4 = dVar2 * 0.0 + dVar3 * -0.0;
  dVar5 = dVar3 - dVar1 * 0.0;
  dVar7 = dVar1 * 0.0 - dVar2;
  dVar4 = dVar4 + dVar4;
  dVar7 = dVar7 + dVar7;
  dVar5 = dVar5 + dVar5;
  dVar9 = param_2[7];
  param_1[0xb] = (dVar3 * dVar4 - dVar7 * dVar1) + dVar5 * dVar9 + 0.0;
  param_1[0xc] = (dVar1 * dVar5 - dVar4 * dVar2) + dVar9 * dVar7 + 0.0;
  param_1[0xd] = (dVar2 * dVar7 - dVar5 * dVar3) + dVar9 * dVar4 + 1.0;
  return;
}



// FUNCTION 1484fdd6a FUN_1484fdd6a body=615 status=ok
// SIG undefined FUN_1484fdd6a(void)

void FUN_1484fdd6a(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
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
  int iVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  
  dVar1 = *(double *)(param_1 + 0x30);
  dVar19 = *(double *)(param_1 + 0x20);
  dVar2 = *(double *)(param_1 + 0x28);
  dVar3 = *(double *)(param_1 + 0x38);
  dVar4 = param_2[2];
  dVar5 = *param_2;
  dVar6 = param_2[1];
  dVar7 = param_2[3];
  dVar8 = param_2[4];
  dVar9 = param_2[5];
  dVar10 = *(double *)(param_1 + 0x40);
  dVar11 = *(double *)(param_1 + 0x48);
  dVar12 = *(double *)(param_1 + 0x50);
  dVar13 = *(double *)(param_1 + 0x58);
  dVar14 = *(double *)(param_1 + 0x60);
  dVar15 = *(double *)(param_1 + 0x68);
  iVar16 = *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x78) = iVar16 + 1U;
  if (*(uint *)(param_1 + 0x7c) < iVar16 + 1U) {
    FUN_14489624a((longlong *)(param_1 + 0x70),iVar16);
  }
  dVar18 = ((dVar1 * dVar3 - dVar4) * dVar1 +
           (dVar19 * dVar3 - dVar5) * dVar19 + (dVar3 * dVar2 - dVar6) * dVar2) /
           (dVar1 * dVar9 + dVar19 * dVar7 + dVar2 * dVar8);
  dVar4 = (dVar9 * dVar18 + dVar4) - dVar1 * dVar3;
  dVar1 = (dVar7 * dVar18 + dVar5) - dVar19 * dVar3;
  dVar19 = (dVar18 * dVar8 + dVar6) - dVar3 * dVar2;
  lVar17 = *(longlong *)(param_1 + 0x70);
  *(double *)(lVar17 + (longlong)iVar16 * 0x10) =
       (double)(float)(dVar4 * dVar12 + dVar1 * dVar10 + dVar11 * dVar19);
  *(double *)(lVar17 + 8 + (longlong)iVar16 * 0x10) =
       (double)(float)(dVar15 * dVar4 + dVar13 * dVar1 + dVar14 * dVar19);
  return;
}



// FUNCTION 1484fdfd2 FUN_1484fdfd2 body=568 status=ok
// SIG undefined FUN_1484fdfd2(void)

void FUN_1484fdfd2(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    dVar7 = param_1[4];
    dVar8 = param_1[5];
    dVar9 = param_1[6];
    dVar6 = param_1[7];
    dVar5 = (dVar9 * param_3[2] + dVar7 * *param_3 + dVar8 * param_3[1]) - dVar6;
    dVar3 = param_3[2] - dVar9 * dVar5;
    dVar4 = param_3[1] - dVar8 * dVar5;
    dVar5 = *param_3 - dVar5 * dVar7;
    dVar9 = dVar9 * dVar6;
    dVar8 = dVar8 * dVar6;
    dVar7 = dVar7 * dVar6;
  }
  else {
    dVar3 = param_1[2];
    dVar5 = *param_1;
    dVar4 = param_1[1];
    dVar6 = param_1[6];
    dVar1 = param_1[5];
    dVar2 = param_1[4];
    dVar7 = param_1[7];
    dVar9 = dVar6 * dVar7;
    dVar8 = dVar1 * dVar7;
    dVar7 = dVar7 * dVar2;
    dVar6 = ((dVar9 - dVar3) * dVar6 + (dVar7 - dVar5) * dVar2 + (dVar8 - dVar4) * dVar1) /
            (dVar6 * (param_3[2] - dVar3) +
            dVar2 * (*param_3 - dVar5) + dVar1 * (param_3[1] - dVar4));
    dVar3 = (param_3[2] - dVar3) * dVar6 + dVar3;
    dVar4 = (param_3[1] - dVar4) * dVar6 + dVar4;
    dVar5 = dVar6 * (*param_3 - dVar5) + dVar5;
  }
  dVar6 = param_1[0xc];
  dVar1 = param_1[0xb];
  dVar2 = param_1[0xd];
  *param_2 = (double)(float)(param_1[10] * (dVar3 - dVar9) +
                            param_1[8] * (dVar5 - dVar7) + param_1[9] * (dVar4 - dVar8));
  param_2[1] = (double)(float)((dVar3 - dVar9) * dVar2 +
                              (dVar5 - dVar7) * dVar1 + (dVar4 - dVar8) * dVar6);
  return;
}



// FUNCTION 1484fe20a FUN_1484fe20a body=262 status=ok
// SIG undefined FUN_1484fe20a(void)

void FUN_1484fe20a(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_1484445fc();
  plVar1 = (longlong *)FUN_14841014b(param_1);
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar1);
  }
  *(longlong **)(param_1 + 0xb8) = plVar1;
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1 + 0x120);
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x358))
            (*(longlong **)(param_1 + 0xb8),param_1 + 0x30);
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar1 + 0x2e8))(plVar1,*(undefined8 *)(param_1 + 0xb8),param_1);
  uVar2 = FUN_1409ffe1d();
  plVar1 = (longlong *)FUN_1484101e0(uVar2);
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar1);
  }
  *(longlong **)(param_1 + 0xc0) = plVar1;
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1 + 0x120);
  (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x300))
            (*(longlong **)(param_1 + 0xc0),param_1 + 0x38);
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar1 + 0x2e8))(plVar1,*(undefined8 *)(param_1 + 0xc0),param_1);
  *(undefined1 *)(param_1 + 0x124) = 1;
  return;
}



// FUNCTION 1484fe310 FUN_1484fe310 body=99 status=ok
// SIG undefined FUN_1484fe310(void)

void FUN_1484fe310(longlong param_1,char param_2)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x125) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x126);
    if (bVar1 != 1 || param_2 != '\0') goto LAB_1484fe351;
  }
  else {
    if (param_2 != '\0') goto LAB_1484fe351;
    bVar1 = *(byte *)(param_1 + 0x126);
  }
  *(undefined1 *)(param_1 + 0x125) = 0;
  if ((bVar1 & 1) == 0) {
    FUN_148518bae(param_1 + 0x70,param_1 + 0x150,1);
  }
  else {
    *(undefined1 *)(param_1 + 0x126) = 0;
  }
LAB_1484fe351:
  *(char *)(param_1 + 0x124) = param_2;
  return;
}



// FUNCTION 1484fe3fa FUN_1484fe3fa body=475 status=ok
// SIG undefined FUN_1484fe3fa(void)

void FUN_1484fe3fa(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8 [14];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_2 + 6) == '\0') {
    *(undefined1 *)(param_1 + 0xf5) = 0;
  }
  else {
    if (*(char *)(param_1 + 0xf6) == '\x01') {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x3c);
      uVar2 = *(undefined4 *)(param_2 + 8);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x44);
      *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 7);
      *(undefined4 *)(param_1 + 0x10c) = uVar1;
      *(undefined4 *)(param_1 + 0x110) = uVar2;
      *(undefined4 *)(param_1 + 0x114) = uVar3;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_d8);
    }
    uVar4 = *(uint *)(param_1 + 0x104);
    iVar9 = 0;
    if ((int)uVar4 < 0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      FUN_148518a46(param_1 + 0xf8);
      iVar9 = *(int *)(param_1 + 0x100);
      uVar4 = *(uint *)(param_1 + 0x104);
    }
    *(uint *)(param_1 + 0x100) = iVar9 + 1U;
    if (uVar4 < iVar9 + 1U) {
      FUN_148518a76(param_1 + 0xf8,iVar9);
    }
    puVar7 = param_2;
    puVar8 = (undefined8 *)((longlong)iVar9 * 0x48 + *(longlong *)(param_1 + 0xf8));
    for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x3c);
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 7);
    *(undefined4 *)(param_1 + 0x10c) = uVar1;
    *(undefined4 *)(param_1 + 0x110) = uVar2;
    *(undefined4 *)(param_1 + 0x114) = uVar3;
    plVar5 = (longlong *)FUN_148444614(param_1 + -0x30);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2c8))(plVar5);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x378))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5,param_1 + 0xa0);
    FUN_1484fda6c(local_b8,param_1 + 0xa0);
    puVar7 = (undefined8 *)(param_1 + 0x120);
    puVar8 = local_b8;
    puVar10 = puVar7;
    for (lVar6 = 0xe; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    if (puVar7 == local_b8) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 400) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 400) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x198) = local_40;
      *(undefined4 *)(param_1 + 0x19c) = local_3c;
    }
    FUN_1484fdd6a(puVar7,param_2);
    if (*(char *)(param_1 + 0x80) == '\x01') {
      FUN_1447f69b6(param_1 + 0x10);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484fe5d6 FUN_1484fe5d6 body=260 status=ok
// SIG undefined FUN_1484fe5d6(void)

void FUN_1484fe5d6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  double dVar8;
  
  if (*(char *)(param_2 + 6) == '\x01') {
    if (*(char *)(param_1 + 0xf6) == '\x01') {
      uVar3 = param_2[8];
      *(undefined8 *)(param_1 + 0x108) = param_2[7];
      *(undefined8 *)(param_1 + 0x110) = uVar3;
    }
    else {
      *(undefined1 *)(param_1 + 0xf5) = 1;
      uVar3 = param_2[8];
      *(undefined8 *)(param_1 + 0x108) = param_2[7];
      *(undefined8 *)(param_1 + 0x110) = uVar3;
      if (*(char *)(param_1 + 0x80) == '\x01') {
        iVar1 = *(int *)(param_1 + 0x100);
        lVar4 = *(longlong *)(param_1 + 0xf8);
        dVar2 = *(double *)(lVar4 + 0x38 + (longlong)(iVar1 + -1) * 0x48) - (double)param_2[7];
        dVar8 = *(double *)(lVar4 + 0x40 + (longlong)(iVar1 + -1) * 0x48) - (double)param_2[8];
        if (*(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x58) <
            (float)(dVar8 * dVar8 + dVar2 * dVar2)) {
          *(uint *)(param_1 + 0x100) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
            FUN_148518a76((longlong *)(param_1 + 0xf8),iVar1);
            lVar4 = *(longlong *)(param_1 + 0xf8);
          }
          puVar6 = param_2;
          puVar7 = (undefined8 *)(lVar4 + (longlong)iVar1 * 0x48);
          for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          FUN_1484fdd6a(param_1 + 0x120,param_2);
        }
        FUN_148518b0a(param_1 + 0x28,param_1 + 0x120);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1484fe6da FUN_1484fe6da body=380 status=ok
// SIG undefined FUN_1484fe6da(void)

void FUN_1484fe6da(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  
  if (*(char *)(param_1 + 0xf6) == '\x01') {
    lVar3 = *(longlong *)(param_1 + 0xf8);
    dVar7 = *(double *)(lVar3 + 0x38) - (double)param_2[7];
    dVar8 = *(double *)(lVar3 + 0x40) - (double)param_2[8];
    fVar6 = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x58);
    if (fVar6 * fVar6 <= (float)(dVar8 * dVar8 + dVar7 * dVar7)) {
      iVar1 = *(int *)(param_1 + 0x100);
      *(uint *)(param_1 + 0x100) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
        FUN_148518a76((longlong *)(param_1 + 0xf8),iVar1);
        lVar3 = *(longlong *)(param_1 + 0xf8);
      }
      puVar4 = param_2;
      puVar5 = (undefined8 *)(lVar3 + (longlong)iVar1 * 0x48);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_1484fdd6a(param_1 + 0x120,param_2);
      FUN_148518b0a(param_1 + 0x28,param_1 + 0x120);
      return;
    }
    FUN_1484fdd6a(param_1 + 0x120);
    FUN_148518bae(param_1 + 0x40,param_1 + 0x120,0);
    *(undefined1 *)(param_1 + 0xf6) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xf5) = 0;
    if (((*(int *)(param_1 + 0x100) == 1) && (*(char *)(param_1 + 0x81) == '\x01')) &&
       (dVar7 = *(double *)(*(longlong *)(param_1 + 0xf8) + 0x38) - (double)param_2[7],
       dVar8 = *(double *)(*(longlong *)(param_1 + 0xf8) + 0x40) - (double)param_2[8],
       (float)(dVar8 * dVar8 + dVar7 * dVar7) <
       *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x58))) {
      *(undefined1 *)(param_1 + 0xf6) = 1;
      return;
    }
    if (*(char *)(param_1 + 0x80) == '\x01') {
      FUN_148518bae(param_1 + 0x40,param_1 + 0x120,0);
      return;
    }
  }
  return;
}



// FUNCTION 1484fe856 FUN_1484fe856 body=456 status=ok
// SIG undefined FUN_1484fe856(void)

undefined1 * FUN_1484fe856(longlong param_1,undefined1 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0xee) != '\x01') {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
    param_2[0x28] = 0;
    *(undefined8 *)(param_2 + 0x2c) = 0;
    *(undefined8 *)(param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 0x3c) = 0;
    if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  plVar5 = (longlong *)FUN_148444614(param_1 + -0x38);
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2c8))(plVar5);
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x378))(plVar5);
  uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,&local_78);
  if ((local_78 == *(double *)(param_1 + 0x98)) &&
     (!NAN(local_78) && !NAN(*(double *)(param_1 + 0x98)))) {
    if ((local_70 == *(double *)(param_1 + 0xa0)) &&
       (!NAN(local_70) && !NAN(*(double *)(param_1 + 0xa0)))) {
      if ((local_68 == *(double *)(param_1 + 0xa8)) &&
         (!NAN(local_68) && !NAN(*(double *)(param_1 + 0xa8)))) {
        auVar1._8_8_ = -(ulonglong)(*(double *)(param_1 + 0xc0) != dStack_50);
        auVar1._0_8_ = -(ulonglong)(*(double *)(param_1 + 0xb8) != local_58);
        iVar4 = movmskpd(uVar3,auVar1);
        auVar2._8_8_ = -(ulonglong)(*(double *)(param_1 + 0xd0) != dStack_40);
        auVar2._0_8_ = -(ulonglong)(*(double *)(param_1 + 200) != local_48);
        uVar6 = movmskpd((int)plVar5,auVar2);
        if ((uVar6 & 0x3fffffff) == 0 && iVar4 == 0) {
          *param_2 = 1;
          *(undefined8 *)(param_2 + 8) = 0;
          *(undefined8 *)(param_2 + 0x10) = 0;
          *(undefined8 *)(param_2 + 0x18) = 0;
          goto LAB_1484fe8fe;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0xed) = 0;
  if (*(char *)(param_1 + 0xee) == '\x01') {
    *(undefined1 *)(param_1 + 0xee) = 0;
  }
  else {
    FUN_148518bae(param_1 + 0x38,param_1 + 0x118,1);
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
LAB_1484fe8fe:
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 1484fea7e FUN_1484fea7e body=631 status=ok
// SIG undefined FUN_1484fea7e(void)

void FUN_1484fea7e(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_138 [40];
  undefined **local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if ((uVar4 & 2) == 0) goto LAB_1484fead2;
  if (*(char *)(param_1 + 0x125) == '\0') {
    if ((*(byte *)(param_1 + 0x126) & 1) == 0) goto LAB_1484fead2;
LAB_1484feb32:
    lVar5 = 0xa0;
    if (*(char *)(param_1 + 0x127) == '\0') goto LAB_1484feb40;
  }
  else {
    if ((*(byte *)(param_1 + 0x126) & 1) != 0) goto LAB_1484feb32;
LAB_1484feb40:
    lVar5 = 0x90;
  }
  local_98 = *(undefined8 *)(param_1 + lVar5);
  uStack_90 = ((undefined8 *)(param_1 + lVar5))[1];
  dVar2 = 1.0;
  if (*(char *)(param_2 + 0xa0) == '\0') {
    dVar2 = (double)*(float *)(param_2 + 0xb0);
  }
  iVar1 = *(int *)(param_1 + 0x130);
  dVar2 = 1.0 / dVar2;
  dVar3 = *(double *)(*(longlong *)(param_1 + 0x128) + 0x40) * dVar2;
  dVar6 = *(double *)(*(longlong *)(param_1 + 0x128) + 0x38) * dVar2;
  if (1 < (longlong)iVar1) {
    lVar5 = 0;
    local_108 = dVar6;
    local_100 = dVar3;
    do {
      dVar3 = *(double *)(*(longlong *)(param_1 + 0x128) + 0x88 + lVar5) * dVar2;
      dVar6 = *(double *)(*(longlong *)(param_1 + 0x128) + 0x80 + lVar5) * dVar2;
      local_e8 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_110 = &PTR_FUN_14a312d50;
      local_c0 = 0;
      local_a8 = 0;
      local_a0 = *(undefined4 *)(param_1 + 0x8c);
      local_e0 = (undefined4)local_98;
      uStack_dc = local_98._4_4_;
      uStack_d8 = (undefined4)uStack_90;
      uStack_d4 = uStack_90._4_4_;
      local_d0 = local_108;
      local_c8 = local_100;
      local_b8 = dVar6;
      local_b0 = dVar3;
      FUN_140505094(param_2,&local_110);
      lVar5 = lVar5 + 0x48;
      local_108 = dVar6;
      local_100 = dVar3;
    } while ((longlong)iVar1 * 0x48 + -0x48 != lVar5);
  }
  local_b0 = *(double *)(param_1 + 0x140) * dVar2;
  local_b8 = dVar2 * *(double *)(param_1 + 0x138);
  local_e8 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_110 = &PTR_FUN_14a312d50;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = *(undefined4 *)(param_1 + 0x8c);
  local_e0 = (undefined4)local_98;
  uStack_dc = local_98._4_4_;
  uStack_d8 = (undefined4)uStack_90;
  uStack_d4 = uStack_90._4_4_;
  local_108 = dVar6;
  local_100 = dVar3;
  local_d0 = dVar6;
  local_c8 = dVar3;
  FUN_140505094(param_2);
LAB_1484fead2:
  if ((local_80 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484fecf6 FUN_1484fecf6 body=1870 status=ok
// SIG undefined FUN_1484fecf6(void)

undefined8 FUN_1484fecf6(double *****param_1)

{
  double ****ppppdVar1;
  double dVar2;
  byte *pbVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  double ****ppppdVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double ***pppdVar18;
  double ***pppdVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double ***pppdVar24;
  double ***pppdVar25;
  double dVar26;
  double ***pppdVar27;
  double ***pppdVar28;
  undefined1 auStack_1d8 [40];
  undefined4 local_1b0;
  double *local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  ulonglong local_180;
  double ****local_178;
  undefined8 uStack_170;
  byte *local_168;
  undefined4 *local_160;
  double **local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double local_140;
  undefined8 local_138;
  undefined8 local_130;
  double local_118;
  double local_110;
  undefined8 local_108;
  int local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  byte local_dd;
  int local_dc;
  double **local_d8;
  double ****ppppdStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar10 = (longlong)*(int *)(param_1 + 1);
  lVar11 = lVar10 + -1;
  ppppdVar1 = *param_1;
  uVar7 = 1;
  if (SQRT(((double)ppppdVar1[lVar11 * 2] - (double)*ppppdVar1) *
           ((double)ppppdVar1[lVar11 * 2] - (double)*ppppdVar1) +
           ((double)ppppdVar1[lVar11 * 2 + 1] - (double)ppppdVar1[1]) *
           ((double)ppppdVar1[lVar11 * 2 + 1] - (double)ppppdVar1[1])) < 0.0001) goto LAB_1484fedb3;
  local_158 = (double **)&local_f8;
  local_f8 = (double **)0xffffffffffffffff;
  uStack_170 = (double ***)&local_dc;
  local_168 = &local_dd;
  local_dd = 0;
  ppppdStack_d0 = (double ****)&local_178;
  local_160 = &local_f0;
  local_1a8 = &local_1a0;
  local_1a0 = 0.0;
  local_198 = (double)((ulonglong)local_198 & 0xffffffff00000000);
  local_d8 = (double **)FUN_143b8749e;
  local_1b0 = 0;
  local_178 = (double ****)param_1;
  local_dc = *(int *)(param_1 + 1);
  FUN_1401f8d10(L"ParallelFor Task",lVar11,1);
  if ((local_dd & 1) == 0) {
    ppppdVar1 = *param_1;
    pppdVar18 = ppppdVar1[1];
    dVar23 = (double)pppdVar18 - (double)ppppdVar1[3];
    ppppdVar9 = (double ****)*ppppdVar1;
    dVar20 = (double)ppppdVar9 - (double)ppppdVar1[2];
    dVar22 = SQRT(dVar20 * dVar20 + dVar23 * dVar23);
    dVar2 = 0.0;
    if (0.0 < dVar22) {
      puVar12 = (undefined4 *)(dVar23 * (1.0 / dVar22));
    }
    else {
      puVar12 = (undefined4 *)0x0;
    }
    pbVar3 = (byte *)(-(ulonglong)(0.0 < dVar22) & (ulonglong)(dVar20 * (1.0 / dVar22)));
    dVar20 = (double)ppppdVar1[lVar11 * 2 + 1] - (double)ppppdVar1[lVar10 * 2 + -3];
    dVar23 = (double)ppppdVar1[lVar11 * 2] - (double)ppppdVar1[lVar10 * 2 + -4];
    dVar22 = SQRT(dVar23 * dVar23 + dVar20 * dVar20);
    dVar23 = (double)(-(ulonglong)(0.0 < dVar22) & (ulonglong)(dVar23 * (1.0 / dVar22)));
    if (0.0 < dVar22) {
      dVar2 = dVar20 * (1.0 / dVar22);
    }
    ppppdVar1 = ppppdVar1 + lVar11 * 2;
    local_158 = (double **)*ppppdVar1;
    local_d8 = (double **)*ppppdVar1;
    uStack_150 = *(undefined4 *)(ppppdVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)ppppdVar1 + 0xc);
    ppppdStack_d0 = (double ****)ppppdVar1[1];
    local_138 = 0x3e45798ee2308c3a;
    local_130 = 0x3e45798ee2308c3a;
    local_108 = 0;
    local_100 = 0;
    local_178 = ppppdVar9;
    uStack_170 = pppdVar18;
    local_168 = pbVar3;
    local_160 = puVar12;
    local_148 = dVar23;
    local_140 = dVar2;
    cVar5 = FUN_1484ff446();
    if (((cVar5 != '\0') && (local_108._4_4_ == 1)) && (local_100 == 1)) {
      if ((0.0 < local_118) && (0.0 < local_110)) {
        iVar6 = *(int *)(param_1 + 1);
        *(uint *)(param_1 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
          FUN_14489624a(param_1,iVar6);
        }
        ppppdVar1 = *param_1;
        ppppdVar1[(longlong)iVar6 * 2] =
             (double ***)(local_118 * (double)pbVar3 + (double)ppppdVar9);
        ppppdVar1[(longlong)iVar6 * 2 + 1] =
             (double ***)((double)puVar12 * local_118 + (double)pppdVar18);
        iVar6 = *(int *)(param_1 + 1);
        *(uint *)(param_1 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
          FUN_14489624a(param_1,iVar6);
        }
        ppppdVar1 = *param_1;
        ppppdVar1[(longlong)iVar6 * 2] = (double ***)ppppdVar9;
        ppppdVar1[(longlong)iVar6 * 2 + 1] = pppdVar18;
        goto LAB_1484fefb0;
      }
    }
    ppppdVar1 = *param_1;
    if ((longlong)*(int *)(param_1 + 1) == 0) {
      dVar20 = -INFINITY;
      dVar22 = dVar20;
    }
    else {
      ppppdVar9 = ppppdVar1;
      uVar14 = 0xffffffff;
      uVar16 = 0xffefffff;
      pppdVar18 = (double ***)0xffefffffffffffff;
      pppdVar24 = (double ***)0x7fefffffffffffff;
      pppdVar27 = (double ***)0x7fefffffffffffff;
      do {
        pppdVar25 = *ppppdVar9;
        pppdVar19 = ppppdVar9[1];
        pppdVar28 = pppdVar25;
        if ((double)pppdVar27 <= (double)pppdVar25) {
          pppdVar28 = pppdVar27;
        }
        uVar15 = (int)pppdVar25;
        uVar17 = (int)((ulonglong)pppdVar25 >> 0x20);
        if ((double)pppdVar25 <= (double)CONCAT44(uVar16,uVar14)) {
          uVar15 = uVar14;
          uVar17 = uVar16;
        }
        pppdVar25 = pppdVar19;
        if ((double)pppdVar24 <= (double)pppdVar19) {
          pppdVar25 = pppdVar24;
        }
        if ((double)pppdVar19 <= (double)pppdVar18) {
          pppdVar19 = pppdVar18;
        }
        ppppdVar9 = ppppdVar9 + 2;
        uVar14 = uVar15;
        uVar16 = uVar17;
        pppdVar18 = pppdVar19;
        pppdVar24 = pppdVar25;
        pppdVar27 = pppdVar28;
      } while (ppppdVar9 != ppppdVar1 + (longlong)*(int *)(param_1 + 1) * 2);
      dVar20 = (double)pppdVar19 - (double)pppdVar25;
      dVar22 = (double)CONCAT44(uVar17,uVar15) - (double)pppdVar28;
    }
    dVar21 = (double)puVar12 * 0.001 + (double)ppppdVar1[1];
    dVar26 = (double)pbVar3 * 0.001 + (double)*ppppdVar1;
    dVar20 = SQRT(dVar22 * dVar22 + dVar20 * dVar20);
    dVar20 = dVar20 + dVar20;
    local_188 = (double)puVar12 * dVar20 + dVar21;
    local_190 = (double)pbVar3 * dVar20 + dVar26;
    local_198 = (dVar21 + local_188) * 0.5;
    local_1a0 = (dVar26 + local_190) * 0.5;
    local_188 = local_188 - dVar21;
    local_190 = local_190 - dVar26;
    dVar22 = SQRT(local_190 * local_190 + local_188 * local_188);
    if (0.0 < dVar22) {
      local_190 = local_190 * (1.0 / dVar22);
      local_188 = local_188 * (1.0 / dVar22);
    }
    else {
      local_190 = 0.0;
      local_188 = 0.0;
    }
    local_180 = -(ulonglong)(0.0 < dVar22) & (ulonglong)(dVar22 * 0.5);
    cVar5 = FUN_143b840d6(param_1,&local_1a0,&local_f0,&local_f8);
    uVar7 = 1;
    if (cVar5 == '\0') {
      dVar22 = dVar2 * 0.001 + (double)(*param_1)[lVar11 * 2 + 1];
      dVar21 = dVar23 * 0.001 + (double)(*param_1)[lVar11 * 2];
      local_188 = dVar2 * dVar20 + dVar22;
      local_190 = dVar23 * dVar20 + dVar21;
      local_198 = (dVar22 + local_188) * 0.5;
      local_1a0 = (dVar21 + local_190) * 0.5;
      local_188 = local_188 - dVar22;
      local_190 = local_190 - dVar21;
      dVar20 = SQRT(local_190 * local_190 + local_188 * local_188);
      if (0.0 < dVar20) {
        local_190 = local_190 * (1.0 / dVar20);
        local_188 = local_188 * (1.0 / dVar20);
      }
      else {
        local_190 = 0.0;
        local_188 = 0.0;
      }
      local_180 = -(ulonglong)(0.0 < dVar20) & (ulonglong)(dVar20 * 0.5);
      uVar7 = FUN_143b840d6(param_1,&local_1a0,&local_f0,&local_f8);
    }
  }
  else {
    local_178 = (double ****)0x0;
    uStack_170 = (double ***)0x1;
    FUN_14489624a(&local_178,0);
    *(undefined4 *)local_178 = local_f0;
    *(undefined4 *)((longlong)local_178 + 4) = uStack_ec;
    *(undefined4 *)(local_178 + 1) = uStack_e8;
    *(undefined4 *)((longlong)local_178 + 0xc) = uStack_e4;
    if ((int)local_f8 <= local_f8._4_4_) {
      lVar11 = (longlong)(int)local_f8 + -1;
      lVar10 = (longlong)(int)local_f8 << 4;
      iVar6 = local_f8._4_4_;
      do {
        uVar4 = (ulonglong)uStack_170;
        puVar12 = (undefined4 *)((longlong)*param_1 + lVar10);
        lVar13 = (longlong)(int)uStack_170;
        uVar8 = (int)uStack_170 + 1;
        uStack_170 = (double ***)CONCAT44(uStack_170._4_4_,uVar8);
        if (uStack_170._4_4_ < uVar8) {
          FUN_14489624a(&local_178,uVar4 & 0xffffffff);
          iVar6 = local_f8._4_4_;
        }
        uVar14 = puVar12[1];
        uVar16 = puVar12[2];
        uVar15 = puVar12[3];
        ppppdVar1 = local_178 + lVar13 * 2;
        *(undefined4 *)ppppdVar1 = *puVar12;
        *(undefined4 *)((longlong)ppppdVar1 + 4) = uVar14;
        *(undefined4 *)(ppppdVar1 + 1) = uVar16;
        *(undefined4 *)((longlong)ppppdVar1 + 0xc) = uVar15;
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 0x10;
      } while (lVar11 < iVar6);
    }
    uVar4 = (ulonglong)uStack_170;
    lVar11 = (longlong)(int)uStack_170;
    uVar8 = (int)uStack_170 + 1;
    uStack_170 = (double ***)CONCAT44(uStack_170._4_4_,uVar8);
    if (uStack_170._4_4_ < uVar8) {
      FUN_14489624a(&local_178,uVar4 & 0xffffffff);
    }
    ppppdVar1 = local_178 + lVar11 * 2;
    *(undefined4 *)ppppdVar1 = local_f0;
    *(undefined4 *)((longlong)ppppdVar1 + 4) = uStack_ec;
    *(undefined4 *)(ppppdVar1 + 1) = uStack_e8;
    *(undefined4 *)((longlong)ppppdVar1 + 0xc) = uStack_e4;
    if (&local_178 == param_1) {
      if (local_178 != (double ****)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != (double ****)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_178;
      *(int *)(param_1 + 1) = (int)uStack_170;
      *(uint *)((longlong)param_1 + 0xc) = uStack_170._4_4_;
    }
LAB_1484fefb0:
    uVar7 = 1;
  }
LAB_1484fedb3:
  if ((local_c0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ff446 FUN_1484ff446 body=397 status=ok
// SIG undefined FUN_1484ff446(void)

ulonglong FUN_1484ff446(double *param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double *local_38;
  double local_28;
  double dStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)((longlong)param_1 + 0x74) == 0) {
    dVar3 = param_1[2] * param_1[2] + param_1[3] * param_1[3] + -1.0;
    uVar2 = -(ulonglong)(-dVar3 <= dVar3);
    if ((double)(~uVar2 & (ulonglong)-dVar3 | (ulonglong)dVar3 & uVar2) < 1e-08) {
      dVar3 = param_1[6] * param_1[6] + param_1[7] * param_1[7] + -1.0;
      uVar2 = -(ulonglong)(-dVar3 <= dVar3);
      if ((double)(~uVar2 & (ulonglong)-dVar3 | (ulonglong)dVar3 & uVar2) < 1e-08) {
        local_38 = &local_28;
        local_28 = DAT_14c8463f0;
        dStack_20 = DAT_14c8463f8;
        local_48 = *(undefined4 *)(param_1 + 8);
        uStack_44 = *(undefined4 *)((longlong)param_1 + 0x44);
        uStack_40 = *(undefined4 *)(param_1 + 9);
        uStack_3c = *(undefined4 *)((longlong)param_1 + 0x4c);
        iVar1 = FUN_14850c6ca(param_1,param_1 + 2,param_1 + 4,param_1 + 6);
        *(int *)(param_1 + 0xf) = iVar1;
        if (iVar1 == 3) {
          *(undefined4 *)(param_1 + 0xe) = 0x7fffffff;
        }
        else if (iVar1 == 1) {
          *(undefined4 *)(param_1 + 0xe) = 1;
          param_1[10] = param_1[2] * local_28 + *param_1;
          param_1[0xb] = param_1[3] * local_28 + param_1[1];
          param_1[0xc] = local_28;
          param_1[0xd] = dStack_20;
        }
        else {
          *(undefined4 *)(param_1 + 0xe) = 0;
        }
        uVar2 = (ulonglong)(iVar1 != 0);
        *(uint *)((longlong)param_1 + 0x74) = 2 - (uint)(iVar1 != 0);
        goto LAB_1484ff467;
      }
    }
    *(undefined8 *)((longlong)param_1 + 0x74) = 3;
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(int *)((longlong)param_1 + 0x74) == 1);
  }
LAB_1484ff467:
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ff5e8 FUN_1484ff5e8 body=418 status=ok
// SIG undefined FUN_1484ff5e8(void)

void FUN_1484ff5e8(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [32];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined1 *)(param_1 + 0x24) = 1;
  dVar1 = param_1[6];
  dVar8 = param_1[4];
  dVar2 = param_1[5];
  dVar6 = dVar1 - dVar8 * 0.0;
  dVar7 = dVar8 * 0.0 - dVar2;
  dVar5 = dVar2 * 0.0 + dVar1 * -0.0;
  dVar7 = dVar7 + dVar7;
  dVar6 = dVar6 + dVar6;
  dVar5 = dVar5 + dVar5;
  dVar3 = param_1[7];
  dVar4 = (dVar8 * dVar6 - dVar5 * dVar2) + dVar3 * dVar7 + 0.0;
  dVar8 = (dVar1 * dVar5 - dVar7 * dVar8) + dVar3 * dVar6 + 0.0;
  dVar1 = (dVar2 * dVar7 - dVar6 * dVar1) + dVar5 * dVar3 + 1.0;
  param_1[0x1c] = dVar1;
  param_1[0x1d] = dVar8;
  param_1[0x1e] = dVar4;
  param_1[0x1f] =
       (param_1[2] + dVar4) * dVar4 + (*param_1 + dVar1) * dVar1 + (param_1[1] + dVar8) * dVar8;
  FUN_1484ff78c(SUB84(dVar4,0),local_a0);
  *(undefined4 *)(param_1 + 0x22) = local_70;
  *(undefined4 *)((longlong)param_1 + 0x114) = uStack_6c;
  *(undefined4 *)(param_1 + 0x23) = uStack_68;
  *(undefined4 *)((longlong)param_1 + 0x11c) = uStack_64;
  *(undefined4 *)(param_1 + 0x20) = local_80;
  *(undefined4 *)((longlong)param_1 + 0x104) = uStack_7c;
  *(undefined4 *)(param_1 + 0x21) = uStack_78;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uStack_74;
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ff78c FUN_1484ff78c body=862 status=ok
// SIG undefined FUN_1484ff78c(void)

double * FUN_1484ff78c(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_138 [40];
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  param_2[4] = 1.79769313486232e+308;
  param_2[5] = 1.79769313486232e+308;
  param_2[6] = -1.79769313486232e+308;
  param_2[7] = -1.79769313486232e+308;
  dVar8 = *(double *)(param_1 + 0xe0);
  dVar9 = *(double *)(param_1 + 0xe8);
  dVar1 = *(double *)(param_1 + 0xf8);
  param_2[2] = *(double *)(param_1 + 0xf0);
  param_2[3] = dVar1;
  *param_2 = dVar8;
  param_2[1] = dVar9;
  dVar10 = param_2[3] + 0.0;
  param_2[3] = dVar10;
  dVar8 = param_2[2];
  dVar9 = *param_2;
  dVar1 = param_2[1];
  dVar2 = ((dVar10 * dVar8 - *(double *)(param_1 + 0x60)) * dVar8 +
          (dVar10 * dVar9 - *(double *)(param_1 + 0x50)) * dVar9 +
          (dVar10 * dVar1 - *(double *)(param_1 + 0x58)) * dVar1) /
          (*(double *)(param_1 + 0x78) * dVar8 +
          *(double *)(param_1 + 0x68) * dVar9 + dVar1 * *(double *)(param_1 + 0x70));
  local_c8 = *(double *)(param_1 + 0x78) * dVar2 + *(double *)(param_1 + 0x60);
  local_d0 = *(double *)(param_1 + 0x70) * dVar2 + *(double *)(param_1 + 0x58);
  local_d8 = dVar2 * *(double *)(param_1 + 0x68) + *(double *)(param_1 + 0x50);
  dVar8 = ((dVar10 * dVar8 - *(double *)(param_1 + 0xa8)) * dVar8 +
          (dVar10 * dVar9 - *(double *)(param_1 + 0x98)) * dVar9 +
          (dVar10 * dVar1 - *(double *)(param_1 + 0xa0)) * dVar1) /
          (dVar8 * *(double *)(param_1 + 0xc0) +
          dVar9 * *(double *)(param_1 + 0xb0) + dVar1 * *(double *)(param_1 + 0xb8));
  local_e0 = *(double *)(param_1 + 0xc0) * dVar8 + *(double *)(param_1 + 0xa8);
  local_e8 = *(double *)(param_1 + 0xb8) * dVar8 + *(double *)(param_1 + 0xa0);
  local_f0 = dVar8 * *(double *)(param_1 + 0xb0) + *(double *)(param_1 + 0x98);
  FUN_1484ffaec(SUB84(local_f0,0),&local_100,param_2);
  FUN_1484ffaec(param_1,&local_110,param_2,&local_f0);
  uVar4 = (undefined4)((ulonglong)local_100 >> 0x20);
  uVar3 = 0xffffffff;
  uVar5 = 0x7fefffff;
  if (local_100 < 1.79769313486232e+308) {
    param_2[4] = local_100;
    uVar3 = SUB84(local_100,0);
    uVar5 = uVar4;
  }
  uVar6 = 0xffffffff;
  uVar7 = 0xffefffff;
  if (-1.79769313486232e+308 < local_100) {
    param_2[6] = local_100;
    uVar6 = SUB84(local_100,0);
    uVar7 = uVar4;
  }
  dVar8 = 1.79769313486232e+308;
  if (local_f8 < 1.79769313486232e+308) {
    param_2[5] = local_f8;
    dVar8 = local_f8;
  }
  dVar9 = -1.79769313486232e+308;
  if (-1.79769313486232e+308 < local_f8) {
    param_2[7] = local_f8;
    dVar9 = local_f8;
  }
  if (local_110 <= (double)CONCAT44(uVar5,uVar3) && (double)CONCAT44(uVar5,uVar3) != local_110) {
    param_2[4] = local_110;
  }
  if ((double)CONCAT44(uVar7,uVar6) <= local_110 && local_110 != (double)CONCAT44(uVar7,uVar6)) {
    param_2[6] = local_110;
  }
  if (local_108 < dVar8) {
    param_2[5] = local_108;
  }
  if (dVar9 < local_108) {
    param_2[7] = local_108;
  }
  if ((local_c0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ffaec FUN_1484ffaec body=630 status=ok
// SIG undefined FUN_1484ffaec(void)

double * FUN_1484ffaec(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
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
  
  dVar1 = *(double *)(param_1 + 0x30);
  dVar2 = *(double *)(param_1 + 0x20);
  dVar3 = *(double *)(param_1 + 0x28);
  dVar12 = dVar2 + dVar3 * -0.0;
  dVar11 = dVar1 * 0.0;
  dVar6 = dVar2 * -0.0 + dVar11;
  dVar9 = dVar3 * 0.0 - dVar1;
  dVar12 = dVar12 + dVar12;
  dVar6 = dVar6 + dVar6;
  dVar9 = dVar9 + dVar9;
  dVar4 = *(double *)(param_1 + 0x38);
  dVar5 = param_3[3];
  dVar7 = param_4[2] - param_3[2] * dVar5;
  dVar8 = *param_4 - dVar5 * *param_3;
  dVar10 = param_4[1] - param_3[1] * dVar5;
  *param_2 = ((dVar2 * dVar6 - dVar9 * dVar3) + dVar4 * dVar12 + 0.0) * dVar7 +
             ((dVar3 * dVar12 - dVar6 * dVar1) + dVar9 * dVar4 + 0.0) * dVar8 +
             ((dVar1 * dVar9 - dVar12 * dVar2) + dVar4 * dVar6 + 1.0) * dVar10;
  dVar6 = dVar2 * 0.0 + dVar3 * -0.0;
  dVar6 = dVar6 + dVar6;
  dVar12 = (dVar11 - dVar2) + (dVar11 - dVar2);
  dVar5 = (dVar3 - dVar11) + (dVar3 - dVar11);
  param_2[1] = ((dVar2 * dVar12 - dVar5 * dVar3) + dVar4 * dVar6 + 1.0) * dVar7 +
               ((dVar3 * dVar6 - dVar12 * dVar1) + dVar5 * dVar4 + 0.0) * dVar8 +
               ((dVar1 * dVar5 - dVar6 * dVar2) + dVar4 * dVar12 + 0.0) * dVar10;
  return param_2;
}



// FUNCTION 1484ffd62 FUN_1484ffd62 body=1616 status=ok
// SIG undefined FUN_1484ffd62(void)

undefined8 FUN_1484ffd62(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_138 [40];
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(char *)((longlong)param_1 + 0x4c) == '\x01') {
    dVar9 = param_1[0x1e];
    dVar1 = param_1[0x1c];
    dVar2 = param_1[0x1d];
    dVar6 = (dVar9 * param_2[2] + dVar1 * *param_2 + dVar2 * param_2[1]) - param_1[0x1f];
    local_98 = param_2[2] - dVar9 * dVar6;
    dStack_a0 = param_2[1] - dVar2 * dVar6;
    local_a8 = *param_2 - dVar6 * dVar1;
    dVar6 = (dVar9 * param_3[2] + dVar1 * *param_3 + dVar2 * param_3[1]) - param_1[0x1f];
    local_b8 = param_3[2] - dVar9 * dVar6;
    dStack_c0 = param_3[1] - dVar2 * dVar6;
    local_c8 = *param_3 - dVar6 * dVar1;
  }
  else {
    local_98 = param_2[2];
    local_a8 = *param_2;
    dStack_a0 = param_2[1];
    local_c8 = *param_3;
    dStack_c0 = param_3[1];
    local_b8 = param_3[2];
    iVar7 = FUN_1485003b4(param_1 + 0x1c,&local_a8,&local_c8);
    if (iVar7 == 0) {
      uVar8 = 0;
      goto LAB_148500005;
    }
    if (iVar7 == 2) {
      dVar9 = param_1[0x1f];
      dVar1 = param_1[0x1e];
      dVar2 = param_1[0x1d];
      dVar6 = param_1[0x1c];
      dVar3 = param_1[2];
      dVar4 = *param_1;
      dVar5 = param_1[1];
      dVar9 = ((dVar9 * dVar1 - dVar3) * dVar1 +
              (dVar9 * dVar6 - dVar4) * dVar6 + (dVar9 * dVar2 - dVar5) * dVar2) /
              (dVar1 * (local_98 - dVar3) + dVar6 * (local_a8 - dVar4) + dVar2 * (dStack_a0 - dVar5)
              );
      local_98 = (local_98 - dVar3) * dVar9 + dVar3;
      dStack_a0 = (dStack_a0 - dVar5) * dVar9 + dVar5;
      local_a8 = dVar9 * (local_a8 - dVar4) + dVar4;
    }
    else if (iVar7 == 1) {
      dVar9 = param_1[0x1f];
      dVar1 = param_1[0x1e];
      dVar2 = param_1[0x1d];
      dVar6 = param_1[0x1c];
      dVar3 = param_1[2];
      dVar4 = *param_1;
      dVar5 = param_1[1];
      dVar9 = ((dVar9 * dVar1 - dVar3) * dVar1 +
              (dVar9 * dVar6 - dVar4) * dVar6 + (dVar9 * dVar2 - dVar5) * dVar2) /
              (dVar1 * (local_b8 - dVar3) + dVar6 * (local_c8 - dVar4) + dVar2 * (dStack_c0 - dVar5)
              );
      local_b8 = (local_b8 - dVar3) * dVar9 + dVar3;
      dStack_c0 = (dStack_c0 - dVar5) * dVar9 + dVar5;
      local_c8 = dVar9 * (local_c8 - dVar4) + dVar4;
    }
    else {
      dVar9 = param_1[0x1f];
      dVar1 = param_1[0x1e];
      dVar2 = param_1[0x1d];
      dVar6 = param_1[0x1c];
      dVar3 = param_1[2];
      dVar4 = *param_1;
      dVar5 = param_1[1];
      dVar10 = (dVar9 * dVar1 - dVar3) * dVar1 +
               (dVar9 * dVar6 - dVar4) * dVar6 + (dVar9 * dVar2 - dVar5) * dVar2;
      dVar9 = dVar10 / ((local_98 - dVar3) * dVar1 +
                       (local_a8 - dVar4) * dVar6 + dVar2 * (dStack_a0 - dVar5));
      local_98 = (local_98 - dVar3) * dVar9 + dVar3;
      dStack_a0 = (dStack_a0 - dVar5) * dVar9 + dVar5;
      local_a8 = dVar9 * (local_a8 - dVar4) + dVar4;
      dVar10 = dVar10 / (dVar1 * (local_b8 - dVar3) +
                        dVar6 * (local_c8 - dVar4) + dVar2 * (dStack_c0 - dVar5));
      local_b8 = (local_b8 - dVar3) * dVar10 + dVar3;
      dStack_c0 = (dStack_c0 - dVar5) * dVar10 + dVar5;
      local_c8 = dVar10 * (local_c8 - dVar4) + dVar4;
    }
  }
  FUN_1484ffaec(param_1,&local_d8,param_1 + 0x1c,&local_a8);
  FUN_1484ffaec(param_1,&local_e8,param_1 + 0x1c,&local_c8);
  local_108 = (local_d0 + local_e0) * 0.5;
  local_110 = (local_d8 + local_e8) * 0.5;
  local_e0 = local_e0 - local_d0;
  local_e8 = local_e8 - local_d8;
  dVar9 = SQRT(local_e8 * local_e8 + local_e0 * local_e0);
  if (0.0 < dVar9) {
    local_100 = local_e8 * (1.0 / dVar9);
    local_f8 = local_e0 * (1.0 / dVar9);
  }
  else {
    local_100 = 0.0;
    local_f8 = 0.0;
  }
  local_f0 = -(ulonglong)(0.0 < dVar9) & (ulonglong)(dVar9 * 0.5);
  uVar8 = FUN_146c68331(&local_110,param_1 + 0x20);
LAB_148500005:
  if ((local_90 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485003b4 FUN_1485003b4 body=696 status=ok
// SIG undefined FUN_1485003b4(void)

undefined8 FUN_1485003b4(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar15 = *param_1;
  dVar14 = param_1[1];
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_1[2];
  dVar4 = param_2[2];
  dVar13 = (dVar3 * dVar4 + dVar15 * dVar1 + dVar14 * dVar2) - param_1[3];
  dVar6 = (dVar3 * param_3[2] + dVar15 * *param_3 + dVar14 * param_3[1]) - param_1[3];
  if (((0.0 < dVar13) || (uVar11 = 0, 0.0 < dVar6)) && (uVar11 = 3, dVar6 * dVar13 <= 0.0)) {
    dVar5 = param_3[2] - dVar4;
    dVar6 = param_3[1] - dVar2;
    dVar16 = *param_3 - dVar1;
    dVar8 = SQRT(dVar5 * dVar5 + dVar16 * dVar16 + dVar6 * dVar6);
    dVar10 = 0.0;
    dVar9 = 1.0 / dVar8;
    dVar7 = (double)(-(ulonglong)(0.0 < dVar8) & (ulonglong)(dVar16 * dVar9));
    if (0.0 < dVar8) {
      dVar8 = dVar5 * dVar9;
      dVar10 = dVar9 * dVar6;
    }
    else {
      dVar8 = 0.0;
    }
    dVar15 = dVar3 * dVar8 + dVar15 * dVar7 + dVar14 * dVar10;
    uVar12 = -(ulonglong)(-dVar15 <= dVar15);
    if (((1e-08 <= (double)(~uVar12 & (ulonglong)-dVar15 | uVar12 & (ulonglong)dVar15)) &&
        (dVar14 = -dVar13 / dVar15, 0.0 < dVar14)) &&
       (dVar14 < dVar5 * dVar8 + dVar16 * dVar7 + dVar6 * dVar10)) {
      if (0.0 <= dVar15) {
        *param_2 = dVar1 + dVar7 * dVar14;
        param_2[1] = dVar2 + dVar10 * dVar14;
        param_2[2] = dVar4 + dVar8 * dVar14;
        uVar11 = 1;
      }
      else {
        *param_3 = dVar1 + dVar7 * dVar14;
        param_3[1] = dVar2 + dVar10 * dVar14;
        param_3[2] = dVar4 + dVar8 * dVar14;
        uVar11 = 2;
      }
    }
  }
  return uVar11;
}



// FUNCTION 14850066c FUN_14850066c body=2257 status=ok
// SIG undefined FUN_14850066c(void)

longlong FUN_14850066c(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 auStack_458 [32];
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  double local_428;
  double local_408;
  double local_400;
  double local_3f8;
  double local_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  double local_3d8;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  double local_388;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  double local_338;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  double local_2e8;
  double local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  double local_278;
  double local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  double local_208;
  double local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  double local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138 [4];
  double local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  double local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  double local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_458;
  lVar15 = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 0xd0) = 0x600000000;
  *(undefined8 *)(param_2 + 0x1e0) = 0;
  *(undefined8 *)(param_2 + 0x1f0) = 0x800000000;
  local_d8 = param_1[0x20];
  uStack_d0 = param_1[0x21];
  puVar16 = &local_d8;
  local_c8 = param_1[0x20];
  local_c0 = param_1[0x23];
  local_b8 = param_1[0x22];
  uStack_b0 = param_1[0x23];
  local_a0 = param_1[0x21];
  local_a8 = param_1[0x22];
  do {
    FUN_148500f3e(param_1,&local_158,param_1 + 0x1c,puVar16);
    *(ulonglong *)((longlong)&local_128 + lVar15) = CONCAT44(uStack_144,local_148);
    *(undefined4 *)((longlong)local_138 + lVar15) = local_158;
    *(undefined4 *)((longlong)local_138 + lVar15 + 4) = uStack_154;
    *(undefined4 *)((longlong)local_138 + lVar15 + 8) = uStack_150;
    *(undefined4 *)((longlong)local_138 + lVar15 + 0xc) = uStack_14c;
    lVar15 = lVar15 + 0x18;
    puVar16 = puVar16 + 2;
  } while (lVar15 != 0x60);
  if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
    uVar5 = *param_1;
    uVar6 = param_1[1];
    uVar7 = param_1[2];
    local_178 = local_110;
    local_1a8 = local_138[0];
    uStack_1a4 = local_138[1];
    uStack_1a0 = local_138[2];
    uStack_19c = local_138[3];
    local_198 = local_128;
    local_170 = uVar5;
    local_168 = uVar6;
    local_160 = uVar7;
    FUN_144afe018(&local_158);
    local_1e8 = local_f8;
    local_218 = local_120;
    uStack_214 = uStack_11c;
    uStack_210 = uStack_118;
    uStack_20c = uStack_114;
    local_208 = local_110;
    local_1e0 = uVar5;
    local_1d8 = uVar6;
    local_1d0 = uVar7;
    FUN_144afe018(&local_1c8);
    local_258 = local_e0;
    local_288 = local_108;
    uStack_284 = uStack_104;
    uStack_280 = uStack_100;
    uStack_27c = uStack_fc;
    local_278 = local_f8;
    local_250 = uVar5;
    local_248 = uVar6;
    local_240 = uVar7;
    FUN_144afe018(&local_238);
    local_2c8 = local_128;
    local_2f8 = local_f0;
    uStack_2f4 = uStack_ec;
    uStack_2f0 = uStack_e8;
    uStack_2ec = uStack_e4;
    local_2e8 = local_e0;
    local_2c0 = uVar5;
    local_2b8 = uVar6;
    local_2b0 = uVar7;
    FUN_144afe018(&local_2a8);
    uVar8 = param_1[0x1c];
    uVar9 = param_1[0x1d];
    uVar10 = param_1[0x1e];
    uVar11 = param_1[0x1f];
    *(undefined4 *)(param_2 + 0xd0) = 0;
    if (*(int *)(param_2 + 0xd4) == 0) {
      uVar12 = 0;
      iVar13 = 0;
    }
    else {
      FUN_140272e1c(param_2,0);
      iVar13 = *(int *)(param_2 + 0xd0);
      uVar12 = *(uint *)(param_2 + 0xd4);
    }
    *(uint *)(param_2 + 0xd0) = iVar13 + 1U;
    if (uVar12 < iVar13 + 1U) {
      FUN_1448afb60(param_2,iVar13);
    }
    lVar15 = *(longlong *)(param_2 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      lVar15 = param_2;
    }
    puVar1 = (undefined4 *)(lVar15 + 0x10 + (longlong)iVar13 * 0x20);
    *puVar1 = local_148;
    puVar1[1] = uStack_144;
    puVar1[2] = uStack_140;
    puVar1[3] = uStack_13c;
    puVar1 = (undefined4 *)(lVar15 + (longlong)iVar13 * 0x20);
    *puVar1 = local_158;
    puVar1[1] = uStack_154;
    puVar1[2] = uStack_150;
    puVar1[3] = uStack_14c;
    iVar13 = *(int *)(param_2 + 0xd0);
    *(uint *)(param_2 + 0xd0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0xd4) < iVar13 + 1U) {
      FUN_1448afb60(param_2,iVar13);
    }
    lVar15 = *(longlong *)(param_2 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      lVar15 = param_2;
    }
    puVar1 = (undefined4 *)(lVar15 + 0x10 + (longlong)iVar13 * 0x20);
    *puVar1 = local_1b8;
    puVar1[1] = uStack_1b4;
    puVar1[2] = uStack_1b0;
    puVar1[3] = uStack_1ac;
    puVar1 = (undefined4 *)(lVar15 + (longlong)iVar13 * 0x20);
    *puVar1 = local_1c8;
    puVar1[1] = uStack_1c4;
    puVar1[2] = uStack_1c0;
    puVar1[3] = uStack_1bc;
    iVar13 = *(int *)(param_2 + 0xd0);
    *(uint *)(param_2 + 0xd0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0xd4) < iVar13 + 1U) {
      FUN_1448afb60(param_2,iVar13);
    }
    lVar15 = *(longlong *)(param_2 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      lVar15 = param_2;
    }
    puVar1 = (undefined4 *)(lVar15 + 0x10 + (longlong)iVar13 * 0x20);
    *puVar1 = local_228;
    puVar1[1] = uStack_224;
    puVar1[2] = uStack_220;
    puVar1[3] = uStack_21c;
    puVar1 = (undefined4 *)(lVar15 + (longlong)iVar13 * 0x20);
    *puVar1 = local_238;
    puVar1[1] = uStack_234;
    puVar1[2] = uStack_230;
    puVar1[3] = uStack_22c;
    iVar13 = *(int *)(param_2 + 0xd0);
    *(uint *)(param_2 + 0xd0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0xd4) < iVar13 + 1U) {
      FUN_1448afb60(param_2,iVar13);
    }
    lVar15 = *(longlong *)(param_2 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      lVar15 = param_2;
    }
    puVar1 = (undefined4 *)(lVar15 + 0x10 + (longlong)iVar13 * 0x20);
    *puVar1 = local_298;
    puVar1[1] = uStack_294;
    puVar1[2] = uStack_290;
    puVar1[3] = uStack_28c;
    puVar1 = (undefined4 *)(lVar15 + (longlong)iVar13 * 0x20);
    *puVar1 = local_2a8;
    puVar1[1] = uStack_2a4;
    puVar1[2] = uStack_2a0;
    puVar1[3] = uStack_29c;
    iVar13 = *(int *)(param_2 + 0xd0);
    *(uint *)(param_2 + 0xd0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0xd4) < iVar13 + 1U) {
      FUN_1448afb60(param_2,iVar13);
    }
    lVar15 = *(longlong *)(param_2 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      lVar15 = param_2;
    }
    lVar14 = (longlong)iVar13 * 0x20;
    *(ulonglong *)(lVar15 + lVar14) = uVar8 ^ 0x8000000000000000;
    *(ulonglong *)(lVar15 + 8 + lVar14) = uVar9 ^ 0x8000000000000000;
    *(ulonglong *)(lVar15 + 0x10 + lVar14) = uVar10 ^ 0x8000000000000000;
    *(ulonglong *)(lVar15 + 0x18 + lVar14) = uVar11 ^ 0x8000000000000000;
  }
  else {
    dVar2 = (double)param_1[0x1e];
    dVar3 = (double)param_1[0x1c];
    dVar4 = (double)param_1[0x1d];
    local_300 = local_128 - dVar2;
    local_308 = (double)CONCAT44(local_138[3],local_138[2]) - dVar4;
    local_310 = (double)CONCAT44(local_138[1],local_138[0]) - dVar3;
    local_318 = local_110;
    local_348 = local_138[0];
    uStack_344 = local_138[1];
    uStack_340 = local_138[2];
    uStack_33c = local_138[3];
    local_338 = local_128;
    FUN_144afe018(&local_158);
    local_350 = local_110 - dVar2;
    local_358 = (double)CONCAT44(uStack_114,uStack_118) - dVar4;
    local_360 = (double)CONCAT44(uStack_11c,local_120) - dVar3;
    local_368 = local_f8;
    local_398 = local_120;
    uStack_394 = uStack_11c;
    uStack_390 = uStack_118;
    uStack_38c = uStack_114;
    local_388 = local_110;
    FUN_144afe018(&local_1c8);
    local_3a0 = local_f8 - dVar2;
    local_3a8 = (double)CONCAT44(uStack_fc,uStack_100) - dVar4;
    local_3b0 = (double)CONCAT44(uStack_104,local_108) - dVar3;
    local_3b8 = local_e0;
    local_3e8 = local_108;
    uStack_3e4 = uStack_104;
    uStack_3e0 = uStack_100;
    uStack_3dc = uStack_fc;
    local_3d8 = local_f8;
    FUN_144afe018(&local_238);
    local_3f0 = local_e0 - dVar2;
    local_3f8 = (double)CONCAT44(uStack_e4,uStack_e8) - dVar4;
    local_400 = (double)CONCAT44(uStack_ec,local_f0) - dVar3;
    local_408 = local_128;
    local_438 = local_f0;
    uStack_434 = uStack_ec;
    uStack_430 = uStack_e8;
    uStack_42c = uStack_e4;
    local_428 = local_e0;
    FUN_144afe018(&local_2a8);
    *(undefined4 *)(param_2 + 0xd0) = 0;
    if (*(int *)(param_2 + 0xd4) == 0) {
      uVar12 = 0;
      iVar13 = 0;
    }
    else {
      FUN_140272e1c(param_2,0);
      iVar13 = *(int *)(param_2 + 0xd0);
      uVar12 = *(uint *)(param_2 + 0xd4);
    }
    *(uint *)(param_2 + 0xd0) = iVar13 + 1U;
    if (uVar12 < iVar13 + 1U) {
      FUN_1448afb60(param_2,iVar13);
    }
    lVar15 = *(longlong *)(param_2 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      lVar15 = param_2;
    }
    puVar1 = (undefined4 *)(lVar15 + 0x10 + (longlong)iVar13 * 0x20);
    *puVar1 = local_148;
    puVar1[1] = uStack_144;
    puVar1[2] = uStack_140;
    puVar1[3] = uStack_13c;
    puVar1 = (undefined4 *)(lVar15 + (longlong)iVar13 * 0x20);
    *puVar1 = local_158;
    puVar1[1] = uStack_154;
    puVar1[2] = uStack_150;
    puVar1[3] = uStack_14c;
    iVar13 = *(int *)(param_2 + 0xd0);
    *(uint *)(param_2 + 0xd0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0xd4) < iVar13 + 1U) {
      FUN_1448afb60(param_2,iVar13);
    }
    lVar15 = *(longlong *)(param_2 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      lVar15 = param_2;
    }
    puVar1 = (undefined4 *)(lVar15 + 0x10 + (longlong)iVar13 * 0x20);
    *puVar1 = local_1b8;
    puVar1[1] = uStack_1b4;
    puVar1[2] = uStack_1b0;
    puVar1[3] = uStack_1ac;
    puVar1 = (undefined4 *)(lVar15 + (longlong)iVar13 * 0x20);
    *puVar1 = local_1c8;
    puVar1[1] = uStack_1c4;
    puVar1[2] = uStack_1c0;
    puVar1[3] = uStack_1bc;
    iVar13 = *(int *)(param_2 + 0xd0);
    *(uint *)(param_2 + 0xd0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0xd4) < iVar13 + 1U) {
      FUN_1448afb60(param_2,iVar13);
    }
    lVar15 = *(longlong *)(param_2 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      lVar15 = param_2;
    }
    puVar1 = (undefined4 *)(lVar15 + 0x10 + (longlong)iVar13 * 0x20);
    *puVar1 = local_228;
    puVar1[1] = uStack_224;
    puVar1[2] = uStack_220;
    puVar1[3] = uStack_21c;
    puVar1 = (undefined4 *)(lVar15 + (longlong)iVar13 * 0x20);
    *puVar1 = local_238;
    puVar1[1] = uStack_234;
    puVar1[2] = uStack_230;
    puVar1[3] = uStack_22c;
    iVar13 = *(int *)(param_2 + 0xd0);
    *(uint *)(param_2 + 0xd0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0xd4) < iVar13 + 1U) {
      FUN_1448afb60(param_2,iVar13);
    }
    lVar15 = *(longlong *)(param_2 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      lVar15 = param_2;
    }
    puVar16 = (undefined8 *)(lVar15 + 0x10 + (longlong)iVar13 * 0x20);
    *puVar16 = CONCAT44(uStack_294,local_298);
    puVar16[1] = CONCAT44(uStack_28c,uStack_290);
    puVar1 = (undefined4 *)(lVar15 + (longlong)iVar13 * 0x20);
    *puVar1 = local_2a8;
    puVar1[1] = uStack_2a4;
    puVar1[2] = uStack_2a0;
    puVar1[3] = uStack_29c;
  }
  FUN_1448afd16(param_2);
  if ((local_90 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148500f3e FUN_148500f3e body=609 status=ok
// SIG undefined FUN_148500f3e(void)

double * FUN_148500f3e(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
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
  
  dVar1 = *(double *)(param_1 + 0x30);
  dVar2 = *(double *)(param_1 + 0x20);
  dVar3 = *(double *)(param_1 + 0x28);
  dVar13 = dVar2 + dVar3 * -0.0;
  dVar14 = dVar1 * 0.0;
  dVar11 = dVar2 * -0.0 + dVar14;
  dVar9 = dVar3 * 0.0 - dVar1;
  dVar13 = dVar13 + dVar13;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dVar4 = *(double *)(param_1 + 0x38);
  dVar5 = param_3[3];
  dVar6 = param_3[2];
  dVar7 = *param_4;
  dVar8 = param_3[1];
  dVar12 = dVar2 * 0.0 + dVar3 * -0.0;
  dVar12 = dVar12 + dVar12;
  dVar15 = (dVar14 - dVar2) + (dVar14 - dVar2);
  dVar10 = (dVar3 - dVar14) + (dVar3 - dVar14);
  dVar14 = param_4[1];
  *param_2 = ((dVar3 * dVar12 - dVar15 * dVar1) + dVar10 * dVar4 + 0.0) * dVar14 +
             ((dVar3 * dVar13 - dVar11 * dVar1) + dVar9 * dVar4 + 0.0) * dVar7 + dVar5 * *param_3;
  param_2[1] = ((dVar1 * dVar10 - dVar12 * dVar2) + dVar4 * dVar15 + 0.0) * dVar14 +
               ((dVar1 * dVar9 - dVar13 * dVar2) + dVar4 * dVar11 + 1.0) * dVar7 + dVar8 * dVar5;
  param_2[2] = ((dVar2 * dVar15 - dVar10 * dVar3) + dVar4 * dVar12 + 1.0) * dVar14 +
               ((dVar2 * dVar11 - dVar9 * dVar3) + dVar4 * dVar13 + 0.0) * dVar7 + dVar6 * dVar5;
  return param_2;
}



// FUNCTION 1485011da FUN_1485011da body=101 status=ok
// SIG undefined FUN_1485011da(void)

void FUN_1485011da(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_2 + 6) == '\0') {
    *(undefined1 *)(param_1 + 0x1d8) = 0;
    return;
  }
  puVar2 = param_2;
  puVar3 = (undefined8 *)(param_1 + 0xf8);
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0x140);
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_1484ff5e8(param_1 + 0xa8);
  FUN_1447f69b6(param_1 + 8);
  return;
}



// FUNCTION 148501240 FUN_148501240 body=92 status=ok
// SIG undefined FUN_148501240(void)

void FUN_148501240(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_2 + 6) != '\x01') {
    return;
  }
  *(undefined1 *)(param_1 + 0x1d8) = 1;
  puVar2 = (undefined8 *)(param_1 + 0x140);
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_1484ff5e8(param_1 + 0xa8);
  FUN_148518c5e(param_1 + 0x20,param_1 + 0xa8);
  return;
}



// FUNCTION 1485012d8 FUN_1485012d8 body=371 status=ok
// SIG undefined FUN_1485012d8(void)

void FUN_1485012d8(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  double dVar5;
  undefined1 auStack_c8 [32];
  undefined **local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  double local_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_3 + 0x18))(param_3,&local_a8);
  pppuVar3 = &local_a8;
  puVar4 = (undefined8 *)(param_1 + 0x80);
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *pppuVar3;
    pppuVar3 = pppuVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (((uVar1 & 2) != 0) && (*(char *)(param_1 + 0x200) == '\x01')) {
    local_60 = *(double *)(param_1 + 0x1a8) - *(double *)(param_1 + 0x160);
    local_68 = *(double *)(param_1 + 0x1a0) - *(double *)(param_1 + 0x158);
    if (*(char *)(param_2 + 0xa0) == '\0') {
      dVar5 = (double)*(float *)(param_2 + 0xb0);
      local_60 = local_60 * (1.0 / dVar5);
      local_68 = local_68 * (1.0 / dVar5);
    }
    else {
      dVar5 = 1.0;
    }
    local_98 = *(double *)(param_1 + 0x160) * (1.0 / dVar5);
    local_a0 = *(double *)(param_1 + 0x158) * (1.0 / dVar5);
    local_80 = 0;
    local_90 = 0;
    local_88 = 0;
    local_a8 = &PTR_FUN_14a8eb0d0;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_78 = 0x3f800000;
    uStack_74 = 0x3f800000;
    uStack_70 = 0x3f800000;
    uStack_6c = 0x3f800000;
    FUN_140505094(param_2,&local_a8);
    local_a8 = &PTR_FUN_14a8eb0d0;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14850144c FUN_14850144c body=147 status=ok
// SIG undefined FUN_14850144c(void)

void FUN_14850144c(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1484445fc();
  if (*(char *)(param_1 + 0x38) == '\0') {
    plVar1 = (longlong *)FUN_14841014b(param_1);
    if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(plVar1);
    }
    *(longlong **)(param_1 + 0xd0) = plVar1;
    (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1 + 0x210);
    (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x358))
              (*(longlong **)(param_1 + 0xd0),param_1 + 0x30);
    plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
    (**(code **)(*plVar1 + 0x2e8))(plVar1,*(undefined8 *)(param_1 + 0xd0),param_1);
  }
  *(undefined1 *)(param_1 + 0x214) = 1;
  return;
}



// FUNCTION 1485014e0 FUN_1485014e0 body=67 status=ok
// SIG undefined FUN_1485014e0(void)

void FUN_1485014e0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x215) == '\x01' && param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x215) = 0;
    FUN_148518d02(param_1 + 0xb8,param_1 + 0xe0,1);
  }
  *(char *)(param_1 + 0x214) = param_2;
  return;
}



// FUNCTION 148501544 FUN_148501544 body=34 status=ok
// SIG undefined FUN_148501544(void)

void FUN_148501544(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x210) = *param_2;
  if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148501562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x2a8))();
    return;
  }
  return;
}



// FUNCTION 148501566 FUN_148501566 body=192 status=ok
// SIG undefined FUN_148501566(void)

void FUN_148501566(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78 [11];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(char *)(param_1 + 0x39) == '\x01') &&
     (pcVar1 = *(code **)(param_1 + 0x40), pcVar1 != (code *)0x0)) {
    plVar3 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x50);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(local_78,uVar2);
    puVar5 = local_78;
    puVar6 = (undefined8 *)(param_1 + 0xe0);
    for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
  plVar3 = (longlong *)FUN_148444614(param_1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c8))(plVar3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x378))(plVar3);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014850162a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1 + 0xe0,*(code **)(*plVar3 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148501672 FUN_148501672 body=108 status=ok
// SIG undefined FUN_148501672(void)

void FUN_148501672(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_2 + 6) == '\0') {
    *(undefined1 *)(param_1 + 0x1e5) = 0;
    return;
  }
  puVar2 = param_2;
  puVar3 = (undefined8 *)(param_1 + 0x100);
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0x148);
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_1484ff5e8(param_1 + 0xb0);
  *(undefined1 *)(param_1 + 0x1e6) = 0;
  FUN_1447f69b6(param_1 + 0x58);
  return;
}



// FUNCTION 1485016de FUN_1485016de body=247 status=ok
// SIG undefined FUN_1485016de(void)

void FUN_1485016de(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_2 + 6) == '\x01') {
    *(undefined1 *)(param_1 + 0x1e5) = 1;
    puVar2 = (undefined8 *)(param_1 + 0x148);
    for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    FUN_1484ff5e8(param_1 + 0xb0);
    if (*(char *)(param_1 + 0x1e6) == '\0') {
      QueryPerformanceCounter(&local_58);
      dVar3 = (double)local_58.QuadPart * DAT_14c83f420;
      FUN_148518c5e(param_1 + 0x70,param_1 + 0xb0);
      QueryPerformanceCounter(&local_58);
      dVar3 = ((double)local_58.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar3 + 16777216.0);
      if (*(double *)(param_1 + 0x50) <= dVar3 && dVar3 != *(double *)(param_1 + 0x50)) {
        *(undefined1 *)(param_1 + 0x1e6) = 1;
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485017d6 FUN_1485017d6 body=69 status=ok
// SIG undefined FUN_1485017d6(void)

void FUN_1485017d6(longlong param_1)

{
  if (*(char *)(param_1 + 0x1e6) == '\x01') {
    *(undefined1 *)(param_1 + 0x1e6) = 0;
    FUN_1485016de(param_1);
  }
  *(undefined1 *)(param_1 + 0x1e5) = 0;
  FUN_148518d02(param_1 + 0x88,param_1 + 0xb0,0);
  return;
}



// FUNCTION 14850181c FUN_14850181c body=323 status=ok
// SIG undefined FUN_14850181c(void)

void FUN_14850181c(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  double dVar2;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  double local_90;
  double local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  double local_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (((uVar1 & 2) != 0) && (*(char *)(param_1 + 0x215) == '\x01')) {
    local_50 = *(double *)(param_1 + 0x1b8) - *(double *)(param_1 + 0x170);
    local_58 = *(double *)(param_1 + 0x1b0) - *(double *)(param_1 + 0x168);
    if (*(char *)(param_2 + 0xa0) == '\0') {
      dVar2 = (double)*(float *)(param_2 + 0xb0);
      local_50 = local_50 * (1.0 / dVar2);
      local_58 = local_58 * (1.0 / dVar2);
    }
    else {
      dVar2 = 1.0;
    }
    local_88 = *(double *)(param_1 + 0x170) * (1.0 / dVar2);
    local_90 = *(double *)(param_1 + 0x168) * (1.0 / dVar2);
    local_70 = 0;
    local_80 = 0;
    local_78 = 0;
    local_98 = &PTR_FUN_14a8eb0d0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_68 = 0x3f800000;
    uStack_64 = 0x3f800000;
    uStack_60 = 0x3f800000;
    uStack_5c = 0x3f800000;
    FUN_140505094(param_2,&local_98);
    local_98 = &PTR_FUN_14a8eb0d0;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148501968 FUN_148501968 body=1716 status=ok
// SIG undefined FUN_148501968(void)

void FUN_148501968(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined8 local_138;
  undefined **local_128;
  longlong local_120;
  undefined1 *local_108;
  undefined8 local_f8;
  undefined **local_e8;
  longlong local_e0;
  code *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined ***local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88;
  undefined8 uStack_80;
  undefined ***local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1484445fc();
  uVar3 = FUN_1409ffe1d();
  plVar4 = (longlong *)FUN_14843c80f(uVar3);
  if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar4);
  }
  *(longlong **)(param_1 + 0x40) = plVar4;
  (**(code **)(*plVar4 + 0x358))(plVar4,param_1 + 0x30);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  puStack_60 = &LAB_148441f14;
  local_88 = (code *)&LAB_14844e6fa;
  FUN_14840df3c(*(longlong *)(param_1 + 0x40) + 200,*(undefined4 *)(param_1 + 0x1ac),&local_88);
  if (local_88 != (code *)0x0) {
    pppuVar8 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar8 = &local_68;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  puStack_60 = &LAB_148441f18;
  local_88 = (code *)&LAB_14844e6fa;
  FUN_14840df3c(*(longlong *)(param_1 + 0x40) + 200,*(undefined4 *)(param_1 + 0x1b0),&local_88);
  if (local_88 != (code *)0x0) {
    pppuVar8 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar8 = &local_68;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(param_1 + 0x40),0);
  uVar3 = FUN_1409ffe1d();
  plVar4 = (longlong *)FUN_1484101e0(uVar3);
  if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar4);
  }
  *(longlong **)(param_1 + 0x48) = plVar4;
  (**(code **)(*plVar4 + 0x300))(plVar4,param_1 + 0x38);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  puStack_60 = &LAB_148441f14;
  local_88 = (code *)&LAB_14844e6fa;
  FUN_14840df3c(*(longlong *)(param_1 + 0x48) + 0x30,*(undefined4 *)(param_1 + 0x1ac),&local_88);
  if (local_88 != (code *)0x0) {
    pppuVar8 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar8 = &local_68;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  puStack_60 = &LAB_148441f18;
  local_88 = (code *)&LAB_14844e6fa;
  FUN_14840df3c(*(longlong *)(param_1 + 0x48) + 0x30,*(undefined4 *)(param_1 + 0x1b0),&local_88);
  if (local_88 != (code *)0x0) {
    pppuVar8 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar8 = local_78;
    }
    (*(code *)(*pppuVar8)[2])(pppuVar8);
  }
  plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(param_1 + 0x48),0);
  uVar3 = FUN_1409ffe1d();
  lVar5 = FUN_1484e2f3b(uVar3);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  *(longlong *)(param_1 + 0x170) = lVar5;
  plVar4 = (longlong *)FUN_148444614(param_1);
  uVar3 = (**(code **)(*plVar4 + 0x2c8))(plVar4);
  lVar6 = FUN_148558365(uVar3,0);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  *(longlong *)(lVar5 + 0x650) = lVar6;
  FUN_1406552bc(lVar5,0,lVar6);
  uVar3 = FUN_1409ffe1d();
  lVar5 = FUN_1484e2e03(uVar3);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  *(longlong *)(param_1 + 0x178) = lVar5;
  plVar4 = (longlong *)FUN_148444614(param_1);
  uVar3 = (**(code **)(*plVar4 + 0x2c8))(plVar4);
  uVar3 = FUN_1485583eb(uVar3,0);
  FUN_1484d0608(lVar5,uVar3);
  *(undefined8 *)(param_1 + 0x184) = 0xfff39c12ffff0000;
  *(undefined8 *)(param_1 + 0x18c) = 0x40800000ff000000;
  *(undefined4 *)(param_1 + 0x194) = 0x41000000;
  *(undefined8 *)(param_1 + 0x1a0) = 0xffffff00ff00ff00;
  *(undefined8 *)(param_1 + 0x198) = 0xff00ff003f800000;
  local_c8 = *(code **)(param_1 + 0x220);
  uStack_80 = *(undefined8 *)(param_1 + 0x228);
  local_b8 = *(undefined ****)(param_1 + 0x230);
  uStack_70 = *(undefined8 *)(param_1 + 0x238);
  local_68 = *(undefined ***)(param_1 + 0x240);
  puStack_60 = *(undefined1 **)(param_1 + 0x248);
  local_58 = *(undefined8 *)(param_1 + 0x250);
  uStack_50 = *(undefined8 *)(param_1 + 600);
  uVar1 = local_58;
  uVar2 = uStack_50;
  local_78 = local_b8;
  uVar7 = uStack_70;
  local_88 = local_c8;
  uVar3 = uStack_80;
  *(ulonglong *)(param_1 + 0x250) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(param_1 + 600) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(param_1 + 0x240) = &PTR_LAB_14af124f0;
  *(longlong *)(param_1 + 0x248) = param_1;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(ulonglong *)(param_1 + 0x238) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(param_1 + 0x220) = &LAB_143b98a32;
  *(ulonglong *)(param_1 + 0x228) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)(uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = puStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_80 = uVar3;
  uStack_70 = uVar7;
  local_58 = uVar1;
  uStack_50 = uVar2;
  if (local_c8 != (code *)0x0) {
    pppuVar8 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar8 = &local_a8;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  plVar4 = (longlong *)FUN_148444614(param_1);
  uVar3 = (**(code **)(*plVar4 + 0x2c8))(plVar4);
  uVar3 = FUN_148451354(uVar3);
  lVar5 = FUN_1484c6256(param_1);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  *(longlong *)(param_1 + 0x1b8) = lVar5;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  uVar7 = FUN_148444614(param_1);
  lVar5 = FUN_14843d06b(uVar3,0x3fe,uVar7,&local_88);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  *(longlong *)(param_1 + 0x1c0) = lVar5;
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_88 = FUN_1485020fa;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_14850201e(*(longlong *)(param_1 + 0x1b8) + 0x28,&local_c8,param_1,&local_88);
  local_88 = FUN_1485027d8;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1485026fc(*(longlong *)(param_1 + 0x1b8) + 0x58,&local_c8,param_1,&local_88);
  local_88 = FUN_1485028c8;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1485026fc(*(longlong *)(param_1 + 0x1b8) + 0x70,&local_c8,param_1,&local_88);
  (**(code **)(**(longlong **)(param_1 + 0x1c0) + 800))
            (*(longlong **)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1b8),0);
  (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0x350))(*(longlong **)(param_1 + 0x1c0),0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x1c0) + 0x82) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x1c0) + 0x83) = 1;
  lVar5 = FUN_1485029b8(param_1);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  *(longlong *)(param_1 + 0x68) = lVar5;
  local_f8 = 0;
  local_e8 = &PTR_LAB_14af12650;
  local_108 = &LAB_143b98a8e;
  local_e0 = param_1;
  FUN_148502a4e(lVar5 + 0x28,lVar5 + 0xa8);
  local_138 = 0;
  local_128 = &PTR_LAB_14af126d0;
  local_148 = &LAB_143b98ade;
  local_120 = param_1;
  FUN_148502b24(*(longlong *)(param_1 + 0x68) + 0x28,*(longlong *)(param_1 + 0x68) + 0xac);
  FUN_148502bfa(param_1);
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14850201e FUN_14850201e body=218 status=ok
// SIG undefined FUN_14850201e(void)

undefined8
FUN_14850201e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14aeff220;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14af12510;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1484d65de(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485020fa FUN_1485020fa body=1536 status=ok
// SIG undefined FUN_1485020fa(void)

void FUN_1485020fa(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double *pdVar3;
  int iVar4;
  void *_Src;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  int *piVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 local_208 [24];
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  void *local_e0;
  uint local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [56];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if ((*(int *)(param_1 + 0x270) == 0) || (*(char *)(param_1 + 0x1c8) != '\x01'))
  goto LAB_14850213d;
  local_98 = *(undefined8 *)(param_3 + 8);
  uStack_90 = *(undefined8 *)(param_3 + 10);
  local_88 = *(undefined8 *)(param_3 + 0xc);
  local_80 = *param_3;
  uStack_7c = param_3[1];
  uStack_78 = param_3[2];
  uStack_74 = param_3[3];
  local_70 = param_3[4];
  uStack_6c = param_3[5];
  uStack_68 = param_3[6];
  uStack_64 = param_3[7];
  FUN_148503970(param_1 + 0x288,local_d0,&local_98);
  local_e0 = (void *)0x0;
  local_d8 = *(uint *)(param_1 + 0x270);
  lVar14 = (longlong)(int)local_d8;
  _Src = *(void **)(param_1 + 0x268);
  if (lVar14 == 0) {
    local_d4 = 0;
    uVar11 = 0;
  }
  else {
    FUN_144a06ca8(&local_e0,local_d8,0);
    memcpy(local_e0,_Src,lVar14 << 2);
    uVar11 = local_d8;
  }
  FUN_144958a06(local_e0,uVar11);
  uVar11 = local_d8;
  uVar15 = (ulonglong)local_d8;
  local_f8 = (undefined8 *)0x0;
  uStack_f0 = 0;
  lVar14 = *(longlong *)(param_1 + 0x68);
  if (*(float *)(lVar14 + 0xb0) <= 0.0) {
LAB_1485023fc:
    bVar7 = false;
LAB_1485023ff:
    if (0 < (int)uVar11) {
      uVar13 = 0;
      do {
        lVar14 = *(longlong *)(param_1 + 0x278);
        lVar12 = (longlong)*(int *)((longlong)local_e0 + uVar13 * 4) * 0x38;
        local_148 = *(undefined8 *)(lVar14 + 0x30 + lVar12);
        puVar1 = (undefined8 *)(lVar14 + lVar12);
        local_138 = *(undefined4 *)puVar1;
        uStack_134 = *(undefined4 *)((longlong)puVar1 + 4);
        local_178 = (double)*puVar1;
        uStack_130 = *(undefined4 *)(puVar1 + 1);
        uStack_12c = *(undefined4 *)((longlong)puVar1 + 0xc);
        uStack_170 = (double)puVar1[1];
        puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar12);
        local_128 = *(undefined4 *)puVar1;
        uStack_124 = *(undefined4 *)((longlong)puVar1 + 4);
        local_168 = (double)*puVar1;
        uStack_160 = *(undefined4 *)(puVar1 + 1);
        uStack_15c = *(undefined4 *)((longlong)puVar1 + 0xc);
        puVar2 = (undefined4 *)(lVar14 + 0x20 + lVar12);
        local_158 = *puVar2;
        uStack_154 = puVar2[1];
        uStack_150 = puVar2[2];
        uStack_14c = puVar2[3];
        uStack_120 = uStack_160;
        uStack_11c = uStack_15c;
        local_118 = local_158;
        uStack_114 = uStack_154;
        uStack_110 = uStack_150;
        uStack_10c = uStack_14c;
        local_108 = local_148;
        if (*(int *)(*(longlong *)(param_1 + 0x68) + 0xa8) == 1) {
          FUN_148503a16(&local_138,&local_1b0,local_d0);
          local_148 = local_180;
          uVar17 = local_1b0;
          uVar19 = uStack_1ac;
          uVar21 = uStack_1a8;
          uVar22 = uStack_1a4;
          uVar20 = local_1a0;
          uVar23 = uStack_19c;
          uStack_160 = uStack_198;
          uStack_15c = uStack_194;
          local_158 = local_190;
          uStack_154 = uStack_18c;
          uStack_150 = uStack_188;
          uStack_14c = uStack_184;
        }
        else {
          FUN_148503970(param_1 + 0x288,&local_1b0,&local_138);
          FUN_148503a16(&local_98,&local_1e8,&local_1b0);
          local_148 = local_1b8;
          uVar17 = local_1e8;
          uVar19 = uStack_1e4;
          uVar21 = uStack_1e0;
          uVar22 = uStack_1dc;
          uVar20 = local_1d8;
          uVar23 = uStack_1d4;
          uStack_160 = uStack_1d0;
          uStack_15c = uStack_1cc;
          local_158 = local_1c8;
          uStack_154 = uStack_1c4;
          uStack_150 = uStack_1c0;
          uStack_14c = uStack_1bc;
        }
        local_168 = (double)CONCAT44(uVar23,uVar20);
        local_178 = (double)CONCAT44(uVar19,uVar17);
        uStack_170 = (double)CONCAT44(uVar22,uVar21);
        if (bVar7) {
          dVar26 = (double)*(float *)(*(longlong *)(param_1 + 0x68) + 0xb0) *
                   (double)local_f8[uVar13];
          if (*(int *)(*(longlong *)(param_1 + 0x68) + 0xb4) == 1) {
            dVar26 = 1.0 - dVar26 * dVar26;
            dVar26 = dVar26 * dVar26 * dVar26;
          }
          else {
            dVar26 = 1.0 - dVar26;
          }
          dVar5 = 1.0 - dVar26;
          local_168 = (double)CONCAT44(uStack_124,local_128) * dVar5 + local_168 * dVar26;
          uStack_170 = (double)CONCAT44(uStack_12c,uStack_130) * dVar5 + uStack_170 * dVar26;
          local_178 = dVar5 * (double)CONCAT44(uStack_134,local_138) + local_178 * dVar26;
          uStack_1f0 = local_148;
          local_228 = uStack_120;
          uStack_224 = uStack_11c;
          uStack_220 = local_118;
          uStack_21c = uStack_114;
          local_218 = uStack_110;
          uStack_214 = uStack_10c;
          uStack_210 = (undefined4)local_108;
          uStack_20c = local_108._4_4_;
          FUN_148503bf8(&uStack_160,&local_228,local_208);
        }
        lVar14 = *(longlong *)(param_1 + 0x90);
        lVar12 = (longlong)*(int *)((longlong)local_e0 + uVar13 * 4) * 0x38;
        *(undefined8 *)(lVar14 + 0x30 + lVar12) = local_148;
        puVar1 = (undefined8 *)(lVar14 + 0x20 + lVar12);
        *puVar1 = CONCAT44(uStack_154,local_158);
        puVar1[1] = CONCAT44(uStack_14c,uStack_150);
        pdVar3 = (double *)(lVar14 + 0x10 + lVar12);
        *pdVar3 = local_168;
        pdVar3[1] = (double)CONCAT44(uStack_15c,uStack_160);
        puVar2 = (undefined4 *)(lVar14 + lVar12);
        *puVar2 = (undefined4)local_178;
        puVar2[1] = local_178._4_4_;
        puVar2[2] = (undefined4)uStack_170;
        puVar2[3] = uStack_170._4_4_;
        uVar13 = uVar13 + 1;
      } while (uVar15 != uVar13);
    }
  }
  else {
    if (*(int *)(lVar14 + 0xac) == 0) {
      if (*(int *)(lVar14 + 0xa8) != 1) goto LAB_1485023fc;
      piVar9 = *(int **)(param_1 + 0x268);
    }
    else {
      piVar9 = *(int **)(param_1 + 0x268);
      if (*(int *)(lVar14 + 0xac) == 2) {
        piVar9 = piVar9 + (*(int *)(param_1 + 0x270) + -1);
      }
    }
    iVar4 = *piVar9;
    FUN_1400bd09c(&local_f8,uVar15,1);
    *local_f8 = 0;
    uVar8 = 0;
    if (1 < (int)uVar11) {
      dVar26 = 0.0;
      uVar13 = 0;
      uVar10 = 1;
      do {
        lVar14 = *(longlong *)(param_1 + 0x278);
        lVar16 = (longlong)*(int *)((longlong)local_e0 + uVar10 * 4 + -4) * 0x38;
        lVar12 = (longlong)*(int *)((longlong)local_e0 + uVar10 * 4) * 0x38;
        dVar5 = *(double *)(lVar14 + lVar16) - *(double *)(lVar14 + lVar12);
        dVar6 = *(double *)(lVar14 + 8 + lVar16) - *(double *)(lVar14 + 8 + lVar12);
        dVar25 = *(double *)(lVar14 + 0x10 + lVar16) - *(double *)(lVar14 + 0x10 + lVar12);
        dVar26 = dVar26 + SQRT(dVar25 * dVar25 + dVar5 * dVar5 + dVar6 * dVar6);
        local_f8[uVar10] = dVar26;
        if (*(int *)((longlong)local_e0 + uVar10 * 4) == iVar4) {
          uVar13 = uVar10 & 0xffffffff;
        }
        uVar8 = (uint)uVar13;
        uVar10 = uVar10 + 1;
      } while (uVar15 != uVar10);
    }
    if (0 < (int)uVar11) {
      dVar26 = (double)local_f8[(int)uVar8];
      uVar13 = 0;
      uVar17 = 0;
      uVar19 = 0;
      uVar21 = 0;
      uVar22 = 0;
      do {
        local_f8[uVar13] = (double)local_f8[uVar13] - dVar26;
        dVar5 = (double)local_f8[uVar13];
        uVar20 = (undefined4)((ulonglong)dVar5 >> 0x20);
        uVar23 = SUB84(dVar5,0);
        uVar24 = uVar20;
        if ((double)CONCAT44(uVar22,uVar21) <= dVar5) {
          uVar23 = uVar21;
          uVar24 = uVar22;
        }
        uVar18 = SUB84(dVar5,0);
        if (dVar5 <= (double)CONCAT44(uVar19,uVar17)) {
          uVar18 = uVar17;
          uVar20 = uVar19;
        }
        uVar13 = uVar13 + 1;
        uVar17 = uVar18;
        uVar19 = uVar20;
        uVar21 = uVar23;
        uVar22 = uVar24;
      } while (uVar15 != uVar13);
      uVar13 = 0;
      do {
        if (uVar8 != uVar13) {
          uVar10 = -(ulonglong)((double)local_f8[uVar13] < 0.0);
          local_f8[uVar13] =
               (double)local_f8[uVar13] /
               (double)(~uVar10 & CONCAT44(uVar20,uVar18) | uVar10 & CONCAT44(uVar24,uVar23));
        }
        uVar13 = uVar13 + 1;
      } while (uVar15 != uVar13);
      bVar7 = true;
      goto LAB_1485023ff;
    }
  }
  *(undefined1 *)(param_1 + 0x180) = 0;
  FUN_1447f69b6(param_1 + 0x50);
  if (local_f8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e0 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14850213d:
  if ((local_60 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485026fc FUN_1485026fc body=218 status=ok
// SIG undefined FUN_1485026fc(void)

undefined8
FUN_1485026fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14af12c50;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14af12580;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148515308(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485027d8 FUN_1485027d8 body=239 status=ok
// SIG undefined FUN_1485027d8(void)

void FUN_1485027d8(longlong param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_2 + 0x2b0))(param_2,&local_88);
  *(undefined4 *)(param_1 + 0x288) = local_68;
  *(undefined4 *)(param_1 + 0x28c) = uStack_64;
  *(undefined4 *)(param_1 + 0x290) = uStack_60;
  *(undefined4 *)(param_1 + 0x294) = uStack_5c;
  *(undefined8 *)(param_1 + 0x298) = local_58;
  *(undefined8 *)(param_1 + 0x2a0) = local_88;
  *(undefined8 *)(param_1 + 0x2a8) = uStack_80;
  *(undefined8 *)(param_1 + 0x2b0) = local_78;
  *(undefined8 *)(param_1 + 0x2b8) = local_70;
  iVar1 = *(int *)(param_1 + 0x98);
  _Src = *(void **)(param_1 + 0x90);
  *(int *)(param_1 + 0x280) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0x284) == 0) {
    *(undefined4 *)(param_1 + 0x284) = 0;
  }
  else {
    FUN_146c7ebe6((undefined8 *)(param_1 + 0x278),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0x278),_Src,(longlong)iVar1 * 0x38);
    }
  }
  *(undefined1 *)(param_1 + 0x1c8) = 1;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485028c8 FUN_1485028c8 body=239 status=ok
// SIG undefined FUN_1485028c8(void)

void FUN_1485028c8(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = &PTR_LAB_14af0bd70;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_148460dca(puVar1 + 1,param_1 + 0x278);
  FUN_148460dca(puVar1 + 3,param_1 + 0x90);
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  lVar3 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
  local_38 = puVar1;
  (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x20))(lVar3 + 0x28,param_1,&local_38,&DAT_14cb4ce30);
  *(undefined4 *)(param_1 + 0x280) = 0;
  if (*(int *)(param_1 + 0x284) < 0) {
    FUN_146c7ec56(param_1 + 0x278,0);
  }
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x160) = 0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485029b8 FUN_1485029b8 body=148 status=ok
// SIG undefined FUN_1485029b8(void)

undefined8 FUN_1485029b8(undefined8 param_1)

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
  uVar1 = FUN_1459ef328();
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



// FUNCTION 148502a4e FUN_148502a4e body=212 status=ok
// SIG undefined FUN_148502a4e(void)

void FUN_148502a4e(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_148519370(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148502b24 FUN_148502b24 body=212 status=ok
// SIG undefined FUN_148502b24(void)

void FUN_148502b24(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_14851968e(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148502bfa FUN_148502bfa body=1020 status=ok
// SIG undefined FUN_148502bfa(void)

void FUN_148502bfa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = *(longlong *)(param_1 + 0x80);
  if (local_b8 != 0) goto LAB_148502fab;
  plVar11 = (longlong *)FUN_14001cc68(0xd0);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14af126f0;
  memset(plVar11 + 2,0,0xc0);
  if (plVar11 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0x10;
    plVar12 = *(longlong **)(param_1 + 0x88);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x88) = 0;
LAB_148502c8e:
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
      if (plVar11 != (longlong *)0x0) goto LAB_148502cf4;
    }
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x80) = plVar11 + 2;
    plVar12 = *(longlong **)(param_1 + 0x88);
    if (plVar11 == plVar12) {
      LOCK();
      plVar12 = plVar11 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x88) = plVar11;
      if (plVar12 != (longlong *)0x0) goto LAB_148502c8e;
    }
LAB_148502cf4:
    LOCK();
    plVar12 = plVar11 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  plVar11 = *(longlong **)(param_1 + 0x80);
  local_a8 = *plVar11;
  uStack_60 = plVar11[1];
  local_98 = (longlong *)plVar11[2];
  uStack_50 = plVar11[3];
  local_48 = plVar11[4];
  lStack_40 = plVar11[5];
  local_38 = plVar11[6];
  uStack_30 = plVar11[7];
  lVar7 = local_38;
  lVar9 = uStack_30;
  local_58 = local_98;
  lVar5 = uStack_50;
  local_68 = local_a8;
  lVar3 = uStack_60;
  plVar11[6] = CONCAT44(uStack_74,local_78);
  plVar11[7] = CONCAT44(uStack_6c,uStack_70);
  plVar11[4] = (longlong)&PTR_LAB_14aee56d0;
  plVar11[5] = (longlong)&LAB_143b98b2e;
  plVar11[2] = 0;
  plVar11[3] = CONCAT44(uStack_8c,uStack_90);
  *plVar11 = (longlong)&DAT_148483dca;
  plVar11[1] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar11 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar11 = &local_88;
    }
    uStack_60 = lVar3;
    uStack_50 = lVar5;
    local_38 = lVar7;
    uStack_30 = lVar9;
    (**(code **)(*plVar11 + 0x10))();
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  local_a8 = *(longlong *)(lVar3 + 0x40);
  uStack_60 = *(undefined8 *)(lVar3 + 0x48);
  local_98 = *(longlong **)(lVar3 + 0x50);
  uStack_50 = *(undefined8 *)(lVar3 + 0x58);
  local_48 = *(longlong *)(lVar3 + 0x60);
  lStack_40 = *(undefined8 *)(lVar3 + 0x68);
  local_38 = *(undefined8 *)(lVar3 + 0x70);
  uStack_30 = *(undefined8 *)(lVar3 + 0x78);
  uVar8 = local_38;
  uVar10 = uStack_30;
  local_58 = local_98;
  uVar6 = uStack_50;
  local_68 = local_a8;
  uVar4 = uStack_60;
  *(ulonglong *)(lVar3 + 0x70) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(lVar3 + 0x78) = CONCAT44(uStack_6c,uStack_70);
  *(undefined ***)(lVar3 + 0x60) = &PTR_LAB_14af12710;
  *(undefined1 **)(lVar3 + 0x68) = &LAB_143b98b32;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(ulonglong *)(lVar3 + 0x58) = CONCAT44(uStack_8c,uStack_90);
  *(code **)(lVar3 + 0x40) = FUN_148519a86;
  *(ulonglong *)(lVar3 + 0x48) = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar11 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar11 = &local_88;
    }
    uStack_60 = uVar4;
    uStack_50 = uVar6;
    local_38 = uVar8;
    uStack_30 = uVar10;
    (**(code **)(*plVar11 + 0x10))();
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  local_a8 = *(longlong *)(lVar3 + 0x80);
  uStack_60 = *(undefined8 *)(lVar3 + 0x88);
  local_98 = *(longlong **)(lVar3 + 0x90);
  uStack_50 = *(undefined8 *)(lVar3 + 0x98);
  local_48 = *(longlong *)(lVar3 + 0xa0);
  lStack_40 = *(undefined8 *)(lVar3 + 0xa8);
  local_38 = *(undefined8 *)(lVar3 + 0xb0);
  uStack_30 = *(undefined8 *)(lVar3 + 0xb8);
  uVar8 = local_38;
  uVar10 = uStack_30;
  local_58 = local_98;
  uVar6 = uStack_50;
  local_68 = local_a8;
  uVar4 = uStack_60;
  *(ulonglong *)(lVar3 + 0xb0) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(lVar3 + 0xb8) = CONCAT44(uStack_6c,uStack_70);
  *(undefined ***)(lVar3 + 0xa0) = &PTR_LAB_14aeb6a30;
  *(undefined1 **)(lVar3 + 0xa8) = &LAB_143b98b68;
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(ulonglong *)(lVar3 + 0x98) = CONCAT44(uStack_8c,uStack_90);
  *(code **)(lVar3 + 0x80) = FUN_146bd3274;
  *(ulonglong *)(lVar3 + 0x88) = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_60 = uVar4;
  uStack_50 = uVar6;
  local_38 = uVar8;
  uStack_30 = uVar10;
  if (local_a8 != 0) {
    plVar11 = &local_88;
    if (local_98 != (longlong *)0x0) {
      plVar11 = local_98;
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  local_b8 = *(longlong *)(param_1 + 0x80);
LAB_148502fab:
  local_b0 = *(longlong *)(param_1 + 0x88);
  if (local_b0 != 0) {
    LOCK();
    *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
    UNLOCK();
  }
  FUN_1485036be(param_1,&local_b8);
  if ((local_20 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148502ff8 FUN_148502ff8 body=116 status=ok
// SIG undefined FUN_148502ff8(void)

void FUN_148502ff8(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_140aeefbc(*(longlong *)(param_1 + 0x168),0,1);
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    plVar1 = (longlong *)FUN_148444614(param_1);
    uVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
    plVar1 = (longlong *)FUN_148451354(uVar2);
    (**(code **)(*plVar1 + 0x2c8))(plVar1,*(undefined8 *)(param_1 + 0x1c0));
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  return;
}



// FUNCTION 14850306c FUN_14850306c body=525 status=ok
// SIG undefined FUN_14850306c(void)

void FUN_14850306c(longlong param_1,undefined8 param_2)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  undefined1 local_1b8 [16];
  double local_1a8;
  longlong local_198 [24];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((-1 < *(int *)(param_1 + 0x260)) && (*(int *)(param_1 + 0x260) < *(int *)(param_1 + 0x98))) {
    FUN_141300fc0(local_198);
    FUN_14845339e(local_198,param_2);
    lVar2 = (longlong)*(int *)(param_1 + 0x260) * 0x38;
    pdVar1 = (double *)(*(longlong *)(param_1 + 0x90) + lVar2);
    local_98 = *pdVar1 * local_98;
    dStack_90 = pdVar1[1] * dStack_90;
    local_88 = *(double *)(*(longlong *)(param_1 + 0x90) + 0x10 + lVar2) * local_88;
    dVar3 = dStack_90 * local_d8 - local_98 * dStack_d0;
    dVar4 = local_88 * dStack_d0 - dStack_90 * local_c8;
    dVar5 = local_98 * local_c8 - local_d8 * local_88;
    dVar4 = dVar4 + dVar4;
    dVar5 = dVar5 + dVar5;
    dVar3 = dVar3 + dVar3;
    dStack_b0 = (local_c8 * dVar4 - local_d8 * dVar3) + dStack_c0 * dVar5 + dStack_90 + dStack_b0;
    local_1b8._8_4_ = SUB84(dStack_b0,0);
    local_1b8._0_8_ =
         (dVar3 * dStack_d0 - dVar5 * local_c8) + dStack_c0 * dVar4 + local_98 + local_b8;
    local_1b8._12_4_ = (int)((ulonglong)dStack_b0 >> 0x20);
    local_1a8 = dVar3 * dStack_c0 + local_88 + (dVar5 * local_d8 - dVar4 * dStack_d0) + local_a8;
    local_1c8 = 0;
    (**(code **)(local_198[0] + 0x10))
              (local_198,local_1b8,&DAT_149e1e2f8,
               *(float *)(param_1 + 0x194) + *(float *)(param_1 + 0x194));
    FUN_14845342a(local_198);
    FUN_14008cd94(local_198);
  }
  if ((local_70 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14850327a FUN_14850327a body=152 status=ok
// SIG undefined FUN_14850327a(void)

void FUN_14850327a(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_148444614();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x2c8))(plVar1);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x378))(plVar1);
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 0x1d0);
  if (*(char *)(param_1 + 0x160) == '\0') {
    FUN_148503312(param_1);
  }
  if (*(char *)(param_1 + 0x180) == '\0') {
    FUN_1485033f4(param_1);
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FUN_14045627c(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + 0x218) + 0x3c8),
                  *(int *)(*(longlong *)(param_1 + 0x68) + 0xa8) != 1,1);
    return;
  }
  return;
}



// FUNCTION 148503312 FUN_148503312 body=224 status=ok
// SIG undefined FUN_148503312(void)

void FUN_148503312(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [60];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x160) == '\0') {
    FUN_146c83e96(param_1 + 0xa0,1,1);
    puVar1 = *(undefined8 **)(param_1 + 0x70);
    pcVar2 = (code *)*puVar1;
    plVar6 = puVar1 + 4;
    if ((longlong *)puVar1[2] != (longlong *)0x0) {
      plVar6 = (longlong *)puVar1[2];
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    iVar4 = (*pcVar2)(uVar5);
    if (0 < iVar4) {
      iVar7 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x70);
        pcVar2 = *(code **)(lVar3 + 0x40);
        plVar6 = (longlong *)(lVar3 + 0x60);
        if (*(longlong **)(lVar3 + 0x50) != (longlong *)0x0) {
          plVar6 = *(longlong **)(lVar3 + 0x50);
        }
        local_44 = iVar7;
        uVar5 = (**(code **)(*plVar6 + 8))();
        (*pcVar2)(local_80,uVar5,&local_44);
        FUN_146c83f12(param_1 + 0xa0,iVar7,local_80);
        iVar7 = iVar7 + 1;
      } while (iVar4 != iVar7);
    }
    *(undefined1 *)(param_1 + 0x160) = 1;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485033f4 FUN_1485033f4 body=713 status=ok
// SIG undefined FUN_1485033f4(void)

void FUN_1485033f4(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  uint *puStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined8 local_c0;
  uint *puStack_b8;
  undefined8 local_b0;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_1 + 0x180) == '\0') {
    puVar1 = *(undefined8 **)(param_1 + 0x70);
    pcVar2 = (code *)*puVar1;
    plVar7 = puVar1 + 4;
    if ((longlong *)puVar1[2] != (longlong *)0x0) {
      plVar7 = (longlong *)puVar1[2];
    }
    uVar5 = (**(code **)(*plVar7 + 8))();
    uVar4 = (*pcVar2)(uVar5);
    FUN_1484debd2(*(undefined8 *)(param_1 + 0x170));
    FUN_1484d04e2(*(undefined8 *)(param_1 + 0x178));
    if (0 < (int)uVar4) {
      uVar10 = 0;
      do {
        lVar6 = *(longlong *)(param_1 + 0x70);
        pcVar2 = *(code **)(lVar6 + 0x40);
        plVar7 = (longlong *)(lVar6 + 0x60);
        if (*(longlong **)(lVar6 + 0x50) != (longlong *)0x0) {
          plVar7 = *(longlong **)(lVar6 + 0x50);
        }
        local_88 = uVar10;
        uVar5 = (**(code **)(*plVar7 + 8))();
        (*pcVar2)(&local_108,uVar5);
        lVar6 = 0x18c;
        if ((longlong)*(int *)(param_1 + 0x270) != 0) {
          lVar9 = 0;
          do {
            if (*(uint *)(*(longlong *)(param_1 + 0x268) + lVar9) == uVar10) {
              lVar6 = 0x1a4;
              break;
            }
            lVar9 = lVar9 + 4;
          } while ((longlong)*(int *)(param_1 + 0x270) * 4 != lVar9);
        }
        lVar9 = *(longlong *)(param_1 + 0x170);
        uVar5 = *(undefined8 *)(param_1 + 0x194);
        local_88 = local_108;
        uStack_84 = uStack_104;
        uStack_80 = uStack_100;
        uStack_7c = uStack_fc;
        local_78 = local_f8;
        uVar8 = *(uint *)(param_1 + lVar6);
        FUN_1448215fa(lVar9);
        FUN_148511cac(lVar9 + 0x698,&local_c0);
        *(undefined8 *)(puStack_b8 + 4) = local_78;
        *puStack_b8 = local_88;
        puStack_b8[1] = uStack_84;
        puStack_b8[2] = uStack_80;
        puStack_b8[3] = uStack_7c;
        puStack_b8[6] = uVar8;
        *(undefined8 *)(puStack_b8 + 7) = uVar5;
        *(undefined1 *)(lVar9 + 0x690) = 1;
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar4);
      lVar6 = *(longlong *)(param_1 + 0x70);
      pcVar2 = *(code **)(lVar6 + 0x80);
      plVar7 = (longlong *)(lVar6 + 0xa0);
      if (*(longlong **)(lVar6 + 0x90) != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar6 + 0x90);
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      bVar3 = (*pcVar2)(uVar5);
      uVar10 = uVar4 - (bVar3 ^ 1);
      if (0 < (int)uVar10) {
        uVar8 = 0;
        do {
          lVar6 = *(longlong *)(param_1 + 0x70);
          pcVar2 = *(code **)(lVar6 + 0x40);
          plVar7 = (longlong *)(lVar6 + 0x60);
          if (*(longlong **)(lVar6 + 0x50) != (longlong *)0x0) {
            plVar7 = *(longlong **)(lVar6 + 0x50);
          }
          local_108 = uVar8;
          uVar5 = (**(code **)(*plVar7 + 8))();
          (*pcVar2)(&local_88,uVar5,&local_108);
          lVar6 = *(longlong *)(param_1 + 0x70);
          uVar8 = uVar8 + 1;
          local_108 = uVar8 % uVar4;
          pcVar2 = *(code **)(lVar6 + 0x40);
          plVar7 = (longlong *)(lVar6 + 0x60);
          if (*(longlong **)(lVar6 + 0x50) != (longlong *)0x0) {
            plVar7 = *(longlong **)(lVar6 + 0x50);
          }
          uVar5 = (**(code **)(*plVar7 + 8))();
          (*pcVar2)(&local_c0,uVar5,&local_108);
          local_d4 = *(undefined4 *)(param_1 + 400);
          local_d0 = *(undefined4 *)(param_1 + 0x198);
          local_e0 = local_b0;
          local_f0 = local_c0;
          puStack_e8 = puStack_b8;
          local_108 = local_88;
          uStack_104 = uStack_84;
          uStack_100 = uStack_80;
          uStack_fc = uStack_7c;
          local_f8 = local_78;
          local_d8 = *(undefined4 *)(param_1 + 0x184);
          FUN_1484d0812(*(undefined8 *)(param_1 + 0x178),&local_108);
        } while (uVar10 != uVar8);
      }
    }
    *(undefined1 *)(param_1 + 0x180) = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485036be FUN_1485036be body=427 status=ok
// SIG undefined FUN_1485036be(void)

void FUN_1485036be(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar8 = *param_2;
  lVar10 = param_2[1];
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  plVar9 = *(longlong **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar8;
  *(longlong *)(param_1 + 0x78) = lVar10;
  if (plVar9 != (longlong *)0x0) {
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
  local_68 = 0;
  uStack_60 = 0;
  FUN_14850386a(param_1);
  *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
  puVar4 = *(undefined8 **)(param_1 + 0x70);
  pcVar5 = (code *)*puVar4;
  plVar9 = puVar4 + 4;
  if ((longlong *)puVar4[2] != (longlong *)0x0) {
    plVar9 = (longlong *)puVar4[2];
  }
  uVar8 = (**(code **)(*plVar9 + 8))();
  uVar7 = (*pcVar5)(uVar8);
  FUN_1485038fe(param_1 + 0x90,uVar7,1);
  if (0 < (int)uVar7) {
    lVar10 = 0;
    uVar11 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x70);
      local_4c = (undefined4)uVar11;
      pcVar5 = *(code **)(lVar6 + 0x40);
      plVar9 = (longlong *)(lVar6 + 0x60);
      if (*(longlong **)(lVar6 + 0x50) != (longlong *)0x0) {
        plVar9 = *(longlong **)(lVar6 + 0x50);
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      (*pcVar5)(&local_a0,uVar8,&local_4c);
      lVar6 = *(longlong *)(param_1 + 0x90);
      *(undefined8 *)(lVar6 + 0x30 + lVar10) = local_70;
      puVar4 = (undefined8 *)(lVar6 + 0x20 + lVar10);
      *puVar4 = local_80;
      puVar4[1] = uStack_78;
      puVar4 = (undefined8 *)(lVar6 + 0x10 + lVar10);
      *puVar4 = local_90;
      puVar4[1] = uStack_88;
      puVar3 = (undefined4 *)(lVar6 + lVar10);
      *puVar3 = local_a0;
      puVar3[1] = uStack_9c;
      puVar3[2] = uStack_98;
      puVar3[3] = uStack_94;
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x38;
    } while (uVar7 != uVar11);
  }
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x180) = 0;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  plVar9 = (longlong *)param_2[1];
  if (plVar9 != (longlong *)0x0) {
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
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14850386a FUN_14850386a body=148 status=ok
// SIG undefined FUN_14850386a(void)

void FUN_14850386a(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_14054c6c4(param_1 + 0x268);
  if (0 < *(int *)(param_1 + 0x98)) {
    uVar2 = 0;
    do {
      lVar1 = 0x18c;
      if ((longlong)*(int *)(param_1 + 0x270) != 0) {
        lVar3 = 0;
        do {
          if (uVar2 == *(uint *)(*(longlong *)(param_1 + 0x268) + lVar3)) {
            lVar1 = 0x1a4;
            break;
          }
          lVar3 = lVar3 + 4;
        } while ((longlong)*(int *)(param_1 + 0x270) * 4 != lVar3);
      }
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x698) + 0x18 + uVar2 * 0x28) =
           *(undefined4 *)(param_1 + lVar1);
      FUN_1448215fa();
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x98));
  }
  FUN_148503dc6(param_1);
  return;
}



// FUNCTION 1485038fe FUN_1485038fe body=112 status=ok
// SIG undefined FUN_1485038fe(void)

void FUN_1485038fe(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c8d502(param_1,iVar1);
    }
    FUN_1485199ab((longlong)iVar1 * 0x38 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146c8d592(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148503970 FUN_148503970 body=164 status=ok
// SIG undefined FUN_148503970(void)

longlong FUN_148503970(double *param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148519ad4(param_1,&local_60,param_3 + 3);
  local_30 = param_3[2] - param_1[2];
  local_38 = param_3[1] - param_1[1];
  local_40 = *param_3 - *param_1;
  FUN_146bf2028(param_1 + 3,param_2);
  *(undefined4 *)(param_2 + 0x28) = local_50;
  *(undefined4 *)(param_2 + 0x2c) = uStack_4c;
  *(undefined4 *)(param_2 + 0x30) = uStack_48;
  *(undefined4 *)(param_2 + 0x34) = uStack_44;
  *(undefined4 *)(param_2 + 0x18) = local_60;
  *(undefined4 *)(param_2 + 0x1c) = uStack_5c;
  *(undefined4 *)(param_2 + 0x20) = uStack_58;
  *(undefined4 *)(param_2 + 0x24) = uStack_54;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148503a16 FUN_148503a16 body=480 status=ok
// SIG undefined FUN_148503a16(void)

double * FUN_148503a16(double *param_1,double *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar1 = param_1[6];
  dVar2 = *(double *)(param_3 + 0x30);
  dVar3 = param_1[3];
  dVar4 = param_1[4];
  dVar5 = *(double *)(param_3 + 0x18);
  dVar6 = *(double *)(param_3 + 0x20);
  dVar7 = param_1[5];
  dVar8 = *(double *)(param_3 + 0x28);
  FUN_146bed047(&local_b8,param_1 + 3);
  dVar9 = param_1[2];
  dVar10 = param_1[1];
  *param_2 = local_b8 + *param_1;
  param_2[1] = local_b0 + dVar10;
  param_2[2] = local_a8 + dVar9;
  param_2[3] = (dVar4 * dVar8 + dVar1 * dVar5 + dVar2 * dVar3) - dVar7 * dVar6;
  param_2[4] = (dVar7 * dVar5 + dVar1 * dVar6 + dVar2 * dVar4) - dVar3 * dVar8;
  param_2[5] = (dVar3 * dVar6 + dVar1 * dVar8 + dVar2 * dVar7) - dVar5 * dVar4;
  param_2[6] = ((dVar1 * dVar2 - dVar5 * dVar3) - dVar4 * dVar6) - dVar7 * dVar8;
  if ((local_a0 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148503bf8 FUN_148503bf8 body=461 status=ok
// SIG undefined FUN_148503bf8(void)

void FUN_148503bf8(double *param_1,double *param_2,double *param_3,double param_4)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  FUN_146bfbafe(param_2);
  FUN_146bfbafe(param_3);
  dVar2 = param_3[3] * param_2[3] +
          param_3[2] * param_2[2] + *param_3 * *param_2 + param_3[1] * param_2[1];
  if (dVar2 < -0.99) {
    *param_2 = -*param_2;
    param_2[1] = -param_2[1];
    param_2[2] = -param_2[2];
    param_2[3] = -param_2[3];
  }
  dVar2 = acos(dVar2);
  uVar1 = -(ulonglong)(-dVar2 <= dVar2);
  if (1e-08 <= (double)(~uVar1 & (ulonglong)-dVar2 | uVar1 & (ulonglong)dVar2)) {
    dVar3 = sin(dVar2);
    dVar4 = sin(dVar2 - param_4 * dVar2);
    dVar4 = dVar4 * (1.0 / dVar3);
    dVar2 = sin(param_4 * dVar2);
    dVar2 = dVar2 * (1.0 / dVar3);
    *param_1 = *param_2 * dVar4 + *param_3 * dVar2;
    param_1[1] = param_2[1] * dVar4 + param_3[1] * dVar2;
    param_1[2] = param_2[2] * dVar4 + param_3[2] * dVar2;
    dVar2 = dVar4 * param_2[3] + dVar2 * param_3[3];
  }
  else {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    dVar2 = param_2[3];
  }
  param_1[3] = dVar2;
  FUN_146bfbafe(param_1,0);
  return;
}



// FUNCTION 148503dc6 FUN_148503dc6 body=520 status=ok
// SIG undefined FUN_148503dc6(void)

void FUN_148503dc6(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x270);
    if ((lVar3 == 0) || (*(int *)(param_1 + 0x98) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
    }
    piVar1 = *(int **)(param_1 + 0x268);
    lVar4 = *(longlong *)(param_1 + 0x68);
    lVar2 = *(longlong *)(param_1 + 0x90);
    lVar5 = (longlong)*piVar1 * 0x38;
    local_78 = *(double *)(lVar2 + lVar5);
    dStack_70 = *(double *)(lVar2 + 8 + lVar5);
    local_68 = *(double *)(lVar2 + 0x10 + lVar5);
    local_98 = *(undefined8 *)(lVar2 + 0x18 + lVar5);
    uStack_90 = *(undefined8 *)(lVar2 + 0x20 + lVar5);
    uVar7 = *(undefined8 *)(lVar2 + 0x28 + lVar5);
    local_88 = (undefined4)uVar7;
    uStack_84 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar7 = *(undefined8 *)(lVar2 + 0x30 + lVar5);
    if (*(int *)(lVar4 + 0xac) == 0) {
      if (*(int *)(lVar4 + 0xa8) == 0) {
        lVar4 = lVar3 * 4;
        lVar3 = 0;
        dStack_70 = DAT_14c8464e8;
        dVar6 = DAT_14c8464e0;
        local_68 = DAT_14c8464f0;
        do {
          lVar5 = (longlong)*(int *)((longlong)piVar1 + lVar3) * 0x38;
          dVar6 = dVar6 + *(double *)(lVar2 + lVar5);
          dStack_70 = dStack_70 + *(double *)(lVar2 + 8 + lVar5);
          local_68 = local_68 + *(double *)(lVar2 + 0x10 + lVar5);
          lVar3 = lVar3 + 4;
        } while (lVar4 - lVar3 != 0);
        uVar7 = 0x3ff0000000000000;
        local_78 = 1.0 / (double)*(int *)(param_1 + 0x270);
        local_68 = local_68 * local_78;
        dStack_70 = dStack_70 * local_78;
        local_78 = local_78 * dVar6;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_84 = 0;
      }
    }
    else if (*(int *)(lVar4 + 0xac) == 2) {
      lVar3 = (longlong)piVar1[lVar3 + -1] * 0x38;
      local_78 = *(double *)(lVar2 + lVar3);
      dStack_70 = *(double *)(lVar2 + 8 + lVar3);
      local_68 = *(double *)(lVar2 + 0x10 + lVar3);
      local_98 = *(undefined8 *)(lVar2 + 0x18 + lVar3);
      uStack_90 = *(undefined8 *)(lVar2 + 0x20 + lVar3);
      uVar7 = *(undefined8 *)(lVar2 + 0x28 + lVar3);
      local_88 = (undefined4)uVar7;
      uStack_84 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uVar7 = *(undefined8 *)(lVar2 + 0x30 + lVar3);
    }
    uStack_80 = (undefined4)uVar7;
    uStack_7c = (undefined4)((ulonglong)uVar7 >> 0x20);
    uStack_60 = 0;
    local_58 = 0x3ff0000000000000;
    uStack_50 = 0x3ff0000000000000;
    local_48 = 0x3ff0000000000000;
    uStack_40 = 0;
    FUN_148415b4c(*(longlong *)(param_1 + 0x1c0),&local_98,CONCAT71((int7)((ulonglong)lVar4 >> 8),1)
                 );
    (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0x350))(*(longlong **)(param_1 + 0x1c0),1);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148503fec FUN_148503fec body=248 status=ok
// SIG undefined FUN_148503fec(void)

void FUN_148503fec(longlong param_1,undefined4 *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [56];
  undefined8 local_80;
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68[0] = *(longlong *)(param_1 + 0x220);
  local_58[0] = 0;
  if (local_68[0] != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x240);
    if (*(undefined8 **)(param_1 + 0x230) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x230);
    }
    (**(code **)*puVar2)(puVar2,local_58);
  }
  local_e8 = *param_2;
  uStack_e4 = param_2[1];
  uStack_e0 = param_2[2];
  uStack_dc = param_2[3];
  local_d8 = param_2[4];
  uStack_d4 = param_2[5];
  uStack_d0 = param_2[6];
  uStack_cc = param_2[7];
  local_c8 = param_2[8];
  uStack_c4 = param_2[9];
  uStack_c0 = param_2[10];
  uStack_bc = param_2[0xb];
  cVar1 = FUN_146c84814(param_1 + 0xa0,&local_e8,local_b8,local_68);
  if (cVar1 != '\0') {
    *param_3 = 1;
    *(undefined8 *)(param_3 + 8) = local_80;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined8 *)(param_3 + 0x20) = 0x3ff0000000000000;
    param_3[0x28] = 0;
    *(undefined8 *)(param_3 + 0x2c) = 0;
    *(undefined8 *)(param_3 + 0x34) = 0;
    *(undefined4 *)(param_3 + 0x3c) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485040e6 FUN_1485040e6 body=85 status=ok
// SIG undefined FUN_1485040e6(void)

undefined1 * FUN_1485040e6(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_148503fec(param_1 + -0x30,param_3,param_2);
  return param_2;
}



// FUNCTION 14850413c FUN_14850413c body=294 status=ok
// SIG undefined FUN_14850413c(void)

void FUN_14850413c(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8 [20];
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68[0] = *(longlong *)(param_1 + 0x1f0);
  local_58[0] = 0;
  if (local_68[0] != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x210);
    if (*(undefined8 **)(param_1 + 0x200) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x200);
    }
    (**(code **)*puVar4)(puVar4,local_58);
  }
  local_e8 = *param_2;
  uStack_e4 = param_2[1];
  uStack_e0 = param_2[2];
  uStack_dc = param_2[3];
  local_d8 = param_2[4];
  uStack_d4 = param_2[5];
  uStack_d0 = param_2[6];
  uStack_cc = param_2[7];
  local_c8 = param_2[8];
  uStack_c4 = param_2[9];
  uStack_c0 = param_2[10];
  uStack_bc = param_2[0xb];
  cVar1 = FUN_146c84814(param_1 + 0x70,&local_e8,local_b8,local_68);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + -8);
    lVar3 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
    (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x10))(lVar3 + 0x28,&DAT_14cb4ce20);
    FUN_148504264(param_1 + -0x30,local_b8[0],*(undefined1 *)(param_1 + 0x178));
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + -8);
    lVar3 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
    (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x18))(lVar3 + 0x28);
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148504264 FUN_148504264 body=619 status=ok
// SIG undefined FUN_148504264(void)

void FUN_148504264(longlong param_1,int param_2,char param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_1 + 0x270);
  lVar10 = (longlong)local_50;
  pvVar3 = *(void **)(param_1 + 0x268);
  if (lVar10 == 0) {
    local_4c = 0;
  }
  else {
    FUN_144a06ca8(&local_58,local_50,0);
    memcpy(local_58,pvVar3,lVar10 << 2);
  }
  puVar1 = (undefined8 *)(param_1 + 0x268);
  if (param_3 == '\0') {
    iVar6 = *(int *)(param_1 + 0x270);
    if ((longlong)iVar6 < 1) {
      if (param_2 < 0) goto LAB_1485043bb;
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x268);
      lVar11 = 0;
      do {
        uVar2 = *(uint *)(lVar10 + lVar11);
        if ((-1 < (int)uVar2) &&
           (lVar4 = *(longlong *)(param_1 + 0x170), (int)uVar2 < *(int *)(lVar4 + 0x6c0))) {
          lVar9 = lVar4 + 0x6a8;
          if (*(longlong *)(lVar4 + 0x6b8) != 0) {
            lVar9 = *(longlong *)(lVar4 + 0x6b8);
          }
          if ((*(uint *)(lVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
            *(undefined4 *)(*(longlong *)(lVar4 + 0x698) + 0x18 + (ulonglong)uVar2 * 0x28) =
                 *(undefined4 *)(param_1 + 0x18c);
            FUN_1448215fa();
          }
        }
        lVar11 = lVar11 + 4;
      } while ((longlong)iVar6 * 4 != lVar11);
      *(undefined4 *)(param_1 + 0x270) = 0;
      if (*(int *)(param_1 + 0x274) != 0) {
        FUN_14481578e(puVar1,0);
      }
      if (param_2 < 0) goto LAB_1485043b4;
    }
LAB_1485043aa:
    FUN_148504598(param_1,param_2);
  }
  else if ((-1 < param_2) && (cVar5 = FUN_1485044d0(param_1,param_2), cVar5 == '\0'))
  goto LAB_1485043aa;
LAB_1485043b4:
  iVar6 = *(int *)(param_1 + 0x270);
LAB_1485043bb:
  if ((iVar6 != local_50) ||
     ((iVar6 != 0 && (iVar6 = memcmp((void *)*puVar1,local_58,(longlong)iVar6 << 2), iVar6 != 0))))
  {
    plVar7 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
    lVar10 = (**(code **)(*plVar7 + 0x2c8))(plVar7);
    puVar8 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    pvVar3 = local_58;
    *puVar8 = &PTR_LAB_14af0bcc0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    lVar11 = (longlong)local_50;
    *(int *)(puVar8 + 2) = local_50;
    if (lVar11 != 0) {
      FUN_144a06ca8(puVar8 + 1,local_50,0);
      memcpy((void *)puVar8[1],pvVar3,lVar11 << 2);
    }
    FUN_14054c6c4(puVar8 + 3,puVar1);
    local_60 = puVar8;
    (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x20))
              ((longlong *)(lVar10 + 0x28),param_1,&local_60,&DAT_14cb4ce20);
  }
  FUN_148503dc6(param_1);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485044d0 FUN_1485044d0 body=199 status=ok
// SIG undefined FUN_1485044d0(void)

undefined8 FUN_1485044d0(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x270);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x268);
    iVar3 = 1;
    lVar5 = 0;
    lVar4 = 0;
    do {
      if (*(uint *)(lVar1 + lVar5) == param_2) {
        if (iVar3 == 0) {
          return 0;
        }
        if (iVar2 - iVar3 != 0) {
          memmove((void *)(lVar1 + (lVar4 >> 0x20) * 4),(void *)(lVar1 + (lVar4 >> 0x20) * 4 + 4),
                  (longlong)(iVar2 - iVar3) << 2);
          iVar2 = *(int *)(param_1 + 0x270);
        }
        *(int *)(param_1 + 0x270) = iVar2 + -1;
        FUN_14479f406(param_1 + 0x268);
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x698) + 0x18 + (ulonglong)param_2 * 0x28)
             = *(undefined4 *)(param_1 + 0x18c);
        FUN_1448215fa();
        return 1;
      }
      lVar4 = lVar4 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 4;
    } while ((longlong)iVar2 << 2 != lVar5);
  }
  return 0;
}



// FUNCTION 148504598 FUN_148504598 body=105 status=ok
// SIG undefined FUN_148504598(void)

void FUN_148504598(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x270);
  *(uint *)(param_1 + 0x270) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x274) < iVar1 + 1U) {
    FUN_1446f48e2(param_1 + 0x268,iVar1);
  }
  *(int *)(*(longlong *)(param_1 + 0x268) + (longlong)iVar1 * 4) = param_2;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x698) + 0x18 + (longlong)param_2 * 0x28) =
       *(undefined4 *)(param_1 + 0x1a4);
  FUN_1448215fa();
  return;
}



// FUNCTION 148504602 FUN_148504602 body=79 status=ok
// SIG undefined FUN_148504602(void)

undefined1 * FUN_148504602(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_148503fec(param_1 + -0x38,param_3,param_2);
  *(undefined8 *)(param_2 + 8) = 0;
  return param_2;
}



// FUNCTION 14850465c FUN_14850465c body=202 status=ok
// SIG undefined FUN_14850465c(void)

void FUN_14850465c(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8 [20];
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68[0] = *(longlong *)(param_1 + 0x1e8);
  local_58[0] = 0;
  if (local_68[0] != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x208);
    if (*(undefined8 **)(param_1 + 0x1f8) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x1f8);
    }
    (**(code **)*puVar2)(puVar2,local_58);
  }
  local_e8 = *param_2;
  uStack_e4 = param_2[1];
  uStack_e0 = param_2[2];
  uStack_dc = param_2[3];
  local_d8 = param_2[4];
  uStack_d4 = param_2[5];
  uStack_d0 = param_2[6];
  uStack_cc = param_2[7];
  local_c8 = param_2[8];
  uStack_c4 = param_2[9];
  uStack_c0 = param_2[10];
  uStack_bc = param_2[0xb];
  cVar1 = FUN_146c84814(param_1 + 0x68,&local_e8,local_b8,local_68);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x228) = local_b8[0];
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148504754 FUN_148504754 body=72 status=ok
// SIG undefined FUN_148504754(void)

void FUN_148504754(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145b75180();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_148504787;
  }
  param_2 = 0;
LAB_148504787:
  FUN_14850386a(param_2,param_1 + 0x18);
  return;
}



// FUNCTION 14850479c FUN_14850479c body=72 status=ok
// SIG undefined FUN_14850479c(void)

void FUN_14850479c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145b75180();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_1485047cf;
  }
  param_2 = 0;
LAB_1485047cf:
  FUN_14850386a(param_2,param_1 + 8);
  return;
}



// FUNCTION 1485047e4 FUN_1485047e4 body=32 status=ok
// SIG undefined FUN_1485047e4(void)

undefined8 FUN_1485047e4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FSpaceCurveDeformationMechanicSelectionChange");
  return param_2;
}



// FUNCTION 148504804 FUN_148504804 body=110 status=ok
// SIG undefined FUN_148504804(void)

void FUN_148504804(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145b75180();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_148504837;
  }
  param_2 = 0;
LAB_148504837:
  FUN_148460dca(param_2 + 0x90,param_1 + 0x18);
  *(undefined1 *)(param_2 + 0x160) = 0;
  *(undefined1 *)(param_2 + 0x180) = 0;
  FUN_148503dc6(param_2);
  FUN_1447f69b6(param_2 + 0x50);
  return;
}



// FUNCTION 148504872 FUN_148504872 body=110 status=ok
// SIG undefined FUN_148504872(void)

void FUN_148504872(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145b75180();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_1485048a5;
  }
  param_2 = 0;
LAB_1485048a5:
  FUN_148460dca(param_2 + 0x90,param_1 + 8);
  *(undefined1 *)(param_2 + 0x160) = 0;
  *(undefined1 *)(param_2 + 0x180) = 0;
  FUN_148503dc6(param_2);
  FUN_1447f69b6(param_2 + 0x50);
  return;
}



// FUNCTION 1485048e0 FUN_1485048e0 body=32 status=ok
// SIG undefined FUN_1485048e0(void)

undefined8 FUN_1485048e0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FSpaceCurveDeformationMechanicMovementChange");
  return param_2;
}



// FUNCTION 14850490a FUN_14850490a body=373 status=ok
// SIG undefined FUN_14850490a(void)

void FUN_14850490a(longlong param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  double *pdVar10;
  double *pdVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  FUN_1405b70a4(param_1 + 0xa8);
  pdVar10 = param_3;
  pdVar11 = (double *)(param_1 + 0x3b0);
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *pdVar11 = *pdVar10;
    pdVar10 = pdVar10 + 1;
    pdVar11 = pdVar11 + 1;
  }
  if (0 < *(int *)(param_1 + 0xb0)) {
    lVar8 = 0x10;
    lVar9 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0xa8);
      pdVar10 = (double *)(lVar2 + -0x10 + lVar8);
      dVar13 = *pdVar10 * param_3[8];
      dVar14 = pdVar10[1] * param_3[9];
      dVar12 = *(double *)(lVar2 + lVar8) * param_3[10];
      dVar5 = *param_3;
      dVar6 = param_3[1];
      dVar7 = param_3[2];
      dVar1 = param_3[3];
      dVar15 = dVar14 * dVar5 - dVar13 * dVar6;
      dVar16 = dVar12 * dVar6 - dVar14 * dVar7;
      dVar17 = dVar13 * dVar7 - dVar5 * dVar12;
      dVar16 = dVar16 + dVar16;
      dVar17 = dVar17 + dVar17;
      dVar15 = dVar15 + dVar15;
      dVar4 = (dVar7 * dVar16 - dVar5 * dVar15) + param_3[3] * dVar17 + dVar14 + param_3[5];
      dVar14 = param_3[6];
      auVar3._8_4_ = SUB84(dVar4,0);
      auVar3._0_8_ = (dVar15 * dVar6 - dVar17 * dVar7) + dVar1 * dVar16 + dVar13 + param_3[4];
      auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *(undefined1 (*) [16])(lVar2 + -0x10 + lVar8) = auVar3;
      *(double *)(lVar2 + lVar8) =
           dVar15 * dVar1 + dVar12 + (dVar17 * dVar5 - dVar16 * dVar6) + dVar14;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x18;
    } while (lVar9 < *(int *)(param_1 + 0xb0));
  }
  return;
}



// FUNCTION 148504a80 FUN_148504a80 body=102 status=ok
// SIG undefined FUN_148504a80(void)

void FUN_148504a80(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  (**(code **)(*param_1 + 0x2d0))();
  puVar3 = (undefined8 *)*param_2;
  iVar2 = (int)param_1[0x16];
  *(uint *)(param_1 + 0x16) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xb4) < iVar2 + 1U) {
    FUN_1403e3958(param_1 + 0x15,iVar2);
  }
  lVar4 = param_1[0x15];
  *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar2 * 0x18) = puVar3[2];
  uVar5 = puVar3[1];
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x18);
  *puVar1 = *puVar3;
  puVar1[1] = uVar5;
  return;
}



// FUNCTION 148504ae6 FUN_148504ae6 body=543 status=ok
// SIG undefined FUN_148504ae6(void)

void FUN_148504ae6(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auStack_1c8 [40];
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_58 = DAT_14c8464f0;
  local_68 = DAT_14c8464e0;
  uStack_60 = DAT_14c8464e8;
  local_78 = DAT_14c8464f0;
  local_88 = DAT_14c8464e0;
  uStack_80 = DAT_14c8464e8;
  local_b8 = *param_2;
  uStack_b4 = param_2[1];
  uStack_b0 = param_2[2];
  uStack_ac = param_2[3];
  local_a8 = *(undefined8 *)(param_2 + 4);
  uStack_a0 = *(undefined8 *)(param_2 + 6);
  local_98 = *(undefined8 *)(param_2 + 8);
  uStack_90 = *(undefined8 *)(param_2 + 10);
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 < 2) {
    dVar2 = 1.79769313486232e+308;
  }
  else {
    dVar2 = 1.79769313486232e+308;
    lVar3 = 0;
    do {
      FUN_146bd9232(&local_1a0,*(longlong *)(param_1 + 0xa8) + lVar3,
                    *(longlong *)(param_1 + 0xa8) + lVar3 + 0x18);
      local_100 = 0xbff0000000000000;
      local_168 = CONCAT44(uStack_b4,local_b8);
      uStack_160 = CONCAT44(uStack_ac,uStack_b0);
      local_158 = local_a8;
      uStack_150 = uStack_a0;
      local_148 = local_98;
      uStack_140 = uStack_90;
      local_138 = local_1a0;
      uStack_134 = uStack_19c;
      uStack_130 = uStack_198;
      uStack_12c = uStack_194;
      local_128 = local_190;
      uStack_124 = uStack_18c;
      uStack_120 = uStack_188;
      uStack_11c = uStack_184;
      local_118 = local_180;
      uStack_114 = uStack_17c;
      uStack_110 = uStack_178;
      uStack_10c = uStack_174;
      local_108 = local_170;
      dVar4 = (double)FUN_148519cb4(&local_168);
      if (dVar4 < dVar2) {
        local_58 = local_e8;
        local_68 = local_f8;
        uStack_60 = uStack_f0;
        local_88 = local_d8;
        uStack_80 = uStack_d0;
        local_78 = local_c8;
        dVar2 = dVar4;
      }
      lVar3 = lVar3 + 0x18;
    } while ((ulonglong)(iVar1 - 1) * 0x18 != lVar3);
  }
  if (dVar2 < 0.0) {
    dVar2 = sqrt(dVar2);
  }
  else {
    dVar2 = SQRT(dVar2);
  }
  *(double *)(param_1 + 0x70) = dVar2;
  *(undefined8 *)(param_1 + 0x78) = local_88;
  *(undefined8 *)(param_1 + 0x80) = uStack_80;
  *(undefined8 *)(param_1 + 0x88) = local_78;
  *(undefined4 *)(param_1 + 0x90) = (undefined4)local_68;
  *(undefined4 *)(param_1 + 0x94) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0x98) = (undefined4)uStack_60;
  *(undefined4 *)(param_1 + 0x9c) = uStack_60._4_4_;
  *(undefined8 *)(param_1 + 0xa0) = local_58;
  if ((local_50 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148504d06 FUN_148504d06 body=261 status=ok
// SIG undefined FUN_148504d06(void)

void FUN_148504d06(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  float local_f0;
  undefined4 local_e8;
  undefined1 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [64];
  float local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  (**(code **)(*param_2 + 0x18))(param_2,local_88);
  plVar1 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
  local_98 = DAT_14c758e60;
  local_94 = DAT_14c758e60;
  local_90 = DAT_14c758c60;
  local_8c = 0x3f800000;
  local_a8 = *(undefined8 *)(param_1 + 0xa0);
  local_b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_b0 = *(undefined8 *)(param_1 + 0x98);
  local_c8 = *(undefined8 *)(param_1 + 0x88);
  local_d8 = *(undefined4 *)(param_1 + 0x78);
  uStack_d4 = *(undefined4 *)(param_1 + 0x7c);
  uStack_d0 = *(undefined4 *)(param_1 + 0x80);
  uStack_cc = *(undefined4 *)(param_1 + 0x84);
  local_e0 = 1;
  local_f8 = 1;
  local_e8 = 0;
  local_f0 = local_48 / 90.0;
  (**(code **)(*plVar1 + 0x30))(plVar1);
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148504e10 FUN_148504e10 body=171 status=ok
// SIG undefined FUN_148504e10(void)

void FUN_148504e10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&local_28,L"PreviewMesh",1);
  lVar1 = FUN_148504ebc(param_1,local_28);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  *(longlong *)(param_1 + 0x58) = lVar1;
  FUN_14851b11a(lVar1,param_2,&DAT_14c846480);
  FUN_14485c47a(param_1 + 0x88,param_2);
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148504ebc FUN_148504ebc body=183 status=ok
// SIG undefined FUN_148504ebc(void)

undefined8 FUN_148504ebc(undefined8 param_1,longlong param_2)

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
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1410a5580();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148504f74 FUN_148504f74 body=162 status=ok
// SIG undefined FUN_148504f74(void)

void FUN_148504f74(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  FUN_148504e10();
  uVar6 = FUN_14001cc68(0x58,0x10);
  FUN_14851a294(uVar6,param_3);
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = uVar6;
  FUN_145c8faba(uVar3);
  uVar7 = 0;
  FUN_145c8faba(0);
  lVar4 = DAT_14cb4ce80;
  iVar1 = *(int *)(param_1 + 0xb8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar5 = FUN_144a61b4f();
    uVar7 = (ulonglong)(bVar5 ^ 1);
  }
  iVar2 = *(int *)(lVar4 + uVar7 * 4);
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  *(int *)(*(longlong *)(param_1 + 0xb0) + 0x50) = iVar1;
  return;
}



// FUNCTION 148505016 FUN_148505016 body=123 status=ok
// SIG undefined FUN_148505016(void)

void FUN_148505016(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_143b84722();
    FUN_143b84794(param_1);
  }
  cVar1 = FUN_148505092(param_1);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0x70) == 0) {
      FUN_14851b580(*(undefined8 *)(param_1 + 0x58));
    }
    else {
      FUN_14851b56e();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_14851b58e(uVar2);
      return;
    }
  }
  else {
    FUN_14851b56e(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x78));
    uVar2 = *(undefined8 *)(param_1 + 0x58);
  }
  FUN_14851b5a0(uVar2);
  return;
}



// FUNCTION 148505092 FUN_148505092 body=130 status=ok
// SIG undefined FUN_148505092(void)

bool FUN_148505092(longlong param_1)

{
  bool bVar1;
  undefined1 auStack_48 [32];
  int local_28 [2];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x78) == 0) || (*(longlong *)(param_1 + 0xb0) == 0)) ||
     (*(int *)(param_1 + 0xa0) != 3)) {
    bVar1 = false;
  }
  else {
    FUN_143b849ee(*(longlong *)(param_1 + 0xb0),local_28);
    if (local_28[0] != 3) {
      local_20 = 0.0;
    }
    bVar1 = (double)*(float *)(param_1 + 0xa8) < local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar1;
}



// FUNCTION 148505116 FUN_148505116 body=108 status=ok
// SIG undefined FUN_148505116(void)

void FUN_148505116(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  *(int *)(param_1 + 0xb8) = param_2;
  lVar2 = DAT_14cb4ce80;
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar3 ^ 1);
      lVar4 = *(longlong *)(param_1 + 0xb0);
    }
    iVar1 = *(int *)(lVar2 + uVar5 * 4);
    if (0 < iVar1) {
      param_2 = iVar1;
    }
    *(int *)(lVar4 + 0x50) = param_2;
  }
  return;
}



// FUNCTION 148505182 FUN_148505182 body=98 status=ok
// SIG undefined FUN_148505182(void)

undefined8 * FUN_148505182(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *param_2 = *(undefined8 *)(lVar1 + 0x120);
  *(undefined8 *)(lVar1 + 0x120) = 0;
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0x10) == 2) {
    FUN_14851a3fa(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return param_2;
}



// FUNCTION 1485051e4 FUN_1485051e4 body=69 status=ok
// SIG undefined FUN_1485051e4(void)

void FUN_1485051e4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x10) == 1) {
      *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar1 + 0x10) = 2;
    }
    else if (*(int *)(lVar1 + 0x10) == 0) {
      FUN_14851a3fa();
    }
  }
  *(undefined1 *)(param_1 + 0x91) = 0;
  return;
}



// FUNCTION 14850522a FUN_14850522a body=107 status=ok
// SIG undefined FUN_14850522a(void)

byte FUN_14850522a(longlong param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  code *local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = param_3 ^ 1 | *(byte *)(param_1 + 0x91);
  if (bVar1 == 1) {
    local_18 = &local_28;
    local_20 = FUN_143b98c3e;
    local_28 = param_2;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x2a0))();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148505296 FUN_148505296 body=103 status=ok
// SIG undefined FUN_148505296(void)

undefined8 FUN_148505296(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  byte bVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = (byte)(param_3 & 0xffffffff) ^ 1 | *(byte *)(param_1 + 0x91);
  if (bVar1 == 1) {
    local_20 = *param_2;
    local_18 = param_2[1];
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x2a0))(*(longlong **)(param_1 + 0x58),&local_20)
    ;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)((param_3 & 0xffffffff) >> 8),bVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485052fe FUN_1485052fe body=210 status=ok
// SIG undefined FUN_1485052fe(void)

void FUN_1485052fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *_Src;
  longlong lVar1;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined8 *)0x0;
  uStack_40 = 1;
  FUN_144769b64(&local_48,0);
  _Src = local_48;
  *local_48 = param_2;
  local_58 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_40;
  local_50 = (int)uStack_40;
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1411312f2(&local_58,uStack_40 & 0xffffffff,0);
    memcpy(local_58,_Src,lVar1 << 3);
  }
  FUN_1485053d2(param_1,&local_58,param_3,0);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485053d2 FUN_1485053d2 body=152 status=ok
// SIG undefined FUN_1485053d2(void)

void FUN_1485053d2(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  
  FUN_1457c8d02(param_1 + 0x60);
  if (param_3 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(param_3);
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x78) = param_3;
  if ((param_4 != 0) && ((bVar1 & 1) != 0)) {
    FUN_14689c22e(param_4);
  }
  *(longlong *)(param_1 + 0x80) = param_4;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_14851b480(*(longlong *)(param_1 + 0x58),param_1 + 0x60);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14850546a FUN_14850546a body=87 status=ok
// SIG undefined FUN_14850546a(void)

void FUN_14850546a(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(param_2);
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x78) = param_2;
  if ((param_3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_14689c22e(param_3);
  }
  *(longlong *)(param_1 + 0x80) = param_3;
  return;
}



// FUNCTION 1485054c2 FUN_1485054c2 body=8 status=ok
// SIG undefined FUN_1485054c2(void)

void FUN_1485054c2(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 1485054ca FUN_1485054ca body=15 status=ok
// SIG undefined FUN_1485054ca(void)

void FUN_1485054ca(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xa4) = param_2;
  FUN_14851bab8(*(undefined8 *)(param_1 + 0x58));
  return;
}



// FUNCTION 1485054da FUN_1485054da body=14 status=ok
// SIG undefined FUN_1485054da(void)

void FUN_1485054da(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa5) = param_2;
  *(undefined1 *)(param_1 + 0xa6) = param_3;
  return;
}



// FUNCTION 148505508 FUN_148505508 body=94 status=ok
// SIG undefined FUN_148505508(void)

void FUN_148505508(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_145b7526a();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(lVar2 + 0x3b);
  *(undefined1 *)(param_1 + 0xc1) = *(undefined1 *)(lVar2 + 0x3c);
  *(undefined1 *)(param_1 + 0x121) = *(undefined1 *)(lVar2 + 0x3a);
  *(undefined1 *)(param_1 + 0x120) = *(undefined1 *)(lVar2 + 0x39);
  return;
}



// FUNCTION 148505596 FUN_148505596 body=258 status=ok
// SIG undefined FUN_148505596(void)

void FUN_148505596(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2c8))(param_1,local_58,puVar1);
  *param_3 = local_58[0];
  if (DAT_14c950c29 == '\x01') {
    if (local_50 == 0) {
      local_50 = 0;
    }
    else {
      FUN_14689c22e();
    }
  }
  *(longlong *)(param_3 + 8) = local_50;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14850569a FUN_14850569a body=223 status=ok
// SIG undefined FUN_14850569a(void)

void FUN_14850569a(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_6d8 [32];
  undefined1 local_6b8 [32];
  undefined1 local_698 [1648];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_6d8;
  FUN_14850577a(local_698,1);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_698);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_698);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar1 = local_698;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,local_6b8,puVar1);
  FUN_148505896(param_3,local_6b8);
  FUN_1484c7624(local_698);
  if ((local_28 ^ (ulonglong)auStack_6d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14850577a FUN_14850577a body=283 status=ok
// SIG undefined FUN_14850577a(void)

undefined8 * FUN_14850577a(undefined8 *param_1,char param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3ff00000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3ff00000;
  param_1[0x10] = 0x3ff0000000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x18) = 0x301;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined4 *)((longlong)param_1 + 0x121) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x42c80000;
  *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) & 0xf0 | 8;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff80000000;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x2a) = DAT_14c761520;
  *(undefined4 *)((longlong)param_1 + 0x154) = DAT_14c761524;
  *(undefined1 *)(param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x161) = 0;
  *(undefined8 *)((longlong)param_1 + 0x169) = 0;
  if ((param_2 != '\0') && (*DAT_14cb4d028 == '\0')) {
    FUN_148505508(param_1);
  }
  return param_1;
}



// FUNCTION 148505896 FUN_148505896 body=134 status=ok
// SIG undefined FUN_148505896(void)

undefined1 * FUN_148505896(undefined1 *param_1,undefined1 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  lVar2 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 8);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 8) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x10);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 0x10);
      bVar1 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x18);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 0x18);
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar2;
  return param_1;
}



// FUNCTION 14850591c FUN_14850591c body=337 status=ok
// SIG undefined FUN_14850591c(void)

void FUN_14850591c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  longlong local_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = 0;
  lStack_b0 = 0;
  local_a8 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar1 = &local_b8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2d8))(param_1,local_c8,puVar1);
  *param_3 = local_c8[0];
  if (DAT_14c950c29 == '\x01') {
    if (local_c0 == 0) {
      local_c0 = 0;
    }
    else {
      FUN_14689c22e();
    }
  }
  *(longlong *)(param_3 + 8) = local_c0;
  if (lStack_b0 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148505a6e FUN_148505a6e body=316 status=ok
// SIG undefined FUN_148505a6e(void)

void FUN_148505a6e(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  longlong local_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70[0] = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_1400b22c2(local_40,&DAT_149e02088);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar1 = local_70;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2b8))(param_1,local_80,puVar1);
  *param_3 = local_80[0];
  if (DAT_14c950c29 == '\x01') {
    if (local_78 == 0) {
      local_78 = 0;
    }
    else {
      FUN_14689c22e();
    }
  }
  *(longlong *)(param_3 + 8) = local_78;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148505bae FUN_148505bae body=102 status=ok
// SIG undefined FUN_148505bae(void)

void FUN_148505bae(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x440;
  if (lVar1 == param_2) {
    *(undefined1 *)(param_1 + 0x170) = 1;
    if ((*(byte *)(param_1 + 0x660) & 1) == 0) {
      return;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x660) & 1) != 0) {
      FUN_141082778(lVar1);
    }
    FUN_146bff712(lVar1,param_2);
    *(undefined1 *)(param_1 + 0x660) = 1;
    *(undefined1 *)(param_1 + 0x170) = 1;
  }
  FUN_146c3d852(lVar1);
  return;
}



// FUNCTION 148505c14 FUN_148505c14 body=102 status=ok
// SIG undefined FUN_148505c14(void)

void FUN_148505c14(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x440;
  if (lVar1 == param_2) {
    *(undefined1 *)(param_1 + 0x170) = 1;
    if ((*(byte *)(param_1 + 0x660) & 1) == 0) {
      return;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x660) & 1) != 0) {
      FUN_141082778(lVar1);
    }
    FUN_146bffece(lVar1,param_2);
    *(undefined1 *)(param_1 + 0x660) = 1;
    *(undefined1 *)(param_1 + 0x170) = 1;
  }
  FUN_146c3d852(lVar1);
  return;
}



// FUNCTION 148505c7a FUN_148505c7a body=117 status=ok
// SIG undefined FUN_148505c7a(void)

undefined1 * FUN_148505c7a(undefined1 *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    uVar2 = FUN_148451390(param_2);
    plVar3 = (longlong *)FUN_148505cf0(uVar2);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x2e0))(plVar3);
      if (cVar1 != '\0') {
        (**(code **)(*plVar3 + 0x2a0))();
        return param_1;
      }
      (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,param_3);
      return param_1;
    }
  }
  *param_1 = 3;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 148505cf0 FUN_148505cf0 body=146 status=ok
// SIG undefined FUN_148505cf0(void)

longlong FUN_148505cf0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x28);
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + lVar5);
        if (lVar2 != 0) {
          lVar3 = FUN_145a54a94();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            return lVar2;
          }
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    param_1 = *(longlong *)(param_1 + 0x20);
    if (param_1 == 0) {
      return 0;
    }
    lVar4 = FUN_1459d7446();
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) break;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) != lVar4 + 0x30) {
      return 0;
    }
  }
  return 0;
}



// FUNCTION 148505d82 FUN_148505d82 body=110 status=ok
// SIG undefined FUN_148505d82(void)

undefined1 * FUN_148505d82(undefined1 *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    uVar2 = FUN_148451390(param_2);
    plVar3 = (longlong *)FUN_148505cf0(uVar2);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x2e0))(plVar3);
      if (cVar1 != '\0') {
        (**(code **)(*plVar3 + 0x2b0))();
        return param_1;
      }
      (**(code **)(*plVar3 + 0x2b8))(plVar3,param_1,param_3);
      return param_1;
    }
  }
  *param_1 = 3;
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 148505df0 FUN_148505df0 body=110 status=ok
// SIG undefined FUN_148505df0(void)

undefined1 * FUN_148505df0(undefined1 *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    uVar2 = FUN_148451390(param_2);
    plVar3 = (longlong *)FUN_148505cf0(uVar2);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x2e0))(plVar3);
      if (cVar1 != '\0') {
        (**(code **)(*plVar3 + 0x2d0))();
        return param_1;
      }
      (**(code **)(*plVar3 + 0x2d8))(plVar3,param_1,param_3);
      return param_1;
    }
  }
  *param_1 = 3;
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 148505e5e FUN_148505e5e body=741 status=ok
// SIG undefined FUN_148505e5e(void)

void ** FUN_148505e5e(void **param_1,longlong param_2,char param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) {
    FUN_140056680(param_1,L"InvalidComponent");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
  }
  if (*(longlong *)(*(longlong *)(param_2 + 0xa8) + 0x1c8) == param_2) {
    local_48 = *(void **)(*(longlong *)(param_2 + 0xa8) + 0x18);
  }
  else {
    local_48 = *(void **)(param_2 + 0x18);
  }
  FUN_1400021e4(&local_48,param_1);
  if (param_3 != '\0') {
    local_58 = (void *)0x0;
    local_50 = *(int *)(param_1 + 1);
    lVar2 = (longlong)local_50;
    pvVar1 = *param_1;
    if (lVar2 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,pvVar1,lVar2 * 2);
    }
    FUN_148506144(&local_48,&local_58);
    if (&local_48 == param_1) {
      if (local_48 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_48;
      local_48 = (void *)0x0;
      *(int *)(param_1 + 1) = local_40;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
    }
  }
  lVar2 = FUN_144a7a726();
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
      == lVar2 + 0x30)) {
    lVar2 = *(longlong *)(param_2 + 0x660);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar2);
    }
    else if (lVar2 == 0) goto LAB_148505ed8;
    local_48 = *(void **)(lVar2 + 0x18);
    FUN_1400021e4(&local_48,&local_68);
    FUN_1405f3246(&local_48,&local_68,1);
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    pvVar1 = local_48;
    if (param_3 == '\0') {
      local_68 = (void *)0x0;
      local_60 = local_40;
      if ((longlong)local_40 == 0) {
        local_5c = 0;
      }
      else {
        FUN_1446dd670(&local_68,local_40,0);
        memcpy(local_68,pvVar1,(longlong)local_40 * 2);
      }
    }
    else {
      local_78 = (void *)0x0;
      local_70 = local_40;
      if ((longlong)local_40 == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,local_40,0);
        memcpy(local_78,pvVar1,(longlong)local_40 * 2);
      }
      FUN_148506144(&local_68,&local_78);
    }
    if (&local_68 == param_1) {
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_68;
      local_68 = (void *)0x0;
      *(int *)(param_1 + 1) = local_60;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_5c;
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_148505ed8:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148506144 FUN_148506144 body=363 status=ok
// SIG undefined FUN_148506144(void)

longlong * FUN_148506144(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  short *psVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  
  lVar4 = *param_2;
  iVar10 = (int)param_2[1];
  lVar11 = ((longlong)iVar10 << 0x20) + 0x100000000;
  uVar6 = (longlong)iVar10 * 2;
  do {
    if (uVar6 == 0) goto LAB_148506225;
    uVar1 = uVar6 - 2;
    lVar11 = lVar11 + -0x100000000;
    psVar2 = (short *)(lVar4 + -2 + uVar6);
    uVar6 = uVar1;
  } while (*psVar2 != 0x5f);
  iVar8 = (int)(uVar1 >> 1);
  if (iVar8 != -1) {
    iVar9 = 0;
    iVar5 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar5 = 0;
    }
    if (iVar8 + 1 < iVar5) {
      lVar11 = lVar11 >> 0x20;
      uVar12 = 0xffffffff;
      iVar10 = 0;
      do {
        iVar3 = iswxdigit(*(wint_t *)(*param_2 + lVar11 * 2));
        if (iVar3 == 0) {
          *param_1 = *param_2;
          *param_2 = 0;
          *(int *)(param_1 + 1) = (int)param_2[1];
          *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
          param_2[1] = 0;
          return param_1;
        }
        iVar3 = iswdigit(*(wint_t *)(*param_2 + lVar11 * 2));
        iVar10 = iVar10 + (uint)(iVar3 == 0);
        iVar9 = iVar9 + (uint)(iVar3 != 0);
        lVar11 = lVar11 + 1;
        uVar12 = uVar12 + 1;
      } while (lVar11 < iVar5);
      if (6 < uVar12 && (iVar10 != 0 && iVar9 != 0)) {
        iVar10 = (int)param_2[1] + -1;
        if ((int)param_2[1] == 0) {
          puVar7 = &DAT_149dfb77a;
          iVar10 = 0;
        }
        else {
          puVar7 = (undefined2 *)*param_2;
        }
        if (iVar8 < iVar10) {
          iVar10 = iVar8;
        }
        if (iVar10 < 1) {
          iVar10 = 0;
        }
        FUN_14006620a(param_1,puVar7,iVar10);
        if (*param_2 == 0) {
          return param_1;
        }
        FUN_1400020a8();
        return param_1;
      }
      lVar4 = *param_2;
      iVar10 = (int)param_2[1];
    }
  }
LAB_148506225:
  *param_1 = lVar4;
  *param_2 = 0;
  *(int *)(param_1 + 1) = iVar10;
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  return param_1;
}



// FUNCTION 1485062af FUN_1485062af body=57 status=ok
// SIG undefined FUN_1485062af(void)

undefined8 FUN_1485062af(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_145a7b1c0();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485062dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 1485062e8 FUN_1485062e8 body=57 status=ok
// SIG undefined FUN_1485062e8(void)

undefined8 FUN_1485062e8(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_145a7b1c0();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148506315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 148506321 FUN_148506321 body=58 status=ok
// SIG undefined FUN_148506321(void)

undefined8 FUN_148506321(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_145a7b1c0();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,0);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14850635b FUN_14850635b body=61 status=ok
// SIG undefined FUN_14850635b(void)

ulonglong FUN_14850635b(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  if (param_1 != 0) {
    uVar1 = FUN_145a7b1c0();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      (**(code **)(*plVar2 + 0x20))(plVar2,1);
      goto LAB_148506390;
    }
  }
  uVar3 = 0;
LAB_148506390:
  return uVar3 & 0xffffffff;
}



// FUNCTION 148506398 FUN_148506398 body=13 status=ok
// SIG undefined FUN_148506398(void)

undefined8 FUN_148506398(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_2 != '\0') {
    uVar2 = FUN_14850635b();
    return uVar2;
  }
  if (param_1 != 0) {
    uVar2 = FUN_145a7b1c0();
    plVar1 = (longlong *)FUN_144718840(param_1,uVar2);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,0);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1485063a5 FUN_1485063a5 body=114 status=ok
// SIG undefined FUN_1485063a5(void)

undefined8 * FUN_1485063a5(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    uVar1 = FUN_145a7b1c0();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3ff00000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 148506417 FUN_148506417 body=75 status=ok
// SIG undefined FUN_148506417(void)

undefined8 * FUN_148506417(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    uVar1 = FUN_145b7126e();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_3);
    }
  }
  return param_1;
}



// FUNCTION 148506462 FUN_148506462 body=78 status=ok
// SIG undefined FUN_148506462(void)

undefined8 FUN_148506462(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_145b7126e();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485064a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,param_2,param_3,*(code **)(*plVar2 + 0x28));
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 1485064b0 FUN_1485064b0 body=138 status=ok
// SIG undefined FUN_1485064b0(void)

undefined8 *
FUN_1485064b0(undefined8 *param_1,longlong param_2,undefined1 *param_3,char param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 unaff_RBP;
  
  if ((param_2 != 0) && (param_4 == '\0')) {
    uVar2 = FUN_145b71442();
    plVar3 = (longlong *)FUN_144718840(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar3 + 0x38))(plVar3);
      *param_3 = uVar1;
      (**(code **)(*plVar3 + 0x28))
                (plVar3,param_1,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
      return param_1;
    }
  }
  *param_3 = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_14851afda(param_1,1,0);
  *(undefined4 *)*param_1 = 1000;
  return param_1;
}



// FUNCTION 14850653a FUN_14850653a body=83 status=ok
// SIG undefined FUN_14850653a(void)

undefined8 FUN_14850653a(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (param_1 != 0) {
    uVar2 = FUN_145b71442();
    plVar3 = (longlong *)FUN_144718840(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar3 + 0x38))(plVar3);
      *param_2 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00014850657a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3);
      return uVar2;
    }
  }
  *param_2 = 0;
  return 1000;
}



// FUNCTION 14850658d FUN_14850658d body=166 status=ok
// SIG undefined FUN_14850658d(void)

undefined * FUN_14850658d(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined *puVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb4d308) {
    FUN_144b3d300(&DAT_14cb4d308);
    if (DAT_14cb4d308 == -1) {
      FUN_1458c1dca(&DAT_14cb4d048);
      atexit((_func_5014 *)&LAB_143b84c27);
      _Init_thread_footer(&DAT_14cb4d308);
    }
  }
  if (param_1 != 0) {
    uVar1 = FUN_145b71442();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485065e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar3 = (undefined *)(**(code **)(*plVar2 + 0x10))(plVar2,param_2,*(code **)(*plVar2 + 0x10))
      ;
      return puVar3;
    }
  }
  return &DAT_14cb4d048;
}



// FUNCTION 148506633 FUN_148506633 body=165 status=ok
// SIG undefined FUN_148506633(void)

undefined8 FUN_148506633(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb4d5d0) {
    FUN_144b3d300(&DAT_14cb4d5d0);
    if (DAT_14cb4d5d0 == -1) {
      FUN_1458c1dca(&DAT_14cb4d310);
      atexit((_func_5014 *)&LAB_143b84c33);
      _Init_thread_footer(&DAT_14cb4d5d0);
    }
  }
  uVar1 = FUN_145b71442();
  plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
  if (plVar2 == (longlong *)0x0) {
    FUN_146f6bfa8(param_1,&DAT_14cb4d310);
  }
  else {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
  }
  return param_1;
}



// FUNCTION 1485066d8 FUN_1485066d8 body=79 status=ok
// SIG undefined FUN_1485066d8(void)

undefined8 FUN_1485066d8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    uVar1 = FUN_145b71442();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_3);
      return param_1;
    }
  }
  FUN_1458c1dca(param_1);
  return param_1;
}



// FUNCTION 148506727 FUN_148506727 body=557 status=ok
// SIG undefined FUN_148506727(void)

void * FUN_148506727(void *param_1,longlong param_2,longlong param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_368 [32];
  undefined1 local_348;
  undefined4 local_340;
  undefined1 local_33c;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined1 local_318;
  undefined4 local_314;
  void *local_310;
  undefined8 uStack_308;
  code *local_300;
  void **local_2f8;
  void *local_2f0;
  uint local_2e8;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (param_2 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    uVar1 = FUN_145b74dd8();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      local_348 = 0;
      FUN_1411b354a(param_1,0,0,0);
      local_2f8 = &local_2f0;
      local_300 = FUN_143b98c60;
      local_2f0 = param_1;
      FUN_1484b2040(uVar1);
      goto LAB_1485067b2;
    }
    uVar1 = FUN_145b74cee();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_368);
    }
    uVar1 = FUN_145b71442();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
  }
  local_348 = 1;
  FUN_1411b354a(param_1,0,0,0);
  FUN_14582ed12(param_1);
  if (plVar2 != (longlong *)0x0) {
    local_340 = 0x10100;
    local_33c = 1;
    local_338 = 0;
    uStack_330 = 0;
    local_328 = 0;
    uStack_320 = 0;
    local_314 = 3;
    local_310 = (void *)0x0;
    uStack_308 = 0;
    local_318 = 1;
    (**(code **)(*plVar2 + 0x40))(plVar2,&local_2f0);
    _Src = local_2f0;
    uStack_308 = CONCAT44(uStack_308._4_4_,local_2e8);
    if (local_2e8 == 0 && uStack_308._4_4_ == 0) {
      uStack_308 = (ulonglong)local_2e8;
    }
    else {
      FUN_144a06ca8(&local_310,local_2e8);
      if (local_2e8 != 0) {
        memcpy(local_310,_Src,(longlong)(int)local_2e8 << 2);
      }
    }
    if (local_2f0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (*(char *)(param_3 + 8) == '\x01') {
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_2f0,param_3);
      FUN_142ab694c(&local_340,&local_2f0,param_1,*(undefined1 *)(param_3 + 8));
      FUN_145838e00(&local_2f0);
    }
    else {
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,param_3);
      FUN_142ab694c(&local_340,uVar1,param_1,0);
    }
    FUN_148496974(&local_340);
  }
LAB_1485067b2:
  if ((local_30 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148506955 FUN_148506955 body=198 status=ok
// SIG undefined FUN_148506955(void)

int FUN_148506955(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar5 = 0;
  if (param_1 != 0) {
    uVar1 = FUN_145b74dd8();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    uVar1 = FUN_145b71442();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    iVar5 = 0;
    if (plVar2 != (longlong *)0x0) {
      local_20 = 0;
      local_28 = 0x3e800000000;
      lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x70) + 0x80);
        if (lVar4 == 0) {
          lVar4 = *(longlong *)(lVar3 + 0x70);
        }
        iVar5 = *(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x78);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148506a2a FUN_148506a2a body=125 status=ok
// SIG undefined FUN_148506a2a(void)

byte FUN_148506a2a(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  bVar1 = 1;
  if (param_1 != 0 && param_2 != 0) {
    uVar2 = FUN_145b71358();
    plVar3 = (longlong *)FUN_144718840(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      if (param_3 != 0) {
        FUN_148506462(param_1,param_3,1);
      }
      bVar1 = (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_4);
      bVar1 = bVar1 ^ 1;
    }
  }
  return bVar1;
}



// FUNCTION 148506aa7 FUN_148506aa7 body=463 status=ok
// SIG undefined FUN_148506aa7(void)

byte FUN_148506aa7(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_638 [32];
  undefined1 local_618;
  undefined1 local_610;
  undefined8 local_600;
  undefined4 local_5f8;
  longlong local_5f0;
  undefined4 local_5e8;
  undefined8 local_5e0;
  undefined1 local_5d8;
  longlong local_5d0;
  undefined8 uStack_5c8;
  undefined1 local_5c0 [704];
  longlong local_300;
  undefined4 local_2f8;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_638;
  bVar1 = 1;
  if (param_1 != 0) {
    uVar2 = FUN_145b71358();
    plVar3 = (longlong *)FUN_144718840(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      local_5e0 = 0x100000001010100;
      local_5d8 = 0;
      local_5d0 = 0;
      uStack_5c8 = 0;
      (**(code **)(*plVar3 + 0x28))(plVar3,&local_300);
      local_5f0 = local_300;
      local_5e8 = local_2f8;
      FUN_146faf0da(&local_5e0);
      if (local_300 != 0) {
        FUN_1400020a8();
      }
      FUN_1458c1dca(&local_300);
      if (param_3 == '\0') {
        local_5f8 = 0;
        local_600 = 0x3e800000000;
        FUN_1485066d8(local_5c0,param_1);
        FUN_146f781a2(&local_300,local_5c0);
        FUN_145838e00(local_5c0);
        local_610 = 0;
        local_618 = 0;
        FUN_146fab232(&local_5e0,param_2,&local_300,1);
      }
      else {
        FUN_148506633(local_5c0,param_1);
        FUN_146f781a2(&local_300,local_5c0);
        FUN_145838e00(local_5c0);
        FUN_146face1a(&local_5e0,param_2,&local_300,0);
      }
      bVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,&local_300,param_4);
      bVar1 = bVar1 ^ 1;
      FUN_145838e00(&local_300);
      if (local_5d0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_638) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar1;
}



// FUNCTION 148506c77 FUN_148506c77 body=700 status=ok
// SIG undefined FUN_148506c77(void)

void FUN_148506c77(longlong *param_1,longlong ****param_2)

{
  longlong ****pppplVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a4 [4];
  code *local_a0;
  wchar_t ****local_98;
  wchar_t ***local_90;
  longlong *local_88;
  code *local_80;
  wchar_t ****local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  longlong *local_60;
  longlong ****local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = (**(code **)(*param_1 + 0x10))();
  FUN_1484b85b6(uVar5,&local_70);
  puVar4 = local_70;
  local_70 = (undefined8 *)0x0;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14aee51a0;
  plVar6[2] = (longlong)puVar4;
  local_80 = FUN_143b98c82;
  local_b8 = 0;
  local_78 = (wchar_t ****)&local_58;
  local_58 = param_2;
  FUN_1484b20f8(uVar5,&local_80,0,0);
  plVar7 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149fab260;
  pppplVar1 = (longlong ****)(plVar7 + 2);
  local_b8 = 0;
  FUN_1411b354a(pppplVar1,0,0,0);
  local_90 = (wchar_t ***)pppplVar1;
  local_88 = plVar7;
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
  local_58 = (longlong ****)&local_90;
  local_a0 = FUN_143b98cbc;
  local_98 = (wchar_t ****)&local_58;
  FUN_1484b2040(uVar5);
  local_b0 = FUN_14001cc68(0x70,0x10);
  local_58 = (longlong ****)local_90;
  local_50 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_88 + 1) = (int)local_88[1] + 1;
    UNLOCK();
  }
  local_68 = puVar4;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_60 = plVar6;
  FUN_1484acf8c(local_b0,&local_68,&local_58);
  local_58 = (longlong ****)0x14af0f772;
  local_50._0_4_ = 0x22;
  FUN_1446e940c(&local_68,&local_58);
  local_58 = (longlong ****)0x14af0f7b8;
  local_50 = (longlong *)CONCAT44(local_50._4_4_,0x16);
  FUN_1446e940c(local_a4,&local_58);
  FUN_140208bae(&local_58,local_a4,&local_68,L"Update Mesh");
  (**(code **)(*param_1 + 0x18))(param_1,&local_b0,&local_58);
  if (local_58 != (longlong ****)0x0) {
    (*(code *)(*local_58)[2])();
  }
  plVar7 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_88 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if (local_70 != (undefined8 *)0x0) {
    (**(code **)*local_70)(local_70,1);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148506f34 FUN_148506f34 body=478 status=ok
// SIG undefined FUN_148506f34(void)

byte FUN_148506f34(longlong param_1,undefined8 param_2,char param_3,undefined8 *param_4,
                  longlong param_5)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_358 [32];
  longlong local_338;
  undefined4 local_330;
  longlong local_328;
  undefined4 local_320;
  undefined1 local_318;
  undefined8 local_317;
  longlong local_308;
  undefined8 uStack_300;
  undefined1 local_2f8;
  char local_2f7;
  undefined1 local_2f6;
  undefined1 local_2f5;
  undefined1 local_2f4;
  undefined1 local_2f3;
  undefined1 local_2f2;
  undefined1 local_2f1;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if (param_5 != 0) {
    FUN_148506462(param_1,param_5,1);
  }
  bVar1 = 1;
  if (param_1 != 0) {
    uVar2 = FUN_145b74dd8();
    lVar3 = FUN_144718840(param_1,uVar2);
    if (lVar3 == 0) {
      uVar2 = FUN_145b74c04();
      plVar4 = (longlong *)FUN_144718840(param_1,uVar2);
      if (plVar4 == (longlong *)0x0) {
        uVar2 = FUN_145b71358();
        plVar4 = (longlong *)FUN_144718840(param_1,uVar2);
        if (plVar4 != (longlong *)0x0) {
          FUN_1458c1dca(&local_2f8);
          local_317 = *param_4;
          local_318 = 0;
          local_308 = 0;
          uStack_300 = 0;
          (**(code **)(*plVar4 + 0x28))(plVar4,&local_338);
          local_328 = local_338;
          local_320 = local_330;
          FUN_146faf0da(&local_318);
          if (local_338 != 0) {
            FUN_1400020a8();
          }
          if (param_3 == '\0') {
            FUN_146faf20a(&local_318,param_2,&local_2f8);
          }
          else {
            FUN_146face1a(&local_318,param_2,&local_2f8,0);
          }
          local_338 = 0x3e800000000;
          bVar1 = (**(code **)(*plVar4 + 0x18))(plVar4,&local_2f8);
          bVar1 = bVar1 ^ 1;
          if (local_308 != 0) {
            FUN_1400020a8();
          }
          FUN_145838e00(&local_2f8);
        }
        goto LAB_148506ff1;
      }
      local_2f6 = *(undefined1 *)param_4;
      local_2f8 = *(undefined1 *)((longlong)param_4 + 1);
      local_2f5 = *(undefined1 *)((longlong)param_4 + 2);
      local_2f4 = *(undefined1 *)((longlong)param_4 + 3);
      local_2f3 = *(undefined1 *)((longlong)param_4 + 4);
      local_2f2 = *(undefined1 *)((longlong)param_4 + 5);
      local_2f1 = *(undefined1 *)((longlong)param_4 + 6);
      local_2f7 = param_3;
      (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
    }
    else {
      FUN_148506c77(lVar3,param_2);
    }
    bVar1 = 0;
  }
LAB_148506ff1:
  if ((local_38 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148507113 FUN_148507113 body=507 status=ok
// SIG undefined FUN_148507113(void)

uint FUN_148507113(longlong param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_358 [32];
  ulonglong local_338;
  undefined1 local_330;
  longlong local_328;
  undefined4 local_320;
  longlong local_318;
  undefined4 local_310;
  undefined8 local_308;
  uint local_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8 [88];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_358;
  uVar3 = 1;
  if (param_1 != 0) {
    uVar4 = FUN_145b74dd8();
    lVar5 = FUN_144718840(param_1,uVar4);
    if (lVar5 == 0) {
      uVar4 = FUN_145b74c04();
      plVar6 = (longlong *)FUN_144718840(param_1,uVar4);
      if (plVar6 == (longlong *)0x0) {
        uVar4 = FUN_145b71358();
        plVar6 = (longlong *)FUN_144718840(param_1,uVar4);
        if (plVar6 != (longlong *)0x0) {
          local_300 = 0;
          local_308 = 0x3e800000000;
          FUN_1485066d8(local_2e8,param_1,&local_308);
          local_308 = 0x100000001010100;
          local_300 = local_300 & 0xffffff00;
          local_2f8 = 0;
          uStack_2f0 = 0;
          (**(code **)(*plVar6 + 0x28))(plVar6,&local_328);
          local_318 = local_328;
          local_310 = local_320;
          FUN_146faf0da(&local_308);
          if (local_328 != 0) {
            FUN_1400020a8();
          }
          cVar1 = FUN_146faf17e(param_2,local_2e8,0,1);
          if (cVar1 == '\0') {
            FUN_146face1a(&local_308,param_2,local_2e8,0);
          }
          else {
            local_330 = 1;
            local_338 = local_338 & 0xffffffffffffff00;
            FUN_146fab584(&local_308,param_2,local_2e8,0);
          }
          local_328 = 0x3e800000000;
          bVar2 = (**(code **)(*plVar6 + 0x18))(plVar6,local_2e8);
          if (local_2f8 != 0) {
            FUN_1400020a8();
          }
          uVar3 = (uint)(bVar2 ^ 1);
          FUN_145838e00(local_2e8);
        }
      }
      else {
        local_2e8[0] = 0x10000000000;
        (**(code **)(*plVar6 + 0x10))(plVar6,param_2);
        uVar3 = 0;
      }
    }
    else {
      local_2e8[0] = 0x1000000010101;
      local_338 = 0;
      uVar3 = FUN_148506f34(param_1,param_2,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14850730f FUN_14850730f body=57 status=ok
// SIG undefined FUN_14850730f(void)

undefined8 FUN_14850730f(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_145b74dd8();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014850733c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 148507348 FUN_148507348 body=180 status=ok
// SIG undefined FUN_148507348(void)

undefined1 FUN_148507348(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_48;
  longlong **local_40;
  code *local_38;
  undefined1 **local_30;
  longlong *local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    uVar2 = FUN_145b74dd8();
    plVar3 = (longlong *)FUN_144718840(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
      if (cVar1 != '\0') {
        local_28 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3);
        local_40 = &local_28;
        local_50 = &local_19;
        local_30 = &local_50;
        local_38 = FUN_143b98ce2;
        local_48 = param_2;
        (**(code **)(*local_28 + 0xbd0))(local_28,&local_38,1);
        goto LAB_1485073df;
      }
    }
  }
  local_19 = 0;
LAB_1485073df:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return local_19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485073fd FUN_1485073fd body=257 status=ok
// SIG undefined FUN_1485073fd(void)

undefined8 FUN_1485073fd(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    uVar1 = FUN_145a7b1c0();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 == (longlong *)0x0) {
      return 0;
    }
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (lVar3 != 0) {
      lVar4 = FUN_144a7a726();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        *(undefined1 *)(param_2 + 8) = 1;
        return 1;
      }
    }
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (lVar3 != 0) {
      lVar4 = FUN_1411674f6();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        *(undefined1 *)(param_2 + 8) = 3;
        return 1;
      }
    }
    lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
    if (lVar3 != 0) {
      lVar4 = FUN_140fe7df8();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        *(undefined1 *)(param_2 + 8) = 2;
        lVar3 = *(longlong *)(lVar3 + 0x10);
        if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_14689c22e(lVar3);
        }
        *(longlong *)(param_2 + 0x10) = lVar3;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1485074fe FUN_1485074fe body=57 status=ok
// SIG undefined FUN_1485074fe(void)

undefined8 FUN_1485074fe(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_145b71b92();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014850752b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 148507537 FUN_148507537 body=57 status=ok
// SIG undefined FUN_148507537(void)

undefined8 FUN_148507537(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_145b71b92();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148507564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 148507570 FUN_148507570 body=57 status=ok
// SIG undefined FUN_148507570(void)

undefined8 FUN_148507570(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_145b71e50();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014850759d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 1485075a9 FUN_1485075a9 body=57 status=ok
// SIG undefined FUN_1485075a9(void)

undefined8 FUN_1485075a9(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_145b71d66();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485075d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 1485075e2 FUN_1485075e2 body=136 status=ok
// SIG undefined FUN_1485075e2(void)

byte FUN_1485075e2(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a7a726();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return 1;
    }
    lVar1 = FUN_1411674f6();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return 1;
    }
    lVar1 = FUN_1405babea();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      bVar2 = 1;
      goto LAB_148507654;
    }
  }
  bVar2 = 0;
LAB_148507654:
  return param_2 == 0 & bVar2;
}



// FUNCTION 14850766a FUN_14850766a body=183 status=ok
// SIG undefined FUN_14850766a(void)

ulonglong FUN_14850766a(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  
  if (param_1 == 0) {
    return 0x100000000;
  }
  lVar1 = FUN_144a7a726();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      != lVar1 + 0x30)) {
    lVar1 = FUN_1411674f6();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      pbVar2 = (byte *)(param_1 + 0x900);
      goto LAB_1485076ff;
    }
    lVar1 = FUN_1405babea();
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
      return 0x100000000;
    }
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30) {
      return 0x100000000;
    }
    lVar1 = *(longlong *)(param_1 + 0x628);
  }
  else {
    lVar1 = FUN_148507721(param_1);
  }
  if (lVar1 == 0) {
    return 0x100000000;
  }
  pbVar2 = (byte *)(lVar1 + 0x31);
LAB_1485076ff:
  return (ulonglong)*pbVar2 | 0x100000000;
}



// FUNCTION 148507721 FUN_148507721 body=189 status=ok
// SIG undefined FUN_148507721(void)

longlong FUN_148507721(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = FUN_144a7a726();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar1 = param_1[0xcc];
      if ((DAT_14c950c29 & lVar1 != 0) == 0) {
        if (lVar1 == 0) {
          return 0;
        }
      }
      else {
        FUN_14689c22e(lVar1);
      }
      return *(longlong *)(lVar1 + 0x188);
    }
    lVar1 = FUN_1405babea();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      return param_1[0xc5];
    }
    lVar1 = FUN_1411674f6();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x0001485077d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(*param_1 + 0xc60))(param_1);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1485077de FUN_1485077de body=188 status=ok
// SIG undefined FUN_1485077de(void)

undefined8 FUN_1485077de(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
LAB_14850784f:
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_144a7a726();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) {
      lVar1 = FUN_1411674f6();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) {
        lVar1 = FUN_1405babea();
        if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) goto LAB_14850784f;
        param_1 = *(longlong *)(param_1 + 0x628);
        goto joined_r0x000148507880;
      }
      param_1 = param_1 + 0x948;
    }
    else {
      param_1 = FUN_148507721(param_1);
joined_r0x000148507880:
      if (param_1 == 0) goto LAB_14850784f;
      param_1 = param_1 + 0x38;
    }
    FUN_1401842de(param_2);
    FUN_14058b698(param_2,param_1);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14850789a FUN_14850789a body=142 status=ok
// SIG undefined FUN_14850789a(void)

undefined4 FUN_14850789a(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined7 local_2f;
  undefined1 uStack_28;
  undefined8 uStack_27;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_28 = 0;
  uStack_27 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_2f = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uVar1 = FUN_1485077de();
  if ((char)uVar1 != '\0') {
    FUN_148507929(&local_98,param_2);
  }
  FUN_1400d7d10(&local_98);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148507929 FUN_148507929 body=1333 status=ok
// SIG undefined FUN_148507929(void)

void FUN_148507929(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *_Src;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_348 [32];
  undefined1 local_328;
  longlong *local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  void *local_298;
  int iStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 local_278;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  if ((longlong)(int)param_1[3] != 0) {
    lVar17 = (longlong)(int)param_1[3] * 0x70;
    lVar13 = param_1[2] + 0x48;
    do {
      local_308 = *(undefined8 *)(lVar13 + -8);
      local_318 = *(undefined4 *)(lVar13 + -0x18);
      uStack_314 = *(undefined4 *)(lVar13 + -0x14);
      uStack_310 = *(undefined4 *)(lVar13 + -0x10);
      uStack_30c = *(undefined4 *)(lVar13 + -0xc);
      FUN_144a7484c(lVar13,&local_2f8);
      uVar10 = local_2e8;
      uVar9 = uStack_2f0;
      uVar8 = local_2f8;
      fVar3 = *(float *)(lVar13 + 0x20);
      fVar4 = *(float *)(lVar13 + 0x1c);
      uVar7 = CONCAT44(uStack_2dc,uStack_2e0);
      fVar5 = *(float *)(lVar13 + 0x18);
      iVar6 = (int)param_2[3];
      *(uint *)(param_2 + 3) = iVar6 + 1U;
      if (*(uint *)((longlong)param_2 + 0x1c) < iVar6 + 1U) {
        FUN_1483b9f04(param_2 + 2,iVar6);
      }
      lVar16 = param_2[2];
      lVar11 = (longlong)iVar6 * 0x50;
      *(undefined8 *)(lVar16 + 0x10 + lVar11) = local_308;
      puVar1 = (undefined4 *)(lVar16 + lVar11);
      *puVar1 = local_318;
      puVar1[1] = uStack_314;
      puVar1[2] = uStack_310;
      puVar1[3] = uStack_30c;
      *(undefined8 *)(lVar16 + 0x18 + lVar11) = uVar8;
      *(undefined8 *)(lVar16 + 0x20 + lVar11) = uVar9;
      *(undefined8 *)(lVar16 + 0x28 + lVar11) = uVar10;
      *(undefined8 *)(lVar16 + 0x30 + lVar11) = uVar7;
      *(double *)(lVar16 + 0x38 + lVar11) = (double)fVar5 * 0.5;
      *(double *)(lVar16 + 0x40 + lVar11) = (double)fVar4 * 0.5;
      *(double *)(lVar16 + 0x48 + lVar11) = (double)fVar3 * 0.5;
      lVar13 = lVar13 + 0x70;
      lVar17 = lVar17 + -0x70;
    } while (lVar17 != 0);
  }
  lVar13 = param_1[1];
  if ((longlong)(int)lVar13 != 0) {
    lVar17 = *param_1;
    lVar16 = 0;
    do {
      local_2e8 = *(undefined8 *)(lVar17 + 0x40 + lVar16);
      puVar2 = (undefined8 *)(lVar17 + 0x30 + lVar16);
      local_2f8 = *puVar2;
      uStack_2f0 = puVar2[1];
      fVar3 = *(float *)(lVar17 + 0x48 + lVar16);
      iVar6 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
        FUN_1483b9e7e(param_2,iVar6);
      }
      lVar11 = *param_2;
      lVar14 = (longlong)iVar6 * 0x20;
      *(undefined8 *)(lVar11 + 0x10 + lVar14) = local_2e8;
      puVar1 = (undefined4 *)(lVar11 + lVar14);
      *puVar1 = (undefined4)local_2f8;
      puVar1[1] = local_2f8._4_4_;
      puVar1[2] = (undefined4)uStack_2f0;
      puVar1[3] = uStack_2f0._4_4_;
      *(double *)(lVar11 + 0x18 + lVar14) = (double)fVar3;
      lVar16 = lVar16 + 0x50;
    } while ((longlong)(int)lVar13 * 0x50 != lVar16);
  }
  if ((longlong)(int)param_1[5] != 0) {
    lVar13 = param_1[4];
    lVar17 = (longlong)(int)param_1[5] * 0x68;
    do {
      local_2e8 = DAT_14c8464f0;
      local_2f8 = DAT_14c8464e0;
      uStack_2f0 = DAT_14c8464e8;
      uStack_2d0 = DAT_14c8463b0;
      uStack_2e0 = (undefined4)DAT_14c8463a0;
      uStack_2dc = DAT_14c8463a0._4_4_;
      uStack_2d8 = CONCAT44(DAT_14c8463a8._4_4_,(undefined4)DAT_14c8463a8);
      local_2c8 = 0;
      uStack_2c0 = 0;
      FUN_14850dc65(lVar13,&local_2f8);
      iVar6 = (int)param_2[5];
      *(uint *)(param_2 + 5) = iVar6 + 1U;
      if (*(uint *)((longlong)param_2 + 0x2c) < iVar6 + 1U) {
        FUN_1483b9f98(param_2 + 4,iVar6);
      }
      lVar16 = param_2[4];
      lVar11 = (longlong)iVar6 * 0x40;
      puVar2 = (undefined8 *)(lVar16 + 0x30 + lVar11);
      *puVar2 = local_2c8;
      puVar2[1] = uStack_2c0;
      puVar2 = (undefined8 *)(lVar16 + 0x20 + lVar11);
      *puVar2 = uStack_2d8;
      puVar2[1] = uStack_2d0;
      puVar2 = (undefined8 *)(lVar16 + 0x10 + lVar11);
      *puVar2 = local_2e8;
      puVar2[1] = CONCAT44(uStack_2dc,uStack_2e0);
      puVar1 = (undefined4 *)(lVar16 + lVar11);
      *puVar1 = (undefined4)local_2f8;
      puVar1[1] = local_2f8._4_4_;
      puVar1[2] = (undefined4)uStack_2f0;
      puVar1[3] = uStack_2f0._4_4_;
      lVar13 = lVar13 + 0x68;
      lVar17 = lVar17 + -0x68;
    } while (lVar17 != 0);
  }
  if ((longlong)(int)param_1[7] != 0) {
    lVar13 = param_1[6];
    lVar17 = (longlong)(int)param_1[7] << 8;
    do {
      local_328 = 0;
      FUN_1411b354a(&local_2f8,0,0,0);
      FUN_14850df36(lVar13,&local_2f8);
      iVar6 = (int)param_2[7];
      *(uint *)(param_2 + 7) = iVar6 + 1U;
      if (*(uint *)((longlong)param_2 + 0x3c) < iVar6 + 1U) {
        FUN_1483ba0ee(param_2 + 6,iVar6);
      }
      FUN_146bff712((longlong)iVar6 * 0x220 + param_2[6]);
      FUN_141082778(&local_2f8);
      lVar13 = lVar13 + 0x100;
      lVar17 = lVar17 + -0x100;
    } while (lVar17 != 0);
  }
  if ((longlong)(int)param_1[0xb] != 0) {
    lVar13 = param_1[10];
    local_320 = param_2 + 8;
    lVar17 = (longlong)(int)param_1[0xb] * 0xa0;
    do {
      local_2f8 = 0;
      uStack_2f0 = 0;
      local_2e8 = 0;
      uStack_2e0 = 0;
      uStack_2dc = 0x3ff00000;
      local_2c8 = 0;
      uStack_2c0 = 0;
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      local_2b8 = 0x3ff0000000000000;
      uStack_2b0 = 0x3ff0000000000000;
      local_2a8 = 0x3ff0000000000000;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_284 = 0;
      uStack_280 = 0;
      local_298 = (void *)0x0;
      iStack_290 = 0;
      uStack_28c = 0;
      FUN_14850dd56(lVar13,&local_2f8);
      iVar6 = (int)param_2[9];
      *(uint *)(param_2 + 9) = iVar6 + 1U;
      if (*(uint *)((longlong)param_2 + 0x4c) < iVar6 + 1U) {
        FUN_1483bea4e(local_320,iVar6);
      }
      _Src = local_298;
      lVar16 = *local_320;
      lVar14 = (longlong)iVar6 * 0x90;
      puVar2 = (undefined8 *)(lVar16 + lVar14);
      puVar12 = &local_2f8;
      puVar15 = puVar2;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar15 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar15 = puVar15 + 1;
      }
      *(undefined8 *)(lVar16 + 0x60 + lVar14) = 0;
      lVar11 = (longlong)iStack_290;
      *(int *)(lVar16 + 0x68 + lVar14) = iStack_290;
      if (lVar11 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0x6c) = 0;
      }
      else {
        puVar12 = (undefined8 *)(lVar16 + lVar14 + 0x60);
        FUN_1447c510a(puVar12,iStack_290,0);
        memcpy((void *)*puVar12,_Src,lVar11 << 2);
      }
      puVar2[0xe] = CONCAT44(uStack_284,uStack_288);
      *(undefined4 *)(puVar2 + 0xf) = uStack_280;
      *(undefined4 *)(puVar2 + 0x10) = local_278;
      if (local_298 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar13 = lVar13 + 0xa0;
      lVar17 = lVar17 + -0xa0;
    } while (lVar17 != 0);
  }
  if ((local_d0 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148507e5f FUN_148507e5f body=321 status=ok
// SIG undefined FUN_148507e5f(void)

void FUN_148507e5f(longlong *param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58 [2];
  longlong *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147c49028();
  FUN_1401842de(param_1 + 7);
  FUN_14058b698(param_1 + 7,param_2);
  *(undefined1 *)((longlong)param_1 + 0x31) = param_4;
  (**(code **)(*param_1 + 0x2a0))(param_1);
  if (param_3 != 0) {
    FUN_147d556a2(param_3);
    uVar1 = FUN_144a7a726();
    local_68 = 0;
    FUN_146123bc0(local_58,uVar1,0,0);
    if (local_48 != (longlong *)0x0) {
      do {
        lVar3 = *local_48;
        if (lVar3 == 0) {
LAB_148507f3a:
          lVar3 = 0;
        }
        else {
          lVar2 = FUN_144a7a726();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) goto LAB_148507f3a;
        }
        lVar2 = *(longlong *)(lVar3 + 0x660);
        if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
          FUN_14689c22e(lVar2);
        }
        if ((lVar2 == param_3) && ((*(byte *)(lVar3 + 0x9c) & 8) != 0)) {
          FUN_1406cc378(lVar3);
        }
        FUN_1427b9a5c(local_58);
      } while (local_48 != (longlong *)0x0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_58[0] + 0x30));
    FUN_14282b7b8(param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148507fa1 FUN_148507fa1 body=444 status=ok
// SIG undefined FUN_148507fa1(void)

undefined8 FUN_148507fa1(longlong *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 local_118 [80];
  undefined1 local_c8 [136];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_130 = DAT_14c846510;
  uStack_128 = DAT_14c846518;
  local_120 = DAT_14c846520;
  uVar3 = 0;
  memset(local_118,0,0xc9);
  FUN_14850815e(&local_148,param_1,0);
  cVar1 = FUN_144729dda(&local_148);
  if (param_2 == 0 || cVar1 != '\x01') goto LAB_148508054;
  FUN_148508334(local_118,param_2);
  FUN_148508386(&local_148);
  if (param_1 != (longlong *)0x0) {
    lVar2 = FUN_144a7a726();
    if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      lVar2 = FUN_1411674f6();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        (**(code **)(*param_1 + 0x7a0))(param_1);
        *(char *)(param_1 + 0x120) = (char)param_3;
        uVar3 = 1;
        (**(code **)(*param_1 + 0xc70))(param_1,local_c8,1);
        goto LAB_148508054;
      }
    }
    else {
      lVar2 = param_1[0xcc];
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar2);
      }
      else if (lVar2 == 0) goto LAB_148508052;
      if (*(longlong *)(lVar2 + 0x188) != 0) {
        FUN_148507e5f(*(longlong *)(lVar2 + 0x188),local_c8,lVar2,param_3);
        uVar3 = 1;
        goto LAB_148508054;
      }
    }
  }
LAB_148508052:
  uVar3 = 0;
LAB_148508054:
  FUN_1400d7d10(local_c8);
  FUN_14838fe66(local_118);
  if ((local_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14850815e FUN_14850815e body=446 status=ok
// SIG undefined FUN_14850815e(void)

void FUN_14850815e(longlong param_1,longlong *param_2,char param_3)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14485c47a();
  puVar1 = (undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (param_2 == (longlong *)0x0) goto LAB_148508251;
  lVar3 = FUN_144a7a726();
  if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) {
    lVar3 = FUN_1405babea();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      lVar3 = param_2[0xc5];
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar3);
      }
      local_38 = 0;
      FUN_14485c47a(&local_38,lVar3);
      *puVar1 = local_38;
      goto LAB_148508251;
    }
    lVar3 = FUN_1411674f6();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_148508251;
    uVar4 = (**(code **)(*param_2 + 0xc60))(param_2);
  }
  else {
    lVar3 = param_2[0xcc];
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar3);
    }
    else if (lVar3 == 0) goto LAB_148508251;
    FUN_14485c47a(param_1 + 8,lVar3);
    uVar4 = *(undefined8 *)(lVar3 + 0x188);
  }
  FUN_14485c47a(puVar1,uVar4);
LAB_148508251:
  *(undefined8 *)(param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x28) = 0x3ff0000000000000;
  if ((param_3 != '\0') && (cVar2 = FUN_1485099fa(puVar1), cVar2 == '\0')) {
    lVar3 = FUN_14479d2ce(puVar1);
    FUN_1401842de(param_1 + 0x80);
    FUN_14058b698(param_1 + 0x80,lVar3 + 0x38);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148508334 FUN_148508334 body=82 status=ok
// SIG undefined FUN_148508334(void)

longlong FUN_148508334(longlong param_1,longlong param_2)

{
  FUN_14850e07e();
  FUN_14850e0d6(param_1 + 0x10,param_2 + 0x10);
  FUN_14850e130(param_1 + 0x20,param_2 + 0x20);
  FUN_14850e188(param_1 + 0x30,param_2 + 0x30);
  FUN_14850e1e8(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 148508386 FUN_148508386 body=1751 status=ok
// SIG undefined FUN_148508386(void)

void FUN_148508386(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_1d8 [32];
  undefined **local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  byte local_1a0;
  undefined1 local_19f;
  undefined4 local_198;
  undefined ***local_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_148508c16();
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x40);
    lVar7 = (longlong)*(int *)(param_1 + 0x48) * 0x50;
    do {
      local_1b0 = 0;
      uStack_1ac = 0;
      uStack_1a8 = 0;
      uStack_1a4 = 1;
      local_1a0 = local_1a0 | 1;
      local_19f = 3;
      local_198 = 6;
      local_1b8 = &PTR_FUN_14a1e3c70;
      local_178 = (undefined4)DAT_14c8464f0;
      uStack_174 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      local_188 = DAT_14c8464e0;
      uStack_180 = (undefined4)DAT_14c8464e8;
      uStack_17c = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
      uStack_160 = (undefined4)DAT_14c846508;
      uStack_15c = (undefined4)((ulonglong)DAT_14c846508 >> 0x20);
      fStack_170 = (float)DAT_14c8464f8;
      uStack_16c = DAT_14c8464f8._4_4_;
      uStack_168 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      uStack_158 = 0x3f800000;
      uStack_154 = 0x3f800000;
      local_150 = 0x3f800000;
      local_190 = &local_1b8;
      FUN_148509a6f(lVar8,&local_1b8);
      iVar4 = *(int *)(param_1 + 0x98);
      *(uint *)(param_1 + 0x98) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x9c) < iVar4 + 1U) {
        FUN_140c9d5a2((longlong *)(param_1 + 0x90),iVar4);
      }
      lVar5 = *(longlong *)(param_1 + 0x90);
      lVar6 = (longlong)iVar4 * 0x70;
      *(undefined ***)(lVar5 + lVar6) = &PTR_FUN_14a1dee50;
      *(undefined4 *)(lVar5 + 8 + lVar6) = local_1b0;
      *(ulonglong *)(lVar5 + 0xc + lVar6) = CONCAT44(uStack_1a8,uStack_1ac);
      *(undefined4 *)(lVar5 + 0x14 + lVar6) = uStack_1a4;
      *(byte *)(lVar5 + 0x18 + lVar6) = *(byte *)(lVar5 + 0x18 + lVar6) & 0xfe | local_1a0 & 1;
      *(undefined1 *)(lVar5 + 0x19 + lVar6) = local_19f;
      *(undefined4 *)(lVar5 + 0x20 + lVar6) = 6;
      *(longlong *)(lVar5 + 0x28 + lVar6) = lVar5 + lVar6;
      *(undefined ***)(lVar5 + lVar6) = &PTR_FUN_14a1e3c70;
      puVar1 = (undefined4 *)(lVar5 + 0x30 + lVar6);
      *puVar1 = (undefined4)local_188;
      puVar1[1] = local_188._4_4_;
      puVar1[2] = uStack_180;
      puVar1[3] = uStack_17c;
      puVar10 = (undefined8 *)(lVar5 + 0x40 + lVar6);
      *puVar10 = CONCAT44(uStack_174,local_178);
      puVar10[1] = CONCAT44(uStack_16c,fStack_170);
      puVar10 = (undefined8 *)(lVar5 + 0x50 + lVar6);
      *puVar10 = uStack_168;
      puVar10[1] = CONCAT44(uStack_15c,uStack_160);
      puVar10 = (undefined8 *)(lVar5 + 0x5c + lVar6);
      *puVar10 = CONCAT44(uStack_158,uStack_15c);
      puVar10[1] = CONCAT44(local_150,uStack_154);
      lVar8 = lVar8 + 0x50;
      lVar7 = lVar7 + -0x50;
    } while (lVar7 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x30);
    puVar9 = puVar10 + (longlong)*(int *)(param_1 + 0x38) * 4;
    do {
      local_1b0 = 0;
      uStack_1ac = 0;
      uStack_1a8 = 0;
      uStack_1a4 = 0;
      local_1a0 = local_1a0 | 1;
      local_19f = 3;
      local_198 = 6;
      local_1b8 = &PTR_FUN_14a418310;
      local_188 = *puVar10;
      local_178 = (undefined4)puVar10[2];
      uStack_174 = (undefined4)((ulonglong)puVar10[2] >> 0x20);
      uStack_180 = (undefined4)puVar10[1];
      uStack_17c = (undefined4)((ulonglong)puVar10[1] >> 0x20);
      fStack_170 = (float)(double)puVar10[3];
      iVar4 = *(int *)(param_1 + 0x88);
      *(uint *)(param_1 + 0x88) = iVar4 + 1U;
      local_190 = &local_1b8;
      if (*(uint *)(param_1 + 0x8c) < iVar4 + 1U) {
        FUN_140e25fd0(fStack_170,iVar4);
      }
      lVar8 = *(longlong *)(param_1 + 0x80);
      lVar7 = (longlong)iVar4 * 0x50;
      *(undefined ***)(lVar8 + lVar7) = &PTR_FUN_14a1dee50;
      *(undefined4 *)(lVar8 + 8 + lVar7) = local_1b0;
      *(ulonglong *)(lVar8 + 0xc + lVar7) = CONCAT44(uStack_1a8,uStack_1ac);
      *(undefined4 *)(lVar8 + 0x14 + lVar7) = uStack_1a4;
      *(byte *)(lVar8 + 0x18 + lVar7) = *(byte *)(lVar8 + 0x18 + lVar7) & 0xfe | local_1a0 & 1;
      *(undefined1 *)(lVar8 + 0x19 + lVar7) = local_19f;
      *(undefined4 *)(lVar8 + 0x20 + lVar7) = 6;
      *(longlong *)(lVar8 + 0x28 + lVar7) = lVar8 + lVar7;
      *(undefined ***)(lVar8 + lVar7) = &PTR_FUN_14a418310;
      puVar1 = (undefined4 *)(lVar8 + 0x30 + lVar7);
      *puVar1 = (undefined4)local_188;
      puVar1[1] = local_188._4_4_;
      puVar1[2] = uStack_180;
      puVar1[3] = uStack_17c;
      puVar2 = (undefined8 *)(lVar8 + 0x3c + lVar7);
      *puVar2 = CONCAT44(local_178,uStack_17c);
      puVar2[1] = CONCAT44(fStack_170,uStack_174);
      puVar10 = puVar10 + 4;
    } while (puVar10 != puVar9);
  }
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x50);
    lVar7 = (longlong)*(int *)(param_1 + 0x58) << 6;
    do {
      local_1b0 = 0;
      uStack_1ac = 0;
      uStack_1a8 = 0;
      uStack_1a4 = 2;
      local_1a0 = local_1a0 | 1;
      local_19f = 3;
      local_198 = 6;
      local_1b8 = &PTR_FUN_14a1dee70;
      local_178 = (undefined4)DAT_14c8464f0;
      uStack_174 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      local_188 = DAT_14c8464e0;
      uStack_180 = (undefined4)DAT_14c8464e8;
      uStack_17c = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
      uStack_160 = (undefined4)DAT_14c846508;
      uStack_15c = (undefined4)((ulonglong)DAT_14c846508 >> 0x20);
      fStack_170 = (float)DAT_14c8464f8;
      uStack_16c = DAT_14c8464f8._4_4_;
      uStack_168 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      uStack_158 = 0x3f800000;
      uStack_154 = 0x3f800000;
      local_190 = &local_1b8;
      FUN_148509b2c(lVar8,&local_1b8);
      iVar4 = *(int *)(param_1 + 0xa8);
      *(uint *)(param_1 + 0xa8) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0xac) < iVar4 + 1U) {
        FUN_1407e1e9e((longlong *)(param_1 + 0xa0),iVar4);
      }
      lVar5 = *(longlong *)(param_1 + 0xa0);
      lVar6 = (longlong)iVar4 * 0x68;
      *(undefined ***)(lVar5 + lVar6) = &PTR_FUN_14a1dee50;
      *(undefined4 *)(lVar5 + 8 + lVar6) = local_1b0;
      *(ulonglong *)(lVar5 + 0xc + lVar6) = CONCAT44(uStack_1a8,uStack_1ac);
      *(undefined4 *)(lVar5 + 0x14 + lVar6) = uStack_1a4;
      *(byte *)(lVar5 + 0x18 + lVar6) = *(byte *)(lVar5 + 0x18 + lVar6) & 0xfe | local_1a0 & 1;
      *(undefined1 *)(lVar5 + 0x19 + lVar6) = local_19f;
      *(undefined4 *)(lVar5 + 0x20 + lVar6) = 6;
      *(longlong *)(lVar5 + 0x28 + lVar6) = lVar5 + lVar6;
      *(undefined ***)(lVar5 + lVar6) = &PTR_FUN_14a1dee70;
      puVar1 = (undefined4 *)(lVar5 + 0x30 + lVar6);
      *puVar1 = (undefined4)local_188;
      puVar1[1] = local_188._4_4_;
      puVar1[2] = uStack_180;
      puVar1[3] = uStack_17c;
      puVar10 = (undefined8 *)(lVar5 + 0x40 + lVar6);
      *puVar10 = CONCAT44(uStack_174,local_178);
      puVar10[1] = CONCAT44(uStack_16c,fStack_170);
      puVar10 = (undefined8 *)(lVar5 + 0x50 + lVar6);
      *puVar10 = uStack_168;
      puVar10[1] = CONCAT44(uStack_15c,uStack_160);
      *(ulonglong *)(lVar5 + 0x60 + lVar6) = CONCAT44(uStack_154,uStack_158);
      lVar8 = lVar8 + 0x40;
      lVar7 = lVar7 + -0x40;
    } while (lVar7 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x60);
    lVar7 = (longlong)*(int *)(param_1 + 0x68) * 0x220;
    do {
      FUN_143607b78(&local_1b8);
      FUN_148509c31(lVar8,&local_1b8);
      iVar4 = *(int *)(param_1 + 0xb8);
      *(uint *)(param_1 + 0xb8) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0xbc) < iVar4 + 1U) {
        FUN_1474ba6a4((longlong *)(param_1 + 0xb0),iVar4);
      }
      FUN_147c4992e((longlong)iVar4 * 0x100 + *(longlong *)(param_1 + 0xb0),&local_1b8);
      FUN_1400d7e72(&local_1b8);
      lVar8 = lVar8 + 0x220;
      lVar7 = lVar7 + -0x220;
    } while (lVar7 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    lVar8 = (longlong)*(int *)(param_1 + 0x78) * 0x90;
    lVar7 = *(longlong *)(param_1 + 0x70) + 0x60;
    do {
      local_1b0 = 0;
      uStack_1ac = 0;
      uStack_1a8 = 0;
      uStack_1a4 = 5;
      local_1a0 = local_1a0 | 1;
      local_19f = 3;
      local_198 = 6;
      local_1b8 = &PTR_FUN_14a418060;
      local_188 = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      local_178 = 0;
      uStack_174 = 0;
      fStack_170 = 0.0;
      uStack_16c = 0x3ff00000;
      uStack_158 = 0;
      uStack_154 = 0;
      local_150 = 0;
      uStack_14c = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      local_148 = 0x3ff0000000000000;
      uStack_140 = 0x3ff0000000000000;
      local_138 = 0x3ff0000000000000;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_190 = &local_1b8;
      FUN_148509db4(lVar7 + -0x60,lVar7,*(undefined4 *)(lVar7 + 0x20),&local_1b8);
      iVar4 = *(int *)(param_1 + 0xd8);
      *(uint *)(param_1 + 0xd8) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0xdc) < iVar4 + 1U) {
        FUN_147c63fee((longlong *)(param_1 + 0xd0),iVar4);
      }
      lVar5 = *(longlong *)(param_1 + 0xd0);
      lVar6 = (longlong)iVar4 * 0xa0;
      puVar10 = (undefined8 *)(lVar5 + 8 + lVar6);
      *puVar10 = 0;
      puVar10[1] = 0x700000000;
      pbVar3 = (byte *)(lVar5 + 0x18 + lVar6);
      *pbVar3 = *pbVar3 | 1;
      *(undefined1 *)(lVar5 + 0x19 + lVar6) = 3;
      *(undefined4 *)(lVar5 + 0x20 + lVar6) = 6;
      *(longlong *)(lVar5 + 0x28 + lVar6) = lVar5 + lVar6;
      *(undefined ***)(lVar5 + lVar6) = &PTR_FUN_14a418060;
      puVar10 = (undefined8 *)(lVar5 + 0x30 + lVar6);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar1 = (undefined4 *)(lVar5 + 0x40 + lVar6);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0x3ff00000;
      puVar10 = (undefined8 *)(lVar5 + 0x50 + lVar6);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10 = (undefined8 *)(lVar5 + 0x60 + lVar6);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10 = (undefined8 *)(lVar5 + 0x70 + lVar6);
      *puVar10 = 0x3ff0000000000000;
      puVar10[1] = 0x3ff0000000000000;
      puVar10 = (undefined8 *)(lVar5 + 0x80 + lVar6);
      *puVar10 = 0x3ff0000000000000;
      puVar10[1] = 0;
      puVar10 = (undefined8 *)(lVar5 + 0x90 + lVar6);
      *puVar10 = 0;
      puVar10[1] = 0;
      FUN_147c4cfbe(lVar5 + lVar6,&local_1b8);
      FUN_1474b86e2(&local_1b8);
      lVar7 = lVar7 + 0x90;
      lVar8 = lVar8 + -0x90;
    } while (lVar8 != 0);
  }
  if ((local_b0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148508a5e FUN_148508a5e body=438 status=ok
// SIG undefined FUN_148508a5e(void)

undefined8 FUN_148508a5e(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined1 local_108 [80];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = DAT_14c846510;
  uStack_118 = DAT_14c846518;
  local_110 = DAT_14c846520;
  uVar4 = 0;
  memset(local_108,0,0xc9);
  FUN_14850815e(&local_138,param_1,1);
  cVar1 = FUN_144729dda(&local_138);
  if (cVar1 == '\0') goto LAB_148508b0f;
  FUN_148394612(local_108,param_2);
  FUN_148508c16(&local_138);
  FUN_148508386(&local_138);
  if (param_1 != (longlong *)0x0) {
    lVar3 = FUN_144a7a726();
    if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) {
      lVar3 = FUN_1411674f6();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        (**(code **)(*param_1 + 0x7a0))(param_1);
        uVar4 = 1;
        (**(code **)(*param_1 + 0xc70))(param_1,local_b8,1);
        goto LAB_148508b0f;
      }
    }
    else {
      uVar2 = FUN_14850766a(param_1);
      lVar3 = param_1[0xcc];
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar3);
      }
      else if (lVar3 == 0) goto LAB_148508b0d;
      if (*(longlong *)(lVar3 + 0x188) != 0) {
        FUN_148507e5f(*(longlong *)(lVar3 + 0x188),local_b8,lVar3,uVar2);
        uVar4 = 1;
        goto LAB_148508b0f;
      }
    }
  }
LAB_148508b0d:
  uVar4 = 0;
LAB_148508b0f:
  FUN_1400d7d10(local_b8);
  FUN_14838fe66(local_108);
  if ((local_38 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 148508c16 FUN_148508c16 body=135 status=ok
// SIG undefined FUN_148508c16(void)

void FUN_148508c16(longlong param_1)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined7 local_2f;
  undefined1 uStack_28;
  undefined8 uStack_27;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_28 = 0;
  uStack_27 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_2f = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_1401842de(param_1 + 0x80);
  FUN_14058b698(param_1 + 0x80,&local_98);
  FUN_1400d7d10(&local_98);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148508c9e FUN_148508c9e body=221 status=ok
// SIG undefined FUN_148508c9e(void)

ulonglong FUN_148508c9e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined1 local_108 [80];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = DAT_14c846510;
  uStack_118 = DAT_14c846518;
  local_110 = DAT_14c846520;
  memset(local_108,0,0xc9);
  FUN_14850815e(&local_138,param_1,1);
  bVar1 = FUN_144729dda(&local_138);
  bVar1 = param_2 != 0 & bVar1;
  if (bVar1 == 1) {
    FUN_1483901b2(param_2,local_108,param_3);
  }
  FUN_1400d7d10(local_b8);
  FUN_14838fe66(local_108);
  if ((local_38 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148508d7c FUN_148508d7c body=221 status=ok
// SIG undefined FUN_148508d7c(void)

ulonglong FUN_148508d7c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined1 local_108 [80];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = DAT_14c846510;
  uStack_118 = DAT_14c846518;
  local_110 = DAT_14c846520;
  memset(local_108,0,0xc9);
  FUN_14850815e(&local_138,param_1,1);
  bVar1 = FUN_144729dda(&local_138);
  bVar1 = param_2 != 0 & bVar1;
  if (bVar1 == 1) {
    FUN_148390718(param_2,local_108,param_3);
  }
  FUN_1400d7d10(local_b8);
  FUN_14838fe66(local_108);
  if ((local_38 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148508e5a FUN_148508e5a body=149 status=ok
// SIG undefined FUN_148508e5a(void)

void FUN_148508e5a(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  undefined1 *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_18 = &local_21;
  local_60 = &local_20;
  local_20 = &LAB_143b98d34;
  local_38 = *param_3;
  local_68 = &local_38;
  local_30 = param_3[1];
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = *(undefined8 *)(param_2 + 4);
  FUN_143b84c3f(local_58,&local_58,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148508ef0 FUN_148508ef0 body=921 status=ok
// SIG undefined FUN_148508ef0(void)

void FUN_148508ef0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,
                  undefined1 param_5,undefined1 param_6,longlong *param_7,undefined1 param_8,
                  undefined4 *param_9)

{
  double dVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_3a8 [32];
  code **local_388;
  undefined1 **local_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  longlong *local_360;
  undefined8 *local_358;
  undefined8 *local_350;
  longlong local_348;
  code *local_340;
  longlong **local_338;
  undefined1 local_329;
  undefined1 *local_328;
  undefined1 *local_320;
  undefined1 local_317;
  undefined1 local_316;
  undefined1 local_315;
  undefined4 local_314;
  int local_310;
  int local_30c;
  int local_308;
  undefined1 local_304;
  undefined1 local_303;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2cc;
  undefined4 local_2c4;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined4 local_274;
  undefined8 local_268;
  undefined4 local_260;
  undefined2 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_224;
  undefined4 local_21c;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined2 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  lVar3 = *(longlong *)(param_3 + 0xa0);
  if (*(longlong *)(param_3 + 0xa0) == 0) {
    lVar3 = param_3;
  }
  bVar2 = false;
  if ((longlong)*(int *)(param_3 + 0xa8) != 0) {
    dVar1 = 1.0;
    lVar6 = 0;
    do {
      dVar1 = dVar1 * *(double *)(lVar3 + 0x38 + lVar6) * *(double *)(lVar3 + 0x40 + lVar6) *
                      *(double *)(lVar3 + 0x48 + lVar6);
      lVar6 = lVar6 + 0x50;
    } while ((longlong)*(int *)(param_3 + 0xa8) * 0x50 != lVar6);
    bVar2 = dVar1 < 0.0;
  }
  local_314 = 5;
  local_304 = 0;
  iVar5 = param_4 + 3;
  if (-1 < param_4) {
    iVar5 = param_4;
  }
  local_30c = (iVar5 >> 2) + 1;
  local_303 = param_8;
  local_317 = 1;
  local_316 = param_5;
  local_315 = param_6;
  local_358 = &local_2f8;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2cc = 0xffffffff00000080;
  local_2c4 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_288 = 0;
  local_280 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_27c = 0xffffffff00000080;
  local_274 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0x101;
  local_230 = 0;
  local_228 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_224 = 0xffffffff00000080;
  local_21c = 0;
  local_210 = 0;
  local_208 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1d4 = 0xffffffff00000080;
  local_1cc = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0x101;
  local_188 = 0;
  local_180 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_17c = 0xffffffff00000080;
  local_174 = 0;
  local_168 = 0;
  local_160 = 0;
  local_138 = 0;
  local_130 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_12c = 0xffffffff00000080;
  local_124 = 0;
  local_118 = 0;
  local_110 = 0;
  local_107 = 1;
  local_108 = 1;
  local_e0 = 0;
  local_d8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_d4 = 0xffffffff00000080;
  local_cc = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0x101;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_320 = &local_329;
  local_380 = &local_328;
  local_328 = &LAB_143b99066;
  local_338 = &local_360;
  local_360 = param_7;
  local_350 = &local_300;
  local_388 = &local_340;
  local_340 = FUN_143b98d38;
  local_368 = *(undefined8 *)(param_9 + 4);
  local_378 = *param_9;
  uStack_374 = param_9[1];
  uStack_370 = param_9[2];
  uStack_36c = param_9[3];
  local_348 = param_3;
  local_310 = param_4;
  local_308 = param_4;
  local_300 = param_2;
  FUN_143b84c3f(local_378,&local_378,&local_314);
  if (bVar2) {
    FUN_146c0aee0(param_2,0);
  }
  FUN_146bfdcfe(&local_2f8);
  if (*param_7 != 0) {
    plVar4 = param_7 + 4;
    if ((longlong *)param_7[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_7[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14850928a FUN_14850928a body=1903 status=ok
// SIG undefined FUN_14850928a(void)

bool FUN_14850928a(longlong *param_1,double param_2,longlong param_3,undefined1 *param_4,
                  char param_5,char param_6)

{
  uint *puVar1;
  double dVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  double dVar12;
  undefined **ppuVar13;
  double dVar14;
  undefined1 auStack_158 [36];
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 *local_128;
  undefined8 local_120;
  double local_118;
  double local_110;
  longlong local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint local_f0;
  undefined4 uStack_ec;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined8 uStack_e4;
  undefined8 local_d8;
  undefined8 local_c4;
  uint local_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  uint *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_4 = 0;
  if ((param_1 != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*param_1 + 0x20))(param_1,1), cVar3 != '\0')) {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = (uint *)0x0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_68 = 0;
    cVar3 = (**(code **)(*param_1 + 0x10))(param_1,&local_a8,1);
    if (cVar3 != '\0') {
      lVar10 = *(longlong *)(param_3 + 0xa0);
      if (*(longlong *)(param_3 + 0xa0) == 0) {
        lVar10 = param_3;
      }
      if ((longlong)*(int *)(param_3 + 0xa8) == 0) {
        local_134 = 0;
      }
      else {
        dVar14 = 1.0;
        lVar8 = 0;
        do {
          dVar14 = dVar14 * *(double *)(lVar10 + 0x38 + lVar8) * *(double *)(lVar10 + 0x40 + lVar8)
                            * *(double *)(lVar10 + 0x48 + lVar8);
          lVar8 = lVar8 + 0x50;
        } while ((longlong)*(int *)(param_3 + 0xa8) * 0x50 != lVar8);
        local_134 = (undefined4)CONCAT71((int7)((ulonglong)lVar10 >> 8),dVar14 < 0.0);
      }
      local_b8 = 0;
      uStack_b0 = 0;
      local_128 = param_4;
      if (0 < (int)uStack_a0) {
        lVar10 = 0;
        do {
          dVar14 = (double)*(float *)(local_a8 + 8 + lVar10 * 0xc);
          dVar12 = (double)*(float *)(local_a8 + 4 + lVar10 * 0xc);
          ppuVar13 = (undefined **)(double)*(float *)(local_a8 + lVar10 * 0xc);
          lVar8 = *(longlong *)(param_3 + 0xa0);
          if (*(longlong *)(param_3 + 0xa0) == 0) {
            lVar8 = param_3;
          }
          if ((longlong)*(int *)(param_3 + 0xa8) != 0) {
            lVar9 = (longlong)*(int *)(param_3 + 0xa8) * 0x50;
            do {
              local_50 = dVar14 * *(double *)(lVar8 + 0x48);
              local_58 = dVar12 * *(double *)(lVar8 + 0x40);
              local_60 = (double)ppuVar13 * *(double *)(lVar8 + 0x38);
              FUN_146bed047(&local_120,lVar8,&local_60);
              dVar14 = local_110 + *(double *)(lVar8 + 0x30);
              dVar12 = local_118 + *(double *)(lVar8 + 0x28);
              ppuVar13 = (undefined **)((double)local_120 + *(double *)(lVar8 + 0x20));
              lVar8 = lVar8 + 0x50;
              lVar9 = lVar9 + -0x50;
            } while (lVar9 != 0);
          }
          local_100 = DAT_14c846338;
          local_108 = DAT_14c846330;
          uStack_f4 = DAT_14c846338;
          uStack_fc = (undefined4)DAT_14c846330;
          uStack_f8 = (undefined4)((ulonglong)DAT_14c846330 >> 0x20);
          local_f0 = (uint)DAT_14c84635c;
          uStack_ec = (undefined4)((ulonglong)DAT_14c84635c >> 0x20);
          uStack_e8 = 0;
          uStack_e6 = 0;
          local_120 = ppuVar13;
          local_118 = dVar12;
          local_110 = dVar14;
          uVar4 = FUN_146c02208(param_2,&local_120);
          uVar7 = uStack_b0;
          lVar8 = (longlong)(int)uStack_b0;
          uVar5 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
          if (uStack_b0._4_4_ < uVar5) {
            FUN_1446f48e2(&local_b8,uVar7 & 0xffffffff);
          }
          *(undefined4 *)(local_b8 + lVar8 * 4) = uVar4;
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)uStack_a0);
      }
      if ((longlong)(int)uStack_90 != 0) {
        puVar1 = local_98 + (longlong)(int)uStack_90 * 3;
        puVar11 = local_98;
        do {
          local_bc = puVar11[2];
          local_c4 = *(undefined8 *)puVar11;
          iVar6 = FUN_146c01152(param_2,&local_c4,0);
          if (iVar6 < 0) {
            *local_128 = 1;
            lVar10 = *(longlong *)
                      (*(longlong *)((longlong)param_2 + 0x10) + (ulonglong)(*puVar11 >> 9) * 8);
            uVar7 = (ulonglong)(*puVar11 & 0x1ff);
            dVar14 = *(double *)(lVar10 + uVar7 * 0x18);
            dVar12 = *(double *)(lVar10 + 8 + uVar7 * 0x18);
            dVar2 = *(double *)(lVar10 + 0x10 + uVar7 * 0x18);
            lVar10 = *(longlong *)(param_3 + 0xa0);
            if (*(longlong *)(param_3 + 0xa0) == 0) {
              lVar10 = param_3;
            }
            if ((longlong)*(int *)(param_3 + 0xa8) != 0) {
              lVar8 = (longlong)*(int *)(param_3 + 0xa8) * 0x50;
              do {
                local_50 = dVar2 * *(double *)(lVar10 + 0x48);
                local_58 = dVar12 * *(double *)(lVar10 + 0x40);
                local_60 = dVar14 * *(double *)(lVar10 + 0x38);
                FUN_146bed047(&local_120,lVar10);
                dVar2 = local_110 + *(double *)(lVar10 + 0x30);
                dVar12 = local_118 + *(double *)(lVar10 + 0x28);
                dVar14 = (double)local_120 + *(double *)(lVar10 + 0x20);
                lVar10 = lVar10 + 0x50;
                lVar8 = lVar8 + -0x50;
              } while (lVar8 != 0);
            }
            local_100 = DAT_14c846338;
            local_108 = DAT_14c846330;
            uStack_f4 = DAT_14c846338;
            uStack_fc = (undefined4)DAT_14c846330;
            uStack_f8 = (undefined4)((ulonglong)DAT_14c846330 >> 0x20);
            local_f0 = (uint)DAT_14c84635c;
            uStack_ec = (undefined4)((ulonglong)DAT_14c84635c >> 0x20);
            uStack_e8 = 0;
            uStack_e6 = 0;
            local_120 = (undefined **)dVar14;
            local_118 = dVar12;
            local_110 = dVar2;
            local_12c = FUN_146c02208(param_2,&local_120);
            lVar10 = *(longlong *)
                      (*(longlong *)((longlong)param_2 + 0x10) + (ulonglong)(puVar11[1] >> 9) * 8);
            uVar7 = (ulonglong)(puVar11[1] & 0x1ff);
            dVar14 = *(double *)(lVar10 + uVar7 * 0x18);
            dVar12 = *(double *)(lVar10 + 8 + uVar7 * 0x18);
            dVar2 = *(double *)(lVar10 + 0x10 + uVar7 * 0x18);
            lVar10 = *(longlong *)(param_3 + 0xa0);
            if (*(longlong *)(param_3 + 0xa0) == 0) {
              lVar10 = param_3;
            }
            if ((longlong)*(int *)(param_3 + 0xa8) != 0) {
              lVar8 = (longlong)*(int *)(param_3 + 0xa8) * 0x50;
              do {
                local_50 = dVar2 * *(double *)(lVar10 + 0x48);
                local_58 = dVar12 * *(double *)(lVar10 + 0x40);
                local_60 = dVar14 * *(double *)(lVar10 + 0x38);
                FUN_146bed047(&local_120,lVar10);
                dVar2 = local_110 + *(double *)(lVar10 + 0x30);
                dVar12 = local_118 + *(double *)(lVar10 + 0x28);
                dVar14 = (double)local_120 + *(double *)(lVar10 + 0x20);
                lVar10 = lVar10 + 0x50;
                lVar8 = lVar8 + -0x50;
              } while (lVar8 != 0);
            }
            local_100 = DAT_14c846338;
            local_108 = DAT_14c846330;
            uStack_f4 = DAT_14c846338;
            uStack_fc = (undefined4)DAT_14c846330;
            uStack_f8 = (undefined4)((ulonglong)DAT_14c846330 >> 0x20);
            local_f0 = (uint)DAT_14c84635c;
            uStack_ec = (undefined4)((ulonglong)DAT_14c84635c >> 0x20);
            uStack_e8 = 0;
            uStack_e6 = 0;
            local_120 = (undefined **)dVar14;
            local_118 = dVar12;
            local_110 = dVar2;
            local_130 = FUN_146c02208(param_2,&local_120);
            lVar10 = *(longlong *)
                      (*(longlong *)((longlong)param_2 + 0x10) + (ulonglong)(puVar11[2] >> 9) * 8);
            uVar7 = (ulonglong)(puVar11[2] & 0x1ff);
            dVar14 = *(double *)(lVar10 + uVar7 * 0x18);
            dVar12 = *(double *)(lVar10 + 8 + uVar7 * 0x18);
            dVar2 = *(double *)(lVar10 + 0x10 + uVar7 * 0x18);
            lVar10 = *(longlong *)(param_3 + 0xa0);
            if (*(longlong *)(param_3 + 0xa0) == 0) {
              lVar10 = param_3;
            }
            if ((longlong)*(int *)(param_3 + 0xa8) != 0) {
              lVar8 = (longlong)*(int *)(param_3 + 0xa8) * 0x50;
              do {
                local_50 = dVar2 * *(double *)(lVar10 + 0x48);
                local_58 = dVar12 * *(double *)(lVar10 + 0x40);
                local_60 = dVar14 * *(double *)(lVar10 + 0x38);
                FUN_146bed047(&local_120,lVar10);
                dVar2 = local_110 + *(double *)(lVar10 + 0x30);
                dVar12 = local_118 + *(double *)(lVar10 + 0x28);
                dVar14 = (double)local_120 + *(double *)(lVar10 + 0x20);
                lVar10 = lVar10 + 0x50;
                lVar8 = lVar8 + -0x50;
              } while (lVar8 != 0);
            }
            local_100 = DAT_14c846338;
            local_108 = DAT_14c846330;
            uStack_f4 = DAT_14c846338;
            uStack_fc = (undefined4)DAT_14c846330;
            uStack_f8 = (undefined4)((ulonglong)DAT_14c846330 >> 0x20);
            local_f0 = (uint)DAT_14c84635c;
            uStack_ec = (undefined4)((ulonglong)DAT_14c84635c >> 0x20);
            uStack_e8 = 0;
            uStack_e6 = 0;
            local_120 = (undefined **)dVar14;
            local_118 = dVar12;
            local_110 = dVar2;
            uVar4 = FUN_146c02208(param_2,&local_120);
            local_120 = (undefined **)CONCAT44(local_130,local_12c);
            local_118 = (double)CONCAT44(local_118._4_4_,uVar4);
            FUN_146c01152(param_2,&local_120,0);
          }
          puVar11 = puVar11 + 3;
        } while (puVar11 != puVar1);
      }
      if (param_5 != '\0') {
        local_120 = &PTR_FUN_149f36300;
        local_110 = 9.999999974752427e-07;
        local_d8 = 0;
        local_100 = 0;
        uStack_fc = 0;
        uStack_f8 = 0;
        uStack_f4 = 0;
        local_f0 = local_f0 & 0xffffff00;
        uStack_ec = 0;
        uStack_e8 = 0;
        uStack_e6 = 0;
        uStack_e5 = 0;
        uStack_e4 = 0;
        local_108._0_1_ = 1;
        local_118 = param_2;
        FUN_146c3d996(&local_120);
        local_108 = (ulonglong)local_108._1_7_ << 8;
        FUN_146c3d996(&local_120);
      }
      if ((byte)local_134 == ((byte)local_68 & 1)) {
        FUN_146c0aee0(param_2,0);
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_1418411d2(&local_a8);
  }
  lVar10 = *(longlong *)((longlong)param_2 + 0x208);
  if ((lVar10 != 0) && (0 < *(int *)(lVar10 + 0x38))) {
    if (**(longlong **)(lVar10 + 0x30) != 0) {
      if (param_6 == '\0') {
        FUN_146c39810(**(longlong **)(lVar10 + 0x30),0);
      }
      else {
        FUN_146c39da8(param_2);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0 < *(int *)((longlong)param_2 + 0x170);
}



// FUNCTION 1485099fa FUN_1485099fa body=16 status=ok
// SIG undefined FUN_1485099fa(void)

byte FUN_1485099fa(void)

{
  byte bVar1;
  
  bVar1 = FUN_144729dda();
  return bVar1 ^ 1;
}



// FUNCTION 148509a0a FUN_148509a0a body=39 status=ok
// SIG undefined FUN_148509a0a(void)

void FUN_148509a0a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  param_1[5] = param_2[5];
  return;
}



// FUNCTION 148509a32 FUN_148509a32 body=61 status=ok
// SIG undefined FUN_148509a32(void)

void FUN_148509a32(longlong param_1,longlong param_2)

{
  FUN_148508334(param_1 + 0x30,param_2 + 0x30);
  FUN_1401842de(param_1 + 0x80);
  FUN_14058b698(param_1 + 0x80,param_2 + 0x80);
  return;
}



// FUNCTION 148509a6f FUN_148509a6f body=188 status=ok
// SIG undefined FUN_148509a6f(void)

void FUN_148509a6f(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(float *)(param_2 + 0x60) = (float)(double)param_1[7] + (float)(double)param_1[7];
  *(float *)(param_2 + 100) = (float)(double)param_1[8] + (float)(double)param_1[8];
  *(float *)(param_2 + 0x68) = (float)(double)param_1[9] + (float)(double)param_1[9];
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *(undefined8 *)(param_2 + 0x40) = param_1[2];
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  *(undefined8 *)(param_2 + 0x38) = uVar2;
  local_58 = param_1[3];
  local_50 = param_1[4];
  local_48 = param_1[5];
  local_40 = param_1[6];
  FUN_141706cfc(&local_30);
  *(undefined4 *)(param_2 + 0x48) = local_30;
  *(undefined4 *)(param_2 + 0x4c) = uStack_2c;
  *(undefined4 *)(param_2 + 0x50) = uStack_28;
  *(undefined4 *)(param_2 + 0x54) = uStack_24;
  *(undefined8 *)(param_2 + 0x58) = local_20;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148509b2c FUN_148509b2c body=260 status=ok
// SIG undefined FUN_148509b2c(void)

void FUN_148509b2c(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0x3ff0000000000000;
  local_68 = *param_1;
  uStack_60 = param_1[1];
  local_58 = param_1[2];
  local_98 = DAT_14c8463c8;
  local_a8 = (undefined4)DAT_14c8463b8;
  uStack_a4 = DAT_14c8463b8._4_4_;
  uStack_a0 = (undefined4)DAT_14c8463c0;
  uStack_9c = DAT_14c8463c0._4_4_;
  FUN_146bfb7f2(&local_50,&local_a8,param_1 + 3);
  *(undefined8 *)(param_2 + 0x40) = local_58;
  *(undefined8 *)(param_2 + 0x30) = local_68;
  *(undefined8 *)(param_2 + 0x38) = uStack_60;
  local_a8 = (undefined4)local_50;
  uStack_a4 = local_50._4_4_;
  uStack_a0 = (undefined4)uStack_48;
  uStack_9c = uStack_48._4_4_;
  local_98 = local_40;
  uStack_90 = (undefined4)uStack_38;
  uStack_8c = uStack_38._4_4_;
  FUN_141706cfc(&local_80,&local_a8);
  *(undefined8 *)(param_2 + 0x48) = local_80;
  *(undefined8 *)(param_2 + 0x50) = uStack_78;
  *(undefined8 *)(param_2 + 0x58) = local_70;
  *(float *)(param_2 + 100) = (float)((double)param_1[6] + (double)param_1[6]);
  *(float *)(param_2 + 0x60) = (float)(double)param_1[7];
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148509c31 FUN_148509c31 body=386 status=ok
// SIG undefined FUN_148509c31(void)

void FUN_148509c31(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_2 + 0x30);
  *(undefined4 *)(param_2 + 0x38) = 0;
  if (*(int *)(param_2 + 0x3c) < 0) {
    FUN_1447a8aa0(plVar1,0);
  }
  uVar6 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
  uVar10 = 0;
  if ((uVar6 != 0) &&
     (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
    uVar8 = 1;
    uVar9 = 1;
    if (1 < (int)uVar6) {
      uVar8 = uVar6;
    }
    do {
      uVar10 = uVar8;
      if (uVar8 == uVar9) break;
      uVar5 = uVar9 >> 9;
      uVar7 = uVar9 & 0x1ff;
      uVar10 = uVar9;
      uVar9 = uVar9 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar5] +
                                         (ulonglong)uVar7 * 2) - 1U));
  }
  do {
    if (uVar10 == uVar6) {
      if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      FUN_1479b2c20(param_2);
      return;
    }
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
    local_48 = *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
    puVar2 = (undefined4 *)(lVar4 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
    local_58 = *puVar2;
    uStack_54 = puVar2[1];
    uStack_50 = puVar2[2];
    uStack_4c = puVar2[3];
    iVar3 = *(int *)(param_2 + 0x38);
    *(uint *)(param_2 + 0x38) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0x3c) < iVar3 + 1U) {
      FUN_1403e3958(plVar1,iVar3);
    }
    lVar4 = *plVar1;
    *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = local_48;
    puVar2 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x18);
    *puVar2 = local_58;
    puVar2[1] = uStack_54;
    puVar2[2] = uStack_50;
    puVar2[3] = uStack_4c;
    uVar8 = uVar10 + 1;
    if ((int)(uVar10 + 1) < (int)uVar6) {
      uVar8 = uVar6;
    }
    uVar9 = uVar10;
    do {
      uVar10 = uVar8;
      if (uVar8 - 1 == uVar9) break;
      uVar10 = uVar9 + 1;
      uVar9 = uVar10;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_1 + 0x28) +
                                           (ulonglong)(uVar10 >> 9) * 8) +
                                         (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 148509db4 FUN_148509db4 body=489 status=ok
// SIG undefined FUN_148509db4(void)

void FUN_148509db4(undefined8 *param_1,longlong *param_2,float param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auStack_138 [32];
  float local_118;
  int local_104;
  longlong local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8 [4];
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  longlong local_88 [3];
  int local_6c;
  int local_68;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_6c = (int)param_2[2];
  lVar7 = (longlong)local_6c;
  iVar1 = *(int *)((longlong)param_2 + 0x14);
  uVar2 = *(uint *)(param_2 + 3);
  local_88[0] = 0;
  local_88[1] = 0;
  local_e8[0] = 0;
  local_f8 = param_1;
  local_f0 = param_4;
  local_68 = iVar1;
  local_64 = uVar2;
  FUN_146bfae00(local_88,local_e8,iVar1 * local_6c * uVar2);
  if (0 < lVar7) {
    local_104 = iVar1 * uVar2;
    lVar8 = 0;
    iVar12 = 0;
    lVar13 = 0;
    do {
      if (0 < iVar1) {
        lVar16 = 0;
        lVar11 = lVar8;
        iVar6 = iVar12;
        do {
          if (0 < (int)uVar2) {
            lVar5 = (longlong)iVar6;
            lVar14 = lVar11;
            uVar15 = (ulonglong)uVar2;
            do {
              *(double *)(local_88[0] + lVar5 * 8) = (double)*(float *)(*param_2 + lVar14);
              lVar5 = lVar5 + 1;
              lVar14 = lVar14 + iVar1 * lVar7 * 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          lVar16 = lVar16 + 1;
          iVar6 = iVar6 + uVar2;
          lVar11 = lVar11 + lVar7 * 4;
        } while (lVar16 != iVar1);
      }
      lVar13 = lVar13 + 1;
      iVar12 = iVar12 + local_104;
      lVar8 = lVar8 + 4;
    } while (lVar13 != lVar7);
  }
  puVar9 = local_f8;
  puVar10 = local_e8;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  dVar3 = (double)param_3 * -0.5;
  dVar4 = DAT_14c846518 * dVar3 + (double)local_c8._8_8_;
  local_b8 = DAT_14c846520 * dVar3 + local_b8;
  dStack_b0 = dStack_b0 + 0.0;
  local_c8._8_4_ = SUB84(dVar4,0);
  local_c8._0_8_ = dVar3 * DAT_14c846510 + (double)local_c8._0_8_;
  local_c8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  local_118 = param_3;
  local_100 = lVar7;
  FUN_1479b26c0(local_f0,local_e8,local_88,&local_6c);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148509fa0 FUN_148509fa0 body=45 status=ok
// SIG undefined FUN_148509fa0(void)

longlong FUN_148509fa0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145df10ee(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148509fce FUN_148509fce body=48 status=ok
// SIG undefined FUN_148509fce(void)

longlong FUN_148509fce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145df10ee(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148509ffe FUN_148509ffe body=48 status=ok
// SIG undefined FUN_148509ffe(void)

longlong FUN_148509ffe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145df10ee(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14850a02e FUN_14850a02e body=48 status=ok
// SIG undefined FUN_14850a02e(void)

longlong FUN_14850a02e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145df10ee(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14850a08c FUN_14850a08c body=45 status=ok
// SIG undefined FUN_14850a08c(void)

longlong FUN_14850a08c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145dc9fd0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14850a0c0 FUN_14850a0c0 body=45 status=ok
// SIG undefined FUN_14850a0c0(void)

longlong FUN_14850a0c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145dc9fd0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14850a0f4 FUN_14850a0f4 body=45 status=ok
// SIG undefined FUN_14850a0f4(void)

longlong FUN_14850a0f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145dc9fd0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14850a12a FUN_14850a12a body=45 status=ok
// SIG undefined FUN_14850a12a(void)

longlong FUN_14850a12a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cd3064(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14850a158 FUN_14850a158 body=48 status=ok
// SIG undefined FUN_14850a158(void)

longlong FUN_14850a158(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145cd3064(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14850a188 FUN_14850a188 body=48 status=ok
// SIG undefined FUN_14850a188(void)

longlong FUN_14850a188(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145cd3064(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14850a1b8 FUN_14850a1b8 body=48 status=ok
// SIG undefined FUN_14850a1b8(void)

longlong FUN_14850a1b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145cd3064(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14850a1e8 FUN_14850a1e8 body=45 status=ok
// SIG undefined FUN_14850a1e8(void)

longlong FUN_14850a1e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145a451d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14850a216 FUN_14850a216 body=45 status=ok
// SIG undefined FUN_14850a216(void)

longlong FUN_14850a216(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145a451d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14850a244 FUN_14850a244 body=75 status=ok
// SIG undefined FUN_14850a244(void)

undefined4 FUN_14850a244(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145b75096();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_14850a254;
  }
  param_2 = 0;
LAB_14850a254:
  return CONCAT31((int3)((uint)*(int *)(param_2 + 0x558) >> 8),
                  *(int *)(param_2 + 0x558) != *(int *)(param_1 + 0x120));
}



// FUNCTION 14850a290 FUN_14850a290 body=73 status=ok
// SIG undefined FUN_14850a290(void)

undefined8 * FUN_14850a290(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14af07a90;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14850a2da FUN_14850a2da body=72 status=ok
// SIG undefined FUN_14850a2da(void)

undefined4 FUN_14850a2da(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145b75096();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_14850a2ea;
  }
  param_2 = 0;
LAB_14850a2ea:
  return CONCAT31((int3)((uint)*(int *)(param_2 + 0x558) >> 8),
                  *(int *)(param_2 + 0x558) != *(int *)(param_1 + 0x28));
}



// FUNCTION 14850a322 FUN_14850a322 body=38 status=ok
// SIG undefined FUN_14850a322(void)

undefined8 FUN_14850a322(undefined8 param_1,int param_2)

{
  FUN_14851b03c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14850a348 FUN_14850a348 body=45 status=ok
// SIG undefined FUN_14850a348(void)

longlong FUN_14850a348(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145be4980(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14850a376 FUN_14850a376 body=45 status=ok
// SIG undefined FUN_14850a376(void)

longlong FUN_14850a376(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145be4980(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14850a3a4 FUN_14850a3a4 body=72 status=ok
// SIG undefined FUN_14850a3a4(void)

undefined4 FUN_14850a3a4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459ef150();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_14850a3b4;
  }
  param_2 = 0;
LAB_14850a3b4:
  return CONCAT31((int3)((uint)*(int *)(param_2 + 0x670) >> 8),
                  *(int *)(param_2 + 0x670) != *(int *)(param_1 + 0x10));
}



// FUNCTION 14850a3ec FUN_14850a3ec body=29 status=ok
// SIG undefined FUN_14850a3ec(void)

undefined8 FUN_14850a3ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14850a40a FUN_14850a40a body=72 status=ok
// SIG undefined FUN_14850a40a(void)

undefined4 FUN_14850a40a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459ef150();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_14850a41a;
  }
  param_2 = 0;
LAB_14850a41a:
  return CONCAT31((int3)((uint)*(int *)(param_2 + 0x670) >> 8),
                  *(int *)(param_2 + 0x670) != *(int *)(param_1 + 0x2c));
}



// FUNCTION 14850a452 FUN_14850a452 body=29 status=ok
// SIG undefined FUN_14850a452(void)

undefined8 FUN_14850a452(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14850a470 FUN_14850a470 body=72 status=ok
// SIG undefined FUN_14850a470(void)

undefined4 FUN_14850a470(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459ef150();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_14850a480;
  }
  param_2 = 0;
LAB_14850a480:
  return CONCAT31((int3)((uint)*(int *)(param_2 + 0x670) >> 8),
                  *(int *)(param_2 + 0x670) != *(int *)(param_1 + 0xc));
}



// FUNCTION 14850a4b8 FUN_14850a4b8 body=29 status=ok
// SIG undefined FUN_14850a4b8(void)

undefined8 FUN_14850a4b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14850a4d6 FUN_14850a4d6 body=72 status=ok
// SIG undefined FUN_14850a4d6(void)

undefined4 FUN_14850a4d6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459ef150();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_14850a4e6;
  }
  param_2 = 0;
LAB_14850a4e6:
  return CONCAT31((int3)((uint)*(int *)(param_2 + 0x670) >> 8),
                  *(int *)(param_2 + 0x670) != *(int *)(param_1 + 0x40));
}



// FUNCTION 14850a51e FUN_14850a51e body=29 status=ok
// SIG undefined FUN_14850a51e(void)

undefined8 FUN_14850a51e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14850a576 FUN_14850a576 body=26 status=ok
// SIG undefined FUN_14850a576(void)

undefined8 * FUN_14850a576(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)(param_1 + 0x250);
  puVar3 = param_2;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 14850a5aa FUN_14850a5aa body=45 status=ok
// SIG undefined FUN_14850a5aa(void)

longlong FUN_14850a5aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145c9a0f2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}


